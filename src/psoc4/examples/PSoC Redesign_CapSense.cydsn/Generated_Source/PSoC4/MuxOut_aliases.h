/*******************************************************************************
* File Name: MuxOut.h  
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

#if !defined(CY_PINS_MuxOut_ALIASES_H) /* Pins MuxOut_ALIASES_H */
#define CY_PINS_MuxOut_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"


/***************************************
*              Constants        
***************************************/
#define MuxOut_0			(MuxOut__0__PC)
#define MuxOut_0_PS		(MuxOut__0__PS)
#define MuxOut_0_PC		(MuxOut__0__PC)
#define MuxOut_0_DR		(MuxOut__0__DR)
#define MuxOut_0_SHIFT	(MuxOut__0__SHIFT)
#define MuxOut_0_INTR	((uint16)((uint16)0x0003u << (MuxOut__0__SHIFT*2u)))

#define MuxOut_INTR_ALL	 ((uint16)(MuxOut_0_INTR))


#endif /* End Pins MuxOut_ALIASES_H */


/* [] END OF FILE */
