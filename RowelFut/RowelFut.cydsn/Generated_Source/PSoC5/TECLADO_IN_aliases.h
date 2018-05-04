/*******************************************************************************
* File Name: TECLADO_IN.h  
* Version 2.20
*
* Description:
*  This file contains the Alias definitions for Per-Pin APIs in cypins.h. 
*  Information on using these APIs can be found in the System Reference Guide.
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_TECLADO_IN_ALIASES_H) /* Pins TECLADO_IN_ALIASES_H */
#define CY_PINS_TECLADO_IN_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"


/***************************************
*              Constants        
***************************************/
#define TECLADO_IN_0			(TECLADO_IN__0__PC)
#define TECLADO_IN_0_INTR	((uint16)((uint16)0x0001u << TECLADO_IN__0__SHIFT))

#define TECLADO_IN_1			(TECLADO_IN__1__PC)
#define TECLADO_IN_1_INTR	((uint16)((uint16)0x0001u << TECLADO_IN__1__SHIFT))

#define TECLADO_IN_2			(TECLADO_IN__2__PC)
#define TECLADO_IN_2_INTR	((uint16)((uint16)0x0001u << TECLADO_IN__2__SHIFT))

#define TECLADO_IN_3			(TECLADO_IN__3__PC)
#define TECLADO_IN_3_INTR	((uint16)((uint16)0x0001u << TECLADO_IN__3__SHIFT))

#define TECLADO_IN_INTR_ALL	 ((uint16)(TECLADO_IN_0_INTR| TECLADO_IN_1_INTR| TECLADO_IN_2_INTR| TECLADO_IN_3_INTR))

#endif /* End Pins TECLADO_IN_ALIASES_H */


/* [] END OF FILE */
