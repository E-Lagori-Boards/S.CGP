/*******************************************************************************
* File Name: PWM6.h
* Version 2.10
*
* Description:
*  This file provides constants and parameter values for the PWM6
*  component.
*
* Note:
*  None
*
********************************************************************************
* Copyright 2013-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_TCPWM_PWM6_H)
#define CY_TCPWM_PWM6_H


#include "CyLib.h"
#include "cytypes.h"
#include "cyfitter.h"


/*******************************************************************************
* Internal Type defines
*******************************************************************************/

/* Structure to save state before go to sleep */
typedef struct
{
    uint8  enableState;
} PWM6_BACKUP_STRUCT;


/*******************************************************************************
* Variables
*******************************************************************************/
extern uint8  PWM6_initVar;


/***************************************
*   Conditional Compilation Parameters
****************************************/

#define PWM6_CY_TCPWM_V2                    (CYIPBLOCK_m0s8tcpwm_VERSION == 2u)
#define PWM6_CY_TCPWM_4000                  (CY_PSOC4_4000)

/* TCPWM Configuration */
#define PWM6_CONFIG                         (7lu)

/* Quad Mode */
/* Parameters */
#define PWM6_QUAD_ENCODING_MODES            (0lu)
#define PWM6_QUAD_AUTO_START                (1lu)

/* Signal modes */
#define PWM6_QUAD_INDEX_SIGNAL_MODE         (0lu)
#define PWM6_QUAD_PHIA_SIGNAL_MODE          (3lu)
#define PWM6_QUAD_PHIB_SIGNAL_MODE          (3lu)
#define PWM6_QUAD_STOP_SIGNAL_MODE          (0lu)

/* Signal present */
#define PWM6_QUAD_INDEX_SIGNAL_PRESENT      (0lu)
#define PWM6_QUAD_STOP_SIGNAL_PRESENT       (0lu)

/* Interrupt Mask */
#define PWM6_QUAD_INTERRUPT_MASK            (1lu)

/* Timer/Counter Mode */
/* Parameters */
#define PWM6_TC_RUN_MODE                    (0lu)
#define PWM6_TC_COUNTER_MODE                (0lu)
#define PWM6_TC_COMP_CAP_MODE               (2lu)
#define PWM6_TC_PRESCALER                   (0lu)

/* Signal modes */
#define PWM6_TC_RELOAD_SIGNAL_MODE          (0lu)
#define PWM6_TC_COUNT_SIGNAL_MODE           (3lu)
#define PWM6_TC_START_SIGNAL_MODE           (0lu)
#define PWM6_TC_STOP_SIGNAL_MODE            (0lu)
#define PWM6_TC_CAPTURE_SIGNAL_MODE         (0lu)

/* Signal present */
#define PWM6_TC_RELOAD_SIGNAL_PRESENT       (0lu)
#define PWM6_TC_COUNT_SIGNAL_PRESENT        (0lu)
#define PWM6_TC_START_SIGNAL_PRESENT        (0lu)
#define PWM6_TC_STOP_SIGNAL_PRESENT         (0lu)
#define PWM6_TC_CAPTURE_SIGNAL_PRESENT      (0lu)

/* Interrupt Mask */
#define PWM6_TC_INTERRUPT_MASK              (1lu)

/* PWM Mode */
/* Parameters */
#define PWM6_PWM_KILL_EVENT                 (0lu)
#define PWM6_PWM_STOP_EVENT                 (0lu)
#define PWM6_PWM_MODE                       (4lu)
#define PWM6_PWM_OUT_N_INVERT               (0lu)
#define PWM6_PWM_OUT_INVERT                 (0lu)
#define PWM6_PWM_ALIGN                      (0lu)
#define PWM6_PWM_RUN_MODE                   (0lu)
#define PWM6_PWM_DEAD_TIME_CYCLE            (0lu)
#define PWM6_PWM_PRESCALER                  (0lu)

/* Signal modes */
#define PWM6_PWM_RELOAD_SIGNAL_MODE         (0lu)
#define PWM6_PWM_COUNT_SIGNAL_MODE          (3lu)
#define PWM6_PWM_START_SIGNAL_MODE          (0lu)
#define PWM6_PWM_STOP_SIGNAL_MODE           (0lu)
#define PWM6_PWM_SWITCH_SIGNAL_MODE         (0lu)

/* Signal present */
#define PWM6_PWM_RELOAD_SIGNAL_PRESENT      (0lu)
#define PWM6_PWM_COUNT_SIGNAL_PRESENT       (0lu)
#define PWM6_PWM_START_SIGNAL_PRESENT       (0lu)
#define PWM6_PWM_STOP_SIGNAL_PRESENT        (0lu)
#define PWM6_PWM_SWITCH_SIGNAL_PRESENT      (0lu)

/* Interrupt Mask */
#define PWM6_PWM_INTERRUPT_MASK             (1lu)


/***************************************
*    Initial Parameter Constants
***************************************/

/* Timer/Counter Mode */
#define PWM6_TC_PERIOD_VALUE                (65535lu)
#define PWM6_TC_COMPARE_VALUE               (65535lu)
#define PWM6_TC_COMPARE_BUF_VALUE           (65535lu)
#define PWM6_TC_COMPARE_SWAP                (0lu)

/* PWM Mode */
#define PWM6_PWM_PERIOD_VALUE               (65535lu)
#define PWM6_PWM_PERIOD_BUF_VALUE           (65535lu)
#define PWM6_PWM_PERIOD_SWAP                (0lu)
#define PWM6_PWM_COMPARE_VALUE              (65535lu)
#define PWM6_PWM_COMPARE_BUF_VALUE          (65535lu)
#define PWM6_PWM_COMPARE_SWAP               (0lu)


/***************************************
*    Enumerated Types and Parameters
***************************************/

#define PWM6__LEFT 0
#define PWM6__RIGHT 1
#define PWM6__CENTER 2
#define PWM6__ASYMMETRIC 3

#define PWM6__X1 0
#define PWM6__X2 1
#define PWM6__X4 2

#define PWM6__PWM 4
#define PWM6__PWM_DT 5
#define PWM6__PWM_PR 6

#define PWM6__INVERSE 1
#define PWM6__DIRECT 0

#define PWM6__CAPTURE 2
#define PWM6__COMPARE 0

#define PWM6__TRIG_LEVEL 3
#define PWM6__TRIG_RISING 0
#define PWM6__TRIG_FALLING 1
#define PWM6__TRIG_BOTH 2

#define PWM6__INTR_MASK_TC 1
#define PWM6__INTR_MASK_CC_MATCH 2
#define PWM6__INTR_MASK_NONE 0
#define PWM6__INTR_MASK_TC_CC 3

#define PWM6__UNCONFIG 8
#define PWM6__TIMER 1
#define PWM6__QUAD 3
#define PWM6__PWM_SEL 7

#define PWM6__COUNT_UP 0
#define PWM6__COUNT_DOWN 1
#define PWM6__COUNT_UPDOWN0 2
#define PWM6__COUNT_UPDOWN1 3


/* Prescaler */
#define PWM6_PRESCALE_DIVBY1                ((uint32)(0u << PWM6_PRESCALER_SHIFT))
#define PWM6_PRESCALE_DIVBY2                ((uint32)(1u << PWM6_PRESCALER_SHIFT))
#define PWM6_PRESCALE_DIVBY4                ((uint32)(2u << PWM6_PRESCALER_SHIFT))
#define PWM6_PRESCALE_DIVBY8                ((uint32)(3u << PWM6_PRESCALER_SHIFT))
#define PWM6_PRESCALE_DIVBY16               ((uint32)(4u << PWM6_PRESCALER_SHIFT))
#define PWM6_PRESCALE_DIVBY32               ((uint32)(5u << PWM6_PRESCALER_SHIFT))
#define PWM6_PRESCALE_DIVBY64               ((uint32)(6u << PWM6_PRESCALER_SHIFT))
#define PWM6_PRESCALE_DIVBY128              ((uint32)(7u << PWM6_PRESCALER_SHIFT))

/* TCPWM set modes */
#define PWM6_MODE_TIMER_COMPARE             ((uint32)(PWM6__COMPARE         <<  \
                                                                  PWM6_MODE_SHIFT))
#define PWM6_MODE_TIMER_CAPTURE             ((uint32)(PWM6__CAPTURE         <<  \
                                                                  PWM6_MODE_SHIFT))
#define PWM6_MODE_QUAD                      ((uint32)(PWM6__QUAD            <<  \
                                                                  PWM6_MODE_SHIFT))
#define PWM6_MODE_PWM                       ((uint32)(PWM6__PWM             <<  \
                                                                  PWM6_MODE_SHIFT))
#define PWM6_MODE_PWM_DT                    ((uint32)(PWM6__PWM_DT          <<  \
                                                                  PWM6_MODE_SHIFT))
#define PWM6_MODE_PWM_PR                    ((uint32)(PWM6__PWM_PR          <<  \
                                                                  PWM6_MODE_SHIFT))

/* Quad Modes */
#define PWM6_MODE_X1                        ((uint32)(PWM6__X1              <<  \
                                                                  PWM6_QUAD_MODE_SHIFT))
#define PWM6_MODE_X2                        ((uint32)(PWM6__X2              <<  \
                                                                  PWM6_QUAD_MODE_SHIFT))
#define PWM6_MODE_X4                        ((uint32)(PWM6__X4              <<  \
                                                                  PWM6_QUAD_MODE_SHIFT))

/* Counter modes */
#define PWM6_COUNT_UP                       ((uint32)(PWM6__COUNT_UP        <<  \
                                                                  PWM6_UPDOWN_SHIFT))
#define PWM6_COUNT_DOWN                     ((uint32)(PWM6__COUNT_DOWN      <<  \
                                                                  PWM6_UPDOWN_SHIFT))
#define PWM6_COUNT_UPDOWN0                  ((uint32)(PWM6__COUNT_UPDOWN0   <<  \
                                                                  PWM6_UPDOWN_SHIFT))
#define PWM6_COUNT_UPDOWN1                  ((uint32)(PWM6__COUNT_UPDOWN1   <<  \
                                                                  PWM6_UPDOWN_SHIFT))

/* PWM output invert */
#define PWM6_INVERT_LINE                    ((uint32)(PWM6__INVERSE         <<  \
                                                                  PWM6_INV_OUT_SHIFT))
#define PWM6_INVERT_LINE_N                  ((uint32)(PWM6__INVERSE         <<  \
                                                                  PWM6_INV_COMPL_OUT_SHIFT))

/* Trigger modes */
#define PWM6_TRIG_RISING                    ((uint32)PWM6__TRIG_RISING)
#define PWM6_TRIG_FALLING                   ((uint32)PWM6__TRIG_FALLING)
#define PWM6_TRIG_BOTH                      ((uint32)PWM6__TRIG_BOTH)
#define PWM6_TRIG_LEVEL                     ((uint32)PWM6__TRIG_LEVEL)

/* Interrupt mask */
#define PWM6_INTR_MASK_TC                   ((uint32)PWM6__INTR_MASK_TC)
#define PWM6_INTR_MASK_CC_MATCH             ((uint32)PWM6__INTR_MASK_CC_MATCH)

/* PWM Output Controls */
#define PWM6_CC_MATCH_SET                   (0x00u)
#define PWM6_CC_MATCH_CLEAR                 (0x01u)
#define PWM6_CC_MATCH_INVERT                (0x02u)
#define PWM6_CC_MATCH_NO_CHANGE             (0x03u)
#define PWM6_OVERLOW_SET                    (0x00u)
#define PWM6_OVERLOW_CLEAR                  (0x04u)
#define PWM6_OVERLOW_INVERT                 (0x08u)
#define PWM6_OVERLOW_NO_CHANGE              (0x0Cu)
#define PWM6_UNDERFLOW_SET                  (0x00u)
#define PWM6_UNDERFLOW_CLEAR                (0x10u)
#define PWM6_UNDERFLOW_INVERT               (0x20u)
#define PWM6_UNDERFLOW_NO_CHANGE            (0x30u)

/* PWM Align */
#define PWM6_PWM_MODE_LEFT                  (PWM6_CC_MATCH_CLEAR        |   \
                                                         PWM6_OVERLOW_SET           |   \
                                                         PWM6_UNDERFLOW_NO_CHANGE)
#define PWM6_PWM_MODE_RIGHT                 (PWM6_CC_MATCH_SET          |   \
                                                         PWM6_OVERLOW_NO_CHANGE     |   \
                                                         PWM6_UNDERFLOW_CLEAR)
#define PWM6_PWM_MODE_ASYM                  (PWM6_CC_MATCH_INVERT       |   \
                                                         PWM6_OVERLOW_SET           |   \
                                                         PWM6_UNDERFLOW_CLEAR)

#if (PWM6_CY_TCPWM_V2)
    #if(PWM6_CY_TCPWM_4000)
        #define PWM6_PWM_MODE_CENTER                (PWM6_CC_MATCH_INVERT       |   \
                                                                 PWM6_OVERLOW_NO_CHANGE     |   \
                                                                 PWM6_UNDERFLOW_CLEAR)
    #else
        #define PWM6_PWM_MODE_CENTER                (PWM6_CC_MATCH_INVERT       |   \
                                                                 PWM6_OVERLOW_SET           |   \
                                                                 PWM6_UNDERFLOW_CLEAR)
    #endif /* (PWM6_CY_TCPWM_4000) */
#else
    #define PWM6_PWM_MODE_CENTER                (PWM6_CC_MATCH_INVERT       |   \
                                                             PWM6_OVERLOW_NO_CHANGE     |   \
                                                             PWM6_UNDERFLOW_CLEAR)
#endif /* (PWM6_CY_TCPWM_NEW) */

/* Command operations without condition */
#define PWM6_CMD_CAPTURE                    (0u)
#define PWM6_CMD_RELOAD                     (8u)
#define PWM6_CMD_STOP                       (16u)
#define PWM6_CMD_START                      (24u)

/* Status */
#define PWM6_STATUS_DOWN                    (1u)
#define PWM6_STATUS_RUNNING                 (2u)


/***************************************
*        Function Prototypes
****************************************/

void   PWM6_Init(void);
void   PWM6_Enable(void);
void   PWM6_Start(void);
void   PWM6_Stop(void);

void   PWM6_SetMode(uint32 mode);
void   PWM6_SetCounterMode(uint32 counterMode);
void   PWM6_SetPWMMode(uint32 modeMask);
void   PWM6_SetQDMode(uint32 qdMode);

void   PWM6_SetPrescaler(uint32 prescaler);
void   PWM6_TriggerCommand(uint32 mask, uint32 command);
void   PWM6_SetOneShot(uint32 oneShotEnable);
uint32 PWM6_ReadStatus(void);

void   PWM6_SetPWMSyncKill(uint32 syncKillEnable);
void   PWM6_SetPWMStopOnKill(uint32 stopOnKillEnable);
void   PWM6_SetPWMDeadTime(uint32 deadTime);
void   PWM6_SetPWMInvert(uint32 mask);

void   PWM6_SetInterruptMode(uint32 interruptMask);
uint32 PWM6_GetInterruptSourceMasked(void);
uint32 PWM6_GetInterruptSource(void);
void   PWM6_ClearInterrupt(uint32 interruptMask);
void   PWM6_SetInterrupt(uint32 interruptMask);

void   PWM6_WriteCounter(uint32 count);
uint32 PWM6_ReadCounter(void);

uint32 PWM6_ReadCapture(void);
uint32 PWM6_ReadCaptureBuf(void);

void   PWM6_WritePeriod(uint32 period);
uint32 PWM6_ReadPeriod(void);
void   PWM6_WritePeriodBuf(uint32 periodBuf);
uint32 PWM6_ReadPeriodBuf(void);

void   PWM6_WriteCompare(uint32 compare);
uint32 PWM6_ReadCompare(void);
void   PWM6_WriteCompareBuf(uint32 compareBuf);
uint32 PWM6_ReadCompareBuf(void);

void   PWM6_SetPeriodSwap(uint32 swapEnable);
void   PWM6_SetCompareSwap(uint32 swapEnable);

void   PWM6_SetCaptureMode(uint32 triggerMode);
void   PWM6_SetReloadMode(uint32 triggerMode);
void   PWM6_SetStartMode(uint32 triggerMode);
void   PWM6_SetStopMode(uint32 triggerMode);
void   PWM6_SetCountMode(uint32 triggerMode);

void   PWM6_SaveConfig(void);
void   PWM6_RestoreConfig(void);
void   PWM6_Sleep(void);
void   PWM6_Wakeup(void);


/***************************************
*             Registers
***************************************/

#define PWM6_BLOCK_CONTROL_REG              (*(reg32 *) PWM6_cy_m0s8_tcpwm_1__TCPWM_CTRL )
#define PWM6_BLOCK_CONTROL_PTR              ( (reg32 *) PWM6_cy_m0s8_tcpwm_1__TCPWM_CTRL )
#define PWM6_COMMAND_REG                    (*(reg32 *) PWM6_cy_m0s8_tcpwm_1__TCPWM_CMD )
#define PWM6_COMMAND_PTR                    ( (reg32 *) PWM6_cy_m0s8_tcpwm_1__TCPWM_CMD )
#define PWM6_INTRRUPT_CAUSE_REG             (*(reg32 *) PWM6_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE )
#define PWM6_INTRRUPT_CAUSE_PTR             ( (reg32 *) PWM6_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE )
#define PWM6_CONTROL_REG                    (*(reg32 *) PWM6_cy_m0s8_tcpwm_1__CTRL )
#define PWM6_CONTROL_PTR                    ( (reg32 *) PWM6_cy_m0s8_tcpwm_1__CTRL )
#define PWM6_STATUS_REG                     (*(reg32 *) PWM6_cy_m0s8_tcpwm_1__STATUS )
#define PWM6_STATUS_PTR                     ( (reg32 *) PWM6_cy_m0s8_tcpwm_1__STATUS )
#define PWM6_COUNTER_REG                    (*(reg32 *) PWM6_cy_m0s8_tcpwm_1__COUNTER )
#define PWM6_COUNTER_PTR                    ( (reg32 *) PWM6_cy_m0s8_tcpwm_1__COUNTER )
#define PWM6_COMP_CAP_REG                   (*(reg32 *) PWM6_cy_m0s8_tcpwm_1__CC )
#define PWM6_COMP_CAP_PTR                   ( (reg32 *) PWM6_cy_m0s8_tcpwm_1__CC )
#define PWM6_COMP_CAP_BUF_REG               (*(reg32 *) PWM6_cy_m0s8_tcpwm_1__CC_BUFF )
#define PWM6_COMP_CAP_BUF_PTR               ( (reg32 *) PWM6_cy_m0s8_tcpwm_1__CC_BUFF )
#define PWM6_PERIOD_REG                     (*(reg32 *) PWM6_cy_m0s8_tcpwm_1__PERIOD )
#define PWM6_PERIOD_PTR                     ( (reg32 *) PWM6_cy_m0s8_tcpwm_1__PERIOD )
#define PWM6_PERIOD_BUF_REG                 (*(reg32 *) PWM6_cy_m0s8_tcpwm_1__PERIOD_BUFF )
#define PWM6_PERIOD_BUF_PTR                 ( (reg32 *) PWM6_cy_m0s8_tcpwm_1__PERIOD_BUFF )
#define PWM6_TRIG_CONTROL0_REG              (*(reg32 *) PWM6_cy_m0s8_tcpwm_1__TR_CTRL0 )
#define PWM6_TRIG_CONTROL0_PTR              ( (reg32 *) PWM6_cy_m0s8_tcpwm_1__TR_CTRL0 )
#define PWM6_TRIG_CONTROL1_REG              (*(reg32 *) PWM6_cy_m0s8_tcpwm_1__TR_CTRL1 )
#define PWM6_TRIG_CONTROL1_PTR              ( (reg32 *) PWM6_cy_m0s8_tcpwm_1__TR_CTRL1 )
#define PWM6_TRIG_CONTROL2_REG              (*(reg32 *) PWM6_cy_m0s8_tcpwm_1__TR_CTRL2 )
#define PWM6_TRIG_CONTROL2_PTR              ( (reg32 *) PWM6_cy_m0s8_tcpwm_1__TR_CTRL2 )
#define PWM6_INTERRUPT_REQ_REG              (*(reg32 *) PWM6_cy_m0s8_tcpwm_1__INTR )
#define PWM6_INTERRUPT_REQ_PTR              ( (reg32 *) PWM6_cy_m0s8_tcpwm_1__INTR )
#define PWM6_INTERRUPT_SET_REG              (*(reg32 *) PWM6_cy_m0s8_tcpwm_1__INTR_SET )
#define PWM6_INTERRUPT_SET_PTR              ( (reg32 *) PWM6_cy_m0s8_tcpwm_1__INTR_SET )
#define PWM6_INTERRUPT_MASK_REG             (*(reg32 *) PWM6_cy_m0s8_tcpwm_1__INTR_MASK )
#define PWM6_INTERRUPT_MASK_PTR             ( (reg32 *) PWM6_cy_m0s8_tcpwm_1__INTR_MASK )
#define PWM6_INTERRUPT_MASKED_REG           (*(reg32 *) PWM6_cy_m0s8_tcpwm_1__INTR_MASKED )
#define PWM6_INTERRUPT_MASKED_PTR           ( (reg32 *) PWM6_cy_m0s8_tcpwm_1__INTR_MASKED )


/***************************************
*       Registers Constants
***************************************/

/* Mask */
#define PWM6_MASK                           ((uint32)PWM6_cy_m0s8_tcpwm_1__TCPWM_CTRL_MASK)

/* Shift constants for control register */
#define PWM6_RELOAD_CC_SHIFT                (0u)
#define PWM6_RELOAD_PERIOD_SHIFT            (1u)
#define PWM6_PWM_SYNC_KILL_SHIFT            (2u)
#define PWM6_PWM_STOP_KILL_SHIFT            (3u)
#define PWM6_PRESCALER_SHIFT                (8u)
#define PWM6_UPDOWN_SHIFT                   (16u)
#define PWM6_ONESHOT_SHIFT                  (18u)
#define PWM6_QUAD_MODE_SHIFT                (20u)
#define PWM6_INV_OUT_SHIFT                  (20u)
#define PWM6_INV_COMPL_OUT_SHIFT            (21u)
#define PWM6_MODE_SHIFT                     (24u)

/* Mask constants for control register */
#define PWM6_RELOAD_CC_MASK                 ((uint32)(PWM6_1BIT_MASK        <<  \
                                                                            PWM6_RELOAD_CC_SHIFT))
#define PWM6_RELOAD_PERIOD_MASK             ((uint32)(PWM6_1BIT_MASK        <<  \
                                                                            PWM6_RELOAD_PERIOD_SHIFT))
#define PWM6_PWM_SYNC_KILL_MASK             ((uint32)(PWM6_1BIT_MASK        <<  \
                                                                            PWM6_PWM_SYNC_KILL_SHIFT))
#define PWM6_PWM_STOP_KILL_MASK             ((uint32)(PWM6_1BIT_MASK        <<  \
                                                                            PWM6_PWM_STOP_KILL_SHIFT))
#define PWM6_PRESCALER_MASK                 ((uint32)(PWM6_8BIT_MASK        <<  \
                                                                            PWM6_PRESCALER_SHIFT))
#define PWM6_UPDOWN_MASK                    ((uint32)(PWM6_2BIT_MASK        <<  \
                                                                            PWM6_UPDOWN_SHIFT))
#define PWM6_ONESHOT_MASK                   ((uint32)(PWM6_1BIT_MASK        <<  \
                                                                            PWM6_ONESHOT_SHIFT))
#define PWM6_QUAD_MODE_MASK                 ((uint32)(PWM6_3BIT_MASK        <<  \
                                                                            PWM6_QUAD_MODE_SHIFT))
#define PWM6_INV_OUT_MASK                   ((uint32)(PWM6_2BIT_MASK        <<  \
                                                                            PWM6_INV_OUT_SHIFT))
#define PWM6_MODE_MASK                      ((uint32)(PWM6_3BIT_MASK        <<  \
                                                                            PWM6_MODE_SHIFT))

/* Shift constants for trigger control register 1 */
#define PWM6_CAPTURE_SHIFT                  (0u)
#define PWM6_COUNT_SHIFT                    (2u)
#define PWM6_RELOAD_SHIFT                   (4u)
#define PWM6_STOP_SHIFT                     (6u)
#define PWM6_START_SHIFT                    (8u)

/* Mask constants for trigger control register 1 */
#define PWM6_CAPTURE_MASK                   ((uint32)(PWM6_2BIT_MASK        <<  \
                                                                  PWM6_CAPTURE_SHIFT))
#define PWM6_COUNT_MASK                     ((uint32)(PWM6_2BIT_MASK        <<  \
                                                                  PWM6_COUNT_SHIFT))
#define PWM6_RELOAD_MASK                    ((uint32)(PWM6_2BIT_MASK        <<  \
                                                                  PWM6_RELOAD_SHIFT))
#define PWM6_STOP_MASK                      ((uint32)(PWM6_2BIT_MASK        <<  \
                                                                  PWM6_STOP_SHIFT))
#define PWM6_START_MASK                     ((uint32)(PWM6_2BIT_MASK        <<  \
                                                                  PWM6_START_SHIFT))

/* MASK */
#define PWM6_1BIT_MASK                      ((uint32)0x01u)
#define PWM6_2BIT_MASK                      ((uint32)0x03u)
#define PWM6_3BIT_MASK                      ((uint32)0x07u)
#define PWM6_6BIT_MASK                      ((uint32)0x3Fu)
#define PWM6_8BIT_MASK                      ((uint32)0xFFu)
#define PWM6_16BIT_MASK                     ((uint32)0xFFFFu)

/* Shift constant for status register */
#define PWM6_RUNNING_STATUS_SHIFT           (30u)


/***************************************
*    Initial Constants
***************************************/

#define PWM6_CTRL_QUAD_BASE_CONFIG                                                          \
        (((uint32)(PWM6_QUAD_ENCODING_MODES     << PWM6_QUAD_MODE_SHIFT))       |\
         ((uint32)(PWM6_CONFIG                  << PWM6_MODE_SHIFT)))

#define PWM6_CTRL_PWM_BASE_CONFIG                                                           \
        (((uint32)(PWM6_PWM_STOP_EVENT          << PWM6_PWM_STOP_KILL_SHIFT))   |\
         ((uint32)(PWM6_PWM_OUT_INVERT          << PWM6_INV_OUT_SHIFT))         |\
         ((uint32)(PWM6_PWM_OUT_N_INVERT        << PWM6_INV_COMPL_OUT_SHIFT))   |\
         ((uint32)(PWM6_PWM_MODE                << PWM6_MODE_SHIFT)))

#define PWM6_CTRL_PWM_RUN_MODE                                                              \
            ((uint32)(PWM6_PWM_RUN_MODE         << PWM6_ONESHOT_SHIFT))
            
#define PWM6_CTRL_PWM_ALIGN                                                                 \
            ((uint32)(PWM6_PWM_ALIGN            << PWM6_UPDOWN_SHIFT))

#define PWM6_CTRL_PWM_KILL_EVENT                                                            \
             ((uint32)(PWM6_PWM_KILL_EVENT      << PWM6_PWM_SYNC_KILL_SHIFT))

#define PWM6_CTRL_PWM_DEAD_TIME_CYCLE                                                       \
            ((uint32)(PWM6_PWM_DEAD_TIME_CYCLE  << PWM6_PRESCALER_SHIFT))

#define PWM6_CTRL_PWM_PRESCALER                                                             \
            ((uint32)(PWM6_PWM_PRESCALER        << PWM6_PRESCALER_SHIFT))

#define PWM6_CTRL_TIMER_BASE_CONFIG                                                         \
        (((uint32)(PWM6_TC_PRESCALER            << PWM6_PRESCALER_SHIFT))       |\
         ((uint32)(PWM6_TC_COUNTER_MODE         << PWM6_UPDOWN_SHIFT))          |\
         ((uint32)(PWM6_TC_RUN_MODE             << PWM6_ONESHOT_SHIFT))         |\
         ((uint32)(PWM6_TC_COMP_CAP_MODE        << PWM6_MODE_SHIFT)))
        
#define PWM6_QUAD_SIGNALS_MODES                                                             \
        (((uint32)(PWM6_QUAD_PHIA_SIGNAL_MODE   << PWM6_COUNT_SHIFT))           |\
         ((uint32)(PWM6_QUAD_INDEX_SIGNAL_MODE  << PWM6_RELOAD_SHIFT))          |\
         ((uint32)(PWM6_QUAD_STOP_SIGNAL_MODE   << PWM6_STOP_SHIFT))            |\
         ((uint32)(PWM6_QUAD_PHIB_SIGNAL_MODE   << PWM6_START_SHIFT)))

#define PWM6_PWM_SIGNALS_MODES                                                              \
        (((uint32)(PWM6_PWM_SWITCH_SIGNAL_MODE  << PWM6_CAPTURE_SHIFT))         |\
         ((uint32)(PWM6_PWM_COUNT_SIGNAL_MODE   << PWM6_COUNT_SHIFT))           |\
         ((uint32)(PWM6_PWM_RELOAD_SIGNAL_MODE  << PWM6_RELOAD_SHIFT))          |\
         ((uint32)(PWM6_PWM_STOP_SIGNAL_MODE    << PWM6_STOP_SHIFT))            |\
         ((uint32)(PWM6_PWM_START_SIGNAL_MODE   << PWM6_START_SHIFT)))

#define PWM6_TIMER_SIGNALS_MODES                                                            \
        (((uint32)(PWM6_TC_CAPTURE_SIGNAL_MODE  << PWM6_CAPTURE_SHIFT))         |\
         ((uint32)(PWM6_TC_COUNT_SIGNAL_MODE    << PWM6_COUNT_SHIFT))           |\
         ((uint32)(PWM6_TC_RELOAD_SIGNAL_MODE   << PWM6_RELOAD_SHIFT))          |\
         ((uint32)(PWM6_TC_STOP_SIGNAL_MODE     << PWM6_STOP_SHIFT))            |\
         ((uint32)(PWM6_TC_START_SIGNAL_MODE    << PWM6_START_SHIFT)))
        
#define PWM6_TIMER_UPDOWN_CNT_USED                                                          \
                ((PWM6__COUNT_UPDOWN0 == PWM6_TC_COUNTER_MODE)                  ||\
                 (PWM6__COUNT_UPDOWN1 == PWM6_TC_COUNTER_MODE))

#define PWM6_PWM_UPDOWN_CNT_USED                                                            \
                ((PWM6__CENTER == PWM6_PWM_ALIGN)                               ||\
                 (PWM6__ASYMMETRIC == PWM6_PWM_ALIGN))               
        
#define PWM6_PWM_PR_INIT_VALUE              (1u)
#define PWM6_QUAD_PERIOD_INIT_VALUE         (0x8000u)



#endif /* End CY_TCPWM_PWM6_H */

/* [] END OF FILE */
