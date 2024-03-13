/*******************************************************************************
* File Name: PWM0_P_1.h  
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

#if !defined(CY_PINS_PWM0_P_1_H) /* Pins PWM0_P_1_H */
#define CY_PINS_PWM0_P_1_H

#include "cytypes.h"
#include "cyfitter.h"
#include "PWM0_P_1_aliases.h"


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
} PWM0_P_1_BACKUP_STRUCT;

/** @} structures */


/***************************************
*        Function Prototypes             
***************************************/
/**
* \addtogroup group_general
* @{
*/
uint8   PWM0_P_1_Read(void);
void    PWM0_P_1_Write(uint8 value);
uint8   PWM0_P_1_ReadDataReg(void);
#if defined(PWM0_P_1__PC) || (CY_PSOC4_4200L) 
    void    PWM0_P_1_SetDriveMode(uint8 mode);
#endif
void    PWM0_P_1_SetInterruptMode(uint16 position, uint16 mode);
uint8   PWM0_P_1_ClearInterrupt(void);
/** @} general */

/**
* \addtogroup group_power
* @{
*/
void PWM0_P_1_Sleep(void); 
void PWM0_P_1_Wakeup(void);
/** @} power */


/***************************************
*           API Constants        
***************************************/
#if defined(PWM0_P_1__PC) || (CY_PSOC4_4200L) 
    /* Drive Modes */
    #define PWM0_P_1_DRIVE_MODE_BITS        (3)
    #define PWM0_P_1_DRIVE_MODE_IND_MASK    (0xFFFFFFFFu >> (32 - PWM0_P_1_DRIVE_MODE_BITS))

    /**
    * \addtogroup group_constants
    * @{
    */
        /** \addtogroup driveMode Drive mode constants
         * \brief Constants to be passed as "mode" parameter in the PWM0_P_1_SetDriveMode() function.
         *  @{
         */
        #define PWM0_P_1_DM_ALG_HIZ         (0x00u) /**< \brief High Impedance Analog   */
        #define PWM0_P_1_DM_DIG_HIZ         (0x01u) /**< \brief High Impedance Digital  */
        #define PWM0_P_1_DM_RES_UP          (0x02u) /**< \brief Resistive Pull Up       */
        #define PWM0_P_1_DM_RES_DWN         (0x03u) /**< \brief Resistive Pull Down     */
        #define PWM0_P_1_DM_OD_LO           (0x04u) /**< \brief Open Drain, Drives Low  */
        #define PWM0_P_1_DM_OD_HI           (0x05u) /**< \brief Open Drain, Drives High */
        #define PWM0_P_1_DM_STRONG          (0x06u) /**< \brief Strong Drive            */
        #define PWM0_P_1_DM_RES_UPDWN       (0x07u) /**< \brief Resistive Pull Up/Down  */
        /** @} driveMode */
    /** @} group_constants */
#endif

/* Digital Port Constants */
#define PWM0_P_1_MASK               PWM0_P_1__MASK
#define PWM0_P_1_SHIFT              PWM0_P_1__SHIFT
#define PWM0_P_1_WIDTH              1u

/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in PWM0_P_1_SetInterruptMode() function.
     *  @{
     */
        #define PWM0_P_1_INTR_NONE      ((uint16)(0x0000u)) /**< \brief Disabled             */
        #define PWM0_P_1_INTR_RISING    ((uint16)(0x5555u)) /**< \brief Rising edge trigger  */
        #define PWM0_P_1_INTR_FALLING   ((uint16)(0xaaaau)) /**< \brief Falling edge trigger */
        #define PWM0_P_1_INTR_BOTH      ((uint16)(0xffffu)) /**< \brief Both edge trigger    */
    /** @} intrMode */
/** @} group_constants */

/* SIO LPM definition */
#if defined(PWM0_P_1__SIO)
    #define PWM0_P_1_SIO_LPM_MASK       (0x03u)
#endif

/* USBIO definitions */
#if !defined(PWM0_P_1__PC) && (CY_PSOC4_4200L)
    #define PWM0_P_1_USBIO_ENABLE               ((uint32)0x80000000u)
    #define PWM0_P_1_USBIO_DISABLE              ((uint32)(~PWM0_P_1_USBIO_ENABLE))
    #define PWM0_P_1_USBIO_SUSPEND_SHIFT        CYFLD_USBDEVv2_USB_SUSPEND__OFFSET
    #define PWM0_P_1_USBIO_SUSPEND_DEL_SHIFT    CYFLD_USBDEVv2_USB_SUSPEND_DEL__OFFSET
    #define PWM0_P_1_USBIO_ENTER_SLEEP          ((uint32)((1u << PWM0_P_1_USBIO_SUSPEND_SHIFT) \
                                                        | (1u << PWM0_P_1_USBIO_SUSPEND_DEL_SHIFT)))
    #define PWM0_P_1_USBIO_EXIT_SLEEP_PH1       ((uint32)~((uint32)(1u << PWM0_P_1_USBIO_SUSPEND_SHIFT)))
    #define PWM0_P_1_USBIO_EXIT_SLEEP_PH2       ((uint32)~((uint32)(1u << PWM0_P_1_USBIO_SUSPEND_DEL_SHIFT)))
    #define PWM0_P_1_USBIO_CR1_OFF              ((uint32)0xfffffffeu)
#endif


/***************************************
*             Registers        
***************************************/
/* Main Port Registers */
#if defined(PWM0_P_1__PC)
    /* Port Configuration */
    #define PWM0_P_1_PC                 (* (reg32 *) PWM0_P_1__PC)
#endif
/* Pin State */
#define PWM0_P_1_PS                     (* (reg32 *) PWM0_P_1__PS)
/* Data Register */
#define PWM0_P_1_DR                     (* (reg32 *) PWM0_P_1__DR)
/* Input Buffer Disable Override */
#define PWM0_P_1_INP_DIS                (* (reg32 *) PWM0_P_1__PC2)

/* Interrupt configuration Registers */
#define PWM0_P_1_INTCFG                 (* (reg32 *) PWM0_P_1__INTCFG)
#define PWM0_P_1_INTSTAT                (* (reg32 *) PWM0_P_1__INTSTAT)

/* "Interrupt cause" register for Combined Port Interrupt (AllPortInt) in GSRef component */
#if defined (CYREG_GPIO_INTR_CAUSE)
    #define PWM0_P_1_INTR_CAUSE         (* (reg32 *) CYREG_GPIO_INTR_CAUSE)
#endif

/* SIO register */
#if defined(PWM0_P_1__SIO)
    #define PWM0_P_1_SIO_REG            (* (reg32 *) PWM0_P_1__SIO)
#endif /* (PWM0_P_1__SIO_CFG) */

/* USBIO registers */
#if !defined(PWM0_P_1__PC) && (CY_PSOC4_4200L)
    #define PWM0_P_1_USB_POWER_REG       (* (reg32 *) CYREG_USBDEVv2_USB_POWER_CTRL)
    #define PWM0_P_1_CR1_REG             (* (reg32 *) CYREG_USBDEVv2_CR1)
    #define PWM0_P_1_USBIO_CTRL_REG      (* (reg32 *) CYREG_USBDEVv2_USB_USBIO_CTRL)
#endif    
    
    
/***************************************
* The following code is DEPRECATED and 
* must not be used in new designs.
***************************************/
/**
* \addtogroup group_deprecated
* @{
*/
#define PWM0_P_1_DRIVE_MODE_SHIFT       (0x00u)
#define PWM0_P_1_DRIVE_MODE_MASK        (0x07u << PWM0_P_1_DRIVE_MODE_SHIFT)
/** @} deprecated */

#endif /* End Pins PWM0_P_1_H */


/* [] END OF FILE */
