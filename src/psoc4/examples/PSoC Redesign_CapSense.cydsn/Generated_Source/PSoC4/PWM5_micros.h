/*******************************************************************************
* File Name: PWM5_micros.h
* Version 2.10
*
* Description:
*  This file provides constants and parameter values for the PWM5_micros
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

#if !defined(CY_TCPWM_PWM5_micros_H)
#define CY_TCPWM_PWM5_micros_H


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
} PWM5_micros_BACKUP_STRUCT;


/*******************************************************************************
* Variables
*******************************************************************************/
extern uint8  PWM5_micros_initVar;


/***************************************
*   Conditional Compilation Parameters
****************************************/

#define PWM5_micros_CY_TCPWM_V2                    (CYIPBLOCK_m0s8tcpwm_VERSION == 2u)
#define PWM5_micros_CY_TCPWM_4000                  (CY_PSOC4_4000)

/* TCPWM Configuration */
#define PWM5_micros_CONFIG                         (7lu)

/* Quad Mode */
/* Parameters */
#define PWM5_micros_QUAD_ENCODING_MODES            (0lu)
#define PWM5_micros_QUAD_AUTO_START                (1lu)

/* Signal modes */
#define PWM5_micros_QUAD_INDEX_SIGNAL_MODE         (0lu)
#define PWM5_micros_QUAD_PHIA_SIGNAL_MODE          (3lu)
#define PWM5_micros_QUAD_PHIB_SIGNAL_MODE          (3lu)
#define PWM5_micros_QUAD_STOP_SIGNAL_MODE          (0lu)

/* Signal present */
#define PWM5_micros_QUAD_INDEX_SIGNAL_PRESENT      (0lu)
#define PWM5_micros_QUAD_STOP_SIGNAL_PRESENT       (0lu)

/* Interrupt Mask */
#define PWM5_micros_QUAD_INTERRUPT_MASK            (1lu)

/* Timer/Counter Mode */
/* Parameters */
#define PWM5_micros_TC_RUN_MODE                    (0lu)
#define PWM5_micros_TC_COUNTER_MODE                (0lu)
#define PWM5_micros_TC_COMP_CAP_MODE               (2lu)
#define PWM5_micros_TC_PRESCALER                   (0lu)

/* Signal modes */
#define PWM5_micros_TC_RELOAD_SIGNAL_MODE          (0lu)
#define PWM5_micros_TC_COUNT_SIGNAL_MODE           (3lu)
#define PWM5_micros_TC_START_SIGNAL_MODE           (0lu)
#define PWM5_micros_TC_STOP_SIGNAL_MODE            (0lu)
#define PWM5_micros_TC_CAPTURE_SIGNAL_MODE         (0lu)

/* Signal present */
#define PWM5_micros_TC_RELOAD_SIGNAL_PRESENT       (0lu)
#define PWM5_micros_TC_COUNT_SIGNAL_PRESENT        (0lu)
#define PWM5_micros_TC_START_SIGNAL_PRESENT        (0lu)
#define PWM5_micros_TC_STOP_SIGNAL_PRESENT         (0lu)
#define PWM5_micros_TC_CAPTURE_SIGNAL_PRESENT      (0lu)

/* Interrupt Mask */
#define PWM5_micros_TC_INTERRUPT_MASK              (1lu)

/* PWM Mode */
/* Parameters */
#define PWM5_micros_PWM_KILL_EVENT                 (0lu)
#define PWM5_micros_PWM_STOP_EVENT                 (0lu)
#define PWM5_micros_PWM_MODE                       (4lu)
#define PWM5_micros_PWM_OUT_N_INVERT               (0lu)
#define PWM5_micros_PWM_OUT_INVERT                 (0lu)
#define PWM5_micros_PWM_ALIGN                      (0lu)
#define PWM5_micros_PWM_RUN_MODE                   (0lu)
#define PWM5_micros_PWM_DEAD_TIME_CYCLE            (0lu)
#define PWM5_micros_PWM_PRESCALER                  (0lu)

/* Signal modes */
#define PWM5_micros_PWM_RELOAD_SIGNAL_MODE         (0lu)
#define PWM5_micros_PWM_COUNT_SIGNAL_MODE          (3lu)
#define PWM5_micros_PWM_START_SIGNAL_MODE          (0lu)
#define PWM5_micros_PWM_STOP_SIGNAL_MODE           (0lu)
#define PWM5_micros_PWM_SWITCH_SIGNAL_MODE         (0lu)

/* Signal present */
#define PWM5_micros_PWM_RELOAD_SIGNAL_PRESENT      (0lu)
#define PWM5_micros_PWM_COUNT_SIGNAL_PRESENT       (0lu)
#define PWM5_micros_PWM_START_SIGNAL_PRESENT       (0lu)
#define PWM5_micros_PWM_STOP_SIGNAL_PRESENT        (0lu)
#define PWM5_micros_PWM_SWITCH_SIGNAL_PRESENT      (0lu)

/* Interrupt Mask */
#define PWM5_micros_PWM_INTERRUPT_MASK             (1lu)


/***************************************
*    Initial Parameter Constants
***************************************/

/* Timer/Counter Mode */
#define PWM5_micros_TC_PERIOD_VALUE                (65535lu)
#define PWM5_micros_TC_COMPARE_VALUE               (65535lu)
#define PWM5_micros_TC_COMPARE_BUF_VALUE           (65535lu)
#define PWM5_micros_TC_COMPARE_SWAP                (0lu)

/* PWM Mode */
#define PWM5_micros_PWM_PERIOD_VALUE               (65535lu)
#define PWM5_micros_PWM_PERIOD_BUF_VALUE           (65535lu)
#define PWM5_micros_PWM_PERIOD_SWAP                (0lu)
#define PWM5_micros_PWM_COMPARE_VALUE              (65535lu)
#define PWM5_micros_PWM_COMPARE_BUF_VALUE          (65535lu)
#define PWM5_micros_PWM_COMPARE_SWAP               (0lu)


/***************************************
*    Enumerated Types and Parameters
***************************************/

#define PWM5_micros__LEFT 0
#define PWM5_micros__RIGHT 1
#define PWM5_micros__CENTER 2
#define PWM5_micros__ASYMMETRIC 3

#define PWM5_micros__X1 0
#define PWM5_micros__X2 1
#define PWM5_micros__X4 2

#define PWM5_micros__PWM 4
#define PWM5_micros__PWM_DT 5
#define PWM5_micros__PWM_PR 6

#define PWM5_micros__INVERSE 1
#define PWM5_micros__DIRECT 0

#define PWM5_micros__CAPTURE 2
#define PWM5_micros__COMPARE 0

#define PWM5_micros__TRIG_LEVEL 3
#define PWM5_micros__TRIG_RISING 0
#define PWM5_micros__TRIG_FALLING 1
#define PWM5_micros__TRIG_BOTH 2

#define PWM5_micros__INTR_MASK_TC 1
#define PWM5_micros__INTR_MASK_CC_MATCH 2
#define PWM5_micros__INTR_MASK_NONE 0
#define PWM5_micros__INTR_MASK_TC_CC 3

#define PWM5_micros__UNCONFIG 8
#define PWM5_micros__TIMER 1
#define PWM5_micros__QUAD 3
#define PWM5_micros__PWM_SEL 7

#define PWM5_micros__COUNT_UP 0
#define PWM5_micros__COUNT_DOWN 1
#define PWM5_micros__COUNT_UPDOWN0 2
#define PWM5_micros__COUNT_UPDOWN1 3


/* Prescaler */
#define PWM5_micros_PRESCALE_DIVBY1                ((uint32)(0u << PWM5_micros_PRESCALER_SHIFT))
#define PWM5_micros_PRESCALE_DIVBY2                ((uint32)(1u << PWM5_micros_PRESCALER_SHIFT))
#define PWM5_micros_PRESCALE_DIVBY4                ((uint32)(2u << PWM5_micros_PRESCALER_SHIFT))
#define PWM5_micros_PRESCALE_DIVBY8                ((uint32)(3u << PWM5_micros_PRESCALER_SHIFT))
#define PWM5_micros_PRESCALE_DIVBY16               ((uint32)(4u << PWM5_micros_PRESCALER_SHIFT))
#define PWM5_micros_PRESCALE_DIVBY32               ((uint32)(5u << PWM5_micros_PRESCALER_SHIFT))
#define PWM5_micros_PRESCALE_DIVBY64               ((uint32)(6u << PWM5_micros_PRESCALER_SHIFT))
#define PWM5_micros_PRESCALE_DIVBY128              ((uint32)(7u << PWM5_micros_PRESCALER_SHIFT))

/* TCPWM set modes */
#define PWM5_micros_MODE_TIMER_COMPARE             ((uint32)(PWM5_micros__COMPARE         <<  \
                                                                  PWM5_micros_MODE_SHIFT))
#define PWM5_micros_MODE_TIMER_CAPTURE             ((uint32)(PWM5_micros__CAPTURE         <<  \
                                                                  PWM5_micros_MODE_SHIFT))
#define PWM5_micros_MODE_QUAD                      ((uint32)(PWM5_micros__QUAD            <<  \
                                                                  PWM5_micros_MODE_SHIFT))
#define PWM5_micros_MODE_PWM                       ((uint32)(PWM5_micros__PWM             <<  \
                                                                  PWM5_micros_MODE_SHIFT))
#define PWM5_micros_MODE_PWM_DT                    ((uint32)(PWM5_micros__PWM_DT          <<  \
                                                                  PWM5_micros_MODE_SHIFT))
#define PWM5_micros_MODE_PWM_PR                    ((uint32)(PWM5_micros__PWM_PR          <<  \
                                                                  PWM5_micros_MODE_SHIFT))

/* Quad Modes */
#define PWM5_micros_MODE_X1                        ((uint32)(PWM5_micros__X1              <<  \
                                                                  PWM5_micros_QUAD_MODE_SHIFT))
#define PWM5_micros_MODE_X2                        ((uint32)(PWM5_micros__X2              <<  \
                                                                  PWM5_micros_QUAD_MODE_SHIFT))
#define PWM5_micros_MODE_X4                        ((uint32)(PWM5_micros__X4              <<  \
                                                                  PWM5_micros_QUAD_MODE_SHIFT))

/* Counter modes */
#define PWM5_micros_COUNT_UP                       ((uint32)(PWM5_micros__COUNT_UP        <<  \
                                                                  PWM5_micros_UPDOWN_SHIFT))
#define PWM5_micros_COUNT_DOWN                     ((uint32)(PWM5_micros__COUNT_DOWN      <<  \
                                                                  PWM5_micros_UPDOWN_SHIFT))
#define PWM5_micros_COUNT_UPDOWN0                  ((uint32)(PWM5_micros__COUNT_UPDOWN0   <<  \
                                                                  PWM5_micros_UPDOWN_SHIFT))
#define PWM5_micros_COUNT_UPDOWN1                  ((uint32)(PWM5_micros__COUNT_UPDOWN1   <<  \
                                                                  PWM5_micros_UPDOWN_SHIFT))

/* PWM output invert */
#define PWM5_micros_INVERT_LINE                    ((uint32)(PWM5_micros__INVERSE         <<  \
                                                                  PWM5_micros_INV_OUT_SHIFT))
#define PWM5_micros_INVERT_LINE_N                  ((uint32)(PWM5_micros__INVERSE         <<  \
                                                                  PWM5_micros_INV_COMPL_OUT_SHIFT))

/* Trigger modes */
#define PWM5_micros_TRIG_RISING                    ((uint32)PWM5_micros__TRIG_RISING)
#define PWM5_micros_TRIG_FALLING                   ((uint32)PWM5_micros__TRIG_FALLING)
#define PWM5_micros_TRIG_BOTH                      ((uint32)PWM5_micros__TRIG_BOTH)
#define PWM5_micros_TRIG_LEVEL                     ((uint32)PWM5_micros__TRIG_LEVEL)

/* Interrupt mask */
#define PWM5_micros_INTR_MASK_TC                   ((uint32)PWM5_micros__INTR_MASK_TC)
#define PWM5_micros_INTR_MASK_CC_MATCH             ((uint32)PWM5_micros__INTR_MASK_CC_MATCH)

/* PWM Output Controls */
#define PWM5_micros_CC_MATCH_SET                   (0x00u)
#define PWM5_micros_CC_MATCH_CLEAR                 (0x01u)
#define PWM5_micros_CC_MATCH_INVERT                (0x02u)
#define PWM5_micros_CC_MATCH_NO_CHANGE             (0x03u)
#define PWM5_micros_OVERLOW_SET                    (0x00u)
#define PWM5_micros_OVERLOW_CLEAR                  (0x04u)
#define PWM5_micros_OVERLOW_INVERT                 (0x08u)
#define PWM5_micros_OVERLOW_NO_CHANGE              (0x0Cu)
#define PWM5_micros_UNDERFLOW_SET                  (0x00u)
#define PWM5_micros_UNDERFLOW_CLEAR                (0x10u)
#define PWM5_micros_UNDERFLOW_INVERT               (0x20u)
#define PWM5_micros_UNDERFLOW_NO_CHANGE            (0x30u)

/* PWM Align */
#define PWM5_micros_PWM_MODE_LEFT                  (PWM5_micros_CC_MATCH_CLEAR        |   \
                                                         PWM5_micros_OVERLOW_SET           |   \
                                                         PWM5_micros_UNDERFLOW_NO_CHANGE)
#define PWM5_micros_PWM_MODE_RIGHT                 (PWM5_micros_CC_MATCH_SET          |   \
                                                         PWM5_micros_OVERLOW_NO_CHANGE     |   \
                                                         PWM5_micros_UNDERFLOW_CLEAR)
#define PWM5_micros_PWM_MODE_ASYM                  (PWM5_micros_CC_MATCH_INVERT       |   \
                                                         PWM5_micros_OVERLOW_SET           |   \
                                                         PWM5_micros_UNDERFLOW_CLEAR)

#if (PWM5_micros_CY_TCPWM_V2)
    #if(PWM5_micros_CY_TCPWM_4000)
        #define PWM5_micros_PWM_MODE_CENTER                (PWM5_micros_CC_MATCH_INVERT       |   \
                                                                 PWM5_micros_OVERLOW_NO_CHANGE     |   \
                                                                 PWM5_micros_UNDERFLOW_CLEAR)
    #else
        #define PWM5_micros_PWM_MODE_CENTER                (PWM5_micros_CC_MATCH_INVERT       |   \
                                                                 PWM5_micros_OVERLOW_SET           |   \
                                                                 PWM5_micros_UNDERFLOW_CLEAR)
    #endif /* (PWM5_micros_CY_TCPWM_4000) */
#else
    #define PWM5_micros_PWM_MODE_CENTER                (PWM5_micros_CC_MATCH_INVERT       |   \
                                                             PWM5_micros_OVERLOW_NO_CHANGE     |   \
                                                             PWM5_micros_UNDERFLOW_CLEAR)
#endif /* (PWM5_micros_CY_TCPWM_NEW) */

/* Command operations without condition */
#define PWM5_micros_CMD_CAPTURE                    (0u)
#define PWM5_micros_CMD_RELOAD                     (8u)
#define PWM5_micros_CMD_STOP                       (16u)
#define PWM5_micros_CMD_START                      (24u)

/* Status */
#define PWM5_micros_STATUS_DOWN                    (1u)
#define PWM5_micros_STATUS_RUNNING                 (2u)


/***************************************
*        Function Prototypes
****************************************/

void   PWM5_micros_Init(void);
void   PWM5_micros_Enable(void);
void   PWM5_micros_Start(void);
void   PWM5_micros_Stop(void);

void   PWM5_micros_SetMode(uint32 mode);
void   PWM5_micros_SetCounterMode(uint32 counterMode);
void   PWM5_micros_SetPWMMode(uint32 modeMask);
void   PWM5_micros_SetQDMode(uint32 qdMode);

void   PWM5_micros_SetPrescaler(uint32 prescaler);
void   PWM5_micros_TriggerCommand(uint32 mask, uint32 command);
void   PWM5_micros_SetOneShot(uint32 oneShotEnable);
uint32 PWM5_micros_ReadStatus(void);

void   PWM5_micros_SetPWMSyncKill(uint32 syncKillEnable);
void   PWM5_micros_SetPWMStopOnKill(uint32 stopOnKillEnable);
void   PWM5_micros_SetPWMDeadTime(uint32 deadTime);
void   PWM5_micros_SetPWMInvert(uint32 mask);

void   PWM5_micros_SetInterruptMode(uint32 interruptMask);
uint32 PWM5_micros_GetInterruptSourceMasked(void);
uint32 PWM5_micros_GetInterruptSource(void);
void   PWM5_micros_ClearInterrupt(uint32 interruptMask);
void   PWM5_micros_SetInterrupt(uint32 interruptMask);

void   PWM5_micros_WriteCounter(uint32 count);
uint32 PWM5_micros_ReadCounter(void);

uint32 PWM5_micros_ReadCapture(void);
uint32 PWM5_micros_ReadCaptureBuf(void);

void   PWM5_micros_WritePeriod(uint32 period);
uint32 PWM5_micros_ReadPeriod(void);
void   PWM5_micros_WritePeriodBuf(uint32 periodBuf);
uint32 PWM5_micros_ReadPeriodBuf(void);

void   PWM5_micros_WriteCompare(uint32 compare);
uint32 PWM5_micros_ReadCompare(void);
void   PWM5_micros_WriteCompareBuf(uint32 compareBuf);
uint32 PWM5_micros_ReadCompareBuf(void);

void   PWM5_micros_SetPeriodSwap(uint32 swapEnable);
void   PWM5_micros_SetCompareSwap(uint32 swapEnable);

void   PWM5_micros_SetCaptureMode(uint32 triggerMode);
void   PWM5_micros_SetReloadMode(uint32 triggerMode);
void   PWM5_micros_SetStartMode(uint32 triggerMode);
void   PWM5_micros_SetStopMode(uint32 triggerMode);
void   PWM5_micros_SetCountMode(uint32 triggerMode);

void   PWM5_micros_SaveConfig(void);
void   PWM5_micros_RestoreConfig(void);
void   PWM5_micros_Sleep(void);
void   PWM5_micros_Wakeup(void);


/***************************************
*             Registers
***************************************/

#define PWM5_micros_BLOCK_CONTROL_REG              (*(reg32 *) PWM5_micros_cy_m0s8_tcpwm_1__TCPWM_CTRL )
#define PWM5_micros_BLOCK_CONTROL_PTR              ( (reg32 *) PWM5_micros_cy_m0s8_tcpwm_1__TCPWM_CTRL )
#define PWM5_micros_COMMAND_REG                    (*(reg32 *) PWM5_micros_cy_m0s8_tcpwm_1__TCPWM_CMD )
#define PWM5_micros_COMMAND_PTR                    ( (reg32 *) PWM5_micros_cy_m0s8_tcpwm_1__TCPWM_CMD )
#define PWM5_micros_INTRRUPT_CAUSE_REG             (*(reg32 *) PWM5_micros_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE )
#define PWM5_micros_INTRRUPT_CAUSE_PTR             ( (reg32 *) PWM5_micros_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE )
#define PWM5_micros_CONTROL_REG                    (*(reg32 *) PWM5_micros_cy_m0s8_tcpwm_1__CTRL )
#define PWM5_micros_CONTROL_PTR                    ( (reg32 *) PWM5_micros_cy_m0s8_tcpwm_1__CTRL )
#define PWM5_micros_STATUS_REG                     (*(reg32 *) PWM5_micros_cy_m0s8_tcpwm_1__STATUS )
#define PWM5_micros_STATUS_PTR                     ( (reg32 *) PWM5_micros_cy_m0s8_tcpwm_1__STATUS )
#define PWM5_micros_COUNTER_REG                    (*(reg32 *) PWM5_micros_cy_m0s8_tcpwm_1__COUNTER )
#define PWM5_micros_COUNTER_PTR                    ( (reg32 *) PWM5_micros_cy_m0s8_tcpwm_1__COUNTER )
#define PWM5_micros_COMP_CAP_REG                   (*(reg32 *) PWM5_micros_cy_m0s8_tcpwm_1__CC )
#define PWM5_micros_COMP_CAP_PTR                   ( (reg32 *) PWM5_micros_cy_m0s8_tcpwm_1__CC )
#define PWM5_micros_COMP_CAP_BUF_REG               (*(reg32 *) PWM5_micros_cy_m0s8_tcpwm_1__CC_BUFF )
#define PWM5_micros_COMP_CAP_BUF_PTR               ( (reg32 *) PWM5_micros_cy_m0s8_tcpwm_1__CC_BUFF )
#define PWM5_micros_PERIOD_REG                     (*(reg32 *) PWM5_micros_cy_m0s8_tcpwm_1__PERIOD )
#define PWM5_micros_PERIOD_PTR                     ( (reg32 *) PWM5_micros_cy_m0s8_tcpwm_1__PERIOD )
#define PWM5_micros_PERIOD_BUF_REG                 (*(reg32 *) PWM5_micros_cy_m0s8_tcpwm_1__PERIOD_BUFF )
#define PWM5_micros_PERIOD_BUF_PTR                 ( (reg32 *) PWM5_micros_cy_m0s8_tcpwm_1__PERIOD_BUFF )
#define PWM5_micros_TRIG_CONTROL0_REG              (*(reg32 *) PWM5_micros_cy_m0s8_tcpwm_1__TR_CTRL0 )
#define PWM5_micros_TRIG_CONTROL0_PTR              ( (reg32 *) PWM5_micros_cy_m0s8_tcpwm_1__TR_CTRL0 )
#define PWM5_micros_TRIG_CONTROL1_REG              (*(reg32 *) PWM5_micros_cy_m0s8_tcpwm_1__TR_CTRL1 )
#define PWM5_micros_TRIG_CONTROL1_PTR              ( (reg32 *) PWM5_micros_cy_m0s8_tcpwm_1__TR_CTRL1 )
#define PWM5_micros_TRIG_CONTROL2_REG              (*(reg32 *) PWM5_micros_cy_m0s8_tcpwm_1__TR_CTRL2 )
#define PWM5_micros_TRIG_CONTROL2_PTR              ( (reg32 *) PWM5_micros_cy_m0s8_tcpwm_1__TR_CTRL2 )
#define PWM5_micros_INTERRUPT_REQ_REG              (*(reg32 *) PWM5_micros_cy_m0s8_tcpwm_1__INTR )
#define PWM5_micros_INTERRUPT_REQ_PTR              ( (reg32 *) PWM5_micros_cy_m0s8_tcpwm_1__INTR )
#define PWM5_micros_INTERRUPT_SET_REG              (*(reg32 *) PWM5_micros_cy_m0s8_tcpwm_1__INTR_SET )
#define PWM5_micros_INTERRUPT_SET_PTR              ( (reg32 *) PWM5_micros_cy_m0s8_tcpwm_1__INTR_SET )
#define PWM5_micros_INTERRUPT_MASK_REG             (*(reg32 *) PWM5_micros_cy_m0s8_tcpwm_1__INTR_MASK )
#define PWM5_micros_INTERRUPT_MASK_PTR             ( (reg32 *) PWM5_micros_cy_m0s8_tcpwm_1__INTR_MASK )
#define PWM5_micros_INTERRUPT_MASKED_REG           (*(reg32 *) PWM5_micros_cy_m0s8_tcpwm_1__INTR_MASKED )
#define PWM5_micros_INTERRUPT_MASKED_PTR           ( (reg32 *) PWM5_micros_cy_m0s8_tcpwm_1__INTR_MASKED )


/***************************************
*       Registers Constants
***************************************/

/* Mask */
#define PWM5_micros_MASK                           ((uint32)PWM5_micros_cy_m0s8_tcpwm_1__TCPWM_CTRL_MASK)

/* Shift constants for control register */
#define PWM5_micros_RELOAD_CC_SHIFT                (0u)
#define PWM5_micros_RELOAD_PERIOD_SHIFT            (1u)
#define PWM5_micros_PWM_SYNC_KILL_SHIFT            (2u)
#define PWM5_micros_PWM_STOP_KILL_SHIFT            (3u)
#define PWM5_micros_PRESCALER_SHIFT                (8u)
#define PWM5_micros_UPDOWN_SHIFT                   (16u)
#define PWM5_micros_ONESHOT_SHIFT                  (18u)
#define PWM5_micros_QUAD_MODE_SHIFT                (20u)
#define PWM5_micros_INV_OUT_SHIFT                  (20u)
#define PWM5_micros_INV_COMPL_OUT_SHIFT            (21u)
#define PWM5_micros_MODE_SHIFT                     (24u)

/* Mask constants for control register */
#define PWM5_micros_RELOAD_CC_MASK                 ((uint32)(PWM5_micros_1BIT_MASK        <<  \
                                                                            PWM5_micros_RELOAD_CC_SHIFT))
#define PWM5_micros_RELOAD_PERIOD_MASK             ((uint32)(PWM5_micros_1BIT_MASK        <<  \
                                                                            PWM5_micros_RELOAD_PERIOD_SHIFT))
#define PWM5_micros_PWM_SYNC_KILL_MASK             ((uint32)(PWM5_micros_1BIT_MASK        <<  \
                                                                            PWM5_micros_PWM_SYNC_KILL_SHIFT))
#define PWM5_micros_PWM_STOP_KILL_MASK             ((uint32)(PWM5_micros_1BIT_MASK        <<  \
                                                                            PWM5_micros_PWM_STOP_KILL_SHIFT))
#define PWM5_micros_PRESCALER_MASK                 ((uint32)(PWM5_micros_8BIT_MASK        <<  \
                                                                            PWM5_micros_PRESCALER_SHIFT))
#define PWM5_micros_UPDOWN_MASK                    ((uint32)(PWM5_micros_2BIT_MASK        <<  \
                                                                            PWM5_micros_UPDOWN_SHIFT))
#define PWM5_micros_ONESHOT_MASK                   ((uint32)(PWM5_micros_1BIT_MASK        <<  \
                                                                            PWM5_micros_ONESHOT_SHIFT))
#define PWM5_micros_QUAD_MODE_MASK                 ((uint32)(PWM5_micros_3BIT_MASK        <<  \
                                                                            PWM5_micros_QUAD_MODE_SHIFT))
#define PWM5_micros_INV_OUT_MASK                   ((uint32)(PWM5_micros_2BIT_MASK        <<  \
                                                                            PWM5_micros_INV_OUT_SHIFT))
#define PWM5_micros_MODE_MASK                      ((uint32)(PWM5_micros_3BIT_MASK        <<  \
                                                                            PWM5_micros_MODE_SHIFT))

/* Shift constants for trigger control register 1 */
#define PWM5_micros_CAPTURE_SHIFT                  (0u)
#define PWM5_micros_COUNT_SHIFT                    (2u)
#define PWM5_micros_RELOAD_SHIFT                   (4u)
#define PWM5_micros_STOP_SHIFT                     (6u)
#define PWM5_micros_START_SHIFT                    (8u)

/* Mask constants for trigger control register 1 */
#define PWM5_micros_CAPTURE_MASK                   ((uint32)(PWM5_micros_2BIT_MASK        <<  \
                                                                  PWM5_micros_CAPTURE_SHIFT))
#define PWM5_micros_COUNT_MASK                     ((uint32)(PWM5_micros_2BIT_MASK        <<  \
                                                                  PWM5_micros_COUNT_SHIFT))
#define PWM5_micros_RELOAD_MASK                    ((uint32)(PWM5_micros_2BIT_MASK        <<  \
                                                                  PWM5_micros_RELOAD_SHIFT))
#define PWM5_micros_STOP_MASK                      ((uint32)(PWM5_micros_2BIT_MASK        <<  \
                                                                  PWM5_micros_STOP_SHIFT))
#define PWM5_micros_START_MASK                     ((uint32)(PWM5_micros_2BIT_MASK        <<  \
                                                                  PWM5_micros_START_SHIFT))

/* MASK */
#define PWM5_micros_1BIT_MASK                      ((uint32)0x01u)
#define PWM5_micros_2BIT_MASK                      ((uint32)0x03u)
#define PWM5_micros_3BIT_MASK                      ((uint32)0x07u)
#define PWM5_micros_6BIT_MASK                      ((uint32)0x3Fu)
#define PWM5_micros_8BIT_MASK                      ((uint32)0xFFu)
#define PWM5_micros_16BIT_MASK                     ((uint32)0xFFFFu)

/* Shift constant for status register */
#define PWM5_micros_RUNNING_STATUS_SHIFT           (30u)


/***************************************
*    Initial Constants
***************************************/

#define PWM5_micros_CTRL_QUAD_BASE_CONFIG                                                          \
        (((uint32)(PWM5_micros_QUAD_ENCODING_MODES     << PWM5_micros_QUAD_MODE_SHIFT))       |\
         ((uint32)(PWM5_micros_CONFIG                  << PWM5_micros_MODE_SHIFT)))

#define PWM5_micros_CTRL_PWM_BASE_CONFIG                                                           \
        (((uint32)(PWM5_micros_PWM_STOP_EVENT          << PWM5_micros_PWM_STOP_KILL_SHIFT))   |\
         ((uint32)(PWM5_micros_PWM_OUT_INVERT          << PWM5_micros_INV_OUT_SHIFT))         |\
         ((uint32)(PWM5_micros_PWM_OUT_N_INVERT        << PWM5_micros_INV_COMPL_OUT_SHIFT))   |\
         ((uint32)(PWM5_micros_PWM_MODE                << PWM5_micros_MODE_SHIFT)))

#define PWM5_micros_CTRL_PWM_RUN_MODE                                                              \
            ((uint32)(PWM5_micros_PWM_RUN_MODE         << PWM5_micros_ONESHOT_SHIFT))
            
#define PWM5_micros_CTRL_PWM_ALIGN                                                                 \
            ((uint32)(PWM5_micros_PWM_ALIGN            << PWM5_micros_UPDOWN_SHIFT))

#define PWM5_micros_CTRL_PWM_KILL_EVENT                                                            \
             ((uint32)(PWM5_micros_PWM_KILL_EVENT      << PWM5_micros_PWM_SYNC_KILL_SHIFT))

#define PWM5_micros_CTRL_PWM_DEAD_TIME_CYCLE                                                       \
            ((uint32)(PWM5_micros_PWM_DEAD_TIME_CYCLE  << PWM5_micros_PRESCALER_SHIFT))

#define PWM5_micros_CTRL_PWM_PRESCALER                                                             \
            ((uint32)(PWM5_micros_PWM_PRESCALER        << PWM5_micros_PRESCALER_SHIFT))

#define PWM5_micros_CTRL_TIMER_BASE_CONFIG                                                         \
        (((uint32)(PWM5_micros_TC_PRESCALER            << PWM5_micros_PRESCALER_SHIFT))       |\
         ((uint32)(PWM5_micros_TC_COUNTER_MODE         << PWM5_micros_UPDOWN_SHIFT))          |\
         ((uint32)(PWM5_micros_TC_RUN_MODE             << PWM5_micros_ONESHOT_SHIFT))         |\
         ((uint32)(PWM5_micros_TC_COMP_CAP_MODE        << PWM5_micros_MODE_SHIFT)))
        
#define PWM5_micros_QUAD_SIGNALS_MODES                                                             \
        (((uint32)(PWM5_micros_QUAD_PHIA_SIGNAL_MODE   << PWM5_micros_COUNT_SHIFT))           |\
         ((uint32)(PWM5_micros_QUAD_INDEX_SIGNAL_MODE  << PWM5_micros_RELOAD_SHIFT))          |\
         ((uint32)(PWM5_micros_QUAD_STOP_SIGNAL_MODE   << PWM5_micros_STOP_SHIFT))            |\
         ((uint32)(PWM5_micros_QUAD_PHIB_SIGNAL_MODE   << PWM5_micros_START_SHIFT)))

#define PWM5_micros_PWM_SIGNALS_MODES                                                              \
        (((uint32)(PWM5_micros_PWM_SWITCH_SIGNAL_MODE  << PWM5_micros_CAPTURE_SHIFT))         |\
         ((uint32)(PWM5_micros_PWM_COUNT_SIGNAL_MODE   << PWM5_micros_COUNT_SHIFT))           |\
         ((uint32)(PWM5_micros_PWM_RELOAD_SIGNAL_MODE  << PWM5_micros_RELOAD_SHIFT))          |\
         ((uint32)(PWM5_micros_PWM_STOP_SIGNAL_MODE    << PWM5_micros_STOP_SHIFT))            |\
         ((uint32)(PWM5_micros_PWM_START_SIGNAL_MODE   << PWM5_micros_START_SHIFT)))

#define PWM5_micros_TIMER_SIGNALS_MODES                                                            \
        (((uint32)(PWM5_micros_TC_CAPTURE_SIGNAL_MODE  << PWM5_micros_CAPTURE_SHIFT))         |\
         ((uint32)(PWM5_micros_TC_COUNT_SIGNAL_MODE    << PWM5_micros_COUNT_SHIFT))           |\
         ((uint32)(PWM5_micros_TC_RELOAD_SIGNAL_MODE   << PWM5_micros_RELOAD_SHIFT))          |\
         ((uint32)(PWM5_micros_TC_STOP_SIGNAL_MODE     << PWM5_micros_STOP_SHIFT))            |\
         ((uint32)(PWM5_micros_TC_START_SIGNAL_MODE    << PWM5_micros_START_SHIFT)))
        
#define PWM5_micros_TIMER_UPDOWN_CNT_USED                                                          \
                ((PWM5_micros__COUNT_UPDOWN0 == PWM5_micros_TC_COUNTER_MODE)                  ||\
                 (PWM5_micros__COUNT_UPDOWN1 == PWM5_micros_TC_COUNTER_MODE))

#define PWM5_micros_PWM_UPDOWN_CNT_USED                                                            \
                ((PWM5_micros__CENTER == PWM5_micros_PWM_ALIGN)                               ||\
                 (PWM5_micros__ASYMMETRIC == PWM5_micros_PWM_ALIGN))               
        
#define PWM5_micros_PWM_PR_INIT_VALUE              (1u)
#define PWM5_micros_QUAD_PERIOD_INIT_VALUE         (0x8000u)



#endif /* End CY_TCPWM_PWM5_micros_H */

/* [] END OF FILE */
