/*******************************************************************************
* File Name: C4.h  
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

#if !defined(CY_PINS_C4_ALIASES_H) /* Pins C4_ALIASES_H */
#define CY_PINS_C4_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"


/***************************************
*              Constants        
***************************************/
#define C4_0			(C4__0__PC)
#define C4_0_PS		(C4__0__PS)
#define C4_0_PC		(C4__0__PC)
#define C4_0_DR		(C4__0__DR)
#define C4_0_SHIFT	(C4__0__SHIFT)
#define C4_0_INTR	((uint16)((uint16)0x0003u << (C4__0__SHIFT*2u)))

#define C4_INTR_ALL	 ((uint16)(C4_0_INTR))


#endif /* End Pins C4_ALIASES_H */


/* [] END OF FILE */
