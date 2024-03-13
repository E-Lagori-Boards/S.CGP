/*******************************************************************************
* File Name: C1.h  
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

#if !defined(CY_PINS_C1_H) /* Pins C1_H */
#define CY_PINS_C1_H

#include "cytypes.h"
#include "cyfitter.h"
#include "C1_aliases.h"


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
} C1_BACKUP_STRUCT;

/** @} structures */


/***************************************
*        Function Prototypes             
***************************************/
/**
* \addtogroup group_general
* @{
*/
uint8   C1_Read(void);
void    C1_Write(uint8 value);
uint8   C1_ReadDataReg(void);
#if defined(C1__PC) || (CY_PSOC4_4200L) 
    void    C1_SetDriveMode(uint8 mode);
#endif
void    C1_SetInterruptMode(uint16 position, uint16 mode);
uint8   C1_ClearInterrupt(void);
/** @} general */

/**
* \addtogroup group_power
* @{
*/
void C1_Sleep(void); 
void C1_Wakeup(void);
/** @} power */


/***************************************
*           API Constants        
***************************************/
#if defined(C1__PC) || (CY_PSOC4_4200L) 
    /* Drive Modes */
    #define C1_DRIVE_MODE_BITS        (3)
    #define C1_DRIVE_MODE_IND_MASK    (0xFFFFFFFFu >> (32 - C1_DRIVE_MODE_BITS))

    /**
    * \addtogroup group_constants
    * @{
    */
        /** \addtogroup driveMode Drive mode constants
         * \brief Constants to be passed as "mode" parameter in the C1_SetDriveMode() function.
         *  @{
         */
        #define C1_DM_ALG_HIZ         (0x00u) /**< \brief High Impedance Analog   */
        #define C1_DM_DIG_HIZ         (0x01u) /**< \brief High Impedance Digital  */
        #define C1_DM_RES_UP          (0x02u) /**< \brief Resistive Pull Up       */
        #define C1_DM_RES_DWN         (0x03u) /**< \brief Resistive Pull Down     */
        #define C1_DM_OD_LO           (0x04u) /**< \brief Open Drain, Drives Low  */
        #define C1_DM_OD_HI           (0x05u) /**< \brief Open Drain, Drives High */
        #define C1_DM_STRONG          (0x06u) /**< \brief Strong Drive            */
        #define C1_DM_RES_UPDWN       (0x07u) /**< \brief Resistive Pull Up/Down  */
        /** @} driveMode */
    /** @} group_constants */
#endif

/* Digital Port Constants */
#define C1_MASK               C1__MASK
#define C1_SHIFT              C1__SHIFT
#define C1_WIDTH              1u

/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in C1_SetInterruptMode() function.
     *  @{
     */
        #define C1_INTR_NONE      ((uint16)(0x0000u)) /**< \brief Disabled             */
        #define C1_INTR_RISING    ((uint16)(0x5555u)) /**< \brief Rising edge trigger  */
        #define C1_INTR_FALLING   ((uint16)(0xaaaau)) /**< \brief Falling edge trigger */
        #define C1_INTR_BOTH      ((uint16)(0xffffu)) /**< \brief Both edge trigger    */
    /** @} intrMode */
/** @} group_constants */

/* SIO LPM definition */
#if defined(C1__SIO)
    #define C1_SIO_LPM_MASK       (0x03u)
#endif

/* USBIO definitions */
#if !defined(C1__PC) && (CY_PSOC4_4200L)
    #define C1_USBIO_ENABLE               ((uint32)0x80000000u)
    #define C1_USBIO_DISABLE              ((uint32)(~C1_USBIO_ENABLE))
    #define C1_USBIO_SUSPEND_SHIFT        CYFLD_USBDEVv2_USB_SUSPEND__OFFSET
    #define C1_USBIO_SUSPEND_DEL_SHIFT    CYFLD_USBDEVv2_USB_SUSPEND_DEL__OFFSET
    #define C1_USBIO_ENTER_SLEEP          ((uint32)((1u << C1_USBIO_SUSPEND_SHIFT) \
                                                        | (1u << C1_USBIO_SUSPEND_DEL_SHIFT)))
    #define C1_USBIO_EXIT_SLEEP_PH1       ((uint32)~((uint32)(1u << C1_USBIO_SUSPEND_SHIFT)))
    #define C1_USBIO_EXIT_SLEEP_PH2       ((uint32)~((uint32)(1u << C1_USBIO_SUSPEND_DEL_SHIFT)))
    #define C1_USBIO_CR1_OFF              ((uint32)0xfffffffeu)
#endif


/***************************************
*             Registers        
***************************************/
/* Main Port Registers */
#if defined(C1__PC)
    /* Port Configuration */
    #define C1_PC                 (* (reg32 *) C1__PC)
#endif
/* Pin State */
#define C1_PS                     (* (reg32 *) C1__PS)
/* Data Register */
#define C1_DR                     (* (reg32 *) C1__DR)
/* Input Buffer Disable Override */
#define C1_INP_DIS                (* (reg32 *) C1__PC2)

/* Interrupt configuration Registers */
#define C1_INTCFG                 (* (reg32 *) C1__INTCFG)
#define C1_INTSTAT                (* (reg32 *) C1__INTSTAT)

/* "Interrupt cause" register for Combined Port Interrupt (AllPortInt) in GSRef component */
#if defined (CYREG_GPIO_INTR_CAUSE)
    #define C1_INTR_CAUSE         (* (reg32 *) CYREG_GPIO_INTR_CAUSE)
#endif

/* SIO register */
#if defined(C1__SIO)
    #define C1_SIO_REG            (* (reg32 *) C1__SIO)
#endif /* (C1__SIO_CFG) */

/* USBIO registers */
#if !defined(C1__PC) && (CY_PSOC4_4200L)
    #define C1_USB_POWER_REG       (* (reg32 *) CYREG_USBDEVv2_USB_POWER_CTRL)
    #define C1_CR1_REG             (* (reg32 *) CYREG_USBDEVv2_CR1)
    #define C1_USBIO_CTRL_REG      (* (reg32 *) CYREG_USBDEVv2_USB_USBIO_CTRL)
#endif    
    
    
/***************************************
* The following code is DEPRECATED and 
* must not be used in new designs.
***************************************/
/**
* \addtogroup group_deprecated
* @{
*/
#define C1_DRIVE_MODE_SHIFT       (0x00u)
#define C1_DRIVE_MODE_MASK        (0x07u << C1_DRIVE_MODE_SHIFT)
/** @} deprecated */

#endif /* End Pins C1_H */


/* [] END OF FILE */
