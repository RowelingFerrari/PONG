/*******************************************************************************
* File Name: cyfittergnu.inc
* 
* PSoC Creator  4.1 Update 1
*
* Description:
* 
* This file is automatically generated by PSoC Creator.
*
********************************************************************************
* Copyright (c) 2007-2017 Cypress Semiconductor.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
********************************************************************************/

.ifndef INCLUDED_CYFITTERGNU_INC
.set INCLUDED_CYFITTERGNU_INC, 1
.include "cydevicegnu.inc"
.include "cydevicegnu_trm.inc"

/* Clock_1 */
.set Clock_1__CFG0, CYREG_CLKDIST_DCFG3_CFG0
.set Clock_1__CFG1, CYREG_CLKDIST_DCFG3_CFG1
.set Clock_1__CFG2, CYREG_CLKDIST_DCFG3_CFG2
.set Clock_1__CFG2_SRC_SEL_MASK, 0x07
.set Clock_1__INDEX, 0x03
.set Clock_1__PM_ACT_CFG, CYREG_PM_ACT_CFG2
.set Clock_1__PM_ACT_MSK, 0x08
.set Clock_1__PM_STBY_CFG, CYREG_PM_STBY_CFG2
.set Clock_1__PM_STBY_MSK, 0x08

/* Clock_2 */
.set Clock_2__CFG0, CYREG_CLKDIST_DCFG2_CFG0
.set Clock_2__CFG1, CYREG_CLKDIST_DCFG2_CFG1
.set Clock_2__CFG2, CYREG_CLKDIST_DCFG2_CFG2
.set Clock_2__CFG2_SRC_SEL_MASK, 0x07
.set Clock_2__INDEX, 0x02
.set Clock_2__PM_ACT_CFG, CYREG_PM_ACT_CFG2
.set Clock_2__PM_ACT_MSK, 0x04
.set Clock_2__PM_STBY_CFG, CYREG_PM_STBY_CFG2
.set Clock_2__PM_STBY_MSK, 0x04

/* Clock_3 */
.set Clock_3__CFG0, CYREG_CLKDIST_DCFG1_CFG0
.set Clock_3__CFG1, CYREG_CLKDIST_DCFG1_CFG1
.set Clock_3__CFG2, CYREG_CLKDIST_DCFG1_CFG2
.set Clock_3__CFG2_SRC_SEL_MASK, 0x07
.set Clock_3__INDEX, 0x01
.set Clock_3__PM_ACT_CFG, CYREG_PM_ACT_CFG2
.set Clock_3__PM_ACT_MSK, 0x02
.set Clock_3__PM_STBY_CFG, CYREG_PM_STBY_CFG2
.set Clock_3__PM_STBY_MSK, 0x02

/* Clock_4 */
.set Clock_4__CFG0, CYREG_CLKDIST_DCFG0_CFG0
.set Clock_4__CFG1, CYREG_CLKDIST_DCFG0_CFG1
.set Clock_4__CFG2, CYREG_CLKDIST_DCFG0_CFG2
.set Clock_4__CFG2_SRC_SEL_MASK, 0x07
.set Clock_4__INDEX, 0x00
.set Clock_4__PM_ACT_CFG, CYREG_PM_ACT_CFG2
.set Clock_4__PM_ACT_MSK, 0x01
.set Clock_4__PM_STBY_CFG, CYREG_PM_STBY_CFG2
.set Clock_4__PM_STBY_MSK, 0x01

/* LED */
.set LED__0__INTTYPE, CYREG_PICU2_INTTYPE1
.set LED__0__MASK, 0x02
.set LED__0__PC, CYREG_PRT2_PC1
.set LED__0__PORT, 2
.set LED__0__SHIFT, 1
.set LED__AG, CYREG_PRT2_AG
.set LED__AMUX, CYREG_PRT2_AMUX
.set LED__BIE, CYREG_PRT2_BIE
.set LED__BIT_MASK, CYREG_PRT2_BIT_MASK
.set LED__BYP, CYREG_PRT2_BYP
.set LED__CTL, CYREG_PRT2_CTL
.set LED__DM0, CYREG_PRT2_DM0
.set LED__DM1, CYREG_PRT2_DM1
.set LED__DM2, CYREG_PRT2_DM2
.set LED__DR, CYREG_PRT2_DR
.set LED__INP_DIS, CYREG_PRT2_INP_DIS
.set LED__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU2_BASE
.set LED__LCD_COM_SEG, CYREG_PRT2_LCD_COM_SEG
.set LED__LCD_EN, CYREG_PRT2_LCD_EN
.set LED__MASK, 0x02
.set LED__PORT, 2
.set LED__PRT, CYREG_PRT2_PRT
.set LED__PRTDSI__CAPS_SEL, CYREG_PRT2_CAPS_SEL
.set LED__PRTDSI__DBL_SYNC_IN, CYREG_PRT2_DBL_SYNC_IN
.set LED__PRTDSI__OE_SEL0, CYREG_PRT2_OE_SEL0
.set LED__PRTDSI__OE_SEL1, CYREG_PRT2_OE_SEL1
.set LED__PRTDSI__OUT_SEL0, CYREG_PRT2_OUT_SEL0
.set LED__PRTDSI__OUT_SEL1, CYREG_PRT2_OUT_SEL1
.set LED__PRTDSI__SYNC_OUT, CYREG_PRT2_SYNC_OUT
.set LED__PS, CYREG_PRT2_PS
.set LED__SHIFT, 1
.set LED__SLW, CYREG_PRT2_SLW

/* Led_1 */
.set Led_1__0__INTTYPE, CYREG_PICU2_INTTYPE3
.set Led_1__0__MASK, 0x08
.set Led_1__0__PC, CYREG_PRT2_PC3
.set Led_1__0__PORT, 2
.set Led_1__0__SHIFT, 3
.set Led_1__1__INTTYPE, CYREG_PICU2_INTTYPE4
.set Led_1__1__MASK, 0x10
.set Led_1__1__PC, CYREG_PRT2_PC4
.set Led_1__1__PORT, 2
.set Led_1__1__SHIFT, 4
.set Led_1__2__INTTYPE, CYREG_PICU2_INTTYPE5
.set Led_1__2__MASK, 0x20
.set Led_1__2__PC, CYREG_PRT2_PC5
.set Led_1__2__PORT, 2
.set Led_1__2__SHIFT, 5
.set Led_1__3__INTTYPE, CYREG_PICU2_INTTYPE6
.set Led_1__3__MASK, 0x40
.set Led_1__3__PC, CYREG_PRT2_PC6
.set Led_1__3__PORT, 2
.set Led_1__3__SHIFT, 6
.set Led_1__AG, CYREG_PRT2_AG
.set Led_1__AMUX, CYREG_PRT2_AMUX
.set Led_1__BIE, CYREG_PRT2_BIE
.set Led_1__BIT_MASK, CYREG_PRT2_BIT_MASK
.set Led_1__BYP, CYREG_PRT2_BYP
.set Led_1__CTL, CYREG_PRT2_CTL
.set Led_1__DM0, CYREG_PRT2_DM0
.set Led_1__DM1, CYREG_PRT2_DM1
.set Led_1__DM2, CYREG_PRT2_DM2
.set Led_1__DR, CYREG_PRT2_DR
.set Led_1__INP_DIS, CYREG_PRT2_INP_DIS
.set Led_1__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU2_BASE
.set Led_1__LCD_COM_SEG, CYREG_PRT2_LCD_COM_SEG
.set Led_1__LCD_EN, CYREG_PRT2_LCD_EN
.set Led_1__MASK, 0x78
.set Led_1__PORT, 2
.set Led_1__PRT, CYREG_PRT2_PRT
.set Led_1__PRTDSI__CAPS_SEL, CYREG_PRT2_CAPS_SEL
.set Led_1__PRTDSI__DBL_SYNC_IN, CYREG_PRT2_DBL_SYNC_IN
.set Led_1__PRTDSI__OE_SEL0, CYREG_PRT2_OE_SEL0
.set Led_1__PRTDSI__OE_SEL1, CYREG_PRT2_OE_SEL1
.set Led_1__PRTDSI__OUT_SEL0, CYREG_PRT2_OUT_SEL0
.set Led_1__PRTDSI__OUT_SEL1, CYREG_PRT2_OUT_SEL1
.set Led_1__PRTDSI__SYNC_OUT, CYREG_PRT2_SYNC_OUT
.set Led_1__PS, CYREG_PRT2_PS
.set Led_1__SHIFT, 3
.set Led_1__SLW, CYREG_PRT2_SLW

/* M1 */
.set M1__0__INTTYPE, CYREG_PICU1_INTTYPE6
.set M1__0__MASK, 0x40
.set M1__0__PC, CYREG_PRT1_PC6
.set M1__0__PORT, 1
.set M1__0__SHIFT, 6
.set M1__1__INTTYPE, CYREG_PICU1_INTTYPE7
.set M1__1__MASK, 0x80
.set M1__1__PC, CYREG_PRT1_PC7
.set M1__1__PORT, 1
.set M1__1__SHIFT, 7
.set M1__AG, CYREG_PRT1_AG
.set M1__AMUX, CYREG_PRT1_AMUX
.set M1__BIE, CYREG_PRT1_BIE
.set M1__BIT_MASK, CYREG_PRT1_BIT_MASK
.set M1__BYP, CYREG_PRT1_BYP
.set M1__CTL, CYREG_PRT1_CTL
.set M1__DM0, CYREG_PRT1_DM0
.set M1__DM1, CYREG_PRT1_DM1
.set M1__DM2, CYREG_PRT1_DM2
.set M1__DR, CYREG_PRT1_DR
.set M1__INP_DIS, CYREG_PRT1_INP_DIS
.set M1__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU1_BASE
.set M1__LCD_COM_SEG, CYREG_PRT1_LCD_COM_SEG
.set M1__LCD_EN, CYREG_PRT1_LCD_EN
.set M1__MASK, 0xC0
.set M1__PORT, 1
.set M1__PRT, CYREG_PRT1_PRT
.set M1__PRTDSI__CAPS_SEL, CYREG_PRT1_CAPS_SEL
.set M1__PRTDSI__DBL_SYNC_IN, CYREG_PRT1_DBL_SYNC_IN
.set M1__PRTDSI__OE_SEL0, CYREG_PRT1_OE_SEL0
.set M1__PRTDSI__OE_SEL1, CYREG_PRT1_OE_SEL1
.set M1__PRTDSI__OUT_SEL0, CYREG_PRT1_OUT_SEL0
.set M1__PRTDSI__OUT_SEL1, CYREG_PRT1_OUT_SEL1
.set M1__PRTDSI__SYNC_OUT, CYREG_PRT1_SYNC_OUT
.set M1__PS, CYREG_PRT1_PS
.set M1__SHIFT, 6
.set M1__SLW, CYREG_PRT1_SLW

/* M2 */
.set M2__0__INTTYPE, CYREG_PICU1_INTTYPE4
.set M2__0__MASK, 0x10
.set M2__0__PC, CYREG_PRT1_PC4
.set M2__0__PORT, 1
.set M2__0__SHIFT, 4
.set M2__1__INTTYPE, CYREG_PICU1_INTTYPE5
.set M2__1__MASK, 0x20
.set M2__1__PC, CYREG_PRT1_PC5
.set M2__1__PORT, 1
.set M2__1__SHIFT, 5
.set M2__AG, CYREG_PRT1_AG
.set M2__AMUX, CYREG_PRT1_AMUX
.set M2__BIE, CYREG_PRT1_BIE
.set M2__BIT_MASK, CYREG_PRT1_BIT_MASK
.set M2__BYP, CYREG_PRT1_BYP
.set M2__CTL, CYREG_PRT1_CTL
.set M2__DM0, CYREG_PRT1_DM0
.set M2__DM1, CYREG_PRT1_DM1
.set M2__DM2, CYREG_PRT1_DM2
.set M2__DR, CYREG_PRT1_DR
.set M2__INP_DIS, CYREG_PRT1_INP_DIS
.set M2__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU1_BASE
.set M2__LCD_COM_SEG, CYREG_PRT1_LCD_COM_SEG
.set M2__LCD_EN, CYREG_PRT1_LCD_EN
.set M2__MASK, 0x30
.set M2__PORT, 1
.set M2__PRT, CYREG_PRT1_PRT
.set M2__PRTDSI__CAPS_SEL, CYREG_PRT1_CAPS_SEL
.set M2__PRTDSI__DBL_SYNC_IN, CYREG_PRT1_DBL_SYNC_IN
.set M2__PRTDSI__OE_SEL0, CYREG_PRT1_OE_SEL0
.set M2__PRTDSI__OE_SEL1, CYREG_PRT1_OE_SEL1
.set M2__PRTDSI__OUT_SEL0, CYREG_PRT1_OUT_SEL0
.set M2__PRTDSI__OUT_SEL1, CYREG_PRT1_OUT_SEL1
.set M2__PRTDSI__SYNC_OUT, CYREG_PRT1_SYNC_OUT
.set M2__PS, CYREG_PRT1_PS
.set M2__SHIFT, 4
.set M2__SLW, CYREG_PRT1_SLW

/* Motor1 */
.set Motor1__0__INTTYPE, CYREG_PICU3_INTTYPE3
.set Motor1__0__MASK, 0x08
.set Motor1__0__PC, CYREG_PRT3_PC3
.set Motor1__0__PORT, 3
.set Motor1__0__SHIFT, 3
.set Motor1__1__INTTYPE, CYREG_PICU3_INTTYPE4
.set Motor1__1__MASK, 0x10
.set Motor1__1__PC, CYREG_PRT3_PC4
.set Motor1__1__PORT, 3
.set Motor1__1__SHIFT, 4
.set Motor1__AG, CYREG_PRT3_AG
.set Motor1__AMUX, CYREG_PRT3_AMUX
.set Motor1__BIE, CYREG_PRT3_BIE
.set Motor1__BIT_MASK, CYREG_PRT3_BIT_MASK
.set Motor1__BYP, CYREG_PRT3_BYP
.set Motor1__CTL, CYREG_PRT3_CTL
.set Motor1__DM0, CYREG_PRT3_DM0
.set Motor1__DM1, CYREG_PRT3_DM1
.set Motor1__DM2, CYREG_PRT3_DM2
.set Motor1__DR, CYREG_PRT3_DR
.set Motor1__INP_DIS, CYREG_PRT3_INP_DIS
.set Motor1__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU3_BASE
.set Motor1__LCD_COM_SEG, CYREG_PRT3_LCD_COM_SEG
.set Motor1__LCD_EN, CYREG_PRT3_LCD_EN
.set Motor1__MASK, 0x18
.set Motor1__PORT, 3
.set Motor1__PRT, CYREG_PRT3_PRT
.set Motor1__PRTDSI__CAPS_SEL, CYREG_PRT3_CAPS_SEL
.set Motor1__PRTDSI__DBL_SYNC_IN, CYREG_PRT3_DBL_SYNC_IN
.set Motor1__PRTDSI__OE_SEL0, CYREG_PRT3_OE_SEL0
.set Motor1__PRTDSI__OE_SEL1, CYREG_PRT3_OE_SEL1
.set Motor1__PRTDSI__OUT_SEL0, CYREG_PRT3_OUT_SEL0
.set Motor1__PRTDSI__OUT_SEL1, CYREG_PRT3_OUT_SEL1
.set Motor1__PRTDSI__SYNC_OUT, CYREG_PRT3_SYNC_OUT
.set Motor1__PS, CYREG_PRT3_PS
.set Motor1__SHIFT, 3
.set Motor1__SLW, CYREG_PRT3_SLW

/* Motor2 */
.set Motor2__0__INTTYPE, CYREG_PICU3_INTTYPE5
.set Motor2__0__MASK, 0x20
.set Motor2__0__PC, CYREG_PRT3_PC5
.set Motor2__0__PORT, 3
.set Motor2__0__SHIFT, 5
.set Motor2__1__INTTYPE, CYREG_PICU3_INTTYPE6
.set Motor2__1__MASK, 0x40
.set Motor2__1__PC, CYREG_PRT3_PC6
.set Motor2__1__PORT, 3
.set Motor2__1__SHIFT, 6
.set Motor2__AG, CYREG_PRT3_AG
.set Motor2__AMUX, CYREG_PRT3_AMUX
.set Motor2__BIE, CYREG_PRT3_BIE
.set Motor2__BIT_MASK, CYREG_PRT3_BIT_MASK
.set Motor2__BYP, CYREG_PRT3_BYP
.set Motor2__CTL, CYREG_PRT3_CTL
.set Motor2__DM0, CYREG_PRT3_DM0
.set Motor2__DM1, CYREG_PRT3_DM1
.set Motor2__DM2, CYREG_PRT3_DM2
.set Motor2__DR, CYREG_PRT3_DR
.set Motor2__INP_DIS, CYREG_PRT3_INP_DIS
.set Motor2__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU3_BASE
.set Motor2__LCD_COM_SEG, CYREG_PRT3_LCD_COM_SEG
.set Motor2__LCD_EN, CYREG_PRT3_LCD_EN
.set Motor2__MASK, 0x60
.set Motor2__PORT, 3
.set Motor2__PRT, CYREG_PRT3_PRT
.set Motor2__PRTDSI__CAPS_SEL, CYREG_PRT3_CAPS_SEL
.set Motor2__PRTDSI__DBL_SYNC_IN, CYREG_PRT3_DBL_SYNC_IN
.set Motor2__PRTDSI__OE_SEL0, CYREG_PRT3_OE_SEL0
.set Motor2__PRTDSI__OE_SEL1, CYREG_PRT3_OE_SEL1
.set Motor2__PRTDSI__OUT_SEL0, CYREG_PRT3_OUT_SEL0
.set Motor2__PRTDSI__OUT_SEL1, CYREG_PRT3_OUT_SEL1
.set Motor2__PRTDSI__SYNC_OUT, CYREG_PRT3_SYNC_OUT
.set Motor2__PS, CYREG_PRT3_PS
.set Motor2__SHIFT, 5
.set Motor2__SLW, CYREG_PRT3_SLW

/* PWM1 */
.set PWM1_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_AUX_CTL_REG, CYREG_B1_UDB09_10_ACTL
.set PWM1_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_CONTROL_REG, CYREG_B1_UDB09_10_CTL
.set PWM1_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_COUNT_REG, CYREG_B1_UDB09_10_CTL
.set PWM1_PWMUDB_genblk1_ctrlreg__16BIT_COUNT_CONTROL_REG, CYREG_B1_UDB09_10_CTL
.set PWM1_PWMUDB_genblk1_ctrlreg__16BIT_COUNT_COUNT_REG, CYREG_B1_UDB09_10_CTL
.set PWM1_PWMUDB_genblk1_ctrlreg__16BIT_MASK_MASK_REG, CYREG_B1_UDB09_10_MSK
.set PWM1_PWMUDB_genblk1_ctrlreg__16BIT_MASK_PERIOD_REG, CYREG_B1_UDB09_10_MSK
.set PWM1_PWMUDB_genblk1_ctrlreg__16BIT_PERIOD_MASK_REG, CYREG_B1_UDB09_10_MSK
.set PWM1_PWMUDB_genblk1_ctrlreg__16BIT_PERIOD_PERIOD_REG, CYREG_B1_UDB09_10_MSK
.set PWM1_PWMUDB_genblk1_ctrlreg__7__MASK, 0x80
.set PWM1_PWMUDB_genblk1_ctrlreg__7__POS, 7
.set PWM1_PWMUDB_genblk1_ctrlreg__CONTROL_AUX_CTL_REG, CYREG_B1_UDB09_ACTL
.set PWM1_PWMUDB_genblk1_ctrlreg__CONTROL_REG, CYREG_B1_UDB09_CTL
.set PWM1_PWMUDB_genblk1_ctrlreg__CONTROL_ST_REG, CYREG_B1_UDB09_ST_CTL
.set PWM1_PWMUDB_genblk1_ctrlreg__COUNT_REG, CYREG_B1_UDB09_CTL
.set PWM1_PWMUDB_genblk1_ctrlreg__COUNT_ST_REG, CYREG_B1_UDB09_ST_CTL
.set PWM1_PWMUDB_genblk1_ctrlreg__MASK, 0x80
.set PWM1_PWMUDB_genblk1_ctrlreg__MASK_CTL_AUX_CTL_REG, CYREG_B1_UDB09_MSK_ACTL
.set PWM1_PWMUDB_genblk1_ctrlreg__PER_CTL_AUX_CTL_REG, CYREG_B1_UDB09_MSK_ACTL
.set PWM1_PWMUDB_genblk1_ctrlreg__PERIOD_REG, CYREG_B1_UDB09_MSK
.set PWM1_PWMUDB_sP16_pwmdp_u0__16BIT_A0_REG, CYREG_B1_UDB08_09_A0
.set PWM1_PWMUDB_sP16_pwmdp_u0__16BIT_A1_REG, CYREG_B1_UDB08_09_A1
.set PWM1_PWMUDB_sP16_pwmdp_u0__16BIT_D0_REG, CYREG_B1_UDB08_09_D0
.set PWM1_PWMUDB_sP16_pwmdp_u0__16BIT_D1_REG, CYREG_B1_UDB08_09_D1
.set PWM1_PWMUDB_sP16_pwmdp_u0__16BIT_DP_AUX_CTL_REG, CYREG_B1_UDB08_09_ACTL
.set PWM1_PWMUDB_sP16_pwmdp_u0__16BIT_F0_REG, CYREG_B1_UDB08_09_F0
.set PWM1_PWMUDB_sP16_pwmdp_u0__16BIT_F1_REG, CYREG_B1_UDB08_09_F1
.set PWM1_PWMUDB_sP16_pwmdp_u0__A0_A1_REG, CYREG_B1_UDB08_A0_A1
.set PWM1_PWMUDB_sP16_pwmdp_u0__A0_REG, CYREG_B1_UDB08_A0
.set PWM1_PWMUDB_sP16_pwmdp_u0__A1_REG, CYREG_B1_UDB08_A1
.set PWM1_PWMUDB_sP16_pwmdp_u0__D0_D1_REG, CYREG_B1_UDB08_D0_D1
.set PWM1_PWMUDB_sP16_pwmdp_u0__D0_REG, CYREG_B1_UDB08_D0
.set PWM1_PWMUDB_sP16_pwmdp_u0__D1_REG, CYREG_B1_UDB08_D1
.set PWM1_PWMUDB_sP16_pwmdp_u0__DP_AUX_CTL_REG, CYREG_B1_UDB08_ACTL
.set PWM1_PWMUDB_sP16_pwmdp_u0__F0_F1_REG, CYREG_B1_UDB08_F0_F1
.set PWM1_PWMUDB_sP16_pwmdp_u0__F0_REG, CYREG_B1_UDB08_F0
.set PWM1_PWMUDB_sP16_pwmdp_u0__F1_REG, CYREG_B1_UDB08_F1
.set PWM1_PWMUDB_sP16_pwmdp_u1__16BIT_A0_REG, CYREG_B1_UDB09_10_A0
.set PWM1_PWMUDB_sP16_pwmdp_u1__16BIT_A1_REG, CYREG_B1_UDB09_10_A1
.set PWM1_PWMUDB_sP16_pwmdp_u1__16BIT_D0_REG, CYREG_B1_UDB09_10_D0
.set PWM1_PWMUDB_sP16_pwmdp_u1__16BIT_D1_REG, CYREG_B1_UDB09_10_D1
.set PWM1_PWMUDB_sP16_pwmdp_u1__16BIT_DP_AUX_CTL_REG, CYREG_B1_UDB09_10_ACTL
.set PWM1_PWMUDB_sP16_pwmdp_u1__16BIT_F0_REG, CYREG_B1_UDB09_10_F0
.set PWM1_PWMUDB_sP16_pwmdp_u1__16BIT_F1_REG, CYREG_B1_UDB09_10_F1
.set PWM1_PWMUDB_sP16_pwmdp_u1__A0_A1_REG, CYREG_B1_UDB09_A0_A1
.set PWM1_PWMUDB_sP16_pwmdp_u1__A0_REG, CYREG_B1_UDB09_A0
.set PWM1_PWMUDB_sP16_pwmdp_u1__A1_REG, CYREG_B1_UDB09_A1
.set PWM1_PWMUDB_sP16_pwmdp_u1__D0_D1_REG, CYREG_B1_UDB09_D0_D1
.set PWM1_PWMUDB_sP16_pwmdp_u1__D0_REG, CYREG_B1_UDB09_D0
.set PWM1_PWMUDB_sP16_pwmdp_u1__D1_REG, CYREG_B1_UDB09_D1
.set PWM1_PWMUDB_sP16_pwmdp_u1__DP_AUX_CTL_REG, CYREG_B1_UDB09_ACTL
.set PWM1_PWMUDB_sP16_pwmdp_u1__F0_F1_REG, CYREG_B1_UDB09_F0_F1
.set PWM1_PWMUDB_sP16_pwmdp_u1__F0_REG, CYREG_B1_UDB09_F0
.set PWM1_PWMUDB_sP16_pwmdp_u1__F1_REG, CYREG_B1_UDB09_F1
.set PWM1_PWMUDB_sP16_pwmdp_u1__MSK_DP_AUX_CTL_REG, CYREG_B1_UDB09_MSK_ACTL
.set PWM1_PWMUDB_sP16_pwmdp_u1__PER_DP_AUX_CTL_REG, CYREG_B1_UDB09_MSK_ACTL

/* PWM2 */
.set PWM2_PWMUDB_genblk1_ctrlreg__7__MASK, 0x80
.set PWM2_PWMUDB_genblk1_ctrlreg__7__POS, 7
.set PWM2_PWMUDB_genblk1_ctrlreg__CONTROL_AUX_CTL_REG, CYREG_B1_UDB11_ACTL
.set PWM2_PWMUDB_genblk1_ctrlreg__CONTROL_REG, CYREG_B1_UDB11_CTL
.set PWM2_PWMUDB_genblk1_ctrlreg__CONTROL_ST_REG, CYREG_B1_UDB11_ST_CTL
.set PWM2_PWMUDB_genblk1_ctrlreg__COUNT_REG, CYREG_B1_UDB11_CTL
.set PWM2_PWMUDB_genblk1_ctrlreg__COUNT_ST_REG, CYREG_B1_UDB11_ST_CTL
.set PWM2_PWMUDB_genblk1_ctrlreg__MASK, 0x80
.set PWM2_PWMUDB_genblk1_ctrlreg__MASK_CTL_AUX_CTL_REG, CYREG_B1_UDB11_MSK_ACTL
.set PWM2_PWMUDB_genblk1_ctrlreg__PER_CTL_AUX_CTL_REG, CYREG_B1_UDB11_MSK_ACTL
.set PWM2_PWMUDB_genblk1_ctrlreg__PERIOD_REG, CYREG_B1_UDB11_MSK
.set PWM2_PWMUDB_sP16_pwmdp_u0__16BIT_A0_REG, CYREG_B1_UDB10_11_A0
.set PWM2_PWMUDB_sP16_pwmdp_u0__16BIT_A1_REG, CYREG_B1_UDB10_11_A1
.set PWM2_PWMUDB_sP16_pwmdp_u0__16BIT_D0_REG, CYREG_B1_UDB10_11_D0
.set PWM2_PWMUDB_sP16_pwmdp_u0__16BIT_D1_REG, CYREG_B1_UDB10_11_D1
.set PWM2_PWMUDB_sP16_pwmdp_u0__16BIT_DP_AUX_CTL_REG, CYREG_B1_UDB10_11_ACTL
.set PWM2_PWMUDB_sP16_pwmdp_u0__16BIT_F0_REG, CYREG_B1_UDB10_11_F0
.set PWM2_PWMUDB_sP16_pwmdp_u0__16BIT_F1_REG, CYREG_B1_UDB10_11_F1
.set PWM2_PWMUDB_sP16_pwmdp_u0__A0_A1_REG, CYREG_B1_UDB10_A0_A1
.set PWM2_PWMUDB_sP16_pwmdp_u0__A0_REG, CYREG_B1_UDB10_A0
.set PWM2_PWMUDB_sP16_pwmdp_u0__A1_REG, CYREG_B1_UDB10_A1
.set PWM2_PWMUDB_sP16_pwmdp_u0__D0_D1_REG, CYREG_B1_UDB10_D0_D1
.set PWM2_PWMUDB_sP16_pwmdp_u0__D0_REG, CYREG_B1_UDB10_D0
.set PWM2_PWMUDB_sP16_pwmdp_u0__D1_REG, CYREG_B1_UDB10_D1
.set PWM2_PWMUDB_sP16_pwmdp_u0__DP_AUX_CTL_REG, CYREG_B1_UDB10_ACTL
.set PWM2_PWMUDB_sP16_pwmdp_u0__F0_F1_REG, CYREG_B1_UDB10_F0_F1
.set PWM2_PWMUDB_sP16_pwmdp_u0__F0_REG, CYREG_B1_UDB10_F0
.set PWM2_PWMUDB_sP16_pwmdp_u0__F1_REG, CYREG_B1_UDB10_F1
.set PWM2_PWMUDB_sP16_pwmdp_u1__A0_A1_REG, CYREG_B1_UDB11_A0_A1
.set PWM2_PWMUDB_sP16_pwmdp_u1__A0_REG, CYREG_B1_UDB11_A0
.set PWM2_PWMUDB_sP16_pwmdp_u1__A1_REG, CYREG_B1_UDB11_A1
.set PWM2_PWMUDB_sP16_pwmdp_u1__D0_D1_REG, CYREG_B1_UDB11_D0_D1
.set PWM2_PWMUDB_sP16_pwmdp_u1__D0_REG, CYREG_B1_UDB11_D0
.set PWM2_PWMUDB_sP16_pwmdp_u1__D1_REG, CYREG_B1_UDB11_D1
.set PWM2_PWMUDB_sP16_pwmdp_u1__DP_AUX_CTL_REG, CYREG_B1_UDB11_ACTL
.set PWM2_PWMUDB_sP16_pwmdp_u1__F0_F1_REG, CYREG_B1_UDB11_F0_F1
.set PWM2_PWMUDB_sP16_pwmdp_u1__F0_REG, CYREG_B1_UDB11_F0
.set PWM2_PWMUDB_sP16_pwmdp_u1__F1_REG, CYREG_B1_UDB11_F1
.set PWM2_PWMUDB_sP16_pwmdp_u1__MSK_DP_AUX_CTL_REG, CYREG_B1_UDB11_MSK_ACTL
.set PWM2_PWMUDB_sP16_pwmdp_u1__PER_DP_AUX_CTL_REG, CYREG_B1_UDB11_MSK_ACTL

/* TECLADO_IN */
.set TECLADO_IN__0__INTTYPE, CYREG_PICU0_INTTYPE4
.set TECLADO_IN__0__MASK, 0x10
.set TECLADO_IN__0__PC, CYREG_PRT0_PC4
.set TECLADO_IN__0__PORT, 0
.set TECLADO_IN__0__SHIFT, 4
.set TECLADO_IN__1__INTTYPE, CYREG_PICU0_INTTYPE5
.set TECLADO_IN__1__MASK, 0x20
.set TECLADO_IN__1__PC, CYREG_PRT0_PC5
.set TECLADO_IN__1__PORT, 0
.set TECLADO_IN__1__SHIFT, 5
.set TECLADO_IN__2__INTTYPE, CYREG_PICU0_INTTYPE6
.set TECLADO_IN__2__MASK, 0x40
.set TECLADO_IN__2__PC, CYREG_PRT0_PC6
.set TECLADO_IN__2__PORT, 0
.set TECLADO_IN__2__SHIFT, 6
.set TECLADO_IN__3__INTTYPE, CYREG_PICU0_INTTYPE7
.set TECLADO_IN__3__MASK, 0x80
.set TECLADO_IN__3__PC, CYREG_PRT0_PC7
.set TECLADO_IN__3__PORT, 0
.set TECLADO_IN__3__SHIFT, 7
.set TECLADO_IN__AG, CYREG_PRT0_AG
.set TECLADO_IN__AMUX, CYREG_PRT0_AMUX
.set TECLADO_IN__BIE, CYREG_PRT0_BIE
.set TECLADO_IN__BIT_MASK, CYREG_PRT0_BIT_MASK
.set TECLADO_IN__BYP, CYREG_PRT0_BYP
.set TECLADO_IN__CTL, CYREG_PRT0_CTL
.set TECLADO_IN__DM0, CYREG_PRT0_DM0
.set TECLADO_IN__DM1, CYREG_PRT0_DM1
.set TECLADO_IN__DM2, CYREG_PRT0_DM2
.set TECLADO_IN__DR, CYREG_PRT0_DR
.set TECLADO_IN__INP_DIS, CYREG_PRT0_INP_DIS
.set TECLADO_IN__INTSTAT, CYREG_PICU0_INTSTAT
.set TECLADO_IN__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU0_BASE
.set TECLADO_IN__LCD_COM_SEG, CYREG_PRT0_LCD_COM_SEG
.set TECLADO_IN__LCD_EN, CYREG_PRT0_LCD_EN
.set TECLADO_IN__MASK, 0xF0
.set TECLADO_IN__PORT, 0
.set TECLADO_IN__PRT, CYREG_PRT0_PRT
.set TECLADO_IN__PRTDSI__CAPS_SEL, CYREG_PRT0_CAPS_SEL
.set TECLADO_IN__PRTDSI__DBL_SYNC_IN, CYREG_PRT0_DBL_SYNC_IN
.set TECLADO_IN__PRTDSI__OE_SEL0, CYREG_PRT0_OE_SEL0
.set TECLADO_IN__PRTDSI__OE_SEL1, CYREG_PRT0_OE_SEL1
.set TECLADO_IN__PRTDSI__OUT_SEL0, CYREG_PRT0_OUT_SEL0
.set TECLADO_IN__PRTDSI__OUT_SEL1, CYREG_PRT0_OUT_SEL1
.set TECLADO_IN__PRTDSI__SYNC_OUT, CYREG_PRT0_SYNC_OUT
.set TECLADO_IN__PS, CYREG_PRT0_PS
.set TECLADO_IN__SHIFT, 4
.set TECLADO_IN__SLW, CYREG_PRT0_SLW
.set TECLADO_IN__SNAP, CYREG_PICU0_SNAP

/* TECLADO_OUT */
.set TECLADO_OUT__0__INTTYPE, CYREG_PICU0_INTTYPE0
.set TECLADO_OUT__0__MASK, 0x01
.set TECLADO_OUT__0__PC, CYREG_PRT0_PC0
.set TECLADO_OUT__0__PORT, 0
.set TECLADO_OUT__0__SHIFT, 0
.set TECLADO_OUT__1__INTTYPE, CYREG_PICU0_INTTYPE1
.set TECLADO_OUT__1__MASK, 0x02
.set TECLADO_OUT__1__PC, CYREG_PRT0_PC1
.set TECLADO_OUT__1__PORT, 0
.set TECLADO_OUT__1__SHIFT, 1
.set TECLADO_OUT__2__INTTYPE, CYREG_PICU0_INTTYPE2
.set TECLADO_OUT__2__MASK, 0x04
.set TECLADO_OUT__2__PC, CYREG_PRT0_PC2
.set TECLADO_OUT__2__PORT, 0
.set TECLADO_OUT__2__SHIFT, 2
.set TECLADO_OUT__3__INTTYPE, CYREG_PICU0_INTTYPE3
.set TECLADO_OUT__3__MASK, 0x08
.set TECLADO_OUT__3__PC, CYREG_PRT0_PC3
.set TECLADO_OUT__3__PORT, 0
.set TECLADO_OUT__3__SHIFT, 3
.set TECLADO_OUT__AG, CYREG_PRT0_AG
.set TECLADO_OUT__AMUX, CYREG_PRT0_AMUX
.set TECLADO_OUT__BIE, CYREG_PRT0_BIE
.set TECLADO_OUT__BIT_MASK, CYREG_PRT0_BIT_MASK
.set TECLADO_OUT__BYP, CYREG_PRT0_BYP
.set TECLADO_OUT__CTL, CYREG_PRT0_CTL
.set TECLADO_OUT__DM0, CYREG_PRT0_DM0
.set TECLADO_OUT__DM1, CYREG_PRT0_DM1
.set TECLADO_OUT__DM2, CYREG_PRT0_DM2
.set TECLADO_OUT__DR, CYREG_PRT0_DR
.set TECLADO_OUT__INP_DIS, CYREG_PRT0_INP_DIS
.set TECLADO_OUT__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU0_BASE
.set TECLADO_OUT__LCD_COM_SEG, CYREG_PRT0_LCD_COM_SEG
.set TECLADO_OUT__LCD_EN, CYREG_PRT0_LCD_EN
.set TECLADO_OUT__MASK, 0x0F
.set TECLADO_OUT__PORT, 0
.set TECLADO_OUT__PRT, CYREG_PRT0_PRT
.set TECLADO_OUT__PRTDSI__CAPS_SEL, CYREG_PRT0_CAPS_SEL
.set TECLADO_OUT__PRTDSI__DBL_SYNC_IN, CYREG_PRT0_DBL_SYNC_IN
.set TECLADO_OUT__PRTDSI__OE_SEL0, CYREG_PRT0_OE_SEL0
.set TECLADO_OUT__PRTDSI__OE_SEL1, CYREG_PRT0_OE_SEL1
.set TECLADO_OUT__PRTDSI__OUT_SEL0, CYREG_PRT0_OUT_SEL0
.set TECLADO_OUT__PRTDSI__OUT_SEL1, CYREG_PRT0_OUT_SEL1
.set TECLADO_OUT__PRTDSI__SYNC_OUT, CYREG_PRT0_SYNC_OUT
.set TECLADO_OUT__PS, CYREG_PRT0_PS
.set TECLADO_OUT__SHIFT, 0
.set TECLADO_OUT__SLW, CYREG_PRT0_SLW

/* detectorFaseM1 */
.set detectorFaseM1__0__INTTYPE, CYREG_PICU3_INTTYPE0
.set detectorFaseM1__0__MASK, 0x01
.set detectorFaseM1__0__PC, CYREG_PRT3_PC0
.set detectorFaseM1__0__PORT, 3
.set detectorFaseM1__0__SHIFT, 0
.set detectorFaseM1__1__INTTYPE, CYREG_PICU3_INTTYPE1
.set detectorFaseM1__1__MASK, 0x02
.set detectorFaseM1__1__PC, CYREG_PRT3_PC1
.set detectorFaseM1__1__PORT, 3
.set detectorFaseM1__1__SHIFT, 1
.set detectorFaseM1__2__INTTYPE, CYREG_PICU3_INTTYPE2
.set detectorFaseM1__2__MASK, 0x04
.set detectorFaseM1__2__PC, CYREG_PRT3_PC2
.set detectorFaseM1__2__PORT, 3
.set detectorFaseM1__2__SHIFT, 2
.set detectorFaseM1__AG, CYREG_PRT3_AG
.set detectorFaseM1__AMUX, CYREG_PRT3_AMUX
.set detectorFaseM1__BIE, CYREG_PRT3_BIE
.set detectorFaseM1__BIT_MASK, CYREG_PRT3_BIT_MASK
.set detectorFaseM1__BYP, CYREG_PRT3_BYP
.set detectorFaseM1__CTL, CYREG_PRT3_CTL
.set detectorFaseM1__DM0, CYREG_PRT3_DM0
.set detectorFaseM1__DM1, CYREG_PRT3_DM1
.set detectorFaseM1__DM2, CYREG_PRT3_DM2
.set detectorFaseM1__DR, CYREG_PRT3_DR
.set detectorFaseM1__INP_DIS, CYREG_PRT3_INP_DIS
.set detectorFaseM1__INTSTAT, CYREG_PICU3_INTSTAT
.set detectorFaseM1__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU3_BASE
.set detectorFaseM1__LCD_COM_SEG, CYREG_PRT3_LCD_COM_SEG
.set detectorFaseM1__LCD_EN, CYREG_PRT3_LCD_EN
.set detectorFaseM1__MASK, 0x07
.set detectorFaseM1__PORT, 3
.set detectorFaseM1__PRT, CYREG_PRT3_PRT
.set detectorFaseM1__PRTDSI__CAPS_SEL, CYREG_PRT3_CAPS_SEL
.set detectorFaseM1__PRTDSI__DBL_SYNC_IN, CYREG_PRT3_DBL_SYNC_IN
.set detectorFaseM1__PRTDSI__OE_SEL0, CYREG_PRT3_OE_SEL0
.set detectorFaseM1__PRTDSI__OE_SEL1, CYREG_PRT3_OE_SEL1
.set detectorFaseM1__PRTDSI__OUT_SEL0, CYREG_PRT3_OUT_SEL0
.set detectorFaseM1__PRTDSI__OUT_SEL1, CYREG_PRT3_OUT_SEL1
.set detectorFaseM1__PRTDSI__SYNC_OUT, CYREG_PRT3_SYNC_OUT
.set detectorFaseM1__PS, CYREG_PRT3_PS
.set detectorFaseM1__SHIFT, 0
.set detectorFaseM1__SLW, CYREG_PRT3_SLW
.set detectorFaseM1__SNAP, CYREG_PICU3_SNAP

/* detectorFaseM2 */
.set detectorFaseM2__0__INTTYPE, CYREG_PICU15_INTTYPE0
.set detectorFaseM2__0__MASK, 0x01
.set detectorFaseM2__0__PC, CYREG_IO_PC_PRT15_PC0
.set detectorFaseM2__0__PORT, 15
.set detectorFaseM2__0__SHIFT, 0
.set detectorFaseM2__1__INTTYPE, CYREG_PICU15_INTTYPE1
.set detectorFaseM2__1__MASK, 0x02
.set detectorFaseM2__1__PC, CYREG_IO_PC_PRT15_PC1
.set detectorFaseM2__1__PORT, 15
.set detectorFaseM2__1__SHIFT, 1
.set detectorFaseM2__2__INTTYPE, CYREG_PICU15_INTTYPE2
.set detectorFaseM2__2__MASK, 0x04
.set detectorFaseM2__2__PC, CYREG_IO_PC_PRT15_PC2
.set detectorFaseM2__2__PORT, 15
.set detectorFaseM2__2__SHIFT, 2
.set detectorFaseM2__AG, CYREG_PRT15_AG
.set detectorFaseM2__AMUX, CYREG_PRT15_AMUX
.set detectorFaseM2__BIE, CYREG_PRT15_BIE
.set detectorFaseM2__BIT_MASK, CYREG_PRT15_BIT_MASK
.set detectorFaseM2__BYP, CYREG_PRT15_BYP
.set detectorFaseM2__CTL, CYREG_PRT15_CTL
.set detectorFaseM2__DM0, CYREG_PRT15_DM0
.set detectorFaseM2__DM1, CYREG_PRT15_DM1
.set detectorFaseM2__DM2, CYREG_PRT15_DM2
.set detectorFaseM2__DR, CYREG_PRT15_DR
.set detectorFaseM2__INP_DIS, CYREG_PRT15_INP_DIS
.set detectorFaseM2__INTSTAT, CYREG_PICU15_INTSTAT
.set detectorFaseM2__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU15_BASE
.set detectorFaseM2__LCD_COM_SEG, CYREG_PRT15_LCD_COM_SEG
.set detectorFaseM2__LCD_EN, CYREG_PRT15_LCD_EN
.set detectorFaseM2__MASK, 0x07
.set detectorFaseM2__PORT, 15
.set detectorFaseM2__PRT, CYREG_PRT15_PRT
.set detectorFaseM2__PRTDSI__CAPS_SEL, CYREG_PRT15_CAPS_SEL
.set detectorFaseM2__PRTDSI__DBL_SYNC_IN, CYREG_PRT15_DBL_SYNC_IN
.set detectorFaseM2__PRTDSI__OE_SEL0, CYREG_PRT15_OE_SEL0
.set detectorFaseM2__PRTDSI__OE_SEL1, CYREG_PRT15_OE_SEL1
.set detectorFaseM2__PRTDSI__OUT_SEL0, CYREG_PRT15_OUT_SEL0
.set detectorFaseM2__PRTDSI__OUT_SEL1, CYREG_PRT15_OUT_SEL1
.set detectorFaseM2__PRTDSI__SYNC_OUT, CYREG_PRT15_SYNC_OUT
.set detectorFaseM2__PS, CYREG_PRT15_PS
.set detectorFaseM2__SHIFT, 0
.set detectorFaseM2__SLW, CYREG_PRT15_SLW
.set detectorFaseM2__SNAP, CYREG_PICU_15_SNAP_15

/* faseM1 */
.set faseM1__INTC_CLR_EN_REG, CYREG_NVIC_CLRENA0
.set faseM1__INTC_CLR_PD_REG, CYREG_NVIC_CLRPEND0
.set faseM1__INTC_MASK, 0x80
.set faseM1__INTC_NUMBER, 7
.set faseM1__INTC_PRIOR_NUM, 7
.set faseM1__INTC_PRIOR_REG, CYREG_NVIC_PRI_7
.set faseM1__INTC_SET_EN_REG, CYREG_NVIC_SETENA0
.set faseM1__INTC_SET_PD_REG, CYREG_NVIC_SETPEND0

/* faseM2 */
.set faseM2__INTC_CLR_EN_REG, CYREG_NVIC_CLRENA0
.set faseM2__INTC_CLR_PD_REG, CYREG_NVIC_CLRPEND0
.set faseM2__INTC_MASK, 0x1000
.set faseM2__INTC_NUMBER, 12
.set faseM2__INTC_PRIOR_NUM, 7
.set faseM2__INTC_PRIOR_REG, CYREG_NVIC_PRI_12
.set faseM2__INTC_SET_EN_REG, CYREG_NVIC_SETENA0
.set faseM2__INTC_SET_PD_REG, CYREG_NVIC_SETPEND0

/* sentidodegiroM1 */
.set sentidodegiroM1__0__INTTYPE, CYREG_PICU12_INTTYPE0
.set sentidodegiroM1__0__MASK, 0x01
.set sentidodegiroM1__0__PC, CYREG_PRT12_PC0
.set sentidodegiroM1__0__PORT, 12
.set sentidodegiroM1__0__SHIFT, 0
.set sentidodegiroM1__1__INTTYPE, CYREG_PICU12_INTTYPE1
.set sentidodegiroM1__1__MASK, 0x02
.set sentidodegiroM1__1__PC, CYREG_PRT12_PC1
.set sentidodegiroM1__1__PORT, 12
.set sentidodegiroM1__1__SHIFT, 1
.set sentidodegiroM1__AG, CYREG_PRT12_AG
.set sentidodegiroM1__BIE, CYREG_PRT12_BIE
.set sentidodegiroM1__BIT_MASK, CYREG_PRT12_BIT_MASK
.set sentidodegiroM1__BYP, CYREG_PRT12_BYP
.set sentidodegiroM1__DM0, CYREG_PRT12_DM0
.set sentidodegiroM1__DM1, CYREG_PRT12_DM1
.set sentidodegiroM1__DM2, CYREG_PRT12_DM2
.set sentidodegiroM1__DR, CYREG_PRT12_DR
.set sentidodegiroM1__INP_DIS, CYREG_PRT12_INP_DIS
.set sentidodegiroM1__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU12_BASE
.set sentidodegiroM1__MASK, 0x03
.set sentidodegiroM1__PORT, 12
.set sentidodegiroM1__PRT, CYREG_PRT12_PRT
.set sentidodegiroM1__PRTDSI__DBL_SYNC_IN, CYREG_PRT12_DBL_SYNC_IN
.set sentidodegiroM1__PRTDSI__OE_SEL0, CYREG_PRT12_OE_SEL0
.set sentidodegiroM1__PRTDSI__OE_SEL1, CYREG_PRT12_OE_SEL1
.set sentidodegiroM1__PRTDSI__OUT_SEL0, CYREG_PRT12_OUT_SEL0
.set sentidodegiroM1__PRTDSI__OUT_SEL1, CYREG_PRT12_OUT_SEL1
.set sentidodegiroM1__PRTDSI__SYNC_OUT, CYREG_PRT12_SYNC_OUT
.set sentidodegiroM1__PS, CYREG_PRT12_PS
.set sentidodegiroM1__SHIFT, 0
.set sentidodegiroM1__SIO_CFG, CYREG_PRT12_SIO_CFG
.set sentidodegiroM1__SIO_DIFF, CYREG_PRT12_SIO_DIFF
.set sentidodegiroM1__SIO_HYST_EN, CYREG_PRT12_SIO_HYST_EN
.set sentidodegiroM1__SIO_REG_HIFREQ, CYREG_PRT12_SIO_REG_HIFREQ
.set sentidodegiroM1__SLW, CYREG_PRT12_SLW

/* sentidodegiroM2 */
.set sentidodegiroM2__0__INTTYPE, CYREG_PICU12_INTTYPE2
.set sentidodegiroM2__0__MASK, 0x04
.set sentidodegiroM2__0__PC, CYREG_PRT12_PC2
.set sentidodegiroM2__0__PORT, 12
.set sentidodegiroM2__0__SHIFT, 2
.set sentidodegiroM2__1__INTTYPE, CYREG_PICU12_INTTYPE3
.set sentidodegiroM2__1__MASK, 0x08
.set sentidodegiroM2__1__PC, CYREG_PRT12_PC3
.set sentidodegiroM2__1__PORT, 12
.set sentidodegiroM2__1__SHIFT, 3
.set sentidodegiroM2__AG, CYREG_PRT12_AG
.set sentidodegiroM2__BIE, CYREG_PRT12_BIE
.set sentidodegiroM2__BIT_MASK, CYREG_PRT12_BIT_MASK
.set sentidodegiroM2__BYP, CYREG_PRT12_BYP
.set sentidodegiroM2__DM0, CYREG_PRT12_DM0
.set sentidodegiroM2__DM1, CYREG_PRT12_DM1
.set sentidodegiroM2__DM2, CYREG_PRT12_DM2
.set sentidodegiroM2__DR, CYREG_PRT12_DR
.set sentidodegiroM2__INP_DIS, CYREG_PRT12_INP_DIS
.set sentidodegiroM2__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU12_BASE
.set sentidodegiroM2__MASK, 0x0C
.set sentidodegiroM2__PORT, 12
.set sentidodegiroM2__PRT, CYREG_PRT12_PRT
.set sentidodegiroM2__PRTDSI__DBL_SYNC_IN, CYREG_PRT12_DBL_SYNC_IN
.set sentidodegiroM2__PRTDSI__OE_SEL0, CYREG_PRT12_OE_SEL0
.set sentidodegiroM2__PRTDSI__OE_SEL1, CYREG_PRT12_OE_SEL1
.set sentidodegiroM2__PRTDSI__OUT_SEL0, CYREG_PRT12_OUT_SEL0
.set sentidodegiroM2__PRTDSI__OUT_SEL1, CYREG_PRT12_OUT_SEL1
.set sentidodegiroM2__PRTDSI__SYNC_OUT, CYREG_PRT12_SYNC_OUT
.set sentidodegiroM2__PS, CYREG_PRT12_PS
.set sentidodegiroM2__SHIFT, 2
.set sentidodegiroM2__SIO_CFG, CYREG_PRT12_SIO_CFG
.set sentidodegiroM2__SIO_DIFF, CYREG_PRT12_SIO_DIFF
.set sentidodegiroM2__SIO_HYST_EN, CYREG_PRT12_SIO_HYST_EN
.set sentidodegiroM2__SIO_REG_HIFREQ, CYREG_PRT12_SIO_REG_HIFREQ
.set sentidodegiroM2__SLW, CYREG_PRT12_SLW

/* up */
.set up__INTC_CLR_EN_REG, CYREG_NVIC_CLRENA0
.set up__INTC_CLR_PD_REG, CYREG_NVIC_CLRPEND0
.set up__INTC_MASK, 0x01
.set up__INTC_NUMBER, 0
.set up__INTC_PRIOR_NUM, 7
.set up__INTC_PRIOR_REG, CYREG_NVIC_PRI_0
.set up__INTC_SET_EN_REG, CYREG_NVIC_SETENA0
.set up__INTC_SET_PD_REG, CYREG_NVIC_SETPEND0

/* Miscellaneous */
.set BCLK__BUS_CLK__HZ, 24000000
.set BCLK__BUS_CLK__KHZ, 24000
.set BCLK__BUS_CLK__MHZ, 24
.set CYDEV_CHIP_DIE_LEOPARD, 1
.set CYDEV_CHIP_DIE_PSOC4A, 16
.set CYDEV_CHIP_DIE_PSOC5LP, 2
.set CYDEV_CHIP_DIE_PSOC5TM, 3
.set CYDEV_CHIP_DIE_TMA4, 4
.set CYDEV_CHIP_DIE_UNKNOWN, 0
.set CYDEV_CHIP_FAMILY_FM0P, 5
.set CYDEV_CHIP_FAMILY_FM3, 6
.set CYDEV_CHIP_FAMILY_FM4, 7
.set CYDEV_CHIP_FAMILY_PSOC3, 1
.set CYDEV_CHIP_FAMILY_PSOC4, 2
.set CYDEV_CHIP_FAMILY_PSOC5, 3
.set CYDEV_CHIP_FAMILY_PSOC6, 4
.set CYDEV_CHIP_FAMILY_UNKNOWN, 0
.set CYDEV_CHIP_FAMILY_USED, CYDEV_CHIP_FAMILY_PSOC5
.set CYDEV_CHIP_JTAG_ID, 0x2E161069
.set CYDEV_CHIP_MEMBER_3A, 1
.set CYDEV_CHIP_MEMBER_4A, 16
.set CYDEV_CHIP_MEMBER_4D, 12
.set CYDEV_CHIP_MEMBER_4E, 6
.set CYDEV_CHIP_MEMBER_4F, 17
.set CYDEV_CHIP_MEMBER_4G, 4
.set CYDEV_CHIP_MEMBER_4H, 15
.set CYDEV_CHIP_MEMBER_4I, 21
.set CYDEV_CHIP_MEMBER_4J, 13
.set CYDEV_CHIP_MEMBER_4K, 14
.set CYDEV_CHIP_MEMBER_4L, 20
.set CYDEV_CHIP_MEMBER_4M, 19
.set CYDEV_CHIP_MEMBER_4N, 9
.set CYDEV_CHIP_MEMBER_4O, 7
.set CYDEV_CHIP_MEMBER_4P, 18
.set CYDEV_CHIP_MEMBER_4Q, 11
.set CYDEV_CHIP_MEMBER_4R, 8
.set CYDEV_CHIP_MEMBER_4S, 10
.set CYDEV_CHIP_MEMBER_4U, 5
.set CYDEV_CHIP_MEMBER_5A, 3
.set CYDEV_CHIP_MEMBER_5B, 2
.set CYDEV_CHIP_MEMBER_6A, 22
.set CYDEV_CHIP_MEMBER_FM3, 26
.set CYDEV_CHIP_MEMBER_FM4, 27
.set CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1, 23
.set CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2, 24
.set CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3, 25
.set CYDEV_CHIP_MEMBER_UNKNOWN, 0
.set CYDEV_CHIP_MEMBER_USED, CYDEV_CHIP_MEMBER_5B
.set CYDEV_CHIP_DIE_EXPECT, CYDEV_CHIP_MEMBER_USED
.set CYDEV_CHIP_DIE_ACTUAL, CYDEV_CHIP_DIE_EXPECT
.set CYDEV_CHIP_REV_LEOPARD_ES1, 0
.set CYDEV_CHIP_REV_LEOPARD_ES2, 1
.set CYDEV_CHIP_REV_LEOPARD_ES3, 3
.set CYDEV_CHIP_REV_LEOPARD_PRODUCTION, 3
.set CYDEV_CHIP_REV_PSOC4A_ES0, 17
.set CYDEV_CHIP_REV_PSOC4A_PRODUCTION, 17
.set CYDEV_CHIP_REV_PSOC5LP_ES0, 0
.set CYDEV_CHIP_REV_PSOC5LP_PRODUCTION, 0
.set CYDEV_CHIP_REV_PSOC5TM_ES0, 0
.set CYDEV_CHIP_REV_PSOC5TM_ES1, 1
.set CYDEV_CHIP_REV_PSOC5TM_PRODUCTION, 1
.set CYDEV_CHIP_REV_TMA4_ES, 17
.set CYDEV_CHIP_REV_TMA4_ES2, 33
.set CYDEV_CHIP_REV_TMA4_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_3A_ES1, 0
.set CYDEV_CHIP_REVISION_3A_ES2, 1
.set CYDEV_CHIP_REVISION_3A_ES3, 3
.set CYDEV_CHIP_REVISION_3A_PRODUCTION, 3
.set CYDEV_CHIP_REVISION_4A_ES0, 17
.set CYDEV_CHIP_REVISION_4A_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_4D_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4E_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION_256K, 0
.set CYDEV_CHIP_REVISION_4G_ES, 17
.set CYDEV_CHIP_REVISION_4G_ES2, 33
.set CYDEV_CHIP_REVISION_4G_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_4H_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4I_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4J_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4K_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4L_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4M_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4N_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4O_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4P_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4Q_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4R_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4S_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4U_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_5A_ES0, 0
.set CYDEV_CHIP_REVISION_5A_ES1, 1
.set CYDEV_CHIP_REVISION_5A_PRODUCTION, 1
.set CYDEV_CHIP_REVISION_5B_ES0, 0
.set CYDEV_CHIP_REVISION_5B_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_6A_NO_UDB, 0
.set CYDEV_CHIP_REVISION_6A_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_FM3_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_FM4_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_USED, CYDEV_CHIP_REVISION_5B_PRODUCTION
.set CYDEV_CHIP_REV_EXPECT, CYDEV_CHIP_REVISION_USED
.set CYDEV_CONFIG_FASTBOOT_ENABLED, 1
.set CYDEV_CONFIG_UNUSED_IO_AllowButWarn, 0
.set CYDEV_CONFIG_UNUSED_IO, CYDEV_CONFIG_UNUSED_IO_AllowButWarn
.set CYDEV_CONFIG_UNUSED_IO_AllowWithInfo, 1
.set CYDEV_CONFIG_UNUSED_IO_Disallowed, 2
.set CYDEV_CONFIGURATION_COMPRESSED, 1
.set CYDEV_CONFIGURATION_DMA, 0
.set CYDEV_CONFIGURATION_ECC, 1
.set CYDEV_CONFIGURATION_IMOENABLED, CYDEV_CONFIG_FASTBOOT_ENABLED
.set CYDEV_CONFIGURATION_MODE_COMPRESSED, 0
.set CYDEV_CONFIGURATION_MODE, CYDEV_CONFIGURATION_MODE_COMPRESSED
.set CYDEV_CONFIGURATION_MODE_DMA, 2
.set CYDEV_CONFIGURATION_MODE_UNCOMPRESSED, 1
.set CYDEV_DEBUG_ENABLE_MASK, 0x20
.set CYDEV_DEBUG_ENABLE_REGISTER, CYREG_MLOGIC_DEBUG
.set CYDEV_DEBUGGING_DPS_Disable, 3
.set CYDEV_DEBUGGING_DPS_JTAG_4, 1
.set CYDEV_DEBUGGING_DPS_JTAG_5, 0
.set CYDEV_DEBUGGING_DPS_SWD, 2
.set CYDEV_DEBUGGING_DPS_SWD_SWV, 6
.set CYDEV_DEBUGGING_DPS, CYDEV_DEBUGGING_DPS_SWD_SWV
.set CYDEV_DEBUGGING_ENABLE, 1
.set CYDEV_DEBUGGING_XRES, 0
.set CYDEV_DMA_CHANNELS_AVAILABLE, 24
.set CYDEV_ECC_ENABLE, 0
.set CYDEV_HEAP_SIZE, 0x80
.set CYDEV_INSTRUCT_CACHE_ENABLED, 1
.set CYDEV_INTR_RISING, 0x00000001
.set CYDEV_IS_EXPORTING_CODE, 0
.set CYDEV_IS_IMPORTING_CODE, 0
.set CYDEV_PROJ_TYPE, 0
.set CYDEV_PROJ_TYPE_BOOTLOADER, 1
.set CYDEV_PROJ_TYPE_LAUNCHER, 5
.set CYDEV_PROJ_TYPE_LOADABLE, 2
.set CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER, 4
.set CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER, 3
.set CYDEV_PROJ_TYPE_STANDARD, 0
.set CYDEV_PROTECTION_ENABLE, 0
.set CYDEV_STACK_SIZE, 0x0800
.set CYDEV_USE_BUNDLED_CMSIS, 1
.set CYDEV_VARIABLE_VDDA, 0
.set CYDEV_VDDA_MV, 5000
.set CYDEV_VDDD_MV, 5000
.set CYDEV_VDDIO0_MV, 5000
.set CYDEV_VDDIO1_MV, 5000
.set CYDEV_VDDIO2_MV, 5000
.set CYDEV_VDDIO3_MV, 5000
.set CYDEV_VIO0_MV, 5000
.set CYDEV_VIO1_MV, 5000
.set CYDEV_VIO2_MV, 5000
.set CYDEV_VIO3_MV, 5000
.set CYIPBLOCK_ARM_CM3_VERSION, 0
.set CYIPBLOCK_P3_ANAIF_VERSION, 0
.set CYIPBLOCK_P3_CAN_VERSION, 0
.set CYIPBLOCK_P3_CAPSENSE_VERSION, 0
.set CYIPBLOCK_P3_COMP_VERSION, 0
.set CYIPBLOCK_P3_DECIMATOR_VERSION, 0
.set CYIPBLOCK_P3_DFB_VERSION, 0
.set CYIPBLOCK_P3_DMA_VERSION, 0
.set CYIPBLOCK_P3_DRQ_VERSION, 0
.set CYIPBLOCK_P3_DSM_VERSION, 0
.set CYIPBLOCK_P3_EMIF_VERSION, 0
.set CYIPBLOCK_P3_I2C_VERSION, 0
.set CYIPBLOCK_P3_LCD_VERSION, 0
.set CYIPBLOCK_P3_LPF_VERSION, 0
.set CYIPBLOCK_P3_OPAMP_VERSION, 0
.set CYIPBLOCK_P3_PM_VERSION, 0
.set CYIPBLOCK_P3_SCCT_VERSION, 0
.set CYIPBLOCK_P3_TIMER_VERSION, 0
.set CYIPBLOCK_P3_USB_VERSION, 0
.set CYIPBLOCK_P3_VIDAC_VERSION, 0
.set CYIPBLOCK_P3_VREF_VERSION, 0
.set CYIPBLOCK_S8_GPIO_VERSION, 0
.set CYIPBLOCK_S8_IRQ_VERSION, 0
.set CYIPBLOCK_S8_SAR_VERSION, 0
.set CYIPBLOCK_S8_SIO_VERSION, 0
.set CYIPBLOCK_S8_UDB_VERSION, 0
.set DMA_CHANNELS_USED__MASK0, 0x00000000
.set teclado_sts_sts_reg__0__MASK, 0x01
.set teclado_sts_sts_reg__0__POS, 0
.set teclado_sts_sts_reg__1__MASK, 0x02
.set teclado_sts_sts_reg__1__POS, 1
.set teclado_sts_sts_reg__16BIT_STATUS_AUX_CTL_REG, CYREG_B0_UDB03_04_ACTL
.set teclado_sts_sts_reg__16BIT_STATUS_REG, CYREG_B0_UDB03_04_ST
.set teclado_sts_sts_reg__2__MASK, 0x04
.set teclado_sts_sts_reg__2__POS, 2
.set teclado_sts_sts_reg__3__MASK, 0x08
.set teclado_sts_sts_reg__3__POS, 3
.set teclado_sts_sts_reg__MASK, 0x0F
.set teclado_sts_sts_reg__MASK_REG, CYREG_B0_UDB03_MSK
.set teclado_sts_sts_reg__STATUS_AUX_CTL_REG, CYREG_B0_UDB03_ACTL
.set teclado_sts_sts_reg__STATUS_REG, CYREG_B0_UDB03_ST
.set CYDEV_BOOTLOADER_ENABLE, 0
.endif