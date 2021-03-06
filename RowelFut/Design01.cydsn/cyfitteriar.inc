#ifndef INCLUDED_CYFITTERIAR_INC
#define INCLUDED_CYFITTERIAR_INC
    INCLUDE cydeviceiar.inc
    INCLUDE cydeviceiar_trm.inc

/* SW */
SW__0__INTTYPE EQU CYREG_PICU0_INTTYPE0
SW__0__MASK EQU 0x01
SW__0__PC EQU CYREG_PRT0_PC0
SW__0__PORT EQU 0
SW__0__SHIFT EQU 0
SW__1__INTTYPE EQU CYREG_PICU0_INTTYPE1
SW__1__MASK EQU 0x02
SW__1__PC EQU CYREG_PRT0_PC1
SW__1__PORT EQU 0
SW__1__SHIFT EQU 1
SW__2__INTTYPE EQU CYREG_PICU0_INTTYPE2
SW__2__MASK EQU 0x04
SW__2__PC EQU CYREG_PRT0_PC2
SW__2__PORT EQU 0
SW__2__SHIFT EQU 2
SW__3__INTTYPE EQU CYREG_PICU0_INTTYPE3
SW__3__MASK EQU 0x08
SW__3__PC EQU CYREG_PRT0_PC3
SW__3__PORT EQU 0
SW__3__SHIFT EQU 3
SW__AG EQU CYREG_PRT0_AG
SW__AMUX EQU CYREG_PRT0_AMUX
SW__BIE EQU CYREG_PRT0_BIE
SW__BIT_MASK EQU CYREG_PRT0_BIT_MASK
SW__BYP EQU CYREG_PRT0_BYP
SW__CTL EQU CYREG_PRT0_CTL
SW__DM0 EQU CYREG_PRT0_DM0
SW__DM1 EQU CYREG_PRT0_DM1
SW__DM2 EQU CYREG_PRT0_DM2
SW__DR EQU CYREG_PRT0_DR
SW__INP_DIS EQU CYREG_PRT0_INP_DIS
SW__INTSTAT EQU CYREG_PICU0_INTSTAT
SW__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU0_BASE
SW__LCD_COM_SEG EQU CYREG_PRT0_LCD_COM_SEG
SW__LCD_EN EQU CYREG_PRT0_LCD_EN
SW__MASK EQU 0x0F
SW__PORT EQU 0
SW__PRT EQU CYREG_PRT0_PRT
SW__PRTDSI__CAPS_SEL EQU CYREG_PRT0_CAPS_SEL
SW__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT0_DBL_SYNC_IN
SW__PRTDSI__OE_SEL0 EQU CYREG_PRT0_OE_SEL0
SW__PRTDSI__OE_SEL1 EQU CYREG_PRT0_OE_SEL1
SW__PRTDSI__OUT_SEL0 EQU CYREG_PRT0_OUT_SEL0
SW__PRTDSI__OUT_SEL1 EQU CYREG_PRT0_OUT_SEL1
SW__PRTDSI__SYNC_OUT EQU CYREG_PRT0_SYNC_OUT
SW__PS EQU CYREG_PRT0_PS
SW__SHIFT EQU 0
SW__SLW EQU CYREG_PRT0_SLW
SW__SNAP EQU CYREG_PICU0_SNAP

/* LCD_LCDPort */
LCD_LCDPort__0__INTTYPE EQU CYREG_PICU12_INTTYPE0
LCD_LCDPort__0__MASK EQU 0x01
LCD_LCDPort__0__PC EQU CYREG_PRT12_PC0
LCD_LCDPort__0__PORT EQU 12
LCD_LCDPort__0__SHIFT EQU 0
LCD_LCDPort__1__INTTYPE EQU CYREG_PICU12_INTTYPE1
LCD_LCDPort__1__MASK EQU 0x02
LCD_LCDPort__1__PC EQU CYREG_PRT12_PC1
LCD_LCDPort__1__PORT EQU 12
LCD_LCDPort__1__SHIFT EQU 1
LCD_LCDPort__2__INTTYPE EQU CYREG_PICU12_INTTYPE2
LCD_LCDPort__2__MASK EQU 0x04
LCD_LCDPort__2__PC EQU CYREG_PRT12_PC2
LCD_LCDPort__2__PORT EQU 12
LCD_LCDPort__2__SHIFT EQU 2
LCD_LCDPort__3__INTTYPE EQU CYREG_PICU12_INTTYPE3
LCD_LCDPort__3__MASK EQU 0x08
LCD_LCDPort__3__PC EQU CYREG_PRT12_PC3
LCD_LCDPort__3__PORT EQU 12
LCD_LCDPort__3__SHIFT EQU 3
LCD_LCDPort__4__INTTYPE EQU CYREG_PICU12_INTTYPE4
LCD_LCDPort__4__MASK EQU 0x10
LCD_LCDPort__4__PC EQU CYREG_PRT12_PC4
LCD_LCDPort__4__PORT EQU 12
LCD_LCDPort__4__SHIFT EQU 4
LCD_LCDPort__5__INTTYPE EQU CYREG_PICU12_INTTYPE5
LCD_LCDPort__5__MASK EQU 0x20
LCD_LCDPort__5__PC EQU CYREG_PRT12_PC5
LCD_LCDPort__5__PORT EQU 12
LCD_LCDPort__5__SHIFT EQU 5
LCD_LCDPort__6__INTTYPE EQU CYREG_PICU12_INTTYPE6
LCD_LCDPort__6__MASK EQU 0x40
LCD_LCDPort__6__PC EQU CYREG_PRT12_PC6
LCD_LCDPort__6__PORT EQU 12
LCD_LCDPort__6__SHIFT EQU 6
LCD_LCDPort__AG EQU CYREG_PRT12_AG
LCD_LCDPort__BIE EQU CYREG_PRT12_BIE
LCD_LCDPort__BIT_MASK EQU CYREG_PRT12_BIT_MASK
LCD_LCDPort__BYP EQU CYREG_PRT12_BYP
LCD_LCDPort__DM0 EQU CYREG_PRT12_DM0
LCD_LCDPort__DM1 EQU CYREG_PRT12_DM1
LCD_LCDPort__DM2 EQU CYREG_PRT12_DM2
LCD_LCDPort__DR EQU CYREG_PRT12_DR
LCD_LCDPort__INP_DIS EQU CYREG_PRT12_INP_DIS
LCD_LCDPort__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU12_BASE
LCD_LCDPort__MASK EQU 0x7F
LCD_LCDPort__PORT EQU 12
LCD_LCDPort__PRT EQU CYREG_PRT12_PRT
LCD_LCDPort__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT12_DBL_SYNC_IN
LCD_LCDPort__PRTDSI__OE_SEL0 EQU CYREG_PRT12_OE_SEL0
LCD_LCDPort__PRTDSI__OE_SEL1 EQU CYREG_PRT12_OE_SEL1
LCD_LCDPort__PRTDSI__OUT_SEL0 EQU CYREG_PRT12_OUT_SEL0
LCD_LCDPort__PRTDSI__OUT_SEL1 EQU CYREG_PRT12_OUT_SEL1
LCD_LCDPort__PRTDSI__SYNC_OUT EQU CYREG_PRT12_SYNC_OUT
LCD_LCDPort__PS EQU CYREG_PRT12_PS
LCD_LCDPort__SHIFT EQU 0
LCD_LCDPort__SIO_CFG EQU CYREG_PRT12_SIO_CFG
LCD_LCDPort__SIO_DIFF EQU CYREG_PRT12_SIO_DIFF
LCD_LCDPort__SIO_HYST_EN EQU CYREG_PRT12_SIO_HYST_EN
LCD_LCDPort__SIO_REG_HIFREQ EQU CYREG_PRT12_SIO_REG_HIFREQ
LCD_LCDPort__SLW EQU CYREG_PRT12_SLW

/* PWM_PWMUDB */
PWM_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_AUX_CTL_REG EQU CYREG_B1_UDB09_10_ACTL
PWM_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_CONTROL_REG EQU CYREG_B1_UDB09_10_CTL
PWM_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_COUNT_REG EQU CYREG_B1_UDB09_10_CTL
PWM_PWMUDB_genblk1_ctrlreg__16BIT_COUNT_CONTROL_REG EQU CYREG_B1_UDB09_10_CTL
PWM_PWMUDB_genblk1_ctrlreg__16BIT_COUNT_COUNT_REG EQU CYREG_B1_UDB09_10_CTL
PWM_PWMUDB_genblk1_ctrlreg__16BIT_MASK_MASK_REG EQU CYREG_B1_UDB09_10_MSK
PWM_PWMUDB_genblk1_ctrlreg__16BIT_MASK_PERIOD_REG EQU CYREG_B1_UDB09_10_MSK
PWM_PWMUDB_genblk1_ctrlreg__16BIT_PERIOD_MASK_REG EQU CYREG_B1_UDB09_10_MSK
PWM_PWMUDB_genblk1_ctrlreg__16BIT_PERIOD_PERIOD_REG EQU CYREG_B1_UDB09_10_MSK
PWM_PWMUDB_genblk1_ctrlreg__7__MASK EQU 0x80
PWM_PWMUDB_genblk1_ctrlreg__7__POS EQU 7
PWM_PWMUDB_genblk1_ctrlreg__CONTROL_AUX_CTL_REG EQU CYREG_B1_UDB09_ACTL
PWM_PWMUDB_genblk1_ctrlreg__CONTROL_REG EQU CYREG_B1_UDB09_CTL
PWM_PWMUDB_genblk1_ctrlreg__CONTROL_ST_REG EQU CYREG_B1_UDB09_ST_CTL
PWM_PWMUDB_genblk1_ctrlreg__COUNT_REG EQU CYREG_B1_UDB09_CTL
PWM_PWMUDB_genblk1_ctrlreg__COUNT_ST_REG EQU CYREG_B1_UDB09_ST_CTL
PWM_PWMUDB_genblk1_ctrlreg__MASK EQU 0x80
PWM_PWMUDB_genblk1_ctrlreg__MASK_CTL_AUX_CTL_REG EQU CYREG_B1_UDB09_MSK_ACTL
PWM_PWMUDB_genblk1_ctrlreg__PER_CTL_AUX_CTL_REG EQU CYREG_B1_UDB09_MSK_ACTL
PWM_PWMUDB_genblk1_ctrlreg__PERIOD_REG EQU CYREG_B1_UDB09_MSK
PWM_PWMUDB_sP8_pwmdp_u0__16BIT_A0_REG EQU CYREG_B1_UDB09_10_A0
PWM_PWMUDB_sP8_pwmdp_u0__16BIT_A1_REG EQU CYREG_B1_UDB09_10_A1
PWM_PWMUDB_sP8_pwmdp_u0__16BIT_D0_REG EQU CYREG_B1_UDB09_10_D0
PWM_PWMUDB_sP8_pwmdp_u0__16BIT_D1_REG EQU CYREG_B1_UDB09_10_D1
PWM_PWMUDB_sP8_pwmdp_u0__16BIT_DP_AUX_CTL_REG EQU CYREG_B1_UDB09_10_ACTL
PWM_PWMUDB_sP8_pwmdp_u0__16BIT_F0_REG EQU CYREG_B1_UDB09_10_F0
PWM_PWMUDB_sP8_pwmdp_u0__16BIT_F1_REG EQU CYREG_B1_UDB09_10_F1
PWM_PWMUDB_sP8_pwmdp_u0__A0_A1_REG EQU CYREG_B1_UDB09_A0_A1
PWM_PWMUDB_sP8_pwmdp_u0__A0_REG EQU CYREG_B1_UDB09_A0
PWM_PWMUDB_sP8_pwmdp_u0__A1_REG EQU CYREG_B1_UDB09_A1
PWM_PWMUDB_sP8_pwmdp_u0__D0_D1_REG EQU CYREG_B1_UDB09_D0_D1
PWM_PWMUDB_sP8_pwmdp_u0__D0_REG EQU CYREG_B1_UDB09_D0
PWM_PWMUDB_sP8_pwmdp_u0__D1_REG EQU CYREG_B1_UDB09_D1
PWM_PWMUDB_sP8_pwmdp_u0__DP_AUX_CTL_REG EQU CYREG_B1_UDB09_ACTL
PWM_PWMUDB_sP8_pwmdp_u0__F0_F1_REG EQU CYREG_B1_UDB09_F0_F1
PWM_PWMUDB_sP8_pwmdp_u0__F0_REG EQU CYREG_B1_UDB09_F0
PWM_PWMUDB_sP8_pwmdp_u0__F1_REG EQU CYREG_B1_UDB09_F1
PWM_PWMUDB_sP8_pwmdp_u0__MSK_DP_AUX_CTL_REG EQU CYREG_B1_UDB09_MSK_ACTL
PWM_PWMUDB_sP8_pwmdp_u0__PER_DP_AUX_CTL_REG EQU CYREG_B1_UDB09_MSK_ACTL

/* Vout */
Vout__0__INTTYPE EQU CYREG_PICU1_INTTYPE6
Vout__0__MASK EQU 0x40
Vout__0__PC EQU CYREG_PRT1_PC6
Vout__0__PORT EQU 1
Vout__0__SHIFT EQU 6
Vout__AG EQU CYREG_PRT1_AG
Vout__AMUX EQU CYREG_PRT1_AMUX
Vout__BIE EQU CYREG_PRT1_BIE
Vout__BIT_MASK EQU CYREG_PRT1_BIT_MASK
Vout__BYP EQU CYREG_PRT1_BYP
Vout__CTL EQU CYREG_PRT1_CTL
Vout__DM0 EQU CYREG_PRT1_DM0
Vout__DM1 EQU CYREG_PRT1_DM1
Vout__DM2 EQU CYREG_PRT1_DM2
Vout__DR EQU CYREG_PRT1_DR
Vout__INP_DIS EQU CYREG_PRT1_INP_DIS
Vout__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU1_BASE
Vout__LCD_COM_SEG EQU CYREG_PRT1_LCD_COM_SEG
Vout__LCD_EN EQU CYREG_PRT1_LCD_EN
Vout__MASK EQU 0x40
Vout__PORT EQU 1
Vout__PRT EQU CYREG_PRT1_PRT
Vout__PRTDSI__CAPS_SEL EQU CYREG_PRT1_CAPS_SEL
Vout__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT1_DBL_SYNC_IN
Vout__PRTDSI__OE_SEL0 EQU CYREG_PRT1_OE_SEL0
Vout__PRTDSI__OE_SEL1 EQU CYREG_PRT1_OE_SEL1
Vout__PRTDSI__OUT_SEL0 EQU CYREG_PRT1_OUT_SEL0
Vout__PRTDSI__OUT_SEL1 EQU CYREG_PRT1_OUT_SEL1
Vout__PRTDSI__SYNC_OUT EQU CYREG_PRT1_SYNC_OUT
Vout__PS EQU CYREG_PRT1_PS
Vout__SHIFT EQU 6
Vout__SLW EQU CYREG_PRT1_SLW

/* Vout_1 */
Vout_1__0__INTTYPE EQU CYREG_PICU1_INTTYPE7
Vout_1__0__MASK EQU 0x80
Vout_1__0__PC EQU CYREG_PRT1_PC7
Vout_1__0__PORT EQU 1
Vout_1__0__SHIFT EQU 7
Vout_1__AG EQU CYREG_PRT1_AG
Vout_1__AMUX EQU CYREG_PRT1_AMUX
Vout_1__BIE EQU CYREG_PRT1_BIE
Vout_1__BIT_MASK EQU CYREG_PRT1_BIT_MASK
Vout_1__BYP EQU CYREG_PRT1_BYP
Vout_1__CTL EQU CYREG_PRT1_CTL
Vout_1__DM0 EQU CYREG_PRT1_DM0
Vout_1__DM1 EQU CYREG_PRT1_DM1
Vout_1__DM2 EQU CYREG_PRT1_DM2
Vout_1__DR EQU CYREG_PRT1_DR
Vout_1__INP_DIS EQU CYREG_PRT1_INP_DIS
Vout_1__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU1_BASE
Vout_1__LCD_COM_SEG EQU CYREG_PRT1_LCD_COM_SEG
Vout_1__LCD_EN EQU CYREG_PRT1_LCD_EN
Vout_1__MASK EQU 0x80
Vout_1__PORT EQU 1
Vout_1__PRT EQU CYREG_PRT1_PRT
Vout_1__PRTDSI__CAPS_SEL EQU CYREG_PRT1_CAPS_SEL
Vout_1__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT1_DBL_SYNC_IN
Vout_1__PRTDSI__OE_SEL0 EQU CYREG_PRT1_OE_SEL0
Vout_1__PRTDSI__OE_SEL1 EQU CYREG_PRT1_OE_SEL1
Vout_1__PRTDSI__OUT_SEL0 EQU CYREG_PRT1_OUT_SEL0
Vout_1__PRTDSI__OUT_SEL1 EQU CYREG_PRT1_OUT_SEL1
Vout_1__PRTDSI__SYNC_OUT EQU CYREG_PRT1_SYNC_OUT
Vout_1__PS EQU CYREG_PRT1_PS
Vout_1__SHIFT EQU 7
Vout_1__SLW EQU CYREG_PRT1_SLW

/* VDAC8_viDAC8 */
VDAC8_viDAC8__CR0 EQU CYREG_DAC3_CR0
VDAC8_viDAC8__CR1 EQU CYREG_DAC3_CR1
VDAC8_viDAC8__D EQU CYREG_DAC3_D
VDAC8_viDAC8__PM_ACT_CFG EQU CYREG_PM_ACT_CFG8
VDAC8_viDAC8__PM_ACT_MSK EQU 0x08
VDAC8_viDAC8__PM_STBY_CFG EQU CYREG_PM_STBY_CFG8
VDAC8_viDAC8__PM_STBY_MSK EQU 0x08
VDAC8_viDAC8__STROBE EQU CYREG_DAC3_STROBE
VDAC8_viDAC8__SW0 EQU CYREG_DAC3_SW0
VDAC8_viDAC8__SW2 EQU CYREG_DAC3_SW2
VDAC8_viDAC8__SW3 EQU CYREG_DAC3_SW3
VDAC8_viDAC8__SW4 EQU CYREG_DAC3_SW4
VDAC8_viDAC8__TR EQU CYREG_DAC3_TR
VDAC8_viDAC8__TRIM__M1 EQU CYREG_FLSHID_CUST_TABLES_DAC3_M1
VDAC8_viDAC8__TRIM__M2 EQU CYREG_FLSHID_CUST_TABLES_DAC3_M2
VDAC8_viDAC8__TRIM__M3 EQU CYREG_FLSHID_CUST_TABLES_DAC3_M3
VDAC8_viDAC8__TRIM__M4 EQU CYREG_FLSHID_CUST_TABLES_DAC3_M4
VDAC8_viDAC8__TRIM__M5 EQU CYREG_FLSHID_CUST_TABLES_DAC3_M5
VDAC8_viDAC8__TRIM__M6 EQU CYREG_FLSHID_CUST_TABLES_DAC3_M6
VDAC8_viDAC8__TRIM__M7 EQU CYREG_FLSHID_CUST_TABLES_DAC3_M7
VDAC8_viDAC8__TRIM__M8 EQU CYREG_FLSHID_CUST_TABLES_DAC3_M8
VDAC8_viDAC8__TST EQU CYREG_DAC3_TST

/* ISR_SW */
ISR_SW__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
ISR_SW__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
ISR_SW__INTC_MASK EQU 0x10
ISR_SW__INTC_NUMBER EQU 4
ISR_SW__INTC_PRIOR_NUM EQU 7
ISR_SW__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_4
ISR_SW__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
ISR_SW__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0

/* Clock_1 */
Clock_1__CFG0 EQU CYREG_CLKDIST_DCFG1_CFG0
Clock_1__CFG1 EQU CYREG_CLKDIST_DCFG1_CFG1
Clock_1__CFG2 EQU CYREG_CLKDIST_DCFG1_CFG2
Clock_1__CFG2_SRC_SEL_MASK EQU 0x07
Clock_1__INDEX EQU 0x01
Clock_1__PM_ACT_CFG EQU CYREG_PM_ACT_CFG2
Clock_1__PM_ACT_MSK EQU 0x02
Clock_1__PM_STBY_CFG EQU CYREG_PM_STBY_CFG2
Clock_1__PM_STBY_MSK EQU 0x02

/* Timer_1_TimerHW */
Timer_1_TimerHW__CAP0 EQU CYREG_TMR0_CAP0
Timer_1_TimerHW__CAP1 EQU CYREG_TMR0_CAP1
Timer_1_TimerHW__CFG0 EQU CYREG_TMR0_CFG0
Timer_1_TimerHW__CFG1 EQU CYREG_TMR0_CFG1
Timer_1_TimerHW__CFG2 EQU CYREG_TMR0_CFG2
Timer_1_TimerHW__CNT_CMP0 EQU CYREG_TMR0_CNT_CMP0
Timer_1_TimerHW__CNT_CMP1 EQU CYREG_TMR0_CNT_CMP1
Timer_1_TimerHW__PER0 EQU CYREG_TMR0_PER0
Timer_1_TimerHW__PER1 EQU CYREG_TMR0_PER1
Timer_1_TimerHW__PM_ACT_CFG EQU CYREG_PM_ACT_CFG3
Timer_1_TimerHW__PM_ACT_MSK EQU 0x01
Timer_1_TimerHW__PM_STBY_CFG EQU CYREG_PM_STBY_CFG3
Timer_1_TimerHW__PM_STBY_MSK EQU 0x01
Timer_1_TimerHW__RT0 EQU CYREG_TMR0_RT0
Timer_1_TimerHW__RT1 EQU CYREG_TMR0_RT1
Timer_1_TimerHW__SR0 EQU CYREG_TMR0_SR0

/* timer_clock */
timer_clock__CFG0 EQU CYREG_CLKDIST_DCFG0_CFG0
timer_clock__CFG1 EQU CYREG_CLKDIST_DCFG0_CFG1
timer_clock__CFG2 EQU CYREG_CLKDIST_DCFG0_CFG2
timer_clock__CFG2_SRC_SEL_MASK EQU 0x07
timer_clock__INDEX EQU 0x00
timer_clock__PM_ACT_CFG EQU CYREG_PM_ACT_CFG2
timer_clock__PM_ACT_MSK EQU 0x01
timer_clock__PM_STBY_CFG EQU CYREG_PM_STBY_CFG2
timer_clock__PM_STBY_MSK EQU 0x01

/* Miscellaneous */
BCLK__BUS_CLK__HZ EQU 24000000
BCLK__BUS_CLK__KHZ EQU 24000
BCLK__BUS_CLK__MHZ EQU 24
CYDEV_CHIP_DIE_LEOPARD EQU 1
CYDEV_CHIP_DIE_PSOC4A EQU 12
CYDEV_CHIP_DIE_PSOC5LP EQU 19
CYDEV_CHIP_DIE_PSOC5TM EQU 20
CYDEV_CHIP_DIE_TMA4 EQU 2
CYDEV_CHIP_DIE_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_FM0P EQU 4
CYDEV_CHIP_FAMILY_FM3 EQU 5
CYDEV_CHIP_FAMILY_FM4 EQU 6
CYDEV_CHIP_FAMILY_PSOC3 EQU 1
CYDEV_CHIP_FAMILY_PSOC4 EQU 2
CYDEV_CHIP_FAMILY_PSOC5 EQU 3
CYDEV_CHIP_FAMILY_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_USED EQU CYDEV_CHIP_FAMILY_PSOC5
CYDEV_CHIP_JTAG_ID EQU 0x2E161069
CYDEV_CHIP_MEMBER_3A EQU 1
CYDEV_CHIP_MEMBER_4A EQU 12
CYDEV_CHIP_MEMBER_4C EQU 18
CYDEV_CHIP_MEMBER_4D EQU 8
CYDEV_CHIP_MEMBER_4E EQU 4
CYDEV_CHIP_MEMBER_4F EQU 13
CYDEV_CHIP_MEMBER_4G EQU 2
CYDEV_CHIP_MEMBER_4H EQU 11
CYDEV_CHIP_MEMBER_4I EQU 17
CYDEV_CHIP_MEMBER_4J EQU 9
CYDEV_CHIP_MEMBER_4K EQU 10
CYDEV_CHIP_MEMBER_4L EQU 16
CYDEV_CHIP_MEMBER_4M EQU 15
CYDEV_CHIP_MEMBER_4N EQU 6
CYDEV_CHIP_MEMBER_4O EQU 5
CYDEV_CHIP_MEMBER_4P EQU 14
CYDEV_CHIP_MEMBER_4Q EQU 7
CYDEV_CHIP_MEMBER_4U EQU 3
CYDEV_CHIP_MEMBER_5A EQU 20
CYDEV_CHIP_MEMBER_5B EQU 19
CYDEV_CHIP_MEMBER_FM3 EQU 24
CYDEV_CHIP_MEMBER_FM4 EQU 25
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1 EQU 21
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2 EQU 22
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3 EQU 23
CYDEV_CHIP_MEMBER_UNKNOWN EQU 0
CYDEV_CHIP_MEMBER_USED EQU CYDEV_CHIP_MEMBER_5B
CYDEV_CHIP_DIE_EXPECT EQU CYDEV_CHIP_MEMBER_USED
CYDEV_CHIP_DIE_ACTUAL EQU CYDEV_CHIP_DIE_EXPECT
CYDEV_CHIP_REV_LEOPARD_ES1 EQU 0
CYDEV_CHIP_REV_LEOPARD_ES2 EQU 1
CYDEV_CHIP_REV_LEOPARD_ES3 EQU 3
CYDEV_CHIP_REV_LEOPARD_PRODUCTION EQU 3
CYDEV_CHIP_REV_PSOC4A_ES0 EQU 17
CYDEV_CHIP_REV_PSOC4A_PRODUCTION EQU 17
CYDEV_CHIP_REV_PSOC5LP_ES0 EQU 0
CYDEV_CHIP_REV_PSOC5LP_PRODUCTION EQU 0
CYDEV_CHIP_REV_PSOC5TM_ES0 EQU 0
CYDEV_CHIP_REV_PSOC5TM_ES1 EQU 1
CYDEV_CHIP_REV_PSOC5TM_PRODUCTION EQU 1
CYDEV_CHIP_REV_TMA4_ES EQU 17
CYDEV_CHIP_REV_TMA4_ES2 EQU 33
CYDEV_CHIP_REV_TMA4_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_3A_ES1 EQU 0
CYDEV_CHIP_REVISION_3A_ES2 EQU 1
CYDEV_CHIP_REVISION_3A_ES3 EQU 3
CYDEV_CHIP_REVISION_3A_PRODUCTION EQU 3
CYDEV_CHIP_REVISION_4A_ES0 EQU 17
CYDEV_CHIP_REVISION_4A_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4C_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4D_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4E_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION_256K EQU 0
CYDEV_CHIP_REVISION_4G_ES EQU 17
CYDEV_CHIP_REVISION_4G_ES2 EQU 33
CYDEV_CHIP_REVISION_4G_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4H_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4I_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4J_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4K_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4L_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4M_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4N_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4O_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4P_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4Q_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4U_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_5A_ES0 EQU 0
CYDEV_CHIP_REVISION_5A_ES1 EQU 1
CYDEV_CHIP_REVISION_5A_PRODUCTION EQU 1
CYDEV_CHIP_REVISION_5B_ES0 EQU 0
CYDEV_CHIP_REVISION_5B_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_FM3_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_FM4_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_USED EQU CYDEV_CHIP_REVISION_5B_PRODUCTION
CYDEV_CHIP_REV_EXPECT EQU CYDEV_CHIP_REVISION_USED
CYDEV_CONFIG_FASTBOOT_ENABLED EQU 1
CYDEV_CONFIG_UNUSED_IO_AllowButWarn EQU 0
CYDEV_CONFIG_UNUSED_IO EQU CYDEV_CONFIG_UNUSED_IO_AllowButWarn
CYDEV_CONFIG_UNUSED_IO_AllowWithInfo EQU 1
CYDEV_CONFIG_UNUSED_IO_Disallowed EQU 2
CYDEV_CONFIGURATION_COMPRESSED EQU 1
CYDEV_CONFIGURATION_DMA EQU 0
CYDEV_CONFIGURATION_ECC EQU 1
CYDEV_CONFIGURATION_IMOENABLED EQU CYDEV_CONFIG_FASTBOOT_ENABLED
CYDEV_CONFIGURATION_MODE_COMPRESSED EQU 0
CYDEV_CONFIGURATION_MODE EQU CYDEV_CONFIGURATION_MODE_COMPRESSED
CYDEV_CONFIGURATION_MODE_DMA EQU 2
CYDEV_CONFIGURATION_MODE_UNCOMPRESSED EQU 1
CYDEV_DEBUG_ENABLE_MASK EQU 0x20
CYDEV_DEBUG_ENABLE_REGISTER EQU CYREG_MLOGIC_DEBUG
CYDEV_DEBUGGING_DPS_Disable EQU 3
CYDEV_DEBUGGING_DPS_JTAG_4 EQU 1
CYDEV_DEBUGGING_DPS_JTAG_5 EQU 0
CYDEV_DEBUGGING_DPS_SWD EQU 2
CYDEV_DEBUGGING_DPS_SWD_SWV EQU 6
CYDEV_DEBUGGING_DPS EQU CYDEV_DEBUGGING_DPS_SWD_SWV
CYDEV_DEBUGGING_ENABLE EQU 1
CYDEV_DEBUGGING_XRES EQU 0
CYDEV_DMA_CHANNELS_AVAILABLE EQU 24
CYDEV_ECC_ENABLE EQU 0
CYDEV_HEAP_SIZE EQU 0x80
CYDEV_INSTRUCT_CACHE_ENABLED EQU 1
CYDEV_INTR_RISING EQU 0x00000000
CYDEV_IS_EXPORTING_CODE EQU 0
CYDEV_IS_IMPORTING_CODE EQU 0
CYDEV_PROJ_TYPE EQU 0
CYDEV_PROJ_TYPE_BOOTLOADER EQU 1
CYDEV_PROJ_TYPE_LAUNCHER EQU 5
CYDEV_PROJ_TYPE_LOADABLE EQU 2
CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER EQU 4
CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER EQU 3
CYDEV_PROJ_TYPE_STANDARD EQU 0
CYDEV_PROTECTION_ENABLE EQU 0
CYDEV_STACK_SIZE EQU 0x0800
CYDEV_USE_BUNDLED_CMSIS EQU 1
CYDEV_VARIABLE_VDDA EQU 0
CYDEV_VDDA_MV EQU 5000
CYDEV_VDDD_MV EQU 5000
CYDEV_VDDIO0_MV EQU 5000
CYDEV_VDDIO1_MV EQU 5000
CYDEV_VDDIO2_MV EQU 5000
CYDEV_VDDIO3_MV EQU 5000
CYDEV_VIO0_MV EQU 5000
CYDEV_VIO1_MV EQU 5000
CYDEV_VIO2_MV EQU 5000
CYDEV_VIO3_MV EQU 5000
CYIPBLOCK_ARM_CM3_VERSION EQU 0
CYIPBLOCK_P3_ANAIF_VERSION EQU 0
CYIPBLOCK_P3_CAN_VERSION EQU 0
CYIPBLOCK_P3_CAPSENSE_VERSION EQU 0
CYIPBLOCK_P3_COMP_VERSION EQU 0
CYIPBLOCK_P3_DECIMATOR_VERSION EQU 0
CYIPBLOCK_P3_DFB_VERSION EQU 0
CYIPBLOCK_P3_DMA_VERSION EQU 0
CYIPBLOCK_P3_DRQ_VERSION EQU 0
CYIPBLOCK_P3_DSM_VERSION EQU 0
CYIPBLOCK_P3_EMIF_VERSION EQU 0
CYIPBLOCK_P3_I2C_VERSION EQU 0
CYIPBLOCK_P3_LCD_VERSION EQU 0
CYIPBLOCK_P3_LPF_VERSION EQU 0
CYIPBLOCK_P3_OPAMP_VERSION EQU 0
CYIPBLOCK_P3_PM_VERSION EQU 0
CYIPBLOCK_P3_SCCT_VERSION EQU 0
CYIPBLOCK_P3_TIMER_VERSION EQU 0
CYIPBLOCK_P3_USB_VERSION EQU 0
CYIPBLOCK_P3_VIDAC_VERSION EQU 0
CYIPBLOCK_P3_VREF_VERSION EQU 0
CYIPBLOCK_S8_GPIO_VERSION EQU 0
CYIPBLOCK_S8_IRQ_VERSION EQU 0
CYIPBLOCK_S8_SAR_VERSION EQU 0
CYIPBLOCK_S8_SIO_VERSION EQU 0
CYIPBLOCK_S8_UDB_VERSION EQU 0
DMA_CHANNELS_USED__MASK0 EQU 0x00000000
CYDEV_BOOTLOADER_ENABLE EQU 0

#endif /* INCLUDED_CYFITTERIAR_INC */
