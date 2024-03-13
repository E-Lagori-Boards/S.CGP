/*******************************************************************************
* File Name: PWM4_Mux_PM.c
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

#include "PWM4_Mux.h"

static PWM4_Mux_BACKUP_STRUCT PWM4_Mux_backup;


/*******************************************************************************
* Function Name: PWM4_Mux_SaveConfig
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
void PWM4_Mux_SaveConfig(void)
{

}


/*******************************************************************************
* Function Name: PWM4_Mux_Sleep
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
void PWM4_Mux_Sleep(void)
{
    if(0u != (PWM4_Mux_BLOCK_CONTROL_REG & PWM4_Mux_MASK))
    {
        PWM4_Mux_backup.enableState = 1u;
    }
    else
    {
        PWM4_Mux_backup.enableState = 0u;
    }

    PWM4_Mux_Stop();
    PWM4_Mux_SaveConfig();
}


/*******************************************************************************
* Function Name: PWM4_Mux_RestoreConfig
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
void PWM4_Mux_RestoreConfig(void)
{

}


/*******************************************************************************
* Function Name: PWM4_Mux_Wakeup
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
void PWM4_Mux_Wakeup(void)
{
    PWM4_Mux_RestoreConfig();

    if(0u != PWM4_Mux_backup.enableState)
    {
        PWM4_Mux_Enable();
    }
}


/* [] END OF FILE */
