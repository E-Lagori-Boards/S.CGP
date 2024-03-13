/*******************************************************************************
* File Name: PWM4_Mux.h
* Version 2.10
*
* Description:
*  This file provides constants and parameter values for the PWM4_Mux
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

#if !defined(CY_TCPWM_PWM4_Mux_H)
#define CY_TCPWM_PWM4_Mux_H


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
} PWM4_Mux_BACKUP_STRUCT;


/*******************************************************************************
* Variables
*******************************************************************************/
extern uint8  PWM4_Mux_initVar;


/***************************************
*   Conditional Compilation Parameters
****************************************/

#define PWM4_Mux_CY_TCPWM_V2                    (CYIPBLOCK_m0s8tcpwm_VERSION == 2u)
#define PWM4_Mux_CY_TCPWM_4000                  (CY_PSOC4_4000)

/* TCPWM Configuration */
#define PWM4_Mux_CONFIG                         (7lu)

/* Quad Mode */
/* Parameters */
#define PWM4_Mux_QUAD_ENCODING_MODES            (0lu)
#define PWM4_Mux_QUAD_AUTO_START                (1lu)

/* Signal modes */
#define PWM4_Mux_QUAD_INDEX_SIGNAL_MODE         (0lu)
#define PWM4_Mux_QUAD_PHIA_SIGNAL_MODE          (3lu)
#define PWM4_Mux_QUAD_PHIB_SIGNAL_MODE          (3lu)
#define PWM4_Mux_QUAD_STOP_SIGNAL_MODE          (0lu)

/* Signal present */
#define PWM4_Mux_QUAD_INDEX_SIGNAL_PRESENT      (0lu)
#define PWM4_Mux_QUAD_STOP_SIGNAL_PRESENT       (0lu)

/* Interrupt Mask */
#define PWM4_Mux_QUAD_INTERRUPT_MASK            (1lu)

/* Timer/Counter Mode */
/* Parameters */
#define PWM4_Mux_TC_RUN_MODE                    (0lu)
#define PWM4_Mux_TC_COUNTER_MODE                (0lu)
#define PWM4_Mux_TC_COMP_CAP_MODE               (2lu)
#define PWM4_Mux_TC_PRESCALER                   (0lu)

/* Signal modes */
#define PWM4_Mux_TC_RELOAD_SIGNAL_MODE          (0lu)
#define PWM4_Mux_TC_COUNT_SIGNAL_MODE           (3lu)
#define PWM4_Mux_TC_START_SIGNAL_MODE           (0lu)
#define PWM4_Mux_TC_STOP_SIGNAL_MODE            (0lu)
#define PWM4_Mux_TC_CAPTURE_SIGNAL_MODE         (0lu)

/* Signal present */
#define PWM4_Mux_TC_RELOAD_SIGNAL_PRESENT       (0lu)
#define PWM4_Mux_TC_COUNT_SIGNAL_PRESENT        (0lu)
#define PWM4_Mux_TC_START_SIGNAL_PRESENT        (0lu)
#define PWM4_Mux_TC_STOP_SIGNAL_PRESENT         (0lu)
#define PWM4_Mux_TC_CAPTURE_SIGNAL_PRESENT      (0lu)

/* Interrupt Mask */
#define PWM4_Mux_TC_INTERRUPT_MASK              (1lu)

/* PWM Mode */
/* Parameters */
#define PWM4_Mux_PWM_KILL_EVENT                 (0lu)
#define PWM4_Mux_PWM_STOP_EVENT                 (0lu)
#define PWM4_Mux_PWM_MODE                       (4lu)
#define PWM4_Mux_PWM_OUT_N_INVERT               (0lu)
#define PWM4_Mux_PWM_OUT_INVERT                 (0lu)
#define PWM4_Mux_PWM_ALIGN                      (0lu)
#define PWM4_Mux_PWM_RUN_MODE                   (0lu)
#define PWM4_Mux_PWM_DEAD_TIME_CYCLE            (0lu)
#define PWM4_Mux_PWM_PRESCALER                  (0lu)

/* Signal modes */
#define PWM4_Mux_PWM_RELOAD_SIGNAL_MODE         (0lu)
#define PWM4_Mux_PWM_COUNT_SIGNAL_MODE          (3lu)
#define PWM4_Mux_PWM_START_SIGNAL_MODE          (0lu)
#define PWM4_Mux_PWM_STOP_SIGNAL_MODE           (0lu)
#define PWM4_Mux_PWM_SWITCH_SIGNAL_MODE         (0lu)

/* Signal present */
#define PWM4_Mux_PWM_RELOAD_SIGNAL_PRESENT      (0lu)
#define PWM4_Mux_PWM_COUNT_SIGNAL_PRESENT       (0lu)
#define PWM4_Mux_PWM_START_SIGNAL_PRESENT       (0lu)
#define PWM4_Mux_PWM_STOP_SIGNAL_PRESENT        (0lu)
#define PWM4_Mux_PWM_SWITCH_SIGNAL_PRESENT      (0lu)

/* Interrupt Mask */
#define PWM4_Mux_PWM_INTERRUPT_MASK             (1lu)


/***************************************
*    Initial Parameter Constants
***************************************/

/* Timer/Counter Mode */
#define PWM4_Mux_TC_PERIOD_VALUE                (65535lu)
#define PWM4_Mux_TC_COMPARE_VALUE               (65535lu)
#define PWM4_Mux_TC_COMPARE_BUF_VALUE           (65535lu)
#define PWM4_Mux_TC_COMPARE_SWAP                (0lu)

/* PWM Mode */
#define PWM4_Mux_PWM_PERIOD_VALUE               (10000lu)
#define PWM4_Mux_PWM_PERIOD_BUF_VALUE           (65535lu)
#define PWM4_Mux_PWM_PERIOD_SWAP                (0lu)
#define PWM4_Mux_PWM_COMPARE_VALUE              (5000lu)
#define PWM4_Mux_PWM_COMPARE_BUF_VALUE          (65535lu)
#define PWM4_Mux_PWM_COMPARE_SWAP               (0lu)


/***************************************
*    Enumerated Types and Parameters
***************************************/

#define PWM4_Mux__LEFT 0
#define PWM4_Mux__RIGHT 1
#define PWM4_Mux__CENTER 2
#define PWM4_Mux__ASYMMETRIC 3

#define PWM4_Mux__X1 0
#define PWM4_Mux__X2 1
#define PWM4_Mux__X4 2

#define PWM4_Mux__PWM 4
#define PWM4_Mux__PWM_DT 5
#define PWM4_Mux__PWM_PR 6

#define PWM4_Mux__INVERSE 1
#define PWM4_Mux__DIRECT 0

#define PWM4_Mux__CAPTURE 2
#define PWM4_Mux__COMPARE 0

#define PWM4_Mux__TRIG_LEVEL 3
#define PWM4_Mux__TRIG_RISING 0
#define PWM4_Mux__TRIG_FALLING 1
#define PWM4_Mux__TRIG_BOTH 2

#define PWM4_Mux__INTR_MASK_TC 1
#define PWM4_Mux__INTR_MASK_CC_MATCH 2
#define PWM4_Mux__INTR_MASK_NONE 0
#define PWM4_Mux__INTR_MASK_TC_CC 3

#define PWM4_Mux__UNCONFIG 8
#define PWM4_Mux__TIMER 1
#define PWM4_Mux__QUAD 3
#define PWM4_Mux__PWM_SEL 7

#define PWM4_Mux__COUNT_UP 0
#define PWM4_Mux__COUNT_DOWN 1
#define PWM4_Mux__COUNT_UPDOWN0 2
#define PWM4_Mux__COUNT_UPDOWN1 3


/* Prescaler */
#define PWM4_Mux_PRESCALE_DIVBY1                ((uint32)(0u << PWM4_Mux_PRESCALER_SHIFT))
#define PWM4_Mux_PRESCALE_DIVBY2                ((uint32)(1u << PWM4_Mux_PRESCALER_SHIFT))
#define PWM4_Mux_PRESCALE_DIVBY4                ((uint32)(2u << PWM4_Mux_PRESCALER_SHIFT))
#define PWM4_Mux_PRESCALE_DIVBY8                ((uint32)(3u << PWM4_Mux_PRESCALER_SHIFT))
#define PWM4_Mux_PRESCALE_DIVBY16               ((uint32)(4u << PWM4_Mux_PRESCALER_SHIFT))
#define PWM4_Mux_PRESCALE_DIVBY32               ((uint32)(5u << PWM4_Mux_PRESCALER_SHIFT))
#define PWM4_Mux_PRESCALE_DIVBY64               ((uint32)(6u << PWM4_Mux_PRESCALER_SHIFT))
#define PWM4_Mux_PRESCALE_DIVBY128              ((uint32)(7u << PWM4_Mux_PRESCALER_SHIFT))

/* TCPWM set modes */
#define PWM4_Mux_MODE_TIMER_COMPARE             ((uint32)(PWM4_Mux__COMPARE         <<  \
                                                                  PWM4_Mux_MODE_SHIFT))
#define PWM4_Mux_MODE_TIMER_CAPTURE             ((uint32)(PWM4_Mux__CAPTURE         <<  \
                                                                  PWM4_Mux_MODE_SHIFT))
#define PWM4_Mux_MODE_QUAD                      ((uint32)(PWM4_Mux__QUAD            <<  \
                                                                  PWM4_Mux_MODE_SHIFT))
#define PWM4_Mux_MODE_PWM                       ((uint32)(PWM4_Mux__PWM             <<  \
                                                                  PWM4_Mux_MODE_SHIFT))
#define PWM4_Mux_MODE_PWM_DT                    ((uint32)(PWM4_Mux__PWM_DT          <<  \
                                                                  PWM4_Mux_MODE_SHIFT))
#define PWM4_Mux_MODE_PWM_PR                    ((uint32)(PWM4_Mux__PWM_PR          <<  \
                                                                  PWM4_Mux_MODE_SHIFT))

/* Quad Modes */
#define PWM4_Mux_MODE_X1                        ((uint32)(PWM4_Mux__X1              <<  \
                                                                  PWM4_Mux_QUAD_MODE_SHIFT))
#define PWM4_Mux_MODE_X2                        ((uint32)(PWM4_Mux__X2              <<  \
                                                                  PWM4_Mux_QUAD_MODE_SHIFT))
#define PWM4_Mux_MODE_X4                        ((uint32)(PWM4_Mux__X4              <<  \
                                                                  PWM4_Mux_QUAD_MODE_SHIFT))

/* Counter modes */
#define PWM4_Mux_COUNT_UP                       ((uint32)(PWM4_Mux__COUNT_UP        <<  \
                                                                  PWM4_Mux_UPDOWN_SHIFT))
#define PWM4_Mux_COUNT_DOWN                     ((uint32)(PWM4_Mux__COUNT_DOWN      <<  \
                                                                  PWM4_Mux_UPDOWN_SHIFT))
#define PWM4_Mux_COUNT_UPDOWN0                  ((uint32)(PWM4_Mux__COUNT_UPDOWN0   <<  \
                                                                  PWM4_Mux_UPDOWN_SHIFT))
#define PWM4_Mux_COUNT_UPDOWN1                  ((uint32)(PWM4_Mux__COUNT_UPDOWN1   <<  \
                                                                  PWM4_Mux_UPDOWN_SHIFT))

/* PWM output invert */
#define PWM4_Mux_INVERT_LINE                    ((uint32)(PWM4_Mux__INVERSE         <<  \
                                                                  PWM4_Mux_INV_OUT_SHIFT))
#define PWM4_Mux_INVERT_LINE_N                  ((uint32)(PWM4_Mux__INVERSE         <<  \
                                                                  PWM4_Mux_INV_COMPL_OUT_SHIFT))

/* Trigger modes */
#define PWM4_Mux_TRIG_RISING                    ((uint32)PWM4_Mux__TRIG_RISING)
#define PWM4_Mux_TRIG_FALLING                   ((uint32)PWM4_Mux__TRIG_FALLING)
#define PWM4_Mux_TRIG_BOTH                      ((uint32)PWM4_Mux__TRIG_BOTH)
#define PWM4_Mux_TRIG_LEVEL                     ((uint32)PWM4_Mux__TRIG_LEVEL)

/* Interrupt mask */
#define PWM4_Mux_INTR_MASK_TC                   ((uint32)PWM4_Mux__INTR_MASK_TC)
#define PWM4_Mux_INTR_MASK_CC_MATCH             ((uint32)PWM4_Mux__INTR_MASK_CC_MATCH)

/* PWM Output Controls */
#define PWM4_Mux_CC_MATCH_SET                   (0x00u)
#define PWM4_Mux_CC_MATCH_CLEAR                 (0x01u)
#define PWM4_Mux_CC_MATCH_INVERT                (0x02u)
#define PWM4_Mux_CC_MATCH_NO_CHANGE             (0x03u)
#define PWM4_Mux_OVERLOW_SET                    (0x00u)
#define PWM4_Mux_OVERLOW_CLEAR                  (0x04u)
#define PWM4_Mux_OVERLOW_INVERT                 (0x08u)
#define PWM4_Mux_OVERLOW_NO_CHANGE              (0x0Cu)
#define PWM4_Mux_UNDERFLOW_SET                  (0x00u)
#define PWM4_Mux_UNDERFLOW_CLEAR                (0x10u)
#define PWM4_Mux_UNDERFLOW_INVERT               (0x20u)
#define PWM4_Mux_UNDERFLOW_NO_CHANGE            (0x30u)

/* PWM Align */
#define PWM4_Mux_PWM_MODE_LEFT                  (PWM4_Mux_CC_MATCH_CLEAR        |   \
                                                         PWM4_Mux_OVERLOW_SET           |   \
                                                         PWM4_Mux_UNDERFLOW_NO_CHANGE)
#define PWM4_Mux_PWM_MODE_RIGHT                 (PWM4_Mux_CC_MATCH_SET          |   \
                                                         PWM4_Mux_OVERLOW_NO_CHANGE     |   \
                                                         PWM4_Mux_UNDERFLOW_CLEAR)
#define PWM4_Mux_PWM_MODE_ASYM                  (PWM4_Mux_CC_MATCH_INVERT       |   \
                                                         PWM4_Mux_OVERLOW_SET           |   \
                                                         PWM4_Mux_UNDERFLOW_CLEAR)

#if (PWM4_Mux_CY_TCPWM_V2)
    #if(PWM4_Mux_CY_TCPWM_4000)
        #define PWM4_Mux_PWM_MODE_CENTER                (PWM4_Mux_CC_MATCH_INVERT       |   \
                                                                 PWM4_Mux_OVERLOW_NO_CHANGE     |   \
                                                                 PWM4_Mux_UNDERFLOW_CLEAR)
    #else
        #define PWM4_Mux_PWM_MODE_CENTER                (PWM4_Mux_CC_MATCH_INVERT       |   \
                                                                 PWM4_Mux_OVERLOW_SET           |   \
                                                                 PWM4_Mux_UNDERFLOW_CLEAR)
    #endif /* (PWM4_Mux_CY_TCPWM_4000) */
#else
    #define PWM4_Mux_PWM_MODE_CENTER                (PWM4_Mux_CC_MATCH_INVERT       |   \
                                                             PWM4_Mux_OVERLOW_NO_CHANGE     |   \
                                                             PWM4_Mux_UNDERFLOW_CLEAR)
#endif /* (PWM4_Mux_CY_TCPWM_NEW) */

/* Command operations without condition */
#define PWM4_Mux_CMD_CAPTURE                    (0u)
#define PWM4_Mux_CMD_RELOAD                     (8u)
#define PWM4_Mux_CMD_STOP                       (16u)
#define PWM4_Mux_CMD_START                      (24u)

/* Status */
#define PWM4_Mux_STATUS_DOWN                    (1u)
#define PWM4_Mux_STATUS_RUNNING                 (2u)


/***************************************
*        Function Prototypes
****************************************/

void   PWM4_Mux_Init(void);
void   PWM4_Mux_Enable(void);
void   PWM4_Mux_Start(void);
void   PWM4_Mux_Stop(void);

void   PWM4_Mux_SetMode(uint32 mode);
void   PWM4_Mux_SetCounterMode(uint32 counterMode);
void   PWM4_Mux_SetPWMMode(uint32 modeMask);
void   PWM4_Mux_SetQDMode(uint32 qdMode);

void   PWM4_Mux_SetPrescaler(uint32 prescaler);
void   PWM4_Mux_TriggerCommand(uint32 mask, uint32 command);
void   PWM4_Mux_SetOneShot(uint32 oneShotEnable);
uint32 PWM4_Mux_ReadStatus(void);

void   PWM4_Mux_SetPWMSyncKill(uint32 syncKillEnable);
void   PWM4_Mux_SetPWMStopOnKill(uint32 stopOnKillEnable);
void   PWM4_Mux_SetPWMDeadTime(uint32 deadTime);
void   PWM4_Mux_SetPWMInvert(uint32 mask);

void   PWM4_Mux_SetInterruptMode(uint32 interruptMask);
uint32 PWM4_Mux_GetInterruptSourceMasked(void);
uint32 PWM4_Mux_GetInterruptSource(void);
void   PWM4_Mux_ClearInterrupt(uint32 interruptMask);
void   PWM4_Mux_SetInterrupt(uint32 interruptMask);

void   PWM4_Mux_WriteCounter(uint32 count);
uint32 PWM4_Mux_ReadCounter(void);

uint32 PWM4_Mux_ReadCapture(void);
uint32 PWM4_Mux_ReadCaptureBuf(void);

void   PWM4_Mux_WritePeriod(uint32 period);
uint32 PWM4_Mux_ReadPeriod(void);
void   PWM4_Mux_WritePeriodBuf(uint32 periodBuf);
uint32 PWM4_Mux_ReadPeriodBuf(void);

void   PWM4_Mux_WriteCompare(uint32 compare);
uint32 PWM4_Mux_ReadCompare(void);
void   PWM4_Mux_WriteCompareBuf(uint32 compareBuf);
uint32 PWM4_Mux_ReadCompareBuf(void);

void   PWM4_Mux_SetPeriodSwap(uint32 swapEnable);
void   PWM4_Mux_SetCompareSwap(uint32 swapEnable);

void   PWM4_Mux_SetCaptureMode(uint32 triggerMode);
void   PWM4_Mux_SetReloadMode(uint32 triggerMode);
void   PWM4_Mux_SetStartMode(uint32 triggerMode);
void   PWM4_Mux_SetStopMode(uint32 triggerMode);
void   PWM4_Mux_SetCountMode(uint32 triggerMode);

void   PWM4_Mux_SaveConfig(void);
void   PWM4_Mux_RestoreConfig(void);
void   PWM4_Mux_Sleep(void);
void   PWM4_Mux_Wakeup(void);


/***************************************
*             Registers
***************************************/

#define PWM4_Mux_BLOCK_CONTROL_REG              (*(reg32 *) PWM4_Mux_cy_m0s8_tcpwm_1__TCPWM_CTRL )
#define PWM4_Mux_BLOCK_CONTROL_PTR              ( (reg32 *) PWM4_Mux_cy_m0s8_tcpwm_1__TCPWM_CTRL )
#define PWM4_Mux_COMMAND_REG                    (*(reg32 *) PWM4_Mux_cy_m0s8_tcpwm_1__TCPWM_CMD )
#define PWM4_Mux_COMMAND_PTR                    ( (reg32 *) PWM4_Mux_cy_m0s8_tcpwm_1__TCPWM_CMD )
#define PWM4_Mux_INTRRUPT_CAUSE_REG             (*(reg32 *) PWM4_Mux_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE )
#define PWM4_Mux_INTRRUPT_CAUSE_PTR             ( (reg32 *) PWM4_Mux_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE )
#define PWM4_Mux_CONTROL_REG                    (*(reg32 *) PWM4_Mux_cy_m0s8_tcpwm_1__CTRL )
#define PWM4_Mux_CONTROL_PTR                    ( (reg32 *) PWM4_Mux_cy_m0s8_tcpwm_1__CTRL )
#define PWM4_Mux_STATUS_REG                     (*(reg32 *) PWM4_Mux_cy_m0s8_tcpwm_1__STATUS )
#define PWM4_Mux_STATUS_PTR                     ( (reg32 *) PWM4_Mux_cy_m0s8_tcpwm_1__STATUS )
#define PWM4_Mux_COUNTER_REG                    (*(reg32 *) PWM4_Mux_cy_m0s8_tcpwm_1__COUNTER )
#define PWM4_Mux_COUNTER_PTR                    ( (reg32 *) PWM4_Mux_cy_m0s8_tcpwm_1__COUNTER )
#define PWM4_Mux_COMP_CAP_REG                   (*(reg32 *) PWM4_Mux_cy_m0s8_tcpwm_1__CC )
#define PWM4_Mux_COMP_CAP_PTR                   ( (reg32 *) PWM4_Mux_cy_m0s8_tcpwm_1__CC )
#define PWM4_Mux_COMP_CAP_BUF_REG               (*(reg32 *) PWM4_Mux_cy_m0s8_tcpwm_1__CC_BUFF )
#define PWM4_Mux_COMP_CAP_BUF_PTR               ( (reg32 *) PWM4_Mux_cy_m0s8_tcpwm_1__CC_BUFF )
#define PWM4_Mux_PERIOD_REG                     (*(reg32 *) PWM4_Mux_cy_m0s8_tcpwm_1__PERIOD )
#define PWM4_Mux_PERIOD_PTR                     ( (reg32 *) PWM4_Mux_cy_m0s8_tcpwm_1__PERIOD )
#define PWM4_Mux_PERIOD_BUF_REG                 (*(reg32 *) PWM4_Mux_cy_m0s8_tcpwm_1__PERIOD_BUFF )
#define PWM4_Mux_PERIOD_BUF_PTR                 ( (reg32 *) PWM4_Mux_cy_m0s8_tcpwm_1__PERIOD_BUFF )
#define PWM4_Mux_TRIG_CONTROL0_REG              (*(reg32 *) PWM4_Mux_cy_m0s8_tcpwm_1__TR_CTRL0 )
#define PWM4_Mux_TRIG_CONTROL0_PTR              ( (reg32 *) PWM4_Mux_cy_m0s8_tcpwm_1__TR_CTRL0 )
#define PWM4_Mux_TRIG_CONTROL1_REG              (*(reg32 *) PWM4_Mux_cy_m0s8_tcpwm_1__TR_CTRL1 )
#define PWM4_Mux_TRIG_CONTROL1_PTR              ( (reg32 *) PWM4_Mux_cy_m0s8_tcpwm_1__TR_CTRL1 )
#define PWM4_Mux_TRIG_CONTROL2_REG              (*(reg32 *) PWM4_Mux_cy_m0s8_tcpwm_1__TR_CTRL2 )
#define PWM4_Mux_TRIG_CONTROL2_PTR              ( (reg32 *) PWM4_Mux_cy_m0s8_tcpwm_1__TR_CTRL2 )
#define PWM4_Mux_INTERRUPT_REQ_REG              (*(reg32 *) PWM4_Mux_cy_m0s8_tcpwm_1__INTR )
#define PWM4_Mux_INTERRUPT_REQ_PTR              ( (reg32 *) PWM4_Mux_cy_m0s8_tcpwm_1__INTR )
#define PWM4_Mux_INTERRUPT_SET_REG              (*(reg32 *) PWM4_Mux_cy_m0s8_tcpwm_1__INTR_SET )
#define PWM4_Mux_INTERRUPT_SET_PTR              ( (reg32 *) PWM4_Mux_cy_m0s8_tcpwm_1__INTR_SET )
#define PWM4_Mux_INTERRUPT_MASK_REG             (*(reg32 *) PWM4_Mux_cy_m0s8_tcpwm_1__INTR_MASK )
#define PWM4_Mux_INTERRUPT_MASK_PTR             ( (reg32 *) PWM4_Mux_cy_m0s8_tcpwm_1__INTR_MASK )
#define PWM4_Mux_INTERRUPT_MASKED_REG           (*(reg32 *) PWM4_Mux_cy_m0s8_tcpwm_1__INTR_MASKED )
#define PWM4_Mux_INTERRUPT_MASKED_PTR           ( (reg32 *) PWM4_Mux_cy_m0s8_tcpwm_1__INTR_MASKED )


/***************************************
*       Registers Constants
***************************************/

/* Mask */
#define PWM4_Mux_MASK                           ((uint32)PWM4_Mux_cy_m0s8_tcpwm_1__TCPWM_CTRL_MASK)

/* Shift constants for control register */
#define PWM4_Mux_RELOAD_CC_SHIFT                (0u)
#define PWM4_Mux_RELOAD_PERIOD_SHIFT            (1u)
#define PWM4_Mux_PWM_SYNC_KILL_SHIFT            (2u)
#define PWM4_Mux_PWM_STOP_KILL_SHIFT            (3u)
#define PWM4_Mux_PRESCALER_SHIFT                (8u)
#define PWM4_Mux_UPDOWN_SHIFT                   (16u)
#define PWM4_Mux_ONESHOT_SHIFT                  (18u)
#define PWM4_Mux_QUAD_MODE_SHIFT                (20u)
#define PWM4_Mux_INV_OUT_SHIFT                  (20u)
#define PWM4_Mux_INV_COMPL_OUT_SHIFT            (21u)
#define PWM4_Mux_MODE_SHIFT                     (24u)

/* Mask constants for control register */
#define PWM4_Mux_RELOAD_CC_MASK                 ((uint32)(PWM4_Mux_1BIT_MASK        <<  \
                                                                            PWM4_Mux_RELOAD_CC_SHIFT))
#define PWM4_Mux_RELOAD_PERIOD_MASK             ((uint32)(PWM4_Mux_1BIT_MASK        <<  \
                                                                            PWM4_Mux_RELOAD_PERIOD_SHIFT))
#define PWM4_Mux_PWM_SYNC_KILL_MASK             ((uint32)(PWM4_Mux_1BIT_MASK        <<  \
                                                                            PWM4_Mux_PWM_SYNC_KILL_SHIFT))
#define PWM4_Mux_PWM_STOP_KILL_MASK             ((uint32)(PWM4_Mux_1BIT_MASK        <<  \
                                                                            PWM4_Mux_PWM_STOP_KILL_SHIFT))
#define PWM4_Mux_PRESCALER_MASK                 ((uint32)(PWM4_Mux_8BIT_MASK        <<  \
                                                                            PWM4_Mux_PRESCALER_SHIFT))
#define PWM4_Mux_UPDOWN_MASK                    ((uint32)(PWM4_Mux_2BIT_MASK        <<  \
                                                                            PWM4_Mux_UPDOWN_SHIFT))
#define PWM4_Mux_ONESHOT_MASK                   ((uint32)(PWM4_Mux_1BIT_MASK        <<  \
                                                                            PWM4_Mux_ONESHOT_SHIFT))
#define PWM4_Mux_QUAD_MODE_MASK                 ((uint32)(PWM4_Mux_3BIT_MASK        <<  \
                                                                            PWM4_Mux_QUAD_MODE_SHIFT))
#define PWM4_Mux_INV_OUT_MASK                   ((uint32)(PWM4_Mux_2BIT_MASK        <<  \
                                                                            PWM4_Mux_INV_OUT_SHIFT))
#define PWM4_Mux_MODE_MASK                      ((uint32)(PWM4_Mux_3BIT_MASK        <<  \
                                                                            PWM4_Mux_MODE_SHIFT))

/* Shift constants for trigger control register 1 */
#define PWM4_Mux_CAPTURE_SHIFT                  (0u)
#define PWM4_Mux_COUNT_SHIFT                    (2u)
#define PWM4_Mux_RELOAD_SHIFT                   (4u)
#define PWM4_Mux_STOP_SHIFT                     (6u)
#define PWM4_Mux_START_SHIFT                    (8u)

/* Mask constants for trigger control register 1 */
#define PWM4_Mux_CAPTURE_MASK                   ((uint32)(PWM4_Mux_2BIT_MASK        <<  \
                                                                  PWM4_Mux_CAPTURE_SHIFT))
#define PWM4_Mux_COUNT_MASK                     ((uint32)(PWM4_Mux_2BIT_MASK        <<  \
                                                                  PWM4_Mux_COUNT_SHIFT))
#define PWM4_Mux_RELOAD_MASK                    ((uint32)(PWM4_Mux_2BIT_MASK        <<  \
                                                                  PWM4_Mux_RELOAD_SHIFT))
#define PWM4_Mux_STOP_MASK                      ((uint32)(PWM4_Mux_2BIT_MASK        <<  \
                                                                  PWM4_Mux_STOP_SHIFT))
#define PWM4_Mux_START_MASK                     ((uint32)(PWM4_Mux_2BIT_MASK        <<  \
                                                                  PWM4_Mux_START_SHIFT))

/* MASK */
#define PWM4_Mux_1BIT_MASK                      ((uint32)0x01u)
#define PWM4_Mux_2BIT_MASK                      ((uint32)0x03u)
#define PWM4_Mux_3BIT_MASK                      ((uint32)0x07u)
#define PWM4_Mux_6BIT_MASK                      ((uint32)0x3Fu)
#define PWM4_Mux_8BIT_MASK                      ((uint32)0xFFu)
#define PWM4_Mux_16BIT_MASK                     ((uint32)0xFFFFu)

/* Shift constant for status register */
#define PWM4_Mux_RUNNING_STATUS_SHIFT           (30u)


/***************************************
*    Initial Constants
***************************************/

#define PWM4_Mux_CTRL_QUAD_BASE_CONFIG                                                          \
        (((uint32)(PWM4_Mux_QUAD_ENCODING_MODES     << PWM4_Mux_QUAD_MODE_SHIFT))       |\
         ((uint32)(PWM4_Mux_CONFIG                  << PWM4_Mux_MODE_SHIFT)))

#define PWM4_Mux_CTRL_PWM_BASE_CONFIG                                                           \
        (((uint32)(PWM4_Mux_PWM_STOP_EVENT          << PWM4_Mux_PWM_STOP_KILL_SHIFT))   |\
         ((uint32)(PWM4_Mux_PWM_OUT_INVERT          << PWM4_Mux_INV_OUT_SHIFT))         |\
         ((uint32)(PWM4_Mux_PWM_OUT_N_INVERT        << PWM4_Mux_INV_COMPL_OUT_SHIFT))   |\
         ((uint32)(PWM4_Mux_PWM_MODE                << PWM4_Mux_MODE_SHIFT)))

#define PWM4_Mux_CTRL_PWM_RUN_MODE                                                              \
            ((uint32)(PWM4_Mux_PWM_RUN_MODE         << PWM4_Mux_ONESHOT_SHIFT))
            
#define PWM4_Mux_CTRL_PWM_ALIGN                                                                 \
            ((uint32)(PWM4_Mux_PWM_ALIGN            << PWM4_Mux_UPDOWN_SHIFT))

#define PWM4_Mux_CTRL_PWM_KILL_EVENT                                                            \
             ((uint32)(PWM4_Mux_PWM_KILL_EVENT      << PWM4_Mux_PWM_SYNC_KILL_SHIFT))

#define PWM4_Mux_CTRL_PWM_DEAD_TIME_CYCLE                                                       \
            ((uint32)(PWM4_Mux_PWM_DEAD_TIME_CYCLE  << PWM4_Mux_PRESCALER_SHIFT))

#define PWM4_Mux_CTRL_PWM_PRESCALER                                                             \
            ((uint32)(PWM4_Mux_PWM_PRESCALER        << PWM4_Mux_PRESCALER_SHIFT))

#define PWM4_Mux_CTRL_TIMER_BASE_CONFIG                                                         \
        (((uint32)(PWM4_Mux_TC_PRESCALER            << PWM4_Mux_PRESCALER_SHIFT))       |\
         ((uint32)(PWM4_Mux_TC_COUNTER_MODE         << PWM4_Mux_UPDOWN_SHIFT))          |\
         ((uint32)(PWM4_Mux_TC_RUN_MODE             << PWM4_Mux_ONESHOT_SHIFT))         |\
         ((uint32)(PWM4_Mux_TC_COMP_CAP_MODE        << PWM4_Mux_MODE_SHIFT)))
        
#define PWM4_Mux_QUAD_SIGNALS_MODES                                                             \
        (((uint32)(PWM4_Mux_QUAD_PHIA_SIGNAL_MODE   << PWM4_Mux_COUNT_SHIFT))           |\
         ((uint32)(PWM4_Mux_QUAD_INDEX_SIGNAL_MODE  << PWM4_Mux_RELOAD_SHIFT))          |\
         ((uint32)(PWM4_Mux_QUAD_STOP_SIGNAL_MODE   << PWM4_Mux_STOP_SHIFT))            |\
         ((uint32)(PWM4_Mux_QUAD_PHIB_SIGNAL_MODE   << PWM4_Mux_START_SHIFT)))

#define PWM4_Mux_PWM_SIGNALS_MODES                                                              \
        (((uint32)(PWM4_Mux_PWM_SWITCH_SIGNAL_MODE  << PWM4_Mux_CAPTURE_SHIFT))         |\
         ((uint32)(PWM4_Mux_PWM_COUNT_SIGNAL_MODE   << PWM4_Mux_COUNT_SHIFT))           |\
         ((uint32)(PWM4_Mux_PWM_RELOAD_SIGNAL_MODE  << PWM4_Mux_RELOAD_SHIFT))          |\
         ((uint32)(PWM4_Mux_PWM_STOP_SIGNAL_MODE    << PWM4_Mux_STOP_SHIFT))            |\
         ((uint32)(PWM4_Mux_PWM_START_SIGNAL_MODE   << PWM4_Mux_START_SHIFT)))

#define PWM4_Mux_TIMER_SIGNALS_MODES                                                            \
        (((uint32)(PWM4_Mux_TC_CAPTURE_SIGNAL_MODE  << PWM4_Mux_CAPTURE_SHIFT))         |\
         ((uint32)(PWM4_Mux_TC_COUNT_SIGNAL_MODE    << PWM4_Mux_COUNT_SHIFT))           |\
         ((uint32)(PWM4_Mux_TC_RELOAD_SIGNAL_MODE   << PWM4_Mux_RELOAD_SHIFT))          |\
         ((uint32)(PWM4_Mux_TC_STOP_SIGNAL_MODE     << PWM4_Mux_STOP_SHIFT))            |\
         ((uint32)(PWM4_Mux_TC_START_SIGNAL_MODE    << PWM4_Mux_START_SHIFT)))
        
#define PWM4_Mux_TIMER_UPDOWN_CNT_USED                                                          \
                ((PWM4_Mux__COUNT_UPDOWN0 == PWM4_Mux_TC_COUNTER_MODE)                  ||\
                 (PWM4_Mux__COUNT_UPDOWN1 == PWM4_Mux_TC_COUNTER_MODE))

#define PWM4_Mux_PWM_UPDOWN_CNT_USED                                                            \
                ((PWM4_Mux__CENTER == PWM4_Mux_PWM_ALIGN)                               ||\
                 (PWM4_Mux__ASYMMETRIC == PWM4_Mux_PWM_ALIGN))               
        
#define PWM4_Mux_PWM_PR_INIT_VALUE              (1u)
#define PWM4_Mux_QUAD_PERIOD_INIT_VALUE         (0x8000u)



#endif /* End CY_TCPWM_PWM4_Mux_H */

/* [] END OF FILE */
