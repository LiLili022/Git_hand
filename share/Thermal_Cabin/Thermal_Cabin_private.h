/*
 * File: Thermal_Cabin_private.h
 *
 * Code generated for Simulink model 'Thermal_Cabin'.
 *
 * Model version                  : 5.2430
 * Simulink Coder version         : 9.6 (R2021b) 14-May-2021
 * C/C++ source code generated on : Thu Jul 25 13:37:31 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-A
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Thermal_Cabin_private_h_
#define RTW_HEADER_Thermal_Cabin_private_h_
#include "rtwtypes.h"
#include "Thermal_Cabin.h"
#ifndef UCHAR_MAX
#include <limits.h>
#endif

// #if ( UCHAR_MAX != (0xFFU) ) || ( SCHAR_MAX != (0x7F) )
// #error Code was generated for compiler with different sized uchar/char. \
// Consider adjusting Test hardware word size settings on the \
// Hardware Implementation pane to match your compiler word sizes as \
// defined in limits.h of the compiler. Alternatively, you can \
// select the Test hardware is the same as production hardware option and \
// select the Enable portable word sizes option on the Code Generation > \
// Verification pane for ERT based targets, which will disable the \
// preprocessor word size checks.
// #endif

// #if ( USHRT_MAX != (0xFFFFU) ) || ( SHRT_MAX != (0x7FFF) )
// #error Code was generated for compiler with different sized ushort/short. \
// Consider adjusting Test hardware word size settings on the \
// Hardware Implementation pane to match your compiler word sizes as \
// defined in limits.h of the compiler. Alternatively, you can \
// select the Test hardware is the same as production hardware option and \
// select the Enable portable word sizes option on the Code Generation > \
// Verification pane for ERT based targets, which will disable the \
// preprocessor word size checks.
// #endif

// #if ( UINT_MAX != (0xFFFFFFFFU) ) || ( INT_MAX != (0x7FFFFFFF) )
// #error Code was generated for compiler with different sized uint/int. \
// Consider adjusting Test hardware word size settings on the \
// Hardware Implementation pane to match your compiler word sizes as \
// defined in limits.h of the compiler. Alternatively, you can \
// select the Test hardware is the same as production hardware option and \
// select the Enable portable word sizes option on the Code Generation > \
// Verification pane for ERT based targets, which will disable the \
// preprocessor word size checks.
// #endif

// #if ( ULONG_MAX != (0xFFFFFFFFU) ) || ( LONG_MAX != (0x7FFFFFFF) )
// #error Code was generated for compiler with different sized ulong/long. \
// Consider adjusting Test hardware word size settings on the \
// Hardware Implementation pane to match your compiler word sizes as \
// defined in limits.h of the compiler. Alternatively, you can \
// select the Test hardware is the same as production hardware option and \
// select the Enable portable word sizes option on the Code Generation > \
// Verification pane for ERT based targets, which will disable the \
// preprocessor word size checks.
// #endif

void LookUpEven_real32_T_real32_T(real32_T *pY, const real32_T *pYData, real32_T
  u, real32_T valueLo, uint32_T iHi, real32_T uSpacing);
void BINARYSEARCH_real32_T(uint32_T *piLeft, uint32_T *piRght, real32_T u, const
  real32_T *pData, uint32_T iHi);
void LookUp_real32_T_real32_T(real32_T *pY, const real32_T *pYData, real32_T u,
  const real32_T *pUData, uint32_T iHi);
void BINARYSEARCH_real32_Treal_T(uint32_T *piLeft, uint32_T *piRght, real32_T u,
  const real_T *pData, uint32_T iHi);
void LookUp_real32_T_real32_Treal_T(real32_T *pY, const real32_T *pYData,
  real32_T u, const real_T *pUData, uint32_T iHi);
extern real32_T look1_iflf_binlcpw(real32_T u0, const real32_T bp0[], const
  real32_T table[], uint32_T maxIndex);
extern uint32_T binsearch_u32f(real32_T u, const real32_T bp[], uint32_T
  startIndex, uint32_T maxIndex);
extern real_T look1_ifId_binlagpw(real32_T u0, const real32_T bp0[], const
  real32_T table[], uint32_T maxIndex);
extern real32_T look1_iflf_binlcapw(real32_T u0, const real32_T bp0[], const
  real32_T table[], uint32_T maxIndex);
extern real32_T look1_iu8bflftf_binlcapw(uint8_T u0, const real32_T bp0[], const
  real32_T table[], uint32_T maxIndex);
extern real32_T look1_bftf_binlcapw(real_T u0, const real32_T bp0[], const
  real32_T table[], uint32_T maxIndex);
extern real32_T look2_iu8lftf_binlcapw(uint8_T u0, uint8_T u1, const uint8_T
  bp0[], const uint8_T bp1[], const real32_T table[], const uint32_T maxIndex[],
  uint32_T stride);
extern real_T look1_ifId_binlcapw(real32_T u0, const real32_T bp0[], const
  real32_T table[], uint32_T maxIndex);
extern real32_T look1_iflf_pbinlcapw(real32_T u0, const real32_T bp0[], const
  real32_T table[], uint32_T prevIndex[], uint32_T maxIndex);
extern real32_T look1_iu8lftf_binlcapw(uint8_T u0, const uint8_T bp0[], const
  real32_T table[], uint32_T maxIndex);
extern real32_T look1_iu8lftf_binlagpw(uint8_T u0, const uint8_T bp0[], const
  real32_T table[], uint32_T maxIndex);
extern real32_T look2_iflf_binlcpw(real32_T u0, real32_T u1, const real32_T bp0[],
  const real32_T bp1[], const real32_T table[], const uint32_T maxIndex[],
  uint32_T stride);
extern uint16_T look2_iflftu16Dfdf_binlcpw(real32_T u0, real32_T u1, const
  real32_T bp0[], const real32_T bp1[], const uint16_T table[], const uint32_T
  maxIndex[], uint32_T stride);
extern uint8_T look1_iu16lu16n16tu8_binlcase(uint16_T u0, const uint16_T bp0[],
  const uint8_T table[], uint32_T maxIndex);
extern real32_T look1_iflf_binlxpw(real32_T u0, const real32_T bp0[], const
  real32_T table[], uint32_T maxIndex);
extern uint8_T look1_iflftu8Df_binlcpw(real32_T u0, const real32_T bp0[], const
  uint8_T table[], uint32_T maxIndex);
extern real32_T look1_iu8lftf_binlcpw(uint8_T u0, const uint8_T bp0[], const
  real32_T table[], uint32_T maxIndex);
extern uint16_T look1_iflftu16Df_binlcpw(real32_T u0, const real32_T bp0[],
  const uint16_T table[], uint32_T maxIndex);
extern uint8_T look1_ifbu8lftu8Df_binlcpw(real32_T u0, const uint8_T bp0[],
  const uint8_T table[], uint32_T maxIndex);
extern uint8_T look1_iu8lu32n24_binlcse(uint8_T u0, const uint8_T bp0[], const
  uint8_T table[], uint32_T maxIndex);
extern real32_T look1_ifbu8lf_binlcpw(real32_T u0, const uint8_T bp0[], const
  real32_T table[], uint32_T maxIndex);
extern uint8_T look2_ifbs16flftu8Dfdf_binlcpw(real32_T u0, real32_T u1, const
  int16_T bp0[], const real32_T bp1[], const uint8_T table[], const uint32_T
  maxIndex[], uint32_T stride);
extern uint8_T look2_iflftu8Dfdf_binlcpw(real32_T u0, real32_T u1, const
  real32_T bp0[], const real32_T bp1[], const uint8_T table[], const uint32_T
  maxIndex[], uint32_T stride);
extern real32_T look2_iflf_binlxpw(real32_T u0, real32_T u1, const real32_T bp0[],
  const real32_T bp1[], const real32_T table[], const uint32_T maxIndex[],
  uint32_T stride);
extern real32_T look2_iu8flftf_binlcapw(uint8_T u0, real32_T u1, const uint8_T
  bp0[], const real32_T bp1[], const real32_T table[], const uint32_T maxIndex[],
  uint32_T stride);
extern uint32_T plook_u32f_binckan(real32_T u, const real32_T bp[], uint32_T
  maxIndex);
extern int32_T div_s32_floor(int32_T numerator, int32_T denominator);
extern void mul_wide_s32(int32_T in0, int32_T in1, uint32_T *ptrOutBitsHi,
  uint32_T *ptrOutBitsLo);
extern int32_T mul_s32_loSR_zero(int32_T a, int32_T b, uint32_T aShift);
extern int32_T mul_s32_loSR(int32_T a, int32_T b, uint32_T aShift);
extern void Thermal_Cabin_Chart10_Init(boolean_T *rty_VeACTU_na_StepFbReady);
extern void Thermal_Cabin_Chart10(boolean_T rtu_VeCTCM_na_ASCType, uint8_T
  rtu_VeCTCM_na_OperSts, boolean_T *rty_VeACTU_na_StepFbReady,
  DW_Chart10_Thermal_Cabin_T *localDW);
extern void Thermal_Cabin_Chart11_Init(boolean_T *rty_VeACTU_Stp_PreSelfStudy);
extern void Thermal_Cabin_Chart11(boolean_T rtu_VeCTCM_na_ASCType, uint8_T
  rtu_VeCTCM_na_OperSts, boolean_T rtu_VeCTCM_na_XxxCfgActv, uint16_T
  rtu_VeACTU_Stp_XxxStepRange, real_T rtu_KeACTU_Stp_XxxMaxRng, real_T
  rtu_KeACTU_Stp_XxxMinRng, boolean_T *rty_VeACTU_Stp_PreSelfStudy,
  DW_Chart11_Thermal_Cabin_T *localDW);
extern void Thermal_Cabin_Chart17_Init(boolean_T *rty_VeACTU_na_StepRstDone);
extern void Thermal_Cabin_Chart17(boolean_T rtu_VeCTCM_na_ASCType, boolean_T
  rtu_VeCTCM_na_XxxCfgActv, real32_T rtu_VeXXXX_na_XxxStepRstSts, uint8_T
  rtu_VeCTCM_na_OperSts, boolean_T *rty_VeACTU_na_StepRstDone,
  DW_Chart17_Thermal_Cabin_T *localDW);
extern void Thermal_Cabin_Chart23_Init(boolean_T *rty_VeACTU_na_DCFbReady);
extern void Thermal_Cabin_Chart23(boolean_T rtu_VeCTCM_na_ASCType, uint8_T
  rtu_VeCTCM_na_OperSts, boolean_T rtu_VeCTCM_na_XxxCfgActv, boolean_T
  *rty_VeACTU_na_DCFbReady, DW_Chart23_Thermal_Cabin_T *localDW);
extern void Thermal_Cabin_Chart30_Init(boolean_T *rty_VeACTU_na_DcRstDone);
extern void Thermal_Cabin_Chart30(boolean_T rtu_VeCTCM_na_ASCType, boolean_T
  rtu_VeCTCM_na_XxxCfgActv, real_T rtu_VeXXXX_na_XxxDcHelSts, uint8_T
  rtu_VeCTCM_na_OperSts, boolean_T *rty_VeACTU_na_DcRstDone,
  DW_Chart30_Thermal_Cabin_T *localDW);
extern void Thermal_Cabin_Chart37_Init(boolean_T *rty_VeACTU_Dc_PreSelfStudy);
extern void Thermal_Cabin_Chart37(boolean_T rtu_VeCTCM_na_ASCType, uint8_T
  rtu_VeCTCM_na_OperSts, boolean_T rtu_VeCTCM_na_XxxCfgActv, real32_T
  rtu_VeACTU_U_XxxDcRange, real_T rtu_KeACTU_U_XxxMaxRng, real_T
  rtu_KeACTU_U_XxxMinRng, boolean_T *rty_VeACTU_Dc_PreSelfStudy,
  DW_Chart37_Thermal_Cabin_T *localDW);
extern void Thermal_Cabin_EnabledSubsystem1_Init(uint8_T
  *rty_VeACTU_na_XxxAssignFlag);
extern uint8_T Thermal_Cabin_EnabledSubsystem1(boolean_T
  rtu_VeCTCM_na_XxxCfgActv, real_T rtu_VeCSCC_na_xxxDcHelSts,
  DW_EnabledSubsystem1_Thermal_Cabin_T *localDW);
extern void Thermal_Cabin_EnabledSubsystem10(boolean_T rtu_VeCTCM_na_ASCType,
  real32_T rtu_VeXxxx_na_XxxStepPosnFb, uint16_T rtu_VeACTU_na_XxxStepRange,
  real32_T rtu_VeCADC_na_XxxPosnReq, uint8_T rtu_VeACTU_na_XxxAssignFlag,
  real32_T rtu_VeXxxx_na_XxxVltgPosnFb, real32_T rtu_VeACTU_U_XxxDCRange,
  boolean_T rtu_VeACTU_na_FbMode, real_T rtu_KeACTU_Stp_TolrStep, real32_T
  rtu_KeACTU_U_XxxMinRange, real32_T *rty_VeACTU_na_XxxPosnFb, boolean_T
  *rty_VeACTU_na_XxxPosnFbQf, boolean_T *rty_VeACTU_na_XxxStsFb);
extern void Thermal_Cabin_EnabledSubsystem16_Init(void);
extern void Thermal_Cabin_EnabledSubsystem16(boolean_T rtu_VeCTCM_na_XxxCfgActv,
  boolean_T rtu_VeCTCM_na_ASCType, uint8_T rtu_VeACTU_na_AssignMode, uint16_T
  rtu_VeACTU_Stp_XxxStepRange, real32_T rtu_VeXXXX_na_XxxStepRstSts, real_T
  rtu_KeACTU_Stp_XxxMinRng, real_T rtu_KeACTU_Stp_XxxMaxRng, real32_T
  rtu_VeACTU_U_xxxDcRange, real_T rtu_VeCSCC_na_xxxDcHelSts, real_T
  rtu_KeACTU_U_XxxMinRng, real_T rtu_KeACTU_U_XxxMaxRng, uint8_T
  *rty_VeACTU_na_XxxAssignFlag, DW_EnabledSubsystem16_Thermal_Cabin_T *localDW);
extern void Thermal_Cabin_EnabledSubsystem(real32_T rtu_VeACTU_XxxPosnFb,
  uint16_T rtu_VeACTU_na_XxxStepRange, boolean_T rtu_VeCTCM_na_ASCType, real32_T
  *rty_VeACTU_na_XxxStepPosnReq);
extern void Thermal_Cabin_DC_Init(uint8_T *rty_VeACTU_na_XxxDCBorder, boolean_T *
  rty_VeACTU_na_XxxDcType, real32_T *rty_VeACTU_na_XxxVltgPosnReq);
extern void Thermal_Cabin_DC(real_T rtu_KeACTU_U_TolrVltg, uint8_T
  rtu_VeACTU_na_XxxAssignFlag, real32_T rtu_VeACTU_na_XxxDCRange, real32_T
  rtu_VeACTU_na_XxxPosnFb, real32_T rtu_VeCADC_na_XxxPosnReq, boolean_T
  rtu_VeCADC_na_XxxStopReq, real32_T rtu_VeACTU_U_FdvMinPosn, uint8_T
  *rty_VeACTU_na_XxxDCBorder, boolean_T *rty_VeACTU_na_XxxDcType, real32_T
  *rty_VeACTU_na_XxxVltgPosnReq, DW_DC_Thermal_Cabin_T *localDW);
extern void Thermal_Cabin_EnabledSubsystem1_p_Init(boolean_T
  *rty_VeACTU_na_XxxStepType, uint8_T *rty_VeACTU_na_XxxStepBorder, real32_T
  *rty_VeACTU_na_XxxStepPosnReq, real32_T *rty_VeACTU_na_XxxVltgPosnReq, uint8_T
  *rty_VeACTU_na_XxxDCBorder, boolean_T *rty_VeACTU_na_XxxDcType);
extern void Thermal_Cabin_EnabledSubsystem1_p(uint8_T
  rtu_VeACTU_na_XxxAssignFlag, boolean_T rtu_VeCADC_na_XxxStopReq, real32_T
  rtu_VeACTU_na_XxxPosnFb, uint16_T rtu_VeACTU_na_XxxStepRange, real32_T
  rtu_VeCADC_na_XxxPosnReq, real32_T rtu_VeACTU_na_XxxDCRange, real_T
  rtu_KeACTU_Stp_TolrStep, real_T rtu_KeACTU_U_TolrVltg, real32_T
  rtu_VeACTU_U_FdvMinPosn, boolean_T *rty_VeACTU_na_XxxStepType, uint8_T
  *rty_VeACTU_na_XxxStepBorder, real32_T *rty_VeACTU_na_XxxStepPosnReq, real32_T
  *rty_VeACTU_na_XxxVltgPosnReq, uint8_T *rty_VeACTU_na_XxxDCBorder, boolean_T
  *rty_VeACTU_na_XxxDcType, DW_EnabledSubsystem1_Thermal_Cabin_m_T *localDW);
extern void Thermal_Cabin_EnabledSubsystem3_Init(real32_T
  *rty_VeACTU_na_XxxNomVltgPosnReq, B_EnabledSubsystem3_Thermal_Cabin_T *localB);
extern void Thermal_Cabin_EnabledSubsystem3(boolean_T rtu_VeCTCM_na_ASCType,
  real32_T rtu_VeXxxx_U_XxxVltgPosnFb, real32_T rtu_VeACTU_XxxPosnFb, uint16_T
  rtu_VeACTU_na_XxxStepRange, uint8_T rtu_VeACTU_na_XxxAssignFlag, boolean_T
  rtu_VeCADC_na_XxxStopReq, real32_T rtu_VeCADC_na_XxxPosnReq, real32_T
  rtu_VeACTU_na_XxxDCRange, boolean_T rtu_VeACTU_na_ReqMode, real_T
  rtu_KeACTU_Stp_TolrStep, real_T rtu_KeACTU_U_TolrVltg, real32_T
  rtu_VeACTU_U_FdvMinPosn, real32_T *rty_VeACTU_na_XxxNomVltgPosnReq, uint16_T
  *rty_VeACTU_na_XxxStepPosnReq, boolean_T *rty_VeACTU_na_XxxStepType, uint8_T
  *rty_VeACTU_na_XxxStepBorder, uint8_T *rty_VeACTU_na_XxxDCBorder, boolean_T
  *rty_VeACTU_na_XxxDcType, B_EnabledSubsystem3_Thermal_Cabin_T *localB, const
  ConstB_EnabledSubsystem3_Thermal_Cabin_T *localC,
  DW_EnabledSubsystem3_Thermal_Cabin_T *localDW);
extern void Thermal_Cabin_Chart_Init(uint16_T *rty_VeACTU_na_XxxStepRange);
extern void Thermal_Cabin_Chart(real_T rtu_KeACTU_Stp_XxxMaxRng, uint16_T
  *rty_VeACTU_na_XxxStepRange, DW_Chart_Thermal_Cabin_T *localDW);
extern void Thermal_Cabin_Chart_d_Init(uint16_T *rty_VeACTU_na_XxxStepRange);
extern void Thermal_Cabin_Chart_g(uint8_T rtu_VeACTU_na_XxxAssignFlag, real32_T
  rtu_VeXxxx_Stp_XxxStepRange, real_T rtu_KeACTU_Stp_XxxMaxRng, real_T
  rtu_KeACTU_Stp_XxxMinRng, uint16_T *rty_VeACTU_na_XxxStepRange,
  DW_Chart_Thermal_Cabin_f_T *localDW);
extern void Thermal_Cabin_Chart1_Init(boolean_T *rty_VeACTU_U_XxxXxxRng);
extern void Thermal_Cabin_Chart1(boolean_T rtu_NeedUpdateDCRng, boolean_T
  *rty_VeACTU_U_XxxXxxRng, DW_Chart1_Thermal_Cabin_T *localDW);
extern void Thermal_Cabin_Chart16_Init(real32_T *rty_VeACTU_U_XxxMaxRng,
  real32_T *rty_VeACTU_U_XxxMinRng, real32_T *rty_VeACTU_na_XxxVltgPosnReq,
  real_T *rty_VeACTU_na_DcSelfStudySts);
extern void Thermal_Cabin_Chart16(real32_T rtu_VeXxxx_na_XxxPosnFb, real_T
  rtu_KeACTU_U_MinVltgPosn, real_T rtu_KeACTU_U_MaxVltgPosn, boolean_T
  rtu_NeedUpdateDCRng, real32_T *rty_VeACTU_U_XxxMaxRng, real32_T
  *rty_VeACTU_U_XxxMinRng, real32_T *rty_VeACTU_na_XxxVltgPosnReq, real_T
  *rty_VeACTU_na_DcSelfStudySts, DW_Chart16_Thermal_Cabin_T *localDW);
extern void Thermal_Cabin_EnabledSubsystem_o_Init
  (B_EnabledSubsystem_Thermal_Cabin_b_T *localB);
extern void Thermal_Cabin_EnabledSubsystem_d(uint8_T rtu_VeACTU_na_XxxAssignFlag,
  real32_T rtu_VeXxxx_Stp_XxxStepRange, real32_T rtu_VeACTU_U_xxxMaxRng,
  real32_T rtu_VeACTU_U_xxxMinRng, boolean_T rtu_VeCTCM_na_ASCType, real_T
  rtu_KeACTU_Stp_XxxMaxRng, real_T rtu_KeACTU_Stp_XxxMinRng, boolean_T
  rtu_VeACTU_na_DcSelfStudySts, uint16_T *rty_VeACTU_na_XxxStepRange, real32_T
  *rty_VeACTU_U_XxxDCRange, B_EnabledSubsystem_Thermal_Cabin_b_T *localB,
  DW_EnabledSubsystem_Thermal_Cabin_h_T *localDW);
extern void Thermal_Cabin_EnabledSubsystem_n_Init
  (B_EnabledSubsystem_Thermal_Cabin_a_T *localB);
extern void Thermal_Cabin_EnabledSubsystem_i(uint8_T rtu_VeACTU_na_XxxAssignFlag,
  real32_T rtu_VeXxxx_Stp_XxxStepRange, real32_T rtu_VeACTU_U_xxxMaxRng,
  real32_T rtu_VeACTU_U_xxxMinRng, boolean_T rtu_VeCTCM_na_ASCType, real_T
  rtu_KeACTU_Stp_XxxMaxRng, real_T rtu_KeACTU_Stp_XxxMinRng, boolean_T
  rtu_VeACTU_na_DcSelfStudySts, uint16_T *rty_VeACTU_na_XxxStepRange, real32_T
  *rty_VeACTU_U_XxxDCRange, B_EnabledSubsystem_Thermal_Cabin_a_T *localB,
  DW_EnabledSubsystem_Thermal_Cabin_n_T *localDW);
extern void Thermal_Cabin_EnabledSubsystem1_l(boolean_T rtu_Enable, real32_T
  rtu_VeCAQC_na_AccAirdModeReq, real32_T *rty_VeCADC_pct_FpvPosnBase);
extern void Thermal_Cabin_EnabledSubsystem1_g(boolean_T rtu_Enable, real32_T
  rtu_VeCAQC_na_AccAirdModeReq, real32_T *rty_VeCADC_pct_FpfPosnBase);
extern void Thermal_Cabin_Subsystem1(real32_T rtu_In1, real32_T rtu_In2,
  real32_T *rty_Out);
extern void Thermal_Cabin_T_IniSnr_Mtr_12(const real32_T
  rtu_VePCAT_T_InitExtrTemp18[18], const real32_T rtu_VePCAT_T_InitIntrTemp18[18],
  real32_T rty_VePCAT_T_InitMidTemp12[12]);
extern void Thermal_Cabin_SunIntCalcu(const real32_T
  rtu_VePCAT_na_SunDitriFctr18[18], real32_T rtu_VeGMZS_na_AzimOut, real32_T
  rtu_VeGMZS_na_HghtAglOut, real32_T rtu_VeCSCC_pwr_SloarAvgPwr, const real32_T
  rtu_VePCAT_na_ShellAzi18[18], const real32_T rtu_VePCAT_na_ShellEle18[18],
  const real32_T rtu_VePCAT_na_SunabsFctr18[18], const real32_T
  rtu_VePCAT_na_SunabsFctrExtr18[18], const real32_T rtu_shell_SunTransFctr_6[6],
  const real32_T rtu_VePCAT_na_ShellArea18[18], int32_T
  rty_VePCAT_pwr_IntrAbsSun6[6], int32_T rty_VePCAT_pwr_ExtrAbsSun18[18],
  int32_T rty_VePCAT_pwr_SunTrans2intr18[18], const
  ConstB_SunIntCalcu_Thermal_Cabin_T *localC);
extern void Thermal_Cabin_PreCaliTi_Init(boolean_T *rty_TiVld, real32_T
  rty_VePCAT_T_BreaTemp4[4], real32_T rty_VePCAT_T_ExtrTemp18[18], real32_T
  rty_VePCAT_T_MidTemp12[12], real32_T rty_VePCAT_T_lntrTemp18[18],
  B_PreCaliTi_Thermal_Cabin_T *localB, DW_PreCaliTi_Thermal_Cabin_T *localDW);
extern void Thermal_Cabin_PreCaliTi(uint8_T rtu_VePCAT_na_PCATOperSts, real32_T
  rtu_VeSENA_T_AmbTempOut, real32_T rtu_VePCAT_T_DuctTemp8, real32_T
  rtu_VePCAT_T_DuctTemp8_p, real32_T rtu_VePCAT_T_DuctTemp8_b, real32_T
  rtu_VePCAT_T_DuctTemp8_f, real32_T rtu_VePCAT_T_DuctTemp8_c, real32_T
  rtu_VePCAT_T_DuctTemp8_e, real32_T rtu_VeGMZS_na_AzimOut, real32_T
  rtu_VeGMZS_na_HghtAglOut, real32_T rtu_VeCSCC_pwr_SloarAvgPwr, real32_T
  rtu_VeVTIC_mps_VehSpdLgtA, uint8_T rtu_VeCADC_na_FrntDrvDistbnMode, real32_T
  rtu_VeSENA_T_WidShieldTemp, uint8_T rtu_VeCADC_na_FrntPassDistbnMode, uint8_T
  rtu_VePCAT_na_NapTimrSts, real32_T rtu_VeSENA_T_FeavpTemp, real32_T
  rtu_VeCSCC_V_FrntDrvFlowFb, real32_T rtu_VeCSCC_V_FrntPassFlowFb, real32_T
  rtu_VeCSCC_V_SecDrvFlowFb, real32_T rtu_VeCSCC_V_SecPassFlowFb, real32_T
  rtu_VeACTU_na_RecPosnFb, real32_T rtu_VeACTU_na_FdhPosnFb, real32_T
  rtu_VeACTU_na_FphPosnFb, const real32_T rtu_VePCAT_T_MidTempLoad[12], const
  real32_T rtu_VePCAT_T_ExterTempLoad[18], const real32_T
  rtu_VePCAT_T_IntrTempLoad[18], const real32_T rtu_VePCAT_T_BreaPontTempLoad[4],
  real32_T rtu_VeCSCC_T_DuctAvgTemp, uint8_T rtu_VeCADC_na_SecDrvDistbnMode,
  boolean_T *rty_TiVld, real32_T rty_VePCAT_T_BreaTemp4[4], real32_T
  rty_VePCAT_T_ExtrTemp18[18], real32_T rty_VePCAT_T_MidTemp12[12], real32_T
  rty_VePCAT_T_lntrTemp18[18], real32_T rty_VePCAT_na_ShellArea18[18], real32_T
  rty_VePCAT_na_HiCoef18[18], real32_T rty_VePCAT_na_ShellMass18[18], real32_T
  rty_VePCAT_na_ShellCp18[18], real32_T rty_VePCAT_na_ShellHtCndvty18[18],
  real32_T rty_VePCAT_na_ShellThick18[18], B_PreCaliTi_Thermal_Cabin_T *localB,
  const ConstB_PreCaliTi_Thermal_Cabin_T *localC, DW_PreCaliTi_Thermal_Cabin_T
  *localDW);
extern void Thermal_Cabin_Chart_j_Init(real32_T *rty_out);
extern void Thermal_Cabin_Chart_o(real32_T rtu_get_value, uint8_T rtu_N,
  boolean_T rtu_IGN, real32_T *rty_out, DW_Chart_Thermal_Cabin_m_T *localDW);
extern void Thermal_Cabin_Chart8_Init(real32_T *rty_out);
extern void Thermal_Cabin_Chart8(uint16_T rtu_get_value, uint8_T rtu_N,
  boolean_T rtu_IGN, real32_T *rty_out, DW_Chart8_Thermal_Cabin_T *localDW);

#endif                                 /* RTW_HEADER_Thermal_Cabin_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
