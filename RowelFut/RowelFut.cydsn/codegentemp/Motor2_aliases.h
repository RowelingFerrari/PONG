/*******************************************************************************
* File Name: Motor2.h  
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

#if !defined(CY_PINS_Motor2_ALIASES_H) /* Pins Motor2_ALIASES_H */
#define CY_PINS_Motor2_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"


/***************************************
*              Constants        
***************************************/
#define Motor2_0			(Motor2__0__PC)
#define Motor2_0_INTR	((uint16)((uint16)0x0001u << Motor2__0__SHIFT))

#define Motor2_1			(Motor2__1__PC)
#define Motor2_1_INTR	((uint16)((uint16)0x0001u << Motor2__1__SHIFT))

#define Motor2_INTR_ALL	 ((uint16)(Motor2_0_INTR| Motor2_1_INTR))

#endif /* End Pins Motor2_ALIASES_H */


/* [] END OF FILE */
