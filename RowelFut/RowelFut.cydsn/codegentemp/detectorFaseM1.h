/*******************************************************************************
* File Name: detectorFaseM1.h  
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

#if !defined(CY_PINS_detectorFaseM1_H) /* Pins detectorFaseM1_H */
#define CY_PINS_detectorFaseM1_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "detectorFaseM1_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 detectorFaseM1__PORT == 15 && ((detectorFaseM1__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    detectorFaseM1_Write(uint8 value);
void    detectorFaseM1_SetDriveMode(uint8 mode);
uint8   detectorFaseM1_ReadDataReg(void);
uint8   detectorFaseM1_Read(void);
void    detectorFaseM1_SetInterruptMode(uint16 position, uint16 mode);
uint8   detectorFaseM1_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the detectorFaseM1_SetDriveMode() function.
     *  @{
     */
        #define detectorFaseM1_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define detectorFaseM1_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define detectorFaseM1_DM_RES_UP          PIN_DM_RES_UP
        #define detectorFaseM1_DM_RES_DWN         PIN_DM_RES_DWN
        #define detectorFaseM1_DM_OD_LO           PIN_DM_OD_LO
        #define detectorFaseM1_DM_OD_HI           PIN_DM_OD_HI
        #define detectorFaseM1_DM_STRONG          PIN_DM_STRONG
        #define detectorFaseM1_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define detectorFaseM1_MASK               detectorFaseM1__MASK
#define detectorFaseM1_SHIFT              detectorFaseM1__SHIFT
#define detectorFaseM1_WIDTH              3u

/* Interrupt constants */
#if defined(detectorFaseM1__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in detectorFaseM1_SetInterruptMode() function.
     *  @{
     */
        #define detectorFaseM1_INTR_NONE      (uint16)(0x0000u)
        #define detectorFaseM1_INTR_RISING    (uint16)(0x0001u)
        #define detectorFaseM1_INTR_FALLING   (uint16)(0x0002u)
        #define detectorFaseM1_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define detectorFaseM1_INTR_MASK      (0x01u) 
#endif /* (detectorFaseM1__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define detectorFaseM1_PS                     (* (reg8 *) detectorFaseM1__PS)
/* Data Register */
#define detectorFaseM1_DR                     (* (reg8 *) detectorFaseM1__DR)
/* Port Number */
#define detectorFaseM1_PRT_NUM                (* (reg8 *) detectorFaseM1__PRT) 
/* Connect to Analog Globals */                                                  
#define detectorFaseM1_AG                     (* (reg8 *) detectorFaseM1__AG)                       
/* Analog MUX bux enable */
#define detectorFaseM1_AMUX                   (* (reg8 *) detectorFaseM1__AMUX) 
/* Bidirectional Enable */                                                        
#define detectorFaseM1_BIE                    (* (reg8 *) detectorFaseM1__BIE)
/* Bit-mask for Aliased Register Access */
#define detectorFaseM1_BIT_MASK               (* (reg8 *) detectorFaseM1__BIT_MASK)
/* Bypass Enable */
#define detectorFaseM1_BYP                    (* (reg8 *) detectorFaseM1__BYP)
/* Port wide control signals */                                                   
#define detectorFaseM1_CTL                    (* (reg8 *) detectorFaseM1__CTL)
/* Drive Modes */
#define detectorFaseM1_DM0                    (* (reg8 *) detectorFaseM1__DM0) 
#define detectorFaseM1_DM1                    (* (reg8 *) detectorFaseM1__DM1)
#define detectorFaseM1_DM2                    (* (reg8 *) detectorFaseM1__DM2) 
/* Input Buffer Disable Override */
#define detectorFaseM1_INP_DIS                (* (reg8 *) detectorFaseM1__INP_DIS)
/* LCD Common or Segment Drive */
#define detectorFaseM1_LCD_COM_SEG            (* (reg8 *) detectorFaseM1__LCD_COM_SEG)
/* Enable Segment LCD */
#define detectorFaseM1_LCD_EN                 (* (reg8 *) detectorFaseM1__LCD_EN)
/* Slew Rate Control */
#define detectorFaseM1_SLW                    (* (reg8 *) detectorFaseM1__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define detectorFaseM1_PRTDSI__CAPS_SEL       (* (reg8 *) detectorFaseM1__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define detectorFaseM1_PRTDSI__DBL_SYNC_IN    (* (reg8 *) detectorFaseM1__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define detectorFaseM1_PRTDSI__OE_SEL0        (* (reg8 *) detectorFaseM1__PRTDSI__OE_SEL0) 
#define detectorFaseM1_PRTDSI__OE_SEL1        (* (reg8 *) detectorFaseM1__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define detectorFaseM1_PRTDSI__OUT_SEL0       (* (reg8 *) detectorFaseM1__PRTDSI__OUT_SEL0) 
#define detectorFaseM1_PRTDSI__OUT_SEL1       (* (reg8 *) detectorFaseM1__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define detectorFaseM1_PRTDSI__SYNC_OUT       (* (reg8 *) detectorFaseM1__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(detectorFaseM1__SIO_CFG)
    #define detectorFaseM1_SIO_HYST_EN        (* (reg8 *) detectorFaseM1__SIO_HYST_EN)
    #define detectorFaseM1_SIO_REG_HIFREQ     (* (reg8 *) detectorFaseM1__SIO_REG_HIFREQ)
    #define detectorFaseM1_SIO_CFG            (* (reg8 *) detectorFaseM1__SIO_CFG)
    #define detectorFaseM1_SIO_DIFF           (* (reg8 *) detectorFaseM1__SIO_DIFF)
#endif /* (detectorFaseM1__SIO_CFG) */

/* Interrupt Registers */
#if defined(detectorFaseM1__INTSTAT)
    #define detectorFaseM1_INTSTAT            (* (reg8 *) detectorFaseM1__INTSTAT)
    #define detectorFaseM1_SNAP               (* (reg8 *) detectorFaseM1__SNAP)
    
	#define detectorFaseM1_0_INTTYPE_REG 		(* (reg8 *) detectorFaseM1__0__INTTYPE)
	#define detectorFaseM1_1_INTTYPE_REG 		(* (reg8 *) detectorFaseM1__1__INTTYPE)
	#define detectorFaseM1_2_INTTYPE_REG 		(* (reg8 *) detectorFaseM1__2__INTTYPE)
#endif /* (detectorFaseM1__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_detectorFaseM1_H */


/* [] END OF FILE */
