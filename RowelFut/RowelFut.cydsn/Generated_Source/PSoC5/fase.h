/*******************************************************************************
* File Name: fase.h
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
#if !defined(CY_ISR_fase_H)
#define CY_ISR_fase_H


#include <cytypes.h>
#include <cyfitter.h>

/* Interrupt Controller API. */
void fase_Start(void);
void fase_StartEx(cyisraddress address);
void fase_Stop(void);

CY_ISR_PROTO(fase_Interrupt);

void fase_SetVector(cyisraddress address);
cyisraddress fase_GetVector(void);

void fase_SetPriority(uint8 priority);
uint8 fase_GetPriority(void);

void fase_Enable(void);
uint8 fase_GetState(void);
void fase_Disable(void);

void fase_SetPending(void);
void fase_ClearPending(void);


/* Interrupt Controller Constants */

/* Address of the INTC.VECT[x] register that contains the Address of the fase ISR. */
#define fase_INTC_VECTOR            ((reg32 *) fase__INTC_VECT)

/* Address of the fase ISR priority. */
#define fase_INTC_PRIOR             ((reg8 *) fase__INTC_PRIOR_REG)

/* Priority of the fase interrupt. */
#define fase_INTC_PRIOR_NUMBER      fase__INTC_PRIOR_NUM

/* Address of the INTC.SET_EN[x] byte to bit enable fase interrupt. */
#define fase_INTC_SET_EN            ((reg32 *) fase__INTC_SET_EN_REG)

/* Address of the INTC.CLR_EN[x] register to bit clear the fase interrupt. */
#define fase_INTC_CLR_EN            ((reg32 *) fase__INTC_CLR_EN_REG)

/* Address of the INTC.SET_PD[x] register to set the fase interrupt state to pending. */
#define fase_INTC_SET_PD            ((reg32 *) fase__INTC_SET_PD_REG)

/* Address of the INTC.CLR_PD[x] register to clear the fase interrupt. */
#define fase_INTC_CLR_PD            ((reg32 *) fase__INTC_CLR_PD_REG)


#endif /* CY_ISR_fase_H */


/* [] END OF FILE */
