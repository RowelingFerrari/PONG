/*******************************************************************************
* File Name: faseM2.h
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
#if !defined(CY_ISR_faseM2_H)
#define CY_ISR_faseM2_H


#include <cytypes.h>
#include <cyfitter.h>

/* Interrupt Controller API. */
void faseM2_Start(void);
void faseM2_StartEx(cyisraddress address);
void faseM2_Stop(void);

CY_ISR_PROTO(faseM2_Interrupt);

void faseM2_SetVector(cyisraddress address);
cyisraddress faseM2_GetVector(void);

void faseM2_SetPriority(uint8 priority);
uint8 faseM2_GetPriority(void);

void faseM2_Enable(void);
uint8 faseM2_GetState(void);
void faseM2_Disable(void);

void faseM2_SetPending(void);
void faseM2_ClearPending(void);


/* Interrupt Controller Constants */

/* Address of the INTC.VECT[x] register that contains the Address of the faseM2 ISR. */
#define faseM2_INTC_VECTOR            ((reg32 *) faseM2__INTC_VECT)

/* Address of the faseM2 ISR priority. */
#define faseM2_INTC_PRIOR             ((reg8 *) faseM2__INTC_PRIOR_REG)

/* Priority of the faseM2 interrupt. */
#define faseM2_INTC_PRIOR_NUMBER      faseM2__INTC_PRIOR_NUM

/* Address of the INTC.SET_EN[x] byte to bit enable faseM2 interrupt. */
#define faseM2_INTC_SET_EN            ((reg32 *) faseM2__INTC_SET_EN_REG)

/* Address of the INTC.CLR_EN[x] register to bit clear the faseM2 interrupt. */
#define faseM2_INTC_CLR_EN            ((reg32 *) faseM2__INTC_CLR_EN_REG)

/* Address of the INTC.SET_PD[x] register to set the faseM2 interrupt state to pending. */
#define faseM2_INTC_SET_PD            ((reg32 *) faseM2__INTC_SET_PD_REG)

/* Address of the INTC.CLR_PD[x] register to clear the faseM2 interrupt. */
#define faseM2_INTC_CLR_PD            ((reg32 *) faseM2__INTC_CLR_PD_REG)


#endif /* CY_ISR_faseM2_H */


/* [] END OF FILE */
