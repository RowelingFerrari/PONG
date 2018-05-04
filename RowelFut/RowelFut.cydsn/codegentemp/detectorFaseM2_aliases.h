/*******************************************************************************
* File Name: detectorFaseM2.h  
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

#if !defined(CY_PINS_detectorFaseM2_ALIASES_H) /* Pins detectorFaseM2_ALIASES_H */
#define CY_PINS_detectorFaseM2_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"


/***************************************
*              Constants        
***************************************/
#define detectorFaseM2_0			(detectorFaseM2__0__PC)
#define detectorFaseM2_0_INTR	((uint16)((uint16)0x0001u << detectorFaseM2__0__SHIFT))

#define detectorFaseM2_1			(detectorFaseM2__1__PC)
#define detectorFaseM2_1_INTR	((uint16)((uint16)0x0001u << detectorFaseM2__1__SHIFT))

#define detectorFaseM2_2			(detectorFaseM2__2__PC)
#define detectorFaseM2_2_INTR	((uint16)((uint16)0x0001u << detectorFaseM2__2__SHIFT))

#define detectorFaseM2_INTR_ALL	 ((uint16)(detectorFaseM2_0_INTR| detectorFaseM2_1_INTR| detectorFaseM2_2_INTR))

#endif /* End Pins detectorFaseM2_ALIASES_H */


/* [] END OF FILE */
