/*******************************************************************************
* File Name: AVANZAR.h  
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

#if !defined(CY_PINS_AVANZAR_ALIASES_H) /* Pins AVANZAR_ALIASES_H */
#define CY_PINS_AVANZAR_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"


/***************************************
*              Constants        
***************************************/
#define AVANZAR_0			(AVANZAR__0__PC)
#define AVANZAR_0_INTR	((uint16)((uint16)0x0001u << AVANZAR__0__SHIFT))

#define AVANZAR_INTR_ALL	 ((uint16)(AVANZAR_0_INTR))

#endif /* End Pins AVANZAR_ALIASES_H */


/* [] END OF FILE */
