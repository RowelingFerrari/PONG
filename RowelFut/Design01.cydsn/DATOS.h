/*******************************************************************************
* File Name: DATOS.h  
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

#if !defined(CY_PINS_DATOS_H) /* Pins DATOS_H */
#define CY_PINS_DATOS_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "DATOS_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 DATOS__PORT == 15 && ((DATOS__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    DATOS_Write(uint8 value);
void    DATOS_SetDriveMode(uint8 mode);
uint8   DATOS_ReadDataReg(void);
uint8   DATOS_Read(void);
void    DATOS_SetInterruptMode(uint16 position, uint16 mode);
uint8   DATOS_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the DATOS_SetDriveMode() function.
     *  @{
     */
        #define DATOS_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define DATOS_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define DATOS_DM_RES_UP          PIN_DM_RES_UP
        #define DATOS_DM_RES_DWN         PIN_DM_RES_DWN
        #define DATOS_DM_OD_LO           PIN_DM_OD_LO
        #define DATOS_DM_OD_HI           PIN_DM_OD_HI
        #define DATOS_DM_STRONG          PIN_DM_STRONG
        #define DATOS_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define DATOS_MASK               DATOS__MASK
#define DATOS_SHIFT              DATOS__SHIFT
#define DATOS_WIDTH              6u

/* Interrupt constants */
#if defined(DATOS__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in DATOS_SetInterruptMode() function.
     *  @{
     */
        #define DATOS_INTR_NONE      (uint16)(0x0000u)
        #define DATOS_INTR_RISING    (uint16)(0x0001u)
        #define DATOS_INTR_FALLING   (uint16)(0x0002u)
        #define DATOS_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define DATOS_INTR_MASK      (0x01u) 
#endif /* (DATOS__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define DATOS_PS                     (* (reg8 *) DATOS__PS)
/* Data Register */
#define DATOS_DR                     (* (reg8 *) DATOS__DR)
/* Port Number */
#define DATOS_PRT_NUM                (* (reg8 *) DATOS__PRT) 
/* Connect to Analog Globals */                                                  
#define DATOS_AG                     (* (reg8 *) DATOS__AG)                       
/* Analog MUX bux enable */
#define DATOS_AMUX                   (* (reg8 *) DATOS__AMUX) 
/* Bidirectional Enable */                                                        
#define DATOS_BIE                    (* (reg8 *) DATOS__BIE)
/* Bit-mask for Aliased Register Access */
#define DATOS_BIT_MASK               (* (reg8 *) DATOS__BIT_MASK)
/* Bypass Enable */
#define DATOS_BYP                    (* (reg8 *) DATOS__BYP)
/* Port wide control signals */                                                   
#define DATOS_CTL                    (* (reg8 *) DATOS__CTL)
/* Drive Modes */
#define DATOS_DM0                    (* (reg8 *) DATOS__DM0) 
#define DATOS_DM1                    (* (reg8 *) DATOS__DM1)
#define DATOS_DM2                    (* (reg8 *) DATOS__DM2) 
/* Input Buffer Disable Override */
#define DATOS_INP_DIS                (* (reg8 *) DATOS__INP_DIS)
/* LCD Common or Segment Drive */
#define DATOS_LCD_COM_SEG            (* (reg8 *) DATOS__LCD_COM_SEG)
/* Enable Segment LCD */
#define DATOS_LCD_EN                 (* (reg8 *) DATOS__LCD_EN)
/* Slew Rate Control */
#define DATOS_SLW                    (* (reg8 *) DATOS__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define DATOS_PRTDSI__CAPS_SEL       (* (reg8 *) DATOS__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define DATOS_PRTDSI__DBL_SYNC_IN    (* (reg8 *) DATOS__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define DATOS_PRTDSI__OE_SEL0        (* (reg8 *) DATOS__PRTDSI__OE_SEL0) 
#define DATOS_PRTDSI__OE_SEL1        (* (reg8 *) DATOS__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define DATOS_PRTDSI__OUT_SEL0       (* (reg8 *) DATOS__PRTDSI__OUT_SEL0) 
#define DATOS_PRTDSI__OUT_SEL1       (* (reg8 *) DATOS__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define DATOS_PRTDSI__SYNC_OUT       (* (reg8 *) DATOS__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(DATOS__SIO_CFG)
    #define DATOS_SIO_HYST_EN        (* (reg8 *) DATOS__SIO_HYST_EN)
    #define DATOS_SIO_REG_HIFREQ     (* (reg8 *) DATOS__SIO_REG_HIFREQ)
    #define DATOS_SIO_CFG            (* (reg8 *) DATOS__SIO_CFG)
    #define DATOS_SIO_DIFF           (* (reg8 *) DATOS__SIO_DIFF)
#endif /* (DATOS__SIO_CFG) */

/* Interrupt Registers */
#if defined(DATOS__INTSTAT)
    #define DATOS_INTSTAT            (* (reg8 *) DATOS__INTSTAT)
    #define DATOS_SNAP               (* (reg8 *) DATOS__SNAP)
    
	#define DATOS_0_INTTYPE_REG 		(* (reg8 *) DATOS__0__INTTYPE)
	#define DATOS_1_INTTYPE_REG 		(* (reg8 *) DATOS__1__INTTYPE)
	#define DATOS_2_INTTYPE_REG 		(* (reg8 *) DATOS__2__INTTYPE)
	#define DATOS_3_INTTYPE_REG 		(* (reg8 *) DATOS__3__INTTYPE)
	#define DATOS_4_INTTYPE_REG 		(* (reg8 *) DATOS__4__INTTYPE)
	#define DATOS_5_INTTYPE_REG 		(* (reg8 *) DATOS__5__INTTYPE)
#endif /* (DATOS__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_DATOS_H */


/* [] END OF FILE */
