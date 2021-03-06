.ifndef INCLUDED_CYFITTERGNU_INC
.set INCLUDED_CYFITTERGNU_INC, 1
.include "cydevicegnu.inc"
.include "cydevicegnu_trm.inc"

/* SW */
.set SW__0__INTTYPE, CYREG_PICU0_INTTYPE0
.set SW__0__MASK, 0x01
.set SW__0__PC, CYREG_PRT0_PC0
.set SW__0__PORT, 0
.set SW__0__SHIFT, 0
.set SW__1__INTTYPE, CYREG_PICU0_INTTYPE1
.set SW__1__MASK, 0x02
.set SW__1__PC, CYREG_PRT0_PC1
.set SW__1__PORT, 0
.set SW__1__SHIFT, 1
.set SW__2__INTTYPE, CYREG_PICU0_INTTYPE2
.set SW__2__MASK, 0x04
.set SW__2__PC, CYREG_PRT0_PC2
.set SW__2__PORT, 0
.set SW__2__SHIFT, 2
.set SW__3__INTTYPE, CYREG_PICU0_INTTYPE3
.set SW__3__MASK, 0x08
.set SW__3__PC, CYREG_PRT0_PC3
.set SW__3__PORT, 0
.set SW__3__SHIFT, 3
.set SW__AG, CYREG_PRT0_AG
.set SW__AMUX, CYREG_PRT0_AMUX
.set SW__BIE, CYREG_PRT0_BIE
.set SW__BIT_MASK, CYREG_PRT0_BIT_MASK
.set SW__BYP, CYREG_PRT0_BYP
.set SW__CTL, CYREG_PRT0_CTL
.set SW__DM0, CYREG_PRT0_DM0
.set SW__DM1, CYREG_PRT0_DM1
.set SW__DM2, CYREG_PRT0_DM2
.set SW__DR, CYREG_PRT0_DR
.set SW__INP_DIS, CYREG_PRT0_INP_DIS
.set SW__INTSTAT, CYREG_PICU0_INTSTAT
.set SW__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU0_BASE
.set SW__LCD_COM_SEG, CYREG_PRT0_LCD_COM_SEG
.set SW__LCD_EN, CYREG_PRT0_LCD_EN
.set SW__MASK, 0x0F
.set SW__PORT, 0
.set SW__PRT, CYREG_PRT0_PRT
.set SW__PRTDSI__CAPS_SEL, CYREG_PRT0_CAPS_SEL
.set SW__PRTDSI__DBL_SYNC_IN, CYREG_PRT0_DBL_SYNC_IN
.set SW__PRTDSI__OE_SEL0, CYREG_PRT0_OE_SEL0
.set SW__PRTDSI__OE_SEL1, CYREG_PRT0_OE_SEL1
.set SW__PRTDSI__OUT_SEL0, CYREG_PRT0_OUT_SEL0
.set SW__PRTDSI__OUT_SEL1, CYREG_PRT0_OUT_SEL1
.set SW__PRTDSI__SYNC_OUT, CYREG_PRT0_SYNC_OUT
.set SW__PS, CYREG_PRT0_PS
.set SW__SHIFT, 0
.set SW__SLW, CYREG_PRT0_SLW
.set SW__SNAP, CYREG_PICU0_SNAP

/* LCD_LCDPort */
.set LCD_LCDPort__0__INTTYPE, CYREG_PICU12_INTTYPE0
.set LCD_LCDPort__0__MASK, 0x01
.set LCD_LCDPort__0__PC, CYREG_PRT12_PC0
.set LCD_LCDPort__0__PORT, 12
.set LCD_LCDPort__0__SHIFT, 0
.set LCD_LCDPort__1__INTTYPE, CYREG_PICU12_INTTYPE1
.set LCD_LCDPort__1__MASK, 0x02
.set LCD_LCDPort__1__PC, CYREG_PRT12_PC1
.set LCD_LCDPort__1__PORT, 12
.set LCD_LCDPort__1__SHIFT, 1
.set LCD_LCDPort__2__INTTYPE, CYREG_PICU12_INTTYPE2
.set LCD_LCDPort__2__MASK, 0x04
.set LCD_LCDPort__2__PC, CYREG_PRT12_PC2
.set LCD_LCDPort__2__PORT, 12
.set LCD_LCDPort__2__SHIFT, 2
.set LCD_LCDPort__3__INTTYPE, CYREG_PICU12_INTTYPE3
.set LCD_LCDPort__3__MASK, 0x08
.set LCD_LCDPort__3__PC, CYREG_PRT12_PC3
.set LCD_LCDPort__3__PORT, 12
.set LCD_LCDPort__3__SHIFT, 3
.set LCD_LCDPort__4__INTTYPE, CYREG_PICU12_INTTYPE4
.set LCD_LCDPort__4__MASK, 0x10
.set LCD_LCDPort__4__PC, CYREG_PRT12_PC4
.set LCD_LCDPort__4__PORT, 12
.set LCD_LCDPort__4__SHIFT, 4
.set LCD_LCDPort__5__INTTYPE, CYREG_PICU12_INTTYPE5
.set LCD_LCDPort__5__MASK, 0x20
.set LCD_LCDPort__5__PC, CYREG_PRT12_PC5
.set LCD_LCDPort__5__PORT, 12
.set LCD_LCDPort__5__SHIFT, 5
.set LCD_LCDPort__6__INTTYPE, CYREG_PICU12_INTTYPE6
.set LCD_LCDPort__6__MASK, 0x40
.set LCD_LCDPort__6__PC, CYREG_PRT12_PC6
.set LCD_LCDPort__6__PORT, 12
.set LCD_LCDPort__6__SHIFT, 6
.set LCD_LCDPort__AG, CYREG_PRT12_AG
.set LCD_LCDPort__BIE, CYREG_PRT12_BIE
.set LCD_LCDPort__BIT_MASK, CYREG_PRT12_BIT_MASK
.set LCD_LCDPort__BYP, CYREG_PRT12_BYP
.set LCD_LCDPort__DM0, CYREG_PRT12_DM0
.set LCD_LCDPort__DM1, CYREG_PRT12_DM1
.set LCD_LCDPort__DM2, CYREG_PRT12_DM2
.set LCD_LCDPort__DR, CYREG_PRT12_DR
.set LCD_LCDPort__INP_DIS, CYREG_PRT12_INP_DIS
.set LCD_LCDPort__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU12_BASE
.set LCD_LCDPort__MASK, 0x7F
.set LCD_LCDPort__PORT, 12
.set LCD_LCDPort__PRT, CYREG_PRT12_PRT
.set LCD_LCDPort__PRTDSI__DBL_SYNC_IN, CYREG_PRT12_DBL_SYNC_IN
.set LCD_LCDPort__PRTDSI__OE_SEL0, CYREG_PRT12_OE_SEL0
.set LCD_LCDPort__PRTDSI__OE_SEL1, CYREG_PRT12_OE_SEL1
.set LCD_LCDPort__PRTDSI__OUT_SEL0, CYREG_PRT12_OUT_SEL0
.set LCD_LCDPort__PRTDSI__OUT_SEL1, CYREG_PRT12_OUT_SEL1
.set LCD_LCDPort__PRTDSI__SYNC_OUT, CYREG_PRT12_SYNC_OUT
.set LCD_LCDPort__PS, CYREG_PRT12_PS
.set LCD_LCDPort__SHIFT, 0
.set LCD_LCDPort__SIO_CFG, CYREG_PRT12_SIO_CFG
.set LCD_LCDPort__SIO_DIFF, CYREG_PRT12_SIO_DIFF
.set LCD_LCDPort__SIO_HYST_EN, CYREG_PRT12_SIO_HYST_EN
.set LCD_LCDPort__SIO_REG_HIFREQ, CYREG_PRT12_SIO_REG_HIFREQ
.set LCD_LCDPort__SLW, CYREG_PRT12_SLW

/* PWM_PWMUDB */
.set PWM_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_AUX_CTL_REG, CYREG_B1_UDB09_10_ACTL
.set PWM_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_CONTROL_REG, CYREG_B1_UDB09_10_CTL
.set PWM_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_COUNT_REG, CYREG_B1_UDB09_10_CTL
.set PWM_PWMUDB_genblk1_ctrlreg__16BIT_COUNT_CONTROL_REG, CYREG_B1_UDB09_10_CTL
.set PWM_PWMUDB_genblk1_ctrlreg__16BIT_COUNT_COUNT_REG, CYREG_B1_UDB09_10_CTL
.set PWM_PWMUDB_genblk1_ctrlreg__16BIT_MASK_MASK_REG, CYREG_B1_UDB09_10_MSK
.set PWM_PWMUDB_genblk1_ctrlreg__16BIT_MASK_PERIOD_REG, CYREG_B1_UDB09_10_MSK
.set PWM_PWMUDB_genblk1_ctrlreg__16BIT_PERIOD_MASK_REG, CYREG_B1_UDB09_10_MSK
.set PWM_PWMUDB_genblk1_ctrlreg__16BIT_PERIOD_PERIOD_REG, CYREG_B1_UDB09_10_MSK
.set PWM_PWMUDB_genblk1_ctrlreg__7__MASK, 0x80
.set PWM_PWMUDB_genblk1_ctrlreg__7__POS, 7
.set PWM_PWMUDB_genblk1_ctrlreg__CONTROL_AUX_CTL_REG, CYREG_B1_UDB09_ACTL
.set PWM_PWMUDB_genblk1_ctrlreg__CONTROL_REG, CYREG_B1_UDB09_CTL
.set PWM_PWMUDB_genblk1_ctrlreg__CONTROL_ST_REG, CYREG_B1_UDB09_ST_CTL
.set PWM_PWMUDB_genblk1_ctrlreg__COUNT_REG, CYREG_B1_UDB09_CTL
.set PWM_PWMUDB_genblk1_ctrlreg__COUNT_ST_REG, CYREG_B1_UDB09_ST_CTL
.set PWM_PWMUDB_genblk1_ctrlreg__MASK, 0x80
.set PWM_PWMUDB_genblk1_ctrlreg__MASK_CTL_AUX_CTL_REG, CYREG_B1_UDB09_MSK_ACTL
.set PWM_PWMUDB_genblk1_ctrlreg__PER_CTL_AUX_CTL_REG, CYREG_B1_UDB09_MSK_ACTL
.set PWM_PWMUDB_genblk1_ctrlreg__PERIOD_REG, CYREG_B1_UDB09_MSK
.set PWM_PWMUDB_sP8_pwmdp_u0__16BIT_A0_REG, CYREG_B1_UDB09_10_A0
.set PWM_PWMUDB_sP8_pwmdp_u0__16BIT_A1_REG, CYREG_B1_UDB09_10_A1
.set PWM_PWMUDB_sP8_pwmdp_u0__16BIT_D0_REG, CYREG_B1_UDB09_10_D0
.set PWM_PWMUDB_sP8_pwmdp_u0__16BIT_D1_REG, CYREG_B1_UDB09_10_D1
.set PWM_PWMUDB_sP8_pwmdp_u0__16BIT_DP_AUX_CTL_REG, CYREG_B1_UDB09_10_ACTL
.set PWM_PWMUDB_sP8_pwmdp_u0__16BIT_F0_REG, CYREG_B1_UDB09_10_F0
.set PWM_PWMUDB_sP8_pwmdp_u0__16BIT_F1_REG, CYREG_B1_UDB09_10_F1
.set PWM_PWMUDB_sP8_pwmdp_u0__A0_A1_REG, CYREG_B1_UDB09_A0_A1
.set PWM_PWMUDB_sP8_pwmdp_u0__A0_REG, CYREG_B1_UDB09_A0
.set PWM_PWMUDB_sP8_pwmdp_u0__A1_REG, CYREG_B1_UDB09_A1
.set PWM_PWMUDB_sP8_pwmdp_u0__D0_D1_REG, CYREG_B1_UDB09_D0_D1
.set PWM_PWMUDB_sP8_pwmdp_u0__D0_REG, CYREG_B1_UDB09_D0
.set PWM_PWMUDB_sP8_pwmdp_u0__D1_REG, CYREG_B1_UDB09_D1
.set PWM_PWMUDB_sP8_pwmdp_u0__DP_AUX_CTL_REG, CYREG_B1_UDB09_ACTL
.set PWM_PWMUDB_sP8_pwmdp_u0__F0_F1_REG, CYREG_B1_UDB09_F0_F1
.set PWM_PWMUDB_sP8_pwmdp_u0__F0_REG, CYREG_B1_UDB09_F0
.set PWM_PWMUDB_sP8_pwmdp_u0__F1_REG, CYREG_B1_UDB09_F1
.set PWM_PWMUDB_sP8_pwmdp_u0__MSK_DP_AUX_CTL_REG, CYREG_B1_UDB09_MSK_ACTL
.set PWM_PWMUDB_sP8_pwmdp_u0__PER_DP_AUX_CTL_REG, CYREG_B1_UDB09_MSK_ACTL

/* Vout */
.set Vout__0__INTTYPE, CYREG_PICU1_INTTYPE6
.set Vout__0__MASK, 0x40
.set Vout__0__PC, CYREG_PRT1_PC6
.set Vout__0__PORT, 1
.set Vout__0__SHIFT, 6
.set Vout__AG, CYREG_PRT1_AG
.set Vout__AMUX, CYREG_PRT1_AMUX
.set Vout__BIE, CYREG_PRT1_BIE
.set Vout__BIT_MASK, CYREG_PRT1_BIT_MASK
.set Vout__BYP, CYREG_PRT1_BYP
.set Vout__CTL, CYREG_PRT1_CTL
.set Vout__DM0, CYREG_PRT1_DM0
.set Vout__DM1, CYREG_PRT1_DM1
.set Vout__DM2, CYREG_PRT1_DM2
.set Vout__DR, CYREG_PRT1_DR
.set Vout__INP_DIS, CYREG_PRT1_INP_DIS
.set Vout__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU1_BASE
.set Vout__LCD_COM_SEG, CYREG_PRT1_LCD_COM_SEG
.set Vout__LCD_EN, CYREG_PRT1_LCD_EN
.set Vout__MASK, 0x40
.set Vout__PORT, 1
.set Vout__PRT, CYREG_PRT1_PRT
.set Vout__PRTDSI__CAPS_SEL, CYREG_PRT1_CAPS_SEL
.set Vout__PRTDSI__DBL_SYNC_IN, CYREG_PRT1_DBL_SYNC_IN
.set Vout__PRTDSI__OE_SEL0, CYREG_PRT1_OE_SEL0
.set Vout__PRTDSI__OE_SEL1, CYREG_PRT1_OE_SEL1
.set Vout__PRTDSI__OUT_SEL0, CYREG_PRT1_OUT_SEL0
.set Vout__PRTDSI__OUT_SEL1, CYREG_PRT1_OUT_SEL1
.set Vout__PRTDSI__SYNC_OUT, CYREG_PRT1_SYNC_OUT
.set Vout__PS, CYREG_PRT1_PS
.set Vout__SHIFT, 6
.set Vout__SLW, CYREG_PRT1_SLW

/* Vout_1 */
.set Vout_1__0__INTTYPE, CYREG_PICU1_INTTYPE7
.set Vout_1__0__MASK, 0x80
.set Vout_1__0__PC, CYREG_PRT1_PC7
.set Vout_1__0__PORT, 1
.set Vout_1__0__SHIFT, 7
.set Vout_1__AG, CYREG_PRT1_AG
.set Vout_1__AMUX, CYREG_PRT1_AMUX
.set Vout_1__BIE, CYREG_PRT1_BIE
.set Vout_1__BIT_MASK, CYREG_PRT1_BIT_MASK
.set Vout_1__BYP, CYREG_PRT1_BYP
.set Vout_1__CTL, CYREG_PRT1_CTL
.set Vout_1__DM0, CYREG_PRT1_DM0
.set Vout_1__DM1, CYREG_PRT1_DM1
.set Vout_1__DM2, CYREG_PRT1_DM2
.set Vout_1__DR, CYREG_PRT1_DR
.set Vout_1__INP_DIS, CYREG_PRT1_INP_DIS
.set Vout_1__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU1_BASE
.set Vout_1__LCD_COM_SEG, CYREG_PRT1_LCD_COM_SEG
.set Vout_1__LCD_EN, CYREG_PRT1_LCD_EN
.set Vout_1__MASK, 0x80
.set Vout_1__PORT, 1
.set Vout_1__PRT, CYREG_PRT1_PRT
.set Vout_1__PRTDSI__CAPS_SEL, CYREG_PRT1_CAPS_SEL
.set Vout_1__PRTDSI__DBL_SYNC_IN, CYREG_PRT1_DBL_SYNC_IN
.set Vout_1__PRTDSI__OE_SEL0, CYREG_PRT1_OE_SEL0
.set Vout_1__PRTDSI__OE_SEL1, CYREG_PRT1_OE_SEL1
.set Vout_1__PRTDSI__OUT_SEL0, CYREG_PRT1_OUT_SEL0
.set Vout_1__PRTDSI__OUT_SEL1, CYREG_PRT1_OUT_SEL1
.set Vout_1__PRTDSI__SYNC_OUT, CYREG_PRT1_SYNC_OUT
.set Vout_1__PS, CYREG_PRT1_PS
.set Vout_1__SHIFT, 7
.set Vout_1__SLW, CYREG_PRT1_SLW

/* VDAC8_viDAC8 */
.set VDAC8_viDAC8__CR0, CYREG_DAC3_CR0
.set VDAC8_viDAC8__CR1, CYREG_DAC3_CR1
.set VDAC8_viDAC8__D, CYREG_DAC3_D
.set VDAC8_viDAC8__PM_ACT_CFG, CYREG_PM_ACT_CFG8
.set VDAC8_viDAC8__PM_ACT_MSK, 0x08
.set VDAC8_viDAC8__PM_STBY_CFG, CYREG_PM_STBY_CFG8
.set VDAC8_viDAC8__PM_STBY_MSK, 0x08
.set VDAC8_viDAC8__STROBE, CYREG_DAC3_STROBE
.set VDAC8_viDAC8__SW0, CYREG_DAC3_SW0
.set VDAC8_viDAC8__SW2, CYREG_DAC3_SW2
.set VDAC8_viDAC8__SW3, CYREG_DAC3_SW3
.set VDAC8_viDAC8__SW4, CYREG_DAC3_SW4
.set VDAC8_viDAC8__TR, CYREG_DAC3_TR
.set VDAC8_viDAC8__TRIM__M1, CYREG_FLSHID_CUST_TABLES_DAC3_M1
.set VDAC8_viDAC8__TRIM__M2, CYREG_FLSHID_CUST_TABLES_DAC3_M2
.set VDAC8_viDAC8__TRIM__M3, CYREG_FLSHID_CUST_TABLES_DAC3_M3
.set VDAC8_viDAC8__TRIM__M4, CYREG_FLSHID_CUST_TABLES_DAC3_M4
.set VDAC8_viDAC8__TRIM__M5, CYREG_FLSHID_CUST_TABLES_DAC3_M5
.set VDAC8_viDAC8__TRIM__M6, CYREG_FLSHID_CUST_TABLES_DAC3_M6
.set VDAC8_viDAC8__TRIM__M7, CYREG_FLSHID_CUST_TABLES_DAC3_M7
.set VDAC8_viDAC8__TRIM__M8, CYREG_FLSHID_CUST_TABLES_DAC3_M8
.set VDAC8_viDAC8__TST, CYREG_DAC3_TST

/* ISR_SW */
.set ISR_SW__INTC_CLR_EN_REG, CYREG_NVIC_CLRENA0
.set ISR_SW__INTC_CLR_PD_REG, CYREG_NVIC_CLRPEND0
.set ISR_SW__INTC_MASK, 0x10
.set ISR_SW__INTC_NUMBER, 4
.set ISR_SW__INTC_PRIOR_NUM, 7
.set ISR_SW__INTC_PRIOR_REG, CYREG_NVIC_PRI_4
.set ISR_SW__INTC_SET_EN_REG, CYREG_NVIC_SETENA0
.set ISR_SW__INTC_SET_PD_REG, CYREG_NVIC_SETPEND0

/* Clock_1 */
.set Clock_1__CFG0, CYREG_CLKDIST_DCFG1_CFG0
.set Clock_1__CFG1, CYREG_CLKDIST_DCFG1_CFG1
.set Clock_1__CFG2, CYREG_CLKDIST_DCFG1_CFG2
.set Clock_1__CFG2_SRC_SEL_MASK, 0x07
.set Clock_1__INDEX, 0x01
.set Clock_1__PM_ACT_CFG, CYREG_PM_ACT_CFG2
.set Clock_1__PM_ACT_MSK, 0x02
.set Clock_1__PM_STBY_CFG, CYREG_PM_STBY_CFG2
.set Clock_1__PM_STBY_MSK, 0x02

/* Timer_1_TimerHW */
.set Timer_1_TimerHW__CAP0, CYREG_TMR0_CAP0
.set Timer_1_TimerHW__CAP1, CYREG_TMR0_CAP1
.set Timer_1_TimerHW__CFG0, CYREG_TMR0_CFG0
.set Timer_1_TimerHW__CFG1, CYREG_TMR0_CFG1
.set Timer_1_TimerHW__CFG2, CYREG_TMR0_CFG2
.set Timer_1_TimerHW__CNT_CMP0, CYREG_TMR0_CNT_CMP0
.set Timer_1_TimerHW__CNT_CMP1, CYREG_TMR0_CNT_CMP1
.set Timer_1_TimerHW__PER0, CYREG_TMR0_PER0
.set Timer_1_TimerHW__PER1, CYREG_TMR0_PER1
.set Timer_1_TimerHW__PM_ACT_CFG, CYREG_PM_ACT_CFG3
.set Timer_1_TimerHW__PM_ACT_MSK, 0x01
.set Timer_1_TimerHW__PM_STBY_CFG, CYREG_PM_STBY_CFG3
.set Timer_1_TimerHW__PM_STBY_MSK, 0x01
.set Timer_1_TimerHW__RT0, CYREG_TMR0_RT0
.set Timer_1_TimerHW__RT1, CYREG_TMR0_RT1
.set Timer_1_TimerHW__SR0, CYREG_TMR0_SR0

/* timer_clock */
.set timer_clock__CFG0, CYREG_CLKDIST_DCFG0_CFG0
.set timer_clock__CFG1, CYREG_CLKDIST_DCFG0_CFG1
.set timer_clock__CFG2, CYREG_CLKDIST_DCFG0_CFG2
.set timer_clock__CFG2_SRC_SEL_MASK, 0x07
.set timer_clock__INDEX, 0x00
.set timer_clock__PM_ACT_CFG, CYREG_PM_ACT_CFG2
.set timer_clock__PM_ACT_MSK, 0x01
.set timer_clock__PM_STBY_CFG, CYREG_PM_STBY_CFG2
.set timer_clock__PM_STBY_MSK, 0x01

/* Miscellaneous */
.set BCLK__BUS_CLK__HZ, 24000000
.set BCLK__BUS_CLK__KHZ, 24000
.set BCLK__BUS_CLK__MHZ, 24
.set CYDEV_CHIP_DIE_LEOPARD, 1
.set CYDEV_CHIP_DIE_PSOC4A, 12
.set CYDEV_CHIP_DIE_PSOC5LP, 19
.set CYDEV_CHIP_DIE_PSOC5TM, 20
.set CYDEV_CHIP_DIE_TMA4, 2
.set CYDEV_CHIP_DIE_UNKNOWN, 0
.set CYDEV_CHIP_FAMILY_FM0P, 4
.set CYDEV_CHIP_FAMILY_FM3, 5
.set CYDEV_CHIP_FAMILY_FM4, 6
.set CYDEV_CHIP_FAMILY_PSOC3, 1
.set CYDEV_CHIP_FAMILY_PSOC4, 2
.set CYDEV_CHIP_FAMILY_PSOC5, 3
.set CYDEV_CHIP_FAMILY_UNKNOWN, 0
.set CYDEV_CHIP_FAMILY_USED, CYDEV_CHIP_FAMILY_PSOC5
.set CYDEV_CHIP_JTAG_ID, 0x2E161069
.set CYDEV_CHIP_MEMBER_3A, 1
.set CYDEV_CHIP_MEMBER_4A, 12
.set CYDEV_CHIP_MEMBER_4C, 18
.set CYDEV_CHIP_MEMBER_4D, 8
.set CYDEV_CHIP_MEMBER_4E, 4
.set CYDEV_CHIP_MEMBER_4F, 13
.set CYDEV_CHIP_MEMBER_4G, 2
.set CYDEV_CHIP_MEMBER_4H, 11
.set CYDEV_CHIP_MEMBER_4I, 17
.set CYDEV_CHIP_MEMBER_4J, 9
.set CYDEV_CHIP_MEMBER_4K, 10
.set CYDEV_CHIP_MEMBER_4L, 16
.set CYDEV_CHIP_MEMBER_4M, 15
.set CYDEV_CHIP_MEMBER_4N, 6
.set CYDEV_CHIP_MEMBER_4O, 5
.set CYDEV_CHIP_MEMBER_4P, 14
.set CYDEV_CHIP_MEMBER_4Q, 7
.set CYDEV_CHIP_MEMBER_4U, 3
.set CYDEV_CHIP_MEMBER_5A, 20
.set CYDEV_CHIP_MEMBER_5B, 19
.set CYDEV_CHIP_MEMBER_FM3, 24
.set CYDEV_CHIP_MEMBER_FM4, 25
.set CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1, 21
.set CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2, 22
.set CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3, 23
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
.set CYDEV_CHIP_REVISION_4C_PRODUCTION, 0
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
.set CYDEV_CHIP_REVISION_4U_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_5A_ES0, 0
.set CYDEV_CHIP_REVISION_5A_ES1, 1
.set CYDEV_CHIP_REVISION_5A_PRODUCTION, 1
.set CYDEV_CHIP_REVISION_5B_ES0, 0
.set CYDEV_CHIP_REVISION_5B_PRODUCTION, 0
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
.set CYDEV_INTR_RISING, 0x00000000
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
.set CYDEV_BOOTLOADER_ENABLE, 0
.endif
