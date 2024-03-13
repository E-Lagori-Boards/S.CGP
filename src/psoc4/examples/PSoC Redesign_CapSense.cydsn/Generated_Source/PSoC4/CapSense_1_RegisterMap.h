/***************************************************************************//**
* \file CapSense_1_RegisterMap.h
* \version 7.10
*
* \brief
*   This file provides the definitions for the Component data structure register.
*
* \see CapSense_1 v7.10 Datasheet
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

#if !defined(CY_SENSE_CapSense_1_REGISTER_MAP_H)
#define CY_SENSE_CapSense_1_REGISTER_MAP_H

#include <cytypes.h>
#include "CapSense_1_Configuration.h"
#include "CapSense_1_Structure.h"

/*****************************************************************************/
/* RAM Data structure register definitions                                   */
/*****************************************************************************/
#define CapSense_1_CONFIG_ID_VALUE                          (CapSense_1_dsRam.configId)
#define CapSense_1_CONFIG_ID_OFFSET                         (0u)
#define CapSense_1_CONFIG_ID_SIZE                           (2u)
#define CapSense_1_CONFIG_ID_PARAM_ID                       (0x87000000u)

#define CapSense_1_DEVICE_ID_VALUE                          (CapSense_1_dsRam.deviceId)
#define CapSense_1_DEVICE_ID_OFFSET                         (2u)
#define CapSense_1_DEVICE_ID_SIZE                           (2u)
#define CapSense_1_DEVICE_ID_PARAM_ID                       (0x8B000002u)

#define CapSense_1_HW_CLOCK_VALUE                           (CapSense_1_dsRam.hwClock)
#define CapSense_1_HW_CLOCK_OFFSET                          (4u)
#define CapSense_1_HW_CLOCK_SIZE                            (2u)
#define CapSense_1_HW_CLOCK_PARAM_ID                        (0x86000004u)

#define CapSense_1_TUNER_CMD_VALUE                          (CapSense_1_dsRam.tunerCmd)
#define CapSense_1_TUNER_CMD_OFFSET                         (6u)
#define CapSense_1_TUNER_CMD_SIZE                           (2u)
#define CapSense_1_TUNER_CMD_PARAM_ID                       (0xA1000006u)

#define CapSense_1_SCAN_COUNTER_VALUE                       (CapSense_1_dsRam.scanCounter)
#define CapSense_1_SCAN_COUNTER_OFFSET                      (8u)
#define CapSense_1_SCAN_COUNTER_SIZE                        (2u)
#define CapSense_1_SCAN_COUNTER_PARAM_ID                    (0x85000008u)

#define CapSense_1_STATUS_VALUE                             (CapSense_1_dsRam.status)
#define CapSense_1_STATUS_OFFSET                            (12u)
#define CapSense_1_STATUS_SIZE                              (4u)
#define CapSense_1_STATUS_PARAM_ID                          (0xCB00000Cu)

#define CapSense_1_WDGT_ENABLE0_VALUE                       (CapSense_1_dsRam.wdgtEnable[0u])
#define CapSense_1_WDGT_ENABLE0_OFFSET                      (16u)
#define CapSense_1_WDGT_ENABLE0_SIZE                        (4u)
#define CapSense_1_WDGT_ENABLE0_PARAM_ID                    (0xE6000010u)

#define CapSense_1_WDGT_STATUS0_VALUE                       (CapSense_1_dsRam.wdgtStatus[0u])
#define CapSense_1_WDGT_STATUS0_OFFSET                      (20u)
#define CapSense_1_WDGT_STATUS0_SIZE                        (4u)
#define CapSense_1_WDGT_STATUS0_PARAM_ID                    (0xCC000014u)

#define CapSense_1_SNS_STATUS0_VALUE                        (CapSense_1_dsRam.snsStatus[0u])
#define CapSense_1_SNS_STATUS0_OFFSET                       (24u)
#define CapSense_1_SNS_STATUS0_SIZE                         (2u)
#define CapSense_1_SNS_STATUS0_PARAM_ID                     (0x80000018u)

#define CapSense_1_SNS_STATUS1_VALUE                        (CapSense_1_dsRam.snsStatus[1u])
#define CapSense_1_SNS_STATUS1_OFFSET                       (26u)
#define CapSense_1_SNS_STATUS1_SIZE                         (2u)
#define CapSense_1_SNS_STATUS1_PARAM_ID                     (0x8C00001Au)

#define CapSense_1_CSD0_CONFIG_VALUE                        (CapSense_1_dsRam.csd0Config)
#define CapSense_1_CSD0_CONFIG_OFFSET                       (28u)
#define CapSense_1_CSD0_CONFIG_SIZE                         (2u)
#define CapSense_1_CSD0_CONFIG_PARAM_ID                     (0xA780001Cu)

#define CapSense_1_MOD_CSD_CLK_VALUE                        (CapSense_1_dsRam.modCsdClk)
#define CapSense_1_MOD_CSD_CLK_OFFSET                       (30u)
#define CapSense_1_MOD_CSD_CLK_SIZE                         (1u)
#define CapSense_1_MOD_CSD_CLK_PARAM_ID                     (0x6380001Eu)

#define CapSense_1_BUTTON0_RESOLUTION_VALUE                 (CapSense_1_dsRam.wdgtList.button0.resolution)
#define CapSense_1_BUTTON0_RESOLUTION_OFFSET                (32u)
#define CapSense_1_BUTTON0_RESOLUTION_SIZE                  (2u)
#define CapSense_1_BUTTON0_RESOLUTION_PARAM_ID              (0x80800020u)

#define CapSense_1_BUTTON0_FINGER_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button0.fingerTh)
#define CapSense_1_BUTTON0_FINGER_TH_OFFSET                 (34u)
#define CapSense_1_BUTTON0_FINGER_TH_SIZE                   (2u)
#define CapSense_1_BUTTON0_FINGER_TH_PARAM_ID               (0x8C800022u)

#define CapSense_1_BUTTON0_NOISE_TH_VALUE                   (CapSense_1_dsRam.wdgtList.button0.noiseTh)
#define CapSense_1_BUTTON0_NOISE_TH_OFFSET                  (36u)
#define CapSense_1_BUTTON0_NOISE_TH_SIZE                    (1u)
#define CapSense_1_BUTTON0_NOISE_TH_PARAM_ID                (0x49800024u)

#define CapSense_1_BUTTON0_NNOISE_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button0.nNoiseTh)
#define CapSense_1_BUTTON0_NNOISE_TH_OFFSET                 (37u)
#define CapSense_1_BUTTON0_NNOISE_TH_SIZE                   (1u)
#define CapSense_1_BUTTON0_NNOISE_TH_PARAM_ID               (0x4F800025u)

#define CapSense_1_BUTTON0_HYSTERESIS_VALUE                 (CapSense_1_dsRam.wdgtList.button0.hysteresis)
#define CapSense_1_BUTTON0_HYSTERESIS_OFFSET                (38u)
#define CapSense_1_BUTTON0_HYSTERESIS_SIZE                  (1u)
#define CapSense_1_BUTTON0_HYSTERESIS_PARAM_ID              (0x45800026u)

#define CapSense_1_BUTTON0_ON_DEBOUNCE_VALUE                (CapSense_1_dsRam.wdgtList.button0.onDebounce)
#define CapSense_1_BUTTON0_ON_DEBOUNCE_OFFSET               (39u)
#define CapSense_1_BUTTON0_ON_DEBOUNCE_SIZE                 (1u)
#define CapSense_1_BUTTON0_ON_DEBOUNCE_PARAM_ID             (0x43800027u)

#define CapSense_1_BUTTON0_LOW_BSLN_RST_VALUE               (CapSense_1_dsRam.wdgtList.button0.lowBslnRst)
#define CapSense_1_BUTTON0_LOW_BSLN_RST_OFFSET              (40u)
#define CapSense_1_BUTTON0_LOW_BSLN_RST_SIZE                (1u)
#define CapSense_1_BUTTON0_LOW_BSLN_RST_PARAM_ID            (0x4A800028u)

#define CapSense_1_BUTTON0_IDAC_MOD0_VALUE                  (CapSense_1_dsRam.wdgtList.button0.idacMod[0u])
#define CapSense_1_BUTTON0_IDAC_MOD0_OFFSET                 (41u)
#define CapSense_1_BUTTON0_IDAC_MOD0_SIZE                   (1u)
#define CapSense_1_BUTTON0_IDAC_MOD0_PARAM_ID               (0x41000029u)

#define CapSense_1_BUTTON0_ROW_IDAC_MOD0_VALUE              (CapSense_1_dsRam.wdgtList.button0.rowIdacMod[0u])
#define CapSense_1_BUTTON0_ROW_IDAC_MOD0_OFFSET             (42u)
#define CapSense_1_BUTTON0_ROW_IDAC_MOD0_SIZE               (1u)
#define CapSense_1_BUTTON0_ROW_IDAC_MOD0_PARAM_ID           (0x4B00002Au)

#define CapSense_1_BUTTON0_IDAC_GAIN_INDEX_VALUE            (CapSense_1_dsRam.wdgtList.button0.idacGainIndex)
#define CapSense_1_BUTTON0_IDAC_GAIN_INDEX_OFFSET           (43u)
#define CapSense_1_BUTTON0_IDAC_GAIN_INDEX_SIZE             (1u)
#define CapSense_1_BUTTON0_IDAC_GAIN_INDEX_PARAM_ID         (0x4080002Bu)

#define CapSense_1_BUTTON0_SNS_CLK_VALUE                    (CapSense_1_dsRam.wdgtList.button0.snsClk)
#define CapSense_1_BUTTON0_SNS_CLK_OFFSET                   (44u)
#define CapSense_1_BUTTON0_SNS_CLK_SIZE                     (2u)
#define CapSense_1_BUTTON0_SNS_CLK_PARAM_ID                 (0x8380002Cu)

#define CapSense_1_BUTTON0_ROW_SNS_CLK_VALUE                (CapSense_1_dsRam.wdgtList.button0.rowSnsClk)
#define CapSense_1_BUTTON0_ROW_SNS_CLK_OFFSET               (46u)
#define CapSense_1_BUTTON0_ROW_SNS_CLK_SIZE                 (2u)
#define CapSense_1_BUTTON0_ROW_SNS_CLK_PARAM_ID             (0x8F80002Eu)

#define CapSense_1_BUTTON0_SNS_CLK_SOURCE_VALUE             (CapSense_1_dsRam.wdgtList.button0.snsClkSource)
#define CapSense_1_BUTTON0_SNS_CLK_SOURCE_OFFSET            (48u)
#define CapSense_1_BUTTON0_SNS_CLK_SOURCE_SIZE              (1u)
#define CapSense_1_BUTTON0_SNS_CLK_SOURCE_PARAM_ID          (0x4D800030u)

#define CapSense_1_BUTTON0_ROW_SNS_CLK_SOURCE_VALUE         (CapSense_1_dsRam.wdgtList.button0.rowSnsClkSource)
#define CapSense_1_BUTTON0_ROW_SNS_CLK_SOURCE_OFFSET        (49u)
#define CapSense_1_BUTTON0_ROW_SNS_CLK_SOURCE_SIZE          (1u)
#define CapSense_1_BUTTON0_ROW_SNS_CLK_SOURCE_PARAM_ID      (0x4B800031u)

#define CapSense_1_BUTTON0_FINGER_CAP_VALUE                 (CapSense_1_dsRam.wdgtList.button0.fingerCap)
#define CapSense_1_BUTTON0_FINGER_CAP_OFFSET                (50u)
#define CapSense_1_BUTTON0_FINGER_CAP_SIZE                  (2u)
#define CapSense_1_BUTTON0_FINGER_CAP_PARAM_ID              (0xAF000032u)

#define CapSense_1_BUTTON0_SIGPFC_VALUE                     (CapSense_1_dsRam.wdgtList.button0.sigPFC)
#define CapSense_1_BUTTON0_SIGPFC_OFFSET                    (52u)
#define CapSense_1_BUTTON0_SIGPFC_SIZE                      (2u)
#define CapSense_1_BUTTON0_SIGPFC_PARAM_ID                  (0xA2000034u)

#define CapSense_1_TOUCHPAD0_RESOLUTION_VALUE               (CapSense_1_dsRam.wdgtList.touchpad0.resolution)
#define CapSense_1_TOUCHPAD0_RESOLUTION_OFFSET              (54u)
#define CapSense_1_TOUCHPAD0_RESOLUTION_SIZE                (2u)
#define CapSense_1_TOUCHPAD0_RESOLUTION_PARAM_ID            (0x8B810036u)

#define CapSense_1_TOUCHPAD0_FINGER_TH_VALUE                (CapSense_1_dsRam.wdgtList.touchpad0.fingerTh)
#define CapSense_1_TOUCHPAD0_FINGER_TH_OFFSET               (56u)
#define CapSense_1_TOUCHPAD0_FINGER_TH_SIZE                 (2u)
#define CapSense_1_TOUCHPAD0_FINGER_TH_PARAM_ID             (0x84810038u)

#define CapSense_1_TOUCHPAD0_NOISE_TH_VALUE                 (CapSense_1_dsRam.wdgtList.touchpad0.noiseTh)
#define CapSense_1_TOUCHPAD0_NOISE_TH_OFFSET                (58u)
#define CapSense_1_TOUCHPAD0_NOISE_TH_SIZE                  (1u)
#define CapSense_1_TOUCHPAD0_NOISE_TH_PARAM_ID              (0x4081003Au)

#define CapSense_1_TOUCHPAD0_NNOISE_TH_VALUE                (CapSense_1_dsRam.wdgtList.touchpad0.nNoiseTh)
#define CapSense_1_TOUCHPAD0_NNOISE_TH_OFFSET               (59u)
#define CapSense_1_TOUCHPAD0_NNOISE_TH_SIZE                 (1u)
#define CapSense_1_TOUCHPAD0_NNOISE_TH_PARAM_ID             (0x4681003Bu)

#define CapSense_1_TOUCHPAD0_HYSTERESIS_VALUE               (CapSense_1_dsRam.wdgtList.touchpad0.hysteresis)
#define CapSense_1_TOUCHPAD0_HYSTERESIS_OFFSET              (60u)
#define CapSense_1_TOUCHPAD0_HYSTERESIS_SIZE                (1u)
#define CapSense_1_TOUCHPAD0_HYSTERESIS_PARAM_ID            (0x4D81003Cu)

#define CapSense_1_TOUCHPAD0_ON_DEBOUNCE_VALUE              (CapSense_1_dsRam.wdgtList.touchpad0.onDebounce)
#define CapSense_1_TOUCHPAD0_ON_DEBOUNCE_OFFSET             (61u)
#define CapSense_1_TOUCHPAD0_ON_DEBOUNCE_SIZE               (1u)
#define CapSense_1_TOUCHPAD0_ON_DEBOUNCE_PARAM_ID           (0x4B81003Du)

#define CapSense_1_TOUCHPAD0_LOW_BSLN_RST_VALUE             (CapSense_1_dsRam.wdgtList.touchpad0.lowBslnRst)
#define CapSense_1_TOUCHPAD0_LOW_BSLN_RST_OFFSET            (62u)
#define CapSense_1_TOUCHPAD0_LOW_BSLN_RST_SIZE              (1u)
#define CapSense_1_TOUCHPAD0_LOW_BSLN_RST_PARAM_ID          (0x4181003Eu)

#define CapSense_1_TOUCHPAD0_IDAC_MOD0_VALUE                (CapSense_1_dsRam.wdgtList.touchpad0.idacMod[0u])
#define CapSense_1_TOUCHPAD0_IDAC_MOD0_OFFSET               (63u)
#define CapSense_1_TOUCHPAD0_IDAC_MOD0_SIZE                 (1u)
#define CapSense_1_TOUCHPAD0_IDAC_MOD0_PARAM_ID             (0x4A01003Fu)

#define CapSense_1_TOUCHPAD0_ROW_IDAC_MOD0_VALUE            (CapSense_1_dsRam.wdgtList.touchpad0.rowIdacMod[0u])
#define CapSense_1_TOUCHPAD0_ROW_IDAC_MOD0_OFFSET           (64u)
#define CapSense_1_TOUCHPAD0_ROW_IDAC_MOD0_SIZE             (1u)
#define CapSense_1_TOUCHPAD0_ROW_IDAC_MOD0_PARAM_ID         (0x41010040u)

#define CapSense_1_TOUCHPAD0_IDAC_GAIN_INDEX_VALUE          (CapSense_1_dsRam.wdgtList.touchpad0.idacGainIndex)
#define CapSense_1_TOUCHPAD0_IDAC_GAIN_INDEX_OFFSET         (65u)
#define CapSense_1_TOUCHPAD0_IDAC_GAIN_INDEX_SIZE           (1u)
#define CapSense_1_TOUCHPAD0_IDAC_GAIN_INDEX_PARAM_ID       (0x4A810041u)

#define CapSense_1_TOUCHPAD0_SNS_CLK_VALUE                  (CapSense_1_dsRam.wdgtList.touchpad0.snsClk)
#define CapSense_1_TOUCHPAD0_SNS_CLK_OFFSET                 (66u)
#define CapSense_1_TOUCHPAD0_SNS_CLK_SIZE                   (2u)
#define CapSense_1_TOUCHPAD0_SNS_CLK_PARAM_ID               (0x88810042u)

#define CapSense_1_TOUCHPAD0_ROW_SNS_CLK_VALUE              (CapSense_1_dsRam.wdgtList.touchpad0.rowSnsClk)
#define CapSense_1_TOUCHPAD0_ROW_SNS_CLK_OFFSET             (68u)
#define CapSense_1_TOUCHPAD0_ROW_SNS_CLK_SIZE               (2u)
#define CapSense_1_TOUCHPAD0_ROW_SNS_CLK_PARAM_ID           (0x85810044u)

#define CapSense_1_TOUCHPAD0_SNS_CLK_SOURCE_VALUE           (CapSense_1_dsRam.wdgtList.touchpad0.snsClkSource)
#define CapSense_1_TOUCHPAD0_SNS_CLK_SOURCE_OFFSET          (70u)
#define CapSense_1_TOUCHPAD0_SNS_CLK_SOURCE_SIZE            (1u)
#define CapSense_1_TOUCHPAD0_SNS_CLK_SOURCE_PARAM_ID        (0x41810046u)

#define CapSense_1_TOUCHPAD0_ROW_SNS_CLK_SOURCE_VALUE       (CapSense_1_dsRam.wdgtList.touchpad0.rowSnsClkSource)
#define CapSense_1_TOUCHPAD0_ROW_SNS_CLK_SOURCE_OFFSET      (71u)
#define CapSense_1_TOUCHPAD0_ROW_SNS_CLK_SOURCE_SIZE        (1u)
#define CapSense_1_TOUCHPAD0_ROW_SNS_CLK_SOURCE_PARAM_ID    (0x47810047u)

#define CapSense_1_TOUCHPAD0_FINGER_CAP_VALUE               (CapSense_1_dsRam.wdgtList.touchpad0.fingerCap)
#define CapSense_1_TOUCHPAD0_FINGER_CAP_OFFSET              (72u)
#define CapSense_1_TOUCHPAD0_FINGER_CAP_SIZE                (2u)
#define CapSense_1_TOUCHPAD0_FINGER_CAP_PARAM_ID            (0xA0010048u)

#define CapSense_1_TOUCHPAD0_SIGPFC_VALUE                   (CapSense_1_dsRam.wdgtList.touchpad0.sigPFC)
#define CapSense_1_TOUCHPAD0_SIGPFC_OFFSET                  (74u)
#define CapSense_1_TOUCHPAD0_SIGPFC_SIZE                    (2u)
#define CapSense_1_TOUCHPAD0_SIGPFC_PARAM_ID                (0xAC01004Au)

#define CapSense_1_TOUCHPAD0_POS_X_VALUE                    (CapSense_1_dsRam.wdgtList.touchpad0.posX)
#define CapSense_1_TOUCHPAD0_POS_X_OFFSET                   (76u)
#define CapSense_1_TOUCHPAD0_POS_X_SIZE                     (2u)
#define CapSense_1_TOUCHPAD0_POS_X_PARAM_ID                 (0x8A01004Cu)

#define CapSense_1_TOUCHPAD0_POS_Y_VALUE                    (CapSense_1_dsRam.wdgtList.touchpad0.posY)
#define CapSense_1_TOUCHPAD0_POS_Y_OFFSET                   (78u)
#define CapSense_1_TOUCHPAD0_POS_Y_SIZE                     (2u)
#define CapSense_1_TOUCHPAD0_POS_Y_PARAM_ID                 (0x8601004Eu)

#define CapSense_1_BUTTON0_SNS0_RAW0_VALUE                  (CapSense_1_dsRam.snsList.button0[0u].raw[0u])
#define CapSense_1_BUTTON0_SNS0_RAW0_OFFSET                 (80u)
#define CapSense_1_BUTTON0_SNS0_RAW0_SIZE                   (2u)
#define CapSense_1_BUTTON0_SNS0_RAW0_PARAM_ID               (0x8F000050u)

#define CapSense_1_BUTTON0_SNS0_BSLN0_VALUE                 (CapSense_1_dsRam.snsList.button0[0u].bsln[0u])
#define CapSense_1_BUTTON0_SNS0_BSLN0_OFFSET                (82u)
#define CapSense_1_BUTTON0_SNS0_BSLN0_SIZE                  (2u)
#define CapSense_1_BUTTON0_SNS0_BSLN0_PARAM_ID              (0x83000052u)

#define CapSense_1_BUTTON0_SNS0_BSLN_EXT0_VALUE             (CapSense_1_dsRam.snsList.button0[0u].bslnExt[0u])
#define CapSense_1_BUTTON0_SNS0_BSLN_EXT0_OFFSET            (84u)
#define CapSense_1_BUTTON0_SNS0_BSLN_EXT0_SIZE              (1u)
#define CapSense_1_BUTTON0_SNS0_BSLN_EXT0_PARAM_ID          (0x46000054u)

#define CapSense_1_BUTTON0_SNS0_DIFF_VALUE                  (CapSense_1_dsRam.snsList.button0[0u].diff)
#define CapSense_1_BUTTON0_SNS0_DIFF_OFFSET                 (86u)
#define CapSense_1_BUTTON0_SNS0_DIFF_SIZE                   (2u)
#define CapSense_1_BUTTON0_SNS0_DIFF_PARAM_ID               (0x82000056u)

#define CapSense_1_BUTTON0_SNS0_NEG_BSLN_RST_CNT0_VALUE     (CapSense_1_dsRam.snsList.button0[0u].negBslnRstCnt[0u])
#define CapSense_1_BUTTON0_SNS0_NEG_BSLN_RST_CNT0_OFFSET    (88u)
#define CapSense_1_BUTTON0_SNS0_NEG_BSLN_RST_CNT0_SIZE      (1u)
#define CapSense_1_BUTTON0_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID  (0x45000058u)

#define CapSense_1_BUTTON0_SNS0_IDAC_COMP0_VALUE            (CapSense_1_dsRam.snsList.button0[0u].idacComp[0u])
#define CapSense_1_BUTTON0_SNS0_IDAC_COMP0_OFFSET           (89u)
#define CapSense_1_BUTTON0_SNS0_IDAC_COMP0_SIZE             (1u)
#define CapSense_1_BUTTON0_SNS0_IDAC_COMP0_PARAM_ID         (0x43000059u)

#define CapSense_1_TOUCHPAD0_COL0_RAW0_VALUE                (CapSense_1_dsRam.snsList.touchpad0[0u].raw[0u])
#define CapSense_1_TOUCHPAD0_COL0_RAW0_OFFSET               (90u)
#define CapSense_1_TOUCHPAD0_COL0_RAW0_SIZE                 (2u)
#define CapSense_1_TOUCHPAD0_COL0_RAW0_PARAM_ID             (0x8100005Au)

#define CapSense_1_TOUCHPAD0_COL0_BSLN0_VALUE               (CapSense_1_dsRam.snsList.touchpad0[0u].bsln[0u])
#define CapSense_1_TOUCHPAD0_COL0_BSLN0_OFFSET              (92u)
#define CapSense_1_TOUCHPAD0_COL0_BSLN0_SIZE                (2u)
#define CapSense_1_TOUCHPAD0_COL0_BSLN0_PARAM_ID            (0x8C00005Cu)

#define CapSense_1_TOUCHPAD0_COL0_BSLN_EXT0_VALUE           (CapSense_1_dsRam.snsList.touchpad0[0u].bslnExt[0u])
#define CapSense_1_TOUCHPAD0_COL0_BSLN_EXT0_OFFSET          (94u)
#define CapSense_1_TOUCHPAD0_COL0_BSLN_EXT0_SIZE            (1u)
#define CapSense_1_TOUCHPAD0_COL0_BSLN_EXT0_PARAM_ID        (0x4800005Eu)

#define CapSense_1_TOUCHPAD0_COL0_DIFF_VALUE                (CapSense_1_dsRam.snsList.touchpad0[0u].diff)
#define CapSense_1_TOUCHPAD0_COL0_DIFF_OFFSET               (96u)
#define CapSense_1_TOUCHPAD0_COL0_DIFF_SIZE                 (2u)
#define CapSense_1_TOUCHPAD0_COL0_DIFF_PARAM_ID             (0x80000060u)

#define CapSense_1_TOUCHPAD0_COL0_NEG_BSLN_RST_CNT0_VALUE   (CapSense_1_dsRam.snsList.touchpad0[0u].negBslnRstCnt[0u])
#define CapSense_1_TOUCHPAD0_COL0_NEG_BSLN_RST_CNT0_OFFSET  (98u)
#define CapSense_1_TOUCHPAD0_COL0_NEG_BSLN_RST_CNT0_SIZE    (1u)
#define CapSense_1_TOUCHPAD0_COL0_NEG_BSLN_RST_CNT0_PARAM_ID (0x44000062u)

#define CapSense_1_TOUCHPAD0_COL0_IDAC_COMP0_VALUE          (CapSense_1_dsRam.snsList.touchpad0[0u].idacComp[0u])
#define CapSense_1_TOUCHPAD0_COL0_IDAC_COMP0_OFFSET         (99u)
#define CapSense_1_TOUCHPAD0_COL0_IDAC_COMP0_SIZE           (1u)
#define CapSense_1_TOUCHPAD0_COL0_IDAC_COMP0_PARAM_ID       (0x42000063u)

#define CapSense_1_TOUCHPAD0_COL1_RAW0_VALUE                (CapSense_1_dsRam.snsList.touchpad0[1u].raw[0u])
#define CapSense_1_TOUCHPAD0_COL1_RAW0_OFFSET               (100u)
#define CapSense_1_TOUCHPAD0_COL1_RAW0_SIZE                 (2u)
#define CapSense_1_TOUCHPAD0_COL1_RAW0_PARAM_ID             (0x81000064u)

#define CapSense_1_TOUCHPAD0_COL1_BSLN0_VALUE               (CapSense_1_dsRam.snsList.touchpad0[1u].bsln[0u])
#define CapSense_1_TOUCHPAD0_COL1_BSLN0_OFFSET              (102u)
#define CapSense_1_TOUCHPAD0_COL1_BSLN0_SIZE                (2u)
#define CapSense_1_TOUCHPAD0_COL1_BSLN0_PARAM_ID            (0x8D000066u)

#define CapSense_1_TOUCHPAD0_COL1_BSLN_EXT0_VALUE           (CapSense_1_dsRam.snsList.touchpad0[1u].bslnExt[0u])
#define CapSense_1_TOUCHPAD0_COL1_BSLN_EXT0_OFFSET          (104u)
#define CapSense_1_TOUCHPAD0_COL1_BSLN_EXT0_SIZE            (1u)
#define CapSense_1_TOUCHPAD0_COL1_BSLN_EXT0_PARAM_ID        (0x4A000068u)

#define CapSense_1_TOUCHPAD0_COL1_DIFF_VALUE                (CapSense_1_dsRam.snsList.touchpad0[1u].diff)
#define CapSense_1_TOUCHPAD0_COL1_DIFF_OFFSET               (106u)
#define CapSense_1_TOUCHPAD0_COL1_DIFF_SIZE                 (2u)
#define CapSense_1_TOUCHPAD0_COL1_DIFF_PARAM_ID             (0x8E00006Au)

#define CapSense_1_TOUCHPAD0_COL1_NEG_BSLN_RST_CNT0_VALUE   (CapSense_1_dsRam.snsList.touchpad0[1u].negBslnRstCnt[0u])
#define CapSense_1_TOUCHPAD0_COL1_NEG_BSLN_RST_CNT0_OFFSET  (108u)
#define CapSense_1_TOUCHPAD0_COL1_NEG_BSLN_RST_CNT0_SIZE    (1u)
#define CapSense_1_TOUCHPAD0_COL1_NEG_BSLN_RST_CNT0_PARAM_ID (0x4B00006Cu)

#define CapSense_1_TOUCHPAD0_COL1_IDAC_COMP0_VALUE          (CapSense_1_dsRam.snsList.touchpad0[1u].idacComp[0u])
#define CapSense_1_TOUCHPAD0_COL1_IDAC_COMP0_OFFSET         (109u)
#define CapSense_1_TOUCHPAD0_COL1_IDAC_COMP0_SIZE           (1u)
#define CapSense_1_TOUCHPAD0_COL1_IDAC_COMP0_PARAM_ID       (0x4D00006Du)

#define CapSense_1_TOUCHPAD0_COL2_RAW0_VALUE                (CapSense_1_dsRam.snsList.touchpad0[2u].raw[0u])
#define CapSense_1_TOUCHPAD0_COL2_RAW0_OFFSET               (110u)
#define CapSense_1_TOUCHPAD0_COL2_RAW0_SIZE                 (2u)
#define CapSense_1_TOUCHPAD0_COL2_RAW0_PARAM_ID             (0x8F00006Eu)

#define CapSense_1_TOUCHPAD0_COL2_BSLN0_VALUE               (CapSense_1_dsRam.snsList.touchpad0[2u].bsln[0u])
#define CapSense_1_TOUCHPAD0_COL2_BSLN0_OFFSET              (112u)
#define CapSense_1_TOUCHPAD0_COL2_BSLN0_SIZE                (2u)
#define CapSense_1_TOUCHPAD0_COL2_BSLN0_PARAM_ID            (0x85000070u)

#define CapSense_1_TOUCHPAD0_COL2_BSLN_EXT0_VALUE           (CapSense_1_dsRam.snsList.touchpad0[2u].bslnExt[0u])
#define CapSense_1_TOUCHPAD0_COL2_BSLN_EXT0_OFFSET          (114u)
#define CapSense_1_TOUCHPAD0_COL2_BSLN_EXT0_SIZE            (1u)
#define CapSense_1_TOUCHPAD0_COL2_BSLN_EXT0_PARAM_ID        (0x41000072u)

#define CapSense_1_TOUCHPAD0_COL2_DIFF_VALUE                (CapSense_1_dsRam.snsList.touchpad0[2u].diff)
#define CapSense_1_TOUCHPAD0_COL2_DIFF_OFFSET               (116u)
#define CapSense_1_TOUCHPAD0_COL2_DIFF_SIZE                 (2u)
#define CapSense_1_TOUCHPAD0_COL2_DIFF_PARAM_ID             (0x84000074u)

#define CapSense_1_TOUCHPAD0_COL2_NEG_BSLN_RST_CNT0_VALUE   (CapSense_1_dsRam.snsList.touchpad0[2u].negBslnRstCnt[0u])
#define CapSense_1_TOUCHPAD0_COL2_NEG_BSLN_RST_CNT0_OFFSET  (118u)
#define CapSense_1_TOUCHPAD0_COL2_NEG_BSLN_RST_CNT0_SIZE    (1u)
#define CapSense_1_TOUCHPAD0_COL2_NEG_BSLN_RST_CNT0_PARAM_ID (0x40000076u)

#define CapSense_1_TOUCHPAD0_COL2_IDAC_COMP0_VALUE          (CapSense_1_dsRam.snsList.touchpad0[2u].idacComp[0u])
#define CapSense_1_TOUCHPAD0_COL2_IDAC_COMP0_OFFSET         (119u)
#define CapSense_1_TOUCHPAD0_COL2_IDAC_COMP0_SIZE           (1u)
#define CapSense_1_TOUCHPAD0_COL2_IDAC_COMP0_PARAM_ID       (0x46000077u)

#define CapSense_1_TOUCHPAD0_COL3_RAW0_VALUE                (CapSense_1_dsRam.snsList.touchpad0[3u].raw[0u])
#define CapSense_1_TOUCHPAD0_COL3_RAW0_OFFSET               (120u)
#define CapSense_1_TOUCHPAD0_COL3_RAW0_SIZE                 (2u)
#define CapSense_1_TOUCHPAD0_COL3_RAW0_PARAM_ID             (0x87000078u)

#define CapSense_1_TOUCHPAD0_COL3_BSLN0_VALUE               (CapSense_1_dsRam.snsList.touchpad0[3u].bsln[0u])
#define CapSense_1_TOUCHPAD0_COL3_BSLN0_OFFSET              (122u)
#define CapSense_1_TOUCHPAD0_COL3_BSLN0_SIZE                (2u)
#define CapSense_1_TOUCHPAD0_COL3_BSLN0_PARAM_ID            (0x8B00007Au)

#define CapSense_1_TOUCHPAD0_COL3_BSLN_EXT0_VALUE           (CapSense_1_dsRam.snsList.touchpad0[3u].bslnExt[0u])
#define CapSense_1_TOUCHPAD0_COL3_BSLN_EXT0_OFFSET          (124u)
#define CapSense_1_TOUCHPAD0_COL3_BSLN_EXT0_SIZE            (1u)
#define CapSense_1_TOUCHPAD0_COL3_BSLN_EXT0_PARAM_ID        (0x4E00007Cu)

#define CapSense_1_TOUCHPAD0_COL3_DIFF_VALUE                (CapSense_1_dsRam.snsList.touchpad0[3u].diff)
#define CapSense_1_TOUCHPAD0_COL3_DIFF_OFFSET               (126u)
#define CapSense_1_TOUCHPAD0_COL3_DIFF_SIZE                 (2u)
#define CapSense_1_TOUCHPAD0_COL3_DIFF_PARAM_ID             (0x8A00007Eu)

#define CapSense_1_TOUCHPAD0_COL3_NEG_BSLN_RST_CNT0_VALUE   (CapSense_1_dsRam.snsList.touchpad0[3u].negBslnRstCnt[0u])
#define CapSense_1_TOUCHPAD0_COL3_NEG_BSLN_RST_CNT0_OFFSET  (128u)
#define CapSense_1_TOUCHPAD0_COL3_NEG_BSLN_RST_CNT0_SIZE    (1u)
#define CapSense_1_TOUCHPAD0_COL3_NEG_BSLN_RST_CNT0_PARAM_ID (0x4C000080u)

#define CapSense_1_TOUCHPAD0_COL3_IDAC_COMP0_VALUE          (CapSense_1_dsRam.snsList.touchpad0[3u].idacComp[0u])
#define CapSense_1_TOUCHPAD0_COL3_IDAC_COMP0_OFFSET         (129u)
#define CapSense_1_TOUCHPAD0_COL3_IDAC_COMP0_SIZE           (1u)
#define CapSense_1_TOUCHPAD0_COL3_IDAC_COMP0_PARAM_ID       (0x4A000081u)

#define CapSense_1_TOUCHPAD0_COL4_RAW0_VALUE                (CapSense_1_dsRam.snsList.touchpad0[4u].raw[0u])
#define CapSense_1_TOUCHPAD0_COL4_RAW0_OFFSET               (130u)
#define CapSense_1_TOUCHPAD0_COL4_RAW0_SIZE                 (2u)
#define CapSense_1_TOUCHPAD0_COL4_RAW0_PARAM_ID             (0x88000082u)

#define CapSense_1_TOUCHPAD0_COL4_BSLN0_VALUE               (CapSense_1_dsRam.snsList.touchpad0[4u].bsln[0u])
#define CapSense_1_TOUCHPAD0_COL4_BSLN0_OFFSET              (132u)
#define CapSense_1_TOUCHPAD0_COL4_BSLN0_SIZE                (2u)
#define CapSense_1_TOUCHPAD0_COL4_BSLN0_PARAM_ID            (0x85000084u)

#define CapSense_1_TOUCHPAD0_COL4_BSLN_EXT0_VALUE           (CapSense_1_dsRam.snsList.touchpad0[4u].bslnExt[0u])
#define CapSense_1_TOUCHPAD0_COL4_BSLN_EXT0_OFFSET          (134u)
#define CapSense_1_TOUCHPAD0_COL4_BSLN_EXT0_SIZE            (1u)
#define CapSense_1_TOUCHPAD0_COL4_BSLN_EXT0_PARAM_ID        (0x41000086u)

#define CapSense_1_TOUCHPAD0_COL4_DIFF_VALUE                (CapSense_1_dsRam.snsList.touchpad0[4u].diff)
#define CapSense_1_TOUCHPAD0_COL4_DIFF_OFFSET               (136u)
#define CapSense_1_TOUCHPAD0_COL4_DIFF_SIZE                 (2u)
#define CapSense_1_TOUCHPAD0_COL4_DIFF_PARAM_ID             (0x86000088u)

#define CapSense_1_TOUCHPAD0_COL4_NEG_BSLN_RST_CNT0_VALUE   (CapSense_1_dsRam.snsList.touchpad0[4u].negBslnRstCnt[0u])
#define CapSense_1_TOUCHPAD0_COL4_NEG_BSLN_RST_CNT0_OFFSET  (138u)
#define CapSense_1_TOUCHPAD0_COL4_NEG_BSLN_RST_CNT0_SIZE    (1u)
#define CapSense_1_TOUCHPAD0_COL4_NEG_BSLN_RST_CNT0_PARAM_ID (0x4200008Au)

#define CapSense_1_TOUCHPAD0_COL4_IDAC_COMP0_VALUE          (CapSense_1_dsRam.snsList.touchpad0[4u].idacComp[0u])
#define CapSense_1_TOUCHPAD0_COL4_IDAC_COMP0_OFFSET         (139u)
#define CapSense_1_TOUCHPAD0_COL4_IDAC_COMP0_SIZE           (1u)
#define CapSense_1_TOUCHPAD0_COL4_IDAC_COMP0_PARAM_ID       (0x4400008Bu)

#define CapSense_1_TOUCHPAD0_COL5_RAW0_VALUE                (CapSense_1_dsRam.snsList.touchpad0[5u].raw[0u])
#define CapSense_1_TOUCHPAD0_COL5_RAW0_OFFSET               (140u)
#define CapSense_1_TOUCHPAD0_COL5_RAW0_SIZE                 (2u)
#define CapSense_1_TOUCHPAD0_COL5_RAW0_PARAM_ID             (0x8700008Cu)

#define CapSense_1_TOUCHPAD0_COL5_BSLN0_VALUE               (CapSense_1_dsRam.snsList.touchpad0[5u].bsln[0u])
#define CapSense_1_TOUCHPAD0_COL5_BSLN0_OFFSET              (142u)
#define CapSense_1_TOUCHPAD0_COL5_BSLN0_SIZE                (2u)
#define CapSense_1_TOUCHPAD0_COL5_BSLN0_PARAM_ID            (0x8B00008Eu)

#define CapSense_1_TOUCHPAD0_COL5_BSLN_EXT0_VALUE           (CapSense_1_dsRam.snsList.touchpad0[5u].bslnExt[0u])
#define CapSense_1_TOUCHPAD0_COL5_BSLN_EXT0_OFFSET          (144u)
#define CapSense_1_TOUCHPAD0_COL5_BSLN_EXT0_SIZE            (1u)
#define CapSense_1_TOUCHPAD0_COL5_BSLN_EXT0_PARAM_ID        (0x49000090u)

#define CapSense_1_TOUCHPAD0_COL5_DIFF_VALUE                (CapSense_1_dsRam.snsList.touchpad0[5u].diff)
#define CapSense_1_TOUCHPAD0_COL5_DIFF_OFFSET               (146u)
#define CapSense_1_TOUCHPAD0_COL5_DIFF_SIZE                 (2u)
#define CapSense_1_TOUCHPAD0_COL5_DIFF_PARAM_ID             (0x8D000092u)

#define CapSense_1_TOUCHPAD0_COL5_NEG_BSLN_RST_CNT0_VALUE   (CapSense_1_dsRam.snsList.touchpad0[5u].negBslnRstCnt[0u])
#define CapSense_1_TOUCHPAD0_COL5_NEG_BSLN_RST_CNT0_OFFSET  (148u)
#define CapSense_1_TOUCHPAD0_COL5_NEG_BSLN_RST_CNT0_SIZE    (1u)
#define CapSense_1_TOUCHPAD0_COL5_NEG_BSLN_RST_CNT0_PARAM_ID (0x48000094u)

#define CapSense_1_TOUCHPAD0_COL5_IDAC_COMP0_VALUE          (CapSense_1_dsRam.snsList.touchpad0[5u].idacComp[0u])
#define CapSense_1_TOUCHPAD0_COL5_IDAC_COMP0_OFFSET         (149u)
#define CapSense_1_TOUCHPAD0_COL5_IDAC_COMP0_SIZE           (1u)
#define CapSense_1_TOUCHPAD0_COL5_IDAC_COMP0_PARAM_ID       (0x4E000095u)

#define CapSense_1_TOUCHPAD0_COL6_RAW0_VALUE                (CapSense_1_dsRam.snsList.touchpad0[6u].raw[0u])
#define CapSense_1_TOUCHPAD0_COL6_RAW0_OFFSET               (150u)
#define CapSense_1_TOUCHPAD0_COL6_RAW0_SIZE                 (2u)
#define CapSense_1_TOUCHPAD0_COL6_RAW0_PARAM_ID             (0x8C000096u)

#define CapSense_1_TOUCHPAD0_COL6_BSLN0_VALUE               (CapSense_1_dsRam.snsList.touchpad0[6u].bsln[0u])
#define CapSense_1_TOUCHPAD0_COL6_BSLN0_OFFSET              (152u)
#define CapSense_1_TOUCHPAD0_COL6_BSLN0_SIZE                (2u)
#define CapSense_1_TOUCHPAD0_COL6_BSLN0_PARAM_ID            (0x83000098u)

#define CapSense_1_TOUCHPAD0_COL6_BSLN_EXT0_VALUE           (CapSense_1_dsRam.snsList.touchpad0[6u].bslnExt[0u])
#define CapSense_1_TOUCHPAD0_COL6_BSLN_EXT0_OFFSET          (154u)
#define CapSense_1_TOUCHPAD0_COL6_BSLN_EXT0_SIZE            (1u)
#define CapSense_1_TOUCHPAD0_COL6_BSLN_EXT0_PARAM_ID        (0x4700009Au)

#define CapSense_1_TOUCHPAD0_COL6_DIFF_VALUE                (CapSense_1_dsRam.snsList.touchpad0[6u].diff)
#define CapSense_1_TOUCHPAD0_COL6_DIFF_OFFSET               (156u)
#define CapSense_1_TOUCHPAD0_COL6_DIFF_SIZE                 (2u)
#define CapSense_1_TOUCHPAD0_COL6_DIFF_PARAM_ID             (0x8200009Cu)

#define CapSense_1_TOUCHPAD0_COL6_NEG_BSLN_RST_CNT0_VALUE   (CapSense_1_dsRam.snsList.touchpad0[6u].negBslnRstCnt[0u])
#define CapSense_1_TOUCHPAD0_COL6_NEG_BSLN_RST_CNT0_OFFSET  (158u)
#define CapSense_1_TOUCHPAD0_COL6_NEG_BSLN_RST_CNT0_SIZE    (1u)
#define CapSense_1_TOUCHPAD0_COL6_NEG_BSLN_RST_CNT0_PARAM_ID (0x4600009Eu)

#define CapSense_1_TOUCHPAD0_COL6_IDAC_COMP0_VALUE          (CapSense_1_dsRam.snsList.touchpad0[6u].idacComp[0u])
#define CapSense_1_TOUCHPAD0_COL6_IDAC_COMP0_OFFSET         (159u)
#define CapSense_1_TOUCHPAD0_COL6_IDAC_COMP0_SIZE           (1u)
#define CapSense_1_TOUCHPAD0_COL6_IDAC_COMP0_PARAM_ID       (0x4000009Fu)

#define CapSense_1_TOUCHPAD0_ROW0_RAW0_VALUE                (CapSense_1_dsRam.snsList.touchpad0[7u].raw[0u])
#define CapSense_1_TOUCHPAD0_ROW0_RAW0_OFFSET               (160u)
#define CapSense_1_TOUCHPAD0_ROW0_RAW0_SIZE                 (2u)
#define CapSense_1_TOUCHPAD0_ROW0_RAW0_PARAM_ID             (0x8E0000A0u)

#define CapSense_1_TOUCHPAD0_ROW0_BSLN0_VALUE               (CapSense_1_dsRam.snsList.touchpad0[7u].bsln[0u])
#define CapSense_1_TOUCHPAD0_ROW0_BSLN0_OFFSET              (162u)
#define CapSense_1_TOUCHPAD0_ROW0_BSLN0_SIZE                (2u)
#define CapSense_1_TOUCHPAD0_ROW0_BSLN0_PARAM_ID            (0x820000A2u)

#define CapSense_1_TOUCHPAD0_ROW0_BSLN_EXT0_VALUE           (CapSense_1_dsRam.snsList.touchpad0[7u].bslnExt[0u])
#define CapSense_1_TOUCHPAD0_ROW0_BSLN_EXT0_OFFSET          (164u)
#define CapSense_1_TOUCHPAD0_ROW0_BSLN_EXT0_SIZE            (1u)
#define CapSense_1_TOUCHPAD0_ROW0_BSLN_EXT0_PARAM_ID        (0x470000A4u)

#define CapSense_1_TOUCHPAD0_ROW0_DIFF_VALUE                (CapSense_1_dsRam.snsList.touchpad0[7u].diff)
#define CapSense_1_TOUCHPAD0_ROW0_DIFF_OFFSET               (166u)
#define CapSense_1_TOUCHPAD0_ROW0_DIFF_SIZE                 (2u)
#define CapSense_1_TOUCHPAD0_ROW0_DIFF_PARAM_ID             (0x830000A6u)

#define CapSense_1_TOUCHPAD0_ROW0_NEG_BSLN_RST_CNT0_VALUE   (CapSense_1_dsRam.snsList.touchpad0[7u].negBslnRstCnt[0u])
#define CapSense_1_TOUCHPAD0_ROW0_NEG_BSLN_RST_CNT0_OFFSET  (168u)
#define CapSense_1_TOUCHPAD0_ROW0_NEG_BSLN_RST_CNT0_SIZE    (1u)
#define CapSense_1_TOUCHPAD0_ROW0_NEG_BSLN_RST_CNT0_PARAM_ID (0x440000A8u)

#define CapSense_1_TOUCHPAD0_ROW0_IDAC_COMP0_VALUE          (CapSense_1_dsRam.snsList.touchpad0[7u].idacComp[0u])
#define CapSense_1_TOUCHPAD0_ROW0_IDAC_COMP0_OFFSET         (169u)
#define CapSense_1_TOUCHPAD0_ROW0_IDAC_COMP0_SIZE           (1u)
#define CapSense_1_TOUCHPAD0_ROW0_IDAC_COMP0_PARAM_ID       (0x420000A9u)

#define CapSense_1_TOUCHPAD0_ROW1_RAW0_VALUE                (CapSense_1_dsRam.snsList.touchpad0[8u].raw[0u])
#define CapSense_1_TOUCHPAD0_ROW1_RAW0_OFFSET               (170u)
#define CapSense_1_TOUCHPAD0_ROW1_RAW0_SIZE                 (2u)
#define CapSense_1_TOUCHPAD0_ROW1_RAW0_PARAM_ID             (0x800000AAu)

#define CapSense_1_TOUCHPAD0_ROW1_BSLN0_VALUE               (CapSense_1_dsRam.snsList.touchpad0[8u].bsln[0u])
#define CapSense_1_TOUCHPAD0_ROW1_BSLN0_OFFSET              (172u)
#define CapSense_1_TOUCHPAD0_ROW1_BSLN0_SIZE                (2u)
#define CapSense_1_TOUCHPAD0_ROW1_BSLN0_PARAM_ID            (0x8D0000ACu)

#define CapSense_1_TOUCHPAD0_ROW1_BSLN_EXT0_VALUE           (CapSense_1_dsRam.snsList.touchpad0[8u].bslnExt[0u])
#define CapSense_1_TOUCHPAD0_ROW1_BSLN_EXT0_OFFSET          (174u)
#define CapSense_1_TOUCHPAD0_ROW1_BSLN_EXT0_SIZE            (1u)
#define CapSense_1_TOUCHPAD0_ROW1_BSLN_EXT0_PARAM_ID        (0x490000AEu)

#define CapSense_1_TOUCHPAD0_ROW1_DIFF_VALUE                (CapSense_1_dsRam.snsList.touchpad0[8u].diff)
#define CapSense_1_TOUCHPAD0_ROW1_DIFF_OFFSET               (176u)
#define CapSense_1_TOUCHPAD0_ROW1_DIFF_SIZE                 (2u)
#define CapSense_1_TOUCHPAD0_ROW1_DIFF_PARAM_ID             (0x8B0000B0u)

#define CapSense_1_TOUCHPAD0_ROW1_NEG_BSLN_RST_CNT0_VALUE   (CapSense_1_dsRam.snsList.touchpad0[8u].negBslnRstCnt[0u])
#define CapSense_1_TOUCHPAD0_ROW1_NEG_BSLN_RST_CNT0_OFFSET  (178u)
#define CapSense_1_TOUCHPAD0_ROW1_NEG_BSLN_RST_CNT0_SIZE    (1u)
#define CapSense_1_TOUCHPAD0_ROW1_NEG_BSLN_RST_CNT0_PARAM_ID (0x4F0000B2u)

#define CapSense_1_TOUCHPAD0_ROW1_IDAC_COMP0_VALUE          (CapSense_1_dsRam.snsList.touchpad0[8u].idacComp[0u])
#define CapSense_1_TOUCHPAD0_ROW1_IDAC_COMP0_OFFSET         (179u)
#define CapSense_1_TOUCHPAD0_ROW1_IDAC_COMP0_SIZE           (1u)
#define CapSense_1_TOUCHPAD0_ROW1_IDAC_COMP0_PARAM_ID       (0x490000B3u)

#define CapSense_1_TOUCHPAD0_ROW2_RAW0_VALUE                (CapSense_1_dsRam.snsList.touchpad0[9u].raw[0u])
#define CapSense_1_TOUCHPAD0_ROW2_RAW0_OFFSET               (180u)
#define CapSense_1_TOUCHPAD0_ROW2_RAW0_SIZE                 (2u)
#define CapSense_1_TOUCHPAD0_ROW2_RAW0_PARAM_ID             (0x8A0000B4u)

#define CapSense_1_TOUCHPAD0_ROW2_BSLN0_VALUE               (CapSense_1_dsRam.snsList.touchpad0[9u].bsln[0u])
#define CapSense_1_TOUCHPAD0_ROW2_BSLN0_OFFSET              (182u)
#define CapSense_1_TOUCHPAD0_ROW2_BSLN0_SIZE                (2u)
#define CapSense_1_TOUCHPAD0_ROW2_BSLN0_PARAM_ID            (0x860000B6u)

#define CapSense_1_TOUCHPAD0_ROW2_BSLN_EXT0_VALUE           (CapSense_1_dsRam.snsList.touchpad0[9u].bslnExt[0u])
#define CapSense_1_TOUCHPAD0_ROW2_BSLN_EXT0_OFFSET          (184u)
#define CapSense_1_TOUCHPAD0_ROW2_BSLN_EXT0_SIZE            (1u)
#define CapSense_1_TOUCHPAD0_ROW2_BSLN_EXT0_PARAM_ID        (0x410000B8u)

#define CapSense_1_TOUCHPAD0_ROW2_DIFF_VALUE                (CapSense_1_dsRam.snsList.touchpad0[9u].diff)
#define CapSense_1_TOUCHPAD0_ROW2_DIFF_OFFSET               (186u)
#define CapSense_1_TOUCHPAD0_ROW2_DIFF_SIZE                 (2u)
#define CapSense_1_TOUCHPAD0_ROW2_DIFF_PARAM_ID             (0x850000BAu)

#define CapSense_1_TOUCHPAD0_ROW2_NEG_BSLN_RST_CNT0_VALUE   (CapSense_1_dsRam.snsList.touchpad0[9u].negBslnRstCnt[0u])
#define CapSense_1_TOUCHPAD0_ROW2_NEG_BSLN_RST_CNT0_OFFSET  (188u)
#define CapSense_1_TOUCHPAD0_ROW2_NEG_BSLN_RST_CNT0_SIZE    (1u)
#define CapSense_1_TOUCHPAD0_ROW2_NEG_BSLN_RST_CNT0_PARAM_ID (0x400000BCu)

#define CapSense_1_TOUCHPAD0_ROW2_IDAC_COMP0_VALUE          (CapSense_1_dsRam.snsList.touchpad0[9u].idacComp[0u])
#define CapSense_1_TOUCHPAD0_ROW2_IDAC_COMP0_OFFSET         (189u)
#define CapSense_1_TOUCHPAD0_ROW2_IDAC_COMP0_SIZE           (1u)
#define CapSense_1_TOUCHPAD0_ROW2_IDAC_COMP0_PARAM_ID       (0x460000BDu)

#define CapSense_1_TOUCHPAD0_ROW3_RAW0_VALUE                (CapSense_1_dsRam.snsList.touchpad0[10u].raw[0u])
#define CapSense_1_TOUCHPAD0_ROW3_RAW0_OFFSET               (190u)
#define CapSense_1_TOUCHPAD0_ROW3_RAW0_SIZE                 (2u)
#define CapSense_1_TOUCHPAD0_ROW3_RAW0_PARAM_ID             (0x840000BEu)

#define CapSense_1_TOUCHPAD0_ROW3_BSLN0_VALUE               (CapSense_1_dsRam.snsList.touchpad0[10u].bsln[0u])
#define CapSense_1_TOUCHPAD0_ROW3_BSLN0_OFFSET              (192u)
#define CapSense_1_TOUCHPAD0_ROW3_BSLN0_SIZE                (2u)
#define CapSense_1_TOUCHPAD0_ROW3_BSLN0_PARAM_ID            (0x890000C0u)

#define CapSense_1_TOUCHPAD0_ROW3_BSLN_EXT0_VALUE           (CapSense_1_dsRam.snsList.touchpad0[10u].bslnExt[0u])
#define CapSense_1_TOUCHPAD0_ROW3_BSLN_EXT0_OFFSET          (194u)
#define CapSense_1_TOUCHPAD0_ROW3_BSLN_EXT0_SIZE            (1u)
#define CapSense_1_TOUCHPAD0_ROW3_BSLN_EXT0_PARAM_ID        (0x4D0000C2u)

#define CapSense_1_TOUCHPAD0_ROW3_DIFF_VALUE                (CapSense_1_dsRam.snsList.touchpad0[10u].diff)
#define CapSense_1_TOUCHPAD0_ROW3_DIFF_OFFSET               (196u)
#define CapSense_1_TOUCHPAD0_ROW3_DIFF_SIZE                 (2u)
#define CapSense_1_TOUCHPAD0_ROW3_DIFF_PARAM_ID             (0x880000C4u)

#define CapSense_1_TOUCHPAD0_ROW3_NEG_BSLN_RST_CNT0_VALUE   (CapSense_1_dsRam.snsList.touchpad0[10u].negBslnRstCnt[0u])
#define CapSense_1_TOUCHPAD0_ROW3_NEG_BSLN_RST_CNT0_OFFSET  (198u)
#define CapSense_1_TOUCHPAD0_ROW3_NEG_BSLN_RST_CNT0_SIZE    (1u)
#define CapSense_1_TOUCHPAD0_ROW3_NEG_BSLN_RST_CNT0_PARAM_ID (0x4C0000C6u)

#define CapSense_1_TOUCHPAD0_ROW3_IDAC_COMP0_VALUE          (CapSense_1_dsRam.snsList.touchpad0[10u].idacComp[0u])
#define CapSense_1_TOUCHPAD0_ROW3_IDAC_COMP0_OFFSET         (199u)
#define CapSense_1_TOUCHPAD0_ROW3_IDAC_COMP0_SIZE           (1u)
#define CapSense_1_TOUCHPAD0_ROW3_IDAC_COMP0_PARAM_ID       (0x4A0000C7u)

#define CapSense_1_TOUCHPAD0_ROW4_RAW0_VALUE                (CapSense_1_dsRam.snsList.touchpad0[11u].raw[0u])
#define CapSense_1_TOUCHPAD0_ROW4_RAW0_OFFSET               (200u)
#define CapSense_1_TOUCHPAD0_ROW4_RAW0_SIZE                 (2u)
#define CapSense_1_TOUCHPAD0_ROW4_RAW0_PARAM_ID             (0x8B0000C8u)

#define CapSense_1_TOUCHPAD0_ROW4_BSLN0_VALUE               (CapSense_1_dsRam.snsList.touchpad0[11u].bsln[0u])
#define CapSense_1_TOUCHPAD0_ROW4_BSLN0_OFFSET              (202u)
#define CapSense_1_TOUCHPAD0_ROW4_BSLN0_SIZE                (2u)
#define CapSense_1_TOUCHPAD0_ROW4_BSLN0_PARAM_ID            (0x870000CAu)

#define CapSense_1_TOUCHPAD0_ROW4_BSLN_EXT0_VALUE           (CapSense_1_dsRam.snsList.touchpad0[11u].bslnExt[0u])
#define CapSense_1_TOUCHPAD0_ROW4_BSLN_EXT0_OFFSET          (204u)
#define CapSense_1_TOUCHPAD0_ROW4_BSLN_EXT0_SIZE            (1u)
#define CapSense_1_TOUCHPAD0_ROW4_BSLN_EXT0_PARAM_ID        (0x420000CCu)

#define CapSense_1_TOUCHPAD0_ROW4_DIFF_VALUE                (CapSense_1_dsRam.snsList.touchpad0[11u].diff)
#define CapSense_1_TOUCHPAD0_ROW4_DIFF_OFFSET               (206u)
#define CapSense_1_TOUCHPAD0_ROW4_DIFF_SIZE                 (2u)
#define CapSense_1_TOUCHPAD0_ROW4_DIFF_PARAM_ID             (0x860000CEu)

#define CapSense_1_TOUCHPAD0_ROW4_NEG_BSLN_RST_CNT0_VALUE   (CapSense_1_dsRam.snsList.touchpad0[11u].negBslnRstCnt[0u])
#define CapSense_1_TOUCHPAD0_ROW4_NEG_BSLN_RST_CNT0_OFFSET  (208u)
#define CapSense_1_TOUCHPAD0_ROW4_NEG_BSLN_RST_CNT0_SIZE    (1u)
#define CapSense_1_TOUCHPAD0_ROW4_NEG_BSLN_RST_CNT0_PARAM_ID (0x440000D0u)

#define CapSense_1_TOUCHPAD0_ROW4_IDAC_COMP0_VALUE          (CapSense_1_dsRam.snsList.touchpad0[11u].idacComp[0u])
#define CapSense_1_TOUCHPAD0_ROW4_IDAC_COMP0_OFFSET         (209u)
#define CapSense_1_TOUCHPAD0_ROW4_IDAC_COMP0_SIZE           (1u)
#define CapSense_1_TOUCHPAD0_ROW4_IDAC_COMP0_PARAM_ID       (0x420000D1u)

#define CapSense_1_TOUCHPAD0_ROW5_RAW0_VALUE                (CapSense_1_dsRam.snsList.touchpad0[12u].raw[0u])
#define CapSense_1_TOUCHPAD0_ROW5_RAW0_OFFSET               (210u)
#define CapSense_1_TOUCHPAD0_ROW5_RAW0_SIZE                 (2u)
#define CapSense_1_TOUCHPAD0_ROW5_RAW0_PARAM_ID             (0x800000D2u)

#define CapSense_1_TOUCHPAD0_ROW5_BSLN0_VALUE               (CapSense_1_dsRam.snsList.touchpad0[12u].bsln[0u])
#define CapSense_1_TOUCHPAD0_ROW5_BSLN0_OFFSET              (212u)
#define CapSense_1_TOUCHPAD0_ROW5_BSLN0_SIZE                (2u)
#define CapSense_1_TOUCHPAD0_ROW5_BSLN0_PARAM_ID            (0x8D0000D4u)

#define CapSense_1_TOUCHPAD0_ROW5_BSLN_EXT0_VALUE           (CapSense_1_dsRam.snsList.touchpad0[12u].bslnExt[0u])
#define CapSense_1_TOUCHPAD0_ROW5_BSLN_EXT0_OFFSET          (214u)
#define CapSense_1_TOUCHPAD0_ROW5_BSLN_EXT0_SIZE            (1u)
#define CapSense_1_TOUCHPAD0_ROW5_BSLN_EXT0_PARAM_ID        (0x490000D6u)

#define CapSense_1_TOUCHPAD0_ROW5_DIFF_VALUE                (CapSense_1_dsRam.snsList.touchpad0[12u].diff)
#define CapSense_1_TOUCHPAD0_ROW5_DIFF_OFFSET               (216u)
#define CapSense_1_TOUCHPAD0_ROW5_DIFF_SIZE                 (2u)
#define CapSense_1_TOUCHPAD0_ROW5_DIFF_PARAM_ID             (0x8E0000D8u)

#define CapSense_1_TOUCHPAD0_ROW5_NEG_BSLN_RST_CNT0_VALUE   (CapSense_1_dsRam.snsList.touchpad0[12u].negBslnRstCnt[0u])
#define CapSense_1_TOUCHPAD0_ROW5_NEG_BSLN_RST_CNT0_OFFSET  (218u)
#define CapSense_1_TOUCHPAD0_ROW5_NEG_BSLN_RST_CNT0_SIZE    (1u)
#define CapSense_1_TOUCHPAD0_ROW5_NEG_BSLN_RST_CNT0_PARAM_ID (0x4A0000DAu)

#define CapSense_1_TOUCHPAD0_ROW5_IDAC_COMP0_VALUE          (CapSense_1_dsRam.snsList.touchpad0[12u].idacComp[0u])
#define CapSense_1_TOUCHPAD0_ROW5_IDAC_COMP0_OFFSET         (219u)
#define CapSense_1_TOUCHPAD0_ROW5_IDAC_COMP0_SIZE           (1u)
#define CapSense_1_TOUCHPAD0_ROW5_IDAC_COMP0_PARAM_ID       (0x4C0000DBu)

#define CapSense_1_TOUCHPAD0_ROW6_RAW0_VALUE                (CapSense_1_dsRam.snsList.touchpad0[13u].raw[0u])
#define CapSense_1_TOUCHPAD0_ROW6_RAW0_OFFSET               (220u)
#define CapSense_1_TOUCHPAD0_ROW6_RAW0_SIZE                 (2u)
#define CapSense_1_TOUCHPAD0_ROW6_RAW0_PARAM_ID             (0x8F0000DCu)

#define CapSense_1_TOUCHPAD0_ROW6_BSLN0_VALUE               (CapSense_1_dsRam.snsList.touchpad0[13u].bsln[0u])
#define CapSense_1_TOUCHPAD0_ROW6_BSLN0_OFFSET              (222u)
#define CapSense_1_TOUCHPAD0_ROW6_BSLN0_SIZE                (2u)
#define CapSense_1_TOUCHPAD0_ROW6_BSLN0_PARAM_ID            (0x830000DEu)

#define CapSense_1_TOUCHPAD0_ROW6_BSLN_EXT0_VALUE           (CapSense_1_dsRam.snsList.touchpad0[13u].bslnExt[0u])
#define CapSense_1_TOUCHPAD0_ROW6_BSLN_EXT0_OFFSET          (224u)
#define CapSense_1_TOUCHPAD0_ROW6_BSLN_EXT0_SIZE            (1u)
#define CapSense_1_TOUCHPAD0_ROW6_BSLN_EXT0_PARAM_ID        (0x4B0000E0u)

#define CapSense_1_TOUCHPAD0_ROW6_DIFF_VALUE                (CapSense_1_dsRam.snsList.touchpad0[13u].diff)
#define CapSense_1_TOUCHPAD0_ROW6_DIFF_OFFSET               (226u)
#define CapSense_1_TOUCHPAD0_ROW6_DIFF_SIZE                 (2u)
#define CapSense_1_TOUCHPAD0_ROW6_DIFF_PARAM_ID             (0x8F0000E2u)

#define CapSense_1_TOUCHPAD0_ROW6_NEG_BSLN_RST_CNT0_VALUE   (CapSense_1_dsRam.snsList.touchpad0[13u].negBslnRstCnt[0u])
#define CapSense_1_TOUCHPAD0_ROW6_NEG_BSLN_RST_CNT0_OFFSET  (228u)
#define CapSense_1_TOUCHPAD0_ROW6_NEG_BSLN_RST_CNT0_SIZE    (1u)
#define CapSense_1_TOUCHPAD0_ROW6_NEG_BSLN_RST_CNT0_PARAM_ID (0x4A0000E4u)

#define CapSense_1_TOUCHPAD0_ROW6_IDAC_COMP0_VALUE          (CapSense_1_dsRam.snsList.touchpad0[13u].idacComp[0u])
#define CapSense_1_TOUCHPAD0_ROW6_IDAC_COMP0_OFFSET         (229u)
#define CapSense_1_TOUCHPAD0_ROW6_IDAC_COMP0_SIZE           (1u)
#define CapSense_1_TOUCHPAD0_ROW6_IDAC_COMP0_PARAM_ID       (0x4C0000E5u)

#define CapSense_1_SNR_TEST_WIDGET_ID_VALUE                 (CapSense_1_dsRam.snrTestWidgetId)
#define CapSense_1_SNR_TEST_WIDGET_ID_OFFSET                (230u)
#define CapSense_1_SNR_TEST_WIDGET_ID_SIZE                  (1u)
#define CapSense_1_SNR_TEST_WIDGET_ID_PARAM_ID              (0x6D0000E6u)

#define CapSense_1_SNR_TEST_SENSOR_ID_VALUE                 (CapSense_1_dsRam.snrTestSensorId)
#define CapSense_1_SNR_TEST_SENSOR_ID_OFFSET                (231u)
#define CapSense_1_SNR_TEST_SENSOR_ID_SIZE                  (1u)
#define CapSense_1_SNR_TEST_SENSOR_ID_PARAM_ID              (0x6B0000E7u)

#define CapSense_1_SNR_TEST_SCAN_COUNTER_VALUE              (CapSense_1_dsRam.snrTestScanCounter)
#define CapSense_1_SNR_TEST_SCAN_COUNTER_OFFSET             (232u)
#define CapSense_1_SNR_TEST_SCAN_COUNTER_SIZE               (2u)
#define CapSense_1_SNR_TEST_SCAN_COUNTER_PARAM_ID           (0x810000E8u)

#define CapSense_1_SNR_TEST_RAW_COUNT0_VALUE                (CapSense_1_dsRam.snrTestRawCount[0u])
#define CapSense_1_SNR_TEST_RAW_COUNT0_OFFSET               (234u)
#define CapSense_1_SNR_TEST_RAW_COUNT0_SIZE                 (2u)
#define CapSense_1_SNR_TEST_RAW_COUNT0_PARAM_ID             (0x8D0000EAu)

#define CapSense_1_SCAN_CSD_ISC_VALUE                       (CapSense_1_dsRam.scanCsdISC)
#define CapSense_1_SCAN_CSD_ISC_OFFSET                      (236u)
#define CapSense_1_SCAN_CSD_ISC_SIZE                        (1u)
#define CapSense_1_SCAN_CSD_ISC_PARAM_ID                    (0x480000ECu)

#define CapSense_1_SCAN_CURRENT_ISC_VALUE                   (CapSense_1_dsRam.scanCurrentISC)
#define CapSense_1_SCAN_CURRENT_ISC_OFFSET                  (237u)
#define CapSense_1_SCAN_CURRENT_ISC_SIZE                    (1u)
#define CapSense_1_SCAN_CURRENT_ISC_PARAM_ID                (0x4E0000EDu)


/*****************************************************************************/
/* Flash Data structure register definitions                                 */
/*****************************************************************************/
#define CapSense_1_BUTTON0_PTR2SNS_FLASH_VALUE              (CapSense_1_dsFlash.wdgtArray[0].ptr2SnsFlash)
#define CapSense_1_BUTTON0_PTR2SNS_FLASH_OFFSET             (0u)
#define CapSense_1_BUTTON0_PTR2SNS_FLASH_SIZE               (4u)
#define CapSense_1_BUTTON0_PTR2SNS_FLASH_PARAM_ID           (0xD1000000u)

#define CapSense_1_BUTTON0_PTR2WD_RAM_VALUE                 (CapSense_1_dsFlash.wdgtArray[0].ptr2WdgtRam)
#define CapSense_1_BUTTON0_PTR2WD_RAM_OFFSET                (4u)
#define CapSense_1_BUTTON0_PTR2WD_RAM_SIZE                  (4u)
#define CapSense_1_BUTTON0_PTR2WD_RAM_PARAM_ID              (0xD0000004u)

#define CapSense_1_BUTTON0_PTR2SNS_RAM_VALUE                (CapSense_1_dsFlash.wdgtArray[0].ptr2SnsRam)
#define CapSense_1_BUTTON0_PTR2SNS_RAM_OFFSET               (8u)
#define CapSense_1_BUTTON0_PTR2SNS_RAM_SIZE                 (4u)
#define CapSense_1_BUTTON0_PTR2SNS_RAM_PARAM_ID             (0xD3000008u)

#define CapSense_1_BUTTON0_PTR2FLTR_HISTORY_VALUE           (CapSense_1_dsFlash.wdgtArray[0].ptr2FltrHistory)
#define CapSense_1_BUTTON0_PTR2FLTR_HISTORY_OFFSET          (12u)
#define CapSense_1_BUTTON0_PTR2FLTR_HISTORY_SIZE            (4u)
#define CapSense_1_BUTTON0_PTR2FLTR_HISTORY_PARAM_ID        (0xD200000Cu)

#define CapSense_1_BUTTON0_PTR2DEBOUNCE_VALUE               (CapSense_1_dsFlash.wdgtArray[0].ptr2DebounceArr)
#define CapSense_1_BUTTON0_PTR2DEBOUNCE_OFFSET              (16u)
#define CapSense_1_BUTTON0_PTR2DEBOUNCE_SIZE                (4u)
#define CapSense_1_BUTTON0_PTR2DEBOUNCE_PARAM_ID            (0xD4000010u)

#define CapSense_1_BUTTON0_STATIC_CONFIG_VALUE              (CapSense_1_dsFlash.wdgtArray[0].staticConfig)
#define CapSense_1_BUTTON0_STATIC_CONFIG_OFFSET             (20u)
#define CapSense_1_BUTTON0_STATIC_CONFIG_SIZE               (4u)
#define CapSense_1_BUTTON0_STATIC_CONFIG_PARAM_ID           (0xD5000014u)

#define CapSense_1_BUTTON0_TOTAL_NUM_SNS_VALUE              (CapSense_1_dsFlash.wdgtArray[0].totalNumSns)
#define CapSense_1_BUTTON0_TOTAL_NUM_SNS_OFFSET             (24u)
#define CapSense_1_BUTTON0_TOTAL_NUM_SNS_SIZE               (2u)
#define CapSense_1_BUTTON0_TOTAL_NUM_SNS_PARAM_ID           (0x99000018u)

#define CapSense_1_BUTTON0_TYPE_VALUE                       (CapSense_1_dsFlash.wdgtArray[0].wdgtType)
#define CapSense_1_BUTTON0_TYPE_OFFSET                      (26u)
#define CapSense_1_BUTTON0_TYPE_SIZE                        (1u)
#define CapSense_1_BUTTON0_TYPE_PARAM_ID                    (0x5D00001Au)

#define CapSense_1_BUTTON0_NUM_COLS_VALUE                   (CapSense_1_dsFlash.wdgtArray[0].numCols)
#define CapSense_1_BUTTON0_NUM_COLS_OFFSET                  (27u)
#define CapSense_1_BUTTON0_NUM_COLS_SIZE                    (1u)
#define CapSense_1_BUTTON0_NUM_COLS_PARAM_ID                (0x5B00001Bu)

#define CapSense_1_BUTTON0_NUM_ROWS_VALUE                   (CapSense_1_dsFlash.wdgtArray[0].numRows)
#define CapSense_1_BUTTON0_NUM_ROWS_OFFSET                  (28u)
#define CapSense_1_BUTTON0_NUM_ROWS_SIZE                    (1u)
#define CapSense_1_BUTTON0_NUM_ROWS_PARAM_ID                (0x5000001Cu)

#define CapSense_1_BUTTON0_X_RESOLUTION_VALUE               (CapSense_1_dsFlash.wdgtArray[0].xResolution)
#define CapSense_1_BUTTON0_X_RESOLUTION_OFFSET              (30u)
#define CapSense_1_BUTTON0_X_RESOLUTION_SIZE                (2u)
#define CapSense_1_BUTTON0_X_RESOLUTION_PARAM_ID            (0x9400001Eu)

#define CapSense_1_BUTTON0_Y_RESOLUTION_VALUE               (CapSense_1_dsFlash.wdgtArray[0].yResolution)
#define CapSense_1_BUTTON0_Y_RESOLUTION_OFFSET              (32u)
#define CapSense_1_BUTTON0_Y_RESOLUTION_SIZE                (2u)
#define CapSense_1_BUTTON0_Y_RESOLUTION_PARAM_ID            (0x94000020u)

#define CapSense_1_BUTTON0_X_CENT_MULT_VALUE                (CapSense_1_dsFlash.wdgtArray[0].xCentroidMultiplier)
#define CapSense_1_BUTTON0_X_CENT_MULT_OFFSET               (36u)
#define CapSense_1_BUTTON0_X_CENT_MULT_SIZE                 (4u)
#define CapSense_1_BUTTON0_X_CENT_MULT_PARAM_ID             (0xDA000024u)

#define CapSense_1_BUTTON0_Y_CENT_MULT_VALUE                (CapSense_1_dsFlash.wdgtArray[0].yCentroidMultiplier)
#define CapSense_1_BUTTON0_Y_CENT_MULT_OFFSET               (40u)
#define CapSense_1_BUTTON0_Y_CENT_MULT_SIZE                 (4u)
#define CapSense_1_BUTTON0_Y_CENT_MULT_PARAM_ID             (0xD9000028u)

#define CapSense_1_BUTTON0_PTR2NOISE_ENVLP_VALUE            (CapSense_1_dsFlash.wdgtArray[0].ptr2NoiseEnvlp)
#define CapSense_1_BUTTON0_PTR2NOISE_ENVLP_OFFSET           (44u)
#define CapSense_1_BUTTON0_PTR2NOISE_ENVLP_SIZE             (4u)
#define CapSense_1_BUTTON0_PTR2NOISE_ENVLP_PARAM_ID         (0xD800002Cu)

#define CapSense_1_BUTTON0_IIR_FILTER_COEFF_VALUE           (CapSense_1_dsFlash.wdgtArray[0].iirFilterCoeff)
#define CapSense_1_BUTTON0_IIR_FILTER_COEFF_OFFSET          (48u)
#define CapSense_1_BUTTON0_IIR_FILTER_COEFF_SIZE            (1u)
#define CapSense_1_BUTTON0_IIR_FILTER_COEFF_PARAM_ID        (0x59000030u)

#define CapSense_1_TOUCHPAD0_PTR2SNS_FLASH_VALUE            (CapSense_1_dsFlash.wdgtArray[1].ptr2SnsFlash)
#define CapSense_1_TOUCHPAD0_PTR2SNS_FLASH_OFFSET           (52u)
#define CapSense_1_TOUCHPAD0_PTR2SNS_FLASH_SIZE             (4u)
#define CapSense_1_TOUCHPAD0_PTR2SNS_FLASH_PARAM_ID         (0xDC010034u)

#define CapSense_1_TOUCHPAD0_PTR2WD_RAM_VALUE               (CapSense_1_dsFlash.wdgtArray[1].ptr2WdgtRam)
#define CapSense_1_TOUCHPAD0_PTR2WD_RAM_OFFSET              (56u)
#define CapSense_1_TOUCHPAD0_PTR2WD_RAM_SIZE                (4u)
#define CapSense_1_TOUCHPAD0_PTR2WD_RAM_PARAM_ID            (0xDF010038u)

#define CapSense_1_TOUCHPAD0_PTR2SNS_RAM_VALUE              (CapSense_1_dsFlash.wdgtArray[1].ptr2SnsRam)
#define CapSense_1_TOUCHPAD0_PTR2SNS_RAM_OFFSET             (60u)
#define CapSense_1_TOUCHPAD0_PTR2SNS_RAM_SIZE               (4u)
#define CapSense_1_TOUCHPAD0_PTR2SNS_RAM_PARAM_ID           (0xDE01003Cu)

#define CapSense_1_TOUCHPAD0_PTR2FLTR_HISTORY_VALUE         (CapSense_1_dsFlash.wdgtArray[1].ptr2FltrHistory)
#define CapSense_1_TOUCHPAD0_PTR2FLTR_HISTORY_OFFSET        (64u)
#define CapSense_1_TOUCHPAD0_PTR2FLTR_HISTORY_SIZE          (4u)
#define CapSense_1_TOUCHPAD0_PTR2FLTR_HISTORY_PARAM_ID      (0xDF010040u)

#define CapSense_1_TOUCHPAD0_PTR2DEBOUNCE_VALUE             (CapSense_1_dsFlash.wdgtArray[1].ptr2DebounceArr)
#define CapSense_1_TOUCHPAD0_PTR2DEBOUNCE_OFFSET            (68u)
#define CapSense_1_TOUCHPAD0_PTR2DEBOUNCE_SIZE              (4u)
#define CapSense_1_TOUCHPAD0_PTR2DEBOUNCE_PARAM_ID          (0xDE010044u)

#define CapSense_1_TOUCHPAD0_STATIC_CONFIG_VALUE            (CapSense_1_dsFlash.wdgtArray[1].staticConfig)
#define CapSense_1_TOUCHPAD0_STATIC_CONFIG_OFFSET           (72u)
#define CapSense_1_TOUCHPAD0_STATIC_CONFIG_SIZE             (4u)
#define CapSense_1_TOUCHPAD0_STATIC_CONFIG_PARAM_ID         (0xDD010048u)

#define CapSense_1_TOUCHPAD0_TOTAL_NUM_SNS_VALUE            (CapSense_1_dsFlash.wdgtArray[1].totalNumSns)
#define CapSense_1_TOUCHPAD0_TOTAL_NUM_SNS_OFFSET           (76u)
#define CapSense_1_TOUCHPAD0_TOTAL_NUM_SNS_SIZE             (2u)
#define CapSense_1_TOUCHPAD0_TOTAL_NUM_SNS_PARAM_ID         (0x9301004Cu)

#define CapSense_1_TOUCHPAD0_TYPE_VALUE                     (CapSense_1_dsFlash.wdgtArray[1].wdgtType)
#define CapSense_1_TOUCHPAD0_TYPE_OFFSET                    (78u)
#define CapSense_1_TOUCHPAD0_TYPE_SIZE                      (1u)
#define CapSense_1_TOUCHPAD0_TYPE_PARAM_ID                  (0x5701004Eu)

#define CapSense_1_TOUCHPAD0_NUM_COLS_VALUE                 (CapSense_1_dsFlash.wdgtArray[1].numCols)
#define CapSense_1_TOUCHPAD0_NUM_COLS_OFFSET                (79u)
#define CapSense_1_TOUCHPAD0_NUM_COLS_SIZE                  (1u)
#define CapSense_1_TOUCHPAD0_NUM_COLS_PARAM_ID              (0x5101004Fu)

#define CapSense_1_TOUCHPAD0_NUM_ROWS_VALUE                 (CapSense_1_dsFlash.wdgtArray[1].numRows)
#define CapSense_1_TOUCHPAD0_NUM_ROWS_OFFSET                (80u)
#define CapSense_1_TOUCHPAD0_NUM_ROWS_SIZE                  (1u)
#define CapSense_1_TOUCHPAD0_NUM_ROWS_PARAM_ID              (0x5D010050u)

#define CapSense_1_TOUCHPAD0_X_RESOLUTION_VALUE             (CapSense_1_dsFlash.wdgtArray[1].xResolution)
#define CapSense_1_TOUCHPAD0_X_RESOLUTION_OFFSET            (82u)
#define CapSense_1_TOUCHPAD0_X_RESOLUTION_SIZE              (2u)
#define CapSense_1_TOUCHPAD0_X_RESOLUTION_PARAM_ID          (0x99010052u)

#define CapSense_1_TOUCHPAD0_Y_RESOLUTION_VALUE             (CapSense_1_dsFlash.wdgtArray[1].yResolution)
#define CapSense_1_TOUCHPAD0_Y_RESOLUTION_OFFSET            (84u)
#define CapSense_1_TOUCHPAD0_Y_RESOLUTION_SIZE              (2u)
#define CapSense_1_TOUCHPAD0_Y_RESOLUTION_PARAM_ID          (0x94010054u)

#define CapSense_1_TOUCHPAD0_X_CENT_MULT_VALUE              (CapSense_1_dsFlash.wdgtArray[1].xCentroidMultiplier)
#define CapSense_1_TOUCHPAD0_X_CENT_MULT_OFFSET             (88u)
#define CapSense_1_TOUCHPAD0_X_CENT_MULT_SIZE               (4u)
#define CapSense_1_TOUCHPAD0_X_CENT_MULT_PARAM_ID           (0xD8010058u)

#define CapSense_1_TOUCHPAD0_Y_CENT_MULT_VALUE              (CapSense_1_dsFlash.wdgtArray[1].yCentroidMultiplier)
#define CapSense_1_TOUCHPAD0_Y_CENT_MULT_OFFSET             (92u)
#define CapSense_1_TOUCHPAD0_Y_CENT_MULT_SIZE               (4u)
#define CapSense_1_TOUCHPAD0_Y_CENT_MULT_PARAM_ID           (0xD901005Cu)

#define CapSense_1_TOUCHPAD0_PTR2NOISE_ENVLP_VALUE          (CapSense_1_dsFlash.wdgtArray[1].ptr2NoiseEnvlp)
#define CapSense_1_TOUCHPAD0_PTR2NOISE_ENVLP_OFFSET         (96u)
#define CapSense_1_TOUCHPAD0_PTR2NOISE_ENVLP_SIZE           (4u)
#define CapSense_1_TOUCHPAD0_PTR2NOISE_ENVLP_PARAM_ID       (0xD5010060u)

#define CapSense_1_TOUCHPAD0_IIR_FILTER_COEFF_VALUE         (CapSense_1_dsFlash.wdgtArray[1].iirFilterCoeff)
#define CapSense_1_TOUCHPAD0_IIR_FILTER_COEFF_OFFSET        (100u)
#define CapSense_1_TOUCHPAD0_IIR_FILTER_COEFF_SIZE          (1u)
#define CapSense_1_TOUCHPAD0_IIR_FILTER_COEFF_PARAM_ID      (0x53010064u)


#endif /* End CY_SENSE_CapSense_1_REGISTER_MAP_H */


/* [] END OF FILE */
