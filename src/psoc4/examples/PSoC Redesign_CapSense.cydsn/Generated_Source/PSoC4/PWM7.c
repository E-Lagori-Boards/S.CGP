/*******************************************************************************
* File Name: PWM7.c
* Version 2.10
*
* Description:
*  This file provides the source code to the API for the PWM7
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

#include "PWM7.h"

uint8 PWM7_initVar = 0u;


/*******************************************************************************
* Function Name: PWM7_Init
********************************************************************************
*
* Summary:
*  Initialize/Restore default PWM7 configuration.
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
void PWM7_Init(void)
{

    /* Set values from customizer to CTRL */
    #if (PWM7__QUAD == PWM7_CONFIG)
        PWM7_CONTROL_REG = PWM7_CTRL_QUAD_BASE_CONFIG;
        
        /* Set values from customizer to CTRL1 */
        PWM7_TRIG_CONTROL1_REG  = PWM7_QUAD_SIGNALS_MODES;

        /* Set values from customizer to INTR */
        PWM7_SetInterruptMode(PWM7_QUAD_INTERRUPT_MASK);
        
         /* Set other values */
        PWM7_SetCounterMode(PWM7_COUNT_DOWN);
        PWM7_WritePeriod(PWM7_QUAD_PERIOD_INIT_VALUE);
        PWM7_WriteCounter(PWM7_QUAD_PERIOD_INIT_VALUE);
    #endif  /* (PWM7__QUAD == PWM7_CONFIG) */

    #if (PWM7__TIMER == PWM7_CONFIG)
        PWM7_CONTROL_REG = PWM7_CTRL_TIMER_BASE_CONFIG;
        
        /* Set values from customizer to CTRL1 */
        PWM7_TRIG_CONTROL1_REG  = PWM7_TIMER_SIGNALS_MODES;
    
        /* Set values from customizer to INTR */
        PWM7_SetInterruptMode(PWM7_TC_INTERRUPT_MASK);
        
        /* Set other values from customizer */
        PWM7_WritePeriod(PWM7_TC_PERIOD_VALUE );

        #if (PWM7__COMPARE == PWM7_TC_COMP_CAP_MODE)
            PWM7_WriteCompare(PWM7_TC_COMPARE_VALUE);

            #if (1u == PWM7_TC_COMPARE_SWAP)
                PWM7_SetCompareSwap(1u);
                PWM7_WriteCompareBuf(PWM7_TC_COMPARE_BUF_VALUE);
            #endif  /* (1u == PWM7_TC_COMPARE_SWAP) */
        #endif  /* (PWM7__COMPARE == PWM7_TC_COMP_CAP_MODE) */

        /* Initialize counter value */
        #if (PWM7_CY_TCPWM_V2 && PWM7_TIMER_UPDOWN_CNT_USED && !PWM7_CY_TCPWM_4000)
            PWM7_WriteCounter(1u);
        #elif(PWM7__COUNT_DOWN == PWM7_TC_COUNTER_MODE)
            PWM7_WriteCounter(PWM7_TC_PERIOD_VALUE);
        #else
            PWM7_WriteCounter(0u);
        #endif /* (PWM7_CY_TCPWM_V2 && PWM7_TIMER_UPDOWN_CNT_USED && !PWM7_CY_TCPWM_4000) */
    #endif  /* (PWM7__TIMER == PWM7_CONFIG) */

    #if (PWM7__PWM_SEL == PWM7_CONFIG)
        PWM7_CONTROL_REG = PWM7_CTRL_PWM_BASE_CONFIG;

        #if (PWM7__PWM_PR == PWM7_PWM_MODE)
            PWM7_CONTROL_REG |= PWM7_CTRL_PWM_RUN_MODE;
            PWM7_WriteCounter(PWM7_PWM_PR_INIT_VALUE);
        #else
            PWM7_CONTROL_REG |= PWM7_CTRL_PWM_ALIGN | PWM7_CTRL_PWM_KILL_EVENT;
            
            /* Initialize counter value */
            #if (PWM7_CY_TCPWM_V2 && PWM7_PWM_UPDOWN_CNT_USED && !PWM7_CY_TCPWM_4000)
                PWM7_WriteCounter(1u);
            #elif (PWM7__RIGHT == PWM7_PWM_ALIGN)
                PWM7_WriteCounter(PWM7_PWM_PERIOD_VALUE);
            #else 
                PWM7_WriteCounter(0u);
            #endif  /* (PWM7_CY_TCPWM_V2 && PWM7_PWM_UPDOWN_CNT_USED && !PWM7_CY_TCPWM_4000) */
        #endif  /* (PWM7__PWM_PR == PWM7_PWM_MODE) */

        #if (PWM7__PWM_DT == PWM7_PWM_MODE)
            PWM7_CONTROL_REG |= PWM7_CTRL_PWM_DEAD_TIME_CYCLE;
        #endif  /* (PWM7__PWM_DT == PWM7_PWM_MODE) */

        #if (PWM7__PWM == PWM7_PWM_MODE)
            PWM7_CONTROL_REG |= PWM7_CTRL_PWM_PRESCALER;
        #endif  /* (PWM7__PWM == PWM7_PWM_MODE) */

        /* Set values from customizer to CTRL1 */
        PWM7_TRIG_CONTROL1_REG  = PWM7_PWM_SIGNALS_MODES;
    
        /* Set values from customizer to INTR */
        PWM7_SetInterruptMode(PWM7_PWM_INTERRUPT_MASK);

        /* Set values from customizer to CTRL2 */
        #if (PWM7__PWM_PR == PWM7_PWM_MODE)
            PWM7_TRIG_CONTROL2_REG =
                    (PWM7_CC_MATCH_NO_CHANGE    |
                    PWM7_OVERLOW_NO_CHANGE      |
                    PWM7_UNDERFLOW_NO_CHANGE);
        #else
            #if (PWM7__LEFT == PWM7_PWM_ALIGN)
                PWM7_TRIG_CONTROL2_REG = PWM7_PWM_MODE_LEFT;
            #endif  /* ( PWM7_PWM_LEFT == PWM7_PWM_ALIGN) */

            #if (PWM7__RIGHT == PWM7_PWM_ALIGN)
                PWM7_TRIG_CONTROL2_REG = PWM7_PWM_MODE_RIGHT;
            #endif  /* ( PWM7_PWM_RIGHT == PWM7_PWM_ALIGN) */

            #if (PWM7__CENTER == PWM7_PWM_ALIGN)
                PWM7_TRIG_CONTROL2_REG = PWM7_PWM_MODE_CENTER;
            #endif  /* ( PWM7_PWM_CENTER == PWM7_PWM_ALIGN) */

            #if (PWM7__ASYMMETRIC == PWM7_PWM_ALIGN)
                PWM7_TRIG_CONTROL2_REG = PWM7_PWM_MODE_ASYM;
            #endif  /* (PWM7__ASYMMETRIC == PWM7_PWM_ALIGN) */
        #endif  /* (PWM7__PWM_PR == PWM7_PWM_MODE) */

        /* Set other values from customizer */
        PWM7_WritePeriod(PWM7_PWM_PERIOD_VALUE );
        PWM7_WriteCompare(PWM7_PWM_COMPARE_VALUE);

        #if (1u == PWM7_PWM_COMPARE_SWAP)
            PWM7_SetCompareSwap(1u);
            PWM7_WriteCompareBuf(PWM7_PWM_COMPARE_BUF_VALUE);
        #endif  /* (1u == PWM7_PWM_COMPARE_SWAP) */

        #if (1u == PWM7_PWM_PERIOD_SWAP)
            PWM7_SetPeriodSwap(1u);
            PWM7_WritePeriodBuf(PWM7_PWM_PERIOD_BUF_VALUE);
        #endif  /* (1u == PWM7_PWM_PERIOD_SWAP) */
    #endif  /* (PWM7__PWM_SEL == PWM7_CONFIG) */
    
}


/*******************************************************************************
* Function Name: PWM7_Enable
********************************************************************************
*
* Summary:
*  Enables the PWM7.
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
void PWM7_Enable(void)
{
    uint8 enableInterrupts;

    enableInterrupts = CyEnterCriticalSection();
    PWM7_BLOCK_CONTROL_REG |= PWM7_MASK;
    CyExitCriticalSection(enableInterrupts);

    /* Start Timer or PWM if start input is absent */
    #if (PWM7__PWM_SEL == PWM7_CONFIG)
        #if (0u == PWM7_PWM_START_SIGNAL_PRESENT)
            PWM7_TriggerCommand(PWM7_MASK, PWM7_CMD_START);
        #endif /* (0u == PWM7_PWM_START_SIGNAL_PRESENT) */
    #endif /* (PWM7__PWM_SEL == PWM7_CONFIG) */

    #if (PWM7__TIMER == PWM7_CONFIG)
        #if (0u == PWM7_TC_START_SIGNAL_PRESENT)
            PWM7_TriggerCommand(PWM7_MASK, PWM7_CMD_START);
        #endif /* (0u == PWM7_TC_START_SIGNAL_PRESENT) */
    #endif /* (PWM7__TIMER == PWM7_CONFIG) */
    
    #if (PWM7__QUAD == PWM7_CONFIG)
        #if (0u != PWM7_QUAD_AUTO_START)
            PWM7_TriggerCommand(PWM7_MASK, PWM7_CMD_RELOAD);
        #endif /* (0u != PWM7_QUAD_AUTO_START) */
    #endif  /* (PWM7__QUAD == PWM7_CONFIG) */
}


/*******************************************************************************
* Function Name: PWM7_Start
********************************************************************************
*
* Summary:
*  Initializes the PWM7 with default customizer
*  values when called the first time and enables the PWM7.
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
*  PWM7_initVar: global variable is used to indicate initial
*  configuration of this component.  The variable is initialized to zero and set
*  to 1 the first time PWM7_Start() is called. This allows
*  enabling/disabling a component without re-initialization in all subsequent
*  calls to the PWM7_Start() routine.
*
*******************************************************************************/
void PWM7_Start(void)
{
    if (0u == PWM7_initVar)
    {
        PWM7_Init();
        PWM7_initVar = 1u;
    }

    PWM7_Enable();
}


/*******************************************************************************
* Function Name: PWM7_Stop
********************************************************************************
*
* Summary:
*  Disables the PWM7.
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
void PWM7_Stop(void)
{
    uint8 enableInterrupts;

    enableInterrupts = CyEnterCriticalSection();

    PWM7_BLOCK_CONTROL_REG &= (uint32)~PWM7_MASK;

    CyExitCriticalSection(enableInterrupts);
}


/*******************************************************************************
* Function Name: PWM7_SetMode
********************************************************************************
*
* Summary:
*  Sets the operation mode of the PWM7. This function is used when
*  configured as a generic PWM7 and the actual mode of operation is
*  set at runtime. The mode must be set while the component is disabled.
*
* Parameters:
*  mode: Mode for the PWM7 to operate in
*   Values:
*   - PWM7_MODE_TIMER_COMPARE - Timer / Counter with
*                                                 compare capability
*         - PWM7_MODE_TIMER_CAPTURE - Timer / Counter with
*                                                 capture capability
*         - PWM7_MODE_QUAD - Quadrature decoder
*         - PWM7_MODE_PWM - PWM
*         - PWM7_MODE_PWM_DT - PWM with dead time
*         - PWM7_MODE_PWM_PR - PWM with pseudo random capability
*
* Return:
*  None
*
*******************************************************************************/
void PWM7_SetMode(uint32 mode)
{
    uint8 enableInterrupts;

    enableInterrupts = CyEnterCriticalSection();

    PWM7_CONTROL_REG &= (uint32)~PWM7_MODE_MASK;
    PWM7_CONTROL_REG |= mode;

    CyExitCriticalSection(enableInterrupts);
}


/*******************************************************************************
* Function Name: PWM7_SetQDMode
********************************************************************************
*
* Summary:
*  Sets the the Quadrature Decoder to one of the 3 supported modes.
*  Its functionality is only applicable to Quadrature Decoder operation.
*
* Parameters:
*  qdMode: Quadrature Decoder mode
*   Values:
*         - PWM7_MODE_X1 - Counts on phi 1 rising
*         - PWM7_MODE_X2 - Counts on both edges of phi1 (2x faster)
*         - PWM7_MODE_X4 - Counts on both edges of phi1 and phi2
*                                        (4x faster)
*
* Return:
*  None
*
*******************************************************************************/
void PWM7_SetQDMode(uint32 qdMode)
{
    uint8 enableInterrupts;

    enableInterrupts = CyEnterCriticalSection();

    PWM7_CONTROL_REG &= (uint32)~PWM7_QUAD_MODE_MASK;
    PWM7_CONTROL_REG |= qdMode;

    CyExitCriticalSection(enableInterrupts);
}


/*******************************************************************************
* Function Name: PWM7_SetPrescaler
********************************************************************************
*
* Summary:
*  Sets the prescaler value that is applied to the clock input.  Not applicable
*  to a PWM with the dead time mode or Quadrature Decoder mode.
*
* Parameters:
*  prescaler: Prescaler divider value
*   Values:
*         - PWM7_PRESCALE_DIVBY1    - Divide by 1 (no prescaling)
*         - PWM7_PRESCALE_DIVBY2    - Divide by 2
*         - PWM7_PRESCALE_DIVBY4    - Divide by 4
*         - PWM7_PRESCALE_DIVBY8    - Divide by 8
*         - PWM7_PRESCALE_DIVBY16   - Divide by 16
*         - PWM7_PRESCALE_DIVBY32   - Divide by 32
*         - PWM7_PRESCALE_DIVBY64   - Divide by 64
*         - PWM7_PRESCALE_DIVBY128  - Divide by 128
*
* Return:
*  None
*
*******************************************************************************/
void PWM7_SetPrescaler(uint32 prescaler)
{
    uint8 enableInterrupts;

    enableInterrupts = CyEnterCriticalSection();

    PWM7_CONTROL_REG &= (uint32)~PWM7_PRESCALER_MASK;
    PWM7_CONTROL_REG |= prescaler;

    CyExitCriticalSection(enableInterrupts);
}


/*******************************************************************************
* Function Name: PWM7_SetOneShot
********************************************************************************
*
* Summary:
*  Writes the register that controls whether the PWM7 runs
*  continuously or stops when terminal count is reached.  By default the
*  PWM7 operates in the continuous mode.
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
void PWM7_SetOneShot(uint32 oneShotEnable)
{
    uint8 enableInterrupts;

    enableInterrupts = CyEnterCriticalSection();

    PWM7_CONTROL_REG &= (uint32)~PWM7_ONESHOT_MASK;
    PWM7_CONTROL_REG |= ((uint32)((oneShotEnable & PWM7_1BIT_MASK) <<
                                                               PWM7_ONESHOT_SHIFT));

    CyExitCriticalSection(enableInterrupts);
}


/*******************************************************************************
* Function Name: PWM7_SetPWMMode
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
void PWM7_SetPWMMode(uint32 modeMask)
{
    PWM7_TRIG_CONTROL2_REG = (modeMask & PWM7_6BIT_MASK);
}



/*******************************************************************************
* Function Name: PWM7_SetPWMSyncKill
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
void PWM7_SetPWMSyncKill(uint32 syncKillEnable)
{
    uint8 enableInterrupts;

    enableInterrupts = CyEnterCriticalSection();

    PWM7_CONTROL_REG &= (uint32)~PWM7_PWM_SYNC_KILL_MASK;
    PWM7_CONTROL_REG |= ((uint32)((syncKillEnable & PWM7_1BIT_MASK)  <<
                                               PWM7_PWM_SYNC_KILL_SHIFT));

    CyExitCriticalSection(enableInterrupts);
}


/*******************************************************************************
* Function Name: PWM7_SetPWMStopOnKill
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
void PWM7_SetPWMStopOnKill(uint32 stopOnKillEnable)
{
    uint8 enableInterrupts;

    enableInterrupts = CyEnterCriticalSection();

    PWM7_CONTROL_REG &= (uint32)~PWM7_PWM_STOP_KILL_MASK;
    PWM7_CONTROL_REG |= ((uint32)((stopOnKillEnable & PWM7_1BIT_MASK)  <<
                                                         PWM7_PWM_STOP_KILL_SHIFT));

    CyExitCriticalSection(enableInterrupts);
}


/*******************************************************************************
* Function Name: PWM7_SetPWMDeadTime
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
void PWM7_SetPWMDeadTime(uint32 deadTime)
{
    uint8 enableInterrupts;

    enableInterrupts = CyEnterCriticalSection();

    PWM7_CONTROL_REG &= (uint32)~PWM7_PRESCALER_MASK;
    PWM7_CONTROL_REG |= ((uint32)((deadTime & PWM7_8BIT_MASK) <<
                                                          PWM7_PRESCALER_SHIFT));

    CyExitCriticalSection(enableInterrupts);
}


/*******************************************************************************
* Function Name: PWM7_SetPWMInvert
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
*         - PWM7_INVERT_LINE   - Inverts the line output
*         - PWM7_INVERT_LINE_N - Inverts the line_n output
*
* Return:
*  None
*
*******************************************************************************/
void PWM7_SetPWMInvert(uint32 mask)
{
    uint8 enableInterrupts;

    enableInterrupts = CyEnterCriticalSection();

    PWM7_CONTROL_REG &= (uint32)~PWM7_INV_OUT_MASK;
    PWM7_CONTROL_REG |= mask;

    CyExitCriticalSection(enableInterrupts);
}



/*******************************************************************************
* Function Name: PWM7_WriteCounter
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
void PWM7_WriteCounter(uint32 count)
{
    PWM7_COUNTER_REG = (count & PWM7_16BIT_MASK);
}


/*******************************************************************************
* Function Name: PWM7_ReadCounter
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
uint32 PWM7_ReadCounter(void)
{
    return (PWM7_COUNTER_REG & PWM7_16BIT_MASK);
}


/*******************************************************************************
* Function Name: PWM7_SetCounterMode
********************************************************************************
*
* Summary:
*  Sets the counter mode.  Applicable to all modes except Quadrature Decoder
*  and the PWM with a pseudo random output.
*
* Parameters:
*  counterMode: Enumerated counter type values
*   Values:
*     - PWM7_COUNT_UP       - Counts up
*     - PWM7_COUNT_DOWN     - Counts down
*     - PWM7_COUNT_UPDOWN0  - Counts up and down. Terminal count
*                                         generated when counter reaches 0
*     - PWM7_COUNT_UPDOWN1  - Counts up and down. Terminal count
*                                         generated both when counter reaches 0
*                                         and period
*
* Return:
*  None
*
*******************************************************************************/
void PWM7_SetCounterMode(uint32 counterMode)
{
    uint8 enableInterrupts;

    enableInterrupts = CyEnterCriticalSection();

    PWM7_CONTROL_REG &= (uint32)~PWM7_UPDOWN_MASK;
    PWM7_CONTROL_REG |= counterMode;

    CyExitCriticalSection(enableInterrupts);
}


/*******************************************************************************
* Function Name: PWM7_WritePeriod
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
void PWM7_WritePeriod(uint32 period)
{
    PWM7_PERIOD_REG = (period & PWM7_16BIT_MASK);
}


/*******************************************************************************
* Function Name: PWM7_ReadPeriod
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
uint32 PWM7_ReadPeriod(void)
{
    return (PWM7_PERIOD_REG & PWM7_16BIT_MASK);
}


/*******************************************************************************
* Function Name: PWM7_SetCompareSwap
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
void PWM7_SetCompareSwap(uint32 swapEnable)
{
    uint8 enableInterrupts;

    enableInterrupts = CyEnterCriticalSection();

    PWM7_CONTROL_REG &= (uint32)~PWM7_RELOAD_CC_MASK;
    PWM7_CONTROL_REG |= (swapEnable & PWM7_1BIT_MASK);

    CyExitCriticalSection(enableInterrupts);
}


/*******************************************************************************
* Function Name: PWM7_WritePeriodBuf
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
void PWM7_WritePeriodBuf(uint32 periodBuf)
{
    PWM7_PERIOD_BUF_REG = (periodBuf & PWM7_16BIT_MASK);
}


/*******************************************************************************
* Function Name: PWM7_ReadPeriodBuf
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
uint32 PWM7_ReadPeriodBuf(void)
{
    return (PWM7_PERIOD_BUF_REG & PWM7_16BIT_MASK);
}


/*******************************************************************************
* Function Name: PWM7_SetPeriodSwap
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
void PWM7_SetPeriodSwap(uint32 swapEnable)
{
    uint8 enableInterrupts;

    enableInterrupts = CyEnterCriticalSection();

    PWM7_CONTROL_REG &= (uint32)~PWM7_RELOAD_PERIOD_MASK;
    PWM7_CONTROL_REG |= ((uint32)((swapEnable & PWM7_1BIT_MASK) <<
                                                            PWM7_RELOAD_PERIOD_SHIFT));

    CyExitCriticalSection(enableInterrupts);
}


/*******************************************************************************
* Function Name: PWM7_WriteCompare
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
void PWM7_WriteCompare(uint32 compare)
{
    #if (PWM7_CY_TCPWM_4000)
        uint32 currentMode;
    #endif /* (PWM7_CY_TCPWM_4000) */

    #if (PWM7_CY_TCPWM_4000)
        currentMode = ((PWM7_CONTROL_REG & PWM7_UPDOWN_MASK) >> PWM7_UPDOWN_SHIFT);

        if (((uint32)PWM7__COUNT_DOWN == currentMode) && (0xFFFFu != compare))
        {
            compare++;
        }
        else if (((uint32)PWM7__COUNT_UP == currentMode) && (0u != compare))
        {
            compare--;
        }
        else
        {
        }
        
    
    #endif /* (PWM7_CY_TCPWM_4000) */
    
    PWM7_COMP_CAP_REG = (compare & PWM7_16BIT_MASK);
}


/*******************************************************************************
* Function Name: PWM7_ReadCompare
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
uint32 PWM7_ReadCompare(void)
{
    #if (PWM7_CY_TCPWM_4000)
        uint32 currentMode;
        uint32 regVal;
    #endif /* (PWM7_CY_TCPWM_4000) */

    #if (PWM7_CY_TCPWM_4000)
        currentMode = ((PWM7_CONTROL_REG & PWM7_UPDOWN_MASK) >> PWM7_UPDOWN_SHIFT);
        
        regVal = PWM7_COMP_CAP_REG;
        
        if (((uint32)PWM7__COUNT_DOWN == currentMode) && (0u != regVal))
        {
            regVal--;
        }
        else if (((uint32)PWM7__COUNT_UP == currentMode) && (0xFFFFu != regVal))
        {
            regVal++;
        }
        else
        {
        }

        return (regVal & PWM7_16BIT_MASK);
    #else
        return (PWM7_COMP_CAP_REG & PWM7_16BIT_MASK);
    #endif /* (PWM7_CY_TCPWM_4000) */
}


/*******************************************************************************
* Function Name: PWM7_WriteCompareBuf
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
void PWM7_WriteCompareBuf(uint32 compareBuf)
{
    #if (PWM7_CY_TCPWM_4000)
        uint32 currentMode;
    #endif /* (PWM7_CY_TCPWM_4000) */

    #if (PWM7_CY_TCPWM_4000)
        currentMode = ((PWM7_CONTROL_REG & PWM7_UPDOWN_MASK) >> PWM7_UPDOWN_SHIFT);

        if (((uint32)PWM7__COUNT_DOWN == currentMode) && (0xFFFFu != compareBuf))
        {
            compareBuf++;
        }
        else if (((uint32)PWM7__COUNT_UP == currentMode) && (0u != compareBuf))
        {
            compareBuf --;
        }
        else
        {
        }
    #endif /* (PWM7_CY_TCPWM_4000) */
    
    PWM7_COMP_CAP_BUF_REG = (compareBuf & PWM7_16BIT_MASK);
}


/*******************************************************************************
* Function Name: PWM7_ReadCompareBuf
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
uint32 PWM7_ReadCompareBuf(void)
{
    #if (PWM7_CY_TCPWM_4000)
        uint32 currentMode;
        uint32 regVal;
    #endif /* (PWM7_CY_TCPWM_4000) */

    #if (PWM7_CY_TCPWM_4000)
        currentMode = ((PWM7_CONTROL_REG & PWM7_UPDOWN_MASK) >> PWM7_UPDOWN_SHIFT);

        regVal = PWM7_COMP_CAP_BUF_REG;
        
        if (((uint32)PWM7__COUNT_DOWN == currentMode) && (0u != regVal))
        {
            regVal--;
        }
        else if (((uint32)PWM7__COUNT_UP == currentMode) && (0xFFFFu != regVal))
        {
            regVal++;
        }
        else
        {
        }

        return (regVal & PWM7_16BIT_MASK);
    #else
        return (PWM7_COMP_CAP_BUF_REG & PWM7_16BIT_MASK);
    #endif /* (PWM7_CY_TCPWM_4000) */
}


/*******************************************************************************
* Function Name: PWM7_ReadCapture
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
uint32 PWM7_ReadCapture(void)
{
    return (PWM7_COMP_CAP_REG & PWM7_16BIT_MASK);
}


/*******************************************************************************
* Function Name: PWM7_ReadCaptureBuf
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
uint32 PWM7_ReadCaptureBuf(void)
{
    return (PWM7_COMP_CAP_BUF_REG & PWM7_16BIT_MASK);
}


/*******************************************************************************
* Function Name: PWM7_SetCaptureMode
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
*     - PWM7_TRIG_LEVEL     - Level
*     - PWM7_TRIG_RISING    - Rising edge
*     - PWM7_TRIG_FALLING   - Falling edge
*     - PWM7_TRIG_BOTH      - Both rising and falling edge
*
* Return:
*  None
*
*******************************************************************************/
void PWM7_SetCaptureMode(uint32 triggerMode)
{
    uint8 enableInterrupts;

    enableInterrupts = CyEnterCriticalSection();

    PWM7_TRIG_CONTROL1_REG &= (uint32)~PWM7_CAPTURE_MASK;
    PWM7_TRIG_CONTROL1_REG |= triggerMode;

    CyExitCriticalSection(enableInterrupts);
}


/*******************************************************************************
* Function Name: PWM7_SetReloadMode
********************************************************************************
*
* Summary:
*  Sets the reload trigger mode. For Quadrature Decoder mode this is the index
*  input.
*
* Parameters:
*  triggerMode: Enumerated trigger mode value
*   Values:
*     - PWM7_TRIG_LEVEL     - Level
*     - PWM7_TRIG_RISING    - Rising edge
*     - PWM7_TRIG_FALLING   - Falling edge
*     - PWM7_TRIG_BOTH      - Both rising and falling edge
*
* Return:
*  None
*
*******************************************************************************/
void PWM7_SetReloadMode(uint32 triggerMode)
{
    uint8 enableInterrupts;

    enableInterrupts = CyEnterCriticalSection();

    PWM7_TRIG_CONTROL1_REG &= (uint32)~PWM7_RELOAD_MASK;
    PWM7_TRIG_CONTROL1_REG |= ((uint32)(triggerMode << PWM7_RELOAD_SHIFT));

    CyExitCriticalSection(enableInterrupts);
}


/*******************************************************************************
* Function Name: PWM7_SetStartMode
********************************************************************************
*
* Summary:
*  Sets the start trigger mode. For Quadrature Decoder mode this is the
*  phiB input.
*
* Parameters:
*  triggerMode: Enumerated trigger mode value
*   Values:
*     - PWM7_TRIG_LEVEL     - Level
*     - PWM7_TRIG_RISING    - Rising edge
*     - PWM7_TRIG_FALLING   - Falling edge
*     - PWM7_TRIG_BOTH      - Both rising and falling edge
*
* Return:
*  None
*
*******************************************************************************/
void PWM7_SetStartMode(uint32 triggerMode)
{
    uint8 enableInterrupts;

    enableInterrupts = CyEnterCriticalSection();

    PWM7_TRIG_CONTROL1_REG &= (uint32)~PWM7_START_MASK;
    PWM7_TRIG_CONTROL1_REG |= ((uint32)(triggerMode << PWM7_START_SHIFT));

    CyExitCriticalSection(enableInterrupts);
}


/*******************************************************************************
* Function Name: PWM7_SetStopMode
********************************************************************************
*
* Summary:
*  Sets the stop trigger mode. For PWM mode this is the kill input.
*
* Parameters:
*  triggerMode: Enumerated trigger mode value
*   Values:
*     - PWM7_TRIG_LEVEL     - Level
*     - PWM7_TRIG_RISING    - Rising edge
*     - PWM7_TRIG_FALLING   - Falling edge
*     - PWM7_TRIG_BOTH      - Both rising and falling edge
*
* Return:
*  None
*
*******************************************************************************/
void PWM7_SetStopMode(uint32 triggerMode)
{
    uint8 enableInterrupts;

    enableInterrupts = CyEnterCriticalSection();

    PWM7_TRIG_CONTROL1_REG &= (uint32)~PWM7_STOP_MASK;
    PWM7_TRIG_CONTROL1_REG |= ((uint32)(triggerMode << PWM7_STOP_SHIFT));

    CyExitCriticalSection(enableInterrupts);
}


/*******************************************************************************
* Function Name: PWM7_SetCountMode
********************************************************************************
*
* Summary:
*  Sets the count trigger mode. For Quadrature Decoder mode this is the phiA
*  input.
*
* Parameters:
*  triggerMode: Enumerated trigger mode value
*   Values:
*     - PWM7_TRIG_LEVEL     - Level
*     - PWM7_TRIG_RISING    - Rising edge
*     - PWM7_TRIG_FALLING   - Falling edge
*     - PWM7_TRIG_BOTH      - Both rising and falling edge
*
* Return:
*  None
*
*******************************************************************************/
void PWM7_SetCountMode(uint32 triggerMode)
{
    uint8 enableInterrupts;

    enableInterrupts = CyEnterCriticalSection();

    PWM7_TRIG_CONTROL1_REG &= (uint32)~PWM7_COUNT_MASK;
    PWM7_TRIG_CONTROL1_REG |= ((uint32)(triggerMode << PWM7_COUNT_SHIFT));

    CyExitCriticalSection(enableInterrupts);
}


/*******************************************************************************
* Function Name: PWM7_TriggerCommand
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
*     - PWM7_CMD_CAPTURE    - Trigger Capture/Switch command
*     - PWM7_CMD_RELOAD     - Trigger Reload/Index command
*     - PWM7_CMD_STOP       - Trigger Stop/Kill command
*     - PWM7_CMD_START      - Trigger Start/phiB command
*
* Return:
*  None
*
*******************************************************************************/
void PWM7_TriggerCommand(uint32 mask, uint32 command)
{
    uint8 enableInterrupts;

    enableInterrupts = CyEnterCriticalSection();

    PWM7_COMMAND_REG = ((uint32)(mask << command));

    CyExitCriticalSection(enableInterrupts);
}


/*******************************************************************************
* Function Name: PWM7_ReadStatus
********************************************************************************
*
* Summary:
*  Reads the status of the PWM7.
*
* Parameters:
*  None
*
* Return:
*  Status
*   Values:
*     - PWM7_STATUS_DOWN    - Set if counting down
*     - PWM7_STATUS_RUNNING - Set if counter is running
*
*******************************************************************************/
uint32 PWM7_ReadStatus(void)
{
    return ((PWM7_STATUS_REG >> PWM7_RUNNING_STATUS_SHIFT) |
            (PWM7_STATUS_REG & PWM7_STATUS_DOWN));
}


/*******************************************************************************
* Function Name: PWM7_SetInterruptMode
********************************************************************************
*
* Summary:
*  Sets the interrupt mask to control which interrupt
*  requests generate the interrupt signal.
*
* Parameters:
*   interruptMask: Mask of bits to be enabled
*   Values:
*     - PWM7_INTR_MASK_TC       - Terminal count mask
*     - PWM7_INTR_MASK_CC_MATCH - Compare count / capture mask
*
* Return:
*  None
*
*******************************************************************************/
void PWM7_SetInterruptMode(uint32 interruptMask)
{
    PWM7_INTERRUPT_MASK_REG =  interruptMask;
}


/*******************************************************************************
* Function Name: PWM7_GetInterruptSourceMasked
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
*     - PWM7_INTR_MASK_TC       - Terminal count mask
*     - PWM7_INTR_MASK_CC_MATCH - Compare count / capture mask
*
*******************************************************************************/
uint32 PWM7_GetInterruptSourceMasked(void)
{
    return (PWM7_INTERRUPT_MASKED_REG);
}


/*******************************************************************************
* Function Name: PWM7_GetInterruptSource
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
*     - PWM7_INTR_MASK_TC       - Terminal count mask
*     - PWM7_INTR_MASK_CC_MATCH - Compare count / capture mask
*
*******************************************************************************/
uint32 PWM7_GetInterruptSource(void)
{
    return (PWM7_INTERRUPT_REQ_REG);
}


/*******************************************************************************
* Function Name: PWM7_ClearInterrupt
********************************************************************************
*
* Summary:
*  Clears the interrupt request.
*
* Parameters:
*   interruptMask: Mask of interrupts to clear
*   Values:
*     - PWM7_INTR_MASK_TC       - Terminal count mask
*     - PWM7_INTR_MASK_CC_MATCH - Compare count / capture mask
*
* Return:
*  None
*
*******************************************************************************/
void PWM7_ClearInterrupt(uint32 interruptMask)
{
    PWM7_INTERRUPT_REQ_REG = interruptMask;
}


/*******************************************************************************
* Function Name: PWM7_SetInterrupt
********************************************************************************
*
* Summary:
*  Sets a software interrupt request.
*
* Parameters:
*   interruptMask: Mask of interrupts to set
*   Values:
*     - PWM7_INTR_MASK_TC       - Terminal count mask
*     - PWM7_INTR_MASK_CC_MATCH - Compare count / capture mask
*
* Return:
*  None
*
*******************************************************************************/
void PWM7_SetInterrupt(uint32 interruptMask)
{
    PWM7_INTERRUPT_SET_REG = interruptMask;
}


/* [] END OF FILE */
