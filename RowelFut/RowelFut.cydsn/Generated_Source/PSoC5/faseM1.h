/*******************************************************************************
* File Name: faseM1.h
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
#if !defined(CY_ISR_faseM1_H)
#define CY_ISR_faseM1_H


#include <cytypes.h>
#include <cyfitter.h>

/* Interrupt Controller API. */
void faseM1_Start(void);
void faseM1_StartEx(cyisraddress address);
void faseM1_Stop(void);

CY_ISR_PROTO(faseM1_Interrupt);

void faseM1_SetVector(cyisraddress address);
cyisraddress faseM1_GetVector(void);

void faseM1_SetPriority(uint8 priority);
uint8 faseM1_GetPriority(void);

void faseM1_Enable(void);
uint8 faseM1_GetState(void);
void faseM1_Disable(void);

void faseM1_SetPending(void);
void faseM1_ClearPending(void);


/* Interrupt Controller Constants */

/* Address of the INTC.VECT[x] register that contains the Address of the faseM1 ISR. */
#define faseM1_INTC_VECTOR            ((reg32 *) faseM1__INTC_VECT)

/* Address of the faseM1 ISR priority. */
#define faseM1_INTC_PRIOR             ((reg8 *) faseM1__INTC_PRIOR_REG)

/* Priority of the faseM1 interrupt. */
#define faseM1_INTC_PRIOR_NUMBER      faseM1__INTC_PRIOR_NUM

/* Address of the INTC.SET_EN[x] byte to bit enable faseM1 interrupt. */
#define faseM1_INTC_SET_EN            ((reg32 *) faseM1__INTC_SET_EN_REG)

/* Address of the INTC.CLR_EN[x] register to bit clear the faseM1 interrupt. */
#define faseM1_INTC_CLR_EN            ((reg32 *) faseM1__INTC_CLR_EN_REG)

/* Address of the INTC.SET_PD[x] register to set the faseM1 interrupt state to pending. */
#define faseM1_INTC_SET_PD            ((reg32 *) faseM1__INTC_SET_PD_REG)

/* Address of the INTC.CLR_PD[x] register to clear the faseM1 interrupt. */
#define faseM1_INTC_CLR_PD            ((reg32 *) faseM1__INTC_CLR_PD_REG)


#endif /* CY_ISR_faseM1_H */


/* [] END OF FILE */
