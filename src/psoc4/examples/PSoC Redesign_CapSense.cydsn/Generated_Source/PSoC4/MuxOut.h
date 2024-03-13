/*******************************************************************************
* File Name: MuxOut.h  
* Version 2.20
*
* Description:
*  This file contains Pin function prototypes and register defines
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_MuxOut_H) /* Pins MuxOut_H */
#define CY_PINS_MuxOut_H

#include "cytypes.h"
#include "cyfitter.h"
#include "MuxOut_aliases.h"


/***************************************
*     Data Struct Definitions
***************************************/

/**
* \addtogroup group_structures
* @{
*/
    
/* Structure for sleep mode support */
typedef struct
{
    uint32 pcState; /**< State of the port control register */
    uint32 sioState; /**< State of the SIO configuration */
    uint32 usbState; /**< State of the USBIO regulator */
} MuxOut_BACKUP_STRUCT;

/** @} structures */


/***************************************
*        Function Prototypes             
***************************************/
/**
* \addtogroup group_general
* @{
*/
uint8   MuxOut_Read(void);
void    MuxOut_Write(uint8 value);
uint8   MuxOut_ReadDataReg(void);
#if defined(MuxOut__PC) || (CY_PSOC4_4200L) 
    void    MuxOut_SetDriveMode(uint8 mode);
#endif
void    MuxOut_SetInterruptMode(uint16 position, uint16 mode);
uint8   MuxOut_ClearInterrupt(void);
/** @} general */

/**
* \addtogroup group_power
* @{
*/
void MuxOut_Sleep(void); 
void MuxOut_Wakeup(void);
/** @} power */


/***************************************
*           API Constants        
***************************************/
#if defined(MuxOut__PC) || (CY_PSOC4_4200L) 
    /* Drive Modes */
    #define MuxOut_DRIVE_MODE_BITS        (3)
    #define MuxOut_DRIVE_MODE_IND_MASK    (0xFFFFFFFFu >> (32 - MuxOut_DRIVE_MODE_BITS))

    /**
    * \addtogroup group_constants
    * @{
    */
        /** \addtogroup driveMode Drive mode constants
         * \brief Constants to be passed as "mode" parameter in the MuxOut_SetDriveMode() function.
         *  @{
         */
        #define MuxOut_DM_ALG_HIZ         (0x00u) /**< \brief High Impedance Analog   */
        #define MuxOut_DM_DIG_HIZ         (0x01u) /**< \brief High Impedance Digital  */
        #define MuxOut_DM_RES_UP          (0x02u) /**< \brief Resistive Pull Up       */
        #define MuxOut_DM_RES_DWN         (0x03u) /**< \brief Resistive Pull Down     */
        #define MuxOut_DM_OD_LO           (0x04u) /**< \brief Open Drain, Drives Low  */
        #define MuxOut_DM_OD_HI           (0x05u) /**< \brief Open Drain, Drives High */
        #define MuxOut_DM_STRONG          (0x06u) /**< \brief Strong Drive            */
        #define MuxOut_DM_RES_UPDWN       (0x07u) /**< \brief Resistive Pull Up/Down  */
        /** @} driveMode */
    /** @} group_constants */
#endif

/* Digital Port Constants */
#define MuxOut_MASK               MuxOut__MASK
#define MuxOut_SHIFT              MuxOut__SHIFT
#define MuxOut_WIDTH              1u

/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in MuxOut_SetInterruptMode() function.
     *  @{
     */
        #define MuxOut_INTR_NONE      ((uint16)(0x0000u)) /**< \brief Disabled             */
        #define MuxOut_INTR_RISING    ((uint16)(0x5555u)) /**< \brief Rising edge trigger  */
        #define MuxOut_INTR_FALLING   ((uint16)(0xaaaau)) /**< \brief Falling edge trigger */
        #define MuxOut_INTR_BOTH      ((uint16)(0xffffu)) /**< \brief Both edge trigger    */
    /** @} intrMode */
/** @} group_constants */

/* SIO LPM definition */
#if defined(MuxOut__SIO)
    #define MuxOut_SIO_LPM_MASK       (0x03u)
#endif

/* USBIO definitions */
#if !defined(MuxOut__PC) && (CY_PSOC4_4200L)
    #define MuxOut_USBIO_ENABLE               ((uint32)0x80000000u)
    #define MuxOut_USBIO_DISABLE              ((uint32)(~MuxOut_USBIO_ENABLE))
    #define MuxOut_USBIO_SUSPEND_SHIFT        CYFLD_USBDEVv2_USB_SUSPEND__OFFSET
    #define MuxOut_USBIO_SUSPEND_DEL_SHIFT    CYFLD_USBDEVv2_USB_SUSPEND_DEL__OFFSET
    #define MuxOut_USBIO_ENTER_SLEEP          ((uint32)((1u << MuxOut_USBIO_SUSPEND_SHIFT) \
                                                        | (1u << MuxOut_USBIO_SUSPEND_DEL_SHIFT)))
    #define MuxOut_USBIO_EXIT_SLEEP_PH1       ((uint32)~((uint32)(1u << MuxOut_USBIO_SUSPEND_SHIFT)))
    #define MuxOut_USBIO_EXIT_SLEEP_PH2       ((uint32)~((uint32)(1u << MuxOut_USBIO_SUSPEND_DEL_SHIFT)))
    #define MuxOut_USBIO_CR1_OFF              ((uint32)0xfffffffeu)
#endif


/***************************************
*             Registers        
***************************************/
/* Main Port Registers */
#if defined(MuxOut__PC)
    /* Port Configuration */
    #define MuxOut_PC                 (* (reg32 *) MuxOut__PC)
#endif
/* Pin State */
#define MuxOut_PS                     (* (reg32 *) MuxOut__PS)
/* Data Register */
#define MuxOut_DR                     (* (reg32 *) MuxOut__DR)
/* Input Buffer Disable Override */
#define MuxOut_INP_DIS                (* (reg32 *) MuxOut__PC2)

/* Interrupt configuration Registers */
#define MuxOut_INTCFG                 (* (reg32 *) MuxOut__INTCFG)
#define MuxOut_INTSTAT                (* (reg32 *) MuxOut__INTSTAT)

/* "Interrupt cause" register for Combined Port Interrupt (AllPortInt) in GSRef component */
#if defined (CYREG_GPIO_INTR_CAUSE)
    #define MuxOut_INTR_CAUSE         (* (reg32 *) CYREG_GPIO_INTR_CAUSE)
#endif

/* SIO register */
#if defined(MuxOut__SIO)
    #define MuxOut_SIO_REG            (* (reg32 *) MuxOut__SIO)
#endif /* (MuxOut__SIO_CFG) */

/* USBIO registers */
#if !defined(MuxOut__PC) && (CY_PSOC4_4200L)
    #define MuxOut_USB_POWER_REG       (* (reg32 *) CYREG_USBDEVv2_USB_POWER_CTRL)
    #define MuxOut_CR1_REG             (* (reg32 *) CYREG_USBDEVv2_CR1)
    #define MuxOut_USBIO_CTRL_REG      (* (reg32 *) CYREG_USBDEVv2_USB_USBIO_CTRL)
#endif    
    
    
/***************************************
* The following code is DEPRECATED and 
* must not be used in new designs.
***************************************/
/**
* \addtogroup group_deprecated
* @{
*/
#define MuxOut_DRIVE_MODE_SHIFT       (0x00u)
#define MuxOut_DRIVE_MODE_MASK        (0x07u << MuxOut_DRIVE_MODE_SHIFT)
/** @} deprecated */

#endif /* End Pins MuxOut_H */


/* [] END OF FILE */
