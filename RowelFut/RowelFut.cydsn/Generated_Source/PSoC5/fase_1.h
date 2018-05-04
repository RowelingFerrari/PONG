/*******************************************************************************
* File Name: fase_1.h
* Version 1.70
*
*  Description:
*   Provides the function definitions for the Interrupt Controller.
*
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/
#if !defined(CY_ISR_fase_1_H)
#define CY_ISR_fase_1_H


#include <cytypes.h>
#include <cyfitter.h>

/* Interrupt Controller API. */
void fase_1_Start(void);
void fase_1_StartEx(cyisraddress address);
void fase_1_Stop(void);

CY_ISR_PROTO(fase_1_Interrupt);

void fase_1_SetVector(cyisraddress address);
cyisraddress fase_1_GetVector(void);

void fase_1_SetPriority(uint8 priority);
uint8 fase_1_GetPriority(void);

void fase_1_Enable(void);
uint8 fase_1_GetState(void);
void fase_1_Disable(void);

void fase_1_SetPending(void);
void fase_1_ClearPending(void);


/* Interrupt Controller Constants */

/* Address of the INTC.VECT[x] register that contains the Address of the fase_1 ISR. */
#define fase_1_INTC_VECTOR            ((reg32 *) fase_1__INTC_VECT)

/* Address of the fase_1 ISR priority. */
#define fase_1_INTC_PRIOR             ((reg8 *) fase_1__INTC_PRIOR_REG)

/* Priority of the fase_1 interrupt. */
#define fase_1_INTC_PRIOR_NUMBER      fase_1__INTC_PRIOR_NUM

/* Address of the INTC.SET_EN[x] byte to bit enable fase_1 interrupt. */
#define fase_1_INTC_SET_EN            ((reg32 *) fase_1__INTC_SET_EN_REG)

/* Address of the INTC.CLR_EN[x] register to bit clear the fase_1 interrupt. */
#define fase_1_INTC_CLR_EN            ((reg32 *) fase_1__INTC_CLR_EN_REG)

/* Address of the INTC.SET_PD[x] register to set the fase_1 interrupt state to pending. */
#define fase_1_INTC_SET_PD            ((reg32 *) fase_1__INTC_SET_PD_REG)

/* Address of the INTC.CLR_PD[x] register to clear the fase_1 interrupt. */
#define fase_1_INTC_CLR_PD            ((reg32 *) fase_1__INTC_CLR_PD_REG)


#endif /* CY_ISR_fase_1_H */


/* [] END OF FILE */
