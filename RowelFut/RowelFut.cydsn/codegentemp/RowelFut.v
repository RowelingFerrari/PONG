// ======================================================================
// RowelFut.v generated from TopDesign.cysch
// 04/10/2018 at 15:45
// This file is auto generated. ANY EDITS YOU MAKE MAY BE LOST WHEN THIS FILE IS REGENERATED!!!
// ======================================================================

/* -- WARNING: The following section of defines are deprecated and will be removed in a future release -- */
`define CYDEV_CHIP_DIE_LEOPARD 1
`define CYDEV_CHIP_REV_LEOPARD_PRODUCTION 3
`define CYDEV_CHIP_REV_LEOPARD_ES3 3
`define CYDEV_CHIP_REV_LEOPARD_ES2 1
`define CYDEV_CHIP_REV_LEOPARD_ES1 0
`define CYDEV_CHIP_DIE_PSOC5LP 2
`define CYDEV_CHIP_REV_PSOC5LP_PRODUCTION 0
`define CYDEV_CHIP_REV_PSOC5LP_ES0 0
`define CYDEV_CHIP_DIE_PSOC5TM 3
`define CYDEV_CHIP_REV_PSOC5TM_PRODUCTION 1
`define CYDEV_CHIP_REV_PSOC5TM_ES1 1
`define CYDEV_CHIP_REV_PSOC5TM_ES0 0
`define CYDEV_CHIP_DIE_TMA4 4
`define CYDEV_CHIP_REV_TMA4_PRODUCTION 17
`define CYDEV_CHIP_REV_TMA4_ES 17
`define CYDEV_CHIP_REV_TMA4_ES2 33
`define CYDEV_CHIP_DIE_PSOC4A 5
`define CYDEV_CHIP_REV_PSOC4A_PRODUCTION 17
`define CYDEV_CHIP_REV_PSOC4A_ES0 17
`define CYDEV_CHIP_DIE_PSOC6ABLE2 6
`define CYDEV_CHIP_REV_PSOC6ABLE2_PRODUCTION 0
`define CYDEV_CHIP_REV_PSOC6ABLE2_NO_UDB 0
`define CYDEV_CHIP_DIE_VOLANS 7
`define CYDEV_CHIP_REV_VOLANS_PRODUCTION 0
`define CYDEV_CHIP_DIE_BERRYPECKER 8
`define CYDEV_CHIP_REV_BERRYPECKER_PRODUCTION 0
`define CYDEV_CHIP_DIE_CRANE 9
`define CYDEV_CHIP_REV_CRANE_PRODUCTION 0
`define CYDEV_CHIP_DIE_FM3 10
`define CYDEV_CHIP_REV_FM3_PRODUCTION 0
`define CYDEV_CHIP_DIE_FM4 11
`define CYDEV_CHIP_REV_FM4_PRODUCTION 0
`define CYDEV_CHIP_DIE_EXPECT 2
`define CYDEV_CHIP_REV_EXPECT 0
`define CYDEV_CHIP_DIE_ACTUAL 2
/* -- WARNING: The previous section of defines are deprecated and will be removed in a future release -- */
`define CYDEV_CHIP_FAMILY_PSOC3 1
`define CYDEV_CHIP_FAMILY_PSOC4 2
`define CYDEV_CHIP_FAMILY_PSOC5 3
`define CYDEV_CHIP_FAMILY_PSOC6 4
`define CYDEV_CHIP_FAMILY_FM0P 5
`define CYDEV_CHIP_FAMILY_FM3 6
`define CYDEV_CHIP_FAMILY_FM4 7
`define CYDEV_CHIP_FAMILY_UNKNOWN 0
`define CYDEV_CHIP_MEMBER_UNKNOWN 0
`define CYDEV_CHIP_MEMBER_3A 1
`define CYDEV_CHIP_REVISION_3A_PRODUCTION 3
`define CYDEV_CHIP_REVISION_3A_ES3 3
`define CYDEV_CHIP_REVISION_3A_ES2 1
`define CYDEV_CHIP_REVISION_3A_ES1 0
`define CYDEV_CHIP_MEMBER_5B 2
`define CYDEV_CHIP_REVISION_5B_PRODUCTION 0
`define CYDEV_CHIP_REVISION_5B_ES0 0
`define CYDEV_CHIP_MEMBER_5A 3
`define CYDEV_CHIP_REVISION_5A_PRODUCTION 1
`define CYDEV_CHIP_REVISION_5A_ES1 1
`define CYDEV_CHIP_REVISION_5A_ES0 0
`define CYDEV_CHIP_MEMBER_4G 4
`define CYDEV_CHIP_REVISION_4G_PRODUCTION 17
`define CYDEV_CHIP_REVISION_4G_ES 17
`define CYDEV_CHIP_REVISION_4G_ES2 33
`define CYDEV_CHIP_MEMBER_4U 5
`define CYDEV_CHIP_REVISION_4U_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4E 6
`define CYDEV_CHIP_REVISION_4E_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4O 7
`define CYDEV_CHIP_REVISION_4O_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4R 8
`define CYDEV_CHIP_REVISION_4R_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4N 9
`define CYDEV_CHIP_REVISION_4N_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4S 10
`define CYDEV_CHIP_REVISION_4S_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4Q 11
`define CYDEV_CHIP_REVISION_4Q_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4D 12
`define CYDEV_CHIP_REVISION_4D_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4J 13
`define CYDEV_CHIP_REVISION_4J_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4K 14
`define CYDEV_CHIP_REVISION_4K_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4H 15
`define CYDEV_CHIP_REVISION_4H_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4A 16
`define CYDEV_CHIP_REVISION_4A_PRODUCTION 17
`define CYDEV_CHIP_REVISION_4A_ES0 17
`define CYDEV_CHIP_MEMBER_4F 17
`define CYDEV_CHIP_REVISION_4F_PRODUCTION 0
`define CYDEV_CHIP_REVISION_4F_PRODUCTION_256K 0
`define CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA 0
`define CYDEV_CHIP_MEMBER_4P 18
`define CYDEV_CHIP_REVISION_4P_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4M 19
`define CYDEV_CHIP_REVISION_4M_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4L 20
`define CYDEV_CHIP_REVISION_4L_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4I 21
`define CYDEV_CHIP_REVISION_4I_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_6A 22
`define CYDEV_CHIP_REVISION_6A_PRODUCTION 0
`define CYDEV_CHIP_REVISION_6A_NO_UDB 0
`define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1 23
`define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2 24
`define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3 25
`define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_FM3 26
`define CYDEV_CHIP_REVISION_FM3_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_FM4 27
`define CYDEV_CHIP_REVISION_FM4_PRODUCTION 0
`define CYDEV_CHIP_FAMILY_USED 3
`define CYDEV_CHIP_MEMBER_USED 2
`define CYDEV_CHIP_REVISION_USED 0
// Component: BasicCounter_v1_0
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "I:\Programas\x86\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\BasicCounter_v1_0"
`include "I:\Programas\x86\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\BasicCounter_v1_0\BasicCounter_v1_0.v"
`else
`define CY_BLK_DIR "I:\Programas\x86\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\BasicCounter_v1_0"
`include "I:\Programas\x86\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\BasicCounter_v1_0\BasicCounter_v1_0.v"
`endif

// Component: LUT_v1_50
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "I:\Programas\x86\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\LUT_v1_50"
`include "I:\Programas\x86\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\LUT_v1_50\LUT_v1_50.v"
`else
`define CY_BLK_DIR "I:\Programas\x86\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\LUT_v1_50"
`include "I:\Programas\x86\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\LUT_v1_50\LUT_v1_50.v"
`endif

// Component: CyStatusReg_v1_90
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "I:\Programas\x86\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\CyStatusReg_v1_90"
`include "I:\Programas\x86\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\CyStatusReg_v1_90\CyStatusReg_v1_90.v"
`else
`define CY_BLK_DIR "I:\Programas\x86\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\CyStatusReg_v1_90"
`include "I:\Programas\x86\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\CyStatusReg_v1_90\CyStatusReg_v1_90.v"
`endif

// Component: or_v1_0
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "I:\Programas\x86\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\or_v1_0"
`include "I:\Programas\x86\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\or_v1_0\or_v1_0.v"
`else
`define CY_BLK_DIR "I:\Programas\x86\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\or_v1_0"
`include "I:\Programas\x86\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\or_v1_0\or_v1_0.v"
`endif

// Component: cy_constant_v1_0
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "I:\Programas\x86\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_constant_v1_0"
`include "I:\Programas\x86\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_constant_v1_0\cy_constant_v1_0.v"
`else
`define CY_BLK_DIR "I:\Programas\x86\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_constant_v1_0"
`include "I:\Programas\x86\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_constant_v1_0\cy_constant_v1_0.v"
`endif

// Component: B_PWM_v3_30
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "I:\Programas\x86\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\B_PWM_v3_30"
`include "I:\Programas\x86\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\B_PWM_v3_30\B_PWM_v3_30.v"
`else
`define CY_BLK_DIR "I:\Programas\x86\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\B_PWM_v3_30"
`include "I:\Programas\x86\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\B_PWM_v3_30\B_PWM_v3_30.v"
`endif

// Component: cy_virtualmux_v1_0
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "I:\Programas\x86\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_virtualmux_v1_0"
`include "I:\Programas\x86\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_virtualmux_v1_0\cy_virtualmux_v1_0.v"
`else
`define CY_BLK_DIR "I:\Programas\x86\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_virtualmux_v1_0"
`include "I:\Programas\x86\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_virtualmux_v1_0\cy_virtualmux_v1_0.v"
`endif

// Component: OneTerminal
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "I:\Programas\x86\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\OneTerminal"
`include "I:\Programas\x86\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\OneTerminal\OneTerminal.v"
`else
`define CY_BLK_DIR "I:\Programas\x86\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\OneTerminal"
`include "I:\Programas\x86\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\OneTerminal\OneTerminal.v"
`endif

// Component: ZeroTerminal
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "I:\Programas\x86\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\ZeroTerminal"
`include "I:\Programas\x86\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\ZeroTerminal\ZeroTerminal.v"
`else
`define CY_BLK_DIR "I:\Programas\x86\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\ZeroTerminal"
`include "I:\Programas\x86\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\ZeroTerminal\ZeroTerminal.v"
`endif

// PWM_v3_30(CaptureMode=0, Clock_CheckTolerance=true, Clock_desired_freq=12, Clock_desired_freq_unit=6, Clock_divisor=1, Clock_FractDividerDenominator=0, Clock_FractDividerNumerator=0, Clock_FractDividerUsed=false, Clock_is_direct=false, Clock_is_divider=false, Clock_is_freq=true, Clock_minus_tolerance=5, Clock_ph_align_clock_id=, Clock_ph_align_clock_name=, Clock_plus_tolerance=5, Clock_source_clock_id=, Clock_source_clock_name=, Compare1_16=true, Compare1_8=false, Compare2_16=false, Compare2_8=false, CompareStatusEdgeSense=true, CompareType1=1, CompareType1Software=0, CompareType2=1, CompareType2Software=0, CompareValue1=32767, CompareValue2=63, CONTROL3=0, ControlReg=true, CtlModeReplacementString=SyncCtl, CyGetRegReplacementString=CY_GET_REG16, CySetRegReplacementString=CY_SET_REG16, DeadBand=0, DeadBand2_4=0, DeadBand256=0, DeadBandUsed=0, DeadTime=1, DitherOffset=0, EnableMode=0, FF16=false, FF8=false, FixedFunction=false, FixedFunctionUsed=0, InterruptOnCMP1=false, InterruptOnCMP2=false, InterruptOnKill=false, InterruptOnTC=false, IntOnCMP1=0, IntOnCMP2=0, IntOnKill=0, IntOnTC=0, KillMode=0, KillModeMinTime=0, MinimumKillTime=1, OneCompare=true, Period=65535, PWMMode=0, PWMModeCenterAligned=0, RegDefReplacementString=reg16, RegSizeReplacementString=uint16, Resolution=16, RstStatusReplacementString=sSTSReg_rstSts, RunMode=0, Status=false, TermMode_capture=0, TermMode_clock=0, TermMode_cmp_sel=0, TermMode_enable=0, TermMode_interrupt=0, TermMode_kill=0, TermMode_ph1=0, TermMode_ph2=0, TermMode_pwm=0, TermMode_pwm1=0, TermMode_pwm2=0, TermMode_reset=0, TermMode_tc=0, TermMode_trigger=0, TermVisibility_capture=false, TermVisibility_clock=true, TermVisibility_cmp_sel=false, TermVisibility_enable=false, TermVisibility_interrupt=false, TermVisibility_kill=false, TermVisibility_ph1=false, TermVisibility_ph2=false, TermVisibility_pwm=true, TermVisibility_pwm1=false, TermVisibility_pwm2=false, TermVisibility_reset=true, TermVisibility_tc=true, TermVisibility_trigger=false, TriggerMode=0, UDB16=true, UDB8=false, UseControl=true, UseInterrupt=false, UseStatus=false, VerilogSectionReplacementString=sP16, CY_API_CALLBACK_HEADER_INCLUDE=#include "cyapicallbacks.h", CY_COMMENT=, CY_COMPONENT_NAME=PWM_v3_30, CY_CONST_CONFIG=true, CY_CONTROL_FILE=<:default:>, CY_DATASHEET_FILE=<:default:>, CY_FITTER_NAME=PWM1, CY_INSTANCE_SHORT_NAME=PWM1, CY_MAJOR_VERSION=3, CY_MINOR_VERSION=30, CY_PDL_DRIVER_NAME=, CY_PDL_DRIVER_REQ_VERSION=, CY_PDL_DRIVER_SUBGROUP=, CY_PDL_DRIVER_VARIANT=, CY_REMOVE=false, CY_SUPPRESS_API_GEN=false, CY_VERSION=PSoC Creator  4.1 Update 1, INSTANCE_NAME=PWM1, )
module PWM_v3_30_0 (
    reset,
    clock,
    tc,
    pwm1,
    pwm2,
    interrupt,
    capture,
    kill,
    enable,
    trigger,
    cmp_sel,
    pwm,
    ph1,
    ph2);
    input       reset;
    input       clock;
    output      tc;
    output      pwm1;
    output      pwm2;
    output      interrupt;
    input       capture;
    input       kill;
    input       enable;
    input       trigger;
    input       cmp_sel;
    output      pwm;
    output      ph1;
    output      ph2;

    parameter Resolution = 16;

          wire  Net_114;
          wire  Net_113;
          wire  Net_107;
          wire  Net_96;
          wire  Net_55;
          wire  Net_57;
          wire  Net_101;
          wire  Net_54;
          wire  Net_63;

    B_PWM_v3_30 PWMUDB (
        .reset(reset),
        .clock(clock),
        .tc(Net_101),
        .pwm1(pwm1),
        .pwm2(pwm2),
        .interrupt(Net_55),
        .kill(kill),
        .capture(capture),
        .enable(enable),
        .cmp_sel(cmp_sel),
        .trigger(trigger),
        .pwm(Net_96),
        .ph1(ph1),
        .ph2(ph2));
    defparam PWMUDB.CaptureMode = 0;
    defparam PWMUDB.CompareStatusEdgeSense = 1;
    defparam PWMUDB.CompareType1 = 1;
    defparam PWMUDB.CompareType2 = 1;
    defparam PWMUDB.DeadBand = 0;
    defparam PWMUDB.DitherOffset = 0;
    defparam PWMUDB.EnableMode = 0;
    defparam PWMUDB.KillMode = 0;
    defparam PWMUDB.PWMMode = 0;
    defparam PWMUDB.Resolution = 16;
    defparam PWMUDB.RunMode = 0;
    defparam PWMUDB.TriggerMode = 0;
    defparam PWMUDB.UseStatus = 0;

	// vmCompare (cy_virtualmux_v1_0)
	assign pwm = Net_96;

	// vmIRQ (cy_virtualmux_v1_0)
	assign interrupt = Net_55;

	// vmTC (cy_virtualmux_v1_0)
	assign tc = Net_101;

    OneTerminal OneTerminal_1 (
        .o(Net_113));

	// FFKillMux (cy_virtualmux_v1_0)
	assign Net_107 = Net_114;

    ZeroTerminal ZeroTerminal_1 (
        .z(Net_114));



endmodule

// PWM_v3_30(CaptureMode=0, Clock_CheckTolerance=true, Clock_desired_freq=12, Clock_desired_freq_unit=6, Clock_divisor=1, Clock_FractDividerDenominator=0, Clock_FractDividerNumerator=0, Clock_FractDividerUsed=false, Clock_is_direct=false, Clock_is_divider=false, Clock_is_freq=true, Clock_minus_tolerance=5, Clock_ph_align_clock_id=, Clock_ph_align_clock_name=, Clock_plus_tolerance=5, Clock_source_clock_id=, Clock_source_clock_name=, Compare1_16=true, Compare1_8=false, Compare2_16=false, Compare2_8=false, CompareStatusEdgeSense=true, CompareType1=2, CompareType1Software=0, CompareType2=1, CompareType2Software=0, CompareValue1=32767, CompareValue2=63, CONTROL3=0, ControlReg=true, CtlModeReplacementString=SyncCtl, CyGetRegReplacementString=CY_GET_REG16, CySetRegReplacementString=CY_SET_REG16, DeadBand=0, DeadBand2_4=0, DeadBand256=0, DeadBandUsed=0, DeadTime=1, DitherOffset=0, EnableMode=0, FF16=false, FF8=false, FixedFunction=false, FixedFunctionUsed=0, InterruptOnCMP1=false, InterruptOnCMP2=false, InterruptOnKill=false, InterruptOnTC=false, IntOnCMP1=0, IntOnCMP2=0, IntOnKill=0, IntOnTC=0, KillMode=0, KillModeMinTime=0, MinimumKillTime=1, OneCompare=true, Period=65535, PWMMode=0, PWMModeCenterAligned=0, RegDefReplacementString=reg16, RegSizeReplacementString=uint16, Resolution=16, RstStatusReplacementString=sSTSReg_rstSts, RunMode=0, Status=false, TermMode_capture=0, TermMode_clock=0, TermMode_cmp_sel=0, TermMode_enable=0, TermMode_interrupt=0, TermMode_kill=0, TermMode_ph1=0, TermMode_ph2=0, TermMode_pwm=0, TermMode_pwm1=0, TermMode_pwm2=0, TermMode_reset=0, TermMode_tc=0, TermMode_trigger=0, TermVisibility_capture=false, TermVisibility_clock=true, TermVisibility_cmp_sel=false, TermVisibility_enable=false, TermVisibility_interrupt=false, TermVisibility_kill=false, TermVisibility_ph1=false, TermVisibility_ph2=false, TermVisibility_pwm=true, TermVisibility_pwm1=false, TermVisibility_pwm2=false, TermVisibility_reset=true, TermVisibility_tc=true, TermVisibility_trigger=false, TriggerMode=0, UDB16=true, UDB8=false, UseControl=true, UseInterrupt=false, UseStatus=false, VerilogSectionReplacementString=sP16, CY_API_CALLBACK_HEADER_INCLUDE=#include "cyapicallbacks.h", CY_COMMENT=, CY_COMPONENT_NAME=PWM_v3_30, CY_CONST_CONFIG=true, CY_CONTROL_FILE=<:default:>, CY_DATASHEET_FILE=<:default:>, CY_FITTER_NAME=PWM2, CY_INSTANCE_SHORT_NAME=PWM2, CY_MAJOR_VERSION=3, CY_MINOR_VERSION=30, CY_PDL_DRIVER_NAME=, CY_PDL_DRIVER_REQ_VERSION=, CY_PDL_DRIVER_SUBGROUP=, CY_PDL_DRIVER_VARIANT=, CY_REMOVE=false, CY_SUPPRESS_API_GEN=false, CY_VERSION=PSoC Creator  4.1 Update 1, INSTANCE_NAME=PWM2, )
module PWM_v3_30_1 (
    reset,
    clock,
    tc,
    pwm1,
    pwm2,
    interrupt,
    capture,
    kill,
    enable,
    trigger,
    cmp_sel,
    pwm,
    ph1,
    ph2);
    input       reset;
    input       clock;
    output      tc;
    output      pwm1;
    output      pwm2;
    output      interrupt;
    input       capture;
    input       kill;
    input       enable;
    input       trigger;
    input       cmp_sel;
    output      pwm;
    output      ph1;
    output      ph2;

    parameter Resolution = 16;

          wire  Net_114;
          wire  Net_113;
          wire  Net_107;
          wire  Net_96;
          wire  Net_55;
          wire  Net_57;
          wire  Net_101;
          wire  Net_54;
          wire  Net_63;

    B_PWM_v3_30 PWMUDB (
        .reset(reset),
        .clock(clock),
        .tc(Net_101),
        .pwm1(pwm1),
        .pwm2(pwm2),
        .interrupt(Net_55),
        .kill(kill),
        .capture(capture),
        .enable(enable),
        .cmp_sel(cmp_sel),
        .trigger(trigger),
        .pwm(Net_96),
        .ph1(ph1),
        .ph2(ph2));
    defparam PWMUDB.CaptureMode = 0;
    defparam PWMUDB.CompareStatusEdgeSense = 1;
    defparam PWMUDB.CompareType1 = 2;
    defparam PWMUDB.CompareType2 = 1;
    defparam PWMUDB.DeadBand = 0;
    defparam PWMUDB.DitherOffset = 0;
    defparam PWMUDB.EnableMode = 0;
    defparam PWMUDB.KillMode = 0;
    defparam PWMUDB.PWMMode = 0;
    defparam PWMUDB.Resolution = 16;
    defparam PWMUDB.RunMode = 0;
    defparam PWMUDB.TriggerMode = 0;
    defparam PWMUDB.UseStatus = 0;

	// vmCompare (cy_virtualmux_v1_0)
	assign pwm = Net_96;

	// vmIRQ (cy_virtualmux_v1_0)
	assign interrupt = Net_55;

	// vmTC (cy_virtualmux_v1_0)
	assign tc = Net_101;

    OneTerminal OneTerminal_1 (
        .o(Net_113));

	// FFKillMux (cy_virtualmux_v1_0)
	assign Net_107 = Net_114;

    ZeroTerminal ZeroTerminal_1 (
        .z(Net_114));



endmodule

// top
module top ;

    electrical  Net_511;
          wire  Net_507;
          wire  Net_506;
          wire  Net_430;
          wire  Net_504;
          wire  Net_503;
          wire  Net_502;
          wire  Net_501;
          wire  Net_500;
          wire  Net_499;
          wire  Net_498;
          wire  Net_497;
          wire  Net_496;
          wire  Net_448;
          wire  Net_1027;
          wire  Net_1026;
          wire  Net_1025;
          wire  Net_1024;
          wire  Net_1023;
          wire  Net_1022;
          wire  Net_1021;
          wire  Net_1020;
          wire  Net_1019;
          wire  Net_1018;
          wire  Net_1017;
          wire  Net_669;
    electrical  Net_685;
          wire  Net_527;
          wire  Net_622;
          wire  Net_621;
          wire  Net_620;
          wire  Net_619;
          wire  Net_618;
          wire  Net_617;
          wire  Net_616;
          wire [3:0] MICABLE;
          wire  Net_615;
          wire  Net_645;
          wire  Net_644;
          wire  Net_643;
          wire  Net_642;
          wire  Net_641;
          wire  Net_640;
          wire  Net_639;
          wire  Net_638;
          wire [7:0] Net_542;
          wire  Net_541;
          wire  Net_539;
          wire  Net_538;
          wire  Net_537;
          wire  Net_536;
          wire  Net_128;
    electrical  Net_531;
    electrical  Net_530;
    electrical  Net_529;
    electrical  Net_528;
          wire  Net_535;
          wire  Net_534;
          wire  Net_533;
          wire  Net_532;
          wire  Net_210;
          wire  Net_209;
          wire  Net_208;
          wire  Net_207;
          wire  Net_206;
          wire  Net_205;
          wire  Net_204;
          wire  Net_203;
          wire  Net_99;
          wire  Net_98;
          wire  Net_216;
          wire  Net_274;
          wire  Net_215;
          wire  Net_122;
    electrical  Net_938;
    electrical  Net_147;
          wire  Net_218;
          wire  Net_154;
          wire  Net_66;
          wire  Net_505;
          wire  Net_153;
          wire  Net_176;
          wire  Net_652;
          wire  Net_651;
          wire  Net_653;
          wire  Net_650;
          wire  Net_173;
          wire  Net_19;
          wire  Net_648;
          wire  Net_647;
          wire  Net_646;
          wire  Net_540;
          wire  Net_155;
          wire  Net_156;
          wire  Net_157;
          wire  Net_158;
    electrical  Net_435;
    electrical  Net_434;
          wire  Net_419;
          wire  Net_420;
          wire  Net_509;

	wire [0:0] tmpOE__LED_net;
	wire [0:0] tmpFB_0__LED_net;
	wire [0:0] tmpIO_0__LED_net;
	wire [0:0] tmpINTERRUPT_0__LED_net;
	electrical [0:0] tmpSIOVREF__LED_net;

	cy_psoc3_pins_v1_10
		#(.id("e851a3b9-efb8-48be-bbb8-b303b216c393"),
		  .drive_mode(3'b110),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("O"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		LED
		 (.oe(tmpOE__LED_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__LED_net[0:0]}),
		  .io({tmpIO_0__LED_net[0:0]}),
		  .siovref(tmpSIOVREF__LED_net),
		  .interrupt({tmpINTERRUPT_0__LED_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__LED_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

    BasicCounter_v1_0 BasicCounter_1 (
        .en(1'b1),
        .cnt(MICABLE[3:0]),
        .reset(1'b0),
        .clock(Net_66));
    defparam BasicCounter_1.Width = 4;

	wire [3:0] tmpOE__TECLADO_OUT_net;
	wire [3:0] tmpFB_3__TECLADO_OUT_net;
	wire [3:0] tmpIO_3__TECLADO_OUT_net;
	wire [0:0] tmpINTERRUPT_0__TECLADO_OUT_net;
	electrical [0:0] tmpSIOVREF__TECLADO_OUT_net;

	cy_psoc3_pins_v1_10
		#(.id("269a98bf-40cd-48d1-8904-9e1450815ba0"),
		  .drive_mode(12'b110_110_110_110),
		  .ibuf_enabled(4'b1_1_1_1),
		  .init_dr_st(4'b0_0_0_0),
		  .input_clk_en(0),
		  .input_sync(4'b1_1_1_1),
		  .input_sync_mode(4'b0_0_0_0),
		  .intr_mode(8'b00_00_00_00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(",,,"),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(4'b0_0_0_0),
		  .oe_reset(0),
		  .oe_sync(4'b0_0_0_0),
		  .output_clk_en(0),
		  .output_clock_mode(4'b0_0_0_0),
		  .output_conn(4'b1_1_1_1),
		  .output_mode(4'b0_0_0_0),
		  .output_reset(0),
		  .output_sync(4'b0_0_0_0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(",,,"),
		  .pin_mode("OOOO"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(4'b1_1_1_1),
		  .sio_ibuf(""),
		  .sio_info(8'b00_00_00_00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(4'b0_0_0_0),
		  .spanning(0),
		  .use_annotation(4'b0_0_0_0),
		  .vtrip(8'b10_10_10_10),
		  .width(4),
		  .ovt_hyst_trim(4'b0_0_0_0),
		  .ovt_needed(4'b0_0_0_0),
		  .ovt_slew_control(8'b00_00_00_00),
		  .input_buffer_sel(8'b00_00_00_00))
		TECLADO_OUT
		 (.oe(tmpOE__TECLADO_OUT_net),
		  .y({Net_19, Net_648, Net_647, Net_646}),
		  .fb({tmpFB_3__TECLADO_OUT_net[3:0]}),
		  .io({tmpIO_3__TECLADO_OUT_net[3:0]}),
		  .siovref(tmpSIOVREF__TECLADO_OUT_net),
		  .interrupt({tmpINTERRUPT_0__TECLADO_OUT_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__TECLADO_OUT_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{4'b1111} : {4'b1111};

    // -- LUT Filas_1 start --
    if (1)
    begin : Filas_1
        reg [3:0] tmp__Filas_1_reg;
        wire [1:0] tmp__Filas_1_ins;
        assign tmp__Filas_1_ins = {MICABLE[3],MICABLE[2]};
        always @(tmp__Filas_1_ins)
        begin
            case (tmp__Filas_1_ins)
                2'b00 :  tmp__Filas_1_reg = 4'b1000;
                2'b01 :  tmp__Filas_1_reg = 4'b0100;
                2'b10 :  tmp__Filas_1_reg = 4'b0010;
                2'b11 :  tmp__Filas_1_reg = 4'b0001;
            endcase
        end
        assign {Net_19,Net_648,Net_647,Net_646} = tmp__Filas_1_reg;
    end
    // -- LUT Filas_1 end --

    // -- LUT LEDs start --
    if (1)
    begin : LEDs
        reg [3:0] tmp__LEDs_reg;
        wire [4:0] tmp__LEDs_ins;
        assign tmp__LEDs_ins = {Net_173,Net_176,Net_505,Net_153,Net_154};
        always @(posedge Net_66)
        begin
            case (tmp__LEDs_ins)
                5'b00000 :  tmp__LEDs_reg = 4'b0000;
                5'b00001 :  tmp__LEDs_reg = 4'b0000;
                5'b00010 :  tmp__LEDs_reg = 4'b0000;
                5'b00011 :  tmp__LEDs_reg = 4'b0000;
                5'b00100 :  tmp__LEDs_reg = 4'b0000;
                5'b00101 :  tmp__LEDs_reg = 4'b0000;
                5'b00110 :  tmp__LEDs_reg = 4'b0000;
                5'b00111 :  tmp__LEDs_reg = 4'b0000;
                5'b01000 :  tmp__LEDs_reg = 4'b0000;
                5'b01001 :  tmp__LEDs_reg = 4'b0000;
                5'b01010 :  tmp__LEDs_reg = 4'b0000;
                5'b01011 :  tmp__LEDs_reg = 4'b0000;
                5'b01100 :  tmp__LEDs_reg = 4'b0000;
                5'b01101 :  tmp__LEDs_reg = 4'b0000;
                5'b01110 :  tmp__LEDs_reg = 4'b0000;
                5'b01111 :  tmp__LEDs_reg = 4'b0000;
                5'b10000 :  tmp__LEDs_reg = 4'b0001;
                5'b10001 :  tmp__LEDs_reg = 4'b0010;
                5'b10010 :  tmp__LEDs_reg = 4'b0011;
                5'b10011 :  tmp__LEDs_reg = 4'b1010;
                5'b10100 :  tmp__LEDs_reg = 4'b0100;
                5'b10101 :  tmp__LEDs_reg = 4'b0101;
                5'b10110 :  tmp__LEDs_reg = 4'b0110;
                5'b10111 :  tmp__LEDs_reg = 4'b1011;
                5'b11000 :  tmp__LEDs_reg = 4'b0111;
                5'b11001 :  tmp__LEDs_reg = 4'b1000;
                5'b11010 :  tmp__LEDs_reg = 4'b1001;
                5'b11011 :  tmp__LEDs_reg = 4'b1100;
                5'b11100 :  tmp__LEDs_reg = 4'b1110;
                5'b11101 :  tmp__LEDs_reg = 4'b0000;
                5'b11110 :  tmp__LEDs_reg = 4'b1111;
                5'b11111 :  tmp__LEDs_reg = 4'b1101;
            endcase
        end
        assign {Net_158,Net_157,Net_156,Net_155} = tmp__LEDs_reg;
    end
    // -- LUT LEDs end --


	cy_isr_v1_0
		#(.int_type(2'b00))
		up
		 (.int_signal(Net_540));


	wire [3:0] tmpOE__Led_1_net;
	wire [3:0] tmpFB_3__Led_1_net;
	wire [3:0] tmpIO_3__Led_1_net;
	wire [0:0] tmpINTERRUPT_0__Led_1_net;
	electrical [0:0] tmpSIOVREF__Led_1_net;

	cy_psoc3_pins_v1_10
		#(.id("bcb7569a-b1c5-447b-a365-c1ca1fb59033"),
		  .drive_mode(12'b010_010_010_010),
		  .ibuf_enabled(4'b1_1_1_1),
		  .init_dr_st(4'b0_0_0_0),
		  .input_clk_en(0),
		  .input_sync(4'b1_1_1_1),
		  .input_sync_mode(4'b0_0_0_0),
		  .intr_mode(8'b00_00_00_00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(",,,"),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(4'b0_0_0_0),
		  .oe_reset(0),
		  .oe_sync(4'b0_0_0_0),
		  .output_clk_en(0),
		  .output_clock_mode(4'b0_0_0_0),
		  .output_conn(4'b1_1_1_1),
		  .output_mode(4'b0_0_0_0),
		  .output_reset(0),
		  .output_sync(4'b0_0_0_0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(",,,"),
		  .pin_mode("OOOO"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(4'b1_1_1_1),
		  .sio_ibuf(""),
		  .sio_info(8'b00_00_00_00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(4'b0_0_0_0),
		  .spanning(0),
		  .use_annotation(4'b1_1_1_1),
		  .vtrip(8'b10_10_10_10),
		  .width(4),
		  .ovt_hyst_trim(4'b0_0_0_0),
		  .ovt_needed(4'b0_0_0_0),
		  .ovt_slew_control(8'b00_00_00_00),
		  .input_buffer_sel(8'b00_00_00_00))
		Led_1
		 (.oe(tmpOE__Led_1_net),
		  .y({Net_158, Net_157, Net_156, Net_155}),
		  .fb({tmpFB_3__Led_1_net[3:0]}),
		  .io({tmpIO_3__Led_1_net[3:0]}),
		  .siovref(tmpSIOVREF__Led_1_net),
		  .interrupt({tmpINTERRUPT_0__Led_1_net[0:0]}),
		  .annotation({Net_531, Net_530, Net_529, Net_528}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__Led_1_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{4'b1111} : {4'b1111};


	cy_clock_v1_0
		#(.id("833bc8a9-1401-41e1-a9ee-7c3d4e1093b3"),
		  .source_clock_id(""),
		  .divisor(0),
		  .period("1000000000000"),
		  .is_direct(0),
		  .is_digital(1))
		Clock_1
		 (.clock_out(Net_66));


    CyStatusReg_v1_90 teclado (
        .status_0(Net_155),
        .status_1(Net_156),
        .status_2(Net_157),
        .status_3(Net_158),
        .clock(Net_218),
        .status_4(1'b0),
        .status_5(1'b0),
        .status_6(1'b0),
        .status_7(1'b0),
        .intr(Net_541),
        .status_bus(8'b0));
    defparam teclado.Bit0Mode = 1;
    defparam teclado.Bit1Mode = 1;
    defparam teclado.Bit2Mode = 1;
    defparam teclado.Bit3Mode = 1;
    defparam teclado.Bit4Mode = 0;
    defparam teclado.Bit5Mode = 0;
    defparam teclado.Bit6Mode = 0;
    defparam teclado.Bit7Mode = 0;
    defparam teclado.BusDisplay = 0;
    defparam teclado.Interrupt = 0;
    defparam teclado.MaskValue = 0;
    defparam teclado.NumInputs = 4;


    assign Net_173 = Net_652 | Net_651 | Net_653 | Net_650;

    // -- LUT Filas start --
    if (1)
    begin : Filas
        reg [1:0] tmp__Filas_reg;
        wire [3:0] tmp__Filas_ins;
        assign tmp__Filas_ins = {Net_19,Net_648,Net_647,Net_646};
        always @(tmp__Filas_ins)
        begin
            case (tmp__Filas_ins)
                4'b0000 :  tmp__Filas_reg = 2'b00;
                4'b0001 :  tmp__Filas_reg = 2'b11;
                4'b0010 :  tmp__Filas_reg = 2'b10;
                4'b0011 :  tmp__Filas_reg = 2'b00;
                4'b0100 :  tmp__Filas_reg = 2'b01;
                4'b0101 :  tmp__Filas_reg = 2'b00;
                4'b0110 :  tmp__Filas_reg = 2'b00;
                4'b0111 :  tmp__Filas_reg = 2'b00;
                4'b1000 :  tmp__Filas_reg = 2'b00;
                4'b1001 :  tmp__Filas_reg = 2'b00;
                4'b1010 :  tmp__Filas_reg = 2'b00;
                4'b1011 :  tmp__Filas_reg = 2'b00;
                4'b1100 :  tmp__Filas_reg = 2'b00;
                4'b1101 :  tmp__Filas_reg = 2'b00;
                4'b1110 :  tmp__Filas_reg = 2'b00;
                4'b1111 :  tmp__Filas_reg = 2'b00;
            endcase
        end
        assign {Net_176,Net_505} = tmp__Filas_reg;
    end
    // -- LUT Filas end --

    // -- LUT Columnas start --
    if (1)
    begin : Columnas
        reg [1:0] tmp__Columnas_reg;
        wire [3:0] tmp__Columnas_ins;
        assign tmp__Columnas_ins = {Net_652,Net_651,Net_653,Net_650};
        always @(tmp__Columnas_ins)
        begin
            case (tmp__Columnas_ins)
                4'b0000 :  tmp__Columnas_reg = 2'b00;
                4'b0001 :  tmp__Columnas_reg = 2'b11;
                4'b0010 :  tmp__Columnas_reg = 2'b10;
                4'b0011 :  tmp__Columnas_reg = 2'b00;
                4'b0100 :  tmp__Columnas_reg = 2'b01;
                4'b0101 :  tmp__Columnas_reg = 2'b00;
                4'b0110 :  tmp__Columnas_reg = 2'b00;
                4'b0111 :  tmp__Columnas_reg = 2'b00;
                4'b1000 :  tmp__Columnas_reg = 2'b00;
                4'b1001 :  tmp__Columnas_reg = 2'b00;
                4'b1010 :  tmp__Columnas_reg = 2'b00;
                4'b1011 :  tmp__Columnas_reg = 2'b00;
                4'b1100 :  tmp__Columnas_reg = 2'b00;
                4'b1101 :  tmp__Columnas_reg = 2'b00;
                4'b1110 :  tmp__Columnas_reg = 2'b00;
                4'b1111 :  tmp__Columnas_reg = 2'b00;
            endcase
        end
        assign {Net_153,Net_154} = tmp__Columnas_reg;
    end
    // -- LUT Columnas end --

	wire [3:0] tmpOE__TECLADO_IN_net;
	wire [3:0] tmpIO_3__TECLADO_IN_net;
	electrical [0:0] tmpSIOVREF__TECLADO_IN_net;

	cy_psoc3_pins_v1_10
		#(.id("66d7808b-9a72-4549-9409-e0e0ade6916d"),
		  .drive_mode(12'b011_011_011_011),
		  .ibuf_enabled(4'b1_1_1_1),
		  .init_dr_st(4'b0_0_0_0),
		  .input_clk_en(0),
		  .input_sync(4'b0_0_0_0),
		  .input_sync_mode(4'b0_0_0_0),
		  .intr_mode(8'b10_10_10_10),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(",,,"),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(4'b0_0_0_0),
		  .oe_reset(0),
		  .oe_sync(4'b0_0_0_0),
		  .output_clk_en(0),
		  .output_clock_mode(4'b0_0_0_0),
		  .output_conn(4'b0_0_0_0),
		  .output_mode(4'b0_0_0_0),
		  .output_reset(0),
		  .output_sync(4'b0_0_0_0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(",,,"),
		  .pin_mode("IIII"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(4'b1_1_1_1),
		  .sio_ibuf(""),
		  .sio_info(8'b00_00_00_00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(4'b0_0_0_0),
		  .spanning(0),
		  .use_annotation(4'b0_0_0_0),
		  .vtrip(8'b00_00_00_00),
		  .width(4),
		  .ovt_hyst_trim(4'b0_0_0_0),
		  .ovt_needed(4'b0_0_0_0),
		  .ovt_slew_control(8'b00_00_00_00),
		  .input_buffer_sel(8'b00_00_00_00))
		TECLADO_IN
		 (.oe(tmpOE__TECLADO_IN_net),
		  .y({4'b0}),
		  .fb({Net_652, Net_651, Net_653, Net_650}),
		  .io({tmpIO_3__TECLADO_IN_net[3:0]}),
		  .siovref(tmpSIOVREF__TECLADO_IN_net),
		  .interrupt({Net_540}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__TECLADO_IN_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{4'b1111} : {4'b1111};

	wire [2:0] tmpOE__detectorFaseM1_net;
	wire [2:0] tmpFB_2__detectorFaseM1_net;
	wire [2:0] tmpIO_2__detectorFaseM1_net;
	electrical [0:0] tmpSIOVREF__detectorFaseM1_net;

	cy_psoc3_pins_v1_10
		#(.id("096d1ec8-c5ee-43f3-b880-620609ed21f9"),
		  .drive_mode(9'b011_011_011),
		  .ibuf_enabled(3'b1_1_1),
		  .init_dr_st(3'b0_0_0),
		  .input_clk_en(0),
		  .input_sync(3'b0_0_0),
		  .input_sync_mode(3'b0_0_0),
		  .intr_mode(6'b01_01_01),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(",,"),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(3'b0_0_0),
		  .oe_reset(0),
		  .oe_sync(3'b0_0_0),
		  .output_clk_en(0),
		  .output_clock_mode(3'b0_0_0),
		  .output_conn(3'b0_0_0),
		  .output_mode(3'b0_0_0),
		  .output_reset(0),
		  .output_sync(3'b0_0_0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(",,"),
		  .pin_mode("III"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(3'b1_1_1),
		  .sio_ibuf(""),
		  .sio_info(6'b00_00_00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(3'b0_0_0),
		  .spanning(0),
		  .use_annotation(3'b0_0_0),
		  .vtrip(6'b00_00_00),
		  .width(3),
		  .ovt_hyst_trim(3'b0_0_0),
		  .ovt_needed(3'b0_0_0),
		  .ovt_slew_control(6'b00_00_00),
		  .input_buffer_sel(6'b00_00_00))
		detectorFaseM1
		 (.oe(tmpOE__detectorFaseM1_net),
		  .y({3'b0}),
		  .fb({tmpFB_2__detectorFaseM1_net[2:0]}),
		  .io({tmpIO_2__detectorFaseM1_net[2:0]}),
		  .siovref(tmpSIOVREF__detectorFaseM1_net),
		  .interrupt({Net_216}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__detectorFaseM1_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{3'b111} : {3'b111};


	cy_isr_v1_0
		#(.int_type(2'b10))
		faseM1
		 (.int_signal(Net_216));


	wire [1:0] tmpOE__sentidodegiroM1_net;
	wire [1:0] tmpFB_1__sentidodegiroM1_net;
	wire [1:0] tmpIO_1__sentidodegiroM1_net;
	wire [0:0] tmpINTERRUPT_0__sentidodegiroM1_net;
	electrical [0:0] tmpSIOVREF__sentidodegiroM1_net;

	cy_psoc3_pins_v1_10
		#(.id("bba0d902-b6d8-425d-af49-b339be9c81d9"),
		  .drive_mode(6'b010_010),
		  .ibuf_enabled(2'b1_1),
		  .init_dr_st(2'b0_0),
		  .input_clk_en(0),
		  .input_sync(2'b1_1),
		  .input_sync_mode(2'b0_0),
		  .intr_mode(4'b00_00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(","),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(2'b0_0),
		  .oe_reset(0),
		  .oe_sync(2'b0_0),
		  .output_clk_en(0),
		  .output_clock_mode(2'b0_0),
		  .output_conn(2'b0_0),
		  .output_mode(2'b0_0),
		  .output_reset(0),
		  .output_sync(2'b0_0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(","),
		  .pin_mode("OO"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(2'b1_1),
		  .sio_ibuf(""),
		  .sio_info(4'b00_00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(2'b0_0),
		  .spanning(0),
		  .use_annotation(2'b0_0),
		  .vtrip(4'b10_10),
		  .width(2),
		  .ovt_hyst_trim(2'b0_0),
		  .ovt_needed(2'b0_0),
		  .ovt_slew_control(4'b00_00),
		  .input_buffer_sel(4'b00_00))
		sentidodegiroM1
		 (.oe(tmpOE__sentidodegiroM1_net),
		  .y({2'b0}),
		  .fb({tmpFB_1__sentidodegiroM1_net[1:0]}),
		  .io({tmpIO_1__sentidodegiroM1_net[1:0]}),
		  .siovref(tmpSIOVREF__sentidodegiroM1_net),
		  .interrupt({tmpINTERRUPT_0__sentidodegiroM1_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__sentidodegiroM1_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{2'b11} : {2'b11};


	cy_clock_v1_0
		#(.id("2870028d-608f-4611-a835-f5b11b3551d7"),
		  .source_clock_id(""),
		  .divisor(0),
		  .period("2000000000"),
		  .is_direct(0),
		  .is_digital(1))
		Clock_2
		 (.clock_out(Net_218));


	wire [1:0] tmpOE__Motor2_net;
	wire [1:0] tmpFB_1__Motor2_net;
	wire [1:0] tmpIO_1__Motor2_net;
	wire [0:0] tmpINTERRUPT_0__Motor2_net;
	electrical [0:0] tmpSIOVREF__Motor2_net;

	cy_psoc3_pins_v1_10
		#(.id("06254725-a80c-4ae7-8988-446556d73f45"),
		  .drive_mode(6'b111_111),
		  .ibuf_enabled(2'b1_1),
		  .init_dr_st(2'b0_0),
		  .input_clk_en(0),
		  .input_sync(2'b1_1),
		  .input_sync_mode(2'b0_0),
		  .intr_mode(4'b00_00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(","),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(2'b0_0),
		  .oe_reset(0),
		  .oe_sync(2'b0_0),
		  .output_clk_en(0),
		  .output_clock_mode(2'b0_0),
		  .output_conn(2'b0_0),
		  .output_mode(2'b0_0),
		  .output_reset(0),
		  .output_sync(2'b0_0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(","),
		  .pin_mode("OO"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(2'b1_1),
		  .sio_ibuf(""),
		  .sio_info(4'b00_00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(2'b0_0),
		  .spanning(0),
		  .use_annotation(2'b0_0),
		  .vtrip(4'b10_10),
		  .width(2),
		  .ovt_hyst_trim(2'b0_0),
		  .ovt_needed(2'b0_0),
		  .ovt_slew_control(4'b00_00),
		  .input_buffer_sel(4'b00_00))
		Motor2
		 (.oe(tmpOE__Motor2_net),
		  .y({2'b0}),
		  .fb({tmpFB_1__Motor2_net[1:0]}),
		  .io({tmpIO_1__Motor2_net[1:0]}),
		  .siovref(tmpSIOVREF__Motor2_net),
		  .interrupt({tmpINTERRUPT_0__Motor2_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__Motor2_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{2'b11} : {2'b11};

	wire [1:0] tmpOE__Motor1_net;
	wire [1:0] tmpFB_1__Motor1_net;
	wire [1:0] tmpIO_1__Motor1_net;
	wire [0:0] tmpINTERRUPT_0__Motor1_net;
	electrical [0:0] tmpSIOVREF__Motor1_net;

	cy_psoc3_pins_v1_10
		#(.id("9bae00a4-9858-4558-a111-5bc3dc198ee5"),
		  .drive_mode(6'b111_111),
		  .ibuf_enabled(2'b1_1),
		  .init_dr_st(2'b0_0),
		  .input_clk_en(0),
		  .input_sync(2'b1_1),
		  .input_sync_mode(2'b0_0),
		  .intr_mode(4'b00_00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(","),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(2'b0_0),
		  .oe_reset(0),
		  .oe_sync(2'b0_0),
		  .output_clk_en(0),
		  .output_clock_mode(2'b0_0),
		  .output_conn(2'b0_0),
		  .output_mode(2'b0_0),
		  .output_reset(0),
		  .output_sync(2'b0_0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(","),
		  .pin_mode("OO"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(2'b1_1),
		  .sio_ibuf(""),
		  .sio_info(4'b00_00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(2'b0_0),
		  .spanning(0),
		  .use_annotation(2'b0_0),
		  .vtrip(4'b10_10),
		  .width(2),
		  .ovt_hyst_trim(2'b0_0),
		  .ovt_needed(2'b0_0),
		  .ovt_slew_control(4'b00_00),
		  .input_buffer_sel(4'b00_00))
		Motor1
		 (.oe(tmpOE__Motor1_net),
		  .y({2'b0}),
		  .fb({tmpFB_1__Motor1_net[1:0]}),
		  .io({tmpIO_1__Motor1_net[1:0]}),
		  .siovref(tmpSIOVREF__Motor1_net),
		  .interrupt({tmpINTERRUPT_0__Motor1_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__Motor1_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{2'b11} : {2'b11};

    cy_annotation_universal_v1_0 GND_2 (
        .connect({
            Net_685
        })
    );
    defparam GND_2.comp_name = "Gnd_v1_0";
    defparam GND_2.port_names = "T1";
    defparam GND_2.width = 1;

    cy_annotation_universal_v1_0 D_1 (
        .connect({
            Net_147,
            Net_685
        })
    );
    defparam D_1.comp_name = "LED_v1_0";
    defparam D_1.port_names = "A, K";
    defparam D_1.width = 2;

    cy_annotation_universal_v1_0 R_2 (
        .connect({
            Net_938,
            Net_147
        })
    );
    defparam R_2.comp_name = "Resistor_v1_0";
    defparam R_2.port_names = "T1, T2";
    defparam R_2.width = 2;

	wire [1:0] tmpOE__M1_net;
	wire [1:0] tmpFB_1__M1_net;
	wire [1:0] tmpIO_1__M1_net;
	wire [0:0] tmpINTERRUPT_0__M1_net;
	electrical [0:0] tmpSIOVREF__M1_net;
	electrical [0:0] tmpEXTERNAL_1__M1_net;

	cy_psoc3_pins_v1_10
		#(.id("77715107-f8d5-47e5-a629-0fb83101ac6b"),
		  .drive_mode(6'b111_111),
		  .ibuf_enabled(2'b1_1),
		  .init_dr_st(2'b0_0),
		  .input_clk_en(0),
		  .input_sync(2'b1_1),
		  .input_sync_mode(2'b0_0),
		  .intr_mode(4'b00_00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(","),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(2'b0_0),
		  .oe_reset(0),
		  .oe_sync(2'b0_0),
		  .output_clk_en(0),
		  .output_clock_mode(2'b0_0),
		  .output_conn(2'b1_0),
		  .output_mode(2'b0_0),
		  .output_reset(0),
		  .output_sync(2'b0_0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(","),
		  .pin_mode("OO"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(2'b1_1),
		  .sio_ibuf(""),
		  .sio_info(4'b00_00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(2'b0_0),
		  .spanning(0),
		  .use_annotation(2'b1_0),
		  .vtrip(4'b10_10),
		  .width(2),
		  .ovt_hyst_trim(2'b0_0),
		  .ovt_needed(2'b0_0),
		  .ovt_slew_control(4'b00_00),
		  .input_buffer_sel(4'b00_00))
		M1
		 (.oe(tmpOE__M1_net),
		  .y({1'b0, Net_122}),
		  .fb({tmpFB_1__M1_net[1:0]}),
		  .io({tmpIO_1__M1_net[1:0]}),
		  .siovref(tmpSIOVREF__M1_net),
		  .interrupt({tmpINTERRUPT_0__M1_net[0:0]}),
		  .annotation({tmpEXTERNAL_1__M1_net[0:0], Net_938}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__M1_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{2'b11} : {2'b11};

    assign Net_215 = 1'h0;


	cy_clock_v1_0
		#(.id("fdb22d0e-4234-4bf3-b79c-dfe7a87e62ac"),
		  .source_clock_id(""),
		  .divisor(0),
		  .period("83333333.3333333"),
		  .is_direct(0),
		  .is_digital(1))
		Clock_3
		 (.clock_out(Net_274));


    PWM_v3_30_0 PWM1 (
        .reset(Net_215),
        .clock(Net_274),
        .tc(Net_1017),
        .pwm1(Net_1018),
        .pwm2(Net_1019),
        .interrupt(Net_1020),
        .capture(1'b0),
        .kill(1'b1),
        .enable(1'b1),
        .trigger(1'b0),
        .cmp_sel(1'b0),
        .pwm(Net_122),
        .ph1(Net_1026),
        .ph2(Net_1027));
    defparam PWM1.Resolution = 16;

    assign Net_419 = 1'h0;


	cy_clock_v1_0
		#(.id("6fd3ce7a-930b-4e25-8b37-256a7f75060c"),
		  .source_clock_id(""),
		  .divisor(0),
		  .period("83333333.3333333"),
		  .is_direct(0),
		  .is_digital(1))
		Clock_4
		 (.clock_out(Net_420));


    PWM_v3_30_1 PWM2 (
        .reset(Net_419),
        .clock(Net_420),
        .tc(Net_496),
        .pwm1(Net_497),
        .pwm2(Net_498),
        .interrupt(Net_499),
        .capture(1'b0),
        .kill(1'b1),
        .enable(1'b1),
        .trigger(1'b0),
        .cmp_sel(1'b0),
        .pwm(Net_430),
        .ph1(Net_506),
        .ph2(Net_507));
    defparam PWM2.Resolution = 16;

	wire [1:0] tmpOE__M2_net;
	wire [1:0] tmpFB_1__M2_net;
	wire [1:0] tmpIO_1__M2_net;
	wire [0:0] tmpINTERRUPT_0__M2_net;
	electrical [0:0] tmpSIOVREF__M2_net;
	electrical [0:0] tmpEXTERNAL_1__M2_net;

	cy_psoc3_pins_v1_10
		#(.id("7c79fef2-613d-4611-a516-1f0e0c4c4fdc"),
		  .drive_mode(6'b111_111),
		  .ibuf_enabled(2'b1_1),
		  .init_dr_st(2'b0_0),
		  .input_clk_en(0),
		  .input_sync(2'b1_1),
		  .input_sync_mode(2'b0_0),
		  .intr_mode(4'b00_00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(","),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(2'b0_0),
		  .oe_reset(0),
		  .oe_sync(2'b0_0),
		  .output_clk_en(0),
		  .output_clock_mode(2'b0_0),
		  .output_conn(2'b1_0),
		  .output_mode(2'b0_0),
		  .output_reset(0),
		  .output_sync(2'b0_0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(","),
		  .pin_mode("OO"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(2'b1_1),
		  .sio_ibuf(""),
		  .sio_info(4'b00_00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(2'b0_0),
		  .spanning(0),
		  .use_annotation(2'b1_0),
		  .vtrip(4'b10_10),
		  .width(2),
		  .ovt_hyst_trim(2'b0_0),
		  .ovt_needed(2'b0_0),
		  .ovt_slew_control(4'b00_00),
		  .input_buffer_sel(4'b00_00))
		M2
		 (.oe(tmpOE__M2_net),
		  .y({1'b0, Net_430}),
		  .fb({tmpFB_1__M2_net[1:0]}),
		  .io({tmpIO_1__M2_net[1:0]}),
		  .siovref(tmpSIOVREF__M2_net),
		  .interrupt({tmpINTERRUPT_0__M2_net[0:0]}),
		  .annotation({tmpEXTERNAL_1__M2_net[0:0], Net_434}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__M2_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{2'b11} : {2'b11};

    cy_annotation_universal_v1_0 R_1 (
        .connect({
            Net_434,
            Net_435
        })
    );
    defparam R_1.comp_name = "Resistor_v1_0";
    defparam R_1.port_names = "T1, T2";
    defparam R_1.width = 2;

    cy_annotation_universal_v1_0 D_2 (
        .connect({
            Net_435,
            Net_511
        })
    );
    defparam D_2.comp_name = "LED_v1_0";
    defparam D_2.port_names = "A, K";
    defparam D_2.width = 2;

    cy_annotation_universal_v1_0 GND_1 (
        .connect({
            Net_511
        })
    );
    defparam GND_1.comp_name = "Gnd_v1_0";
    defparam GND_1.port_names = "T1";
    defparam GND_1.width = 1;

	wire [2:0] tmpOE__detectorFaseM2_net;
	wire [2:0] tmpFB_2__detectorFaseM2_net;
	wire [2:0] tmpIO_2__detectorFaseM2_net;
	electrical [0:0] tmpSIOVREF__detectorFaseM2_net;

	cy_psoc3_pins_v1_10
		#(.id("156ccbd8-4ef4-4cdf-80fd-f4420d63f572"),
		  .drive_mode(9'b011_011_011),
		  .ibuf_enabled(3'b1_1_1),
		  .init_dr_st(3'b0_0_0),
		  .input_clk_en(0),
		  .input_sync(3'b0_0_0),
		  .input_sync_mode(3'b0_0_0),
		  .intr_mode(6'b01_01_01),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(",,"),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(3'b0_0_0),
		  .oe_reset(0),
		  .oe_sync(3'b0_0_0),
		  .output_clk_en(0),
		  .output_clock_mode(3'b0_0_0),
		  .output_conn(3'b0_0_0),
		  .output_mode(3'b0_0_0),
		  .output_reset(0),
		  .output_sync(3'b0_0_0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(",,"),
		  .pin_mode("III"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(3'b1_1_1),
		  .sio_ibuf(""),
		  .sio_info(6'b00_00_00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(3'b0_0_0),
		  .spanning(0),
		  .use_annotation(3'b0_0_0),
		  .vtrip(6'b00_00_00),
		  .width(3),
		  .ovt_hyst_trim(3'b0_0_0),
		  .ovt_needed(3'b0_0_0),
		  .ovt_slew_control(6'b00_00_00),
		  .input_buffer_sel(6'b00_00_00))
		detectorFaseM2
		 (.oe(tmpOE__detectorFaseM2_net),
		  .y({3'b0}),
		  .fb({tmpFB_2__detectorFaseM2_net[2:0]}),
		  .io({tmpIO_2__detectorFaseM2_net[2:0]}),
		  .siovref(tmpSIOVREF__detectorFaseM2_net),
		  .interrupt({Net_509}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__detectorFaseM2_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{3'b111} : {3'b111};


	cy_isr_v1_0
		#(.int_type(2'b10))
		faseM2
		 (.int_signal(Net_509));


	wire [1:0] tmpOE__sentidodegiroM2_net;
	wire [1:0] tmpFB_1__sentidodegiroM2_net;
	wire [1:0] tmpIO_1__sentidodegiroM2_net;
	wire [0:0] tmpINTERRUPT_0__sentidodegiroM2_net;
	electrical [0:0] tmpSIOVREF__sentidodegiroM2_net;

	cy_psoc3_pins_v1_10
		#(.id("ecb31de9-3e19-48fb-88a7-1afd89ce4e6f"),
		  .drive_mode(6'b010_010),
		  .ibuf_enabled(2'b1_1),
		  .init_dr_st(2'b0_0),
		  .input_clk_en(0),
		  .input_sync(2'b1_1),
		  .input_sync_mode(2'b0_0),
		  .intr_mode(4'b00_00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(","),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(2'b0_0),
		  .oe_reset(0),
		  .oe_sync(2'b0_0),
		  .output_clk_en(0),
		  .output_clock_mode(2'b0_0),
		  .output_conn(2'b0_0),
		  .output_mode(2'b0_0),
		  .output_reset(0),
		  .output_sync(2'b0_0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(","),
		  .pin_mode("OO"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(2'b1_1),
		  .sio_ibuf(""),
		  .sio_info(4'b00_00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(2'b0_0),
		  .spanning(0),
		  .use_annotation(2'b0_0),
		  .vtrip(4'b10_10),
		  .width(2),
		  .ovt_hyst_trim(2'b0_0),
		  .ovt_needed(2'b0_0),
		  .ovt_slew_control(4'b00_00),
		  .input_buffer_sel(4'b00_00))
		sentidodegiroM2
		 (.oe(tmpOE__sentidodegiroM2_net),
		  .y({2'b0}),
		  .fb({tmpFB_1__sentidodegiroM2_net[1:0]}),
		  .io({tmpIO_1__sentidodegiroM2_net[1:0]}),
		  .siovref(tmpSIOVREF__sentidodegiroM2_net),
		  .interrupt({tmpINTERRUPT_0__sentidodegiroM2_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__sentidodegiroM2_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{2'b11} : {2'b11};



endmodule

