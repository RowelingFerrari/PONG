/*******************************************************************************
* File Name: sentidodegiroM1.h  
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

#if !defined(CY_PINS_sentidodegiroM1_ALIASES_H) /* Pins sentidodegiroM1_ALIASES_H */
#define CY_PINS_sentidodegiroM1_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"


/***************************************
*              Constants        
***************************************/
#define sentidodegiroM1_0			(sentidodegiroM1__0__PC)
#define sentidodegiroM1_0_INTR	((uint16)((uint16)0x0001u << sentidodegiroM1__0__SHIFT))

#define sentidodegiroM1_1			(sentidodegiroM1__1__PC)
#define sentidodegiroM1_1_INTR	((uint16)((uint16)0x0001u << sentidodegiroM1__1__SHIFT))

#define sentidodegiroM1_INTR_ALL	 ((uint16)(sentidodegiroM1_0_INTR| sentidodegiroM1_1_INTR))

#endif /* End Pins sentidodegiroM1_ALIASES_H */


/* [] END OF FILE */
