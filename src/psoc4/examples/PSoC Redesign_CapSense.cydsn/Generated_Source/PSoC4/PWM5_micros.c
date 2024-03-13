/*******************************************************************************
* File Name: PWM5_micros.c
* Version 2.10
*
* Description:
*  This file provides the source code to the API for the PWM5_micros
*  component
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

#include "PWM5_micros.h"

uint8 PWM5_micros_initVar = 0u;


/*******************************************************************************
* Function Name: PWM5_micros_Init
********************************************************************************
*
* Summary:
*  Initialize/Restore default PWM5_micros configuration.
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
void PWM5_micros_Init(void)
{

    /* Set values from customizer to CTRL */
    #if (PWM5_micros__QUAD == PWM5_micros_CONFIG)
        PWM5_micros_CONTROL_REG = PWM5_micros_CTRL_QUAD_BASE_CONFIG;
        
        /* Set values from customizer to CTRL1 */
        PWM5_micros_TRIG_CONTROL1_REG  = PWM5_micros_QUAD_SIGNALS_MODES;

        /* Set values from customizer to INTR */
        PWM5_micros_SetInterruptMode(PWM5_micros_QUAD_INTERRUPT_MASK);
        
         /* Set other values */
        PWM5_micros_SetCounterMode(PWM5_micros_COUNT_DOWN);
        PWM5_micros_WritePeriod(PWM5_micros_QUAD_PERIOD_INIT_VALUE);
        PWM5_micros_WriteCounter(PWM5_micros_QUAD_PERIOD_INIT_VALUE);
    #endif  /* (PWM5_micros__QUAD == PWM5_micros_CONFIG) */

    #if (PWM5_micros__TIMER == PWM5_micros_CONFIG)
        PWM5_micros_CONTROL_REG = PWM5_micros_CTRL_TIMER_BASE_CONFIG;
        
        /* Set values from customizer to CTRL1 */
        PWM5_micros_TRIG_CONTROL1_REG  = PWM5_micros_TIMER_SIGNALS_MODES;
    
        /* Set values from customizer to INTR */
        PWM5_micros_SetInterruptMode(PWM5_micros_TC_INTERRUPT_MASK);
        
        /* Set other values from customizer */
        PWM5_micros_WritePeriod(PWM5_micros_TC_PERIOD_VALUE );

        #if (PWM5_micros__COMPARE == PWM5_micros_TC_COMP_CAP_MODE)
            PWM5_micros_WriteCompare(PWM5_micros_TC_COMPARE_VALUE);

            #if (1u == PWM5_micros_TC_COMPARE_SWAP)
                PWM5_micros_SetCompareSwap(1u);
                PWM5_micros_WriteCompareBuf(PWM5_micros_TC_COMPARE_BUF_VALUE);
            #endif  /* (1u == PWM5_micros_TC_COMPARE_SWAP) */
        #endif  /* (PWM5_micros__COMPARE == PWM5_micros_TC_COMP_CAP_MODE) */

        /* Initialize counter value */
        #if (PWM5_micros_CY_TCPWM_V2 && PWM5_micros_TIMER_UPDOWN_CNT_USED && !PWM5_micros_CY_TCPWM_4000)
            PWM5_micros_WriteCounter(1u);
        #elif(PWM5_micros__COUNT_DOWN == PWM5_micros_TC_COUNTER_MODE)
            PWM5_micros_WriteCounter(PWM5_micros_TC_PERIOD_VALUE);
        #else
            PWM5_micros_WriteCounter(0u);
        #endif /* (PWM5_micros_CY_TCPWM_V2 && PWM5_micros_TIMER_UPDOWN_CNT_USED && !PWM5_micros_CY_TCPWM_4000) */
    #endif  /* (PWM5_micros__TIMER == PWM5_micros_CONFIG) */

    #if (PWM5_micros__PWM_SEL == PWM5_micros_CONFIG)
        PWM5_micros_CONTROL_REG = PWM5_micros_CTRL_PWM_BASE_CONFIG;

        #if (PWM5_micros__PWM_PR == PWM5_micros_PWM_MODE)
            PWM5_micros_CONTROL_REG |= PWM5_micros_CTRL_PWM_RUN_MODE;
            PWM5_micros_WriteCounter(PWM5_micros_PWM_PR_INIT_VALUE);
        #else
            PWM5_micros_CONTROL_REG |= PWM5_micros_CTRL_PWM_ALIGN | PWM5_micros_CTRL_PWM_KILL_EVENT;
            
            /* Initialize counter value */
            #if (PWM5_micros_CY_TCPWM_V2 && PWM5_micros_PWM_UPDOWN_CNT_USED && !PWM5_micros_CY_TCPWM_4000)
                PWM5_micros_WriteCounter(1u);
            #elif (PWM5_micros__RIGHT == PWM5_micros_PWM_ALIGN)
                PWM5_micros_WriteCounter(PWM5_micros_PWM_PERIOD_VALUE);
            #else 
                PWM5_micros_WriteCounter(0u);
            #endif  /* (PWM5_micros_CY_TCPWM_V2 && PWM5_micros_PWM_UPDOWN_CNT_USED && !PWM5_micros_CY_TCPWM_4000) */
        #endif  /* (PWM5_micros__PWM_PR == PWM5_micros_PWM_MODE) */

        #if (PWM5_micros__PWM_DT == PWM5_micros_PWM_MODE)
            PWM5_micros_CONTROL_REG |= PWM5_micros_CTRL_PWM_DEAD_TIME_CYCLE;
        #endif  /* (PWM5_micros__PWM_DT == PWM5_micros_PWM_MODE) */

        #if (PWM5_micros__PWM == PWM5_micros_PWM_MODE)
            PWM5_micros_CONTROL_REG |= PWM5_micros_CTRL_PWM_PRESCALER;
        #endif  /* (PWM5_micros__PWM == PWM5_micros_PWM_MODE) */

        /* Set values from customizer to CTRL1 */
        PWM5_micros_TRIG_CONTROL1_REG  = PWM5_micros_PWM_SIGNALS_MODES;
    
        /* Set values from customizer to INTR */
        PWM5_micros_SetInterruptMode(PWM5_micros_PWM_INTERRUPT_MASK);

        /* Set values from customizer to CTRL2 */
        #if (PWM5_micros__PWM_PR == PWM5_micros_PWM_MODE)
            PWM5_micros_TRIG_CONTROL2_REG =
                    (PWM5_micros_CC_MATCH_NO_CHANGE    |
                    PWM5_micros_OVERLOW_NO_CHANGE      |
                    PWM5_micros_UNDERFLOW_NO_CHANGE);
        #else
            #if (PWM5_micros__LEFT == PWM5_micros_PWM_ALIGN)
                PWM5_micros_TRIG_CONTROL2_REG = PWM5_micros_PWM_MODE_LEFT;
            #endif  /* ( PWM5_micros_PWM_LEFT == PWM5_micros_PWM_ALIGN) */

            #if (PWM5_micros__RIGHT == PWM5_micros_PWM_ALIGN)
                PWM5_micros_TRIG_CONTROL2_REG = PWM5_micros_PWM_MODE_RIGHT;
            #endif  /* ( PWM5_micros_PWM_RIGHT == PWM5_micros_PWM_ALIGN) */

            #if (PWM5_micros__CENTER == PWM5_micros_PWM_ALIGN)
                PWM5_micros_TRIG_CONTROL2_REG = PWM5_micros_PWM_MODE_CENTER;
            #endif  /* ( PWM5_micros_PWM_CENTER == PWM5_micros_PWM_ALIGN) */

            #if (PWM5_micros__ASYMMETRIC == PWM5_micros_PWM_ALIGN)
                PWM5_micros_TRIG_CONTROL2_REG = PWM5_micros_PWM_MODE_ASYM;
            #endif  /* (PWM5_micros__ASYMMETRIC == PWM5_micros_PWM_ALIGN) */
        #endif  /* (PWM5_micros__PWM_PR == PWM5_micros_PWM_MODE) */

        /* Set other values from customizer */
        PWM5_micros_WritePeriod(PWM5_micros_PWM_PERIOD_VALUE );
        PWM5_micros_WriteCompare(PWM5_micros_PWM_COMPARE_VALUE);

        #if (1u == PWM5_micros_PWM_COMPARE_SWAP)
            PWM5_micros_SetCompareSwap(1u);
            PWM5_micros_WriteCompareBuf(PWM5_micros_PWM_COMPARE_BUF_VALUE);
        #endif  /* (1u == PWM5_micros_PWM_COMPARE_SWAP) */

        #if (1u == PWM5_micros_PWM_PERIOD_SWAP)
            PWM5_micros_SetPeriodSwap(1u);
            PWM5_micros_WritePeriodBuf(PWM5_micros_PWM_PERIOD_BUF_VALUE);
        #endif  /* (1u == PWM5_micros_PWM_PERIOD_SWAP) */
    #endif  /* (PWM5_micros__PWM_SEL == PWM5_micros_CONFIG) */
    
}


/*******************************************************************************
* Function Name: PWM5_micros_Enable
********************************************************************************
*
* Summary:
*  Enables the PWM5_micros.
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
void PWM5_micros_Enable(void)
{
    uint8 enableInterrupts;

    enableInterrupts = CyEnterCriticalSection();
    PWM5_micros_BLOCK_CONTROL_REG |= PWM5_micros_MASK;
    CyExitCriticalSection(enableInterrupts);

    /* Start Timer or PWM if start input is absent */
    #if (PWM5_micros__PWM_SEL == PWM5_micros_CONFIG)
        #if (0u == PWM5_micros_PWM_START_SIGNAL_PRESENT)
            PWM5_micros_TriggerCommand(PWM5_micros_MASK, PWM5_micros_CMD_START);
        #endif /* (0u == PWM5_micros_PWM_START_SIGNAL_PRESENT) */
    #endif /* (PWM5_micros__PWM_SEL == PWM5_micros_CONFIG) */

    #if (PWM5_micros__TIMER == PWM5_micros_CONFIG)
        #if (0u == PWM5_micros_TC_START_SIGNAL_PRESENT)
            PWM5_micros_TriggerCommand(PWM5_micros_MASK, PWM5_micros_CMD_START);
        #endif /* (0u == PWM5_micros_TC_START_SIGNAL_PRESENT) */
    #endif /* (PWM5_micros__TIMER == PWM5_micros_CONFIG) */
    
    #if (PWM5_micros__QUAD == PWM5_micros_CONFIG)
        #if (0u != PWM5_micros_QUAD_AUTO_START)
            PWM5_micros_TriggerCommand(PWM5_micros_MASK, PWM5_micros_CMD_RELOAD);
        #endif /* (0u != PWM5_micros_QUAD_AUTO_START) */
    #endif  /* (PWM5_micros__QUAD == PWM5_micros_CONFIG) */
}


/*******************************************************************************
* Function Name: PWM5_micros_Start
********************************************************************************
*
* Summary:
*  Initializes the PWM5_micros with default customizer
*  values when called the first time and enables the PWM5_micros.
*  For subsequent calls the configuration is left unchanged and the component is
*  just enabled.
*
* Parameters:
*  None
*
* Return:
*  None
*
* Global variables:
*  PWM5_micros_initVar: global variable is used to indicate initial
*  configuration of this component.  The variable is initialized to zero and set
*  to 1 the first time PWM5_micros_Start() is called. This allows
*  enabling/disabling a component without re-initialization in all subsequent
*  calls to the PWM5_micros_Start() routine.
*
*******************************************************************************/
void PWM5_micros_Start(void)
{
    if (0u == PWM5_micros_initVar)
    {
        PWM5_micros_Init();
        PWM5_micros_initVar = 1u;
    }

    PWM5_micros_Enable();
}


/*******************************************************************************
* Function Name: PWM5_micros_Stop
********************************************************************************
*
* Summary:
*  Disables the PWM5_micros.
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
void PWM5_micros_Stop(void)
{
    uint8 enableInterrupts;

    enableInterrupts = CyEnterCriticalSection();

    PWM5_micros_BLOCK_CONTROL_REG &= (uint32)~PWM5_micros_MASK;

    CyExitCriticalSection(enableInterrupts);
}


/*******************************************************************************
* Function Name: PWM5_micros_SetMode
********************************************************************************
*
* Summary:
*  Sets the operation mode of the PWM5_micros. This function is used when
*  configured as a generic PWM5_micros and the actual mode of operation is
*  set at runtime. The mode must be set while the component is disabled.
*
* Parameters:
*  mode: Mode for the PWM5_micros to operate in
*   Values:
*   - PWM5_micros_MODE_TIMER_COMPARE - Timer / Counter with
*                                                 compare capability
*         - PWM5_micros_MODE_TIMER_CAPTURE - Timer / Counter with
*                                                 capture capability
*         - PWM5_micros_MODE_QUAD - Quadrature decoder
*         - PWM5_micros_MODE_PWM - PWM
*         - PWM5_micros_MODE_PWM_DT - PWM with dead time
*         - PWM5_micros_MODE_PWM_PR - PWM with pseudo random capability
*
* Return:
*  None
*
*******************************************************************************/
void PWM5_micros_SetMode(uint32 mode)
{
    uint8 enableInterrupts;

    enableInterrupts = CyEnterCriticalSection();

    PWM5_micros_CONTROL_REG &= (uint32)~PWM5_micros_MODE_MASK;
    PWM5_micros_CONTROL_REG |= mode;

    CyExitCriticalSection(enableInterrupts);
}


/*******************************************************************************
* Function Name: PWM5_micros_SetQDMode
********************************************************************************
*
* Summary:
*  Sets the the Quadrature Decoder to one of the 3 supported modes.
*  Its functionality is only applicable to Quadrature Decoder operation.
*
* Parameters:
*  qdMode: Quadrature Decoder mode
*   Values:
*         - PWM5_micros_MODE_X1 - Counts on phi 1 rising
*         - PWM5_micros_MODE_X2 - Counts on both edges of phi1 (2x faster)
*         - PWM5_micros_MODE_X4 - Counts on both edges of phi1 and phi2
*                                        (4x faster)
*
* Return:
*  None
*
*******************************************************************************/
void PWM5_micros_SetQDMode(uint32 qdMode)
{
    uint8 enableInterrupts;

    enableInterrupts = CyEnterCriticalSection();

    PWM5_micros_CONTROL_REG &= (uint32)~PWM5_micros_QUAD_MODE_MASK;
    PWM5_micros_CONTROL_REG |= qdMode;

    CyExitCriticalSection(enableInterrupts);
}


/*******************************************************************************
* Function Name: PWM5_micros_SetPrescaler
********************************************************************************
*
* Summary:
*  Sets the prescaler value that is applied to the clock input.  Not applicable
*  to a PWM with the dead time mode or Quadrature Decoder mode.
*
* Parameters:
*  prescaler: Prescaler divider value
*   Values:
*         - PWM5_micros_PRESCALE_DIVBY1    - Divide by 1 (no prescaling)
*         - PWM5_micros_PRESCALE_DIVBY2    - Divide by 2
*         - PWM5_micros_PRESCALE_DIVBY4    - Divide by 4
*         - PWM5_micros_PRESCALE_DIVBY8    - Divide by 8
*         - PWM5_micros_PRESCALE_DIVBY16   - Divide by 16
*         - PWM5_micros_PRESCALE_DIVBY32   - Divide by 32
*         - PWM5_micros_PRESCALE_DIVBY64   - Divide by 64
*         - PWM5_micros_PRESCALE_DIVBY128  - Divide by 128
*
* Return:
*  None
*
*******************************************************************************/
void PWM5_micros_SetPrescaler(uint32 prescaler)
{
    uint8 enableInterrupts;

    enableInterrupts = CyEnterCriticalSection();

    PWM5_micros_CONTROL_REG &= (uint32)~PWM5_micros_PRESCALER_MASK;
    PWM5_micros_CONTROL_REG |= prescaler;

    CyExitCriticalSection(enableInterrupts);
}


/*******************************************************************************
* Function Name: PWM5_micros_SetOneShot
********************************************************************************
*
* Summary:
*  Writes the register that controls whether the PWM5_micros runs
*  continuously or stops when terminal count is reached.  By default the
*  PWM5_micros operates in the continuous mode.
*
* Parameters:
*  oneShotEnable
*   Values:
*     - 0 - Continuous
*     - 1 - Enable One Shot
*
* Return:
*  None
*
*******************************************************************************/
void PWM5_micros_SetOneShot(uint32 oneShotEnable)
{
    uint8 enableInterrupts;

    enableInterrupts = CyEnterCriticalSection();

    PWM5_micros_CONTROL_REG &= (uint32)~PWM5_micros_ONESHOT_MASK;
    PWM5_micros_CONTROL_REG |= ((uint32)((oneShotEnable & PWM5_micros_1BIT_MASK) <<
                                                               PWM5_micros_ONESHOT_SHIFT));

    CyExitCriticalSection(enableInterrupts);
}


/*******************************************************************************
* Function Name: PWM5_micros_SetPWMMode
********************************************************************************
*
* Summary:
*  Writes the control register that determines what mode of operation the PWM
*  output lines are driven in.  There is a setting for what to do on a
*  comparison match (CC_MATCH), on an overflow (OVERFLOW) and on an underflow
*  (UNDERFLOW).  The value for each of the three must be ORed together to form
*  the mode.
*
* Parameters:
*  modeMask: A combination of three mode settings.  Mask must include a value
*  for each of the three or use one of the preconfigured PWM settings.
*   Values:
*     - CC_MATCH_SET        - Set on comparison match
*     - CC_MATCH_CLEAR      - Clear on comparison match
*     - CC_MATCH_INVERT     - Invert on comparison match
*     - CC_MATCH_NO_CHANGE  - No change on comparison match
*     - OVERLOW_SET         - Set on overflow
*     - OVERLOW_CLEAR       - Clear on  overflow
*     - OVERLOW_INVERT      - Invert on overflow
*     - OVERLOW_NO_CHANGE   - No change on overflow
*     - UNDERFLOW_SET       - Set on underflow
*     - UNDERFLOW_CLEAR     - Clear on underflow
*     - UNDERFLOW_INVERT    - Invert on underflow
*     - UNDERFLOW_NO_CHANGE - No change on underflow
*     - PWM_MODE_LEFT       - Setting for left aligned PWM.  Should be combined
*                             with up counting mode
*     - PWM_MODE_RIGHT      - Setting for right aligned PWM.  Should be combined
*                             with down counting mode
*     - PWM_MODE_CENTER     - Setting for center aligned PWM.  Should be
*                             combined with up/down 0 mode
*     - PWM_MODE_ASYM       - Setting for asymmetric PWM.  Should be combined
*                             with up/down 1 mode
*
* Return:
*  None
*
*******************************************************************************/
void PWM5_micros_SetPWMMode(uint32 modeMask)
{
    PWM5_micros_TRIG_CONTROL2_REG = (modeMask & PWM5_micros_6BIT_MASK);
}



/*******************************************************************************
* Function Name: PWM5_micros_SetPWMSyncKill
********************************************************************************
*
* Summary:
*  Writes the register that controls whether the PWM kill signal (stop input)
*  causes asynchronous or synchronous kill operation.  By default the kill
*  operation is asynchronous.  This functionality is only applicable to the PWM
*  and PWM with dead time modes.
*
*  For Synchronous mode the kill signal disables both the line and line_n
*  signals until the next terminal count.
*
*  For Asynchronous mode the kill signal disables both the line and line_n
*  signals when the kill signal is present.  This mode should only be used
*  when the kill signal (stop input) is configured in the pass through mode
*  (Level sensitive signal).

*
* Parameters:
*  syncKillEnable
*   Values:
*     - 0 - Asynchronous
*     - 1 - Synchronous
*
* Return:
*  None
*
*******************************************************************************/
void PWM5_micros_SetPWMSyncKill(uint32 syncKillEnable)
{
    uint8 enableInterrupts;

    enableInterrupts = CyEnterCriticalSection();

    PWM5_micros_CONTROL_REG &= (uint32)~PWM5_micros_PWM_SYNC_KILL_MASK;
    PWM5_micros_CONTROL_REG |= ((uint32)((syncKillEnable & PWM5_micros_1BIT_MASK)  <<
                                               PWM5_micros_PWM_SYNC_KILL_SHIFT));

    CyExitCriticalSection(enableInterrupts);
}


/*******************************************************************************
* Function Name: PWM5_micros_SetPWMStopOnKill
********************************************************************************
*
* Summary:
*  Writes the register that controls whether the PWM kill signal (stop input)
*  causes the PWM counter to stop.  By default the kill operation does not stop
*  the counter.  This functionality is only applicable to the three PWM modes.
*
*
* Parameters:
*  stopOnKillEnable
*   Values:
*     - 0 - Don't stop
*     - 1 - Stop
*
* Return:
*  None
*
*******************************************************************************/
void PWM5_micros_SetPWMStopOnKill(uint32 stopOnKillEnable)
{
    uint8 enableInterrupts;

    enableInterrupts = CyEnterCriticalSection();

    PWM5_micros_CONTROL_REG &= (uint32)~PWM5_micros_PWM_STOP_KILL_MASK;
    PWM5_micros_CONTROL_REG |= ((uint32)((stopOnKillEnable & PWM5_micros_1BIT_MASK)  <<
                                                         PWM5_micros_PWM_STOP_KILL_SHIFT));

    CyExitCriticalSection(enableInterrupts);
}


/*******************************************************************************
* Function Name: PWM5_micros_SetPWMDeadTime
********************************************************************************
*
* Summary:
*  Writes the dead time control value.  This value delays the rising edge of
*  both the line and line_n signals the designated number of cycles resulting
*  in both signals being inactive for that many cycles.  This functionality is
*  only applicable to the PWM in the dead time mode.

*
* Parameters:
*  Dead time to insert
*   Values: 0 to 255
*
* Return:
*  None
*
*******************************************************************************/
void PWM5_micros_SetPWMDeadTime(uint32 deadTime)
{
    uint8 enableInterrupts;

    enableInterrupts = CyEnterCriticalSection();

    PWM5_micros_CONTROL_REG &= (uint32)~PWM5_micros_PRESCALER_MASK;
    PWM5_micros_CONTROL_REG |= ((uint32)((deadTime & PWM5_micros_8BIT_MASK) <<
                                                          PWM5_micros_PRESCALER_SHIFT));

    CyExitCriticalSection(enableInterrupts);
}


/*******************************************************************************
* Function Name: PWM5_micros_SetPWMInvert
********************************************************************************
*
* Summary:
*  Writes the bits that control whether the line and line_n outputs are
*  inverted from their normal output values.  This functionality is only
*  applicable to the three PWM modes.
*
* Parameters:
*  mask: Mask of outputs to invert.
*   Values:
*         - PWM5_micros_INVERT_LINE   - Inverts the line output
*         - PWM5_micros_INVERT_LINE_N - Inverts the line_n output
*
* Return:
*  None
*
*******************************************************************************/
void PWM5_micros_SetPWMInvert(uint32 mask)
{
    uint8 enableInterrupts;

    enableInterrupts = CyEnterCriticalSection();

    PWM5_micros_CONTROL_REG &= (uint32)~PWM5_micros_INV_OUT_MASK;
    PWM5_micros_CONTROL_REG |= mask;

    CyExitCriticalSection(enableInterrupts);
}



/*******************************************************************************
* Function Name: PWM5_micros_WriteCounter
********************************************************************************
*
* Summary:
*  Writes a new 16bit counter value directly into the counter register, thus
*  setting the counter (not the period) to the value written. It is not
*  advised to write to this field when the counter is running.
*
* Parameters:
*  count: value to write
*
* Return:
*  None
*
*******************************************************************************/
void PWM5_micros_WriteCounter(uint32 count)
{
    PWM5_micros_COUNTER_REG = (count & PWM5_micros_16BIT_MASK);
}


/*******************************************************************************
* Function Name: PWM5_micros_ReadCounter
********************************************************************************
*
* Summary:
*  Reads the current counter value.
*
* Parameters:
*  None
*
* Return:
*  Current counter value
*
*******************************************************************************/
uint32 PWM5_micros_ReadCounter(void)
{
    return (PWM5_micros_COUNTER_REG & PWM5_micros_16BIT_MASK);
}


/*******************************************************************************
* Function Name: PWM5_micros_SetCounterMode
********************************************************************************
*
* Summary:
*  Sets the counter mode.  Applicable to all modes except Quadrature Decoder
*  and the PWM with a pseudo random output.
*
* Parameters:
*  counterMode: Enumerated counter type values
*   Values:
*     - PWM5_micros_COUNT_UP       - Counts up
*     - PWM5_micros_COUNT_DOWN     - Counts down
*     - PWM5_micros_COUNT_UPDOWN0  - Counts up and down. Terminal count
*                                         generated when counter reaches 0
*     - PWM5_micros_COUNT_UPDOWN1  - Counts up and down. Terminal count
*                                         generated both when counter reaches 0
*                                         and period
*
* Return:
*  None
*
*******************************************************************************/
void PWM5_micros_SetCounterMode(uint32 counterMode)
{
    uint8 enableInterrupts;

    enableInterrupts = CyEnterCriticalSection();

    PWM5_micros_CONTROL_REG &= (uint32)~PWM5_micros_UPDOWN_MASK;
    PWM5_micros_CONTROL_REG |= counterMode;

    CyExitCriticalSection(enableInterrupts);
}


/*******************************************************************************
* Function Name: PWM5_micros_WritePeriod
********************************************************************************
*
* Summary:
*  Writes the 16 bit period register with the new period value.
*  To cause the counter to count for N cycles this register should be written
*  with N-1 (counts from 0 to period inclusive).
*
* Parameters:
*  period: Period value
*
* Return:
*  None
*
*******************************************************************************/
void PWM5_micros_WritePeriod(uint32 period)
{
    PWM5_micros_PERIOD_REG = (period & PWM5_micros_16BIT_MASK);
}


/*******************************************************************************
* Function Name: PWM5_micros_ReadPeriod
********************************************************************************
*
* Summary:
*  Reads the 16 bit period register.
*
* Parameters:
*  None
*
* Return:
*  Period value
*
*******************************************************************************/
uint32 PWM5_micros_ReadPeriod(void)
{
    return (PWM5_micros_PERIOD_REG & PWM5_micros_16BIT_MASK);
}


/*******************************************************************************
* Function Name: PWM5_micros_SetCompareSwap
********************************************************************************
*
* Summary:
*  Writes the register that controls whether the compare registers are
*  swapped. When enabled in the Timer/Counter mode(without capture) the swap
*  occurs at a TC event. In the PWM mode the swap occurs at the next TC event
*  following a hardware switch event.
*
* Parameters:
*  swapEnable
*   Values:
*     - 0 - Disable swap
*     - 1 - Enable swap
*
* Return:
*  None
*
*******************************************************************************/
void PWM5_micros_SetCompareSwap(uint32 swapEnable)
{
    uint8 enableInterrupts;

    enableInterrupts = CyEnterCriticalSection();

    PWM5_micros_CONTROL_REG &= (uint32)~PWM5_micros_RELOAD_CC_MASK;
    PWM5_micros_CONTROL_REG |= (swapEnable & PWM5_micros_1BIT_MASK);

    CyExitCriticalSection(enableInterrupts);
}


/*******************************************************************************
* Function Name: PWM5_micros_WritePeriodBuf
********************************************************************************
*
* Summary:
*  Writes the 16 bit period buf register with the new period value.
*
* Parameters:
*  periodBuf: Period value
*
* Return:
*  None
*
*******************************************************************************/
void PWM5_micros_WritePeriodBuf(uint32 periodBuf)
{
    PWM5_micros_PERIOD_BUF_REG = (periodBuf & PWM5_micros_16BIT_MASK);
}


/*******************************************************************************
* Function Name: PWM5_micros_ReadPeriodBuf
********************************************************************************
*
* Summary:
*  Reads the 16 bit period buf register.
*
* Parameters:
*  None
*
* Return:
*  Period value
*
*******************************************************************************/
uint32 PWM5_micros_ReadPeriodBuf(void)
{
    return (PWM5_micros_PERIOD_BUF_REG & PWM5_micros_16BIT_MASK);
}


/*******************************************************************************
* Function Name: PWM5_micros_SetPeriodSwap
********************************************************************************
*
* Summary:
*  Writes the register that controls whether the period registers are
*  swapped. When enabled in Timer/Counter mode the swap occurs at a TC event.
*  In the PWM mode the swap occurs at the next TC event following a hardware
*  switch event.
*
* Parameters:
*  swapEnable
*   Values:
*     - 0 - Disable swap
*     - 1 - Enable swap
*
* Return:
*  None
*
*******************************************************************************/
void PWM5_micros_SetPeriodSwap(uint32 swapEnable)
{
    uint8 enableInterrupts;

    enableInterrupts = CyEnterCriticalSection();

    PWM5_micros_CONTROL_REG &= (uint32)~PWM5_micros_RELOAD_PERIOD_MASK;
    PWM5_micros_CONTROL_REG |= ((uint32)((swapEnable & PWM5_micros_1BIT_MASK) <<
                                                            PWM5_micros_RELOAD_PERIOD_SHIFT));

    CyExitCriticalSection(enableInterrupts);
}


/*******************************************************************************
* Function Name: PWM5_micros_WriteCompare
********************************************************************************
*
* Summary:
*  Writes the 16 bit compare register with the new compare value. Not
*  applicable for Timer/Counter with Capture or in Quadrature Decoder modes.
*
* Parameters:
*  compare: Compare value
*
* Return:
*  None
*
* Note:
*  It is not recommended to use the value equal to "0" or equal to 
*  "period value" in Center or Asymmetric align PWM modes on the 
*  PSoC 4100/PSoC 4200 devices.
*  PSoC 4000 devices write the 16 bit compare register with the decremented 
*  compare value in the Up counting mode (except 0x0u), and the incremented 
*  compare value in the Down counting mode (except 0xFFFFu).
*
*******************************************************************************/
void PWM5_micros_WriteCompare(uint32 compare)
{
    #if (PWM5_micros_CY_TCPWM_4000)
        uint32 currentMode;
    #endif /* (PWM5_micros_CY_TCPWM_4000) */

    #if (PWM5_micros_CY_TCPWM_4000)
        currentMode = ((PWM5_micros_CONTROL_REG & PWM5_micros_UPDOWN_MASK) >> PWM5_micros_UPDOWN_SHIFT);

        if (((uint32)PWM5_micros__COUNT_DOWN == currentMode) && (0xFFFFu != compare))
        {
            compare++;
        }
        else if (((uint32)PWM5_micros__COUNT_UP == currentMode) && (0u != compare))
        {
            compare--;
        }
        else
        {
        }
        
    
    #endif /* (PWM5_micros_CY_TCPWM_4000) */
    
    PWM5_micros_COMP_CAP_REG = (compare & PWM5_micros_16BIT_MASK);
}


/*******************************************************************************
* Function Name: PWM5_micros_ReadCompare
********************************************************************************
*
* Summary:
*  Reads the compare register. Not applicable for Timer/Counter with Capture
*  or in Quadrature Decoder modes.
*  PSoC 4000 devices read the incremented compare register value in the 
*  Up counting mode (except 0xFFFFu), and the decremented value in the 
*  Down counting mode (except 0x0u).
*
* Parameters:
*  None
*
* Return:
*  Compare value
*
* Note:
*  PSoC 4000 devices read the incremented compare register value in the 
*  Up counting mode (except 0xFFFFu), and the decremented value in the 
*  Down counting mode (except 0x0u).
*
*******************************************************************************/
uint32 PWM5_micros_ReadCompare(void)
{
    #if (PWM5_micros_CY_TCPWM_4000)
        uint32 currentMode;
        uint32 regVal;
    #endif /* (PWM5_micros_CY_TCPWM_4000) */

    #if (PWM5_micros_CY_TCPWM_4000)
        currentMode = ((PWM5_micros_CONTROL_REG & PWM5_micros_UPDOWN_MASK) >> PWM5_micros_UPDOWN_SHIFT);
        
        regVal = PWM5_micros_COMP_CAP_REG;
        
        if (((uint32)PWM5_micros__COUNT_DOWN == currentMode) && (0u != regVal))
        {
            regVal--;
        }
        else if (((uint32)PWM5_micros__COUNT_UP == currentMode) && (0xFFFFu != regVal))
        {
            regVal++;
        }
        else
        {
        }

        return (regVal & PWM5_micros_16BIT_MASK);
    #else
        return (PWM5_micros_COMP_CAP_REG & PWM5_micros_16BIT_MASK);
    #endif /* (PWM5_micros_CY_TCPWM_4000) */
}


/*******************************************************************************
* Function Name: PWM5_micros_WriteCompareBuf
********************************************************************************
*
* Summary:
*  Writes the 16 bit compare buffer register with the new compare value. Not
*  applicable for Timer/Counter with Capture or in Quadrature Decoder modes.
*
* Parameters:
*  compareBuf: Compare value
*
* Return:
*  None
*
* Note:
*  It is not recommended to use the value equal to "0" or equal to 
*  "period value" in Center or Asymmetric align PWM modes on the 
*  PSoC 4100/PSoC 4200 devices.
*  PSoC 4000 devices write the 16 bit compare register with the decremented 
*  compare value in the Up counting mode (except 0x0u), and the incremented 
*  compare value in the Down counting mode (except 0xFFFFu).
*
*******************************************************************************/
void PWM5_micros_WriteCompareBuf(uint32 compareBuf)
{
    #if (PWM5_micros_CY_TCPWM_4000)
        uint32 currentMode;
    #endif /* (PWM5_micros_CY_TCPWM_4000) */

    #if (PWM5_micros_CY_TCPWM_4000)
        currentMode = ((PWM5_micros_CONTROL_REG & PWM5_micros_UPDOWN_MASK) >> PWM5_micros_UPDOWN_SHIFT);

        if (((uint32)PWM5_micros__COUNT_DOWN == currentMode) && (0xFFFFu != compareBuf))
        {
            compareBuf++;
        }
        else if (((uint32)PWM5_micros__COUNT_UP == currentMode) && (0u != compareBuf))
        {
            compareBuf --;
        }
        else
        {
        }
    #endif /* (PWM5_micros_CY_TCPWM_4000) */
    
    PWM5_micros_COMP_CAP_BUF_REG = (compareBuf & PWM5_micros_16BIT_MASK);
}


/*******************************************************************************
* Function Name: PWM5_micros_ReadCompareBuf
********************************************************************************
*
* Summary:
*  Reads the compare buffer register. Not applicable for Timer/Counter with
*  Capture or in Quadrature Decoder modes.
*
* Parameters:
*  None
*
* Return:
*  Compare buffer value
*
* Note:
*  PSoC 4000 devices read the incremented compare register value in the 
*  Up counting mode (except 0xFFFFu), and the decremented value in the 
*  Down counting mode (except 0x0u).
*
*******************************************************************************/
uint32 PWM5_micros_ReadCompareBuf(void)
{
    #if (PWM5_micros_CY_TCPWM_4000)
        uint32 currentMode;
        uint32 regVal;
    #endif /* (PWM5_micros_CY_TCPWM_4000) */

    #if (PWM5_micros_CY_TCPWM_4000)
        currentMode = ((PWM5_micros_CONTROL_REG & PWM5_micros_UPDOWN_MASK) >> PWM5_micros_UPDOWN_SHIFT);

        regVal = PWM5_micros_COMP_CAP_BUF_REG;
        
        if (((uint32)PWM5_micros__COUNT_DOWN == currentMode) && (0u != regVal))
        {
            regVal--;
        }
        else if (((uint32)PWM5_micros__COUNT_UP == currentMode) && (0xFFFFu != regVal))
        {
            regVal++;
        }
        else
        {
        }

        return (regVal & PWM5_micros_16BIT_MASK);
    #else
        return (PWM5_micros_COMP_CAP_BUF_REG & PWM5_micros_16BIT_MASK);
    #endif /* (PWM5_micros_CY_TCPWM_4000) */
}


/*******************************************************************************
* Function Name: PWM5_micros_ReadCapture
********************************************************************************
*
* Summary:
*  Reads the captured counter value. This API is applicable only for
*  Timer/Counter with the capture mode and Quadrature Decoder modes.
*
* Parameters:
*  None
*
* Return:
*  Capture value
*
*******************************************************************************/
uint32 PWM5_micros_ReadCapture(void)
{
    return (PWM5_micros_COMP_CAP_REG & PWM5_micros_16BIT_MASK);
}


/*******************************************************************************
* Function Name: PWM5_micros_ReadCaptureBuf
********************************************************************************
*
* Summary:
*  Reads the capture buffer register. This API is applicable only for
*  Timer/Counter with the capture mode and Quadrature Decoder modes.
*
* Parameters:
*  None
*
* Return:
*  Capture buffer value
*
*******************************************************************************/
uint32 PWM5_micros_ReadCaptureBuf(void)
{
    return (PWM5_micros_COMP_CAP_BUF_REG & PWM5_micros_16BIT_MASK);
}


/*******************************************************************************
* Function Name: PWM5_micros_SetCaptureMode
********************************************************************************
*
* Summary:
*  Sets the capture trigger mode. For PWM mode this is the switch input.
*  This input is not applicable to the Timer/Counter without Capture and
*  Quadrature Decoder modes.
*
* Parameters:
*  triggerMode: Enumerated trigger mode value
*   Values:
*     - PWM5_micros_TRIG_LEVEL     - Level
*     - PWM5_micros_TRIG_RISING    - Rising edge
*     - PWM5_micros_TRIG_FALLING   - Falling edge
*     - PWM5_micros_TRIG_BOTH      - Both rising and falling edge
*
* Return:
*  None
*
*******************************************************************************/
void PWM5_micros_SetCaptureMode(uint32 triggerMode)
{
    uint8 enableInterrupts;

    enableInterrupts = CyEnterCriticalSection();

    PWM5_micros_TRIG_CONTROL1_REG &= (uint32)~PWM5_micros_CAPTURE_MASK;
    PWM5_micros_TRIG_CONTROL1_REG |= triggerMode;

    CyExitCriticalSection(enableInterrupts);
}


/*******************************************************************************
* Function Name: PWM5_micros_SetReloadMode
********************************************************************************
*
* Summary:
*  Sets the reload trigger mode. For Quadrature Decoder mode this is the index
*  input.
*
* Parameters:
*  triggerMode: Enumerated trigger mode value
*   Values:
*     - PWM5_micros_TRIG_LEVEL     - Level
*     - PWM5_micros_TRIG_RISING    - Rising edge
*     - PWM5_micros_TRIG_FALLING   - Falling edge
*     - PWM5_micros_TRIG_BOTH      - Both rising and falling edge
*
* Return:
*  None
*
*******************************************************************************/
void PWM5_micros_SetReloadMode(uint32 triggerMode)
{
    uint8 enableInterrupts;

    enableInterrupts = CyEnterCriticalSection();

    PWM5_micros_TRIG_CONTROL1_REG &= (uint32)~PWM5_micros_RELOAD_MASK;
    PWM5_micros_TRIG_CONTROL1_REG |= ((uint32)(triggerMode << PWM5_micros_RELOAD_SHIFT));

    CyExitCriticalSection(enableInterrupts);
}


/*******************************************************************************
* Function Name: PWM5_micros_SetStartMode
********************************************************************************
*
* Summary:
*  Sets the start trigger mode. For Quadrature Decoder mode this is the
*  phiB input.
*
* Parameters:
*  triggerMode: Enumerated trigger mode value
*   Values:
*     - PWM5_micros_TRIG_LEVEL     - Level
*     - PWM5_micros_TRIG_RISING    - Rising edge
*     - PWM5_micros_TRIG_FALLING   - Falling edge
*     - PWM5_micros_TRIG_BOTH      - Both rising and falling edge
*
* Return:
*  None
*
*******************************************************************************/
void PWM5_micros_SetStartMode(uint32 triggerMode)
{
    uint8 enableInterrupts;

    enableInterrupts = CyEnterCriticalSection();

    PWM5_micros_TRIG_CONTROL1_REG &= (uint32)~PWM5_micros_START_MASK;
    PWM5_micros_TRIG_CONTROL1_REG |= ((uint32)(triggerMode << PWM5_micros_START_SHIFT));

    CyExitCriticalSection(enableInterrupts);
}


/*******************************************************************************
* Function Name: PWM5_micros_SetStopMode
********************************************************************************
*
* Summary:
*  Sets the stop trigger mode. For PWM mode this is the kill input.
*
* Parameters:
*  triggerMode: Enumerated trigger mode value
*   Values:
*     - PWM5_micros_TRIG_LEVEL     - Level
*     - PWM5_micros_TRIG_RISING    - Rising edge
*     - PWM5_micros_TRIG_FALLING   - Falling edge
*     - PWM5_micros_TRIG_BOTH      - Both rising and falling edge
*
* Return:
*  None
*
*******************************************************************************/
void PWM5_micros_SetStopMode(uint32 triggerMode)
{
    uint8 enableInterrupts;

    enableInterrupts = CyEnterCriticalSection();

    PWM5_micros_TRIG_CONTROL1_REG &= (uint32)~PWM5_micros_STOP_MASK;
    PWM5_micros_TRIG_CONTROL1_REG |= ((uint32)(triggerMode << PWM5_micros_STOP_SHIFT));

    CyExitCriticalSection(enableInterrupts);
}


/*******************************************************************************
* Function Name: PWM5_micros_SetCountMode
********************************************************************************
*
* Summary:
*  Sets the count trigger mode. For Quadrature Decoder mode this is the phiA
*  input.
*
* Parameters:
*  triggerMode: Enumerated trigger mode value
*   Values:
*     - PWM5_micros_TRIG_LEVEL     - Level
*     - PWM5_micros_TRIG_RISING    - Rising edge
*     - PWM5_micros_TRIG_FALLING   - Falling edge
*     - PWM5_micros_TRIG_BOTH      - Both rising and falling edge
*
* Return:
*  None
*
*******************************************************************************/
void PWM5_micros_SetCountMode(uint32 triggerMode)
{
    uint8 enableInterrupts;

    enableInterrupts = CyEnterCriticalSection();

    PWM5_micros_TRIG_CONTROL1_REG &= (uint32)~PWM5_micros_COUNT_MASK;
    PWM5_micros_TRIG_CONTROL1_REG |= ((uint32)(triggerMode << PWM5_micros_COUNT_SHIFT));

    CyExitCriticalSection(enableInterrupts);
}


/*******************************************************************************
* Function Name: PWM5_micros_TriggerCommand
********************************************************************************
*
* Summary:
*  Triggers the designated command to occur on the designated TCPWM instances.
*  The mask can be used to apply this command simultaneously to more than one
*  instance.  This allows multiple TCPWM instances to be synchronized.
*
* Parameters:
*  mask: A combination of mask bits for each instance of the TCPWM that the
*        command should apply to.  This function from one instance can be used
*        to apply the command to any of the instances in the design.
*        The mask value for a specific instance is available with the MASK
*        define.
*  command: Enumerated command values. Capture command only applicable for
*           Timer/Counter with Capture and PWM modes.
*   Values:
*     - PWM5_micros_CMD_CAPTURE    - Trigger Capture/Switch command
*     - PWM5_micros_CMD_RELOAD     - Trigger Reload/Index command
*     - PWM5_micros_CMD_STOP       - Trigger Stop/Kill command
*     - PWM5_micros_CMD_START      - Trigger Start/phiB command
*
* Return:
*  None
*
*******************************************************************************/
void PWM5_micros_TriggerCommand(uint32 mask, uint32 command)
{
    uint8 enableInterrupts;

    enableInterrupts = CyEnterCriticalSection();

    PWM5_micros_COMMAND_REG = ((uint32)(mask << command));

    CyExitCriticalSection(enableInterrupts);
}


/*******************************************************************************
* Function Name: PWM5_micros_ReadStatus
********************************************************************************
*
* Summary:
*  Reads the status of the PWM5_micros.
*
* Parameters:
*  None
*
* Return:
*  Status
*   Values:
*     - PWM5_micros_STATUS_DOWN    - Set if counting down
*     - PWM5_micros_STATUS_RUNNING - Set if counter is running
*
*******************************************************************************/
uint32 PWM5_micros_ReadStatus(void)
{
    return ((PWM5_micros_STATUS_REG >> PWM5_micros_RUNNING_STATUS_SHIFT) |
            (PWM5_micros_STATUS_REG & PWM5_micros_STATUS_DOWN));
}


/*******************************************************************************
* Function Name: PWM5_micros_SetInterruptMode
********************************************************************************
*
* Summary:
*  Sets the interrupt mask to control which interrupt
*  requests generate the interrupt signal.
*
* Parameters:
*   interruptMask: Mask of bits to be enabled
*   Values:
*     - PWM5_micros_INTR_MASK_TC       - Terminal count mask
*     - PWM5_micros_INTR_MASK_CC_MATCH - Compare count / capture mask
*
* Return:
*  None
*
*******************************************************************************/
void PWM5_micros_SetInterruptMode(uint32 interruptMask)
{
    PWM5_micros_INTERRUPT_MASK_REG =  interruptMask;
}


/*******************************************************************************
* Function Name: PWM5_micros_GetInterruptSourceMasked
********************************************************************************
*
* Summary:
*  Gets the interrupt requests masked by the interrupt mask.
*
* Parameters:
*   None
*
* Return:
*  Masked interrupt source
*   Values:
*     - PWM5_micros_INTR_MASK_TC       - Terminal count mask
*     - PWM5_micros_INTR_MASK_CC_MATCH - Compare count / capture mask
*
*******************************************************************************/
uint32 PWM5_micros_GetInterruptSourceMasked(void)
{
    return (PWM5_micros_INTERRUPT_MASKED_REG);
}


/*******************************************************************************
* Function Name: PWM5_micros_GetInterruptSource
********************************************************************************
*
* Summary:
*  Gets the interrupt requests (without masking).
*
* Parameters:
*  None
*
* Return:
*  Interrupt request value
*   Values:
*     - PWM5_micros_INTR_MASK_TC       - Terminal count mask
*     - PWM5_micros_INTR_MASK_CC_MATCH - Compare count / capture mask
*
*******************************************************************************/
uint32 PWM5_micros_GetInterruptSource(void)
{
    return (PWM5_micros_INTERRUPT_REQ_REG);
}


/*******************************************************************************
* Function Name: PWM5_micros_ClearInterrupt
********************************************************************************
*
* Summary:
*  Clears the interrupt request.
*
* Parameters:
*   interruptMask: Mask of interrupts to clear
*   Values:
*     - PWM5_micros_INTR_MASK_TC       - Terminal count mask
*     - PWM5_micros_INTR_MASK_CC_MATCH - Compare count / capture mask
*
* Return:
*  None
*
*******************************************************************************/
void PWM5_micros_ClearInterrupt(uint32 interruptMask)
{
    PWM5_micros_INTERRUPT_REQ_REG = interruptMask;
}


/*******************************************************************************
* Function Name: PWM5_micros_SetInterrupt
********************************************************************************
*
* Summary:
*  Sets a software interrupt request.
*
* Parameters:
*   interruptMask: Mask of interrupts to set
*   Values:
*     - PWM5_micros_INTR_MASK_TC       - Terminal count mask
*     - PWM5_micros_INTR_MASK_CC_MATCH - Compare count / capture mask
*
* Return:
*  None
*
*******************************************************************************/
void PWM5_micros_SetInterrupt(uint32 interruptMask)
{
    PWM5_micros_INTERRUPT_SET_REG = interruptMask;
}


/* [] END OF FILE */
