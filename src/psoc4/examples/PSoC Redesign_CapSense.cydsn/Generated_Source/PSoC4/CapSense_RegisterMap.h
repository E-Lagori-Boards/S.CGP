/***************************************************************************//**
* \file CapSense_RegisterMap.h
* \version 7.10
*
* \brief
*   This file provides the definitions for the Component data structure register.
*
* \see CapSense v7.10 Datasheet
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

#if !defined(CY_SENSE_CapSense_REGISTER_MAP_H)
#define CY_SENSE_CapSense_REGISTER_MAP_H

#include <cytypes.h>
#include "CapSense_Configuration.h"
#include "CapSense_Structure.h"

/*****************************************************************************/
/* RAM Data structure register definitions                                   */
/*****************************************************************************/
#define CapSense_CONFIG_ID_VALUE                            (CapSense_dsRam.configId)
#define CapSense_CONFIG_ID_OFFSET                           (0u)
#define CapSense_CONFIG_ID_SIZE                             (2u)
#define CapSense_CONFIG_ID_PARAM_ID                         (0x87000000u)

#define CapSense_DEVICE_ID_VALUE                            (CapSense_dsRam.deviceId)
#define CapSense_DEVICE_ID_OFFSET                           (2u)
#define CapSense_DEVICE_ID_SIZE                             (2u)
#define CapSense_DEVICE_ID_PARAM_ID                         (0x8B000002u)

#define CapSense_HW_CLOCK_VALUE                             (CapSense_dsRam.hwClock)
#define CapSense_HW_CLOCK_OFFSET                            (4u)
#define CapSense_HW_CLOCK_SIZE                              (2u)
#define CapSense_HW_CLOCK_PARAM_ID                          (0x86000004u)

#define CapSense_TUNER_CMD_VALUE                            (CapSense_dsRam.tunerCmd)
#define CapSense_TUNER_CMD_OFFSET                           (6u)
#define CapSense_TUNER_CMD_SIZE                             (2u)
#define CapSense_TUNER_CMD_PARAM_ID                         (0xA1000006u)

#define CapSense_SCAN_COUNTER_VALUE                         (CapSense_dsRam.scanCounter)
#define CapSense_SCAN_COUNTER_OFFSET                        (8u)
#define CapSense_SCAN_COUNTER_SIZE                          (2u)
#define CapSense_SCAN_COUNTER_PARAM_ID                      (0x85000008u)

#define CapSense_STATUS_VALUE                               (CapSense_dsRam.status)
#define CapSense_STATUS_OFFSET                              (12u)
#define CapSense_STATUS_SIZE                                (4u)
#define CapSense_STATUS_PARAM_ID                            (0xCB00000Cu)

#define CapSense_WDGT_ENABLE0_VALUE                         (CapSense_dsRam.wdgtEnable[0u])
#define CapSense_WDGT_ENABLE0_OFFSET                        (16u)
#define CapSense_WDGT_ENABLE0_SIZE                          (4u)
#define CapSense_WDGT_ENABLE0_PARAM_ID                      (0xE6000010u)

#define CapSense_WDGT_STATUS0_VALUE                         (CapSense_dsRam.wdgtStatus[0u])
#define CapSense_WDGT_STATUS0_OFFSET                        (20u)
#define CapSense_WDGT_STATUS0_SIZE                          (4u)
#define CapSense_WDGT_STATUS0_PARAM_ID                      (0xCC000014u)

#define CapSense_SNS_STATUS0_VALUE                          (CapSense_dsRam.snsStatus[0u])
#define CapSense_SNS_STATUS0_OFFSET                         (24u)
#define CapSense_SNS_STATUS0_SIZE                           (1u)
#define CapSense_SNS_STATUS0_PARAM_ID                       (0x48000018u)

#define CapSense_SNS_STATUS1_VALUE                          (CapSense_dsRam.snsStatus[1u])
#define CapSense_SNS_STATUS1_OFFSET                         (25u)
#define CapSense_SNS_STATUS1_SIZE                           (1u)
#define CapSense_SNS_STATUS1_PARAM_ID                       (0x4E000019u)

#define CapSense_SNS_STATUS2_VALUE                          (CapSense_dsRam.snsStatus[2u])
#define CapSense_SNS_STATUS2_OFFSET                         (26u)
#define CapSense_SNS_STATUS2_SIZE                           (1u)
#define CapSense_SNS_STATUS2_PARAM_ID                       (0x4400001Au)

#define CapSense_CSD0_CONFIG_VALUE                          (CapSense_dsRam.csd0Config)
#define CapSense_CSD0_CONFIG_OFFSET                         (28u)
#define CapSense_CSD0_CONFIG_SIZE                           (2u)
#define CapSense_CSD0_CONFIG_PARAM_ID                       (0xA780001Cu)

#define CapSense_MOD_CSD_CLK_VALUE                          (CapSense_dsRam.modCsdClk)
#define CapSense_MOD_CSD_CLK_OFFSET                         (30u)
#define CapSense_MOD_CSD_CLK_SIZE                           (1u)
#define CapSense_MOD_CSD_CLK_PARAM_ID                       (0x6380001Eu)

#define CapSense_MOD_CSX_CLK_VALUE                          (CapSense_dsRam.modCsxClk)
#define CapSense_MOD_CSX_CLK_OFFSET                         (31u)
#define CapSense_MOD_CSX_CLK_SIZE                           (1u)
#define CapSense_MOD_CSX_CLK_PARAM_ID                       (0x6580001Fu)

#define CapSense_TOUCHPAD0_RESOLUTION_VALUE                 (CapSense_dsRam.wdgtList.touchpad0.resolution)
#define CapSense_TOUCHPAD0_RESOLUTION_OFFSET                (32u)
#define CapSense_TOUCHPAD0_RESOLUTION_SIZE                  (2u)
#define CapSense_TOUCHPAD0_RESOLUTION_PARAM_ID              (0xAB800020u)

#define CapSense_TOUCHPAD0_FINGER_TH_VALUE                  (CapSense_dsRam.wdgtList.touchpad0.fingerTh)
#define CapSense_TOUCHPAD0_FINGER_TH_OFFSET                 (34u)
#define CapSense_TOUCHPAD0_FINGER_TH_SIZE                   (2u)
#define CapSense_TOUCHPAD0_FINGER_TH_PARAM_ID               (0xA7800022u)

#define CapSense_TOUCHPAD0_NOISE_TH_VALUE                   (CapSense_dsRam.wdgtList.touchpad0.noiseTh)
#define CapSense_TOUCHPAD0_NOISE_TH_OFFSET                  (36u)
#define CapSense_TOUCHPAD0_NOISE_TH_SIZE                    (1u)
#define CapSense_TOUCHPAD0_NOISE_TH_PARAM_ID                (0x62800024u)

#define CapSense_TOUCHPAD0_NNOISE_TH_VALUE                  (CapSense_dsRam.wdgtList.touchpad0.nNoiseTh)
#define CapSense_TOUCHPAD0_NNOISE_TH_OFFSET                 (37u)
#define CapSense_TOUCHPAD0_NNOISE_TH_SIZE                   (1u)
#define CapSense_TOUCHPAD0_NNOISE_TH_PARAM_ID               (0x64800025u)

#define CapSense_TOUCHPAD0_HYSTERESIS_VALUE                 (CapSense_dsRam.wdgtList.touchpad0.hysteresis)
#define CapSense_TOUCHPAD0_HYSTERESIS_OFFSET                (38u)
#define CapSense_TOUCHPAD0_HYSTERESIS_SIZE                  (1u)
#define CapSense_TOUCHPAD0_HYSTERESIS_PARAM_ID              (0x6E800026u)

#define CapSense_TOUCHPAD0_ON_DEBOUNCE_VALUE                (CapSense_dsRam.wdgtList.touchpad0.onDebounce)
#define CapSense_TOUCHPAD0_ON_DEBOUNCE_OFFSET               (39u)
#define CapSense_TOUCHPAD0_ON_DEBOUNCE_SIZE                 (1u)
#define CapSense_TOUCHPAD0_ON_DEBOUNCE_PARAM_ID             (0x68800027u)

#define CapSense_TOUCHPAD0_LOW_BSLN_RST_VALUE               (CapSense_dsRam.wdgtList.touchpad0.lowBslnRst)
#define CapSense_TOUCHPAD0_LOW_BSLN_RST_OFFSET              (40u)
#define CapSense_TOUCHPAD0_LOW_BSLN_RST_SIZE                (1u)
#define CapSense_TOUCHPAD0_LOW_BSLN_RST_PARAM_ID            (0x61800028u)

#define CapSense_TOUCHPAD0_IDAC_MOD0_VALUE                  (CapSense_dsRam.wdgtList.touchpad0.idacMod[0u])
#define CapSense_TOUCHPAD0_IDAC_MOD0_OFFSET                 (41u)
#define CapSense_TOUCHPAD0_IDAC_MOD0_SIZE                   (1u)
#define CapSense_TOUCHPAD0_IDAC_MOD0_PARAM_ID               (0x41000029u)

#define CapSense_TOUCHPAD0_IDAC_GAIN_INDEX_VALUE            (CapSense_dsRam.wdgtList.touchpad0.idacGainIndex)
#define CapSense_TOUCHPAD0_IDAC_GAIN_INDEX_OFFSET           (42u)
#define CapSense_TOUCHPAD0_IDAC_GAIN_INDEX_SIZE             (1u)
#define CapSense_TOUCHPAD0_IDAC_GAIN_INDEX_PARAM_ID         (0x6D80002Au)

#define CapSense_TOUCHPAD0_SNS_CLK_VALUE                    (CapSense_dsRam.wdgtList.touchpad0.snsClk)
#define CapSense_TOUCHPAD0_SNS_CLK_OFFSET                   (44u)
#define CapSense_TOUCHPAD0_SNS_CLK_SIZE                     (2u)
#define CapSense_TOUCHPAD0_SNS_CLK_PARAM_ID                 (0xA880002Cu)

#define CapSense_TOUCHPAD0_SNS_CLK_SOURCE_VALUE             (CapSense_dsRam.wdgtList.touchpad0.snsClkSource)
#define CapSense_TOUCHPAD0_SNS_CLK_SOURCE_OFFSET            (46u)
#define CapSense_TOUCHPAD0_SNS_CLK_SOURCE_SIZE              (1u)
#define CapSense_TOUCHPAD0_SNS_CLK_SOURCE_PARAM_ID          (0x4780002Eu)

#define CapSense_TOUCHPAD0_FINGER_CAP_VALUE                 (CapSense_dsRam.wdgtList.touchpad0.fingerCap)
#define CapSense_TOUCHPAD0_FINGER_CAP_OFFSET                (48u)
#define CapSense_TOUCHPAD0_FINGER_CAP_SIZE                  (2u)
#define CapSense_TOUCHPAD0_FINGER_CAP_PARAM_ID              (0xA3000030u)

#define CapSense_TOUCHPAD0_SIGPFC_VALUE                     (CapSense_dsRam.wdgtList.touchpad0.sigPFC)
#define CapSense_TOUCHPAD0_SIGPFC_OFFSET                    (50u)
#define CapSense_TOUCHPAD0_SIGPFC_SIZE                      (2u)
#define CapSense_TOUCHPAD0_SIGPFC_PARAM_ID                  (0xAF000032u)

#define CapSense_TOUCHPAD0_VELOCITY_VALUE                   (CapSense_dsRam.wdgtList.touchpad0.velocity)
#define CapSense_TOUCHPAD0_VELOCITY_OFFSET                  (52u)
#define CapSense_TOUCHPAD0_VELOCITY_SIZE                    (4u)
#define CapSense_TOUCHPAD0_VELOCITY_PARAM_ID                (0xED000034u)

#define CapSense_TOUCHPAD0_TOUCH0_X_VALUE                   (CapSense_dsRam.wdgtList.touchpad0.touch[0u].x)
#define CapSense_TOUCHPAD0_TOUCH0_X_OFFSET                  (56u)
#define CapSense_TOUCHPAD0_TOUCH0_X_SIZE                    (2u)
#define CapSense_TOUCHPAD0_TOUCH0_X_PARAM_ID                (0x8A000038u)

#define CapSense_TOUCHPAD0_TOUCH0_Y_VALUE                   (CapSense_dsRam.wdgtList.touchpad0.touch[0u].y)
#define CapSense_TOUCHPAD0_TOUCH0_Y_OFFSET                  (58u)
#define CapSense_TOUCHPAD0_TOUCH0_Y_SIZE                    (2u)
#define CapSense_TOUCHPAD0_TOUCH0_Y_PARAM_ID                (0x8600003Au)

#define CapSense_TOUCHPAD0_TOUCH0_Z_VALUE                   (CapSense_dsRam.wdgtList.touchpad0.touch[0u].z)
#define CapSense_TOUCHPAD0_TOUCH0_Z_OFFSET                  (60u)
#define CapSense_TOUCHPAD0_TOUCH0_Z_SIZE                    (1u)
#define CapSense_TOUCHPAD0_TOUCH0_Z_PARAM_ID                (0x4300003Cu)

#define CapSense_TOUCHPAD0_TOUCH0_ID_VALUE                  (CapSense_dsRam.wdgtList.touchpad0.touch[0u].id)
#define CapSense_TOUCHPAD0_TOUCH0_ID_OFFSET                 (61u)
#define CapSense_TOUCHPAD0_TOUCH0_ID_SIZE                   (1u)
#define CapSense_TOUCHPAD0_TOUCH0_ID_PARAM_ID               (0x4500003Du)

#define CapSense_MATRIXBUTTONS0_RESOLUTION_VALUE            (CapSense_dsRam.wdgtList.matrixbuttons0.resolution)
#define CapSense_MATRIXBUTTONS0_RESOLUTION_OFFSET           (64u)
#define CapSense_MATRIXBUTTONS0_RESOLUTION_SIZE             (2u)
#define CapSense_MATRIXBUTTONS0_RESOLUTION_PARAM_ID         (0xAF810040u)

#define CapSense_MATRIXBUTTONS0_FINGER_TH_VALUE             (CapSense_dsRam.wdgtList.matrixbuttons0.fingerTh)
#define CapSense_MATRIXBUTTONS0_FINGER_TH_OFFSET            (66u)
#define CapSense_MATRIXBUTTONS0_FINGER_TH_SIZE              (2u)
#define CapSense_MATRIXBUTTONS0_FINGER_TH_PARAM_ID          (0xA3810042u)

#define CapSense_MATRIXBUTTONS0_NOISE_TH_VALUE              (CapSense_dsRam.wdgtList.matrixbuttons0.noiseTh)
#define CapSense_MATRIXBUTTONS0_NOISE_TH_OFFSET             (68u)
#define CapSense_MATRIXBUTTONS0_NOISE_TH_SIZE               (1u)
#define CapSense_MATRIXBUTTONS0_NOISE_TH_PARAM_ID           (0x66810044u)

#define CapSense_MATRIXBUTTONS0_NNOISE_TH_VALUE             (CapSense_dsRam.wdgtList.matrixbuttons0.nNoiseTh)
#define CapSense_MATRIXBUTTONS0_NNOISE_TH_OFFSET            (69u)
#define CapSense_MATRIXBUTTONS0_NNOISE_TH_SIZE              (1u)
#define CapSense_MATRIXBUTTONS0_NNOISE_TH_PARAM_ID          (0x60810045u)

#define CapSense_MATRIXBUTTONS0_HYSTERESIS_VALUE            (CapSense_dsRam.wdgtList.matrixbuttons0.hysteresis)
#define CapSense_MATRIXBUTTONS0_HYSTERESIS_OFFSET           (70u)
#define CapSense_MATRIXBUTTONS0_HYSTERESIS_SIZE             (1u)
#define CapSense_MATRIXBUTTONS0_HYSTERESIS_PARAM_ID         (0x6A810046u)

#define CapSense_MATRIXBUTTONS0_ON_DEBOUNCE_VALUE           (CapSense_dsRam.wdgtList.matrixbuttons0.onDebounce)
#define CapSense_MATRIXBUTTONS0_ON_DEBOUNCE_OFFSET          (71u)
#define CapSense_MATRIXBUTTONS0_ON_DEBOUNCE_SIZE            (1u)
#define CapSense_MATRIXBUTTONS0_ON_DEBOUNCE_PARAM_ID        (0x6C810047u)

#define CapSense_MATRIXBUTTONS0_LOW_BSLN_RST_VALUE          (CapSense_dsRam.wdgtList.matrixbuttons0.lowBslnRst)
#define CapSense_MATRIXBUTTONS0_LOW_BSLN_RST_OFFSET         (72u)
#define CapSense_MATRIXBUTTONS0_LOW_BSLN_RST_SIZE           (1u)
#define CapSense_MATRIXBUTTONS0_LOW_BSLN_RST_PARAM_ID       (0x65810048u)

#define CapSense_MATRIXBUTTONS0_IDAC_MOD0_VALUE             (CapSense_dsRam.wdgtList.matrixbuttons0.idacMod[0u])
#define CapSense_MATRIXBUTTONS0_IDAC_MOD0_OFFSET            (73u)
#define CapSense_MATRIXBUTTONS0_IDAC_MOD0_SIZE              (1u)
#define CapSense_MATRIXBUTTONS0_IDAC_MOD0_PARAM_ID          (0x45010049u)

#define CapSense_MATRIXBUTTONS0_IDAC_GAIN_INDEX_VALUE       (CapSense_dsRam.wdgtList.matrixbuttons0.idacGainIndex)
#define CapSense_MATRIXBUTTONS0_IDAC_GAIN_INDEX_OFFSET      (74u)
#define CapSense_MATRIXBUTTONS0_IDAC_GAIN_INDEX_SIZE        (1u)
#define CapSense_MATRIXBUTTONS0_IDAC_GAIN_INDEX_PARAM_ID    (0x6981004Au)

#define CapSense_MATRIXBUTTONS0_SNS_CLK_VALUE               (CapSense_dsRam.wdgtList.matrixbuttons0.snsClk)
#define CapSense_MATRIXBUTTONS0_SNS_CLK_OFFSET              (76u)
#define CapSense_MATRIXBUTTONS0_SNS_CLK_SIZE                (2u)
#define CapSense_MATRIXBUTTONS0_SNS_CLK_PARAM_ID            (0xAC81004Cu)

#define CapSense_MATRIXBUTTONS0_SNS_CLK_SOURCE_VALUE        (CapSense_dsRam.wdgtList.matrixbuttons0.snsClkSource)
#define CapSense_MATRIXBUTTONS0_SNS_CLK_SOURCE_OFFSET       (78u)
#define CapSense_MATRIXBUTTONS0_SNS_CLK_SOURCE_SIZE         (1u)
#define CapSense_MATRIXBUTTONS0_SNS_CLK_SOURCE_PARAM_ID     (0x4381004Eu)

#define CapSense_MATRIXBUTTONS0_FINGER_CAP_VALUE            (CapSense_dsRam.wdgtList.matrixbuttons0.fingerCap)
#define CapSense_MATRIXBUTTONS0_FINGER_CAP_OFFSET           (80u)
#define CapSense_MATRIXBUTTONS0_FINGER_CAP_SIZE             (2u)
#define CapSense_MATRIXBUTTONS0_FINGER_CAP_PARAM_ID         (0xA7010050u)

#define CapSense_MATRIXBUTTONS0_SIGPFC_VALUE                (CapSense_dsRam.wdgtList.matrixbuttons0.sigPFC)
#define CapSense_MATRIXBUTTONS0_SIGPFC_OFFSET               (82u)
#define CapSense_MATRIXBUTTONS0_SIGPFC_SIZE                 (2u)
#define CapSense_MATRIXBUTTONS0_SIGPFC_PARAM_ID             (0xAB010052u)

#define CapSense_BUTTON0_RESOLUTION_VALUE                   (CapSense_dsRam.wdgtList.button0.resolution)
#define CapSense_BUTTON0_RESOLUTION_OFFSET                  (84u)
#define CapSense_BUTTON0_RESOLUTION_SIZE                    (2u)
#define CapSense_BUTTON0_RESOLUTION_PARAM_ID                (0x85820054u)

#define CapSense_BUTTON0_FINGER_TH_VALUE                    (CapSense_dsRam.wdgtList.button0.fingerTh)
#define CapSense_BUTTON0_FINGER_TH_OFFSET                   (86u)
#define CapSense_BUTTON0_FINGER_TH_SIZE                     (2u)
#define CapSense_BUTTON0_FINGER_TH_PARAM_ID                 (0x89820056u)

#define CapSense_BUTTON0_NOISE_TH_VALUE                     (CapSense_dsRam.wdgtList.button0.noiseTh)
#define CapSense_BUTTON0_NOISE_TH_OFFSET                    (88u)
#define CapSense_BUTTON0_NOISE_TH_SIZE                      (1u)
#define CapSense_BUTTON0_NOISE_TH_PARAM_ID                  (0x4E820058u)

#define CapSense_BUTTON0_NNOISE_TH_VALUE                    (CapSense_dsRam.wdgtList.button0.nNoiseTh)
#define CapSense_BUTTON0_NNOISE_TH_OFFSET                   (89u)
#define CapSense_BUTTON0_NNOISE_TH_SIZE                     (1u)
#define CapSense_BUTTON0_NNOISE_TH_PARAM_ID                 (0x48820059u)

#define CapSense_BUTTON0_HYSTERESIS_VALUE                   (CapSense_dsRam.wdgtList.button0.hysteresis)
#define CapSense_BUTTON0_HYSTERESIS_OFFSET                  (90u)
#define CapSense_BUTTON0_HYSTERESIS_SIZE                    (1u)
#define CapSense_BUTTON0_HYSTERESIS_PARAM_ID                (0x4282005Au)

#define CapSense_BUTTON0_ON_DEBOUNCE_VALUE                  (CapSense_dsRam.wdgtList.button0.onDebounce)
#define CapSense_BUTTON0_ON_DEBOUNCE_OFFSET                 (91u)
#define CapSense_BUTTON0_ON_DEBOUNCE_SIZE                   (1u)
#define CapSense_BUTTON0_ON_DEBOUNCE_PARAM_ID               (0x4482005Bu)

#define CapSense_BUTTON0_LOW_BSLN_RST_VALUE                 (CapSense_dsRam.wdgtList.button0.lowBslnRst)
#define CapSense_BUTTON0_LOW_BSLN_RST_OFFSET                (92u)
#define CapSense_BUTTON0_LOW_BSLN_RST_SIZE                  (1u)
#define CapSense_BUTTON0_LOW_BSLN_RST_PARAM_ID              (0x4F82005Cu)

#define CapSense_BUTTON0_IDAC_MOD0_VALUE                    (CapSense_dsRam.wdgtList.button0.idacMod[0u])
#define CapSense_BUTTON0_IDAC_MOD0_OFFSET                   (93u)
#define CapSense_BUTTON0_IDAC_MOD0_SIZE                     (1u)
#define CapSense_BUTTON0_IDAC_MOD0_PARAM_ID                 (0x4402005Du)

#define CapSense_BUTTON0_IDAC_GAIN_INDEX_VALUE              (CapSense_dsRam.wdgtList.button0.idacGainIndex)
#define CapSense_BUTTON0_IDAC_GAIN_INDEX_OFFSET             (94u)
#define CapSense_BUTTON0_IDAC_GAIN_INDEX_SIZE               (1u)
#define CapSense_BUTTON0_IDAC_GAIN_INDEX_PARAM_ID           (0x4382005Eu)

#define CapSense_BUTTON0_SNS_CLK_VALUE                      (CapSense_dsRam.wdgtList.button0.snsClk)
#define CapSense_BUTTON0_SNS_CLK_OFFSET                     (96u)
#define CapSense_BUTTON0_SNS_CLK_SIZE                       (2u)
#define CapSense_BUTTON0_SNS_CLK_PARAM_ID                   (0x8B820060u)

#define CapSense_BUTTON0_SNS_CLK_SOURCE_VALUE               (CapSense_dsRam.wdgtList.button0.snsClkSource)
#define CapSense_BUTTON0_SNS_CLK_SOURCE_OFFSET              (98u)
#define CapSense_BUTTON0_SNS_CLK_SOURCE_SIZE                (1u)
#define CapSense_BUTTON0_SNS_CLK_SOURCE_PARAM_ID            (0x4F820062u)

#define CapSense_BUTTON0_FINGER_CAP_VALUE                   (CapSense_dsRam.wdgtList.button0.fingerCap)
#define CapSense_BUTTON0_FINGER_CAP_OFFSET                  (100u)
#define CapSense_BUTTON0_FINGER_CAP_SIZE                    (2u)
#define CapSense_BUTTON0_FINGER_CAP_PARAM_ID                (0xAC020064u)

#define CapSense_BUTTON0_SIGPFC_VALUE                       (CapSense_dsRam.wdgtList.button0.sigPFC)
#define CapSense_BUTTON0_SIGPFC_OFFSET                      (102u)
#define CapSense_BUTTON0_SIGPFC_SIZE                        (2u)
#define CapSense_BUTTON0_SIGPFC_PARAM_ID                    (0xA0020066u)

#define CapSense_TOUCHPAD0_RX0_TX0_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[0u].raw[0u])
#define CapSense_TOUCHPAD0_RX0_TX0_RAW0_OFFSET              (104u)
#define CapSense_TOUCHPAD0_RX0_TX0_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX0_TX0_RAW0_PARAM_ID            (0x82000068u)

#define CapSense_TOUCHPAD0_RX0_TX0_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[0u].bsln[0u])
#define CapSense_TOUCHPAD0_RX0_TX0_BSLN0_OFFSET             (106u)
#define CapSense_TOUCHPAD0_RX0_TX0_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX0_TX0_BSLN0_PARAM_ID           (0x8E00006Au)

#define CapSense_TOUCHPAD0_RX0_TX0_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[0u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX0_TX0_BSLN_EXT0_OFFSET         (108u)
#define CapSense_TOUCHPAD0_RX0_TX0_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX0_TX0_BSLN_EXT0_PARAM_ID       (0x4B00006Cu)

#define CapSense_TOUCHPAD0_RX0_TX0_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[0u].diff)
#define CapSense_TOUCHPAD0_RX0_TX0_DIFF_OFFSET              (110u)
#define CapSense_TOUCHPAD0_RX0_TX0_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX0_TX0_DIFF_PARAM_ID            (0x8F00006Eu)

#define CapSense_TOUCHPAD0_RX0_TX0_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[0u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX0_TX0_NEG_BSLN_RST_CNT0_OFFSET (112u)
#define CapSense_TOUCHPAD0_RX0_TX0_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX0_TX0_NEG_BSLN_RST_CNT0_PARAM_ID (0x4D000070u)

#define CapSense_TOUCHPAD0_RX0_TX0_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[0u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX0_TX0_IDAC_COMP0_OFFSET        (113u)
#define CapSense_TOUCHPAD0_RX0_TX0_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX0_TX0_IDAC_COMP0_PARAM_ID      (0x4B000071u)

#define CapSense_TOUCHPAD0_RX0_TX1_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[1u].raw[0u])
#define CapSense_TOUCHPAD0_RX0_TX1_RAW0_OFFSET              (114u)
#define CapSense_TOUCHPAD0_RX0_TX1_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX0_TX1_RAW0_PARAM_ID            (0x89000072u)

#define CapSense_TOUCHPAD0_RX0_TX1_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[1u].bsln[0u])
#define CapSense_TOUCHPAD0_RX0_TX1_BSLN0_OFFSET             (116u)
#define CapSense_TOUCHPAD0_RX0_TX1_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX0_TX1_BSLN0_PARAM_ID           (0x84000074u)

#define CapSense_TOUCHPAD0_RX0_TX1_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[1u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX0_TX1_BSLN_EXT0_OFFSET         (118u)
#define CapSense_TOUCHPAD0_RX0_TX1_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX0_TX1_BSLN_EXT0_PARAM_ID       (0x40000076u)

#define CapSense_TOUCHPAD0_RX0_TX1_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[1u].diff)
#define CapSense_TOUCHPAD0_RX0_TX1_DIFF_OFFSET              (120u)
#define CapSense_TOUCHPAD0_RX0_TX1_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX0_TX1_DIFF_PARAM_ID            (0x87000078u)

#define CapSense_TOUCHPAD0_RX0_TX1_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[1u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX0_TX1_NEG_BSLN_RST_CNT0_OFFSET (122u)
#define CapSense_TOUCHPAD0_RX0_TX1_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX0_TX1_NEG_BSLN_RST_CNT0_PARAM_ID (0x4300007Au)

#define CapSense_TOUCHPAD0_RX0_TX1_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[1u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX0_TX1_IDAC_COMP0_OFFSET        (123u)
#define CapSense_TOUCHPAD0_RX0_TX1_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX0_TX1_IDAC_COMP0_PARAM_ID      (0x4500007Bu)

#define CapSense_TOUCHPAD0_RX0_TX2_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[2u].raw[0u])
#define CapSense_TOUCHPAD0_RX0_TX2_RAW0_OFFSET              (124u)
#define CapSense_TOUCHPAD0_RX0_TX2_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX0_TX2_RAW0_PARAM_ID            (0x8600007Cu)

#define CapSense_TOUCHPAD0_RX0_TX2_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[2u].bsln[0u])
#define CapSense_TOUCHPAD0_RX0_TX2_BSLN0_OFFSET             (126u)
#define CapSense_TOUCHPAD0_RX0_TX2_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX0_TX2_BSLN0_PARAM_ID           (0x8A00007Eu)

#define CapSense_TOUCHPAD0_RX0_TX2_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[2u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX0_TX2_BSLN_EXT0_OFFSET         (128u)
#define CapSense_TOUCHPAD0_RX0_TX2_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX0_TX2_BSLN_EXT0_PARAM_ID       (0x4C000080u)

#define CapSense_TOUCHPAD0_RX0_TX2_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[2u].diff)
#define CapSense_TOUCHPAD0_RX0_TX2_DIFF_OFFSET              (130u)
#define CapSense_TOUCHPAD0_RX0_TX2_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX0_TX2_DIFF_PARAM_ID            (0x88000082u)

#define CapSense_TOUCHPAD0_RX0_TX2_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[2u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX0_TX2_NEG_BSLN_RST_CNT0_OFFSET (132u)
#define CapSense_TOUCHPAD0_RX0_TX2_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX0_TX2_NEG_BSLN_RST_CNT0_PARAM_ID (0x4D000084u)

#define CapSense_TOUCHPAD0_RX0_TX2_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[2u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX0_TX2_IDAC_COMP0_OFFSET        (133u)
#define CapSense_TOUCHPAD0_RX0_TX2_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX0_TX2_IDAC_COMP0_PARAM_ID      (0x4B000085u)

#define CapSense_TOUCHPAD0_RX0_TX3_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[3u].raw[0u])
#define CapSense_TOUCHPAD0_RX0_TX3_RAW0_OFFSET              (134u)
#define CapSense_TOUCHPAD0_RX0_TX3_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX0_TX3_RAW0_PARAM_ID            (0x89000086u)

#define CapSense_TOUCHPAD0_RX0_TX3_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[3u].bsln[0u])
#define CapSense_TOUCHPAD0_RX0_TX3_BSLN0_OFFSET             (136u)
#define CapSense_TOUCHPAD0_RX0_TX3_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX0_TX3_BSLN0_PARAM_ID           (0x86000088u)

#define CapSense_TOUCHPAD0_RX0_TX3_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[3u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX0_TX3_BSLN_EXT0_OFFSET         (138u)
#define CapSense_TOUCHPAD0_RX0_TX3_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX0_TX3_BSLN_EXT0_PARAM_ID       (0x4200008Au)

#define CapSense_TOUCHPAD0_RX0_TX3_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[3u].diff)
#define CapSense_TOUCHPAD0_RX0_TX3_DIFF_OFFSET              (140u)
#define CapSense_TOUCHPAD0_RX0_TX3_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX0_TX3_DIFF_PARAM_ID            (0x8700008Cu)

#define CapSense_TOUCHPAD0_RX0_TX3_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[3u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX0_TX3_NEG_BSLN_RST_CNT0_OFFSET (142u)
#define CapSense_TOUCHPAD0_RX0_TX3_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX0_TX3_NEG_BSLN_RST_CNT0_PARAM_ID (0x4300008Eu)

#define CapSense_TOUCHPAD0_RX0_TX3_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[3u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX0_TX3_IDAC_COMP0_OFFSET        (143u)
#define CapSense_TOUCHPAD0_RX0_TX3_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX0_TX3_IDAC_COMP0_PARAM_ID      (0x4500008Fu)

#define CapSense_TOUCHPAD0_RX0_TX4_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[4u].raw[0u])
#define CapSense_TOUCHPAD0_RX0_TX4_RAW0_OFFSET              (144u)
#define CapSense_TOUCHPAD0_RX0_TX4_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX0_TX4_RAW0_PARAM_ID            (0x81000090u)

#define CapSense_TOUCHPAD0_RX0_TX4_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[4u].bsln[0u])
#define CapSense_TOUCHPAD0_RX0_TX4_BSLN0_OFFSET             (146u)
#define CapSense_TOUCHPAD0_RX0_TX4_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX0_TX4_BSLN0_PARAM_ID           (0x8D000092u)

#define CapSense_TOUCHPAD0_RX0_TX4_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[4u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX0_TX4_BSLN_EXT0_OFFSET         (148u)
#define CapSense_TOUCHPAD0_RX0_TX4_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX0_TX4_BSLN_EXT0_PARAM_ID       (0x48000094u)

#define CapSense_TOUCHPAD0_RX0_TX4_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[4u].diff)
#define CapSense_TOUCHPAD0_RX0_TX4_DIFF_OFFSET              (150u)
#define CapSense_TOUCHPAD0_RX0_TX4_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX0_TX4_DIFF_PARAM_ID            (0x8C000096u)

#define CapSense_TOUCHPAD0_RX0_TX4_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[4u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX0_TX4_NEG_BSLN_RST_CNT0_OFFSET (152u)
#define CapSense_TOUCHPAD0_RX0_TX4_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX0_TX4_NEG_BSLN_RST_CNT0_PARAM_ID (0x4B000098u)

#define CapSense_TOUCHPAD0_RX0_TX4_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[4u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX0_TX4_IDAC_COMP0_OFFSET        (153u)
#define CapSense_TOUCHPAD0_RX0_TX4_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX0_TX4_IDAC_COMP0_PARAM_ID      (0x4D000099u)

#define CapSense_TOUCHPAD0_RX0_TX5_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[5u].raw[0u])
#define CapSense_TOUCHPAD0_RX0_TX5_RAW0_OFFSET              (154u)
#define CapSense_TOUCHPAD0_RX0_TX5_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX0_TX5_RAW0_PARAM_ID            (0x8F00009Au)

#define CapSense_TOUCHPAD0_RX0_TX5_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[5u].bsln[0u])
#define CapSense_TOUCHPAD0_RX0_TX5_BSLN0_OFFSET             (156u)
#define CapSense_TOUCHPAD0_RX0_TX5_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX0_TX5_BSLN0_PARAM_ID           (0x8200009Cu)

#define CapSense_TOUCHPAD0_RX0_TX5_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[5u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX0_TX5_BSLN_EXT0_OFFSET         (158u)
#define CapSense_TOUCHPAD0_RX0_TX5_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX0_TX5_BSLN_EXT0_PARAM_ID       (0x4600009Eu)

#define CapSense_TOUCHPAD0_RX0_TX5_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[5u].diff)
#define CapSense_TOUCHPAD0_RX0_TX5_DIFF_OFFSET              (160u)
#define CapSense_TOUCHPAD0_RX0_TX5_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX0_TX5_DIFF_PARAM_ID            (0x8E0000A0u)

#define CapSense_TOUCHPAD0_RX0_TX5_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[5u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX0_TX5_NEG_BSLN_RST_CNT0_OFFSET (162u)
#define CapSense_TOUCHPAD0_RX0_TX5_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX0_TX5_NEG_BSLN_RST_CNT0_PARAM_ID (0x4A0000A2u)

#define CapSense_TOUCHPAD0_RX0_TX5_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[5u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX0_TX5_IDAC_COMP0_OFFSET        (163u)
#define CapSense_TOUCHPAD0_RX0_TX5_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX0_TX5_IDAC_COMP0_PARAM_ID      (0x4C0000A3u)

#define CapSense_TOUCHPAD0_RX1_TX0_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[6u].raw[0u])
#define CapSense_TOUCHPAD0_RX1_TX0_RAW0_OFFSET              (164u)
#define CapSense_TOUCHPAD0_RX1_TX0_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX1_TX0_RAW0_PARAM_ID            (0x8F0000A4u)

#define CapSense_TOUCHPAD0_RX1_TX0_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[6u].bsln[0u])
#define CapSense_TOUCHPAD0_RX1_TX0_BSLN0_OFFSET             (166u)
#define CapSense_TOUCHPAD0_RX1_TX0_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX1_TX0_BSLN0_PARAM_ID           (0x830000A6u)

#define CapSense_TOUCHPAD0_RX1_TX0_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[6u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX1_TX0_BSLN_EXT0_OFFSET         (168u)
#define CapSense_TOUCHPAD0_RX1_TX0_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX1_TX0_BSLN_EXT0_PARAM_ID       (0x440000A8u)

#define CapSense_TOUCHPAD0_RX1_TX0_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[6u].diff)
#define CapSense_TOUCHPAD0_RX1_TX0_DIFF_OFFSET              (170u)
#define CapSense_TOUCHPAD0_RX1_TX0_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX1_TX0_DIFF_PARAM_ID            (0x800000AAu)

#define CapSense_TOUCHPAD0_RX1_TX0_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[6u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX1_TX0_NEG_BSLN_RST_CNT0_OFFSET (172u)
#define CapSense_TOUCHPAD0_RX1_TX0_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX1_TX0_NEG_BSLN_RST_CNT0_PARAM_ID (0x450000ACu)

#define CapSense_TOUCHPAD0_RX1_TX0_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[6u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX1_TX0_IDAC_COMP0_OFFSET        (173u)
#define CapSense_TOUCHPAD0_RX1_TX0_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX1_TX0_IDAC_COMP0_PARAM_ID      (0x430000ADu)

#define CapSense_TOUCHPAD0_RX1_TX1_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[7u].raw[0u])
#define CapSense_TOUCHPAD0_RX1_TX1_RAW0_OFFSET              (174u)
#define CapSense_TOUCHPAD0_RX1_TX1_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX1_TX1_RAW0_PARAM_ID            (0x810000AEu)

#define CapSense_TOUCHPAD0_RX1_TX1_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[7u].bsln[0u])
#define CapSense_TOUCHPAD0_RX1_TX1_BSLN0_OFFSET             (176u)
#define CapSense_TOUCHPAD0_RX1_TX1_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX1_TX1_BSLN0_PARAM_ID           (0x8B0000B0u)

#define CapSense_TOUCHPAD0_RX1_TX1_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[7u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX1_TX1_BSLN_EXT0_OFFSET         (178u)
#define CapSense_TOUCHPAD0_RX1_TX1_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX1_TX1_BSLN_EXT0_PARAM_ID       (0x4F0000B2u)

#define CapSense_TOUCHPAD0_RX1_TX1_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[7u].diff)
#define CapSense_TOUCHPAD0_RX1_TX1_DIFF_OFFSET              (180u)
#define CapSense_TOUCHPAD0_RX1_TX1_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX1_TX1_DIFF_PARAM_ID            (0x8A0000B4u)

#define CapSense_TOUCHPAD0_RX1_TX1_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[7u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX1_TX1_NEG_BSLN_RST_CNT0_OFFSET (182u)
#define CapSense_TOUCHPAD0_RX1_TX1_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX1_TX1_NEG_BSLN_RST_CNT0_PARAM_ID (0x4E0000B6u)

#define CapSense_TOUCHPAD0_RX1_TX1_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[7u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX1_TX1_IDAC_COMP0_OFFSET        (183u)
#define CapSense_TOUCHPAD0_RX1_TX1_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX1_TX1_IDAC_COMP0_PARAM_ID      (0x480000B7u)

#define CapSense_TOUCHPAD0_RX1_TX2_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[8u].raw[0u])
#define CapSense_TOUCHPAD0_RX1_TX2_RAW0_OFFSET              (184u)
#define CapSense_TOUCHPAD0_RX1_TX2_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX1_TX2_RAW0_PARAM_ID            (0x890000B8u)

#define CapSense_TOUCHPAD0_RX1_TX2_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[8u].bsln[0u])
#define CapSense_TOUCHPAD0_RX1_TX2_BSLN0_OFFSET             (186u)
#define CapSense_TOUCHPAD0_RX1_TX2_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX1_TX2_BSLN0_PARAM_ID           (0x850000BAu)

#define CapSense_TOUCHPAD0_RX1_TX2_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[8u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX1_TX2_BSLN_EXT0_OFFSET         (188u)
#define CapSense_TOUCHPAD0_RX1_TX2_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX1_TX2_BSLN_EXT0_PARAM_ID       (0x400000BCu)

#define CapSense_TOUCHPAD0_RX1_TX2_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[8u].diff)
#define CapSense_TOUCHPAD0_RX1_TX2_DIFF_OFFSET              (190u)
#define CapSense_TOUCHPAD0_RX1_TX2_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX1_TX2_DIFF_PARAM_ID            (0x840000BEu)

#define CapSense_TOUCHPAD0_RX1_TX2_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[8u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX1_TX2_NEG_BSLN_RST_CNT0_OFFSET (192u)
#define CapSense_TOUCHPAD0_RX1_TX2_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX1_TX2_NEG_BSLN_RST_CNT0_PARAM_ID (0x410000C0u)

#define CapSense_TOUCHPAD0_RX1_TX2_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[8u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX1_TX2_IDAC_COMP0_OFFSET        (193u)
#define CapSense_TOUCHPAD0_RX1_TX2_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX1_TX2_IDAC_COMP0_PARAM_ID      (0x470000C1u)

#define CapSense_TOUCHPAD0_RX1_TX3_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[9u].raw[0u])
#define CapSense_TOUCHPAD0_RX1_TX3_RAW0_OFFSET              (194u)
#define CapSense_TOUCHPAD0_RX1_TX3_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX1_TX3_RAW0_PARAM_ID            (0x850000C2u)

#define CapSense_TOUCHPAD0_RX1_TX3_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[9u].bsln[0u])
#define CapSense_TOUCHPAD0_RX1_TX3_BSLN0_OFFSET             (196u)
#define CapSense_TOUCHPAD0_RX1_TX3_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX1_TX3_BSLN0_PARAM_ID           (0x880000C4u)

#define CapSense_TOUCHPAD0_RX1_TX3_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[9u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX1_TX3_BSLN_EXT0_OFFSET         (198u)
#define CapSense_TOUCHPAD0_RX1_TX3_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX1_TX3_BSLN_EXT0_PARAM_ID       (0x4C0000C6u)

#define CapSense_TOUCHPAD0_RX1_TX3_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[9u].diff)
#define CapSense_TOUCHPAD0_RX1_TX3_DIFF_OFFSET              (200u)
#define CapSense_TOUCHPAD0_RX1_TX3_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX1_TX3_DIFF_PARAM_ID            (0x8B0000C8u)

#define CapSense_TOUCHPAD0_RX1_TX3_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[9u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX1_TX3_NEG_BSLN_RST_CNT0_OFFSET (202u)
#define CapSense_TOUCHPAD0_RX1_TX3_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX1_TX3_NEG_BSLN_RST_CNT0_PARAM_ID (0x4F0000CAu)

#define CapSense_TOUCHPAD0_RX1_TX3_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[9u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX1_TX3_IDAC_COMP0_OFFSET        (203u)
#define CapSense_TOUCHPAD0_RX1_TX3_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX1_TX3_IDAC_COMP0_PARAM_ID      (0x490000CBu)

#define CapSense_TOUCHPAD0_RX1_TX4_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[10u].raw[0u])
#define CapSense_TOUCHPAD0_RX1_TX4_RAW0_OFFSET              (204u)
#define CapSense_TOUCHPAD0_RX1_TX4_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX1_TX4_RAW0_PARAM_ID            (0x8A0000CCu)

#define CapSense_TOUCHPAD0_RX1_TX4_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[10u].bsln[0u])
#define CapSense_TOUCHPAD0_RX1_TX4_BSLN0_OFFSET             (206u)
#define CapSense_TOUCHPAD0_RX1_TX4_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX1_TX4_BSLN0_PARAM_ID           (0x860000CEu)

#define CapSense_TOUCHPAD0_RX1_TX4_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[10u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX1_TX4_BSLN_EXT0_OFFSET         (208u)
#define CapSense_TOUCHPAD0_RX1_TX4_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX1_TX4_BSLN_EXT0_PARAM_ID       (0x440000D0u)

#define CapSense_TOUCHPAD0_RX1_TX4_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[10u].diff)
#define CapSense_TOUCHPAD0_RX1_TX4_DIFF_OFFSET              (210u)
#define CapSense_TOUCHPAD0_RX1_TX4_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX1_TX4_DIFF_PARAM_ID            (0x800000D2u)

#define CapSense_TOUCHPAD0_RX1_TX4_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[10u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX1_TX4_NEG_BSLN_RST_CNT0_OFFSET (212u)
#define CapSense_TOUCHPAD0_RX1_TX4_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX1_TX4_NEG_BSLN_RST_CNT0_PARAM_ID (0x450000D4u)

#define CapSense_TOUCHPAD0_RX1_TX4_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[10u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX1_TX4_IDAC_COMP0_OFFSET        (213u)
#define CapSense_TOUCHPAD0_RX1_TX4_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX1_TX4_IDAC_COMP0_PARAM_ID      (0x430000D5u)

#define CapSense_TOUCHPAD0_RX1_TX5_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[11u].raw[0u])
#define CapSense_TOUCHPAD0_RX1_TX5_RAW0_OFFSET              (214u)
#define CapSense_TOUCHPAD0_RX1_TX5_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX1_TX5_RAW0_PARAM_ID            (0x810000D6u)

#define CapSense_TOUCHPAD0_RX1_TX5_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[11u].bsln[0u])
#define CapSense_TOUCHPAD0_RX1_TX5_BSLN0_OFFSET             (216u)
#define CapSense_TOUCHPAD0_RX1_TX5_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX1_TX5_BSLN0_PARAM_ID           (0x8E0000D8u)

#define CapSense_TOUCHPAD0_RX1_TX5_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[11u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX1_TX5_BSLN_EXT0_OFFSET         (218u)
#define CapSense_TOUCHPAD0_RX1_TX5_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX1_TX5_BSLN_EXT0_PARAM_ID       (0x4A0000DAu)

#define CapSense_TOUCHPAD0_RX1_TX5_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[11u].diff)
#define CapSense_TOUCHPAD0_RX1_TX5_DIFF_OFFSET              (220u)
#define CapSense_TOUCHPAD0_RX1_TX5_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX1_TX5_DIFF_PARAM_ID            (0x8F0000DCu)

#define CapSense_TOUCHPAD0_RX1_TX5_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[11u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX1_TX5_NEG_BSLN_RST_CNT0_OFFSET (222u)
#define CapSense_TOUCHPAD0_RX1_TX5_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX1_TX5_NEG_BSLN_RST_CNT0_PARAM_ID (0x4B0000DEu)

#define CapSense_TOUCHPAD0_RX1_TX5_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[11u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX1_TX5_IDAC_COMP0_OFFSET        (223u)
#define CapSense_TOUCHPAD0_RX1_TX5_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX1_TX5_IDAC_COMP0_PARAM_ID      (0x4D0000DFu)

#define CapSense_TOUCHPAD0_RX2_TX0_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[12u].raw[0u])
#define CapSense_TOUCHPAD0_RX2_TX0_RAW0_OFFSET              (224u)
#define CapSense_TOUCHPAD0_RX2_TX0_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX2_TX0_RAW0_PARAM_ID            (0x830000E0u)

#define CapSense_TOUCHPAD0_RX2_TX0_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[12u].bsln[0u])
#define CapSense_TOUCHPAD0_RX2_TX0_BSLN0_OFFSET             (226u)
#define CapSense_TOUCHPAD0_RX2_TX0_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX2_TX0_BSLN0_PARAM_ID           (0x8F0000E2u)

#define CapSense_TOUCHPAD0_RX2_TX0_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[12u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX2_TX0_BSLN_EXT0_OFFSET         (228u)
#define CapSense_TOUCHPAD0_RX2_TX0_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX2_TX0_BSLN_EXT0_PARAM_ID       (0x4A0000E4u)

#define CapSense_TOUCHPAD0_RX2_TX0_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[12u].diff)
#define CapSense_TOUCHPAD0_RX2_TX0_DIFF_OFFSET              (230u)
#define CapSense_TOUCHPAD0_RX2_TX0_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX2_TX0_DIFF_PARAM_ID            (0x8E0000E6u)

#define CapSense_TOUCHPAD0_RX2_TX0_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[12u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX2_TX0_NEG_BSLN_RST_CNT0_OFFSET (232u)
#define CapSense_TOUCHPAD0_RX2_TX0_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX2_TX0_NEG_BSLN_RST_CNT0_PARAM_ID (0x490000E8u)

#define CapSense_TOUCHPAD0_RX2_TX0_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[12u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX2_TX0_IDAC_COMP0_OFFSET        (233u)
#define CapSense_TOUCHPAD0_RX2_TX0_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX2_TX0_IDAC_COMP0_PARAM_ID      (0x4F0000E9u)

#define CapSense_TOUCHPAD0_RX2_TX1_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[13u].raw[0u])
#define CapSense_TOUCHPAD0_RX2_TX1_RAW0_OFFSET              (234u)
#define CapSense_TOUCHPAD0_RX2_TX1_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX2_TX1_RAW0_PARAM_ID            (0x8D0000EAu)

#define CapSense_TOUCHPAD0_RX2_TX1_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[13u].bsln[0u])
#define CapSense_TOUCHPAD0_RX2_TX1_BSLN0_OFFSET             (236u)
#define CapSense_TOUCHPAD0_RX2_TX1_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX2_TX1_BSLN0_PARAM_ID           (0x800000ECu)

#define CapSense_TOUCHPAD0_RX2_TX1_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[13u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX2_TX1_BSLN_EXT0_OFFSET         (238u)
#define CapSense_TOUCHPAD0_RX2_TX1_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX2_TX1_BSLN_EXT0_PARAM_ID       (0x440000EEu)

#define CapSense_TOUCHPAD0_RX2_TX1_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[13u].diff)
#define CapSense_TOUCHPAD0_RX2_TX1_DIFF_OFFSET              (240u)
#define CapSense_TOUCHPAD0_RX2_TX1_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX2_TX1_DIFF_PARAM_ID            (0x860000F0u)

#define CapSense_TOUCHPAD0_RX2_TX1_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[13u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX2_TX1_NEG_BSLN_RST_CNT0_OFFSET (242u)
#define CapSense_TOUCHPAD0_RX2_TX1_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX2_TX1_NEG_BSLN_RST_CNT0_PARAM_ID (0x420000F2u)

#define CapSense_TOUCHPAD0_RX2_TX1_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[13u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX2_TX1_IDAC_COMP0_OFFSET        (243u)
#define CapSense_TOUCHPAD0_RX2_TX1_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX2_TX1_IDAC_COMP0_PARAM_ID      (0x440000F3u)

#define CapSense_TOUCHPAD0_RX2_TX2_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[14u].raw[0u])
#define CapSense_TOUCHPAD0_RX2_TX2_RAW0_OFFSET              (244u)
#define CapSense_TOUCHPAD0_RX2_TX2_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX2_TX2_RAW0_PARAM_ID            (0x870000F4u)

#define CapSense_TOUCHPAD0_RX2_TX2_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[14u].bsln[0u])
#define CapSense_TOUCHPAD0_RX2_TX2_BSLN0_OFFSET             (246u)
#define CapSense_TOUCHPAD0_RX2_TX2_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX2_TX2_BSLN0_PARAM_ID           (0x8B0000F6u)

#define CapSense_TOUCHPAD0_RX2_TX2_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[14u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX2_TX2_BSLN_EXT0_OFFSET         (248u)
#define CapSense_TOUCHPAD0_RX2_TX2_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX2_TX2_BSLN_EXT0_PARAM_ID       (0x4C0000F8u)

#define CapSense_TOUCHPAD0_RX2_TX2_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[14u].diff)
#define CapSense_TOUCHPAD0_RX2_TX2_DIFF_OFFSET              (250u)
#define CapSense_TOUCHPAD0_RX2_TX2_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX2_TX2_DIFF_PARAM_ID            (0x880000FAu)

#define CapSense_TOUCHPAD0_RX2_TX2_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[14u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX2_TX2_NEG_BSLN_RST_CNT0_OFFSET (252u)
#define CapSense_TOUCHPAD0_RX2_TX2_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX2_TX2_NEG_BSLN_RST_CNT0_PARAM_ID (0x4D0000FCu)

#define CapSense_TOUCHPAD0_RX2_TX2_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[14u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX2_TX2_IDAC_COMP0_OFFSET        (253u)
#define CapSense_TOUCHPAD0_RX2_TX2_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX2_TX2_IDAC_COMP0_PARAM_ID      (0x4B0000FDu)

#define CapSense_TOUCHPAD0_RX2_TX3_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[15u].raw[0u])
#define CapSense_TOUCHPAD0_RX2_TX3_RAW0_OFFSET              (254u)
#define CapSense_TOUCHPAD0_RX2_TX3_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX2_TX3_RAW0_PARAM_ID            (0x890000FEu)

#define CapSense_TOUCHPAD0_RX2_TX3_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[15u].bsln[0u])
#define CapSense_TOUCHPAD0_RX2_TX3_BSLN0_OFFSET             (256u)
#define CapSense_TOUCHPAD0_RX2_TX3_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX2_TX3_BSLN0_PARAM_ID           (0x8C000100u)

#define CapSense_TOUCHPAD0_RX2_TX3_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[15u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX2_TX3_BSLN_EXT0_OFFSET         (258u)
#define CapSense_TOUCHPAD0_RX2_TX3_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX2_TX3_BSLN_EXT0_PARAM_ID       (0x48000102u)

#define CapSense_TOUCHPAD0_RX2_TX3_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[15u].diff)
#define CapSense_TOUCHPAD0_RX2_TX3_DIFF_OFFSET              (260u)
#define CapSense_TOUCHPAD0_RX2_TX3_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX2_TX3_DIFF_PARAM_ID            (0x8D000104u)

#define CapSense_TOUCHPAD0_RX2_TX3_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[15u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX2_TX3_NEG_BSLN_RST_CNT0_OFFSET (262u)
#define CapSense_TOUCHPAD0_RX2_TX3_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX2_TX3_NEG_BSLN_RST_CNT0_PARAM_ID (0x49000106u)

#define CapSense_TOUCHPAD0_RX2_TX3_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[15u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX2_TX3_IDAC_COMP0_OFFSET        (263u)
#define CapSense_TOUCHPAD0_RX2_TX3_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX2_TX3_IDAC_COMP0_PARAM_ID      (0x4F000107u)

#define CapSense_TOUCHPAD0_RX2_TX4_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[16u].raw[0u])
#define CapSense_TOUCHPAD0_RX2_TX4_RAW0_OFFSET              (264u)
#define CapSense_TOUCHPAD0_RX2_TX4_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX2_TX4_RAW0_PARAM_ID            (0x8E000108u)

#define CapSense_TOUCHPAD0_RX2_TX4_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[16u].bsln[0u])
#define CapSense_TOUCHPAD0_RX2_TX4_BSLN0_OFFSET             (266u)
#define CapSense_TOUCHPAD0_RX2_TX4_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX2_TX4_BSLN0_PARAM_ID           (0x8200010Au)

#define CapSense_TOUCHPAD0_RX2_TX4_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[16u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX2_TX4_BSLN_EXT0_OFFSET         (268u)
#define CapSense_TOUCHPAD0_RX2_TX4_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX2_TX4_BSLN_EXT0_PARAM_ID       (0x4700010Cu)

#define CapSense_TOUCHPAD0_RX2_TX4_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[16u].diff)
#define CapSense_TOUCHPAD0_RX2_TX4_DIFF_OFFSET              (270u)
#define CapSense_TOUCHPAD0_RX2_TX4_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX2_TX4_DIFF_PARAM_ID            (0x8300010Eu)

#define CapSense_TOUCHPAD0_RX2_TX4_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[16u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX2_TX4_NEG_BSLN_RST_CNT0_OFFSET (272u)
#define CapSense_TOUCHPAD0_RX2_TX4_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX2_TX4_NEG_BSLN_RST_CNT0_PARAM_ID (0x41000110u)

#define CapSense_TOUCHPAD0_RX2_TX4_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[16u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX2_TX4_IDAC_COMP0_OFFSET        (273u)
#define CapSense_TOUCHPAD0_RX2_TX4_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX2_TX4_IDAC_COMP0_PARAM_ID      (0x47000111u)

#define CapSense_TOUCHPAD0_RX2_TX5_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[17u].raw[0u])
#define CapSense_TOUCHPAD0_RX2_TX5_RAW0_OFFSET              (274u)
#define CapSense_TOUCHPAD0_RX2_TX5_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX2_TX5_RAW0_PARAM_ID            (0x85000112u)

#define CapSense_TOUCHPAD0_RX2_TX5_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[17u].bsln[0u])
#define CapSense_TOUCHPAD0_RX2_TX5_BSLN0_OFFSET             (276u)
#define CapSense_TOUCHPAD0_RX2_TX5_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX2_TX5_BSLN0_PARAM_ID           (0x88000114u)

#define CapSense_TOUCHPAD0_RX2_TX5_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[17u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX2_TX5_BSLN_EXT0_OFFSET         (278u)
#define CapSense_TOUCHPAD0_RX2_TX5_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX2_TX5_BSLN_EXT0_PARAM_ID       (0x4C000116u)

#define CapSense_TOUCHPAD0_RX2_TX5_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[17u].diff)
#define CapSense_TOUCHPAD0_RX2_TX5_DIFF_OFFSET              (280u)
#define CapSense_TOUCHPAD0_RX2_TX5_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX2_TX5_DIFF_PARAM_ID            (0x8B000118u)

#define CapSense_TOUCHPAD0_RX2_TX5_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[17u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX2_TX5_NEG_BSLN_RST_CNT0_OFFSET (282u)
#define CapSense_TOUCHPAD0_RX2_TX5_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX2_TX5_NEG_BSLN_RST_CNT0_PARAM_ID (0x4F00011Au)

#define CapSense_TOUCHPAD0_RX2_TX5_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[17u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX2_TX5_IDAC_COMP0_OFFSET        (283u)
#define CapSense_TOUCHPAD0_RX2_TX5_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX2_TX5_IDAC_COMP0_PARAM_ID      (0x4900011Bu)

#define CapSense_TOUCHPAD0_RX3_TX0_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[18u].raw[0u])
#define CapSense_TOUCHPAD0_RX3_TX0_RAW0_OFFSET              (284u)
#define CapSense_TOUCHPAD0_RX3_TX0_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX3_TX0_RAW0_PARAM_ID            (0x8A00011Cu)

#define CapSense_TOUCHPAD0_RX3_TX0_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[18u].bsln[0u])
#define CapSense_TOUCHPAD0_RX3_TX0_BSLN0_OFFSET             (286u)
#define CapSense_TOUCHPAD0_RX3_TX0_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX3_TX0_BSLN0_PARAM_ID           (0x8600011Eu)

#define CapSense_TOUCHPAD0_RX3_TX0_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[18u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX3_TX0_BSLN_EXT0_OFFSET         (288u)
#define CapSense_TOUCHPAD0_RX3_TX0_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX3_TX0_BSLN_EXT0_PARAM_ID       (0x4E000120u)

#define CapSense_TOUCHPAD0_RX3_TX0_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[18u].diff)
#define CapSense_TOUCHPAD0_RX3_TX0_DIFF_OFFSET              (290u)
#define CapSense_TOUCHPAD0_RX3_TX0_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX3_TX0_DIFF_PARAM_ID            (0x8A000122u)

#define CapSense_TOUCHPAD0_RX3_TX0_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[18u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX3_TX0_NEG_BSLN_RST_CNT0_OFFSET (292u)
#define CapSense_TOUCHPAD0_RX3_TX0_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX3_TX0_NEG_BSLN_RST_CNT0_PARAM_ID (0x4F000124u)

#define CapSense_TOUCHPAD0_RX3_TX0_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[18u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX3_TX0_IDAC_COMP0_OFFSET        (293u)
#define CapSense_TOUCHPAD0_RX3_TX0_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX3_TX0_IDAC_COMP0_PARAM_ID      (0x49000125u)

#define CapSense_TOUCHPAD0_RX3_TX1_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[19u].raw[0u])
#define CapSense_TOUCHPAD0_RX3_TX1_RAW0_OFFSET              (294u)
#define CapSense_TOUCHPAD0_RX3_TX1_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX3_TX1_RAW0_PARAM_ID            (0x8B000126u)

#define CapSense_TOUCHPAD0_RX3_TX1_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[19u].bsln[0u])
#define CapSense_TOUCHPAD0_RX3_TX1_BSLN0_OFFSET             (296u)
#define CapSense_TOUCHPAD0_RX3_TX1_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX3_TX1_BSLN0_PARAM_ID           (0x84000128u)

#define CapSense_TOUCHPAD0_RX3_TX1_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[19u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX3_TX1_BSLN_EXT0_OFFSET         (298u)
#define CapSense_TOUCHPAD0_RX3_TX1_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX3_TX1_BSLN_EXT0_PARAM_ID       (0x4000012Au)

#define CapSense_TOUCHPAD0_RX3_TX1_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[19u].diff)
#define CapSense_TOUCHPAD0_RX3_TX1_DIFF_OFFSET              (300u)
#define CapSense_TOUCHPAD0_RX3_TX1_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX3_TX1_DIFF_PARAM_ID            (0x8500012Cu)

#define CapSense_TOUCHPAD0_RX3_TX1_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[19u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX3_TX1_NEG_BSLN_RST_CNT0_OFFSET (302u)
#define CapSense_TOUCHPAD0_RX3_TX1_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX3_TX1_NEG_BSLN_RST_CNT0_PARAM_ID (0x4100012Eu)

#define CapSense_TOUCHPAD0_RX3_TX1_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[19u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX3_TX1_IDAC_COMP0_OFFSET        (303u)
#define CapSense_TOUCHPAD0_RX3_TX1_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX3_TX1_IDAC_COMP0_PARAM_ID      (0x4700012Fu)

#define CapSense_TOUCHPAD0_RX3_TX2_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[20u].raw[0u])
#define CapSense_TOUCHPAD0_RX3_TX2_RAW0_OFFSET              (304u)
#define CapSense_TOUCHPAD0_RX3_TX2_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX3_TX2_RAW0_PARAM_ID            (0x83000130u)

#define CapSense_TOUCHPAD0_RX3_TX2_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[20u].bsln[0u])
#define CapSense_TOUCHPAD0_RX3_TX2_BSLN0_OFFSET             (306u)
#define CapSense_TOUCHPAD0_RX3_TX2_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX3_TX2_BSLN0_PARAM_ID           (0x8F000132u)

#define CapSense_TOUCHPAD0_RX3_TX2_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[20u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX3_TX2_BSLN_EXT0_OFFSET         (308u)
#define CapSense_TOUCHPAD0_RX3_TX2_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX3_TX2_BSLN_EXT0_PARAM_ID       (0x4A000134u)

#define CapSense_TOUCHPAD0_RX3_TX2_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[20u].diff)
#define CapSense_TOUCHPAD0_RX3_TX2_DIFF_OFFSET              (310u)
#define CapSense_TOUCHPAD0_RX3_TX2_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX3_TX2_DIFF_PARAM_ID            (0x8E000136u)

#define CapSense_TOUCHPAD0_RX3_TX2_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[20u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX3_TX2_NEG_BSLN_RST_CNT0_OFFSET (312u)
#define CapSense_TOUCHPAD0_RX3_TX2_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX3_TX2_NEG_BSLN_RST_CNT0_PARAM_ID (0x49000138u)

#define CapSense_TOUCHPAD0_RX3_TX2_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[20u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX3_TX2_IDAC_COMP0_OFFSET        (313u)
#define CapSense_TOUCHPAD0_RX3_TX2_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX3_TX2_IDAC_COMP0_PARAM_ID      (0x4F000139u)

#define CapSense_TOUCHPAD0_RX3_TX3_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[21u].raw[0u])
#define CapSense_TOUCHPAD0_RX3_TX3_RAW0_OFFSET              (314u)
#define CapSense_TOUCHPAD0_RX3_TX3_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX3_TX3_RAW0_PARAM_ID            (0x8D00013Au)

#define CapSense_TOUCHPAD0_RX3_TX3_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[21u].bsln[0u])
#define CapSense_TOUCHPAD0_RX3_TX3_BSLN0_OFFSET             (316u)
#define CapSense_TOUCHPAD0_RX3_TX3_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX3_TX3_BSLN0_PARAM_ID           (0x8000013Cu)

#define CapSense_TOUCHPAD0_RX3_TX3_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[21u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX3_TX3_BSLN_EXT0_OFFSET         (318u)
#define CapSense_TOUCHPAD0_RX3_TX3_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX3_TX3_BSLN_EXT0_PARAM_ID       (0x4400013Eu)

#define CapSense_TOUCHPAD0_RX3_TX3_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[21u].diff)
#define CapSense_TOUCHPAD0_RX3_TX3_DIFF_OFFSET              (320u)
#define CapSense_TOUCHPAD0_RX3_TX3_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX3_TX3_DIFF_PARAM_ID            (0x81000140u)

#define CapSense_TOUCHPAD0_RX3_TX3_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[21u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX3_TX3_NEG_BSLN_RST_CNT0_OFFSET (322u)
#define CapSense_TOUCHPAD0_RX3_TX3_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX3_TX3_NEG_BSLN_RST_CNT0_PARAM_ID (0x45000142u)

#define CapSense_TOUCHPAD0_RX3_TX3_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[21u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX3_TX3_IDAC_COMP0_OFFSET        (323u)
#define CapSense_TOUCHPAD0_RX3_TX3_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX3_TX3_IDAC_COMP0_PARAM_ID      (0x43000143u)

#define CapSense_TOUCHPAD0_RX3_TX4_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[22u].raw[0u])
#define CapSense_TOUCHPAD0_RX3_TX4_RAW0_OFFSET              (324u)
#define CapSense_TOUCHPAD0_RX3_TX4_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX3_TX4_RAW0_PARAM_ID            (0x80000144u)

#define CapSense_TOUCHPAD0_RX3_TX4_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[22u].bsln[0u])
#define CapSense_TOUCHPAD0_RX3_TX4_BSLN0_OFFSET             (326u)
#define CapSense_TOUCHPAD0_RX3_TX4_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX3_TX4_BSLN0_PARAM_ID           (0x8C000146u)

#define CapSense_TOUCHPAD0_RX3_TX4_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[22u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX3_TX4_BSLN_EXT0_OFFSET         (328u)
#define CapSense_TOUCHPAD0_RX3_TX4_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX3_TX4_BSLN_EXT0_PARAM_ID       (0x4B000148u)

#define CapSense_TOUCHPAD0_RX3_TX4_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[22u].diff)
#define CapSense_TOUCHPAD0_RX3_TX4_DIFF_OFFSET              (330u)
#define CapSense_TOUCHPAD0_RX3_TX4_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX3_TX4_DIFF_PARAM_ID            (0x8F00014Au)

#define CapSense_TOUCHPAD0_RX3_TX4_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[22u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX3_TX4_NEG_BSLN_RST_CNT0_OFFSET (332u)
#define CapSense_TOUCHPAD0_RX3_TX4_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX3_TX4_NEG_BSLN_RST_CNT0_PARAM_ID (0x4A00014Cu)

#define CapSense_TOUCHPAD0_RX3_TX4_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[22u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX3_TX4_IDAC_COMP0_OFFSET        (333u)
#define CapSense_TOUCHPAD0_RX3_TX4_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX3_TX4_IDAC_COMP0_PARAM_ID      (0x4C00014Du)

#define CapSense_TOUCHPAD0_RX3_TX5_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[23u].raw[0u])
#define CapSense_TOUCHPAD0_RX3_TX5_RAW0_OFFSET              (334u)
#define CapSense_TOUCHPAD0_RX3_TX5_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX3_TX5_RAW0_PARAM_ID            (0x8E00014Eu)

#define CapSense_TOUCHPAD0_RX3_TX5_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[23u].bsln[0u])
#define CapSense_TOUCHPAD0_RX3_TX5_BSLN0_OFFSET             (336u)
#define CapSense_TOUCHPAD0_RX3_TX5_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX3_TX5_BSLN0_PARAM_ID           (0x84000150u)

#define CapSense_TOUCHPAD0_RX3_TX5_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[23u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX3_TX5_BSLN_EXT0_OFFSET         (338u)
#define CapSense_TOUCHPAD0_RX3_TX5_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX3_TX5_BSLN_EXT0_PARAM_ID       (0x40000152u)

#define CapSense_TOUCHPAD0_RX3_TX5_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[23u].diff)
#define CapSense_TOUCHPAD0_RX3_TX5_DIFF_OFFSET              (340u)
#define CapSense_TOUCHPAD0_RX3_TX5_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX3_TX5_DIFF_PARAM_ID            (0x85000154u)

#define CapSense_TOUCHPAD0_RX3_TX5_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[23u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX3_TX5_NEG_BSLN_RST_CNT0_OFFSET (342u)
#define CapSense_TOUCHPAD0_RX3_TX5_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX3_TX5_NEG_BSLN_RST_CNT0_PARAM_ID (0x41000156u)

#define CapSense_TOUCHPAD0_RX3_TX5_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[23u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX3_TX5_IDAC_COMP0_OFFSET        (343u)
#define CapSense_TOUCHPAD0_RX3_TX5_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX3_TX5_IDAC_COMP0_PARAM_ID      (0x47000157u)

#define CapSense_TOUCHPAD0_RX4_TX0_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[24u].raw[0u])
#define CapSense_TOUCHPAD0_RX4_TX0_RAW0_OFFSET              (344u)
#define CapSense_TOUCHPAD0_RX4_TX0_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX4_TX0_RAW0_PARAM_ID            (0x86000158u)

#define CapSense_TOUCHPAD0_RX4_TX0_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[24u].bsln[0u])
#define CapSense_TOUCHPAD0_RX4_TX0_BSLN0_OFFSET             (346u)
#define CapSense_TOUCHPAD0_RX4_TX0_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX4_TX0_BSLN0_PARAM_ID           (0x8A00015Au)

#define CapSense_TOUCHPAD0_RX4_TX0_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[24u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX4_TX0_BSLN_EXT0_OFFSET         (348u)
#define CapSense_TOUCHPAD0_RX4_TX0_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX4_TX0_BSLN_EXT0_PARAM_ID       (0x4F00015Cu)

#define CapSense_TOUCHPAD0_RX4_TX0_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[24u].diff)
#define CapSense_TOUCHPAD0_RX4_TX0_DIFF_OFFSET              (350u)
#define CapSense_TOUCHPAD0_RX4_TX0_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX4_TX0_DIFF_PARAM_ID            (0x8B00015Eu)

#define CapSense_TOUCHPAD0_RX4_TX0_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[24u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX4_TX0_NEG_BSLN_RST_CNT0_OFFSET (352u)
#define CapSense_TOUCHPAD0_RX4_TX0_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX4_TX0_NEG_BSLN_RST_CNT0_PARAM_ID (0x43000160u)

#define CapSense_TOUCHPAD0_RX4_TX0_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[24u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX4_TX0_IDAC_COMP0_OFFSET        (353u)
#define CapSense_TOUCHPAD0_RX4_TX0_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX4_TX0_IDAC_COMP0_PARAM_ID      (0x45000161u)

#define CapSense_TOUCHPAD0_RX4_TX1_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[25u].raw[0u])
#define CapSense_TOUCHPAD0_RX4_TX1_RAW0_OFFSET              (354u)
#define CapSense_TOUCHPAD0_RX4_TX1_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX4_TX1_RAW0_PARAM_ID            (0x87000162u)

#define CapSense_TOUCHPAD0_RX4_TX1_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[25u].bsln[0u])
#define CapSense_TOUCHPAD0_RX4_TX1_BSLN0_OFFSET             (356u)
#define CapSense_TOUCHPAD0_RX4_TX1_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX4_TX1_BSLN0_PARAM_ID           (0x8A000164u)

#define CapSense_TOUCHPAD0_RX4_TX1_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[25u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX4_TX1_BSLN_EXT0_OFFSET         (358u)
#define CapSense_TOUCHPAD0_RX4_TX1_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX4_TX1_BSLN_EXT0_PARAM_ID       (0x4E000166u)

#define CapSense_TOUCHPAD0_RX4_TX1_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[25u].diff)
#define CapSense_TOUCHPAD0_RX4_TX1_DIFF_OFFSET              (360u)
#define CapSense_TOUCHPAD0_RX4_TX1_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX4_TX1_DIFF_PARAM_ID            (0x89000168u)

#define CapSense_TOUCHPAD0_RX4_TX1_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[25u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX4_TX1_NEG_BSLN_RST_CNT0_OFFSET (362u)
#define CapSense_TOUCHPAD0_RX4_TX1_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX4_TX1_NEG_BSLN_RST_CNT0_PARAM_ID (0x4D00016Au)

#define CapSense_TOUCHPAD0_RX4_TX1_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[25u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX4_TX1_IDAC_COMP0_OFFSET        (363u)
#define CapSense_TOUCHPAD0_RX4_TX1_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX4_TX1_IDAC_COMP0_PARAM_ID      (0x4B00016Bu)

#define CapSense_TOUCHPAD0_RX4_TX2_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[26u].raw[0u])
#define CapSense_TOUCHPAD0_RX4_TX2_RAW0_OFFSET              (364u)
#define CapSense_TOUCHPAD0_RX4_TX2_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX4_TX2_RAW0_PARAM_ID            (0x8800016Cu)

#define CapSense_TOUCHPAD0_RX4_TX2_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[26u].bsln[0u])
#define CapSense_TOUCHPAD0_RX4_TX2_BSLN0_OFFSET             (366u)
#define CapSense_TOUCHPAD0_RX4_TX2_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX4_TX2_BSLN0_PARAM_ID           (0x8400016Eu)

#define CapSense_TOUCHPAD0_RX4_TX2_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[26u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX4_TX2_BSLN_EXT0_OFFSET         (368u)
#define CapSense_TOUCHPAD0_RX4_TX2_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX4_TX2_BSLN_EXT0_PARAM_ID       (0x46000170u)

#define CapSense_TOUCHPAD0_RX4_TX2_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[26u].diff)
#define CapSense_TOUCHPAD0_RX4_TX2_DIFF_OFFSET              (370u)
#define CapSense_TOUCHPAD0_RX4_TX2_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX4_TX2_DIFF_PARAM_ID            (0x82000172u)

#define CapSense_TOUCHPAD0_RX4_TX2_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[26u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX4_TX2_NEG_BSLN_RST_CNT0_OFFSET (372u)
#define CapSense_TOUCHPAD0_RX4_TX2_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX4_TX2_NEG_BSLN_RST_CNT0_PARAM_ID (0x47000174u)

#define CapSense_TOUCHPAD0_RX4_TX2_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[26u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX4_TX2_IDAC_COMP0_OFFSET        (373u)
#define CapSense_TOUCHPAD0_RX4_TX2_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX4_TX2_IDAC_COMP0_PARAM_ID      (0x41000175u)

#define CapSense_TOUCHPAD0_RX4_TX3_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[27u].raw[0u])
#define CapSense_TOUCHPAD0_RX4_TX3_RAW0_OFFSET              (374u)
#define CapSense_TOUCHPAD0_RX4_TX3_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX4_TX3_RAW0_PARAM_ID            (0x83000176u)

#define CapSense_TOUCHPAD0_RX4_TX3_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[27u].bsln[0u])
#define CapSense_TOUCHPAD0_RX4_TX3_BSLN0_OFFSET             (376u)
#define CapSense_TOUCHPAD0_RX4_TX3_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX4_TX3_BSLN0_PARAM_ID           (0x8C000178u)

#define CapSense_TOUCHPAD0_RX4_TX3_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[27u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX4_TX3_BSLN_EXT0_OFFSET         (378u)
#define CapSense_TOUCHPAD0_RX4_TX3_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX4_TX3_BSLN_EXT0_PARAM_ID       (0x4800017Au)

#define CapSense_TOUCHPAD0_RX4_TX3_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[27u].diff)
#define CapSense_TOUCHPAD0_RX4_TX3_DIFF_OFFSET              (380u)
#define CapSense_TOUCHPAD0_RX4_TX3_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX4_TX3_DIFF_PARAM_ID            (0x8D00017Cu)

#define CapSense_TOUCHPAD0_RX4_TX3_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[27u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX4_TX3_NEG_BSLN_RST_CNT0_OFFSET (382u)
#define CapSense_TOUCHPAD0_RX4_TX3_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX4_TX3_NEG_BSLN_RST_CNT0_PARAM_ID (0x4900017Eu)

#define CapSense_TOUCHPAD0_RX4_TX3_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[27u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX4_TX3_IDAC_COMP0_OFFSET        (383u)
#define CapSense_TOUCHPAD0_RX4_TX3_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX4_TX3_IDAC_COMP0_PARAM_ID      (0x4F00017Fu)

#define CapSense_TOUCHPAD0_RX4_TX4_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[28u].raw[0u])
#define CapSense_TOUCHPAD0_RX4_TX4_RAW0_OFFSET              (384u)
#define CapSense_TOUCHPAD0_RX4_TX4_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX4_TX4_RAW0_PARAM_ID            (0x8F000180u)

#define CapSense_TOUCHPAD0_RX4_TX4_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[28u].bsln[0u])
#define CapSense_TOUCHPAD0_RX4_TX4_BSLN0_OFFSET             (386u)
#define CapSense_TOUCHPAD0_RX4_TX4_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX4_TX4_BSLN0_PARAM_ID           (0x83000182u)

#define CapSense_TOUCHPAD0_RX4_TX4_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[28u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX4_TX4_BSLN_EXT0_OFFSET         (388u)
#define CapSense_TOUCHPAD0_RX4_TX4_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX4_TX4_BSLN_EXT0_PARAM_ID       (0x46000184u)

#define CapSense_TOUCHPAD0_RX4_TX4_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[28u].diff)
#define CapSense_TOUCHPAD0_RX4_TX4_DIFF_OFFSET              (390u)
#define CapSense_TOUCHPAD0_RX4_TX4_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX4_TX4_DIFF_PARAM_ID            (0x82000186u)

#define CapSense_TOUCHPAD0_RX4_TX4_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[28u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX4_TX4_NEG_BSLN_RST_CNT0_OFFSET (392u)
#define CapSense_TOUCHPAD0_RX4_TX4_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX4_TX4_NEG_BSLN_RST_CNT0_PARAM_ID (0x45000188u)

#define CapSense_TOUCHPAD0_RX4_TX4_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[28u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX4_TX4_IDAC_COMP0_OFFSET        (393u)
#define CapSense_TOUCHPAD0_RX4_TX4_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX4_TX4_IDAC_COMP0_PARAM_ID      (0x43000189u)

#define CapSense_TOUCHPAD0_RX4_TX5_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[29u].raw[0u])
#define CapSense_TOUCHPAD0_RX4_TX5_RAW0_OFFSET              (394u)
#define CapSense_TOUCHPAD0_RX4_TX5_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX4_TX5_RAW0_PARAM_ID            (0x8100018Au)

#define CapSense_TOUCHPAD0_RX4_TX5_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[29u].bsln[0u])
#define CapSense_TOUCHPAD0_RX4_TX5_BSLN0_OFFSET             (396u)
#define CapSense_TOUCHPAD0_RX4_TX5_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX4_TX5_BSLN0_PARAM_ID           (0x8C00018Cu)

#define CapSense_TOUCHPAD0_RX4_TX5_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[29u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX4_TX5_BSLN_EXT0_OFFSET         (398u)
#define CapSense_TOUCHPAD0_RX4_TX5_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX4_TX5_BSLN_EXT0_PARAM_ID       (0x4800018Eu)

#define CapSense_TOUCHPAD0_RX4_TX5_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[29u].diff)
#define CapSense_TOUCHPAD0_RX4_TX5_DIFF_OFFSET              (400u)
#define CapSense_TOUCHPAD0_RX4_TX5_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX4_TX5_DIFF_PARAM_ID            (0x8A000190u)

#define CapSense_TOUCHPAD0_RX4_TX5_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[29u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX4_TX5_NEG_BSLN_RST_CNT0_OFFSET (402u)
#define CapSense_TOUCHPAD0_RX4_TX5_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX4_TX5_NEG_BSLN_RST_CNT0_PARAM_ID (0x4E000192u)

#define CapSense_TOUCHPAD0_RX4_TX5_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[29u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX4_TX5_IDAC_COMP0_OFFSET        (403u)
#define CapSense_TOUCHPAD0_RX4_TX5_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX4_TX5_IDAC_COMP0_PARAM_ID      (0x48000193u)

#define CapSense_TOUCHPAD0_RX5_TX0_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[30u].raw[0u])
#define CapSense_TOUCHPAD0_RX5_TX0_RAW0_OFFSET              (404u)
#define CapSense_TOUCHPAD0_RX5_TX0_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX5_TX0_RAW0_PARAM_ID            (0x8B000194u)

#define CapSense_TOUCHPAD0_RX5_TX0_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[30u].bsln[0u])
#define CapSense_TOUCHPAD0_RX5_TX0_BSLN0_OFFSET             (406u)
#define CapSense_TOUCHPAD0_RX5_TX0_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX5_TX0_BSLN0_PARAM_ID           (0x87000196u)

#define CapSense_TOUCHPAD0_RX5_TX0_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[30u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX5_TX0_BSLN_EXT0_OFFSET         (408u)
#define CapSense_TOUCHPAD0_RX5_TX0_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX5_TX0_BSLN_EXT0_PARAM_ID       (0x40000198u)

#define CapSense_TOUCHPAD0_RX5_TX0_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[30u].diff)
#define CapSense_TOUCHPAD0_RX5_TX0_DIFF_OFFSET              (410u)
#define CapSense_TOUCHPAD0_RX5_TX0_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX5_TX0_DIFF_PARAM_ID            (0x8400019Au)

#define CapSense_TOUCHPAD0_RX5_TX0_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[30u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX5_TX0_NEG_BSLN_RST_CNT0_OFFSET (412u)
#define CapSense_TOUCHPAD0_RX5_TX0_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX5_TX0_NEG_BSLN_RST_CNT0_PARAM_ID (0x4100019Cu)

#define CapSense_TOUCHPAD0_RX5_TX0_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[30u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX5_TX0_IDAC_COMP0_OFFSET        (413u)
#define CapSense_TOUCHPAD0_RX5_TX0_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX5_TX0_IDAC_COMP0_PARAM_ID      (0x4700019Du)

#define CapSense_TOUCHPAD0_RX5_TX1_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[31u].raw[0u])
#define CapSense_TOUCHPAD0_RX5_TX1_RAW0_OFFSET              (414u)
#define CapSense_TOUCHPAD0_RX5_TX1_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX5_TX1_RAW0_PARAM_ID            (0x8500019Eu)

#define CapSense_TOUCHPAD0_RX5_TX1_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[31u].bsln[0u])
#define CapSense_TOUCHPAD0_RX5_TX1_BSLN0_OFFSET             (416u)
#define CapSense_TOUCHPAD0_RX5_TX1_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX5_TX1_BSLN0_PARAM_ID           (0x850001A0u)

#define CapSense_TOUCHPAD0_RX5_TX1_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[31u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX5_TX1_BSLN_EXT0_OFFSET         (418u)
#define CapSense_TOUCHPAD0_RX5_TX1_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX5_TX1_BSLN_EXT0_PARAM_ID       (0x410001A2u)

#define CapSense_TOUCHPAD0_RX5_TX1_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[31u].diff)
#define CapSense_TOUCHPAD0_RX5_TX1_DIFF_OFFSET              (420u)
#define CapSense_TOUCHPAD0_RX5_TX1_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX5_TX1_DIFF_PARAM_ID            (0x840001A4u)

#define CapSense_TOUCHPAD0_RX5_TX1_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[31u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX5_TX1_NEG_BSLN_RST_CNT0_OFFSET (422u)
#define CapSense_TOUCHPAD0_RX5_TX1_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX5_TX1_NEG_BSLN_RST_CNT0_PARAM_ID (0x400001A6u)

#define CapSense_TOUCHPAD0_RX5_TX1_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[31u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX5_TX1_IDAC_COMP0_OFFSET        (423u)
#define CapSense_TOUCHPAD0_RX5_TX1_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX5_TX1_IDAC_COMP0_PARAM_ID      (0x460001A7u)

#define CapSense_TOUCHPAD0_RX5_TX2_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[32u].raw[0u])
#define CapSense_TOUCHPAD0_RX5_TX2_RAW0_OFFSET              (424u)
#define CapSense_TOUCHPAD0_RX5_TX2_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX5_TX2_RAW0_PARAM_ID            (0x870001A8u)

#define CapSense_TOUCHPAD0_RX5_TX2_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[32u].bsln[0u])
#define CapSense_TOUCHPAD0_RX5_TX2_BSLN0_OFFSET             (426u)
#define CapSense_TOUCHPAD0_RX5_TX2_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX5_TX2_BSLN0_PARAM_ID           (0x8B0001AAu)

#define CapSense_TOUCHPAD0_RX5_TX2_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[32u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX5_TX2_BSLN_EXT0_OFFSET         (428u)
#define CapSense_TOUCHPAD0_RX5_TX2_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX5_TX2_BSLN_EXT0_PARAM_ID       (0x4E0001ACu)

#define CapSense_TOUCHPAD0_RX5_TX2_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[32u].diff)
#define CapSense_TOUCHPAD0_RX5_TX2_DIFF_OFFSET              (430u)
#define CapSense_TOUCHPAD0_RX5_TX2_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX5_TX2_DIFF_PARAM_ID            (0x8A0001AEu)

#define CapSense_TOUCHPAD0_RX5_TX2_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[32u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX5_TX2_NEG_BSLN_RST_CNT0_OFFSET (432u)
#define CapSense_TOUCHPAD0_RX5_TX2_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX5_TX2_NEG_BSLN_RST_CNT0_PARAM_ID (0x480001B0u)

#define CapSense_TOUCHPAD0_RX5_TX2_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[32u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX5_TX2_IDAC_COMP0_OFFSET        (433u)
#define CapSense_TOUCHPAD0_RX5_TX2_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX5_TX2_IDAC_COMP0_PARAM_ID      (0x4E0001B1u)

#define CapSense_TOUCHPAD0_RX5_TX3_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[33u].raw[0u])
#define CapSense_TOUCHPAD0_RX5_TX3_RAW0_OFFSET              (434u)
#define CapSense_TOUCHPAD0_RX5_TX3_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX5_TX3_RAW0_PARAM_ID            (0x8C0001B2u)

#define CapSense_TOUCHPAD0_RX5_TX3_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[33u].bsln[0u])
#define CapSense_TOUCHPAD0_RX5_TX3_BSLN0_OFFSET             (436u)
#define CapSense_TOUCHPAD0_RX5_TX3_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX5_TX3_BSLN0_PARAM_ID           (0x810001B4u)

#define CapSense_TOUCHPAD0_RX5_TX3_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[33u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX5_TX3_BSLN_EXT0_OFFSET         (438u)
#define CapSense_TOUCHPAD0_RX5_TX3_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX5_TX3_BSLN_EXT0_PARAM_ID       (0x450001B6u)

#define CapSense_TOUCHPAD0_RX5_TX3_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[33u].diff)
#define CapSense_TOUCHPAD0_RX5_TX3_DIFF_OFFSET              (440u)
#define CapSense_TOUCHPAD0_RX5_TX3_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX5_TX3_DIFF_PARAM_ID            (0x820001B8u)

#define CapSense_TOUCHPAD0_RX5_TX3_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[33u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX5_TX3_NEG_BSLN_RST_CNT0_OFFSET (442u)
#define CapSense_TOUCHPAD0_RX5_TX3_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX5_TX3_NEG_BSLN_RST_CNT0_PARAM_ID (0x460001BAu)

#define CapSense_TOUCHPAD0_RX5_TX3_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[33u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX5_TX3_IDAC_COMP0_OFFSET        (443u)
#define CapSense_TOUCHPAD0_RX5_TX3_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX5_TX3_IDAC_COMP0_PARAM_ID      (0x400001BBu)

#define CapSense_TOUCHPAD0_RX5_TX4_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[34u].raw[0u])
#define CapSense_TOUCHPAD0_RX5_TX4_RAW0_OFFSET              (444u)
#define CapSense_TOUCHPAD0_RX5_TX4_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX5_TX4_RAW0_PARAM_ID            (0x830001BCu)

#define CapSense_TOUCHPAD0_RX5_TX4_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[34u].bsln[0u])
#define CapSense_TOUCHPAD0_RX5_TX4_BSLN0_OFFSET             (446u)
#define CapSense_TOUCHPAD0_RX5_TX4_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX5_TX4_BSLN0_PARAM_ID           (0x8F0001BEu)

#define CapSense_TOUCHPAD0_RX5_TX4_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[34u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX5_TX4_BSLN_EXT0_OFFSET         (448u)
#define CapSense_TOUCHPAD0_RX5_TX4_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX5_TX4_BSLN_EXT0_PARAM_ID       (0x4A0001C0u)

#define CapSense_TOUCHPAD0_RX5_TX4_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[34u].diff)
#define CapSense_TOUCHPAD0_RX5_TX4_DIFF_OFFSET              (450u)
#define CapSense_TOUCHPAD0_RX5_TX4_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX5_TX4_DIFF_PARAM_ID            (0x8E0001C2u)

#define CapSense_TOUCHPAD0_RX5_TX4_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[34u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX5_TX4_NEG_BSLN_RST_CNT0_OFFSET (452u)
#define CapSense_TOUCHPAD0_RX5_TX4_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX5_TX4_NEG_BSLN_RST_CNT0_PARAM_ID (0x4B0001C4u)

#define CapSense_TOUCHPAD0_RX5_TX4_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[34u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX5_TX4_IDAC_COMP0_OFFSET        (453u)
#define CapSense_TOUCHPAD0_RX5_TX4_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX5_TX4_IDAC_COMP0_PARAM_ID      (0x4D0001C5u)

#define CapSense_TOUCHPAD0_RX5_TX5_RAW0_VALUE               (CapSense_dsRam.snsList.touchpad0[35u].raw[0u])
#define CapSense_TOUCHPAD0_RX5_TX5_RAW0_OFFSET              (454u)
#define CapSense_TOUCHPAD0_RX5_TX5_RAW0_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX5_TX5_RAW0_PARAM_ID            (0x8F0001C6u)

#define CapSense_TOUCHPAD0_RX5_TX5_BSLN0_VALUE              (CapSense_dsRam.snsList.touchpad0[35u].bsln[0u])
#define CapSense_TOUCHPAD0_RX5_TX5_BSLN0_OFFSET             (456u)
#define CapSense_TOUCHPAD0_RX5_TX5_BSLN0_SIZE               (2u)
#define CapSense_TOUCHPAD0_RX5_TX5_BSLN0_PARAM_ID           (0x800001C8u)

#define CapSense_TOUCHPAD0_RX5_TX5_BSLN_EXT0_VALUE          (CapSense_dsRam.snsList.touchpad0[35u].bslnExt[0u])
#define CapSense_TOUCHPAD0_RX5_TX5_BSLN_EXT0_OFFSET         (458u)
#define CapSense_TOUCHPAD0_RX5_TX5_BSLN_EXT0_SIZE           (1u)
#define CapSense_TOUCHPAD0_RX5_TX5_BSLN_EXT0_PARAM_ID       (0x440001CAu)

#define CapSense_TOUCHPAD0_RX5_TX5_DIFF_VALUE               (CapSense_dsRam.snsList.touchpad0[35u].diff)
#define CapSense_TOUCHPAD0_RX5_TX5_DIFF_OFFSET              (460u)
#define CapSense_TOUCHPAD0_RX5_TX5_DIFF_SIZE                (2u)
#define CapSense_TOUCHPAD0_RX5_TX5_DIFF_PARAM_ID            (0x810001CCu)

#define CapSense_TOUCHPAD0_RX5_TX5_NEG_BSLN_RST_CNT0_VALUE  (CapSense_dsRam.snsList.touchpad0[35u].negBslnRstCnt[0u])
#define CapSense_TOUCHPAD0_RX5_TX5_NEG_BSLN_RST_CNT0_OFFSET (462u)
#define CapSense_TOUCHPAD0_RX5_TX5_NEG_BSLN_RST_CNT0_SIZE   (1u)
#define CapSense_TOUCHPAD0_RX5_TX5_NEG_BSLN_RST_CNT0_PARAM_ID (0x450001CEu)

#define CapSense_TOUCHPAD0_RX5_TX5_IDAC_COMP0_VALUE         (CapSense_dsRam.snsList.touchpad0[35u].idacComp[0u])
#define CapSense_TOUCHPAD0_RX5_TX5_IDAC_COMP0_OFFSET        (463u)
#define CapSense_TOUCHPAD0_RX5_TX5_IDAC_COMP0_SIZE          (1u)
#define CapSense_TOUCHPAD0_RX5_TX5_IDAC_COMP0_PARAM_ID      (0x430001CFu)

#define CapSense_MATRIXBUTTONS0_RX0_TX0_RAW0_VALUE          (CapSense_dsRam.snsList.matrixbuttons0[0u].raw[0u])
#define CapSense_MATRIXBUTTONS0_RX0_TX0_RAW0_OFFSET         (464u)
#define CapSense_MATRIXBUTTONS0_RX0_TX0_RAW0_SIZE           (2u)
#define CapSense_MATRIXBUTTONS0_RX0_TX0_RAW0_PARAM_ID       (0x870001D0u)

#define CapSense_MATRIXBUTTONS0_RX0_TX0_BSLN0_VALUE         (CapSense_dsRam.snsList.matrixbuttons0[0u].bsln[0u])
#define CapSense_MATRIXBUTTONS0_RX0_TX0_BSLN0_OFFSET        (466u)
#define CapSense_MATRIXBUTTONS0_RX0_TX0_BSLN0_SIZE          (2u)
#define CapSense_MATRIXBUTTONS0_RX0_TX0_BSLN0_PARAM_ID      (0x8B0001D2u)

#define CapSense_MATRIXBUTTONS0_RX0_TX0_BSLN_EXT0_VALUE     (CapSense_dsRam.snsList.matrixbuttons0[0u].bslnExt[0u])
#define CapSense_MATRIXBUTTONS0_RX0_TX0_BSLN_EXT0_OFFSET    (468u)
#define CapSense_MATRIXBUTTONS0_RX0_TX0_BSLN_EXT0_SIZE      (1u)
#define CapSense_MATRIXBUTTONS0_RX0_TX0_BSLN_EXT0_PARAM_ID  (0x4E0001D4u)

#define CapSense_MATRIXBUTTONS0_RX0_TX0_DIFF_VALUE          (CapSense_dsRam.snsList.matrixbuttons0[0u].diff)
#define CapSense_MATRIXBUTTONS0_RX0_TX0_DIFF_OFFSET         (470u)
#define CapSense_MATRIXBUTTONS0_RX0_TX0_DIFF_SIZE           (2u)
#define CapSense_MATRIXBUTTONS0_RX0_TX0_DIFF_PARAM_ID       (0x8A0001D6u)

#define CapSense_MATRIXBUTTONS0_RX0_TX0_NEG_BSLN_RST_CNT0_VALUE (CapSense_dsRam.snsList.matrixbuttons0[0u].negBslnRstCnt[0u])
#define CapSense_MATRIXBUTTONS0_RX0_TX0_NEG_BSLN_RST_CNT0_OFFSET (472u)
#define CapSense_MATRIXBUTTONS0_RX0_TX0_NEG_BSLN_RST_CNT0_SIZE (1u)
#define CapSense_MATRIXBUTTONS0_RX0_TX0_NEG_BSLN_RST_CNT0_PARAM_ID (0x4D0001D8u)

#define CapSense_MATRIXBUTTONS0_RX0_TX0_IDAC_COMP0_VALUE    (CapSense_dsRam.snsList.matrixbuttons0[0u].idacComp[0u])
#define CapSense_MATRIXBUTTONS0_RX0_TX0_IDAC_COMP0_OFFSET   (473u)
#define CapSense_MATRIXBUTTONS0_RX0_TX0_IDAC_COMP0_SIZE     (1u)
#define CapSense_MATRIXBUTTONS0_RX0_TX0_IDAC_COMP0_PARAM_ID (0x4B0001D9u)

#define CapSense_MATRIXBUTTONS0_RX0_TX1_RAW0_VALUE          (CapSense_dsRam.snsList.matrixbuttons0[1u].raw[0u])
#define CapSense_MATRIXBUTTONS0_RX0_TX1_RAW0_OFFSET         (474u)
#define CapSense_MATRIXBUTTONS0_RX0_TX1_RAW0_SIZE           (2u)
#define CapSense_MATRIXBUTTONS0_RX0_TX1_RAW0_PARAM_ID       (0x890001DAu)

#define CapSense_MATRIXBUTTONS0_RX0_TX1_BSLN0_VALUE         (CapSense_dsRam.snsList.matrixbuttons0[1u].bsln[0u])
#define CapSense_MATRIXBUTTONS0_RX0_TX1_BSLN0_OFFSET        (476u)
#define CapSense_MATRIXBUTTONS0_RX0_TX1_BSLN0_SIZE          (2u)
#define CapSense_MATRIXBUTTONS0_RX0_TX1_BSLN0_PARAM_ID      (0x840001DCu)

#define CapSense_MATRIXBUTTONS0_RX0_TX1_BSLN_EXT0_VALUE     (CapSense_dsRam.snsList.matrixbuttons0[1u].bslnExt[0u])
#define CapSense_MATRIXBUTTONS0_RX0_TX1_BSLN_EXT0_OFFSET    (478u)
#define CapSense_MATRIXBUTTONS0_RX0_TX1_BSLN_EXT0_SIZE      (1u)
#define CapSense_MATRIXBUTTONS0_RX0_TX1_BSLN_EXT0_PARAM_ID  (0x400001DEu)

#define CapSense_MATRIXBUTTONS0_RX0_TX1_DIFF_VALUE          (CapSense_dsRam.snsList.matrixbuttons0[1u].diff)
#define CapSense_MATRIXBUTTONS0_RX0_TX1_DIFF_OFFSET         (480u)
#define CapSense_MATRIXBUTTONS0_RX0_TX1_DIFF_SIZE           (2u)
#define CapSense_MATRIXBUTTONS0_RX0_TX1_DIFF_PARAM_ID       (0x880001E0u)

#define CapSense_MATRIXBUTTONS0_RX0_TX1_NEG_BSLN_RST_CNT0_VALUE (CapSense_dsRam.snsList.matrixbuttons0[1u].negBslnRstCnt[0u])
#define CapSense_MATRIXBUTTONS0_RX0_TX1_NEG_BSLN_RST_CNT0_OFFSET (482u)
#define CapSense_MATRIXBUTTONS0_RX0_TX1_NEG_BSLN_RST_CNT0_SIZE (1u)
#define CapSense_MATRIXBUTTONS0_RX0_TX1_NEG_BSLN_RST_CNT0_PARAM_ID (0x4C0001E2u)

#define CapSense_MATRIXBUTTONS0_RX0_TX1_IDAC_COMP0_VALUE    (CapSense_dsRam.snsList.matrixbuttons0[1u].idacComp[0u])
#define CapSense_MATRIXBUTTONS0_RX0_TX1_IDAC_COMP0_OFFSET   (483u)
#define CapSense_MATRIXBUTTONS0_RX0_TX1_IDAC_COMP0_SIZE     (1u)
#define CapSense_MATRIXBUTTONS0_RX0_TX1_IDAC_COMP0_PARAM_ID (0x4A0001E3u)

#define CapSense_MATRIXBUTTONS0_RX0_TX2_RAW0_VALUE          (CapSense_dsRam.snsList.matrixbuttons0[2u].raw[0u])
#define CapSense_MATRIXBUTTONS0_RX0_TX2_RAW0_OFFSET         (484u)
#define CapSense_MATRIXBUTTONS0_RX0_TX2_RAW0_SIZE           (2u)
#define CapSense_MATRIXBUTTONS0_RX0_TX2_RAW0_PARAM_ID       (0x890001E4u)

#define CapSense_MATRIXBUTTONS0_RX0_TX2_BSLN0_VALUE         (CapSense_dsRam.snsList.matrixbuttons0[2u].bsln[0u])
#define CapSense_MATRIXBUTTONS0_RX0_TX2_BSLN0_OFFSET        (486u)
#define CapSense_MATRIXBUTTONS0_RX0_TX2_BSLN0_SIZE          (2u)
#define CapSense_MATRIXBUTTONS0_RX0_TX2_BSLN0_PARAM_ID      (0x850001E6u)

#define CapSense_MATRIXBUTTONS0_RX0_TX2_BSLN_EXT0_VALUE     (CapSense_dsRam.snsList.matrixbuttons0[2u].bslnExt[0u])
#define CapSense_MATRIXBUTTONS0_RX0_TX2_BSLN_EXT0_OFFSET    (488u)
#define CapSense_MATRIXBUTTONS0_RX0_TX2_BSLN_EXT0_SIZE      (1u)
#define CapSense_MATRIXBUTTONS0_RX0_TX2_BSLN_EXT0_PARAM_ID  (0x420001E8u)

#define CapSense_MATRIXBUTTONS0_RX0_TX2_DIFF_VALUE          (CapSense_dsRam.snsList.matrixbuttons0[2u].diff)
#define CapSense_MATRIXBUTTONS0_RX0_TX2_DIFF_OFFSET         (490u)
#define CapSense_MATRIXBUTTONS0_RX0_TX2_DIFF_SIZE           (2u)
#define CapSense_MATRIXBUTTONS0_RX0_TX2_DIFF_PARAM_ID       (0x860001EAu)

#define CapSense_MATRIXBUTTONS0_RX0_TX2_NEG_BSLN_RST_CNT0_VALUE (CapSense_dsRam.snsList.matrixbuttons0[2u].negBslnRstCnt[0u])
#define CapSense_MATRIXBUTTONS0_RX0_TX2_NEG_BSLN_RST_CNT0_OFFSET (492u)
#define CapSense_MATRIXBUTTONS0_RX0_TX2_NEG_BSLN_RST_CNT0_SIZE (1u)
#define CapSense_MATRIXBUTTONS0_RX0_TX2_NEG_BSLN_RST_CNT0_PARAM_ID (0x430001ECu)

#define CapSense_MATRIXBUTTONS0_RX0_TX2_IDAC_COMP0_VALUE    (CapSense_dsRam.snsList.matrixbuttons0[2u].idacComp[0u])
#define CapSense_MATRIXBUTTONS0_RX0_TX2_IDAC_COMP0_OFFSET   (493u)
#define CapSense_MATRIXBUTTONS0_RX0_TX2_IDAC_COMP0_SIZE     (1u)
#define CapSense_MATRIXBUTTONS0_RX0_TX2_IDAC_COMP0_PARAM_ID (0x450001EDu)

#define CapSense_MATRIXBUTTONS0_RX1_TX0_RAW0_VALUE          (CapSense_dsRam.snsList.matrixbuttons0[3u].raw[0u])
#define CapSense_MATRIXBUTTONS0_RX1_TX0_RAW0_OFFSET         (494u)
#define CapSense_MATRIXBUTTONS0_RX1_TX0_RAW0_SIZE           (2u)
#define CapSense_MATRIXBUTTONS0_RX1_TX0_RAW0_PARAM_ID       (0x870001EEu)

#define CapSense_MATRIXBUTTONS0_RX1_TX0_BSLN0_VALUE         (CapSense_dsRam.snsList.matrixbuttons0[3u].bsln[0u])
#define CapSense_MATRIXBUTTONS0_RX1_TX0_BSLN0_OFFSET        (496u)
#define CapSense_MATRIXBUTTONS0_RX1_TX0_BSLN0_SIZE          (2u)
#define CapSense_MATRIXBUTTONS0_RX1_TX0_BSLN0_PARAM_ID      (0x8D0001F0u)

#define CapSense_MATRIXBUTTONS0_RX1_TX0_BSLN_EXT0_VALUE     (CapSense_dsRam.snsList.matrixbuttons0[3u].bslnExt[0u])
#define CapSense_MATRIXBUTTONS0_RX1_TX0_BSLN_EXT0_OFFSET    (498u)
#define CapSense_MATRIXBUTTONS0_RX1_TX0_BSLN_EXT0_SIZE      (1u)
#define CapSense_MATRIXBUTTONS0_RX1_TX0_BSLN_EXT0_PARAM_ID  (0x490001F2u)

#define CapSense_MATRIXBUTTONS0_RX1_TX0_DIFF_VALUE          (CapSense_dsRam.snsList.matrixbuttons0[3u].diff)
#define CapSense_MATRIXBUTTONS0_RX1_TX0_DIFF_OFFSET         (500u)
#define CapSense_MATRIXBUTTONS0_RX1_TX0_DIFF_SIZE           (2u)
#define CapSense_MATRIXBUTTONS0_RX1_TX0_DIFF_PARAM_ID       (0x8C0001F4u)

#define CapSense_MATRIXBUTTONS0_RX1_TX0_NEG_BSLN_RST_CNT0_VALUE (CapSense_dsRam.snsList.matrixbuttons0[3u].negBslnRstCnt[0u])
#define CapSense_MATRIXBUTTONS0_RX1_TX0_NEG_BSLN_RST_CNT0_OFFSET (502u)
#define CapSense_MATRIXBUTTONS0_RX1_TX0_NEG_BSLN_RST_CNT0_SIZE (1u)
#define CapSense_MATRIXBUTTONS0_RX1_TX0_NEG_BSLN_RST_CNT0_PARAM_ID (0x480001F6u)

#define CapSense_MATRIXBUTTONS0_RX1_TX0_IDAC_COMP0_VALUE    (CapSense_dsRam.snsList.matrixbuttons0[3u].idacComp[0u])
#define CapSense_MATRIXBUTTONS0_RX1_TX0_IDAC_COMP0_OFFSET   (503u)
#define CapSense_MATRIXBUTTONS0_RX1_TX0_IDAC_COMP0_SIZE     (1u)
#define CapSense_MATRIXBUTTONS0_RX1_TX0_IDAC_COMP0_PARAM_ID (0x4E0001F7u)

#define CapSense_MATRIXBUTTONS0_RX1_TX1_RAW0_VALUE          (CapSense_dsRam.snsList.matrixbuttons0[4u].raw[0u])
#define CapSense_MATRIXBUTTONS0_RX1_TX1_RAW0_OFFSET         (504u)
#define CapSense_MATRIXBUTTONS0_RX1_TX1_RAW0_SIZE           (2u)
#define CapSense_MATRIXBUTTONS0_RX1_TX1_RAW0_PARAM_ID       (0x8F0001F8u)

#define CapSense_MATRIXBUTTONS0_RX1_TX1_BSLN0_VALUE         (CapSense_dsRam.snsList.matrixbuttons0[4u].bsln[0u])
#define CapSense_MATRIXBUTTONS0_RX1_TX1_BSLN0_OFFSET        (506u)
#define CapSense_MATRIXBUTTONS0_RX1_TX1_BSLN0_SIZE          (2u)
#define CapSense_MATRIXBUTTONS0_RX1_TX1_BSLN0_PARAM_ID      (0x830001FAu)

#define CapSense_MATRIXBUTTONS0_RX1_TX1_BSLN_EXT0_VALUE     (CapSense_dsRam.snsList.matrixbuttons0[4u].bslnExt[0u])
#define CapSense_MATRIXBUTTONS0_RX1_TX1_BSLN_EXT0_OFFSET    (508u)
#define CapSense_MATRIXBUTTONS0_RX1_TX1_BSLN_EXT0_SIZE      (1u)
#define CapSense_MATRIXBUTTONS0_RX1_TX1_BSLN_EXT0_PARAM_ID  (0x460001FCu)

#define CapSense_MATRIXBUTTONS0_RX1_TX1_DIFF_VALUE          (CapSense_dsRam.snsList.matrixbuttons0[4u].diff)
#define CapSense_MATRIXBUTTONS0_RX1_TX1_DIFF_OFFSET         (510u)
#define CapSense_MATRIXBUTTONS0_RX1_TX1_DIFF_SIZE           (2u)
#define CapSense_MATRIXBUTTONS0_RX1_TX1_DIFF_PARAM_ID       (0x820001FEu)

#define CapSense_MATRIXBUTTONS0_RX1_TX1_NEG_BSLN_RST_CNT0_VALUE (CapSense_dsRam.snsList.matrixbuttons0[4u].negBslnRstCnt[0u])
#define CapSense_MATRIXBUTTONS0_RX1_TX1_NEG_BSLN_RST_CNT0_OFFSET (512u)
#define CapSense_MATRIXBUTTONS0_RX1_TX1_NEG_BSLN_RST_CNT0_SIZE (1u)
#define CapSense_MATRIXBUTTONS0_RX1_TX1_NEG_BSLN_RST_CNT0_PARAM_ID (0x40000200u)

#define CapSense_MATRIXBUTTONS0_RX1_TX1_IDAC_COMP0_VALUE    (CapSense_dsRam.snsList.matrixbuttons0[4u].idacComp[0u])
#define CapSense_MATRIXBUTTONS0_RX1_TX1_IDAC_COMP0_OFFSET   (513u)
#define CapSense_MATRIXBUTTONS0_RX1_TX1_IDAC_COMP0_SIZE     (1u)
#define CapSense_MATRIXBUTTONS0_RX1_TX1_IDAC_COMP0_PARAM_ID (0x46000201u)

#define CapSense_MATRIXBUTTONS0_RX1_TX2_RAW0_VALUE          (CapSense_dsRam.snsList.matrixbuttons0[5u].raw[0u])
#define CapSense_MATRIXBUTTONS0_RX1_TX2_RAW0_OFFSET         (514u)
#define CapSense_MATRIXBUTTONS0_RX1_TX2_RAW0_SIZE           (2u)
#define CapSense_MATRIXBUTTONS0_RX1_TX2_RAW0_PARAM_ID       (0x84000202u)

#define CapSense_MATRIXBUTTONS0_RX1_TX2_BSLN0_VALUE         (CapSense_dsRam.snsList.matrixbuttons0[5u].bsln[0u])
#define CapSense_MATRIXBUTTONS0_RX1_TX2_BSLN0_OFFSET        (516u)
#define CapSense_MATRIXBUTTONS0_RX1_TX2_BSLN0_SIZE          (2u)
#define CapSense_MATRIXBUTTONS0_RX1_TX2_BSLN0_PARAM_ID      (0x89000204u)

#define CapSense_MATRIXBUTTONS0_RX1_TX2_BSLN_EXT0_VALUE     (CapSense_dsRam.snsList.matrixbuttons0[5u].bslnExt[0u])
#define CapSense_MATRIXBUTTONS0_RX1_TX2_BSLN_EXT0_OFFSET    (518u)
#define CapSense_MATRIXBUTTONS0_RX1_TX2_BSLN_EXT0_SIZE      (1u)
#define CapSense_MATRIXBUTTONS0_RX1_TX2_BSLN_EXT0_PARAM_ID  (0x4D000206u)

#define CapSense_MATRIXBUTTONS0_RX1_TX2_DIFF_VALUE          (CapSense_dsRam.snsList.matrixbuttons0[5u].diff)
#define CapSense_MATRIXBUTTONS0_RX1_TX2_DIFF_OFFSET         (520u)
#define CapSense_MATRIXBUTTONS0_RX1_TX2_DIFF_SIZE           (2u)
#define CapSense_MATRIXBUTTONS0_RX1_TX2_DIFF_PARAM_ID       (0x8A000208u)

#define CapSense_MATRIXBUTTONS0_RX1_TX2_NEG_BSLN_RST_CNT0_VALUE (CapSense_dsRam.snsList.matrixbuttons0[5u].negBslnRstCnt[0u])
#define CapSense_MATRIXBUTTONS0_RX1_TX2_NEG_BSLN_RST_CNT0_OFFSET (522u)
#define CapSense_MATRIXBUTTONS0_RX1_TX2_NEG_BSLN_RST_CNT0_SIZE (1u)
#define CapSense_MATRIXBUTTONS0_RX1_TX2_NEG_BSLN_RST_CNT0_PARAM_ID (0x4E00020Au)

#define CapSense_MATRIXBUTTONS0_RX1_TX2_IDAC_COMP0_VALUE    (CapSense_dsRam.snsList.matrixbuttons0[5u].idacComp[0u])
#define CapSense_MATRIXBUTTONS0_RX1_TX2_IDAC_COMP0_OFFSET   (523u)
#define CapSense_MATRIXBUTTONS0_RX1_TX2_IDAC_COMP0_SIZE     (1u)
#define CapSense_MATRIXBUTTONS0_RX1_TX2_IDAC_COMP0_PARAM_ID (0x4800020Bu)

#define CapSense_BUTTON0_SNS0_RAW0_VALUE                    (CapSense_dsRam.snsList.button0[0u].raw[0u])
#define CapSense_BUTTON0_SNS0_RAW0_OFFSET                   (524u)
#define CapSense_BUTTON0_SNS0_RAW0_SIZE                     (2u)
#define CapSense_BUTTON0_SNS0_RAW0_PARAM_ID                 (0x8B00020Cu)

#define CapSense_BUTTON0_SNS0_BSLN0_VALUE                   (CapSense_dsRam.snsList.button0[0u].bsln[0u])
#define CapSense_BUTTON0_SNS0_BSLN0_OFFSET                  (526u)
#define CapSense_BUTTON0_SNS0_BSLN0_SIZE                    (2u)
#define CapSense_BUTTON0_SNS0_BSLN0_PARAM_ID                (0x8700020Eu)

#define CapSense_BUTTON0_SNS0_BSLN_EXT0_VALUE               (CapSense_dsRam.snsList.button0[0u].bslnExt[0u])
#define CapSense_BUTTON0_SNS0_BSLN_EXT0_OFFSET              (528u)
#define CapSense_BUTTON0_SNS0_BSLN_EXT0_SIZE                (1u)
#define CapSense_BUTTON0_SNS0_BSLN_EXT0_PARAM_ID            (0x45000210u)

#define CapSense_BUTTON0_SNS0_DIFF_VALUE                    (CapSense_dsRam.snsList.button0[0u].diff)
#define CapSense_BUTTON0_SNS0_DIFF_OFFSET                   (530u)
#define CapSense_BUTTON0_SNS0_DIFF_SIZE                     (2u)
#define CapSense_BUTTON0_SNS0_DIFF_PARAM_ID                 (0x81000212u)

#define CapSense_BUTTON0_SNS0_NEG_BSLN_RST_CNT0_VALUE       (CapSense_dsRam.snsList.button0[0u].negBslnRstCnt[0u])
#define CapSense_BUTTON0_SNS0_NEG_BSLN_RST_CNT0_OFFSET      (532u)
#define CapSense_BUTTON0_SNS0_NEG_BSLN_RST_CNT0_SIZE        (1u)
#define CapSense_BUTTON0_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID    (0x44000214u)

#define CapSense_BUTTON0_SNS0_IDAC_COMP0_VALUE              (CapSense_dsRam.snsList.button0[0u].idacComp[0u])
#define CapSense_BUTTON0_SNS0_IDAC_COMP0_OFFSET             (533u)
#define CapSense_BUTTON0_SNS0_IDAC_COMP0_SIZE               (1u)
#define CapSense_BUTTON0_SNS0_IDAC_COMP0_PARAM_ID           (0x42000215u)

#define CapSense_SNR_TEST_WIDGET_ID_VALUE                   (CapSense_dsRam.snrTestWidgetId)
#define CapSense_SNR_TEST_WIDGET_ID_OFFSET                  (534u)
#define CapSense_SNR_TEST_WIDGET_ID_SIZE                    (1u)
#define CapSense_SNR_TEST_WIDGET_ID_PARAM_ID                (0x63000216u)

#define CapSense_SNR_TEST_SENSOR_ID_VALUE                   (CapSense_dsRam.snrTestSensorId)
#define CapSense_SNR_TEST_SENSOR_ID_OFFSET                  (535u)
#define CapSense_SNR_TEST_SENSOR_ID_SIZE                    (1u)
#define CapSense_SNR_TEST_SENSOR_ID_PARAM_ID                (0x65000217u)

#define CapSense_SNR_TEST_SCAN_COUNTER_VALUE                (CapSense_dsRam.snrTestScanCounter)
#define CapSense_SNR_TEST_SCAN_COUNTER_OFFSET               (536u)
#define CapSense_SNR_TEST_SCAN_COUNTER_SIZE                 (2u)
#define CapSense_SNR_TEST_SCAN_COUNTER_PARAM_ID             (0x8F000218u)

#define CapSense_SNR_TEST_RAW_COUNT0_VALUE                  (CapSense_dsRam.snrTestRawCount[0u])
#define CapSense_SNR_TEST_RAW_COUNT0_OFFSET                 (538u)
#define CapSense_SNR_TEST_RAW_COUNT0_SIZE                   (2u)
#define CapSense_SNR_TEST_RAW_COUNT0_PARAM_ID               (0x8300021Au)

#define CapSense_SCAN_CSD_ISC_VALUE                         (CapSense_dsRam.scanCsdISC)
#define CapSense_SCAN_CSD_ISC_OFFSET                        (540u)
#define CapSense_SCAN_CSD_ISC_SIZE                          (1u)
#define CapSense_SCAN_CSD_ISC_PARAM_ID                      (0x4600021Cu)

#define CapSense_SCAN_CSX_ISC_VALUE                         (CapSense_dsRam.scanCsxISC)
#define CapSense_SCAN_CSX_ISC_OFFSET                        (541u)
#define CapSense_SCAN_CSX_ISC_SIZE                          (1u)
#define CapSense_SCAN_CSX_ISC_PARAM_ID                      (0x4000021Du)

#define CapSense_SCAN_CURRENT_ISC_VALUE                     (CapSense_dsRam.scanCurrentISC)
#define CapSense_SCAN_CURRENT_ISC_OFFSET                    (542u)
#define CapSense_SCAN_CURRENT_ISC_SIZE                      (1u)
#define CapSense_SCAN_CURRENT_ISC_PARAM_ID                  (0x4A00021Eu)


/*****************************************************************************/
/* Flash Data structure register definitions                                 */
/*****************************************************************************/
#define CapSense_TOUCHPAD0_PTR2SNS_FLASH_VALUE              (CapSense_dsFlash.wdgtArray[0].ptr2SnsFlash)
#define CapSense_TOUCHPAD0_PTR2SNS_FLASH_OFFSET             (0u)
#define CapSense_TOUCHPAD0_PTR2SNS_FLASH_SIZE               (4u)
#define CapSense_TOUCHPAD0_PTR2SNS_FLASH_PARAM_ID           (0xD1000000u)

#define CapSense_TOUCHPAD0_PTR2WD_RAM_VALUE                 (CapSense_dsFlash.wdgtArray[0].ptr2WdgtRam)
#define CapSense_TOUCHPAD0_PTR2WD_RAM_OFFSET                (4u)
#define CapSense_TOUCHPAD0_PTR2WD_RAM_SIZE                  (4u)
#define CapSense_TOUCHPAD0_PTR2WD_RAM_PARAM_ID              (0xD0000004u)

#define CapSense_TOUCHPAD0_PTR2SNS_RAM_VALUE                (CapSense_dsFlash.wdgtArray[0].ptr2SnsRam)
#define CapSense_TOUCHPAD0_PTR2SNS_RAM_OFFSET               (8u)
#define CapSense_TOUCHPAD0_PTR2SNS_RAM_SIZE                 (4u)
#define CapSense_TOUCHPAD0_PTR2SNS_RAM_PARAM_ID             (0xD3000008u)

#define CapSense_TOUCHPAD0_PTR2FLTR_HISTORY_VALUE           (CapSense_dsFlash.wdgtArray[0].ptr2FltrHistory)
#define CapSense_TOUCHPAD0_PTR2FLTR_HISTORY_OFFSET          (12u)
#define CapSense_TOUCHPAD0_PTR2FLTR_HISTORY_SIZE            (4u)
#define CapSense_TOUCHPAD0_PTR2FLTR_HISTORY_PARAM_ID        (0xD200000Cu)

#define CapSense_TOUCHPAD0_PTR2DEBOUNCE_VALUE               (CapSense_dsFlash.wdgtArray[0].ptr2DebounceArr)
#define CapSense_TOUCHPAD0_PTR2DEBOUNCE_OFFSET              (16u)
#define CapSense_TOUCHPAD0_PTR2DEBOUNCE_SIZE                (4u)
#define CapSense_TOUCHPAD0_PTR2DEBOUNCE_PARAM_ID            (0xD4000010u)

#define CapSense_TOUCHPAD0_STATIC_CONFIG_VALUE              (CapSense_dsFlash.wdgtArray[0].staticConfig)
#define CapSense_TOUCHPAD0_STATIC_CONFIG_OFFSET             (20u)
#define CapSense_TOUCHPAD0_STATIC_CONFIG_SIZE               (4u)
#define CapSense_TOUCHPAD0_STATIC_CONFIG_PARAM_ID           (0xD5000014u)

#define CapSense_TOUCHPAD0_TOTAL_NUM_SNS_VALUE              (CapSense_dsFlash.wdgtArray[0].totalNumSns)
#define CapSense_TOUCHPAD0_TOTAL_NUM_SNS_OFFSET             (24u)
#define CapSense_TOUCHPAD0_TOTAL_NUM_SNS_SIZE               (2u)
#define CapSense_TOUCHPAD0_TOTAL_NUM_SNS_PARAM_ID           (0x99000018u)

#define CapSense_TOUCHPAD0_TYPE_VALUE                       (CapSense_dsFlash.wdgtArray[0].wdgtType)
#define CapSense_TOUCHPAD0_TYPE_OFFSET                      (26u)
#define CapSense_TOUCHPAD0_TYPE_SIZE                        (1u)
#define CapSense_TOUCHPAD0_TYPE_PARAM_ID                    (0x5D00001Au)

#define CapSense_TOUCHPAD0_SENSE_METHOD_VALUE               (CapSense_dsFlash.wdgtArray[0].senseMethod)
#define CapSense_TOUCHPAD0_SENSE_METHOD_OFFSET              (27u)
#define CapSense_TOUCHPAD0_SENSE_METHOD_SIZE                (1u)
#define CapSense_TOUCHPAD0_SENSE_METHOD_PARAM_ID            (0x5B00001Bu)

#define CapSense_TOUCHPAD0_NUM_COLS_VALUE                   (CapSense_dsFlash.wdgtArray[0].numCols)
#define CapSense_TOUCHPAD0_NUM_COLS_OFFSET                  (28u)
#define CapSense_TOUCHPAD0_NUM_COLS_SIZE                    (1u)
#define CapSense_TOUCHPAD0_NUM_COLS_PARAM_ID                (0x5000001Cu)

#define CapSense_TOUCHPAD0_NUM_ROWS_VALUE                   (CapSense_dsFlash.wdgtArray[0].numRows)
#define CapSense_TOUCHPAD0_NUM_ROWS_OFFSET                  (29u)
#define CapSense_TOUCHPAD0_NUM_ROWS_SIZE                    (1u)
#define CapSense_TOUCHPAD0_NUM_ROWS_PARAM_ID                (0x5600001Du)

#define CapSense_TOUCHPAD0_X_RESOLUTION_VALUE               (CapSense_dsFlash.wdgtArray[0].xResolution)
#define CapSense_TOUCHPAD0_X_RESOLUTION_OFFSET              (30u)
#define CapSense_TOUCHPAD0_X_RESOLUTION_SIZE                (2u)
#define CapSense_TOUCHPAD0_X_RESOLUTION_PARAM_ID            (0x9400001Eu)

#define CapSense_TOUCHPAD0_Y_RESOLUTION_VALUE               (CapSense_dsFlash.wdgtArray[0].yResolution)
#define CapSense_TOUCHPAD0_Y_RESOLUTION_OFFSET              (32u)
#define CapSense_TOUCHPAD0_Y_RESOLUTION_SIZE                (2u)
#define CapSense_TOUCHPAD0_Y_RESOLUTION_PARAM_ID            (0x94000020u)

#define CapSense_TOUCHPAD0_X_CENT_MULT_VALUE                (CapSense_dsFlash.wdgtArray[0].xCentroidMultiplier)
#define CapSense_TOUCHPAD0_X_CENT_MULT_OFFSET               (36u)
#define CapSense_TOUCHPAD0_X_CENT_MULT_SIZE                 (4u)
#define CapSense_TOUCHPAD0_X_CENT_MULT_PARAM_ID             (0xDA000024u)

#define CapSense_TOUCHPAD0_Y_CENT_MULT_VALUE                (CapSense_dsFlash.wdgtArray[0].yCentroidMultiplier)
#define CapSense_TOUCHPAD0_Y_CENT_MULT_OFFSET               (40u)
#define CapSense_TOUCHPAD0_Y_CENT_MULT_SIZE                 (4u)
#define CapSense_TOUCHPAD0_Y_CENT_MULT_PARAM_ID             (0xD9000028u)

#define CapSense_TOUCHPAD0_PTR2NOISE_ENVLP_VALUE            (CapSense_dsFlash.wdgtArray[0].ptr2NoiseEnvlp)
#define CapSense_TOUCHPAD0_PTR2NOISE_ENVLP_OFFSET           (44u)
#define CapSense_TOUCHPAD0_PTR2NOISE_ENVLP_SIZE             (4u)
#define CapSense_TOUCHPAD0_PTR2NOISE_ENVLP_PARAM_ID         (0xD800002Cu)

#define CapSense_TOUCHPAD0_PTR2CSX_TOUCHPAD_VALUE           (CapSense_dsFlash.wdgtArray[0].ptr2CsxTouchpad)
#define CapSense_TOUCHPAD0_PTR2CSX_TOUCHPAD_OFFSET          (48u)
#define CapSense_TOUCHPAD0_PTR2CSX_TOUCHPAD_SIZE            (4u)
#define CapSense_TOUCHPAD0_PTR2CSX_TOUCHPAD_PARAM_ID        (0xDE000030u)

#define CapSense_TOUCHPAD0_IIR_FILTER_COEFF_VALUE           (CapSense_dsFlash.wdgtArray[0].iirFilterCoeff)
#define CapSense_TOUCHPAD0_IIR_FILTER_COEFF_OFFSET          (52u)
#define CapSense_TOUCHPAD0_IIR_FILTER_COEFF_SIZE            (1u)
#define CapSense_TOUCHPAD0_IIR_FILTER_COEFF_PARAM_ID        (0x58000034u)

#define CapSense_MATRIXBUTTONS0_PTR2SNS_FLASH_VALUE         (CapSense_dsFlash.wdgtArray[1].ptr2SnsFlash)
#define CapSense_MATRIXBUTTONS0_PTR2SNS_FLASH_OFFSET        (56u)
#define CapSense_MATRIXBUTTONS0_PTR2SNS_FLASH_SIZE          (4u)
#define CapSense_MATRIXBUTTONS0_PTR2SNS_FLASH_PARAM_ID      (0xDF010038u)

#define CapSense_MATRIXBUTTONS0_PTR2WD_RAM_VALUE            (CapSense_dsFlash.wdgtArray[1].ptr2WdgtRam)
#define CapSense_MATRIXBUTTONS0_PTR2WD_RAM_OFFSET           (60u)
#define CapSense_MATRIXBUTTONS0_PTR2WD_RAM_SIZE             (4u)
#define CapSense_MATRIXBUTTONS0_PTR2WD_RAM_PARAM_ID         (0xDE01003Cu)

#define CapSense_MATRIXBUTTONS0_PTR2SNS_RAM_VALUE           (CapSense_dsFlash.wdgtArray[1].ptr2SnsRam)
#define CapSense_MATRIXBUTTONS0_PTR2SNS_RAM_OFFSET          (64u)
#define CapSense_MATRIXBUTTONS0_PTR2SNS_RAM_SIZE            (4u)
#define CapSense_MATRIXBUTTONS0_PTR2SNS_RAM_PARAM_ID        (0xDF010040u)

#define CapSense_MATRIXBUTTONS0_PTR2FLTR_HISTORY_VALUE      (CapSense_dsFlash.wdgtArray[1].ptr2FltrHistory)
#define CapSense_MATRIXBUTTONS0_PTR2FLTR_HISTORY_OFFSET     (68u)
#define CapSense_MATRIXBUTTONS0_PTR2FLTR_HISTORY_SIZE       (4u)
#define CapSense_MATRIXBUTTONS0_PTR2FLTR_HISTORY_PARAM_ID   (0xDE010044u)

#define CapSense_MATRIXBUTTONS0_PTR2DEBOUNCE_VALUE          (CapSense_dsFlash.wdgtArray[1].ptr2DebounceArr)
#define CapSense_MATRIXBUTTONS0_PTR2DEBOUNCE_OFFSET         (72u)
#define CapSense_MATRIXBUTTONS0_PTR2DEBOUNCE_SIZE           (4u)
#define CapSense_MATRIXBUTTONS0_PTR2DEBOUNCE_PARAM_ID       (0xDD010048u)

#define CapSense_MATRIXBUTTONS0_STATIC_CONFIG_VALUE         (CapSense_dsFlash.wdgtArray[1].staticConfig)
#define CapSense_MATRIXBUTTONS0_STATIC_CONFIG_OFFSET        (76u)
#define CapSense_MATRIXBUTTONS0_STATIC_CONFIG_SIZE          (4u)
#define CapSense_MATRIXBUTTONS0_STATIC_CONFIG_PARAM_ID      (0xDC01004Cu)

#define CapSense_MATRIXBUTTONS0_TOTAL_NUM_SNS_VALUE         (CapSense_dsFlash.wdgtArray[1].totalNumSns)
#define CapSense_MATRIXBUTTONS0_TOTAL_NUM_SNS_OFFSET        (80u)
#define CapSense_MATRIXBUTTONS0_TOTAL_NUM_SNS_SIZE          (2u)
#define CapSense_MATRIXBUTTONS0_TOTAL_NUM_SNS_PARAM_ID      (0x95010050u)

#define CapSense_MATRIXBUTTONS0_TYPE_VALUE                  (CapSense_dsFlash.wdgtArray[1].wdgtType)
#define CapSense_MATRIXBUTTONS0_TYPE_OFFSET                 (82u)
#define CapSense_MATRIXBUTTONS0_TYPE_SIZE                   (1u)
#define CapSense_MATRIXBUTTONS0_TYPE_PARAM_ID               (0x51010052u)

#define CapSense_MATRIXBUTTONS0_SENSE_METHOD_VALUE          (CapSense_dsFlash.wdgtArray[1].senseMethod)
#define CapSense_MATRIXBUTTONS0_SENSE_METHOD_OFFSET         (83u)
#define CapSense_MATRIXBUTTONS0_SENSE_METHOD_SIZE           (1u)
#define CapSense_MATRIXBUTTONS0_SENSE_METHOD_PARAM_ID       (0x57010053u)

#define CapSense_MATRIXBUTTONS0_NUM_COLS_VALUE              (CapSense_dsFlash.wdgtArray[1].numCols)
#define CapSense_MATRIXBUTTONS0_NUM_COLS_OFFSET             (84u)
#define CapSense_MATRIXBUTTONS0_NUM_COLS_SIZE               (1u)
#define CapSense_MATRIXBUTTONS0_NUM_COLS_PARAM_ID           (0x5C010054u)

#define CapSense_MATRIXBUTTONS0_NUM_ROWS_VALUE              (CapSense_dsFlash.wdgtArray[1].numRows)
#define CapSense_MATRIXBUTTONS0_NUM_ROWS_OFFSET             (85u)
#define CapSense_MATRIXBUTTONS0_NUM_ROWS_SIZE               (1u)
#define CapSense_MATRIXBUTTONS0_NUM_ROWS_PARAM_ID           (0x5A010055u)

#define CapSense_MATRIXBUTTONS0_X_RESOLUTION_VALUE          (CapSense_dsFlash.wdgtArray[1].xResolution)
#define CapSense_MATRIXBUTTONS0_X_RESOLUTION_OFFSET         (86u)
#define CapSense_MATRIXBUTTONS0_X_RESOLUTION_SIZE           (2u)
#define CapSense_MATRIXBUTTONS0_X_RESOLUTION_PARAM_ID       (0x98010056u)

#define CapSense_MATRIXBUTTONS0_Y_RESOLUTION_VALUE          (CapSense_dsFlash.wdgtArray[1].yResolution)
#define CapSense_MATRIXBUTTONS0_Y_RESOLUTION_OFFSET         (88u)
#define CapSense_MATRIXBUTTONS0_Y_RESOLUTION_SIZE           (2u)
#define CapSense_MATRIXBUTTONS0_Y_RESOLUTION_PARAM_ID       (0x97010058u)

#define CapSense_MATRIXBUTTONS0_X_CENT_MULT_VALUE           (CapSense_dsFlash.wdgtArray[1].xCentroidMultiplier)
#define CapSense_MATRIXBUTTONS0_X_CENT_MULT_OFFSET          (92u)
#define CapSense_MATRIXBUTTONS0_X_CENT_MULT_SIZE            (4u)
#define CapSense_MATRIXBUTTONS0_X_CENT_MULT_PARAM_ID        (0xD901005Cu)

#define CapSense_MATRIXBUTTONS0_Y_CENT_MULT_VALUE           (CapSense_dsFlash.wdgtArray[1].yCentroidMultiplier)
#define CapSense_MATRIXBUTTONS0_Y_CENT_MULT_OFFSET          (96u)
#define CapSense_MATRIXBUTTONS0_Y_CENT_MULT_SIZE            (4u)
#define CapSense_MATRIXBUTTONS0_Y_CENT_MULT_PARAM_ID        (0xD5010060u)

#define CapSense_MATRIXBUTTONS0_PTR2NOISE_ENVLP_VALUE       (CapSense_dsFlash.wdgtArray[1].ptr2NoiseEnvlp)
#define CapSense_MATRIXBUTTONS0_PTR2NOISE_ENVLP_OFFSET      (100u)
#define CapSense_MATRIXBUTTONS0_PTR2NOISE_ENVLP_SIZE        (4u)
#define CapSense_MATRIXBUTTONS0_PTR2NOISE_ENVLP_PARAM_ID    (0xD4010064u)

#define CapSense_MATRIXBUTTONS0_PTR2CSX_TOUCHPAD_VALUE      (CapSense_dsFlash.wdgtArray[1].ptr2CsxTouchpad)
#define CapSense_MATRIXBUTTONS0_PTR2CSX_TOUCHPAD_OFFSET     (104u)
#define CapSense_MATRIXBUTTONS0_PTR2CSX_TOUCHPAD_SIZE       (4u)
#define CapSense_MATRIXBUTTONS0_PTR2CSX_TOUCHPAD_PARAM_ID   (0xD7010068u)

#define CapSense_MATRIXBUTTONS0_IIR_FILTER_COEFF_VALUE      (CapSense_dsFlash.wdgtArray[1].iirFilterCoeff)
#define CapSense_MATRIXBUTTONS0_IIR_FILTER_COEFF_OFFSET     (108u)
#define CapSense_MATRIXBUTTONS0_IIR_FILTER_COEFF_SIZE       (1u)
#define CapSense_MATRIXBUTTONS0_IIR_FILTER_COEFF_PARAM_ID   (0x5101006Cu)

#define CapSense_BUTTON0_PTR2SNS_FLASH_VALUE                (CapSense_dsFlash.wdgtArray[2].ptr2SnsFlash)
#define CapSense_BUTTON0_PTR2SNS_FLASH_OFFSET               (112u)
#define CapSense_BUTTON0_PTR2SNS_FLASH_SIZE                 (4u)
#define CapSense_BUTTON0_PTR2SNS_FLASH_PARAM_ID             (0xD5020070u)

#define CapSense_BUTTON0_PTR2WD_RAM_VALUE                   (CapSense_dsFlash.wdgtArray[2].ptr2WdgtRam)
#define CapSense_BUTTON0_PTR2WD_RAM_OFFSET                  (116u)
#define CapSense_BUTTON0_PTR2WD_RAM_SIZE                    (4u)
#define CapSense_BUTTON0_PTR2WD_RAM_PARAM_ID                (0xD4020074u)

#define CapSense_BUTTON0_PTR2SNS_RAM_VALUE                  (CapSense_dsFlash.wdgtArray[2].ptr2SnsRam)
#define CapSense_BUTTON0_PTR2SNS_RAM_OFFSET                 (120u)
#define CapSense_BUTTON0_PTR2SNS_RAM_SIZE                   (4u)
#define CapSense_BUTTON0_PTR2SNS_RAM_PARAM_ID               (0xD7020078u)

#define CapSense_BUTTON0_PTR2FLTR_HISTORY_VALUE             (CapSense_dsFlash.wdgtArray[2].ptr2FltrHistory)
#define CapSense_BUTTON0_PTR2FLTR_HISTORY_OFFSET            (124u)
#define CapSense_BUTTON0_PTR2FLTR_HISTORY_SIZE              (4u)
#define CapSense_BUTTON0_PTR2FLTR_HISTORY_PARAM_ID          (0xD602007Cu)

#define CapSense_BUTTON0_PTR2DEBOUNCE_VALUE                 (CapSense_dsFlash.wdgtArray[2].ptr2DebounceArr)
#define CapSense_BUTTON0_PTR2DEBOUNCE_OFFSET                (128u)
#define CapSense_BUTTON0_PTR2DEBOUNCE_SIZE                  (4u)
#define CapSense_BUTTON0_PTR2DEBOUNCE_PARAM_ID              (0xD4020080u)

#define CapSense_BUTTON0_STATIC_CONFIG_VALUE                (CapSense_dsFlash.wdgtArray[2].staticConfig)
#define CapSense_BUTTON0_STATIC_CONFIG_OFFSET               (132u)
#define CapSense_BUTTON0_STATIC_CONFIG_SIZE                 (4u)
#define CapSense_BUTTON0_STATIC_CONFIG_PARAM_ID             (0xD5020084u)

#define CapSense_BUTTON0_TOTAL_NUM_SNS_VALUE                (CapSense_dsFlash.wdgtArray[2].totalNumSns)
#define CapSense_BUTTON0_TOTAL_NUM_SNS_OFFSET               (136u)
#define CapSense_BUTTON0_TOTAL_NUM_SNS_SIZE                 (2u)
#define CapSense_BUTTON0_TOTAL_NUM_SNS_PARAM_ID             (0x99020088u)

#define CapSense_BUTTON0_TYPE_VALUE                         (CapSense_dsFlash.wdgtArray[2].wdgtType)
#define CapSense_BUTTON0_TYPE_OFFSET                        (138u)
#define CapSense_BUTTON0_TYPE_SIZE                          (1u)
#define CapSense_BUTTON0_TYPE_PARAM_ID                      (0x5D02008Au)

#define CapSense_BUTTON0_SENSE_METHOD_VALUE                 (CapSense_dsFlash.wdgtArray[2].senseMethod)
#define CapSense_BUTTON0_SENSE_METHOD_OFFSET                (139u)
#define CapSense_BUTTON0_SENSE_METHOD_SIZE                  (1u)
#define CapSense_BUTTON0_SENSE_METHOD_PARAM_ID              (0x5B02008Bu)

#define CapSense_BUTTON0_NUM_COLS_VALUE                     (CapSense_dsFlash.wdgtArray[2].numCols)
#define CapSense_BUTTON0_NUM_COLS_OFFSET                    (140u)
#define CapSense_BUTTON0_NUM_COLS_SIZE                      (1u)
#define CapSense_BUTTON0_NUM_COLS_PARAM_ID                  (0x5002008Cu)

#define CapSense_BUTTON0_NUM_ROWS_VALUE                     (CapSense_dsFlash.wdgtArray[2].numRows)
#define CapSense_BUTTON0_NUM_ROWS_OFFSET                    (141u)
#define CapSense_BUTTON0_NUM_ROWS_SIZE                      (1u)
#define CapSense_BUTTON0_NUM_ROWS_PARAM_ID                  (0x5602008Du)

#define CapSense_BUTTON0_X_RESOLUTION_VALUE                 (CapSense_dsFlash.wdgtArray[2].xResolution)
#define CapSense_BUTTON0_X_RESOLUTION_OFFSET                (142u)
#define CapSense_BUTTON0_X_RESOLUTION_SIZE                  (2u)
#define CapSense_BUTTON0_X_RESOLUTION_PARAM_ID              (0x9402008Eu)

#define CapSense_BUTTON0_Y_RESOLUTION_VALUE                 (CapSense_dsFlash.wdgtArray[2].yResolution)
#define CapSense_BUTTON0_Y_RESOLUTION_OFFSET                (144u)
#define CapSense_BUTTON0_Y_RESOLUTION_SIZE                  (2u)
#define CapSense_BUTTON0_Y_RESOLUTION_PARAM_ID              (0x9E020090u)

#define CapSense_BUTTON0_X_CENT_MULT_VALUE                  (CapSense_dsFlash.wdgtArray[2].xCentroidMultiplier)
#define CapSense_BUTTON0_X_CENT_MULT_OFFSET                 (148u)
#define CapSense_BUTTON0_X_CENT_MULT_SIZE                   (4u)
#define CapSense_BUTTON0_X_CENT_MULT_PARAM_ID               (0xD0020094u)

#define CapSense_BUTTON0_Y_CENT_MULT_VALUE                  (CapSense_dsFlash.wdgtArray[2].yCentroidMultiplier)
#define CapSense_BUTTON0_Y_CENT_MULT_OFFSET                 (152u)
#define CapSense_BUTTON0_Y_CENT_MULT_SIZE                   (4u)
#define CapSense_BUTTON0_Y_CENT_MULT_PARAM_ID               (0xD3020098u)

#define CapSense_BUTTON0_PTR2NOISE_ENVLP_VALUE              (CapSense_dsFlash.wdgtArray[2].ptr2NoiseEnvlp)
#define CapSense_BUTTON0_PTR2NOISE_ENVLP_OFFSET             (156u)
#define CapSense_BUTTON0_PTR2NOISE_ENVLP_SIZE               (4u)
#define CapSense_BUTTON0_PTR2NOISE_ENVLP_PARAM_ID           (0xD202009Cu)

#define CapSense_BUTTON0_PTR2CSX_TOUCHPAD_VALUE             (CapSense_dsFlash.wdgtArray[2].ptr2CsxTouchpad)
#define CapSense_BUTTON0_PTR2CSX_TOUCHPAD_OFFSET            (160u)
#define CapSense_BUTTON0_PTR2CSX_TOUCHPAD_SIZE              (4u)
#define CapSense_BUTTON0_PTR2CSX_TOUCHPAD_PARAM_ID          (0xDE0200A0u)

#define CapSense_BUTTON0_IIR_FILTER_COEFF_VALUE             (CapSense_dsFlash.wdgtArray[2].iirFilterCoeff)
#define CapSense_BUTTON0_IIR_FILTER_COEFF_OFFSET            (164u)
#define CapSense_BUTTON0_IIR_FILTER_COEFF_SIZE              (1u)
#define CapSense_BUTTON0_IIR_FILTER_COEFF_PARAM_ID          (0x580200A4u)


#endif /* End CY_SENSE_CapSense_REGISTER_MAP_H */


/* [] END OF FILE */
