/*******************************************************************************
* File Name: PWM6_n.h  
* Version 2.20
*
* Description:
*  This file contains the Alias definitions for Per-Pin APIs in cypins.h. 
*  Information on using these APIs can be found in the System Reference Guide.
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_PWM6_n_ALIASES_H) /* Pins PWM6_n_ALIASES_H */
#define CY_PINS_PWM6_n_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"


/***************************************
*              Constants        
***************************************/
#define PWM6_n_0			(PWM6_n__0__PC)
#define PWM6_n_0_PS		(PWM6_n__0__PS)
#define PWM6_n_0_PC		(PWM6_n__0__PC)
#define PWM6_n_0_DR		(PWM6_n__0__DR)
#define PWM6_n_0_SHIFT	(PWM6_n__0__SHIFT)
#define PWM6_n_0_INTR	((uint16)((uint16)0x0003u << (PWM6_n__0__SHIFT*2u)))

#define PWM6_n_INTR_ALL	 ((uint16)(PWM6_n_0_INTR))


#endif /* End Pins PWM6_n_ALIASES_H */


/* [] END OF FILE */
