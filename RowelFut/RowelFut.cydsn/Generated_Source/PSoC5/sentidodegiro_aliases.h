/*******************************************************************************
* File Name: sentidodegiro.h  
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

#if !defined(CY_PINS_sentidodegiro_ALIASES_H) /* Pins sentidodegiro_ALIASES_H */
#define CY_PINS_sentidodegiro_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"


/***************************************
*              Constants        
***************************************/
#define sentidodegiro_0			(sentidodegiro__0__PC)
#define sentidodegiro_0_INTR	((uint16)((uint16)0x0001u << sentidodegiro__0__SHIFT))

#define sentidodegiro_1			(sentidodegiro__1__PC)
#define sentidodegiro_1_INTR	((uint16)((uint16)0x0001u << sentidodegiro__1__SHIFT))

#define sentidodegiro_INTR_ALL	 ((uint16)(sentidodegiro_0_INTR| sentidodegiro_1_INTR))

#endif /* End Pins sentidodegiro_ALIASES_H */


/* [] END OF FILE */
