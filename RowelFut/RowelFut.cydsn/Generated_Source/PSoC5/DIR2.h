/*******************************************************************************
* File Name: DIR2.h  
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

#if !defined(CY_PINS_DIR2_H) /* Pins DIR2_H */
#define CY_PINS_DIR2_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "DIR2_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 DIR2__PORT == 15 && ((DIR2__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    DIR2_Write(uint8 value);
void    DIR2_SetDriveMode(uint8 mode);
uint8   DIR2_ReadDataReg(void);
uint8   DIR2_Read(void);
void    DIR2_SetInterruptMode(uint16 position, uint16 mode);
uint8   DIR2_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the DIR2_SetDriveMode() function.
     *  @{
     */
        #define DIR2_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define DIR2_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define DIR2_DM_RES_UP          PIN_DM_RES_UP
        #define DIR2_DM_RES_DWN         PIN_DM_RES_DWN
        #define DIR2_DM_OD_LO           PIN_DM_OD_LO
        #define DIR2_DM_OD_HI           PIN_DM_OD_HI
        #define DIR2_DM_STRONG          PIN_DM_STRONG
        #define DIR2_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define DIR2_MASK               DIR2__MASK
#define DIR2_SHIFT              DIR2__SHIFT
#define DIR2_WIDTH              1u

/* Interrupt constants */
#if defined(DIR2__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in DIR2_SetInterruptMode() function.
     *  @{
     */
        #define DIR2_INTR_NONE      (uint16)(0x0000u)
        #define DIR2_INTR_RISING    (uint16)(0x0001u)
        #define DIR2_INTR_FALLING   (uint16)(0x0002u)
        #define DIR2_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define DIR2_INTR_MASK      (0x01u) 
#endif /* (DIR2__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define DIR2_PS                     (* (reg8 *) DIR2__PS)
/* Data Register */
#define DIR2_DR                     (* (reg8 *) DIR2__DR)
/* Port Number */
#define DIR2_PRT_NUM                (* (reg8 *) DIR2__PRT) 
/* Connect to Analog Globals */                                                  
#define DIR2_AG                     (* (reg8 *) DIR2__AG)                       
/* Analog MUX bux enable */
#define DIR2_AMUX                   (* (reg8 *) DIR2__AMUX) 
/* Bidirectional Enable */                                                        
#define DIR2_BIE                    (* (reg8 *) DIR2__BIE)
/* Bit-mask for Aliased Register Access */
#define DIR2_BIT_MASK               (* (reg8 *) DIR2__BIT_MASK)
/* Bypass Enable */
#define DIR2_BYP                    (* (reg8 *) DIR2__BYP)
/* Port wide control signals */                                                   
#define DIR2_CTL                    (* (reg8 *) DIR2__CTL)
/* Drive Modes */
#define DIR2_DM0                    (* (reg8 *) DIR2__DM0) 
#define DIR2_DM1                    (* (reg8 *) DIR2__DM1)
#define DIR2_DM2                    (* (reg8 *) DIR2__DM2) 
/* Input Buffer Disable Override */
#define DIR2_INP_DIS                (* (reg8 *) DIR2__INP_DIS)
/* LCD Common or Segment Drive */
#define DIR2_LCD_COM_SEG            (* (reg8 *) DIR2__LCD_COM_SEG)
/* Enable Segment LCD */
#define DIR2_LCD_EN                 (* (reg8 *) DIR2__LCD_EN)
/* Slew Rate Control */
#define DIR2_SLW                    (* (reg8 *) DIR2__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define DIR2_PRTDSI__CAPS_SEL       (* (reg8 *) DIR2__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define DIR2_PRTDSI__DBL_SYNC_IN    (* (reg8 *) DIR2__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define DIR2_PRTDSI__OE_SEL0        (* (reg8 *) DIR2__PRTDSI__OE_SEL0) 
#define DIR2_PRTDSI__OE_SEL1        (* (reg8 *) DIR2__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define DIR2_PRTDSI__OUT_SEL0       (* (reg8 *) DIR2__PRTDSI__OUT_SEL0) 
#define DIR2_PRTDSI__OUT_SEL1       (* (reg8 *) DIR2__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define DIR2_PRTDSI__SYNC_OUT       (* (reg8 *) DIR2__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(DIR2__SIO_CFG)
    #define DIR2_SIO_HYST_EN        (* (reg8 *) DIR2__SIO_HYST_EN)
    #define DIR2_SIO_REG_HIFREQ     (* (reg8 *) DIR2__SIO_REG_HIFREQ)
    #define DIR2_SIO_CFG            (* (reg8 *) DIR2__SIO_CFG)
    #define DIR2_SIO_DIFF           (* (reg8 *) DIR2__SIO_DIFF)
#endif /* (DIR2__SIO_CFG) */

/* Interrupt Registers */
#if defined(DIR2__INTSTAT)
    #define DIR2_INTSTAT            (* (reg8 *) DIR2__INTSTAT)
    #define DIR2_SNAP               (* (reg8 *) DIR2__SNAP)
    
	#define DIR2_0_INTTYPE_REG 		(* (reg8 *) DIR2__0__INTTYPE)
#endif /* (DIR2__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_DIR2_H */


/* [] END OF FILE */
