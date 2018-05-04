/*******************************************************************************
* File Name: Led_1.h  
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

#if !defined(CY_PINS_Led_1_ALIASES_H) /* Pins Led_1_ALIASES_H */
#define CY_PINS_Led_1_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"


/***************************************
*              Constants        
***************************************/
#define Led_1_0			(Led_1__0__PC)
#define Led_1_0_INTR	((uint16)((uint16)0x0001u << Led_1__0__SHIFT))

#define Led_1_1			(Led_1__1__PC)
#define Led_1_1_INTR	((uint16)((uint16)0x0001u << Led_1__1__SHIFT))

#define Led_1_2			(Led_1__2__PC)
#define Led_1_2_INTR	((uint16)((uint16)0x0001u << Led_1__2__SHIFT))

#define Led_1_3			(Led_1__3__PC)
#define Led_1_3_INTR	((uint16)((uint16)0x0001u << Led_1__3__SHIFT))

#define Led_1_INTR_ALL	 ((uint16)(Led_1_0_INTR| Led_1_1_INTR| Led_1_2_INTR| Led_1_3_INTR))

#endif /* End Pins Led_1_ALIASES_H */


/* [] END OF FILE */
