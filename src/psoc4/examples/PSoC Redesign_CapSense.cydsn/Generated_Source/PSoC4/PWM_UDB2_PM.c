/*******************************************************************************
* File Name: PWM_UDB2_PM.c
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

#include "PWM_UDB2.h"

static PWM_UDB2_backupStruct PWM_UDB2_backup;


/*******************************************************************************
* Function Name: PWM_UDB2_SaveConfig
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
*  PWM_UDB2_backup:  Variables of this global structure are modified to
*  store the values of non retention configuration registers when Sleep() API is
*  called.
*
*******************************************************************************/
void PWM_UDB2_SaveConfig(void) 
{

    #if(!PWM_UDB2_UsingFixedFunction)
        #if(!PWM_UDB2_PWMModeIsCenterAligned)
            PWM_UDB2_backup.PWMPeriod = PWM_UDB2_ReadPeriod();
        #endif /* (!PWM_UDB2_PWMModeIsCenterAligned) */
        PWM_UDB2_backup.PWMUdb = PWM_UDB2_ReadCounter();
        #if (PWM_UDB2_UseStatus)
            PWM_UDB2_backup.InterruptMaskValue = PWM_UDB2_STATUS_MASK;
        #endif /* (PWM_UDB2_UseStatus) */

        #if(PWM_UDB2_DeadBandMode == PWM_UDB2__B_PWM__DBM_256_CLOCKS || \
            PWM_UDB2_DeadBandMode == PWM_UDB2__B_PWM__DBM_2_4_CLOCKS)
            PWM_UDB2_backup.PWMdeadBandValue = PWM_UDB2_ReadDeadTime();
        #endif /*  deadband count is either 2-4 clocks or 256 clocks */

        #if(PWM_UDB2_KillModeMinTime)
             PWM_UDB2_backup.PWMKillCounterPeriod = PWM_UDB2_ReadKillTime();
        #endif /* (PWM_UDB2_KillModeMinTime) */

        #if(PWM_UDB2_UseControl)
            PWM_UDB2_backup.PWMControlRegister = PWM_UDB2_ReadControlRegister();
        #endif /* (PWM_UDB2_UseControl) */
    #endif  /* (!PWM_UDB2_UsingFixedFunction) */
}


/*******************************************************************************
* Function Name: PWM_UDB2_RestoreConfig
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
*  PWM_UDB2_backup:  Variables of this global structure are used to
*  restore the values of non retention registers on wakeup from sleep mode.
*
*******************************************************************************/
void PWM_UDB2_RestoreConfig(void) 
{
        #if(!PWM_UDB2_UsingFixedFunction)
            #if(!PWM_UDB2_PWMModeIsCenterAligned)
                PWM_UDB2_WritePeriod(PWM_UDB2_backup.PWMPeriod);
            #endif /* (!PWM_UDB2_PWMModeIsCenterAligned) */

            PWM_UDB2_WriteCounter(PWM_UDB2_backup.PWMUdb);

            #if (PWM_UDB2_UseStatus)
                PWM_UDB2_STATUS_MASK = PWM_UDB2_backup.InterruptMaskValue;
            #endif /* (PWM_UDB2_UseStatus) */

            #if(PWM_UDB2_DeadBandMode == PWM_UDB2__B_PWM__DBM_256_CLOCKS || \
                PWM_UDB2_DeadBandMode == PWM_UDB2__B_PWM__DBM_2_4_CLOCKS)
                PWM_UDB2_WriteDeadTime(PWM_UDB2_backup.PWMdeadBandValue);
            #endif /* deadband count is either 2-4 clocks or 256 clocks */

            #if(PWM_UDB2_KillModeMinTime)
                PWM_UDB2_WriteKillTime(PWM_UDB2_backup.PWMKillCounterPeriod);
            #endif /* (PWM_UDB2_KillModeMinTime) */

            #if(PWM_UDB2_UseControl)
                PWM_UDB2_WriteControlRegister(PWM_UDB2_backup.PWMControlRegister);
            #endif /* (PWM_UDB2_UseControl) */
        #endif  /* (!PWM_UDB2_UsingFixedFunction) */
    }


/*******************************************************************************
* Function Name: PWM_UDB2_Sleep
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
*  PWM_UDB2_backup.PWMEnableState:  Is modified depending on the enable
*  state of the block before entering sleep mode.
*
*******************************************************************************/
void PWM_UDB2_Sleep(void) 
{
    #if(PWM_UDB2_UseControl)
        if(PWM_UDB2_CTRL_ENABLE == (PWM_UDB2_CONTROL & PWM_UDB2_CTRL_ENABLE))
        {
            /*Component is enabled */
            PWM_UDB2_backup.PWMEnableState = 1u;
        }
        else
        {
            /* Component is disabled */
            PWM_UDB2_backup.PWMEnableState = 0u;
        }
    #endif /* (PWM_UDB2_UseControl) */

    /* Stop component */
    PWM_UDB2_Stop();

    /* Save registers configuration */
    PWM_UDB2_SaveConfig();
}


/*******************************************************************************
* Function Name: PWM_UDB2_Wakeup
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
*  PWM_UDB2_backup.pwmEnable:  Is used to restore the enable state of
*  block on wakeup from sleep mode.
*
*******************************************************************************/
void PWM_UDB2_Wakeup(void) 
{
     /* Restore registers values */
    PWM_UDB2_RestoreConfig();

    if(PWM_UDB2_backup.PWMEnableState != 0u)
    {
        /* Enable component's operation */
        PWM_UDB2_Enable();
    } /* Do nothing if component's block was disabled before */

}


/* [] END OF FILE */
