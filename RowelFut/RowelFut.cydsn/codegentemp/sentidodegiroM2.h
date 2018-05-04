/*******************************************************************************
* File Name: sentidodegiroM2.h  
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

#if !defined(CY_PINS_sentidodegiroM2_H) /* Pins sentidodegiroM2_H */
#define CY_PINS_sentidodegiroM2_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "sentidodegiroM2_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 sentidodegiroM2__PORT == 15 && ((sentidodegiroM2__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    sentidodegiroM2_Write(uint8 value);
void    sentidodegiroM2_SetDriveMode(uint8 mode);
uint8   sentidodegiroM2_ReadDataReg(void);
uint8   sentidodegiroM2_Read(void);
void    sentidodegiroM2_SetInterruptMode(uint16 position, uint16 mode);
uint8   sentidodegiroM2_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the sentidodegiroM2_SetDriveMode() function.
     *  @{
     */
        #define sentidodegiroM2_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define sentidodegiroM2_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define sentidodegiroM2_DM_RES_UP          PIN_DM_RES_UP
        #define sentidodegiroM2_DM_RES_DWN         PIN_DM_RES_DWN
        #define sentidodegiroM2_DM_OD_LO           PIN_DM_OD_LO
        #define sentidodegiroM2_DM_OD_HI           PIN_DM_OD_HI
        #define sentidodegiroM2_DM_STRONG          PIN_DM_STRONG
        #define sentidodegiroM2_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define sentidodegiroM2_MASK               sentidodegiroM2__MASK
#define sentidodegiroM2_SHIFT              sentidodegiroM2__SHIFT
#define sentidodegiroM2_WIDTH              2u

/* Interrupt constants */
#if defined(sentidodegiroM2__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in sentidodegiroM2_SetInterruptMode() function.
     *  @{
     */
        #define sentidodegiroM2_INTR_NONE      (uint16)(0x0000u)
        #define sentidodegiroM2_INTR_RISING    (uint16)(0x0001u)
        #define sentidodegiroM2_INTR_FALLING   (uint16)(0x0002u)
        #define sentidodegiroM2_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define sentidodegiroM2_INTR_MASK      (0x01u) 
#endif /* (sentidodegiroM2__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define sentidodegiroM2_PS                     (* (reg8 *) sentidodegiroM2__PS)
/* Data Register */
#define sentidodegiroM2_DR                     (* (reg8 *) sentidodegiroM2__DR)
/* Port Number */
#define sentidodegiroM2_PRT_NUM                (* (reg8 *) sentidodegiroM2__PRT) 
/* Connect to Analog Globals */                                                  
#define sentidodegiroM2_AG                     (* (reg8 *) sentidodegiroM2__AG)                       
/* Analog MUX bux enable */
#define sentidodegiroM2_AMUX                   (* (reg8 *) sentidodegiroM2__AMUX) 
/* Bidirectional Enable */                                                        
#define sentidodegiroM2_BIE                    (* (reg8 *) sentidodegiroM2__BIE)
/* Bit-mask for Aliased Register Access */
#define sentidodegiroM2_BIT_MASK               (* (reg8 *) sentidodegiroM2__BIT_MASK)
/* Bypass Enable */
#define sentidodegiroM2_BYP                    (* (reg8 *) sentidodegiroM2__BYP)
/* Port wide control signals */                                                   
#define sentidodegiroM2_CTL                    (* (reg8 *) sentidodegiroM2__CTL)
/* Drive Modes */
#define sentidodegiroM2_DM0                    (* (reg8 *) sentidodegiroM2__DM0) 
#define sentidodegiroM2_DM1                    (* (reg8 *) sentidodegiroM2__DM1)
#define sentidodegiroM2_DM2                    (* (reg8 *) sentidodegiroM2__DM2) 
/* Input Buffer Disable Override */
#define sentidodegiroM2_INP_DIS                (* (reg8 *) sentidodegiroM2__INP_DIS)
/* LCD Common or Segment Drive */
#define sentidodegiroM2_LCD_COM_SEG            (* (reg8 *) sentidodegiroM2__LCD_COM_SEG)
/* Enable Segment LCD */
#define sentidodegiroM2_LCD_EN                 (* (reg8 *) sentidodegiroM2__LCD_EN)
/* Slew Rate Control */
#define sentidodegiroM2_SLW                    (* (reg8 *) sentidodegiroM2__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define sentidodegiroM2_PRTDSI__CAPS_SEL       (* (reg8 *) sentidodegiroM2__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define sentidodegiroM2_PRTDSI__DBL_SYNC_IN    (* (reg8 *) sentidodegiroM2__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define sentidodegiroM2_PRTDSI__OE_SEL0        (* (reg8 *) sentidodegiroM2__PRTDSI__OE_SEL0) 
#define sentidodegiroM2_PRTDSI__OE_SEL1        (* (reg8 *) sentidodegiroM2__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define sentidodegiroM2_PRTDSI__OUT_SEL0       (* (reg8 *) sentidodegiroM2__PRTDSI__OUT_SEL0) 
#define sentidodegiroM2_PRTDSI__OUT_SEL1       (* (reg8 *) sentidodegiroM2__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define sentidodegiroM2_PRTDSI__SYNC_OUT       (* (reg8 *) sentidodegiroM2__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(sentidodegiroM2__SIO_CFG)
    #define sentidodegiroM2_SIO_HYST_EN        (* (reg8 *) sentidodegiroM2__SIO_HYST_EN)
    #define sentidodegiroM2_SIO_REG_HIFREQ     (* (reg8 *) sentidodegiroM2__SIO_REG_HIFREQ)
    #define sentidodegiroM2_SIO_CFG            (* (reg8 *) sentidodegiroM2__SIO_CFG)
    #define sentidodegiroM2_SIO_DIFF           (* (reg8 *) sentidodegiroM2__SIO_DIFF)
#endif /* (sentidodegiroM2__SIO_CFG) */

/* Interrupt Registers */
#if defined(sentidodegiroM2__INTSTAT)
    #define sentidodegiroM2_INTSTAT            (* (reg8 *) sentidodegiroM2__INTSTAT)
    #define sentidodegiroM2_SNAP               (* (reg8 *) sentidodegiroM2__SNAP)
    
	#define sentidodegiroM2_0_INTTYPE_REG 		(* (reg8 *) sentidodegiroM2__0__INTTYPE)
	#define sentidodegiroM2_1_INTTYPE_REG 		(* (reg8 *) sentidodegiroM2__1__INTTYPE)
#endif /* (sentidodegiroM2__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_sentidodegiroM2_H */


/* [] END OF FILE */
