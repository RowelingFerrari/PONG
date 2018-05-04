/*******************************************************************************
* File Name: up.h
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
#if !defined(CY_ISR_up_H)
#define CY_ISR_up_H


#include <cytypes.h>
#include <cyfitter.h>

/* Interrupt Controller API. */
void up_Start(void);
void up_StartEx(cyisraddress address);
void up_Stop(void);

CY_ISR_PROTO(up_Interrupt);

void up_SetVector(cyisraddress address);
cyisraddress up_GetVector(void);

void up_SetPriority(uint8 priority);
uint8 up_GetPriority(void);

void up_Enable(void);
uint8 up_GetState(void);
void up_Disable(void);

void up_SetPending(void);
void up_ClearPending(void);


/* Interrupt Controller Constants */

/* Address of the INTC.VECT[x] register that contains the Address of the up ISR. */
#define up_INTC_VECTOR            ((reg32 *) up__INTC_VECT)

/* Address of the up ISR priority. */
#define up_INTC_PRIOR             ((reg8 *) up__INTC_PRIOR_REG)

/* Priority of the up interrupt. */
#define up_INTC_PRIOR_NUMBER      up__INTC_PRIOR_NUM

/* Address of the INTC.SET_EN[x] byte to bit enable up interrupt. */
#define up_INTC_SET_EN            ((reg32 *) up__INTC_SET_EN_REG)

/* Address of the INTC.CLR_EN[x] register to bit clear the up interrupt. */
#define up_INTC_CLR_EN            ((reg32 *) up__INTC_CLR_EN_REG)

/* Address of the INTC.SET_PD[x] register to set the up interrupt state to pending. */
#define up_INTC_SET_PD            ((reg32 *) up__INTC_SET_PD_REG)

/* Address of the INTC.CLR_PD[x] register to clear the up interrupt. */
#define up_INTC_CLR_PD            ((reg32 *) up__INTC_CLR_PD_REG)


#endif /* CY_ISR_up_H */


/* [] END OF FILE */
