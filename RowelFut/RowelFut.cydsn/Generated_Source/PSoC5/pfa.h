/*******************************************************************************
* File Name: pfa.h  
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

#if !defined(CY_PINS_pfa_H) /* Pins pfa_H */
#define CY_PINS_pfa_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "pfa_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 pfa__PORT == 15 && ((pfa__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    pfa_Write(uint8 value);
void    pfa_SetDriveMode(uint8 mode);
uint8   pfa_ReadDataReg(void);
uint8   pfa_Read(void);
void    pfa_SetInterruptMode(uint16 position, uint16 mode);
uint8   pfa_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the pfa_SetDriveMode() function.
     *  @{
     */
        #define pfa_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define pfa_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define pfa_DM_RES_UP          PIN_DM_RES_UP
        #define pfa_DM_RES_DWN         PIN_DM_RES_DWN
        #define pfa_DM_OD_LO           PIN_DM_OD_LO
        #define pfa_DM_OD_HI           PIN_DM_OD_HI
        #define pfa_DM_STRONG          PIN_DM_STRONG
        #define pfa_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define pfa_MASK               pfa__MASK
#define pfa_SHIFT              pfa__SHIFT
#define pfa_WIDTH              3u

/* Interrupt constants */
#if defined(pfa__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in pfa_SetInterruptMode() function.
     *  @{
     */
        #define pfa_INTR_NONE      (uint16)(0x0000u)
        #define pfa_INTR_RISING    (uint16)(0x0001u)
        #define pfa_INTR_FALLING   (uint16)(0x0002u)
        #define pfa_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define pfa_INTR_MASK      (0x01u) 
#endif /* (pfa__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define pfa_PS                     (* (reg8 *) pfa__PS)
/* Data Register */
#define pfa_DR                     (* (reg8 *) pfa__DR)
/* Port Number */
#define pfa_PRT_NUM                (* (reg8 *) pfa__PRT) 
/* Connect to Analog Globals */                                                  
#define pfa_AG                     (* (reg8 *) pfa__AG)                       
/* Analog MUX bux enable */
#define pfa_AMUX                   (* (reg8 *) pfa__AMUX) 
/* Bidirectional Enable */                                                        
#define pfa_BIE                    (* (reg8 *) pfa__BIE)
/* Bit-mask for Aliased Register Access */
#define pfa_BIT_MASK               (* (reg8 *) pfa__BIT_MASK)
/* Bypass Enable */
#define pfa_BYP                    (* (reg8 *) pfa__BYP)
/* Port wide control signals */                                                   
#define pfa_CTL                    (* (reg8 *) pfa__CTL)
/* Drive Modes */
#define pfa_DM0                    (* (reg8 *) pfa__DM0) 
#define pfa_DM1                    (* (reg8 *) pfa__DM1)
#define pfa_DM2                    (* (reg8 *) pfa__DM2) 
/* Input Buffer Disable Override */
#define pfa_INP_DIS                (* (reg8 *) pfa__INP_DIS)
/* LCD Common or Segment Drive */
#define pfa_LCD_COM_SEG            (* (reg8 *) pfa__LCD_COM_SEG)
/* Enable Segment LCD */
#define pfa_LCD_EN                 (* (reg8 *) pfa__LCD_EN)
/* Slew Rate Control */
#define pfa_SLW                    (* (reg8 *) pfa__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define pfa_PRTDSI__CAPS_SEL       (* (reg8 *) pfa__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define pfa_PRTDSI__DBL_SYNC_IN    (* (reg8 *) pfa__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define pfa_PRTDSI__OE_SEL0        (* (reg8 *) pfa__PRTDSI__OE_SEL0) 
#define pfa_PRTDSI__OE_SEL1        (* (reg8 *) pfa__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define pfa_PRTDSI__OUT_SEL0       (* (reg8 *) pfa__PRTDSI__OUT_SEL0) 
#define pfa_PRTDSI__OUT_SEL1       (* (reg8 *) pfa__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define pfa_PRTDSI__SYNC_OUT       (* (reg8 *) pfa__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(pfa__SIO_CFG)
    #define pfa_SIO_HYST_EN        (* (reg8 *) pfa__SIO_HYST_EN)
    #define pfa_SIO_REG_HIFREQ     (* (reg8 *) pfa__SIO_REG_HIFREQ)
    #define pfa_SIO_CFG            (* (reg8 *) pfa__SIO_CFG)
    #define pfa_SIO_DIFF           (* (reg8 *) pfa__SIO_DIFF)
#endif /* (pfa__SIO_CFG) */

/* Interrupt Registers */
#if defined(pfa__INTSTAT)
    #define pfa_INTSTAT            (* (reg8 *) pfa__INTSTAT)
    #define pfa_SNAP               (* (reg8 *) pfa__SNAP)
    
	#define pfa_0_INTTYPE_REG 		(* (reg8 *) pfa__0__INTTYPE)
	#define pfa_1_INTTYPE_REG 		(* (reg8 *) pfa__1__INTTYPE)
	#define pfa_2_INTTYPE_REG 		(* (reg8 *) pfa__2__INTTYPE)
#endif /* (pfa__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_pfa_H */


/* [] END OF FILE */
