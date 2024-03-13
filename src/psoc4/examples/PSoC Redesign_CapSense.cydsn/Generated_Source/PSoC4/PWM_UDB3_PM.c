/*******************************************************************************
* File Name: PWM_UDB3_PM.c
* Version 3.30
*
* Description:
*  This file provides the power management source code to API for the
*  PWM.
*
* Note:
*
********************************************************************************
* Copyright 2008-2014, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#include "PWM_UDB3.h"

static PWM_UDB3_backupStruct PWM_UDB3_backup;


/*******************************************************************************
* Function Name: PWM_UDB3_SaveConfig
********************************************************************************
*
* Summary:
*  Saves the current user configuration of the component.
*
* Parameters:
*  None
*
* Return:
*  None
*
* Global variables:
*  PWM_UDB3_backup:  Variables of this global structure are modified to
*  store the values of non retention configuration registers when Sleep() API is
*  called.
*
*******************************************************************************/
void PWM_UDB3_SaveConfig(void) 
{

    #if(!PWM_UDB3_UsingFixedFunction)
        #if(!PWM_UDB3_PWMModeIsCenterAligned)
            PWM_UDB3_backup.PWMPeriod = PWM_UDB3_ReadPeriod();
        #endif /* (!PWM_UDB3_PWMModeIsCenterAligned) */
        PWM_UDB3_backup.PWMUdb = PWM_UDB3_ReadCounter();
        #if (PWM_UDB3_UseStatus)
            PWM_UDB3_backup.InterruptMaskValue = PWM_UDB3_STATUS_MASK;
        #endif /* (PWM_UDB3_UseStatus) */

        #if(PWM_UDB3_DeadBandMode == PWM_UDB3__B_PWM__DBM_256_CLOCKS || \
            PWM_UDB3_DeadBandMode == PWM_UDB3__B_PWM__DBM_2_4_CLOCKS)
            PWM_UDB3_backup.PWMdeadBandValue = PWM_UDB3_ReadDeadTime();
        #endif /*  deadband count is either 2-4 clocks or 256 clocks */

        #if(PWM_UDB3_KillModeMinTime)
             PWM_UDB3_backup.PWMKillCounterPeriod = PWM_UDB3_ReadKillTime();
        #endif /* (PWM_UDB3_KillModeMinTime) */

        #if(PWM_UDB3_UseControl)
            PWM_UDB3_backup.PWMControlRegister = PWM_UDB3_ReadControlRegister();
        #endif /* (PWM_UDB3_UseControl) */
    #endif  /* (!PWM_UDB3_UsingFixedFunction) */
}


/*******************************************************************************
* Function Name: PWM_UDB3_RestoreConfig
********************************************************************************
*
* Summary:
*  Restores the current user configuration of the component.
*
* Parameters:
*  None
*
* Return:
*  None
*
* Global variables:
*  PWM_UDB3_backup:  Variables of this global structure are used to
*  restore the values of non retention registers on wakeup from sleep mode.
*
*******************************************************************************/
void PWM_UDB3_RestoreConfig(void) 
{
        #if(!PWM_UDB3_UsingFixedFunction)
            #if(!PWM_UDB3_PWMModeIsCenterAligned)
                PWM_UDB3_WritePeriod(PWM_UDB3_backup.PWMPeriod);
            #endif /* (!PWM_UDB3_PWMModeIsCenterAligned) */

            PWM_UDB3_WriteCounter(PWM_UDB3_backup.PWMUdb);

            #if (PWM_UDB3_UseStatus)
                PWM_UDB3_STATUS_MASK = PWM_UDB3_backup.InterruptMaskValue;
            #endif /* (PWM_UDB3_UseStatus) */

            #if(PWM_UDB3_DeadBandMode == PWM_UDB3__B_PWM__DBM_256_CLOCKS || \
                PWM_UDB3_DeadBandMode == PWM_UDB3__B_PWM__DBM_2_4_CLOCKS)
                PWM_UDB3_WriteDeadTime(PWM_UDB3_backup.PWMdeadBandValue);
            #endif /* deadband count is either 2-4 clocks or 256 clocks */

            #if(PWM_UDB3_KillModeMinTime)
                PWM_UDB3_WriteKillTime(PWM_UDB3_backup.PWMKillCounterPeriod);
            #endif /* (PWM_UDB3_KillModeMinTime) */

            #if(PWM_UDB3_UseControl)
                PWM_UDB3_WriteControlRegister(PWM_UDB3_backup.PWMControlRegister);
            #endif /* (PWM_UDB3_UseControl) */
        #endif  /* (!PWM_UDB3_UsingFixedFunction) */
    }


/*******************************************************************************
* Function Name: PWM_UDB3_Sleep
********************************************************************************
*
* Summary:
*  Disables block's operation and saves the user configuration. Should be called
*  just prior to entering sleep.
*
* Parameters:
*  None
*
* Return:
*  None
*
* Global variables:
*  PWM_UDB3_backup.PWMEnableState:  Is modified depending on the enable
*  state of the block before entering sleep mode.
*
*******************************************************************************/
void PWM_UDB3_Sleep(void) 
{
    #if(PWM_UDB3_UseControl)
        if(PWM_UDB3_CTRL_ENABLE == (PWM_UDB3_CONTROL & PWM_UDB3_CTRL_ENABLE))
        {
            /*Component is enabled */
            PWM_UDB3_backup.PWMEnableState = 1u;
        }
        else
        {
            /* Component is disabled */
            PWM_UDB3_backup.PWMEnableState = 0u;
        }
    #endif /* (PWM_UDB3_UseControl) */

    /* Stop component */
    PWM_UDB3_Stop();

    /* Save registers configuration */
    PWM_UDB3_SaveConfig();
}


/*******************************************************************************
* Function Name: PWM_UDB3_Wakeup
********************************************************************************
*
* Summary:
*  Restores and enables the user configuration. Should be called just after
*  awaking from sleep.
*
* Parameters:
*  None
*
* Return:
*  None
*
* Global variables:
*  PWM_UDB3_backup.pwmEnable:  Is used to restore the enable state of
*  block on wakeup from sleep mode.
*
*******************************************************************************/
void PWM_UDB3_Wakeup(void) 
{
     /* Restore registers values */
    PWM_UDB3_RestoreConfig();

    if(PWM_UDB3_backup.PWMEnableState != 0u)
    {
        /* Enable component's operation */
        PWM_UDB3_Enable();
    } /* Do nothing if component's block was disabled before */

}


/* [] END OF FILE */
