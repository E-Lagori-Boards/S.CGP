/*******************************************************************************
* File Name: PWM7_line.c  
* Version 2.20
*
* Description:
*  This file contains APIs to set up the Pins component for low power modes.
*
* Note:
*
********************************************************************************
* Copyright 2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#include "cytypes.h"
#include "PWM7_line.h"

static PWM7_line_BACKUP_STRUCT  PWM7_line_backup = {0u, 0u, 0u};


/*******************************************************************************
* Function Name: PWM7_line_Sleep
****************************************************************************//**
*
* \brief Stores the pin configuration and prepares the pin for entering chip 
*  deep-sleep/hibernate modes. This function applies only to SIO and USBIO pins.
*  It should not be called for GPIO or GPIO_OVT pins.
*
* <b>Note</b> This function is available in PSoC 4 only.
*
* \return 
*  None 
*  
* \sideeffect
*  For SIO pins, this function configures the pin input threshold to CMOS and
*  drive level to Vddio. This is needed for SIO pins when in device 
*  deep-sleep/hibernate modes.
*
* \funcusage
*  \snippet PWM7_line_SUT.c usage_PWM7_line_Sleep_Wakeup
*******************************************************************************/
void PWM7_line_Sleep(void)
{
    #if defined(PWM7_line__PC)
        PWM7_line_backup.pcState = PWM7_line_PC;
    #else
        #if (CY_PSOC4_4200L)
            /* Save the regulator state and put the PHY into suspend mode */
            PWM7_line_backup.usbState = PWM7_line_CR1_REG;
            PWM7_line_USB_POWER_REG |= PWM7_line_USBIO_ENTER_SLEEP;
            PWM7_line_CR1_REG &= PWM7_line_USBIO_CR1_OFF;
        #endif
    #endif
    #if defined(CYIPBLOCK_m0s8ioss_VERSION) && defined(PWM7_line__SIO)
        PWM7_line_backup.sioState = PWM7_line_SIO_REG;
        /* SIO requires unregulated output buffer and single ended input buffer */
        PWM7_line_SIO_REG &= (uint32)(~PWM7_line_SIO_LPM_MASK);
    #endif  
}


/*******************************************************************************
* Function Name: PWM7_line_Wakeup
****************************************************************************//**
*
* \brief Restores the pin configuration that was saved during Pin_Sleep(). This 
* function applies only to SIO and USBIO pins. It should not be called for
* GPIO or GPIO_OVT pins.
*
* For USBIO pins, the wakeup is only triggered for falling edge interrupts.
*
* <b>Note</b> This function is available in PSoC 4 only.
*
* \return 
*  None
*  
* \funcusage
*  Refer to PWM7_line_Sleep() for an example usage.
*******************************************************************************/
void PWM7_line_Wakeup(void)
{
    #if defined(PWM7_line__PC)
        PWM7_line_PC = PWM7_line_backup.pcState;
    #else
        #if (CY_PSOC4_4200L)
            /* Restore the regulator state and come out of suspend mode */
            PWM7_line_USB_POWER_REG &= PWM7_line_USBIO_EXIT_SLEEP_PH1;
            PWM7_line_CR1_REG = PWM7_line_backup.usbState;
            PWM7_line_USB_POWER_REG &= PWM7_line_USBIO_EXIT_SLEEP_PH2;
        #endif
    #endif
    #if defined(CYIPBLOCK_m0s8ioss_VERSION) && defined(PWM7_line__SIO)
        PWM7_line_SIO_REG = PWM7_line_backup.sioState;
    #endif
}


/* [] END OF FILE */
