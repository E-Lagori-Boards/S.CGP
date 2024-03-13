/*******************************************************************************
* File Name: PWM1_line.h  
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

#if !defined(CY_PINS_PWM1_line_ALIASES_H) /* Pins PWM1_line_ALIASES_H */
#define CY_PINS_PWM1_line_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"


/***************************************
*              Constants        
***************************************/
#define PWM1_line_0			(PWM1_line__0__PC)
#define PWM1_line_0_PS		(PWM1_line__0__PS)
#define PWM1_line_0_PC		(PWM1_line__0__PC)
#define PWM1_line_0_DR		(PWM1_line__0__DR)
#define PWM1_line_0_SHIFT	(PWM1_line__0__SHIFT)
#define PWM1_line_0_INTR	((uint16)((uint16)0x0003u << (PWM1_line__0__SHIFT*2u)))

#define PWM1_line_INTR_ALL	 ((uint16)(PWM1_line_0_INTR))


#endif /* End Pins PWM1_line_ALIASES_H */


/* [] END OF FILE */
