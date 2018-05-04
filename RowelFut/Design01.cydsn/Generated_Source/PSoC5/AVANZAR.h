/*******************************************************************************
* File Name: AVANZAR.h  
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

#if !defined(CY_PINS_AVANZAR_H) /* Pins AVANZAR_H */
#define CY_PINS_AVANZAR_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "AVANZAR_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 AVANZAR__PORT == 15 && ((AVANZAR__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    AVANZAR_Write(uint8 value);
void    AVANZAR_SetDriveMode(uint8 mode);
uint8   AVANZAR_ReadDataReg(void);
uint8   AVANZAR_Read(void);
void    AVANZAR_SetInterruptMode(uint16 position, uint16 mode);
uint8   AVANZAR_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the AVANZAR_SetDriveMode() function.
     *  @{
     */
        #define AVANZAR_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define AVANZAR_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define AVANZAR_DM_RES_UP          PIN_DM_RES_UP
        #define AVANZAR_DM_RES_DWN         PIN_DM_RES_DWN
        #define AVANZAR_DM_OD_LO           PIN_DM_OD_LO
        #define AVANZAR_DM_OD_HI           PIN_DM_OD_HI
        #define AVANZAR_DM_STRONG          PIN_DM_STRONG
        #define AVANZAR_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define AVANZAR_MASK               AVANZAR__MASK
#define AVANZAR_SHIFT              AVANZAR__SHIFT
#define AVANZAR_WIDTH              1u

/* Interrupt constants */
#if defined(AVANZAR__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in AVANZAR_SetInterruptMode() function.
     *  @{
     */
        #define AVANZAR_INTR_NONE      (uint16)(0x0000u)
        #define AVANZAR_INTR_RISING    (uint16)(0x0001u)
        #define AVANZAR_INTR_FALLING   (uint16)(0x0002u)
        #define AVANZAR_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define AVANZAR_INTR_MASK      (0x01u) 
#endif /* (AVANZAR__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define AVANZAR_PS                     (* (reg8 *) AVANZAR__PS)
/* Data Register */
#define AVANZAR_DR                     (* (reg8 *) AVANZAR__DR)
/* Port Number */
#define AVANZAR_PRT_NUM                (* (reg8 *) AVANZAR__PRT) 
/* Connect to Analog Globals */                                                  
#define AVANZAR_AG                     (* (reg8 *) AVANZAR__AG)                       
/* Analog MUX bux enable */
#define AVANZAR_AMUX                   (* (reg8 *) AVANZAR__AMUX) 
/* Bidirectional Enable */                                                        
#define AVANZAR_BIE                    (* (reg8 *) AVANZAR__BIE)
/* Bit-mask for Aliased Register Access */
#define AVANZAR_BIT_MASK               (* (reg8 *) AVANZAR__BIT_MASK)
/* Bypass Enable */
#define AVANZAR_BYP                    (* (reg8 *) AVANZAR__BYP)
/* Port wide control signals */                                                   
#define AVANZAR_CTL                    (* (reg8 *) AVANZAR__CTL)
/* Drive Modes */
#define AVANZAR_DM0                    (* (reg8 *) AVANZAR__DM0) 
#define AVANZAR_DM1                    (* (reg8 *) AVANZAR__DM1)
#define AVANZAR_DM2                    (* (reg8 *) AVANZAR__DM2) 
/* Input Buffer Disable Override */
#define AVANZAR_INP_DIS                (* (reg8 *) AVANZAR__INP_DIS)
/* LCD Common or Segment Drive */
#define AVANZAR_LCD_COM_SEG            (* (reg8 *) AVANZAR__LCD_COM_SEG)
/* Enable Segment LCD */
#define AVANZAR_LCD_EN                 (* (reg8 *) AVANZAR__LCD_EN)
/* Slew Rate Control */
#define AVANZAR_SLW                    (* (reg8 *) AVANZAR__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define AVANZAR_PRTDSI__CAPS_SEL       (* (reg8 *) AVANZAR__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define AVANZAR_PRTDSI__DBL_SYNC_IN    (* (reg8 *) AVANZAR__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define AVANZAR_PRTDSI__OE_SEL0        (* (reg8 *) AVANZAR__PRTDSI__OE_SEL0) 
#define AVANZAR_PRTDSI__OE_SEL1        (* (reg8 *) AVANZAR__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define AVANZAR_PRTDSI__OUT_SEL0       (* (reg8 *) AVANZAR__PRTDSI__OUT_SEL0) 
#define AVANZAR_PRTDSI__OUT_SEL1       (* (reg8 *) AVANZAR__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define AVANZAR_PRTDSI__SYNC_OUT       (* (reg8 *) AVANZAR__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(AVANZAR__SIO_CFG)
    #define AVANZAR_SIO_HYST_EN        (* (reg8 *) AVANZAR__SIO_HYST_EN)
    #define AVANZAR_SIO_REG_HIFREQ     (* (reg8 *) AVANZAR__SIO_REG_HIFREQ)
    #define AVANZAR_SIO_CFG            (* (reg8 *) AVANZAR__SIO_CFG)
    #define AVANZAR_SIO_DIFF           (* (reg8 *) AVANZAR__SIO_DIFF)
#endif /* (AVANZAR__SIO_CFG) */

/* Interrupt Registers */
#if defined(AVANZAR__INTSTAT)
    #define AVANZAR_INTSTAT            (* (reg8 *) AVANZAR__INTSTAT)
    #define AVANZAR_SNAP               (* (reg8 *) AVANZAR__SNAP)
    
	#define AVANZAR_0_INTTYPE_REG 		(* (reg8 *) AVANZAR__0__INTTYPE)
#endif /* (AVANZAR__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_AVANZAR_H */


/* [] END OF FILE */
