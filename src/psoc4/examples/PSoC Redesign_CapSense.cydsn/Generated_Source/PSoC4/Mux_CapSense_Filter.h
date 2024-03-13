/***************************************************************************//**
* \file Mux_CapSense_Filter.h
* \version 7.10
*
* \brief
*   This file contains the definitions for all firmware filters
*   implementation.
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

#if !defined(CY_SENSE_Mux_CapSense_FILTER_H)
#define CY_SENSE_Mux_CapSense_FILTER_H

#include "cytypes.h"
#include "CyLib.h"
#include "cyfitter.h"

#include "Mux_CapSense_Structure.h"
#include "Mux_CapSense_Configuration.h"

/***************************************
* Function Prototypes
***************************************/

/*******************************************************************************
* LOW LEVEL API
*******************************************************************************/
/**
* \cond (SECTION_C_LOW_LEVEL || SECTION_I_LOW_LEVEL)
* \addtogroup group_c_low_level
* \{
*/

cystatus Mux_CapSense_UpdateAllBaselines(void);
cystatus Mux_CapSense_UpdateWidgetBaseline(uint32 widgetId);
cystatus Mux_CapSense_UpdateSensorBaseline(uint32 widgetId, uint32 sensorId);

void Mux_CapSense_InitializeAllBaselines(void);
void Mux_CapSense_InitializeWidgetBaseline(uint32 widgetId);
void Mux_CapSense_InitializeSensorBaseline(uint32 widgetId, uint32 sensorId);

#if ((Mux_CapSense_ENABLE == Mux_CapSense_RC_FILTER_EN) || \
     (0u != (Mux_CapSense_CSD_AUTOTUNE & Mux_CapSense_CSD_SS_TH_EN)))
    void Mux_CapSense_InitializeAllFilters(void);
    void Mux_CapSense_InitializeWidgetFilter(uint32 widgetId);
#endif /* ((Mux_CapSense_ENABLE == Mux_CapSense_RC_FILTER_EN) || \
           (0u != (Mux_CapSense_CSD_AUTOTUNE & Mux_CapSense_CSD_SS_TH_EN))) */

/** \}
* \endcond */


/*******************************************************************************
* Function Prototypes - internal functions
*******************************************************************************/
/**
* \cond SECTION_C_INTERNAL
* \addtogroup group_c_internal
* \{
*/

void Mux_CapSense_FtInitialize(void);

#if (0u != (Mux_CapSense_CSD_AUTOTUNE & Mux_CapSense_CSD_SS_TH_EN))
    void Mux_CapSense_RunNoiseEnvelope(uint32 widgetId, uint32 sensorId);
    void Mux_CapSense_InitializeNoiseEnvelope(uint32 widgetId, uint32 sensorId);
#endif /* (0u != (Mux_CapSense_CSD_AUTOTUNE & Mux_CapSense_CSD_SS_TH_EN)) */

#if (Mux_CapSense_REGULAR_RC_IIR_FILTER_EN || Mux_CapSense_PROX_RC_IIR_FILTER_EN)
    void Mux_CapSense_InitializeIIR(uint32 widgetId, uint32 sensorId);
    void Mux_CapSense_RunIIR(uint32 widgetId, uint32 sensorId);
#endif /* (Mux_CapSense_REGULAR_RC_IIR_FILTER_EN || Mux_CapSense_PROX_RC_IIR_FILTER_EN) */

#if (Mux_CapSense_REGULAR_RC_MEDIAN_FILTER_EN || Mux_CapSense_PROX_RC_MEDIAN_FILTER_EN)
    void Mux_CapSense_InitializeMedian(uint32 widgetId, uint32 sensorId);
    void Mux_CapSense_RunMedian(uint32 widgetId, uint32 sensorId);
#endif /* (Mux_CapSense_REGULAR_RC_MEDIAN_FILTER_EN || Mux_CapSense_PROX_RC_MEDIAN_FILTER_EN) */

#if (Mux_CapSense_REGULAR_RC_AVERAGE_FILTER_EN || Mux_CapSense_PROX_RC_AVERAGE_FILTER_EN)
    void Mux_CapSense_InitializeAverage(uint32 widgetId, uint32 sensorId);
    void Mux_CapSense_RunAverage(uint32 widgetId, uint32 sensorId);
#endif /* (Mux_CapSense_REGULAR_RC_AVERAGE_FILTER_EN || Mux_CapSense_PROX_RC_AVERAGE_FILTER_EN) */

void Mux_CapSense_FtInitializeBaseline(Mux_CapSense_RAM_SNS_STRUCT *ptrSensor, uint32 wdType);
uint32 Mux_CapSense_FtUpdateBaseline(
                            Mux_CapSense_RAM_WD_BASE_STRUCT *ptrWidgetRam,
                            Mux_CapSense_RAM_SNS_STRUCT *ptrSensor,
                            uint32 wdType);

#if (Mux_CapSense_POS_MEDIAN_FILTER_EN || Mux_CapSense_REGULAR_RC_MEDIAN_FILTER_EN || Mux_CapSense_PROX_RC_MEDIAN_FILTER_EN)
uint32 Mux_CapSense_FtMedian(uint32 x1, uint32 x2, uint32 x3);
#endif /*Mux_CapSense_POS_MEDIAN_FILTER_EN || Mux_CapSense_REGULAR_RC_MEDIAN_FILTER_EN || Mux_CapSense_PROX_RC_MEDIAN_FILTER_EN*/

uint32 Mux_CapSense_FtIIR1stOrder(uint32 input, uint32 prevOutput, uint32 n, uint32 shift);

#if (Mux_CapSense_POS_JITTER_FILTER_EN)
    uint32 Mux_CapSense_FtJitter(uint32 input, uint32 prevOutput);
#endif /* Mux_CapSense_POS_JITTER_FILTER_EN */

void Mux_CapSense_FtInitializeBaselineChannel(Mux_CapSense_RAM_SNS_STRUCT *ptrSensor, uint32 wdType, uint32 channel);

#if (Mux_CapSense_ENABLE == Mux_CapSense_RC_FILTER_EN)
    void Mux_CapSense_FtRunEnabledFilters(uint32 widgetId, uint32 sensorId);
    void Mux_CapSense_FtRunEnabledFiltersInternal(Mux_CapSense_PTR_FILTER_VARIANT ptrFilterHistObj,
                                                      Mux_CapSense_RAM_SNS_STRUCT *ptrSensorObj, uint32 wdType);
#endif /* (Mux_CapSense_ENABLE == Mux_CapSense_RC_FILTER_EN) */


#if (Mux_CapSense_REGULAR_RC_IIR_FILTER_EN || Mux_CapSense_PROX_RC_IIR_FILTER_EN)
    void Mux_CapSense_InitializeIIRInternal(Mux_CapSense_PTR_FILTER_VARIANT ptrFilterHistObj,
                                                  Mux_CapSense_RAM_SNS_STRUCT *ptrSensorObj, uint32 wdType);
    void Mux_CapSense_RunIIRInternal(Mux_CapSense_PTR_FILTER_VARIANT ptrFilterHistObj,
                                           Mux_CapSense_RAM_SNS_STRUCT *ptrSensorObj, uint32 wdType);
#endif /* (Mux_CapSense_REGULAR_RC_IIR_FILTER_EN || Mux_CapSense_PROX_RC_IIR_FILTER_EN) */

#if (Mux_CapSense_REGULAR_RC_MEDIAN_FILTER_EN || Mux_CapSense_PROX_RC_MEDIAN_FILTER_EN)
    void Mux_CapSense_InitializeMedianInternal(Mux_CapSense_PTR_FILTER_VARIANT ptrFilterHistObj,
                                                     Mux_CapSense_RAM_SNS_STRUCT *ptrSensorObj, uint32 wdType);
    void Mux_CapSense_RunMedianInternal(Mux_CapSense_PTR_FILTER_VARIANT ptrFilterHistObj,
                                              Mux_CapSense_RAM_SNS_STRUCT *ptrSensorObj, uint32 wdType);
#endif /* (Mux_CapSense_REGULAR_RC_MEDIAN_FILTER_EN || Mux_CapSense_PROX_RC_MEDIAN_FILTER_EN) */

#if (Mux_CapSense_REGULAR_RC_AVERAGE_FILTER_EN || Mux_CapSense_PROX_RC_AVERAGE_FILTER_EN)
    void Mux_CapSense_InitializeAverageInternal(Mux_CapSense_PTR_FILTER_VARIANT ptrFilterHistObj,
                                                      Mux_CapSense_RAM_SNS_STRUCT *ptrSensorObj, uint32 wdType);
    void Mux_CapSense_RunAverageInternal(Mux_CapSense_PTR_FILTER_VARIANT ptrFilterHistObj,
                                               Mux_CapSense_RAM_SNS_STRUCT *ptrSensorObj, uint32 wdType);
#endif /* (Mux_CapSense_REGULAR_RC_AVERAGE_FILTER_EN || Mux_CapSense_PROX_RC_AVERAGE_FILTER_EN) */

#if (Mux_CapSense_ENABLE == Mux_CapSense_ALP_FILTER_EN)
    void Mux_CapSense_InitializeALP(uint32 widgetId, uint32 sensorId);
    void Mux_CapSense_RunALP(uint32 widgetId, uint32 sensorId);
    void Mux_CapSense_InitializeALPInternal(Mux_CapSense_PTR_FILTER_VARIANT ptrFilterHistObj,
                                                Mux_CapSense_RAM_SNS_STRUCT *ptrSensorObj,
                                                uint32 wdType);
    void Mux_CapSense_ConfigRunALPInternal(Mux_CapSense_PTR_FILTER_VARIANT ptrFilterHistObj,
                                        Mux_CapSense_RAM_WD_BASE_STRUCT *ptrRamWdgt,
                                        Mux_CapSense_RAM_SNS_STRUCT *ptrSensorObj,
                                        uint32 wdType);
    void Mux_CapSense_RunALPInternal(Mux_CapSense_PTR_FILTER_VARIANT ptrFilterHistObj,
                                        ALP_FLTR_CONFIG_STRUCT *ptrAlpFilterConfig,
                                        Mux_CapSense_RAM_SNS_STRUCT *ptrSensorObj,
                                        uint32 wdType);
#endif /* (Mux_CapSense_ENABLE == Mux_CapSense_ALP_FILTER_EN) */

/** \}
* \endcond */

/***************************************
* Initial Parameter Constants
***************************************/
#define NOISE_ENVELOPE_SHIFT                        (0x02u)
#define NOISE_ENVELOPE_RUN_DIFF_SHIFT               (0x03u)
#define NOISE_ENVELOPE_SIGN_REG                     (0x0Fu)
#define NOISE_ENVELOPE_SIGN_REG_SHIFT               (0x01u)
#define NOISE_ENVELOPE_RESET_COUNTER                (0x0Au)
#define NOISE_ENVELOPE_4_TIMES                      (0x02u)

#endif /* End CY_SENSE_Mux_CapSense_FILTER_H */


/* [] END OF FILE */
