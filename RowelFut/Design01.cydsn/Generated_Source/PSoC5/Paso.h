/*******************************************************************************
* File Name: Paso.h  
* Version 2.20
*
* Description:
*  This file contains Pin function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_Paso_H) /* Pins Paso_H */
#define CY_PINS_Paso_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Paso_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Paso__PORT == 15 && ((Paso__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    Paso_Write(uint8 value);
void    Paso_SetDriveMode(uint8 mode);
uint8   Paso_ReadDataReg(void);
uint8   Paso_Read(void);
void    Paso_SetInterruptMode(uint16 position, uint16 mode);
uint8   Paso_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the Paso_SetDriveMode() function.
     *  @{
     */
        #define Paso_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define Paso_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define Paso_DM_RES_UP          PIN_DM_RES_UP
        #define Paso_DM_RES_DWN         PIN_DM_RES_DWN
        #define Paso_DM_OD_LO           PIN_DM_OD_LO
        #define Paso_DM_OD_HI           PIN_DM_OD_HI
        #define Paso_DM_STRONG          PIN_DM_STRONG
        #define Paso_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define Paso_MASK               Paso__MASK
#define Paso_SHIFT              Paso__SHIFT
#define Paso_WIDTH              1u

/* Interrupt constants */
#if defined(Paso__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Paso_SetInterruptMode() function.
     *  @{
     */
        #define Paso_INTR_NONE      (uint16)(0x0000u)
        #define Paso_INTR_RISING    (uint16)(0x0001u)
        #define Paso_INTR_FALLING   (uint16)(0x0002u)
        #define Paso_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define Paso_INTR_MASK      (0x01u) 
#endif /* (Paso__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Paso_PS                     (* (reg8 *) Paso__PS)
/* Data Register */
#define Paso_DR                     (* (reg8 *) Paso__DR)
/* Port Number */
#define Paso_PRT_NUM                (* (reg8 *) Paso__PRT) 
/* Connect to Analog Globals */                                                  
#define Paso_AG                     (* (reg8 *) Paso__AG)                       
/* Analog MUX bux enable */
#define Paso_AMUX                   (* (reg8 *) Paso__AMUX) 
/* Bidirectional Enable */                                                        
#define Paso_BIE                    (* (reg8 *) Paso__BIE)
/* Bit-mask for Aliased Register Access */
#define Paso_BIT_MASK               (* (reg8 *) Paso__BIT_MASK)
/* Bypass Enable */
#define Paso_BYP                    (* (reg8 *) Paso__BYP)
/* Port wide control signals */                                                   
#define Paso_CTL                    (* (reg8 *) Paso__CTL)
/* Drive Modes */
#define Paso_DM0                    (* (reg8 *) Paso__DM0) 
#define Paso_DM1                    (* (reg8 *) Paso__DM1)
#define Paso_DM2                    (* (reg8 *) Paso__DM2) 
/* Input Buffer Disable Override */
#define Paso_INP_DIS                (* (reg8 *) Paso__INP_DIS)
/* LCD Common or Segment Drive */
#define Paso_LCD_COM_SEG            (* (reg8 *) Paso__LCD_COM_SEG)
/* Enable Segment LCD */
#define Paso_LCD_EN                 (* (reg8 *) Paso__LCD_EN)
/* Slew Rate Control */
#define Paso_SLW                    (* (reg8 *) Paso__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Paso_PRTDSI__CAPS_SEL       (* (reg8 *) Paso__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Paso_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Paso__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Paso_PRTDSI__OE_SEL0        (* (reg8 *) Paso__PRTDSI__OE_SEL0) 
#define Paso_PRTDSI__OE_SEL1        (* (reg8 *) Paso__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Paso_PRTDSI__OUT_SEL0       (* (reg8 *) Paso__PRTDSI__OUT_SEL0) 
#define Paso_PRTDSI__OUT_SEL1       (* (reg8 *) Paso__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Paso_PRTDSI__SYNC_OUT       (* (reg8 *) Paso__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(Paso__SIO_CFG)
    #define Paso_SIO_HYST_EN        (* (reg8 *) Paso__SIO_HYST_EN)
    #define Paso_SIO_REG_HIFREQ     (* (reg8 *) Paso__SIO_REG_HIFREQ)
    #define Paso_SIO_CFG            (* (reg8 *) Paso__SIO_CFG)
    #define Paso_SIO_DIFF           (* (reg8 *) Paso__SIO_DIFF)
#endif /* (Paso__SIO_CFG) */

/* Interrupt Registers */
#if defined(Paso__INTSTAT)
    #define Paso_INTSTAT            (* (reg8 *) Paso__INTSTAT)
    #define Paso_SNAP               (* (reg8 *) Paso__SNAP)
    
	#define Paso_0_INTTYPE_REG 		(* (reg8 *) Paso__0__INTTYPE)
#endif /* (Paso__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Paso_H */


/* [] END OF FILE */
