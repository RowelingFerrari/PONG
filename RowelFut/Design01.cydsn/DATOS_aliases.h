/*******************************************************************************
* File Name: DATOS.h  
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

#if !defined(CY_PINS_DATOS_ALIASES_H) /* Pins DATOS_ALIASES_H */
#define CY_PINS_DATOS_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"


/***************************************
*              Constants        
***************************************/
#define DATOS_0			(DATOS__0__PC)
#define DATOS_0_INTR	((uint16)((uint16)0x0001u << DATOS__0__SHIFT))

#define DATOS_1			(DATOS__1__PC)
#define DATOS_1_INTR	((uint16)((uint16)0x0001u << DATOS__1__SHIFT))

#define DATOS_2			(DATOS__2__PC)
#define DATOS_2_INTR	((uint16)((uint16)0x0001u << DATOS__2__SHIFT))

#define DATOS_3			(DATOS__3__PC)
#define DATOS_3_INTR	((uint16)((uint16)0x0001u << DATOS__3__SHIFT))

#define DATOS_4			(DATOS__4__PC)
#define DATOS_4_INTR	((uint16)((uint16)0x0001u << DATOS__4__SHIFT))

#define DATOS_5			(DATOS__5__PC)
#define DATOS_5_INTR	((uint16)((uint16)0x0001u << DATOS__5__SHIFT))

#define DATOS_INTR_ALL	 ((uint16)(DATOS_0_INTR| DATOS_1_INTR| DATOS_2_INTR| DATOS_3_INTR| DATOS_4_INTR| DATOS_5_INTR))

#endif /* End Pins DATOS_ALIASES_H */


/* [] END OF FILE */
