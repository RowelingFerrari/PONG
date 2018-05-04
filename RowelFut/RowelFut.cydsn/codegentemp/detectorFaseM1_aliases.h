/*******************************************************************************
* File Name: detectorFaseM1.h  
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

#if !defined(CY_PINS_detectorFaseM1_ALIASES_H) /* Pins detectorFaseM1_ALIASES_H */
#define CY_PINS_detectorFaseM1_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"


/***************************************
*              Constants        
***************************************/
#define detectorFaseM1_0			(detectorFaseM1__0__PC)
#define detectorFaseM1_0_INTR	((uint16)((uint16)0x0001u << detectorFaseM1__0__SHIFT))

#define detectorFaseM1_1			(detectorFaseM1__1__PC)
#define detectorFaseM1_1_INTR	((uint16)((uint16)0x0001u << detectorFaseM1__1__SHIFT))

#define detectorFaseM1_2			(detectorFaseM1__2__PC)
#define detectorFaseM1_2_INTR	((uint16)((uint16)0x0001u << detectorFaseM1__2__SHIFT))

#define detectorFaseM1_INTR_ALL	 ((uint16)(detectorFaseM1_0_INTR| detectorFaseM1_1_INTR| detectorFaseM1_2_INTR))

#endif /* End Pins detectorFaseM1_ALIASES_H */


/* [] END OF FILE */
