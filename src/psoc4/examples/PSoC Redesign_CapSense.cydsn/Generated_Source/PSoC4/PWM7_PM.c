/*******************************************************************************
* File Name: PWM7_PM.c
* Version 2.10
*
* Description:
*  This file contains the setup, control, and status commands to support
*  the component operations in the low power mode.
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

static PWM7_BACKUP_STRUCT PWM7_backup;


/*******************************************************************************
* Function Name: PWM7_SaveConfig
********************************************************************************
*
* Summary:
*  All configuration registers are retention. Nothing to save here.
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
void PWM7_SaveConfig(void)
{

}


/*******************************************************************************
* Function Name: PWM7_Sleep
********************************************************************************
*
* Summary:
*  Stops the component operation and saves the user configuration.
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
void PWM7_Sleep(void)
{
    if(0u != (PWM7_BLOCK_CONTROL_REG & PWM7_MASK))
    {
        PWM7_backup.enableState = 1u;
    }
    else
    {
        PWM7_backup.enableState = 0u;
    }

    PWM7_Stop();
    PWM7_SaveConfig();
}


/*******************************************************************************
* Function Name: PWM7_RestoreConfig
********************************************************************************
*
* Summary:
*  All configuration registers are retention. Nothing to restore here.
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
void PWM7_RestoreConfig(void)
{

}


/*******************************************************************************
* Function Name: PWM7_Wakeup
********************************************************************************
*
* Summary:
*  Restores the user configuration and restores the enable state.
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
void PWM7_Wakeup(void)
{
    PWM7_RestoreConfig();

    if(0u != PWM7_backup.enableState)
    {
        PWM7_Enable();
    }
}


/* [] END OF FILE */
