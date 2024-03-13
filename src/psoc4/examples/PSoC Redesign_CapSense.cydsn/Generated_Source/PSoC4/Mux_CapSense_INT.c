/***************************************************************************//**
* \file Mux_CapSense_INT.c
* \version 7.10
*
* \brief
*   This file contains the source code for implementation of the Component's
*   Interrupt Service Routine (ISR).
*
* \see Mux_CapSense v7.10 Datasheet
*
*//*****************************************************************************
* Copyright (2016-2019), Cypress Semiconductor Corporation.
********************************************************************************
* This software is owned by Cypress Semiconductor Corporation (Cypress) and is
* protected by and subject to worldwide patent protection (United States and
* foreign), United States copyright laws and international treaty provisions.
* Cypress hereby grants to licensee a personal, non-exclusive, non-transferable
* license to copy, use, modify, create derivative works of, and compile the
* Cypress Source Code and derivative works for the sole purpose of creating
* custom software in support of licensee product to be used only in conjunction
* with a Cypress integrated circuit as specified in the applicable agreement.
* Any reproduction, modification, translation, compilation, or representation of
* this software except as specified above is prohibited without the express
* written permission of Cypress.
*
* Disclaimer: CYPRESS MAKES NO WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, WITH
* REGARD TO THIS MATERIAL, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
* WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
* Cypress reserves the right to make changes without further notice to the
* materials described herein. Cypress does not assume any liability arising out
* of the application or use of any product or circuit described herein. Cypress
* does not authorize its products for use as critical components in life-support
* systems where a malfunction or failure may reasonably be expected to result in
* significant injury to the user. The inclusion of Cypress' product in a life-
* support systems application implies that the manufacturer assumes all risk of
* such use and in doing so indemnifies Cypress against all charges. Use may be
* limited by and subject to the applicable Cypress software license agreement.
*******************************************************************************/
#include "cytypes.h"
#include "cyfitter.h"
#include "Mux_CapSense_Configuration.h"
#include "Mux_CapSense_Structure.h"
#include "Mux_CapSense_Sensing.h"
#if (Mux_CapSense_ENABLE == Mux_CapSense_CSD_EN)
    #include "Mux_CapSense_SensingCSD_LL.h"
#endif /* (Mux_CapSense_ENABLE == Mux_CapSense_CSD_EN) */
#include "cyapicallbacks.h"

/*******************************************************************************
* Static Function Prototypes
*******************************************************************************/
/**
* \cond SECTION_C_INTERNAL
* \addtogroup group_c_internal
* \{
*/

#if (((Mux_CapSense_ENABLE == Mux_CapSense_CSD_EN) || (Mux_CapSense_ENABLE == Mux_CapSense_CSD_CSX_EN)) && \
     (Mux_CapSense_ENABLE == Mux_CapSense_MULTI_FREQ_SCAN_EN))
    static void Mux_CapSense_SsNextFrequencyScan(void);
#endif /* (((Mux_CapSense_ENABLE == Mux_CapSense_CSD_EN) || (Mux_CapSense_ENABLE == Mux_CapSense_CSD_CSX_EN)) && \
            (Mux_CapSense_ENABLE == Mux_CapSense_MULTI_FREQ_SCAN_EN)) */

#if ((Mux_CapSense_ENABLE == Mux_CapSense_CSD_EN) || (Mux_CapSense_ENABLE == Mux_CapSense_CSD_CSX_EN))
    static void Mux_CapSense_SsCSDPostScan(void);
    static void Mux_CapSense_SsCSDInitNextScan(void);
#endif /* ((Mux_CapSense_ENABLE == Mux_CapSense_CSD_EN) || (Mux_CapSense_ENABLE == Mux_CapSense_CSD_CSX_EN)) */
/** \}
* \endcond */


/**
* \cond SECTION_C_INTERRUPT
* \addtogroup group_c_interrupt
* \{
*/


#if ((Mux_CapSense_ENABLE == Mux_CapSense_CSD_EN) || (Mux_CapSense_ENABLE == Mux_CapSense_CSD_CSX_EN))

#if (Mux_CapSense_ENABLE == Mux_CapSense_CSDV2)
    /* Fourth-generation HW block part */

    /*******************************************************************************
    * Function Name: Mux_CapSense_CSDPostSingleScan
    ****************************************************************************//**
    *
    * \brief
    *  This is an internal ISR function for the single-sensor scanning implementation.
    *
    * \details
    *  This ISR handler is triggered when the user calls the
    *  Mux_CapSense_CSDScanExt() function.
    *
    *  The following tasks are performed for Third-generation HW block:
    *    1. Disable the CSD interrupt.
    *    2. Read the Counter register and update the data structure with raw data.
    *    3. Connect the Vref buffer to the AMUX bus.
    *    4. Update the Scan Counter.
    *    5. Reset the BUSY flag.
    *    6. Enable the CSD interrupt.
    *
    *  The following tasks are performed for Fourth-generation HW block:
    *    1. Check if the raw data is not noisy.
    *    2. Read the Counter register and update the data structure with raw data.
    *    3. Configure and start the scan for the next frequency if the
    *      multi-frequency is enabled.
    *    4. Update the Scan Counter.
    *    5. Reset the BUSY flag.
    *    6. Enable the CSD interrupt.
    *
    *  The ISR handler changes the IMO and initializes scanning for the next frequency
    *  channels when multi-frequency scanning is enabled.
    *
    *  This function has two Macro Callbacks that allow calling the user code
    *  from macros specified in Component's generated code. Refer to the
    *  \ref group_c_macrocallbacks section of the PSoC Creator User Guide
    *  for details.
    *
    *******************************************************************************/
    CY_ISR(Mux_CapSense_CSDPostSingleScan)
    {
        #ifdef Mux_CapSense_ENTRY_CALLBACK
            Mux_CapSense_EntryCallback();
        #endif /* Mux_CapSense_ENTRY_CALLBACK */

        /* Clear pending interrupt */
        CY_SET_REG32(Mux_CapSense_INTR_PTR, Mux_CapSense_INTR_SET_MASK);

        #if (Mux_CapSense_ENABLE == Mux_CapSense_CSD_NOISE_METRIC_EN)
            if ((Mux_CapSense_CSD_NOISE_METRIC_TH < ((CY_GET_REG32(Mux_CapSense_RESULT_VAL1_PTR) &
                                                        Mux_CapSense_RESULT_VAL1_BAD_CONVS_MASK) >>
                                                        Mux_CapSense_RESULT_VAL1_BAD_CONVS_SHIFT)) &&
                                                        (0u < Mux_CapSense_badConversionsNum))
            {
                /* Decrement bad conversions number */
                Mux_CapSense_badConversionsNum--;

                /* Start the re-scan */
                CY_SET_REG32(Mux_CapSense_SEQ_START_PTR, Mux_CapSense_SEQ_START_AZ0_SKIP_MASK |
                                                             Mux_CapSense_SEQ_START_AZ1_SKIP_MASK |
                                                             Mux_CapSense_SEQ_START_START_MASK);
            }
            else
            {
        #endif /* (Mux_CapSense_ENABLE == Mux_CapSense_CSD_NOISE_METRIC_EN) */

            Mux_CapSense_SsCSDPostScan();

            #if (Mux_CapSense_ENABLE == Mux_CapSense_MULTI_FREQ_SCAN_EN)
                if (Mux_CapSense_FREQ_CHANNEL_2 > Mux_CapSense_scanFreqIndex)
                {
                    /* Scan the next channel */
                    Mux_CapSense_SsNextFrequencyScan();
                }
                else
                {
                    /* All channels are scanned. Set IMO to zero channel */
                    Mux_CapSense_scanFreqIndex = Mux_CapSense_FREQ_CHANNEL_0;

                    #if (Mux_CapSense_MFS_IMO == Mux_CapSense_MFS_METHOD)
                        Mux_CapSense_SsChangeImoFreq(Mux_CapSense_FREQ_CHANNEL_0);
                    #else
                        Mux_CapSense_SsChangeClkFreq(Mux_CapSense_FREQ_CHANNEL_0);
                    #endif /* (Mux_CapSense_MFS_IMO == Mux_CapSense_MFS_METHOD) */

                    #if (Mux_CapSense_ENABLE == Mux_CapSense_BLOCK_OFF_AFTER_SCAN_EN)
                        /* Disable Fourth-generation HW block */
                        CY_SET_REG32(Mux_CapSense_CONFIG_PTR, Mux_CapSense_configCsd);
                    #endif /* (Mux_CapSense_ENABLE == Mux_CapSense_BLOCK_OFF_AFTER_SCAN_EN) */

                    /* Update Scan Counter */
                    Mux_CapSense_dsRam.scanCounter++;

                    /* Sensor is totally scanned. Reset BUSY flag */
                    Mux_CapSense_dsRam.status &= ~(Mux_CapSense_SW_STS_BUSY | Mux_CapSense_WDGT_SW_STS_BUSY);
                }
            #else
                {
                    #if (Mux_CapSense_ENABLE == Mux_CapSense_BLOCK_OFF_AFTER_SCAN_EN)
                        /* Disable Fourth-generation HW block */
                        CY_SET_REG32(Mux_CapSense_CONFIG_PTR, Mux_CapSense_configCsd);
                    #endif /* (Mux_CapSense_ENABLE == Mux_CapSense_BLOCK_OFF_AFTER_SCAN_EN) */

                    /* Update Scan Counter */
                    Mux_CapSense_dsRam.scanCounter++;

                    /* Sensor is totally scanned. Reset BUSY flag */
                    Mux_CapSense_dsRam.status &= ~(Mux_CapSense_SW_STS_BUSY | Mux_CapSense_WDGT_SW_STS_BUSY);
                }
            #endif /* (Mux_CapSense_ENABLE == Mux_CapSense_MULTI_FREQ_SCAN_EN) */
    #if (Mux_CapSense_ENABLE == Mux_CapSense_CSD_NOISE_METRIC_EN)
        }
    #endif /* (Mux_CapSense_ENABLE == Mux_CapSense_CSD_NOISE_METRIC_EN) */

        #ifdef Mux_CapSense_EXIT_CALLBACK
            Mux_CapSense_ExitCallback();
        #endif /* Mux_CapSense_EXIT_CALLBACK */
    }


    /*******************************************************************************
    * Function Name: Mux_CapSense_CSDPostMultiScan
    ****************************************************************************//**
    *
    * \brief
    *  This is an internal ISR function for the multiple-sensor scanning
    *  implementation.
    *
    * \details
    *  This ISR handler is triggered when the user calls the
    *  Mux_CapSense_Scan() or Mux_CapSense_ScanAllWidgets() APIs.
    *
    *  The following tasks are performed:
    *    1. Disable the CSD interrupt.
    *    2. Read the Counter register and update the data structure with raw data.
    *    3. Connect the Vref buffer to the AMUX bus.
    *    4. Disable the CSD block (after the widget has been scanned).
    *    5. Update the Scan Counter.
    *    6. Reset the BUSY flag.
    *    7. Enable the CSD interrupt.
    *
    *  The ISR handler initializes scanning for the previous sensor when the
    *  widget has more than one sensor.
    *  The ISR handler initializes scanning for the next widget when the
    *  Mux_CapSense_ScanAllWidgets() APIs are called and the project has
    *  more than one widget.
    *  The ISR handler changes the IMO and initializes scanning for the next
    *  frequency channels when multi-frequency scanning is enabled.
    *
    *  This function has two Macro Callbacks that allow calling the user
    *  code from macros specified in Component's generated code. Refer to the
    *  \ref group_c_macrocallbacks section of the PSoC Creator User Guide
    *  for details.
    *
    *******************************************************************************/
    CY_ISR(Mux_CapSense_CSDPostMultiScan)
    {
        /* Declare and initialize ptr to sensor IO structure to appropriate address */
        Mux_CapSense_FLASH_IO_STRUCT const *curSnsIOPtr = (Mux_CapSense_FLASH_IO_STRUCT const *)
                                                          Mux_CapSense_dsFlash.wdgtArray[Mux_CapSense_widgetIndex].ptr2SnsFlash
                                                          + Mux_CapSense_sensorIndex;

        #ifdef Mux_CapSense_ENTRY_CALLBACK
            Mux_CapSense_EntryCallback();
        #endif /* Mux_CapSense_ENTRY_CALLBACK */

        /* Clear pending interrupt */
        CY_SET_REG32(Mux_CapSense_INTR_PTR, Mux_CapSense_INTR_SET_MASK);

        #if (Mux_CapSense_ENABLE == Mux_CapSense_CSD_NOISE_METRIC_EN)
            if ((Mux_CapSense_CSD_NOISE_METRIC_TH < ((CY_GET_REG32(Mux_CapSense_RESULT_VAL1_PTR) &
                                                      Mux_CapSense_RESULT_VAL1_BAD_CONVS_MASK) >>
                                                      Mux_CapSense_RESULT_VAL1_BAD_CONVS_SHIFT)) &&
                                                      (0u < Mux_CapSense_badConversionsNum))
            {
                /* Decrement bad conversions number */
                Mux_CapSense_badConversionsNum--;

                /* Start the re-scan */
                CY_SET_REG32(Mux_CapSense_SEQ_START_PTR, Mux_CapSense_SEQ_START_AZ0_SKIP_MASK |
                                                             Mux_CapSense_SEQ_START_AZ1_SKIP_MASK |
                                                             Mux_CapSense_SEQ_START_START_MASK);
            }
            else
            {
        #endif /* (Mux_CapSense_ENABLE == Mux_CapSense_CSD_NOISE_METRIC_EN) */

            Mux_CapSense_SsCSDPostScan();

            /* Disable sensor when all frequency channels are scanned */
            #if (Mux_CapSense_ENABLE == Mux_CapSense_MULTI_FREQ_SCAN_EN)
                if (Mux_CapSense_FREQ_CHANNEL_2 == Mux_CapSense_scanFreqIndex)
            #endif /* (Mux_CapSense_ENABLE == Mux_CapSense_MULTI_FREQ_SCAN_EN) */
            {
                /* Disable sensor */
                Mux_CapSense_CSDDisconnectSns(curSnsIOPtr);
            }

            #if (Mux_CapSense_ENABLE == Mux_CapSense_MULTI_FREQ_SCAN_EN)
                if (Mux_CapSense_FREQ_CHANNEL_2 > Mux_CapSense_scanFreqIndex)
                {
                     /* Scan the next channel */
                    Mux_CapSense_SsNextFrequencyScan();
                }
                else
                {
                     /* All channels are scanned. Set IMO to zero channel */
                    Mux_CapSense_scanFreqIndex = Mux_CapSense_FREQ_CHANNEL_0;

                    #if (Mux_CapSense_MFS_IMO == Mux_CapSense_MFS_METHOD)
                        Mux_CapSense_SsChangeImoFreq(Mux_CapSense_FREQ_CHANNEL_0);
                    #else
                        Mux_CapSense_SsChangeClkFreq(Mux_CapSense_FREQ_CHANNEL_0);
                    #endif /* (Mux_CapSense_MFS_IMO == Mux_CapSense_MFS_METHOD) */

                     /* Scan the next sensor */
                    Mux_CapSense_SsCSDInitNextScan();
                }
            #else
                /* Scan the next sensor */
                Mux_CapSense_SsCSDInitNextScan();
            #endif /* (Mux_CapSense_ENABLE == Mux_CapSense_MULTI_FREQ_SCAN_EN) */
        #if (Mux_CapSense_ENABLE == Mux_CapSense_CSD_NOISE_METRIC_EN)
            }
        #endif /* (Mux_CapSense_ENABLE == Mux_CapSense_CSD_NOISE_METRIC_EN) */

        #ifdef Mux_CapSense_EXIT_CALLBACK
            Mux_CapSense_ExitCallback();
        #endif /* Mux_CapSense_EXIT_CALLBACK */
    }


    #if (Mux_CapSense_ENABLE == Mux_CapSense_CSD_GANGED_SNS_EN)
    /*******************************************************************************
    * Function Name: Mux_CapSense_CSDPostMultiScanGanged
    ****************************************************************************//**
    *
    * \brief
    *  This is an internal ISR function for the multiple-sensor scanning
    *  implementation for ganged sensors.
    *
    * \details
    *  This ISR handler is triggered when the user calls the
    *  Mux_CapSense_Scan() API for a ganged sensor or the
    *  Mux_CapSense_ScanAllWidgets() API in the project with ganged sensors.
    *
    *  The following tasks are performed:
    *    1. Disable the CSD interrupt.
    *    2. Read the Counter register and update the data structure with raw data.
    *    3. Connect the Vref buffer to the AMUX bus.
    *    4. Disable the CSD block (after the widget has been scanned).
    *    5. Update the Scan Counter.
    *    6. Reset the BUSY flag.
    *    7. Enable the CSD interrupt.
    *
    *  The ISR handler initializes scanning for the previous sensor when the
    *  widget has more than one sensor.
    *  The ISR handler initializes scanning for the next widget when the
    *  Mux_CapSense_ScanAllWidgets() APIs are called and the project has
    *  more than one widget.
    *  The ISR handler changes the IMO and initializes scanning for the next
    *  frequency channels when multi-frequency scanning is enabled.
    *
    *  This function has two Macro Callbacks that allow calling the user
    *  code from macros specified in Component's generated code. Refer to the
    *  \ref group_c_macrocallbacks section of the PSoC Creator User Guide
    *  for details.
    *
    *******************************************************************************/
    CY_ISR(Mux_CapSense_CSDPostMultiScanGanged)
    {
        #ifdef Mux_CapSense_ENTRY_CALLBACK
            Mux_CapSense_EntryCallback();
        #endif /* Mux_CapSense_ENTRY_CALLBACK */

        /* Clear pending interrupt */
        CY_SET_REG32(Mux_CapSense_INTR_PTR, Mux_CapSense_INTR_SET_MASK);

        #if (Mux_CapSense_ENABLE == Mux_CapSense_CSD_NOISE_METRIC_EN)
            if ((Mux_CapSense_CSD_NOISE_METRIC_TH < ((CY_GET_REG32(Mux_CapSense_RESULT_VAL1_PTR) &
                                                      Mux_CapSense_RESULT_VAL1_BAD_CONVS_MASK) >>
                                                      Mux_CapSense_RESULT_VAL1_BAD_CONVS_SHIFT)) &&
                                                      (0u < Mux_CapSense_badConversionsNum))
            {
                /* Decrement bad conversions number */
                Mux_CapSense_badConversionsNum--;

                /* Start the re-scan */
                CY_SET_REG32(Mux_CapSense_SEQ_START_PTR, Mux_CapSense_SEQ_START_AZ0_SKIP_MASK |
                                                             Mux_CapSense_SEQ_START_AZ1_SKIP_MASK |
                                                             Mux_CapSense_SEQ_START_START_MASK);
            }
            else
            {
        #endif /* (Mux_CapSense_ENABLE == Mux_CapSense_CSD_NOISE_METRIC_EN) */

            Mux_CapSense_SsCSDPostScan();

            #if (Mux_CapSense_ENABLE == Mux_CapSense_MULTI_FREQ_SCAN_EN)
                if (Mux_CapSense_FREQ_CHANNEL_2 == Mux_CapSense_scanFreqIndex)
            #endif /* (Mux_CapSense_ENABLE == Mux_CapSense_MULTI_FREQ_SCAN_EN) */
            {
                Mux_CapSense_SsCSDDisconnectSnsExt((uint32)Mux_CapSense_widgetIndex, (uint32)Mux_CapSense_sensorIndex);
            }

            #if (Mux_CapSense_ENABLE == Mux_CapSense_MULTI_FREQ_SCAN_EN)
                if (Mux_CapSense_FREQ_CHANNEL_2 > Mux_CapSense_scanFreqIndex)
                {
                     /* Scan the next channel */
                    Mux_CapSense_SsNextFrequencyScan();
                }
                else
                {
                    /* All channels are scanned. Set IMO to zero channel */
                    Mux_CapSense_scanFreqIndex = Mux_CapSense_FREQ_CHANNEL_0;

                    #if (Mux_CapSense_MFS_IMO == Mux_CapSense_MFS_METHOD)
                        Mux_CapSense_SsChangeImoFreq(Mux_CapSense_FREQ_CHANNEL_0);
                    #else
                        Mux_CapSense_SsChangeClkFreq(Mux_CapSense_FREQ_CHANNEL_0);
                    #endif /* (Mux_CapSense_MFS_IMO == Mux_CapSense_MFS_METHOD) */

                     /* Scan the next sensor */
                    Mux_CapSense_SsCSDInitNextScan();
                }
            #else
                 /* Scan the next sensor */
                Mux_CapSense_SsCSDInitNextScan();
            #endif /* (Mux_CapSense_ENABLE == Mux_CapSense_MULTI_FREQ_SCAN_EN) */
        #if (Mux_CapSense_ENABLE == Mux_CapSense_CSD_NOISE_METRIC_EN)
            }
        #endif /* (Mux_CapSense_ENABLE == Mux_CapSense_CSD_NOISE_METRIC_EN) */

        #ifdef Mux_CapSense_EXIT_CALLBACK
            Mux_CapSense_ExitCallback();
        #endif /* Mux_CapSense_EXIT_CALLBACK */
    }
    #endif /* (Mux_CapSense_ENABLE == Mux_CapSense_CSD_GANGED_SNS_EN) */

#else

    /* Third-generation HW block part */

    /*******************************************************************************
    * Function Name: Mux_CapSense_CSDPostSingleScan
    ****************************************************************************//**
    *
    * \brief
    *  This is an internal ISR function for the single-sensor scanning implementation.
    *
    * \details
    *  This ISR handler is triggered when the user calls the
    *  Mux_CapSense_CSDScanExt() function.
    *
    *  The following tasks are performed for Third-generation HW block:
    *    1. Disable the CSD interrupt.
    *    2. Read the Counter register and update the data structure with raw data.
    *    3. Connect the Vref buffer to the AMUX bus.
    *    4. Update the Scan Counter.
    *    5. Reset the BUSY flag.
    *    6. Enable the CSD interrupt.
    *
    *  The following tasks are performed for Fourth-generation HW block:
    *    1. Check if the raw data is not noisy.
    *    2. Read the Counter register and update the data structure with raw data.
    *    3. Configure and start the scan for the next frequency if the
    *      multi-frequency is enabled.
    *    4. Update the Scan Counter.
    *    5. Reset the BUSY flag.
    *    6. Enable the CSD interrupt.
    *
    *  The ISR handler changes the IMO and initializes scanning for the next frequency
    *  channels when multi-frequency scanning is enabled.
    *
    *  This function has two Macro Callbacks that allow calling the user code
    *  from macros specified in Component's generated code. Refer to the
    *  \ref group_c_macrocallbacks section of the PSoC Creator User Guide
    *  for details.
    *
    *******************************************************************************/
    CY_ISR(Mux_CapSense_CSDPostSingleScan)
    {
        #ifdef Mux_CapSense_ENTRY_CALLBACK
            Mux_CapSense_EntryCallback();
        #endif /* Mux_CapSense_ENTRY_CALLBACK */

        /* Clear pending interrupt */
        CY_SET_REG32(Mux_CapSense_INTR_PTR, Mux_CapSense_INTR_SET_MASK);

        /* Read Rawdata */
        Mux_CapSense_SsCSDPostScan();

        #if (Mux_CapSense_ENABLE == Mux_CapSense_MULTI_FREQ_SCAN_EN)
            if (Mux_CapSense_FREQ_CHANNEL_2 > Mux_CapSense_scanFreqIndex)
            {
                /* Connect Vref Buffer to AMUX bus. Third-generation HW block is enabled */
                CY_SET_REG32(Mux_CapSense_CONFIG_PTR, Mux_CapSense_configCsd | Mux_CapSense_CTANK_PRECHARGE_CONFIG_CSD_EN);

                Mux_CapSense_SsNextFrequencyScan();
            }
            else
            {
                Mux_CapSense_scanFreqIndex = Mux_CapSense_FREQ_CHANNEL_0;

                #if (Mux_CapSense_MFS_IMO == Mux_CapSense_MFS_METHOD)
                    Mux_CapSense_SsChangeImoFreq(Mux_CapSense_FREQ_CHANNEL_0);
                #else
                    Mux_CapSense_SsChangeClkFreq(Mux_CapSense_FREQ_CHANNEL_0);
                #endif /* (Mux_CapSense_MFS_IMO == Mux_CapSense_MFS_METHOD) */

                #if (Mux_CapSense_ENABLE == Mux_CapSense_BLOCK_OFF_AFTER_SCAN_EN)
                    /* Disable Third-generation HW block. Connect Vref Buffer to AMUX bus */
                    #if ((Mux_CapSense_CSH_PRECHARGE_IO_BUF == Mux_CapSense_CSD_CSH_PRECHARGE_SRC) &&\
                         (Mux_CapSense_ENABLE == Mux_CapSense_CSD_SHIELD_TANK_EN))
                        CY_SET_REG32(Mux_CapSense_CONFIG_PTR, Mux_CapSense_configCsd | Mux_CapSense_CMOD_PRECHARGE_CONFIG);
                    #else
                        CY_SET_REG32(Mux_CapSense_CONFIG_PTR, Mux_CapSense_configCsd | Mux_CapSense_CTANK_PRECHARGE_CONFIG);
                    #endif
                #else
                    /* Connect Vref Buffer to AMUX bus. Third-generation HW block is enabled */
                    CY_SET_REG32(Mux_CapSense_CONFIG_PTR, Mux_CapSense_configCsd | Mux_CapSense_CTANK_PRECHARGE_CONFIG_CSD_EN);
                #endif

                /* Update Scan Counter */
                Mux_CapSense_dsRam.scanCounter++;

                /* Sensor is totally scanned. Reset BUSY flag */
                Mux_CapSense_dsRam.status &= ~(Mux_CapSense_SW_STS_BUSY | Mux_CapSense_WDGT_SW_STS_BUSY);
            }
        #else
            {
                #if (Mux_CapSense_ENABLE == Mux_CapSense_BLOCK_OFF_AFTER_SCAN_EN)
                    /* Disable Third-generation HW block. Connect Vref Buffer to AMUX bus */
                    #if ((Mux_CapSense_CSH_PRECHARGE_IO_BUF == Mux_CapSense_CSD_CSH_PRECHARGE_SRC) &&\
                         (Mux_CapSense_ENABLE == Mux_CapSense_CSD_SHIELD_TANK_EN))
                        CY_SET_REG32(Mux_CapSense_CONFIG_PTR, Mux_CapSense_configCsd | Mux_CapSense_CMOD_PRECHARGE_CONFIG);
                    #else
                        CY_SET_REG32(Mux_CapSense_CONFIG_PTR, Mux_CapSense_configCsd | Mux_CapSense_CTANK_PRECHARGE_CONFIG);
                    #endif
                #else
                    /* Connect Vref Buffer to AMUX bus. Third-generation HW block is enabled */
                    CY_SET_REG32(Mux_CapSense_CONFIG_PTR, Mux_CapSense_configCsd | Mux_CapSense_CTANK_PRECHARGE_CONFIG_CSD_EN);
                #endif

                /* Update Scan Counter */
                Mux_CapSense_dsRam.scanCounter++;

                /* Sensor is totally scanned. Reset BUSY flag */
                Mux_CapSense_dsRam.status &= ~(Mux_CapSense_SW_STS_BUSY | Mux_CapSense_WDGT_SW_STS_BUSY);
            }
        #endif /* (Mux_CapSense_ENABLE == Mux_CapSense_MULTI_FREQ_SCAN_EN) */

        #ifdef Mux_CapSense_EXIT_CALLBACK
            Mux_CapSense_ExitCallback();
        #endif /* Mux_CapSense_EXIT_CALLBACK */
    }


    /*******************************************************************************
    * Function Name: Mux_CapSense_CSDPostMultiScan
    ****************************************************************************//**
    *
    * \brief
    *  This is an internal ISR function for the multiple-sensor scanning
    *  implementation.
    *
    * \details
    *  This ISR handler is triggered when the user calls the
    *  Mux_CapSense_Scan() or Mux_CapSense_ScanAllWidgets() APIs.
    *
    *  The following tasks are performed:
    *    1. Disable the CSD interrupt.
    *    2. Read the Counter register and update the data structure with raw data.
    *    3. Connect the Vref buffer to the AMUX bus.
    *    4. Disable the CSD block (after the widget has been scanned).
    *    5. Update the Scan Counter.
    *    6. Reset the BUSY flag.
    *    7. Enable the CSD interrupt.
    *
    *  The ISR handler initializes scanning for the previous sensor when the
    *  widget has more than one sensor.
    *  The ISR handler initializes scanning for the next widget when the
    *  Mux_CapSense_ScanAllWidgets() APIs are called and the project has
    *  more than one widget.
    *  The ISR handler changes the IMO and initializes scanning for the next
    *  frequency channels when multi-frequency scanning is enabled.
    *
    *  This function has two Macro Callbacks that allow calling the user
    *  code from macros specified in Component's generated code. Refer to the
    *  \ref group_c_macrocallbacks section of the PSoC Creator User Guide
    *  for details.
    *
    *******************************************************************************/
    CY_ISR(Mux_CapSense_CSDPostMultiScan)
    {
        /* Declare and initialize ptr to sensor IO structure to appropriate address        */
        Mux_CapSense_FLASH_IO_STRUCT const *curSnsIOPtr = (Mux_CapSense_FLASH_IO_STRUCT const *)
                                                          Mux_CapSense_dsFlash.wdgtArray[Mux_CapSense_widgetIndex].ptr2SnsFlash
                                                          + Mux_CapSense_sensorIndex;

        #ifdef Mux_CapSense_ENTRY_CALLBACK
            Mux_CapSense_EntryCallback();
        #endif /* Mux_CapSense_ENTRY_CALLBACK */

        /* Clear pending interrupt */
        CY_SET_REG32(Mux_CapSense_INTR_PTR, Mux_CapSense_INTR_SET_MASK);

         /* Read Rawdata */
        Mux_CapSense_SsCSDPostScan();

        /* Connect Vref Buffer to AMUX bus */
        CY_SET_REG32(Mux_CapSense_CONFIG_PTR, Mux_CapSense_configCsd | Mux_CapSense_CTANK_PRECHARGE_CONFIG_CSD_EN);

        #if (Mux_CapSense_ENABLE == Mux_CapSense_MULTI_FREQ_SCAN_EN)
            /* Disable sensor when all frequency channels are scanned */
            if (Mux_CapSense_FREQ_CHANNEL_2 == Mux_CapSense_scanFreqIndex)
            {
                /* Disable sensor */
                Mux_CapSense_CSDDisconnectSns(curSnsIOPtr);
            }
        #else
            /* Disable sensor */
            Mux_CapSense_CSDDisconnectSns(curSnsIOPtr);
        #endif /* (Mux_CapSense_ENABLE == Mux_CapSense_MULTI_FREQ_SCAN_EN) */

        #if (Mux_CapSense_ENABLE == Mux_CapSense_MULTI_FREQ_SCAN_EN)
            if (Mux_CapSense_FREQ_CHANNEL_2 > Mux_CapSense_scanFreqIndex)
            {
                 /* Scan the next channel */
                Mux_CapSense_SsNextFrequencyScan();
            }
            else
            {
                 /* All channels are scanned. Set IMO to zero channel */
                Mux_CapSense_scanFreqIndex = Mux_CapSense_FREQ_CHANNEL_0;

                #if (Mux_CapSense_MFS_IMO == Mux_CapSense_MFS_METHOD)
                    Mux_CapSense_SsChangeImoFreq(Mux_CapSense_FREQ_CHANNEL_0);
                #else
                    Mux_CapSense_SsChangeClkFreq(Mux_CapSense_FREQ_CHANNEL_0);
                #endif /* (Mux_CapSense_MFS_IMO == Mux_CapSense_MFS_METHOD) */

                 /* Scan the next sensor */
                Mux_CapSense_SsCSDInitNextScan();
            }
        #else
            /* Scan the next sensor */
            Mux_CapSense_SsCSDInitNextScan();
        #endif /* (Mux_CapSense_ENABLE == Mux_CapSense_MULTI_FREQ_SCAN_EN) */

        #ifdef Mux_CapSense_EXIT_CALLBACK
            Mux_CapSense_ExitCallback();
        #endif /* Mux_CapSense_EXIT_CALLBACK */
    }


    #if (Mux_CapSense_ENABLE == Mux_CapSense_CSD_GANGED_SNS_EN)
    /*******************************************************************************
    * Function Name: Mux_CapSense_CSDPostMultiScanGanged
    ****************************************************************************//**
    *
    * \brief
    *  This is an internal ISR function for the multiple-sensor scanning
    *  implementation for ganged sensors.
    *
    * \details
    *  This ISR handler is triggered when the user calls the
    *  Mux_CapSense_Scan() API for a ganged sensor or the
    *  Mux_CapSense_ScanAllWidgets() API in the project with ganged sensors.
    *
    *  The following tasks are performed:
    *    1. Disable the CSD interrupt.
    *    2. Read the Counter register and update the data structure with raw data.
    *    3. Connect the Vref buffer to the AMUX bus.
    *    4. Disable the CSD block (after the widget has been scanned).
    *    5. Update the Scan Counter.
    *    6. Reset the BUSY flag.
    *    7. Enable the CSD interrupt.
    *
    *  The ISR handler initializes scanning for the previous sensor when the
    *  widget has more than one sensor.
    *  The ISR handler initializes scanning for the next widget when the
    *  Mux_CapSense_ScanAllWidgets() APIs are called and the project has
    *  more than one widget.
    *  The ISR handler changes the IMO and initializes scanning for the next
    *  frequency channels when multi-frequency scanning is enabled.
    *
    *  This function has two Macro Callbacks that allow calling the user
    *  code from macros specified in Component's generated code. Refer to the
    *  \ref group_c_macrocallbacks section of the PSoC Creator User Guide
    *  for details.
    *
    *******************************************************************************/
    CY_ISR(Mux_CapSense_CSDPostMultiScanGanged)
    {
        #ifdef Mux_CapSense_ENTRY_CALLBACK
            Mux_CapSense_EntryCallback();
        #endif /* Mux_CapSense_ENTRY_CALLBACK */

        /* Clear pending interrupt */
        CY_SET_REG32(Mux_CapSense_INTR_PTR, Mux_CapSense_INTR_SET_MASK);

         /* Read Rawdata */
        Mux_CapSense_SsCSDPostScan();

        /* Connect Vref Buffer to AMUX bus */
        CY_SET_REG32(Mux_CapSense_CONFIG_PTR, Mux_CapSense_configCsd | Mux_CapSense_CTANK_PRECHARGE_CONFIG_CSD_EN);

        #if (Mux_CapSense_ENABLE == Mux_CapSense_MULTI_FREQ_SCAN_EN)
            if (Mux_CapSense_FREQ_CHANNEL_2 == Mux_CapSense_scanFreqIndex)
            {
                Mux_CapSense_SsCSDDisconnectSnsExt((uint32)Mux_CapSense_widgetIndex, (uint32)Mux_CapSense_sensorIndex);
            }
        #else
            Mux_CapSense_SsCSDDisconnectSnsExt((uint32)Mux_CapSense_widgetIndex, (uint32)Mux_CapSense_sensorIndex);
        #endif /* (Mux_CapSense_ENABLE == Mux_CapSense_MULTI_FREQ_SCAN_EN) */

        #if (Mux_CapSense_ENABLE == Mux_CapSense_MULTI_FREQ_SCAN_EN)
            if (Mux_CapSense_FREQ_CHANNEL_2 > Mux_CapSense_scanFreqIndex)
            {
                 /* Scan the next channel */
                Mux_CapSense_SsNextFrequencyScan();
            }
            else
            {
                /* All channels are scanned. Set IMO to zero channel */
                Mux_CapSense_scanFreqIndex = Mux_CapSense_FREQ_CHANNEL_0;

                #if (Mux_CapSense_MFS_IMO == Mux_CapSense_MFS_METHOD)
                    Mux_CapSense_SsChangeImoFreq(Mux_CapSense_FREQ_CHANNEL_0);
                #else
                    Mux_CapSense_SsChangeClkFreq(Mux_CapSense_FREQ_CHANNEL_0);
                #endif /* (Mux_CapSense_MFS_IMO == Mux_CapSense_MFS_METHOD) */

                 /* Scan the next sensor */
                Mux_CapSense_SsCSDInitNextScan();
            }
        #else
             /* Scan the next sensor */
            Mux_CapSense_SsCSDInitNextScan();
        #endif /* (Mux_CapSense_ENABLE == Mux_CapSense_MULTI_FREQ_SCAN_EN) */

        #ifdef Mux_CapSense_EXIT_CALLBACK
            Mux_CapSense_ExitCallback();
        #endif /* Mux_CapSense_EXIT_CALLBACK */
    }
    #endif /* (Mux_CapSense_ENABLE == Mux_CapSense_CSD_GANGED_SNS_EN) */

#endif /* (Mux_CapSense_ENABLE == Mux_CapSense_CSDV2) */

#endif /* ((Mux_CapSense_ENABLE == Mux_CapSense_CSD_EN) || (Mux_CapSense_ENABLE == Mux_CapSense_CSD_CSX_EN)) */

/** \}
 * \endcond */


#if ((Mux_CapSense_ENABLE == Mux_CapSense_CSD_EN) || (Mux_CapSense_ENABLE == Mux_CapSense_CSD_CSX_EN))

/*******************************************************************************
* Function Name: Mux_CapSense_SsCSDPostScan
****************************************************************************//**
*
* \brief
*   This function reads rawdata and releases required HW resources after scan.
*
* \details
*   This function performs following tasks after scan:
*   - Reads SlotResult from Raw Counter;
*   - Inits bad Conversions number;
*   - Disconnects Vrefhi from AMUBUF positive input;
*   - Disconnects AMUBUF output from CSDBUSB with sych PHI2+HSCMP;
*   - Opens HCBV and HCBG switches.
*
*******************************************************************************/
static void Mux_CapSense_SsCSDPostScan(void)
{
    #if (Mux_CapSense_ENABLE == Mux_CapSense_CSDV2)

        uint32 tmpRawData;
        uint32 tmpMaxCount;
        Mux_CapSense_RAM_WD_BASE_STRUCT const *ptrWdgt = (Mux_CapSense_RAM_WD_BASE_STRUCT *)
                                            Mux_CapSense_dsFlash.wdgtArray[Mux_CapSense_widgetIndex].ptr2WdgtRam;

        /* Read SlotResult from Raw Counter */
        tmpRawData = Mux_CapSense_RESULT_VAL1_VALUE_MASK & CY_GET_REG32(Mux_CapSense_COUNTER_PTR);

        tmpMaxCount = ((1uL << ptrWdgt->resolution) - 1uL);
        if(tmpRawData < tmpMaxCount)
        {
            Mux_CapSense_curRamSnsPtr->raw[Mux_CapSense_scanFreqIndex] = LO16(tmpRawData);
        }
        else
        {
            Mux_CapSense_curRamSnsPtr->raw[Mux_CapSense_scanFreqIndex] = LO16(tmpMaxCount);
        }

        #if (Mux_CapSense_ENABLE == Mux_CapSense_CSD_NOISE_METRIC_EN)
            /* Init bad Conversions number */
            Mux_CapSense_badConversionsNum = Mux_CapSense_BAD_CONVERSIONS_NUM;
        #endif /* (Mux_CapSense_ENABLE == Mux_CapSense_CSD_NOISE_METRIC_EN) */

        #if (Mux_CapSense_ENABLE == Mux_CapSense_CSD_SHIELD_EN)
            /* Open HCBV and HCBG switches */
            CY_SET_REG32(Mux_CapSense_SW_SHIELD_SEL_PTR, Mux_CapSense_SW_SHIELD_SEL_SW_HCBV_STATIC_OPEN |
                                                             Mux_CapSense_SW_SHIELD_SEL_SW_HCBG_STATIC_OPEN);
        #endif /* (Mux_CapSense_ENABLE == Mux_CapSense_CSD_SHIELD_EN) */

    #else

        /* Read SlotResult from Raw Counter */
       Mux_CapSense_curRamSnsPtr->raw[Mux_CapSense_scanFreqIndex] = (uint16)CY_GET_REG32(Mux_CapSense_COUNTER_PTR);

    #endif /* (Mux_CapSense_ENABLE == Mux_CapSense_CSDV2) */
}


/*******************************************************************************
* Function Name: Mux_CapSense_SsCSDInitNextScan
****************************************************************************//**
*
* \brief
*   This function initializes the next sensor scan.
*
* \details
*   The function increments the sensor index, updates sense clock for matrix
*   or touchpad widgets only, sets up Compensation IDAC, enables the sensor and
*   scans it. When all the sensors are scanned it continues to set up the next widget
*   until all the widgets are scanned. The CSD block is disabled when all the widgets are
*   scanned.
*
*******************************************************************************/
static void Mux_CapSense_SsCSDInitNextScan(void)
{
    /* Declare and initialize ptr to widget and sensor structures to appropriate address */
    #if (((Mux_CapSense_ENABLE == Mux_CapSense_CSD_IDAC_COMP_EN) || \
          (Mux_CapSense_CSD_MATRIX_WIDGET_EN || Mux_CapSense_CSD_TOUCHPAD_WIDGET_EN)) || \
          (((Mux_CapSense_DISABLE == Mux_CapSense_CSD_COMMON_SNS_CLK_EN) && \
          (Mux_CapSense_ENABLE == Mux_CapSense_CSDV2) && \
          (Mux_CapSense_CSD_MATRIX_WIDGET_EN || Mux_CapSense_CSD_TOUCHPAD_WIDGET_EN))))
        Mux_CapSense_RAM_WD_BASE_STRUCT *ptrWdgt = (Mux_CapSense_RAM_WD_BASE_STRUCT *)
                                                        Mux_CapSense_dsFlash.wdgtArray[Mux_CapSense_widgetIndex].ptr2WdgtRam;
    #endif

    /* Check if all the sensors are scanned in widget */
    if (((uint8)Mux_CapSense_dsFlash.wdgtArray[(Mux_CapSense_widgetIndex)].totalNumSns - 1u) > Mux_CapSense_sensorIndex)
    {
        /* Increment sensor index to configure next sensor in widget */
        Mux_CapSense_sensorIndex++;

        /* Update global pointer to Mux_CapSense_RAM_SNS_STRUCT to current sensor  */
        Mux_CapSense_curRamSnsPtr = (Mux_CapSense_RAM_SNS_STRUCT *)
                                                  Mux_CapSense_dsFlash.wdgtArray[Mux_CapSense_widgetIndex].ptr2SnsRam
                                                  + Mux_CapSense_sensorIndex;

        /* Configure clock divider to row or column */
        #if ((Mux_CapSense_DISABLE == Mux_CapSense_CSD_COMMON_SNS_CLK_EN) && \
             (Mux_CapSense_CSD_MATRIX_WIDGET_EN || Mux_CapSense_CSD_TOUCHPAD_WIDGET_EN))
            Mux_CapSense_SsCSDConfigClock();

            #if (Mux_CapSense_ENABLE == Mux_CapSense_CSDV2)
                 /* Set up scanning resolution */
                Mux_CapSense_SsCSDCalculateScanDuration(ptrWdgt);
            #endif
        #endif

        /* Setup Compensation IDAC for next sensor in widget */
        #if ((Mux_CapSense_ENABLE == Mux_CapSense_CSD_IDAC_COMP_EN) || \
             (Mux_CapSense_CSD_MATRIX_WIDGET_EN || Mux_CapSense_CSD_TOUCHPAD_WIDGET_EN))
            Mux_CapSense_SsCSDSetUpIdacs(ptrWdgt);
        #endif /* ((Mux_CapSense_ENABLE == Mux_CapSense_CSD_IDAC_COMP_EN) || \
                   (Mux_CapSense_CSD_MATRIX_WIDGET_EN || Mux_CapSense_CSD_TOUCHPAD_WIDGET_EN)) */

        /* Enable sensor */
        Mux_CapSense_SsCSDConnectSensorExt((uint32)Mux_CapSense_widgetIndex, (uint32)Mux_CapSense_sensorIndex);

        /* Proceed scanning */
        Mux_CapSense_SsCSDStartSample();
    }
    /* Call scan next widget API if requested, if not, complete the scan  */
    else
    {
        Mux_CapSense_sensorIndex = 0u;

        /* Current widget is totally scanned. Reset WIDGET BUSY flag */
        Mux_CapSense_dsRam.status &= ~Mux_CapSense_WDGT_SW_STS_BUSY;

        /* Check if all the widgets have been scanned */
        if (Mux_CapSense_ENABLE == Mux_CapSense_requestScanAllWidget)
        {
            /* Configure and begin scanning next widget */
            Mux_CapSense_SsPostAllWidgetsScan();
        }
        else
        {
            #if (Mux_CapSense_ENABLE == Mux_CapSense_BLOCK_OFF_AFTER_SCAN_EN)
                #if (Mux_CapSense_ENABLE == Mux_CapSense_CSDV2)
                    /* Disable the CSD block */
                    CY_SET_REG32(Mux_CapSense_CONFIG_PTR, Mux_CapSense_configCsd);
                #else
                    /* Disable the CSD block. Connect Vref Buffer to AMUX bus */
                    #if ((Mux_CapSense_CSH_PRECHARGE_IO_BUF == Mux_CapSense_CSD_CSH_PRECHARGE_SRC) &&\
                         (Mux_CapSense_ENABLE == Mux_CapSense_CSD_SHIELD_TANK_EN))
                        CY_SET_REG32(Mux_CapSense_CONFIG_PTR, Mux_CapSense_configCsd | Mux_CapSense_CMOD_PRECHARGE_CONFIG);
                    #else
                        CY_SET_REG32(Mux_CapSense_CONFIG_PTR, Mux_CapSense_configCsd | Mux_CapSense_CTANK_PRECHARGE_CONFIG);
                    #endif
                #endif
            #endif

            /* All widgets are totally scanned. Reset BUSY flag */
            Mux_CapSense_dsRam.status &= ~Mux_CapSense_SW_STS_BUSY;

            /* Update scan Counter */
            Mux_CapSense_dsRam.scanCounter++;
        }
    }
}

#if (Mux_CapSense_ENABLE == Mux_CapSense_MULTI_FREQ_SCAN_EN)
    /*******************************************************************************
    * Function Name: Mux_CapSense_SsNextFrequencyScan
    ****************************************************************************//**
    *
    * \brief
    *   This function scans the sensor on the next frequency channel.
    *
    * \details
    *   The function increments the frequency channel, changes IMO and initializes
    *   the scanning process of the same sensor.
    *
    *******************************************************************************/
    static void Mux_CapSense_SsNextFrequencyScan(void)
    {
        Mux_CapSense_RAM_WD_BASE_STRUCT const *ptrWdgt = (Mux_CapSense_RAM_WD_BASE_STRUCT *)
                                                        Mux_CapSense_dsFlash.wdgtArray[Mux_CapSense_widgetIndex].ptr2WdgtRam;

        Mux_CapSense_scanFreqIndex++;

        /* Set Immunity */
        #if (Mux_CapSense_MFS_IMO == Mux_CapSense_MFS_METHOD)
            Mux_CapSense_SsChangeImoFreq((uint32)Mux_CapSense_scanFreqIndex);
        #else
            Mux_CapSense_SsChangeClkFreq((uint32)Mux_CapSense_scanFreqIndex);
        #endif /* (Mux_CapSense_MFS_IMO == Mux_CapSense_MFS_METHOD) */

        /* Update IDAC registers */
        Mux_CapSense_SsCSDSetUpIdacs(ptrWdgt);

        /* Proceed scanning */
        Mux_CapSense_SsCSDStartSample();
    }
#endif /* (Mux_CapSense_ENABLE == Mux_CapSense_MULTI_FREQ_SCAN_EN) */

#endif /* ((Mux_CapSense_ENABLE == Mux_CapSense_CSD_EN) || (Mux_CapSense_ENABLE == Mux_CapSense_CSD_CSX_EN)) */


/* [] END OF FILE */
