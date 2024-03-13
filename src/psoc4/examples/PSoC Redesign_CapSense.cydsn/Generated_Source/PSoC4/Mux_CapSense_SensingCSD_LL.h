/***************************************************************************//**
* \file Mux_CapSense_SensingCSD_LL.h
* \version 7.10
*
* \brief
*   This file provides the headers of APIs specific to CSD sensing implementation.
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

#if !defined(CY_SENSE_Mux_CapSense_SENSINGCSD_LL_H)
#define CY_SENSE_Mux_CapSense_SENSINGCSD_LL_H

#include <CyLib.h>
#include <cyfitter.h>
#include <cytypes.h>
#include <cypins.h>
#include "Mux_CapSense_Structure.h"
#include "Mux_CapSense_Configuration.h"
#include "Mux_CapSense_Sensing.h"

/****************************************************************************
* Register and mode mask definition
****************************************************************************/

#if (Mux_CapSense_ENABLE == Mux_CapSense_CSDV2)
    #define Mux_CapSense_CSD_CSDCMP_INIT                                (Mux_CapSense_CSDCMP_CSDCMP_DISABLED)

    /* SW_HS_P_SEL switches state for Coarse initialization of CMOD (sense path) */
    #if (Mux_CapSense_ENABLE == Mux_CapSense_CSD_EN)
        #if (Mux_CapSense_CSD__CMOD_PAD == Mux_CapSense_CMOD_CONNECTION)
            #define Mux_CapSense_CSD_HS_P_SEL_COARSE_CMOD               (Mux_CapSense_SW_HS_P_SEL_SW_HMPM_STATIC_CLOSE)
        #elif (Mux_CapSense_CSD__CSHIELD_PAD == Mux_CapSense_CMOD_CONNECTION)
            #define Mux_CapSense_CSD_HS_P_SEL_COARSE_CMOD               (Mux_CapSense_SW_HS_P_SEL_SW_HMPS_STATIC_CLOSE)
        #else
            #define Mux_CapSense_CSD_HS_P_SEL_COARSE_CMOD               (Mux_CapSense_SW_HS_P_SEL_SW_HMPT_STATIC_CLOSE)
        #endif /* (Mux_CapSense_CSD__CMOD_PAD == Mux_CapSense_CMOD_CONNECTION) */
    #else
        #define Mux_CapSense_CSD_HS_P_SEL_COARSE_CMOD                   (0x00000000uL)
    #endif /* (Mux_CapSense_ENABLE == Mux_CapSense_CSD_EN) */

    #if ((Mux_CapSense_ENABLE == Mux_CapSense_CSD_SHIELD_TANK_EN) && \
        (Mux_CapSense_ENABLE == Mux_CapSense_CSD_SHIELD_EN))
        /* SW_HS_P_SEL switches state for Coarse initialization of CTANK (sense path) */
        #if (Mux_CapSense_CSD__CSH_TANK_PAD == Mux_CapSense_CTANK_CONNECTION)
            #define Mux_CapSense_CSD_HS_P_SEL_COARSE_TANK               (Mux_CapSense_SW_HS_P_SEL_SW_HMPT_STATIC_CLOSE)
        #elif (Mux_CapSense_CSD__CSHIELD_PAD == Mux_CapSense_CTANK_CONNECTION)
            #define Mux_CapSense_CSD_HS_P_SEL_COARSE_TANK               (Mux_CapSense_SW_HS_P_SEL_SW_HMPS_STATIC_CLOSE)
        #elif (Mux_CapSense_CSD__CMOD_PAD == Mux_CapSense_CTANK_CONNECTION)
            #define Mux_CapSense_CSD_HS_P_SEL_COARSE_TANK               (Mux_CapSense_SW_HS_P_SEL_SW_HMPM_STATIC_CLOSE)
        #else
            #define Mux_CapSense_CSD_HS_P_SEL_COARSE_TANK               (Mux_CapSense_SW_HS_P_SEL_SW_HMMA_STATIC_CLOSE)
        #endif /* (Mux_CapSense_CSD__CSH_TANK_PAD == Mux_CapSense_CTANK_CONNECTION) */
    #else
        #define Mux_CapSense_CSD_HS_P_SEL_COARSE_TANK                   (0x00000000uL)
    #endif /* ((Mux_CapSense_ENABLE == Mux_CapSense_CSD_SHIELD_TANK_EN) && \
               (Mux_CapSense_ENABLE == Mux_CapSense_CSD_SHIELD_EN)) */

    #define Mux_CapSense_CSD_SW_HS_P_SEL_COARSE                         (Mux_CapSense_HS_P_SEL_COARSE_CMOD | Mux_CapSense_CSD_HS_P_SEL_COARSE_TANK)

    /* C_mod config */
    #if ((Mux_CapSense_CSD__CMOD_PAD == Mux_CapSense_CMOD_CONNECTION) || (Mux_CapSense_CSD__CMOD_PAD == Mux_CapSense_CTANK_CONNECTION))
        #define Mux_CapSense_CSD_SW_FW_MOD_SEL_INIT             (Mux_CapSense_SW_FW_MOD_SEL_SW_F1PM_STATIC_CLOSE |\
                                                                     Mux_CapSense_SW_FW_MOD_SEL_SW_F1MA_STATIC_CLOSE |\
                                                                     Mux_CapSense_SW_FW_MOD_SEL_SW_F1CA_STATIC_CLOSE)
        #define Mux_CapSense_SW_DSI_SEL_CMODPAD                 (Mux_CapSense_SW_DSI_CMOD)
    #else
        #define Mux_CapSense_CSD_SW_FW_MOD_SEL_INIT             (0x00000000uL)
        #define Mux_CapSense_SW_DSI_SEL_CMODPAD                 (0x00000000uL)
    #endif /* (Mux_CapSense_CSD__CMOD_PAD == Mux_CapSense_CMOD_CONNECTION) */

    /* C_tank config */
    #if ((Mux_CapSense_CSD__CSH_TANK_PAD == Mux_CapSense_CMOD_CONNECTION) || (Mux_CapSense_CSD__CSH_TANK_PAD == Mux_CapSense_CTANK_CONNECTION))
        #define Mux_CapSense_CSD_SW_FW_TANK_SEL_INIT            (Mux_CapSense_SW_FW_TANK_SEL_SW_F2PT_STATIC_CLOSE |\
                                                                     Mux_CapSense_SW_FW_TANK_SEL_SW_F2MA_STATIC_CLOSE |\
                                                                     Mux_CapSense_SW_FW_TANK_SEL_SW_F2CA_STATIC_CLOSE)
        #define Mux_CapSense_SW_DSI_SEL_TANKPAD                 (Mux_CapSense_SW_DSI_CTANK)
    #else
        #define Mux_CapSense_CSD_SW_FW_TANK_SEL_INIT            (0x00000000uL)
        #define Mux_CapSense_SW_DSI_SEL_TANKPAD                 (0x00000000uL)
    #endif /* (Mux_CapSense_CSD__CSH_TANK_PAD == Mux_CapSense_CTANK_CONNECTION) */

    #define Mux_CapSense_CSD_SW_SHIELD_SEL_INIT                 (Mux_CapSense_SW_SHIELD_SEL_SW_HCAV_HSCMP)

    /* Defining default HW configuration according to settings in customizer. */
    #define Mux_CapSense_DEFAULT_CSD_CONFIG                 (Mux_CapSense_CONFIG_FILTER_DELAY_12MHZ |\
                                                                 Mux_CapSense_CONFIG_SAMPLE_SYNC_MASK)
    #if (Mux_CapSense_ENABLE == Mux_CapSense_CSD_AUTO_ZERO_EN)
        /* Enable CSDCMP */
        #define Mux_CapSense_CSD_CSDCMP_SCAN                (Mux_CapSense_CSDCMP_CSDCMP_EN_MASK |\
                                                                 Mux_CapSense_CSDCMP_AZ_EN_MASK)
    #else
        /* Enable CSDCMP */
        #define Mux_CapSense_CSD_CSDCMP_SCAN                (Mux_CapSense_CSDCMP_CSDCMP_EN_MASK)
    #endif /* (Mux_CapSense_ENABLE == Mux_CapSense_CSD_AUTO_ZERO_EN) */

    #if ((Mux_CapSense_ENABLE == Mux_CapSense_CSD_SHIELD_TANK_EN) && \
        (Mux_CapSense_ENABLE == Mux_CapSense_CSD_SHIELD_EN))
        /* SW_HS_P_SEL switches state for Coarse initialization of CTANK (sense path) */
        #if (Mux_CapSense_CSD__CSH_TANK_PAD == Mux_CapSense_CTANK_CONNECTION)
            #define Mux_CapSense_CSD_HS_P_SEL_SCAN_TANK                 (Mux_CapSense_SW_HS_P_SEL_SW_HMPT_STATIC_CLOSE)
        #elif (Mux_CapSense_CSD__CSHIELD_PAD == Mux_CapSense_CTANK_CONNECTION)
            #define Mux_CapSense_CSD_HS_P_SEL_SCAN_TANK                 (Mux_CapSense_SW_HS_P_SEL_SW_HMPS_STATIC_CLOSE)
        #elif (Mux_CapSense_CSD__CMOD_PAD == Mux_CapSense_CTANK_CONNECTION)
            #define Mux_CapSense_CSD_HS_P_SEL_SCAN_TANK                 (Mux_CapSense_SW_HS_P_SEL_SW_HMPM_STATIC_CLOSE)
        #else
            #define Mux_CapSense_CSD_HS_P_SEL_SCAN_TANK                 (Mux_CapSense_SW_HS_P_SEL_SW_HMMB_STATIC_CLOSE)
        #endif /* (Mux_CapSense_CSD__CSH_TANK_PAD == Mux_CapSense_CTANK_CONNECTION) */
        #define Mux_CapSense_CSD_SW_HS_P_SEL_SCAN                       (Mux_CapSense_HS_P_SEL_SCAN_TANK)
    #elif(Mux_CapSense_ENABLE == Mux_CapSense_CSD_SHIELD_EN)
        #define Mux_CapSense_CSD_SW_HS_P_SEL_SCAN                       (Mux_CapSense_SW_HS_P_SEL_SW_HMMB_STATIC_CLOSE)
    #else
        #define Mux_CapSense_CSD_SW_HS_P_SEL_SCAN                       (Mux_CapSense_STATIC_OPEN)
    #endif /* ((Mux_CapSense_ENABLE == Mux_CapSense_CSD_SHIELD_TANK_EN) && \
               (Mux_CapSense_ENABLE == Mux_CapSense_CSD_SHIELD_EN)) */

    /* SW_FW_MOD_SEL switches state for Coarse initialization of CMOD (sense path) */
    #define Mux_CapSense_CSD_SW_FW_MOD_SEL_SCAN                     (0x00000000uL)

    #if((Mux_CapSense_ENABLE == Mux_CapSense_CSD_SHIELD_EN) && \
        (Mux_CapSense_ENABLE == Mux_CapSense_CSD_SHIELD_TANK_EN) && \
        (Mux_CapSense_CSD__CSH_TANK_PAD == Mux_CapSense_CTANK_CONNECTION))
        #define Mux_CapSense_CSD_SW_FW_TANK_SEL_SCAN                (Mux_CapSense_SW_FW_TANK_SEL_SW_F2PT_STATIC_CLOSE | \
                                                                         Mux_CapSense_SW_FW_TANK_SEL_SW_F2CB_STATIC_CLOSE)
    #else
        #define Mux_CapSense_CSD_SW_FW_TANK_SEL_SCAN                (0x00000000uL)
    #endif /* ((Mux_CapSense_ENABLE == Mux_CapSense_CSD_SHIELD_EN) && \
               (Mux_CapSense_ENABLE == Mux_CapSense_CSD_SHIELD_TANK_EN) && \
               (Mux_CapSense_CSD__CSH_TANK_PAD == Mux_CapSense_CTANK_CONNECTION)) */

    /* Shield switch default config */
    #if ((Mux_CapSense_ENABLE == Mux_CapSense_CSD_SHIELD_EN) && \
         (Mux_CapSense_ENABLE == Mux_CapSense_CSD_SHIELD_TANK_EN))
        #if (Mux_CapSense_IDAC_SINKING == Mux_CapSense_CSD_IDAC_CONFIG)
            #define Mux_CapSense_CSD_SW_SHIELD_SEL_SCAN             (Mux_CapSense_SW_SHIELD_SEL_SW_HCBG_HSCMP)
        #else
            #define Mux_CapSense_CSD_SW_SHIELD_SEL_SCAN             (Mux_CapSense_SW_SHIELD_SEL_SW_HCBV_HSCMP)
        #endif /* (Mux_CapSense_IDAC_SINKING == Mux_CapSense_CSD_IDAC_CONFIG) */
    #elif(Mux_CapSense_ENABLE == Mux_CapSense_CSD_SHIELD_EN)
        #if (Mux_CapSense_IDAC_SINKING == Mux_CapSense_CSD_IDAC_CONFIG)
            #define Mux_CapSense_CSD_SW_SHIELD_SEL_SCAN             (Mux_CapSense_SW_SHIELD_SEL_SW_HCBV_PHI1 | \
                                                                         Mux_CapSense_SW_SHIELD_SEL_SW_HCBG_PHI2_HSCMP)
        #else
            #define Mux_CapSense_CSD_SW_SHIELD_SEL_SCAN             (Mux_CapSense_SW_SHIELD_SEL_SW_HCBG_PHI1 | \
                                                                         Mux_CapSense_SW_SHIELD_SEL_SW_HCBV_PHI2_HSCMP)
        #endif /* (Mux_CapSense_IDAC_SINKING == Mux_CapSense_CSD_IDAC_CONFIG) */
    #else
        #define Mux_CapSense_CSD_SW_SHIELD_SEL_SCAN                 (0x00000000uL)
    #endif /* ((Mux_CapSense_ENABLE == Mux_CapSense_CSD_SHIELD_EN) && \
               (Mux_CapSense_ENABLE == Mux_CapSense_CSD_SHIELD_TANK_EN)) */

    #define Mux_CapSense_CSD_SW_RES_INIT                            (Mux_CapSense_CSD_INIT_SWITCH_RES << CYFLD_CSD_RES_HCAV__OFFSET)
    #define Mux_CapSense_CSD_SW_RES_SCAN                            ((Mux_CapSense_CSD_SHIELD_SWITCH_RES << CYFLD_CSD_RES_HCBV__OFFSET) |\
                                                                         (Mux_CapSense_CSD_SHIELD_SWITCH_RES << CYFLD_CSD_RES_HCBG__OFFSET))

    #define Mux_CapSense_CSD_SHIELD_GPIO_DM                         (Mux_CapSense_GPIO_STRGDRV)
    #define Mux_CapSense_CSD_SENSOR_HSIOM_SEL                       (Mux_CapSense_HSIOM_SEL_CSD_SENSE)
    #define Mux_CapSense_CSD_SHIELD_HSIOM_SEL                       (Mux_CapSense_HSIOM_SEL_CSD_SHIELD)
    #define Mux_CapSense_CSD_CMOD_HSIOM_SEL                         (Mux_CapSense_HSIOM_SEL_AMUXA)

    #define Mux_CapSense_DEFAULT_IDAC_MOD_BALL_MODE                 ((uint32)Mux_CapSense_IDAC_MOD_BALL_MODE_FULL <<\
                                                                         CYFLD_CSD_BAL_MODE__OFFSET)
    #define Mux_CapSense_DEFAULT_IDAC_COMP_BALL_MODE                ((uint32)Mux_CapSense_IDAC_COMP_BALL_MODE_FULL <<\
                                                                         CYFLD_CSD_BAL_MODE__OFFSET)

    #define Mux_CapSense_DEFAULT_SENSE_DUTY_SEL                     (Mux_CapSense_SENSE_DUTY_OVERLAP_PHI1_MASK |\
                                                                         Mux_CapSense_SENSE_DUTY_OVERLAP_PHI2_MASK)

    #define Mux_CapSense_CSD_CAL_MIDDLE_VALUE                       (0x40u)
    #define Mux_CapSense_CSD_CAL_IDAC_MAX_VALUE                     (127u)

    #define Mux_CapSense_DELAY_EXTRACYCLES_NUM                      (9u)

    /* Clock Source Mode */
    #if (Mux_CapSense_CLK_SOURCE_DIRECT == Mux_CapSense_CSD_SNS_CLK_SOURCE)
        #define Mux_CapSense_DEFAULT_MODULATION_MODE                (Mux_CapSense_CLK_SOURCE_DIRECT)
    #elif (Mux_CapSense_CLK_SOURCE_PRSAUTO == Mux_CapSense_CSD_SNS_CLK_SOURCE)
        #define Mux_CapSense_DEFAULT_MODULATION_MODE                (Mux_CapSense_CLK_SOURCE_SSC2)
    #elif ((Mux_CapSense_CLK_SOURCE_PRS8) == Mux_CapSense_CSD_SNS_CLK_SOURCE)
        #define Mux_CapSense_DEFAULT_MODULATION_MODE                (Mux_CapSense_CSD_SNS_CLK_SOURCE)
    #elif ((Mux_CapSense_CLK_SOURCE_PRS12) == Mux_CapSense_CSD_SNS_CLK_SOURCE)
        #define Mux_CapSense_DEFAULT_MODULATION_MODE                (Mux_CapSense_CSD_SNS_CLK_SOURCE)
    #else
        #define Mux_CapSense_DEFAULT_MODULATION_MODE                (Mux_CapSense_CSD_SNS_CLK_SOURCE)
    #endif /* (Mux_CapSense_CLK_SOURCE_DIRECT != Mux_CapSense_CSD_SNS_CLK_SOURCE) */

    /* IDACs Ranges */
    #if (Mux_CapSense_IDAC_GAIN_LOW == Mux_CapSense_CSD_IDAC_GAIN)
        #define Mux_CapSense_DEFAULT_IDAC_MOD_RANGE                 ((uint32)Mux_CapSense_IDAC_MOD_RANGE_IDAC_LO << CYFLD_CSD_RANGE__OFFSET)
        #define Mux_CapSense_DEFAULT_IDAC_COMP_RANGE                ((uint32)Mux_CapSense_IDAC_COMP_RANGE_IDAC_LO << CYFLD_CSD_RANGE__OFFSET)
    #elif (Mux_CapSense_IDAC_GAIN_MEDIUM == Mux_CapSense_CSD_IDAC_GAIN)
        #define Mux_CapSense_DEFAULT_IDAC_MOD_RANGE                 ((uint32)Mux_CapSense_IDAC_MOD_RANGE_IDAC_MED << CYFLD_CSD_RANGE__OFFSET)
        #define Mux_CapSense_DEFAULT_IDAC_COMP_RANGE                ((uint32)Mux_CapSense_IDAC_COMP_RANGE_IDAC_MED << CYFLD_CSD_RANGE__OFFSET)
    #else
        #define Mux_CapSense_DEFAULT_IDAC_MOD_RANGE                 ((uint32)Mux_CapSense_IDAC_MOD_RANGE_IDAC_HI << CYFLD_CSD_RANGE__OFFSET)
        #define Mux_CapSense_DEFAULT_IDAC_COMP_RANGE                ((uint32)Mux_CapSense_IDAC_COMP_RANGE_IDAC_HI << CYFLD_CSD_RANGE__OFFSET)
    #endif

    /* IDACs Polarities */
    #if (Mux_CapSense_IDAC_SINKING == Mux_CapSense_CSD_IDAC_CONFIG)
        #define Mux_CapSense_DEFAULT_IDAC_MOD_POLARITY              ((uint32)Mux_CapSense_IDAC_MOD_POLARITY_VDDA_SNK << CYFLD_CSD_POLARITY__OFFSET)
        #define Mux_CapSense_DEFAULT_IDAC_COMP_POLARITY             ((uint32)Mux_CapSense_IDAC_COMP_POLARITY_VDDA_SNK << CYFLD_CSD_POLARITY__OFFSET)
    #else
        #define Mux_CapSense_DEFAULT_IDAC_MOD_POLARITY              ((uint32)Mux_CapSense_IDAC_MOD_POLARITY_VSSA_SRC << CYFLD_CSD_POLARITY__OFFSET)
        #define Mux_CapSense_DEFAULT_IDAC_COMP_POLARITY             ((uint32)Mux_CapSense_IDAC_COMP_POLARITY_VSSA_SRC << CYFLD_CSD_POLARITY__OFFSET)
    #endif /* (Mux_CapSense_IDAC_SINKING == Mux_CapSense_CSD_IDAC_CONFIG) */

    #define Mux_CapSense_SW_REFGEN_VREF_SRC                         (Mux_CapSense_SW_REFGEN_SEL_SW_SGR_MASK)

    /* IDAC legs configuration */
    #if (Mux_CapSense_ENABLE == Mux_CapSense_CSD_IDAC_COMP_EN)
            #define Mux_CapSense_DEFAULT_SW_REFGEN_SEL              (Mux_CapSense_SW_REFGEN_VREF_SRC | Mux_CapSense_SW_REFGEN_SEL_SW_IAIB_MASK)
    #else
            #define Mux_CapSense_DEFAULT_SW_REFGEN_SEL              (Mux_CapSense_SW_REFGEN_VREF_SRC)
    #endif /* (Mux_CapSense_ENABLE == Mux_CapSense_CSD_IDAC_COMP_EN) */

    /* IDACs register configuration is based on the Component configuration */
    #define Mux_CapSense_IDAC_MOD_DEFAULT_CFG                       (Mux_CapSense_DEFAULT_IDAC_MOD_RANGE | \
                                                                         Mux_CapSense_DEFAULT_IDAC_MOD_POLARITY | \
                                                                         Mux_CapSense_DEFAULT_IDAC_MOD_BALL_MODE | \
                                                                        ((uint32)(Mux_CapSense_IDAC_MOD_LEG1_MODE_CSD << CYFLD_CSD_LEG1_MODE__OFFSET)) | \
                                                                        ((uint32)(Mux_CapSense_IDAC_MOD_LEG2_MODE_CSD << CYFLD_CSD_LEG2_MODE__OFFSET)) | \
                                                                         Mux_CapSense_IDAC_MOD_LEG1_EN_MASK)

    #define Mux_CapSense_IDAC_COMP_DEFAULT_CFG                      (Mux_CapSense_DEFAULT_IDAC_COMP_RANGE | \
                                                                         Mux_CapSense_DEFAULT_IDAC_COMP_POLARITY | \
                                                                         Mux_CapSense_DEFAULT_IDAC_COMP_BALL_MODE | \
                                                                        ((uint32)(Mux_CapSense_IDAC_COMP_LEG1_MODE_CSD_STATIC << CYFLD_CSD_LEG1_MODE__OFFSET)) | \
                                                                        ((uint32)(Mux_CapSense_IDAC_COMP_LEG2_MODE_CSD_STATIC << CYFLD_CSD_LEG2_MODE__OFFSET)) | \
                                                                         Mux_CapSense_IDAC_COMP_LEG1_EN_MASK)

    #define Mux_CapSense_IDAC_MOD_CALIBRATION_CFG                   ((uint32)(Mux_CapSense_DEFAULT_IDAC_MOD_RANGE | \
                                                                         Mux_CapSense_DEFAULT_IDAC_MOD_POLARITY | \
                                                                         Mux_CapSense_DEFAULT_IDAC_MOD_BALL_MODE | \
                                                                        ((uint32)(Mux_CapSense_IDAC_MOD_LEG1_MODE_CSD << CYFLD_CSD_LEG1_MODE__OFFSET)) | \
                                                                         Mux_CapSense_IDAC_MOD_LEG1_EN_MASK | \
                                                                        ((uint32)((uint32)Mux_CapSense_IDAC_MOD_LEG2_MODE_GP_STATIC << CYFLD_CSD_LEG2_MODE__OFFSET))))

    #define Mux_CapSense_IDAC_COMP_CALIBRATION_CFG                  ((uint32)(Mux_CapSense_DEFAULT_IDAC_COMP_RANGE | \
                                                                         Mux_CapSense_DEFAULT_IDAC_COMP_POLARITY | \
                                                                         Mux_CapSense_DEFAULT_IDAC_COMP_BALL_MODE | \
                                                                        ((uint32)((uint32)Mux_CapSense_IDAC_COMP_LEG1_MODE_GP_STATIC << CYFLD_CSD_LEG1_MODE__OFFSET)) | \
                                                                        ((uint32)((uint32)Mux_CapSense_IDAC_COMP_LEG2_MODE_GP_STATIC << CYFLD_CSD_LEG2_MODE__OFFSET))))
#else
    #if (Mux_CapSense_ENABLE == Mux_CapSense_CSD_IDAC_COMP_EN)
        #define Mux_CapSense_CSD_CAL_IDAC_MAX_VALUE                 (127u)
        #define Mux_CapSense_CSD_CAL_MIDDLE_VALUE                   (0x40u)
    #else
        #define Mux_CapSense_CSD_CAL_IDAC_MAX_VALUE                 (255u)
        #define Mux_CapSense_CSD_CAL_MIDDLE_VALUE                   (0x80u)
    #endif

    #define Mux_CapSense_IDAC_MOD_CFG_MASK                  (Mux_CapSense_IDAC_POLARITY1_MIR_MASK |\
                                                                Mux_CapSense_IDAC_MOD_RANGE_MASK |\
                                                                Mux_CapSense_IDAC_MOD_MODE_MASK |\
                                                                Mux_CapSense_IDAC_MOD_MASK)

    #define Mux_CapSense_IDAC_COMP_CFG_MASK                 (Mux_CapSense_IDAC_POLARITY2_MIR_MASK |\
                                                                Mux_CapSense_IDAC_COMP_RANGE_MASK |\
                                                                Mux_CapSense_IDAC_COMP_MODE_MASK |\
                                                                Mux_CapSense_IDAC_COMP_MASK)

        #define Mux_CapSense_PRS_8_CONFIG                       Mux_CapSense_CONFIG_PRS_SELECT_MASK
    #define Mux_CapSense_PRS_12_CONFIG                      (Mux_CapSense_CONFIG_PRS_12_8_MASK |\
                                                                Mux_CapSense_CONFIG_PRS_SELECT_MASK)

    /* Third-generation HW block Initial PRS mode */
    #if (Mux_CapSense_CLK_SOURCE_PRS8 == Mux_CapSense_CSD_SNS_CLK_SOURCE)
        #define Mux_CapSense_DEFAULT_MODULATION_MODE        Mux_CapSense_CONFIG_PRS_SELECT_MASK

    #elif (Mux_CapSense_CLK_SOURCE_PRS12 == Mux_CapSense_CSD_SNS_CLK_SOURCE)
        #define Mux_CapSense_DEFAULT_MODULATION_MODE        (Mux_CapSense_CONFIG_PRS_12_8_MASK |\
                                                                Mux_CapSense_CONFIG_PRS_SELECT_MASK)
    #else
        #define Mux_CapSense_DEFAULT_MODULATION_MODE        (0u)
    #endif /* (Mux_CapSense_CSD_SNS_CLK_SOURCE == Mux_CapSense_PRS_8BITS) */

    /* Defining default CSD configuration according to settings in customizer. */
    #define Mux_CapSense_DEFAULT_CSD_CONFIG                 (Mux_CapSense_CONFIG_SENSE_COMP_BW_MASK |\
                                                                Mux_CapSense_DEFAULT_IDAC_POLARITY |\
                                                                Mux_CapSense_CONFIG_SENSE_INSEL_MASK |\
                                                                Mux_CapSense_CONFIG_REFBUF_DRV_MASK)

    /* Third-generation HW block Defining mask intended for clearing bits related to pre-charging options. */
    #define Mux_CapSense_PRECHARGE_CONFIG_MASK              (Mux_CapSense_CONFIG_REFBUF_EN_MASK |\
                                                                Mux_CapSense_CONFIG_COMP_MODE_MASK |\
                                                                Mux_CapSense_CONFIG_COMP_PIN_MASK  |\
                                                                Mux_CapSense_CONFIG_REFBUF_OUTSEL_MASK)

    #define Mux_CapSense_CMOD_PRECHARGE_CONFIG              (Mux_CapSense_DEFAULT_CSD_CONFIG |\
                                                                Mux_CapSense_CONFIG_REFBUF_EN_MASK |\
                                                                Mux_CapSense_CONFIG_COMP_PIN_MASK)

    #define Mux_CapSense_CMOD_PRECHARGE_CONFIG_CSD_EN       (Mux_CapSense_DEFAULT_CSD_CONFIG |\
                                                                Mux_CapSense_CSD_ENABLE_MASK |\
                                                                Mux_CapSense_CONFIG_REFBUF_EN_MASK |\
                                                                Mux_CapSense_CONFIG_COMP_PIN_MASK)


    #if (Mux_CapSense_ENABLE == Mux_CapSense_CSD_SHIELD_EN)
        #if((Mux_CapSense_ENABLE == Mux_CapSense_CSD_SHIELD_TANK_EN) &&\
            (Mux_CapSense_CSH_PRECHARGE_IO_BUF == Mux_CapSense_CSD_CSH_PRECHARGE_SRC))
            #define  Mux_CapSense_CTANK_PRECHARGE_CONFIG    (Mux_CapSense_DEFAULT_CSD_CONFIG |\
                                                                 Mux_CapSense_CONFIG_REFBUF_OUTSEL_MASK |\
                                                                 Mux_CapSense_CONFIG_REFBUF_EN_MASK |\
                                                                 Mux_CapSense_CONFIG_COMP_MODE_MASK |\
                                                                 Mux_CapSense_CONFIG_PRS_CLEAR_MASK |\
                                                                 Mux_CapSense_CONFIG_COMP_PIN_MASK)
        #else
            #define  Mux_CapSense_CTANK_PRECHARGE_CONFIG    (Mux_CapSense_DEFAULT_CSD_CONFIG |\
                                                                 Mux_CapSense_CONFIG_REFBUF_EN_MASK |\
                                                                 Mux_CapSense_CONFIG_PRS_CLEAR_MASK |\
                                                                 Mux_CapSense_CONFIG_REFBUF_OUTSEL_MASK)
        #endif
    #else
        #define  Mux_CapSense_CTANK_PRECHARGE_CONFIG    (Mux_CapSense_DEFAULT_CSD_CONFIG |\
                                                             Mux_CapSense_CONFIG_REFBUF_OUTSEL_MASK |\
                                                             Mux_CapSense_CONFIG_PRS_CLEAR_MASK)
    #endif /* (Mux_CapSense_ENABLE == Mux_CapSense_CSD_SHIELD_EN) */


    #define  Mux_CapSense_CTANK_PRECHARGE_CONFIG_CSD_EN     (Mux_CapSense_CTANK_PRECHARGE_CONFIG |\
                                                                 Mux_CapSense_CONFIG_ENABLE_MASK |\
                                                                 Mux_CapSense_CONFIG_SENSE_COMP_EN_MASK)

#endif /* (Mux_CapSense_ENABLE == Mux_CapSense_CSDV2) */

#define Mux_CapSense_CSD_AVG_CYCLES_PER_LOOP                   (5u)
#define Mux_CapSense_CSD_MEASURE_MAX_TIME_US                   (200000u)
#define Mux_CapSense_CSD_PRECHARGE_MAX_TIME_US                 (50u)
#define Mux_CapSense_CSD_ONE_CLOCK_MAX_TIME_US                 (50u)
#define Mux_CapSense_WIDGET_MAX_SCAN_TIME_US                   (5u * 1000000u)

#define Mux_CapSense_CSD_CALIBR_WATCHDOG_CYCLES_NUM            (((CYDEV_BCLK__SYSCLK__MHZ) * (Mux_CapSense_CSD_MEASURE_MAX_TIME_US)) /\
                                                                    (Mux_CapSense_CSD_AVG_CYCLES_PER_LOOP))
#define Mux_CapSense_CSD_PRECHARGE_WATCHDOG_CYCLES_NUM         (((CYDEV_BCLK__SYSCLK__MHZ) * (Mux_CapSense_CSD_PRECHARGE_MAX_TIME_US)) /\
                                                                    (Mux_CapSense_CSD_AVG_CYCLES_PER_LOOP))
#define Mux_CapSense_ONE_CLOCK_WATCHDOG_CYCLES_NUM             (((CYDEV_BCLK__SYSCLK__MHZ) * (Mux_CapSense_CSD_ONE_CLOCK_MAX_TIME_US)) /\
                                                                    (Mux_CapSense_CSD_AVG_CYCLES_PER_LOOP))
#define Mux_CapSense_WIDGET_MAX_SCAN_TIME                      (((CYDEV_BCLK__SYSCLK__MHZ) * (Mux_CapSense_WIDGET_MAX_SCAN_TIME_US)) /\
                                                                    (Mux_CapSense_CSD_AVG_CYCLES_PER_LOOP))

/***************************************
* Global software variables
***************************************/

extern uint32 Mux_CapSense_configCsd;

#if (Mux_CapSense_ENABLE == Mux_CapSense_CSD_NOISE_METRIC_EN)
    extern uint8 Mux_CapSense_badConversionsNum;
#endif /* (Mux_CapSense_ENABLE == Mux_CapSense_CSD_NOISE_METRIC_EN) */


/***************************************
* Function Prototypes
**************************************/

/**
* \cond SECTION_C_LOW_LEVEL
* \addtogroup group_c_low_level
* \{
*/

void Mux_CapSense_CSDSetupWidget(uint32 widgetId);
void Mux_CapSense_CSDSetupWidgetExt(uint32 widgetId, uint32 sensorId);
void Mux_CapSense_CSDScan(void);
void Mux_CapSense_CSDScanExt(void);
#if ((Mux_CapSense_CSD_SS_DIS != Mux_CapSense_CSD_AUTOTUNE) || \
     (Mux_CapSense_ENABLE == Mux_CapSense_CSD_IDAC_AUTOCAL_EN))
    cystatus Mux_CapSense_CSDCalibrateWidget(uint32 widgetId, uint32 target);
#endif /* ((Mux_CapSense_CSD_SS_DIS != Mux_CapSense_CSD_AUTOTUNE) || \
           (Mux_CapSense_ENABLE == Mux_CapSense_CSD_IDAC_AUTOCAL_EN))  */
void Mux_CapSense_CSDConnectSns(Mux_CapSense_FLASH_IO_STRUCT const *snsAddrPtr);
void Mux_CapSense_CSDDisconnectSns(Mux_CapSense_FLASH_IO_STRUCT const *snsAddrPtr);

/** \}
* \endcond */

/*****************************************************
* Function Prototypes - internal Low Level functions
*****************************************************/

/**
* \cond SECTION_C_INTERNAL
* \addtogroup group_c_internal
* \{
*/

void Mux_CapSense_SsCSDInitialize(void);
void Mux_CapSense_SsCSDStartSample(void);
void Mux_CapSense_SsCSDSetUpIdacs(Mux_CapSense_RAM_WD_BASE_STRUCT const *ptrWdgt);
void Mux_CapSense_SsCSDConfigClock(void);
void Mux_CapSense_SsCSDElectrodeCheck(void);
#if ((Mux_CapSense_ENABLE == Mux_CapSense_CSD_SHIELD_EN) && \
     (0u != Mux_CapSense_CSD_TOTAL_SHIELD_COUNT))
    void Mux_CapSense_SsCSDEnableShieldElectrodes(void);
    void Mux_CapSense_SsCSDDisableShieldElectrodes(void);
    void Mux_CapSense_SsCSDSetShieldElectrodesState(uint32 state);
#endif /* ((Mux_CapSense_ENABLE == Mux_CapSense_CSD_SHIELD_EN) && \
           (0u != Mux_CapSense_CSD_TOTAL_SHIELD_COUNT)) */
#if (Mux_CapSense_ENABLE == Mux_CapSense_CSDV2)
    uint32 Mux_CapSense_SsCSDGetNumberOfConversions(uint32 snsClkDivider, uint32 resolution, uint32 snsClkSrc);
#endif /* (Mux_CapSense_ENABLE == Mux_CapSense_CSDV2) */
void Mux_CapSense_SsCSDCalculateScanDuration(Mux_CapSense_RAM_WD_BASE_STRUCT const *ptrWdgt);
void Mux_CapSense_SsCSDConnectSensorExt(uint32 widgetId, uint32 sensorId);
void Mux_CapSense_SsCSDDisconnectSnsExt(uint32 widgetId, uint32 sensorId);

#if ((Mux_CapSense_CSD_SS_DIS != Mux_CapSense_CSD_AUTOTUNE) || \
     (Mux_CapSense_ENABLE == Mux_CapSense_SELF_TEST_EN) || \
     (Mux_CapSense_ENABLE == Mux_CapSense_CSD_IDAC_AUTOCAL_EN))
#endif /* ((Mux_CapSense_CSD_SS_DIS != Mux_CapSense_CSD_AUTOTUNE) || \
           (Mux_CapSense_ENABLE == Mux_CapSense_SELF_TEST_EN) || \
           (Mux_CapSense_ENABLE == Mux_CapSense_CSD_IDAC_AUTOCAL_EN)) */

/** \}
* \endcond */

/***************************************
* Global software variables
***************************************/
extern uint32 Mux_CapSense_configCsd;

/* Interrupt handler */
extern CY_ISR_PROTO(Mux_CapSense_CSDPostSingleScan);
extern CY_ISR_PROTO(Mux_CapSense_CSDPostMultiScan);
#if (Mux_CapSense_ENABLE == Mux_CapSense_CSD_GANGED_SNS_EN)
extern CY_ISR_PROTO(Mux_CapSense_CSDPostMultiScanGanged);
#endif /* (Mux_CapSense_ENABLE == Mux_CapSense_CSD_GANGED_SNS_EN) */
#if (Mux_CapSense_ENABLE == Mux_CapSense_CSD_NOISE_METRIC_EN)
    extern uint8 Mux_CapSense_badConversionsNum;
#endif /* (Mux_CapSense_ENABLE == Mux_CapSense_CSD_NOISE_METRIC_EN) */

#endif /* End CY_SENSE_Mux_CapSense_SENSINGCSD_LL_H */


/* [] END OF FILE */
