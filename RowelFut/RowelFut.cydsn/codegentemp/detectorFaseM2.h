/*******************************************************************************
* File Name: detectorFaseM2.h  
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

#if !defined(CY_PINS_detectorFaseM2_H) /* Pins detectorFaseM2_H */
#define CY_PINS_detectorFaseM2_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "detectorFaseM2_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 detectorFaseM2__PORT == 15 && ((detectorFaseM2__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    detectorFaseM2_Write(uint8 value);
void    detectorFaseM2_SetDriveMode(uint8 mode);
uint8   detectorFaseM2_ReadDataReg(void);
uint8   detectorFaseM2_Read(void);
void    detectorFaseM2_SetInterruptMode(uint16 position, uint16 mode);
uint8   detectorFaseM2_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the detectorFaseM2_SetDriveMode() function.
     *  @{
     */
        #define detectorFaseM2_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define detectorFaseM2_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define detectorFaseM2_DM_RES_UP          PIN_DM_RES_UP
        #define detectorFaseM2_DM_RES_DWN         PIN_DM_RES_DWN
        #define detectorFaseM2_DM_OD_LO           PIN_DM_OD_LO
        #define detectorFaseM2_DM_OD_HI           PIN_DM_OD_HI
        #define detectorFaseM2_DM_STRONG          PIN_DM_STRONG
        #define detectorFaseM2_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define detectorFaseM2_MASK               detectorFaseM2__MASK
#define detectorFaseM2_SHIFT              detectorFaseM2__SHIFT
#define detectorFaseM2_WIDTH              3u

/* Interrupt constants */
#if defined(detectorFaseM2__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in detectorFaseM2_SetInterruptMode() function.
     *  @{
     */
        #define detectorFaseM2_INTR_NONE      (uint16)(0x0000u)
        #define detectorFaseM2_INTR_RISING    (uint16)(0x0001u)
        #define detectorFaseM2_INTR_FALLING   (uint16)(0x0002u)
        #define detectorFaseM2_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define detectorFaseM2_INTR_MASK      (0x01u) 
#endif /* (detectorFaseM2__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define detectorFaseM2_PS                     (* (reg8 *) detectorFaseM2__PS)
/* Data Register */
#define detectorFaseM2_DR                     (* (reg8 *) detectorFaseM2__DR)
/* Port Number */
#define detectorFaseM2_PRT_NUM                (* (reg8 *) detectorFaseM2__PRT) 
/* Connect to Analog Globals */                                                  
#define detectorFaseM2_AG                     (* (reg8 *) detectorFaseM2__AG)                       
/* Analog MUX bux enable */
#define detectorFaseM2_AMUX                   (* (reg8 *) detectorFaseM2__AMUX) 
/* Bidirectional Enable */                                                        
#define detectorFaseM2_BIE                    (* (reg8 *) detectorFaseM2__BIE)
/* Bit-mask for Aliased Register Access */
#define detectorFaseM2_BIT_MASK               (* (reg8 *) detectorFaseM2__BIT_MASK)
/* Bypass Enable */
#define detectorFaseM2_BYP                    (* (reg8 *) detectorFaseM2__BYP)
/* Port wide control signals */                                                   
#define detectorFaseM2_CTL                    (* (reg8 *) detectorFaseM2__CTL)
/* Drive Modes */
#define detectorFaseM2_DM0                    (* (reg8 *) detectorFaseM2__DM0) 
#define detectorFaseM2_DM1                    (* (reg8 *) detectorFaseM2__DM1)
#define detectorFaseM2_DM2                    (* (reg8 *) detectorFaseM2__DM2) 
/* Input Buffer Disable Override */
#define detectorFaseM2_INP_DIS                (* (reg8 *) detectorFaseM2__INP_DIS)
/* LCD Common or Segment Drive */
#define detectorFaseM2_LCD_COM_SEG            (* (reg8 *) detectorFaseM2__LCD_COM_SEG)
/* Enable Segment LCD */
#define detectorFaseM2_LCD_EN                 (* (reg8 *) detectorFaseM2__LCD_EN)
/* Slew Rate Control */
#define detectorFaseM2_SLW                    (* (reg8 *) detectorFaseM2__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define detectorFaseM2_PRTDSI__CAPS_SEL       (* (reg8 *) detectorFaseM2__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define detectorFaseM2_PRTDSI__DBL_SYNC_IN    (* (reg8 *) detectorFaseM2__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define detectorFaseM2_PRTDSI__OE_SEL0        (* (reg8 *) detectorFaseM2__PRTDSI__OE_SEL0) 
#define detectorFaseM2_PRTDSI__OE_SEL1        (* (reg8 *) detectorFaseM2__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define detectorFaseM2_PRTDSI__OUT_SEL0       (* (reg8 *) detectorFaseM2__PRTDSI__OUT_SEL0) 
#define detectorFaseM2_PRTDSI__OUT_SEL1       (* (reg8 *) detectorFaseM2__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define detectorFaseM2_PRTDSI__SYNC_OUT       (* (reg8 *) detectorFaseM2__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(detectorFaseM2__SIO_CFG)
    #define detectorFaseM2_SIO_HYST_EN        (* (reg8 *) detectorFaseM2__SIO_HYST_EN)
    #define detectorFaseM2_SIO_REG_HIFREQ     (* (reg8 *) detectorFaseM2__SIO_REG_HIFREQ)
    #define detectorFaseM2_SIO_CFG            (* (reg8 *) detectorFaseM2__SIO_CFG)
    #define detectorFaseM2_SIO_DIFF           (* (reg8 *) detectorFaseM2__SIO_DIFF)
#endif /* (detectorFaseM2__SIO_CFG) */

/* Interrupt Registers */
#if defined(detectorFaseM2__INTSTAT)
    #define detectorFaseM2_INTSTAT            (* (reg8 *) detectorFaseM2__INTSTAT)
    #define detectorFaseM2_SNAP               (* (reg8 *) detectorFaseM2__SNAP)
    
	#define detectorFaseM2_0_INTTYPE_REG 		(* (reg8 *) detectorFaseM2__0__INTTYPE)
	#define detectorFaseM2_1_INTTYPE_REG 		(* (reg8 *) detectorFaseM2__1__INTTYPE)
	#define detectorFaseM2_2_INTTYPE_REG 		(* (reg8 *) detectorFaseM2__2__INTTYPE)
#endif /* (detectorFaseM2__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_detectorFaseM2_H */


/* [] END OF FILE */
