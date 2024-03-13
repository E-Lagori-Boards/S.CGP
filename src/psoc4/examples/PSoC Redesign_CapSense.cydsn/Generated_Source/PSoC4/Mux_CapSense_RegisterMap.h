/***************************************************************************//**
* \file Mux_CapSense_RegisterMap.h
* \version 7.10
*
* \brief
*   This file provides the definitions for the Component data structure register.
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

#if !defined(CY_SENSE_Mux_CapSense_REGISTER_MAP_H)
#define CY_SENSE_Mux_CapSense_REGISTER_MAP_H

#include <cytypes.h>
#include "Mux_CapSense_Configuration.h"
#include "Mux_CapSense_Structure.h"

/*****************************************************************************/
/* RAM Data structure register definitions                                   */
/*****************************************************************************/
#define Mux_CapSense_CONFIG_ID_VALUE                        (Mux_CapSense_dsRam.configId)
#define Mux_CapSense_CONFIG_ID_OFFSET                       (0u)
#define Mux_CapSense_CONFIG_ID_SIZE                         (2u)
#define Mux_CapSense_CONFIG_ID_PARAM_ID                     (0x87000000u)

#define Mux_CapSense_DEVICE_ID_VALUE                        (Mux_CapSense_dsRam.deviceId)
#define Mux_CapSense_DEVICE_ID_OFFSET                       (2u)
#define Mux_CapSense_DEVICE_ID_SIZE                         (2u)
#define Mux_CapSense_DEVICE_ID_PARAM_ID                     (0x8B000002u)

#define Mux_CapSense_HW_CLOCK_VALUE                         (Mux_CapSense_dsRam.hwClock)
#define Mux_CapSense_HW_CLOCK_OFFSET                        (4u)
#define Mux_CapSense_HW_CLOCK_SIZE                          (2u)
#define Mux_CapSense_HW_CLOCK_PARAM_ID                      (0x86000004u)

#define Mux_CapSense_TUNER_CMD_VALUE                        (Mux_CapSense_dsRam.tunerCmd)
#define Mux_CapSense_TUNER_CMD_OFFSET                       (6u)
#define Mux_CapSense_TUNER_CMD_SIZE                         (2u)
#define Mux_CapSense_TUNER_CMD_PARAM_ID                     (0xA1000006u)

#define Mux_CapSense_SCAN_COUNTER_VALUE                     (Mux_CapSense_dsRam.scanCounter)
#define Mux_CapSense_SCAN_COUNTER_OFFSET                    (8u)
#define Mux_CapSense_SCAN_COUNTER_SIZE                      (2u)
#define Mux_CapSense_SCAN_COUNTER_PARAM_ID                  (0x85000008u)

#define Mux_CapSense_STATUS_VALUE                           (Mux_CapSense_dsRam.status)
#define Mux_CapSense_STATUS_OFFSET                          (12u)
#define Mux_CapSense_STATUS_SIZE                            (4u)
#define Mux_CapSense_STATUS_PARAM_ID                        (0xCB00000Cu)

#define Mux_CapSense_WDGT_ENABLE0_VALUE                     (Mux_CapSense_dsRam.wdgtEnable[0u])
#define Mux_CapSense_WDGT_ENABLE0_OFFSET                    (16u)
#define Mux_CapSense_WDGT_ENABLE0_SIZE                      (4u)
#define Mux_CapSense_WDGT_ENABLE0_PARAM_ID                  (0xE6000010u)

#define Mux_CapSense_WDGT_STATUS0_VALUE                     (Mux_CapSense_dsRam.wdgtStatus[0u])
#define Mux_CapSense_WDGT_STATUS0_OFFSET                    (20u)
#define Mux_CapSense_WDGT_STATUS0_SIZE                      (4u)
#define Mux_CapSense_WDGT_STATUS0_PARAM_ID                  (0xCC000014u)

#define Mux_CapSense_SNS_STATUS0_VALUE                      (Mux_CapSense_dsRam.snsStatus[0u])
#define Mux_CapSense_SNS_STATUS0_OFFSET                     (24u)
#define Mux_CapSense_SNS_STATUS0_SIZE                       (2u)
#define Mux_CapSense_SNS_STATUS0_PARAM_ID                   (0x80000018u)

#define Mux_CapSense_SNS_STATUS1_VALUE                      (Mux_CapSense_dsRam.snsStatus[1u])
#define Mux_CapSense_SNS_STATUS1_OFFSET                     (26u)
#define Mux_CapSense_SNS_STATUS1_SIZE                       (2u)
#define Mux_CapSense_SNS_STATUS1_PARAM_ID                   (0x8C00001Au)

#define Mux_CapSense_SNS_STATUS2_VALUE                      (Mux_CapSense_dsRam.snsStatus[2u])
#define Mux_CapSense_SNS_STATUS2_OFFSET                     (28u)
#define Mux_CapSense_SNS_STATUS2_SIZE                       (2u)
#define Mux_CapSense_SNS_STATUS2_PARAM_ID                   (0x8100001Cu)

#define Mux_CapSense_SNS_STATUS3_VALUE                      (Mux_CapSense_dsRam.snsStatus[3u])
#define Mux_CapSense_SNS_STATUS3_OFFSET                     (30u)
#define Mux_CapSense_SNS_STATUS3_SIZE                       (2u)
#define Mux_CapSense_SNS_STATUS3_PARAM_ID                   (0x8D00001Eu)

#define Mux_CapSense_SNS_STATUS4_VALUE                      (Mux_CapSense_dsRam.snsStatus[4u])
#define Mux_CapSense_SNS_STATUS4_OFFSET                     (32u)
#define Mux_CapSense_SNS_STATUS4_SIZE                       (2u)
#define Mux_CapSense_SNS_STATUS4_PARAM_ID                   (0x8D000020u)

#define Mux_CapSense_SNS_STATUS5_VALUE                      (Mux_CapSense_dsRam.snsStatus[5u])
#define Mux_CapSense_SNS_STATUS5_OFFSET                     (34u)
#define Mux_CapSense_SNS_STATUS5_SIZE                       (2u)
#define Mux_CapSense_SNS_STATUS5_PARAM_ID                   (0x81000022u)

#define Mux_CapSense_SNS_STATUS6_VALUE                      (Mux_CapSense_dsRam.snsStatus[6u])
#define Mux_CapSense_SNS_STATUS6_OFFSET                     (36u)
#define Mux_CapSense_SNS_STATUS6_SIZE                       (2u)
#define Mux_CapSense_SNS_STATUS6_PARAM_ID                   (0x8C000024u)

#define Mux_CapSense_CSD0_CONFIG_VALUE                      (Mux_CapSense_dsRam.csd0Config)
#define Mux_CapSense_CSD0_CONFIG_OFFSET                     (38u)
#define Mux_CapSense_CSD0_CONFIG_SIZE                       (2u)
#define Mux_CapSense_CSD0_CONFIG_PARAM_ID                   (0xA6800026u)

#define Mux_CapSense_MOD_CSD_CLK_VALUE                      (Mux_CapSense_dsRam.modCsdClk)
#define Mux_CapSense_MOD_CSD_CLK_OFFSET                     (40u)
#define Mux_CapSense_MOD_CSD_CLK_SIZE                       (1u)
#define Mux_CapSense_MOD_CSD_CLK_PARAM_ID                   (0x61800028u)

#define Mux_CapSense_TRACKPAD_RESOLUTION_VALUE              (Mux_CapSense_dsRam.wdgtList.trackpad.resolution)
#define Mux_CapSense_TRACKPAD_RESOLUTION_OFFSET             (42u)
#define Mux_CapSense_TRACKPAD_RESOLUTION_SIZE               (2u)
#define Mux_CapSense_TRACKPAD_RESOLUTION_PARAM_ID           (0xA580002Au)

#define Mux_CapSense_TRACKPAD_FINGER_TH_VALUE               (Mux_CapSense_dsRam.wdgtList.trackpad.fingerTh)
#define Mux_CapSense_TRACKPAD_FINGER_TH_OFFSET              (44u)
#define Mux_CapSense_TRACKPAD_FINGER_TH_SIZE                (2u)
#define Mux_CapSense_TRACKPAD_FINGER_TH_PARAM_ID            (0xA880002Cu)

#define Mux_CapSense_TRACKPAD_NOISE_TH_VALUE                (Mux_CapSense_dsRam.wdgtList.trackpad.noiseTh)
#define Mux_CapSense_TRACKPAD_NOISE_TH_OFFSET               (46u)
#define Mux_CapSense_TRACKPAD_NOISE_TH_SIZE                 (1u)
#define Mux_CapSense_TRACKPAD_NOISE_TH_PARAM_ID             (0x6C80002Eu)

#define Mux_CapSense_TRACKPAD_NNOISE_TH_VALUE               (Mux_CapSense_dsRam.wdgtList.trackpad.nNoiseTh)
#define Mux_CapSense_TRACKPAD_NNOISE_TH_OFFSET              (47u)
#define Mux_CapSense_TRACKPAD_NNOISE_TH_SIZE                (1u)
#define Mux_CapSense_TRACKPAD_NNOISE_TH_PARAM_ID            (0x6A80002Fu)

#define Mux_CapSense_TRACKPAD_HYSTERESIS_VALUE              (Mux_CapSense_dsRam.wdgtList.trackpad.hysteresis)
#define Mux_CapSense_TRACKPAD_HYSTERESIS_OFFSET             (48u)
#define Mux_CapSense_TRACKPAD_HYSTERESIS_SIZE               (1u)
#define Mux_CapSense_TRACKPAD_HYSTERESIS_PARAM_ID           (0x66800030u)

#define Mux_CapSense_TRACKPAD_ON_DEBOUNCE_VALUE             (Mux_CapSense_dsRam.wdgtList.trackpad.onDebounce)
#define Mux_CapSense_TRACKPAD_ON_DEBOUNCE_OFFSET            (49u)
#define Mux_CapSense_TRACKPAD_ON_DEBOUNCE_SIZE              (1u)
#define Mux_CapSense_TRACKPAD_ON_DEBOUNCE_PARAM_ID          (0x60800031u)

#define Mux_CapSense_TRACKPAD_LOW_BSLN_RST_VALUE            (Mux_CapSense_dsRam.wdgtList.trackpad.lowBslnRst)
#define Mux_CapSense_TRACKPAD_LOW_BSLN_RST_OFFSET           (50u)
#define Mux_CapSense_TRACKPAD_LOW_BSLN_RST_SIZE             (1u)
#define Mux_CapSense_TRACKPAD_LOW_BSLN_RST_PARAM_ID         (0x6A800032u)

#define Mux_CapSense_TRACKPAD_IDAC_MOD0_VALUE               (Mux_CapSense_dsRam.wdgtList.trackpad.idacMod[0u])
#define Mux_CapSense_TRACKPAD_IDAC_MOD0_OFFSET              (51u)
#define Mux_CapSense_TRACKPAD_IDAC_MOD0_SIZE                (1u)
#define Mux_CapSense_TRACKPAD_IDAC_MOD0_PARAM_ID            (0x61000033u)

#define Mux_CapSense_TRACKPAD_ROW_IDAC_MOD0_VALUE           (Mux_CapSense_dsRam.wdgtList.trackpad.rowIdacMod[0u])
#define Mux_CapSense_TRACKPAD_ROW_IDAC_MOD0_OFFSET          (52u)
#define Mux_CapSense_TRACKPAD_ROW_IDAC_MOD0_SIZE            (1u)
#define Mux_CapSense_TRACKPAD_ROW_IDAC_MOD0_PARAM_ID        (0x6A000034u)

#define Mux_CapSense_TRACKPAD_IDAC_GAIN_INDEX_VALUE         (Mux_CapSense_dsRam.wdgtList.trackpad.idacGainIndex)
#define Mux_CapSense_TRACKPAD_IDAC_GAIN_INDEX_OFFSET        (53u)
#define Mux_CapSense_TRACKPAD_IDAC_GAIN_INDEX_SIZE          (1u)
#define Mux_CapSense_TRACKPAD_IDAC_GAIN_INDEX_PARAM_ID      (0x61800035u)

#define Mux_CapSense_TRACKPAD_SNS_CLK_VALUE                 (Mux_CapSense_dsRam.wdgtList.trackpad.snsClk)
#define Mux_CapSense_TRACKPAD_SNS_CLK_OFFSET                (54u)
#define Mux_CapSense_TRACKPAD_SNS_CLK_SIZE                  (2u)
#define Mux_CapSense_TRACKPAD_SNS_CLK_PARAM_ID              (0xA3800036u)

#define Mux_CapSense_TRACKPAD_ROW_SNS_CLK_VALUE             (Mux_CapSense_dsRam.wdgtList.trackpad.rowSnsClk)
#define Mux_CapSense_TRACKPAD_ROW_SNS_CLK_OFFSET            (56u)
#define Mux_CapSense_TRACKPAD_ROW_SNS_CLK_SIZE              (2u)
#define Mux_CapSense_TRACKPAD_ROW_SNS_CLK_PARAM_ID          (0xAC800038u)

#define Mux_CapSense_TRACKPAD_SNS_CLK_SOURCE_VALUE          (Mux_CapSense_dsRam.wdgtList.trackpad.snsClkSource)
#define Mux_CapSense_TRACKPAD_SNS_CLK_SOURCE_OFFSET         (58u)
#define Mux_CapSense_TRACKPAD_SNS_CLK_SOURCE_SIZE           (1u)
#define Mux_CapSense_TRACKPAD_SNS_CLK_SOURCE_PARAM_ID       (0x4380003Au)

#define Mux_CapSense_TRACKPAD_ROW_SNS_CLK_SOURCE_VALUE      (Mux_CapSense_dsRam.wdgtList.trackpad.rowSnsClkSource)
#define Mux_CapSense_TRACKPAD_ROW_SNS_CLK_SOURCE_OFFSET     (59u)
#define Mux_CapSense_TRACKPAD_ROW_SNS_CLK_SOURCE_SIZE       (1u)
#define Mux_CapSense_TRACKPAD_ROW_SNS_CLK_SOURCE_PARAM_ID   (0x4580003Bu)

#define Mux_CapSense_TRACKPAD_POS_X_VALUE                   (Mux_CapSense_dsRam.wdgtList.trackpad.posX)
#define Mux_CapSense_TRACKPAD_POS_X_OFFSET                  (60u)
#define Mux_CapSense_TRACKPAD_POS_X_SIZE                    (2u)
#define Mux_CapSense_TRACKPAD_POS_X_PARAM_ID                (0x8B00003Cu)

#define Mux_CapSense_TRACKPAD_POS_Y_VALUE                   (Mux_CapSense_dsRam.wdgtList.trackpad.posY)
#define Mux_CapSense_TRACKPAD_POS_Y_OFFSET                  (62u)
#define Mux_CapSense_TRACKPAD_POS_Y_SIZE                    (2u)
#define Mux_CapSense_TRACKPAD_POS_Y_PARAM_ID                (0x8700003Eu)

#define Mux_CapSense_BUTTON0_RESOLUTION_VALUE               (Mux_CapSense_dsRam.wdgtList.button0.resolution)
#define Mux_CapSense_BUTTON0_RESOLUTION_OFFSET              (64u)
#define Mux_CapSense_BUTTON0_RESOLUTION_SIZE                (2u)
#define Mux_CapSense_BUTTON0_RESOLUTION_PARAM_ID            (0xAF810040u)

#define Mux_CapSense_BUTTON0_FINGER_TH_VALUE                (Mux_CapSense_dsRam.wdgtList.button0.fingerTh)
#define Mux_CapSense_BUTTON0_FINGER_TH_OFFSET               (66u)
#define Mux_CapSense_BUTTON0_FINGER_TH_SIZE                 (2u)
#define Mux_CapSense_BUTTON0_FINGER_TH_PARAM_ID             (0xA3810042u)

#define Mux_CapSense_BUTTON0_NOISE_TH_VALUE                 (Mux_CapSense_dsRam.wdgtList.button0.noiseTh)
#define Mux_CapSense_BUTTON0_NOISE_TH_OFFSET                (68u)
#define Mux_CapSense_BUTTON0_NOISE_TH_SIZE                  (1u)
#define Mux_CapSense_BUTTON0_NOISE_TH_PARAM_ID              (0x66810044u)

#define Mux_CapSense_BUTTON0_NNOISE_TH_VALUE                (Mux_CapSense_dsRam.wdgtList.button0.nNoiseTh)
#define Mux_CapSense_BUTTON0_NNOISE_TH_OFFSET               (69u)
#define Mux_CapSense_BUTTON0_NNOISE_TH_SIZE                 (1u)
#define Mux_CapSense_BUTTON0_NNOISE_TH_PARAM_ID             (0x60810045u)

#define Mux_CapSense_BUTTON0_HYSTERESIS_VALUE               (Mux_CapSense_dsRam.wdgtList.button0.hysteresis)
#define Mux_CapSense_BUTTON0_HYSTERESIS_OFFSET              (70u)
#define Mux_CapSense_BUTTON0_HYSTERESIS_SIZE                (1u)
#define Mux_CapSense_BUTTON0_HYSTERESIS_PARAM_ID            (0x6A810046u)

#define Mux_CapSense_BUTTON0_ON_DEBOUNCE_VALUE              (Mux_CapSense_dsRam.wdgtList.button0.onDebounce)
#define Mux_CapSense_BUTTON0_ON_DEBOUNCE_OFFSET             (71u)
#define Mux_CapSense_BUTTON0_ON_DEBOUNCE_SIZE               (1u)
#define Mux_CapSense_BUTTON0_ON_DEBOUNCE_PARAM_ID           (0x6C810047u)

#define Mux_CapSense_BUTTON0_LOW_BSLN_RST_VALUE             (Mux_CapSense_dsRam.wdgtList.button0.lowBslnRst)
#define Mux_CapSense_BUTTON0_LOW_BSLN_RST_OFFSET            (72u)
#define Mux_CapSense_BUTTON0_LOW_BSLN_RST_SIZE              (1u)
#define Mux_CapSense_BUTTON0_LOW_BSLN_RST_PARAM_ID          (0x65810048u)

#define Mux_CapSense_BUTTON0_IDAC_MOD0_VALUE                (Mux_CapSense_dsRam.wdgtList.button0.idacMod[0u])
#define Mux_CapSense_BUTTON0_IDAC_MOD0_OFFSET               (73u)
#define Mux_CapSense_BUTTON0_IDAC_MOD0_SIZE                 (1u)
#define Mux_CapSense_BUTTON0_IDAC_MOD0_PARAM_ID             (0x6E010049u)

#define Mux_CapSense_BUTTON0_ROW_IDAC_MOD0_VALUE            (Mux_CapSense_dsRam.wdgtList.button0.rowIdacMod[0u])
#define Mux_CapSense_BUTTON0_ROW_IDAC_MOD0_OFFSET           (74u)
#define Mux_CapSense_BUTTON0_ROW_IDAC_MOD0_SIZE             (1u)
#define Mux_CapSense_BUTTON0_ROW_IDAC_MOD0_PARAM_ID         (0x4F01004Au)

#define Mux_CapSense_BUTTON0_IDAC_GAIN_INDEX_VALUE          (Mux_CapSense_dsRam.wdgtList.button0.idacGainIndex)
#define Mux_CapSense_BUTTON0_IDAC_GAIN_INDEX_OFFSET         (75u)
#define Mux_CapSense_BUTTON0_IDAC_GAIN_INDEX_SIZE           (1u)
#define Mux_CapSense_BUTTON0_IDAC_GAIN_INDEX_PARAM_ID       (0x6F81004Bu)

#define Mux_CapSense_BUTTON0_SNS_CLK_VALUE                  (Mux_CapSense_dsRam.wdgtList.button0.snsClk)
#define Mux_CapSense_BUTTON0_SNS_CLK_OFFSET                 (76u)
#define Mux_CapSense_BUTTON0_SNS_CLK_SIZE                   (2u)
#define Mux_CapSense_BUTTON0_SNS_CLK_PARAM_ID               (0xAC81004Cu)

#define Mux_CapSense_BUTTON0_ROW_SNS_CLK_VALUE              (Mux_CapSense_dsRam.wdgtList.button0.rowSnsClk)
#define Mux_CapSense_BUTTON0_ROW_SNS_CLK_OFFSET             (78u)
#define Mux_CapSense_BUTTON0_ROW_SNS_CLK_SIZE               (2u)
#define Mux_CapSense_BUTTON0_ROW_SNS_CLK_PARAM_ID           (0x8B81004Eu)

#define Mux_CapSense_BUTTON0_SNS_CLK_SOURCE_VALUE           (Mux_CapSense_dsRam.wdgtList.button0.snsClkSource)
#define Mux_CapSense_BUTTON0_SNS_CLK_SOURCE_OFFSET          (80u)
#define Mux_CapSense_BUTTON0_SNS_CLK_SOURCE_SIZE            (1u)
#define Mux_CapSense_BUTTON0_SNS_CLK_SOURCE_PARAM_ID        (0x49810050u)

#define Mux_CapSense_BUTTON0_ROW_SNS_CLK_SOURCE_VALUE       (Mux_CapSense_dsRam.wdgtList.button0.rowSnsClkSource)
#define Mux_CapSense_BUTTON0_ROW_SNS_CLK_SOURCE_OFFSET      (81u)
#define Mux_CapSense_BUTTON0_ROW_SNS_CLK_SOURCE_SIZE        (1u)
#define Mux_CapSense_BUTTON0_ROW_SNS_CLK_SOURCE_PARAM_ID    (0x4F810051u)

#define Mux_CapSense_BUTTON1_RESOLUTION_VALUE               (Mux_CapSense_dsRam.wdgtList.button1.resolution)
#define Mux_CapSense_BUTTON1_RESOLUTION_OFFSET              (82u)
#define Mux_CapSense_BUTTON1_RESOLUTION_SIZE                (2u)
#define Mux_CapSense_BUTTON1_RESOLUTION_PARAM_ID            (0xA3820052u)

#define Mux_CapSense_BUTTON1_FINGER_TH_VALUE                (Mux_CapSense_dsRam.wdgtList.button1.fingerTh)
#define Mux_CapSense_BUTTON1_FINGER_TH_OFFSET               (84u)
#define Mux_CapSense_BUTTON1_FINGER_TH_SIZE                 (2u)
#define Mux_CapSense_BUTTON1_FINGER_TH_PARAM_ID             (0xAE820054u)

#define Mux_CapSense_BUTTON1_NOISE_TH_VALUE                 (Mux_CapSense_dsRam.wdgtList.button1.noiseTh)
#define Mux_CapSense_BUTTON1_NOISE_TH_OFFSET                (86u)
#define Mux_CapSense_BUTTON1_NOISE_TH_SIZE                  (1u)
#define Mux_CapSense_BUTTON1_NOISE_TH_PARAM_ID              (0x6A820056u)

#define Mux_CapSense_BUTTON1_NNOISE_TH_VALUE                (Mux_CapSense_dsRam.wdgtList.button1.nNoiseTh)
#define Mux_CapSense_BUTTON1_NNOISE_TH_OFFSET               (87u)
#define Mux_CapSense_BUTTON1_NNOISE_TH_SIZE                 (1u)
#define Mux_CapSense_BUTTON1_NNOISE_TH_PARAM_ID             (0x6C820057u)

#define Mux_CapSense_BUTTON1_HYSTERESIS_VALUE               (Mux_CapSense_dsRam.wdgtList.button1.hysteresis)
#define Mux_CapSense_BUTTON1_HYSTERESIS_OFFSET              (88u)
#define Mux_CapSense_BUTTON1_HYSTERESIS_SIZE                (1u)
#define Mux_CapSense_BUTTON1_HYSTERESIS_PARAM_ID            (0x65820058u)

#define Mux_CapSense_BUTTON1_ON_DEBOUNCE_VALUE              (Mux_CapSense_dsRam.wdgtList.button1.onDebounce)
#define Mux_CapSense_BUTTON1_ON_DEBOUNCE_OFFSET             (89u)
#define Mux_CapSense_BUTTON1_ON_DEBOUNCE_SIZE               (1u)
#define Mux_CapSense_BUTTON1_ON_DEBOUNCE_PARAM_ID           (0x63820059u)

#define Mux_CapSense_BUTTON1_LOW_BSLN_RST_VALUE             (Mux_CapSense_dsRam.wdgtList.button1.lowBslnRst)
#define Mux_CapSense_BUTTON1_LOW_BSLN_RST_OFFSET            (90u)
#define Mux_CapSense_BUTTON1_LOW_BSLN_RST_SIZE              (1u)
#define Mux_CapSense_BUTTON1_LOW_BSLN_RST_PARAM_ID          (0x6982005Au)

#define Mux_CapSense_BUTTON1_IDAC_MOD0_VALUE                (Mux_CapSense_dsRam.wdgtList.button1.idacMod[0u])
#define Mux_CapSense_BUTTON1_IDAC_MOD0_OFFSET               (91u)
#define Mux_CapSense_BUTTON1_IDAC_MOD0_SIZE                 (1u)
#define Mux_CapSense_BUTTON1_IDAC_MOD0_PARAM_ID             (0x6202005Bu)

#define Mux_CapSense_BUTTON1_ROW_IDAC_MOD0_VALUE            (Mux_CapSense_dsRam.wdgtList.button1.rowIdacMod[0u])
#define Mux_CapSense_BUTTON1_ROW_IDAC_MOD0_OFFSET           (92u)
#define Mux_CapSense_BUTTON1_ROW_IDAC_MOD0_SIZE             (1u)
#define Mux_CapSense_BUTTON1_ROW_IDAC_MOD0_PARAM_ID         (0x4202005Cu)

#define Mux_CapSense_BUTTON1_IDAC_GAIN_INDEX_VALUE          (Mux_CapSense_dsRam.wdgtList.button1.idacGainIndex)
#define Mux_CapSense_BUTTON1_IDAC_GAIN_INDEX_OFFSET         (93u)
#define Mux_CapSense_BUTTON1_IDAC_GAIN_INDEX_SIZE           (1u)
#define Mux_CapSense_BUTTON1_IDAC_GAIN_INDEX_PARAM_ID       (0x6282005Du)

#define Mux_CapSense_BUTTON1_SNS_CLK_VALUE                  (Mux_CapSense_dsRam.wdgtList.button1.snsClk)
#define Mux_CapSense_BUTTON1_SNS_CLK_OFFSET                 (94u)
#define Mux_CapSense_BUTTON1_SNS_CLK_SIZE                   (2u)
#define Mux_CapSense_BUTTON1_SNS_CLK_PARAM_ID               (0xA082005Eu)

#define Mux_CapSense_BUTTON1_ROW_SNS_CLK_VALUE              (Mux_CapSense_dsRam.wdgtList.button1.rowSnsClk)
#define Mux_CapSense_BUTTON1_ROW_SNS_CLK_OFFSET             (96u)
#define Mux_CapSense_BUTTON1_ROW_SNS_CLK_SIZE               (2u)
#define Mux_CapSense_BUTTON1_ROW_SNS_CLK_PARAM_ID           (0x8B820060u)

#define Mux_CapSense_BUTTON1_SNS_CLK_SOURCE_VALUE           (Mux_CapSense_dsRam.wdgtList.button1.snsClkSource)
#define Mux_CapSense_BUTTON1_SNS_CLK_SOURCE_OFFSET          (98u)
#define Mux_CapSense_BUTTON1_SNS_CLK_SOURCE_SIZE            (1u)
#define Mux_CapSense_BUTTON1_SNS_CLK_SOURCE_PARAM_ID        (0x4F820062u)

#define Mux_CapSense_BUTTON1_ROW_SNS_CLK_SOURCE_VALUE       (Mux_CapSense_dsRam.wdgtList.button1.rowSnsClkSource)
#define Mux_CapSense_BUTTON1_ROW_SNS_CLK_SOURCE_OFFSET      (99u)
#define Mux_CapSense_BUTTON1_ROW_SNS_CLK_SOURCE_SIZE        (1u)
#define Mux_CapSense_BUTTON1_ROW_SNS_CLK_SOURCE_PARAM_ID    (0x49820063u)

#define Mux_CapSense_BUTTON2_RESOLUTION_VALUE               (Mux_CapSense_dsRam.wdgtList.button2.resolution)
#define Mux_CapSense_BUTTON2_RESOLUTION_OFFSET              (100u)
#define Mux_CapSense_BUTTON2_RESOLUTION_SIZE                (2u)
#define Mux_CapSense_BUTTON2_RESOLUTION_PARAM_ID            (0xA2830064u)

#define Mux_CapSense_BUTTON2_FINGER_TH_VALUE                (Mux_CapSense_dsRam.wdgtList.button2.fingerTh)
#define Mux_CapSense_BUTTON2_FINGER_TH_OFFSET               (102u)
#define Mux_CapSense_BUTTON2_FINGER_TH_SIZE                 (2u)
#define Mux_CapSense_BUTTON2_FINGER_TH_PARAM_ID             (0xAE830066u)

#define Mux_CapSense_BUTTON2_NOISE_TH_VALUE                 (Mux_CapSense_dsRam.wdgtList.button2.noiseTh)
#define Mux_CapSense_BUTTON2_NOISE_TH_OFFSET                (104u)
#define Mux_CapSense_BUTTON2_NOISE_TH_SIZE                  (1u)
#define Mux_CapSense_BUTTON2_NOISE_TH_PARAM_ID              (0x69830068u)

#define Mux_CapSense_BUTTON2_NNOISE_TH_VALUE                (Mux_CapSense_dsRam.wdgtList.button2.nNoiseTh)
#define Mux_CapSense_BUTTON2_NNOISE_TH_OFFSET               (105u)
#define Mux_CapSense_BUTTON2_NNOISE_TH_SIZE                 (1u)
#define Mux_CapSense_BUTTON2_NNOISE_TH_PARAM_ID             (0x6F830069u)

#define Mux_CapSense_BUTTON2_HYSTERESIS_VALUE               (Mux_CapSense_dsRam.wdgtList.button2.hysteresis)
#define Mux_CapSense_BUTTON2_HYSTERESIS_OFFSET              (106u)
#define Mux_CapSense_BUTTON2_HYSTERESIS_SIZE                (1u)
#define Mux_CapSense_BUTTON2_HYSTERESIS_PARAM_ID            (0x6583006Au)

#define Mux_CapSense_BUTTON2_ON_DEBOUNCE_VALUE              (Mux_CapSense_dsRam.wdgtList.button2.onDebounce)
#define Mux_CapSense_BUTTON2_ON_DEBOUNCE_OFFSET             (107u)
#define Mux_CapSense_BUTTON2_ON_DEBOUNCE_SIZE               (1u)
#define Mux_CapSense_BUTTON2_ON_DEBOUNCE_PARAM_ID           (0x6383006Bu)

#define Mux_CapSense_BUTTON2_LOW_BSLN_RST_VALUE             (Mux_CapSense_dsRam.wdgtList.button2.lowBslnRst)
#define Mux_CapSense_BUTTON2_LOW_BSLN_RST_OFFSET            (108u)
#define Mux_CapSense_BUTTON2_LOW_BSLN_RST_SIZE              (1u)
#define Mux_CapSense_BUTTON2_LOW_BSLN_RST_PARAM_ID          (0x6883006Cu)

#define Mux_CapSense_BUTTON2_IDAC_MOD0_VALUE                (Mux_CapSense_dsRam.wdgtList.button2.idacMod[0u])
#define Mux_CapSense_BUTTON2_IDAC_MOD0_OFFSET               (109u)
#define Mux_CapSense_BUTTON2_IDAC_MOD0_SIZE                 (1u)
#define Mux_CapSense_BUTTON2_IDAC_MOD0_PARAM_ID             (0x6303006Du)

#define Mux_CapSense_BUTTON2_ROW_IDAC_MOD0_VALUE            (Mux_CapSense_dsRam.wdgtList.button2.rowIdacMod[0u])
#define Mux_CapSense_BUTTON2_ROW_IDAC_MOD0_OFFSET           (110u)
#define Mux_CapSense_BUTTON2_ROW_IDAC_MOD0_SIZE             (1u)
#define Mux_CapSense_BUTTON2_ROW_IDAC_MOD0_PARAM_ID         (0x4203006Eu)

#define Mux_CapSense_BUTTON2_IDAC_GAIN_INDEX_VALUE          (Mux_CapSense_dsRam.wdgtList.button2.idacGainIndex)
#define Mux_CapSense_BUTTON2_IDAC_GAIN_INDEX_OFFSET         (111u)
#define Mux_CapSense_BUTTON2_IDAC_GAIN_INDEX_SIZE           (1u)
#define Mux_CapSense_BUTTON2_IDAC_GAIN_INDEX_PARAM_ID       (0x6283006Fu)

#define Mux_CapSense_BUTTON2_SNS_CLK_VALUE                  (Mux_CapSense_dsRam.wdgtList.button2.snsClk)
#define Mux_CapSense_BUTTON2_SNS_CLK_OFFSET                 (112u)
#define Mux_CapSense_BUTTON2_SNS_CLK_SIZE                   (2u)
#define Mux_CapSense_BUTTON2_SNS_CLK_PARAM_ID               (0xA6830070u)

#define Mux_CapSense_BUTTON2_ROW_SNS_CLK_VALUE              (Mux_CapSense_dsRam.wdgtList.button2.rowSnsClk)
#define Mux_CapSense_BUTTON2_ROW_SNS_CLK_OFFSET             (114u)
#define Mux_CapSense_BUTTON2_ROW_SNS_CLK_SIZE               (2u)
#define Mux_CapSense_BUTTON2_ROW_SNS_CLK_PARAM_ID           (0x81830072u)

#define Mux_CapSense_BUTTON2_SNS_CLK_SOURCE_VALUE           (Mux_CapSense_dsRam.wdgtList.button2.snsClkSource)
#define Mux_CapSense_BUTTON2_SNS_CLK_SOURCE_OFFSET          (116u)
#define Mux_CapSense_BUTTON2_SNS_CLK_SOURCE_SIZE            (1u)
#define Mux_CapSense_BUTTON2_SNS_CLK_SOURCE_PARAM_ID        (0x44830074u)

#define Mux_CapSense_BUTTON2_ROW_SNS_CLK_SOURCE_VALUE       (Mux_CapSense_dsRam.wdgtList.button2.rowSnsClkSource)
#define Mux_CapSense_BUTTON2_ROW_SNS_CLK_SOURCE_OFFSET      (117u)
#define Mux_CapSense_BUTTON2_ROW_SNS_CLK_SOURCE_SIZE        (1u)
#define Mux_CapSense_BUTTON2_ROW_SNS_CLK_SOURCE_PARAM_ID    (0x42830075u)

#define Mux_CapSense_BUTTONRX0_RESOLUTION_VALUE             (Mux_CapSense_dsRam.wdgtList.buttonrx0.resolution)
#define Mux_CapSense_BUTTONRX0_RESOLUTION_OFFSET            (118u)
#define Mux_CapSense_BUTTONRX0_RESOLUTION_SIZE              (2u)
#define Mux_CapSense_BUTTONRX0_RESOLUTION_PARAM_ID          (0xA2840076u)

#define Mux_CapSense_BUTTONRX0_FINGER_TH_VALUE              (Mux_CapSense_dsRam.wdgtList.buttonrx0.fingerTh)
#define Mux_CapSense_BUTTONRX0_FINGER_TH_OFFSET             (120u)
#define Mux_CapSense_BUTTONRX0_FINGER_TH_SIZE               (2u)
#define Mux_CapSense_BUTTONRX0_FINGER_TH_PARAM_ID           (0xAD840078u)

#define Mux_CapSense_BUTTONRX0_NOISE_TH_VALUE               (Mux_CapSense_dsRam.wdgtList.buttonrx0.noiseTh)
#define Mux_CapSense_BUTTONRX0_NOISE_TH_OFFSET              (122u)
#define Mux_CapSense_BUTTONRX0_NOISE_TH_SIZE                (1u)
#define Mux_CapSense_BUTTONRX0_NOISE_TH_PARAM_ID            (0x6984007Au)

#define Mux_CapSense_BUTTONRX0_NNOISE_TH_VALUE              (Mux_CapSense_dsRam.wdgtList.buttonrx0.nNoiseTh)
#define Mux_CapSense_BUTTONRX0_NNOISE_TH_OFFSET             (123u)
#define Mux_CapSense_BUTTONRX0_NNOISE_TH_SIZE               (1u)
#define Mux_CapSense_BUTTONRX0_NNOISE_TH_PARAM_ID           (0x6F84007Bu)

#define Mux_CapSense_BUTTONRX0_HYSTERESIS_VALUE             (Mux_CapSense_dsRam.wdgtList.buttonrx0.hysteresis)
#define Mux_CapSense_BUTTONRX0_HYSTERESIS_OFFSET            (124u)
#define Mux_CapSense_BUTTONRX0_HYSTERESIS_SIZE              (1u)
#define Mux_CapSense_BUTTONRX0_HYSTERESIS_PARAM_ID          (0x6484007Cu)

#define Mux_CapSense_BUTTONRX0_ON_DEBOUNCE_VALUE            (Mux_CapSense_dsRam.wdgtList.buttonrx0.onDebounce)
#define Mux_CapSense_BUTTONRX0_ON_DEBOUNCE_OFFSET           (125u)
#define Mux_CapSense_BUTTONRX0_ON_DEBOUNCE_SIZE             (1u)
#define Mux_CapSense_BUTTONRX0_ON_DEBOUNCE_PARAM_ID         (0x6284007Du)

#define Mux_CapSense_BUTTONRX0_LOW_BSLN_RST_VALUE           (Mux_CapSense_dsRam.wdgtList.buttonrx0.lowBslnRst)
#define Mux_CapSense_BUTTONRX0_LOW_BSLN_RST_OFFSET          (126u)
#define Mux_CapSense_BUTTONRX0_LOW_BSLN_RST_SIZE            (1u)
#define Mux_CapSense_BUTTONRX0_LOW_BSLN_RST_PARAM_ID        (0x6884007Eu)

#define Mux_CapSense_BUTTONRX0_IDAC_MOD0_VALUE              (Mux_CapSense_dsRam.wdgtList.buttonrx0.idacMod[0u])
#define Mux_CapSense_BUTTONRX0_IDAC_MOD0_OFFSET             (127u)
#define Mux_CapSense_BUTTONRX0_IDAC_MOD0_SIZE               (1u)
#define Mux_CapSense_BUTTONRX0_IDAC_MOD0_PARAM_ID           (0x6304007Fu)

#define Mux_CapSense_BUTTONRX0_ROW_IDAC_MOD0_VALUE          (Mux_CapSense_dsRam.wdgtList.buttonrx0.rowIdacMod[0u])
#define Mux_CapSense_BUTTONRX0_ROW_IDAC_MOD0_OFFSET         (128u)
#define Mux_CapSense_BUTTONRX0_ROW_IDAC_MOD0_SIZE           (1u)
#define Mux_CapSense_BUTTONRX0_ROW_IDAC_MOD0_PARAM_ID       (0x40040080u)

#define Mux_CapSense_BUTTONRX0_IDAC_GAIN_INDEX_VALUE        (Mux_CapSense_dsRam.wdgtList.buttonrx0.idacGainIndex)
#define Mux_CapSense_BUTTONRX0_IDAC_GAIN_INDEX_OFFSET       (129u)
#define Mux_CapSense_BUTTONRX0_IDAC_GAIN_INDEX_SIZE         (1u)
#define Mux_CapSense_BUTTONRX0_IDAC_GAIN_INDEX_PARAM_ID     (0x60840081u)

#define Mux_CapSense_BUTTONRX0_SNS_CLK_VALUE                (Mux_CapSense_dsRam.wdgtList.buttonrx0.snsClk)
#define Mux_CapSense_BUTTONRX0_SNS_CLK_OFFSET               (130u)
#define Mux_CapSense_BUTTONRX0_SNS_CLK_SIZE                 (2u)
#define Mux_CapSense_BUTTONRX0_SNS_CLK_PARAM_ID             (0xA2840082u)

#define Mux_CapSense_BUTTONRX0_ROW_SNS_CLK_VALUE            (Mux_CapSense_dsRam.wdgtList.buttonrx0.rowSnsClk)
#define Mux_CapSense_BUTTONRX0_ROW_SNS_CLK_OFFSET           (132u)
#define Mux_CapSense_BUTTONRX0_ROW_SNS_CLK_SIZE             (2u)
#define Mux_CapSense_BUTTONRX0_ROW_SNS_CLK_PARAM_ID         (0x84840084u)

#define Mux_CapSense_BUTTONRX0_SNS_CLK_SOURCE_VALUE         (Mux_CapSense_dsRam.wdgtList.buttonrx0.snsClkSource)
#define Mux_CapSense_BUTTONRX0_SNS_CLK_SOURCE_OFFSET        (134u)
#define Mux_CapSense_BUTTONRX0_SNS_CLK_SOURCE_SIZE          (1u)
#define Mux_CapSense_BUTTONRX0_SNS_CLK_SOURCE_PARAM_ID      (0x40840086u)

#define Mux_CapSense_BUTTONRX0_ROW_SNS_CLK_SOURCE_VALUE     (Mux_CapSense_dsRam.wdgtList.buttonrx0.rowSnsClkSource)
#define Mux_CapSense_BUTTONRX0_ROW_SNS_CLK_SOURCE_OFFSET    (135u)
#define Mux_CapSense_BUTTONRX0_ROW_SNS_CLK_SOURCE_SIZE      (1u)
#define Mux_CapSense_BUTTONRX0_ROW_SNS_CLK_SOURCE_PARAM_ID  (0x46840087u)

#define Mux_CapSense_BUTTONRX1_RESOLUTION_VALUE             (Mux_CapSense_dsRam.wdgtList.buttonrx1.resolution)
#define Mux_CapSense_BUTTONRX1_RESOLUTION_OFFSET            (136u)
#define Mux_CapSense_BUTTONRX1_RESOLUTION_SIZE              (2u)
#define Mux_CapSense_BUTTONRX1_RESOLUTION_PARAM_ID          (0xAF850088u)

#define Mux_CapSense_BUTTONRX1_FINGER_TH_VALUE              (Mux_CapSense_dsRam.wdgtList.buttonrx1.fingerTh)
#define Mux_CapSense_BUTTONRX1_FINGER_TH_OFFSET             (138u)
#define Mux_CapSense_BUTTONRX1_FINGER_TH_SIZE               (2u)
#define Mux_CapSense_BUTTONRX1_FINGER_TH_PARAM_ID           (0xA385008Au)

#define Mux_CapSense_BUTTONRX1_NOISE_TH_VALUE               (Mux_CapSense_dsRam.wdgtList.buttonrx1.noiseTh)
#define Mux_CapSense_BUTTONRX1_NOISE_TH_OFFSET              (140u)
#define Mux_CapSense_BUTTONRX1_NOISE_TH_SIZE                (1u)
#define Mux_CapSense_BUTTONRX1_NOISE_TH_PARAM_ID            (0x6685008Cu)

#define Mux_CapSense_BUTTONRX1_NNOISE_TH_VALUE              (Mux_CapSense_dsRam.wdgtList.buttonrx1.nNoiseTh)
#define Mux_CapSense_BUTTONRX1_NNOISE_TH_OFFSET             (141u)
#define Mux_CapSense_BUTTONRX1_NNOISE_TH_SIZE               (1u)
#define Mux_CapSense_BUTTONRX1_NNOISE_TH_PARAM_ID           (0x6085008Du)

#define Mux_CapSense_BUTTONRX1_HYSTERESIS_VALUE             (Mux_CapSense_dsRam.wdgtList.buttonrx1.hysteresis)
#define Mux_CapSense_BUTTONRX1_HYSTERESIS_OFFSET            (142u)
#define Mux_CapSense_BUTTONRX1_HYSTERESIS_SIZE              (1u)
#define Mux_CapSense_BUTTONRX1_HYSTERESIS_PARAM_ID          (0x6A85008Eu)

#define Mux_CapSense_BUTTONRX1_ON_DEBOUNCE_VALUE            (Mux_CapSense_dsRam.wdgtList.buttonrx1.onDebounce)
#define Mux_CapSense_BUTTONRX1_ON_DEBOUNCE_OFFSET           (143u)
#define Mux_CapSense_BUTTONRX1_ON_DEBOUNCE_SIZE             (1u)
#define Mux_CapSense_BUTTONRX1_ON_DEBOUNCE_PARAM_ID         (0x6C85008Fu)

#define Mux_CapSense_BUTTONRX1_LOW_BSLN_RST_VALUE           (Mux_CapSense_dsRam.wdgtList.buttonrx1.lowBslnRst)
#define Mux_CapSense_BUTTONRX1_LOW_BSLN_RST_OFFSET          (144u)
#define Mux_CapSense_BUTTONRX1_LOW_BSLN_RST_SIZE            (1u)
#define Mux_CapSense_BUTTONRX1_LOW_BSLN_RST_PARAM_ID        (0x60850090u)

#define Mux_CapSense_BUTTONRX1_IDAC_MOD0_VALUE              (Mux_CapSense_dsRam.wdgtList.buttonrx1.idacMod[0u])
#define Mux_CapSense_BUTTONRX1_IDAC_MOD0_OFFSET             (145u)
#define Mux_CapSense_BUTTONRX1_IDAC_MOD0_SIZE               (1u)
#define Mux_CapSense_BUTTONRX1_IDAC_MOD0_PARAM_ID           (0x6B050091u)

#define Mux_CapSense_BUTTONRX1_ROW_IDAC_MOD0_VALUE          (Mux_CapSense_dsRam.wdgtList.buttonrx1.rowIdacMod[0u])
#define Mux_CapSense_BUTTONRX1_ROW_IDAC_MOD0_OFFSET         (146u)
#define Mux_CapSense_BUTTONRX1_ROW_IDAC_MOD0_SIZE           (1u)
#define Mux_CapSense_BUTTONRX1_ROW_IDAC_MOD0_PARAM_ID       (0x4A050092u)

#define Mux_CapSense_BUTTONRX1_IDAC_GAIN_INDEX_VALUE        (Mux_CapSense_dsRam.wdgtList.buttonrx1.idacGainIndex)
#define Mux_CapSense_BUTTONRX1_IDAC_GAIN_INDEX_OFFSET       (147u)
#define Mux_CapSense_BUTTONRX1_IDAC_GAIN_INDEX_SIZE         (1u)
#define Mux_CapSense_BUTTONRX1_IDAC_GAIN_INDEX_PARAM_ID     (0x6A850093u)

#define Mux_CapSense_BUTTONRX1_SNS_CLK_VALUE                (Mux_CapSense_dsRam.wdgtList.buttonrx1.snsClk)
#define Mux_CapSense_BUTTONRX1_SNS_CLK_OFFSET               (148u)
#define Mux_CapSense_BUTTONRX1_SNS_CLK_SIZE                 (2u)
#define Mux_CapSense_BUTTONRX1_SNS_CLK_PARAM_ID             (0xA9850094u)

#define Mux_CapSense_BUTTONRX1_ROW_SNS_CLK_VALUE            (Mux_CapSense_dsRam.wdgtList.buttonrx1.rowSnsClk)
#define Mux_CapSense_BUTTONRX1_ROW_SNS_CLK_OFFSET           (150u)
#define Mux_CapSense_BUTTONRX1_ROW_SNS_CLK_SIZE             (2u)
#define Mux_CapSense_BUTTONRX1_ROW_SNS_CLK_PARAM_ID         (0x8E850096u)

#define Mux_CapSense_BUTTONRX1_SNS_CLK_SOURCE_VALUE         (Mux_CapSense_dsRam.wdgtList.buttonrx1.snsClkSource)
#define Mux_CapSense_BUTTONRX1_SNS_CLK_SOURCE_OFFSET        (152u)
#define Mux_CapSense_BUTTONRX1_SNS_CLK_SOURCE_SIZE          (1u)
#define Mux_CapSense_BUTTONRX1_SNS_CLK_SOURCE_PARAM_ID      (0x49850098u)

#define Mux_CapSense_BUTTONRX1_ROW_SNS_CLK_SOURCE_VALUE     (Mux_CapSense_dsRam.wdgtList.buttonrx1.rowSnsClkSource)
#define Mux_CapSense_BUTTONRX1_ROW_SNS_CLK_SOURCE_OFFSET    (153u)
#define Mux_CapSense_BUTTONRX1_ROW_SNS_CLK_SOURCE_SIZE      (1u)
#define Mux_CapSense_BUTTONRX1_ROW_SNS_CLK_SOURCE_PARAM_ID  (0x4F850099u)

#define Mux_CapSense_BUTTONRX2_RESOLUTION_VALUE             (Mux_CapSense_dsRam.wdgtList.buttonrx2.resolution)
#define Mux_CapSense_BUTTONRX2_RESOLUTION_OFFSET            (154u)
#define Mux_CapSense_BUTTONRX2_RESOLUTION_SIZE              (2u)
#define Mux_CapSense_BUTTONRX2_RESOLUTION_PARAM_ID          (0xA386009Au)

#define Mux_CapSense_BUTTONRX2_FINGER_TH_VALUE              (Mux_CapSense_dsRam.wdgtList.buttonrx2.fingerTh)
#define Mux_CapSense_BUTTONRX2_FINGER_TH_OFFSET             (156u)
#define Mux_CapSense_BUTTONRX2_FINGER_TH_SIZE               (2u)
#define Mux_CapSense_BUTTONRX2_FINGER_TH_PARAM_ID           (0xAE86009Cu)

#define Mux_CapSense_BUTTONRX2_NOISE_TH_VALUE               (Mux_CapSense_dsRam.wdgtList.buttonrx2.noiseTh)
#define Mux_CapSense_BUTTONRX2_NOISE_TH_OFFSET              (158u)
#define Mux_CapSense_BUTTONRX2_NOISE_TH_SIZE                (1u)
#define Mux_CapSense_BUTTONRX2_NOISE_TH_PARAM_ID            (0x6A86009Eu)

#define Mux_CapSense_BUTTONRX2_NNOISE_TH_VALUE              (Mux_CapSense_dsRam.wdgtList.buttonrx2.nNoiseTh)
#define Mux_CapSense_BUTTONRX2_NNOISE_TH_OFFSET             (159u)
#define Mux_CapSense_BUTTONRX2_NNOISE_TH_SIZE               (1u)
#define Mux_CapSense_BUTTONRX2_NNOISE_TH_PARAM_ID           (0x6C86009Fu)

#define Mux_CapSense_BUTTONRX2_HYSTERESIS_VALUE             (Mux_CapSense_dsRam.wdgtList.buttonrx2.hysteresis)
#define Mux_CapSense_BUTTONRX2_HYSTERESIS_OFFSET            (160u)
#define Mux_CapSense_BUTTONRX2_HYSTERESIS_SIZE              (1u)
#define Mux_CapSense_BUTTONRX2_HYSTERESIS_PARAM_ID          (0x6A8600A0u)

#define Mux_CapSense_BUTTONRX2_ON_DEBOUNCE_VALUE            (Mux_CapSense_dsRam.wdgtList.buttonrx2.onDebounce)
#define Mux_CapSense_BUTTONRX2_ON_DEBOUNCE_OFFSET           (161u)
#define Mux_CapSense_BUTTONRX2_ON_DEBOUNCE_SIZE             (1u)
#define Mux_CapSense_BUTTONRX2_ON_DEBOUNCE_PARAM_ID         (0x6C8600A1u)

#define Mux_CapSense_BUTTONRX2_LOW_BSLN_RST_VALUE           (Mux_CapSense_dsRam.wdgtList.buttonrx2.lowBslnRst)
#define Mux_CapSense_BUTTONRX2_LOW_BSLN_RST_OFFSET          (162u)
#define Mux_CapSense_BUTTONRX2_LOW_BSLN_RST_SIZE            (1u)
#define Mux_CapSense_BUTTONRX2_LOW_BSLN_RST_PARAM_ID        (0x668600A2u)

#define Mux_CapSense_BUTTONRX2_IDAC_MOD0_VALUE              (Mux_CapSense_dsRam.wdgtList.buttonrx2.idacMod[0u])
#define Mux_CapSense_BUTTONRX2_IDAC_MOD0_OFFSET             (163u)
#define Mux_CapSense_BUTTONRX2_IDAC_MOD0_SIZE               (1u)
#define Mux_CapSense_BUTTONRX2_IDAC_MOD0_PARAM_ID           (0x6D0600A3u)

#define Mux_CapSense_BUTTONRX2_ROW_IDAC_MOD0_VALUE          (Mux_CapSense_dsRam.wdgtList.buttonrx2.rowIdacMod[0u])
#define Mux_CapSense_BUTTONRX2_ROW_IDAC_MOD0_OFFSET         (164u)
#define Mux_CapSense_BUTTONRX2_ROW_IDAC_MOD0_SIZE           (1u)
#define Mux_CapSense_BUTTONRX2_ROW_IDAC_MOD0_PARAM_ID       (0x4D0600A4u)

#define Mux_CapSense_BUTTONRX2_IDAC_GAIN_INDEX_VALUE        (Mux_CapSense_dsRam.wdgtList.buttonrx2.idacGainIndex)
#define Mux_CapSense_BUTTONRX2_IDAC_GAIN_INDEX_OFFSET       (165u)
#define Mux_CapSense_BUTTONRX2_IDAC_GAIN_INDEX_SIZE         (1u)
#define Mux_CapSense_BUTTONRX2_IDAC_GAIN_INDEX_PARAM_ID     (0x6D8600A5u)

#define Mux_CapSense_BUTTONRX2_SNS_CLK_VALUE                (Mux_CapSense_dsRam.wdgtList.buttonrx2.snsClk)
#define Mux_CapSense_BUTTONRX2_SNS_CLK_OFFSET               (166u)
#define Mux_CapSense_BUTTONRX2_SNS_CLK_SIZE                 (2u)
#define Mux_CapSense_BUTTONRX2_SNS_CLK_PARAM_ID             (0xAF8600A6u)

#define Mux_CapSense_BUTTONRX2_ROW_SNS_CLK_VALUE            (Mux_CapSense_dsRam.wdgtList.buttonrx2.rowSnsClk)
#define Mux_CapSense_BUTTONRX2_ROW_SNS_CLK_OFFSET           (168u)
#define Mux_CapSense_BUTTONRX2_ROW_SNS_CLK_SIZE             (2u)
#define Mux_CapSense_BUTTONRX2_ROW_SNS_CLK_PARAM_ID         (0x8B8600A8u)

#define Mux_CapSense_BUTTONRX2_SNS_CLK_SOURCE_VALUE         (Mux_CapSense_dsRam.wdgtList.buttonrx2.snsClkSource)
#define Mux_CapSense_BUTTONRX2_SNS_CLK_SOURCE_OFFSET        (170u)
#define Mux_CapSense_BUTTONRX2_SNS_CLK_SOURCE_SIZE          (1u)
#define Mux_CapSense_BUTTONRX2_SNS_CLK_SOURCE_PARAM_ID      (0x4F8600AAu)

#define Mux_CapSense_BUTTONRX2_ROW_SNS_CLK_SOURCE_VALUE     (Mux_CapSense_dsRam.wdgtList.buttonrx2.rowSnsClkSource)
#define Mux_CapSense_BUTTONRX2_ROW_SNS_CLK_SOURCE_OFFSET    (171u)
#define Mux_CapSense_BUTTONRX2_ROW_SNS_CLK_SOURCE_SIZE      (1u)
#define Mux_CapSense_BUTTONRX2_ROW_SNS_CLK_SOURCE_PARAM_ID  (0x498600ABu)

#define Mux_CapSense_TRACKPAD_COL0_RAW0_VALUE               (Mux_CapSense_dsRam.snsList.trackpad[0u].raw[0u])
#define Mux_CapSense_TRACKPAD_COL0_RAW0_OFFSET              (172u)
#define Mux_CapSense_TRACKPAD_COL0_RAW0_SIZE                (2u)
#define Mux_CapSense_TRACKPAD_COL0_RAW0_PARAM_ID            (0x8D0000ACu)

#define Mux_CapSense_TRACKPAD_COL0_BSLN0_VALUE              (Mux_CapSense_dsRam.snsList.trackpad[0u].bsln[0u])
#define Mux_CapSense_TRACKPAD_COL0_BSLN0_OFFSET             (174u)
#define Mux_CapSense_TRACKPAD_COL0_BSLN0_SIZE               (2u)
#define Mux_CapSense_TRACKPAD_COL0_BSLN0_PARAM_ID           (0x810000AEu)

#define Mux_CapSense_TRACKPAD_COL0_BSLN_EXT0_VALUE          (Mux_CapSense_dsRam.snsList.trackpad[0u].bslnExt[0u])
#define Mux_CapSense_TRACKPAD_COL0_BSLN_EXT0_OFFSET         (176u)
#define Mux_CapSense_TRACKPAD_COL0_BSLN_EXT0_SIZE           (1u)
#define Mux_CapSense_TRACKPAD_COL0_BSLN_EXT0_PARAM_ID       (0x430000B0u)

#define Mux_CapSense_TRACKPAD_COL0_DIFF_VALUE               (Mux_CapSense_dsRam.snsList.trackpad[0u].diff)
#define Mux_CapSense_TRACKPAD_COL0_DIFF_OFFSET              (178u)
#define Mux_CapSense_TRACKPAD_COL0_DIFF_SIZE                (2u)
#define Mux_CapSense_TRACKPAD_COL0_DIFF_PARAM_ID            (0x870000B2u)

#define Mux_CapSense_TRACKPAD_COL0_NEG_BSLN_RST_CNT0_VALUE  (Mux_CapSense_dsRam.snsList.trackpad[0u].negBslnRstCnt[0u])
#define Mux_CapSense_TRACKPAD_COL0_NEG_BSLN_RST_CNT0_OFFSET (180u)
#define Mux_CapSense_TRACKPAD_COL0_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define Mux_CapSense_TRACKPAD_COL0_NEG_BSLN_RST_CNT0_PARAM_ID (0x420000B4u)

#define Mux_CapSense_TRACKPAD_COL0_IDAC_COMP0_VALUE         (Mux_CapSense_dsRam.snsList.trackpad[0u].idacComp[0u])
#define Mux_CapSense_TRACKPAD_COL0_IDAC_COMP0_OFFSET        (181u)
#define Mux_CapSense_TRACKPAD_COL0_IDAC_COMP0_SIZE          (1u)
#define Mux_CapSense_TRACKPAD_COL0_IDAC_COMP0_PARAM_ID      (0x6F0000B5u)

#define Mux_CapSense_TRACKPAD_COL1_RAW0_VALUE               (Mux_CapSense_dsRam.snsList.trackpad[1u].raw[0u])
#define Mux_CapSense_TRACKPAD_COL1_RAW0_OFFSET              (182u)
#define Mux_CapSense_TRACKPAD_COL1_RAW0_SIZE                (2u)
#define Mux_CapSense_TRACKPAD_COL1_RAW0_PARAM_ID            (0x860000B6u)

#define Mux_CapSense_TRACKPAD_COL1_BSLN0_VALUE              (Mux_CapSense_dsRam.snsList.trackpad[1u].bsln[0u])
#define Mux_CapSense_TRACKPAD_COL1_BSLN0_OFFSET             (184u)
#define Mux_CapSense_TRACKPAD_COL1_BSLN0_SIZE               (2u)
#define Mux_CapSense_TRACKPAD_COL1_BSLN0_PARAM_ID           (0x890000B8u)

#define Mux_CapSense_TRACKPAD_COL1_BSLN_EXT0_VALUE          (Mux_CapSense_dsRam.snsList.trackpad[1u].bslnExt[0u])
#define Mux_CapSense_TRACKPAD_COL1_BSLN_EXT0_OFFSET         (186u)
#define Mux_CapSense_TRACKPAD_COL1_BSLN_EXT0_SIZE           (1u)
#define Mux_CapSense_TRACKPAD_COL1_BSLN_EXT0_PARAM_ID       (0x4D0000BAu)

#define Mux_CapSense_TRACKPAD_COL1_DIFF_VALUE               (Mux_CapSense_dsRam.snsList.trackpad[1u].diff)
#define Mux_CapSense_TRACKPAD_COL1_DIFF_OFFSET              (188u)
#define Mux_CapSense_TRACKPAD_COL1_DIFF_SIZE                (2u)
#define Mux_CapSense_TRACKPAD_COL1_DIFF_PARAM_ID            (0x880000BCu)

#define Mux_CapSense_TRACKPAD_COL1_NEG_BSLN_RST_CNT0_VALUE  (Mux_CapSense_dsRam.snsList.trackpad[1u].negBslnRstCnt[0u])
#define Mux_CapSense_TRACKPAD_COL1_NEG_BSLN_RST_CNT0_OFFSET (190u)
#define Mux_CapSense_TRACKPAD_COL1_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define Mux_CapSense_TRACKPAD_COL1_NEG_BSLN_RST_CNT0_PARAM_ID (0x4C0000BEu)

#define Mux_CapSense_TRACKPAD_COL1_IDAC_COMP0_VALUE         (Mux_CapSense_dsRam.snsList.trackpad[1u].idacComp[0u])
#define Mux_CapSense_TRACKPAD_COL1_IDAC_COMP0_OFFSET        (191u)
#define Mux_CapSense_TRACKPAD_COL1_IDAC_COMP0_SIZE          (1u)
#define Mux_CapSense_TRACKPAD_COL1_IDAC_COMP0_PARAM_ID      (0x610000BFu)

#define Mux_CapSense_TRACKPAD_COL2_RAW0_VALUE               (Mux_CapSense_dsRam.snsList.trackpad[2u].raw[0u])
#define Mux_CapSense_TRACKPAD_COL2_RAW0_OFFSET              (192u)
#define Mux_CapSense_TRACKPAD_COL2_RAW0_SIZE                (2u)
#define Mux_CapSense_TRACKPAD_COL2_RAW0_PARAM_ID            (0x890000C0u)

#define Mux_CapSense_TRACKPAD_COL2_BSLN0_VALUE              (Mux_CapSense_dsRam.snsList.trackpad[2u].bsln[0u])
#define Mux_CapSense_TRACKPAD_COL2_BSLN0_OFFSET             (194u)
#define Mux_CapSense_TRACKPAD_COL2_BSLN0_SIZE               (2u)
#define Mux_CapSense_TRACKPAD_COL2_BSLN0_PARAM_ID           (0x850000C2u)

#define Mux_CapSense_TRACKPAD_COL2_BSLN_EXT0_VALUE          (Mux_CapSense_dsRam.snsList.trackpad[2u].bslnExt[0u])
#define Mux_CapSense_TRACKPAD_COL2_BSLN_EXT0_OFFSET         (196u)
#define Mux_CapSense_TRACKPAD_COL2_BSLN_EXT0_SIZE           (1u)
#define Mux_CapSense_TRACKPAD_COL2_BSLN_EXT0_PARAM_ID       (0x400000C4u)

#define Mux_CapSense_TRACKPAD_COL2_DIFF_VALUE               (Mux_CapSense_dsRam.snsList.trackpad[2u].diff)
#define Mux_CapSense_TRACKPAD_COL2_DIFF_OFFSET              (198u)
#define Mux_CapSense_TRACKPAD_COL2_DIFF_SIZE                (2u)
#define Mux_CapSense_TRACKPAD_COL2_DIFF_PARAM_ID            (0x840000C6u)

#define Mux_CapSense_TRACKPAD_COL2_NEG_BSLN_RST_CNT0_VALUE  (Mux_CapSense_dsRam.snsList.trackpad[2u].negBslnRstCnt[0u])
#define Mux_CapSense_TRACKPAD_COL2_NEG_BSLN_RST_CNT0_OFFSET (200u)
#define Mux_CapSense_TRACKPAD_COL2_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define Mux_CapSense_TRACKPAD_COL2_NEG_BSLN_RST_CNT0_PARAM_ID (0x430000C8u)

#define Mux_CapSense_TRACKPAD_COL2_IDAC_COMP0_VALUE         (Mux_CapSense_dsRam.snsList.trackpad[2u].idacComp[0u])
#define Mux_CapSense_TRACKPAD_COL2_IDAC_COMP0_OFFSET        (201u)
#define Mux_CapSense_TRACKPAD_COL2_IDAC_COMP0_SIZE          (1u)
#define Mux_CapSense_TRACKPAD_COL2_IDAC_COMP0_PARAM_ID      (0x6E0000C9u)

#define Mux_CapSense_TRACKPAD_COL3_RAW0_VALUE               (Mux_CapSense_dsRam.snsList.trackpad[3u].raw[0u])
#define Mux_CapSense_TRACKPAD_COL3_RAW0_OFFSET              (202u)
#define Mux_CapSense_TRACKPAD_COL3_RAW0_SIZE                (2u)
#define Mux_CapSense_TRACKPAD_COL3_RAW0_PARAM_ID            (0x870000CAu)

#define Mux_CapSense_TRACKPAD_COL3_BSLN0_VALUE              (Mux_CapSense_dsRam.snsList.trackpad[3u].bsln[0u])
#define Mux_CapSense_TRACKPAD_COL3_BSLN0_OFFSET             (204u)
#define Mux_CapSense_TRACKPAD_COL3_BSLN0_SIZE               (2u)
#define Mux_CapSense_TRACKPAD_COL3_BSLN0_PARAM_ID           (0x8A0000CCu)

#define Mux_CapSense_TRACKPAD_COL3_BSLN_EXT0_VALUE          (Mux_CapSense_dsRam.snsList.trackpad[3u].bslnExt[0u])
#define Mux_CapSense_TRACKPAD_COL3_BSLN_EXT0_OFFSET         (206u)
#define Mux_CapSense_TRACKPAD_COL3_BSLN_EXT0_SIZE           (1u)
#define Mux_CapSense_TRACKPAD_COL3_BSLN_EXT0_PARAM_ID       (0x4E0000CEu)

#define Mux_CapSense_TRACKPAD_COL3_DIFF_VALUE               (Mux_CapSense_dsRam.snsList.trackpad[3u].diff)
#define Mux_CapSense_TRACKPAD_COL3_DIFF_OFFSET              (208u)
#define Mux_CapSense_TRACKPAD_COL3_DIFF_SIZE                (2u)
#define Mux_CapSense_TRACKPAD_COL3_DIFF_PARAM_ID            (0x8C0000D0u)

#define Mux_CapSense_TRACKPAD_COL3_NEG_BSLN_RST_CNT0_VALUE  (Mux_CapSense_dsRam.snsList.trackpad[3u].negBslnRstCnt[0u])
#define Mux_CapSense_TRACKPAD_COL3_NEG_BSLN_RST_CNT0_OFFSET (210u)
#define Mux_CapSense_TRACKPAD_COL3_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define Mux_CapSense_TRACKPAD_COL3_NEG_BSLN_RST_CNT0_PARAM_ID (0x480000D2u)

#define Mux_CapSense_TRACKPAD_COL3_IDAC_COMP0_VALUE         (Mux_CapSense_dsRam.snsList.trackpad[3u].idacComp[0u])
#define Mux_CapSense_TRACKPAD_COL3_IDAC_COMP0_OFFSET        (211u)
#define Mux_CapSense_TRACKPAD_COL3_IDAC_COMP0_SIZE          (1u)
#define Mux_CapSense_TRACKPAD_COL3_IDAC_COMP0_PARAM_ID      (0x650000D3u)

#define Mux_CapSense_TRACKPAD_COL4_RAW0_VALUE               (Mux_CapSense_dsRam.snsList.trackpad[4u].raw[0u])
#define Mux_CapSense_TRACKPAD_COL4_RAW0_OFFSET              (212u)
#define Mux_CapSense_TRACKPAD_COL4_RAW0_SIZE                (2u)
#define Mux_CapSense_TRACKPAD_COL4_RAW0_PARAM_ID            (0x8D0000D4u)

#define Mux_CapSense_TRACKPAD_COL4_BSLN0_VALUE              (Mux_CapSense_dsRam.snsList.trackpad[4u].bsln[0u])
#define Mux_CapSense_TRACKPAD_COL4_BSLN0_OFFSET             (214u)
#define Mux_CapSense_TRACKPAD_COL4_BSLN0_SIZE               (2u)
#define Mux_CapSense_TRACKPAD_COL4_BSLN0_PARAM_ID           (0x810000D6u)

#define Mux_CapSense_TRACKPAD_COL4_BSLN_EXT0_VALUE          (Mux_CapSense_dsRam.snsList.trackpad[4u].bslnExt[0u])
#define Mux_CapSense_TRACKPAD_COL4_BSLN_EXT0_OFFSET         (216u)
#define Mux_CapSense_TRACKPAD_COL4_BSLN_EXT0_SIZE           (1u)
#define Mux_CapSense_TRACKPAD_COL4_BSLN_EXT0_PARAM_ID       (0x460000D8u)

#define Mux_CapSense_TRACKPAD_COL4_DIFF_VALUE               (Mux_CapSense_dsRam.snsList.trackpad[4u].diff)
#define Mux_CapSense_TRACKPAD_COL4_DIFF_OFFSET              (218u)
#define Mux_CapSense_TRACKPAD_COL4_DIFF_SIZE                (2u)
#define Mux_CapSense_TRACKPAD_COL4_DIFF_PARAM_ID            (0x820000DAu)

#define Mux_CapSense_TRACKPAD_COL4_NEG_BSLN_RST_CNT0_VALUE  (Mux_CapSense_dsRam.snsList.trackpad[4u].negBslnRstCnt[0u])
#define Mux_CapSense_TRACKPAD_COL4_NEG_BSLN_RST_CNT0_OFFSET (220u)
#define Mux_CapSense_TRACKPAD_COL4_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define Mux_CapSense_TRACKPAD_COL4_NEG_BSLN_RST_CNT0_PARAM_ID (0x470000DCu)

#define Mux_CapSense_TRACKPAD_COL4_IDAC_COMP0_VALUE         (Mux_CapSense_dsRam.snsList.trackpad[4u].idacComp[0u])
#define Mux_CapSense_TRACKPAD_COL4_IDAC_COMP0_OFFSET        (221u)
#define Mux_CapSense_TRACKPAD_COL4_IDAC_COMP0_SIZE          (1u)
#define Mux_CapSense_TRACKPAD_COL4_IDAC_COMP0_PARAM_ID      (0x6A0000DDu)

#define Mux_CapSense_TRACKPAD_COL5_RAW0_VALUE               (Mux_CapSense_dsRam.snsList.trackpad[5u].raw[0u])
#define Mux_CapSense_TRACKPAD_COL5_RAW0_OFFSET              (222u)
#define Mux_CapSense_TRACKPAD_COL5_RAW0_SIZE                (2u)
#define Mux_CapSense_TRACKPAD_COL5_RAW0_PARAM_ID            (0x830000DEu)

#define Mux_CapSense_TRACKPAD_COL5_BSLN0_VALUE              (Mux_CapSense_dsRam.snsList.trackpad[5u].bsln[0u])
#define Mux_CapSense_TRACKPAD_COL5_BSLN0_OFFSET             (224u)
#define Mux_CapSense_TRACKPAD_COL5_BSLN0_SIZE               (2u)
#define Mux_CapSense_TRACKPAD_COL5_BSLN0_PARAM_ID           (0x830000E0u)

#define Mux_CapSense_TRACKPAD_COL5_BSLN_EXT0_VALUE          (Mux_CapSense_dsRam.snsList.trackpad[5u].bslnExt[0u])
#define Mux_CapSense_TRACKPAD_COL5_BSLN_EXT0_OFFSET         (226u)
#define Mux_CapSense_TRACKPAD_COL5_BSLN_EXT0_SIZE           (1u)
#define Mux_CapSense_TRACKPAD_COL5_BSLN_EXT0_PARAM_ID       (0x470000E2u)

#define Mux_CapSense_TRACKPAD_COL5_DIFF_VALUE               (Mux_CapSense_dsRam.snsList.trackpad[5u].diff)
#define Mux_CapSense_TRACKPAD_COL5_DIFF_OFFSET              (228u)
#define Mux_CapSense_TRACKPAD_COL5_DIFF_SIZE                (2u)
#define Mux_CapSense_TRACKPAD_COL5_DIFF_PARAM_ID            (0x820000E4u)

#define Mux_CapSense_TRACKPAD_COL5_NEG_BSLN_RST_CNT0_VALUE  (Mux_CapSense_dsRam.snsList.trackpad[5u].negBslnRstCnt[0u])
#define Mux_CapSense_TRACKPAD_COL5_NEG_BSLN_RST_CNT0_OFFSET (230u)
#define Mux_CapSense_TRACKPAD_COL5_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define Mux_CapSense_TRACKPAD_COL5_NEG_BSLN_RST_CNT0_PARAM_ID (0x460000E6u)

#define Mux_CapSense_TRACKPAD_COL5_IDAC_COMP0_VALUE         (Mux_CapSense_dsRam.snsList.trackpad[5u].idacComp[0u])
#define Mux_CapSense_TRACKPAD_COL5_IDAC_COMP0_OFFSET        (231u)
#define Mux_CapSense_TRACKPAD_COL5_IDAC_COMP0_SIZE          (1u)
#define Mux_CapSense_TRACKPAD_COL5_IDAC_COMP0_PARAM_ID      (0x6B0000E7u)

#define Mux_CapSense_TRACKPAD_ROW0_RAW0_VALUE               (Mux_CapSense_dsRam.snsList.trackpad[6u].raw[0u])
#define Mux_CapSense_TRACKPAD_ROW0_RAW0_OFFSET              (232u)
#define Mux_CapSense_TRACKPAD_ROW0_RAW0_SIZE                (2u)
#define Mux_CapSense_TRACKPAD_ROW0_RAW0_PARAM_ID            (0x810000E8u)

#define Mux_CapSense_TRACKPAD_ROW0_BSLN0_VALUE              (Mux_CapSense_dsRam.snsList.trackpad[6u].bsln[0u])
#define Mux_CapSense_TRACKPAD_ROW0_BSLN0_OFFSET             (234u)
#define Mux_CapSense_TRACKPAD_ROW0_BSLN0_SIZE               (2u)
#define Mux_CapSense_TRACKPAD_ROW0_BSLN0_PARAM_ID           (0x8D0000EAu)

#define Mux_CapSense_TRACKPAD_ROW0_BSLN_EXT0_VALUE          (Mux_CapSense_dsRam.snsList.trackpad[6u].bslnExt[0u])
#define Mux_CapSense_TRACKPAD_ROW0_BSLN_EXT0_OFFSET         (236u)
#define Mux_CapSense_TRACKPAD_ROW0_BSLN_EXT0_SIZE           (1u)
#define Mux_CapSense_TRACKPAD_ROW0_BSLN_EXT0_PARAM_ID       (0x480000ECu)

#define Mux_CapSense_TRACKPAD_ROW0_DIFF_VALUE               (Mux_CapSense_dsRam.snsList.trackpad[6u].diff)
#define Mux_CapSense_TRACKPAD_ROW0_DIFF_OFFSET              (238u)
#define Mux_CapSense_TRACKPAD_ROW0_DIFF_SIZE                (2u)
#define Mux_CapSense_TRACKPAD_ROW0_DIFF_PARAM_ID            (0x8C0000EEu)

#define Mux_CapSense_TRACKPAD_ROW0_NEG_BSLN_RST_CNT0_VALUE  (Mux_CapSense_dsRam.snsList.trackpad[6u].negBslnRstCnt[0u])
#define Mux_CapSense_TRACKPAD_ROW0_NEG_BSLN_RST_CNT0_OFFSET (240u)
#define Mux_CapSense_TRACKPAD_ROW0_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define Mux_CapSense_TRACKPAD_ROW0_NEG_BSLN_RST_CNT0_PARAM_ID (0x4E0000F0u)

#define Mux_CapSense_TRACKPAD_ROW0_IDAC_COMP0_VALUE         (Mux_CapSense_dsRam.snsList.trackpad[6u].idacComp[0u])
#define Mux_CapSense_TRACKPAD_ROW0_IDAC_COMP0_OFFSET        (241u)
#define Mux_CapSense_TRACKPAD_ROW0_IDAC_COMP0_SIZE          (1u)
#define Mux_CapSense_TRACKPAD_ROW0_IDAC_COMP0_PARAM_ID      (0x630000F1u)

#define Mux_CapSense_TRACKPAD_ROW1_RAW0_VALUE               (Mux_CapSense_dsRam.snsList.trackpad[7u].raw[0u])
#define Mux_CapSense_TRACKPAD_ROW1_RAW0_OFFSET              (242u)
#define Mux_CapSense_TRACKPAD_ROW1_RAW0_SIZE                (2u)
#define Mux_CapSense_TRACKPAD_ROW1_RAW0_PARAM_ID            (0x8A0000F2u)

#define Mux_CapSense_TRACKPAD_ROW1_BSLN0_VALUE              (Mux_CapSense_dsRam.snsList.trackpad[7u].bsln[0u])
#define Mux_CapSense_TRACKPAD_ROW1_BSLN0_OFFSET             (244u)
#define Mux_CapSense_TRACKPAD_ROW1_BSLN0_SIZE               (2u)
#define Mux_CapSense_TRACKPAD_ROW1_BSLN0_PARAM_ID           (0x870000F4u)

#define Mux_CapSense_TRACKPAD_ROW1_BSLN_EXT0_VALUE          (Mux_CapSense_dsRam.snsList.trackpad[7u].bslnExt[0u])
#define Mux_CapSense_TRACKPAD_ROW1_BSLN_EXT0_OFFSET         (246u)
#define Mux_CapSense_TRACKPAD_ROW1_BSLN_EXT0_SIZE           (1u)
#define Mux_CapSense_TRACKPAD_ROW1_BSLN_EXT0_PARAM_ID       (0x430000F6u)

#define Mux_CapSense_TRACKPAD_ROW1_DIFF_VALUE               (Mux_CapSense_dsRam.snsList.trackpad[7u].diff)
#define Mux_CapSense_TRACKPAD_ROW1_DIFF_OFFSET              (248u)
#define Mux_CapSense_TRACKPAD_ROW1_DIFF_SIZE                (2u)
#define Mux_CapSense_TRACKPAD_ROW1_DIFF_PARAM_ID            (0x840000F8u)

#define Mux_CapSense_TRACKPAD_ROW1_NEG_BSLN_RST_CNT0_VALUE  (Mux_CapSense_dsRam.snsList.trackpad[7u].negBslnRstCnt[0u])
#define Mux_CapSense_TRACKPAD_ROW1_NEG_BSLN_RST_CNT0_OFFSET (250u)
#define Mux_CapSense_TRACKPAD_ROW1_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define Mux_CapSense_TRACKPAD_ROW1_NEG_BSLN_RST_CNT0_PARAM_ID (0x400000FAu)

#define Mux_CapSense_TRACKPAD_ROW1_IDAC_COMP0_VALUE         (Mux_CapSense_dsRam.snsList.trackpad[7u].idacComp[0u])
#define Mux_CapSense_TRACKPAD_ROW1_IDAC_COMP0_OFFSET        (251u)
#define Mux_CapSense_TRACKPAD_ROW1_IDAC_COMP0_SIZE          (1u)
#define Mux_CapSense_TRACKPAD_ROW1_IDAC_COMP0_PARAM_ID      (0x6D0000FBu)

#define Mux_CapSense_TRACKPAD_ROW2_RAW0_VALUE               (Mux_CapSense_dsRam.snsList.trackpad[8u].raw[0u])
#define Mux_CapSense_TRACKPAD_ROW2_RAW0_OFFSET              (252u)
#define Mux_CapSense_TRACKPAD_ROW2_RAW0_SIZE                (2u)
#define Mux_CapSense_TRACKPAD_ROW2_RAW0_PARAM_ID            (0x850000FCu)

#define Mux_CapSense_TRACKPAD_ROW2_BSLN0_VALUE              (Mux_CapSense_dsRam.snsList.trackpad[8u].bsln[0u])
#define Mux_CapSense_TRACKPAD_ROW2_BSLN0_OFFSET             (254u)
#define Mux_CapSense_TRACKPAD_ROW2_BSLN0_SIZE               (2u)
#define Mux_CapSense_TRACKPAD_ROW2_BSLN0_PARAM_ID           (0x890000FEu)

#define Mux_CapSense_TRACKPAD_ROW2_BSLN_EXT0_VALUE          (Mux_CapSense_dsRam.snsList.trackpad[8u].bslnExt[0u])
#define Mux_CapSense_TRACKPAD_ROW2_BSLN_EXT0_OFFSET         (256u)
#define Mux_CapSense_TRACKPAD_ROW2_BSLN_EXT0_SIZE           (1u)
#define Mux_CapSense_TRACKPAD_ROW2_BSLN_EXT0_PARAM_ID       (0x44000100u)

#define Mux_CapSense_TRACKPAD_ROW2_DIFF_VALUE               (Mux_CapSense_dsRam.snsList.trackpad[8u].diff)
#define Mux_CapSense_TRACKPAD_ROW2_DIFF_OFFSET              (258u)
#define Mux_CapSense_TRACKPAD_ROW2_DIFF_SIZE                (2u)
#define Mux_CapSense_TRACKPAD_ROW2_DIFF_PARAM_ID            (0x80000102u)

#define Mux_CapSense_TRACKPAD_ROW2_NEG_BSLN_RST_CNT0_VALUE  (Mux_CapSense_dsRam.snsList.trackpad[8u].negBslnRstCnt[0u])
#define Mux_CapSense_TRACKPAD_ROW2_NEG_BSLN_RST_CNT0_OFFSET (260u)
#define Mux_CapSense_TRACKPAD_ROW2_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define Mux_CapSense_TRACKPAD_ROW2_NEG_BSLN_RST_CNT0_PARAM_ID (0x45000104u)

#define Mux_CapSense_TRACKPAD_ROW2_IDAC_COMP0_VALUE         (Mux_CapSense_dsRam.snsList.trackpad[8u].idacComp[0u])
#define Mux_CapSense_TRACKPAD_ROW2_IDAC_COMP0_OFFSET        (261u)
#define Mux_CapSense_TRACKPAD_ROW2_IDAC_COMP0_SIZE          (1u)
#define Mux_CapSense_TRACKPAD_ROW2_IDAC_COMP0_PARAM_ID      (0x68000105u)

#define Mux_CapSense_TRACKPAD_ROW3_RAW0_VALUE               (Mux_CapSense_dsRam.snsList.trackpad[9u].raw[0u])
#define Mux_CapSense_TRACKPAD_ROW3_RAW0_OFFSET              (262u)
#define Mux_CapSense_TRACKPAD_ROW3_RAW0_SIZE                (2u)
#define Mux_CapSense_TRACKPAD_ROW3_RAW0_PARAM_ID            (0x81000106u)

#define Mux_CapSense_TRACKPAD_ROW3_BSLN0_VALUE              (Mux_CapSense_dsRam.snsList.trackpad[9u].bsln[0u])
#define Mux_CapSense_TRACKPAD_ROW3_BSLN0_OFFSET             (264u)
#define Mux_CapSense_TRACKPAD_ROW3_BSLN0_SIZE               (2u)
#define Mux_CapSense_TRACKPAD_ROW3_BSLN0_PARAM_ID           (0x8E000108u)

#define Mux_CapSense_TRACKPAD_ROW3_BSLN_EXT0_VALUE          (Mux_CapSense_dsRam.snsList.trackpad[9u].bslnExt[0u])
#define Mux_CapSense_TRACKPAD_ROW3_BSLN_EXT0_OFFSET         (266u)
#define Mux_CapSense_TRACKPAD_ROW3_BSLN_EXT0_SIZE           (1u)
#define Mux_CapSense_TRACKPAD_ROW3_BSLN_EXT0_PARAM_ID       (0x4A00010Au)

#define Mux_CapSense_TRACKPAD_ROW3_DIFF_VALUE               (Mux_CapSense_dsRam.snsList.trackpad[9u].diff)
#define Mux_CapSense_TRACKPAD_ROW3_DIFF_OFFSET              (268u)
#define Mux_CapSense_TRACKPAD_ROW3_DIFF_SIZE                (2u)
#define Mux_CapSense_TRACKPAD_ROW3_DIFF_PARAM_ID            (0x8F00010Cu)

#define Mux_CapSense_TRACKPAD_ROW3_NEG_BSLN_RST_CNT0_VALUE  (Mux_CapSense_dsRam.snsList.trackpad[9u].negBslnRstCnt[0u])
#define Mux_CapSense_TRACKPAD_ROW3_NEG_BSLN_RST_CNT0_OFFSET (270u)
#define Mux_CapSense_TRACKPAD_ROW3_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define Mux_CapSense_TRACKPAD_ROW3_NEG_BSLN_RST_CNT0_PARAM_ID (0x4B00010Eu)

#define Mux_CapSense_TRACKPAD_ROW3_IDAC_COMP0_VALUE         (Mux_CapSense_dsRam.snsList.trackpad[9u].idacComp[0u])
#define Mux_CapSense_TRACKPAD_ROW3_IDAC_COMP0_OFFSET        (271u)
#define Mux_CapSense_TRACKPAD_ROW3_IDAC_COMP0_SIZE          (1u)
#define Mux_CapSense_TRACKPAD_ROW3_IDAC_COMP0_PARAM_ID      (0x6600010Fu)

#define Mux_CapSense_TRACKPAD_ROW4_RAW0_VALUE               (Mux_CapSense_dsRam.snsList.trackpad[10u].raw[0u])
#define Mux_CapSense_TRACKPAD_ROW4_RAW0_OFFSET              (272u)
#define Mux_CapSense_TRACKPAD_ROW4_RAW0_SIZE                (2u)
#define Mux_CapSense_TRACKPAD_ROW4_RAW0_PARAM_ID            (0x89000110u)

#define Mux_CapSense_TRACKPAD_ROW4_BSLN0_VALUE              (Mux_CapSense_dsRam.snsList.trackpad[10u].bsln[0u])
#define Mux_CapSense_TRACKPAD_ROW4_BSLN0_OFFSET             (274u)
#define Mux_CapSense_TRACKPAD_ROW4_BSLN0_SIZE               (2u)
#define Mux_CapSense_TRACKPAD_ROW4_BSLN0_PARAM_ID           (0x85000112u)

#define Mux_CapSense_TRACKPAD_ROW4_BSLN_EXT0_VALUE          (Mux_CapSense_dsRam.snsList.trackpad[10u].bslnExt[0u])
#define Mux_CapSense_TRACKPAD_ROW4_BSLN_EXT0_OFFSET         (276u)
#define Mux_CapSense_TRACKPAD_ROW4_BSLN_EXT0_SIZE           (1u)
#define Mux_CapSense_TRACKPAD_ROW4_BSLN_EXT0_PARAM_ID       (0x40000114u)

#define Mux_CapSense_TRACKPAD_ROW4_DIFF_VALUE               (Mux_CapSense_dsRam.snsList.trackpad[10u].diff)
#define Mux_CapSense_TRACKPAD_ROW4_DIFF_OFFSET              (278u)
#define Mux_CapSense_TRACKPAD_ROW4_DIFF_SIZE                (2u)
#define Mux_CapSense_TRACKPAD_ROW4_DIFF_PARAM_ID            (0x84000116u)

#define Mux_CapSense_TRACKPAD_ROW4_NEG_BSLN_RST_CNT0_VALUE  (Mux_CapSense_dsRam.snsList.trackpad[10u].negBslnRstCnt[0u])
#define Mux_CapSense_TRACKPAD_ROW4_NEG_BSLN_RST_CNT0_OFFSET (280u)
#define Mux_CapSense_TRACKPAD_ROW4_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define Mux_CapSense_TRACKPAD_ROW4_NEG_BSLN_RST_CNT0_PARAM_ID (0x43000118u)

#define Mux_CapSense_TRACKPAD_ROW4_IDAC_COMP0_VALUE         (Mux_CapSense_dsRam.snsList.trackpad[10u].idacComp[0u])
#define Mux_CapSense_TRACKPAD_ROW4_IDAC_COMP0_OFFSET        (281u)
#define Mux_CapSense_TRACKPAD_ROW4_IDAC_COMP0_SIZE          (1u)
#define Mux_CapSense_TRACKPAD_ROW4_IDAC_COMP0_PARAM_ID      (0x6E000119u)

#define Mux_CapSense_TRACKPAD_ROW5_RAW0_VALUE               (Mux_CapSense_dsRam.snsList.trackpad[11u].raw[0u])
#define Mux_CapSense_TRACKPAD_ROW5_RAW0_OFFSET              (282u)
#define Mux_CapSense_TRACKPAD_ROW5_RAW0_SIZE                (2u)
#define Mux_CapSense_TRACKPAD_ROW5_RAW0_PARAM_ID            (0x8700011Au)

#define Mux_CapSense_TRACKPAD_ROW5_BSLN0_VALUE              (Mux_CapSense_dsRam.snsList.trackpad[11u].bsln[0u])
#define Mux_CapSense_TRACKPAD_ROW5_BSLN0_OFFSET             (284u)
#define Mux_CapSense_TRACKPAD_ROW5_BSLN0_SIZE               (2u)
#define Mux_CapSense_TRACKPAD_ROW5_BSLN0_PARAM_ID           (0x8A00011Cu)

#define Mux_CapSense_TRACKPAD_ROW5_BSLN_EXT0_VALUE          (Mux_CapSense_dsRam.snsList.trackpad[11u].bslnExt[0u])
#define Mux_CapSense_TRACKPAD_ROW5_BSLN_EXT0_OFFSET         (286u)
#define Mux_CapSense_TRACKPAD_ROW5_BSLN_EXT0_SIZE           (1u)
#define Mux_CapSense_TRACKPAD_ROW5_BSLN_EXT0_PARAM_ID       (0x4E00011Eu)

#define Mux_CapSense_TRACKPAD_ROW5_DIFF_VALUE               (Mux_CapSense_dsRam.snsList.trackpad[11u].diff)
#define Mux_CapSense_TRACKPAD_ROW5_DIFF_OFFSET              (288u)
#define Mux_CapSense_TRACKPAD_ROW5_DIFF_SIZE                (2u)
#define Mux_CapSense_TRACKPAD_ROW5_DIFF_PARAM_ID            (0x86000120u)

#define Mux_CapSense_TRACKPAD_ROW5_NEG_BSLN_RST_CNT0_VALUE  (Mux_CapSense_dsRam.snsList.trackpad[11u].negBslnRstCnt[0u])
#define Mux_CapSense_TRACKPAD_ROW5_NEG_BSLN_RST_CNT0_OFFSET (290u)
#define Mux_CapSense_TRACKPAD_ROW5_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define Mux_CapSense_TRACKPAD_ROW5_NEG_BSLN_RST_CNT0_PARAM_ID (0x42000122u)

#define Mux_CapSense_TRACKPAD_ROW5_IDAC_COMP0_VALUE         (Mux_CapSense_dsRam.snsList.trackpad[11u].idacComp[0u])
#define Mux_CapSense_TRACKPAD_ROW5_IDAC_COMP0_OFFSET        (291u)
#define Mux_CapSense_TRACKPAD_ROW5_IDAC_COMP0_SIZE          (1u)
#define Mux_CapSense_TRACKPAD_ROW5_IDAC_COMP0_PARAM_ID      (0x6F000123u)

#define Mux_CapSense_BUTTON0_SNS0_RAW0_VALUE                (Mux_CapSense_dsRam.snsList.button0[0u].raw[0u])
#define Mux_CapSense_BUTTON0_SNS0_RAW0_OFFSET               (292u)
#define Mux_CapSense_BUTTON0_SNS0_RAW0_SIZE                 (2u)
#define Mux_CapSense_BUTTON0_SNS0_RAW0_PARAM_ID             (0x87000124u)

#define Mux_CapSense_BUTTON0_SNS0_BSLN0_VALUE               (Mux_CapSense_dsRam.snsList.button0[0u].bsln[0u])
#define Mux_CapSense_BUTTON0_SNS0_BSLN0_OFFSET              (294u)
#define Mux_CapSense_BUTTON0_SNS0_BSLN0_SIZE                (2u)
#define Mux_CapSense_BUTTON0_SNS0_BSLN0_PARAM_ID            (0x8B000126u)

#define Mux_CapSense_BUTTON0_SNS0_BSLN_EXT0_VALUE           (Mux_CapSense_dsRam.snsList.button0[0u].bslnExt[0u])
#define Mux_CapSense_BUTTON0_SNS0_BSLN_EXT0_OFFSET          (296u)
#define Mux_CapSense_BUTTON0_SNS0_BSLN_EXT0_SIZE            (1u)
#define Mux_CapSense_BUTTON0_SNS0_BSLN_EXT0_PARAM_ID        (0x4C000128u)

#define Mux_CapSense_BUTTON0_SNS0_DIFF_VALUE                (Mux_CapSense_dsRam.snsList.button0[0u].diff)
#define Mux_CapSense_BUTTON0_SNS0_DIFF_OFFSET               (298u)
#define Mux_CapSense_BUTTON0_SNS0_DIFF_SIZE                 (2u)
#define Mux_CapSense_BUTTON0_SNS0_DIFF_PARAM_ID             (0x8800012Au)

#define Mux_CapSense_BUTTON0_SNS0_NEG_BSLN_RST_CNT0_VALUE   (Mux_CapSense_dsRam.snsList.button0[0u].negBslnRstCnt[0u])
#define Mux_CapSense_BUTTON0_SNS0_NEG_BSLN_RST_CNT0_OFFSET  (300u)
#define Mux_CapSense_BUTTON0_SNS0_NEG_BSLN_RST_CNT0_SIZE    (1u)
#define Mux_CapSense_BUTTON0_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID (0x4D00012Cu)

#define Mux_CapSense_BUTTON0_SNS0_IDAC_COMP0_VALUE          (Mux_CapSense_dsRam.snsList.button0[0u].idacComp[0u])
#define Mux_CapSense_BUTTON0_SNS0_IDAC_COMP0_OFFSET         (301u)
#define Mux_CapSense_BUTTON0_SNS0_IDAC_COMP0_SIZE           (1u)
#define Mux_CapSense_BUTTON0_SNS0_IDAC_COMP0_PARAM_ID       (0x6000012Du)

#define Mux_CapSense_BUTTON1_SNS0_RAW0_VALUE                (Mux_CapSense_dsRam.snsList.button1[0u].raw[0u])
#define Mux_CapSense_BUTTON1_SNS0_RAW0_OFFSET               (302u)
#define Mux_CapSense_BUTTON1_SNS0_RAW0_SIZE                 (2u)
#define Mux_CapSense_BUTTON1_SNS0_RAW0_PARAM_ID             (0x8900012Eu)

#define Mux_CapSense_BUTTON1_SNS0_BSLN0_VALUE               (Mux_CapSense_dsRam.snsList.button1[0u].bsln[0u])
#define Mux_CapSense_BUTTON1_SNS0_BSLN0_OFFSET              (304u)
#define Mux_CapSense_BUTTON1_SNS0_BSLN0_SIZE                (2u)
#define Mux_CapSense_BUTTON1_SNS0_BSLN0_PARAM_ID            (0x83000130u)

#define Mux_CapSense_BUTTON1_SNS0_BSLN_EXT0_VALUE           (Mux_CapSense_dsRam.snsList.button1[0u].bslnExt[0u])
#define Mux_CapSense_BUTTON1_SNS0_BSLN_EXT0_OFFSET          (306u)
#define Mux_CapSense_BUTTON1_SNS0_BSLN_EXT0_SIZE            (1u)
#define Mux_CapSense_BUTTON1_SNS0_BSLN_EXT0_PARAM_ID        (0x47000132u)

#define Mux_CapSense_BUTTON1_SNS0_DIFF_VALUE                (Mux_CapSense_dsRam.snsList.button1[0u].diff)
#define Mux_CapSense_BUTTON1_SNS0_DIFF_OFFSET               (308u)
#define Mux_CapSense_BUTTON1_SNS0_DIFF_SIZE                 (2u)
#define Mux_CapSense_BUTTON1_SNS0_DIFF_PARAM_ID             (0x82000134u)

#define Mux_CapSense_BUTTON1_SNS0_NEG_BSLN_RST_CNT0_VALUE   (Mux_CapSense_dsRam.snsList.button1[0u].negBslnRstCnt[0u])
#define Mux_CapSense_BUTTON1_SNS0_NEG_BSLN_RST_CNT0_OFFSET  (310u)
#define Mux_CapSense_BUTTON1_SNS0_NEG_BSLN_RST_CNT0_SIZE    (1u)
#define Mux_CapSense_BUTTON1_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID (0x46000136u)

#define Mux_CapSense_BUTTON1_SNS0_IDAC_COMP0_VALUE          (Mux_CapSense_dsRam.snsList.button1[0u].idacComp[0u])
#define Mux_CapSense_BUTTON1_SNS0_IDAC_COMP0_OFFSET         (311u)
#define Mux_CapSense_BUTTON1_SNS0_IDAC_COMP0_SIZE           (1u)
#define Mux_CapSense_BUTTON1_SNS0_IDAC_COMP0_PARAM_ID       (0x6B000137u)

#define Mux_CapSense_BUTTON2_SNS0_RAW0_VALUE                (Mux_CapSense_dsRam.snsList.button2[0u].raw[0u])
#define Mux_CapSense_BUTTON2_SNS0_RAW0_OFFSET               (312u)
#define Mux_CapSense_BUTTON2_SNS0_RAW0_SIZE                 (2u)
#define Mux_CapSense_BUTTON2_SNS0_RAW0_PARAM_ID             (0x81000138u)

#define Mux_CapSense_BUTTON2_SNS0_BSLN0_VALUE               (Mux_CapSense_dsRam.snsList.button2[0u].bsln[0u])
#define Mux_CapSense_BUTTON2_SNS0_BSLN0_OFFSET              (314u)
#define Mux_CapSense_BUTTON2_SNS0_BSLN0_SIZE                (2u)
#define Mux_CapSense_BUTTON2_SNS0_BSLN0_PARAM_ID            (0x8D00013Au)

#define Mux_CapSense_BUTTON2_SNS0_BSLN_EXT0_VALUE           (Mux_CapSense_dsRam.snsList.button2[0u].bslnExt[0u])
#define Mux_CapSense_BUTTON2_SNS0_BSLN_EXT0_OFFSET          (316u)
#define Mux_CapSense_BUTTON2_SNS0_BSLN_EXT0_SIZE            (1u)
#define Mux_CapSense_BUTTON2_SNS0_BSLN_EXT0_PARAM_ID        (0x4800013Cu)

#define Mux_CapSense_BUTTON2_SNS0_DIFF_VALUE                (Mux_CapSense_dsRam.snsList.button2[0u].diff)
#define Mux_CapSense_BUTTON2_SNS0_DIFF_OFFSET               (318u)
#define Mux_CapSense_BUTTON2_SNS0_DIFF_SIZE                 (2u)
#define Mux_CapSense_BUTTON2_SNS0_DIFF_PARAM_ID             (0x8C00013Eu)

#define Mux_CapSense_BUTTON2_SNS0_NEG_BSLN_RST_CNT0_VALUE   (Mux_CapSense_dsRam.snsList.button2[0u].negBslnRstCnt[0u])
#define Mux_CapSense_BUTTON2_SNS0_NEG_BSLN_RST_CNT0_OFFSET  (320u)
#define Mux_CapSense_BUTTON2_SNS0_NEG_BSLN_RST_CNT0_SIZE    (1u)
#define Mux_CapSense_BUTTON2_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID (0x49000140u)

#define Mux_CapSense_BUTTON2_SNS0_IDAC_COMP0_VALUE          (Mux_CapSense_dsRam.snsList.button2[0u].idacComp[0u])
#define Mux_CapSense_BUTTON2_SNS0_IDAC_COMP0_OFFSET         (321u)
#define Mux_CapSense_BUTTON2_SNS0_IDAC_COMP0_SIZE           (1u)
#define Mux_CapSense_BUTTON2_SNS0_IDAC_COMP0_PARAM_ID       (0x64000141u)

#define Mux_CapSense_BUTTONRX0_SNS0_RAW0_VALUE              (Mux_CapSense_dsRam.snsList.buttonrx0[0u].raw[0u])
#define Mux_CapSense_BUTTONRX0_SNS0_RAW0_OFFSET             (322u)
#define Mux_CapSense_BUTTONRX0_SNS0_RAW0_SIZE               (2u)
#define Mux_CapSense_BUTTONRX0_SNS0_RAW0_PARAM_ID           (0x8D000142u)

#define Mux_CapSense_BUTTONRX0_SNS0_BSLN0_VALUE             (Mux_CapSense_dsRam.snsList.buttonrx0[0u].bsln[0u])
#define Mux_CapSense_BUTTONRX0_SNS0_BSLN0_OFFSET            (324u)
#define Mux_CapSense_BUTTONRX0_SNS0_BSLN0_SIZE              (2u)
#define Mux_CapSense_BUTTONRX0_SNS0_BSLN0_PARAM_ID          (0x80000144u)

#define Mux_CapSense_BUTTONRX0_SNS0_BSLN_EXT0_VALUE         (Mux_CapSense_dsRam.snsList.buttonrx0[0u].bslnExt[0u])
#define Mux_CapSense_BUTTONRX0_SNS0_BSLN_EXT0_OFFSET        (326u)
#define Mux_CapSense_BUTTONRX0_SNS0_BSLN_EXT0_SIZE          (1u)
#define Mux_CapSense_BUTTONRX0_SNS0_BSLN_EXT0_PARAM_ID      (0x44000146u)

#define Mux_CapSense_BUTTONRX0_SNS0_DIFF_VALUE              (Mux_CapSense_dsRam.snsList.buttonrx0[0u].diff)
#define Mux_CapSense_BUTTONRX0_SNS0_DIFF_OFFSET             (328u)
#define Mux_CapSense_BUTTONRX0_SNS0_DIFF_SIZE               (2u)
#define Mux_CapSense_BUTTONRX0_SNS0_DIFF_PARAM_ID           (0x83000148u)

#define Mux_CapSense_BUTTONRX0_SNS0_NEG_BSLN_RST_CNT0_VALUE (Mux_CapSense_dsRam.snsList.buttonrx0[0u].negBslnRstCnt[0u])
#define Mux_CapSense_BUTTONRX0_SNS0_NEG_BSLN_RST_CNT0_OFFSET (330u)
#define Mux_CapSense_BUTTONRX0_SNS0_NEG_BSLN_RST_CNT0_SIZE  (1u)
#define Mux_CapSense_BUTTONRX0_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID (0x4700014Au)

#define Mux_CapSense_BUTTONRX0_SNS0_IDAC_COMP0_VALUE        (Mux_CapSense_dsRam.snsList.buttonrx0[0u].idacComp[0u])
#define Mux_CapSense_BUTTONRX0_SNS0_IDAC_COMP0_OFFSET       (331u)
#define Mux_CapSense_BUTTONRX0_SNS0_IDAC_COMP0_SIZE         (1u)
#define Mux_CapSense_BUTTONRX0_SNS0_IDAC_COMP0_PARAM_ID     (0x6A00014Bu)

#define Mux_CapSense_BUTTONRX1_SNS0_RAW0_VALUE              (Mux_CapSense_dsRam.snsList.buttonrx1[0u].raw[0u])
#define Mux_CapSense_BUTTONRX1_SNS0_RAW0_OFFSET             (332u)
#define Mux_CapSense_BUTTONRX1_SNS0_RAW0_SIZE               (2u)
#define Mux_CapSense_BUTTONRX1_SNS0_RAW0_PARAM_ID           (0x8200014Cu)

#define Mux_CapSense_BUTTONRX1_SNS0_BSLN0_VALUE             (Mux_CapSense_dsRam.snsList.buttonrx1[0u].bsln[0u])
#define Mux_CapSense_BUTTONRX1_SNS0_BSLN0_OFFSET            (334u)
#define Mux_CapSense_BUTTONRX1_SNS0_BSLN0_SIZE              (2u)
#define Mux_CapSense_BUTTONRX1_SNS0_BSLN0_PARAM_ID          (0x8E00014Eu)

#define Mux_CapSense_BUTTONRX1_SNS0_BSLN_EXT0_VALUE         (Mux_CapSense_dsRam.snsList.buttonrx1[0u].bslnExt[0u])
#define Mux_CapSense_BUTTONRX1_SNS0_BSLN_EXT0_OFFSET        (336u)
#define Mux_CapSense_BUTTONRX1_SNS0_BSLN_EXT0_SIZE          (1u)
#define Mux_CapSense_BUTTONRX1_SNS0_BSLN_EXT0_PARAM_ID      (0x4C000150u)

#define Mux_CapSense_BUTTONRX1_SNS0_DIFF_VALUE              (Mux_CapSense_dsRam.snsList.buttonrx1[0u].diff)
#define Mux_CapSense_BUTTONRX1_SNS0_DIFF_OFFSET             (338u)
#define Mux_CapSense_BUTTONRX1_SNS0_DIFF_SIZE               (2u)
#define Mux_CapSense_BUTTONRX1_SNS0_DIFF_PARAM_ID           (0x88000152u)

#define Mux_CapSense_BUTTONRX1_SNS0_NEG_BSLN_RST_CNT0_VALUE (Mux_CapSense_dsRam.snsList.buttonrx1[0u].negBslnRstCnt[0u])
#define Mux_CapSense_BUTTONRX1_SNS0_NEG_BSLN_RST_CNT0_OFFSET (340u)
#define Mux_CapSense_BUTTONRX1_SNS0_NEG_BSLN_RST_CNT0_SIZE  (1u)
#define Mux_CapSense_BUTTONRX1_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID (0x4D000154u)

#define Mux_CapSense_BUTTONRX1_SNS0_IDAC_COMP0_VALUE        (Mux_CapSense_dsRam.snsList.buttonrx1[0u].idacComp[0u])
#define Mux_CapSense_BUTTONRX1_SNS0_IDAC_COMP0_OFFSET       (341u)
#define Mux_CapSense_BUTTONRX1_SNS0_IDAC_COMP0_SIZE         (1u)
#define Mux_CapSense_BUTTONRX1_SNS0_IDAC_COMP0_PARAM_ID     (0x60000155u)

#define Mux_CapSense_BUTTONRX2_SNS0_RAW0_VALUE              (Mux_CapSense_dsRam.snsList.buttonrx2[0u].raw[0u])
#define Mux_CapSense_BUTTONRX2_SNS0_RAW0_OFFSET             (342u)
#define Mux_CapSense_BUTTONRX2_SNS0_RAW0_SIZE               (2u)
#define Mux_CapSense_BUTTONRX2_SNS0_RAW0_PARAM_ID           (0x89000156u)

#define Mux_CapSense_BUTTONRX2_SNS0_BSLN0_VALUE             (Mux_CapSense_dsRam.snsList.buttonrx2[0u].bsln[0u])
#define Mux_CapSense_BUTTONRX2_SNS0_BSLN0_OFFSET            (344u)
#define Mux_CapSense_BUTTONRX2_SNS0_BSLN0_SIZE              (2u)
#define Mux_CapSense_BUTTONRX2_SNS0_BSLN0_PARAM_ID          (0x86000158u)

#define Mux_CapSense_BUTTONRX2_SNS0_BSLN_EXT0_VALUE         (Mux_CapSense_dsRam.snsList.buttonrx2[0u].bslnExt[0u])
#define Mux_CapSense_BUTTONRX2_SNS0_BSLN_EXT0_OFFSET        (346u)
#define Mux_CapSense_BUTTONRX2_SNS0_BSLN_EXT0_SIZE          (1u)
#define Mux_CapSense_BUTTONRX2_SNS0_BSLN_EXT0_PARAM_ID      (0x4200015Au)

#define Mux_CapSense_BUTTONRX2_SNS0_DIFF_VALUE              (Mux_CapSense_dsRam.snsList.buttonrx2[0u].diff)
#define Mux_CapSense_BUTTONRX2_SNS0_DIFF_OFFSET             (348u)
#define Mux_CapSense_BUTTONRX2_SNS0_DIFF_SIZE               (2u)
#define Mux_CapSense_BUTTONRX2_SNS0_DIFF_PARAM_ID           (0x8700015Cu)

#define Mux_CapSense_BUTTONRX2_SNS0_NEG_BSLN_RST_CNT0_VALUE (Mux_CapSense_dsRam.snsList.buttonrx2[0u].negBslnRstCnt[0u])
#define Mux_CapSense_BUTTONRX2_SNS0_NEG_BSLN_RST_CNT0_OFFSET (350u)
#define Mux_CapSense_BUTTONRX2_SNS0_NEG_BSLN_RST_CNT0_SIZE  (1u)
#define Mux_CapSense_BUTTONRX2_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID (0x4300015Eu)

#define Mux_CapSense_BUTTONRX2_SNS0_IDAC_COMP0_VALUE        (Mux_CapSense_dsRam.snsList.buttonrx2[0u].idacComp[0u])
#define Mux_CapSense_BUTTONRX2_SNS0_IDAC_COMP0_OFFSET       (351u)
#define Mux_CapSense_BUTTONRX2_SNS0_IDAC_COMP0_SIZE         (1u)
#define Mux_CapSense_BUTTONRX2_SNS0_IDAC_COMP0_PARAM_ID     (0x6E00015Fu)

#define Mux_CapSense_SNR_TEST_WIDGET_ID_VALUE               (Mux_CapSense_dsRam.snrTestWidgetId)
#define Mux_CapSense_SNR_TEST_WIDGET_ID_OFFSET              (352u)
#define Mux_CapSense_SNR_TEST_WIDGET_ID_SIZE                (1u)
#define Mux_CapSense_SNR_TEST_WIDGET_ID_PARAM_ID            (0x68000160u)

#define Mux_CapSense_SNR_TEST_SENSOR_ID_VALUE               (Mux_CapSense_dsRam.snrTestSensorId)
#define Mux_CapSense_SNR_TEST_SENSOR_ID_OFFSET              (353u)
#define Mux_CapSense_SNR_TEST_SENSOR_ID_SIZE                (1u)
#define Mux_CapSense_SNR_TEST_SENSOR_ID_PARAM_ID            (0x6E000161u)

#define Mux_CapSense_SNR_TEST_SCAN_COUNTER_VALUE            (Mux_CapSense_dsRam.snrTestScanCounter)
#define Mux_CapSense_SNR_TEST_SCAN_COUNTER_OFFSET           (354u)
#define Mux_CapSense_SNR_TEST_SCAN_COUNTER_SIZE             (2u)
#define Mux_CapSense_SNR_TEST_SCAN_COUNTER_PARAM_ID         (0x87000162u)

#define Mux_CapSense_SNR_TEST_RAW_COUNT0_VALUE              (Mux_CapSense_dsRam.snrTestRawCount[0u])
#define Mux_CapSense_SNR_TEST_RAW_COUNT0_OFFSET             (356u)
#define Mux_CapSense_SNR_TEST_RAW_COUNT0_SIZE               (2u)
#define Mux_CapSense_SNR_TEST_RAW_COUNT0_PARAM_ID           (0x8A000164u)

#define Mux_CapSense_SCAN_CSD_ISC_VALUE                     (Mux_CapSense_dsRam.scanCsdISC)
#define Mux_CapSense_SCAN_CSD_ISC_OFFSET                    (358u)
#define Mux_CapSense_SCAN_CSD_ISC_SIZE                      (1u)
#define Mux_CapSense_SCAN_CSD_ISC_PARAM_ID                  (0x4E000166u)

#define Mux_CapSense_SCAN_CURRENT_ISC_VALUE                 (Mux_CapSense_dsRam.scanCurrentISC)
#define Mux_CapSense_SCAN_CURRENT_ISC_OFFSET                (359u)
#define Mux_CapSense_SCAN_CURRENT_ISC_SIZE                  (1u)
#define Mux_CapSense_SCAN_CURRENT_ISC_PARAM_ID              (0x48000167u)


/*****************************************************************************/
/* Flash Data structure register definitions                                 */
/*****************************************************************************/
#define Mux_CapSense_TRACKPAD_PTR2SNS_FLASH_VALUE           (Mux_CapSense_dsFlash.wdgtArray[0].ptr2SnsFlash)
#define Mux_CapSense_TRACKPAD_PTR2SNS_FLASH_OFFSET          (0u)
#define Mux_CapSense_TRACKPAD_PTR2SNS_FLASH_SIZE            (4u)
#define Mux_CapSense_TRACKPAD_PTR2SNS_FLASH_PARAM_ID        (0xD1000000u)

#define Mux_CapSense_TRACKPAD_PTR2WD_RAM_VALUE              (Mux_CapSense_dsFlash.wdgtArray[0].ptr2WdgtRam)
#define Mux_CapSense_TRACKPAD_PTR2WD_RAM_OFFSET             (4u)
#define Mux_CapSense_TRACKPAD_PTR2WD_RAM_SIZE               (4u)
#define Mux_CapSense_TRACKPAD_PTR2WD_RAM_PARAM_ID           (0xD0000004u)

#define Mux_CapSense_TRACKPAD_PTR2SNS_RAM_VALUE             (Mux_CapSense_dsFlash.wdgtArray[0].ptr2SnsRam)
#define Mux_CapSense_TRACKPAD_PTR2SNS_RAM_OFFSET            (8u)
#define Mux_CapSense_TRACKPAD_PTR2SNS_RAM_SIZE              (4u)
#define Mux_CapSense_TRACKPAD_PTR2SNS_RAM_PARAM_ID          (0xD3000008u)

#define Mux_CapSense_TRACKPAD_PTR2FLTR_HISTORY_VALUE        (Mux_CapSense_dsFlash.wdgtArray[0].ptr2FltrHistory)
#define Mux_CapSense_TRACKPAD_PTR2FLTR_HISTORY_OFFSET       (12u)
#define Mux_CapSense_TRACKPAD_PTR2FLTR_HISTORY_SIZE         (4u)
#define Mux_CapSense_TRACKPAD_PTR2FLTR_HISTORY_PARAM_ID     (0xD200000Cu)

#define Mux_CapSense_TRACKPAD_PTR2DEBOUNCE_VALUE            (Mux_CapSense_dsFlash.wdgtArray[0].ptr2DebounceArr)
#define Mux_CapSense_TRACKPAD_PTR2DEBOUNCE_OFFSET           (16u)
#define Mux_CapSense_TRACKPAD_PTR2DEBOUNCE_SIZE             (4u)
#define Mux_CapSense_TRACKPAD_PTR2DEBOUNCE_PARAM_ID         (0xD4000010u)

#define Mux_CapSense_TRACKPAD_STATIC_CONFIG_VALUE           (Mux_CapSense_dsFlash.wdgtArray[0].staticConfig)
#define Mux_CapSense_TRACKPAD_STATIC_CONFIG_OFFSET          (20u)
#define Mux_CapSense_TRACKPAD_STATIC_CONFIG_SIZE            (4u)
#define Mux_CapSense_TRACKPAD_STATIC_CONFIG_PARAM_ID        (0xD5000014u)

#define Mux_CapSense_TRACKPAD_TOTAL_NUM_SNS_VALUE           (Mux_CapSense_dsFlash.wdgtArray[0].totalNumSns)
#define Mux_CapSense_TRACKPAD_TOTAL_NUM_SNS_OFFSET          (24u)
#define Mux_CapSense_TRACKPAD_TOTAL_NUM_SNS_SIZE            (2u)
#define Mux_CapSense_TRACKPAD_TOTAL_NUM_SNS_PARAM_ID        (0x99000018u)

#define Mux_CapSense_TRACKPAD_TYPE_VALUE                    (Mux_CapSense_dsFlash.wdgtArray[0].wdgtType)
#define Mux_CapSense_TRACKPAD_TYPE_OFFSET                   (26u)
#define Mux_CapSense_TRACKPAD_TYPE_SIZE                     (1u)
#define Mux_CapSense_TRACKPAD_TYPE_PARAM_ID                 (0x5D00001Au)

#define Mux_CapSense_TRACKPAD_NUM_COLS_VALUE                (Mux_CapSense_dsFlash.wdgtArray[0].numCols)
#define Mux_CapSense_TRACKPAD_NUM_COLS_OFFSET               (27u)
#define Mux_CapSense_TRACKPAD_NUM_COLS_SIZE                 (1u)
#define Mux_CapSense_TRACKPAD_NUM_COLS_PARAM_ID             (0x5B00001Bu)

#define Mux_CapSense_TRACKPAD_NUM_ROWS_VALUE                (Mux_CapSense_dsFlash.wdgtArray[0].numRows)
#define Mux_CapSense_TRACKPAD_NUM_ROWS_OFFSET               (28u)
#define Mux_CapSense_TRACKPAD_NUM_ROWS_SIZE                 (1u)
#define Mux_CapSense_TRACKPAD_NUM_ROWS_PARAM_ID             (0x5000001Cu)

#define Mux_CapSense_TRACKPAD_X_RESOLUTION_VALUE            (Mux_CapSense_dsFlash.wdgtArray[0].xResolution)
#define Mux_CapSense_TRACKPAD_X_RESOLUTION_OFFSET           (30u)
#define Mux_CapSense_TRACKPAD_X_RESOLUTION_SIZE             (2u)
#define Mux_CapSense_TRACKPAD_X_RESOLUTION_PARAM_ID         (0x9400001Eu)

#define Mux_CapSense_TRACKPAD_Y_RESOLUTION_VALUE            (Mux_CapSense_dsFlash.wdgtArray[0].yResolution)
#define Mux_CapSense_TRACKPAD_Y_RESOLUTION_OFFSET           (32u)
#define Mux_CapSense_TRACKPAD_Y_RESOLUTION_SIZE             (2u)
#define Mux_CapSense_TRACKPAD_Y_RESOLUTION_PARAM_ID         (0x94000020u)

#define Mux_CapSense_TRACKPAD_X_CENT_MULT_VALUE             (Mux_CapSense_dsFlash.wdgtArray[0].xCentroidMultiplier)
#define Mux_CapSense_TRACKPAD_X_CENT_MULT_OFFSET            (36u)
#define Mux_CapSense_TRACKPAD_X_CENT_MULT_SIZE              (4u)
#define Mux_CapSense_TRACKPAD_X_CENT_MULT_PARAM_ID          (0xDA000024u)

#define Mux_CapSense_TRACKPAD_Y_CENT_MULT_VALUE             (Mux_CapSense_dsFlash.wdgtArray[0].yCentroidMultiplier)
#define Mux_CapSense_TRACKPAD_Y_CENT_MULT_OFFSET            (40u)
#define Mux_CapSense_TRACKPAD_Y_CENT_MULT_SIZE              (4u)
#define Mux_CapSense_TRACKPAD_Y_CENT_MULT_PARAM_ID          (0xD9000028u)

#define Mux_CapSense_TRACKPAD_IIR_FILTER_COEFF_VALUE        (Mux_CapSense_dsFlash.wdgtArray[0].iirFilterCoeff)
#define Mux_CapSense_TRACKPAD_IIR_FILTER_COEFF_OFFSET       (44u)
#define Mux_CapSense_TRACKPAD_IIR_FILTER_COEFF_SIZE         (1u)
#define Mux_CapSense_TRACKPAD_IIR_FILTER_COEFF_PARAM_ID     (0x5F00002Cu)

#define Mux_CapSense_BUTTON0_PTR2SNS_FLASH_VALUE            (Mux_CapSense_dsFlash.wdgtArray[1].ptr2SnsFlash)
#define Mux_CapSense_BUTTON0_PTR2SNS_FLASH_OFFSET           (48u)
#define Mux_CapSense_BUTTON0_PTR2SNS_FLASH_SIZE             (4u)
#define Mux_CapSense_BUTTON0_PTR2SNS_FLASH_PARAM_ID         (0xDD010030u)

#define Mux_CapSense_BUTTON0_PTR2WD_RAM_VALUE               (Mux_CapSense_dsFlash.wdgtArray[1].ptr2WdgtRam)
#define Mux_CapSense_BUTTON0_PTR2WD_RAM_OFFSET              (52u)
#define Mux_CapSense_BUTTON0_PTR2WD_RAM_SIZE                (4u)
#define Mux_CapSense_BUTTON0_PTR2WD_RAM_PARAM_ID            (0xDC010034u)

#define Mux_CapSense_BUTTON0_PTR2SNS_RAM_VALUE              (Mux_CapSense_dsFlash.wdgtArray[1].ptr2SnsRam)
#define Mux_CapSense_BUTTON0_PTR2SNS_RAM_OFFSET             (56u)
#define Mux_CapSense_BUTTON0_PTR2SNS_RAM_SIZE               (4u)
#define Mux_CapSense_BUTTON0_PTR2SNS_RAM_PARAM_ID           (0xDF010038u)

#define Mux_CapSense_BUTTON0_PTR2FLTR_HISTORY_VALUE         (Mux_CapSense_dsFlash.wdgtArray[1].ptr2FltrHistory)
#define Mux_CapSense_BUTTON0_PTR2FLTR_HISTORY_OFFSET        (60u)
#define Mux_CapSense_BUTTON0_PTR2FLTR_HISTORY_SIZE          (4u)
#define Mux_CapSense_BUTTON0_PTR2FLTR_HISTORY_PARAM_ID      (0xDE01003Cu)

#define Mux_CapSense_BUTTON0_PTR2DEBOUNCE_VALUE             (Mux_CapSense_dsFlash.wdgtArray[1].ptr2DebounceArr)
#define Mux_CapSense_BUTTON0_PTR2DEBOUNCE_OFFSET            (64u)
#define Mux_CapSense_BUTTON0_PTR2DEBOUNCE_SIZE              (4u)
#define Mux_CapSense_BUTTON0_PTR2DEBOUNCE_PARAM_ID          (0xDF010040u)

#define Mux_CapSense_BUTTON0_STATIC_CONFIG_VALUE            (Mux_CapSense_dsFlash.wdgtArray[1].staticConfig)
#define Mux_CapSense_BUTTON0_STATIC_CONFIG_OFFSET           (68u)
#define Mux_CapSense_BUTTON0_STATIC_CONFIG_SIZE             (4u)
#define Mux_CapSense_BUTTON0_STATIC_CONFIG_PARAM_ID         (0xDE010044u)

#define Mux_CapSense_BUTTON0_TOTAL_NUM_SNS_VALUE            (Mux_CapSense_dsFlash.wdgtArray[1].totalNumSns)
#define Mux_CapSense_BUTTON0_TOTAL_NUM_SNS_OFFSET           (72u)
#define Mux_CapSense_BUTTON0_TOTAL_NUM_SNS_SIZE             (2u)
#define Mux_CapSense_BUTTON0_TOTAL_NUM_SNS_PARAM_ID         (0x92010048u)

#define Mux_CapSense_BUTTON0_TYPE_VALUE                     (Mux_CapSense_dsFlash.wdgtArray[1].wdgtType)
#define Mux_CapSense_BUTTON0_TYPE_OFFSET                    (74u)
#define Mux_CapSense_BUTTON0_TYPE_SIZE                      (1u)
#define Mux_CapSense_BUTTON0_TYPE_PARAM_ID                  (0x5601004Au)

#define Mux_CapSense_BUTTON0_NUM_COLS_VALUE                 (Mux_CapSense_dsFlash.wdgtArray[1].numCols)
#define Mux_CapSense_BUTTON0_NUM_COLS_OFFSET                (75u)
#define Mux_CapSense_BUTTON0_NUM_COLS_SIZE                  (1u)
#define Mux_CapSense_BUTTON0_NUM_COLS_PARAM_ID              (0x5001004Bu)

#define Mux_CapSense_BUTTON0_NUM_ROWS_VALUE                 (Mux_CapSense_dsFlash.wdgtArray[1].numRows)
#define Mux_CapSense_BUTTON0_NUM_ROWS_OFFSET                (76u)
#define Mux_CapSense_BUTTON0_NUM_ROWS_SIZE                  (1u)
#define Mux_CapSense_BUTTON0_NUM_ROWS_PARAM_ID              (0x5B01004Cu)

#define Mux_CapSense_BUTTON0_X_RESOLUTION_VALUE             (Mux_CapSense_dsFlash.wdgtArray[1].xResolution)
#define Mux_CapSense_BUTTON0_X_RESOLUTION_OFFSET            (78u)
#define Mux_CapSense_BUTTON0_X_RESOLUTION_SIZE              (2u)
#define Mux_CapSense_BUTTON0_X_RESOLUTION_PARAM_ID          (0x9F01004Eu)

#define Mux_CapSense_BUTTON0_Y_RESOLUTION_VALUE             (Mux_CapSense_dsFlash.wdgtArray[1].yResolution)
#define Mux_CapSense_BUTTON0_Y_RESOLUTION_OFFSET            (80u)
#define Mux_CapSense_BUTTON0_Y_RESOLUTION_SIZE              (2u)
#define Mux_CapSense_BUTTON0_Y_RESOLUTION_PARAM_ID          (0x95010050u)

#define Mux_CapSense_BUTTON0_X_CENT_MULT_VALUE              (Mux_CapSense_dsFlash.wdgtArray[1].xCentroidMultiplier)
#define Mux_CapSense_BUTTON0_X_CENT_MULT_OFFSET             (84u)
#define Mux_CapSense_BUTTON0_X_CENT_MULT_SIZE               (4u)
#define Mux_CapSense_BUTTON0_X_CENT_MULT_PARAM_ID           (0xDB010054u)

#define Mux_CapSense_BUTTON0_Y_CENT_MULT_VALUE              (Mux_CapSense_dsFlash.wdgtArray[1].yCentroidMultiplier)
#define Mux_CapSense_BUTTON0_Y_CENT_MULT_OFFSET             (88u)
#define Mux_CapSense_BUTTON0_Y_CENT_MULT_SIZE               (4u)
#define Mux_CapSense_BUTTON0_Y_CENT_MULT_PARAM_ID           (0xD8010058u)

#define Mux_CapSense_BUTTON0_IIR_FILTER_COEFF_VALUE         (Mux_CapSense_dsFlash.wdgtArray[1].iirFilterCoeff)
#define Mux_CapSense_BUTTON0_IIR_FILTER_COEFF_OFFSET        (92u)
#define Mux_CapSense_BUTTON0_IIR_FILTER_COEFF_SIZE          (1u)
#define Mux_CapSense_BUTTON0_IIR_FILTER_COEFF_PARAM_ID      (0x5E01005Cu)

#define Mux_CapSense_BUTTON1_PTR2SNS_FLASH_VALUE            (Mux_CapSense_dsFlash.wdgtArray[2].ptr2SnsFlash)
#define Mux_CapSense_BUTTON1_PTR2SNS_FLASH_OFFSET           (96u)
#define Mux_CapSense_BUTTON1_PTR2SNS_FLASH_SIZE             (4u)
#define Mux_CapSense_BUTTON1_PTR2SNS_FLASH_PARAM_ID         (0xD0020060u)

#define Mux_CapSense_BUTTON1_PTR2WD_RAM_VALUE               (Mux_CapSense_dsFlash.wdgtArray[2].ptr2WdgtRam)
#define Mux_CapSense_BUTTON1_PTR2WD_RAM_OFFSET              (100u)
#define Mux_CapSense_BUTTON1_PTR2WD_RAM_SIZE                (4u)
#define Mux_CapSense_BUTTON1_PTR2WD_RAM_PARAM_ID            (0xD1020064u)

#define Mux_CapSense_BUTTON1_PTR2SNS_RAM_VALUE              (Mux_CapSense_dsFlash.wdgtArray[2].ptr2SnsRam)
#define Mux_CapSense_BUTTON1_PTR2SNS_RAM_OFFSET             (104u)
#define Mux_CapSense_BUTTON1_PTR2SNS_RAM_SIZE               (4u)
#define Mux_CapSense_BUTTON1_PTR2SNS_RAM_PARAM_ID           (0xD2020068u)

#define Mux_CapSense_BUTTON1_PTR2FLTR_HISTORY_VALUE         (Mux_CapSense_dsFlash.wdgtArray[2].ptr2FltrHistory)
#define Mux_CapSense_BUTTON1_PTR2FLTR_HISTORY_OFFSET        (108u)
#define Mux_CapSense_BUTTON1_PTR2FLTR_HISTORY_SIZE          (4u)
#define Mux_CapSense_BUTTON1_PTR2FLTR_HISTORY_PARAM_ID      (0xD302006Cu)

#define Mux_CapSense_BUTTON1_PTR2DEBOUNCE_VALUE             (Mux_CapSense_dsFlash.wdgtArray[2].ptr2DebounceArr)
#define Mux_CapSense_BUTTON1_PTR2DEBOUNCE_OFFSET            (112u)
#define Mux_CapSense_BUTTON1_PTR2DEBOUNCE_SIZE              (4u)
#define Mux_CapSense_BUTTON1_PTR2DEBOUNCE_PARAM_ID          (0xD5020070u)

#define Mux_CapSense_BUTTON1_STATIC_CONFIG_VALUE            (Mux_CapSense_dsFlash.wdgtArray[2].staticConfig)
#define Mux_CapSense_BUTTON1_STATIC_CONFIG_OFFSET           (116u)
#define Mux_CapSense_BUTTON1_STATIC_CONFIG_SIZE             (4u)
#define Mux_CapSense_BUTTON1_STATIC_CONFIG_PARAM_ID         (0xD4020074u)

#define Mux_CapSense_BUTTON1_TOTAL_NUM_SNS_VALUE            (Mux_CapSense_dsFlash.wdgtArray[2].totalNumSns)
#define Mux_CapSense_BUTTON1_TOTAL_NUM_SNS_OFFSET           (120u)
#define Mux_CapSense_BUTTON1_TOTAL_NUM_SNS_SIZE             (2u)
#define Mux_CapSense_BUTTON1_TOTAL_NUM_SNS_PARAM_ID         (0x98020078u)

#define Mux_CapSense_BUTTON1_TYPE_VALUE                     (Mux_CapSense_dsFlash.wdgtArray[2].wdgtType)
#define Mux_CapSense_BUTTON1_TYPE_OFFSET                    (122u)
#define Mux_CapSense_BUTTON1_TYPE_SIZE                      (1u)
#define Mux_CapSense_BUTTON1_TYPE_PARAM_ID                  (0x5C02007Au)

#define Mux_CapSense_BUTTON1_NUM_COLS_VALUE                 (Mux_CapSense_dsFlash.wdgtArray[2].numCols)
#define Mux_CapSense_BUTTON1_NUM_COLS_OFFSET                (123u)
#define Mux_CapSense_BUTTON1_NUM_COLS_SIZE                  (1u)
#define Mux_CapSense_BUTTON1_NUM_COLS_PARAM_ID              (0x5A02007Bu)

#define Mux_CapSense_BUTTON1_NUM_ROWS_VALUE                 (Mux_CapSense_dsFlash.wdgtArray[2].numRows)
#define Mux_CapSense_BUTTON1_NUM_ROWS_OFFSET                (124u)
#define Mux_CapSense_BUTTON1_NUM_ROWS_SIZE                  (1u)
#define Mux_CapSense_BUTTON1_NUM_ROWS_PARAM_ID              (0x5102007Cu)

#define Mux_CapSense_BUTTON1_X_RESOLUTION_VALUE             (Mux_CapSense_dsFlash.wdgtArray[2].xResolution)
#define Mux_CapSense_BUTTON1_X_RESOLUTION_OFFSET            (126u)
#define Mux_CapSense_BUTTON1_X_RESOLUTION_SIZE              (2u)
#define Mux_CapSense_BUTTON1_X_RESOLUTION_PARAM_ID          (0x9502007Eu)

#define Mux_CapSense_BUTTON1_Y_RESOLUTION_VALUE             (Mux_CapSense_dsFlash.wdgtArray[2].yResolution)
#define Mux_CapSense_BUTTON1_Y_RESOLUTION_OFFSET            (128u)
#define Mux_CapSense_BUTTON1_Y_RESOLUTION_SIZE              (2u)
#define Mux_CapSense_BUTTON1_Y_RESOLUTION_PARAM_ID          (0x9B020080u)

#define Mux_CapSense_BUTTON1_X_CENT_MULT_VALUE              (Mux_CapSense_dsFlash.wdgtArray[2].xCentroidMultiplier)
#define Mux_CapSense_BUTTON1_X_CENT_MULT_OFFSET             (132u)
#define Mux_CapSense_BUTTON1_X_CENT_MULT_SIZE               (4u)
#define Mux_CapSense_BUTTON1_X_CENT_MULT_PARAM_ID           (0xD5020084u)

#define Mux_CapSense_BUTTON1_Y_CENT_MULT_VALUE              (Mux_CapSense_dsFlash.wdgtArray[2].yCentroidMultiplier)
#define Mux_CapSense_BUTTON1_Y_CENT_MULT_OFFSET             (136u)
#define Mux_CapSense_BUTTON1_Y_CENT_MULT_SIZE               (4u)
#define Mux_CapSense_BUTTON1_Y_CENT_MULT_PARAM_ID           (0xD6020088u)

#define Mux_CapSense_BUTTON1_IIR_FILTER_COEFF_VALUE         (Mux_CapSense_dsFlash.wdgtArray[2].iirFilterCoeff)
#define Mux_CapSense_BUTTON1_IIR_FILTER_COEFF_OFFSET        (140u)
#define Mux_CapSense_BUTTON1_IIR_FILTER_COEFF_SIZE          (1u)
#define Mux_CapSense_BUTTON1_IIR_FILTER_COEFF_PARAM_ID      (0x5002008Cu)

#define Mux_CapSense_BUTTON2_PTR2SNS_FLASH_VALUE            (Mux_CapSense_dsFlash.wdgtArray[3].ptr2SnsFlash)
#define Mux_CapSense_BUTTON2_PTR2SNS_FLASH_OFFSET           (144u)
#define Mux_CapSense_BUTTON2_PTR2SNS_FLASH_SIZE             (4u)
#define Mux_CapSense_BUTTON2_PTR2SNS_FLASH_PARAM_ID         (0xD2030090u)

#define Mux_CapSense_BUTTON2_PTR2WD_RAM_VALUE               (Mux_CapSense_dsFlash.wdgtArray[3].ptr2WdgtRam)
#define Mux_CapSense_BUTTON2_PTR2WD_RAM_OFFSET              (148u)
#define Mux_CapSense_BUTTON2_PTR2WD_RAM_SIZE                (4u)
#define Mux_CapSense_BUTTON2_PTR2WD_RAM_PARAM_ID            (0xD3030094u)

#define Mux_CapSense_BUTTON2_PTR2SNS_RAM_VALUE              (Mux_CapSense_dsFlash.wdgtArray[3].ptr2SnsRam)
#define Mux_CapSense_BUTTON2_PTR2SNS_RAM_OFFSET             (152u)
#define Mux_CapSense_BUTTON2_PTR2SNS_RAM_SIZE               (4u)
#define Mux_CapSense_BUTTON2_PTR2SNS_RAM_PARAM_ID           (0xD0030098u)

#define Mux_CapSense_BUTTON2_PTR2FLTR_HISTORY_VALUE         (Mux_CapSense_dsFlash.wdgtArray[3].ptr2FltrHistory)
#define Mux_CapSense_BUTTON2_PTR2FLTR_HISTORY_OFFSET        (156u)
#define Mux_CapSense_BUTTON2_PTR2FLTR_HISTORY_SIZE          (4u)
#define Mux_CapSense_BUTTON2_PTR2FLTR_HISTORY_PARAM_ID      (0xD103009Cu)

#define Mux_CapSense_BUTTON2_PTR2DEBOUNCE_VALUE             (Mux_CapSense_dsFlash.wdgtArray[3].ptr2DebounceArr)
#define Mux_CapSense_BUTTON2_PTR2DEBOUNCE_OFFSET            (160u)
#define Mux_CapSense_BUTTON2_PTR2DEBOUNCE_SIZE              (4u)
#define Mux_CapSense_BUTTON2_PTR2DEBOUNCE_PARAM_ID          (0xDD0300A0u)

#define Mux_CapSense_BUTTON2_STATIC_CONFIG_VALUE            (Mux_CapSense_dsFlash.wdgtArray[3].staticConfig)
#define Mux_CapSense_BUTTON2_STATIC_CONFIG_OFFSET           (164u)
#define Mux_CapSense_BUTTON2_STATIC_CONFIG_SIZE             (4u)
#define Mux_CapSense_BUTTON2_STATIC_CONFIG_PARAM_ID         (0xDC0300A4u)

#define Mux_CapSense_BUTTON2_TOTAL_NUM_SNS_VALUE            (Mux_CapSense_dsFlash.wdgtArray[3].totalNumSns)
#define Mux_CapSense_BUTTON2_TOTAL_NUM_SNS_OFFSET           (168u)
#define Mux_CapSense_BUTTON2_TOTAL_NUM_SNS_SIZE             (2u)
#define Mux_CapSense_BUTTON2_TOTAL_NUM_SNS_PARAM_ID         (0x900300A8u)

#define Mux_CapSense_BUTTON2_TYPE_VALUE                     (Mux_CapSense_dsFlash.wdgtArray[3].wdgtType)
#define Mux_CapSense_BUTTON2_TYPE_OFFSET                    (170u)
#define Mux_CapSense_BUTTON2_TYPE_SIZE                      (1u)
#define Mux_CapSense_BUTTON2_TYPE_PARAM_ID                  (0x540300AAu)

#define Mux_CapSense_BUTTON2_NUM_COLS_VALUE                 (Mux_CapSense_dsFlash.wdgtArray[3].numCols)
#define Mux_CapSense_BUTTON2_NUM_COLS_OFFSET                (171u)
#define Mux_CapSense_BUTTON2_NUM_COLS_SIZE                  (1u)
#define Mux_CapSense_BUTTON2_NUM_COLS_PARAM_ID              (0x520300ABu)

#define Mux_CapSense_BUTTON2_NUM_ROWS_VALUE                 (Mux_CapSense_dsFlash.wdgtArray[3].numRows)
#define Mux_CapSense_BUTTON2_NUM_ROWS_OFFSET                (172u)
#define Mux_CapSense_BUTTON2_NUM_ROWS_SIZE                  (1u)
#define Mux_CapSense_BUTTON2_NUM_ROWS_PARAM_ID              (0x590300ACu)

#define Mux_CapSense_BUTTON2_X_RESOLUTION_VALUE             (Mux_CapSense_dsFlash.wdgtArray[3].xResolution)
#define Mux_CapSense_BUTTON2_X_RESOLUTION_OFFSET            (174u)
#define Mux_CapSense_BUTTON2_X_RESOLUTION_SIZE              (2u)
#define Mux_CapSense_BUTTON2_X_RESOLUTION_PARAM_ID          (0x9D0300AEu)

#define Mux_CapSense_BUTTON2_Y_RESOLUTION_VALUE             (Mux_CapSense_dsFlash.wdgtArray[3].yResolution)
#define Mux_CapSense_BUTTON2_Y_RESOLUTION_OFFSET            (176u)
#define Mux_CapSense_BUTTON2_Y_RESOLUTION_SIZE              (2u)
#define Mux_CapSense_BUTTON2_Y_RESOLUTION_PARAM_ID          (0x970300B0u)

#define Mux_CapSense_BUTTON2_X_CENT_MULT_VALUE              (Mux_CapSense_dsFlash.wdgtArray[3].xCentroidMultiplier)
#define Mux_CapSense_BUTTON2_X_CENT_MULT_OFFSET             (180u)
#define Mux_CapSense_BUTTON2_X_CENT_MULT_SIZE               (4u)
#define Mux_CapSense_BUTTON2_X_CENT_MULT_PARAM_ID           (0xD90300B4u)

#define Mux_CapSense_BUTTON2_Y_CENT_MULT_VALUE              (Mux_CapSense_dsFlash.wdgtArray[3].yCentroidMultiplier)
#define Mux_CapSense_BUTTON2_Y_CENT_MULT_OFFSET             (184u)
#define Mux_CapSense_BUTTON2_Y_CENT_MULT_SIZE               (4u)
#define Mux_CapSense_BUTTON2_Y_CENT_MULT_PARAM_ID           (0xDA0300B8u)

#define Mux_CapSense_BUTTON2_IIR_FILTER_COEFF_VALUE         (Mux_CapSense_dsFlash.wdgtArray[3].iirFilterCoeff)
#define Mux_CapSense_BUTTON2_IIR_FILTER_COEFF_OFFSET        (188u)
#define Mux_CapSense_BUTTON2_IIR_FILTER_COEFF_SIZE          (1u)
#define Mux_CapSense_BUTTON2_IIR_FILTER_COEFF_PARAM_ID      (0x5C0300BCu)

#define Mux_CapSense_BUTTONRX0_PTR2SNS_FLASH_VALUE          (Mux_CapSense_dsFlash.wdgtArray[4].ptr2SnsFlash)
#define Mux_CapSense_BUTTONRX0_PTR2SNS_FLASH_OFFSET         (192u)
#define Mux_CapSense_BUTTONRX0_PTR2SNS_FLASH_SIZE           (4u)
#define Mux_CapSense_BUTTONRX0_PTR2SNS_FLASH_PARAM_ID       (0xD30400C0u)

#define Mux_CapSense_BUTTONRX0_PTR2WD_RAM_VALUE             (Mux_CapSense_dsFlash.wdgtArray[4].ptr2WdgtRam)
#define Mux_CapSense_BUTTONRX0_PTR2WD_RAM_OFFSET            (196u)
#define Mux_CapSense_BUTTONRX0_PTR2WD_RAM_SIZE              (4u)
#define Mux_CapSense_BUTTONRX0_PTR2WD_RAM_PARAM_ID          (0xD20400C4u)

#define Mux_CapSense_BUTTONRX0_PTR2SNS_RAM_VALUE            (Mux_CapSense_dsFlash.wdgtArray[4].ptr2SnsRam)
#define Mux_CapSense_BUTTONRX0_PTR2SNS_RAM_OFFSET           (200u)
#define Mux_CapSense_BUTTONRX0_PTR2SNS_RAM_SIZE             (4u)
#define Mux_CapSense_BUTTONRX0_PTR2SNS_RAM_PARAM_ID         (0xD10400C8u)

#define Mux_CapSense_BUTTONRX0_PTR2FLTR_HISTORY_VALUE       (Mux_CapSense_dsFlash.wdgtArray[4].ptr2FltrHistory)
#define Mux_CapSense_BUTTONRX0_PTR2FLTR_HISTORY_OFFSET      (204u)
#define Mux_CapSense_BUTTONRX0_PTR2FLTR_HISTORY_SIZE        (4u)
#define Mux_CapSense_BUTTONRX0_PTR2FLTR_HISTORY_PARAM_ID    (0xD00400CCu)

#define Mux_CapSense_BUTTONRX0_PTR2DEBOUNCE_VALUE           (Mux_CapSense_dsFlash.wdgtArray[4].ptr2DebounceArr)
#define Mux_CapSense_BUTTONRX0_PTR2DEBOUNCE_OFFSET          (208u)
#define Mux_CapSense_BUTTONRX0_PTR2DEBOUNCE_SIZE            (4u)
#define Mux_CapSense_BUTTONRX0_PTR2DEBOUNCE_PARAM_ID        (0xD60400D0u)

#define Mux_CapSense_BUTTONRX0_STATIC_CONFIG_VALUE          (Mux_CapSense_dsFlash.wdgtArray[4].staticConfig)
#define Mux_CapSense_BUTTONRX0_STATIC_CONFIG_OFFSET         (212u)
#define Mux_CapSense_BUTTONRX0_STATIC_CONFIG_SIZE           (4u)
#define Mux_CapSense_BUTTONRX0_STATIC_CONFIG_PARAM_ID       (0xD70400D4u)

#define Mux_CapSense_BUTTONRX0_TOTAL_NUM_SNS_VALUE          (Mux_CapSense_dsFlash.wdgtArray[4].totalNumSns)
#define Mux_CapSense_BUTTONRX0_TOTAL_NUM_SNS_OFFSET         (216u)
#define Mux_CapSense_BUTTONRX0_TOTAL_NUM_SNS_SIZE           (2u)
#define Mux_CapSense_BUTTONRX0_TOTAL_NUM_SNS_PARAM_ID       (0x9B0400D8u)

#define Mux_CapSense_BUTTONRX0_TYPE_VALUE                   (Mux_CapSense_dsFlash.wdgtArray[4].wdgtType)
#define Mux_CapSense_BUTTONRX0_TYPE_OFFSET                  (218u)
#define Mux_CapSense_BUTTONRX0_TYPE_SIZE                    (1u)
#define Mux_CapSense_BUTTONRX0_TYPE_PARAM_ID                (0x5F0400DAu)

#define Mux_CapSense_BUTTONRX0_NUM_COLS_VALUE               (Mux_CapSense_dsFlash.wdgtArray[4].numCols)
#define Mux_CapSense_BUTTONRX0_NUM_COLS_OFFSET              (219u)
#define Mux_CapSense_BUTTONRX0_NUM_COLS_SIZE                (1u)
#define Mux_CapSense_BUTTONRX0_NUM_COLS_PARAM_ID            (0x590400DBu)

#define Mux_CapSense_BUTTONRX0_NUM_ROWS_VALUE               (Mux_CapSense_dsFlash.wdgtArray[4].numRows)
#define Mux_CapSense_BUTTONRX0_NUM_ROWS_OFFSET              (220u)
#define Mux_CapSense_BUTTONRX0_NUM_ROWS_SIZE                (1u)
#define Mux_CapSense_BUTTONRX0_NUM_ROWS_PARAM_ID            (0x520400DCu)

#define Mux_CapSense_BUTTONRX0_X_RESOLUTION_VALUE           (Mux_CapSense_dsFlash.wdgtArray[4].xResolution)
#define Mux_CapSense_BUTTONRX0_X_RESOLUTION_OFFSET          (222u)
#define Mux_CapSense_BUTTONRX0_X_RESOLUTION_SIZE            (2u)
#define Mux_CapSense_BUTTONRX0_X_RESOLUTION_PARAM_ID        (0x960400DEu)

#define Mux_CapSense_BUTTONRX0_Y_RESOLUTION_VALUE           (Mux_CapSense_dsFlash.wdgtArray[4].yResolution)
#define Mux_CapSense_BUTTONRX0_Y_RESOLUTION_OFFSET          (224u)
#define Mux_CapSense_BUTTONRX0_Y_RESOLUTION_SIZE            (2u)
#define Mux_CapSense_BUTTONRX0_Y_RESOLUTION_PARAM_ID        (0x960400E0u)

#define Mux_CapSense_BUTTONRX0_X_CENT_MULT_VALUE            (Mux_CapSense_dsFlash.wdgtArray[4].xCentroidMultiplier)
#define Mux_CapSense_BUTTONRX0_X_CENT_MULT_OFFSET           (228u)
#define Mux_CapSense_BUTTONRX0_X_CENT_MULT_SIZE             (4u)
#define Mux_CapSense_BUTTONRX0_X_CENT_MULT_PARAM_ID         (0xD80400E4u)

#define Mux_CapSense_BUTTONRX0_Y_CENT_MULT_VALUE            (Mux_CapSense_dsFlash.wdgtArray[4].yCentroidMultiplier)
#define Mux_CapSense_BUTTONRX0_Y_CENT_MULT_OFFSET           (232u)
#define Mux_CapSense_BUTTONRX0_Y_CENT_MULT_SIZE             (4u)
#define Mux_CapSense_BUTTONRX0_Y_CENT_MULT_PARAM_ID         (0xDB0400E8u)

#define Mux_CapSense_BUTTONRX0_IIR_FILTER_COEFF_VALUE       (Mux_CapSense_dsFlash.wdgtArray[4].iirFilterCoeff)
#define Mux_CapSense_BUTTONRX0_IIR_FILTER_COEFF_OFFSET      (236u)
#define Mux_CapSense_BUTTONRX0_IIR_FILTER_COEFF_SIZE        (1u)
#define Mux_CapSense_BUTTONRX0_IIR_FILTER_COEFF_PARAM_ID    (0x5D0400ECu)

#define Mux_CapSense_BUTTONRX1_PTR2SNS_FLASH_VALUE          (Mux_CapSense_dsFlash.wdgtArray[5].ptr2SnsFlash)
#define Mux_CapSense_BUTTONRX1_PTR2SNS_FLASH_OFFSET         (240u)
#define Mux_CapSense_BUTTONRX1_PTR2SNS_FLASH_SIZE           (4u)
#define Mux_CapSense_BUTTONRX1_PTR2SNS_FLASH_PARAM_ID       (0xDF0500F0u)

#define Mux_CapSense_BUTTONRX1_PTR2WD_RAM_VALUE             (Mux_CapSense_dsFlash.wdgtArray[5].ptr2WdgtRam)
#define Mux_CapSense_BUTTONRX1_PTR2WD_RAM_OFFSET            (244u)
#define Mux_CapSense_BUTTONRX1_PTR2WD_RAM_SIZE              (4u)
#define Mux_CapSense_BUTTONRX1_PTR2WD_RAM_PARAM_ID          (0xDE0500F4u)

#define Mux_CapSense_BUTTONRX1_PTR2SNS_RAM_VALUE            (Mux_CapSense_dsFlash.wdgtArray[5].ptr2SnsRam)
#define Mux_CapSense_BUTTONRX1_PTR2SNS_RAM_OFFSET           (248u)
#define Mux_CapSense_BUTTONRX1_PTR2SNS_RAM_SIZE             (4u)
#define Mux_CapSense_BUTTONRX1_PTR2SNS_RAM_PARAM_ID         (0xDD0500F8u)

#define Mux_CapSense_BUTTONRX1_PTR2FLTR_HISTORY_VALUE       (Mux_CapSense_dsFlash.wdgtArray[5].ptr2FltrHistory)
#define Mux_CapSense_BUTTONRX1_PTR2FLTR_HISTORY_OFFSET      (252u)
#define Mux_CapSense_BUTTONRX1_PTR2FLTR_HISTORY_SIZE        (4u)
#define Mux_CapSense_BUTTONRX1_PTR2FLTR_HISTORY_PARAM_ID    (0xDC0500FCu)

#define Mux_CapSense_BUTTONRX1_PTR2DEBOUNCE_VALUE           (Mux_CapSense_dsFlash.wdgtArray[5].ptr2DebounceArr)
#define Mux_CapSense_BUTTONRX1_PTR2DEBOUNCE_OFFSET          (256u)
#define Mux_CapSense_BUTTONRX1_PTR2DEBOUNCE_SIZE            (4u)
#define Mux_CapSense_BUTTONRX1_PTR2DEBOUNCE_PARAM_ID        (0xD5050100u)

#define Mux_CapSense_BUTTONRX1_STATIC_CONFIG_VALUE          (Mux_CapSense_dsFlash.wdgtArray[5].staticConfig)
#define Mux_CapSense_BUTTONRX1_STATIC_CONFIG_OFFSET         (260u)
#define Mux_CapSense_BUTTONRX1_STATIC_CONFIG_SIZE           (4u)
#define Mux_CapSense_BUTTONRX1_STATIC_CONFIG_PARAM_ID       (0xD4050104u)

#define Mux_CapSense_BUTTONRX1_TOTAL_NUM_SNS_VALUE          (Mux_CapSense_dsFlash.wdgtArray[5].totalNumSns)
#define Mux_CapSense_BUTTONRX1_TOTAL_NUM_SNS_OFFSET         (264u)
#define Mux_CapSense_BUTTONRX1_TOTAL_NUM_SNS_SIZE           (2u)
#define Mux_CapSense_BUTTONRX1_TOTAL_NUM_SNS_PARAM_ID       (0x98050108u)

#define Mux_CapSense_BUTTONRX1_TYPE_VALUE                   (Mux_CapSense_dsFlash.wdgtArray[5].wdgtType)
#define Mux_CapSense_BUTTONRX1_TYPE_OFFSET                  (266u)
#define Mux_CapSense_BUTTONRX1_TYPE_SIZE                    (1u)
#define Mux_CapSense_BUTTONRX1_TYPE_PARAM_ID                (0x5C05010Au)

#define Mux_CapSense_BUTTONRX1_NUM_COLS_VALUE               (Mux_CapSense_dsFlash.wdgtArray[5].numCols)
#define Mux_CapSense_BUTTONRX1_NUM_COLS_OFFSET              (267u)
#define Mux_CapSense_BUTTONRX1_NUM_COLS_SIZE                (1u)
#define Mux_CapSense_BUTTONRX1_NUM_COLS_PARAM_ID            (0x5A05010Bu)

#define Mux_CapSense_BUTTONRX1_NUM_ROWS_VALUE               (Mux_CapSense_dsFlash.wdgtArray[5].numRows)
#define Mux_CapSense_BUTTONRX1_NUM_ROWS_OFFSET              (268u)
#define Mux_CapSense_BUTTONRX1_NUM_ROWS_SIZE                (1u)
#define Mux_CapSense_BUTTONRX1_NUM_ROWS_PARAM_ID            (0x5105010Cu)

#define Mux_CapSense_BUTTONRX1_X_RESOLUTION_VALUE           (Mux_CapSense_dsFlash.wdgtArray[5].xResolution)
#define Mux_CapSense_BUTTONRX1_X_RESOLUTION_OFFSET          (270u)
#define Mux_CapSense_BUTTONRX1_X_RESOLUTION_SIZE            (2u)
#define Mux_CapSense_BUTTONRX1_X_RESOLUTION_PARAM_ID        (0x9505010Eu)

#define Mux_CapSense_BUTTONRX1_Y_RESOLUTION_VALUE           (Mux_CapSense_dsFlash.wdgtArray[5].yResolution)
#define Mux_CapSense_BUTTONRX1_Y_RESOLUTION_OFFSET          (272u)
#define Mux_CapSense_BUTTONRX1_Y_RESOLUTION_SIZE            (2u)
#define Mux_CapSense_BUTTONRX1_Y_RESOLUTION_PARAM_ID        (0x9F050110u)

#define Mux_CapSense_BUTTONRX1_X_CENT_MULT_VALUE            (Mux_CapSense_dsFlash.wdgtArray[5].xCentroidMultiplier)
#define Mux_CapSense_BUTTONRX1_X_CENT_MULT_OFFSET           (276u)
#define Mux_CapSense_BUTTONRX1_X_CENT_MULT_SIZE             (4u)
#define Mux_CapSense_BUTTONRX1_X_CENT_MULT_PARAM_ID         (0xD1050114u)

#define Mux_CapSense_BUTTONRX1_Y_CENT_MULT_VALUE            (Mux_CapSense_dsFlash.wdgtArray[5].yCentroidMultiplier)
#define Mux_CapSense_BUTTONRX1_Y_CENT_MULT_OFFSET           (280u)
#define Mux_CapSense_BUTTONRX1_Y_CENT_MULT_SIZE             (4u)
#define Mux_CapSense_BUTTONRX1_Y_CENT_MULT_PARAM_ID         (0xD2050118u)

#define Mux_CapSense_BUTTONRX1_IIR_FILTER_COEFF_VALUE       (Mux_CapSense_dsFlash.wdgtArray[5].iirFilterCoeff)
#define Mux_CapSense_BUTTONRX1_IIR_FILTER_COEFF_OFFSET      (284u)
#define Mux_CapSense_BUTTONRX1_IIR_FILTER_COEFF_SIZE        (1u)
#define Mux_CapSense_BUTTONRX1_IIR_FILTER_COEFF_PARAM_ID    (0x5405011Cu)

#define Mux_CapSense_BUTTONRX2_PTR2SNS_FLASH_VALUE          (Mux_CapSense_dsFlash.wdgtArray[6].ptr2SnsFlash)
#define Mux_CapSense_BUTTONRX2_PTR2SNS_FLASH_OFFSET         (288u)
#define Mux_CapSense_BUTTONRX2_PTR2SNS_FLASH_SIZE           (4u)
#define Mux_CapSense_BUTTONRX2_PTR2SNS_FLASH_PARAM_ID       (0xDA060120u)

#define Mux_CapSense_BUTTONRX2_PTR2WD_RAM_VALUE             (Mux_CapSense_dsFlash.wdgtArray[6].ptr2WdgtRam)
#define Mux_CapSense_BUTTONRX2_PTR2WD_RAM_OFFSET            (292u)
#define Mux_CapSense_BUTTONRX2_PTR2WD_RAM_SIZE              (4u)
#define Mux_CapSense_BUTTONRX2_PTR2WD_RAM_PARAM_ID          (0xDB060124u)

#define Mux_CapSense_BUTTONRX2_PTR2SNS_RAM_VALUE            (Mux_CapSense_dsFlash.wdgtArray[6].ptr2SnsRam)
#define Mux_CapSense_BUTTONRX2_PTR2SNS_RAM_OFFSET           (296u)
#define Mux_CapSense_BUTTONRX2_PTR2SNS_RAM_SIZE             (4u)
#define Mux_CapSense_BUTTONRX2_PTR2SNS_RAM_PARAM_ID         (0xD8060128u)

#define Mux_CapSense_BUTTONRX2_PTR2FLTR_HISTORY_VALUE       (Mux_CapSense_dsFlash.wdgtArray[6].ptr2FltrHistory)
#define Mux_CapSense_BUTTONRX2_PTR2FLTR_HISTORY_OFFSET      (300u)
#define Mux_CapSense_BUTTONRX2_PTR2FLTR_HISTORY_SIZE        (4u)
#define Mux_CapSense_BUTTONRX2_PTR2FLTR_HISTORY_PARAM_ID    (0xD906012Cu)

#define Mux_CapSense_BUTTONRX2_PTR2DEBOUNCE_VALUE           (Mux_CapSense_dsFlash.wdgtArray[6].ptr2DebounceArr)
#define Mux_CapSense_BUTTONRX2_PTR2DEBOUNCE_OFFSET          (304u)
#define Mux_CapSense_BUTTONRX2_PTR2DEBOUNCE_SIZE            (4u)
#define Mux_CapSense_BUTTONRX2_PTR2DEBOUNCE_PARAM_ID        (0xDF060130u)

#define Mux_CapSense_BUTTONRX2_STATIC_CONFIG_VALUE          (Mux_CapSense_dsFlash.wdgtArray[6].staticConfig)
#define Mux_CapSense_BUTTONRX2_STATIC_CONFIG_OFFSET         (308u)
#define Mux_CapSense_BUTTONRX2_STATIC_CONFIG_SIZE           (4u)
#define Mux_CapSense_BUTTONRX2_STATIC_CONFIG_PARAM_ID       (0xDE060134u)

#define Mux_CapSense_BUTTONRX2_TOTAL_NUM_SNS_VALUE          (Mux_CapSense_dsFlash.wdgtArray[6].totalNumSns)
#define Mux_CapSense_BUTTONRX2_TOTAL_NUM_SNS_OFFSET         (312u)
#define Mux_CapSense_BUTTONRX2_TOTAL_NUM_SNS_SIZE           (2u)
#define Mux_CapSense_BUTTONRX2_TOTAL_NUM_SNS_PARAM_ID       (0x92060138u)

#define Mux_CapSense_BUTTONRX2_TYPE_VALUE                   (Mux_CapSense_dsFlash.wdgtArray[6].wdgtType)
#define Mux_CapSense_BUTTONRX2_TYPE_OFFSET                  (314u)
#define Mux_CapSense_BUTTONRX2_TYPE_SIZE                    (1u)
#define Mux_CapSense_BUTTONRX2_TYPE_PARAM_ID                (0x5606013Au)

#define Mux_CapSense_BUTTONRX2_NUM_COLS_VALUE               (Mux_CapSense_dsFlash.wdgtArray[6].numCols)
#define Mux_CapSense_BUTTONRX2_NUM_COLS_OFFSET              (315u)
#define Mux_CapSense_BUTTONRX2_NUM_COLS_SIZE                (1u)
#define Mux_CapSense_BUTTONRX2_NUM_COLS_PARAM_ID            (0x5006013Bu)

#define Mux_CapSense_BUTTONRX2_NUM_ROWS_VALUE               (Mux_CapSense_dsFlash.wdgtArray[6].numRows)
#define Mux_CapSense_BUTTONRX2_NUM_ROWS_OFFSET              (316u)
#define Mux_CapSense_BUTTONRX2_NUM_ROWS_SIZE                (1u)
#define Mux_CapSense_BUTTONRX2_NUM_ROWS_PARAM_ID            (0x5B06013Cu)

#define Mux_CapSense_BUTTONRX2_X_RESOLUTION_VALUE           (Mux_CapSense_dsFlash.wdgtArray[6].xResolution)
#define Mux_CapSense_BUTTONRX2_X_RESOLUTION_OFFSET          (318u)
#define Mux_CapSense_BUTTONRX2_X_RESOLUTION_SIZE            (2u)
#define Mux_CapSense_BUTTONRX2_X_RESOLUTION_PARAM_ID        (0x9F06013Eu)

#define Mux_CapSense_BUTTONRX2_Y_RESOLUTION_VALUE           (Mux_CapSense_dsFlash.wdgtArray[6].yResolution)
#define Mux_CapSense_BUTTONRX2_Y_RESOLUTION_OFFSET          (320u)
#define Mux_CapSense_BUTTONRX2_Y_RESOLUTION_SIZE            (2u)
#define Mux_CapSense_BUTTONRX2_Y_RESOLUTION_PARAM_ID        (0x92060140u)

#define Mux_CapSense_BUTTONRX2_X_CENT_MULT_VALUE            (Mux_CapSense_dsFlash.wdgtArray[6].xCentroidMultiplier)
#define Mux_CapSense_BUTTONRX2_X_CENT_MULT_OFFSET           (324u)
#define Mux_CapSense_BUTTONRX2_X_CENT_MULT_SIZE             (4u)
#define Mux_CapSense_BUTTONRX2_X_CENT_MULT_PARAM_ID         (0xDC060144u)

#define Mux_CapSense_BUTTONRX2_Y_CENT_MULT_VALUE            (Mux_CapSense_dsFlash.wdgtArray[6].yCentroidMultiplier)
#define Mux_CapSense_BUTTONRX2_Y_CENT_MULT_OFFSET           (328u)
#define Mux_CapSense_BUTTONRX2_Y_CENT_MULT_SIZE             (4u)
#define Mux_CapSense_BUTTONRX2_Y_CENT_MULT_PARAM_ID         (0xDF060148u)

#define Mux_CapSense_BUTTONRX2_IIR_FILTER_COEFF_VALUE       (Mux_CapSense_dsFlash.wdgtArray[6].iirFilterCoeff)
#define Mux_CapSense_BUTTONRX2_IIR_FILTER_COEFF_OFFSET      (332u)
#define Mux_CapSense_BUTTONRX2_IIR_FILTER_COEFF_SIZE        (1u)
#define Mux_CapSense_BUTTONRX2_IIR_FILTER_COEFF_PARAM_ID    (0x5906014Cu)


#endif /* End CY_SENSE_Mux_CapSense_REGISTER_MAP_H */


/* [] END OF FILE */
