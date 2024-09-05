/*
 * File: Thermal_Cabin.h
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

#ifndef RTW_HEADER_Thermal_Cabin_h_
#define RTW_HEADER_Thermal_Cabin_h_
#include <math.h>
#include <string.h>
#include <stddef.h>
#include <stdio.h>
#ifndef Thermal_Cabin_COMMON_INCLUDES_
#define Thermal_Cabin_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Thermal_Cabin_COMMON_INCLUDES_ */

#include "Thermal_Cabin_types.h"
#include "rtGetNaN.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<S2>/Chart10' */
typedef struct {
  uint8_T is_active_c130_Thermal_Cabin;/* '<S2>/Chart10' */
} DW_Chart10_Thermal_Cabin_T;

/* Block states (default storage) for system '<S2>/Chart11' */
typedef struct {
  uint8_T is_active_c131_Thermal_Cabin;/* '<S2>/Chart11' */
} DW_Chart11_Thermal_Cabin_T;

/* Block states (default storage) for system '<S2>/Chart17' */
typedef struct {
  uint8_T is_active_c139_Thermal_Cabin;/* '<S2>/Chart17' */
} DW_Chart17_Thermal_Cabin_T;

/* Block states (default storage) for system '<S2>/Chart23' */
typedef struct {
  uint8_T is_active_c149_Thermal_Cabin;/* '<S2>/Chart23' */
} DW_Chart23_Thermal_Cabin_T;

/* Block states (default storage) for system '<S2>/Chart30' */
typedef struct {
  uint8_T is_active_c157_Thermal_Cabin;/* '<S2>/Chart30' */
} DW_Chart30_Thermal_Cabin_T;

/* Block states (default storage) for system '<S2>/Chart37' */
typedef struct {
  uint8_T is_active_c87_Thermal_Cabin; /* '<S2>/Chart37' */
} DW_Chart37_Thermal_Cabin_T;

/* Block states (default storage) for system '<S94>/Enabled Subsystem1' */
typedef struct {
  uint8_T is_active_c184_Thermal_Cabin;/* '<S136>/Chart1' */
} DW_EnabledSubsystem1_Thermal_Cabin_T;

/* Block states (default storage) for system '<S2>/Enabled Subsystem16' */
typedef struct {
  uint8_T Delay_DSTATE;                /* '<S101>/Delay' */
  DW_EnabledSubsystem1_Thermal_Cabin_T EnabledSubsystem1;/* '<S101>/Enabled Subsystem1' */
} DW_EnabledSubsystem16_Thermal_Cabin_T;

/* Block states (default storage) for system '<S224>/DC' */
typedef struct {
  uint8_T is_active_c10_Thermal_Cabin; /* '<S224>/DC' */
} DW_DC_Thermal_Cabin_T;

/* Block states (default storage) for system '<S109>/Enabled Subsystem1' */
typedef struct {
  uint8_T is_active_c13_Thermal_Cabin; /* '<S255>/Step' */
  DW_DC_Thermal_Cabin_T sf_DC;         /* '<S255>/DC' */
} DW_EnabledSubsystem1_Thermal_Cabin_m_T;

/* Block signals for system '<S2>/Enabled Subsystem3' */
typedef struct {
  real32_T VeACTU_na_XxxStepPosnReq;   /* '<S255>/Step' */
  uint8_T VeACTU_na_XxxStepBorder;     /* '<S255>/Step' */
  uint8_T VeACTU_na_XxxDCBorder;       /* '<S255>/DC' */
  boolean_T VeACTU_na_XxxStepType;     /* '<S255>/Step' */
  boolean_T VeACTU_na_XxxDcType;       /* '<S255>/DC' */
} B_EnabledSubsystem3_Thermal_Cabin_T;

/* Block states (default storage) for system '<S2>/Enabled Subsystem3' */
typedef struct {
  DW_EnabledSubsystem1_Thermal_Cabin_m_T EnabledSubsystem1;/* '<S109>/Enabled Subsystem1' */
} DW_EnabledSubsystem3_Thermal_Cabin_T;

/* Block states (default storage) for system '<S117>/Chart' */
typedef struct {
  uint16_T VeACTU_na_XxxStepRangePrev; /* '<S117>/Chart' */
  uint8_T is_active_c54_Thermal_Cabin; /* '<S117>/Chart' */
} DW_Chart_Thermal_Cabin_T;

/* Block states (default storage) for system '<S321>/Chart' */
typedef struct {
  real_T VeACTU_na_XxxStepRangePrev;   /* '<S321>/Chart' */
  uint8_T is_active_c55_Thermal_Cabin; /* '<S321>/Chart' */
} DW_Chart_Thermal_Cabin_f_T;

/* Block states (default storage) for system '<S321>/Chart1' */
typedef struct {
  uint8_T is_active_c56_Thermal_Cabin; /* '<S321>/Chart1' */
  uint8_T is_c56_Thermal_Cabin;        /* '<S321>/Chart1' */
} DW_Chart1_Thermal_Cabin_T;

/* Block states (default storage) for system '<S118>/Chart16' */
typedef struct {
  real32_T VeXxxx_na_XxxPosnFb_prev;   /* '<S118>/Chart16' */
  real32_T VeXxxx_na_XxxPosnFb_start;  /* '<S118>/Chart16' */
  uint8_T is_active_c76_Thermal_Cabin; /* '<S118>/Chart16' */
  uint8_T is_c76_Thermal_Cabin;        /* '<S118>/Chart16' */
  uint8_T temporalCounter_i1;          /* '<S118>/Chart16' */
} DW_Chart16_Thermal_Cabin_T;

/* Block signals for system '<S126>/Enabled Subsystem' */
typedef struct {
  uint16_T VeACTU_na_XxxStepRange;     /* '<S366>/Chart' */
} B_EnabledSubsystem_Thermal_Cabin_b_T;

/* Block states (default storage) for system '<S126>/Enabled Subsystem' */
typedef struct {
  uint16_T Delay1_DSTATE;              /* '<S366>/Delay1' */
  DW_Chart1_Thermal_Cabin_T sf_Chart1; /* '<S366>/Chart1' */
  DW_Chart_Thermal_Cabin_f_T sf_Chart; /* '<S366>/Chart' */
} DW_EnabledSubsystem_Thermal_Cabin_h_T;

/* Block signals for system '<S127>/Enabled Subsystem' */
typedef struct {
  uint16_T VeACTU_na_XxxStepRange;     /* '<S371>/Chart' */
} B_EnabledSubsystem_Thermal_Cabin_a_T;

/* Block states (default storage) for system '<S127>/Enabled Subsystem' */
typedef struct {
  uint16_T Delay1_DSTATE;              /* '<S371>/Delay1' */
  DW_Chart1_Thermal_Cabin_T sf_Chart1; /* '<S371>/Chart1' */
  DW_Chart_Thermal_Cabin_f_T sf_Chart; /* '<S371>/Chart' */
} DW_EnabledSubsystem_Thermal_Cabin_n_T;

/* Block signals for system '<S1186>/PreCaliTi' */
typedef struct {
  real32_T OutportBufferForVePCAT_pwr_SecPassPowr;/* '<S1238>/Constant' */
  real32_T OutportBufferForVePCAT_pwr_SecDrvPowr;/* '<S1237>/Constant' */
  real32_T OutportBufferForVePCAT_pwr_FrntPassPowr;/* '<S1236>/Constant' */
  real32_T OutportBufferForVePCAT_pwr_FrntDrvPowr;/* '<S1235>/Constant' */
} B_PreCaliTi_Thermal_Cabin_T;

/* Block states (default storage) for system '<S1186>/PreCaliTi' */
typedef struct {
  real_T Delay1_DSTATE;                /* '<S1190>/Delay1' */
  real_T VePCAT_T_lnitlntrTemp18[18];  /* '<S1190>/  ' */
  real_T VePCAT_T_lnitMidTemp18[12];
                             /* '<S1190>/DaVeSENA_T_AmbTempOut Store Memory2' */
  real_T T_az_4;             /* '<S1190>/DaVeSENA_T_AmbTempOut Store Memory3' */
  real_T VePCAT_T_lnitlntrTemp18_Nap[18];
                             /* '<S1190>/DaVeSENA_T_AmbTempOut Store Memory5' */
  real_T T_Extr_18_Nap[18];  /* '<S1190>/DaVeSENA_T_AmbTempOut Store Memory6' */
  real_T T_Mtr_12_Nap[12];   /* '<S1190>/DaVeSENA_T_AmbTempOut Store Memory7' */
  real_T VeSENA_T_AmbTempOutz_4_Nap[4];
                             /* '<S1190>/DaVeSENA_T_AmbTempOut Store Memory8' */
  real_T VePCAT_T_lnitExtrTemp18[18];  /* '<S1190>/empOut Store Memory' */
  real_T VeSENA_T_AmbTempOutz_4[4];    /* '<S1190>/mpOut Store Memory4' */
  real32_T Delay2_1_DSTATE[18];        /* '<S1190>/Delay2' */
  real32_T Delay2_2_DSTATE[18];        /* '<S1190>/Delay2' */
  real32_T Delay2_3_DSTATE[12];        /* '<S1190>/Delay2' */
  real32_T Delay2_4_DSTATE[4];         /* '<S1190>/Delay2' */
  real32_T Delay1_DSTATE_f[400];       /* '<S1203>/Delay1' */
  real32_T UnitDelay8_DSTATE[4];       /* '<S1203>/Unit Delay8' */
  real32_T Delay1_DSTATE_d[18];        /* '<S1210>/Delay1' */
  real32_T Delay_DSTATE[18];           /* '<S1210>/Delay' */
  real32_T Delay3_DSTATE[12];          /* '<S1210>/Delay3' */
  real32_T Delay2_DSTATE[4];           /* '<S1210>/Delay2' */
  uint32_T m_bpIndex;                  /* '<S1243>/KePCAT_T_FdofstDefLt_D' */
  uint32_T m_bpIndex_p;                /* '<S1243>/KePCAT_T_FdhofstDefLt_D' */
  uint32_T m_bpIndex_g;                /* '<S1243>/KePCAT_T_SdofstRrFlrLt_D' */
  uint32_T m_bpIndex_l;              /* '<S1243>/KePCAT_T_FpofstVntCentRt_D ' */
  uint32_T m_bpIndex_lx;               /* '<S1243>/KePCAT_T_FpofstDefRt_D' */
  uint32_T m_bpIndex_i;                /* '<S1243>/KePCAT_T_FphofstDefLt_D' */
  uint32_T m_bpIndex_h;               /* '<S1243>/KePCAT_T_FdofstVntsideLt_D' */
  uint32_T m_bpIndex_o;                /* '<S1243>/KePCAT_T_FdofstFlrLt_D' */
  uint32_T m_bpIndex_l5;               /* '<S1243>/KePCAT_T_FpofstFlrRt_D' */
  uint32_T m_bpIndex_c;                /* '<S1243>/KePCAT_T_SdofstRrVnt_D' */
  uint8_T Delay_DSTATE_h;              /* '<S1190>/Delay' */
  uint8_T UnitDelay1_DSTATE;           /* '<S1203>/Unit Delay1' */
  boolean_T UnitDelay3_DSTATE;         /* '<S1210>/Unit Delay3' */
  boolean_T UnitDelay2_DSTATE;         /* '<S1210>/Unit Delay2' */
  boolean_T UnitDelay4_DSTATE;         /* '<S1210>/Unit Delay4' */
  boolean_T UnitDelay1_DSTATE_l;       /* '<S1210>/Unit Delay1' */
  boolean_T icLoad;                    /* '<S1203>/Delay1' */
} DW_PreCaliTi_Thermal_Cabin_T;

/* Block states (default storage) for system '<S25>/Chart' */
typedef struct {
  real_T cycle;                        /* '<S25>/Chart' */
  real_T i;                            /* '<S25>/Chart' */
  real32_T value_buff[15];             /* '<S25>/Chart' */
  uint8_T is_active_c101_Thermal_Cabin;/* '<S25>/Chart' */
  uint8_T is_c101_Thermal_Cabin;       /* '<S25>/Chart' */
} DW_Chart_Thermal_Cabin_m_T;

/* Block states (default storage) for system '<S25>/Chart8' */
typedef struct {
  real_T cycle;                        /* '<S25>/Chart8' */
  real_T i;                            /* '<S25>/Chart8' */
  real32_T value_buff[15];             /* '<S25>/Chart8' */
  uint8_T is_active_c121_Thermal_Cabin;/* '<S25>/Chart8' */
  uint8_T is_c121_Thermal_Cabin;       /* '<S25>/Chart8' */
} DW_Chart8_Thermal_Cabin_T;

/* Block signals (default storage) */
typedef struct {
  real_T VeACTU_na_DcSelfStudySts;     /* '<S130>/Chart16' */
  real_T VeACTU_na_DcSelfStudySts_h;   /* '<S125>/Chart16' */
  real_T VeACTU_na_DcSelfStudySts_e;   /* '<S123>/Chart16' */
  real_T VeACTU_na_DcSelfStudySts_n;   /* '<S121>/Chart16' */
  real_T VeACTU_na_DcSelfStudySts_a;   /* '<S120>/Chart16' */
  real_T VeACTU_na_DcSelfStudySts_j;   /* '<S119>/Chart16' */
  real_T VeACTU_na_DcSelfStudySts_l;   /* '<S118>/Chart16' */
  real32_T Switch14_m;                 /* '<S31>/Switch14' */
  real32_T Switch6_a;                  /* '<S395>/Switch6' */
  real32_T Switch6_m;                  /* '<S396>/Switch6' */
  real32_T Switch;                     /* '<S396>/Switch' */
  real32_T Switch5_g;                  /* '<S399>/Switch5' */
  real32_T Switch5_j;                  /* '<S400>/Switch5' */
  real32_T VeCHFC_pct_FdhPosnErrMngt6; /* '<S728>/Merge' */
  real32_T VeCHFC_pct_FphPosnErrMngt6; /* '<S739>/Merge' */
  real32_T VeCHFC_pct_SdhPosnErrMngt6; /* '<S750>/Merge' */
  real32_T VeCHFC_pct_SphPosnErrMngt6; /* '<S761>/Merge' */
  real32_T Merge;                      /* '<S868>/Merge' */
  real32_T Merge1;                     /* '<S869>/Merge1' */
  real32_T Merge_l;                    /* '<S870>/Merge' */
  real32_T Merge1_a;                   /* '<S871>/Merge1' */
  real32_T Merge_b;                    /* '<S1014>/Merge' */
  real32_T Merge1_l;                   /* '<S1014>/Merge1' */
  real32_T Merge2;                     /* '<S1014>/Merge2' */
  real32_T Merge_o;                    /* '<S1015>/Merge' */
  real32_T Merge1_f;                   /* '<S1015>/Merge1' */
  real32_T Merge_j;                    /* '<S1016>/Merge' */
  real32_T Merge1_c;                   /* '<S1016>/Merge1' */
  real32_T Merge_e;                    /* '<S1017>/Merge' */
  real32_T Merge1_f2;                  /* '<S1017>/Merge1' */
  real32_T out;                        /* '<S1283>/Chart16' */
  real32_T out_k;                      /* '<S1283>/Chart15' */
  real32_T out_f;                      /* '<S25>/Chart9' */
  real32_T out_o;                      /* '<S25>/Chart8' */
  real32_T out_a;                      /* '<S25>/Chart7' */
  real32_T VeSENA_T_AmbTempOut;        /* '<S25>/Chart6' */
  real32_T out_d;                      /* '<S25>/Chart5' */
  real32_T out_n;                      /* '<S25>/Chart4' */
  real32_T out_oh;                     /* '<S25>/Chart3' */
  real32_T out_d3;                     /* '<S25>/Chart2' */
  real32_T out_p;                      /* '<S25>/Chart12' */
  real32_T out_do;                     /* '<S25>/Chart11' */
  real32_T out_oa;                     /* '<S25>/Chart10' */
  real32_T out_g;                      /* '<S25>/Chart1' */
  real32_T out_j;                      /* '<S25>/Chart' */
  real32_T VePCAT_T_MidTempLoad[12];   /* '<S1186>/Chart1' */
  real32_T VePCAT_T_ExterTempLoad[18]; /* '<S1186>/Chart1' */
  real32_T VePCAT_T_IntrTempLoad[18];  /* '<S1186>/Chart1' */
  real32_T VePCAT_T_VehExterSurfTempSave[18];/* '<S1186>/Chart1' */
  real32_T VePCAT_T_VehIntrSurfTempSave[18];/* '<S1186>/Chart1' */
  real32_T VePCAT_T_VehMidSurfTempSave[12];/* '<S1186>/Chart1' */
  real32_T VePCAT_T_VehBreaTempSave[4];/* '<S1186>/Chart1' */
  real32_T VePCAT_T_BreaTempLoad[4];   /* '<S1186>/Chart1' */
  real32_T TBreaTemp4[4];              /* '<S1190>/Merge1' */
  real32_T TIntr18[18];                /* '<S1190>/Merge1' */
  real32_T TExtr18[18];                /* '<S1190>/Merge1' */
  real32_T TMid12[12];                 /* '<S1190>/Merge1' */
  real32_T Switch_h[18];               /* '<S1245>/Switch' */
  real32_T VectorConcatenate[18];      /* '<S1254>/Vector Concatenate' */
  real32_T VectorConcatenate_g[18];    /* '<S1255>/Vector Concatenate' */
  real32_T VectorConcatenate_l[18];    /* '<S1253>/Vector Concatenate' */
  real32_T VectorConcatenate1[18];     /* '<S1251>/Vector Concatenate1' */
  real32_T VectorConcatenate2[18];     /* '<S1250>/Vector Concatenate2' */
  real32_T VeFWDS_na_RiskValue_Flg;    /* '<S1179>/Chart' */
  real32_T Divide1_l;                  /* '<S1178>/Divide1' */
  real32_T VeCTCM_T_EvaDefFlwTemp5;    /* '<S1157>/Min' */
  real32_T Saturation;                 /* '<S1157>/Saturation' */
  real32_T VeCTCM_T_FLowestTarFlwTemp5;/* '<S1156>/Min' */
  real32_T VeCTCM_T_RLowestTarFlwTemp5;/* '<S1156>/Min1' */
  real32_T VeCTCM_T_RearEvaNormFlwTemp5;/* '<S1156>/Switch6' */
  real32_T Saturation_d;               /* '<S1156>/Saturation' */
  real32_T Saturation1;                /* '<S1156>/Saturation1' */
  real32_T Switch2_h;                  /* '<S1156>/Switch2' */
  real32_T Switch3_o;                  /* '<S1156>/Switch3' */
  real32_T Switch4_e;                  /* '<S1156>/Switch4' */
  real32_T Switch5_ni;                 /* '<S1156>/Switch5' */
  real32_T VeCTCM_T_FLowestTarFlwTemp5_m;/* '<S1155>/Min' */
  real32_T OutportBufferForVeCTCM_T_RLowestTarFlwTemp;/* '<S1155>/Constant' */
  real32_T OutportBufferForVeCTCM_T_RearEvaNormFlwTemp;
  real32_T Saturation_e;               /* '<S1159>/Saturation' */
  real32_T Switch2_o;                  /* '<S1159>/Switch2' */
  real32_T Switch4_i;                  /* '<S1159>/Switch4' */
  real32_T Switch5_c;                  /* '<S1159>/Switch5' */
  real32_T Switch6_n;                  /* '<S1159>/Switch6' */
  real32_T VeCTCM_na_SpvCtrlTar;       /* '<S1114>/Chart' */
  real32_T VeCTCM_na_SpfCtrlTar;       /* '<S1114>/Chart' */
  real32_T VeCTCM_na_SpvCtrlTar_d;     /* '<S1113>/Chart' */
  real32_T VeCTCM_na_SpfCtrlTar_e;     /* '<S1113>/Chart' */
  real32_T VeCTCM_na_SdvCtrlTar;       /* '<S1087>/Chart' */
  real32_T VeCTCM_na_SdfCtrlTar;       /* '<S1087>/Chart' */
  real32_T VeCTCM_na_SdvCtrlTar_c;     /* '<S1086>/Chart' */
  real32_T VeCTCM_na_SdfCtrlTar_c;     /* '<S1086>/Chart' */
  real32_T VeCTCM_na_FpvCtrlTar;       /* '<S1059>/Chart' */
  real32_T VeCTCM_na_FpfCtrlTar;       /* '<S1059>/Chart' */
  real32_T VeCTCM_na_FpvCtrlTar_g;     /* '<S1058>/Chart' */
  real32_T VeCTCM_na_FpfCtrlTar_n;     /* '<S1058>/Chart' */
  real32_T uDLookupTable2_o;           /* '<S1079>/2-D Lookup Table2' */
  real32_T VeCTCM_na_FdfCtrlTar;       /* '<S1024>/Chart' */
  real32_T VeCTCM_na_FdvCtrlTar;       /* '<S1024>/Chart' */
  real32_T VeCTCM_na_DefCtrlTar;       /* '<S1024>/Chart' */
  real32_T VeCTCM_na_FdfCtrlTar_e;     /* '<S1023>/Chart' */
  real32_T VeCTCM_na_FdvCtrlTar_b;     /* '<S1023>/Chart' */
  real32_T VeCTCM_na_DefCtrlTar_f;     /* '<S1023>/Chart' */
  real32_T VeCTCM_T_TcsFd;             /* '<S930>/Chart' */
  real32_T VeCTCM_T_TcsFp;             /* '<S930>/Chart' */
  real32_T VeCTCM_T_TcsSd;             /* '<S930>/Chart' */
  real32_T VeCTCM_T_TcsSp;             /* '<S930>/Chart' */
  real32_T VeCTCM_T_FdHexTarFlwTemp5;  /* '<S977>/Switch4' */
  real32_T VeCTCM_T_FpHexTarFlwTemp5;  /* '<S977>/Switch5' */
  real32_T VeCTCM_T_SdHexTarFlwTemp5;  /* '<S977>/Switch6' */
  real32_T VeCTCM_T_SpHexTarFlwTemp5;  /* '<S977>/Switch7' */
  real32_T Switch_e;                   /* '<S977>/Switch' */
  real32_T Switch1_b;                  /* '<S977>/Switch1' */
  real32_T Switch2_g;                  /* '<S977>/Switch2' */
  real32_T Switch3_oy;                 /* '<S977>/Switch3' */
  real32_T uDLookupTable_f;            /* '<S973>/1-D Lookup Table' */
  real32_T uDLookupTable_c;            /* '<S972>/1-D Lookup Table' */
  real32_T Add;                        /* '<S971>/Add' */
  real32_T Add_k;                      /* '<S970>/Add' */
  real32_T VeCTCM_T_TarRecTCrtl;       /* '<S925>/Chart1' */
  real32_T VeCTCM_T_TarRecTCrtl_k;     /* '<S925>/Chart' */
  real32_T uDLookupTable_a;            /* '<S947>/1-D Lookup Table' */
  real32_T VeRFC_Pct_RecFlapPosn;      /* '<S817>/Chart' */
  real32_T VeRFC_Pct_OsaFlapPosn;      /* '<S817>/Chart' */
  real32_T uDLookupTable_al;           /* '<S846>/1-D Lookup Table' */
  real32_T uDLookupTable_e;            /* '<S845>/1-D Lookup Table' */
  real32_T Switch_l;                   /* '<S825>/Switch' */
  real32_T uDLookupTable_p;            /* '<S702>/1-D Lookup Table' */
  real32_T Switch_o;                   /* '<S700>/Switch' */
  real32_T uDLookupTable_j;            /* '<S699>/2-D Lookup Table' */
  real32_T VeCAFC_v_FbFlowBase;        /* '<S9>/Chart1' */
  real32_T VeCADC_pct_SpfFlapPosn;     /* '<S621>/Chart' */
  real32_T VeCADC_pct_SpvFlapPosn;     /* '<S621>/Chart' */
  real32_T VeCADC_pct_FdfPosnBase;     /* '<S670>/VeCADC_pct_FdfPosnBase' */
  real32_T VeCADC_pct_SpvPosnBase;     /* '<S669>/VeCADC_pct_SpvPosnBase' */
  real32_T uDLookupTable_d;            /* '<S668>/1-D Lookup Table' */
  real32_T uDLookupTable_e4;           /* '<S667>/1-D Lookup Table' */
  real32_T uDLookupTable_e4g;          /* '<S666>/2-D Lookup Table' */
  real32_T uDLookupTable_l;            /* '<S665>/2-D Lookup Table' */
  real32_T VeCADC_pct_FdfPosnBase_l;   /* '<S664>/VeCADC_pct_FdfPosnBase' */
  real32_T VeCADC_pct_FdfPosnNvhCmp;   /* '<S663>/VeCADC_pct_FdfPosnNvhCmp' */
  real32_T VeCADC_pct_SpvPosnBase_c;   /* '<S662>/VeCADC_pct_SpvPosnBase' */
  real32_T VeCADC_pct_SpvPosnNvhCmp;   /* '<S661>/VeCADC_pct_SpvPosnNvhCmp' */
  real32_T uDLookupTable_h;            /* '<S660>/2-D Lookup Table' */
  real32_T uDLookupTable_pm;           /* '<S659>/2-D Lookup Table' */
  real32_T Switch_p;                   /* '<S630>/Switch' */
  real32_T uDLookupTable_b;            /* '<S642>/1-D Lookup Table' */
  real32_T Switch_k;                   /* '<S629>/Switch' */
  real32_T uDLookupTable_dl;           /* '<S636>/1-D Lookup Table' */
  real32_T VeCADC_pct_SdfFlapPosn;     /* '<S565>/Chart' */
  real32_T VeCADC_pct_SdvFlapPosn;     /* '<S565>/Chart' */
  real32_T uDLookupTable_ae;           /* '<S606>/1-D Lookup Table' */
  real32_T uDLookupTable_hi;           /* '<S605>/1-D Lookup Table' */
  real32_T uDLookupTable_n;            /* '<S604>/2-D Lookup Table' */
  real32_T uDLookupTable_m;            /* '<S603>/2-D Lookup Table' */
  real32_T VeCADC_pct_SdfPosnBase;     /* '<S602>/VeCADC_pct_SdfPosnBase' */
  real32_T VeCADC_pct_SdvPosnBase;     /* '<S601>/VeCADC_pct_SdvPosnBase' */
  real32_T uDLookupTable_mg;           /* '<S600>/2-D Lookup Table' */
  real32_T uDLookupTable_ay;           /* '<S599>/2-D Lookup Table' */
  real32_T Switch_ec;                  /* '<S574>/Switch' */
  real32_T uDLookupTable_pc;           /* '<S586>/1-D Lookup Table' */
  real32_T Switch_f;                   /* '<S573>/Switch' */
  real32_T uDLookupTable_fq;           /* '<S580>/1-D Lookup Table' */
  real32_T VeCADC_pct_FpfFlapPosn;     /* '<S501>/Chart' */
  real32_T VeCADC_pct_FpvFlapPosn;     /* '<S501>/Chart' */
  real32_T VeCADC_pct_FdfPosnBase_b;   /* '<S549>/VeCADC_pct_FdfPosnBase' */
  real32_T VeCADC_pct_FdvPosnBase;     /* '<S548>/VeCADC_pct_FdvPosnBase' */
  real32_T uDLookupTable_mu;           /* '<S547>/1-D Lookup Table' */
  real32_T uDLookupTable_pv;           /* '<S546>/1-D Lookup Table' */
  real32_T uDLookupTable_g;            /* '<S545>/2-D Lookup Table' */
  real32_T uDLookupTable_me;           /* '<S544>/2-D Lookup Table' */
  real32_T VeCADC_pct_FdfPosnBase_p;   /* '<S543>/VeCADC_pct_FdfPosnBase' */
  real32_T VeCADC_pct_FdfPosnNvhCmp_j; /* '<S542>/VeCADC_pct_FdfPosnNvhCmp' */
  real32_T VeCADC_pct_FdvPosnNvhCmp;   /* '<S541>/VeCADC_pct_FdvPosnNvhCmp' */
  real32_T VeCADC_pct_FdvPosnNvhCmp_g; /* '<S540>/VeCADC_pct_FdvPosnNvhCmp' */
  real32_T uDLookupTable_jg;           /* '<S539>/2-D Lookup Table' */
  real32_T uDLookupTable_mi;           /* '<S538>/2-D Lookup Table' */
  real32_T Switch_j;                   /* '<S511>/Switch' */
  real32_T uDLookupTable_dx;           /* '<S521>/1-D Lookup Table' */
  real32_T Switch_ou;                  /* '<S510>/Switch' */
  real32_T uDLookupTable_c2;           /* '<S516>/1-D Lookup Table' */
  real32_T VeCADC_pct_FdvFlapPosn;     /* '<S398>/Chart' */
  real32_T VeCADC_pct_DefFlapPosn;     /* '<S398>/Chart' */
  real32_T VeCADC_pct_BpFlapPosn;      /* '<S398>/Chart' */
  real32_T VeCADC_pct_FdfFlapPosn;     /* '<S398>/Chart' */
  real32_T VeCADC_pct_FdfPosnDas;      /* '<S397>/Chart' */
  real32_T VeCADC_pct_FdvPosnDas;      /* '<S397>/Chart' */
  real32_T VeCADC_pct_BpPosnDas;       /* '<S397>/Chart' */
  real32_T VeCADC_pct_DefPosnDas;      /* '<S397>/Chart' */
  real32_T VeCADC_pct_FdfPosnBase_o;   /* '<S477>/VeCADC_pct_FdfPosnBase' */
  real32_T VeCADC_pct_FdvPosnBase_d;   /* '<S476>/VeCADC_pct_FdvPosnBase' */
  real32_T VeCADC_pct_BpPosnBase;      /* '<S475>/VeCADC_pct_BpPosnBase' */
  real32_T uDLookupTable_hm;           /* '<S474>/1-D Lookup Table' */
  real32_T uDLookupTable_fx;           /* '<S473>/1-D Lookup Table' */
  real32_T uDLookupTable_ad;           /* '<S472>/1-D Lookup Table' */
  real32_T uDLookupTable_fu;           /* '<S471>/2-D Lookup Table' */
  real32_T uDLookupTable_n4;           /* '<S470>/2-D Lookup Table' */
  real32_T VeCADC_pct_FdfPosnBase_k;   /* '<S469>/VeCADC_pct_FdfPosnBase' */
  real32_T VeCADC_pct_FdfPosnNvhCmp_g; /* '<S468>/VeCADC_pct_FdfPosnNvhCmp' */
  real32_T VeCADC_pct_FdvPosnNvhCmp_gy;/* '<S467>/VeCADC_pct_FdvPosnNvhCmp' */
  real32_T VeCADC_pct_FdvPosnNvhCmp_j; /* '<S466>/VeCADC_pct_FdvPosnNvhCmp' */
  real32_T VeCADC_pct_DefPosnNvhCmp;   /* '<S465>/VeCADC_pct_DefPosnNvhCmp' */
  real32_T VeCADC_pct_BpPosnBase_e;    /* '<S465>/VeCADC_pct_BpPosnBase' */
  real32_T VeCADC_pct_DefPosnNvhCmp_a; /* '<S464>/VeCADC_pct_DefPosnNvhCmp' */
  real32_T VeCADC_pct_BpPosnBase_j;    /* '<S464>/VeCADC_pct_BpPosnBase' */
  real32_T uDLookupTable_ez;           /* '<S463>/2-D Lookup Table' */
  real32_T uDLookupTable_bq;           /* '<S462>/2-D Lookup Table' */
  real32_T Switch6_k;                  /* '<S418>/Switch6' */
  real32_T Switch_o0;                  /* '<S417>/Switch' */
  real32_T uDLookupTable_k;            /* '<S436>/1-D Lookup Table' */
  real32_T Switch_b;                   /* '<S416>/Switch' */
  real32_T uDLookupTable_e5;           /* '<S430>/1-D Lookup Table' */
  real32_T Switch_m;                   /* '<S415>/Switch' */
  real32_T uDLookupTable_o;            /* '<S424>/1-D Lookup Table' */
  real32_T VeACTU_U_XxxMaxRng;         /* '<S130>/Chart16' */
  real32_T VeACTU_U_XxxMinRng;         /* '<S130>/Chart16' */
  real32_T VeACTU_na_XxxVltgPosnReq;   /* '<S130>/Chart16' */
  real32_T VeACTU_U_XxxMaxRng_c;       /* '<S125>/Chart16' */
  real32_T VeACTU_U_XxxMinRng_i;       /* '<S125>/Chart16' */
  real32_T VeACTU_na_XxxVltgPosnReq_m; /* '<S125>/Chart16' */
  real32_T VeACTU_U_XxxMaxRng_d;       /* '<S123>/Chart16' */
  real32_T VeACTU_U_XxxMinRng_l;       /* '<S123>/Chart16' */
  real32_T VeACTU_na_XxxVltgPosnReq_c; /* '<S123>/Chart16' */
  real32_T VeACTU_U_XxxMaxRng_b;       /* '<S121>/Chart16' */
  real32_T VeACTU_U_XxxMinRng_c;       /* '<S121>/Chart16' */
  real32_T VeACTU_na_XxxVltgPosnReq_l; /* '<S121>/Chart16' */
  real32_T VeACTU_U_XxxMaxRng_n;       /* '<S120>/Chart16' */
  real32_T VeACTU_U_XxxMinRng_a;       /* '<S120>/Chart16' */
  real32_T VeACTU_na_XxxVltgPosnReq_a; /* '<S120>/Chart16' */
  real32_T VeACTU_U_XxxMaxRng_p;       /* '<S119>/Chart16' */
  real32_T VeACTU_U_XxxMinRng_o;       /* '<S119>/Chart16' */
  real32_T VeACTU_na_XxxVltgPosnReq_p; /* '<S119>/Chart16' */
  real32_T VeACTU_U_XxxMaxRng_ng;      /* '<S118>/Chart16' */
  real32_T VeACTU_U_XxxMinRng_h;       /* '<S118>/Chart16' */
  real32_T VeACTU_na_XxxVltgPosnReq_i; /* '<S118>/Chart16' */
  real32_T OutportBufferForVeACTU_U_FdvMaxRngLoad;/* '<S116>/Constant36' */
  real32_T OutportBufferForVeACTU_U_FpvMaxRngLoad;/* '<S116>/Constant37' */
  real32_T OutportBufferForVeACTU_U_SdvMaxRngLoad;/* '<S116>/Constant38' */
  real32_T OutportBufferForVeACTU_U_RecMaxRngLoad;/* '<S116>/Constant39' */
  real32_T OutportBufferForVeACTU_U_SdhMaxRngLoad;/* '<S116>/Constant40' */
  real32_T OutportBufferForVeACTU_U_FphMaxRngLoad;/* '<S116>/Constant41' */
  real32_T OutportBufferForVeACTU_U_FdhMaxRngLoad;/* '<S116>/Constant42' */
  real32_T OutportBufferForVeACTU_U_FdvMinRngLoad;/* '<S116>/Constant43' */
  real32_T OutportBufferForVeACTU_U_FpvMinRngLoad;/* '<S116>/Constant44' */
  real32_T OutportBufferForVeACTU_U_SdvMinRngLoad;/* '<S116>/Constant45' */
  real32_T OutportBufferForVeACTU_U_RecMinRngLoad;/* '<S116>/Constant46' */
  real32_T OutportBufferForVeACTU_U_SdhMinRngLoad;/* '<S116>/Constant47' */
  real32_T OutportBufferForVeACTU_U_FphMinRngLoad;/* '<S116>/Constant48' */
  real32_T OutportBufferForVeACTU_U_FdhMinRngLoad;/* '<S116>/Constant49' */
  real32_T VeACTU_na_XxxStepPosnReq;   /* '<S316>/Step' */
  real32_T VeACTU_na_XxxVltgPosnReq_ar;/* '<S316>/DC' */
  real32_T VeACTU_na_XxxVltgPosnReq_d; /* '<S299>/DC' */
  real32_T VeACTU_na_XxxVltgPosnReq_b; /* '<S288>/DC' */
  real32_T VeACTU_na_XxxVltgPosnReq_j; /* '<S277>/DC' */
  real32_T VeACTU_na_XxxVltgPosnReq_h; /* '<S266>/DC' */
  real32_T VeACTU_na_XxxVltgPosnReq_o; /* '<S255>/DC' */
  real32_T VeACTU_na_XxxStepPosnReq_h; /* '<S224>/Step' */
  real32_T VeACTU_na_XxxVltgPosnReq_of;/* '<S224>/DC' */
  uint16_T Divide_i;                   /* '<S948>/Divide' */
  uint16_T VeCTCM_Af_FrntPassWghFlow;  /* '<S946>/VeCTCM_Af_ FrntPassWghFlow' */
  uint16_T uDLookupTable_a1;           /* '<S945>/1-D Lookup Table' */
  uint16_T Output6;                    /* '<S716>/Switch1' */
  uint16_T VeCAFC_na_FrntBlwrRespRate; /* '<S9>/Chart' */
  uint16_T VeACTU_na_XxxStepRange;     /* '<S129>/Chart' */
  uint16_T VeACTU_na_XxxStepRange_j;   /* '<S128>/Chart' */
  uint16_T VeACTU_na_XxxStepRange_k;   /* '<S127>/Chart' */
  uint16_T VeACTU_na_XxxStepRange_e;   /* '<S126>/Chart' */
  uint16_T VeACTU_na_XxxStepRange_l;   /* '<S356>/Chart' */
  uint16_T VeACTU_na_XxxStepRange_o;   /* '<S124>/Chart' */
  uint16_T VeACTU_na_XxxStepRange_kp;  /* '<S346>/Chart' */
  uint16_T VeACTU_na_XxxStepRange_ja;  /* '<S122>/Chart' */
  uint16_T VeACTU_na_XxxStepRange_h;   /* '<S321>/Chart' */
  uint16_T VeACTU_na_XxxStepRange_d;   /* '<S117>/Chart' */
  uint8_T VePCAT_na_PCATOperSts;       /* '<S1186>/Chart1' */
  uint8_T uDLookupTable1_ng;           /* '<S1136>/2-D Lookup Table1' */
  uint8_T uDLookupTable1_f;            /* '<S1135>/2-D Lookup Table1' */
  uint8_T uDLookupTable1_i;            /* '<S1134>/2-D Lookup Table1' */
  uint8_T uDLookupTable1_dv;           /* '<S1133>/2-D Lookup Table1' */
  uint8_T uDLookupTable1_k;            /* '<S1108>/2-D Lookup Table1' */
  uint8_T uDLookupTable1_ac;           /* '<S1107>/2-D Lookup Table1' */
  uint8_T uDLookupTable1_kq;           /* '<S1106>/2-D Lookup Table1' */
  uint8_T uDLookupTable1_g;            /* '<S1105>/2-D Lookup Table1' */
  uint8_T uDLookupTable1_dq;           /* '<S1081>/2-D Lookup Table1' */
  uint8_T uDLookupTable1_c;            /* '<S1080>/2-D Lookup Table1' */
  uint8_T uDLookupTable1_i0;           /* '<S1078>/2-D Lookup Table1' */
  uint8_T Max;                         /* '<S1038>/Max' */
  uint8_T Max_h;                       /* '<S1037>/Max' */
  uint8_T Merge_oy;                    /* '<S1027>/Merge' */
  uint8_T Merge1_e;                    /* '<S1027>/Merge1' */
  uint8_T VeCTCM_na_SpZoneModSts;      /* '<S1009>/Chart3' */
  uint8_T VeCTCM_na_SdZoneModSts;      /* '<S1009>/Chart2' */
  uint8_T VeCTCM_na_FpZoneModSts;      /* '<S1009>/Chart1' */
  uint8_T VeCTCM_na_FdZoneModSts;      /* '<S1009>/Chart' */
  uint8_T VeCTCM_na_OperSts;           /* '<S926>/Chart' */
  uint8_T VeCTCM_na_OperSpclStartSts;  /* '<S19>/Chart1' */
  uint8_T VeCREC_na_CRECOperSts;       /* '<S15>/Chart' */
  uint8_T VeCREC_na_RecPosnCalcnMode;  /* '<S15>/Chart' */
  uint8_T VeCREC_na_OsaPosnCalcnMode;  /* '<S15>/Chart' */
  uint8_T VeCAFC_na_FrntBlwrOperSts;   /* '<S9>/Chart' */
  uint8_T VeCAFC_na_FrntBlwrCalcnMode; /* '<S9>/Chart' */
  uint8_T VeCADC_na_SecPassOperSts;    /* '<S393>/Chart' */
  uint8_T VeCADC_na_SpfPosnCalcnMode;  /* '<S393>/Chart' */
  uint8_T VeCADC_na_SpfPosnUpdSts;     /* '<S393>/Chart' */
  uint8_T VeCADC_na_SpvPosnCalcnMode;  /* '<S393>/Chart' */
  uint8_T VeCADC_na_SpvPosnUpdSts;     /* '<S393>/Chart' */
  uint8_T VeCADC_na_SecDrvOperSts;     /* '<S392>/Chart' */
  uint8_T VeCADC_na_SdvPosnCalcnMode;  /* '<S392>/Chart' */
  uint8_T VeCADC_na_SdfPosnCalcnMode;  /* '<S392>/Chart' */
  uint8_T VeCADC_na_SdvPosnUpdSts;     /* '<S392>/Chart' */
  uint8_T VeCADC_na_SdfPosnUpdSts;     /* '<S392>/Chart' */
  uint8_T VeCADC_na_FrntPassOperSts;   /* '<S391>/Chart' */
  uint8_T VeCADC_na_FpvPosnCalcnMode;  /* '<S391>/Chart' */
  uint8_T VeCADC_na_FpfPosnCalcnMode;  /* '<S391>/Chart' */
  uint8_T VeCADC_na_FrntDrvDistbnMode; /* '<S398>/Chart' */
  uint8_T VeCADC_na_FrntDrvOperSts;    /* '<S390>/Chart' */
  uint8_T VeCADC_na_DefPosnCalcnMode;  /* '<S390>/Chart' */
  uint8_T VeCADC_na_FdvPosnCalcnMode;  /* '<S390>/Chart' */
  uint8_T VeCADC_na_FdfPosnCalcnMode;  /* '<S390>/Chart' */
  uint8_T VeACTU_na_XxxStepBorder;     /* '<S316>/Step' */
  uint8_T VeACTU_na_XxxDCBorder;       /* '<S316>/DC' */
  uint8_T VeACTU_na_XxxStepBorder_l;   /* '<S224>/Step' */
  uint8_T VeACTU_na_XxxDCBorder_f;     /* '<S224>/DC' */
  uint8_T VeACTU_na_OperSts;           /* '<S2>/Chart' */
  uint8_T VeACTU_na_AssignMode;        /* '<S2>/Chart' */
  uint8_T VeACTU_na_ActrOperCtrSaveEep;/* '<S2>/Chart' */
  boolean_T OutportBufferForTiVld;
  boolean_T NapTimrStsTimer;           /* '<S1186>/Chart' */
  boolean_T VeCTCM_na_KeepAwakeFlag;   /* '<S926>/Chart1' */
  boolean_T VeCTCM_na_HotStartTmrSts;  /* '<S19>/Chart3' */
  boolean_T VeCTCM_na_ColdStartTmrSts; /* '<S19>/Chart2' */
  boolean_T VeCTCM_na_FrntClimaSts;    /* '<S19>/Chart' */
  boolean_T VeCTCM_na_SecClimaSts;     /* '<S19>/Chart' */
  boolean_T TakeBreathTmrSts;          /* '<S817>/Chart4' */
  boolean_T VeCREC_na_RecPosnBaseQf5;  /* '<S825>/AND' */
  boolean_T VeCREC_na_RecFlapUpdSts;   /* '<S15>/Chart' */
  boolean_T VeCREC_na_OsaFlapUpdSts;   /* '<S15>/Chart' */
  boolean_T VeCREC_na_TakeBreathTmrMode;/* '<S15>/Chart' */
  boolean_T VeCHMI_na_AirdLAutoMode;   /* '<S13>/HMIDetect' */
  boolean_T VeCHMI_na_AirdRAutoMode;   /* '<S13>/HMIDetect' */
  boolean_T VeCHMI_na_AirdMLAutoMode;  /* '<S13>/HMIDetect' */
  boolean_T VeCHFC_na_SphPosnUpdSt;    /* '<S725>/Chart' */
  boolean_T VeCHFC_na_SdhPosnUpdSt;    /* '<S724>/Chart' */
  boolean_T VeCHFC_na_FphPosnUpdSt;    /* '<S723>/Chart' */
  boolean_T VeCHFC_na_FdhPosnUpdSt;    /* '<S722>/Chart' */
  boolean_T VeCAFC_na_FrntBlwrUpdSts;  /* '<S9>/Chart' */
  boolean_T VeCADC_na_FpvPosnUpdSts;   /* '<S391>/Chart' */
  boolean_T VeCADC_na_FpfPosnUpdSts;   /* '<S391>/Chart' */
  boolean_T VeCADC_na_DefPosnUpdSts;   /* '<S390>/Chart' */
  boolean_T VeCADC_na_FdvPosnUpdSts;   /* '<S390>/Chart' */
  boolean_T VeCADC_na_FdfPosnUpdSts;   /* '<S390>/Chart' */
  boolean_T VeACTU_na_XxxStepType;     /* '<S316>/Step' */
  boolean_T VeACTU_na_XxxDcType;       /* '<S316>/DC' */
  boolean_T VeACTU_na_XxxStepType_e;   /* '<S224>/Step' */
  boolean_T VeACTU_na_XxxDcType_a;     /* '<S224>/DC' */
  boolean_T VeACTU_na_StepStopDone;    /* '<S2>/Chart4' */
  boolean_T VeACTU_na_DcStopDone;      /* '<S2>/Chart4' */
  boolean_T VeACTU_na_ReqMode;         /* '<S2>/Chart' */
  boolean_T VeACTU_na_FbMode;          /* '<S2>/Chart' */
  boolean_T VeACTU_na_RangeUpdt;       /* '<S2>/Chart' */
  boolean_T VeACTU_na_StepMotorResetCmd;/* '<S2>/Chart' */
  boolean_T VeACTU_na_DcRangeUpdt;     /* '<S2>/Chart' */
  B_PreCaliTi_Thermal_Cabin_T PreCaliTi;/* '<S1186>/PreCaliTi' */
  B_EnabledSubsystem_Thermal_Cabin_b_T EnabledSubsystem_gf;/* '<S129>/Enabled Subsystem' */
  B_EnabledSubsystem_Thermal_Cabin_a_T EnabledSubsystem_ia;/* '<S128>/Enabled Subsystem' */
  B_EnabledSubsystem_Thermal_Cabin_a_T EnabledSubsystem_i;/* '<S127>/Enabled Subsystem' */
  B_EnabledSubsystem_Thermal_Cabin_b_T EnabledSubsystem_d;/* '<S126>/Enabled Subsystem' */
  B_EnabledSubsystem3_Thermal_Cabin_T EnabledSubsystem7;/* '<S2>/Enabled Subsystem7' */
  B_EnabledSubsystem3_Thermal_Cabin_T EnabledSubsystem6;/* '<S2>/Enabled Subsystem6' */
  B_EnabledSubsystem3_Thermal_Cabin_T EnabledSubsystem5;/* '<S2>/Enabled Subsystem5' */
  B_EnabledSubsystem3_Thermal_Cabin_T EnabledSubsystem4;/* '<S2>/Enabled Subsystem4' */
  B_EnabledSubsystem3_Thermal_Cabin_T EnabledSubsystem3;/* '<S2>/Enabled Subsystem3' */
} B_Thermal_Cabin_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  dsp_MedianFilter_Thermal_Cabin_T obj;/* '<S25>/Median Filter' */
  real_T Delay1_DSTATE;                /* '<S868>/Delay1' */
  real_T Delay2_DSTATE;                /* '<S869>/Delay2' */
  real_T Delay1_DSTATE_f;              /* '<S870>/Delay1' */
  real_T Delay2_DSTATE_a;              /* '<S871>/Delay2' */
  real_T Delay_DSTATE;                 /* '<S1014>/Delay' */
  real_T Delay_DSTATE_g;               /* '<S1015>/Delay' */
  real_T Delay_DSTATE_c;               /* '<S1016>/Delay' */
  real_T Delay_DSTATE_j;               /* '<S1017>/Delay' */
  real_T cycle;                        /* '<S25>/Chart10' */
  real_T i;                            /* '<S25>/Chart10' */
  real_T TimerCount;                   /* '<S19>/Chart3' */
  real_T TimerCount_a;                 /* '<S19>/Chart2' */
  real32_T UnitDelay_DSTATE;           /* '<S353>/Unit Delay' */
  real32_T Delay8_DSTATE;              /* '<S2>/Delay8' */
  real32_T UnitDelay_DSTATE_o;         /* '<S363>/Unit Delay' */
  real32_T UnitDelay_DSTATE_p;         /* '<S388>/Unit Delay' */
  real32_T UnitDelay_DSTATE_e;         /* '<S328>/Unit Delay' */
  real32_T UnitDelay_DSTATE_a;         /* '<S333>/Unit Delay' */
  real32_T UnitDelay_DSTATE_e0;        /* '<S338>/Unit Delay' */
  real32_T UnitDelay_DSTATE_i;         /* '<S343>/Unit Delay' */
  real32_T Delay9_DSTATE;              /* '<S2>/Delay9' */
  real32_T Delay10_DSTATE;             /* '<S2>/Delay10' */
  real32_T Delay11_DSTATE;             /* '<S2>/Delay11' */
  real32_T Delay12_DSTATE;             /* '<S2>/Delay12' */
  real32_T Delay13_DSTATE;             /* '<S2>/Delay13' */
  real32_T Delay14_DSTATE;             /* '<S2>/Delay14' */
  real32_T Delay25_DSTATE;             /* '<S1>/Delay25' */
  real32_T Delay18_DSTATE;             /* '<S1>/Delay18' */
  real32_T Delay50_DSTATE;             /* '<S1>/Delay50' */
  real32_T Delay51_DSTATE;             /* '<S1>/Delay51' */
  real32_T Delay_DSTATE_e;             /* '<S502>/Delay' */
  real32_T Delay_DSTATE_jp;            /* '<S556>/Delay' */
  real32_T Delay1_DSTATE_fy;           /* '<S502>/Delay1' */
  real32_T Delay28_DSTATE;             /* '<S1>/Delay28' */
  real32_T Delay47_DSTATE;             /* '<S1>/Delay47' */
  real32_T Delay1_DSTATE_m[10];        /* '<S25>/Delay1' */
  real32_T Delay2_DSTATE_g;            /* '<S25>/Delay2' */
  real32_T Delay3_DSTATE[10];          /* '<S25>/Delay3' */
  real32_T Delay4_DSTATE;              /* '<S25>/Delay4' */
  real32_T Delay60_DSTATE[18];         /* '<S1>/Delay60' */
  real32_T Delay61_DSTATE[18];         /* '<S1>/Delay61' */
  real32_T Delay62_DSTATE[18];         /* '<S1>/Delay62' */
  real32_T Delay5_DSTATE;              /* '<S13>/Delay5' */
  real32_T Delay6_DSTATE_c;            /* '<S13>/Delay6' */
  real32_T Delay44_DSTATE;             /* '<S1>/Delay44' */
  real32_T Delay4_DSTATE_l;            /* '<S13>/Delay4' */
  real32_T Delay5_DSTATE_l[10];        /* '<S25>/Delay5' */
  real32_T Delay6_DSTATE_j;            /* '<S25>/Delay6' */
  real32_T UnitDelay_DSTATE_h[4];      /* '<S991>/Unit Delay' */
  real32_T DiscreteTimeIntegrator_DSTATE;/* '<S1179>/Discrete-Time Integrator' */
  real32_T Delay67_DSTATE;             /* '<S1>/Delay67' */
  real32_T Delay_DSTATE_h;             /* '<S691>/Delay' */
  real32_T Delay_DSTATE_jr;            /* '<S9>/Delay' */
  real32_T Delay1_DSTATE_o;            /* '<S688>/Delay1' */
  real32_T Delay65_DSTATE;             /* '<S1>/Delay65' */
  real32_T Delay15_DSTATE;             /* '<S1>/Delay15' */
  real32_T Delay64_DSTATE;             /* '<S1>/Delay64' */
  real32_T Delay3_DSTATE_l;            /* '<S1>/Delay3' */
  real32_T Delay_DSTATE_b;             /* '<S401>/Delay' */
  real32_T Delay_DSTATE_i;             /* '<S492>/Delay' */
  real32_T Delay1_DSTATE_oo;           /* '<S401>/Delay1' */
  real32_T Delay_DSTATE_f4;            /* '<S399>/Delay' */
  real32_T Delay_DSTATE_o;             /* '<S484>/Delay' */
  real32_T Delay1_DSTATE_c;            /* '<S399>/Delay1' */
  real32_T Delay_DSTATE_jg;            /* '<S400>/Delay' */
  real32_T Delay_DSTATE_cn;            /* '<S488>/Delay' */
  real32_T Delay1_DSTATE_a;            /* '<S400>/Delay1' */
  real32_T Delay_DSTATE_k;             /* '<S402>/Delay' */
  real32_T Delay_DSTATE_ox;            /* '<S496>/Delay' */
  real32_T Delay1_DSTATE_mh;           /* '<S402>/Delay1' */
  real32_T Delay_DSTATE_m;             /* '<S503>/Delay' */
  real32_T Delay_DSTATE_ea;            /* '<S560>/Delay' */
  real32_T Delay1_DSTATE_j;            /* '<S503>/Delay1' */
  real32_T Delay20_DSTATE;             /* '<S1>/Delay20' */
  real32_T Delay52_DSTATE;             /* '<S1>/Delay52' */
  real32_T Delay53_DSTATE;             /* '<S1>/Delay53' */
  real32_T Delay_DSTATE_hs;            /* '<S564>/Delay' */
  real32_T Delay_DSTATE_p;             /* '<S610>/Delay' */
  real32_T Delay1_DSTATE_d;            /* '<S564>/Delay1' */
  real32_T Delay_DSTATE_d;             /* '<S566>/Delay' */
  real32_T Delay_DSTATE_di;            /* '<S616>/Delay' */
  real32_T Delay1_DSTATE_b;            /* '<S566>/Delay1' */
  real32_T Delay54_DSTATE;             /* '<S1>/Delay54' */
  real32_T Delay55_DSTATE;             /* '<S1>/Delay55' */
  real32_T Delay_DSTATE_eg;            /* '<S620>/Delay' */
  real32_T Delay_DSTATE_fv;            /* '<S674>/Delay' */
  real32_T Delay1_DSTATE_g;            /* '<S620>/Delay1' */
  real32_T Delay_DSTATE_gj;            /* '<S622>/Delay' */
  real32_T Delay_DSTATE_fp;            /* '<S680>/Delay' */
  real32_T Delay1_DSTATE_g3;           /* '<S622>/Delay1' */
  real32_T Delay57_DSTATE;             /* '<S1>/Delay57' */
  real32_T Delay70_DSTATE;             /* '<S1>/Delay70' */
  real32_T Delay_DSTATE_fr;            /* '<S729>/Delay' */
  real32_T Delay_DSTATE_l;             /* '<S736>/Delay' */
  real32_T Delay1_DSTATE_gv;           /* '<S729>/Delay1' */
  real32_T Delay56_DSTATE;             /* '<S1>/Delay56' */
  real32_T Delay69_DSTATE;             /* '<S1>/Delay69' */
  real32_T Delay_DSTATE_nc;            /* '<S740>/Delay' */
  real32_T Delay_DSTATE_k4;            /* '<S747>/Delay' */
  real32_T Delay1_DSTATE_l;            /* '<S740>/Delay1' */
  real32_T Delay58_DSTATE;             /* '<S1>/Delay58' */
  real32_T Delay68_DSTATE;             /* '<S1>/Delay68' */
  real32_T Delay_DSTATE_ka;            /* '<S751>/Delay' */
  real32_T Delay_DSTATE_lb;            /* '<S758>/Delay' */
  real32_T Delay1_DSTATE_n;            /* '<S751>/Delay1' */
  real32_T Delay11_DSTATE_o;           /* '<S1>/Delay11' */
  real32_T Delay_DSTATE_jw;            /* '<S762>/Delay' */
  real32_T Delay_DSTATE_gw;            /* '<S769>/Delay' */
  real32_T Delay1_DSTATE_cn;           /* '<S762>/Delay1' */
  real32_T Delay66_DSTATE;             /* '<S1>/Delay66' */
  real32_T Delay12_DSTATE_k;           /* '<S1>/Delay12' */
  real32_T Delay_DSTATE_ns;            /* '<S855>/Delay' */
  real32_T Delay_DSTATE_fc;            /* '<S863>/Delay' */
  real32_T Delay1_DSTATE_ll;           /* '<S855>/Delay1' */
  real32_T Delay_DSTATE_oy;            /* '<S854>/Delay' */
  real32_T Delay_DSTATE_ip;            /* '<S859>/Delay' */
  real32_T Delay1_DSTATE_f2;           /* '<S854>/Delay1' */
  real32_T Delay48_DSTATE;             /* '<S1>/Delay48' */
  real32_T Delay_DSTATE_ls;            /* '<S868>/Delay' */
  real32_T Delay1_DSTATE_oa;           /* '<S869>/Delay1' */
  real32_T Delay_DSTATE_ou;            /* '<S870>/Delay' */
  real32_T Delay1_DSTATE_h;            /* '<S871>/Delay1' */
  real32_T Delay45_DSTATE;             /* '<S1>/Delay45' */
  real32_T Delay42_DSTATE;             /* '<S1>/Delay42' */
  real32_T Delay43_DSTATE;             /* '<S1>/Delay43' */
  real32_T Delay_DSTATE_m5;            /* '<S934>/Delay' */
  real32_T Delay24_DSTATE;             /* '<S1>/Delay24' */
  real32_T Delay26_DSTATE;             /* '<S1>/Delay26' */
  real32_T Delay27_DSTATE;             /* '<S1>/Delay27' */
  real32_T Delay29_DSTATE;             /* '<S1>/Delay29' */
  real32_T Delay7_DSTATE[10];          /* '<S25>/Delay7' */
  real32_T Delay8_DSTATE_l;            /* '<S25>/Delay8' */
  real32_T Delay_DSTATE_h1;            /* '<S44>/Delay' */
  real32_T Delay2_DSTATE_l;            /* '<S44>/Delay2' */
  real32_T Delay1_DSTATE_lj;           /* '<S44>/Delay1' */
  real32_T Delay1_DSTATE_jp;           /* '<S1157>/Delay1' */
  real32_T Delay_DSTATE_cj;            /* '<S1156>/Delay' */
  real32_T Delay_DSTATE_dq;            /* '<S1159>/Delay' */
  real32_T Delay_DSTATE_gf;            /* '<S977>/Delay' */
  real32_T Delay1_DSTATE_i;            /* '<S977>/Delay1' */
  real32_T Delay_DSTATE_o3;            /* '<S925>/Delay' */
  real32_T Delay1_DSTATE_ha;           /* '<S925>/Delay1' */
  real32_T Delay2_DSTATE_o;            /* '<S925>/Delay2' */
  real32_T Delay2_DSTATE_d;            /* '<S923>/Delay2' */
  real32_T Delay3_DSTATE_e;            /* '<S923>/Delay3' */
  real32_T UnitDelay_DSTATE_f;         /* '<S827>/Unit Delay' */
  real32_T UnitDelay_DSTATE_m;         /* '<S826>/Unit Delay' */
  real32_T DiscreteTimeIntegrator_DSTATE_d;/* '<S764>/Discrete-Time Integrator' */
  real32_T DiscreteTimeIntegrator_DSTATE_i;/* '<S753>/Discrete-Time Integrator' */
  real32_T DiscreteTimeIntegrator_DSTATE_h;/* '<S742>/Discrete-Time Integrator' */
  real32_T DiscreteTimeIntegrator_DSTATE_g;/* '<S731>/Discrete-Time Integrator' */
  real32_T Delay_DSTATE_jf;            /* '<S704>/Delay' */
  real32_T Delay_DSTATE_cw;            /* '<S701>/Delay' */
  real32_T value_buff[15];             /* '<S25>/Chart10' */
  uint16_T Delay7_DSTATE_o;            /* '<S2>/Delay7' */
  uint16_T Delay6_DSTATE_k;            /* '<S2>/Delay6' */
  uint16_T Delay5_DSTATE_e;            /* '<S2>/Delay5' */
  uint16_T Delay4_DSTATE_c;            /* '<S2>/Delay4' */
  uint16_T Delay3_DSTATE_c;            /* '<S2>/Delay3' */
  uint16_T Delay2_DSTATE_dw;           /* '<S2>/Delay2' */
  uint16_T Delay1_DSTATE_hm;           /* '<S2>/Delay1' */
  uint16_T Delay_DSTATE_ds;            /* '<S689>/Delay' */
  uint16_T Delay_DSTATE_la;            /* '<S924>/Delay' */
  uint16_T Delay_DSTATE_jpy;           /* '<S716>/Delay' */
  uint16_T Delay1_DSTATE_hm2;          /* '<S356>/Delay1' */
  uint16_T Delay1_DSTATE_o3;           /* '<S346>/Delay1' */
  uint16_T Delay1_DSTATE_aq;           /* '<S321>/Delay1' */
  uint16_T temporalCounter_i3;         /* '<S1186>/Chart1' */
  uint16_T Timercount;                 /* '<S1186>/Chart' */
  uint16_T TimerCount_n;               /* '<S926>/Chart1' */
  uint16_T Timercount_d;               /* '<S817>/Chart4' */
  uint16_T temporalCounter_i1;         /* '<S15>/Chart' */
  uint16_T temporalCounter_i1_a;       /* '<S9>/Chart' */
  uint16_T temporalCounter_i1_k;       /* '<S393>/Chart' */
  uint16_T temporalCounter_i1_c;       /* '<S392>/Chart' */
  uint16_T temporalCounter_i1_kj;      /* '<S391>/Chart' */
  uint16_T temporalCounter_i1_l;       /* '<S390>/Chart' */
  uint16_T PreAssignTimerCount;        /* '<S2>/Chart' */
  uint16_T temporalCounter_i2;         /* '<S2>/Chart' */
  uint8_T Delay17_DSTATE;              /* '<S2>/Delay17' */
  uint8_T Delay19_DSTATE;              /* '<S2>/Delay19' */
  uint8_T Delay59_DSTATE;              /* '<S1>/Delay59' */
  uint8_T Delay2_DSTATE_j;             /* '<S13>/Delay2' */
  uint8_T Delay_DSTATE_fl;             /* '<S392>/Delay' */
  uint8_T Delay7_DSTATE_e;             /* '<S13>/Delay7' */
  uint8_T Delay1_DSTATE_nb;            /* '<S13>/Delay1' */
  uint8_T Delay3_DSTATE_lw;            /* '<S13>/Delay3' */
  uint8_T Delay46_DSTATE;              /* '<S1>/Delay46' */
  uint8_T Delay10_DSTATE_h[110];       /* '<S1>/Delay10' */
  uint8_T Delay1_DSTATE_mo;            /* '<S1186>/Delay1' */
  uint8_T Delay_DSTATE_cwh;            /* '<S1186>/Delay' */
  uint8_T Delay_DSTATE_n5;             /* '<S94>/Delay' */
  boolean_T Delay15_DSTATE_j;          /* '<S2>/Delay15' */
  boolean_T Delay18_DSTATE_m;          /* '<S2>/Delay18' */
  boolean_T Delay16_DSTATE;            /* '<S2>/Delay16' */
  boolean_T Delay_DSTATE_c0;           /* '<S391>/Delay' */
  boolean_T Delay19_DSTATE_p;          /* '<S1>/Delay19' */
  boolean_T Delay_DSTATE_ej;           /* '<S2>/Delay' */
  boolean_T Delay_DSTATE_hh;           /* '<S390>/Delay' */
  boolean_T Delay2_DSTATE_i;           /* '<S1>/Delay2' */
  boolean_T Delay5_DSTATE_g;           /* '<S1>/Delay5' */
  boolean_T Delay8_DSTATE_i;           /* '<S1>/Delay8' */
  boolean_T Delay71_DSTATE;            /* '<S1>/Delay71' */
  boolean_T Delay8_DSTATE_a;           /* '<S13>/Delay8' */
  boolean_T Delay1_DSTATE_m2[2];       /* '<S19>/Delay1' */
  boolean_T Delay16_DSTATE_i;          /* '<S1>/Delay16' */
  boolean_T Delay17_DSTATE_f;          /* '<S1>/Delay17' */
  boolean_T Delay21_DSTATE;            /* '<S1>/Delay21' */
  boolean_T Delay_DSTATE_a;            /* '<S393>/Delay' */
  boolean_T Delay_DSTATE_mc;           /* '<S690>/Delay' */
  boolean_T Delay1_DSTATE_k;           /* '<S1>/Delay1' */
  boolean_T Delay4_DSTATE_p;           /* '<S1>/Delay4' */
  boolean_T Delay7_DSTATE_m;           /* '<S1>/Delay7' */
  boolean_T Delay_DSTATE_gs;           /* '<S13>/Delay' */
  boolean_T UnitDelay_DSTATE_n;        /* '<S15>/Unit Delay' */
  boolean_T UnitDelay1_DSTATE;         /* '<S15>/Unit Delay1' */
  boolean_T Delay_DSTATE_dp;           /* '<S15>/Delay' */
  boolean_T Delay13_DSTATE_l;          /* '<S1>/Delay13' */
  boolean_T Delay14_DSTATE_m;          /* '<S1>/Delay14' */
  boolean_T Delay72_DSTATE;            /* '<S1>/Delay72' */
  uint8_T is_active_c119_Thermal_Cabin;/* '<S25>/Chart6' */
  uint8_T is_c119_Thermal_Cabin;       /* '<S25>/Chart6' */
  uint8_T is_a;                        /* '<S25>/Chart6' */
  uint8_T is_active_c108_Thermal_Cabin;/* '<S25>/Chart10' */
  uint8_T is_c108_Thermal_Cabin;       /* '<S25>/Chart10' */
  uint8_T is_active_c2_Thermal_Cabin;  /* '<S1186>/Chart1' */
  uint8_T is_c2_Thermal_Cabin;         /* '<S1186>/Chart1' */
  uint8_T is_Naplnit;                  /* '<S1186>/Chart1' */
  uint8_T is_Normal;                   /* '<S1186>/Chart1' */
  uint8_T temporalCounter_i1_g;        /* '<S1186>/Chart1' */
  uint8_T temporalCounter_i2_a;        /* '<S1186>/Chart1' */
  uint8_T temporalCounter_i4;          /* '<S1186>/Chart1' */
  uint8_T is_active_c1_Thermal_Cabin;  /* '<S1186>/Chart' */
  uint8_T is_c1_Thermal_Cabin;         /* '<S1186>/Chart' */
  uint8_T is_active_c344_Thermal_Cabin;/* '<S1181>/Chart' */
  uint8_T is_c344_Thermal_Cabin;       /* '<S1181>/Chart' */
  uint8_T is_active_c342_Thermal_Cabin;/* '<S21>/Chart' */
  uint8_T is_c342_Thermal_Cabin;       /* '<S21>/Chart' */
  uint8_T is_active_c47_Thermal_Cabin; /* '<S1114>/Chart' */
  uint8_T is_active_c46_Thermal_Cabin; /* '<S1113>/Chart' */
  uint8_T is_active_c45_Thermal_Cabin; /* '<S1087>/Chart' */
  uint8_T is_active_c44_Thermal_Cabin; /* '<S1086>/Chart' */
  uint8_T is_active_c43_Thermal_Cabin; /* '<S1059>/Chart' */
  uint8_T is_active_c42_Thermal_Cabin; /* '<S1058>/Chart' */
  uint8_T is_active_c41_Thermal_Cabin; /* '<S1024>/Chart' */
  uint8_T is_active_c40_Thermal_Cabin; /* '<S1023>/Chart' */
  uint8_T is_active_c39_Thermal_Cabin; /* '<S1009>/Chart3' */
  uint8_T is_active_c38_Thermal_Cabin; /* '<S1009>/Chart2' */
  uint8_T is_active_c37_Thermal_Cabin; /* '<S1009>/Chart1' */
  uint8_T is_active_c36_Thermal_Cabin; /* '<S1009>/Chart' */
  uint8_T is_active_c35_Thermal_Cabin; /* '<S930>/Chart' */
  uint8_T is_active_c34_Thermal_Cabin; /* '<S926>/Chart1' */
  uint8_T is_c34_Thermal_Cabin;        /* '<S926>/Chart1' */
  uint8_T is_active_c33_Thermal_Cabin; /* '<S926>/Chart' */
  uint8_T is_c33_Thermal_Cabin;        /* '<S926>/Chart' */
  uint8_T temporalCounter_i1_o;        /* '<S926>/Chart' */
  uint8_T is_active_c32_Thermal_Cabin; /* '<S925>/Chart1' */
  uint8_T is_active_c31_Thermal_Cabin; /* '<S925>/Chart' */
  uint8_T is_active_c30_Thermal_Cabin; /* '<S19>/Chart3' */
  uint8_T is_c30_Thermal_Cabin;        /* '<S19>/Chart3' */
  uint8_T is_active_c29_Thermal_Cabin; /* '<S19>/Chart2' */
  uint8_T is_c29_Thermal_Cabin;        /* '<S19>/Chart2' */
  uint8_T is_active_c28_Thermal_Cabin; /* '<S19>/Chart1' */
  uint8_T is_c28_Thermal_Cabin;        /* '<S19>/Chart1' */
  uint8_T is_Normal_g;                 /* '<S19>/Chart1' */
  uint8_T is_active_c27_Thermal_Cabin; /* '<S19>/Chart' */
  uint8_T is_active_c165_Thermal_Cabin;/* '<S817>/Chart6' */
  uint8_T is_active_c164_Thermal_Cabin;/* '<S817>/Chart4' */
  uint8_T is_c164_Thermal_Cabin;       /* '<S817>/Chart4' */
  uint8_T is_Act;                      /* '<S817>/Chart4' */
  uint8_T is_active_c163_Thermal_Cabin;/* '<S817>/Chart' */
  uint8_T is_active_c160_Thermal_Cabin;/* '<S15>/Chart' */
  uint8_T is_c160_Thermal_Cabin;       /* '<S15>/Chart' */
  uint8_T is_Auto;                     /* '<S15>/Chart' */
  uint8_T is_Abandon;                  /* '<S15>/Chart' */
  uint8_T is_active_c308_Thermal_Cabin;/* '<S13>/HMIDetect' */
  uint8_T is_active_c195_Thermal_Cabin;/* '<S725>/Chart' */
  uint8_T is_c195_Thermal_Cabin;       /* '<S725>/Chart' */
  uint8_T is_S4_Abandon;               /* '<S725>/Chart' */
  uint8_T temporalCounter_i1_ar;       /* '<S725>/Chart' */
  uint8_T is_active_c192_Thermal_Cabin;/* '<S724>/Chart' */
  uint8_T is_c192_Thermal_Cabin;       /* '<S724>/Chart' */
  uint8_T is_S4_Abandon_m;             /* '<S724>/Chart' */
  uint8_T temporalCounter_i1_ln;       /* '<S724>/Chart' */
  uint8_T is_active_c189_Thermal_Cabin;/* '<S723>/Chart' */
  uint8_T is_c189_Thermal_Cabin;       /* '<S723>/Chart' */
  uint8_T is_S4_Abandon_c;             /* '<S723>/Chart' */
  uint8_T temporalCounter_i1_o2;       /* '<S723>/Chart' */
  uint8_T is_active_c186_Thermal_Cabin;/* '<S722>/Chart' */
  uint8_T is_c186_Thermal_Cabin;       /* '<S722>/Chart' */
  uint8_T is_S4_Abandon_e;             /* '<S722>/Chart' */
  uint8_T temporalCounter_i1_oh;       /* '<S722>/Chart' */
  uint8_T is_active_c307_Thermal_Cabin;/* '<S690>/Chart' */
  uint8_T is_active_c306_Thermal_Cabin;/* '<S9>/Chart1' */
  uint8_T is_active_c305_Thermal_Cabin;/* '<S9>/Chart' */
  uint8_T is_c305_Thermal_Cabin;       /* '<S9>/Chart' */
  uint8_T is_S123_Act;                 /* '<S9>/Chart' */
  uint8_T is_active_c304_Thermal_Cabin;/* '<S621>/Chart1' */
  uint8_T is_active_c303_Thermal_Cabin;/* '<S621>/Chart' */
  uint8_T is_active_c302_Thermal_Cabin;/* '<S393>/Chart' */
  uint8_T is_c302_Thermal_Cabin;       /* '<S393>/Chart' */
  uint8_T is_SemiAuto1;                /* '<S393>/Chart' */
  uint8_T is_Abandon1;                 /* '<S393>/Chart' */
  uint8_T is_active_c301_Thermal_Cabin;/* '<S565>/Chart1' */
  uint8_T is_active_c300_Thermal_Cabin;/* '<S565>/Chart' */
  uint8_T is_active_c299_Thermal_Cabin;/* '<S392>/Chart' */
  uint8_T is_c299_Thermal_Cabin;       /* '<S392>/Chart' */
  uint8_T is_SemiAuto;                 /* '<S392>/Chart' */
  uint8_T is_Abandon_g;                /* '<S392>/Chart' */
  uint8_T is_active_c298_Thermal_Cabin;/* '<S501>/Chart1' */
  uint8_T is_active_c297_Thermal_Cabin;/* '<S501>/Chart' */
  uint8_T is_active_c296_Thermal_Cabin;/* '<S500>/Chart' */
  uint8_T is_active_c295_Thermal_Cabin;/* '<S391>/Chart' */
  uint8_T is_c295_Thermal_Cabin;       /* '<S391>/Chart' */
  uint8_T is_Abandon_b;                /* '<S391>/Chart' */
  uint8_T is_active_c294_Thermal_Cabin;/* '<S398>/Chart1' */
  uint8_T is_active_c293_Thermal_Cabin;/* '<S398>/Chart' */
  uint8_T is_active_c292_Thermal_Cabin;/* '<S397>/Chart' */
  uint8_T is_active_c291_Thermal_Cabin;/* '<S390>/Chart' */
  uint8_T is_c291_Thermal_Cabin;       /* '<S390>/Chart' */
  uint8_T is_SemiAuto_d;               /* '<S390>/Chart' */
  uint8_T is_Abandon_h;                /* '<S390>/Chart' */
  uint8_T is_active_c11_Thermal_Cabin; /* '<S224>/Step' */
  uint8_T is_active_c173_Thermal_Cabin;/* '<S2>/Chart4' */
  uint8_T is_active_c166_Thermal_Cabin;/* '<S2>/Chart33' */
  uint8_T is_active_c143_Thermal_Cabin;/* '<S2>/Chart20' */
  uint8_T is_active_c142_Thermal_Cabin;/* '<S2>/Chart2' */
  uint8_T is_active_c129_Thermal_Cabin;/* '<S2>/Chart1' */
  uint8_T is_active_c128_Thermal_Cabin;/* '<S2>/Chart' */
  uint8_T is_c128_Thermal_Cabin;       /* '<S2>/Chart' */
  uint8_T is_Abandon_f;                /* '<S2>/Chart' */
  uint8_T VeACTU_na_ActrOperCtr;       /* '<S2>/Chart' */
  uint8_T VeACTU_na_SelfStudyFailCtr;  /* '<S2>/Chart' */
  uint8_T temporalCounter_i1_gy;       /* '<S2>/Chart' */
  boolean_T icLoad;                    /* '<S502>/Delay' */
  boolean_T icLoad_c;                  /* '<S556>/Delay' */
  boolean_T icLoad_g;                  /* '<S401>/Delay' */
  boolean_T icLoad_m;                  /* '<S492>/Delay' */
  boolean_T icLoad_b;                  /* '<S399>/Delay' */
  boolean_T icLoad_a;                  /* '<S484>/Delay' */
  boolean_T icLoad_j;                  /* '<S400>/Delay' */
  boolean_T icLoad_p;                  /* '<S488>/Delay' */
  boolean_T icLoad_jx;                 /* '<S402>/Delay' */
  boolean_T icLoad_gx;                 /* '<S496>/Delay' */
  boolean_T icLoad_h;                  /* '<S503>/Delay' */
  boolean_T icLoad_d;                  /* '<S560>/Delay' */
  boolean_T icLoad_l;                  /* '<S564>/Delay' */
  boolean_T icLoad_jg;                 /* '<S610>/Delay' */
  boolean_T icLoad_o;                  /* '<S566>/Delay' */
  boolean_T icLoad_e;                  /* '<S616>/Delay' */
  boolean_T icLoad_a5;                 /* '<S620>/Delay' */
  boolean_T icLoad_cn;                 /* '<S674>/Delay' */
  boolean_T icLoad_jm;                 /* '<S622>/Delay' */
  boolean_T icLoad_b5;                 /* '<S680>/Delay' */
  boolean_T icLoad_hy;                 /* '<S729>/Delay' */
  boolean_T icLoad_cq;                 /* '<S736>/Delay' */
  boolean_T icLoad_jd;                 /* '<S740>/Delay' */
  boolean_T icLoad_mt;                 /* '<S747>/Delay' */
  boolean_T icLoad_ji;                 /* '<S751>/Delay' */
  boolean_T icLoad_f;                  /* '<S758>/Delay' */
  boolean_T icLoad_n;                  /* '<S762>/Delay' */
  boolean_T icLoad_es;                 /* '<S769>/Delay' */
  boolean_T u090_Mode;                 /* '<S815>/80-90' */
  boolean_T u070_Mode;                 /* '<S815>/60-70' */
  boolean_T u050_Mode;                 /* '<S815>/40-50' */
  boolean_T u020_Mode;                 /* '<S815>/10-20' */
  boolean_T icLoad_pr;                 /* '<S855>/Delay' */
  boolean_T icLoad_k;                  /* '<S863>/Delay' */
  boolean_T icLoad_jt;                 /* '<S854>/Delay' */
  boolean_T icLoad_av;                 /* '<S859>/Delay' */
  boolean_T icLoad_lk;                 /* '<S716>/Delay' */
  boolean_T TimeOut;                   /* '<S2>/Chart' */
  DW_Chart_Thermal_Cabin_m_T sf_Chart16_fa;/* '<S1283>/Chart16' */
  DW_Chart_Thermal_Cabin_m_T sf_Chart15_m;/* '<S1283>/Chart15' */
  DW_Chart8_Thermal_Cabin_T sf_Chart9_b;/* '<S25>/Chart9' */
  DW_Chart8_Thermal_Cabin_T sf_Chart8_i;/* '<S25>/Chart8' */
  DW_Chart_Thermal_Cabin_m_T sf_Chart7_i;/* '<S25>/Chart7' */
  DW_Chart_Thermal_Cabin_m_T sf_Chart5_b;/* '<S25>/Chart5' */
  DW_Chart_Thermal_Cabin_m_T sf_Chart4_f;/* '<S25>/Chart4' */
  DW_Chart_Thermal_Cabin_m_T sf_Chart3_a;/* '<S25>/Chart3' */
  DW_Chart_Thermal_Cabin_m_T sf_Chart2_k;/* '<S25>/Chart2' */
  DW_Chart_Thermal_Cabin_m_T sf_Chart12_p;/* '<S25>/Chart12' */
  DW_Chart_Thermal_Cabin_m_T sf_Chart11_c;/* '<S25>/Chart11' */
  DW_Chart_Thermal_Cabin_m_T sf_Chart1_fq;/* '<S25>/Chart1' */
  DW_Chart_Thermal_Cabin_m_T sf_Chart_os;/* '<S25>/Chart' */
  DW_PreCaliTi_Thermal_Cabin_T PreCaliTi;/* '<S1186>/PreCaliTi' */
  DW_Chart1_Thermal_Cabin_T sf_Chart2_ab;/* '<S130>/Chart2' */
  DW_Chart16_Thermal_Cabin_T sf_Chart16_d;/* '<S130>/Chart16' */
  DW_Chart1_Thermal_Cabin_T sf_Chart1_l;/* '<S130>/Chart1' */
  DW_EnabledSubsystem_Thermal_Cabin_h_T EnabledSubsystem_gf;/* '<S129>/Enabled Subsystem' */
  DW_Chart_Thermal_Cabin_T sf_Chart_pq;/* '<S129>/Chart' */
  DW_EnabledSubsystem_Thermal_Cabin_n_T EnabledSubsystem_ia;/* '<S128>/Enabled Subsystem' */
  DW_Chart_Thermal_Cabin_T sf_Chart_f; /* '<S128>/Chart' */
  DW_EnabledSubsystem_Thermal_Cabin_n_T EnabledSubsystem_i;/* '<S127>/Enabled Subsystem' */
  DW_Chart_Thermal_Cabin_T sf_Chart_c; /* '<S127>/Chart' */
  DW_EnabledSubsystem_Thermal_Cabin_h_T EnabledSubsystem_d;/* '<S126>/Enabled Subsystem' */
  DW_Chart_Thermal_Cabin_T sf_Chart_or;/* '<S126>/Chart' */
  DW_Chart1_Thermal_Cabin_T sf_Chart2_o;/* '<S125>/Chart2' */
  DW_Chart16_Thermal_Cabin_T sf_Chart16_o;/* '<S125>/Chart16' */
  DW_Chart1_Thermal_Cabin_T sf_Chart1_b;/* '<S125>/Chart1' */
  DW_Chart1_Thermal_Cabin_T sf_Chart1_l3;/* '<S356>/Chart1' */
  DW_Chart_Thermal_Cabin_f_T sf_Chart_oc;/* '<S356>/Chart' */
  DW_Chart_Thermal_Cabin_T sf_Chart_d; /* '<S124>/Chart' */
  DW_Chart1_Thermal_Cabin_T sf_Chart2_a;/* '<S123>/Chart2' */
  DW_Chart16_Thermal_Cabin_T sf_Chart16_m;/* '<S123>/Chart16' */
  DW_Chart1_Thermal_Cabin_T sf_Chart1_e;/* '<S123>/Chart1' */
  DW_Chart1_Thermal_Cabin_T sf_Chart1_h;/* '<S346>/Chart1' */
  DW_Chart_Thermal_Cabin_f_T sf_Chart_dy;/* '<S346>/Chart' */
  DW_Chart_Thermal_Cabin_T sf_Chart_o; /* '<S122>/Chart' */
  DW_Chart1_Thermal_Cabin_T sf_Chart2_b;/* '<S121>/Chart2' */
  DW_Chart16_Thermal_Cabin_T sf_Chart16_g;/* '<S121>/Chart16' */
  DW_Chart1_Thermal_Cabin_T sf_Chart1_f;/* '<S121>/Chart1' */
  DW_Chart1_Thermal_Cabin_T sf_Chart2_i;/* '<S120>/Chart2' */
  DW_Chart16_Thermal_Cabin_T sf_Chart16_f;/* '<S120>/Chart16' */
  DW_Chart1_Thermal_Cabin_T sf_Chart1_i;/* '<S120>/Chart1' */
  DW_Chart1_Thermal_Cabin_T sf_Chart2_f;/* '<S119>/Chart2' */
  DW_Chart16_Thermal_Cabin_T sf_Chart16_b;/* '<S119>/Chart16' */
  DW_Chart1_Thermal_Cabin_T sf_Chart1_j;/* '<S119>/Chart1' */
  DW_Chart1_Thermal_Cabin_T sf_Chart2_j;/* '<S118>/Chart2' */
  DW_Chart16_Thermal_Cabin_T sf_Chart16_h;/* '<S118>/Chart16' */
  DW_Chart1_Thermal_Cabin_T sf_Chart1_k;/* '<S118>/Chart1' */
  DW_Chart1_Thermal_Cabin_T sf_Chart1_jm;/* '<S321>/Chart1' */
  DW_Chart_Thermal_Cabin_f_T sf_Chart_ga;/* '<S321>/Chart' */
  DW_Chart_Thermal_Cabin_T sf_Chart_p; /* '<S117>/Chart' */
  DW_EnabledSubsystem1_Thermal_Cabin_m_T EnabledSubsystem1_de;/* '<S115>/Enabled Subsystem1' */
  DW_EnabledSubsystem3_Thermal_Cabin_T EnabledSubsystem7;/* '<S2>/Enabled Subsystem7' */
  DW_EnabledSubsystem3_Thermal_Cabin_T EnabledSubsystem6;/* '<S2>/Enabled Subsystem6' */
  DW_EnabledSubsystem3_Thermal_Cabin_T EnabledSubsystem5;/* '<S2>/Enabled Subsystem5' */
  DW_EnabledSubsystem3_Thermal_Cabin_T EnabledSubsystem4;/* '<S2>/Enabled Subsystem4' */
  DW_EnabledSubsystem3_Thermal_Cabin_T EnabledSubsystem3;/* '<S2>/Enabled Subsystem3' */
  DW_EnabledSubsystem16_Thermal_Cabin_T EnabledSubsystem21;/* '<S2>/Enabled Subsystem21' */
  DW_EnabledSubsystem16_Thermal_Cabin_T EnabledSubsystem20;/* '<S2>/Enabled Subsystem20' */
  DW_DC_Thermal_Cabin_T sf_DC;         /* '<S224>/DC' */
  DW_EnabledSubsystem16_Thermal_Cabin_T EnabledSubsystem19;/* '<S2>/Enabled Subsystem19' */
  DW_EnabledSubsystem16_Thermal_Cabin_T EnabledSubsystem18;/* '<S2>/Enabled Subsystem18' */
  DW_EnabledSubsystem16_Thermal_Cabin_T EnabledSubsystem17;/* '<S2>/Enabled Subsystem17' */
  DW_EnabledSubsystem16_Thermal_Cabin_T EnabledSubsystem16;/* '<S2>/Enabled Subsystem16' */
  DW_EnabledSubsystem1_Thermal_Cabin_T EnabledSubsystem1_b;/* '<S94>/Enabled Subsystem1' */
  DW_Chart10_Thermal_Cabin_T sf_Chart9;/* '<S2>/Chart9' */
  DW_Chart10_Thermal_Cabin_T sf_Chart8;/* '<S2>/Chart8' */
  DW_Chart10_Thermal_Cabin_T sf_Chart7;/* '<S2>/Chart7' */
  DW_Chart10_Thermal_Cabin_T sf_Chart6;/* '<S2>/Chart6' */
  DW_Chart10_Thermal_Cabin_T sf_Chart5;/* '<S2>/Chart5' */
  DW_Chart37_Thermal_Cabin_T sf_Chart43;/* '<S2>/Chart43' */
  DW_Chart37_Thermal_Cabin_T sf_Chart42;/* '<S2>/Chart42' */
  DW_Chart37_Thermal_Cabin_T sf_Chart41;/* '<S2>/Chart41' */
  DW_Chart37_Thermal_Cabin_T sf_Chart40;/* '<S2>/Chart40' */
  DW_Chart37_Thermal_Cabin_T sf_Chart39;/* '<S2>/Chart39' */
  DW_Chart37_Thermal_Cabin_T sf_Chart38;/* '<S2>/Chart38' */
  DW_Chart37_Thermal_Cabin_T sf_Chart37;/* '<S2>/Chart37' */
  DW_Chart30_Thermal_Cabin_T sf_Chart36;/* '<S2>/Chart36' */
  DW_Chart30_Thermal_Cabin_T sf_Chart35;/* '<S2>/Chart35' */
  DW_Chart30_Thermal_Cabin_T sf_Chart34;/* '<S2>/Chart34' */
  DW_Chart30_Thermal_Cabin_T sf_Chart32;/* '<S2>/Chart32' */
  DW_Chart30_Thermal_Cabin_T sf_Chart31;/* '<S2>/Chart31' */
  DW_Chart30_Thermal_Cabin_T sf_Chart30;/* '<S2>/Chart30' */
  DW_Chart17_Thermal_Cabin_T sf_Chart3;/* '<S2>/Chart3' */
  DW_Chart23_Thermal_Cabin_T sf_Chart29;/* '<S2>/Chart29' */
  DW_Chart23_Thermal_Cabin_T sf_Chart28;/* '<S2>/Chart28' */
  DW_Chart23_Thermal_Cabin_T sf_Chart27;/* '<S2>/Chart27' */
  DW_Chart23_Thermal_Cabin_T sf_Chart26;/* '<S2>/Chart26' */
  DW_Chart23_Thermal_Cabin_T sf_Chart25;/* '<S2>/Chart25' */
  DW_Chart23_Thermal_Cabin_T sf_Chart24;/* '<S2>/Chart24' */
  DW_Chart23_Thermal_Cabin_T sf_Chart23;/* '<S2>/Chart23' */
  DW_Chart17_Thermal_Cabin_T sf_Chart22;/* '<S2>/Chart22' */
  DW_Chart17_Thermal_Cabin_T sf_Chart21;/* '<S2>/Chart21' */
  DW_Chart17_Thermal_Cabin_T sf_Chart19;/* '<S2>/Chart19' */
  DW_Chart17_Thermal_Cabin_T sf_Chart18;/* '<S2>/Chart18' */
  DW_Chart17_Thermal_Cabin_T sf_Chart17;/* '<S2>/Chart17' */
  DW_Chart11_Thermal_Cabin_T sf_Chart16;/* '<S2>/Chart16' */
  DW_Chart11_Thermal_Cabin_T sf_Chart15;/* '<S2>/Chart15' */
  DW_Chart11_Thermal_Cabin_T sf_Chart14;/* '<S2>/Chart14' */
  DW_Chart11_Thermal_Cabin_T sf_Chart13;/* '<S2>/Chart13' */
  DW_Chart11_Thermal_Cabin_T sf_Chart12;/* '<S2>/Chart12' */
  DW_Chart11_Thermal_Cabin_T sf_Chart11;/* '<S2>/Chart11' */
  DW_Chart10_Thermal_Cabin_T sf_Chart10;/* '<S2>/Chart10' */
} DW_Thermal_Cabin_T;

/* Invariant block signals for system '<S105>/Enabled Subsystem' */
typedef struct {
  const uint8_T Constant2;             /* '<S225>/Constant2' */
  const uint8_T Constant5;             /* '<S225>/Constant5' */
  const boolean_T Constant1;           /* '<S225>/Constant1' */
  const boolean_T Constant4;           /* '<S225>/Constant4' */
} ConstB_EnabledSubsystem_Thermal_Cabin_T;

/* Invariant block signals for system '<S2>/Enabled Subsystem3' */
typedef struct {
  ConstB_EnabledSubsystem_Thermal_Cabin_T EnabledSubsystem;/* '<S109>/Enabled Subsystem' */
} ConstB_EnabledSubsystem3_Thermal_Cabin_T;

/* Invariant block signals for system '<S1213>/SunIntCalcu' */
typedef struct {
  const real32_T Gain3;                /* '<S1247>/Gain3' */
  const real32_T Gain4;                /* '<S1247>/Gain4' */
  const real32_T TrigonometricFunction4;/* '<S1247>/Trigonometric Function4' */
  const real32_T TrigonometricFunction5;/* '<S1247>/Trigonometric Function5' */
} ConstB_SunIntCalcu_Thermal_Cabin_T;

/* Invariant block signals for system '<S1186>/PreCaliTi' */
typedef struct {
  const real_T Gain1;                  /* '<S1246>/Gain1' */
  const real_T Gain10;                 /* '<S1246>/Gain10' */
  const real_T Gain11;                 /* '<S1246>/Gain11' */
  const real_T Gain12;                 /* '<S1246>/Gain12' */
  const real_T Gain13;                 /* '<S1246>/Gain13' */
  const real_T Gain14;                 /* '<S1246>/Gain14' */
  const real_T Gain15;                 /* '<S1246>/Gain15' */
  const real_T Gain16;                 /* '<S1246>/Gain16' */
  const real_T Gain17;                 /* '<S1246>/Gain17' */
  const real_T Gain18;                 /* '<S1246>/Gain18' */
  const real_T Gain19;                 /* '<S1246>/Gain19' */
  const real_T Gain2;                  /* '<S1246>/Gain2' */
  const real_T Gain20;                 /* '<S1246>/Gain20' */
  const real_T Gain3;                  /* '<S1246>/Gain3' */
  const real_T Gain4;                  /* '<S1246>/Gain4' */
  const real_T Gain5;                  /* '<S1246>/Gain5' */
  const real_T Gain6;                  /* '<S1246>/Gain6' */
  const real_T Gain7;                  /* '<S1246>/Gain7' */
  const real_T Gain8;                  /* '<S1246>/Gain8' */
  const real_T Gain9;                  /* '<S1246>/Gain9' */
  const real_T F_inisnr;               /* '<S1209>/KePCAT_Scnd_SnrIniWght2' */
  const real_T Subtract;               /* '<S1209>/Subtract' */
  const real_T TiVld;                  /* '<S1208>/Constant' */
  const uint16_T Divide1;              /* '<S1242>/Divide1' */
  const boolean_T Compare;             /* '<S1231>/Compare' */
  const boolean_T Compare_m;           /* '<S1232>/Compare' */
  const boolean_T Compare_l;           /* '<S1233>/Compare' */
  const boolean_T Compare_j;           /* '<S1234>/Compare' */
  ConstB_SunIntCalcu_Thermal_Cabin_T SunIntCalcu;/* '<S1213>/SunIntCalcu' */
} ConstB_PreCaliTi_Thermal_Cabin_T;

/* Invariant block signals (default storage) */
typedef struct {
  const real32_T DataTypeConversion;   /* '<S1>/Data Type Conversion' */
  const real32_T DataTypeConversion_l; /* '<S395>/Data Type Conversion' */
  const real32_T DataTypeConversion2;  /* '<S395>/Data Type Conversion2' */
  const real32_T Add;                  /* '<S729>/Add' */
  const real32_T Add1;                 /* '<S729>/Add1' */
  const real32_T Saturation;           /* '<S734>/Saturation' */
  const real32_T Divide;               /* '<S734>/Divide' */
  const real32_T Add_l;                /* '<S740>/Add' */
  const real32_T Add1_e;               /* '<S740>/Add1' */
  const real32_T Saturation_a;         /* '<S745>/Saturation' */
  const real32_T Divide_d;             /* '<S745>/Divide' */
  const real32_T Add_lg;               /* '<S751>/Add' */
  const real32_T Add1_i;               /* '<S751>/Add1' */
  const real32_T Saturation_n;         /* '<S756>/Saturation' */
  const real32_T Divide_f;             /* '<S756>/Divide' */
  const real32_T Add_f;                /* '<S762>/Add' */
  const real32_T Add1_e5;              /* '<S762>/Add1' */
  const real32_T Saturation_l;         /* '<S767>/Saturation' */
  const real32_T Divide_c;             /* '<S767>/Divide' */
  const real32_T uDLookupTable10;      /* '<S17>/1-D Lookup Table10' */
  const real32_T Add1_k;               /* '<S991>/Add1' */
  const real32_T Constant32;           /* '<S1>/Constant32' */
  const real32_T Constant1[18];        /* '<S1186>/Constant1' */
  const real32_T Constant2[18];        /* '<S1186>/Constant2' */
  const real32_T Constant3[12];        /* '<S1186>/Constant3' */
  const real32_T Constant4[4];         /* '<S1186>/Constant4' */
  const real32_T soaktime1;            /* '<S25>/soaktime1' */
  const real32_T Constant;             /* '<S1155>/Constant' */
  const real32_T Saturation2;          /* '<S977>/Saturation2' */
  const real32_T Add_b;                /* '<S914>/Add' */
  const real32_T Constant36;           /* '<S116>/Constant36' */
  const real32_T Constant37;           /* '<S116>/Constant37' */
  const real32_T Constant38;           /* '<S116>/Constant38' */
  const real32_T Constant39;           /* '<S116>/Constant39' */
  const real32_T Constant40;           /* '<S116>/Constant40' */
  const real32_T Constant41;           /* '<S116>/Constant41' */
  const real32_T Constant42;           /* '<S116>/Constant42' */
  const real32_T Constant43;           /* '<S116>/Constant43' */
  const real32_T Constant44;           /* '<S116>/Constant44' */
  const real32_T Constant45;           /* '<S116>/Constant45' */
  const real32_T Constant46;           /* '<S116>/Constant46' */
  const real32_T Constant47;           /* '<S116>/Constant47' */
  const real32_T Constant48;           /* '<S116>/Constant48' */
  const real32_T Constant49;           /* '<S116>/Constant49' */
  const boolean_T Compare;             /* '<S481>/Compare' */
  const boolean_T Compare_f;           /* '<S485>/Compare' */
  const boolean_T Compare_j;           /* '<S493>/Compare' */
  const boolean_T Compare_c;           /* '<S557>/Compare' */
  const boolean_T Compare_g;           /* '<S607>/Compare' */
  const boolean_T Compare_m;           /* '<S671>/Compare' */
  const boolean_T Compare_l;           /* '<S677>/Compare' */
  const boolean_T VeCHFC_na_SecPassZoneFlapParkSt4;/* '<S725>/Switch' */
  const boolean_T Compare_i;           /* '<S766>/Compare' */
  const boolean_T Compare_a;           /* '<S860>/Compare' */
  const boolean_T Compare_az;          /* '<S905>/Compare' */
  const boolean_T Compare_gu;          /* '<S906>/Compare' */
  const boolean_T Compare_d;           /* '<S907>/Compare' */
  const boolean_T Compare_k;           /* '<S908>/Compare' */
  const boolean_T Compare_iw;          /* '<S909>/Compare' */
  const boolean_T Compare_ca;          /* '<S910>/Compare' */
  const boolean_T Compare_e;           /* '<S911>/Compare' */
  const boolean_T Compare_ek;          /* '<S912>/Compare' */
  const boolean_T OR;                  /* '<S871>/OR' */
  const boolean_T OR1;                 /* '<S871>/OR1' */
  const boolean_T OR2;                 /* '<S871>/OR2' */
  const boolean_T OR3;                 /* '<S871>/OR3' */
  const boolean_T Constant25;          /* '<S1>/Constant25' */
  const boolean_T Constant35;          /* '<S1>/Constant35' */
  const boolean_T Constant42_n;        /* '<S1>/Constant42' */
  const boolean_T Constant48_p;        /* '<S1>/Constant48' */
  const boolean_T Constant52;          /* '<S1>/Constant52' */
  const boolean_T Constant59;          /* '<S1>/Constant59' */
  const boolean_T Constant60;          /* '<S1>/Constant60' */
  const boolean_T Compare_el;          /* '<S1286>/Compare' */
  const boolean_T Compare_p;           /* '<S1287>/Compare' */
  const boolean_T Compare_m5;          /* '<S1288>/Compare' */
  const boolean_T Compare_n;           /* '<S1289>/Compare' */
  const boolean_T Compare_ay;          /* '<S1290>/Compare' */
  const boolean_T Compare_b;           /* '<S1291>/Compare' */
  const boolean_T Compare_ml;          /* '<S1292>/Compare' */
  const boolean_T Compare_ef;          /* '<S1293>/Compare' */
  const boolean_T Compare_gv;          /* '<S1294>/Compare' */
  const boolean_T Compare_ao;          /* '<S1295>/Compare' */
  const boolean_T Compare_g2;          /* '<S1296>/Compare' */
  const boolean_T Compare_nj;          /* '<S1297>/Compare' */
  const boolean_T Compare_id;          /* '<S1298>/Compare' */
  const boolean_T Compare_jp;          /* '<S1299>/Compare' */
  const boolean_T Compare_ec;          /* '<S1300>/Compare' */
  const boolean_T Compare_em;          /* '<S1301>/Compare' */
  const boolean_T Constant33;          /* '<S1>/Constant33' */
  ConstB_PreCaliTi_Thermal_Cabin_T PreCaliTi;/* '<S1186>/PreCaliTi' */
  ConstB_EnabledSubsystem_Thermal_Cabin_T EnabledSubsystem_pi;/* '<S115>/Enabled Subsystem' */
  ConstB_EnabledSubsystem3_Thermal_Cabin_T EnabledSubsystem7;/* '<S2>/Enabled Subsystem7' */
  ConstB_EnabledSubsystem3_Thermal_Cabin_T EnabledSubsystem6;/* '<S2>/Enabled Subsystem6' */
  ConstB_EnabledSubsystem3_Thermal_Cabin_T EnabledSubsystem5;/* '<S2>/Enabled Subsystem5' */
  ConstB_EnabledSubsystem3_Thermal_Cabin_T EnabledSubsystem4;/* '<S2>/Enabled Subsystem4' */
  ConstB_EnabledSubsystem3_Thermal_Cabin_T EnabledSubsystem3;/* '<S2>/Enabled Subsystem3' */
  ConstB_EnabledSubsystem_Thermal_Cabin_T EnabledSubsystem_k;/* '<S105>/Enabled Subsystem' */
} ConstB_Thermal_Cabin_T;

/* Constant parameters (default storage) */
typedef struct {
  /* Expression: [0,1000]
   * Referenced by: '<S999>/Constant'
   */
  real_T Constant_Value[2];

  /* Expression: KeCAFC_v_FbFlowAmbTemp_X
   * Referenced by: '<S699>/2-D Lookup Table'
   */
  real32_T uDLookupTable_bp01Data[6];

  /* Expression: KeCAFC_v_FbFlowAmbTemp_Y
   * Referenced by: '<S699>/2-D Lookup Table'
   */
  real32_T uDLookupTable_bp02Data[5];

  /* Pooled Parameter (Mixed Expressions)
   * Referenced by:
   *   '<S689>/2-D Lookup Table'
   *   '<S691>/1-D Lookup Table'
   */
  real32_T pooled22[6];

  /* Pooled Parameter (Expression: KeCHFC_na_SphKpTable_D)
   * Referenced by:
   *   '<S731>/KeCHFC_na_SphKpTable_D'
   *   '<S742>/KeCHFC_na_SphKpTable_D'
   *   '<S753>/KeCHFC_na_SphKpTable_D'
   *   '<S764>/KeCHFC_na_SphKpTable_D1'
   */
  real32_T pooled23[11];

  /* Pooled Parameter (Mixed Expressions)
   * Referenced by:
   *   '<S731>/KeCHFC_na_SphKiTable_D'
   *   '<S731>/KeCHFC_na_SphKpTable_D'
   *   '<S742>/KeCHFC_na_SphKiTable_D'
   *   '<S742>/KeCHFC_na_SphKpTable_D'
   *   '<S753>/KeCHFC_na_SphKiTable_D'
   *   '<S753>/KeCHFC_na_SphKpTable_D'
   *   '<S764>/KeCHFC_na_SphKiTable_D1'
   *   '<S764>/KeCHFC_na_SphKpTable_D1'
   */
  real32_T pooled24[11];

  /* Pooled Parameter (Expression: KeCHFC_na_SphKiTable_D)
   * Referenced by:
   *   '<S731>/KeCHFC_na_SphKiTable_D'
   *   '<S742>/KeCHFC_na_SphKiTable_D'
   *   '<S753>/KeCHFC_na_SphKiTable_D'
   *   '<S764>/KeCHFC_na_SphKiTable_D1'
   */
  real32_T pooled25[11];

  /* Pooled Parameter (Mixed Expressions)
   * Referenced by:
   *   '<S742>/1-D Lookup Table'
   *   '<S742>/1-D Lookup Table1'
   *   '<S753>/1-D Lookup Table'
   *   '<S753>/1-D Lookup Table1'
   *   '<S764>/1-D Lookup Table'
   *   '<S764>/1-D Lookup Table1'
   */
  real32_T pooled26[7];

  /* Pooled Parameter (Mixed Expressions)
   * Referenced by:
   *   '<S17>/1-D Lookup Table10'
   *   '<S17>/1-D Lookup Table11'
   *   '<S17>/1-D Lookup Table9'
   */
  real32_T pooled29[12];

  /* Pooled Parameter (Mixed Expressions)
   * Referenced by:
   *   '<S17>/1-D Lookup Table10'
   *   '<S17>/1-D Lookup Table11'
   *   '<S17>/1-D Lookup Table9'
   *   '<S17>/2-D Lookup Table'
   */
  real32_T pooled30[12];

  /* Expression: KeCSCC_m_FlwTempHum_D
   * Referenced by: '<S17>/2-D Lookup Table'
   */
  real32_T uDLookupTable_tableData[120];

  /* Expression: KeCSCC_m_FlwTempHum_Y
   * Referenced by: '<S17>/2-D Lookup Table'
   */
  real32_T uDLookupTable_bp02Data_g[10];

  /* Expression: KeCSCC_v_Flow2InRes_D
   * Referenced by: '<S17>/BUOUCreator'
   */
  real32_T BUOUCreator_tableData[49];

  /* Expression: KeFWDS_pct_RecRio_D
   * Referenced by: '<S1180>/1-D Lookup Table'
   */
  real32_T uDLookupTable_tableData_d[13];

  /* Pooled Parameter (Mixed Expressions)
   * Referenced by:
   *   '<S1180>/1-D Lookup Table'
   *   '<S1180>/1-D Lookup Table1'
   *   '<S1180>/1-D Lookup Table2'
   *   '<S1180>/1-D Lookup Table3'
   */
  real32_T pooled41[13];

  /* Computed Parameter: uDLookupTable1_tableData
   * Referenced by: '<S1180>/1-D Lookup Table1'
   */
  real32_T uDLookupTable1_tableData[13];

  /* Computed Parameter: uDLookupTable3_tableData
   * Referenced by: '<S1180>/1-D Lookup Table3'
   */
  real32_T uDLookupTable3_tableData[13];

  /* Expression: single([0.296875,0.53125,0.4]);
   * Referenced by: '<S1207>/KePCAT_na_BreaTempEfctCoef_D'
   */
  real32_T KePCAT_na_BreaTempEfctCoef_D_tableData[3];

  /* Pooled Parameter (Mixed Expressions)
   * Referenced by:
   *   '<S390>/Constant16'
   *   '<S390>/Constant17'
   *   '<S390>/Constant27'
   *   '<S390>/Constant28'
   *   '<S390>/Constant38'
   *   '<S390>/Constant39'
   *   '<S390>/Constant4'
   *   '<S390>/Constant5'
   *   '<S391>/Constant16'
   *   '<S391>/Constant17'
   *   '<S391>/Constant4'
   *   '<S391>/Constant5'
   *   '<S392>/Constant16'
   *   '<S392>/Constant17'
   *   '<S392>/Constant4'
   *   '<S392>/Constant5'
   *   '<S393>/Constant16'
   *   '<S393>/Constant17'
   *   '<S393>/Constant20'
   *   '<S393>/Constant21'
   *   '<S393>/Constant4'
   *   '<S393>/Constant5'
   *   '<S393>/Constant8'
   *   '<S393>/Constant9'
   *   '<S727>/Constant10'
   *   '<S727>/Constant5'
   *   '<S727>/Constant6'
   *   '<S727>/Constant9'
   *   '<S738>/Constant10'
   *   '<S738>/Constant5'
   *   '<S738>/Constant6'
   *   '<S738>/Constant9'
   *   '<S749>/Constant10'
   *   '<S749>/Constant5'
   *   '<S749>/Constant6'
   *   '<S749>/Constant9'
   *   '<S760>/Constant10'
   *   '<S760>/Constant5'
   *   '<S760>/Constant6'
   *   '<S760>/Constant9'
   */
  real32_T pooled49[2];

  /* Pooled Parameter (Expression: 1:18)
   * Referenced by:
   *   '<S1186>/Constant1'
   *   '<S1186>/Constant11'
   *   '<S1186>/Constant12'
   *   '<S1186>/Constant2'
   */
  real32_T pooled58[18];

  /* Pooled Parameter (Expression: 1:12)
   * Referenced by:
   *   '<S1186>/Constant13'
   *   '<S1186>/Constant3'
   */
  real32_T pooled59[12];

  /* Expression: KeCAFC_n_Flow2Speed_X
   * Referenced by: '<S689>/2-D Lookup Table'
   */
  real32_T uDLookupTable_bp01Data_d[9];

  /* Expression: KeCTCM_T_HeatUpRecOffs_X
   * Referenced by: '<S19>/1-D Lookup Table4'
   */
  real32_T uDLookupTable4_bp01Data[9];

  /* Expression: KeCSCC_pct_FrntDrvVentRio_D
   * Referenced by: '<S17>/1-D Lookup Table'
   */
  real32_T uDLookupTable_tableData_j[7];

  /* Expression: KeCSCC_pct_FrntPassVentRio_D
   * Referenced by: '<S17>/1-D Lookup Table1'
   */
  real32_T uDLookupTable1_tableData_o[21];

  /* Expression: KeCSCC_pct_SecDrvVentRio_D
   * Referenced by: '<S17>/1-D Lookup Table2'
   */
  real32_T uDLookupTable2_tableData[4];

  /* Expression: KeCSCC_pct_FrntDrvFootRio_D
   * Referenced by: '<S17>/1-D Lookup Table3'
   */
  real32_T uDLookupTable3_tableData_j[7];

  /* Expression: KeCSCC_pct_FrntPassFootRio_D
   * Referenced by: '<S17>/1-D Lookup Table4'
   */
  real32_T uDLookupTable4_tableData[21];

  /* Expression: KeCSCC_pct_SecDrvFootRio_D
   * Referenced by: '<S17>/1-D Lookup Table5'
   */
  real32_T uDLookupTable5_tableData[4];

  /* Pooled Parameter (Mixed Expressions)
   * Referenced by:
   *   '<S17>/1-D Lookup Table6'
   *   '<S17>/1-D Lookup Table8'
   */
  real32_T pooled66[7];

  /* Pooled Parameter (Expression: [100
     95
     90
     85
     84
     83
     82
     81
     80
     79
     78
     77
     76
     75
     74
     73
     72
     71
     70
     69
     68
     67
     66
     65
     64
     63
     62
     61
     60
     59
     58
     57
     56
     55
     54
     53
     52
     51
     50
     49
     48
     47
     46
     45
     44
     43
     42
     41
     40
     39
     38
     37
     36
     35
     34
     33
     32
     31
     30
     29
     28
     27
     26
     25
     24
     23
     22
     21
     20
     19
     18
     17
     16
     15
     14
     13
     12
     11
     10
     9
     8
     7
     6
     5
     4
     3
     2
     1
     0
     -1
     -2
     -3
     -4
     -5
     -6
     -7
     -8
     -9
     -10
     -11
     -12
     -13
     -14
     -15
     -16
     -17
     -18
     -19
     -20
     -21
     -22
     -23
     -24
     -25
     -26
     -27
     -28
     -29
     -30
     -31
     -32
     -33
     -34
     -35
     -36
     -37
     -38
     -39
     -40])
   * Referenced by:
   *   '<S25>/1-D Lookup Table1'
   *   '<S25>/1-D Lookup Table4'
   */
  real32_T pooled67[129];

  /* Pooled Parameter (Expression: [204
     236.5
     275.3
     321.7
     332
     342.7
     353.9
     365.4
     377.4
     389.8
     402.7
     416
     429.9
     444.4
     459.4
     475
     491.2
     508.1
     525.6
     543.9
     562.9
     582.8
     603.4
     624.9
     647.2
     670.5
     694.8
     720
     746.4
     773.8
     802.4
     832.3
     863.4
     895.9
     929.8
     965.1
     1002
     1041
     1081
     1123
     1167
     1213
     1261
     1311
     1363
     1418
     1475
     1535
     1598
     1664
     1732
     1804
     1880
     1959
     2042
     2129
     2220
     2316
     2417
     2522
     2633
     2749
     2871
     3000
     3135
     3276
     3425
     3582
     3747
     3920
     4103
     4295
     4498
     4712
     4937
     5175
     5425
     5690
     5970
     6264
     6574
     6902
     7249
     7616
     8003
     8413
     8847
     9307
     9795
     10309
     10853
     11431
     12044
     12695
     13384
     14115
     14893
     15720
     16599
     17527
     18514
     19566
     20686
     21879
     23146
     24497
     25939
     27478
     29121
     30862
     32721
     34709
     36836
     39111
     41536
     44134
     46917
     49900
     53100
     56497
     60141
     64055
     68258
     72777
     77613
     82817
     88417
     94449
     100950]
     )
   * Referenced by:
   *   '<S25>/1-D Lookup Table1'
   *   '<S25>/1-D Lookup Table4'
   */
  real32_T pooled68[129];

  /* Pooled Parameter (Expression: [100
     99
     98
     97
     96
     95
     94
     93
     92
     91
     90
     89
     88
     87
     86
     85
     84
     83
     82
     81
     80
     79
     78
     77
     76
     75
     74
     73
     72
     71
     70
     69
     68
     67
     66
     65
     64
     63
     62
     61
     60
     59
     58
     57
     56
     55
     54
     53
     52
     51
     50
     49
     48
     47
     46
     45
     44
     43
     42
     41
     40
     39
     38
     37
     36
     35
     34
     33
     32
     31
     30
     29
     28
     27
     26
     25
     24
     23
     22
     21
     20
     19
     18
     17
     16
     15
     14
     13
     12
     11
     10
     9
     8
     7
     6
     5
     4
     3
     2
     1
     0
     -1
     -2
     -3
     -4
     -5
     -6
     -7
     -8
     -9
     -10
     -11
     -12
     -13
     -14
     -15
     -16
     -17
     -18
     -19
     -20
     -21
     -22
     -23
     -24
     -25
     -26
     -27
     -28
     -29
     -30])
   * Referenced by:
   *   '<S25>/1-D Lookup Table12'
   *   '<S25>/1-D Lookup Table2'
   *   '<S25>/1-D Lookup Table5'
   *   '<S25>/1-D Lookup Table6'
   */
  real32_T pooled69[131];

  /* Pooled Parameter (Expression: [674
     694
     715
     737
     759
     782
     806
     831
     857
     884
     912
     940
     970
     1001
     1033
     1066
     1101
     1137
     1174
     1212
     1252
     1294
     1337
     1382
     1428
     1477
     1527
     1579
     1634
     1690
     1749
     1810
     1873
     1940
     2008
     2080
     2155
     2232
     2313
     2398
     2486
     2577
     2673
     2772
     2876
     2985
     3098
     3215
     3339
     3467
     3601
     3741
     3888
     4041
     4201
     4368
     4543
     4726
     4917
     5117
     5327
     5546
     5776
     6016
     6268
     6532
     6809
     7099
     7403
     7723
     8057
     8409
     8778
     9165
     9572
     10000
     10449
     10922
     11418
     11941
     12491
     13069
     13678
     14319
     14995
     15706
     16456
     17247
     18081
     18960
     19888
     20868
     21903
     22996
     24150
     25370
     26661
     28025
     29469
     30997
     32614
     34327
     36142
     38066
     40105
     42268
     44563
     46998
     49584
     52331
     55249
     58351
     61650
     65159
     68894
     72870
     77104
     81616
     86426
     91555
     97026
     102866
     109102
     115763
     122882
     130493
     138634
     147346
     156674
     166665
     177373])
   * Referenced by:
   *   '<S25>/1-D Lookup Table12'
   *   '<S25>/1-D Lookup Table2'
   *   '<S25>/1-D Lookup Table5'
   *   '<S25>/1-D Lookup Table6'
   */
  real32_T pooled70[131];

  /* Pooled Parameter (Expression: [85
     80
     75
     70
     65
     60
     55
     50
     45
     40
     35
     30
     25
     20
     15
     10
     5
     0
     -5
     -10
     -15
     -20
     -25
     -30
     -35
     -40])
   * Referenced by:
   *   '<S25>/1-D Lookup Table7'
   *   '<S25>/1-D Lookup Table8'
   */
  real32_T pooled71[26];

  /* Pooled Parameter (Expression: [295.6
     346.8
     408.3
     482.9
     574.2
     685.8
     823.2
     993.2
     1204
     1468
     1800
     2221
     2757
     3443
     4330
     5485
     6998
     9000
     11664
     15252
     20103
     26757
     35937
     48790
     66870
     92757])
   * Referenced by:
   *   '<S25>/1-D Lookup Table7'
   *   '<S25>/1-D Lookup Table8'
   */
  real32_T pooled72[26];

  /* Computed Parameter: uDLookupTable10_tableData
   * Referenced by: '<S25>/1-D Lookup Table10'
   */
  real32_T uDLookupTable10_tableData[8];

  /* Computed Parameter: uDLookupTable10_bp01Data
   * Referenced by: '<S25>/1-D Lookup Table10'
   */
  real32_T uDLookupTable10_bp01Data[8];

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S462>/2-D Lookup Table'
   *   '<S463>/2-D Lookup Table'
   *   '<S538>/2-D Lookup Table'
   *   '<S539>/2-D Lookup Table'
   *   '<S599>/2-D Lookup Table'
   *   '<S600>/2-D Lookup Table'
   *   '<S659>/2-D Lookup Table'
   *   '<S660>/2-D Lookup Table'
   */
  uint32_T pooled73[2];

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S470>/2-D Lookup Table'
   *   '<S471>/2-D Lookup Table'
   *   '<S544>/2-D Lookup Table'
   *   '<S545>/2-D Lookup Table'
   *   '<S603>/2-D Lookup Table'
   *   '<S604>/2-D Lookup Table'
   *   '<S665>/2-D Lookup Table'
   *   '<S666>/2-D Lookup Table'
   */
  uint32_T pooled74[2];

  /* Computed Parameter: uDLookupTable_maxIndex
   * Referenced by: '<S699>/2-D Lookup Table'
   */
  uint32_T uDLookupTable_maxIndex[2];

  /* Computed Parameter: uDLookupTable_maxIndex_c
   * Referenced by: '<S691>/1-D Lookup Table'
   */
  uint32_T uDLookupTable_maxIndex_c[2];

  /* Computed Parameter: uDLookupTable_maxIndex_d
   * Referenced by: '<S825>/2-D Lookup Table'
   */
  uint32_T uDLookupTable_maxIndex_d[2];

  /* Computed Parameter: uDLookupTable_maxIndex_a
   * Referenced by: '<S17>/2-D Lookup Table'
   */
  uint32_T uDLookupTable_maxIndex_a[2];

  /* Computed Parameter: BUOUCreator_maxIndex
   * Referenced by: '<S17>/BUOUCreator'
   */
  uint32_T BUOUCreator_maxIndex[2];

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S997>/2-D Lookup Table'
   *   '<S998>/2-D Lookup Table'
   *   '<S999>/2-D Lookup Table'
   *   '<S1000>/2-D Lookup Table'
   */
  uint32_T pooled75[2];

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S1037>/2-D Lookup Table'
   *   '<S1037>/2-D Lookup Table1'
   *   '<S1038>/2-D Lookup Table'
   *   '<S1038>/2-D Lookup Table1'
   *   '<S1050>/2-D Lookup Table'
   *   '<S1051>/2-D Lookup Table'
   *   '<S1052>/2-D Lookup Table'
   *   '<S1053>/2-D Lookup Table'
   *   '<S1078>/2-D Lookup Table1'
   *   '<S1079>/2-D Lookup Table2'
   *   '<S1080>/2-D Lookup Table1'
   *   '<S1081>/2-D Lookup Table1'
   *   '<S1105>/2-D Lookup Table1'
   *   '<S1106>/2-D Lookup Table1'
   *   '<S1107>/2-D Lookup Table1'
   *   '<S1108>/2-D Lookup Table1'
   *   '<S1133>/2-D Lookup Table1'
   *   '<S1134>/2-D Lookup Table1'
   *   '<S1135>/2-D Lookup Table1'
   *   '<S1136>/2-D Lookup Table1'
   */
  uint32_T pooled76[2];

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S992>/2-D Lookup Table'
   *   '<S992>/2-D Lookup Table1'
   */
  uint32_T pooled77[2];

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S17>/1-D Lookup Table1'
   *   '<S17>/1-D Lookup Table4'
   *   '<S1242>/KePCAT_pct_AirFlowFpFoot_D'
   *   '<S1242>/KePCAT_pct_AirFlowFpVentRC_D'
   *   '<S1242>/KePCAT_pct_AirFlowFpVentRS_D'
   */
  uint32_T pooled78[2];

  /* Computed Parameter: uDLookupTable_maxIndex_l
   * Referenced by: '<S689>/2-D Lookup Table'
   */
  uint32_T uDLookupTable_maxIndex_l[2];

  /* Expression: KeBLWA_pct_RadioReq_X
   * Referenced by: '<S4>/1-D Lookup Table'
   */
  uint16_T uDLookupTable_bp01Data_g[10];

  /* Pooled Parameter (Mixed Expressions)
   * Referenced by:
   *   '<S731>/1-D Lookup Table'
   *   '<S731>/1-D Lookup Table1'
   *   '<S742>/1-D Lookup Table'
   *   '<S753>/1-D Lookup Table'
   *   '<S764>/1-D Lookup Table'
   */
  uint8_T pooled97[7];

  /* Pooled Parameter (Mixed Expressions)
   * Referenced by:
   *   '<S17>/1-D Lookup Table'
   *   '<S17>/1-D Lookup Table1'
   *   '<S17>/1-D Lookup Table3'
   *   '<S17>/1-D Lookup Table4'
   *   '<S17>/1-D Lookup Table6'
   *   '<S17>/1-D Lookup Table8'
   *   '<S17>/BUOUCreator'
   *   '<S1242>/KePCAT_pct_AirFlowFpFoot_D'
   *   '<S1242>/KePCAT_pct_AirFlowFpVentRC_D'
   *   '<S1242>/KePCAT_pct_AirFlowFpVentRS_D'
   */
  uint8_T pooled99[7];

  /* Expression: KeFWDS_na_BlwrLvLim_D
   * Referenced by: '<S1180>/1-D Lookup Table2'
   */
  uint8_T uDLookupTable2_tableData_m[13];

  /* Expression: KeBLWA_pct_RadioReq_D
   * Referenced by: '<S4>/1-D Lookup Table'
   */
  uint8_T uDLookupTable_tableData_c[10];

  /* Pooled Parameter (Mixed Expressions)
   * Referenced by:
   *   '<S17>/1-D Lookup Table1'
   *   '<S17>/1-D Lookup Table4'
   */
  uint8_T pooled102[3];

  /* Pooled Parameter (Mixed Expressions)
   * Referenced by:
   *   '<S17>/1-D Lookup Table2'
   *   '<S17>/1-D Lookup Table5'
   */
  uint8_T pooled103[4];
} ConstP_Thermal_Cabin_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real32_T VeXXX_na_SelfStudySts;      /* '<Root>/VeXXX_na_SelfStudySts' */
  real32_T VeCABF_na_ACCbnClnEnaSts;   /* '<Root>/VeCABF_na_ACCbnClnEnaSts' */
  real32_T VeNVMM_na_ActrOperCtrLoad;  /* '<Root>/VeNVMM_na_ActrOperCtrLoad' */
  real32_T VeCTCM_na_BpCfgActv;        /* '<Root>/VeCTCM_na_BpCfgActv' */
  real32_T VeXXXX_na_FdVStepRstSts;    /* '<Root>/VeXXXX_na_FdVStepRstSts' */
  real32_T VeXXXX_na_FpvStepRstSts;    /* '<Root>/VeXXXX_na_FpvStepRstSts' */
  real32_T VeXXXX_na_SdVStepRstSts;    /* '<Root>/VeXXXX_na_SdVStepRstSts' */
  real32_T VeXXXX_na_FdhStepRstSts;    /* '<Root>/VeXXXX_na_FdhStepRstSts' */
  real32_T VeXXXX_na_FphStepRstSts;    /* '<Root>/VeXXXX_na_FphStepRstSts' */
  real32_T VeXXXX_na_SdhStepRstSts;    /* '<Root>/VeXXXX_na_SdhStepRstSts' */
  real32_T VeXXXX_na_RecStepRstSts;    /* '<Root>/VeXXXX_na_RecStepRstSts' */
  real32_T VeXxxx_na_FdvStepPosnFb;    /* '<Root>/VeXxxx_na_FdvStepPosnFb' */
  real32_T VeXxxx_na_FpvStepPosnFb;    /* '<Root>/VeXxxx_na_FpvStepPosnFb' */
  real32_T VeXxxx_na_SdvStepPosnFb;    /* '<Root>/VeXxxx_na_SdvStepPosnFb' */
  real32_T VeXxxx_na_FdhStepPosnFb;    /* '<Root>/VeXxxx_na_FdhStepPosnFb' */
  real32_T VeXxxx_na_FphStepPosnFb;    /* '<Root>/VeXxxx_na_FphStepPosnFb' */
  real32_T VeXxxx_na_SdhStepPosnFb;    /* '<Root>/VeXxxx_na_SdhStepPosnFb' */
  real32_T VeXxxx_na_RecStepPosnFb;    /* '<Root>/VeXxxx_na_RecStepPosnFb' */
  real32_T VeXxxx_na_DefVltgPosnFb;    /* '<Root>/VeXxxx_na_DefVltgPosnFb' */
  real32_T VeXxxx_U_SphVltgPosnFb;     /* '<Root>/VeXxxx_U_SphVltgPosnFb' */
  real32_T VeXxxx_na_FdvStepRange;     /* '<Root>/VeXxxx_na_FdvStepRange' */
  real32_T VeXxxx_na_FpvStepRange;     /* '<Root>/VeXxxx_na_FpvStepRange' */
  real32_T VeXxxx_na_SdvStepRange;     /* '<Root>/VeXxxx_na_SdvStepRange' */
  real32_T VeXxxx_na_FdhStepRange;     /* '<Root>/VeXxxx_na_FdhStepRange' */
  real32_T VeXxxx_na_FphStepRange;     /* '<Root>/VeXxxx_na_FphStepRange' */
  real32_T VeXxxx_na_SdhStepRange;     /* '<Root>/VeXxxx_na_SdhStepRange' */
  real32_T VeXxxx_na_SphStepRange;     /* '<Root>/VeXxxx_na_SphStepRange' */
  real32_T VeXxxx_na_RecStepRange;     /* '<Root>/VeXxxx_na_RecStepRange' */
  real32_T VeNVMM_U_DcRangeLoadEep;    /* '<Root>/VeNVMM_U_DcRangeLoadEep' */
  boolean_T VeHMI_na_FrntDef;          /* '<Root>/VeHMI_na_FrntDef' */
  boolean_T VeCAQC_na_AccCbnClnEnaSts; /* '<Root>/VeCAQC_na_AccCbnClnEnaSts' */
  real32_T VeCAQC_na_AccAirdModeReq;   /* '<Root>/VeCAQC_na_AccAirdModeReq' */
  uint8_T VeCADS_na_RiskLv;            /* '<Root>/VeCADS_na_RiskLv' */
  boolean_T VeHMI_na_AirdRAutoMode;    /* '<Root>/VeHMI_na_AirdRAutoMode' */
  real32_T VeHMI_na_AirdModeMR;        /* '<Root>/VeHMI_na_AirdModeMR' */
  boolean_T VeCAQC_na_AQSEnaSts;       /* '<Root>/VeCAQC_na_AQSEnaSts' */
  real32_T VeVTIC_v_VehSpd;            /* '<Root>/VeVTIC_v_VehSpd' */
  real32_T VeCAQC_pct_AQSRecRatReq;    /* '<Root>/VeCAQC_pct_AQSRecRatReq' */
  real32_T VeCAQC_pct_ACCRecRatReq;    /* '<Root>/VeCAQC_pct_ACCRecRatReq' */
  boolean_T VeFWDS_na_RECFlg;          /* '<Root>/VeFWDS_na_RECFlg' */
  real32_T VeFWDS_Pct_RecRio;          /* '<Root>/VeFWDS_Pct_RecRio' */
  real32_T VeSENA_na_AmbTempQf;        /* '<Root>/VeSENA_na_AmbTempQf' */
  real32_T VeSENA_T_ICTSts;            /* '<Root>/VeSENA_T_ICTSts' */
  boolean_T VeVTIC_na_CrashSt;         /* '<Root>/VeVTIC_na_CrashSt' */
  uint16_T VeBLWA_n_FrntBlwrSpdFb;     /* '<Root>/VeBLWA_n_FrntBlwrSpdFb' */
  real32_T VeCAQC_na_AccBlwrLvReq;     /* '<Root>/VeCAQC_na_AccBlwrLvReq' */
  real32_T VeTEEM_na_EemFrntBlowReq;   /* '<Root>/VeTEEM_na_EemFrntBlowReq' */
  real32_T VeFWDS_na_FANFlg;           /* '<Root>/VeFWDS_na_FANFlg' */
  real32_T VeFWDS_na_BlwrLvReq;        /* '<Root>/VeFWDS_na_BlwrLvReq' */
  real32_T VeCCCS_na_OperSts;          /* '<Root>/VeCCCS_na_OperSts' */
  real32_T VeCSCC_T_SpTma;             /* '<Root>/VeCSCC_T_SpTma' */
  real32_T VeXXXX_L_FrtBlwAfs;         /* '<Root>/VeXXXX_L_FrtBlwAfs' */
  real32_T VeXXXX_Pct_FrntDrvDistbnMode;
                                     /* '<Root>/VeXXXX_Pct_FrntDrvDistbnMode' */
  real32_T VeXXXX_Pct_RrAds_Output;    /* '<Root>/VeXXXX_Pct_RrAds_Output' */
  real32_T VeXXXX_L_RrBlwAfs;          /* '<Root>/VeXXXX_L_RrBlwAfs' */
  real32_T VeXXXX_kPa_BarPrsAbs;       /* '<Root>/VeXXXX_kPa_BarPrsAbs' */
  real32_T VeXXXX_Pct_HfsOutputLt;     /* '<Root>/VeXXXX_Pct_HfsOutputLt' */
  real32_T VeXXXX_Pct_HfsOutputRr;     /* '<Root>/VeXXXX_Pct_HfsOutputRr' */
  real32_T VeXXXX_Pct_HfsOutputRt;     /* '<Root>/VeXXXX_Pct_HfsOutputRt' */
  real32_T VeXXXX_T_DATVntLft;         /* '<Root>/VeXXXX_T_DATVntLft' */
  real32_T VeXXXX_T_DATFlrLt;          /* '<Root>/VeXXXX_T_DATFlrLt' */
  real32_T VeXXXX_T_DATVntRt;          /* '<Root>/VeXXXX_T_DATVntRt' */
  real32_T VeXXXX_T_DATFlrRt;          /* '<Root>/VeXXXX_T_DATFlrRt' */
  real32_T VeXXXX_T_DATVntRr;          /* '<Root>/VeXXXX_T_DATVntRr' */
  real32_T VeXXXX_T_DATFlrRr;          /* '<Root>/VeXXXX_T_DATFlrRr' */
  real32_T VeXXXX_T_Tevap_Tem;         /* '<Root>/VeXXXX_T_Tevap_Tem' */
  real32_T VeXXXX_v_VehSpd;            /* '<Root>/VeXXXX_v_VehSpd' */
  real32_T VeXXXX_deg_shell_azi;       /* '<Root>/VeXXXX_deg_shell_azi' */
  real32_T VeXXXX_deg_shell_Ele;       /* '<Root>/VeXXXX_deg_shell_Ele' */
  real32_T VeXXXX_Wm2_Sunlnt;          /* '<Root>/VeXXXX_Wm2_Sunlnt' */
  real32_T VeXXXX_Pct_RecDrPct;        /* '<Root>/VeXXXX_Pct_RecDrPct' */
  real32_T VeXXXX_b_TaValidity;        /* '<Root>/VeXXXX_b_TaValidity' */
  real32_T VeXXXX_b_PCATValidity;      /* '<Root>/VeXXXX_b_PCATValidity' */
  real32_T DAT_FlrLeft_Validity;       /* '<Root>/DAT_FlrLeft_Validity' */
  real32_T VeXXXX_b_Lt_driver;         /* '<Root>/VeXXXX_b_Lt_driver' */
  real32_T VeXXXX_b_Rt_passenger;      /* '<Root>/VeXXXX_b_Rt_passenger' */
  uint16_T Power_mode_off_time;        /* '<Root>/Power_mode_off_time' */
  uint8_T VeTCFG_na_HvacVar;           /* '<Root>/VeTCFG_na_HvacVar' */
  real32_T VeSENA_T_AmbTemp;           /* '<Root>/VeSENA_T_AmbTemp' */
  boolean_T VeCHMI_na_BlwrMOff;        /* '<Root>/VeCHMI_na_BlwrMOff' */
  uint16_T VeCHMI_T_SetTempMR;         /* '<Root>/VeCHMI_T_SetTempMR' */
  real32_T VeCTCM_Q_AirCp;             /* '<Root>/VeCTCM_Q_AirCp' */
  int16_T VePCAT_T_TintSp;             /* '<Root>/ VePCAT_T_TintSp' */
  real32_T VeFWDS_T_RecTarTCtrl;       /* '<Root>/VeFWDS_T_RecTarTCtrl' */
  real32_T VeGNSS_T_OutLetTemp;        /* '<Root>/VeGNSS_T_OutLetTemp' */
  real32_T VeGNSS_m_Altd;              /* '<Root>/VeGNSS_m_Altd' */
  real32_T VeFWDS_na_DefOpRatio;       /* '<Root>/VeFWDS_na_DefOpRatio' */
  real32_T VeTemp_panel_FR_Raw1;       /* '<Root>/VeTemp_panel_FR_Raw1' */
  real32_T VeTemp_panel_FL_Raw1;       /* '<Root>/VeTemp_panel_FL_Raw1' */
  real32_T VeTemp_feet_FR_EX_Raw1;     /* '<Root>/VeTemp_feet_FR_EX_Raw1' */
  real32_T VeTemp_feet_FL_EX_Raw1;     /* '<Root>/VeTemp_feet_FL_EX_Raw1' */
  real32_T VeTemp_feet_SL_Raw1;        /* '<Root>/VeTemp_feet_SL_Raw1' */
  real32_T VeTemp_panel_SL_Raw1;       /* '<Root>/VeTemp_panel_SL_Raw1' */
  real32_T VeTemp_Fevap_Raw1;          /* '<Root>/VeTemp_Fevap_Raw1' */
  real32_T AmbTRawAmbTVal1;            /* '<Root>/AmbTRawAmbTVal1' */
  real32_T VehSpdLgtA;                 /* '<Root>/VehSpdLgtA' */
  uint16_T LeSolarData1;               /* '<Root>/LeSolarData1' */
  uint16_T RiSolarData1;               /* '<Root>/RiSolarData1' */
  real32_T VeTemp_HEX_Raw;             /* '<Root>/VeTemp_HEX_Raw' */
  real32_T VeTemp_Fincar_Raw;          /* '<Root>/VeTemp_Fincar_Raw' */
  real32_T DriverTempFlapFb;           /* '<Root>/DriverTempFlapFb' */
  real32_T PassTempFlapFb;             /* '<Root>/PassTempFlapFb' */
  real32_T RearTempFlapFb;             /* '<Root>/RearTempFlapFb' */
  real32_T DriverAirDrictionFb;        /* '<Root>/DriverAirDrictionFb' */
  real32_T PassAirDrictionFb;          /* '<Root>/PassAirDrictionFb' */
  real32_T RearAirDrictionFb;          /* '<Root>/RearAirDrictionFb' */
  real32_T RecFlapFb;                  /* '<Root>/RecFlapFb' */
  uint8_T HmiCmptmtAirDistbnFrntLe;    /* '<Root>/HmiCmptmtAirDistbnFrntLe' */
  uint8_T HmiCmptmtAirDistbnFrntRi;    /* '<Root>/HmiCmptmtAirDistbnFrntRi' */
  real32_T HmiCmptmtAirDistbnRe;       /* '<Root>/HmiCmptmtAirDistbnRe' */
  real32_T HmiHvacRecircCmd;           /* '<Root>/HmiHvacRecircCmd' */
  uint8_T HmiHvacFanLvlFrnt;           /* '<Root>/HmiHvacFanLvlFrnt' */
  boolean_T HmiCmptmtCoolgReq;         /* '<Root>/HmiCmptmtCoolgReq' */
  real32_T HmiHvacFanLvlRe;            /* '<Root>/HmiHvacFanLvlRe' */
  real32_T HmiCmptmtTSpSpclForRowFirstLe;
                                    /* '<Root>/HmiCmptmtTSpSpclForRowFirstLe' */
  real32_T HmiCmptmtTSpForRowFirstLe;  /* '<Root>/HmiCmptmtTSpForRowFirstLe' */
  real32_T HmiCmptmtTSpSpclForRowFirstRi;
                                    /* '<Root>/HmiCmptmtTSpSpclForRowFirstRi' */
  real32_T HmiCmptmtTSpForRowFirstRi;  /* '<Root>/HmiCmptmtTSpForRowFirstRi' */
  real32_T HmiCmptmtTSpSpclForRowSecLe;
                                      /* '<Root>/HmiCmptmtTSpSpclForRowSecLe' */
  real32_T HmiCmptmtTSpForRowSecLe;    /* '<Root>/ HmiCmptmtTSpForRowSecLe' */
  boolean_T HmiDefrstMaxReq;           /* '<Root>/HmiDefrstMaxReq' */
  real32_T HmiAutDefrstEna;            /* '<Root>/HmiAutDefrstEna' */
  boolean_T HmiEcoClimaSetgOnOff;      /* '<Root>/HmiEcoClimaSetgOnOff' */
  boolean_T ActvnOfWshrFrntSafe;       /* '<Root>/ActvnOfWshrFrntSafe' */
  real32_T CmptmtFrntWindT;            /* '<Root>/CmptmtFrntWindT' */
  real32_T VehSpdLgtQf;                /* '<Root>/VehSpdLgtQf' */
  uint8_T VehModMngtGlbSafe1UsgModSts;/* '<Root>/VehModMngtGlbSafe1UsgModSts' */
  uint8_T ClimRlyCmd;                  /* '<Root>/ClimRlyCmd' */
  uint8_T AmbTRawQly;                  /* '<Root>/AmbTRawQly' */
  real32_T CmptmtRelHum;               /* '<Root>/CmptmtRelHum' */
  real32_T RelHumSnsrQf;               /* '<Root>/RelHumSnsrQf' */
  real32_T VehTiAndDataDataValid;      /* '<Root>/VehTiAndDataDataValid' */
  real32_T VehTiAndDataYr1;            /* '<Root>/VehTiAndDataYr1' */
  real32_T VehTiAndDataDay;            /* '<Root>/VehTiAndDataDay' */
  real32_T VehTiAndDataHr1;            /* '<Root>/VehTiAndDataHr1' */
  real32_T VehTiAndDataMins1;          /* '<Root>/VehTiAndDataMins1' */
  real32_T VeGMZS_lx_SolarFrtDrv;      /* '<Root>/VeGMZS_lx_SolarFrtDrv' */
  real32_T VeGMZS_lx_SolarFrtPax;      /* '<Root>/VeGMZS_lx_SolarFrtPax' */
  real32_T VeGMZS_lx_SolarBckLeft;     /* '<Root>/VeGMZS_lx_SolarBckLeft' */
  real32_T VeGMZS_lx_SolarBckRight;    /* '<Root>/VeGMZS_lx_SolarBckRight' */
} ExtU_Thermal_Cabin_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real32_T VeSENA_T_FrtPassVentTemp;   /* '<Root>/VeSENA_T_FrtPassVentTemp' */
  uint8_T VeCREC_na_CRECOperSts;       /* '<Root>/VeCREC_na_CRECOperSts' */
  uint8_T VeCADC_na_FrntDrvOperSts;    /* '<Root>/VeCADC_na_FrntDrvOperSts' */
  real32_T VeSENA_T_FrtDrvVentTemp;    /* '<Root>/VeSENA_T_FrtDrvVentTemp' */
  uint8_T VeCADC_na_DefPosnCalcnMode;  /* '<Root>/VeCADC_na_DefPosnCalcnMode' */
  uint8_T VeCREC_na_RecPosnCalcnMode;  /* '<Root>/VeCREC_na_RecPosnCalcnMode' */
  real32_T VeSENA_T_FrtPassFeetTemp;   /* '<Root>/VeSENA_T_FrtPassFeetTemp' */
  uint8_T VeCADC_na_FdvPosnCalcnMode;  /* '<Root>/VeCADC_na_FdvPosnCalcnMode' */
  real32_T VeSENA_T_FrtDrvFeetTemp;    /* '<Root>/VeSENA_T_FrtDrvFeetTemp' */
  uint8_T VeCREC_na_OsaPosnCalcnMode;  /* '<Root>/VeCREC_na_OsaPosnCalcnMode' */
  uint8_T VeCADC_na_FdfPosnCalcnMode;  /* '<Root>/VeCADC_na_FdfPosnCalcnMode' */
  boolean_T VeCREC_na_RecFlapUpdSts;   /* '<Root>/VeCREC_na_RecFlapUpdSts' */
  boolean_T VeCADC_na_DefPosnUpdSts;   /* '<Root>/VeCADC_na_DefPosnUpdSts' */
  boolean_T VeCADC_na_FdvPosnUpdSts;   /* '<Root>/VeCADC_na_FdvPosnUpdSts' */
  real32_T VeSENA_T_FeavpTemp1;        /* '<Root>/VeSENA_T_FeavpTemp1' */
  boolean_T VeCREC_na_OsaFlapUpdSts;   /* '<Root>/VeCREC_na_OsaFlapUpdSts' */
  boolean_T VeCADC_na_FdfPosnUpdSts;   /* '<Root>/VeCADC_na_FdfPosnUpdSts' */
  uint8_T VeACTU_na_OperSts;           /* '<Root>/VeACTU_na_OperSts' */
  real32_T VeSENA_T_AmbTempOut1;       /* '<Root>/VeSENA_T_AmbTempOut1' */
  boolean_T VeCREC_na_TakeBreathTmrMode;
                                      /* '<Root>/VeCREC_na_TakeBreathTmrMode' */
  real32_T VeCADC_pct_FdvPosnBase;     /* '<Root>/VeCADC_pct_FdvPosnBase' */
  boolean_T VeACTU_na_ReqMode;         /* '<Root>/VeACTU_na_ReqMode' */
  uint8_T VeSENA_na_AmbTempFaultSt1;   /* '<Root>/VeSENA_na_AmbTempFaultSt1' */
  real32_T VeCADC_pct_FdfPosnBase;     /* '<Root>/VeCADC_pct_FdfPosnBase' */
  real32_T VeCREC_pct_OsaPosnBase;     /* '<Root>/VeCREC_pct_OsaPosnBase' */
  boolean_T VeACTU_na_FbMode;          /* '<Root>/VeACTU_na_FbMode' */
  real32_T VeSENA_Wpsm_FrtDrvSolar;    /* '<Root>/VeSENA_Wpsm_FrtDrvSolar' */
  real32_T VeCADC_pct_FdvDefCmp;       /* '<Root>/VeCADC_pct_FdvDefCmp' */
  uint8_T VeACTU_na_AssignMode;        /* '<Root>/VeACTU_na_AssignMode' */
  real32_T VeSENA_Wpsm_FrtPassSolar;   /* '<Root>/VeSENA_Wpsm_FrtPassSolar' */
  real32_T VeCREC_pct_RecPosnBase;     /* '<Root>/VeCREC_pct_RecPosnBase' */
  real32_T VeCADC_pct_FdfDefCmp;       /* '<Root>/VeCADC_pct_FdfDefCmp' */
  boolean_T VeACTU_na_RangeUpdt;       /* '<Root>/VeACTU_na_RangeUpdt' */
  real32_T VeSENA_Wpsm_SecDrvSolar;    /* '<Root>/VeSENA_Wpsm_SecDrvSolar' */
  real32_T VeCREC_pct_RecPosnNvhCmp;   /* '<Root>/VeCREC_pct_RecPosnNvhCmp' */
  real32_T VeCADC_pct_FdvPosnAmbCmp;   /* '<Root>/VeCADC_pct_FdvPosnAmbCmp' */
  boolean_T VeACTU_na_StepMotorResetCmd;
                                      /* '<Root>/VeACTU_na_StepMotorResetCmd' */
  real32_T VeSENA_T_HEXTemp1;          /* '<Root>/VeSENA_T_HEXTemp1' */
  real32_T VeCADC_pct_FdfPosnAmbCmp;   /* '<Root>/VeCADC_pct_FdfPosnAmbCmp' */
  real32_T VeCREC_pct_OsaPosnNvhCmp;   /* '<Root>/VeCREC_pct_OsaPosnNvhCmp' */
  uint8_T VeACTU_na_ActrOperCtrSaveEep;
                                     /* '<Root>/VeACTU_na_ActrOperCtrSaveEep' */
  real32_T VeSENA_T_ICT1;              /* '<Root>/VeSENA_T_ICT1' */
  real32_T VeCADC_pct_DefPosnNvhCmp;   /* '<Root>/VeCADC_pct_DefPosnNvhCmp' */
  boolean_T VeACTU_na_StepFbReady;     /* '<Root>/VeACTU_na_StepFbReady' */
  real32_T VeCREC_pct_OsaPosnCalcd;    /* '<Root>/VeCREC_pct_OsaPosnCalcd' */
  real32_T VeCADC_pct_FdvPosnNvhCmp;   /* '<Root>/VeCADC_pct_FdvPosnNvhCmp' */
  boolean_T VeACTU_Stp_PreSelfStudy;   /* '<Root>/VeACTU_Stp_PreSelfStudy' */
  real32_T VeCREC_pct_RecPosnCalcd;    /* '<Root>/VeCREC_pct_RecPosnCalcd' */
  real32_T VeCADC_pct_FdfPosnNvhCmp;   /* '<Root>/VeCADC_pct_FdfPosnNvhCmp' */
  real32_T VeCSCC_V_FrntDrvVent1;      /* '<Root>/VeCSCC_V_FrntDrvVent1' */
  boolean_T VeACTU_na_StepRstDone;     /* '<Root>/VeACTU_na_StepRstDone' */
  real32_T VeCADC_pct_DefPosnCalcd;    /* '<Root>/VeCADC_pct_DefPosnCalcd' */
  boolean_T VeACTU_na_StepStopDone;    /* '<Root>/VeACTU_na_StepStopDone' */
  real32_T VeCREC_pct_OsaPosnCADS;     /* '<Root>/VeCREC_pct_OsaPosnCADS' */
  real32_T VeCSCC_V_FrntDrvFoot1;      /* '<Root>/VeCSCC_V_FrntDrvFoot1' */
  real32_T VeCADC_pct_BpPosnCalcd;     /* '<Root>/VeCADC_pct_BpPosnCalcd' */
  real32_T VeCREC_pct_RecPosnCADS;     /* '<Root>/VeCREC_pct_RecPosnCADS' */
  real32_T VeCSCC_V_FrntDrvDef;        /* '<Root>/VeCSCC_V_FrntDrvDef' */
  real32_T VeCADC_pct_FdvPosnCalcd;    /* '<Root>/VeCADC_pct_FdvPosnCalcd' */
  uint8_T VeACTU_na_FdvAssignFlag;     /* '<Root>/VeACTU_na_FdvAssignFlag' */
  real32_T VeCADC_pct_FdfPosnCalcd;    /* '<Root>/VeCADC_pct_FdfPosnCalcd' */
  real32_T VeCREC_pct_OsaPosnErrMngt;  /* '<Root>/VeCREC_pct_OsaPosnErrMngt' */
  real32_T VeCSCC_V_FrntPassVent1;     /* '<Root>/VeCSCC_V_FrntPassVent1' */
  real32_T VeCADC_pct_DefPosnDas;      /* '<Root>/VeCADC_pct_DefPosnDas' */
  uint8_T VeACTU_na_FpvAssignFlag;     /* '<Root>/VeACTU_na_FpvAssignFlag' */
  real32_T VeCREC_pct_RecPosnErrMngt;  /* '<Root>/VeCREC_pct_RecPosnErrMngt' */
  real32_T VeCSCC_V_FrntPassFoot1;     /* '<Root>/VeCSCC_V_FrntPassFoot1' */
  real32_T VeCADC_pct_BpPosnDas;       /* '<Root>/VeCADC_pct_BpPosnDas' */
  real32_T VeCREC_pct_RecFlapPosn;     /* '<Root>/VeCREC_pct_RecFlapPosn' */
  real32_T VeCADC_pct_FdvPosnDas;      /* '<Root>/VeCADC_pct_FdvPosnDas' */
  real32_T VeCSCC_V_SecDrvVent1;       /* '<Root>/VeCSCC_V_SecDrvVent1' */
  uint8_T VeACTU_na_SdvAssignFlag;     /* '<Root>/VeACTU_na_SdvAssignFlag' */
  real32_T VeCADC_pct_FdfPosnDas;      /* '<Root>/VeCADC_pct_FdfPosnDas' */
  real32_T VeCREC_pct_OsaFlapPosn;     /* '<Root>/VeCREC_pct_OsaFlapPosn ' */
  real32_T VeCSCC_V_SecDrvFoot1;       /* '<Root>/VeCSCC_V_SecDrvFoot1' */
  real32_T VeCADC_pct_DefPosnErrMngt;  /* '<Root>/VeCADC_pct_DefPosnErrMngt' */
  boolean_T VeCREC_na_CRECFlapParkSts; /* '<Root>/VeCREC_na_CRECFlapParkSts' */
  real32_T VeCSCC_T_FdTma;             /* '<Root>/VeCSCC_T_FdTma' */
  real32_T VeCADC_pct_BpPosnErrMngt;   /* '<Root>/VeCADC_pct_BpPosnErrMngt' */
  boolean_T VeCREC_na_TakeBreathTmrSts;/* '<Root>/VeCREC_na_TakeBreathTmrSts' */
  real32_T VeCADC_pct_FdfPosnErrMngt;  /* '<Root>/VeCADC_pct_FdfPosnErrMngt' */
  real32_T VeCSCC_T_FpTma;             /* '<Root>/VeCSCC_T_FpTma' */
  real32_T VeCADC_pct_FdvPosnErrMngt;  /* '<Root>/VeCADC_pct_FdvPosnErrMngt' */
  uint8_T VeACTU_na_FdhAssignFlag;     /* '<Root>/VeACTU_na_FdhAssignFlag' */
  real32_T VeCREC_pct_RecPosnReq;      /* '<Root>/VeCREC_pct_RecPosnReq' */
  real32_T VeCSCC_T_SdTma;             /* '<Root>/VeCSCC_T_SdTma' */
  uint8_T VeCADC_na_FrntDrvDistbnMode1;
                                     /* '<Root>/VeCADC_na_FrntDrvDistbnMode1' */
  uint8_T VeACTU_na_FphAssignFlag;     /* '<Root>/VeACTU_na_FphAssignFlag' */
  boolean_T VeCREC_na_RecStopReq;      /* '<Root>/VeCREC_na_RecStopReq' */
  real32_T VeCADC_pct_DefFlapPosn;     /* '<Root>/VeCADC_pct_DefFlapPosn' */
  uint8_T VeACTU_na_SdhAssignFlag;     /* '<Root>/VeACTU_na_SdhAssignFlag' */
  real32_T VeCADC_pct_BpFlapPosn;      /* '<Root>/VeCADC_pct_BpFlapPosn' */
  real32_T VeCREC_pct_OsaPosnReq;      /* '<Root>/VeCREC_pct_OsaPosnReq' */
  real32_T VeCSCC_pa_FlowInletRes;     /* '<Root>/VeCSCC_pa_FlowInletRes' */
  real32_T VeCADC_pct_FdvFlapPosn;     /* '<Root>/VeCADC_pct_FdvFlapPosn' */
  uint8_T VeACTU_na_RecAssignFlag;     /* '<Root>/VeACTU_na_RecAssignFlag' */
  boolean_T VeCREC_na_OsaStopReq;      /* '<Root>/VeCREC_na_OsaStopReq' */
  real32_T VeCADC_pct_FdfFlapPosn;     /* '<Root>/VeCADC_pct_FdfFlapPosn' */
  real32_T VeCREC_pct_RecRat1;         /* '<Root>/VeCREC_pct_RecRat1' */
  boolean_T VeCADC_na_FrntDrvZoneFlapParkSts;
                                 /* '<Root>/VeCADC_na_FrntDrvZoneFlapParkSts' */
  uint8_T VeCADC_na_FrntPassOperSts;   /* '<Root>/VeCADC_na_FrntPassOperSts' */
  boolean_T VeCREC_na_RecPosnBaseQf;   /* '<Root>/VeCREC_na_RecPosnBaseQf' */
  uint8_T VeCADC_na_FpvPosnCalcnMode;  /* '<Root>/VeCADC_na_FpvPosnCalcnMode' */
  uint8_T VeCADC_na_FpfPosnCalcnMode;  /* '<Root>/VeCADC_na_FpfPosnCalcnMode' */
  real32_T VeACTU_na_FdvPosnFb1;       /* '<Root>/VeACTU_na_FdvPosnFb1' */
  boolean_T VeCADC_na_FpvPosnUpdSts;   /* '<Root>/VeCADC_na_FpvPosnUpdSts' */
  boolean_T VeACTU_na_FdvPosnFbQf;     /* '<Root>/VeACTU_na_FdvPosnFbQf' */
  uint8_T VeCAFC_na_FrntBlwrOperSts;   /* '<Root>/VeCAFC_na_FrntBlwrOperSts' */
  boolean_T VeCADC_na_FpfPosnUpdSts;   /* '<Root>/VeCADC_na_FpfPosnUpdSts' */
  real32_T VePCAT_deg_Ti_Rt1;          /* '<Root>/VePCAT_deg_Ti_Rt1' */
  boolean_T VeACTU_na_FdvStsFb;        /* '<Root>/VeACTU_na_FdvStsFb' */
  uint8_T VeCAFC_na_FrntBlwrCalcnMode;/* '<Root>/VeCAFC_na_FrntBlwrCalcnMode' */
  real32_T VeCADC_pct_FpfDefCmp;       /* '<Root>/VeCADC_pct_FpfDefCmp' */
  uint16_T VeCAFC_na_FrntBlwrRespRate; /* '<Root>/VeCAFC_na_FrntBlwrRespRate' */
  real32_T VeCADC_pct_FpvPosnAmbCmp;   /* '<Root>/VeCADC_pct_FpvPosnAmbCmp' */
  real32_T VePCAT_deg_Ti_Rr;           /* '<Root>/VePCAT_deg_Ti_Rr' */
  boolean_T VeCAFC_na_FrntBlwrUpdSts;  /* '<Root>/VeCAFC_na_FrntBlwrUpdSts' */
  real32_T VeCADC_pct_FpfPosnAmbCmp;   /* '<Root>/VeCADC_pct_FpfPosnAmbCmp' */
  real32_T VeCAFC_v_FbFlowAmbCmp;      /* '<Root>/VeCAFC_v_FbFlowAmbCmp' */
  real32_T VeCADC_pct_FpvPosnNvhCmp;   /* '<Root>/VeCADC_pct_FpvPosnNvhCmp' */
  real32_T VePCAT_deg_SurfIntAvg1;     /* '<Root>/VePCAT_deg_SurfIntAvg1' */
  real32_T VeACTU_na_FpvPosnFb1;       /* '<Root>/VeACTU_na_FpvPosnFb1' */
  real32_T VeCAFC_v_ColdFlowLim;       /* '<Root>/VeCAFC_v_ColdFlowLim' */
  real32_T VeCADC_pct_FpfPosnNvhCmp;   /* '<Root>/VeCADC_pct_FpfPosnNvhCmp' */
  boolean_T VeACTU_na_FpvPosnFbQf;     /* '<Root>/VeACTU_na_FpvPosnFbQf' */
  real32_T VeCAFC_v_FlowCccsLim;       /* '<Root>/VeCAFC_v_FlowCccsLim' */
  real32_T VeCADC_pct_FpvPosnCalcd;    /* '<Root>/VeCADC_pct_FpvPosnCalcd' */
  real32_T VePCAT_deg_Ti_Lt1;          /* '<Root>/VePCAT_deg_Ti_Lt1' */
  boolean_T VeACTU_na_FpvStsFb;        /* '<Root>/VeACTU_na_FpvStsFb' */
  real32_T VeCAFC_v_FlowNvhCmp;        /* '<Root>/VeCAFC_v_FlowNvhCmp' */
  real32_T VeCADC_pct_FpvPosnDas;      /* '<Root>/VeCADC_pct_FpvPosnDas' */
  real32_T VeCAFC_v_FlowCalcd1;        /* '<Root>/VeCAFC_v_FlowCalcd 1' */
  real32_T VeCADC_pct_FpfPosnDas;      /* '<Root>/VeCADC_pct_FpfPosnDas' */
  real32_T VeCAFC_v_FlowEemCmp;        /* '<Root>/VeCAFC_v_FlowEemCmp' */
  real32_T VeCADC_pct_FpvPosnErrMngt;  /* '<Root>/VeCADC_pct_FpvPosnErrMngt' */
  real32_T VeCAFC_v_FlowCdds;          /* '<Root>/VeCAFC_v_FlowCdds' */
  real32_T VeCADC_pct_FpfPosnErrMngt;  /* '<Root>/VeCADC_pct_FpfPosnErrMngt' */
  real32_T VeCAFC_v_FlowErrMngt;       /* '<Root>/VeCAFC_v_FlowErrMngt ' */
  uint8_T VeCADC_na_FrntPassDistbnMode1;
                                    /* '<Root>/VeCADC_na_FrntPassDistbnMode1' */
  uint16_T VeCAFC_n_BlwrSpeedTar;      /* '<Root>/VeCAFC_n_BlwrSpeedTar' */
  real32_T VeCADC_pct_FpvFlapPosn;     /* '<Root>/VeCADC_pct_FpvFlapPosn' */
  uint16_T VeCAFC_n_BlwrSpeedReq;      /* '<Root>/VeCAFC_n_BlwrSpeedReq' */
  real32_T VeCADC_pct_FpfFlapPosn;     /* '<Root>/VeCADC_pct_FpfFlapPosn' */
  real32_T VeACTU_na_SdvPosnFb1;       /* '<Root>/VeACTU_na_SdvPosnFb1' */
  uint16_T VeCAFC_n_BlwrSpeedRamp1;    /* '<Root>/VeCAFC_n_BlwrSpeedRamp1' */
  boolean_T VeCADC_na_FrntPassZoneFlapParkSts;
                                /* '<Root>/VeCADC_na_FrntPassZoneFlapParkSts' */
  boolean_T VePCAT_deg_TiVld;          /* '<Root>/VePCAT_deg_TiVld' */
  boolean_T VeACTU_na_SdvPosnFbQf;     /* '<Root>/VeACTU_na_SdvPosnFbQf' */
  uint8_T VeCAFC_na_FrntAirFlowLvIndc;/* '<Root>/VeCAFC_na_FrntAirFlowLvIndc' */
  uint8_T VeCADC_na_SecDrvOperSts;     /* '<Root>/VeCADC_na_SecDrvOperSts' */
  boolean_T VeACTU_na_SdvStsFb;        /* '<Root>/VeACTU_na_SdvStsFb' */
  boolean_T VeCAFC_na_BlwrRlyReq;      /* '<Root>/VeCAFC_na_BlwrRlyReq' */
  uint8_T VeCADC_na_SdvPosnCalcnMode;  /* '<Root>/VeCADC_na_SdvPosnCalcnMode' */
  real32_T VePCAT_deg_Textr[18];       /* '<Root>/VePCAT_deg_Textr' */
  real32_T VeCAFC_v_FbFlowBase;        /* '<Root>/VeCAFC_v_FbFlowBase' */
  uint8_T VeCADC_na_SdfPosnCalcnMode;  /* '<Root>/VeCADC_na_SdfPosnCalcnMode' */
  uint8_T VeCADC_na_SdvPosnUpdSts;     /* '<Root>/VeCADC_na_SdvPosnUpdSts' */
  real32_T VePCAT_deg_Tmtr[12];        /* '<Root>/VePCAT_deg_Tmtr' */
  uint8_T VeCADC_na_SdfPosnUpdSts;     /* '<Root>/VeCADC_na_SdfPosnUpdSts' */
  real32_T VeCADC_pct_SdvPosnBase;     /* '<Root>/VeCADC_pct_SdvPosnBase' */
  real32_T VePCAT_deg_Tintr[18];       /* '<Root>/VePCAT_deg_Tintr' */
  uint8_T VeCHFC_na_FrntDrvOperSt;     /* '<Root>/VeCHFC_na_FrntDrvOperSt' */
  real32_T VeCADC_pct_SdfPosnBase;     /* '<Root>/VeCADC_pct_SdfPosnBase' */
  uint8_T VeCHFC_na_FdhPosnCalcnMode;  /* '<Root>/VeCHFC_na_FdhPosnCalcnMode' */
  real32_T VeCADC_pct_SdvDefCmp;       /* '<Root>/VeCADC_pct_SdvDefCmp' */
  boolean_T VeCHFC_na_FdhPosnUpdSt;    /* '<Root>/VeCHFC_na_FdhPosnUpdSt' */
  boolean_T Out167;                    /* '<Root>/Out167' */
  real32_T VeCADC_pct_SdfDefCmp;       /* '<Root>/VeCADC_pct_SdfDefCmp' */
  real32_T VeCHFC_pct_FdhPosnCalcd;    /* '<Root>/VeCHFC_pct_FdhPosnCalcd' */
  real32_T VeCADC_pct_SdvPosnAmbCmp;   /* '<Root>/VeCADC_pct_SdvPosnAmbCmp' */
  real32_T VePCAT_A_CabSurfAr[18];     /* '<Root>/VePCAT_A_CabSurfAr' */
  real32_T VeCHFC_pct_FdhPosnErrMngt;  /* '<Root>/VeCHFC_pct_FdhPosnErrMngt' */
  real32_T VeCADC_pct_SdfPosnAmbCmp;   /* '<Root>/VeCADC_pct_SdfPosnAmbCmp' */
  real32_T VeACTU_na_FdhPosnFb1;       /* '<Root>/VeACTU_na_FdhPosnFb1' */
  real32_T VeCHFC_na_FdhPosnReq;       /* '<Root>/VeCHFC_na_FdhPosnReq' */
  real32_T VeCADC_pct_SdvPosnNvhCmp;   /* '<Root>/VeCADC_pct_SdvPosnNvhCmp' */
  real32_T VePCAT_h_HeatCoef[18];      /* '<Root>/VePCAT_h_HeatCoef' */
  boolean_T VeACTU_na_FdhPosnFbQf;     /* '<Root>/VeACTU_na_FdhPosnFbQf' */
  boolean_T VeCHFC_na_FdhStopReq;      /* '<Root>/VeCHFC_na_FdhStopReq' */
  real32_T VeCADC_pct_SdfPosnNvhCmp;   /* '<Root>/VeCADC_pct_SdfPosnNvhCmp' */
  boolean_T VeACTU_na_FdhStsFb;        /* '<Root>/VeACTU_na_FdhStsFb' */
  real32_T VeCHFC_na_FdhFlapPosn;      /* '<Root>/VeCHFC_na_FdhFlapPosn' */
  real32_T VeCADC_pct_SdvPosnCalcd;    /* '<Root>/VeCADC_pct_SdvPosnCalcd' */
  real32_T VeACTU_na_FphPosnFb1;       /* '<Root>/VeACTU_na_FphPosnFb1' */
  boolean_T VeCHFC_na_FrntDrvZoneFlapParkSt;
                                  /* '<Root>/VeCHFC_na_FrntDrvZoneFlapParkSt' */
  real32_T VeCADC_pct_SdvPosnDas;      /* '<Root>/VeCADC_pct_SdvPosnDas' */
  boolean_T VeACTU_na_FphPosnFbQf;     /* '<Root>/VeACTU_na_FphPosnFbQf' */
  uint8_T VeCHFC_na_FrntPassOperSt;    /* '<Root>/VeCHFC_na_FrntPassOperSt' */
  real32_T VeCADC_pct_SdfPosnDas;      /* '<Root>/VeCADC_pct_SdfPosnDas' */
  uint8_T VeCTCM_na_OperSts;           /* '<Root>/VeCTCM_na_OperSts' */
  boolean_T VeACTU_na_FphStsFb;        /* '<Root>/VeACTU_na_FphStsFb' */
  uint8_T VeCHFC_na_FphPosnCalcnMode;  /* '<Root>/VeCHFC_na_FphPosnCalcnMode' */
  real32_T VeCADC_pct_SdvPosnErrMngt;  /* '<Root>/VeCADC_pct_SdvPosnErrMngt' */
  real32_T VeACTU_na_SdhPosnFb1;       /* '<Root>/VeACTU_na_SdhPosnFb1' */
  boolean_T VeCHFC_na_FphPosnUpdSt;    /* '<Root>/VeCHFC_na_FphPosnUpdSt' */
  boolean_T VeCTCM_na_KeepAwakeFlag;   /* '<Root>/VeCTCM_na_KeepAwakeFlag' */
  real32_T VeCADC_pct_SdfPosnErrMngt;  /* '<Root>/VeCADC_pct_SdfPosnErrMngt' */
  boolean_T VeACTU_na_SdhPosnFbQf;     /* '<Root>/VeACTU_na_SdhPosnFbQf' */
  real32_T VeCHFC_pct_FphPosnCalcd;    /* '<Root>/VeCHFC_pct_FphPosnCalcd' */
  boolean_T VeCTCM_na_RecCfgActv;      /* '<Root>/VeCTCM_na_RecCfgActv' */
  real32_T VeCADC_pct_SdvFlapPosn;     /* '<Root>/VeCADC_pct_SdvFlapPosn' */
  boolean_T VeACTU_na_SdhStsFb;        /* '<Root>/VeACTU_na_SdhStsFb' */
  real32_T VeCHFC_pct_FphPosnErrMngt;  /* '<Root>/VeCHFC_pct_FphPosnErrMngt' */
  boolean_T VeCTCM_na_OsaCfgActv;      /* '<Root>/VeCTCM_na_OsaCfgActv' */
  real32_T VeCADC_pct_SdfFlapPosn;     /* '<Root>/VeCADC_pct_SdfFlapPosn' */
  real32_T VeCHFC_na_FphPosnReq;       /* '<Root>/VeCHFC_na_FphPosnReq' */
  uint8_T VeCADC_na_SecDrvDistbnMode1;/* '<Root>/VeCADC_na_SecDrvDistbnMode1' */
  boolean_T VeCTCM_na_BCSecBlwrOperCtrl;
                                      /* '<Root>/VeCTCM_na_BCSecBlwrOperCtrl' */
  boolean_T VeCHFC_na_FphStopReq;      /* '<Root>/VeCHFC_na_FphStopReq' */
  uint8_T VeCADC_na_SecDrvZoneFlapParkSts;
                                  /* '<Root>/VeCADC_na_SecDrvZoneFlapParkSts' */
  real32_T VeCHFC_na_FphFlapPosn;      /* '<Root>/VeCHFC_na_FphFlapPosn' */
  boolean_T VeCTCM_na_BCFrntBlwrOperCtrl;
                                     /* '<Root>/VeCTCM_na_BCFrntBlwrOperCtrl' */
  real32_T VeCADC_pct_SdfPosnCalcd;    /* '<Root>/VeCADC_pct_SdfPosnCalcd' */
  boolean_T VeCHFC_na_FrntPassZoneFlapParkSt;
                                 /* '<Root>/VeCHFC_na_FrntPassZoneFlapParkSt' */
  boolean_T VeCTCM_na_DFFrntDrvOperCtrl;
                                      /* '<Root>/VeCTCM_na_DFFrntDrvOperCtrl' */
  real32_T VeCADC_pct_FpvPosnBase;     /* '<Root>/VeCADC_pct_FpvPosnBase' */
  uint8_T VeCHFC_na_SecDrvOperSt;      /* '<Root>/VeCHFC_na_SecDrvOperSt' */
  boolean_T VeCTCM_na_DFFrntPassOperCtrl;
                                     /* '<Root>/VeCTCM_na_DFFrntPassOperCtrl' */
  real32_T VeCADC_pct_FpfPosnBase;     /* '<Root>/VeCADC_pct_FpfPosnBase' */
  uint8_T VeCHFC_na_SdhPosnCalcnMode;  /* '<Root>/VeCHFC_na_SdhPosnCalcnMode' */
  real32_T VeCADC_pct_FpvDefCmp;       /* '<Root>/VeCADC_pct_FpvDefCmp' */
  boolean_T VeCTCM_na_DFSecDrvOperCtrl;/* '<Root>/VeCTCM_na_DFSecDrvOperCtrl' */
  real32_T VeACTU_na_RecPosnFb1;       /* '<Root>/VeACTU_na_RecPosnFb1' */
  boolean_T VeCHFC_na_SdhPosnUpdSt;    /* '<Root>/VeCHFC_na_SdhPosnUpdSt' */
  real32_T VeCADC_pct_FpfPosnCalcd;    /* '<Root>/VeCADC_pct_FpfPosnCalcd' */
  boolean_T VeACTU_na_RecPosnFbQf;     /* '<Root>/VeACTU_na_RecPosnFbQf' */
  real32_T VeCHFC_pct_SdhPosnCalcd;    /* '<Root>/VeCHFC_pct_SdhPosnCalcd' */
  boolean_T VeCTCM_na_DFSecPassOperCtrl;
                                      /* '<Root>/VeCTCM_na_DFSecPassOperCtrl' */
  uint8_T VeCADC_na_SecPassOperSts;    /* '<Root>/VeCADC_na_SecPassOperSts' */
  boolean_T VeACTU_na_RecStsFb;        /* '<Root>/VeACTU_na_RecStsFb' */
  real32_T VeCHFC_pct_SdhPosnErrMngt;  /* '<Root>/VeCHFC_pct_SdhPosnErrMngt' */
  boolean_T VeCTCM_na_DefCfgActv;      /* '<Root>/VeCTCM_na_DefCfgActv' */
  uint8_T VeCADC_na_SpvPosnCalcnMode;  /* '<Root>/VeCADC_na_SpvPosnCalcnMode' */
  real32_T VeCHFC_na_SdhPosnReq;       /* '<Root>/VeCHFC_na_SdhPosnReq' */
  boolean_T VeCTCM_na_FdvCfgActv;      /* '<Root>/VeCTCM_na_FdvCfgActv' */
  uint8_T VeCADC_na_SpfPosnCalcnMode;  /* '<Root>/VeCADC_na_SpfPosnCalcnMode' */
  boolean_T VeCHFC_na_SdhStopReq;      /* '<Root>/VeCHFC_na_SdhStopReq' */
  uint8_T VeCADC_na_SpvPosnUpdSts;     /* '<Root>/VeCADC_na_SpvPosnUpdSts' */
  boolean_T VeCTCM_na_FdfCfgActv;      /* '<Root>/VeCTCM_na_FdfCfgActv' */
  real32_T VeCHFC_na_SdhFlapPosn;      /* '<Root>/VeCHFC_na_SdhFlapPosn' */
  uint8_T VeCADC_na_SpfPosnUpdSts;     /* '<Root>/VeCADC_na_SpfPosnUpdSts' */
  uint16_T VeACTU_na_FdvStepPosnReq;   /* '<Root>/VeACTU_na_FdvStepPosnReq' */
  boolean_T VeCHFC_na_SecDrvZoneFlapParkSt;
                                   /* '<Root>/VeCHFC_na_SecDrvZoneFlapParkSt' */
  boolean_T VeCTCM_na_FpvCfgActv;      /* '<Root>/VeCTCM_na_FpvCfgActv' */
  real32_T VeCADC_pct_SpfPosnBase;     /* '<Root>/VeCADC_pct_SpfPosnBase' */
  boolean_T VeACTU_na_FdvStepType;     /* '<Root>/VeACTU_na_FdvStepType' */
  uint8_T VeCHFC_na_SecPassOperSt;     /* '<Root>/VeCHFC_na_SecPassOperSt' */
  boolean_T VeCTCM_na_FpfCfgActv;      /* '<Root>/VeCTCM_na_FpfCfgActv' */
  real32_T VeCADC_pct_SpvPosnBase;     /* '<Root>/VeCADC_pct_SpvPosnBase' */
  uint8_T VeACTU_na_FdvStepBorder;     /* '<Root>/VeACTU_na_FdvStepBorder' */
  uint8_T VeCHFC_na_SphPosnCalcnMode;  /* '<Root>/VeCHFC_na_SphPosnCalcnMode' */
  boolean_T VeCTCM_na_SdvCfgActv;      /* '<Root>/VeCTCM_na_SdvCfgActv' */
  real32_T VeCADC_pct_SpvDefCmp;       /* '<Root>/VeCADC_pct_SpvDefCmp' */
  boolean_T VeCHFC_na_SphPosnUpdSt;    /* '<Root>/VeCHFC_na_SphPosnUpdSt' */
  real32_T VeCADC_pct_SpfDefCmp;       /* '<Root>/VeCADC_pct_SpfDefCmp' */
  boolean_T VeCTCM_na_SdfCfgActv;      /* '<Root>/VeCTCM_na_SdfCfgActv' */
  real32_T VeCHFC_pct_SphPosnCalcd;    /* '<Root>/VeCHFC_pct_SphPosnCalcd' */
  real32_T VeCADC_pct_SpvPosnAmbCmp;   /* '<Root>/VeCADC_pct_SpvPosnAmbCmp' */
  real32_T VeCHFC_pct_SphPosnErrMngt;  /* '<Root>/VeCHFC_pct_SphPosnErrMngt' */
  boolean_T VeCTCM_na_SpvCfgActv;      /* '<Root>/VeCTCM_na_SpvCfgActv' */
  real32_T VeCADC_pct_SpfPosnAmbCmp;   /* '<Root>/VeCADC_pct_SpfPosnAmbCmp' */
  uint16_T VeACTU_na_FpvStepPosnReq;   /* '<Root>/VeACTU_na_FpvStepPosnReq' */
  real32_T VeCHFC_na_SphPosnReq;       /* '<Root>/VeCHFC_na_SphPosnReq' */
  boolean_T VeCTCM_na_SpfCfgActv;      /* '<Root>/VeCTCM_na_SpfCfgActv' */
  real32_T VeCADC_pct_SpvPosnNvhCmp;   /* '<Root>/VeCADC_pct_SpvPosnNvhCmp' */
  boolean_T VeACTU_na_FpvStepType;     /* '<Root>/VeACTU_na_FpvStepType' */
  boolean_T VeCHFC_na_SphStopReq;      /* '<Root>/VeCHFC_na_SphStopReq' */
  real32_T VeCTCM_T_AmbCmpCoeff;       /* '<Root>/VeCTCM_T_AmbCmpCoeff' */
  real32_T VeCADC_pct_SpfPosnNvhCmp;   /* '<Root>/VeCADC_pct_SpfPosnNvhCmp' */
  uint8_T VeACTU_na_FpvStepBorder;     /* '<Root>/VeACTU_na_FpvStepBorder' */
  real32_T VeCHFC_na_SphFlapPosn;      /* '<Root>/VeCHFC_na_SphFlapPosn' */
  real32_T VeCADC_pct_SpvPosnCalcd;    /* '<Root>/VeCADC_pct_SpvPosnCalcd' */
  boolean_T VeCTCM_na_FrntClimaSts;    /* '<Root>/VeCTCM_na_FrntClimaSts' */
  boolean_T VeCHFC_na_SecPassZoneFlapParkSt;
                                  /* '<Root>/VeCHFC_na_SecPassZoneFlapParkSt' */
  real32_T VeCADC_pct_SpfPosnCalcd;    /* '<Root>/VeCADC_pct_SpfPosnCalcd' */
  boolean_T VeCTCM_na_SecClimaSts;     /* '<Root>/VeCTCM_na_SecClimaSts' */
  real32_T VeCADC_pct_SpvPosnDas;      /* '<Root>/VeCADC_pct_SpvPosnDas' */
  real32_T VeCTCM_T_SurfIntEff0sun;    /* '<Root>/VeCTCM_T_SurfIntEff0sun' */
  real32_T VeCADC_pct_SpfPosnDas;      /* '<Root>/VeCADC_pct_SpfPosnDas' */
  real32_T VeCTCM_T_SurfIntEff100sun;  /* '<Root>/VeCTCM_T_SurfIntEff100sun' */
  real32_T VeCADC_pct_SpvPosnErrMngt;  /* '<Root>/VeCADC_pct_SpvPosnErrMngt' */
  real32_T VeCADC_pct_SpfPosnErrMngt;  /* '<Root>/VeCADC_pct_SpfPosnErrMngt' */
  real32_T VeCTCM_T_ECOTcsOffset;      /* '<Root>/VeCTCM_T_ECOTcsOffset' */
  uint8_T VeCADC_na_SecPassDistbnMode;/* '<Root>/VeCADC_na_SecPassDistbnMode' */
  uint16_T VeACTU_na_SdvStepPosnReq;   /* '<Root>/VeACTU_na_SdvStepPosnReq' */
  real32_T VeCTCM_pct_TcsUserOffsetSclg;
                                     /* '<Root>/VeCTCM_pct_TcsUserOffsetSclg' */
  real32_T VeCADC_pct_SpvFlapPosn;     /* '<Root>/VeCADC_pct_SpvFlapPosn' */
  boolean_T VeACTU_na_SdvStepType;     /* '<Root>/VeACTU_na_SdvStepType' */
  real32_T VeCTCM_T_Tcs0SunFd;         /* '<Root>/VeCTCM_T_Tcs0SunFd' */
  real32_T VeCADC_pct_SpfFlapPosn;     /* '<Root>/VeCADC_pct_SpfFlapPosn' */
  uint8_T VeACTU_na_SdvStepBorder;     /* '<Root>/VeACTU_na_SdvStepBorder' */
  real32_T VeCTCM_T_Tcs100SunFd;       /* '<Root>/VeCTCM_T_Tcs100SunFd' */
  boolean_T VeCADC_na_SecPassZoneFlapParkSts;
                                 /* '<Root>/VeCADC_na_SecPassZoneFlapParkSts' */
  real32_T VeCADC_pct_DefPosnReq;      /* '<Root>/VeCADC_pct_DefPosnReq' */
  real32_T VeCTCM_T_TcsStdFd;          /* '<Root>/VeCTCM_T_TcsStdFd' */
  boolean_T VeCADC_na_DefStopReq;      /* '<Root>/VeCADC_na_DefStopReq' */
  real32_T VeCTCM_T_TcslvnFd;          /* '<Root>/VeCTCM_T_TcslvnFd' */
  real32_T VeCADC_pct_BpPosnReq;       /* '<Root>/VeCADC_pct_BpPosnReq' */
  real32_T VeCTCM_T_SurfIntEffFd;      /* '<Root>/VeCTCM_T_SurfIntEffFd' */
  boolean_T VeCADC_na_BpStopReq;       /* '<Root>/VeCADC_na_BpStopReq' */
  real32_T VeCTCM_T_dTsurfFd;          /* '<Root>/VeCTCM_T_dTsurfFd' */
  real32_T VeCADC_pct_FdvPosnReq;      /* '<Root>/VeCADC_pct_FdvPosnReq' */
  boolean_T VeCADC_na_FdvStopReq;      /* '<Root>/VeCADC_na_FdvStopReq' */
  real32_T VeCTCM_T_TcsSurfOfstFd;     /* '<Root>/VeCTCM_T_TcsSurfOfstFd' */
  real32_T VeCADC_pct_FdfPosnReq;      /* '<Root>/VeCADC_pct_FdfPosnReq' */
  real32_T VeCTCM_T_FdTcsUserOffset;   /* '<Root>/VeCTCM_T_FdTcsUserOffset' */
  boolean_T VeCADC_na_FdfStopReq;      /* '<Root>/VeCADC_na_FdfStopReq' */
  real32_T VeCTCM_T_TcsFd1;            /* '<Root>/VeCTCM_T_TcsFd1' */
  real32_T VeCADC_pct_DefPosnBase;     /* '<Root>/ VeCADC_pct_DefPosnBase' */
  uint16_T VeACTU_na_FdhStepPosnReq;   /* '<Root>/VeACTU_na_FdhStepPosnReq' */
  real32_T VeCTCM_T_Tcs0SunFp;         /* '<Root>/VeCTCM_T_Tcs0SunFp' */
  real32_T VeCADC_pct_BpPosnBase;      /* '<Root>/VeCADC_pct_BpPosnBase' */
  boolean_T VeACTU_na_FdhStepType;     /* '<Root>/VeACTU_na_FdhStepType' */
  real32_T VeCADC_pct_FpvPosnReq;      /* '<Root>/VeCADC_pct_FpvPosnReq' */
  real32_T VeCTCM_T_Tcs100SunFp;       /* '<Root>/VeCTCM_T_Tcs100SunFp' */
  uint8_T VeACTU_na_FdhStepBorder;     /* '<Root>/VeACTU_na_FdhStepBorder' */
  boolean_T VeCADC_na_FpvStopReq;      /* '<Root>/VeCADC_na_FpvStopReq' */
  uint16_T VeACTU_na_FphStepPosnReq;   /* '<Root>/VeACTU_na_FphStepPosnReq' */
  real32_T VeCTCM_T_TcsStdFp;          /* '<Root>/VeCTCM_T_TcsStdFp' */
  real32_T VeCADC_pct_FpfPosnReq;      /* '<Root>/VeCADC_pct_FpfPosnReq' */
  boolean_T VeACTU_na_FphStepType;     /* '<Root>/VeACTU_na_FphStepType' */
  real32_T VeCTCM_T_TcslvnFp;          /* '<Root>/VeCTCM_T_TcslvnFp' */
  boolean_T VeCADC_na_FpfStopReq;      /* '<Root>/VeCADC_na_FpfStopReq' */
  uint8_T VeACTU_na_FphStepBorder;     /* '<Root>/VeACTU_na_FphStepBorder' */
  real32_T VeCTCM_T_SurfIntEffFp;      /* '<Root>/VeCTCM_T_SurfIntEffFp' */
  real32_T VeCADC_pct_SdvPosnReq;      /* '<Root>/VeCADC_pct_SdvPosnReq' */
  uint16_T VeACTU_na_SdhStepPosnReq;   /* '<Root>/VeACTU_na_SdhStepPosnReq' */
  boolean_T VeCADC_na_SdvStopReq;      /* '<Root>/VeCADC_na_SdvStopReq' */
  real32_T VeCTCM_T_dTsurfFp;          /* '<Root>/VeCTCM_T_dTsurfFp' */
  boolean_T VeACTU_na_SdhStepType;     /* '<Root>/VeACTU_na_SdhStepType' */
  real32_T VeCADC_pct_SdfPosnReq;      /* '<Root>/VeCADC_pct_SdfPosnReq' */
  uint8_T VeACTU_na_SdhStepBorder;     /* '<Root>/VeACTU_na_SdhStepBorder' */
  real32_T VeCTCM_T_TcsSurfOfstFp;     /* '<Root>/VeCTCM_T_TcsSurfOfstFp' */
  boolean_T VeCADC_na_SdfStopReq;      /* '<Root>/VeCADC_na_SdfStopReq' */
  real32_T VeCTCM_T_FpTcsUserOffset;   /* '<Root>/VeCTCM_T_FpTcsUserOffset' */
  real32_T VeCADC_pct_SpvPosnReq;      /* '<Root>/VeCADC_pct_SpvPosnReq' */
  real32_T VeCTCM_T_TcsFp1;            /* '<Root>/VeCTCM_T_TcsFp1' */
  boolean_T VeCADC_na_SpvStopReq;      /* '<Root>/VeCADC_na_SpvStopReq' */
  real32_T VeCADC_pct_SpfPosnReq;      /* '<Root>/VeCADC_pct_SpfPosnReq' */
  real32_T VeCTCM_T_Tcs0SunSd;         /* '<Root>/VeCTCM_T_Tcs0SunSd' */
  boolean_T VeCADC_na_SpfStopReq;      /* '<Root>/VeCADC_na_SpfStopReq' */
  real32_T VeCTCM_T_Tcs100SunSd;       /* '<Root>/VeCTCM_T_Tcs100SunSd' */
  real32_T VeCTCM_T_TcsStdSd;          /* '<Root>/VeCTCM_T_TcsStdSd' */
  uint16_T VeACTU_na_RecStepPosnReq;   /* '<Root>/VeACTU_na_RecStepPosnReq' */
  real32_T VeCTCM_T_TcslvnSd;          /* '<Root>/VeCTCM_T_TcslvnSd' */
  boolean_T VeACTU_na_RecStepType;     /* '<Root>/VeACTU_na_RecStepType' */
  real32_T VeCTCM_T_SurfIntEffSd;      /* '<Root>/VeCTCM_T_SurfIntEffSd' */
  uint8_T VeACTU_na_RecStepBorder;     /* '<Root>/VeACTU_na_RecStepBorder' */
  real32_T VeCTCM_T_dTsurfSd;          /* '<Root>/VeCTCM_T_dTsurfSd' */
  boolean_T VeACTU_na_FdvDCBorder;     /* '<Root>/VeACTU_na_FdvDCBorder' */
  real32_T VeCTCM_T_TcsSurfOfstSd;     /* '<Root>/VeCTCM_T_TcsSurfOfstSd' */
  uint8_T VeACTU_na_FdfDCBorder;       /* '<Root>/VeACTU_na_FdfDCBorder' */
  real32_T VeCTCM_T_SdTcsUserOffset;   /* '<Root>/VeCTCM_T_SdTcsUserOffset' */
  real32_T VeCTCM_T_TcsSd1;            /* '<Root>/VeCTCM_T_TcsSd1' */
  real32_T VeCTCM_T_Tcs0SunSp;         /* '<Root>/VeCTCM_T_Tcs0SunSp' */
  uint8_T VeACTU_na_SdvDCBorder;       /* '<Root>/VeACTU_na_SdvDCBorder' */
  real32_T VeCTCM_T_Tcs100SunSp;       /* '<Root>/VeCTCM_T_Tcs100SunSp' */
  real32_T VeCTCM_T_TcsStdSp;          /* '<Root>/VeCTCM_T_TcsStdSp' */
  real32_T VeCTCM_T_TcslvnSp;          /* '<Root>/VeCTCM_T_TcslvnSp' */
  uint8_T VeACTU_na_FdhDCBorder;       /* '<Root>/VeACTU_na_FdhDCBorder' */
  real32_T VeCTCM_T_SurfIntEffSp;      /* '<Root>/VeCTCM_T_SurfIntEffSp' */
  uint8_T VeACTU_na_FphDCBorder;       /* '<Root>/VeACTU_na_FphDCBorder' */
  real32_T VeCTCM_T_dTsurfSp;          /* '<Root>/VeCTCM_T_dTsurfSp' */
  uint8_T VeACTU_na_SdhDCBorder;       /* '<Root>/VeACTU_na_SdhDCBorder' */
  real32_T VeCTCM_T_TcsSurfOfstSp;     /* '<Root>/VeCTCM_T_TcsSurfOfstSp' */
  real32_T VeCTCM_T_SpTcsUserOffset;   /* '<Root>/VeCTCM_T_SpTcsUserOffset' */
  uint8_T VeACTU_na_RecDCBorder;       /* '<Root>/VeACTU_na_RecDCBorder' */
  real32_T VeCTCM_T_TcsSp;             /* '<Root>/VeCTCM_T_TcsSp' */
  real32_T VeCTCM_P_FrntDrvHeatDem;    /* '<Root>/VeCTCM_P_FrntDrvHeatDem' */
  real32_T VeCTCM_P_FrntPassHeatDem;   /* '<Root>/VeCTCM_P_FrntPassHeatDem' */
  real32_T VeACTU_U_FdvMinRng;         /* '<Root>/VeACTU_U_FdvMinRng' */
  real32_T VeCTCM_P_SecDrvHeatDem;     /* '<Root>/VeCTCM_P_SecDrvHeatDem' */
  real32_T VeACTU_U_FdvMaxRng;         /* '<Root>/VeACTU_U_FdvMaxRng' */
  real32_T VeCTCM_P_SecPassHeatDem;    /* '<Root>/VeCTCM_P_SecPassHeatDem' */
  real32_T VeCTCM_na_FrntDrvYn;        /* '<Root>/VeCTCM_na_FrntDrvYn' */
  real32_T VeACTU_U_FpvMinRng;         /* '<Root>/VeACTU_U_FpvMinRng' */
  real32_T VeCTCM_na_FrntPassYn;       /* '<Root>/VeCTCM_na_FrntPassYn' */
  real32_T VeACTU_U_FpvMaxRng;         /* '<Root>/VeACTU_U_FpvMaxRng' */
  real32_T VeCTCM_na_SecDrvYn;         /* '<Root>/VeCTCM_na_SecDrvYn' */
  real32_T VeCTCM_na_SecPassYn;        /* '<Root>/VeCTCM_na_SecPassYn' */
  uint8_T VeCTCM_na_OperSpclStartSts;  /* '<Root>/VeCTCM_na_OperSpclStartSts' */
  boolean_T VeCTCM_na_ColdStartTmrSts; /* '<Root>/VeCTCM_na_ColdStartTmrSts' */
  real32_T VeACTU_U_SdvMinRng;         /* '<Root>/VeACTU_U_SdvMinRng' */
  boolean_T VeCTCM_na_HotStartTmrSts;  /* '<Root>/VeCTCM_na_HotStartTmrSts' */
  real32_T VeACTU_U_SdvMaxRng;         /* '<Root>/VeACTU_U_SdvMaxRng' */
  uint8_T VeCTCM_na_FdZoneModSts1;     /* '<Root>/VeCTCM_na_FdZoneModSts1' */
  uint8_T VeCTCM_na_FpZoneModSts1;     /* '<Root>/VeCTCM_na_FpZoneModSts1' */
  uint8_T VeCTCM_na_SdZoneModSts1;     /* '<Root>/VeCTCM_na_SdZoneModSts1' */
  uint8_T VeCTCM_na_SpZoneModSts1;     /* '<Root>/VeCTCM_na_SpZoneModSts1' */
  real32_T VeCTCM_na_DefCtrlTar;       /* '<Root>/VeCTCM_na_DefCtrlTar' */
  real32_T VeACTU_U_FdhMinRng;         /* '<Root>/VeACTU_U_FdhMinRng' */
  real32_T VeCTCM_na_FdvCtrlTar;       /* '<Root>/VeCTCM_na_FdvCtrlTar' */
  real32_T VeACTU_U_FdhMaxRng;         /* '<Root>/VeACTU_U_FdhMaxRng' */
  real32_T VeCTCM_na_FdfCtrlTar;       /* '<Root>/VeCTCM_na_FdfCtrlTar' */
  real32_T VeACTU_U_FphMinRng;         /* '<Root>/VeACTU_U_FphMinRng' */
  real32_T VeCTCM_na_FpvCtrlTar;       /* '<Root>/VeCTCM_na_FpvCtrlTar' */
  real32_T VeACTU_U_FphMaxRng;         /* '<Root>/VeACTU_U_FphMaxRng' */
  real32_T VeACTU_U_SdhMinRng;         /* '<Root>/VeACTU_U_SdhMinRng' */
  real32_T VeCTCM_na_FpfCtrlTar;       /* '<Root>/VeCTCM_na_FpfCtrlTar' */
  real32_T VeACTU_U_SdhMaxRng;         /* '<Root>/VeACTU_U_SdhMaxRng' */
  real32_T VeCTCM_na_SdvCtrlTar;       /* '<Root>/VeCTCM_na_SdvCtrlTar' */
  real32_T VeCTCM_na_SdfCtrlTar;       /* '<Root>/VeCTCM_na_SdfCtrlTar' */
  real32_T VeCTCM_na_SpvCtrlTar;       /* '<Root>/VeCTCM_na_SpvCtrlTar' */
  real32_T VeCTCM_na_SpfCtrlTar;       /* '<Root>/VeCTCM_na_SpfCtrlTar' */
  real32_T VeACTU_U_RecMinRng;         /* '<Root>/VeACTU_U_RecMinRng' */
  uint16_T VeCTCM_Af_FrntPassWghFlow;  /* '<Root>/VeCTCM_Af_FrntPassWghFlow' */
  real32_T VeACTU_U_RecMaxRng;         /* '<Root>/VeACTU_U_RecMaxRng' */
  uint16_T VeCTCM_Af_SecDrvWghFlow;    /* '<Root>/VeCTCM_Af_SecDrvWghFlow' */
  uint16_T VeCTCM_Af_SecPassWghFlow;   /* '<Root>/VeCTCM_Af_SecPassWghFlow' */
  uint16_T VeACTU_na_FdvStepRange;     /* '<Root>/VeACTU_na_FdvStepRange' */
  uint16_T VeCTCM_Af_FrntDrvWghFlow;   /* '<Root>/VeCTCM_Af_FrntDrvWghFlow' */
  uint16_T VeACTU_na_FpvStepRange;     /* '<Root>/VeACTU_na_FpvStepRange' */
  real32_T VeCTCM_v_FbFlowWghCtrlTar;  /* '<Root>/VeCTCM_v_FbFlowWghCtrlTar' */
  real32_T VeCTCM_T_FdFlwTarTemp1;     /* '<Root>/VeCTCM_T_FdFlwTarTemp1' */
  real32_T VeCTCM_T_FpFlwTarTemp1;     /* '<Root>/VeCTCM_T_FpFlwTarTemp1' */
  uint16_T VeACTU_na_SdvStepRange;     /* '<Root>/VeACTU_na_SdvStepRange' */
  real32_T VeCTCM_T_SdFlwTarTemp1;     /* '<Root>/VeCTCM_T_SdFlwTarTemp1' */
  real32_T VeCTCM_T_SpFlwTarTemp1;     /* '<Root>/VeCTCM_T_SpFlwTarTemp1' */
  real32_T VeCTCM_T_DtFd;              /* '<Root>/VeCTCM_T_DtFd' */
  uint16_T VeACTU_na_FdhStepRange;     /* '<Root>/VeACTU_na_FdhStepRange' */
  real32_T VeCTCM_T_FrntDrvFlowTempOfs;
                                      /* '<Root>/VeCTCM_T_FrntDrvFlowTempOfs' */
  uint16_T VeACTU_na_FphStepRange;     /* '<Root>/VeACTU_na_FphStepRange' */
  uint16_T VeACTU_na_SdhStepRange;     /* '<Root>/VeACTU_na_SdhStepRange' */
  real32_T VeCTCM_T_DtFp;              /* '<Root>/VeCTCM_T_DtFp' */
  real32_T VeCTCM_T_FrntPassFlowTempOfs;
                                     /* '<Root>/VeCTCM_T_FrntPassFlowTempOfs' */
  real32_T VeCTCM_T_DtSd;              /* '<Root>/VeCTCM_T_DtSd' */
  uint16_T VeACTU_na_RecStepRange;     /* '<Root>/VeACTU_na_RecStepRange' */
  real32_T VeCTCM_T_SecDrvFlowTempOfs; /* '<Root>/VeCTCM_T_SecDrvFlowTempOfs' */
  real32_T VeACTU_na_FdvVltgPosnReq1;  /* '<Root>/VeACTU_na_FdvVltgPosnReq1' */
  real32_T VeCTCM_T_DtSp;              /* '<Root>/VeCTCM_T_DtSp' */
  real32_T VeCTCM_T_SecPassFlowTempOfs;
                                      /* '<Root>/VeCTCM_T_SecPassFlowTempOfs' */
  real32_T VeACTU_na_FpvVltgPosnReq1;  /* '<Root>/VeACTU_na_FpvVltgPosnReq1' */
  real32_T VeCTCM_T_FdTarRecTCtrl;     /* '<Root>/VeCTCM_T_FdTarRecTCtrl' */
  real32_T VeCTCM_T_FpTarRecTCtrl;     /* '<Root>/VeCTCM_T_FpTarRecTCtrl' */
  real32_T VeACTU_na_SdvVltgPosnReq1;  /* '<Root>/VeACTU_na_SdvVltgPosnReq1' */
  real32_T VeCTCM_T_TarRecTCrtl;       /* '<Root>/VeCTCM_T_TarRecTCrtl' */
  real32_T VeCTCM_P_FdInConEnrgChng1;  /* '<Root>/VeCTCM_P_FdInConEnrgChng1' */
  real32_T VeCTCM_P_FpInConEnrgChng1;  /* '<Root>/VeCTCM_P_FpInConEnrgChng1' */
  real32_T VeCTCM_P_SdInConEnrgChng1;  /* '<Root>/VeCTCM_P_SdInConEnrgChng1' */
  real32_T VeACTU_na_FdhVltgPosnReq1;  /* '<Root>/VeACTU_na_FdhVltgPosnReq1' */
  real32_T VeACTU_na_FphVltgPosnReq1;  /* '<Root>/VeACTU_na_FphVltgPosnReq1' */
  real32_T VeCTCM_P_SpInConEnrgChng1;  /* '<Root>/VeCTCM_P_SpInConEnrgChng1' */
  real32_T VeACTU_na_SdhVltgPosnReq1;  /* '<Root>/VeACTU_na_SdhVltgPosnReq1' */
  int16_T VeCTCM_T_LowestTarFlwTemp;   /* '<Root>/VeCTCM_T_LowestTarFlwTemp' */
  int16_T VeCTCM_T_EvaNormFlwTemp;     /* '<Root>/VeCTCM_T_EvaNormFlwTemp' */
  real32_T VeCTCM_T_EvaDefFlwTemp;     /* '<Root>/VeCTCM_T_EvaDefFlwTemp' */
  real32_T VeACTU_na_RecVltgPosnReq1;  /* '<Root>/VeACTU_na_RecVltgPosnReq1' */
  real32_T VeNVMM_U_DcRangeSaveEep;    /* '<Root>/VeNVMM_U_DcRangeSaveEep' */
  real32_T VeCTCM_T_EvaOutFlwTemp;     /* '<Root>/VeCTCM_T_EvaOutFlwTemp' */
  real32_T VeCTCM_P_FdEvaEnrgExch1;    /* '<Root>/VeCTCM_P_FdEvaEnrgExch1' */
  real32_T VeCTCM_P_FpEvaEnrgExch1;    /* '<Root>/VeCTCM_P_FpEvaEnrgExch1' */
  real32_T VeCTCM_P_SdEvaEnrgExch1;    /* '<Root>/VeCTCM_P_SdEvaEnrgExch1' */
  real32_T VeCTCM_P_SpEvaEnrgExch1;    /* '<Root>/VeCTCM_P_SpEvaEnrgExch1' */
  real32_T VeCTCM_v_FbFlowCtrlTar;     /* '<Root>/VeCTCM_v_FbFlowCtrlTar' */
  boolean_T VeCTCM_na_HFFrntDrvOperCtrl;
                                     /* '<Root>/VeCTCM_na_HFFrntDrvOperCtrl ' */
  boolean_T VeCTCM_na_HFFrntPassOperCtrl;
                                     /* '<Root>/VeCTCM_na_HFFrntPassOperCtrl' */
  boolean_T VeCTCM_na_HFSecDrvOperCtrl;/* '<Root>/VeCTCM_na_HFSecDrvOperCtrl' */
  uint8_T VeBLWA_pct_RatioReq1;        /* '<Root>/VeBLWA_pct_RatioReq1' */
  boolean_T VeCTCM_na_HFSecPassOperCtrl;
                                      /* '<Root>/VeCTCM_na_HFSecPassOperCtrl' */
  boolean_T VeCTCM_na_SphCfgActv;      /* '<Root>/VeCTCM_na_SphCfgActv' */
  boolean_T VeCTCM_na_FdhCfgActv;      /* '<Root>/VeCTCM_na_FdhCfgActv' */
  boolean_T VeCTCM_na_FphCfgActv;      /* '<Root>/VeCTCM_na_FphCfgActv' */
  boolean_T VeCTCM_na_SdhCfgActv;      /* '<Root>/VeCTCM_na_SdhCfgActv' */
  boolean_T VeCTCM_na_ASCType;         /* '<Root>/VeCTCM_na_ASCType' */
  boolean_T VeCTCM_na_RFOperCtrl;      /* '<Root>/VeCTCM_na_RFOperCtrl' */
  real32_T VeCTCM_T_RecTOffs;          /* '<Root>/VeCTCM_T_RecTOffs' */
  real32_T VeCTCM_T_FLowestTarFlwTemp; /* '<Root>/VeCTCM_T_FLowestTarFlwTemp' */
  real32_T VeCTCM_T_RLowestTarFlwTemp; /* '<Root>/VeCTCM_T_RLowestTarFlwTemp' */
  real32_T VeCTCM_T_FrntEvaNormFlwTemp;
                                      /* '<Root>/VeCTCM_T_FrntEvaNormFlwTemp' */
  real32_T VeCTCM_T_FrntEvaTarTemp1;   /* '<Root>/VeCTCM_T_FrntEvaTarTemp1' */
  real32_T VeCTCM_T_RearEvaNormFlwTemp;
                                     /* '<Root>/VeCTCM_T_RearEvaNormFlwTemp ' */
  real32_T VeCTCM_T_FdHexTarFlwTemp;   /* '<Root>/VeCTCM_T_FdHexTarFlwTemp' */
  real32_T VeCTCM_T_RearEvaTarTemp1;   /* '<Root>/VeCTCM_T_RearEvaTarTemp1' */
  real32_T VeCTCM_T_FpHexTarFlwTemp;   /* '<Root>/VeCTCM_T_FpHexTarFlwTemp' */
  real32_T VeCTCM_T_SdHexTarFlwTemp;   /* '<Root>/VeCTCM_T_SdHexTarFlwTemp' */
  real32_T VeCTCM_T_SpHexTarFlwTemp;   /* '<Root>/VeCTCM_T_SpHexTarFlwTemp' */
  real32_T VeCTCM_T_RearHexTarTemp1;   /* '<Root>/VeCTCM_T_RearHexTarTemp 1' */
  real32_T VeCTCM_T_FrntHexTarTemp1;   /* '<Root>/VeCTCM_T_FrntHexTarTemp1' */
  boolean_T VeCHMI_na_RfaAutoMode;     /* '<Root>/VeCHMI_na_RfaAutoMode' */
  boolean_T VeCHMI_na_BlwrAutoMode;    /* '<Root>/VeCHMI_na_BlwrAutoMode' */
  boolean_T VeCHMI_na_AirdLAutoMode;   /* '<Root>/VeCHMI_na_AirdLAutoMode' */
  boolean_T VeCHMI_na_AirdRAutoMode;   /* '<Root>/VeCHMI_na_AirdRAutoMode ' */
  boolean_T VeCHMI_na_AirdMLAutoMode;  /* '<Root>/VeCHMI_na_AirdMLAutoMode' */
  boolean_T VeCHMI_na_AcReq;           /* '<Root>/VeCHMI_na_AcReq' */
  boolean_T VeCHMI_na_RfaMode;         /* '<Root>/VeCHMI_na_RfaMode' */
  uint8_T VeCHMI_na_AirdModeL;         /* '<Root>/VeCHMI_na_AirdModeL' */
  uint8_T VeCHMI_na_AirdModeR;         /* '<Root>/VeCHMI_na_AirdModeR' */
  uint8_T VeCHMI_na_AirdModeML;        /* '<Root>/VeCHMI_na_AirdModeML' */
  real32_T VeCHMI_T_SetTempL;          /* '<Root>/VeCHMI_T_SetTempL ' */
  real32_T VeCHMI_T_SetTempR;          /* '<Root>/VeCHMI_T_SetTempR' */
  real32_T VeCHMI_T_SetTempML;         /* '<Root>/VeCHMI_T_SetTempML' */
  uint8_T VeCHMI_na_BlwrLv;            /* '<Root>/VeCHMI_na_BlwrLv' */
  boolean_T VeCHMI_na_BlwrOff;         /* '<Root>/VeCHMI_na_BlwrOff' */
  boolean_T VeCHMI_na_DefrostReq;      /* '<Root>/VeCHMI_na_DefrostReq' */
  real32_T VeCHMI_na_AutoDefSts;       /* '<Root>/VeCHMI_na_AutoDefSts' */
  boolean_T VeCHMI_na_ECOSts1;         /* '<Root>/VeCHMI_na_ECOSts1' */
  boolean_T VeVTIC_na_WindshldWiprActivSts;
                                   /* '<Root>/VeVTIC_na_WindshldWiprActivSts' */
  real32_T VeSENA_T_WidShieldTemp;     /* '<Root>/VeSENA_T_WidShieldTemp' */
  real32_T VeVTIC_mps_VehSpdLgtA1;     /* '<Root>/VeVTIC_mps_VehSpdLgtA1' */
  boolean_T VeVTIC_na_UseMode;         /* '<Root>/VeVTIC_na_UseMode' */
  real32_T VeVTIC_t_SoakTime;          /* '<Root>/VeVTIC_t_SoakTime' */
  real32_T VeSENA_T_SecDrvFeetTemp;    /* '<Root>/VeSENA_T_SecDrvFeetTemp' */
  real32_T VeSENA_T_SecDrvVentTemp;    /* '<Root>/VeSENA_T_SecDrvVentTemp' */
  real32_T VeSENA_pct_RelHumidity;     /* '<Root>/VeSENA_pct_RelHumidity' */
  real32_T VeVTIC_t_SoakTimeSaved;     /* '<Root>/VeVTIC_t_SoakTimeSaved' */
  real32_T VeVTIC_t_SoakTimeLoad;      /* '<Root>/VeVTIC_t_SoakTimeLoad' */
  uint8_T VeFWDS_na_OperSts;           /* '<Root>/VeFWDS_na_OperSts' */
  real32_T VeFWDS_T_DewPntTemp;        /* '<Root>/VeFWDS_T_DewPntTemp' */
  real32_T VeFWDS_pct_RecRio;          /* '<Root>/VeFWDS_pct_RecRio' */
  real32_T VeFWDS_pct_DefRio;          /* '<Root>/VeFWDS_pct_DefRio' */
  uint8_T VeFWDS_na_BlwrLvLim;         /* '<Root>/VeFWDS_na_BlwrLvLim' */
  real32_T VeFWDS_T_EvaDegTar;         /* '<Root>/VeFWDS_T_EvaDegTar' */
  real32_T VeFWDS_na_RiskValue1;       /* '<Root>/VeFWDS_na_RiskValue1' */
  uint8_T VeFDWS_na_RiskLv1;           /* '<Root>/VeFDWS_na_RiskLv1' */
  boolean_T VeFWDS_na_RecRioEnb;       /* '<Root>/VeFWDS_na_RecRioEnb' */
  boolean_T VeFWDS_na_DefRioEnb;       /* '<Root>/VeFWDS_na_DefRioEnb' */
  boolean_T VeFWDS_na_BlwrLvLimEnb;    /* '<Root>/VeFWDS_na_BlwrLvLimEnb' */
  boolean_T VeFWDS_na_EvaDegTarEnb;    /* '<Root>/VeFWDS_na_EvaDegTarEnb' */
  real32_T VeCSCC_V_FrntPassFlowFb;    /* '<Root>/VeCSCC_V_FrntPassFlowFb' */
  real32_T VeCSCC_V_SecDrvFlowFb;      /* '<Root>/VeCSCC_V_SecDrvFlowFb' */
  real32_T VeCSCC_V_SecPassFlowFb;     /* '<Root>/VeCSCC_V_SecPassFlowFb' */
  real32_T VeCSCC_V_FrntPassDef;       /* '<Root>/VeCSCC_V_FrntPassDef' */
  real32_T VeCSCC_V_FrntDrvFlowFb;     /* '<Root>/VeCSCC_V_FrntDrvFlowFb' */
  real32_T VeCTCM_v_SecbFlowCtrlTar;   /* '<Root>/VeCTCM_v_SecbFlowCtrlTar' */
  boolean_T VeACTU_na_DcFbReady;       /* '<Root>/VeACTU_na_DcFbReady' */
  boolean_T VeACTU_na_DcRstDone;       /* '<Root>/VeACTU_na_DcRstDone' */
  boolean_T VeACTU_na_DcStopDone;      /* '<Root>/VeACTU_na_DcStopDone' */
  boolean_T VeACTU_na_FdvDcType;       /* '<Root>/VeACTU_na_FdvDcType' */
  boolean_T VeACTU_na_FdfDcType;       /* '<Root>/VeACTU_na_FdfDcType' */
  boolean_T VeACTU_na_SdvDcType;       /* '<Root>/VeACTU_na_SdvDcType' */
  boolean_T VeACTU_na_FdhDcType;       /* '<Root>/VeACTU_na_FdhDcType' */
  boolean_T VeACTU_na_FphDcType;       /* '<Root>/VeACTU_na_FphDcType' */
  boolean_T VeACTU_na_SdhDcType;       /* '<Root>/VeACTU_na_SdhDcType' */
  boolean_T VeACTU_na_RecDcType;       /* '<Root>/VeACTU_na_RecDcType' */
  boolean_T VeACTU_na_DcRangeUpdt;     /* '<Root>/VeACTU_na_DcRangeUpdt' */
  real32_T VePCAT_T_BreaTemSp;         /* '<Root>/VePCAT_T_BreaTemSp' */
  real32_T VePCAT_T_VehExterSurfTempSave[18];
                                    /* '<Root>/VePCAT_T_VehExterSurfTempSave' */
  real32_T VePCAT_T_VehIntrSurfTempSave[18];
                                     /* '<Root>/VePCAT_T_VehIntrSurfTempSave' */
  real32_T VePCAT_T_VehMidSurfTempSave[12];
                                      /* '<Root>/VePCAT_T_VehMidSurfTempSave' */
  real32_T VePCAT_T_VehBreaTempSave[4];/* '<Root>/VePCAT_T_VehBreaTempSave' */
  uint8_T VePCAT_na_PCATOperSts;       /* '<Root>/VePCAT_na_PCATOperSts' */
  real32_T VePCAT_na_ShellMass18[18];  /* '<Root>/VePCAT_na_ShellMass18' */
  real32_T VePCAT_na_ShellCp18[18];    /* '<Root>/VePCAT_na_ShellCp18' */
  real32_T VePCAT_na_ShellHtCndvty18[18];/* '<Root>/VePCAT_na_ShellHtCndvty18' */
  real32_T VePCAT_na_ShellThick18[18]; /* '<Root>/VePCAT_na_ShellThick18' */
  uint8_T VePCAT_na_NapTimrSts;        /* '<Root>/VePCAT_na_NapTimrSts' */
  real32_T VePCAT_t_NapTimr;           /* '<Root>/VePCAT_t_NapTimr' */
  real32_T VeCSCC_m_FrEvaNormFlwOutHum;
                                      /* '<Root>/VeCSCC_m_FrEvaNormFlwOutHum' */
  real32_T VeCSCC_m_ReEvaNormFlwOutHum;
                                      /* '<Root>/VeCSCC_m_ReEvaNormFlwOutHum' */
  real32_T VeCSCC_m_RecFlwInHum;       /* '<Root>/VeCSCC_m_RecFlwInHum' */
  real32_T VeCSCC_T_DuctAvgTemp;       /* '<Root>/VeCSCC_T_DuctAvgTemp' */
  real32_T VeCSCC_pwr_SloarAvgPwr;     /* '<Root>/VeCSCC_pwr_SloarAvgPwr' */
  real32_T VeTemp_panel_FR_Raw;        /* '<Root>/VeTemp_panel_FR_Raw' */
  real32_T VeTemp_panel_FL_Raw;        /* '<Root>/VeTemp_panel_FL_Raw' */
  real32_T VeTemp_feet_FR_EX_Raw;      /* '<Root>/VeTemp_feet_FR_EX_Raw' */
  real32_T VeTemp_feet_FL_EX_Raw;      /* '<Root>/VeTemp_feet_FL_EX_Raw' */
  real32_T VeTemp_feet_SL_Raw;         /* '<Root>/VeTemp_feet_SL_Raw' */
  real32_T VeTemp_panel_SL_Raw;        /* '<Root>/VeTemp_panel_SL_Raw' */
  real32_T VeTemp_Fevap_Raw;           /* '<Root>/VeTemp_Fevap_Raw' */
  real32_T AmbTRawAmbTVal;             /* '<Root>/AmbTRawAmbTVal' */
  real32_T VehSpdLgtA1;                /* '<Root>/VehSpdLgtA1' */
  uint16_T LeSolarData;                /* '<Root>/LeSolarData' */
  uint16_T RiSolarData;                /* '<Root>/RiSolarData' */
  real32_T VeTemp_HEX_Raw1;            /* '<Root>/VeTemp_HEX_Raw1' */
  real32_T VeTemp_Fincar_Raw1;         /* '<Root>/VeTemp_Fincar_Raw1' */
  real32_T DriverTempFlapFb1;          /* '<Root>/DriverTempFlapFb1' */
  real32_T PassTempFlapFb1;            /* '<Root>/PassTempFlapFb1' */
  real32_T RearTempFlapFb1;            /* '<Root>/RearTempFlapFb1' */
  real32_T DriverAirDrictionFb1;       /* '<Root>/DriverAirDrictionFb1' */
  real32_T PassAirDrictionFb1;         /* '<Root>/PassAirDrictionFb1' */
  real32_T RearAirDrictionFb1;         /* '<Root>/RearAirDrictionFb1' */
  real32_T RecFlapFb1;                 /* '<Root>/RecFlapFb1' */
} ExtY_Thermal_Cabin_T;

/* Parameters (default storage) */
struct P_Thermal_Cabin_T_ {
  real32_T KeCAFC_na_FbFlowBaseACC_X[8];/* Variable: KeCAFC_na_FbFlowBaseACC_X
                                         * Referenced by: '<S691>/1-D Lookup Table1'
                                         */
  real32_T KeCAFC_v_CddsLowerLimit_D[8];/* Variable: KeCAFC_v_CddsLowerLimit_D
                                         * Referenced by: '<S687>/1-D Lookup Table'
                                         */
  real32_T KeCAFC_v_ColdFlowMax;       /* Variable: KeCAFC_v_ColdFlowMax
                                        * Referenced by: '<S700>/Constant'
                                        */
  real32_T KeCAFC_v_FbFlowAmbTemp_D[30];/* Variable: KeCAFC_v_FbFlowAmbTemp_D
                                         * Referenced by: '<S699>/2-D Lookup Table'
                                         */
  real32_T KeCAFC_v_FbFlowBaseACC_D[8];/* Variable: KeCAFC_v_FbFlowBaseACC_D
                                        * Referenced by: '<S691>/1-D Lookup Table1'
                                        */
  real32_T KeCAFC_v_FbFlowBaseStable_D[60];/* Variable: KeCAFC_v_FbFlowBaseStable_D
                                            * Referenced by: '<S691>/1-D Lookup Table'
                                            */
  real32_T KeCAFC_v_FlowCccsECO_D[8];  /* Variable: KeCAFC_v_FlowCccsECO_D
                                        * Referenced by: '<S701>/1-D Lookup Table'
                                        */
  real32_T KeCAFC_v_FlowCccsECO_X[8];  /* Variable: KeCAFC_v_FlowCccsECO_X
                                        * Referenced by: '<S701>/1-D Lookup Table'
                                        */
  real32_T KeCAFC_v_FlowCccsStrong_D[8];/* Variable: KeCAFC_v_FlowCccsStrong_D
                                         * Referenced by: '<S701>/1-D Lookup Table1'
                                         */
  real32_T KeCAFC_v_FlowCccsStrong_X[8];/* Variable: KeCAFC_v_FlowCccsStrong_X
                                         * Referenced by: '<S701>/1-D Lookup Table1'
                                         */
  real32_T KeCAFC_v_FlowEemLv1_D[8];   /* Variable: KeCAFC_v_FlowEemLv1_D
                                        * Referenced by: '<S688>/1-D Lookup Table'
                                        */
  real32_T KeCAFC_v_FlowEemLv1_X[8];   /* Variable: KeCAFC_v_FlowEemLv1_X
                                        * Referenced by: '<S688>/1-D Lookup Table'
                                        */
  real32_T KeCAFC_v_FlowEemLv2_D[8];   /* Variable: KeCAFC_v_FlowEemLv2_D
                                        * Referenced by: '<S688>/1-D Lookup Table1'
                                        */
  real32_T KeCAFC_v_FlowEemLv2_X[8];   /* Variable: KeCAFC_v_FlowEemLv2_X
                                        * Referenced by: '<S688>/1-D Lookup Table1'
                                        */
  real32_T KeCAFC_v_FlowNvhCmp_D[8];   /* Variable: KeCAFC_v_FlowNvhCmp_D
                                        * Referenced by: '<S702>/1-D Lookup Table'
                                        */
  real32_T KeCAFC_v_FlowNvhCmp_X[8];   /* Variable: KeCAFC_v_FlowNvhCmp_X
                                        * Referenced by: '<S702>/1-D Lookup Table'
                                        */
  uint16_T KeCAFC_n_BlwrHiSpeedLim;    /* Variable: KeCAFC_n_BlwrHiSpeedLim
                                        * Referenced by: '<S689>/Saturation'
                                        */
  uint16_T KeCAFC_n_BlwrLoSpeedLim;    /* Variable: KeCAFC_n_BlwrLoSpeedLim
                                        * Referenced by: '<S689>/Saturation'
                                        */
  uint16_T KeCAFC_n_FbBlwrLoSpeedLim;  /* Variable: KeCAFC_n_FbBlwrLoSpeedLim
                                        * Referenced by: '<S9>/Constant2'
                                        */
  uint16_T KeCAFC_n_Flow2Speed_D[54];  /* Variable: KeCAFC_n_Flow2Speed_D
                                        * Referenced by: '<S689>/2-D Lookup Table'
                                        */
  uint8_T KeCAFC_n_SlowRespRate;       /* Variable: KeCAFC_n_SlowRespRate
                                        * Referenced by: '<S9>/Constant1'
                                        */
  uint8_T KeCAFC_na_CddsLowerLimit_X[8];/* Variable: KeCAFC_na_CddsLowerLimit_X
                                         * Referenced by: '<S687>/1-D Lookup Table'
                                         */
  uint8_T KeCAFC_na_FbFlowBaseStable_X[10];/* Variable: KeCAFC_na_FbFlowBaseStable_X
                                            * Referenced by: '<S691>/1-D Lookup Table'
                                            */
  uint8_T KeCAFC_na_RapaidRespRate;    /* Variable: KeCAFC_na_RapaidRespRate
                                        * Referenced by: '<S9>/Constant'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_Thermal_Cabin_T {
  const char_T * volatile errorStatus;
};

/* Block parameters (default storage) */
extern P_Thermal_Cabin_T Thermal_Cabin_P;

/* Block signals (default storage) */
extern B_Thermal_Cabin_T Thermal_Cabin_B;

/* Block states (default storage) */
extern DW_Thermal_Cabin_T Thermal_Cabin_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_Thermal_Cabin_T Thermal_Cabin_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_Thermal_Cabin_T Thermal_Cabin_Y;
extern const ConstB_Thermal_Cabin_T Thermal_Cabin_ConstB;/* constant block i/o */

/* Constant parameters (default storage) */
extern const ConstP_Thermal_Cabin_T Thermal_Cabin_ConstP;

/*
 * Exported Global Parameters
 *
 * Note: Exported global parameters are tunable parameters with an exported
 * global storage class designation.  Code generation will declare the memory for
 * these parameters and exports their symbols.
 *
 */
extern real32_T KeACTU_U_FdhMaxPosn;   /* Variable: KeACTU_U_FdhMaxPosn
                                        * Referenced by: '<S17>/Constant1'
                                        * ǰ��������ů����ֱ���������ѹλ��
                                        */
extern real32_T KeACTU_U_FdhMaxRngRv;  /* Variable: KeACTU_U_FdhMaxRngRv
                                        * Referenced by: '<S3>/ConstantRv382'
                                        */
extern real32_T KeACTU_U_FdhMinPosn;   /* Variable: KeACTU_U_FdhMinPosn
                                        * Referenced by:
                                        *   '<S2>/Constant97'
                                        *   '<S17>/Constant'
                                        * ǰ��������ů����ֱ�������С��ѹλ��
                                        */
extern real32_T KeACTU_U_FdhMinRngRv;  /* Variable: KeACTU_U_FdhMinRngRv
                                        * Referenced by: '<S3>/ConstantRv381'
                                        */
extern real32_T KeACTU_U_FdvMaxRngRv;  /* Variable: KeACTU_U_FdvMaxRngRv
                                        * Referenced by: '<S3>/ConstantRv362'
                                        */
extern real32_T KeACTU_U_FdvMinPosn;   /* Variable: KeACTU_U_FdvMinPosn
                                        * Referenced by: '<S2>/Constant100'
                                        * ǰ�����ݴ������ֱ�������С��ѹλ��
                                        */
extern real32_T KeACTU_U_FdvMinRngRv;  /* Variable: KeACTU_U_FdvMinRngRv
                                        * Referenced by: '<S3>/ConstantRv361'
                                        */
extern real32_T KeACTU_U_FphMaxPosn;   /* Variable: KeACTU_U_FphMaxPosn
                                        * Referenced by: '<S17>/Constant3'
                                        * ǰ�Ÿ�����ů����ֱ���������ѹλ��
                                        */
extern real32_T KeACTU_U_FphMaxRngRv;  /* Variable: KeACTU_U_FphMaxRngRv
                                        * Referenced by: '<S3>/ConstantRv387'
                                        */
extern real32_T KeACTU_U_FphMinPosn;   /* Variable: KeACTU_U_FphMinPosn
                                        * Referenced by:
                                        *   '<S2>/Constant96'
                                        *   '<S17>/Constant2'
                                        * ǰ�Ÿ�����ů����ֱ�������С��ѹλ��
                                        */
extern real32_T KeACTU_U_FphMinRngRv;  /* Variable: KeACTU_U_FphMinRngRv
                                        * Referenced by: '<S3>/ConstantRv385'
                                        */
extern real32_T KeACTU_U_FpvMaxRngRv;  /* Variable: KeACTU_U_FpvMaxRngRv
                                        * Referenced by: '<S3>/ConstantRv370'
                                        */
extern real32_T KeACTU_U_FpvMinPosn;   /* Variable: KeACTU_U_FpvMinPosn
                                        * Referenced by: '<S2>/Constant99'
                                        * ǰ�Ÿ��ݳ������ֱ�������С��ѹλ��
                                        */
extern real32_T KeACTU_U_FpvMinRngRv;  /* Variable: KeACTU_U_FpvMinRngRv
                                        * Referenced by: '<S3>/ConstantRv368'
                                        */
extern real32_T KeACTU_U_RecMaxRngRv;  /* Variable: KeACTU_U_RecMaxRngRv
                                        * Referenced by: '<S3>/ConstantRv394'
                                        */
extern real32_T KeACTU_U_RecMinPosn;   /* Variable: KeACTU_U_RecMinPosn
                                        * Referenced by: '<S2>/Constant94'
                                        * ��ѭ������ֱ�������С��ѹλ��
                                        */
extern real32_T KeACTU_U_RecMinRngRv;  /* Variable: KeACTU_U_RecMinRngRv
                                        * Referenced by: '<S3>/ConstantRv393'
                                        */
extern real32_T KeACTU_U_SdhMaxPosn;   /* Variable: KeACTU_U_SdhMaxPosn
                                        * Referenced by: '<S17>/Constant5'
                                        * ����������ů����ֱ���������ѹλ��
                                        */
extern real32_T KeACTU_U_SdhMaxRngRv;  /* Variable: KeACTU_U_SdhMaxRngRv
                                        * Referenced by: '<S3>/ConstantRv390'
                                        */
extern real32_T KeACTU_U_SdhMinPosn;   /* Variable: KeACTU_U_SdhMinPosn
                                        * Referenced by:
                                        *   '<S2>/Constant95'
                                        *   '<S17>/Constant4'
                                        * ����������ů����ֱ�������С��ѹλ��
                                        */
extern real32_T KeACTU_U_SdhMinRngRv;  /* Variable: KeACTU_U_SdhMinRngRv
                                        * Referenced by: '<S3>/ConstantRv389'
                                        */
extern real32_T KeACTU_U_SdvMaxRngRv;  /* Variable: KeACTU_U_SdvMaxRngRv
                                        * Referenced by: '<S3>/ConstantRv378'
                                        */
extern real32_T KeACTU_U_SdvMinPosn;   /* Variable: KeACTU_U_SdvMinPosn
                                        * Referenced by: '<S2>/Constant98'
                                        * �������ݴ������ֱ�������С��ѹλ��
                                        */
extern real32_T KeACTU_U_SdvMinRngRv;  /* Variable: KeACTU_U_SdvMinRngRv
                                        * Referenced by: '<S3>/ConstantRv376'
                                        */
extern real32_T KeACTU_na_FdhPosnFbRv; /* Variable: KeACTU_na_FdhPosnFbRv
                                        * Referenced by: '<S3>/ConstantRv383'
                                        */
extern real32_T KeACTU_na_FdhVltgPosnReqRv;/* Variable: KeACTU_na_FdhVltgPosnReqRv
                                            * Referenced by: '<S3>/ConstantRv338'
                                            */
extern real32_T KeACTU_na_FdvPosnFbRv; /* Variable: KeACTU_na_FdvPosnFbRv
                                        * Referenced by: '<S3>/ConstantRv353'
                                        */
extern real32_T KeACTU_na_FdvVltgPosnReqRv;/* Variable: KeACTU_na_FdvVltgPosnReqRv
                                            * Referenced by: '<S3>/ConstantRv308'
                                            */
extern real32_T KeACTU_na_FphPosnFbRv; /* Variable: KeACTU_na_FphPosnFbRv
                                        * Referenced by: '<S3>/ConstantRv388'
                                        */
extern real32_T KeACTU_na_FphVltgPosnReqRv;/* Variable: KeACTU_na_FphVltgPosnReqRv
                                            * Referenced by: '<S3>/ConstantRv347'
                                            */
extern real32_T KeACTU_na_FpvPosnFbRv; /* Variable: KeACTU_na_FpvPosnFbRv
                                        * Referenced by: '<S3>/ConstantRv364'
                                        */
extern real32_T KeACTU_na_FpvVltgPosnReqRv;/* Variable: KeACTU_na_FpvVltgPosnReqRv
                                            * Referenced by: '<S3>/ConstantRv320'
                                            */
extern real32_T KeACTU_na_RecPosnFbRv; /* Variable: KeACTU_na_RecPosnFbRv
                                        * Referenced by: '<S3>/ConstantRv398'
                                        */
extern real32_T KeACTU_na_RecVltgPosnReqRv;/* Variable: KeACTU_na_RecVltgPosnReqRv
                                            * Referenced by: '<S3>/ConstantRv367'
                                            */
extern real32_T KeACTU_na_SdhPosnFbRv; /* Variable: KeACTU_na_SdhPosnFbRv
                                        * Referenced by: '<S3>/ConstantRv395'
                                        */
extern real32_T KeACTU_na_SdhVltgPosnReqRv;/* Variable: KeACTU_na_SdhVltgPosnReqRv
                                            * Referenced by: '<S3>/ConstantRv354'
                                            */
extern real32_T KeACTU_na_SdvPosnFbRv; /* Variable: KeACTU_na_SdvPosnFbRv
                                        * Referenced by: '<S3>/ConstantRv375'
                                        */
extern real32_T KeACTU_na_SdvVltgPosnReqRv;/* Variable: KeACTU_na_SdvVltgPosnReqRv
                                            * Referenced by: '<S3>/ConstantRv330'
                                            */
extern real32_T KeAmbTRawAmbTValRv;    /* Variable: KeAmbTRawAmbTValRv
                                        * Referenced by: '<S6>/ConstantRv49'
                                        */
extern real32_T KeCADC_na_FpfPosnBaseACC_X[5];/* Variable: KeCADC_na_FpfPosnBaseACC_X
                                               * Referenced by:
                                               *   '<S430>/1-D Lookup Table'
                                               *   '<S521>/1-D Lookup Table'
                                               * AQ_AccAirdModeReq ACCģ���HVACģʽ���ſ��ƽӿ�
                                               */
extern real32_T KeCADC_na_FpvPosnBaseACC_X[5];/* Variable: KeCADC_na_FpvPosnBaseACC_X
                                               * Referenced by:
                                               *   '<S424>/1-D Lookup Table'
                                               *   '<S436>/1-D Lookup Table'
                                               *   '<S516>/1-D Lookup Table'
                                               * AQ_AccAirdModeReq ACCģ���HVACģʽ���ſ��ƽӿ�
                                               */
extern real32_T KeCADC_pct_BpAntiHysDownLim;/* Variable: KeCADC_pct_BpAntiHysDownLim
                                             * Referenced by: '<S390>/Constant19'
                                             * Bp���������������������
                                             */
extern real32_T KeCADC_pct_BpAntiHysUpLim;/* Variable: KeCADC_pct_BpAntiHysUpLim
                                           * Referenced by: '<S390>/Constant18'
                                           * Bp���������������������
                                           */
extern real32_T KeCADC_pct_BpAntiHysUpRV_D[2];/* Variable: KeCADC_pct_BpAntiHysUpRV_D
                                               * Referenced by: '<S390>/Constant21'
                                               * Bp��������������������ֵ
                                               */
extern real32_T KeCADC_pct_BpAntiHysUpRV_X[2];/* Variable: KeCADC_pct_BpAntiHysUpRV_X
                                               * Referenced by: '<S390>/Constant20'
                                               * ��ǰ��������һ���ڲ�ֵ
                                               */
extern real32_T KeCADC_pct_BpFlapPosnRv;/* Variable: KeCADC_pct_BpFlapPosnRv
                                         * Referenced by: '<S8>/ConstantRv210'
                                         */
extern real32_T KeCADC_pct_BpMotHiLim; /* Variable: KeCADC_pct_BpMotHiLim
                                        * Referenced by:
                                        *   '<S390>/Constant11'
                                        *   '<S395>/Constant2'
                                        *   '<S418>/Constant1'
                                        * ByPass���Ż�еλ������
                                        */
extern real32_T KeCADC_pct_BpMotLoLim; /* Variable: KeCADC_pct_BpMotLoLim
                                        * Referenced by:
                                        *   '<S390>/Constant12'
                                        *   '<S395>/Constant1'
                                        *   '<S398>/Constant'
                                        *   '<S418>/Constant'
                                        * ByPass���Ż�еλ������
                                        */
extern real32_T KeCADC_pct_BpPosnBaseRv;/* Variable: KeCADC_pct_BpPosnBaseRv
                                         * Referenced by: '<S8>/ConstantRv292'
                                         */
extern real32_T KeCADC_pct_BpPosnCalcdRv;/* Variable: KeCADC_pct_BpPosnCalcdRv
                                          * Referenced by: '<S8>/ConstantRv197'
                                          */
extern real32_T KeCADC_pct_BpPosnDasRv;/* Variable: KeCADC_pct_BpPosnDasRv
                                        * Referenced by: '<S8>/ConstantRv201'
                                        */
extern real32_T KeCADC_pct_BpPosnErrMngtRv;/* Variable: KeCADC_pct_BpPosnErrMngtRv
                                            * Referenced by: '<S8>/ConstantRv205'
                                            */
extern real32_T KeCADC_pct_BpPosnReqRv;/* Variable: KeCADC_pct_BpPosnReqRv
                                        * Referenced by: '<S8>/ConstantRv285'
                                        */
extern real32_T KeCADC_pct_DefAntiHysDownLim;/* Variable: KeCADC_pct_DefAntiHysDownLim
                                              * Referenced by: '<S390>/Constant7'
                                              * ��˪���������������������
                                              */
extern real32_T KeCADC_pct_DefAntiHysUpLim;/* Variable: KeCADC_pct_DefAntiHysUpLim
                                            * Referenced by: '<S390>/Constant6'
                                            * ��˪���������������������
                                            */
extern real32_T KeCADC_pct_DefAntiHysUpRV_D[2];/* Variable: KeCADC_pct_DefAntiHysUpRV_D
                                                * Referenced by: '<S390>/Constant9'
                                                * ��˪��������������������ֵ
                                                */
extern real32_T KeCADC_pct_DefAntiHysUpRV_X[2];/* Variable: KeCADC_pct_DefAntiHysUpRV_X
                                                * Referenced by: '<S390>/Constant8'
                                                * ��ǰ��������һ���ڲ�ֵ
                                                */
extern real32_T KeCADC_pct_DefClsPos;  /* Variable: KeCADC_pct_DefClsPos
                                        * Referenced by:
                                        *   '<S398>/Chart'
                                        *   '<S501>/Chart'
                                        * Def���Źر�λ�òο�
                                        */
extern real32_T KeCADC_pct_DefDASHighRiskPosn;
                                      /* Variable: KeCADC_pct_DefDASHighRiskPosn
                                       * Referenced by: '<S397>/Constant2'
                                       * �Զ������߷��յȼ���˪����λ������
                                       */
extern real32_T KeCADC_pct_DefDASLowRiskPosn;/* Variable: KeCADC_pct_DefDASLowRiskPosn
                                              * Referenced by: '<S397>/Constant'
                                              * �Զ������ͷ��յȼ���˪����λ������
                                              */
extern real32_T KeCADC_pct_DefDASMidRiskPosn;/* Variable: KeCADC_pct_DefDASMidRiskPosn
                                              * Referenced by: '<S397>/Constant1'
                                              * �Զ������з��յȼ���˪����λ������
                                              */
extern real32_T KeCADC_pct_DefFlapPosnRv;/* Variable: KeCADC_pct_DefFlapPosnRv
                                          * Referenced by: '<S8>/ConstantRv209'
                                          */
extern real32_T KeCADC_pct_DefMotHiLim;/* Variable: KeCADC_pct_DefMotHiLim
                                        * Referenced by: '<S390>/Constant'
                                        * ��˪���Ż�еλ������
                                        */
extern real32_T KeCADC_pct_DefMotLoLim;/* Variable: KeCADC_pct_DefMotLoLim
                                        * Referenced by:
                                        *   '<S390>/Constant1'
                                        *   '<S398>/Constant1'
                                        * ��˪���Ż�еλ������
                                        */
extern real32_T KeCADC_pct_DefNvh_D[11];/* Variable: KeCADC_pct_DefNvh_D
                                         * Referenced by: '<S472>/1-D Lookup Table'
                                         * ����VeCADC_pct_DefPosnBase���в����KeCADC_pct_DefNvh_D���õ�VeCADC_pct_DefPosnNvhCmp
                                         */
extern real32_T KeCADC_pct_DefNvh_X[11];/* Variable: KeCADC_pct_DefNvh_X
                                         * Referenced by: '<S472>/1-D Lookup Table'
                                         * VeCADC_pct_DefPosnBase��˪���Ż���λ�ã���ΪNVH����������ֵ
                                         */
extern real32_T KeCADC_pct_DefPosnBaseRv;/* Variable: KeCADC_pct_DefPosnBaseRv
                                          * Referenced by: '<S8>/ConstantRv291'
                                          */
extern real32_T KeCADC_pct_DefPosnCalcdRv;/* Variable: KeCADC_pct_DefPosnCalcdRv
                                           * Referenced by: '<S8>/ConstantRv196'
                                           */
extern real32_T KeCADC_pct_DefPosnDasRv;/* Variable: KeCADC_pct_DefPosnDasRv
                                         * Referenced by: '<S8>/ConstantRv200'
                                         */
extern real32_T KeCADC_pct_DefPosnErrMngtRv;/* Variable: KeCADC_pct_DefPosnErrMngtRv
                                             * Referenced by: '<S8>/ConstantRv204'
                                             */
extern real32_T KeCADC_pct_DefPosnNvhCmpRv;/* Variable: KeCADC_pct_DefPosnNvhCmpRv
                                            * Referenced by: '<S8>/ConstantRv193'
                                            */
extern real32_T KeCADC_pct_DefPosnReqRv;/* Variable: KeCADC_pct_DefPosnReqRv
                                         * Referenced by: '<S8>/ConstantRv283'
                                         */
extern real32_T KeCADC_pct_FdfAmbCoeff_D[55];/* Variable: KeCADC_pct_FdfAmbCoeff_D
                                              * Referenced by:
                                              *   '<S471>/2-D Lookup Table'
                                              *   '<S545>/2-D Lookup Table'
                                              * ���ڻ����¶Ȳ���ϵ��VeCTCM_T_AmbCmpCoeff��VeCADC_pct_FdfDefCmp���в����KeCADC_pct_FdfAmbCoeff_D��,�õ�һ���¶Ȳ���ֵVeCADC_pct_FdfPosnAmbCmp.
                                              */
extern real32_T KeCADC_pct_FdfAmbCoeff_X[5];/* Variable: KeCADC_pct_FdfAmbCoeff_X
                                             * Referenced by:
                                             *   '<S471>/2-D Lookup Table'
                                             *   '<S545>/2-D Lookup Table'
                                             * VeCADC_pct_FdfDefCmp������˪λ�ò��������ݴ��ŷ���λ�ã���Ϊ����ͻ�������
                                             */
extern real32_T KeCADC_pct_FdfAmbCoeff_Y[11];/* Variable: KeCADC_pct_FdfAmbCoeff_Y
                                              * Referenced by:
                                              *   '<S471>/2-D Lookup Table'
                                              *   '<S545>/2-D Lookup Table'
                                              * ����CTCM�����VeCTCM_T_AmbCmpCoeffֵ
                                              */
extern real32_T KeCADC_pct_FdfAntiHysDownLim;/* Variable: KeCADC_pct_FdfAntiHysDownLim
                                              * Referenced by: '<S390>/Constant41'
                                              * ���ݴ��ŷ��������������������
                                              */
extern real32_T KeCADC_pct_FdfAntiHysUpLim;/* Variable: KeCADC_pct_FdfAntiHysUpLim
                                            * Referenced by: '<S390>/Constant40'
                                            * ���ݴ��ŷ��������������������
                                            */
extern real32_T KeCADC_pct_FdfAntiHysUpRV_D[2];/* Variable: KeCADC_pct_FdfAntiHysUpRV_D
                                                * Referenced by: '<S390>/Constant43'
                                                * ���ݴ��ŷ�������������������ֵ
                                                */
extern real32_T KeCADC_pct_FdfAntiHysUpRV_X[2];/* Variable: KeCADC_pct_FdfAntiHysUpRV_X
                                                * Referenced by: '<S390>/Constant42'
                                                * ��ǰ��������һ���ڲ�ֵ
                                                */
extern real32_T KeCADC_pct_FdfClsPos;  /* Variable: KeCADC_pct_FdfClsPos
                                        * Referenced by: '<S398>/Chart'
                                        * Fdf���Źر�λ�òο�
                                        */
extern real32_T KeCADC_pct_FdfDASHighRiskPosn;
                                      /* Variable: KeCADC_pct_FdfDASHighRiskPosn
                                       * Referenced by: '<S397>/Constant4'
                                       * �߷��յȼ�ʱ���ŷ���λ��
                                       */
extern real32_T KeCADC_pct_FdfDefCmpRv;/* Variable: KeCADC_pct_FdfDefCmpRv
                                        * Referenced by: '<S8>/ConstantRv190'
                                        */
extern real32_T KeCADC_pct_FdfDefCoeff_X[5];/* Variable: KeCADC_pct_FdfDefCoeff_X
                                             * Referenced by: '<S463>/2-D Lookup Table'
                                             * VeCADC_pct_FdfPosnBase�������ݴ��ŷ���λ��
                                             */
extern real32_T KeCADC_pct_FdfDefCoeff_Y[6];/* Variable: KeCADC_pct_FdfDefCoeff_Y
                                             * Referenced by: '<S463>/2-D Lookup Table'
                                             * VeACTU_pct_DefPosnFb ACTU�����ĳ�˪����λ��
                                             */
extern real32_T KeCADC_pct_FdfFlapPosnRv;/* Variable: KeCADC_pct_FdfFlapPosnRv
                                          * Referenced by: '<S8>/ConstantRv212'
                                          */
extern real32_T KeCADC_pct_FdfMotHiLim;/* Variable: KeCADC_pct_FdfMotHiLim
                                        * Referenced by: '<S390>/Constant33'
                                        * ���ݴ��ŷ��Ż�еλ������
                                        */
extern real32_T KeCADC_pct_FdfMotLoLim;/* Variable: KeCADC_pct_FdfMotLoLim
                                        * Referenced by:
                                        *   '<S390>/Constant34'
                                        *   '<S398>/Constant4'
                                        * ���ݴ��ŷ��Ż�еλ������
                                        */
extern real32_T KeCADC_pct_FdfNvh_D[11];/* Variable: KeCADC_pct_FdfNvh_D
                                         * Referenced by: '<S474>/1-D Lookup Table'
                                         * ����Ve_pct_FdfPosnAmbCmp���в����KeCADC_pct_FdfNvh_D���õ�VeCADC_pct_FdvPosnNvhCmp.
                                         */
extern real32_T KeCADC_pct_FdfNvh_X[11];/* Variable: KeCADC_pct_FdfNvh_X
                                         * Referenced by: '<S474>/1-D Lookup Table'
                                         * VeCADC_pct_FdfPosnAmbCmp���ݴ��ŷ����¶Ȳ���ֵ����ΪNVH����ֵ������ֵ
                                         */
extern real32_T KeCADC_pct_FdfPosnAmbCmpRv;/* Variable: KeCADC_pct_FdfPosnAmbCmpRv
                                            * Referenced by: '<S8>/ConstantRv192'
                                            */
extern real32_T KeCADC_pct_FdfPosnBaseRv;/* Variable: KeCADC_pct_FdfPosnBaseRv
                                          * Referenced by: '<S8>/ConstantRv188'
                                          */
extern real32_T KeCADC_pct_FdfPosnCalcdRv;/* Variable: KeCADC_pct_FdfPosnCalcdRv
                                           * Referenced by: '<S8>/ConstantRv199'
                                           */
extern real32_T KeCADC_pct_FdfPosnDasRv;/* Variable: KeCADC_pct_FdfPosnDasRv
                                         * Referenced by: '<S8>/ConstantRv203'
                                         */
extern real32_T KeCADC_pct_FdfPosnErrMngtRv;/* Variable: KeCADC_pct_FdfPosnErrMngtRv
                                             * Referenced by: '<S8>/ConstantRv206'
                                             */
extern real32_T KeCADC_pct_FdfPosnNvhCmpRv;/* Variable: KeCADC_pct_FdfPosnNvhCmpRv
                                            * Referenced by: '<S8>/ConstantRv195'
                                            */
extern real32_T KeCADC_pct_FdfPosnReqRv;/* Variable: KeCADC_pct_FdfPosnReqRv
                                         * Referenced by: '<S8>/ConstantRv289'
                                         */
extern real32_T KeCADC_pct_FdvAmbCoeff_D[55];/* Variable: KeCADC_pct_FdvAmbCoeff_D
                                              * Referenced by: '<S470>/2-D Lookup Table'
                                              * ���ڻ����¶Ȳ���ϵ��VeCTCM_T_AmbCmpCoeff��VeCADC_pct_FdvDefCmp���в����KeCADC_pct_FdvAmbCoeff_D��,�õ�һ���¶Ȳ���ֵVeCADC_pct_FdvPosnAmbCmp.
                                              */
extern real32_T KeCADC_pct_FdvAmbCoeff_X[5];/* Variable: KeCADC_pct_FdvAmbCoeff_X
                                             * Referenced by: '<S470>/2-D Lookup Table'
                                             * VeCADC_pct_FdvDefCmp������˪λ�ò��������ݴ�ͷ����λ�ã���Ϊ����ͻ�������
                                             */
extern real32_T KeCADC_pct_FdvAmbCoeff_Y[11];/* Variable: KeCADC_pct_FdvAmbCoeff_Y
                                              * Referenced by: '<S470>/2-D Lookup Table'
                                              * ����CTCM�����VeCTCM_T_AmbCmpCoeffֵ
                                              */
extern real32_T KeCADC_pct_FdvAntiHysDownLim;/* Variable: KeCADC_pct_FdvAntiHysDownLim
                                              * Referenced by: '<S390>/Constant30'
                                              * ���ݴ�����������������������
                                              */
extern real32_T KeCADC_pct_FdvAntiHysUpLim;/* Variable: KeCADC_pct_FdvAntiHysUpLim
                                            * Referenced by: '<S390>/Constant29'
                                            * ���ݴ�����������������������
                                            */
extern real32_T KeCADC_pct_FdvAntiHysUpRV_D[2];/* Variable: KeCADC_pct_FdvAntiHysUpRV_D
                                                * Referenced by: '<S390>/Constant32'
                                                * ���ݴ����������������������ֵ
                                                */
extern real32_T KeCADC_pct_FdvAntiHysUpRV_X[2];/* Variable: KeCADC_pct_FdvAntiHysUpRV_X
                                                * Referenced by: '<S390>/Constant31'
                                                * ��ǰ��������һ���ڲ�ֵ
                                                */
extern real32_T KeCADC_pct_FdvClsPos;  /* Variable: KeCADC_pct_FdvClsPos
                                        * Referenced by: '<S398>/Chart'
                                        * Fdv���Źر�λ�òο�
                                        */
extern real32_T KeCADC_pct_FdvDASHighRiskPosn;
                                      /* Variable: KeCADC_pct_FdvDASHighRiskPosn
                                       * Referenced by: '<S397>/Constant3'
                                       * �߷��յȼ�ʱ��ͷ����λ��
                                       */
extern real32_T KeCADC_pct_FdvDASHighRisk_D[5];/* Variable: KeCADC_pct_FdvDASHighRisk_D
                                                * Referenced by: '<S397>/1-D Lookup Table2'
                                                * ����VeCADC_pct_FdvPosnCalcd�����KeCADC_pct_FdvDASHighRisk_D��ȷ��VeCADC_pct_FdvPosnDas��ֵ���Զ����ֶ���������ݴ�ͷ����λ��
                                                */
extern real32_T KeCADC_pct_FdvDASHighRisk_X[5];/* Variable: KeCADC_pct_FdvDASHighRisk_X
                                                * Referenced by: '<S397>/1-D Lookup Table2'
                                                * �߷��յȼ�ʱ��ͷ����λ��(����ͷ���ŵ��������)
                                                */
extern real32_T KeCADC_pct_FdvDASLowRisk_D[5];/* Variable: KeCADC_pct_FdvDASLowRisk_D
                                               * Referenced by: '<S397>/1-D Lookup Table'
                                               * ����VeCADC_pct_FdvPosnCalcd�����KeCADC_pct_FdvDASLowRisk_D��ȷ��VeCADC_pct_FdvPosnDas��ֵ,�Զ����ֶ���������ݴ�ͷ����λ��
                                               */
extern real32_T KeCADC_pct_FdvDASLowRisk_X[5];/* Variable: KeCADC_pct_FdvDASLowRisk_X
                                               * Referenced by: '<S397>/1-D Lookup Table'
                                               * �ͷ��յȼ�ʱ��ͷ����λ��(����ͷ���ŵ��������)
                                               */
extern real32_T KeCADC_pct_FdvDASMidRisk_D[5];/* Variable: KeCADC_pct_FdvDASMidRisk_D
                                               * Referenced by: '<S397>/1-D Lookup Table1'
                                               * ����VeCADC_pct_FdvPosnCalcd�����KeCADC_pct_FdvDASMidRisk_D��ȷ��VeCADC_pct_FdvPosnDas��ֵ���Զ����ֶ���������ݴ�ͷ����λ��
                                               */
extern real32_T KeCADC_pct_FdvDASMidRisk_X[5];/* Variable: KeCADC_pct_FdvDASMidRisk_X
                                               * Referenced by: '<S397>/1-D Lookup Table1'
                                               * �з��յȼ�ʱ��ͷ����λ��(����ͷ���ŵ��������)
                                               */
extern real32_T KeCADC_pct_FdvDefCmpRv;/* Variable: KeCADC_pct_FdvDefCmpRv
                                        * Referenced by: '<S8>/ConstantRv189'
                                        */
extern real32_T KeCADC_pct_FdvDefCoeff_D[30];/* Variable: KeCADC_pct_FdvDefCoeff_D
                                              * Referenced by: '<S462>/2-D Lookup Table'
                                              * ���ڵ�ǰ��˪����λ��VeACTU_pct_DefPosnFb��VeCADC_pct_FdvPosnBase���в����KeCADC_pct_FdvDefCoeff_D���õ�һ������ֵVeCADC_pct_FdvDefCmp.
                                              */
extern real32_T KeCADC_pct_FdvDefCoeff_X[5];/* Variable: KeCADC_pct_FdvDefCoeff_X
                                             * Referenced by: '<S462>/2-D Lookup Table'
                                             * VeCADC_pct_FdvPosnBase�������ݴ������λ��
                                             */
extern real32_T KeCADC_pct_FdvDefCoeff_Y[6];/* Variable: KeCADC_pct_FdvDefCoeff_Y
                                             * Referenced by: '<S462>/2-D Lookup Table'
                                             * VeACTU_pct_DefPosnFb ACTU�����ĳ�˪����λ��
                                             */
extern real32_T KeCADC_pct_FdvFlapPosnRv;/* Variable: KeCADC_pct_FdvFlapPosnRv
                                          * Referenced by: '<S8>/ConstantRv211'
                                          */
extern real32_T KeCADC_pct_FdvMotHiLim;/* Variable: KeCADC_pct_FdvMotHiLim
                                        * Referenced by: '<S390>/Constant22'
                                        * ���ݴ�����Ż�еλ������
                                        */
extern real32_T KeCADC_pct_FdvMotLoLim;/* Variable: KeCADC_pct_FdvMotLoLim
                                        * Referenced by:
                                        *   '<S390>/Constant23'
                                        *   '<S398>/Constant3'
                                        * ���ݴ�����Ż�еλ������
                                        */
extern real32_T KeCADC_pct_FdvNvh_D[11];/* Variable: KeCADC_pct_FdvNvh_D
                                         * Referenced by: '<S473>/1-D Lookup Table'
                                         * ����VeCADC_pct_FdvPosnAmbCmp���в����KeCADC_pct_FdvNvh_D���õ�VeCADC_pct_FdvPosnNvhCmp.
                                         */
extern real32_T KeCADC_pct_FdvNvh_X[11];/* Variable: KeCADC_pct_FdvNvh_X
                                         * Referenced by: '<S473>/1-D Lookup Table'
                                         * Ve_pct_FdvPosnAmbCmp���ݴ�ͷ�����¶Ȳ���ֵ����ΪNVH����ֵ������ֵ
                                         */
extern real32_T KeCADC_pct_FdvPosnAmbCmpRv;/* Variable: KeCADC_pct_FdvPosnAmbCmpRv
                                            * Referenced by: '<S8>/ConstantRv191'
                                            */
extern real32_T KeCADC_pct_FdvPosnBaseRv;/* Variable: KeCADC_pct_FdvPosnBaseRv
                                          * Referenced by: '<S8>/ConstantRv187'
                                          */
extern real32_T KeCADC_pct_FdvPosnBaseStable_D[7];
                                     /* Variable: KeCADC_pct_FdvPosnBaseStable_D
                                      * Referenced by: '<S423>/1-D Lookup Table'
                                      * ����HMI_AirdModeL�����KeCADC_FdvPosnBaseStable_M��,ȷ��KeCADC_FdvPosnBase��ֵ��
                                      */
extern real32_T KeCADC_pct_FdvPosnCalcdRv;/* Variable: KeCADC_pct_FdvPosnCalcdRv
                                           * Referenced by: '<S8>/ConstantRv198'
                                           */
extern real32_T KeCADC_pct_FdvPosnDasRv;/* Variable: KeCADC_pct_FdvPosnDasRv
                                         * Referenced by: '<S8>/ConstantRv202'
                                         */
extern real32_T KeCADC_pct_FdvPosnErrMngtRv;/* Variable: KeCADC_pct_FdvPosnErrMngtRv
                                             * Referenced by: '<S8>/ConstantRv207'
                                             */
extern real32_T KeCADC_pct_FdvPosnNvhCmpRv;/* Variable: KeCADC_pct_FdvPosnNvhCmpRv
                                            * Referenced by: '<S8>/ConstantRv194'
                                            */
extern real32_T KeCADC_pct_FdvPosnReqRv;/* Variable: KeCADC_pct_FdvPosnReqRv
                                         * Referenced by: '<S8>/ConstantRv287'
                                         */
extern real32_T KeCADC_pct_FdvReq2DefFlap_D[5];/* Variable: KeCADC_pct_FdvReq2DefFlap_D
                                                * Referenced by: '<S398>/1-D Lookup Table3'
                                                * ������ͷ���ŵ�������ã�ʹ�ô��߼����VeCADC_pct_DefFlapPosn��˪����λ��
                                                */
extern real32_T KeCADC_pct_FdvReq2DefFlap_X[5];/* Variable: KeCADC_pct_FdvReq2DefFlap_X
                                                * Referenced by: '<S398>/1-D Lookup Table3'
                                                * VeCADC_pct_FdvPosnReq������ͷ���ŵ�������ã�
                                                */
extern real32_T KeCADC_pct_FdvReq2FdfFlap_D[5];/* Variable: KeCADC_pct_FdvReq2FdfFlap_D
                                                * Referenced by: '<S398>/1-D Lookup Table2'
                                                * ������ͷ���ŵ�������ã�ʹ�ô��߼����VeCADC_pct_FdfFlapPosn���ݴ��ŷ���λ��
                                                */
extern real32_T KeCADC_pct_FdvReq2FdfFlap_X[5];/* Variable: KeCADC_pct_FdvReq2FdfFlap_X
                                                * Referenced by: '<S398>/1-D Lookup Table2'
                                                * VeCADC_pct_FdvPosnReq������ͷ���ŵ�������ã�
                                                */
extern real32_T KeCADC_pct_FdvReq2FdvFlap_D[7];/* Variable: KeCADC_pct_FdvReq2FdvFlap_D
                                                * Referenced by: '<S398>/1-D Lookup Table1'
                                                * ������ͷ���ŵ�������ã�ʹ�ô��߼����VeCADC_pct_FdvFlapPosn���ݴ�ͷ����λ��
                                                */
extern real32_T KeCADC_pct_FdvReq2FdvFlap_X[7];/* Variable: KeCADC_pct_FdvReq2FdvFlap_X
                                                * Referenced by: '<S398>/1-D Lookup Table1'
                                                * VeCADC_pct_FdvPosnReq������ͷ���ŵ�������ã�
                                                */
extern real32_T KeCADC_pct_FpfAntiHysDownLim;/* Variable: KeCADC_pct_FpfAntiHysDownLim
                                              * Referenced by: '<S391>/Constant19'
                                              * ���ݴ��ŷ��������������������
                                              */
extern real32_T KeCADC_pct_FpfAntiHysUpLim;/* Variable: KeCADC_pct_FpfAntiHysUpLim
                                            * Referenced by: '<S391>/Constant18'
                                            * ���ݴ��ŷ��������������������
                                            */
extern real32_T KeCADC_pct_FpfAntiHysUpRV_D[2];/* Variable: KeCADC_pct_FpfAntiHysUpRV_D
                                                * Referenced by: '<S391>/Constant21'
                                                * ���ݴ��ŷ�������������������ֵ
                                                */
extern real32_T KeCADC_pct_FpfAntiHysUpRV_X[2];/* Variable: KeCADC_pct_FpfAntiHysUpRV_X
                                                * Referenced by: '<S391>/Constant20'
                                                * ��ǰ��������һ���ڲ�ֵ
                                                */
extern real32_T KeCADC_pct_FpfClsPos;  /* Variable: KeCADC_pct_FpfClsPos
                                        * Referenced by: '<S501>/Chart'
                                        * ���ݴ��ŷ��Źرղο�λ��
                                        */
extern real32_T KeCADC_pct_FpfDASHighRiskPosn;
                                      /* Variable: KeCADC_pct_FpfDASHighRiskPosn
                                       * Referenced by: '<S500>/Constant1'
                                       * �Զ������߷��յȼ����ݴ��ŷ���λ������
                                       */
extern real32_T KeCADC_pct_FpfDefCmpRv;/* Variable: KeCADC_pct_FpfDefCmpRv
                                        * Referenced by: '<S8>/ConstantRv219'
                                        */
extern real32_T KeCADC_pct_FpfDefCoeff_D[30];/* Variable: KeCADC_pct_FpfDefCoeff_D
                                              * Referenced by: '<S539>/2-D Lookup Table'
                                              * ���ڵ�ǰ��˪����λ��VeACTU_pct_DefPosnFb��VeCADC_pct_FpfPosnBase���в����KeCADC_pct_FpfDefCoeff_D���õ�һ������ֵVeCADC_pct_FpfDefCmp.
                                              */
extern real32_T KeCADC_pct_FpfDefCoeff_X[5];/* Variable: KeCADC_pct_FpfDefCoeff_X
                                             * Referenced by: '<S539>/2-D Lookup Table'
                                             * VeCADC_pct_FpfPosnBase�������ݴ��ŷ���λ��
                                             */
extern real32_T KeCADC_pct_FpfDefCoeff_Y[6];/* Variable: KeCADC_pct_FpfDefCoeff_Y
                                             * Referenced by: '<S539>/2-D Lookup Table'
                                             * VeACTU_pct_DefPosnFb ACTU�����ĳ�˪����λ��
                                             */
extern real32_T KeCADC_pct_FpfFlapPosnRv;/* Variable: KeCADC_pct_FpfFlapPosnRv
                                          * Referenced by: '<S8>/ConstantRv231'
                                          */
extern real32_T KeCADC_pct_FpfMotHiLim;/* Variable: KeCADC_pct_FpfMotHiLim
                                        * Referenced by: '<S391>/Constant11'
                                        * ���ݴ��ŷ��Ż�еλ������
                                        */
extern real32_T KeCADC_pct_FpfMotLoLim;/* Variable: KeCADC_pct_FpfMotLoLim
                                        * Referenced by: '<S391>/Constant12'
                                        * ���ݴ��ŷ��Ż�еλ������
                                        */
extern real32_T KeCADC_pct_FpfNvh_D[11];/* Variable: KeCADC_pct_FpfNvh_D
                                         * Referenced by: '<S547>/1-D Lookup Table'
                                         * ����Ve_pct_FpfPosnAmbCmp���в����KeCADC_pct_FpfNvh_D���õ�VeCADC_pct_FpfPosnNvhCmp.
                                         */
extern real32_T KeCADC_pct_FpfNvh_X[11];/* Variable: KeCADC_pct_FpfNvh_X
                                         * Referenced by: '<S547>/1-D Lookup Table'
                                         * Ve_pct_FpfPosnAmbCmp���ݴ�ͷ�����¶Ȳ���ֵ����ΪNVH����ֵ������ֵ
                                         */
extern real32_T KeCADC_pct_FpfPosnAmbCmpRv;/* Variable: KeCADC_pct_FpfPosnAmbCmpRv
                                            * Referenced by: '<S8>/ConstantRv221'
                                            */
extern real32_T KeCADC_pct_FpfPosnBaseACC_D[5];/* Variable: KeCADC_pct_FpfPosnBaseACC_D
                                                * Referenced by:
                                                *   '<S430>/1-D Lookup Table'
                                                *   '<S521>/1-D Lookup Table'
                                                * ����AQ_AccAirdModeReq�����KeCADC_pct_FpfPosnBaseACC_D��,ȷ��VeCADC_pct_FpfPosnBase��ֵ
                                                */
extern real32_T KeCADC_pct_FpfPosnBaseRv;/* Variable: KeCADC_pct_FpfPosnBaseRv
                                          * Referenced by: '<S8>/ConstantRv257'
                                          */
extern real32_T KeCADC_pct_FpfPosnBaseStable_D[5];
                                     /* Variable: KeCADC_pct_FpfPosnBaseStable_D
                                      * Referenced by:
                                      *   '<S429>/1-D Lookup Table'
                                      *   '<S520>/1-D Lookup Table'
                                      * ����VeHMI_na_AirdModeR�����KeCADC_pct_FpfPosnBaseStable_D��,ȷ��VeCADC_pct_FpfPosnBase��ֵ
                                      */
extern real32_T KeCADC_pct_FpfPosnCalcdRv;/* Variable: KeCADC_pct_FpfPosnCalcdRv
                                           * Referenced by: '<S8>/ConstantRv259'
                                           */
extern real32_T KeCADC_pct_FpfPosnDasRv;/* Variable: KeCADC_pct_FpfPosnDasRv
                                         * Referenced by: '<S8>/ConstantRv226'
                                         */
extern real32_T KeCADC_pct_FpfPosnErrMngtRv;/* Variable: KeCADC_pct_FpfPosnErrMngtRv
                                             * Referenced by: '<S8>/ConstantRv228'
                                             */
extern real32_T KeCADC_pct_FpfPosnNvhCmpRv;/* Variable: KeCADC_pct_FpfPosnNvhCmpRv
                                            * Referenced by: '<S8>/ConstantRv223'
                                            */
extern real32_T KeCADC_pct_FpfPosnReqRv;/* Variable: KeCADC_pct_FpfPosnReqRv
                                         * Referenced by: '<S8>/ConstantRv295'
                                         */
extern real32_T KeCADC_pct_FpvAmbCoeff_D[55];/* Variable: KeCADC_pct_FpvAmbCoeff_D
                                              * Referenced by: '<S544>/2-D Lookup Table'
                                              * ���ڻ����¶Ȳ���ϵ��VeCTCM_T_AmbCmpCoeff��VeCADC_pct_FpvDefCmp���в����KeCADC_pct_FpvAmbCoeff_D��,�õ�һ���¶Ȳ���ֵVeCADC_pct_FpvPosnAmbCmp.
                                              */
extern real32_T KeCADC_pct_FpvAmbCoeff_X[5];/* Variable: KeCADC_pct_FpvAmbCoeff_X
                                             * Referenced by: '<S544>/2-D Lookup Table'
                                             * VeCADC_pct_FpvDefCmp������˪λ�ò����ĸ��ݴ�ͷ����λ�ã���Ϊ����ͻ�������
                                             */
extern real32_T KeCADC_pct_FpvAmbCoeff_Y[11];/* Variable: KeCADC_pct_FpvAmbCoeff_Y
                                              * Referenced by: '<S544>/2-D Lookup Table'
                                              * ����CTCM�����VeCTCM_T_AmbCmpCoeffֵ
                                              */
extern real32_T KeCADC_pct_FpvAntiHysDownLim;/* Variable: KeCADC_pct_FpvAntiHysDownLim
                                              * Referenced by: '<S391>/Constant7'
                                              * ���ݴ�ͷ���������������������
                                              */
extern real32_T KeCADC_pct_FpvAntiHysUpLim;/* Variable: KeCADC_pct_FpvAntiHysUpLim
                                            * Referenced by: '<S391>/Constant6'
                                            * ���ݴ�ͷ���������������������
                                            */
extern real32_T KeCADC_pct_FpvAntiHysUpRV_D[2];/* Variable: KeCADC_pct_FpvAntiHysUpRV_D
                                                * Referenced by: '<S391>/Constant9'
                                                * ���ݴ�ͷ��������������������ֵ
                                                */
extern real32_T KeCADC_pct_FpvAntiHysUpRV_X[2];/* Variable: KeCADC_pct_FpvAntiHysUpRV_X
                                                * Referenced by: '<S391>/Constant8'
                                                * ��ǰ��������һ���ڲ�ֵ
                                                */
extern real32_T KeCADC_pct_FpvClsPos;  /* Variable: KeCADC_pct_FpvClsPos
                                        * Referenced by: '<S501>/Chart'
                                        * ���ݴ�ͷ���Źرղο�λ��
                                        */
extern real32_T KeCADC_pct_FpvDASHighRiskPosn;
                                      /* Variable: KeCADC_pct_FpvDASHighRiskPosn
                                       * Referenced by: '<S500>/Constant'
                                       * �Զ������߷��յȼ����ݴ�ͷ����λ������
                                       */
extern real32_T KeCADC_pct_FpvDefCmpRv;/* Variable: KeCADC_pct_FpvDefCmpRv
                                        * Referenced by: '<S8>/ConstantRv258'
                                        */
extern real32_T KeCADC_pct_FpvDefCoeff_D[30];/* Variable: KeCADC_pct_FpvDefCoeff_D
                                              * Referenced by: '<S538>/2-D Lookup Table'
                                              * ���ڵ�ǰ��˪����λ��VeACTU_pct_DefPosnFb��VeCADC_pct_FpvPosnBase���в����KeCADC_pct_FpvDefCoeff_D���õ�һ������ֵVeCADC_pct_FpvDefCmp.
                                              */
extern real32_T KeCADC_pct_FpvDefCoeff_X[5];/* Variable: KeCADC_pct_FpvDefCoeff_X
                                             * Referenced by: '<S538>/2-D Lookup Table'
                                             * VeCADC_pct_FpvPosnBase�������ݴ�ͷ����λ��
                                             */
extern real32_T KeCADC_pct_FpvDefCoeff_Y[6];/* Variable: KeCADC_pct_FpvDefCoeff_Y
                                             * Referenced by: '<S538>/2-D Lookup Table'
                                             * VeACTU_pct_DefPosnFb ACTU�����ĳ�˪����λ��
                                             */
extern real32_T KeCADC_pct_FpvFlapPosnRv;/* Variable: KeCADC_pct_FpvFlapPosnRv
                                          * Referenced by: '<S8>/ConstantRv230'
                                          */
extern real32_T KeCADC_pct_FpvMotHiLim;/* Variable: KeCADC_pct_FpvMotHiLim
                                        * Referenced by: '<S391>/Constant'
                                        * ���ݴ�ͷ���Ż�еλ������
                                        */
extern real32_T KeCADC_pct_FpvMotLoLim;/* Variable: KeCADC_pct_FpvMotLoLim
                                        * Referenced by: '<S391>/Constant1'
                                        * ���ݴ�ͷ���Ż�еλ������
                                        */
extern real32_T KeCADC_pct_FpvNvh_D[11];/* Variable: KeCADC_pct_FpvNvh_D
                                         * Referenced by: '<S546>/1-D Lookup Table'
                                         * ����Ve_pct_FpvPosnAmbCmp���в����KeCADC_pct_FpvNvh_D���õ�VeCADC_pct_FpvPosnNvhCmp.
                                         */
extern real32_T KeCADC_pct_FpvNvh_X[11];/* Variable: KeCADC_pct_FpvNvh_X
                                         * Referenced by: '<S546>/1-D Lookup Table'
                                         * Ve_pct_FpvPosnAmbCmp���ݴ�ͷ�����¶Ȳ���ֵ����ΪNVH����ֵ������ֵ
                                         */
extern real32_T KeCADC_pct_FpvPosnAmbCmpRv;/* Variable: KeCADC_pct_FpvPosnAmbCmpRv
                                            * Referenced by: '<S8>/ConstantRv220'
                                            */
extern real32_T KeCADC_pct_FpvPosnBaseACC_D[5];/* Variable: KeCADC_pct_FpvPosnBaseACC_D
                                                * Referenced by:
                                                *   '<S424>/1-D Lookup Table'
                                                *   '<S436>/1-D Lookup Table'
                                                *   '<S516>/1-D Lookup Table'
                                                * ����AQ_AccAirdModeReq�����KeCADC_pct_FpvPosnBaseACC_D��,ȷ��VeCADC_pct_FpvPosnBase��ֵ
                                                */
extern real32_T KeCADC_pct_FpvPosnBaseRv;/* Variable: KeCADC_pct_FpvPosnBaseRv
                                          * Referenced by: '<S8>/ConstantRv256'
                                          */
extern real32_T KeCADC_pct_FpvPosnBaseStable_D[7];
                                     /* Variable: KeCADC_pct_FpvPosnBaseStable_D
                                      * Referenced by:
                                      *   '<S435>/1-D Lookup Table'
                                      *   '<S515>/1-D Lookup Table'
                                      * ����VeHMI_na_AirdModeR�����KeCADC_pct_FpvPosnBaseStable_D��,ȷ��VeCADC_pct_FpvPosnBase��ֵ
                                      */
extern real32_T KeCADC_pct_FpvPosnCalcdRv;/* Variable: KeCADC_pct_FpvPosnCalcdRv
                                           * Referenced by: '<S8>/ConstantRv224'
                                           */
extern real32_T KeCADC_pct_FpvPosnDasRv;/* Variable: KeCADC_pct_FpvPosnDasRv
                                         * Referenced by: '<S8>/ConstantRv225'
                                         */
extern real32_T KeCADC_pct_FpvPosnErrMngtRv;/* Variable: KeCADC_pct_FpvPosnErrMngtRv
                                             * Referenced by: '<S8>/ConstantRv227'
                                             */
extern real32_T KeCADC_pct_FpvPosnNvhCmpRv;/* Variable: KeCADC_pct_FpvPosnNvhCmpRv
                                            * Referenced by: '<S8>/ConstantRv222'
                                            */
extern real32_T KeCADC_pct_FpvPosnReqRv;/* Variable: KeCADC_pct_FpvPosnReqRv
                                         * Referenced by: '<S8>/ConstantRv293'
                                         */
extern real32_T KeCADC_pct_FpvReq2FpfFlap_D[7];/* Variable: KeCADC_pct_FpvReq2FpfFlap_D
                                                * Referenced by: '<S501>/1-D Lookup Table2'
                                                * ������ͷ���ŵ�������ã�ʹ�ô��߼����VeCADC_pct_FpfFlapPosn���ݴ��ŷ���λ��
                                                */
extern real32_T KeCADC_pct_FpvReq2FpfFlap_X[7];/* Variable: KeCADC_pct_FpvReq2FpfFlap_X
                                                * Referenced by: '<S501>/1-D Lookup Table2'
                                                * VeCADC_pct_FpvPosnReq������ͷ���ŵ�������ã�
                                                */
extern real32_T KeCADC_pct_FpvReq2FpvFlap_D[5];/* Variable: KeCADC_pct_FpvReq2FpvFlap_D
                                                * Referenced by: '<S501>/1-D Lookup Table1'
                                                * ������ͷ���ŵ�������ã�ʹ�ô��߼����VeCADC_pct_FpvFlapPosn���ݴ�ͷ����λ��
                                                */
extern real32_T KeCADC_pct_FpvReq2FpvFlap_X[5];/* Variable: KeCADC_pct_FpvReq2FpvFlap_X
                                                * Referenced by: '<S501>/1-D Lookup Table1'
                                                * VeCADC_pct_FpvPosnReq������ͷ���ŵ�������ã�
                                                */
extern real32_T KeCADC_pct_FrntDrvDistbn2HMI_X[7];
                                     /* Variable: KeCADC_pct_FrntDrvDistbn2HMI_X
                                      * Referenced by: '<S398>/1-D Lookup Table'
                                      * VeCADC_pct_FdvPosnReq������ͷ���ŵ�������ã�
                                      */
extern real32_T KeCADC_pct_FrntPassDistbn2HMI_X[3];
                                    /* Variable: KeCADC_pct_FrntPassDistbn2HMI_X
                                     * Referenced by: '<S501>/1-D Lookup Table'
                                     * VeCADC_pct_FpvPosnReq������ͷ���ŵ�������ã�
                                     */
extern real32_T KeCADC_pct_Quant;      /* Variable: KeCADC_pct_Quant
                                        * Referenced by:
                                        *   '<S390>/Constant10'
                                        *   '<S390>/Constant13'
                                        *   '<S390>/Constant24'
                                        *   '<S390>/Constant35'
                                        *   '<S391>/Constant10'
                                        *   '<S391>/Constant13'
                                        *   '<S392>/Constant10'
                                        *   '<S392>/Constant13'
                                        *   '<S393>/Constant10'
                                        *   '<S393>/Constant13'
                                        * ģʽ������������������
                                        */
extern real32_T KeCADC_pct_SdfAmbCoeff_D[55];/* Variable: KeCADC_pct_SdfAmbCoeff_D
                                              * Referenced by: '<S604>/2-D Lookup Table'
                                              * ���ڻ����¶Ȳ���ϵ��VeCTCM_T_AmbCmpCoeff��VeCADC_pct_SdfDefCmp���в����KeCADC_pct_SdfAmbCoeff_D��,�õ�һ���¶Ȳ���ֵVeCADC_pct_SdfPosnAmbCmp.
                                              */
extern real32_T KeCADC_pct_SdfAmbCoeff_X[5];/* Variable: KeCADC_pct_SdfAmbCoeff_X
                                             * Referenced by: '<S604>/2-D Lookup Table'
                                             * VeCADC_pct_SdfDefCmp������˪λ�ò����Ķ������ݴ��ŷ���λ�ã���Ϊ����ͻ�������
                                             */
extern real32_T KeCADC_pct_SdfAmbCoeff_Y[11];/* Variable: KeCADC_pct_SdfAmbCoeff_Y
                                              * Referenced by: '<S604>/2-D Lookup Table'
                                              * ����CTCM�����VeCTCM_T_AmbCmpCoeffֵ
                                              */
extern real32_T KeCADC_pct_SdfAntiHysDownLim;/* Variable: KeCADC_pct_SdfAntiHysDownLim
                                              * Referenced by: '<S392>/Constant19'
                                              * �������ݴ��ŷ��������������������
                                              */
extern real32_T KeCADC_pct_SdfAntiHysUpLim;/* Variable: KeCADC_pct_SdfAntiHysUpLim
                                            * Referenced by: '<S392>/Constant18'
                                            * �������ݴ��ŷ��������������������
                                            */
extern real32_T KeCADC_pct_SdfAntiHysUpRV_D[2];/* Variable: KeCADC_pct_SdfAntiHysUpRV_D
                                                * Referenced by: '<S392>/Constant21'
                                                * �������ݴ��ŷ�������������������ֵ
                                                */
extern real32_T KeCADC_pct_SdfAntiHysUpRV_X[2];/* Variable: KeCADC_pct_SdfAntiHysUpRV_X
                                                * Referenced by: '<S392>/Constant20'
                                                * ��ǰ��������һ���ڲ�ֵ
                                                */
extern real32_T KeCADC_pct_SdfClsPos;  /* Variable: KeCADC_pct_SdfClsPos
                                        * Referenced by: '<S565>/Chart'
                                        * �������ݴ��ŷ��Ųο��ر�λ��
                                        */
extern real32_T KeCADC_pct_SdfDefCmpRv;/* Variable: KeCADC_pct_SdfDefCmpRv
                                        * Referenced by: '<S8>/ConstantRv241'
                                        */
extern real32_T KeCADC_pct_SdfDefCoeff_D[30];/* Variable: KeCADC_pct_SdfDefCoeff_D
                                              * Referenced by: '<S600>/2-D Lookup Table'
                                              * ���ڵ�ǰ��˪����λ��VeACTU_pct_DefPosnFb��VeCADC_pct_SdfPosnBase���в����KeCADC_pct_SdfDefCoeff_D���õ�һ������ֵVeCADC_pct_SdfDefCmp.
                                              */
extern real32_T KeCADC_pct_SdfDefCoeff_X[5];/* Variable: KeCADC_pct_SdfDefCoeff_X
                                             * Referenced by: '<S600>/2-D Lookup Table'
                                             * VeCADC_pct_SdfPosnBase�����������ݴ��ŷ���λ��
                                             */
extern real32_T KeCADC_pct_SdfDefCoeff_Y[6];/* Variable: KeCADC_pct_SdfDefCoeff_Y
                                             * Referenced by: '<S600>/2-D Lookup Table'
                                             * VeACTU_pct_DefPosnFb ACTU�����ĳ�˪����λ��
                                             */
extern real32_T KeCADC_pct_SdfFlapPosnRv;/* Variable: KeCADC_pct_SdfFlapPosnRv
                                          * Referenced by: '<S8>/ConstantRv252'
                                          */
extern real32_T KeCADC_pct_SdfMotHiLim;/* Variable: KeCADC_pct_SdfMotHiLim
                                        * Referenced by: '<S392>/Constant11'
                                        * �������ݴ��ŷ��Ż�еλ������
                                        */
extern real32_T KeCADC_pct_SdfMotLoLim;/* Variable: KeCADC_pct_SdfMotLoLim
                                        * Referenced by: '<S392>/Constant12'
                                        * �������ݴ��ŷ��Ż�еλ������
                                        */
extern real32_T KeCADC_pct_SdfNvh_D[11];/* Variable: KeCADC_pct_SdfNvh_D
                                         * Referenced by: '<S606>/1-D Lookup Table'
                                         * ����Ve_pct_SdfPosnAmbCmp���в����KeCADC_pct_SdfNvh_D���õ�VeCADC_pct_SdfPosnNvhCmp.
                                         */
extern real32_T KeCADC_pct_SdfNvh_X[11];/* Variable: KeCADC_pct_SdfNvh_X
                                         * Referenced by: '<S606>/1-D Lookup Table'
                                         * Ve_pct_SdfPosnAmbCmp�������ݴ�ͷ�����¶Ȳ���ֵ����ΪNVH����ֵ������ֵ
                                         */
extern real32_T KeCADC_pct_SdfPosnAmbCmpRv;/* Variable: KeCADC_pct_SdfPosnAmbCmpRv
                                            * Referenced by: '<S8>/ConstantRv243'
                                            */
extern real32_T KeCADC_pct_SdfPosnBaseACC_D[4];/* Variable: KeCADC_pct_SdfPosnBaseACC_D
                                                * Referenced by: '<S586>/1-D Lookup Table'
                                                * ����AQ_AccAirdModeReq�����KeCADC_pct_SdfPosnBaseACC_D��,ȷ��VeCADC_pct_SdfPosnBase��ֵ
                                                */
extern real32_T KeCADC_pct_SdfPosnBaseACC_X[4];/* Variable: KeCADC_pct_SdfPosnBaseACC_X
                                                * Referenced by: '<S586>/1-D Lookup Table'
                                                * AQ_AccAirdModeReq ACCģ���HVACģʽ���ſ��ƽӿ�
                                                */
extern real32_T KeCADC_pct_SdfPosnBaseRv;/* Variable: KeCADC_pct_SdfPosnBaseRv
                                          * Referenced by: '<S8>/ConstantRv239'
                                          */
extern real32_T KeCADC_pct_SdfPosnBaseStable_D[4];
                                     /* Variable: KeCADC_pct_SdfPosnBaseStable_D
                                      * Referenced by: '<S585>/1-D Lookup Table'
                                      * ����VeHMI_na_AirdModeML�����KeCADC_pct_SdfPosnBaseStable_D��,ȷ��VeCADC_pct_SdfPosnBase��ֵ
                                      */
extern real32_T KeCADC_pct_SdfPosnCalcdRv;/* Variable: KeCADC_pct_SdfPosnCalcdRv
                                           * Referenced by: '<S8>/ConstantRv255'
                                           */
extern real32_T KeCADC_pct_SdfPosnDasRv;/* Variable: KeCADC_pct_SdfPosnDasRv
                                         * Referenced by: '<S8>/ConstantRv248'
                                         */
extern real32_T KeCADC_pct_SdfPosnErrMngtRv;/* Variable: KeCADC_pct_SdfPosnErrMngtRv
                                             * Referenced by: '<S8>/ConstantRv250'
                                             */
extern real32_T KeCADC_pct_SdfPosnNvhCmpRv;/* Variable: KeCADC_pct_SdfPosnNvhCmpRv
                                            * Referenced by: '<S8>/ConstantRv245'
                                            */
extern real32_T KeCADC_pct_SdfPosnReqRv;/* Variable: KeCADC_pct_SdfPosnReqRv
                                         * Referenced by: '<S8>/ConstantRv299'
                                         */
extern real32_T KeCADC_pct_SdvAmbCoeff_D[55];/* Variable: KeCADC_pct_SdvAmbCoeff_D
                                              * Referenced by: '<S603>/2-D Lookup Table'
                                              * ���ڻ����¶Ȳ���ϵ��VeCTCM_T_AmbCmpCoeff��VeCADC_pct_SdvDefCmp���в����KeCADC_pct_SdvAmbCoeff_D��,�õ�һ���¶Ȳ���ֵVeCADC_pct_SdvPosnAmbCmp.
                                              */
extern real32_T KeCADC_pct_SdvAmbCoeff_X[5];/* Variable: KeCADC_pct_SdvAmbCoeff_X
                                             * Referenced by: '<S603>/2-D Lookup Table'
                                             * VeCADC_pct_SdvDefCmp������˪λ�ò����Ķ������ݴ�ͷ����λ�ã���Ϊ����ͻ�������
                                             */
extern real32_T KeCADC_pct_SdvAmbCoeff_Y[11];/* Variable: KeCADC_pct_SdvAmbCoeff_Y
                                              * Referenced by: '<S603>/2-D Lookup Table'
                                              * ����CTCM�����VeCTCM_T_AmbCmpCoeffֵ
                                              */
extern real32_T KeCADC_pct_SdvAntiHysDownLim;/* Variable: KeCADC_pct_SdvAntiHysDownLim
                                              * Referenced by: '<S392>/Constant7'
                                              * �������ݴ�ͷ���������������������
                                              */
extern real32_T KeCADC_pct_SdvAntiHysUpLim;/* Variable: KeCADC_pct_SdvAntiHysUpLim
                                            * Referenced by: '<S392>/Constant6'
                                            * �������ݴ�ͷ���������������������
                                            */
extern real32_T KeCADC_pct_SdvAntiHysUpRV_D[2];/* Variable: KeCADC_pct_SdvAntiHysUpRV_D
                                                * Referenced by: '<S392>/Constant9'
                                                * �������ݴ�ͷ��������������������ֵ
                                                */
extern real32_T KeCADC_pct_SdvAntiHysUpRV_X[2];/* Variable: KeCADC_pct_SdvAntiHysUpRV_X
                                                * Referenced by: '<S392>/Constant8'
                                                * ��ǰ��������һ���ڲ�ֵ
                                                */
extern real32_T KeCADC_pct_SdvClsPos;  /* Variable: KeCADC_pct_SdvClsPos
                                        * Referenced by: '<S565>/Chart'
                                        * �������ݴ�ͷ���Ųο��ر�λ��
                                        */
extern real32_T KeCADC_pct_SdvDefCmpRv;/* Variable: KeCADC_pct_SdvDefCmpRv
                                        * Referenced by: '<S8>/ConstantRv240'
                                        */
extern real32_T KeCADC_pct_SdvDefCoeff_D[30];/* Variable: KeCADC_pct_SdvDefCoeff_D
                                              * Referenced by: '<S599>/2-D Lookup Table'
                                              * ���ڵ�ǰ��˪����λ��VeACTU_pct_DefPosnFb��VeCADC_pct_SdvPosnBase���в����KeCADC_pct_SdvDefCoeff_D���õ�һ������ֵVeCADC_pct_SdvDefCmp.
                                              */
extern real32_T KeCADC_pct_SdvDefCoeff_X[5];/* Variable: KeCADC_pct_SdvDefCoeff_X
                                             * Referenced by: '<S599>/2-D Lookup Table'
                                             * VeCADC_pct_SdvPosnBase�����������ݴ�ͷ����λ��
                                             */
extern real32_T KeCADC_pct_SdvDefCoeff_Y[6];/* Variable: KeCADC_pct_SdvDefCoeff_Y
                                             * Referenced by: '<S599>/2-D Lookup Table'
                                             * VeACTU_pct_DefPosnFb ACTU�����ĳ�˪����λ��
                                             */
extern real32_T KeCADC_pct_SdvFlapPosnRv;/* Variable: KeCADC_pct_SdvFlapPosnRv
                                          * Referenced by: '<S8>/ConstantRv251'
                                          */
extern real32_T KeCADC_pct_SdvMotHiLim;/* Variable: KeCADC_pct_SdvMotHiLim
                                        * Referenced by: '<S392>/Constant'
                                        * �������ݴ�ͷ���Ż�еλ������
                                        */
extern real32_T KeCADC_pct_SdvMotLoLim;/* Variable: KeCADC_pct_SdvMotLoLim
                                        * Referenced by: '<S392>/Constant1'
                                        * �������ݴ�ͷ���Ż�еλ������
                                        */
extern real32_T KeCADC_pct_SdvNvh_D[11];/* Variable: KeCADC_pct_SdvNvh_D
                                         * Referenced by: '<S605>/1-D Lookup Table'
                                         * ����Ve_pct_SdvPosnAmbCmp���в����KeCADC_pct_SdvNvh_D���õ�VeCADC_pct_SdvPosnNvhCmp.
                                         */
extern real32_T KeCADC_pct_SdvNvh_X[11];/* Variable: KeCADC_pct_SdvNvh_X
                                         * Referenced by: '<S605>/1-D Lookup Table'
                                         * Ve_pct_SdvPosnAmbCmp�������ݴ�ͷ�����¶Ȳ���ֵ����ΪNVH����ֵ������ֵ
                                         */
extern real32_T KeCADC_pct_SdvPosnAmbCmpRv;/* Variable: KeCADC_pct_SdvPosnAmbCmpRv
                                            * Referenced by: '<S8>/ConstantRv242'
                                            */
extern real32_T KeCADC_pct_SdvPosnBaseACC_D[4];/* Variable: KeCADC_pct_SdvPosnBaseACC_D
                                                * Referenced by: '<S580>/1-D Lookup Table'
                                                * ����AQ_AccAirdModeReq�����KeCADC_pct_SdvPosnBaseACC_D��,ȷ��VeCADC_pct_SdvPosnBase��ֵ
                                                */
extern real32_T KeCADC_pct_SdvPosnBaseACC_X[4];/* Variable: KeCADC_pct_SdvPosnBaseACC_X
                                                * Referenced by: '<S580>/1-D Lookup Table'
                                                * AQ_AccAirdModeReq ACCģ���HVACģʽ���ſ��ƽӿ�
                                                */
extern real32_T KeCADC_pct_SdvPosnBaseRv;/* Variable: KeCADC_pct_SdvPosnBaseRv
                                          * Referenced by: '<S8>/ConstantRv238'
                                          */
extern real32_T KeCADC_pct_SdvPosnBaseStable_D[4];
                                     /* Variable: KeCADC_pct_SdvPosnBaseStable_D
                                      * Referenced by: '<S579>/1-D Lookup Table'
                                      * ����VeHMI_na_AirdModeML�����KeCADC_pct_SdvPosnBaseStable_D��,ȷ��VeCADC_pct_SdvPosnBase��ֵ
                                      */
extern real32_T KeCADC_pct_SdvPosnCalcdRv;/* Variable: KeCADC_pct_SdvPosnCalcdRv
                                           * Referenced by: '<S8>/ConstantRv246'
                                           */
extern real32_T KeCADC_pct_SdvPosnDasRv;/* Variable: KeCADC_pct_SdvPosnDasRv
                                         * Referenced by: '<S8>/ConstantRv247'
                                         */
extern real32_T KeCADC_pct_SdvPosnErrMngtRv;/* Variable: KeCADC_pct_SdvPosnErrMngtRv
                                             * Referenced by: '<S8>/ConstantRv249'
                                             */
extern real32_T KeCADC_pct_SdvPosnNvhCmpRv;/* Variable: KeCADC_pct_SdvPosnNvhCmpRv
                                            * Referenced by: '<S8>/ConstantRv244'
                                            */
extern real32_T KeCADC_pct_SdvPosnReqRv;/* Variable: KeCADC_pct_SdvPosnReqRv
                                         * Referenced by: '<S8>/ConstantRv297'
                                         */
extern real32_T KeCADC_pct_SdvReq2SdfFlap_D[4];/* Variable: KeCADC_pct_SdvReq2SdfFlap_D
                                                * Referenced by: '<S565>/1-D Lookup Table2'
                                                * ������ͷ���ŵ�������ã�ʹ�ô��߼����VeCADC_pct_SdfFlapPosn�������ݴ��ŷ���λ��
                                                */
extern real32_T KeCADC_pct_SdvReq2SdfFlap_X[4];/* Variable: KeCADC_pct_SdvReq2SdfFlap_X
                                                * Referenced by: '<S565>/1-D Lookup Table2'
                                                * VeCADC_pct_SdvPosnReq������ͷ���ŵ�������ã�
                                                */
extern real32_T KeCADC_pct_SdvReq2SdvFlap_D[4];/* Variable: KeCADC_pct_SdvReq2SdvFlap_D
                                                * Referenced by: '<S565>/1-D Lookup Table1'
                                                * ������ͷ���ŵ�������ã�ʹ�ô��߼����VeCADC_pct_SdvFlapPosn�����ݴ�ͷ����λ��
                                                */
extern real32_T KeCADC_pct_SdvReq2SdvFlap_X[4];/* Variable: KeCADC_pct_SdvReq2SdvFlap_X
                                                * Referenced by: '<S565>/1-D Lookup Table1'
                                                * VeCADC_pct_SdvPosnReq������ͷ���ŵ�������ã�
                                                */
extern real32_T KeCADC_pct_SecDrvDistbn2HMI_X[5];
                                      /* Variable: KeCADC_pct_SecDrvDistbn2HMI_X
                                       * Referenced by: '<S565>/1-D Lookup Table'
                                       * VeCADC_pct_SdvPosnReq������ͷ���ŵ�������ã�
                                       */
extern real32_T KeCADC_pct_SecPassDistbn2HMI_X[4];
                                     /* Variable: KeCADC_pct_SecPassDistbn2HMI_X
                                      * Referenced by: '<S621>/1-D Lookup Table'
                                      * VeCADC_pct_SpvPosnReq������ͷ���ŵ�������ã�
                                      */
extern real32_T KeCADC_pct_SpfAmbCoeff_D[55];/* Variable: KeCADC_pct_SpfAmbCoeff_D
                                              * Referenced by: '<S666>/2-D Lookup Table'
                                              * ���ڻ����¶Ȳ���ϵ��VeCTCM_T_AmbCmpCoeff��VeCADC_pct_SpfDefCmp���в����KeCADC_pct_SpfAmbCoeff_D��,�õ�һ���¶Ȳ���ֵVeCADC_pct_SpfPosnAmbCmp.
                                              */
extern real32_T KeCADC_pct_SpfAmbCoeff_X[5];/* Variable: KeCADC_pct_SpfAmbCoeff_X
                                             * Referenced by: '<S666>/2-D Lookup Table'
                                             * VeCADC_pct_SpfDefCmp������˪λ�ò����Ķ������ݴ��ŷ���λ�ã���Ϊ����ͻ�������
                                             */
extern real32_T KeCADC_pct_SpfAmbCoeff_Y[11];/* Variable: KeCADC_pct_SpfAmbCoeff_Y
                                              * Referenced by: '<S666>/2-D Lookup Table'
                                              * ����CTCM�����VeCTCM_T_AmbCmpCoeffֵ
                                              */
extern real32_T KeCADC_pct_SpfClsPos;  /* Variable: KeCADC_pct_SpfClsPos
                                        * Referenced by: '<S621>/Chart'
                                        * ���Ÿ��ݴ��ŷ��Ųο��ر�λ��
                                        */
extern real32_T KeCADC_pct_SpfDefCmpRv;/* Variable: KeCADC_pct_SpfDefCmpRv
                                        * Referenced by: '<S8>/ConstantRv268'
                                        */
extern real32_T KeCADC_pct_SpfDefCoeff_D[30];/* Variable: KeCADC_pct_SpfDefCoeff_D
                                              * Referenced by: '<S660>/2-D Lookup Table'
                                              * ���ڵ�ǰ��˪����λ��VeACTU_pct_DefPosnFb��VeCADC_pct_SpfPosnBase���в����KeCADC_pct_SpfDefCoeff_D���õ�һ������ֵVeCADC_pct_SpfDefCmp.
                                              */
extern real32_T KeCADC_pct_SpfDefCoeff_X[5];/* Variable: KeCADC_pct_SpfDefCoeff_X
                                             * Referenced by: '<S660>/2-D Lookup Table'
                                             * VeCADC_pct_SpfPosnBase�����������ݴ��ŷ���λ��
                                             */
extern real32_T KeCADC_pct_SpfDefCoeff_Y[6];/* Variable: KeCADC_pct_SpfDefCoeff_Y
                                             * Referenced by: '<S660>/2-D Lookup Table'
                                             * VeACTU_pct_DefPosnFb ACTU�����ĳ�˪����λ��
                                             */
extern real32_T KeCADC_pct_SpfFlapPosnRv;/* Variable: KeCADC_pct_SpfFlapPosnRv
                                          * Referenced by: '<S8>/ConstantRv281'
                                          */
extern real32_T KeCADC_pct_SpfMotHiLim;/* Variable: KeCADC_pct_SpfMotHiLim
                                        * Referenced by: '<S393>/Constant11'
                                        * ���Ÿ��ݴ��ŷ��Ż�еλ������
                                        */
extern real32_T KeCADC_pct_SpfMotLoLim;/* Variable: KeCADC_pct_SpfMotLoLim
                                        * Referenced by: '<S393>/Constant12'
                                        * ���Ÿ��ݴ��ŷ��Ż�еλ������
                                        */
extern real32_T KeCADC_pct_SpfNvh_D[11];/* Variable: KeCADC_pct_SpfNvh_D
                                         * Referenced by: '<S668>/1-D Lookup Table'
                                         * ����Ve_pct_SpfPosnAmbCmp���в����KeCADC_pct_SpfNvh_D���õ�VeCADC_pct_SpfPosnNvhCmp.
                                         */
extern real32_T KeCADC_pct_SpfNvh_X[11];/* Variable: KeCADC_pct_SpfNvh_X
                                         * Referenced by: '<S668>/1-D Lookup Table'
                                         * Ve_pct_SpfPosnAmbCmp�������ݴ�ͷ�����¶Ȳ���ֵ����ΪNVH����ֵ������ֵ
                                         */
extern real32_T KeCADC_pct_SpfPosnAmbCmpRv;/* Variable: KeCADC_pct_SpfPosnAmbCmpRv
                                            * Referenced by: '<S8>/ConstantRv270'
                                            */
extern real32_T KeCADC_pct_SpfPosnBaseACC_D[4];/* Variable: KeCADC_pct_SpfPosnBaseACC_D
                                                * Referenced by: '<S641>/1-D Lookup Table'
                                                * ����AQ_AccAirdModeReq�����KeCADC_pct_SpfPosnBaseACC_D��,ȷ��VeCADC_pct_SpfPosnBase��ֵ
                                                */
extern real32_T KeCADC_pct_SpfPosnBaseACC_X[4];/* Variable: KeCADC_pct_SpfPosnBaseACC_X
                                                * Referenced by: '<S641>/1-D Lookup Table'
                                                * AQ_AccAirdModeReq ACCģ���HVACģʽ���ſ��ƽӿ�
                                                */
extern real32_T KeCADC_pct_SpfPosnBaseRv;/* Variable: KeCADC_pct_SpfPosnBaseRv
                                          * Referenced by: '<S8>/ConstantRv265'
                                          */
extern real32_T KeCADC_pct_SpfPosnBaseStable_D[4];
                                     /* Variable: KeCADC_pct_SpfPosnBaseStable_D
                                      * Referenced by: '<S642>/1-D Lookup Table'
                                      * ����VeHMI_na_AirdModeMR�����KeCADC_pct_SpfPosnBaseStable_D��,ȷ��VeCADC_pct_SpfPosnBase��ֵ
                                      */
extern real32_T KeCADC_pct_SpfPosnBaseStable_X[4];
                                     /* Variable: KeCADC_pct_SpfPosnBaseStable_X
                                      * Referenced by: '<S642>/1-D Lookup Table'
                                      * VeHMI_na_AirdModeMR HMI�ֶ����Ƶĳ���ģʽ����
                                      */
extern real32_T KeCADC_pct_SpfPosnCalcdRv;/* Variable: KeCADC_pct_SpfPosnCalcdRv
                                           * Referenced by: '<S8>/ConstantRv274'
                                           */
extern real32_T KeCADC_pct_SpfPosnDasRv;/* Variable: KeCADC_pct_SpfPosnDasRv
                                         * Referenced by: '<S8>/ConstantRv276'
                                         */
extern real32_T KeCADC_pct_SpfPosnErrMngtRv;/* Variable: KeCADC_pct_SpfPosnErrMngtRv
                                             * Referenced by: '<S8>/ConstantRv278'
                                             */
extern real32_T KeCADC_pct_SpfPosnNvhCmpRv;/* Variable: KeCADC_pct_SpfPosnNvhCmpRv
                                            * Referenced by: '<S8>/ConstantRv272'
                                            */
extern real32_T KeCADC_pct_SpfPosnReqRv;/* Variable: KeCADC_pct_SpfPosnReqRv
                                         * Referenced by: '<S8>/ConstantRv303'
                                         */
extern real32_T KeCADC_pct_SpvAmbCoeff_D[55];/* Variable: KeCADC_pct_SpvAmbCoeff_D
                                              * Referenced by: '<S665>/2-D Lookup Table'
                                              * ���ڻ����¶Ȳ���ϵ��VeCTCM_T_AmbCmpCoeff��VeCADC_pct_SpvDefCmp���в����KeCADC_pct_SpvAmbCoeff_D��,�õ�һ���¶Ȳ���ֵVeCADC_pct_SpvPosnAmbCmp.
                                              */
extern real32_T KeCADC_pct_SpvAmbCoeff_X[5];/* Variable: KeCADC_pct_SpvAmbCoeff_X
                                             * Referenced by: '<S665>/2-D Lookup Table'
                                             * VeCADC_pct_SpvDefCmp������˪λ�ò����Ķ��Ÿ��ݴ�ͷ����λ�ã���Ϊ����ͻ�������
                                             */
extern real32_T KeCADC_pct_SpvAmbCoeff_Y[11];/* Variable: KeCADC_pct_SpvAmbCoeff_Y
                                              * Referenced by: '<S665>/2-D Lookup Table'
                                              * ����CTCM�����VeCTCM_T_AmbCmpCoeffֵ
                                              */
extern real32_T KeCADC_pct_SpvClsPos;  /* Variable: KeCADC_pct_SpvClsPos
                                        * Referenced by: '<S621>/Chart'
                                        * ���Ÿ��ݴ�ͷ���Ųο��ر�λ��
                                        */
extern real32_T KeCADC_pct_SpvDefCmpRv;/* Variable: KeCADC_pct_SpvDefCmpRv
                                        * Referenced by: '<S8>/ConstantRv267'
                                        */
extern real32_T KeCADC_pct_SpvDefCoeff_D[30];/* Variable: KeCADC_pct_SpvDefCoeff_D
                                              * Referenced by: '<S659>/2-D Lookup Table'
                                              * ���ڵ�ǰ��˪����λ��VeACTU_pct_DefPosnFb��VeCADC_pct_SpvPosnBase���в����KeCADC_pct_SpvDefCoeff_D���õ�һ������ֵVeCADC_pct_SpvDefCmp.
                                              */
extern real32_T KeCADC_pct_SpvDefCoeff_X[5];/* Variable: KeCADC_pct_SpvDefCoeff_X
                                             * Referenced by: '<S659>/2-D Lookup Table'
                                             * VeCADC_pct_SpvPosnBase�����������ݴ�ͷ����λ��
                                             */
extern real32_T KeCADC_pct_SpvDefCoeff_Y[6];/* Variable: KeCADC_pct_SpvDefCoeff_Y
                                             * Referenced by: '<S659>/2-D Lookup Table'
                                             * VeACTU_pct_DefPosnFb ACTU�����ĳ�˪����λ��
                                             */
extern real32_T KeCADC_pct_SpvFlapPosnRv;/* Variable: KeCADC_pct_SpvFlapPosnRv
                                          * Referenced by: '<S8>/ConstantRv280'
                                          */
extern real32_T KeCADC_pct_SpvMotHiLim;/* Variable: KeCADC_pct_SpvMotHiLim
                                        * Referenced by: '<S393>/Constant'
                                        * ���Ÿ��ݴ�ͷ���Ż�еλ������
                                        */
extern real32_T KeCADC_pct_SpvMotLoLim;/* Variable: KeCADC_pct_SpvMotLoLim
                                        * Referenced by: '<S393>/Constant1'
                                        * ���Ÿ��ݴ�ͷ���Ż�еλ������
                                        */
extern real32_T KeCADC_pct_SpvNvh_D[11];/* Variable: KeCADC_pct_SpvNvh_D
                                         * Referenced by: '<S667>/1-D Lookup Table'
                                         * ����Ve_pct_SpvPosnAmbCmp���в����KeCADC_pct_SpvNvh_D���õ�VeCADC_pct_SpvPosnNvhCmp.
                                         */
extern real32_T KeCADC_pct_SpvNvh_X[11];/* Variable: KeCADC_pct_SpvNvh_X
                                         * Referenced by: '<S667>/1-D Lookup Table'
                                         * Ve_pct_SpvPosnAmbCmp�������ݴ�ͷ�����¶Ȳ���ֵ����ΪNVH����ֵ������ֵ
                                         */
extern real32_T KeCADC_pct_SpvPosnAmbCmpRv;/* Variable: KeCADC_pct_SpvPosnAmbCmpRv
                                            * Referenced by: '<S8>/ConstantRv269'
                                            */
extern real32_T KeCADC_pct_SpvPosnBaseACC_D[4];/* Variable: KeCADC_pct_SpvPosnBaseACC_D
                                                * Referenced by: '<S635>/1-D Lookup Table'
                                                * ����AQ_AccAirdModeReq�����KeCADC_pct_SpvPosnBaseACC_D��,ȷ��VeCADC_pct_SpvPosnBase��ֵ
                                                */
extern real32_T KeCADC_pct_SpvPosnBaseACC_X[4];/* Variable: KeCADC_pct_SpvPosnBaseACC_X
                                                * Referenced by: '<S635>/1-D Lookup Table'
                                                * AQ_AccAirdModeReq ACCģ���HVACģʽ���ſ��ƽӿ�
                                                */
extern real32_T KeCADC_pct_SpvPosnBaseRv;/* Variable: KeCADC_pct_SpvPosnBaseRv
                                          * Referenced by: '<S8>/ConstantRv266'
                                          */
extern real32_T KeCADC_pct_SpvPosnBaseStable_D[4];
                                     /* Variable: KeCADC_pct_SpvPosnBaseStable_D
                                      * Referenced by: '<S636>/1-D Lookup Table'
                                      * ����VeHMI_na_AirdModeMR�����KeCADC_pct_SpvPosnBaseStable_D��,ȷ��VeCADC_pct_SpvPosnBase��ֵ
                                      */
extern real32_T KeCADC_pct_SpvPosnBaseStable_X[4];
                                     /* Variable: KeCADC_pct_SpvPosnBaseStable_X
                                      * Referenced by: '<S636>/1-D Lookup Table'
                                      * VeHMI_na_AirdModeMR HMI�ֶ����Ƶĳ���ģʽ����
                                      */
extern real32_T KeCADC_pct_SpvPosnCalcdRv;/* Variable: KeCADC_pct_SpvPosnCalcdRv
                                           * Referenced by: '<S8>/ConstantRv273'
                                           */
extern real32_T KeCADC_pct_SpvPosnDasRv;/* Variable: KeCADC_pct_SpvPosnDasRv
                                         * Referenced by: '<S8>/ConstantRv275'
                                         */
extern real32_T KeCADC_pct_SpvPosnErrMngtRv;/* Variable: KeCADC_pct_SpvPosnErrMngtRv
                                             * Referenced by: '<S8>/ConstantRv277'
                                             */
extern real32_T KeCADC_pct_SpvPosnNvhCmpRv;/* Variable: KeCADC_pct_SpvPosnNvhCmpRv
                                            * Referenced by: '<S8>/ConstantRv271'
                                            */
extern real32_T KeCADC_pct_SpvPosnReqRv;/* Variable: KeCADC_pct_SpvPosnReqRv
                                         * Referenced by: '<S8>/ConstantRv301'
                                         */
extern real32_T KeCADC_pct_SpvReq2SpfFlap_X[4];/* Variable: KeCADC_pct_SpvReq2SpfFlap_X
                                                * Referenced by: '<S621>/1-D Lookup Table2'
                                                * VeCADC_pct_SpvPosnReq������ͷ���ŵ�������ã�
                                                */
extern real32_T KeCADC_pct_SpvReq2SpvFlap_X[4];/* Variable: KeCADC_pct_SpvReq2SpvFlap_X
                                                * Referenced by: '<S621>/1-D Lookup Table1'
                                                * VeCADC_pct_SpvPosnReq������ͷ���ŵ�������ã�
                                                */
extern real32_T KeCAFC_pct_FdfDefCoeff_D[30];/* Variable: KeCAFC_pct_FdfDefCoeff_D
                                              * Referenced by: '<S463>/2-D Lookup Table'
                                              * ���ڵ�ǰ��˪����λ��VeACTU_pct_DefPosnFb��VeCADC_pct_FdfPosnBase���в����KeCADC_pct_FdfDefCoeff_D���õ�һ������ֵVeCADC_pct_FdfDefCmp.
                                              */
extern real32_T KeCAFC_v_ColdFlowLimRv;/* Variable: KeCAFC_v_ColdFlowLimRv
                                        * Referenced by: '<S10>/ConstantRv557'
                                        */
extern real32_T KeCAFC_v_FbFlowAmbCmpRv;/* Variable: KeCAFC_v_FbFlowAmbCmpRv
                                         * Referenced by: '<S10>/ConstantRv556'
                                         */
extern real32_T KeCAFC_v_FbFlowBaseRv; /* Variable: KeCAFC_v_FbFlowBaseRv
                                        * Referenced by: '<S10>/ConstantRv569'
                                        */
extern real32_T KeCAFC_v_FlowCalcdRv;  /* Variable: KeCAFC_v_FlowCalcdRv
                                        * Referenced by: '<S10>/ConstantRv560'
                                        */
extern real32_T KeCAFC_v_FlowCccsLimRv;/* Variable: KeCAFC_v_FlowCccsLimRv
                                        * Referenced by: '<S10>/ConstantRv558'
                                        */
extern real32_T KeCAFC_v_FlowCddsRv;   /* Variable: KeCAFC_v_FlowCddsRv
                                        * Referenced by: '<S10>/ConstantRv562'
                                        */
extern real32_T KeCAFC_v_FlowEemCmpRv; /* Variable: KeCAFC_v_FlowEemCmpRv
                                        * Referenced by: '<S10>/ConstantRv561'
                                        */
extern real32_T KeCAFC_v_FlowErrMngtRv;/* Variable: KeCAFC_v_FlowErrMngtRv
                                        * Referenced by: '<S10>/ConstantRv563'
                                        */
extern real32_T KeCAFC_v_FlowNvhCmpRv; /* Variable: KeCAFC_v_FlowNvhCmpRv
                                        * Referenced by: '<S10>/ConstantRv559'
                                        */
extern real32_T KeCHFC_na_FdhFlapPosnRv;/* Variable: KeCHFC_na_FdhFlapPosnRv
                                         * Referenced by: '<S12>/ConstantRv151'
                                         */
extern real32_T KeCHFC_na_FdhPosnReqRv;/* Variable: KeCHFC_na_FdhPosnReqRv
                                        * Referenced by: '<S12>/ConstantRv149'
                                        */
extern real32_T KeCHFC_na_FphFlapPosnRv;/* Variable: KeCHFC_na_FphFlapPosnRv
                                         * Referenced by: '<S12>/ConstantRv160'
                                         */
extern real32_T KeCHFC_na_FphPosnReqRv;/* Variable: KeCHFC_na_FphPosnReqRv
                                        * Referenced by: '<S12>/ConstantRv158'
                                        */
extern real32_T KeCHFC_na_SdhFlapPosnRv;/* Variable: KeCHFC_na_SdhFlapPosnRv
                                         * Referenced by: '<S12>/ConstantRv169'
                                         */
extern real32_T KeCHFC_na_SdhPosnReqRv;/* Variable: KeCHFC_na_SdhPosnReqRv
                                        * Referenced by: '<S12>/ConstantRv167'
                                        */
extern real32_T KeCHFC_na_SphFlapPosnRv;/* Variable: KeCHFC_na_SphFlapPosnRv
                                         * Referenced by: '<S12>/ConstantRv178'
                                         */
extern real32_T KeCHFC_na_SphPosnReqRv;/* Variable: KeCHFC_na_SphPosnReqRv
                                        * Referenced by: '<S12>/ConstantRv176'
                                        */
extern real32_T KeCHFC_pct_FdhPosnCalcdRv;/* Variable: KeCHFC_pct_FdhPosnCalcdRv
                                           * Referenced by: '<S12>/ConstantRv147'
                                           */
extern real32_T KeCHFC_pct_FdhPosnErrMngtRv;/* Variable: KeCHFC_pct_FdhPosnErrMngtRv
                                             * Referenced by: '<S12>/ConstantRv148'
                                             */
extern real32_T KeCHFC_pct_FphPosnCalcdRv;/* Variable: KeCHFC_pct_FphPosnCalcdRv
                                           * Referenced by: '<S12>/ConstantRv156'
                                           */
extern real32_T KeCHFC_pct_FphPosnErrMngtRv;/* Variable: KeCHFC_pct_FphPosnErrMngtRv
                                             * Referenced by: '<S12>/ConstantRv157'
                                             */
extern real32_T KeCHFC_pct_SdhPosnCalcdRv;/* Variable: KeCHFC_pct_SdhPosnCalcdRv
                                           * Referenced by: '<S12>/ConstantRv165'
                                           */
extern real32_T KeCHFC_pct_SdhPosnErrMngtRv;/* Variable: KeCHFC_pct_SdhPosnErrMngtRv
                                             * Referenced by: '<S12>/ConstantRv166'
                                             */
extern real32_T KeCHFC_pct_SphPosnCalcdRv;/* Variable: KeCHFC_pct_SphPosnCalcdRv
                                           * Referenced by: '<S12>/ConstantRv174'
                                           */
extern real32_T KeCHFC_pct_SphPosnErrMngtRv;/* Variable: KeCHFC_pct_SphPosnErrMngtRv
                                             * Referenced by: '<S12>/ConstantRv175'
                                             */
extern real32_T KeCHMI_T_SetTempLRv;   /* Variable: KeCHMI_T_SetTempLRv
                                        * Referenced by: '<S14>/ConstantRv72'
                                        */
extern real32_T KeCHMI_T_SetTempMLRv;  /* Variable: KeCHMI_T_SetTempMLRv
                                        * Referenced by: '<S14>/ConstantRv74'
                                        */
extern real32_T KeCHMI_T_SetTempRRv;   /* Variable: KeCHMI_T_SetTempRRv
                                        * Referenced by: '<S14>/ConstantRv73'
                                        */
extern real32_T KeCREC_A_OsaArea;      /* Variable: KeCREC_A_OsaArea
                                        * Referenced by:
                                        *   '<S825>/Constant1'
                                        *   '<S825>/Constant4'
                                        *   '<S825>/Constant5'
                                        * ���������ͶӰ�������
                                        */
extern real32_T KeCREC_A_RecArea;      /* Variable: KeCREC_A_RecArea
                                        * Referenced by:
                                        *   '<S825>/Constant2'
                                        *   '<S825>/Constant3'
                                        * ���������ͶӰ�������
                                        */
extern real32_T KeCREC_T_Fa_X[3];      /* Variable: KeCREC_T_Fa_X
                                        * Referenced by: '<S825>/2-D Lookup Table'
                                        * VeSENA_T_AmbTemp�����¶�
                                        */
extern real32_T KeCREC_na_Fa_D[15];    /* Variable: KeCREC_na_Fa_D
                                        * Referenced by: '<S825>/2-D Lookup Table'
                                        * �������ӷ�ѹϵ��
                                        */
extern real32_T KeCREC_pct_FullPos;    /* Variable: KeCREC_pct_FullPos
                                        * Referenced by:
                                        *   '<S15>/Constant1'
                                        *   '<S815>/Constant'
                                        *   '<S825>/Constant'
                                        * ѭ���������з�Χ
                                        */
extern real32_T KeCREC_pct_OsaAnitShakeLimOff;
                                      /* Variable: KeCREC_pct_OsaAnitShakeLimOff
                                       * Referenced by: '<S817>/Constant8'
                                       * ��ѭ�������������������
                                       */
extern real32_T KeCREC_pct_OsaAnitShakeLimOn;/* Variable: KeCREC_pct_OsaAnitShakeLimOn
                                              * Referenced by: '<S817>/Constant10'
                                              * ��ѭ�������������������
                                              */
extern real32_T KeCREC_pct_OsaAntiHysDownLim;/* Variable: KeCREC_pct_OsaAntiHysDownLim
                                              * Referenced by: '<S817>/Constant18'
                                              * ��ѭ�����������������������
                                              */
extern real32_T KeCREC_pct_OsaAntiHysDownRV_D[2];
                                      /* Variable: KeCREC_pct_OsaAntiHysDownRV_D
                                       * Referenced by: '<S817>/Constant16'
                                       * ��ѭ����������������������ֵ
                                       */
extern real32_T KeCREC_pct_OsaAntiHysDownRV_X[2];
                                      /* Variable: KeCREC_pct_OsaAntiHysDownRV_X
                                       * Referenced by: '<S817>/Constant11'
                                       * ��ǰ��������һ���ڲ�ֵ
                                       */
extern real32_T KeCREC_pct_OsaAntiHysUpLim;/* Variable: KeCREC_pct_OsaAntiHysUpLim
                                            * Referenced by: '<S817>/Constant17'
                                            * ��ѭ�����������������������
                                            */
extern real32_T KeCREC_pct_OsaAntiHysUpRV_D[2];/* Variable: KeCREC_pct_OsaAntiHysUpRV_D
                                                * Referenced by: '<S817>/Constant23'
                                                * ��ѭ����������������������ֵ
                                                */
extern real32_T KeCREC_pct_OsaAntiHysUpRV_X[2];/* Variable: KeCREC_pct_OsaAntiHysUpRV_X
                                                * Referenced by: '<S817>/Constant19'
                                                * ��ǰ��������һ���ڲ�ֵ
                                                */
extern real32_T KeCREC_pct_OsaClsPos;  /* Variable: KeCREC_pct_OsaClsPos
                                        * Referenced by: '<S817>/Constant20'
                                        * ��ѭ�����Źر�λ��
                                        */
extern real32_T KeCREC_pct_OsaFlapPosnRV;/* Variable: KeCREC_pct_OsaFlapPosnRV
                                          * Referenced by: '<S16>/ConstantRv33'
                                          */
extern real32_T KeCREC_pct_OsaMotLoLim;/* Variable: KeCREC_pct_OsaMotLoLim
                                        * Referenced by:
                                        *   '<S817>/Constant1'
                                        *   '<S826>/Constant2'
                                        * ��ѭ�����Ż�еλ������
                                        */
extern real32_T KeCREC_pct_OsaNvh_D[6];/* Variable: KeCREC_pct_OsaNvh_D
                                        * Referenced by: '<S846>/1-D Lookup Table'
                                        * VeCREC_pct_OsaPosnNvhCmp����ѭ�����Ž���NVH����
                                        */
extern real32_T KeCREC_pct_OsaNvh_X[6];/* Variable: KeCREC_pct_OsaNvh_X
                                        * Referenced by: '<S846>/1-D Lookup Table'
                                        * VeCREC_pct_OsaPosnBase ��ѭ�����Ż���λ�ã���ΪNVH����������ֵ
                                        */
extern real32_T KeCREC_pct_OsaPosnACC_D[2];/* Variable: KeCREC_pct_OsaPosnACC_D
                                            * Referenced by: '<S826>/1-D Lookup Table3'
                                            * �������������ѭ��λ���������
                                            */
extern real32_T KeCREC_pct_OsaPosnACC_X[2];/* Variable: KeCREC_pct_OsaPosnACC_X
                                            * Referenced by: '<S826>/1-D Lookup Table3'
                                            * VeCAQC_Pct_AccRecRatReq ACCģ��HVAC�·���ſ��ƽӿ�
                                            */
extern real32_T KeCREC_pct_OsaPosnAQS_D[2];/* Variable: KeCREC_pct_OsaPosnAQS_D
                                            * Referenced by: '<S826>/1-D Lookup Table1'
                                            * ��ѭ��AQS����λ�ò��
                                            */
extern real32_T KeCREC_pct_OsaPosnAQS_X[2];/* Variable: KeCREC_pct_OsaPosnAQS_X
                                            * Referenced by: '<S826>/1-D Lookup Table1'
                                            * VeCAQC_Pct_AQSRecRatReq AQSģ���HVAC�·���ſ��ƽӿ�
                                            */
extern real32_T KeCREC_pct_OsaPosnBaseRV;/* Variable: KeCREC_pct_OsaPosnBaseRV
                                          * Referenced by: '<S16>/ConstantRv22'
                                          */
extern real32_T KeCREC_pct_OsaPosnCADSRV;/* Variable: KeCREC_pct_OsaPosnCADSRV
                                          * Referenced by: '<S16>/ConstantRv28'
                                          */
extern real32_T KeCREC_pct_OsaPosnCalcdRV;/* Variable: KeCREC_pct_OsaPosnCalcdRV
                                           * Referenced by: '<S16>/ConstantRv26'
                                           */
extern real32_T KeCREC_pct_OsaPosnErrMngtRV;/* Variable: KeCREC_pct_OsaPosnErrMngtRV
                                             * Referenced by: '<S16>/ConstantRv30'
                                             */
extern real32_T KeCREC_pct_OsaPosnNvhCmpRV;/* Variable: KeCREC_pct_OsaPosnNvhCmpRV
                                            * Referenced by: '<S16>/ConstantRv25'
                                            */
extern real32_T KeCREC_pct_OsaPosnReqRV;/* Variable: KeCREC_pct_OsaPosnReqRV
                                         * Referenced by: '<S16>/ConstantRv38'
                                         */
extern real32_T KeCREC_pct_OsaTakeBreath;/* Variable: KeCREC_pct_OsaTakeBreath
                                          * Referenced by:
                                          *   '<S826>/Constant1'
                                          *   '<S827>/Constant5'
                                          * ����ģʽ��ѭ������������
                                          */
extern real32_T KeCREC_pct_OsapctoBreathPos;/* Variable: KeCREC_pct_OsapctoBreathPos
                                             * Referenced by: '<S817>/Constant21'
                                             * ���·��ʱ��λ�ûز�
                                             */
extern real32_T KeCREC_pct_Quant;      /* Variable: KeCREC_pct_Quant
                                        * Referenced by:
                                        *   '<S817>/Constant24'
                                        *   '<S817>/Constant36'
                                        * ѭ�������������(��ѹ)
                                        */
extern real32_T KeCREC_pct_RecAnitShakeLimOff;
                                      /* Variable: KeCREC_pct_RecAnitShakeLimOff
                                       * Referenced by: '<S817>/Constant28'
                                       * ��ѭ�������������������
                                       */
extern real32_T KeCREC_pct_RecAnitShakeLimOn;/* Variable: KeCREC_pct_RecAnitShakeLimOn
                                              * Referenced by: '<S817>/Constant29'
                                              * ��ѭ�������������������
                                              */
extern real32_T KeCREC_pct_RecAntiHysDownLim;/* Variable: KeCREC_pct_RecAntiHysDownLim
                                              * Referenced by: '<S817>/Constant31'
                                              * ��ѭ�����������������������
                                              */
extern real32_T KeCREC_pct_RecAntiHysDownRV_D[2];
                                      /* Variable: KeCREC_pct_RecAntiHysDownRV_D
                                       * Referenced by: '<S817>/Constant33'
                                       * ��ѭ����������������������ֵ
                                       */
extern real32_T KeCREC_pct_RecAntiHysDownRV_X[2];
                                      /* Variable: KeCREC_pct_RecAntiHysDownRV_X
                                       * Referenced by: '<S817>/Constant32'
                                       * ��ǰ��������һ���ڲ�ֵ
                                       */
extern real32_T KeCREC_pct_RecAntiHysUpLim;/* Variable: KeCREC_pct_RecAntiHysUpLim
                                            * Referenced by: '<S817>/Constant30'
                                            * ��ѭ�����������������������
                                            */
extern real32_T KeCREC_pct_RecAntiHysUpRV_D[2];/* Variable: KeCREC_pct_RecAntiHysUpRV_D
                                                * Referenced by: '<S817>/Constant35'
                                                * ��ѭ����������������������ֵ
                                                */
extern real32_T KeCREC_pct_RecAntiHysUpRV_X[2];/* Variable: KeCREC_pct_RecAntiHysUpRV_X
                                                * Referenced by: '<S817>/Constant34'
                                                * ��ǰ��������һ���ڲ�ֵ
                                                */
extern real32_T KeCREC_pct_RecFlapPosnRV;/* Variable: KeCREC_pct_RecFlapPosnRV
                                          * Referenced by: '<S16>/ConstantRv32'
                                          */
extern real32_T KeCREC_pct_RecMotHiLim;/* Variable: KeCREC_pct_RecMotHiLim
                                        * Referenced by:
                                        *   '<S817>/Constant25'
                                        *   '<S827>/Constant1'
                                        * ��ѭ�����Ż�еλ������
                                        */
extern real32_T KeCREC_pct_RecMotLoLim;/* Variable: KeCREC_pct_RecMotLoLim
                                        * Referenced by: '<S827>/Constant3'
                                        * ��ѭ�����Ż�еλ������
                                        */
extern real32_T KeCREC_pct_RecNvh_D[6];/* Variable: KeCREC_pct_RecNvh_D
                                        * Referenced by: '<S845>/1-D Lookup Table'
                                        * VeCREC_pct_RecPosnNvhCmp����ѭ�����Ž���NVH����
                                        */
extern real32_T KeCREC_pct_RecNvh_X[6];/* Variable: KeCREC_pct_RecNvh_X
                                        * Referenced by: '<S845>/1-D Lookup Table'
                                        * VeCREC_pct_RecPosnBase ��ѭ�����Ż���λ�ã���ΪNVH����������ֵ
                                        */
extern real32_T KeCREC_pct_RecPosnACC_D[2];/* Variable: KeCREC_pct_RecPosnACC_D
                                            * Referenced by: '<S827>/1-D Lookup Table3'
                                            * �������������ѭ��λ���������
                                            */
extern real32_T KeCREC_pct_RecPosnACC_X[2];/* Variable: KeCREC_pct_RecPosnACC_X
                                            * Referenced by: '<S827>/1-D Lookup Table3'
                                            * VeCAQC_Pct_AccRecRatReq ACCģ��HVAC�·���ſ��ƽӿ�
                                            */
extern real32_T KeCREC_pct_RecPosnAQS_D[2];/* Variable: KeCREC_pct_RecPosnAQS_D
                                            * Referenced by: '<S827>/1-D Lookup Table1'
                                            * ��ѭ��AQS����λ�ò��
                                            */
extern real32_T KeCREC_pct_RecPosnAQS_X[2];/* Variable: KeCREC_pct_RecPosnAQS_X
                                            * Referenced by: '<S827>/1-D Lookup Table1'
                                            * VeCAQC_Pct_AQSRecRatReq AQSģ���HVAC�·���ſ��ƽӿ�
                                            */
extern real32_T KeCREC_pct_RecPosnBaseRV;/* Variable: KeCREC_pct_RecPosnBaseRV
                                          * Referenced by: '<S16>/ConstantRv23'
                                          */
extern real32_T KeCREC_pct_RecPosnCADSRV;/* Variable: KeCREC_pct_RecPosnCADSRV
                                          * Referenced by: '<S16>/ConstantRv29'
                                          */
extern real32_T KeCREC_pct_RecPosnCalcdRV;/* Variable: KeCREC_pct_RecPosnCalcdRV
                                           * Referenced by: '<S16>/ConstantRv27'
                                           */
extern real32_T KeCREC_pct_RecPosnErrMngtRV;/* Variable: KeCREC_pct_RecPosnErrMngtRV
                                             * Referenced by: '<S16>/ConstantRv31'
                                             */
extern real32_T KeCREC_pct_RecPosnNvhCmpRV;/* Variable: KeCREC_pct_RecPosnNvhCmpRV
                                            * Referenced by: '<S16>/ConstantRv24'
                                            */
extern real32_T KeCREC_pct_RecPosnReqRV;/* Variable: KeCREC_pct_RecPosnReqRV
                                         * Referenced by: '<S16>/ConstantRv36'
                                         */
extern real32_T KeCREC_pct_RecRatRV;   /* Variable: KeCREC_pct_RecRatRV
                                        * Referenced by: '<S16>/ConstantRv40'
                                        */
extern real32_T KeCREC_v_Fa_Y[5];      /* Variable: KeCREC_v_Fa_Y
                                        * Referenced by: '<S825>/2-D Lookup Table'
                                        * VeVTIC_v_VehSpd����
                                        */
extern real32_T KeCSCC_T_DuctAvgTempRv;/* Variable: KeCSCC_T_DuctAvgTempRv
                                        * Referenced by: '<S18>/ConstantRv108'
                                        */
extern real32_T KeCSCC_T_FdTmaRv;      /* Variable: KeCSCC_T_FdTmaRv
                                        * Referenced by: '<S18>/ConstantRv91'
                                        */
extern real32_T KeCSCC_T_FpTmaRv;      /* Variable: KeCSCC_T_FpTmaRv
                                        * Referenced by: '<S18>/ConstantRv92'
                                        */
extern real32_T KeCSCC_T_RecTempRv;    /* Variable: KeCSCC_T_RecTempRv
                                        * Referenced by: '<S18>/ConstantRv99'
                                        */
extern real32_T KeCSCC_T_SdTmaRv;      /* Variable: KeCSCC_T_SdTmaRv
                                        * Referenced by: '<S18>/ConstantRv93'
                                        */
extern real32_T KeCSCC_T_SpTmaRv;      /* Variable: KeCSCC_T_SpTmaRv
                                        * Referenced by: '<S18>/ConstantRv94'
                                        */
extern real32_T KeCSCC_V_FrntDrvDefRv; /* Variable: KeCSCC_V_FrntDrvDefRv
                                        * Referenced by: '<S18>/ConstantRv86'
                                        */
extern real32_T KeCSCC_V_FrntDrvFlowFbRv;/* Variable: KeCSCC_V_FrntDrvFlowFbRv
                                          * Referenced by: '<S18>/ConstantRv101'
                                          */
extern real32_T KeCSCC_V_FrntDrvFootRv;/* Variable: KeCSCC_V_FrntDrvFootRv
                                        * Referenced by: '<S18>/ConstantRv85'
                                        */
extern real32_T KeCSCC_V_FrntDrvVentRv;/* Variable: KeCSCC_V_FrntDrvVentRv
                                        * Referenced by: '<S18>/ConstantRv84'
                                        */
extern real32_T KeCSCC_V_FrntPassDefRv;/* Variable: KeCSCC_V_FrntPassDefRv
                                        * Referenced by: '<S18>/ConstantRv100'
                                        */
extern real32_T KeCSCC_V_FrntPassFlowFbRv;/* Variable: KeCSCC_V_FrntPassFlowFbRv
                                           * Referenced by: '<S18>/ConstantRv102'
                                           */
extern real32_T KeCSCC_V_FrntPassFootRv;/* Variable: KeCSCC_V_FrntPassFootRv
                                         * Referenced by: '<S18>/ConstantRv88'
                                         */
extern real32_T KeCSCC_V_FrntPassVentRv;/* Variable: KeCSCC_V_FrntPassVentRv
                                         * Referenced by: '<S18>/ConstantRv87'
                                         */
extern real32_T KeCSCC_V_SecDrvFlowFbRv;/* Variable: KeCSCC_V_SecDrvFlowFbRv
                                         * Referenced by: '<S18>/ConstantRv103'
                                         */
extern real32_T KeCSCC_V_SecDrvFootRv; /* Variable: KeCSCC_V_SecDrvFootRv
                                        * Referenced by: '<S18>/ConstantRv90'
                                        */
extern real32_T KeCSCC_V_SecDrvVentRv; /* Variable: KeCSCC_V_SecDrvVentRv
                                        * Referenced by: '<S18>/ConstantRv89'
                                        */
extern real32_T KeCSCC_V_SecPassFlowFbRv;/* Variable: KeCSCC_V_SecPassFlowFbRv
                                          * Referenced by: '<S18>/ConstantRv104'
                                          */
extern real32_T KeCSCC_m_FrEvaNormFlwOutHumRv;
                                      /* Variable: KeCSCC_m_FrEvaNormFlwOutHumRv
                                       * Referenced by: '<S18>/ConstantRv105'
                                       */
extern real32_T KeCSCC_m_ReEvaNormFlwOutHumRv;
                                      /* Variable: KeCSCC_m_ReEvaNormFlwOutHumRv
                                       * Referenced by: '<S18>/ConstantRv106'
                                       */
extern real32_T KeCSCC_m_RecFlwInHumRv;/* Variable: KeCSCC_m_RecFlwInHumRv
                                        * Referenced by: '<S18>/ConstantRv107'
                                        */
extern real32_T KeCSCC_pa_FlowInletResRv;/* Variable: KeCSCC_pa_FlowInletResRv
                                          * Referenced by: '<S18>/ConstantRv95'
                                          */
extern real32_T KeCSCC_pct_FdhPosnRioRv;/* Variable: KeCSCC_pct_FdhPosnRioRv
                                         * Referenced by: '<S18>/ConstantRv96'
                                         */
extern real32_T KeCSCC_pct_FphPosnRioRv;/* Variable: KeCSCC_pct_FphPosnRioRv
                                         * Referenced by: '<S18>/ConstantRv97'
                                         */
extern real32_T KeCSCC_pct_SdhPosnRioRv;/* Variable: KeCSCC_pct_SdhPosnRioRv
                                         * Referenced by: '<S18>/ConstantRv98'
                                         */
extern real32_T KeCSCC_pwr_SloarAvgPwrRv;/* Variable: KeCSCC_pwr_SloarAvgPwrRv
                                          * Referenced by: '<S18>/ConstantRv109'
                                          */
extern real32_T KeCTCM_Af_Yn2FdWghFlow_D[15];/* Variable: KeCTCM_Af_Yn2FdWghFlow_D
                                              * Referenced by: '<S944>/1-D Lookup Table'
                                              * ǰ�����������������ֵ
                                              */
extern real32_T KeCTCM_Af_Yn2FdWghFlow_X[15];/* Variable: KeCTCM_Af_Yn2FdWghFlow_X
                                              * Referenced by: '<S944>/1-D Lookup Table'
                                              * VeCTCM_na_FrntDrvYn ǰ�����ݽ��»�����ǿ��Yn
                                              */
extern real32_T KeCTCM_Af_Yn2FpWghFlow_X[15];/* Variable: KeCTCM_Af_Yn2FpWghFlow_X
                                              * Referenced by: '<S945>/1-D Lookup Table'
                                              * VeCTCM_na_FrntPassYn ǰ�Ÿ��ݽ��»�����ǿ��Yn
                                              */
extern real32_T KeCTCM_Af_Yn2SdWghFlow_D[15];/* Variable: KeCTCM_Af_Yn2SdWghFlow_D
                                              * Referenced by: '<S947>/1-D Lookup Table'
                                              * �������������������ֵ
                                              */
extern real32_T KeCTCM_Af_Yn2SdWghFlow_X[15];/* Variable: KeCTCM_Af_Yn2SdWghFlow_X
                                              * Referenced by: '<S947>/1-D Lookup Table'
                                              * VeCTCM_na_SecDrvYn �������ݽ��»�����ǿ��Yn
                                              */
extern real32_T KeCTCM_Af_Yn2SpWghFlow_X[15];/* Variable: KeCTCM_Af_Yn2SpWghFlow_X
                                              * Referenced by: '<S949>/1-D Lookup Table'
                                              * VeCTCM_na_SecPassYn ���Ÿ��ݽ��»�����ǿ��Yn
                                              */
extern real32_T KeCTCM_P_FdEvaEnrgExchRv;/* Variable: KeCTCM_P_FdEvaEnrgExchRv
                                          * Referenced by: '<S20>/ConstantRv114'
                                          */
extern real32_T KeCTCM_P_FdInConEnrgChngRv;/* Variable: KeCTCM_P_FdInConEnrgChngRv
                                            * Referenced by: '<S20>/ConstantRv106'
                                            */
extern real32_T KeCTCM_P_FpEvaEnrgExchRv;/* Variable: KeCTCM_P_FpEvaEnrgExchRv
                                          * Referenced by: '<S20>/ConstantRv115'
                                          */
extern real32_T KeCTCM_P_FpInConEnrgChngRv;/* Variable: KeCTCM_P_FpInConEnrgChngRv
                                            * Referenced by: '<S20>/ConstantRv107'
                                            */
extern real32_T KeCTCM_P_FrntDrvHeatDemRv;/* Variable: KeCTCM_P_FrntDrvHeatDemRv
                                           * Referenced by: '<S20>/ConstantRv62'
                                           */
extern real32_T KeCTCM_P_FrntPassHeatDemRv;/* Variable: KeCTCM_P_FrntPassHeatDemRv
                                            * Referenced by: '<S20>/ConstantRv63'
                                            */
extern real32_T KeCTCM_P_SdEvaEnrgExchRv;/* Variable: KeCTCM_P_SdEvaEnrgExchRv
                                          * Referenced by: '<S20>/ConstantRv116'
                                          */
extern real32_T KeCTCM_P_SdInConEnrgChngRv;/* Variable: KeCTCM_P_SdInConEnrgChngRv
                                            * Referenced by: '<S20>/ConstantRv108'
                                            */
extern real32_T KeCTCM_P_SecDrvHeatDemRv;/* Variable: KeCTCM_P_SecDrvHeatDemRv
                                          * Referenced by: '<S20>/ConstantRv64'
                                          */
extern real32_T KeCTCM_P_SecPassHeatDemRv;/* Variable: KeCTCM_P_SecPassHeatDemRv
                                           * Referenced by: '<S20>/ConstantRv65'
                                           */
extern real32_T KeCTCM_P_SpEvaEnrgExchRv;/* Variable: KeCTCM_P_SpEvaEnrgExchRv
                                          * Referenced by: '<S20>/ConstantRv117'
                                          */
extern real32_T KeCTCM_P_SpInConEnrgChngRv;/* Variable: KeCTCM_P_SpInConEnrgChngRv
                                            * Referenced by: '<S20>/ConstantRv109'
                                            */
extern real32_T KeCTCM_T_AmbCmpCoeffRv;/* Variable: KeCTCM_T_AmbCmpCoeffRv
                                        * Referenced by: '<S20>/ConstantRv19'
                                        */
extern real32_T KeCTCM_T_AmbColdStartActv;/* Variable: KeCTCM_T_AmbColdStartActv
                                           * Referenced by: '<S19>/Constant6'
                                           * ������ʹ���¶�
                                           */
extern real32_T KeCTCM_T_AmbColdStartInActv;/* Variable: KeCTCM_T_AmbColdStartInActv
                                             * Referenced by: '<S19>/Constant2'
                                             * CTCM��������ֵ�¶�
                                             */
extern real32_T KeCTCM_T_AmbHotStartActv;/* Variable: KeCTCM_T_AmbHotStartActv
                                          * Referenced by: '<S19>/Constant4'
                                          * ������ʹ���¶�
                                          */
extern real32_T KeCTCM_T_AmbHotStartInActv;/* Variable: KeCTCM_T_AmbHotStartInActv
                                            * Referenced by: '<S19>/Constant'
                                            * CTCM��������ֵ�¶�
                                            */
extern real32_T KeCTCM_T_DtFdRv;       /* Variable: KeCTCM_T_DtFdRv
                                        * Referenced by: '<S20>/ConstantRv95'
                                        */
extern real32_T KeCTCM_T_DtFpRv;       /* Variable: KeCTCM_T_DtFpRv
                                        * Referenced by: '<S20>/ConstantRv97'
                                        */
extern real32_T KeCTCM_T_DtSdRv;       /* Variable: KeCTCM_T_DtSdRv
                                        * Referenced by: '<S20>/ConstantRv99'
                                        */
extern real32_T KeCTCM_T_DtSpRv;       /* Variable: KeCTCM_T_DtSpRv
                                        * Referenced by: '<S20>/ConstantRv101'
                                        */
extern real32_T KeCTCM_T_ECOTcsOffsetRv;/* Variable: KeCTCM_T_ECOTcsOffsetRv
                                         * Referenced by: '<S20>/ConstantRv24'
                                         */
extern real32_T KeCTCM_T_ECOTcsOffset_D[11];/* Variable: KeCTCM_T_ECOTcsOffset_D
                                             * Referenced by: '<S993>/1-D Lookup Table'
                                             * ECO״̬��Ŀ��ͷ��ƫ��ֵ���
                                             */
extern real32_T KeCTCM_T_ECOTcsOffset_X[11];/* Variable: KeCTCM_T_ECOTcsOffset_X
                                             * Referenced by: '<S993>/1-D Lookup Table'
                                             * VeTSAP_T_AmbTemp ��������
                                             */
extern real32_T KeCTCM_T_EvaDefFlwTempRv;/* Variable: KeCTCM_T_EvaDefFlwTempRv
                                          * Referenced by: '<S20>/ConstantRv112'
                                          */
extern real32_T KeCTCM_T_EvaOutFlwTempRv;/* Variable: KeCTCM_T_EvaOutFlwTempRv
                                          * Referenced by: '<S20>/ConstantRv113'
                                          */
extern real32_T KeCTCM_T_FLowestTarFlwTempRv;/* Variable: KeCTCM_T_FLowestTarFlwTempRv
                                              * Referenced by: '<S20>/ConstantRv130'
                                              */
extern real32_T KeCTCM_T_FaceFlowHotStartDeg;/* Variable: KeCTCM_T_FaceFlowHotStartDeg
                                              * Referenced by: '<S19>/Constant5'
                                              * ���ȷ紵�������¶�����
                                              */
extern real32_T KeCTCM_T_FaceFlowHotStartInDeg;
                                     /* Variable: KeCTCM_T_FaceFlowHotStartInDeg
                                      * Referenced by: '<S19>/Constant1'
                                      * �������������¶���ֵ
                                      */
extern real32_T KeCTCM_T_FdFlwTarTempRv;/* Variable: KeCTCM_T_FdFlwTarTempRv
                                         * Referenced by: '<S20>/ConstantRv91'
                                         */
extern real32_T KeCTCM_T_FdHexTarFlwTempRv;/* Variable: KeCTCM_T_FdHexTarFlwTempRv
                                            * Referenced by: '<S20>/ConstantRv136'
                                            */
extern real32_T KeCTCM_T_FdTarRecTCtrlRv;/* Variable: KeCTCM_T_FdTarRecTCtrlRv
                                          * Referenced by: '<S20>/ConstantRv103'
                                          */
extern real32_T KeCTCM_T_FdTcsUserOffsetRv;/* Variable: KeCTCM_T_FdTcsUserOffsetRv
                                            * Referenced by: '<S20>/ConstantRv33'
                                            */
extern real32_T KeCTCM_T_FootFlowColdDeg;/* Variable: KeCTCM_T_FootFlowColdDeg
                                          * Referenced by: '<S19>/Constant7'
                                          * ����紵�ų�����¶�����
                                          */
extern real32_T KeCTCM_T_FootFlowColdInDeg;/* Variable: KeCTCM_T_FootFlowColdInDeg
                                            * Referenced by: '<S19>/Constant3'
                                            * ���ŷ���������¶���ֵ
                                            */
extern real32_T KeCTCM_T_FpFlwTarTempRv;/* Variable: KeCTCM_T_FpFlwTarTempRv
                                         * Referenced by: '<S20>/ConstantRv92'
                                         */
extern real32_T KeCTCM_T_FpHexTarFlwTempRv;/* Variable: KeCTCM_T_FpHexTarFlwTempRv
                                            * Referenced by: '<S20>/ConstantRv137'
                                            */
extern real32_T KeCTCM_T_FpTarRecTCtrlRv;/* Variable: KeCTCM_T_FpTarRecTCtrlRv
                                          * Referenced by: '<S20>/ConstantRv104'
                                          */
extern real32_T KeCTCM_T_FpTcsUserOffsetRv;/* Variable: KeCTCM_T_FpTcsUserOffsetRv
                                            * Referenced by: '<S20>/ConstantRv42'
                                            */
extern real32_T KeCTCM_T_FrntDrvFlowTempOfsRv;
                                      /* Variable: KeCTCM_T_FrntDrvFlowTempOfsRv
                                       * Referenced by: '<S20>/ConstantRv96'
                                       */
extern real32_T KeCTCM_T_FrntDrvFlowTempOfs_D[11];
                                      /* Variable: KeCTCM_T_FrntDrvFlowTempOfs_D
                                       * Referenced by: '<S19>/1-D Lookup Table'
                                       * ǰ��������̬ͷ����Ŀ��ͷ�µĲ�ֵƫ��ֵ���
                                       */
extern real32_T KeCTCM_T_FrntDrvFlowTempOfs_X[11];
                                      /* Variable: KeCTCM_T_FrntDrvFlowTempOfs_X
                                       * Referenced by: '<S19>/1-D Lookup Table'
                                       * VeCTCM_T_DtFdǰ��������̬ͷ����Ŀ��ͷ�µĲ�ֵ
                                       */
extern real32_T KeCTCM_T_FrntEvaNormFlwTempOffset;
                                  /* Variable: KeCTCM_T_FrntEvaNormFlwTempOffset
                                   * Referenced by: '<S1159>/Constant13'
                                   */
extern real32_T KeCTCM_T_FrntEvaNormFlwTempRv;
                                      /* Variable: KeCTCM_T_FrntEvaNormFlwTempRv
                                       * Referenced by: '<S20>/ConstantRv132'
                                       */
extern real32_T KeCTCM_T_FrntEvaTarTempRv;/* Variable: KeCTCM_T_FrntEvaTarTempRv
                                           * Referenced by: '<S20>/ConstantRv133'
                                           */
extern real32_T KeCTCM_T_FrntHexTarTempRv;/* Variable: KeCTCM_T_FrntHexTarTempRv
                                           * Referenced by: '<S20>/ConstantRv141'
                                           */
extern real32_T KeCTCM_T_FrntPassFlowTempOfsRv;
                                     /* Variable: KeCTCM_T_FrntPassFlowTempOfsRv
                                      * Referenced by: '<S20>/ConstantRv98'
                                      */
extern real32_T KeCTCM_T_FrntPassFlowTempOfs_D[11];
                                     /* Variable: KeCTCM_T_FrntPassFlowTempOfs_D
                                      * Referenced by: '<S19>/1-D Lookup Table1'
                                      * ǰ�Ÿ�����̬ͷ����Ŀ��ͷ�µĲ�ֵƫ��ֵ���
                                      */
extern real32_T KeCTCM_T_FrntPassFlowTempOfs_X[11];
                                     /* Variable: KeCTCM_T_FrntPassFlowTempOfs_X
                                      * Referenced by: '<S19>/1-D Lookup Table1'
                                      * VeCTCM_T_DtFpǰ�Ÿ�����̬ͷ����Ŀ��ͷ�µĲ�ֵ
                                      */
extern real32_T KeCTCM_T_HeatUpRecOffs_D[9];/* Variable: KeCTCM_T_HeatUpRecOffs_D
                                             * Referenced by: '<S19>/1-D Lookup Table4'
                                             * VeTSAP_T_AmbTemp ��������
                                             */
extern real32_T KeCTCM_T_RLowestTarFlwTempRv;/* Variable: KeCTCM_T_RLowestTarFlwTempRv
                                              * Referenced by: '<S20>/ConstantRv131'
                                              */
extern real32_T KeCTCM_T_RearEvaNormFlwTempRv;
                                      /* Variable: KeCTCM_T_RearEvaNormFlwTempRv
                                       * Referenced by: '<S20>/ConstantRv134'
                                       */
extern real32_T KeCTCM_T_RearEvaTarTempRv;/* Variable: KeCTCM_T_RearEvaTarTempRv
                                           * Referenced by: '<S20>/ConstantRv135'
                                           */
extern real32_T KeCTCM_T_RearHexTarTempRv;/* Variable: KeCTCM_T_RearHexTarTempRv
                                           * Referenced by: '<S20>/ConstantRv140'
                                           */
extern real32_T KeCTCM_T_RecTOffsRv;   /* Variable: KeCTCM_T_RecTOffsRv
                                        * Referenced by: '<S20>/ConstantRv129'
                                        */
extern real32_T KeCTCM_T_SdFlwTarTempRv;/* Variable: KeCTCM_T_SdFlwTarTempRv
                                         * Referenced by: '<S20>/ConstantRv93'
                                         */
extern real32_T KeCTCM_T_SdHexTarFlwTempRv;/* Variable: KeCTCM_T_SdHexTarFlwTempRv
                                            * Referenced by: '<S20>/ConstantRv138'
                                            */
extern real32_T KeCTCM_T_SdTcsUserOffsetRv;/* Variable: KeCTCM_T_SdTcsUserOffsetRv
                                            * Referenced by: '<S20>/ConstantRv51'
                                            */
extern real32_T KeCTCM_T_SecDrvFlowTempOfsRv;/* Variable: KeCTCM_T_SecDrvFlowTempOfsRv
                                              * Referenced by: '<S20>/ConstantRv100'
                                              */
extern real32_T KeCTCM_T_SecDrvFlowTempOfs_D[11];/* Variable: KeCTCM_T_SecDrvFlowTempOfs_D
                                                  * Referenced by: '<S19>/1-D Lookup Table2'
                                                  * ����������̬ͷ����Ŀ��ͷ�µĲ�ֵƫ��ֵ���
                                                  */
extern real32_T KeCTCM_T_SecDrvFlowTempOfs_X[11];/* Variable: KeCTCM_T_SecDrvFlowTempOfs_X
                                                  * Referenced by: '<S19>/1-D Lookup Table2'
                                                  * VeCTCM_T_DtSd����������̬ͷ����Ŀ��ͷ�µĲ�ֵ
                                                  */
extern real32_T KeCTCM_T_SecPassFlowTempOfsRv;
                                      /* Variable: KeCTCM_T_SecPassFlowTempOfsRv
                                       * Referenced by: '<S20>/ConstantRv102'
                                       */
extern real32_T KeCTCM_T_SecPassFlowTempOfs_D[11];
                                      /* Variable: KeCTCM_T_SecPassFlowTempOfs_D
                                       * Referenced by: '<S19>/1-D Lookup Table3'
                                       * ���Ÿ�����̬ͷ����Ŀ��ͷ�µĲ�ֵƫ��ֵ���
                                       */
extern real32_T KeCTCM_T_SecPassFlowTempOfs_X[11];
                                      /* Variable: KeCTCM_T_SecPassFlowTempOfs_X
                                       * Referenced by: '<S19>/1-D Lookup Table3'
                                       * VeCTCM_T_DtSp���Ÿ�����̬ͷ����Ŀ��ͷ�µĲ�ֵ
                                       */
extern real32_T KeCTCM_T_SpFlwTarTempRv;/* Variable: KeCTCM_T_SpFlwTarTempRv
                                         * Referenced by: '<S20>/ConstantRv94'
                                         */
extern real32_T KeCTCM_T_SpHexTarFlwTempRv;/* Variable: KeCTCM_T_SpHexTarFlwTempRv
                                            * Referenced by: '<S20>/ConstantRv139'
                                            */
extern real32_T KeCTCM_T_SpTcsUserOffsetRv;/* Variable: KeCTCM_T_SpTcsUserOffsetRv
                                            * Referenced by: '<S20>/ConstantRv60'
                                            */
extern real32_T KeCTCM_T_SurfIntEff0sunRv;/* Variable: KeCTCM_T_SurfIntEff0sunRv
                                           * Referenced by: '<S20>/ConstantRv22'
                                           */
extern real32_T KeCTCM_T_SurfIntEff0sun_D[121];/* Variable: KeCTCM_T_SurfIntEff0sun_D
                                                * Referenced by: '<S992>/2-D Lookup Table'
                                                * 0����ǿ���³����ڱ���������Ӱ����ֵ
                                                */
extern real32_T KeCTCM_T_SurfIntEff0sun_X[11];/* Variable: KeCTCM_T_SurfIntEff0sun_X
                                               * Referenced by: '<S992>/2-D Lookup Table'
                                               * VePACT_T_SurfIntAvg PACT�����ڱ���ƽ���¶�
                                               */
extern real32_T KeCTCM_T_SurfIntEff0sun_Y[11];/* Variable: KeCTCM_T_SurfIntEff0sun_Y
                                               * Referenced by: '<S992>/2-D Lookup Table'
                                               * VeTSAP_T_AmbTemp ��������
                                               */
extern real32_T KeCTCM_T_SurfIntEff100sunRv;/* Variable: KeCTCM_T_SurfIntEff100sunRv
                                             * Referenced by: '<S20>/ConstantRv23'
                                             */
extern real32_T KeCTCM_T_SurfIntEff100sun_D[121];/* Variable: KeCTCM_T_SurfIntEff100sun_D
                                                  * Referenced by: '<S992>/2-D Lookup Table1'
                                                  * 100����ǿ���³����ڱ���������Ӱ����ֵ
                                                  */
extern real32_T KeCTCM_T_SurfIntEff100sun_X[11];/* Variable: KeCTCM_T_SurfIntEff100sun_X
                                                 * Referenced by: '<S992>/2-D Lookup Table1'
                                                 * VePACT_T_SurfIntAvg PACT�����ڱ���ƽ���¶�
                                                 */
extern real32_T KeCTCM_T_SurfIntEff100sun_Y[11];/* Variable: KeCTCM_T_SurfIntEff100sun_Y
                                                 * Referenced by: '<S992>/2-D Lookup Table1'
                                                 * VeTSAP_T_AmbTemp ��������
                                                 */
extern real32_T KeCTCM_T_SurfIntEffFdRv;/* Variable: KeCTCM_T_SurfIntEffFdRv
                                         * Referenced by: '<S20>/ConstantRv30'
                                         */
extern real32_T KeCTCM_T_SurfIntEffFpRv;/* Variable: KeCTCM_T_SurfIntEffFpRv
                                         * Referenced by: '<S20>/ConstantRv39'
                                         */
extern real32_T KeCTCM_T_SurfIntEffSdRv;/* Variable: KeCTCM_T_SurfIntEffSdRv
                                         * Referenced by: '<S20>/ConstantRv48'
                                         */
extern real32_T KeCTCM_T_SurfIntEffSpRv;/* Variable: KeCTCM_T_SurfIntEffSpRv
                                         * Referenced by: '<S20>/ConstantRv57'
                                         */
extern real32_T KeCTCM_T_TarRecTCrtlRv;/* Variable: KeCTCM_T_TarRecTCrtlRv
                                        * Referenced by: '<S20>/ConstantRv105'
                                        */
extern real32_T KeCTCM_T_TazOfstbySurfFd_D[180];/* Variable: KeCTCM_T_TazOfstbySurfFd_D
                                                 * Referenced by: '<S997>/2-D Lookup Table'
                                                 * ǰ�����ݳ��ڱ����¶�ƫ��ֵ���
                                                 */
extern real32_T KeCTCM_T_TazOfstbySurfFd_X[12];/* Variable: KeCTCM_T_TazOfstbySurfFd_X
                                                * Referenced by: '<S997>/2-D Lookup Table'
                                                * VeTSAP_T_AmbTemp ��������
                                                */
extern real32_T KeCTCM_T_TazOfstbySurfFd_Y[15];/* Variable: KeCTCM_T_TazOfstbySurfFd_Y
                                                * Referenced by: '<S997>/2-D Lookup Table'
                                                * VeCTCM_T_dTsurfFd ǰ�����ݳ��ڱ����¶�ƫ��
                                                */
extern real32_T KeCTCM_T_TazOfstbySurfFp_D[180];/* Variable: KeCTCM_T_TazOfstbySurfFp_D
                                                 * Referenced by: '<S998>/2-D Lookup Table'
                                                 * ǰ�Ÿ��ݳ��ڱ����¶�ƫ��ֵ���
                                                 */
extern real32_T KeCTCM_T_TazOfstbySurfFp_X[12];/* Variable: KeCTCM_T_TazOfstbySurfFp_X
                                                * Referenced by: '<S998>/2-D Lookup Table'
                                                * VeTSAP_T_AmbTemp ��������
                                                */
extern real32_T KeCTCM_T_TazOfstbySurfFp_Y[15];/* Variable: KeCTCM_T_TazOfstbySurfFp_Y
                                                * Referenced by: '<S998>/2-D Lookup Table'
                                                * VeCTCM_T_dTsurfFp ǰ�Ÿ��ݳ��ڱ����¶�ƫ��
                                                */
extern real32_T KeCTCM_T_TazOfstbySurfSd_D[180];/* Variable: KeCTCM_T_TazOfstbySurfSd_D
                                                 * Referenced by: '<S999>/2-D Lookup Table'
                                                 * �������ݳ��ڱ����¶�ƫ��ֵ���
                                                 */
extern real32_T KeCTCM_T_TazOfstbySurfSd_X[12];/* Variable: KeCTCM_T_TazOfstbySurfSd_X
                                                * Referenced by: '<S999>/2-D Lookup Table'
                                                * VeTSAP_T_AmbTemp ��������
                                                */
extern real32_T KeCTCM_T_TazOfstbySurfSd_Y[15];/* Variable: KeCTCM_T_TazOfstbySurfSd_Y
                                                * Referenced by: '<S999>/2-D Lookup Table'
                                                * VeCTCM_T_dTsurfSd �������ݳ��ڱ����¶�ƫ��
                                                */
extern real32_T KeCTCM_T_TazOfstbySurfSp_D[180];/* Variable: KeCTCM_T_TazOfstbySurfSp_D
                                                 * Referenced by: '<S1000>/2-D Lookup Table'
                                                 * ���Ÿ��ݳ��ڱ����¶�ƫ��ֵ���
                                                 */
extern real32_T KeCTCM_T_TazOfstbySurfSp_X[12];/* Variable: KeCTCM_T_TazOfstbySurfSp_X
                                                * Referenced by: '<S1000>/2-D Lookup Table'
                                                * VeTSAP_T_AmbTemp ��������
                                                */
extern real32_T KeCTCM_T_TazOfstbySurfSp_Y[15];/* Variable: KeCTCM_T_TazOfstbySurfSp_Y
                                                * Referenced by: '<S1000>/2-D Lookup Table'
                                                * VeCTCM_T_dTsurfSp ���Ÿ��ݳ��ڱ����¶�ƫ��
                                                */
extern real32_T KeCTCM_T_Tcs0SunFdRv;  /* Variable: KeCTCM_T_Tcs0SunFdRv
                                        * Referenced by: '<S20>/ConstantRv26'
                                        */
extern real32_T KeCTCM_T_Tcs0SunFd_D[11];/* Variable: KeCTCM_T_Tcs0SunFd_D
                                          * Referenced by: '<S997>/1-D Lookup Table'
                                          * 0����ǿ����ǰ������������׼Ŀ��ͷ��
                                          */
extern real32_T KeCTCM_T_Tcs0SunFd_X[11];/* Variable: KeCTCM_T_Tcs0SunFd_X
                                          * Referenced by: '<S997>/1-D Lookup Table'
                                          * VeTSAP_T_AmbTemp ��������
                                          */
extern real32_T KeCTCM_T_Tcs0SunFpRv;  /* Variable: KeCTCM_T_Tcs0SunFpRv
                                        * Referenced by: '<S20>/ConstantRv35'
                                        */
extern real32_T KeCTCM_T_Tcs0SunFp_D[11];/* Variable: KeCTCM_T_Tcs0SunFp_D
                                          * Referenced by: '<S998>/1-D Lookup Table'
                                          * 0����ǿ����ǰ�Ÿ���������׼Ŀ��ͷ��
                                          */
extern real32_T KeCTCM_T_Tcs0SunFp_X[11];/* Variable: KeCTCM_T_Tcs0SunFp_X
                                          * Referenced by: '<S998>/1-D Lookup Table'
                                          * VeTSAP_T_AmbTemp ��������
                                          */
extern real32_T KeCTCM_T_Tcs0SunSdRv;  /* Variable: KeCTCM_T_Tcs0SunSdRv
                                        * Referenced by: '<S20>/ConstantRv44'
                                        */
extern real32_T KeCTCM_T_Tcs0SunSd_D[11];/* Variable: KeCTCM_T_Tcs0SunSd_D
                                          * Referenced by: '<S999>/1-D Lookup Table'
                                          * 0����ǿ���¶�������������׼Ŀ��ͷ��
                                          */
extern real32_T KeCTCM_T_Tcs0SunSd_X[11];/* Variable: KeCTCM_T_Tcs0SunSd_X
                                          * Referenced by: '<S999>/1-D Lookup Table'
                                          * VeTSAP_T_AmbTemp ��������
                                          */
extern real32_T KeCTCM_T_Tcs0SunSpRv;  /* Variable: KeCTCM_T_Tcs0SunSpRv
                                        * Referenced by: '<S20>/ConstantRv53'
                                        */
extern real32_T KeCTCM_T_Tcs0SunSp_D[11];/* Variable: KeCTCM_T_Tcs0SunSp_D
                                          * Referenced by: '<S1000>/1-D Lookup Table'
                                          * 0����ǿ���¶��Ÿ���������׼Ŀ��ͷ��
                                          */
extern real32_T KeCTCM_T_Tcs0SunSp_X[11];/* Variable: KeCTCM_T_Tcs0SunSp_X
                                          * Referenced by: '<S1000>/1-D Lookup Table'
                                          * VeTSAP_T_AmbTemp ��������
                                          */
extern real32_T KeCTCM_T_Tcs100SunFdRv;/* Variable: KeCTCM_T_Tcs100SunFdRv
                                        * Referenced by: '<S20>/ConstantRv27'
                                        */
extern real32_T KeCTCM_T_Tcs100SunFd_D[11];/* Variable: KeCTCM_T_Tcs100SunFd_D
                                            * Referenced by: '<S997>/1-D Lookup Table1'
                                            * 1000����ǿ����ǰ������������׼Ŀ��ͷ��
                                            */
extern real32_T KeCTCM_T_Tcs100SunFd_X[11];/* Variable: KeCTCM_T_Tcs100SunFd_X
                                            * Referenced by: '<S997>/1-D Lookup Table1'
                                            * VeTSAP_T_AmbTemp ��������
                                            */
extern real32_T KeCTCM_T_Tcs100SunFpRv;/* Variable: KeCTCM_T_Tcs100SunFpRv
                                        * Referenced by: '<S20>/ConstantRv36'
                                        */
extern real32_T KeCTCM_T_Tcs100SunFp_D[11];/* Variable: KeCTCM_T_Tcs100SunFp_D
                                            * Referenced by: '<S998>/1-D Lookup Table1'
                                            * 1000����ǿ����ǰ�Ÿ���������׼Ŀ��ͷ��
                                            */
extern real32_T KeCTCM_T_Tcs100SunFp_X[11];/* Variable: KeCTCM_T_Tcs100SunFp_X
                                            * Referenced by: '<S998>/1-D Lookup Table1'
                                            * VeTSAP_T_AmbTemp ��������
                                            */
extern real32_T KeCTCM_T_Tcs100SunSdRv;/* Variable: KeCTCM_T_Tcs100SunSdRv
                                        * Referenced by: '<S20>/ConstantRv45'
                                        */
extern real32_T KeCTCM_T_Tcs100SunSd_D[11];/* Variable: KeCTCM_T_Tcs100SunSd_D
                                            * Referenced by: '<S999>/1-D Lookup Table1'
                                            * 1000����ǿ���¶�������������׼Ŀ��ͷ��
                                            */
extern real32_T KeCTCM_T_Tcs100SunSd_X[11];/* Variable: KeCTCM_T_Tcs100SunSd_X
                                            * Referenced by: '<S999>/1-D Lookup Table1'
                                            * VeTSAP_T_AmbTemp ��������
                                            */
extern real32_T KeCTCM_T_Tcs100SunSpRv;/* Variable: KeCTCM_T_Tcs100SunSpRv
                                        * Referenced by: '<S20>/ConstantRv54'
                                        */
extern real32_T KeCTCM_T_Tcs100SunSp_D[11];/* Variable: KeCTCM_T_Tcs100SunSp_D
                                            * Referenced by: '<S1000>/1-D Lookup Table1'
                                            * 1000����ǿ���¶��Ÿ���������׼Ŀ��ͷ��
                                            */
extern real32_T KeCTCM_T_Tcs100SunSp_X[11];/* Variable: KeCTCM_T_Tcs100SunSp_X
                                            * Referenced by: '<S1000>/1-D Lookup Table1'
                                            * VeTSAP_T_AmbTemp ��������
                                            */
extern real32_T KeCTCM_T_TcsFdRv;      /* Variable: KeCTCM_T_TcsFdRv
                                        * Referenced by: '<S20>/ConstantRv34'
                                        */
extern real32_T KeCTCM_T_TcsFpRv;      /* Variable: KeCTCM_T_TcsFpRv
                                        * Referenced by: '<S20>/ConstantRv43'
                                        */
extern real32_T KeCTCM_T_TcsSdRv;      /* Variable: KeCTCM_T_TcsSdRv
                                        * Referenced by: '<S20>/ConstantRv52'
                                        */
extern real32_T KeCTCM_T_TcsSpRv;      /* Variable: KeCTCM_T_TcsSpRv
                                        * Referenced by: '<S20>/ConstantRv61'
                                        */
extern real32_T KeCTCM_T_TcsStdFdRv;   /* Variable: KeCTCM_T_TcsStdFdRv
                                        * Referenced by: '<S20>/ConstantRv28'
                                        */
extern real32_T KeCTCM_T_TcsStdFpRv;   /* Variable: KeCTCM_T_TcsStdFpRv
                                        * Referenced by: '<S20>/ConstantRv37'
                                        */
extern real32_T KeCTCM_T_TcsStdSdRv;   /* Variable: KeCTCM_T_TcsStdSdRv
                                        * Referenced by: '<S20>/ConstantRv46'
                                        */
extern real32_T KeCTCM_T_TcsStdSpRv;   /* Variable: KeCTCM_T_TcsStdSpRv
                                        * Referenced by: '<S20>/ConstantRv55'
                                        */
extern real32_T KeCTCM_T_TcsSurfOfstFdRv;/* Variable: KeCTCM_T_TcsSurfOfstFdRv
                                          * Referenced by: '<S20>/ConstantRv32'
                                          */
extern real32_T KeCTCM_T_TcsSurfOfstFpRv;/* Variable: KeCTCM_T_TcsSurfOfstFpRv
                                          * Referenced by: '<S20>/ConstantRv41'
                                          */
extern real32_T KeCTCM_T_TcsSurfOfstSdRv;/* Variable: KeCTCM_T_TcsSurfOfstSdRv
                                          * Referenced by: '<S20>/ConstantRv50'
                                          */
extern real32_T KeCTCM_T_TcsSurfOfstSpRv;/* Variable: KeCTCM_T_TcsSurfOfstSpRv
                                          * Referenced by: '<S20>/ConstantRv59'
                                          */
extern real32_T KeCTCM_T_TcsUserOffsetFd_D[11];/* Variable: KeCTCM_T_TcsUserOffsetFd_D
                                                * Referenced by: '<S997>/1-D Lookup Table2'
                                                * ǰ�������û��趨�¶�ƫ��ֵ���
                                                */
extern real32_T KeCTCM_T_TcsUserOffsetFd_X[11];/* Variable: KeCTCM_T_TcsUserOffsetFd_X
                                                * Referenced by: '<S997>/1-D Lookup Table2'
                                                * VeHMI_SetTempL HMIǰ�������趨�¶�
                                                */
extern real32_T KeCTCM_T_TcsUserOffsetFp_D[11];/* Variable: KeCTCM_T_TcsUserOffsetFp_D
                                                * Referenced by: '<S998>/1-D Lookup Table2'
                                                * ǰ�Ÿ����û��趨�¶�ƫ��ֵ���
                                                */
extern real32_T KeCTCM_T_TcsUserOffsetFp_X[11];/* Variable: KeCTCM_T_TcsUserOffsetFp_X
                                                * Referenced by: '<S998>/1-D Lookup Table2'
                                                * VeHMI_SetTempR HMIǰ�Ÿ����趨�¶�
                                                */
extern real32_T KeCTCM_T_TcsUserOffsetSd_D[11];/* Variable: KeCTCM_T_TcsUserOffsetSd_D
                                                * Referenced by: '<S999>/1-D Lookup Table2'
                                                * ���������û��趨�¶�ƫ��ֵ���
                                                */
extern real32_T KeCTCM_T_TcsUserOffsetSd_X[11];/* Variable: KeCTCM_T_TcsUserOffsetSd_X
                                                * Referenced by: '<S999>/1-D Lookup Table2'
                                                * VeHMI_SetTempML HMI���������趨�¶�
                                                */
extern real32_T KeCTCM_T_TcsUserOffsetSp_D[11];/* Variable: KeCTCM_T_TcsUserOffsetSp_D
                                                * Referenced by: '<S1000>/1-D Lookup Table2'
                                                * ���Ÿ����û��趨�¶�ƫ��ֵ���
                                                */
extern real32_T KeCTCM_T_TcsUserOffsetSp_X[11];/* Variable: KeCTCM_T_TcsUserOffsetSp_X
                                                * Referenced by: '<S1000>/1-D Lookup Table2'
                                                * VeHMI_SetTempMR HMI���Ÿ����趨�¶�
                                                */
extern real32_T KeCTCM_T_TcslvnFdRv;   /* Variable: KeCTCM_T_TcslvnFdRv
                                        * Referenced by: '<S20>/ConstantRv29'
                                        */
extern real32_T KeCTCM_T_TcslvnFpRv;   /* Variable: KeCTCM_T_TcslvnFpRv
                                        * Referenced by: '<S20>/ConstantRv38'
                                        */
extern real32_T KeCTCM_T_TcslvnSdRv;   /* Variable: KeCTCM_T_TcslvnSdRv
                                        * Referenced by: '<S20>/ConstantRv47'
                                        */
extern real32_T KeCTCM_T_TcslvnSpRv;   /* Variable: KeCTCM_T_TcslvnSpRv
                                        * Referenced by: '<S20>/ConstantRv56'
                                        */
extern real32_T KeCTCM_T_Yn2FdRecT_D[13];/* Variable: KeCTCM_T_Yn2FdRecT_D
                                          * Referenced by: '<S972>/1-D Lookup Table'
                                          * ǰ������Ŀ��ط��¶Ȳ��ֵ
                                          */
extern real32_T KeCTCM_T_Yn2FdRecT_X[13];/* Variable: KeCTCM_T_Yn2FdRecT_X
                                          * Referenced by: '<S972>/1-D Lookup Table'
                                          * VeCTCM_na_FrntDrvYn ǰ�����ݽ��»�����ǿ��Yn
                                          */
extern real32_T KeCTCM_T_Yn2FpRecT_D[13];/* Variable: KeCTCM_T_Yn2FpRecT_D
                                          * Referenced by: '<S973>/1-D Lookup Table'
                                          * ǰ�Ÿ���Ŀ��ط��¶Ȳ��ֵ
                                          */
extern real32_T KeCTCM_T_Yn2FpRecT_X[13];/* Variable: KeCTCM_T_Yn2FpRecT_X
                                          * Referenced by: '<S973>/1-D Lookup Table'
                                          * VeCTCM_na_FrntPassYn ǰ�Ÿ��ݽ��»�����ǿ��Yn
                                          */
extern real32_T KeCTCM_T_dTsurfFdRv;   /* Variable: KeCTCM_T_dTsurfFdRv
                                        * Referenced by: '<S20>/ConstantRv31'
                                        */
extern real32_T KeCTCM_T_dTsurfFpRv;   /* Variable: KeCTCM_T_dTsurfFpRv
                                        * Referenced by: '<S20>/ConstantRv40'
                                        */
extern real32_T KeCTCM_T_dTsurfSdRv;   /* Variable: KeCTCM_T_dTsurfSdRv
                                        * Referenced by: '<S20>/ConstantRv49'
                                        */
extern real32_T KeCTCM_T_dTsurfSpRv;   /* Variable: KeCTCM_T_dTsurfSpRv
                                        * Referenced by: '<S20>/ConstantRv58'
                                        */
extern real32_T KeCTCM_na_AmbCoeffK;   /* Variable: KeCTCM_na_AmbCoeffK
                                        * Referenced by:
                                        *   '<S923>/Constant'
                                        *   '<S923>/Constant4'
                                        * ����һ����Ӧϵ��
                                        */
extern real32_T KeCTCM_na_DefColdStart;/* Variable: KeCTCM_na_DefColdStart
                                        * Referenced by: '<S1024>/Constant'
                                        * ��������˪����λ��
                                        */
extern real32_T KeCTCM_na_DefCtrlTarRv;/* Variable: KeCTCM_na_DefCtrlTarRv
                                        * Referenced by: '<S20>/ConstantRv77'
                                        */
extern real32_T KeCTCM_na_DefHotStart; /* Variable: KeCTCM_na_DefHotStart
                                        * Referenced by: '<S1023>/Constant'
                                        * ��������˪����λ��
                                        */
extern real32_T KeCTCM_na_FdfColdStart;/* Variable: KeCTCM_na_FdfColdStart
                                        * Referenced by: '<S1024>/Constant2'
                                        * ������ǰ�����ݴ��ŷ���λ��
                                        */
extern real32_T KeCTCM_na_FdfCtrlTarRv;/* Variable: KeCTCM_na_FdfCtrlTarRv
                                        * Referenced by: '<S20>/ConstantRv79'
                                        */
extern real32_T KeCTCM_na_FdfHotStart; /* Variable: KeCTCM_na_FdfHotStart
                                        * Referenced by: '<S1023>/Constant2'
                                        * ������ǰ�����ݴ��ŷ���λ��
                                        */
extern real32_T KeCTCM_na_FdvColdStart;/* Variable: KeCTCM_na_FdvColdStart
                                        * Referenced by: '<S1024>/Constant1'
                                        * ������ǰ�����ݴ������λ��
                                        */
extern real32_T KeCTCM_na_FdvCtrlTarRv;/* Variable: KeCTCM_na_FdvCtrlTarRv
                                        * Referenced by: '<S20>/ConstantRv78'
                                        */
extern real32_T KeCTCM_na_FdvHotStart; /* Variable: KeCTCM_na_FdvHotStart
                                        * Referenced by: '<S1023>/Constant1'
                                        * ������ǰ�����ݴ������λ��
                                        */
extern real32_T KeCTCM_na_FpfColdStart;/* Variable: KeCTCM_na_FpfColdStart
                                        * Referenced by: '<S1059>/Constant1'
                                        * ������ǰ�Ÿ��ݴ��ŷ���λ��
                                        */
extern real32_T KeCTCM_na_FpfCtrlTarRv;/* Variable: KeCTCM_na_FpfCtrlTarRv
                                        * Referenced by: '<S20>/ConstantRv81'
                                        */
extern real32_T KeCTCM_na_FpfHotStart; /* Variable: KeCTCM_na_FpfHotStart
                                        * Referenced by: '<S1058>/Constant1'
                                        * ������ǰ�Ÿ��ݴ��ŷ���λ��
                                        */
extern real32_T KeCTCM_na_FpvColdStart;/* Variable: KeCTCM_na_FpvColdStart
                                        * Referenced by: '<S1059>/Constant'
                                        * ������ǰ�Ÿ��ݴ������λ��
                                        */
extern real32_T KeCTCM_na_FpvCtrlTarRv;/* Variable: KeCTCM_na_FpvCtrlTarRv
                                        * Referenced by: '<S20>/ConstantRv80'
                                        */
extern real32_T KeCTCM_na_FpvHotStart; /* Variable: KeCTCM_na_FpvHotStart
                                        * Referenced by: '<S1058>/Constant'
                                        * ������ǰ�Ÿ��ݴ������λ��
                                        */
extern real32_T KeCTCM_na_FrntDrvYnRv; /* Variable: KeCTCM_na_FrntDrvYnRv
                                        * Referenced by: '<S20>/ConstantRv66'
                                        */
extern real32_T KeCTCM_na_FrntIvnCoef; /* Variable: KeCTCM_na_FrntIvnCoef
                                        * Referenced by:
                                        *   '<S997>/Constant1'
                                        *   '<S998>/Constant1'
                                        *   '<S999>/Constant3'
                                        *   '<S1000>/Constant3'
                                        * ǰ�ź������ϵ��
                                        */
extern real32_T KeCTCM_na_FrntPassYnRv;/* Variable: KeCTCM_na_FrntPassYnRv
                                        * Referenced by: '<S20>/ConstantRv67'
                                        */
extern real32_T KeCTCM_na_FrntYnFd_D[15];/* Variable: KeCTCM_na_FrntYnFd_D
                                          * Referenced by: '<S995>/1-D Lookup Table1'
                                          * ǰ�����ݽ��»�����ǿ�Ȳ��
                                          */
extern real32_T KeCTCM_na_FrntYnFd_X[15];/* Variable: KeCTCM_na_FrntYnFd_X
                                          * Referenced by: '<S995>/1-D Lookup Table1'
                                          * VeCTCM_P_FrntDrvHeatDemǰ�����������ȸ���
                                          */
extern real32_T KeCTCM_na_FrntYnFp_D[15];/* Variable: KeCTCM_na_FrntYnFp_D
                                          * Referenced by: '<S995>/1-D Lookup Table2'
                                          * ǰ�Ÿ��ݽ��»�����ǿ�Ȳ��
                                          */
extern real32_T KeCTCM_na_FrntYnFp_X[15];/* Variable: KeCTCM_na_FrntYnFp_X
                                          * Referenced by: '<S995>/1-D Lookup Table2'
                                          * VeCTCM_P_FrntPassHeatDemǰ�Ÿ��������ȸ���
                                          */
extern real32_T KeCTCM_na_SdfColdStart;/* Variable: KeCTCM_na_SdfColdStart
                                        * Referenced by: '<S1087>/Constant1'
                                        * �������������ݴ��ŷ���λ��
                                        */
extern real32_T KeCTCM_na_SdfHotStart; /* Variable: KeCTCM_na_SdfHotStart
                                        * Referenced by: '<S1086>/Constant1'
                                        * �������������ݴ��ŷ���λ��
                                        */
extern real32_T KeCTCM_na_SdvColdStart;/* Variable: KeCTCM_na_SdvColdStart
                                        * Referenced by: '<S1087>/Constant'
                                        * �������������ݴ������λ��
                                        */
extern real32_T KeCTCM_na_SdvCtrlTarRv;/* Variable: KeCTCM_na_SdvCtrlTarRv
                                        * Referenced by: '<S20>/ConstantRv82'
                                        */
extern real32_T KeCTCM_na_SdvHotStart; /* Variable: KeCTCM_na_SdvHotStart
                                        * Referenced by: '<S1086>/Constant'
                                        * �������������ݴ������λ��
                                        */
extern real32_T KeCTCM_na_SecDrvYnRv;  /* Variable: KeCTCM_na_SecDrvYnRv
                                        * Referenced by: '<S20>/ConstantRv68'
                                        */
extern real32_T KeCTCM_na_SecIvnCoef;  /* Variable: KeCTCM_na_SecIvnCoef
                                        * Referenced by:
                                        *   '<S997>/Constant3'
                                        *   '<S998>/Constant3'
                                        *   '<S999>/Constant1'
                                        *   '<S1000>/Constant1'
                                        * ���ź������ϵ��
                                        */
extern real32_T KeCTCM_na_SecPassYnRv; /* Variable: KeCTCM_na_SecPassYnRv
                                        * Referenced by: '<S20>/ConstantRv69'
                                        */
extern real32_T KeCTCM_na_SecYnSd_D[15];/* Variable: KeCTCM_na_SecYnSd_D
                                         * Referenced by: '<S995>/1-D Lookup Table3'
                                         * �������ݽ��»�����ǿ�Ȳ��
                                         */
extern real32_T KeCTCM_na_SecYnSd_X[15];/* Variable: KeCTCM_na_SecYnSd_X
                                         * Referenced by: '<S995>/1-D Lookup Table3'
                                         * VeCTCM_P_SecDrvHeatDem�������������ȸ���
                                         */
extern real32_T KeCTCM_na_SecYnSp_D[15];/* Variable: KeCTCM_na_SecYnSp_D
                                         * Referenced by: '<S995>/1-D Lookup Table4'
                                         * ���Ÿ��ݽ��»�����ǿ�Ȳ��
                                         */
extern real32_T KeCTCM_na_SecYnSp_X[15];/* Variable: KeCTCM_na_SecYnSp_X
                                         * Referenced by: '<S995>/1-D Lookup Table4'
                                         * VeCTCM_P_SecPassHeatDem���Ÿ��������ȸ���
                                         */
extern real32_T KeCTCM_na_SpfColdStart;/* Variable: KeCTCM_na_SpfColdStart
                                        * Referenced by: '<S1114>/Constant1'
                                        * ���������Ÿ��ݴ��ŷ���λ��
                                        */
extern real32_T KeCTCM_na_SpfCtrlTarRv;/* Variable: KeCTCM_na_SpfCtrlTarRv
                                        * Referenced by: '<S20>/ConstantRv85'
                                        */
extern real32_T KeCTCM_na_SpfHotStart; /* Variable: KeCTCM_na_SpfHotStart
                                        * Referenced by: '<S1113>/Constant1'
                                        * ���������Ÿ��ݴ��ŷ���λ��
                                        */
extern real32_T KeCTCM_na_SpvColdStart;/* Variable: KeCTCM_na_SpvColdStart
                                        * Referenced by: '<S1114>/Constant'
                                        * ���������Ÿ��ݴ������λ��
                                        */
extern real32_T KeCTCM_na_SpvCtrlTarRv;/* Variable: KeCTCM_na_SpvCtrlTarRv
                                        * Referenced by: '<S20>/ConstantRv84'
                                        */
extern real32_T KeCTCM_na_SpvHotStart; /* Variable: KeCTCM_na_SpvHotStart
                                        * Referenced by: '<S1113>/Constant'
                                        * ���������Ÿ��ݴ������λ��
                                        */
extern real32_T KeCTCM_na_Yn2DefdFlapACoef_X[15];/* Variable: KeCTCM_na_Yn2DefdFlapACoef_X
                                                  * Referenced by: '<S1038>/2-D Lookup Table'
                                                  * VeCTCM_na_FrntDrvYn ǰ�����ݽ��»�����ǿ��Yn
                                                  */
extern real32_T KeCTCM_na_Yn2DefdFlapACoef_Y[7];/* Variable: KeCTCM_na_Yn2DefdFlapACoef_Y
                                                 * Referenced by: '<S1038>/2-D Lookup Table'
                                                 * VeTSAP_T_SunEftFd ǰ�����ݹ���ǿ��
                                                 */
extern real32_T KeCTCM_na_Yn2DefdFlap_Y[7];/* Variable: KeCTCM_na_Yn2DefdFlap_Y
                                            * Referenced by: '<S1037>/2-D Lookup Table'
                                            * VeTSAP_T_SunEftFd ǰ�����ݹ���ǿ��
                                            */
extern real32_T KeCTCM_na_Yn2DefpFlapACoef_X[15];/* Variable: KeCTCM_na_Yn2DefpFlapACoef_X
                                                  * Referenced by: '<S1038>/2-D Lookup Table1'
                                                  * VeCTCM_na_FrntPassYn ǰ�Ÿ��ݽ��»�����ǿ��Yn
                                                  */
extern real32_T KeCTCM_na_Yn2DefpFlapACoef_Y[7];/* Variable: KeCTCM_na_Yn2DefpFlapACoef_Y
                                                 * Referenced by: '<S1038>/2-D Lookup Table1'
                                                 * VeTSAP_T_SunEftFp ǰ�Ÿ��ݹ���ǿ��
                                                 */
extern real32_T KeCTCM_na_Yn2DefpFlap_X[15];/* Variable: KeCTCM_na_Yn2DefpFlap_X
                                             * Referenced by: '<S1037>/2-D Lookup Table1'
                                             * VeCTCM_na_FrntPassYn ǰ�Ÿ��ݽ��»�����ǿ��Yn
                                             */
extern real32_T KeCTCM_na_Yn2DefpFlap_Y[7];/* Variable: KeCTCM_na_Yn2DefpFlap_Y
                                            * Referenced by: '<S1037>/2-D Lookup Table1'
                                            * VeTSAP_T_SunEftFp ǰ�Ÿ��ݹ���ǿ��
                                            */
extern real32_T KeCTCM_na_Yn2FdfFlapACoef_X[15];/* Variable: KeCTCM_na_Yn2FdfFlapACoef_X
                                                 * Referenced by: '<S1052>/2-D Lookup Table'
                                                 * VeCTCM_na_FrntDrvYn ǰ�����ݽ��»�����ǿ��Yn
                                                 */
extern real32_T KeCTCM_na_Yn2FdfFlapACoef_Y[7];/* Variable: KeCTCM_na_Yn2FdfFlapACoef_Y
                                                * Referenced by: '<S1052>/2-D Lookup Table'
                                                * VeTSAP_T_SunEftFd ǰ�����ݹ���ǿ��
                                                */
extern real32_T KeCTCM_na_Yn2FdfFlap_X[15];/* Variable: KeCTCM_na_Yn2FdfFlap_X
                                            * Referenced by: '<S1051>/2-D Lookup Table'
                                            * VeCTCM_na_FrntDrvYn ǰ�����ݽ��»�����ǿ��Yn
                                            */
extern real32_T KeCTCM_na_Yn2FdfFlap_Y[7];/* Variable: KeCTCM_na_Yn2FdfFlap_Y
                                           * Referenced by: '<S1051>/2-D Lookup Table'
                                           * VeTSAP_T_SunEftFd ǰ�����ݹ���ǿ��
                                           */
extern real32_T KeCTCM_na_Yn2FdvFlapACoef_X[15];/* Variable: KeCTCM_na_Yn2FdvFlapACoef_X
                                                 * Referenced by: '<S1050>/2-D Lookup Table'
                                                 * VeCTCM_na_FrntDrvYn ǰ�����ݽ��»�����ǿ��Yn
                                                 */
extern real32_T KeCTCM_na_Yn2FdvFlapACoef_Y[7];/* Variable: KeCTCM_na_Yn2FdvFlapACoef_Y
                                                * Referenced by: '<S1050>/2-D Lookup Table'
                                                * VeTSAP_T_SunEftFd ǰ�����ݹ���ǿ��
                                                */
extern real32_T KeCTCM_na_Yn2FdvFlap_X[15];/* Variable: KeCTCM_na_Yn2FdvFlap_X
                                            * Referenced by: '<S1053>/2-D Lookup Table'
                                            * VeCTCM_na_FrntDrvYn ǰ�����ݽ��»�����ǿ��Yn
                                            */
extern real32_T KeCTCM_na_Yn2FdvFlap_Y[7];/* Variable: KeCTCM_na_Yn2FdvFlap_Y
                                           * Referenced by: '<S1053>/2-D Lookup Table'
                                           * VeTSAP_T_SunEftFd ǰ�����ݹ���ǿ��
                                           */
extern real32_T KeCTCM_na_Yn2FpfFlapACoef_X[15];/* Variable: KeCTCM_na_Yn2FpfFlapACoef_X
                                                 * Referenced by: '<S1081>/2-D Lookup Table1'
                                                 * VeCTCM_na_FrntPassYn ǰ�Ÿ��ݽ��»�����ǿ��Yn
                                                 */
extern real32_T KeCTCM_na_Yn2FpfFlapACoef_Y[7];/* Variable: KeCTCM_na_Yn2FpfFlapACoef_Y
                                                * Referenced by: '<S1081>/2-D Lookup Table1'
                                                * VeTSAP_T_SunEftFp ǰ�Ÿ��ݹ���ǿ��
                                                */
extern real32_T KeCTCM_na_Yn2FpfFlap_X[15];/* Variable: KeCTCM_na_Yn2FpfFlap_X
                                            * Referenced by: '<S1080>/2-D Lookup Table1'
                                            * VeCTCM_na_FrntPassYn ǰ�Ÿ��ݽ��»�����ǿ��Yn
                                            */
extern real32_T KeCTCM_na_Yn2FpfFlap_Y[7];/* Variable: KeCTCM_na_Yn2FpfFlap_Y
                                           * Referenced by: '<S1080>/2-D Lookup Table1'
                                           * VeTSAP_T_SunEftFp ǰ�Ÿ��ݹ���ǿ��
                                           */
extern real32_T KeCTCM_na_Yn2FpvFlapACoef_X[15];/* Variable: KeCTCM_na_Yn2FpvFlapACoef_X
                                                 * Referenced by: '<S1078>/2-D Lookup Table1'
                                                 * VeCTCM_na_FrntPassYn ǰ�Ÿ��ݽ��»�����ǿ��Yn
                                                 */
extern real32_T KeCTCM_na_Yn2FpvFlapACoef_Y[7];/* Variable: KeCTCM_na_Yn2FpvFlapACoef_Y
                                                * Referenced by: '<S1078>/2-D Lookup Table1'
                                                * VeTSAP_T_SunEftFp ǰ�Ÿ��ݹ���ǿ��
                                                */
extern real32_T KeCTCM_na_Yn2FpvFlap_D[105];/* Variable: KeCTCM_na_Yn2FpvFlap_D
                                             * Referenced by: '<S1079>/2-D Lookup Table2'
                                             * AC ON״̬�µ�ǰ�Ÿ��ݴ�ͷ���ŵ�λ������ֵ���
                                             */
extern real32_T KeCTCM_na_Yn2FpvFlap_X[15];/* Variable: KeCTCM_na_Yn2FpvFlap_X
                                            * Referenced by: '<S1079>/2-D Lookup Table2'
                                            * VeCTCM_na_FrntPassYn ǰ�Ÿ��ݽ��»�����ǿ��Yn
                                            */
extern real32_T KeCTCM_na_Yn2FpvFlap_Y[7];/* Variable: KeCTCM_na_Yn2FpvFlap_Y
                                           * Referenced by: '<S1079>/2-D Lookup Table2'
                                           * VeTSAP_T_SunEftFp ǰ�Ÿ��ݹ���ǿ��
                                           */
extern real32_T KeCTCM_na_Yn2SdfFlapACoef_X[15];/* Variable: KeCTCM_na_Yn2SdfFlapACoef_X
                                                 * Referenced by: '<S1108>/2-D Lookup Table1'
                                                 * VeCTCM_na_SecDrvYn �������ݽ��»�����ǿ��Yn
                                                 */
extern real32_T KeCTCM_na_Yn2SdfFlapACoef_Y[7];/* Variable: KeCTCM_na_Yn2SdfFlapACoef_Y
                                                * Referenced by: '<S1108>/2-D Lookup Table1'
                                                * VeTSAP_T_SunEftSd �������ݹ���ǿ��
                                                */
extern real32_T KeCTCM_na_Yn2SdfFlap_X[15];/* Variable: KeCTCM_na_Yn2SdfFlap_X
                                            * Referenced by: '<S1107>/2-D Lookup Table1'
                                            * VeCTCM_na_SecDrvYn �������ݽ��»�����ǿ��Yn
                                            */
extern real32_T KeCTCM_na_Yn2SdfFlap_Y[7];/* Variable: KeCTCM_na_Yn2SdfFlap_Y
                                           * Referenced by: '<S1107>/2-D Lookup Table1'
                                           * VeTSAP_T_SunEftSd �������ݹ���ǿ��
                                           */
extern real32_T KeCTCM_na_Yn2SdvFlapACoef_X[15];/* Variable: KeCTCM_na_Yn2SdvFlapACoef_X
                                                 * Referenced by: '<S1106>/2-D Lookup Table1'
                                                 * VeCTCM_na_SecDrvYn �������ݽ��»�����ǿ��Yn
                                                 */
extern real32_T KeCTCM_na_Yn2SdvFlapACoef_Y[7];/* Variable: KeCTCM_na_Yn2SdvFlapACoef_Y
                                                * Referenced by: '<S1106>/2-D Lookup Table1'
                                                * VeTSAP_T_SunEftSd �������ݹ���ǿ��
                                                */
extern real32_T KeCTCM_na_Yn2SdvFlap_X[15];/* Variable: KeCTCM_na_Yn2SdvFlap_X
                                            * Referenced by: '<S1105>/2-D Lookup Table1'
                                            * VeCTCM_na_SecDrvYn �������ݽ��»�����ǿ��Yn
                                            */
extern real32_T KeCTCM_na_Yn2SdvFlap_Y[7];/* Variable: KeCTCM_na_Yn2SdvFlap_Y
                                           * Referenced by: '<S1105>/2-D Lookup Table1'
                                           * VeTSAP_T_SunEftSd �������ݹ���ǿ��
                                           */
extern real32_T KeCTCM_na_Yn2SpfFlapACoef_X[15];/* Variable: KeCTCM_na_Yn2SpfFlapACoef_X
                                                 * Referenced by: '<S1134>/2-D Lookup Table1'
                                                 * VeCTCM_na_SecPassYn ���Ÿ��ݽ��»�����ǿ��Yn
                                                 */
extern real32_T KeCTCM_na_Yn2SpfFlapACoef_Y[7];/* Variable: KeCTCM_na_Yn2SpfFlapACoef_Y
                                                * Referenced by: '<S1134>/2-D Lookup Table1'
                                                * VeTSAP_T_SunEftSp ���Ÿ��ݹ���ǿ��
                                                */
extern real32_T KeCTCM_na_Yn2SpfFlap_X[15];/* Variable: KeCTCM_na_Yn2SpfFlap_X
                                            * Referenced by: '<S1133>/2-D Lookup Table1'
                                            * VeCTCM_na_SecPassYn ���Ÿ��ݽ��»�����ǿ��Yn
                                            */
extern real32_T KeCTCM_na_Yn2SpfFlap_Y[7];/* Variable: KeCTCM_na_Yn2SpfFlap_Y
                                           * Referenced by: '<S1133>/2-D Lookup Table1'
                                           * VeTSAP_T_SunEftSp ���Ÿ��ݹ���ǿ��
                                           */
extern real32_T KeCTCM_na_Yn2SpvFlapACoef_X[15];/* Variable: KeCTCM_na_Yn2SpvFlapACoef_X
                                                 * Referenced by: '<S1136>/2-D Lookup Table1'
                                                 * VeCTCM_na_SecPassYn ���Ÿ��ݽ��»�����ǿ��Yn
                                                 */
extern real32_T KeCTCM_na_Yn2SpvFlapACoef_Y[7];/* Variable: KeCTCM_na_Yn2SpvFlapACoef_Y
                                                * Referenced by: '<S1136>/2-D Lookup Table1'
                                                * VeTSAP_T_SunEftSp ���Ÿ��ݹ���ǿ��
                                                */
extern real32_T KeCTCM_na_Yn2SpvFlap_X[15];/* Variable: KeCTCM_na_Yn2SpvFlap_X
                                            * Referenced by: '<S1135>/2-D Lookup Table1'
                                            * VeCTCM_na_SecPassYn ���Ÿ��ݽ��»�����ǿ��Yn
                                            */
extern real32_T KeCTCM_na_Yn2SpvFlap_Y[7];/* Variable: KeCTCM_na_Yn2SpvFlap_Y
                                           * Referenced by: '<S1135>/2-D Lookup Table1'
                                           * VeTSAP_T_SunEftSp ���Ÿ��ݹ���ǿ��
                                           */
extern real32_T KeCTCM_pct_TcsUserOffsetSclgRv;
                                     /* Variable: KeCTCM_pct_TcsUserOffsetSclgRv
                                      * Referenced by: '<S20>/ConstantRv25'
                                      */
extern real32_T KeCTCM_pct_TcsUserOffsetSclg_D[5];
                                     /* Variable: KeCTCM_pct_TcsUserOffsetSclg_D
                                      * Referenced by: '<S993>/1-D Lookup Table1'
                                      * ��ǰ�����µ��û��趨�¶ȶ�Ŀ��ͷ��Ӱ��ռ�Ȳ��
                                      */
extern real32_T KeCTCM_pct_TcsUserOffsetSclg_X[5];
                                     /* Variable: KeCTCM_pct_TcsUserOffsetSclg_X
                                      * Referenced by: '<S993>/1-D Lookup Table1'
                                      * VeTSAP_T_AmbTemp ��������
                                      */
extern real32_T KeCTCM_v_FbFlowCtrlTarRv;/* Variable: KeCTCM_v_FbFlowCtrlTarRv
                                          * Referenced by: '<S20>/ConstantRv118'
                                          */
extern real32_T KeCTCM_v_FbFlowWghCtrlTarRv;/* Variable: KeCTCM_v_FbFlowWghCtrlTarRv
                                             * Referenced by: '<S20>/ConstantRv90'
                                             */
extern real32_T KeCTCM_v_OffsetFbFlowCtrlTar;/* Variable: KeCTCM_v_OffsetFbFlowCtrlTar
                                              * Referenced by: '<S1>/Constant21'
                                              */
extern real32_T KeCTCM_v_SecbFlowCtrlTarRv;/* Variable: KeCTCM_v_SecbFlowCtrlTarRv
                                            * Referenced by: '<S20>/ConstantRv142'
                                            */
extern real32_T KeDriverAirDrictionFbRv;/* Variable: KeDriverAirDrictionFbRv
                                         * Referenced by: '<S6>/ConstantRv58'
                                         */
extern real32_T KeDriverTempFlapFbRv;  /* Variable: KeDriverTempFlapFbRv
                                        * Referenced by: '<S6>/ConstantRv55'
                                        */
extern real32_T KeFWDS_T_DewPntTempRv; /* Variable: KeFWDS_T_DewPntTempRv
                                        * Referenced by: '<S22>/ConstantRv111'
                                        */
extern real32_T KeFWDS_T_EvaDegTarRv;  /* Variable: KeFWDS_T_EvaDegTarRv
                                        * Referenced by: '<S22>/ConstantRv115'
                                        */
extern real32_T KeFWDS_na_RiskValueRv; /* Variable: KeFWDS_na_RiskValueRv
                                        * Referenced by: '<S22>/ConstantRv116'
                                        */
extern real32_T KeFWDS_pct_DefRioRv;   /* Variable: KeFWDS_pct_DefRioRv
                                        * Referenced by: '<S22>/ConstantRv113'
                                        */
extern real32_T KeFWDS_pct_RecRioRv;   /* Variable: KeFWDS_pct_RecRioRv
                                        * Referenced by: '<S22>/ConstantRv112'
                                        */
extern real32_T KeNVMM_U_DcRangeSaveEepRv;/* Variable: KeNVMM_U_DcRangeSaveEepRv
                                           * Referenced by: '<S3>/ConstantRv326'
                                           */
extern real32_T KePCAT_P_htflwperpasge;/* Variable: KePCAT_P_htflwperpasge
                                        * Referenced by:
                                        *   '<S1235>/Constant'
                                        *   '<S1236>/Constant'
                                        *   '<S1237>/Constant'
                                        *   '<S1238>/Constant'
                                        * �˿��Ⱥ�ɢ����
                                        */
extern real32_T KePCAT_T_BreaTempRamp_D[5];/* Variable: KePCAT_T_BreaTempRamp_D
                                            * Referenced by: '<S1264>/KePCAT_T_BreaTempRamp_D'
                                            * �������¶ȱ仯Ramp���ֵ
                                            */
extern real32_T KePCAT_T_BreaTempRamp_X[5];/* Variable: KePCAT_T_BreaTempRamp_X
                                            * Referenced by: '<S1264>/KePCAT_T_BreaTempRamp_D'
                                            * VePCAT_pwr_CabinEngyObtain4*4/VePCAT_rho_CabinAir/1005/KePCAT_V_CabAirVolume
                                            */
extern real32_T KePCAT_T_FdBreaTempRv; /* Variable: KePCAT_T_FdBreaTempRv
                                        * Referenced by: '<S24>/ConstantRv22'
                                        */
extern real32_T KePCAT_T_FdhofstDefLt_D[2];/* Variable: KePCAT_T_FdhofstDefLt_D
                                            * Referenced by: '<S1243>/KePCAT_T_FdhofstDefLt_D'
                                            * ���ݳ�˪�����ů����λ�ò������ֵ
                                            */
extern real32_T KePCAT_T_FdhofstDefLt_X[2];/* Variable: KePCAT_T_FdhofstDefLt_X
                                            * Referenced by: '<S1243>/KePCAT_T_FdhofstDefLt_D'
                                            * VeACTU_na_FdhPosnFb
                                            */
extern real32_T KePCAT_T_FdofstDefLt_D[2];/* Variable: KePCAT_T_FdofstDefLt_D
                                           * Referenced by: '<S1243>/KePCAT_T_FdofstDefLt_D'
                                           * ���ݳ�˪����¶Ȳ������ֵ
                                           */
extern real32_T KePCAT_T_FdofstDefLt_X[2];/* Variable: KePCAT_T_FdofstDefLt_X
                                           * Referenced by: '<S1243>/KePCAT_T_FdofstDefLt_D'
                                           * AVG(VeSENA_T_FrtDrvVentTemp+VeSENA_T_FrtDrvFeetTemp)
                                           */
extern real32_T KePCAT_T_FdofstFlrLt_D[2];/* Variable: KePCAT_T_FdofstFlrLt_D
                                           * Referenced by: '<S1243>/KePCAT_T_FdofstFlrLt_D'
                                           * ���ݲവ�ŷ��ʵ���¶Ȳ������ֵ
                                           */
extern real32_T KePCAT_T_FdofstFlrLt_X[2];/* Variable: KePCAT_T_FdofstFlrLt_X
                                           * Referenced by: '<S1243>/KePCAT_T_FdofstFlrLt_D'
                                           * VeSENA_T_FrtDrvFeetTemp
                                           */
extern real32_T KePCAT_T_FdofstVntsideLt_D[2];/* Variable: KePCAT_T_FdofstVntsideLt_D
                                               * Referenced by: '<S1243>/KePCAT_T_FdofstVntsideLt_D'
                                               * ���ݲവ����ʵ���¶Ȳ������ֵ
                                               */
extern real32_T KePCAT_T_FdofstVntsideLt_X[2];/* Variable: KePCAT_T_FdofstVntsideLt_X
                                               * Referenced by: '<S1243>/KePCAT_T_FdofstVntsideLt_D'
                                               * VeSENA_T_FrtDrvVentTemp
                                               */
extern real32_T KePCAT_T_FpBreaTempRv; /* Variable: KePCAT_T_FpBreaTempRv
                                        * Referenced by: '<S24>/ConstantRv1'
                                        */
extern real32_T KePCAT_T_FphofstDefLt_D[2];/* Variable: KePCAT_T_FphofstDefLt_D
                                            * Referenced by: '<S1243>/KePCAT_T_FphofstDefLt_D'
                                            * ���ݳ�˪�����ů����λ�ò������ֵ
                                            */
extern real32_T KePCAT_T_FphofstDefLt_X[2];/* Variable: KePCAT_T_FphofstDefLt_X
                                            * Referenced by: '<S1243>/KePCAT_T_FphofstDefLt_D'
                                            * VeACTU_na_FphPosnFb
                                            */
extern real32_T KePCAT_T_FpofstDefRt_D[2];/* Variable: KePCAT_T_FpofstDefRt_D
                                           * Referenced by: '<S1243>/KePCAT_T_FpofstDefRt_D'
                                           * ���ݳ�˪���ʵ���¶Ȳ������ֵ
                                           */
extern real32_T KePCAT_T_FpofstDefRt_X[2];/* Variable: KePCAT_T_FpofstDefRt_X
                                           * Referenced by: '<S1243>/KePCAT_T_FpofstDefRt_D'
                                           * AVG(VeSENA_T_FrtPassVentTemp+VeSENA_T_FrtPassFeetTemp)
                                           */
extern real32_T KePCAT_T_FpofstFlrRt_D[2];/* Variable: KePCAT_T_FpofstFlrRt_D
                                           * Referenced by: '<S1243>/KePCAT_T_FpofstFlrRt_D'
                                           * ���ݲവ�ŷ��ʵ���¶Ȳ������ֵ
                                           */
extern real32_T KePCAT_T_FpofstFlrRt_X[2];/* Variable: KePCAT_T_FpofstFlrRt_X
                                           * Referenced by: '<S1243>/KePCAT_T_FpofstFlrRt_D'
                                           * VePCAT_T_FpofstFlrRt
                                           */
extern real32_T KePCAT_T_FpofstVntCentRt_D[2];/* Variable: KePCAT_T_FpofstVntCentRt_D
                                               * Referenced by: '<S1243>/KePCAT_T_FpofstVntCentRt_D '
                                               * �����д�����ʵ���¶Ȳ������ֵ
                                               */
extern real32_T KePCAT_T_FpofstVntCentRt_X[2];/* Variable: KePCAT_T_FpofstVntCentRt_X
                                               * Referenced by: '<S1243>/KePCAT_T_FpofstVntCentRt_D '
                                               * VeSENA_T_FrtPassVentTemp
                                               */
extern real32_T KePCAT_T_SdBreaTempRv; /* Variable: KePCAT_T_SdBreaTempRv
                                        * Referenced by: '<S24>/ConstantRv2'
                                        */
extern real32_T KePCAT_T_SdofstRrFlrLt_D[2];/* Variable: KePCAT_T_SdofstRrFlrLt_D
                                             * Referenced by: '<S1243>/KePCAT_T_SdofstRrFlrLt_D'
                                             * �������ݴ��ŷ��ʵ���¶Ȳ������ֵ
                                             */
extern real32_T KePCAT_T_SdofstRrFlrLt_X[2];/* Variable: KePCAT_T_SdofstRrFlrLt_X
                                             * Referenced by: '<S1243>/KePCAT_T_SdofstRrFlrLt_D'
                                             * VeSENA_T_SecDrvFeetTemp
                                             */
extern real32_T KePCAT_T_SdofstRrVnt_D[2];/* Variable: KePCAT_T_SdofstRrVnt_D
                                           * Referenced by: '<S1243>/KePCAT_T_SdofstRrVnt_D'
                                           * �������ݴ�����ʵ���¶Ȳ������ֵ
                                           */
extern real32_T KePCAT_T_SdofstRrVnt_X[2];/* Variable: KePCAT_T_SdofstRrVnt_X
                                           * Referenced by: '<S1243>/KePCAT_T_SdofstRrVnt_D'
                                           * AVG(VeSENA_T_SecDrvVentTemp+VeSENA_T_SecDrvFeetTemp)
                                           */
extern real32_T KePCAT_T_SpBreaTempRv; /* Variable: KePCAT_T_SpBreaTempRv
                                        * Referenced by: '<S24>/ConstantRv3'
                                        */
extern real32_T KePCAT_T_SurfIntAvgRv; /* Variable: KePCAT_T_SurfIntAvgRv
                                        * Referenced by: '<S24>/ConstantRv21'
                                        */
extern real32_T KePCAT_T_VehBreaTempSaveRv;/* Variable: KePCAT_T_VehBreaTempSaveRv
                                            * Referenced by: '<S24>/ConstantRv20'
                                            */
extern real32_T KePCAT_T_VehExterSurfTempSaveRv;
                                    /* Variable: KePCAT_T_VehExterSurfTempSaveRv
                                     * Referenced by: '<S24>/ConstantRv17'
                                     */
extern real32_T KePCAT_T_VehIntrSurfTempSaveRv;
                                     /* Variable: KePCAT_T_VehIntrSurfTempSaveRv
                                      * Referenced by: '<S24>/ConstantRv18'
                                      */
extern real32_T KePCAT_T_VehMidSurfTempSaveRv;
                                      /* Variable: KePCAT_T_VehMidSurfTempSaveRv
                                       * Referenced by: '<S24>/ConstantRv19'
                                       */
extern real32_T KePCAT_T_lntrTemp8Rv;  /* Variable: KePCAT_T_lntrTemp8Rv
                                        * Referenced by: '<S24>/ConstantRv7'
                                        */
extern real32_T KePCAT_deg_TextrRv;    /* Variable: KePCAT_deg_TextrRv
                                        * Referenced by: '<S24>/ConstantRv5'
                                        */
extern real32_T KePCAT_deg_TmtrRv;     /* Variable: KePCAT_deg_TmtrRv
                                        * Referenced by: '<S24>/ConstantRv6'
                                        */
extern real32_T KePCAT_na_AmbTempBreaTempEfctCoef;
                                  /* Variable: KePCAT_na_AmbTempBreaTempEfctCoef
                                   * Referenced by: '<S1218>/Constant3'
                                   * ���¶Ժ������¶�Ӱ��ϵ��
                                   */
extern real32_T KePCAT_na_DashHorAmbTempExtrEfctCoef;
                               /* Variable: KePCAT_na_DashHorAmbTempExtrEfctCoef
                                * Referenced by:
                                *   '<S1204>/Constant13'
                                *   '<S1215>/Constant13'
                                * ���¶��Ǳ�̨ˮƽ���¶�Ӱ��ϵ��
                                */
extern real32_T KePCAT_na_DashHorAmbTempIntrEfctCoef;
                               /* Variable: KePCAT_na_DashHorAmbTempIntrEfctCoef
                                * Referenced by:
                                *   '<S1205>/Constant60'
                                *   '<S1216>/Constant13'
                                * ���¶��Ǳ�̨ˮƽ���¶�Ӱ��ϵ��
                                */
extern real32_T KePCAT_na_DashHorDuctTempExtrEfctCoef;
                              /* Variable: KePCAT_na_DashHorDuctTempExtrEfctCoef
                               * Referenced by:
                               *   '<S1204>/Constant24'
                               *   '<S1215>/Constant24'
                               * ������¶ȶ��Ǳ�̨ˮƽ���¶�Ӱ��ϵ��
                               */
extern real32_T KePCAT_na_DashHorDuctTempIntrEfctCoef;
                              /* Variable: KePCAT_na_DashHorDuctTempIntrEfctCoef
                               * Referenced by:
                               *   '<S1205>/Constant24'
                               *   '<S1216>/Constant24'
                               * ������¶ȶ��Ǳ�̨ˮƽ���¶�Ӱ��ϵ��
                               */
extern real32_T KePCAT_na_DashHorShellArea;/* Variable: KePCAT_na_DashHorShellArea
                                            * Referenced by: '<S1253>/Constant16'
                                            * �Ǳ�̨ˮƽ������
                                            */
extern real32_T KePCAT_na_DashHorShellAzi;/* Variable: KePCAT_na_DashHorShellAzi
                                           * Referenced by: '<S1256>/Constant16'
                                           * �Ǳ�̨ˮƽ�淽λ��ֵ
                                           */
extern real32_T KePCAT_na_DashHorShellCp;/* Variable: KePCAT_na_DashHorShellCp
                                          * Referenced by: '<S1250>/Constant52'
                                          * �Ǳ�̨ˮƽ�����ֵ
                                          */
extern real32_T KePCAT_na_DashHorShellEle;/* Variable: KePCAT_na_DashHorShellEle
                                           * Referenced by: '<S1257>/Constant16'
                                           * �Ǳ�̨ˮƽ��߶Ƚ�ֵ
                                           */
extern real32_T KePCAT_na_DashHorShellHtCndvty;
                                     /* Variable: KePCAT_na_DashHorShellHtCndvty
                                      * Referenced by:
                                      *   '<S1254>/Constant16'
                                      *   '<S1262>/Constant13'
                                      * �Ǳ�̨ˮƽ�浼��ϵ��
                                      */
extern real32_T KePCAT_na_DashHorShellMass;/* Variable: KePCAT_na_DashHorShellMass
                                            * Referenced by: '<S1251>/Constant34'
                                            * �Ǳ�̨ˮƽ������
                                            */
extern real32_T KePCAT_na_DashHorShellThick;/* Variable: KePCAT_na_DashHorShellThick
                                             * Referenced by: '<S1255>/Constant13'
                                             * �Ǳ�̨ˮƽ����ֵ
                                             */
extern real32_T KePCAT_na_DashHorSunDitriFctr;
                                      /* Variable: KePCAT_na_DashHorSunDitriFctr
                                       * Referenced by: '<S1252>/Constant16'
                                       * �Ǳ�̨ˮƽ�������ֲ�ϵ��
                                       */
extern real32_T KePCAT_na_DashHorSunabsFctr;/* Variable: KePCAT_na_DashHorSunabsFctr
                                             * Referenced by: '<S1258>/Constant16'
                                             * �Ǳ�̨ˮƽ������������
                                             */
extern real32_T KePCAT_na_DashHorSunabsFctrExtr;
                                    /* Variable: KePCAT_na_DashHorSunabsFctrExtr
                                     * Referenced by: '<S1259>/Constant16'
                                     * �Ǳ�̨ˮƽ���������������ϵ��
                                     */
extern real32_T KePCAT_na_DashHorWidTempExtrEfctCoef;
                               /* Variable: KePCAT_na_DashHorWidTempExtrEfctCoef
                                * Referenced by:
                                *   '<S1204>/Constant42'
                                *   '<S1215>/Constant42'
                                * �����¶ȶ��Ǳ�̨ˮƽ���¶�Ӱ��ϵ��
                                */
extern real32_T KePCAT_na_DashHorWidTempIntrEfctCoef;
                               /* Variable: KePCAT_na_DashHorWidTempIntrEfctCoef
                                * Referenced by:
                                *   '<S1205>/Constant13'
                                *   '<S1216>/Constant42'
                                * �����¶ȶ��Ǳ�̨ˮƽ���¶�Ӱ��ϵ��
                                */
extern real32_T KePCAT_na_DashVerAmbTempExtrEfctCoef;
                               /* Variable: KePCAT_na_DashVerAmbTempExtrEfctCoef
                                * Referenced by:
                                *   '<S1204>/Constant12'
                                *   '<S1215>/Constant12'
                                * ���¶��Ǳ�̨��ֱ���¶�Ӱ��ϵ��
                                */
extern real32_T KePCAT_na_DashVerAmbTempIntrEfctCoef;
                               /* Variable: KePCAT_na_DashVerAmbTempIntrEfctCoef
                                * Referenced by:
                                *   '<S1205>/Constant59'
                                *   '<S1216>/Constant12'
                                * ���¶��Ǳ�̨��ֱ���¶�Ӱ��ϵ��
                                */
extern real32_T KePCAT_na_DashVerDuctTempExtrEfctCoef;
                              /* Variable: KePCAT_na_DashVerDuctTempExtrEfctCoef
                               * Referenced by:
                               *   '<S1204>/Constant23'
                               *   '<S1215>/Constant23'
                               * ������¶ȶ��Ǳ�̨��ֱ���¶�Ӱ��ϵ��
                               */
extern real32_T KePCAT_na_DashVerDuctTempIntrEfctCoef;
                              /* Variable: KePCAT_na_DashVerDuctTempIntrEfctCoef
                               * Referenced by:
                               *   '<S1205>/Constant23'
                               *   '<S1216>/Constant23'
                               * ������¶ȶ��Ǳ�̨��ֱ���¶�Ӱ��ϵ��
                               */
extern real32_T KePCAT_na_DashVerShellArea;/* Variable: KePCAT_na_DashVerShellArea
                                            * Referenced by: '<S1253>/Constant15'
                                            * �Ǳ�̨��ֱ������
                                            */
extern real32_T KePCAT_na_DashVerShellAzi;/* Variable: KePCAT_na_DashVerShellAzi
                                           * Referenced by: '<S1256>/Constant15'
                                           * �Ǳ�̨��ֱ�淽λ��ֵ
                                           */
extern real32_T KePCAT_na_DashVerShellCp;/* Variable: KePCAT_na_DashVerShellCp
                                          * Referenced by: '<S1250>/Constant51'
                                          * �Ǳ�̨��ֱ�����ֵ
                                          */
extern real32_T KePCAT_na_DashVerShellEle;/* Variable: KePCAT_na_DashVerShellEle
                                           * Referenced by: '<S1257>/Constant15'
                                           * �Ǳ�̨��ֱ��߶Ƚ�ֵ
                                           */
extern real32_T KePCAT_na_DashVerShellHtCndvty;
                                     /* Variable: KePCAT_na_DashVerShellHtCndvty
                                      * Referenced by:
                                      *   '<S1254>/Constant15'
                                      *   '<S1262>/Constant12'
                                      * �Ǳ�̨��ֱ�浼��ϵ��
                                      */
extern real32_T KePCAT_na_DashVerShellMass;/* Variable: KePCAT_na_DashVerShellMass
                                            * Referenced by: '<S1251>/Constant33'
                                            * �Ǳ�̨��ֱ������
                                            */
extern real32_T KePCAT_na_DashVerShellThick;/* Variable: KePCAT_na_DashVerShellThick
                                             * Referenced by: '<S1255>/Constant12'
                                             * �Ǳ�̨��ֱ����ֵ
                                             */
extern real32_T KePCAT_na_DashVerSunDitriFctr;
                                      /* Variable: KePCAT_na_DashVerSunDitriFctr
                                       * Referenced by: '<S1252>/Constant15'
                                       * �Ǳ�̨��ֱ�������ֲ�ϵ��
                                       */
extern real32_T KePCAT_na_DashVerSunabsFctr;/* Variable: KePCAT_na_DashVerSunabsFctr
                                             * Referenced by: '<S1258>/Constant15'
                                             * �Ǳ�̨��ֱ������������
                                             */
extern real32_T KePCAT_na_DashVerSunabsFctrExtr;
                                    /* Variable: KePCAT_na_DashVerSunabsFctrExtr
                                     * Referenced by: '<S1259>/Constant15'
                                     * �Ǳ�̨��ֱ���������������ϵ��
                                     */
extern real32_T KePCAT_na_DashVerWidTempExtrEfctCoef;
                               /* Variable: KePCAT_na_DashVerWidTempExtrEfctCoef
                                * Referenced by:
                                *   '<S1204>/Constant41'
                                *   '<S1215>/Constant41'
                                * �����¶ȶ��Ǳ�̨��ֱ���¶�Ӱ��ϵ��
                                */
extern real32_T KePCAT_na_DashVerWidTempIntrEfctCoef;
                               /* Variable: KePCAT_na_DashVerWidTempIntrEfctCoef
                                * Referenced by:
                                *   '<S1205>/Constant12'
                                *   '<S1216>/Constant41'
                                * �����¶ȶ��Ǳ�̨��ֱ���¶�Ӱ��ϵ��
                                */
extern real32_T KePCAT_na_DuctTempBreaTempEfctCoef;
                                 /* Variable: KePCAT_na_DuctTempBreaTempEfctCoef
                                  * Referenced by: '<S1218>/Constant2'
                                  * ����¶ȶԺ������¶�Ӱ��ϵ��
                                  */
extern real32_T KePCAT_na_ExtrHoCoef_D[11];/* Variable: KePCAT_na_ExtrHoCoef_D
                                            * Referenced by: '<S1245>/KePCAT_na_ExtrHoCoef_D'
                                            * ������������ϵ�����ֵ
                                            */
extern real32_T KePCAT_na_ExtrHoCoef_X[11];/* Variable: KePCAT_na_ExtrHoCoef_X
                                            * Referenced by: '<S1245>/KePCAT_na_ExtrHoCoef_D'
                                            * ͨ��VeVTIC_mps_VehSpdLgtA
                                            */
extern real32_T KePCAT_na_FdFrtFlrHiCoef_D[8];/* Variable: KePCAT_na_FdFrtFlrHiCoef_D
                                               * Referenced by: '<S1245>/KePCAT_na_FdFrtFlrHiCoef_D'
                                               * ��������ǰ�ŵذ��������ϵ�����ֵ
                                               */
extern real32_T KePCAT_na_FddAmbTempExtrEfctCoef;
                                   /* Variable: KePCAT_na_FddAmbTempExtrEfctCoef
                                    * Referenced by:
                                    *   '<S1204>/Constant8'
                                    *   '<S1215>/Constant8'
                                    * ���¶�ǰ�����ݳ����¶�Ӱ��ϵ��
                                    */
extern real32_T KePCAT_na_FddAmbTempIntrEfctCoef;
                                   /* Variable: KePCAT_na_FddAmbTempIntrEfctCoef
                                    * Referenced by:
                                    *   '<S1205>/Constant71'
                                    *   '<S1216>/Constant8'
                                    * ���¶�ǰ�����ݳ����¶�Ӱ��ϵ��
                                    */
extern real32_T KePCAT_na_FddDuctTempExtrEfctCoef;
                                  /* Variable: KePCAT_na_FddDuctTempExtrEfctCoef
                                   * Referenced by:
                                   *   '<S1204>/Constant35'
                                   *   '<S1215>/Constant35'
                                   * ������¶ȶ�ǰ�����ݳ����¶�Ӱ��ϵ��
                                   */
extern real32_T KePCAT_na_FddDuctTempIntrEfctCoef;
                                  /* Variable: KePCAT_na_FddDuctTempIntrEfctCoef
                                   * Referenced by:
                                   *   '<S1205>/Constant35'
                                   *   '<S1216>/Constant35'
                                   * ������¶ȶ�ǰ�����ݳ����¶�Ӱ��ϵ��
                                   */
extern real32_T KePCAT_na_FddHiCoef_D[8];/* Variable: KePCAT_na_FddHiCoef_D
                                          * Referenced by: '<S1245>/KePCAT_na_FddHiCoef_D'
                                          * ǰ�����ݳ��Ŷ�������ϵ��
                                          */
extern real32_T KePCAT_na_FddShellArea;/* Variable: KePCAT_na_FddShellArea
                                        * Referenced by: '<S1253>/Constant27'
                                        * ǰ�����ݳ��ű����
                                        */
extern real32_T KePCAT_na_FddShellAzi; /* Variable: KePCAT_na_FddShellAzi
                                        * Referenced by: '<S1256>/Constant27'
                                        * ǰ�����ݳ��ŷ�λ��ֵ
                                        */
extern real32_T KePCAT_na_FddShellCp;  /* Variable: KePCAT_na_FddShellCp
                                        * Referenced by: '<S1250>/Constant63'
                                        * ǰ�����ݳ��ű���ֵ
                                        */
extern real32_T KePCAT_na_FddShellEle; /* Variable: KePCAT_na_FddShellEle
                                        * Referenced by: '<S1257>/Constant27'
                                        * ǰ�����ݳ��Ÿ߶Ƚ�ֵ
                                        */
extern real32_T KePCAT_na_FddShellHtCndvty;/* Variable: KePCAT_na_FddShellHtCndvty
                                            * Referenced by:
                                            *   '<S1254>/Constant27'
                                            *   '<S1262>/Constant24'
                                            * ǰ�����ݳ��ŵ���ϵ��
                                            */
extern real32_T KePCAT_na_FddShellMass;/* Variable: KePCAT_na_FddShellMass
                                        * Referenced by: '<S1251>/Constant45'
                                        * ǰ�����ݳ�������
                                        */
extern real32_T KePCAT_na_FddShellThick;/* Variable: KePCAT_na_FddShellThick
                                         * Referenced by: '<S1255>/Constant7'
                                         * ǰ�����ݳ��ź��ֵ
                                         */
extern real32_T KePCAT_na_FddSunDitriFctr;/* Variable: KePCAT_na_FddSunDitriFctr
                                           * Referenced by: '<S1252>/Constant27'
                                           * ǰ�����ݳ��ŵ�����ֲ�ϵ��
                                           */
extern real32_T KePCAT_na_FddSunabsFctr;/* Variable: KePCAT_na_FddSunabsFctr
                                         * Referenced by: '<S1258>/Constant27'
                                         * ǰ�����ݳ�������������
                                         */
extern real32_T KePCAT_na_FddSunabsFctrExtr;/* Variable: KePCAT_na_FddSunabsFctrExtr
                                             * Referenced by: '<S1259>/Constant27'
                                             * ǰ�����ݳ����������������ϵ��
                                             */
extern real32_T KePCAT_na_FddWidTempExtrEfctCoef;
                                   /* Variable: KePCAT_na_FddWidTempExtrEfctCoef
                                    * Referenced by:
                                    *   '<S1204>/Constant53'
                                    *   '<S1215>/Constant53'
                                    * �����¶ȶ�ǰ�����ݳ����¶�Ӱ��ϵ��
                                    */
extern real32_T KePCAT_na_FddWidTempIntrEfctCoef;
                                   /* Variable: KePCAT_na_FddWidTempIntrEfctCoef
                                    * Referenced by:
                                    *   '<S1205>/Constant8'
                                    *   '<S1216>/Constant53'
                                    * �����¶ȶ�ǰ�����ݳ����¶�Ӱ��ϵ��
                                    */
extern real32_T KePCAT_na_FdsAmbTempExtrEfctCoef;
                                   /* Variable: KePCAT_na_FdsAmbTempExtrEfctCoef
                                    * Referenced by:
                                    *   '<S1204>/Constant2'
                                    *   '<S1215>/Constant2'
                                    * ���¶�ǰ�����ݲര�¶�Ӱ��ϵ��
                                    */
extern real32_T KePCAT_na_FdsAmbTempIntrEfctCoef;
                                   /* Variable: KePCAT_na_FdsAmbTempIntrEfctCoef
                                    * Referenced by:
                                    *   '<S1205>/Constant56'
                                    *   '<S1216>/Constant2'
                                    * ���¶�ǰ�����ݲര�¶�Ӱ��ϵ��
                                    */
extern real32_T KePCAT_na_FdsDuctTempExtrEfctCoef;
                                  /* Variable: KePCAT_na_FdsDuctTempExtrEfctCoef
                                   * Referenced by:
                                   *   '<S1204>/Constant20'
                                   *   '<S1215>/Constant20'
                                   * ������¶ȶ�ǰ�����ݲര�¶�Ӱ��ϵ��
                                   */
extern real32_T KePCAT_na_FdsDuctTempIntrEfctCoef;
                                  /* Variable: KePCAT_na_FdsDuctTempIntrEfctCoef
                                   * Referenced by:
                                   *   '<S1205>/Constant20'
                                   *   '<S1216>/Constant20'
                                   * ������¶ȶ�ǰ�����ݲര�¶�Ӱ��ϵ��
                                   */
extern real32_T KePCAT_na_FdsHiCoef_D[8];/* Variable: KePCAT_na_FdsHiCoef_D
                                          * Referenced by:
                                          *   '<S1245>/KePCAT_na_FdsHiCoef_D'
                                          *   '<S1245>/KePCAT_na_FpsHiCoef_D'
                                          * ǰ�����ݲര��������ϵ�����ֵ
                                          */
extern real32_T KePCAT_na_FdsShellArea;/* Variable: KePCAT_na_FdsShellArea
                                        * Referenced by: '<S1253>/Constant12'
                                        * ǰ�����ݲര�����
                                        */
extern real32_T KePCAT_na_FdsShellAzi; /* Variable: KePCAT_na_FdsShellAzi
                                        * Referenced by: '<S1256>/Constant12'
                                        * ǰ�����ݲര��λ��ֵ
                                        */
extern real32_T KePCAT_na_FdsShellCp;  /* Variable: KePCAT_na_FdsShellCp
                                        * Referenced by: '<S1250>/Constant48'
                                        * ǰ�����ݲര����ֵ
                                        */
extern real32_T KePCAT_na_FdsShellEle; /* Variable: KePCAT_na_FdsShellEle
                                        * Referenced by: '<S1257>/Constant12'
                                        * ǰ�����ݲര�߶Ƚ�ֵ
                                        */
extern real32_T KePCAT_na_FdsShellHtCndvty;/* Variable: KePCAT_na_FdsShellHtCndvty
                                            * Referenced by:
                                            *   '<S1254>/Constant12'
                                            *   '<S1262>/Constant9'
                                            * ǰ�����ݲര����ϵ��
                                            */
extern real32_T KePCAT_na_FdsShellMass;/* Variable: KePCAT_na_FdsShellMass
                                        * Referenced by: '<S1251>/Constant30'
                                        * ǰ�����ݲര����
                                        */
extern real32_T KePCAT_na_FdsShellThick;/* Variable: KePCAT_na_FdsShellThick
                                         * Referenced by: '<S1255>/Constant1'
                                         * ǰ�����ݲര���ֵ
                                         */
extern real32_T KePCAT_na_FdsSunDitriFctr;/* Variable: KePCAT_na_FdsSunDitriFctr
                                           * Referenced by: '<S1252>/Constant12'
                                           * ǰ�����ݲര������ֲ�ϵ��
                                           */
extern real32_T KePCAT_na_FdsSunTransFctr;/* Variable: KePCAT_na_FdsSunTransFctr
                                           * Referenced by: '<S1260>/Constant12'
                                           * ǰ�����ݲര��������͸����
                                           */
extern real32_T KePCAT_na_FdsSunabsFctr;/* Variable: KePCAT_na_FdsSunabsFctr
                                         * Referenced by: '<S1258>/Constant12'
                                         * ǰ�����ݲര����������
                                         */
extern real32_T KePCAT_na_FdsSunabsFctrExtr;/* Variable: KePCAT_na_FdsSunabsFctrExtr
                                             * Referenced by: '<S1259>/Constant12'
                                             * ǰ�����ݲര�������������ϵ��
                                             */
extern real32_T KePCAT_na_FdsWidTempExtrEfctCoef;
                                   /* Variable: KePCAT_na_FdsWidTempExtrEfctCoef
                                    * Referenced by:
                                    *   '<S1204>/Constant38'
                                    *   '<S1215>/Constant38'
                                    * �����¶ȶ�ǰ�����ݲര�¶�Ӱ��ϵ��
                                    */
extern real32_T KePCAT_na_FdsWidTempIntrEfctCoef;
                                   /* Variable: KePCAT_na_FdsWidTempIntrEfctCoef
                                    * Referenced by:
                                    *   '<S1205>/Constant2'
                                    *   '<S1216>/Constant38'
                                    * �����¶ȶ�ǰ�����ݲര�¶�Ӱ��ϵ��
                                    */
extern real32_T KePCAT_na_FpFrtFlrHiCoef_D[8];/* Variable: KePCAT_na_FpFrtFlrHiCoef_D
                                               * Referenced by: '<S1245>/KePCAT_na_FpFrtFlrHiCoef_D'
                                               * ��������ǰ�ŵذ��������ϵ�����ֵ
                                               */
extern real32_T KePCAT_na_FpdAmbTempExtrEfctCoef;
                                   /* Variable: KePCAT_na_FpdAmbTempExtrEfctCoef
                                    * Referenced by:
                                    *   '<S1204>/Constant19'
                                    *   '<S1215>/Constant19'
                                    * ���¶�ǰ�Ÿ��ݳ����¶�Ӱ��ϵ��
                                    */
extern real32_T KePCAT_na_FpdAmbTempIntrEfctCoef;
                                   /* Variable: KePCAT_na_FpdAmbTempIntrEfctCoef
                                    * Referenced by:
                                    *   '<S1205>/Constant73'
                                    *   '<S1216>/Constant19'
                                    * ���¶�ǰ�Ÿ��ݳ����¶�Ӱ��ϵ��
                                    */
extern real32_T KePCAT_na_FpdDuctTempExtrEfctCoef;
                                  /* Variable: KePCAT_na_FpdDuctTempExtrEfctCoef
                                   * Referenced by:
                                   *   '<S1204>/Constant37'
                                   *   '<S1215>/Constant37'
                                   * ������¶ȶ�ǰ�Ÿ��ݳ����¶�Ӱ��ϵ��
                                   */
extern real32_T KePCAT_na_FpdDuctTempIntrEfctCoef;
                                  /* Variable: KePCAT_na_FpdDuctTempIntrEfctCoef
                                   * Referenced by:
                                   *   '<S1205>/Constant37'
                                   *   '<S1216>/Constant37'
                                   * ������¶ȶ�ǰ�Ÿ��ݳ����¶�Ӱ��ϵ��
                                   */
extern real32_T KePCAT_na_FpdHiCoef_D[8];/* Variable: KePCAT_na_FpdHiCoef_D
                                          * Referenced by: '<S1245>/KePCAT_na_FpdHiCoef_D'
                                          * ǰ�Ÿ��ݳ��Ŷ�������ϵ��
                                          */
extern real32_T KePCAT_na_FpdShellArea;/* Variable: KePCAT_na_FpdShellArea
                                        * Referenced by: '<S1253>/Constant29'
                                        * ǰ�Ÿ��ݳ��ű����
                                        */
extern real32_T KePCAT_na_FpdShellAzi; /* Variable: KePCAT_na_FpdShellAzi
                                        * Referenced by: '<S1256>/Constant29'
                                        * ǰ�Ÿ��ݳ��ŷ�λ��ֵ
                                        */
extern real32_T KePCAT_na_FpdShellCp;  /* Variable: KePCAT_na_FpdShellCp
                                        * Referenced by: '<S1250>/Constant65'
                                        * ǰ�Ÿ��ݳ��ű���ֵ
                                        */
extern real32_T KePCAT_na_FpdShellEle; /* Variable: KePCAT_na_FpdShellEle
                                        * Referenced by: '<S1257>/Constant29'
                                        * ǰ�Ÿ��ݳ��Ÿ߶Ƚ�ֵ
                                        */
extern real32_T KePCAT_na_FpdShellHtCndvty;/* Variable: KePCAT_na_FpdShellHtCndvty
                                            * Referenced by:
                                            *   '<S1254>/Constant29'
                                            *   '<S1262>/Constant26'
                                            * ǰ�Ÿ��ݳ��ŵ���ϵ��
                                            */
extern real32_T KePCAT_na_FpdShellMass;/* Variable: KePCAT_na_FpdShellMass
                                        * Referenced by: '<S1251>/Constant47'
                                        * ǰ�Ÿ��ݳ�������
                                        */
extern real32_T KePCAT_na_FpdShellThick;/* Variable: KePCAT_na_FpdShellThick
                                         * Referenced by: '<S1255>/Constant9'
                                         * ǰ�Ÿ��ݳ��ź��ֵ
                                         */
extern real32_T KePCAT_na_FpdSunDitriFctr;/* Variable: KePCAT_na_FpdSunDitriFctr
                                           * Referenced by: '<S1252>/Constant29'
                                           * ǰ�Ÿ��ݳ��ŵ�����ֲ�ϵ��
                                           */
extern real32_T KePCAT_na_FpdSunabsFctr;/* Variable: KePCAT_na_FpdSunabsFctr
                                         * Referenced by: '<S1258>/Constant29'
                                         * ǰ�Ÿ��ݳ�������������
                                         */
extern real32_T KePCAT_na_FpdSunabsFctrExtr;/* Variable: KePCAT_na_FpdSunabsFctrExtr
                                             * Referenced by: '<S1259>/Constant29'
                                             * ǰ�Ÿ��ݳ����������������ϵ��
                                             */
extern real32_T KePCAT_na_FpdWidTempExtrEfctCoef;
                                   /* Variable: KePCAT_na_FpdWidTempExtrEfctCoef
                                    * Referenced by:
                                    *   '<S1204>/Constant55'
                                    *   '<S1215>/Constant55'
                                    * �����¶ȶ�ǰ�Ÿ��ݳ����¶�Ӱ��ϵ��
                                    */
extern real32_T KePCAT_na_FpdWidTempIntrEfctCoef;
                                   /* Variable: KePCAT_na_FpdWidTempIntrEfctCoef
                                    * Referenced by:
                                    *   '<S1205>/Constant19'
                                    *   '<S1216>/Constant55'
                                    * �����¶ȶ�ǰ�Ÿ��ݳ����¶�Ӱ��ϵ��
                                    */
extern real32_T KePCAT_na_FpsAmbTempExtrEfctCoef;
                                   /* Variable: KePCAT_na_FpsAmbTempExtrEfctCoef
                                    * Referenced by:
                                    *   '<S1204>/Constant4'
                                    *   '<S1215>/Constant4'
                                    * ���¶�ǰ�Ÿ��ݲര�¶�Ӱ��ϵ��
                                    */
extern real32_T KePCAT_na_FpsAmbTempIntrEfctCoef;
                                   /* Variable: KePCAT_na_FpsAmbTempIntrEfctCoef
                                    * Referenced by:
                                    *   '<S1205>/Constant67'
                                    *   '<S1216>/Constant4'
                                    * ���¶�ǰ�Ÿ��ݲര�¶�Ӱ��ϵ��
                                    */
extern real32_T KePCAT_na_FpsDuctTempExtrEfctCoef;
                                  /* Variable: KePCAT_na_FpsDuctTempExtrEfctCoef
                                   * Referenced by:
                                   *   '<S1204>/Constant31'
                                   *   '<S1215>/Constant31'
                                   * ������¶ȶ�ǰ�Ÿ��ݲര�¶�Ӱ��ϵ��
                                   */
extern real32_T KePCAT_na_FpsDuctTempIntrEfctCoef;
                                  /* Variable: KePCAT_na_FpsDuctTempIntrEfctCoef
                                   * Referenced by:
                                   *   '<S1205>/Constant31'
                                   *   '<S1216>/Constant31'
                                   * ������¶ȶ�ǰ�Ÿ��ݲര�¶�Ӱ��ϵ��
                                   */
extern real32_T KePCAT_na_FpsShellArea;/* Variable: KePCAT_na_FpsShellArea
                                        * Referenced by: '<S1253>/Constant23'
                                        * ǰ�Ÿ��ݲര�����
                                        */
extern real32_T KePCAT_na_FpsShellAzi; /* Variable: KePCAT_na_FpsShellAzi
                                        * Referenced by: '<S1256>/Constant23'
                                        * ǰ�Ÿ��ݲര��λ��ֵ
                                        */
extern real32_T KePCAT_na_FpsShellCp;  /* Variable: KePCAT_na_FpsShellCp
                                        * Referenced by: '<S1250>/Constant59'
                                        * ǰ�Ÿ��ݲര����ֵ
                                        */
extern real32_T KePCAT_na_FpsShellEle; /* Variable: KePCAT_na_FpsShellEle
                                        * Referenced by: '<S1257>/Constant23'
                                        * ǰ�Ÿ��ݲര�߶Ƚ�ֵ
                                        */
extern real32_T KePCAT_na_FpsShellHtCndvty;/* Variable: KePCAT_na_FpsShellHtCndvty
                                            * Referenced by:
                                            *   '<S1254>/Constant23'
                                            *   '<S1262>/Constant20'
                                            * ǰ�Ÿ��ݲര����ϵ��
                                            */
extern real32_T KePCAT_na_FpsShellMass;/* Variable: KePCAT_na_FpsShellMass
                                        * Referenced by: '<S1251>/Constant41'
                                        * ǰ�Ÿ��ݲര����
                                        */
extern real32_T KePCAT_na_FpsShellThick;/* Variable: KePCAT_na_FpsShellThick
                                         * Referenced by: '<S1255>/Constant3'
                                         * ǰ�Ÿ��ݲര���ֵ
                                         */
extern real32_T KePCAT_na_FpsSunDitriFctr;/* Variable: KePCAT_na_FpsSunDitriFctr
                                           * Referenced by: '<S1252>/Constant23'
                                           * ǰ�Ÿ��ݲര������ֲ�ϵ��
                                           */
extern real32_T KePCAT_na_FpsSunTransFctr;/* Variable: KePCAT_na_FpsSunTransFctr
                                           * Referenced by: '<S1260>/Constant23'
                                           * ǰ�Ÿ��ݲര��������͸����
                                           */
extern real32_T KePCAT_na_FpsSunabsFctr;/* Variable: KePCAT_na_FpsSunabsFctr
                                         * Referenced by: '<S1258>/Constant23'
                                         * ǰ�Ÿ��ݲര����������
                                         */
extern real32_T KePCAT_na_FpsSunabsFctrExtr;/* Variable: KePCAT_na_FpsSunabsFctrExtr
                                             * Referenced by: '<S1259>/Constant23'
                                             * ǰ�Ÿ��ݲര�������������ϵ��
                                             */
extern real32_T KePCAT_na_FpsWidTempExtrEfctCoef;
                                   /* Variable: KePCAT_na_FpsWidTempExtrEfctCoef
                                    * Referenced by:
                                    *   '<S1204>/Constant49'
                                    *   '<S1215>/Constant49'
                                    * �����¶ȶ�ǰ�Ÿ��ݲര�¶�Ӱ��ϵ��
                                    */
extern real32_T KePCAT_na_FpsWidTempIntrEfctCoef;
                                   /* Variable: KePCAT_na_FpsWidTempIntrEfctCoef
                                    * Referenced by:
                                    *   '<S1205>/Constant4'
                                    *   '<S1216>/Constant49'
                                    * �����¶ȶ�ǰ�Ÿ��ݲര�¶�Ӱ��ϵ��
                                    */
extern real32_T KePCAT_na_FrtFlrAmbTempExtrEfctCoef;
                                /* Variable: KePCAT_na_FrtFlrAmbTempExtrEfctCoef
                                 * Referenced by:
                                 *   '<S1204>/Constant16'
                                 *   '<S1215>/Constant16'
                                 * ���¶�ǰ�ŵذ��¶�Ӱ��ϵ��
                                 */
extern real32_T KePCAT_na_FrtFlrAmbTempIntrEfctCoef;
                                /* Variable: KePCAT_na_FrtFlrAmbTempIntrEfctCoef
                                 * Referenced by:
                                 *   '<S1205>/Constant63'
                                 *   '<S1216>/Constant16'
                                 * ���¶�ǰ�ŵذ��¶�Ӱ��ϵ��
                                 */
extern real32_T KePCAT_na_FrtFlrDuctTempExtrEfctCoef;
                               /* Variable: KePCAT_na_FrtFlrDuctTempExtrEfctCoef
                                * Referenced by:
                                *   '<S1204>/Constant27'
                                *   '<S1215>/Constant27'
                                * ������¶ȶ�ǰ�ŵذ��¶�Ӱ��ϵ��
                                */
extern real32_T KePCAT_na_FrtFlrDuctTempIntrEfctCoef;
                               /* Variable: KePCAT_na_FrtFlrDuctTempIntrEfctCoef
                                * Referenced by:
                                *   '<S1205>/Constant27'
                                *   '<S1216>/Constant27'
                                * ������¶ȶ�ǰ�ŵذ��¶�Ӱ��ϵ��
                                */
extern real32_T KePCAT_na_FrtFlrShellArea;/* Variable: KePCAT_na_FrtFlrShellArea
                                           * Referenced by: '<S1253>/Constant19'
                                           * ǰ�ŵذ�����
                                           */
extern real32_T KePCAT_na_FrtFlrShellAzi;/* Variable: KePCAT_na_FrtFlrShellAzi
                                          * Referenced by: '<S1256>/Constant19'
                                          * ǰ�ŵذ巽λ��ֵ
                                          */
extern real32_T KePCAT_na_FrtFlrShellCp;/* Variable: KePCAT_na_FrtFlrShellCp
                                         * Referenced by: '<S1250>/Constant55'
                                         * ǰ�ŵذ����ֵ
                                         */
extern real32_T KePCAT_na_FrtFlrShellEle;/* Variable: KePCAT_na_FrtFlrShellEle
                                          * Referenced by: '<S1257>/Constant19'
                                          * ǰ�ŵذ�߶Ƚ�ֵ
                                          */
extern real32_T KePCAT_na_FrtFlrShellHtCndvty;
                                      /* Variable: KePCAT_na_FrtFlrShellHtCndvty
                                       * Referenced by:
                                       *   '<S1254>/Constant19'
                                       *   '<S1262>/Constant16'
                                       * ǰ�ŵذ嵼��ϵ��
                                       */
extern real32_T KePCAT_na_FrtFlrShellMass;/* Variable: KePCAT_na_FrtFlrShellMass
                                           * Referenced by: '<S1251>/Constant37'
                                           * ǰ�ŵذ�����
                                           */
extern real32_T KePCAT_na_FrtFlrShellThick;/* Variable: KePCAT_na_FrtFlrShellThick
                                            * Referenced by: '<S1255>/Constant16'
                                            * ǰ�ŵذ���ֵ
                                            */
extern real32_T KePCAT_na_FrtFlrSunDitriFctr;/* Variable: KePCAT_na_FrtFlrSunDitriFctr
                                              * Referenced by: '<S1252>/Constant19'
                                              * ǰ�ŵذ������ֲ�ϵ��
                                              */
extern real32_T KePCAT_na_FrtFlrSunabsFctr;/* Variable: KePCAT_na_FrtFlrSunabsFctr
                                            * Referenced by: '<S1258>/Constant19'
                                            * ǰ�ŵذ�����������
                                            */
extern real32_T KePCAT_na_FrtFlrSunabsFctrExtr;
                                     /* Variable: KePCAT_na_FrtFlrSunabsFctrExtr
                                      * Referenced by: '<S1259>/Constant19'
                                      * ǰ�ŵذ��������������ϵ��
                                      */
extern real32_T KePCAT_na_FrtFlrWidTempExtrEfctCoef;
                                /* Variable: KePCAT_na_FrtFlrWidTempExtrEfctCoef
                                 * Referenced by:
                                 *   '<S1204>/Constant45'
                                 *   '<S1215>/Constant45'
                                 * �����¶ȶ�ǰ�ŵذ��¶�Ӱ��ϵ��
                                 */
extern real32_T KePCAT_na_FrtFlrWidTempIntrEfctCoef;
                                /* Variable: KePCAT_na_FrtFlrWidTempIntrEfctCoef
                                 * Referenced by:
                                 *   '<S1205>/Constant16'
                                 *   '<S1216>/Constant45'
                                 * �����¶ȶ�ǰ�ŵذ��¶�Ӱ��ϵ��
                                 */
extern real32_T KePCAT_na_FrtRoofAmbTempExtrEfctCoef;
                               /* Variable: KePCAT_na_FrtRoofAmbTempExtrEfctCoef
                                * Referenced by:
                                *   '<S1204>/Constant11'
                                *   '<S1215>/Constant11'
                                * ���¶�ǰ�ų����¶�Ӱ��ϵ��
                                */
extern real32_T KePCAT_na_FrtRoofAmbTempIntrEfctCoef;
                               /* Variable: KePCAT_na_FrtRoofAmbTempIntrEfctCoef
                                * Referenced by:
                                *   '<S1205>/Constant58'
                                *   '<S1216>/Constant11'
                                * ���¶�ǰ�ų����¶�Ӱ��ϵ��
                                */
extern real32_T KePCAT_na_FrtRoofDuctTempExtrEfctCoef;
                              /* Variable: KePCAT_na_FrtRoofDuctTempExtrEfctCoef
                               * Referenced by:
                               *   '<S1204>/Constant22'
                               *   '<S1215>/Constant22'
                               * ������¶ȶ�ǰ�ų����¶�Ӱ��ϵ��
                               */
extern real32_T KePCAT_na_FrtRoofDuctTempIntrEfctCoef;
                              /* Variable: KePCAT_na_FrtRoofDuctTempIntrEfctCoef
                               * Referenced by:
                               *   '<S1205>/Constant22'
                               *   '<S1216>/Constant22'
                               * ������¶ȶ�ǰ�ų����¶�Ӱ��ϵ��
                               */
extern real32_T KePCAT_na_FrtRoofShellArea;/* Variable: KePCAT_na_FrtRoofShellArea
                                            * Referenced by: '<S1253>/Constant14'
                                            * ǰ�ų��������
                                            */
extern real32_T KePCAT_na_FrtRoofShellAzi;/* Variable: KePCAT_na_FrtRoofShellAzi
                                           * Referenced by: '<S1256>/Constant14'
                                           * ǰ�ų�����λ��ֵ
                                           */
extern real32_T KePCAT_na_FrtRoofShellCp;/* Variable: KePCAT_na_FrtRoofShellCp
                                          * Referenced by: '<S1250>/Constant50'
                                          * ǰ�ų�������ֵ
                                          */
extern real32_T KePCAT_na_FrtRoofShellEle;/* Variable: KePCAT_na_FrtRoofShellEle
                                           * Referenced by: '<S1257>/Constant14'
                                           * ǰ�ų����߶Ƚ�ֵ
                                           */
extern real32_T KePCAT_na_FrtRoofShellHtCndvty;
                                     /* Variable: KePCAT_na_FrtRoofShellHtCndvty
                                      * Referenced by:
                                      *   '<S1254>/Constant14'
                                      *   '<S1262>/Constant11'
                                      * ǰ�ų�������ϵ��
                                      */
extern real32_T KePCAT_na_FrtRoofShellMass;/* Variable: KePCAT_na_FrtRoofShellMass
                                            * Referenced by: '<S1251>/Constant32'
                                            * ǰ�ų�������
                                            */
extern real32_T KePCAT_na_FrtRoofShellThick;/* Variable: KePCAT_na_FrtRoofShellThick
                                             * Referenced by: '<S1255>/Constant11'
                                             * ǰ�ų������ֵ
                                             */
extern real32_T KePCAT_na_FrtRoofSunDitriFctr;
                                      /* Variable: KePCAT_na_FrtRoofSunDitriFctr
                                       * Referenced by: '<S1252>/Constant14'
                                       * ǰ�ų���������ֲ�ϵ��
                                       */
extern real32_T KePCAT_na_FrtRoofSunabsFctr;/* Variable: KePCAT_na_FrtRoofSunabsFctr
                                             * Referenced by: '<S1258>/Constant14'
                                             * ǰ�ų�������������
                                             */
extern real32_T KePCAT_na_FrtRoofSunabsFctrExtr;
                                    /* Variable: KePCAT_na_FrtRoofSunabsFctrExtr
                                     * Referenced by: '<S1259>/Constant14'
                                     * ǰ�ų����������������ϵ��
                                     */
extern real32_T KePCAT_na_FrtRoofWidTempExtrEfctCoef;
                               /* Variable: KePCAT_na_FrtRoofWidTempExtrEfctCoef
                                * Referenced by:
                                *   '<S1204>/Constant40'
                                *   '<S1215>/Constant40'
                                * �����¶ȶ�ǰ�ų����¶�Ӱ��ϵ��
                                */
extern real32_T KePCAT_na_FrtRoofWidTempIntrEfctCoef;
                               /* Variable: KePCAT_na_FrtRoofWidTempIntrEfctCoef
                                * Referenced by:
                                *   '<S1205>/Constant11'
                                *   '<S1216>/Constant40'
                                * �����¶ȶ�ǰ�ų����¶�Ӱ��ϵ��
                                */
extern real32_T KePCAT_na_FrtWindAmbTempExtrEfctCoef;
                               /* Variable: KePCAT_na_FrtWindAmbTempExtrEfctCoef
                                * Referenced by:
                                *   '<S1204>/Constant6'
                                *   '<S1215>/Constant6'
                                * ���¶�ǰ���粣���¶�Ӱ��ϵ��
                                */
extern real32_T KePCAT_na_FrtWindAmbTempIntrEfctCoef;
                               /* Variable: KePCAT_na_FrtWindAmbTempIntrEfctCoef
                                * Referenced by:
                                *   '<S1205>/Constant69'
                                *   '<S1216>/Constant6'
                                * ���¶�ǰ���粣���¶�Ӱ��ϵ��
                                */
extern real32_T KePCAT_na_FrtWindDuctTempExtrEfctCoef;
                              /* Variable: KePCAT_na_FrtWindDuctTempExtrEfctCoef
                               * Referenced by:
                               *   '<S1204>/Constant33'
                               *   '<S1215>/Constant33'
                               * ������¶ȶ�ǰ���粣���¶�Ӱ��ϵ��
                               */
extern real32_T KePCAT_na_FrtWindDuctTempIntrEfctCoef;
                              /* Variable: KePCAT_na_FrtWindDuctTempIntrEfctCoef
                               * Referenced by:
                               *   '<S1205>/Constant33'
                               *   '<S1216>/Constant33'
                               * ������¶ȶ�ǰ���粣���¶�Ӱ��ϵ��
                               */
extern real32_T KePCAT_na_FrtWindShellArea;/* Variable: KePCAT_na_FrtWindShellArea
                                            * Referenced by: '<S1253>/Constant25'
                                            * ǰ���粣�������
                                            */
extern real32_T KePCAT_na_FrtWindShellAzi;/* Variable: KePCAT_na_FrtWindShellAzi
                                           * Referenced by: '<S1256>/Constant25'
                                           * ǰ���粣����λ��ֵ
                                           */
extern real32_T KePCAT_na_FrtWindShellCp;/* Variable: KePCAT_na_FrtWindShellCp
                                          * Referenced by: '<S1250>/Constant61'
                                          * ǰ���粣������ֵ
                                          */
extern real32_T KePCAT_na_FrtWindShellEle;/* Variable: KePCAT_na_FrtWindShellEle
                                           * Referenced by: '<S1257>/Constant25'
                                           * ǰ���粣���߶Ƚ�ֵ
                                           */
extern real32_T KePCAT_na_FrtWindShellHtCndvty;
                                     /* Variable: KePCAT_na_FrtWindShellHtCndvty
                                      * Referenced by:
                                      *   '<S1254>/Constant25'
                                      *   '<S1262>/Constant22'
                                      * ǰ���粣������ϵ��
                                      */
extern real32_T KePCAT_na_FrtWindShellMass;/* Variable: KePCAT_na_FrtWindShellMass
                                            * Referenced by: '<S1251>/Constant43'
                                            * ǰ���粣������
                                            */
extern real32_T KePCAT_na_FrtWindShellThick;/* Variable: KePCAT_na_FrtWindShellThick
                                             * Referenced by: '<S1255>/Constant5'
                                             * ǰ���粣�����ֵ
                                             */
extern real32_T KePCAT_na_FrtWindSunDitriFctr;
                                      /* Variable: KePCAT_na_FrtWindSunDitriFctr
                                       * Referenced by: '<S1252>/Constant25'
                                       * ǰ���粣��������ֲ�ϵ��
                                       */
extern real32_T KePCAT_na_FrtWindSunTransFctr;
                                      /* Variable: KePCAT_na_FrtWindSunTransFctr
                                       * Referenced by: '<S1260>/Constant25'
                                       * ǰ���粣����������͸����
                                       */
extern real32_T KePCAT_na_FrtWindSunabsFctr;/* Variable: KePCAT_na_FrtWindSunabsFctr
                                             * Referenced by: '<S1258>/Constant25'
                                             * ǰ���粣������������
                                             */
extern real32_T KePCAT_na_FrtWindSunabsFctrExtr;
                                    /* Variable: KePCAT_na_FrtWindSunabsFctrExtr
                                     * Referenced by: '<S1259>/Constant25'
                                     * ǰ���粣���������������ϵ��
                                     */
extern real32_T KePCAT_na_FrtWindWidTempExtrEfctCoef;
                               /* Variable: KePCAT_na_FrtWindWidTempExtrEfctCoef
                                * Referenced by:
                                *   '<S1204>/Constant51'
                                *   '<S1215>/Constant51'
                                * �����¶ȶ�ǰ���粣���¶�Ӱ��ϵ��
                                */
extern real32_T KePCAT_na_FrtWindWidTempIntrEfctCoef;
                               /* Variable: KePCAT_na_FrtWindWidTempIntrEfctCoef
                                * Referenced by:
                                *   '<S1205>/Constant6'
                                *   '<S1216>/Constant51'
                                * �����¶ȶ�ǰ���粣���¶�Ӱ��ϵ��
                                */
extern real32_T KePCAT_na_HiCoef8Rv;   /* Variable: KePCAT_na_HiCoef8Rv
                                        * Referenced by: '<S24>/ConstantRv9'
                                        */
extern real32_T KePCAT_na_HumRatEstEAT_D[6];/* Variable: KePCAT_na_HumRatEstEAT_D
                                             * Referenced by: '<S1240>/KePCAT_na_HumRatEstEAT_D'
                                             * ���������ڿ�����ʪ�����ֵ
                                             */
extern real32_T KePCAT_na_HumRatEstEAT_X[6];/* Variable: KePCAT_na_HumRatEstEAT_X
                                             * Referenced by: '<S1240>/KePCAT_na_HumRatEstEAT_D'
                                             * VeSENA_T_FeavpTemp
                                             */
extern real32_T KePCAT_na_HumRatEstOAT_D[7];/* Variable: KePCAT_na_HumRatEstOAT_D
                                             * Referenced by: '<S1240>/KePCAT_na_HumRatEstOAT_D'
                                             * ������ʪ�����ֵ
                                             */
extern real32_T KePCAT_na_HumRatEstOAT_X[7];/* Variable: KePCAT_na_HumRatEstOAT_X
                                             * Referenced by: '<S1240>/KePCAT_na_HumRatEstOAT_D'
                                             * VeSENA_T_AmbTempOut
                                             */
extern real32_T KePCAT_na_NapDeltaTCoef;/* Variable: KePCAT_na_NapDeltaTCoef
                                         * Referenced by:
                                         *   '<S1227>/Constant42'
                                         *   '<S1228>/Constant42'
                                         *   '<S1229>/Constant42'
                                         *   '<S1230>/Constant42'
                                         * ���ٵ���ϵ��
                                         */
extern real32_T KePCAT_na_ParShlfAmbTempExtrEfctCoef;
                               /* Variable: KePCAT_na_ParShlfAmbTempExtrEfctCoef
                                * Referenced by:
                                *   '<S1204>/Constant15'
                                *   '<S1215>/Constant15'
                                * ���¶Ժ�������������¶�Ӱ��ϵ��
                                */
extern real32_T KePCAT_na_ParShlfAmbTempIntrEfctCoef;
                               /* Variable: KePCAT_na_ParShlfAmbTempIntrEfctCoef
                                * Referenced by:
                                *   '<S1205>/Constant62'
                                *   '<S1216>/Constant15'
                                * ���¶Ժ�������������¶�Ӱ��ϵ��
                                */
extern real32_T KePCAT_na_ParShlfDuctTempExtrEfctCoef;
                              /* Variable: KePCAT_na_ParShlfDuctTempExtrEfctCoef
                               * Referenced by:
                               *   '<S1204>/Constant26'
                               *   '<S1215>/Constant26'
                               * ������¶ȶԺ�������������¶�Ӱ��ϵ��
                               */
extern real32_T KePCAT_na_ParShlfDuctTempIntrEfctCoef;
                              /* Variable: KePCAT_na_ParShlfDuctTempIntrEfctCoef
                               * Referenced by:
                               *   '<S1205>/Constant26'
                               *   '<S1216>/Constant26'
                               * ������¶ȶԺ�������������¶�Ӱ��ϵ��
                               */
extern real32_T KePCAT_na_ParShlfShellArea;/* Variable: KePCAT_na_ParShlfShellArea
                                            * Referenced by: '<S1253>/Constant18'
                                            * ������������ܱ����
                                            */
extern real32_T KePCAT_na_ParShlfShellAzi;/* Variable: KePCAT_na_ParShlfShellAzi
                                           * Referenced by: '<S1256>/Constant18'
                                           * ������������ܷ�λ��ֵ
                                           */
extern real32_T KePCAT_na_ParShlfShellCp;/* Variable: KePCAT_na_ParShlfShellCp
                                          * Referenced by: '<S1250>/Constant54'
                                          * ������������ܱ���ֵ
                                          */
extern real32_T KePCAT_na_ParShlfShellEle;/* Variable: KePCAT_na_ParShlfShellEle
                                           * Referenced by: '<S1257>/Constant18'
                                           * ������������ܸ߶Ƚ�ֵ
                                           */
extern real32_T KePCAT_na_ParShlfShellHtCndvty;
                                     /* Variable: KePCAT_na_ParShlfShellHtCndvty
                                      * Referenced by:
                                      *   '<S1254>/Constant18'
                                      *   '<S1262>/Constant15'
                                      * ������������ܵ���ϵ��
                                      */
extern real32_T KePCAT_na_ParShlfShellMass;/* Variable: KePCAT_na_ParShlfShellMass
                                            * Referenced by: '<S1251>/Constant36'
                                            * �����������������
                                            */
extern real32_T KePCAT_na_ParShlfShellThick;/* Variable: KePCAT_na_ParShlfShellThick
                                             * Referenced by: '<S1255>/Constant15'
                                             * ������������ܺ��ֵ
                                             */
extern real32_T KePCAT_na_ParShlfSunDitriFctr;
                                      /* Variable: KePCAT_na_ParShlfSunDitriFctr
                                       * Referenced by: '<S1252>/Constant18'
                                       * ������������ܵ�����ֲ�ϵ��
                                       */
extern real32_T KePCAT_na_ParShlfSunabsFctr;/* Variable: KePCAT_na_ParShlfSunabsFctr
                                             * Referenced by: '<S1258>/Constant18'
                                             * �����������������������
                                             */
extern real32_T KePCAT_na_ParShlfSunabsFctrExtr;
                                    /* Variable: KePCAT_na_ParShlfSunabsFctrExtr
                                     * Referenced by: '<S1259>/Constant18'
                                     * ��������������������������ϵ��
                                     */
extern real32_T KePCAT_na_ParShlfWidTempExtrEfctCoef;
                               /* Variable: KePCAT_na_ParShlfWidTempExtrEfctCoef
                                * Referenced by:
                                *   '<S1204>/Constant44'
                                *   '<S1215>/Constant44'
                                * �����¶ȶԺ�������������¶�Ӱ��ϵ��
                                */
extern real32_T KePCAT_na_ParShlfWidTempIntrEfctCoef;
                               /* Variable: KePCAT_na_ParShlfWidTempIntrEfctCoef
                                * Referenced by:
                                *   '<S1205>/Constant15'
                                *   '<S1216>/Constant44'
                                * �����¶ȶԺ�������������¶�Ӱ��ϵ��
                                */
extern real32_T KePCAT_na_RerFlrAmbTempExtrEfctCoef;
                                /* Variable: KePCAT_na_RerFlrAmbTempExtrEfctCoef
                                 * Referenced by:
                                 *   '<S1204>/Constant18'
                                 *   '<S1215>/Constant18'
                                 * ���¶Զ��ŵذ��¶�Ӱ��ϵ��
                                 */
extern real32_T KePCAT_na_RerFlrAmbTempIntrEfctCoef;
                                /* Variable: KePCAT_na_RerFlrAmbTempIntrEfctCoef
                                 * Referenced by:
                                 *   '<S1205>/Constant65'
                                 *   '<S1216>/Constant18'
                                 * ���¶Զ��ŵذ��¶�Ӱ��ϵ��
                                 */
extern real32_T KePCAT_na_RerFlrDuctTempExtrEfctCoef;
                               /* Variable: KePCAT_na_RerFlrDuctTempExtrEfctCoef
                                * Referenced by:
                                *   '<S1204>/Constant29'
                                *   '<S1215>/Constant29'
                                * ������¶ȶԶ��ŵذ��¶�Ӱ��ϵ��
                                */
extern real32_T KePCAT_na_RerFlrDuctTempIntrEfctCoef;
                               /* Variable: KePCAT_na_RerFlrDuctTempIntrEfctCoef
                                * Referenced by:
                                *   '<S1205>/Constant29'
                                *   '<S1216>/Constant29'
                                * ������¶ȶԶ��ŵذ��¶�Ӱ��ϵ��
                                */
extern real32_T KePCAT_na_RerFlrHiCoef_D[4];/* Variable: KePCAT_na_RerFlrHiCoef_D
                                             * Referenced by: '<S1245>/KePCAT_na_RerFlrHiCoef_D'
                                             * ���ŵذ��������ϵ�����ֵ
                                             */
extern real32_T KePCAT_na_RerFlrShellArea;/* Variable: KePCAT_na_RerFlrShellArea
                                           * Referenced by: '<S1253>/Constant21'
                                           * ���ŵذ�����
                                           */
extern real32_T KePCAT_na_RerFlrShellAzi;/* Variable: KePCAT_na_RerFlrShellAzi
                                          * Referenced by: '<S1256>/Constant21'
                                          * ���ŵذ巽λ��ֵ
                                          */
extern real32_T KePCAT_na_RerFlrShellCp;/* Variable: KePCAT_na_RerFlrShellCp
                                         * Referenced by: '<S1250>/Constant57'
                                         * ���ŵذ����ֵ
                                         */
extern real32_T KePCAT_na_RerFlrShellEle;/* Variable: KePCAT_na_RerFlrShellEle
                                          * Referenced by: '<S1257>/Constant21'
                                          * ���ŵذ�߶Ƚ�ֵ
                                          */
extern real32_T KePCAT_na_RerFlrShellHtCndvty;
                                      /* Variable: KePCAT_na_RerFlrShellHtCndvty
                                       * Referenced by:
                                       *   '<S1254>/Constant21'
                                       *   '<S1262>/Constant18'
                                       * ���ŵذ嵼��ϵ��
                                       */
extern real32_T KePCAT_na_RerFlrShellMass;/* Variable: KePCAT_na_RerFlrShellMass
                                           * Referenced by: '<S1251>/Constant39'
                                           * ���ŵذ�����
                                           */
extern real32_T KePCAT_na_RerFlrShellThick;/* Variable: KePCAT_na_RerFlrShellThick
                                            * Referenced by: '<S1255>/Constant18'
                                            * ���ŵذ���ֵ
                                            */
extern real32_T KePCAT_na_RerFlrSunDitriFctr;/* Variable: KePCAT_na_RerFlrSunDitriFctr
                                              * Referenced by: '<S1252>/Constant21'
                                              * ���ŵذ������ֲ�ϵ��
                                              */
extern real32_T KePCAT_na_RerFlrSunabsFctr;/* Variable: KePCAT_na_RerFlrSunabsFctr
                                            * Referenced by: '<S1258>/Constant21'
                                            * ���ŵذ�����������
                                            */
extern real32_T KePCAT_na_RerFlrSunabsFctrExtr;
                                     /* Variable: KePCAT_na_RerFlrSunabsFctrExtr
                                      * Referenced by: '<S1259>/Constant21'
                                      * ���ŵذ��������������ϵ��
                                      */
extern real32_T KePCAT_na_RerFlrWidTempExtrEfctCoef;
                                /* Variable: KePCAT_na_RerFlrWidTempExtrEfctCoef
                                 * Referenced by:
                                 *   '<S1204>/Constant47'
                                 *   '<S1215>/Constant47'
                                 * �����¶ȶԶ��ŵذ��¶�Ӱ��ϵ��
                                 */
extern real32_T KePCAT_na_RerFlrWidTempIntrEfctCoef;
                                /* Variable: KePCAT_na_RerFlrWidTempIntrEfctCoef
                                 * Referenced by:
                                 *   '<S1205>/Constant18'
                                 *   '<S1216>/Constant47'
                                 * �����¶ȶԶ��ŵذ��¶�Ӱ��ϵ��
                                 */
extern real32_T KePCAT_na_RerRoofAmbTempExtrEfctCoef;
                               /* Variable: KePCAT_na_RerRoofAmbTempExtrEfctCoef
                                * Referenced by:
                                *   '<S1204>/Constant17'
                                *   '<S1215>/Constant17'
                                * ���¶Զ��ų����¶�Ӱ��ϵ��
                                */
extern real32_T KePCAT_na_RerRoofAmbTempIntrEfctCoef;
                               /* Variable: KePCAT_na_RerRoofAmbTempIntrEfctCoef
                                * Referenced by:
                                *   '<S1205>/Constant64'
                                *   '<S1216>/Constant17'
                                * ���¶Զ��ų����¶�Ӱ��ϵ��
                                */
extern real32_T KePCAT_na_RerRoofDuctTempExtrEfctCoef;
                              /* Variable: KePCAT_na_RerRoofDuctTempExtrEfctCoef
                               * Referenced by:
                               *   '<S1204>/Constant28'
                               *   '<S1215>/Constant28'
                               * ������¶ȶԶ��ų����¶�Ӱ��ϵ��
                               */
extern real32_T KePCAT_na_RerRoofDuctTempIntrEfctCoef;
                              /* Variable: KePCAT_na_RerRoofDuctTempIntrEfctCoef
                               * Referenced by:
                               *   '<S1205>/Constant28'
                               *   '<S1216>/Constant28'
                               * ������¶ȶԶ��ų����¶�Ӱ��ϵ��
                               */
extern real32_T KePCAT_na_RerRoofShellArea;/* Variable: KePCAT_na_RerRoofShellArea
                                            * Referenced by: '<S1253>/Constant20'
                                            * ���ų��������
                                            */
extern real32_T KePCAT_na_RerRoofShellAzi;/* Variable: KePCAT_na_RerRoofShellAzi
                                           * Referenced by: '<S1256>/Constant20'
                                           * ���ų�����λ��ֵ
                                           */
extern real32_T KePCAT_na_RerRoofShellCp;/* Variable: KePCAT_na_RerRoofShellCp
                                          * Referenced by: '<S1250>/Constant56'
                                          * ���ų�������ֵ
                                          */
extern real32_T KePCAT_na_RerRoofShellEle;/* Variable: KePCAT_na_RerRoofShellEle
                                           * Referenced by: '<S1257>/Constant20'
                                           * ���ų����߶Ƚ�ֵ
                                           */
extern real32_T KePCAT_na_RerRoofShellHtCndvty;
                                     /* Variable: KePCAT_na_RerRoofShellHtCndvty
                                      * Referenced by:
                                      *   '<S1254>/Constant20'
                                      *   '<S1262>/Constant17'
                                      * ���ų�������ϵ��
                                      */
extern real32_T KePCAT_na_RerRoofShellMass;/* Variable: KePCAT_na_RerRoofShellMass
                                            * Referenced by: '<S1251>/Constant38'
                                            * ���ų�������
                                            */
extern real32_T KePCAT_na_RerRoofShellThick;/* Variable: KePCAT_na_RerRoofShellThick
                                             * Referenced by: '<S1255>/Constant17'
                                             * ���ų������ֵ
                                             */
extern real32_T KePCAT_na_RerRoofSunDitriFctr;
                                      /* Variable: KePCAT_na_RerRoofSunDitriFctr
                                       * Referenced by: '<S1252>/Constant20'
                                       * ���ų���������ֲ�ϵ��
                                       */
extern real32_T KePCAT_na_RerRoofSunabsFctr;/* Variable: KePCAT_na_RerRoofSunabsFctr
                                             * Referenced by: '<S1258>/Constant20'
                                             * ���ų�������������
                                             */
extern real32_T KePCAT_na_RerRoofSunabsFctrExtr;
                                    /* Variable: KePCAT_na_RerRoofSunabsFctrExtr
                                     * Referenced by: '<S1259>/Constant20'
                                     * ���ų����������������ϵ��
                                     */
extern real32_T KePCAT_na_RerRoofWidTempExtrEfctCoef;
                               /* Variable: KePCAT_na_RerRoofWidTempExtrEfctCoef
                                * Referenced by:
                                *   '<S1204>/Constant46'
                                *   '<S1215>/Constant46'
                                * �����¶ȶԶ��ų����¶�Ӱ��ϵ��
                                */
extern real32_T KePCAT_na_RerRoofWidTempIntrEfctCoef;
                               /* Variable: KePCAT_na_RerRoofWidTempIntrEfctCoef
                                * Referenced by:
                                *   '<S1205>/Constant17'
                                *   '<S1216>/Constant46'
                                * �����¶ȶԶ��ų����¶�Ӱ��ϵ��
                                */
extern real32_T KePCAT_na_RerSeatAmbTempExtrEfctCoef;
                               /* Variable: KePCAT_na_RerSeatAmbTempExtrEfctCoef
                                * Referenced by:
                                *   '<S1204>/Constant14'
                                *   '<S1215>/Constant14'
                                * ���¶Զ��������¶�Ӱ��ϵ��
                                */
extern real32_T KePCAT_na_RerSeatAmbTempIntrEfctCoef;
                               /* Variable: KePCAT_na_RerSeatAmbTempIntrEfctCoef
                                * Referenced by:
                                *   '<S1205>/Constant61'
                                *   '<S1216>/Constant14'
                                * ���¶Զ��������¶�Ӱ��ϵ��
                                */
extern real32_T KePCAT_na_RerSeatDuctTempExtrEfctCoef;
                              /* Variable: KePCAT_na_RerSeatDuctTempExtrEfctCoef
                               * Referenced by:
                               *   '<S1204>/Constant25'
                               *   '<S1215>/Constant25'
                               * ������¶ȶԶ��������¶�Ӱ��ϵ��
                               */
extern real32_T KePCAT_na_RerSeatDuctTempIntrEfctCoef;
                              /* Variable: KePCAT_na_RerSeatDuctTempIntrEfctCoef
                               * Referenced by:
                               *   '<S1205>/Constant25'
                               *   '<S1216>/Constant25'
                               * ������¶ȶԶ��������¶�Ӱ��ϵ��
                               */
extern real32_T KePCAT_na_RerSeatShellArea;/* Variable: KePCAT_na_RerSeatShellArea
                                            * Referenced by: '<S1253>/Constant17'
                                            * �������α����
                                            */
extern real32_T KePCAT_na_RerSeatShellAzi;/* Variable: KePCAT_na_RerSeatShellAzi
                                           * Referenced by: '<S1256>/Constant17'
                                           * �������η�λ��ֵ
                                           */
extern real32_T KePCAT_na_RerSeatShellCp;/* Variable: KePCAT_na_RerSeatShellCp
                                          * Referenced by: '<S1250>/Constant53'
                                          * �������α���ֵ
                                          */
extern real32_T KePCAT_na_RerSeatShellEle;/* Variable: KePCAT_na_RerSeatShellEle
                                           * Referenced by: '<S1257>/Constant17'
                                           * �������θ߶Ƚ�ֵ
                                           */
extern real32_T KePCAT_na_RerSeatShellHtCndvty;
                                     /* Variable: KePCAT_na_RerSeatShellHtCndvty
                                      * Referenced by:
                                      *   '<S1254>/Constant17'
                                      *   '<S1262>/Constant14'
                                      * �������ε���ϵ��
                                      */
extern real32_T KePCAT_na_RerSeatShellMass;/* Variable: KePCAT_na_RerSeatShellMass
                                            * Referenced by: '<S1251>/Constant35'
                                            * ������������
                                            */
extern real32_T KePCAT_na_RerSeatShellThick;/* Variable: KePCAT_na_RerSeatShellThick
                                             * Referenced by: '<S1255>/Constant14'
                                             * �������κ��ֵ
                                             */
extern real32_T KePCAT_na_RerSeatSunDitriFctr;
                                      /* Variable: KePCAT_na_RerSeatSunDitriFctr
                                       * Referenced by: '<S1252>/Constant17'
                                       * �������ε�����ֲ�ϵ��
                                       */
extern real32_T KePCAT_na_RerSeatSunabsFctr;/* Variable: KePCAT_na_RerSeatSunabsFctr
                                             * Referenced by: '<S1258>/Constant17'
                                             * ������������������
                                             */
extern real32_T KePCAT_na_RerSeatSunabsFctrExtr;
                                    /* Variable: KePCAT_na_RerSeatSunabsFctrExtr
                                     * Referenced by: '<S1259>/Constant17'
                                     * ���������������������ϵ��
                                     */
extern real32_T KePCAT_na_RerSeatWidTempExtrEfctCoef;
                               /* Variable: KePCAT_na_RerSeatWidTempExtrEfctCoef
                                * Referenced by:
                                *   '<S1204>/Constant43'
                                *   '<S1215>/Constant43'
                                * �����¶ȶԶ��������¶�Ӱ��ϵ��
                                */
extern real32_T KePCAT_na_RerSeatWidTempIntrEfctCoef;
                               /* Variable: KePCAT_na_RerSeatWidTempIntrEfctCoef
                                * Referenced by:
                                *   '<S1205>/Constant14'
                                *   '<S1216>/Constant43'
                                * �����¶ȶԶ��������¶�Ӱ��ϵ��
                                */
extern real32_T KePCAT_na_RerWindAmbTempExtrEfctCoef;
                               /* Variable: KePCAT_na_RerWindAmbTempExtrEfctCoef
                                * Referenced by:
                                *   '<S1204>/Constant7'
                                *   '<S1215>/Constant7'
                                * ���¶Ժ󵵷粣���¶�Ӱ��ϵ��
                                */
extern real32_T KePCAT_na_RerWindAmbTempIntrEfctCoef;
                               /* Variable: KePCAT_na_RerWindAmbTempIntrEfctCoef
                                * Referenced by:
                                *   '<S1205>/Constant70'
                                *   '<S1216>/Constant7'
                                * ���¶Ժ󵵷粣���¶�Ӱ��ϵ��
                                */
extern real32_T KePCAT_na_RerWindDuctTempExtrEfctCoef;
                              /* Variable: KePCAT_na_RerWindDuctTempExtrEfctCoef
                               * Referenced by:
                               *   '<S1204>/Constant34'
                               *   '<S1215>/Constant34'
                               * ������¶ȶԺ󵵷粣���¶�Ӱ��ϵ��
                               */
extern real32_T KePCAT_na_RerWindDuctTempIntrEfctCoef;
                              /* Variable: KePCAT_na_RerWindDuctTempIntrEfctCoef
                               * Referenced by:
                               *   '<S1205>/Constant34'
                               *   '<S1216>/Constant34'
                               * ������¶ȶԺ󵵷粣���¶�Ӱ��ϵ��
                               */
extern real32_T KePCAT_na_RerWindShellArea;/* Variable: KePCAT_na_RerWindShellArea
                                            * Referenced by: '<S1253>/Constant26'
                                            * �󵵷粣�������
                                            */
extern real32_T KePCAT_na_RerWindShellAzi;/* Variable: KePCAT_na_RerWindShellAzi
                                           * Referenced by: '<S1256>/Constant26'
                                           * �󵵷粣����λ��ֵ
                                           */
extern real32_T KePCAT_na_RerWindShellCp;/* Variable: KePCAT_na_RerWindShellCp
                                          * Referenced by: '<S1250>/Constant62'
                                          * �󵵷粣������ֵ
                                          */
extern real32_T KePCAT_na_RerWindShellEle;/* Variable: KePCAT_na_RerWindShellEle
                                           * Referenced by: '<S1257>/Constant26'
                                           * �󵵷粣���߶Ƚ�ֵ
                                           */
extern real32_T KePCAT_na_RerWindShellHtCndvty;
                                     /* Variable: KePCAT_na_RerWindShellHtCndvty
                                      * Referenced by:
                                      *   '<S1254>/Constant26'
                                      *   '<S1262>/Constant23'
                                      * �󵵷粣������ϵ��
                                      */
extern real32_T KePCAT_na_RerWindShellMass;/* Variable: KePCAT_na_RerWindShellMass
                                            * Referenced by: '<S1251>/Constant44'
                                            * �󵵷粣������
                                            */
extern real32_T KePCAT_na_RerWindShellThick;/* Variable: KePCAT_na_RerWindShellThick
                                             * Referenced by: '<S1255>/Constant6'
                                             * �󵵷粣�����ֵ
                                             */
extern real32_T KePCAT_na_RerWindSunDitriFctr;
                                      /* Variable: KePCAT_na_RerWindSunDitriFctr
                                       * Referenced by: '<S1252>/Constant26'
                                       * �󵵷粣��������ֲ�ϵ��
                                       */
extern real32_T KePCAT_na_RerWindSunTransFctr;
                                      /* Variable: KePCAT_na_RerWindSunTransFctr
                                       * Referenced by: '<S1260>/Constant26'
                                       * �󵵷粣����������͸����
                                       */
extern real32_T KePCAT_na_RerWindSunabsFctr;/* Variable: KePCAT_na_RerWindSunabsFctr
                                             * Referenced by: '<S1258>/Constant26'
                                             * �󵵷粣������������
                                             */
extern real32_T KePCAT_na_RerWindSunabsFctrExtr;
                                    /* Variable: KePCAT_na_RerWindSunabsFctrExtr
                                     * Referenced by: '<S1259>/Constant26'
                                     * �󵵷粣���������������ϵ��
                                     */
extern real32_T KePCAT_na_RerWindWidTempExtrEfctCoef;
                               /* Variable: KePCAT_na_RerWindWidTempExtrEfctCoef
                                * Referenced by:
                                *   '<S1204>/Constant52'
                                *   '<S1215>/Constant52'
                                * �����¶ȶԺ󵵷粣���¶�Ӱ��ϵ��
                                */
extern real32_T KePCAT_na_RerWindWidTempIntrEfctCoef;
                               /* Variable: KePCAT_na_RerWindWidTempIntrEfctCoef
                                * Referenced by:
                                *   '<S1205>/Constant7'
                                *   '<S1216>/Constant52'
                                * �����¶ȶԺ󵵷粣���¶�Ӱ��ϵ��
                                */
extern real32_T KePCAT_na_SddAmbTempExtrEfctCoef;
                                   /* Variable: KePCAT_na_SddAmbTempExtrEfctCoef
                                    * Referenced by:
                                    *   '<S1204>/Constant9'
                                    *   '<S1215>/Constant9'
                                    * ���¶Զ������ݳ����¶�Ӱ��ϵ��
                                    */
extern real32_T KePCAT_na_SddAmbTempIntrEfctCoef;
                                   /* Variable: KePCAT_na_SddAmbTempIntrEfctCoef
                                    * Referenced by:
                                    *   '<S1205>/Constant72'
                                    *   '<S1216>/Constant9'
                                    * ���¶Զ������ݳ����¶�Ӱ��ϵ��
                                    */
extern real32_T KePCAT_na_SddDuctTempExtrEfctCoef;
                                  /* Variable: KePCAT_na_SddDuctTempExtrEfctCoef
                                   * Referenced by:
                                   *   '<S1204>/Constant36'
                                   *   '<S1215>/Constant36'
                                   * ������¶ȶԶ������ݳ����¶�Ӱ��ϵ��
                                   */
extern real32_T KePCAT_na_SddDuctTempIntrEfctCoef;
                                  /* Variable: KePCAT_na_SddDuctTempIntrEfctCoef
                                   * Referenced by:
                                   *   '<S1205>/Constant36'
                                   *   '<S1216>/Constant36'
                                   * ������¶ȶԶ������ݳ����¶�Ӱ��ϵ��
                                   */
extern real32_T KePCAT_na_SddHiCoef_D[4];/* Variable: KePCAT_na_SddHiCoef_D
                                          * Referenced by: '<S1245>/KePCAT_na_SddHiCoef_D'
                                          * �������ݳ��Ŷ�������ϵ��
                                          */
extern real32_T KePCAT_na_SddShellArea;/* Variable: KePCAT_na_SddShellArea
                                        * Referenced by: '<S1253>/Constant28'
                                        * �������ݳ��ű����
                                        */
extern real32_T KePCAT_na_SddShellAzi; /* Variable: KePCAT_na_SddShellAzi
                                        * Referenced by: '<S1256>/Constant28'
                                        * �������ݳ��ŷ�λ��ֵ
                                        */
extern real32_T KePCAT_na_SddShellCp;  /* Variable: KePCAT_na_SddShellCp
                                        * Referenced by: '<S1250>/Constant64'
                                        * �������ݳ��ű���ֵ
                                        */
extern real32_T KePCAT_na_SddShellEle; /* Variable: KePCAT_na_SddShellEle
                                        * Referenced by: '<S1257>/Constant28'
                                        * �������ݳ��Ÿ߶Ƚ�ֵ
                                        */
extern real32_T KePCAT_na_SddShellHtCndvty;/* Variable: KePCAT_na_SddShellHtCndvty
                                            * Referenced by:
                                            *   '<S1254>/Constant28'
                                            *   '<S1262>/Constant25'
                                            * �������ݳ��ŵ���ϵ��
                                            */
extern real32_T KePCAT_na_SddShellMass;/* Variable: KePCAT_na_SddShellMass
                                        * Referenced by: '<S1251>/Constant46'
                                        * �������ݳ�������
                                        */
extern real32_T KePCAT_na_SddShellThick;/* Variable: KePCAT_na_SddShellThick
                                         * Referenced by: '<S1255>/Constant8'
                                         * �������ݳ��ź��ֵ
                                         */
extern real32_T KePCAT_na_SddSunDitriFctr;/* Variable: KePCAT_na_SddSunDitriFctr
                                           * Referenced by: '<S1252>/Constant28'
                                           * �������ݳ��ŵ�����ֲ�ϵ��
                                           */
extern real32_T KePCAT_na_SddSunabsFctr;/* Variable: KePCAT_na_SddSunabsFctr
                                         * Referenced by: '<S1258>/Constant28'
                                         * �������ݳ�������������
                                         */
extern real32_T KePCAT_na_SddSunabsFctrExtr;/* Variable: KePCAT_na_SddSunabsFctrExtr
                                             * Referenced by: '<S1259>/Constant28'
                                             * �������ݳ����������������ϵ��
                                             */
extern real32_T KePCAT_na_SddWidTempExtrEfctCoef;
                                   /* Variable: KePCAT_na_SddWidTempExtrEfctCoef
                                    * Referenced by:
                                    *   '<S1204>/Constant54'
                                    *   '<S1215>/Constant54'
                                    * �����¶ȶԶ������ݳ����¶�Ӱ��ϵ��
                                    */
extern real32_T KePCAT_na_SddWidTempIntrEfctCoef;
                                   /* Variable: KePCAT_na_SddWidTempIntrEfctCoef
                                    * Referenced by:
                                    *   '<S1205>/Constant9'
                                    *   '<S1216>/Constant54'
                                    * �����¶ȶԶ������ݳ����¶�Ӱ��ϵ��
                                    */
extern real32_T KePCAT_na_SdsAmbTempExtrEfctCoef;
                                   /* Variable: KePCAT_na_SdsAmbTempExtrEfctCoef
                                    * Referenced by:
                                    *   '<S1204>/Constant3'
                                    *   '<S1215>/Constant3'
                                    * ���¶Զ������ݲര�¶�Ӱ��ϵ��
                                    */
extern real32_T KePCAT_na_SdsAmbTempIntrEfctCoef;
                                   /* Variable: KePCAT_na_SdsAmbTempIntrEfctCoef
                                    * Referenced by:
                                    *   '<S1205>/Constant66'
                                    *   '<S1216>/Constant3'
                                    * ���¶Զ������ݲര�¶�Ӱ��ϵ��
                                    */
extern real32_T KePCAT_na_SdsDuctTempExtrEfctCoef;
                                  /* Variable: KePCAT_na_SdsDuctTempExtrEfctCoef
                                   * Referenced by:
                                   *   '<S1204>/Constant30'
                                   *   '<S1215>/Constant30'
                                   * ������¶ȶԶ������ݲര�¶�Ӱ��ϵ��
                                   */
extern real32_T KePCAT_na_SdsDuctTempIntrEfctCoef;
                                  /* Variable: KePCAT_na_SdsDuctTempIntrEfctCoef
                                   * Referenced by:
                                   *   '<S1205>/Constant30'
                                   *   '<S1216>/Constant30'
                                   * ������¶ȶԶ������ݲര�¶�Ӱ��ϵ��
                                   */
extern real32_T KePCAT_na_SdsHiCoef_D[4];/* Variable: KePCAT_na_SdsHiCoef_D
                                          * Referenced by: '<S1245>/KePCAT_na_SdsHiCoef_D'
                                          * �������ݲര��������ϵ�����ֵ
                                          */
extern real32_T KePCAT_na_SdsShellArea;/* Variable: KePCAT_na_SdsShellArea
                                        * Referenced by: '<S1253>/Constant22'
                                        * �������ݲര�����
                                        */
extern real32_T KePCAT_na_SdsShellAzi; /* Variable: KePCAT_na_SdsShellAzi
                                        * Referenced by: '<S1256>/Constant22'
                                        * �������ݲര��λ��ֵ
                                        */
extern real32_T KePCAT_na_SdsShellCp;  /* Variable: KePCAT_na_SdsShellCp
                                        * Referenced by: '<S1250>/Constant58'
                                        * �������ݲര����ֵ
                                        */
extern real32_T KePCAT_na_SdsShellEle; /* Variable: KePCAT_na_SdsShellEle
                                        * Referenced by: '<S1257>/Constant22'
                                        * �������ݲര�߶Ƚ�ֵ
                                        */
extern real32_T KePCAT_na_SdsShellHtCndvty;/* Variable: KePCAT_na_SdsShellHtCndvty
                                            * Referenced by:
                                            *   '<S1254>/Constant22'
                                            *   '<S1262>/Constant19'
                                            * �������ݲര����ϵ��
                                            */
extern real32_T KePCAT_na_SdsShellMass;/* Variable: KePCAT_na_SdsShellMass
                                        * Referenced by: '<S1251>/Constant40'
                                        * �������ݲര����
                                        */
extern real32_T KePCAT_na_SdsShellThick;/* Variable: KePCAT_na_SdsShellThick
                                         * Referenced by: '<S1255>/Constant2'
                                         * �������ݲര���ֵ
                                         */
extern real32_T KePCAT_na_SdsSunDitriFctr;/* Variable: KePCAT_na_SdsSunDitriFctr
                                           * Referenced by: '<S1252>/Constant22'
                                           * �������ݲര������ֲ�ϵ��
                                           */
extern real32_T KePCAT_na_SdsSunTransFctr;/* Variable: KePCAT_na_SdsSunTransFctr
                                           * Referenced by: '<S1260>/Constant22'
                                           * �������ݲര��������͸����
                                           */
extern real32_T KePCAT_na_SdsSunabsFctr;/* Variable: KePCAT_na_SdsSunabsFctr
                                         * Referenced by: '<S1258>/Constant22'
                                         * �������ݲര����������
                                         */
extern real32_T KePCAT_na_SdsSunabsFctrExtr;/* Variable: KePCAT_na_SdsSunabsFctrExtr
                                             * Referenced by: '<S1259>/Constant22'
                                             * �������ݲര�������������ϵ��
                                             */
extern real32_T KePCAT_na_SdsWidTempExtrEfctCoef;
                                   /* Variable: KePCAT_na_SdsWidTempExtrEfctCoef
                                    * Referenced by:
                                    *   '<S1204>/Constant48'
                                    *   '<S1215>/Constant48'
                                    * �����¶ȶԶ������ݲര�¶�Ӱ��ϵ��
                                    */
extern real32_T KePCAT_na_SdsWidTempIntrEfctCoef;
                                   /* Variable: KePCAT_na_SdsWidTempIntrEfctCoef
                                    * Referenced by:
                                    *   '<S1205>/Constant3'
                                    *   '<S1216>/Constant48'
                                    * �����¶ȶԶ������ݲര�¶�Ӱ��ϵ��
                                    */
extern real32_T KePCAT_na_ShellArea8Rv;/* Variable: KePCAT_na_ShellArea8Rv
                                        * Referenced by: '<S24>/ConstantRv8'
                                        */
extern real32_T KePCAT_na_ShellCp8Rv;  /* Variable: KePCAT_na_ShellCp8Rv
                                        * Referenced by: '<S24>/ConstantRv12'
                                        */
extern real32_T KePCAT_na_ShellHtCndvty8Rv;/* Variable: KePCAT_na_ShellHtCndvty8Rv
                                            * Referenced by: '<S24>/ConstantRv13'
                                            */
extern real32_T KePCAT_na_ShellMass8Rv;/* Variable: KePCAT_na_ShellMass8Rv
                                        * Referenced by: '<S24>/ConstantRv11'
                                        */
extern real32_T KePCAT_na_ShellThick8Rv;/* Variable: KePCAT_na_ShellThick8Rv
                                         * Referenced by: '<S24>/ConstantRv14'
                                         */
extern real32_T KePCAT_na_SpdAmbTempExtrEfctCoef;
                                   /* Variable: KePCAT_na_SpdAmbTempExtrEfctCoef
                                    * Referenced by:
                                    *   '<S1204>/Constant10'
                                    *   '<S1215>/Constant10'
                                    * ���¶Զ��Ÿ��ݳ����¶�Ӱ��ϵ��
                                    */
extern real32_T KePCAT_na_SpdAmbTempIntrEfctCoef;
                                   /* Variable: KePCAT_na_SpdAmbTempIntrEfctCoef
                                    * Referenced by:
                                    *   '<S1205>/Constant57'
                                    *   '<S1216>/Constant10'
                                    * ���¶Զ��Ÿ��ݳ����¶�Ӱ��ϵ��
                                    */
extern real32_T KePCAT_na_SpdDuctTempExtrEfctCoef;
                                  /* Variable: KePCAT_na_SpdDuctTempExtrEfctCoef
                                   * Referenced by:
                                   *   '<S1204>/Constant21'
                                   *   '<S1215>/Constant21'
                                   * ������¶ȶԶ��Ÿ��ݳ����¶�Ӱ��ϵ��
                                   */
extern real32_T KePCAT_na_SpdDuctTempIntrEfctCoef;
                                  /* Variable: KePCAT_na_SpdDuctTempIntrEfctCoef
                                   * Referenced by:
                                   *   '<S1205>/Constant21'
                                   *   '<S1216>/Constant21'
                                   * ������¶ȶԶ��Ÿ��ݳ����¶�Ӱ��ϵ��
                                   */
extern real32_T KePCAT_na_SpdShellArea;/* Variable: KePCAT_na_SpdShellArea
                                        * Referenced by: '<S1253>/Constant13'
                                        * ���Ÿ��ݳ��ű����
                                        */
extern real32_T KePCAT_na_SpdShellAzi; /* Variable: KePCAT_na_SpdShellAzi
                                        * Referenced by: '<S1256>/Constant13'
                                        * ���Ÿ��ݳ��ŷ�λ��ֵ
                                        */
extern real32_T KePCAT_na_SpdShellCp;  /* Variable: KePCAT_na_SpdShellCp
                                        * Referenced by: '<S1250>/Constant49'
                                        * ���Ÿ��ݳ��ű���ֵ
                                        */
extern real32_T KePCAT_na_SpdShellEle; /* Variable: KePCAT_na_SpdShellEle
                                        * Referenced by: '<S1257>/Constant13'
                                        * ���Ÿ��ݳ��Ÿ߶Ƚ�ֵ
                                        */
extern real32_T KePCAT_na_SpdShellHtCndvty;/* Variable: KePCAT_na_SpdShellHtCndvty
                                            * Referenced by:
                                            *   '<S1254>/Constant13'
                                            *   '<S1262>/Constant10'
                                            * ���Ÿ��ݳ��ŵ���ϵ��
                                            */
extern real32_T KePCAT_na_SpdShellMass;/* Variable: KePCAT_na_SpdShellMass
                                        * Referenced by: '<S1251>/Constant31'
                                        * ���Ÿ��ݳ�������
                                        */
extern real32_T KePCAT_na_SpdShellThick;/* Variable: KePCAT_na_SpdShellThick
                                         * Referenced by: '<S1255>/Constant10'
                                         * ���Ÿ��ݳ��ź��ֵ
                                         */
extern real32_T KePCAT_na_SpdSunDitriFctr;/* Variable: KePCAT_na_SpdSunDitriFctr
                                           * Referenced by: '<S1252>/Constant13'
                                           * ���Ÿ��ݳ��ŵ�����ֲ�ϵ��
                                           */
extern real32_T KePCAT_na_SpdSunabsFctr;/* Variable: KePCAT_na_SpdSunabsFctr
                                         * Referenced by: '<S1258>/Constant13'
                                         * ���Ÿ��ݳ�������������
                                         */
extern real32_T KePCAT_na_SpdSunabsFctrExtr;/* Variable: KePCAT_na_SpdSunabsFctrExtr
                                             * Referenced by: '<S1259>/Constant13'
                                             * ���Ÿ��ݳ����������������ϵ��
                                             */
extern real32_T KePCAT_na_SpdWidTempExtrEfctCoef;
                                   /* Variable: KePCAT_na_SpdWidTempExtrEfctCoef
                                    * Referenced by:
                                    *   '<S1204>/Constant39'
                                    *   '<S1215>/Constant39'
                                    * �����¶ȶԶ��Ÿ��ݳ����¶�Ӱ��ϵ��
                                    */
extern real32_T KePCAT_na_SpdWidTempIntrEfctCoef;
                                   /* Variable: KePCAT_na_SpdWidTempIntrEfctCoef
                                    * Referenced by:
                                    *   '<S1205>/Constant10'
                                    *   '<S1216>/Constant39'
                                    * �����¶ȶԶ��Ÿ��ݳ����¶�Ӱ��ϵ��
                                    */
extern real32_T KePCAT_na_SpsAmbTempExtrEfctCoef;
                                   /* Variable: KePCAT_na_SpsAmbTempExtrEfctCoef
                                    * Referenced by:
                                    *   '<S1204>/Constant5'
                                    *   '<S1215>/Constant5'
                                    * ���¶Զ��Ÿ��ݲര�¶�Ӱ��ϵ��
                                    */
extern real32_T KePCAT_na_SpsAmbTempIntrEfctCoef;
                                   /* Variable: KePCAT_na_SpsAmbTempIntrEfctCoef
                                    * Referenced by:
                                    *   '<S1205>/Constant68'
                                    *   '<S1216>/Constant5'
                                    * ���¶Զ��Ÿ��ݲര�¶�Ӱ��ϵ��
                                    */
extern real32_T KePCAT_na_SpsDuctTempExtrEfctCoef;
                                  /* Variable: KePCAT_na_SpsDuctTempExtrEfctCoef
                                   * Referenced by:
                                   *   '<S1204>/Constant32'
                                   *   '<S1215>/Constant32'
                                   * ������¶ȶԶ��Ÿ��ݲര�¶�Ӱ��ϵ��
                                   */
extern real32_T KePCAT_na_SpsDuctTempIntrEfctCoef;
                                  /* Variable: KePCAT_na_SpsDuctTempIntrEfctCoef
                                   * Referenced by:
                                   *   '<S1205>/Constant32'
                                   *   '<S1216>/Constant32'
                                   * ������¶ȶԶ��Ÿ��ݲര�¶�Ӱ��ϵ��
                                   */
extern real32_T KePCAT_na_SpsShellArea;/* Variable: KePCAT_na_SpsShellArea
                                        * Referenced by: '<S1253>/Constant24'
                                        * ���Ÿ��ݲര�����
                                        */
extern real32_T KePCAT_na_SpsShellAzi; /* Variable: KePCAT_na_SpsShellAzi
                                        * Referenced by: '<S1256>/Constant24'
                                        * ���Ÿ��ݲര��λ��ֵ
                                        */
extern real32_T KePCAT_na_SpsShellCp;  /* Variable: KePCAT_na_SpsShellCp
                                        * Referenced by: '<S1250>/Constant60'
                                        * ���Ÿ��ݲര����ֵ
                                        */
extern real32_T KePCAT_na_SpsShellEle; /* Variable: KePCAT_na_SpsShellEle
                                        * Referenced by: '<S1257>/Constant24'
                                        * ���Ÿ��ݲര�߶Ƚ�ֵ
                                        */
extern real32_T KePCAT_na_SpsShellHtCndvty;/* Variable: KePCAT_na_SpsShellHtCndvty
                                            * Referenced by:
                                            *   '<S1254>/Constant24'
                                            *   '<S1262>/Constant21'
                                            * ���Ÿ��ݲര����ϵ��
                                            */
extern real32_T KePCAT_na_SpsShellMass;/* Variable: KePCAT_na_SpsShellMass
                                        * Referenced by: '<S1251>/Constant42'
                                        * ���Ÿ��ݲര����
                                        */
extern real32_T KePCAT_na_SpsShellThick;/* Variable: KePCAT_na_SpsShellThick
                                         * Referenced by: '<S1255>/Constant4'
                                         * ���Ÿ��ݲര���ֵ
                                         */
extern real32_T KePCAT_na_SpsSunDitriFctr;/* Variable: KePCAT_na_SpsSunDitriFctr
                                           * Referenced by: '<S1252>/Constant24'
                                           * ���Ÿ��ݲര������ֲ�ϵ��
                                           */
extern real32_T KePCAT_na_SpsSunTransFctr;/* Variable: KePCAT_na_SpsSunTransFctr
                                           * Referenced by: '<S1260>/Constant24'
                                           * ���Ÿ��ݲര��������͸����
                                           */
extern real32_T KePCAT_na_SpsSunabsFctr;/* Variable: KePCAT_na_SpsSunabsFctr
                                         * Referenced by: '<S1258>/Constant24'
                                         * ���Ÿ��ݲര����������
                                         */
extern real32_T KePCAT_na_SpsSunabsFctrExtr;/* Variable: KePCAT_na_SpsSunabsFctrExtr
                                             * Referenced by: '<S1259>/Constant24'
                                             * ���Ÿ��ݲര�������������ϵ��
                                             */
extern real32_T KePCAT_na_SpsWidTempExtrEfctCoef;
                                   /* Variable: KePCAT_na_SpsWidTempExtrEfctCoef
                                    * Referenced by:
                                    *   '<S1204>/Constant50'
                                    *   '<S1215>/Constant50'
                                    * �����¶ȶԶ��Ÿ��ݲര�¶�Ӱ��ϵ��
                                    */
extern real32_T KePCAT_na_SpsWidTempIntrEfctCoef;
                                   /* Variable: KePCAT_na_SpsWidTempIntrEfctCoef
                                    * Referenced by:
                                    *   '<S1205>/Constant5'
                                    *   '<S1216>/Constant50'
                                    * �����¶ȶԶ��Ÿ��ݲര�¶�Ӱ��ϵ��
                                    */
extern real32_T KePCAT_na_WidTempBreaTempEfctCoef;
                                  /* Variable: KePCAT_na_WidTempBreaTempEfctCoef
                                   * Referenced by: '<S1218>/Constant1'
                                   * �����¶ȶԺ������¶�Ӱ��ϵ��
                                   */
extern real32_T KePCAT_pct_AirFlowFdFoot_D[7];/* Variable: KePCAT_pct_AirFlowFdFoot_D
                                               * Referenced by: '<S1242>/KePCAT_pct_AirFlowFdFoot_D'
                                               * ���ݴ��ų���ڳ������ϵ�����ֵ
                                               */
extern real32_T KePCAT_pct_AirFlowFdFoot_X[7];/* Variable: KePCAT_pct_AirFlowFdFoot_X
                                               * Referenced by: '<S1242>/KePCAT_pct_AirFlowFdFoot_D'
                                               * VeCADC_na_FrntDrvDistbnMode
                                               */
extern real32_T KePCAT_pct_AirFlowFdVentLC_D[7];/* Variable: KePCAT_pct_AirFlowFdVentLC_D
                                                 * Referenced by: '<S1242>/KePCAT_pct_AirFlowFdVentLC_D'
                                                 * �������������ڳ������ϵ�����ֵ
                                                 */
extern real32_T KePCAT_pct_AirFlowFdVentLC_X[7];/* Variable: KePCAT_pct_AirFlowFdVentLC_X
                                                 * Referenced by: '<S1242>/KePCAT_pct_AirFlowFdVentLC_D'
                                                 * VeCADC_na_FrntDrvDistbnMode
                                                 */
extern real32_T KePCAT_pct_AirFlowFdVentLS_D[7];/* Variable: KePCAT_pct_AirFlowFdVentLS_D
                                                 * Referenced by: '<S1242>/KePCAT_pct_AirFlowFdVentLS_D'
                                                 * ���ݲവ�����ڳ������ϵ�����ֵ
                                                 */
extern real32_T KePCAT_pct_AirFlowFdVentLS_X[7];/* Variable: KePCAT_pct_AirFlowFdVentLS_X
                                                 * Referenced by: '<S1242>/KePCAT_pct_AirFlowFdVentLS_D'
                                                 * VeCADC_na_FrntDrvDistbnMode
                                                 */
extern real32_T KePCAT_pct_AirFlowFpFoot_D[21];/* Variable: KePCAT_pct_AirFlowFpFoot_D
                                                * Referenced by: '<S1242>/KePCAT_pct_AirFlowFpFoot_D'
                                                * ���ݴ��ų���ڳ������ϵ�����ֵ
                                                */
extern real32_T KePCAT_pct_AirFlowFpVentRC_D[21];/* Variable: KePCAT_pct_AirFlowFpVentRC_D
                                                  * Referenced by: '<S1242>/KePCAT_pct_AirFlowFpVentRC_D'
                                                  * �������Ҵ������ڳ������ϵ�����ֵ
                                                  */
extern real32_T KePCAT_pct_AirFlowFpVentRS_D[21];/* Variable: KePCAT_pct_AirFlowFpVentRS_D
                                                  * Referenced by: '<S1242>/KePCAT_pct_AirFlowFpVentRS_D'
                                                  * �������Ҵ������ڳ������ϵ�����ֵ
                                                  */
extern real32_T KePCAT_pct_AirFlowPercDef_D[7];/* Variable: KePCAT_pct_AirFlowPercDef_D
                                                * Referenced by: '<S1242>/KePCAT_pct_AirFlowPercDef_D'
                                                * ��˪��ڳ������ϵ�����ֵ
                                                */
extern real32_T KePCAT_pct_AirFlowPercDef_X[7];/* Variable: KePCAT_pct_AirFlowPercDef_X
                                                * Referenced by: '<S1242>/KePCAT_pct_AirFlowPercDef_D'
                                                * VeCADC_na_FrntDrvDistbnMode
                                                */
extern real32_T KePCAT_pct_AirFlowSdFoot_D[7];/* Variable: KePCAT_pct_AirFlowSdFoot_D
                                               * Referenced by: '<S1242>/KePCAT_pct_AirFlowSdFoot_D'
                                               * �������ݴ��ų���ڳ������ϵ�����ֵ
                                               */
extern real32_T KePCAT_pct_AirFlowSdFoot_X[7];/* Variable: KePCAT_pct_AirFlowSdFoot_X
                                               * Referenced by: '<S1242>/KePCAT_pct_AirFlowSdFoot_D'
                                               * VeCADC_na_SecDrvDistbnMode
                                               */
extern real32_T KePCAT_pct_AirFlowSdVent_D[7];/* Variable: KePCAT_pct_AirFlowSdVent_D
                                               * Referenced by: '<S1242>/KePCAT_pct_AirFlowSdVent_D'
                                               * �������ݴ������ڳ������ϵ�����ֵ
                                               */
extern real32_T KePCAT_pct_AirFlowSdVent_X[7];/* Variable: KePCAT_pct_AirFlowSdVent_X
                                               * Referenced by: '<S1242>/KePCAT_pct_AirFlowSdVent_D'
                                               * VeCADC_na_SecDrvDistbnMode
                                               */
extern real32_T KePCAT_pct_AirFlowSpFoot_D[7];/* Variable: KePCAT_pct_AirFlowSpFoot_D
                                               * Referenced by: '<S1242>/KePCAT_pct_AirFlowSpFoot_D'
                                               * �������ݴ��ų���ڳ������ϵ�����ֵ
                                               */
extern real32_T KePCAT_pct_AirFlowSpFoot_X[7];/* Variable: KePCAT_pct_AirFlowSpFoot_X
                                               * Referenced by: '<S1242>/KePCAT_pct_AirFlowSpFoot_D'
                                               * VeCADC_na_SecDrvDistbnMode
                                               */
extern real32_T KePCAT_pct_ShellAzi_D[6];/* Variable: KePCAT_pct_ShellAzi_D
                                          * Referenced by: '<S1247>/KePCAT_pct_ShellAzi_D'
                                          * ���ⷽλ��ɢ������ռ�Ȳ��ֵ
                                          */
extern real32_T KePCAT_pct_ShellAzi_X[6];/* Variable: KePCAT_pct_ShellAzi_X
                                          * Referenced by: '<S1247>/KePCAT_pct_ShellAzi_D'
                                          * ͨ��VeGMZS_na_HghtAglOut
                                          */
extern real32_T KePCAT_pct_SunTransCorr_D[7];/* Variable: KePCAT_pct_SunTransCorr_D
                                              * Referenced by: '<S1247>/KePCAT_pct_SunTransCorr_D'
                                              * ����͸��ٷֱȲ��ֵ
                                              */
extern real32_T KePCAT_pct_SunTransCorr_X[7];/* Variable: KePCAT_pct_SunTransCorr_X
                                              * Referenced by: '<S1247>/KePCAT_pct_SunTransCorr_D'
                                              * �����벣������н�
                                              */
extern real32_T KePCAT_rho_AirDens_D[5];/* Variable: KePCAT_rho_AirDens_D
                                         * Referenced by:
                                         *   '<S1242>/KePCAT_rho_AirDens'
                                         *   '<S1242>/KePCAT_rho_AirDens_D'
                                         * �����ܶȲ��ֵ
                                         */
extern real32_T KePCAT_rho_AirDens_X[5];/* Variable: KePCAT_rho_AirDens_X
                                         * Referenced by:
                                         *   '<S1242>/KePCAT_rho_AirDens'
                                         *   '<S1242>/KePCAT_rho_AirDens_D'
                                         * �����¶�ֵAVG(BreaTemp)/VeSENA_T_AmbTempOut
                                         */
extern real32_T KePCAT_t_NapTimrRv;    /* Variable: KePCAT_t_NapTimrRv
                                        * Referenced by: '<S24>/ConstantRv16'
                                        */
extern real32_T KePassAirDrictionFbRv; /* Variable: KePassAirDrictionFbRv
                                        * Referenced by: '<S6>/ConstantRv59'
                                        */
extern real32_T KePassTempFlapFbRv;    /* Variable: KePassTempFlapFbRv
                                        * Referenced by: '<S6>/ConstantRv56'
                                        */
extern real32_T KeRearAirDrictionFbRv; /* Variable: KeRearAirDrictionFbRv
                                        * Referenced by: '<S6>/ConstantRv60'
                                        */
extern real32_T KeRearTempFlapFbRv;    /* Variable: KeRearTempFlapFbRv
                                        * Referenced by: '<S6>/ConstantRv57'
                                        */
extern real32_T KeRecFlapFbRvEnb;      /* Variable: KeRecFlapFbRvEnb
                                        * Referenced by: '<S6>/ConstantRv61'
                                        */
extern real32_T KeSENA_T_AmbTempOutRv; /* Variable: KeSENA_T_AmbTempOutRv
                                        * Referenced by: '<S26>/ConstantRv5'
                                        */
extern real32_T KeSENA_T_FeavpTempRv;  /* Variable: KeSENA_T_FeavpTempRv
                                        * Referenced by: '<S26>/ConstantRv4'
                                        */
extern real32_T KeSENA_T_FrtDrvFeetTempRv;/* Variable: KeSENA_T_FrtDrvFeetTempRv
                                           * Referenced by: '<S26>/ConstantRv3'
                                           */
extern real32_T KeSENA_T_FrtDrvVentTempRv;/* Variable: KeSENA_T_FrtDrvVentTempRv
                                           * Referenced by: '<S26>/ConstantRv1'
                                           */
extern real32_T KeSENA_T_FrtPassFeetTempRv;/* Variable: KeSENA_T_FrtPassFeetTempRv
                                            * Referenced by: '<S26>/ConstantRv2'
                                            */
extern real32_T KeSENA_T_FrtPassVentTempRv;/* Variable: KeSENA_T_FrtPassVentTempRv
                                            * Referenced by: '<S26>/ConstantRv16'
                                            */
extern real32_T KeSENA_T_HEXTempRv;    /* Variable: KeSENA_T_HEXTempRv
                                        * Referenced by: '<S26>/ConstantRv9'
                                        */
extern real32_T KeSENA_T_ICTRv;        /* Variable: KeSENA_T_ICTRv
                                        * Referenced by: '<S26>/ConstantRv10'
                                        */
extern real32_T KeSENA_T_SecDrvFeetTempRv;/* Variable: KeSENA_T_SecDrvFeetTempRv
                                           * Referenced by: '<S26>/ConstantRv11'
                                           */
extern real32_T KeSENA_T_SecDrvVentTempRv;/* Variable: KeSENA_T_SecDrvVentTempRv
                                           * Referenced by: '<S26>/ConstantRv12'
                                           */
extern real32_T KeSENA_T_WidShieldTempRv;/* Variable: KeSENA_T_WidShieldTempRv
                                          * Referenced by: '<S26>/ConstantRv14'
                                          */
extern real32_T KeSENA_Wpsm_FrtDrvSolarRv;/* Variable: KeSENA_Wpsm_FrtDrvSolarRv
                                           * Referenced by: '<S26>/ConstantRv6'
                                           */
extern real32_T KeSENA_Wpsm_FrtPassSolarRv;/* Variable: KeSENA_Wpsm_FrtPassSolarRv
                                            * Referenced by: '<S26>/ConstantRv7'
                                            */
extern real32_T KeSENA_Wpsm_SecDrvSolarRv;/* Variable: KeSENA_Wpsm_SecDrvSolarRv
                                           * Referenced by: '<S26>/ConstantRv8'
                                           */
extern real32_T KeSENA_pct_RelHumidityRv;/* Variable: KeSENA_pct_RelHumidityRv
                                          * Referenced by: '<S26>/ConstantRv15'
                                          */
extern real32_T KeTemp_Fevap_RawRv;    /* Variable: KeTemp_Fevap_RawRv
                                        * Referenced by: '<S6>/ConstantRv48'
                                        */
extern real32_T KeTemp_feet_FL_EX_RawRv;/* Variable: KeTemp_feet_FL_EX_RawRv
                                         * Referenced by: '<S6>/ConstantRv45'
                                         */
extern real32_T KeTemp_feet_FR_EX_RawRv;/* Variable: KeTemp_feet_FR_EX_RawRv
                                         * Referenced by: '<S6>/ConstantRv44'
                                         */
extern real32_T KeTemp_feet_SL_RawRv;  /* Variable: KeTemp_feet_SL_RawRv
                                        * Referenced by: '<S6>/ConstantRv46'
                                        */
extern real32_T KeTemp_panel_FL_RawRv; /* Variable: KeTemp_panel_FL_RawRv
                                        * Referenced by: '<S6>/ConstantRv43'
                                        */
extern real32_T KeTemp_panel_FR_RawRv; /* Variable: KeTemp_panel_FR_RawRv
                                        * Referenced by: '<S6>/ConstantRv42'
                                        */
extern real32_T KeTemp_panel_SL_RawRv; /* Variable: KeTemp_panel_SL_RawRv
                                        * Referenced by: '<S6>/ConstantRv47'
                                        */
extern real32_T KeVTIC_mps_VehSpdLgtARv;/* Variable: KeVTIC_mps_VehSpdLgtARv
                                         * Referenced by: '<S45>/ConstantRv78'
                                         */
extern real32_T KeVTIC_t_SoakTimeLoadRv;/* Variable: KeVTIC_t_SoakTimeLoadRv
                                         * Referenced by: '<S45>/ConstantRv83'
                                         */
extern real32_T KeVTIC_t_SoakTimeRv;   /* Variable: KeVTIC_t_SoakTimeRv
                                        * Referenced by: '<S45>/ConstantRv81'
                                        */
extern real32_T KeVTIC_t_SoakTimeSavedRv;/* Variable: KeVTIC_t_SoakTimeSavedRv
                                          * Referenced by: '<S45>/ConstantRv82'
                                          */
extern real32_T KeVeTemp_Fincar_RawRv; /* Variable: KeVeTemp_Fincar_RawRv
                                        * Referenced by: '<S6>/ConstantRv54'
                                        */
extern real32_T KeVeTemp_HEX_RawRv;    /* Variable: KeVeTemp_HEX_RawRv
                                        * Referenced by: '<S6>/ConstantRv53'
                                        */
extern real32_T KeVehSpdLgtARv;        /* Variable: KeVehSpdLgtARv
                                        * Referenced by: '<S6>/ConstantRv50'
                                        */
extern int16_T KeCTCM_T_EvaNormFlwTempRv;/* Variable: KeCTCM_T_EvaNormFlwTempRv
                                          * Referenced by: '<S20>/ConstantRv111'
                                          */
extern int16_T KeCTCM_T_LowestTarFlwTempRv;/* Variable: KeCTCM_T_LowestTarFlwTempRv
                                            * Referenced by: '<S20>/ConstantRv110'
                                            */
extern int16_T KeCTCM_na_Yn2DefdFlap_X[15];/* Variable: KeCTCM_na_Yn2DefdFlap_X
                                            * Referenced by: '<S1037>/2-D Lookup Table'
                                            * VeCTCM_na_FrntDrvYn ǰ�����ݽ��»�����ǿ��Yn
                                            */
extern uint16_T KeACTU_na_FdhStepPosnReqRv;/* Variable: KeACTU_na_FdhStepPosnReqRv
                                            * Referenced by: '<S3>/ConstantRv340'
                                            */
extern uint16_T KeACTU_na_FdhStepRangeRv;/* Variable: KeACTU_na_FdhStepRangeRv
                                          * Referenced by: '<S3>/ConstantRv329'
                                          */
extern uint16_T KeACTU_na_FdvStepPosnReqRv;/* Variable: KeACTU_na_FdvStepPosnReqRv
                                            * Referenced by: '<S3>/ConstantRv309'
                                            */
extern uint16_T KeACTU_na_FdvStepRangeRv;/* Variable: KeACTU_na_FdvStepRangeRv
                                          * Referenced by: '<S3>/ConstantRv306'
                                          */
extern uint16_T KeACTU_na_FphStepPosnReqRv;/* Variable: KeACTU_na_FphStepPosnReqRv
                                            * Referenced by: '<S3>/ConstantRv348'
                                            */
extern uint16_T KeACTU_na_FphStepRangeRv;/* Variable: KeACTU_na_FphStepRangeRv
                                          * Referenced by: '<S3>/ConstantRv333'
                                          */
extern uint16_T KeACTU_na_FpvStepPosnReqRv;/* Variable: KeACTU_na_FpvStepPosnReqRv
                                            * Referenced by: '<S3>/ConstantRv322'
                                            */
extern uint16_T KeACTU_na_FpvStepRangeRv;/* Variable: KeACTU_na_FpvStepRangeRv
                                          * Referenced by: '<S3>/ConstantRv314'
                                          */
extern uint16_T KeACTU_na_RecStepPosnReqRv;/* Variable: KeACTU_na_RecStepPosnReqRv
                                            * Referenced by: '<S3>/ConstantRv369'
                                            */
extern uint16_T KeACTU_na_RecStepRangeRv;/* Variable: KeACTU_na_RecStepRangeRv
                                          * Referenced by: '<S3>/ConstantRv346'
                                          */
extern uint16_T KeACTU_na_SdhStepPosnReqRv;/* Variable: KeACTU_na_SdhStepPosnReqRv
                                            * Referenced by: '<S3>/ConstantRv356'
                                            */
extern uint16_T KeACTU_na_SdhStepRangeRv;/* Variable: KeACTU_na_SdhStepRangeRv
                                          * Referenced by: '<S3>/ConstantRv339'
                                          */
extern uint16_T KeACTU_na_SdvStepPosnReqRv;/* Variable: KeACTU_na_SdvStepPosnReqRv
                                            * Referenced by: '<S3>/ConstantRv331'
                                            */
extern uint16_T KeACTU_na_SdvStepRangeRv;/* Variable: KeACTU_na_SdvStepRangeRv
                                          * Referenced by: '<S3>/ConstantRv323'
                                          */
extern uint16_T KeCAFC_n_BlwrSpeedRampRv;/* Variable: KeCAFC_n_BlwrSpeedRampRv
                                          * Referenced by: '<S10>/ConstantRv566'
                                          */
extern uint16_T KeCAFC_n_BlwrSpeedReqRv;/* Variable: KeCAFC_n_BlwrSpeedReqRv
                                         * Referenced by: '<S10>/ConstantRv565'
                                         */
extern uint16_T KeCAFC_n_BlwrSpeedTarRv;/* Variable: KeCAFC_n_BlwrSpeedTarRv
                                         * Referenced by: '<S10>/ConstantRv564'
                                         */
extern uint16_T KeCAFC_n_FrntBlwrIndcLv1;/* Variable: KeCAFC_n_FrntBlwrIndcLv1
                                          * Referenced by: '<S690>/Constant3'
                                          * 1����ת��ֵ
                                          */
extern uint16_T KeCAFC_n_FrntBlwrIndcLv2;/* Variable: KeCAFC_n_FrntBlwrIndcLv2
                                          * Referenced by: '<S690>/Constant4'
                                          * 2����ת��ֵ
                                          */
extern uint16_T KeCAFC_n_FrntBlwrIndcLv3;/* Variable: KeCAFC_n_FrntBlwrIndcLv3
                                          * Referenced by: '<S690>/Constant5'
                                          * 3����ת��ֵ
                                          */
extern uint16_T KeCAFC_n_FrntBlwrIndcLv4;/* Variable: KeCAFC_n_FrntBlwrIndcLv4
                                          * Referenced by: '<S690>/Constant6'
                                          * 4����ת��ֵ
                                          */
extern uint16_T KeCAFC_n_FrntBlwrIndcLv5;/* Variable: KeCAFC_n_FrntBlwrIndcLv5
                                          * Referenced by: '<S690>/Constant7'
                                          * 5����ת��ֵ
                                          */
extern uint16_T KeCAFC_n_FrntBlwrIndcLv6;/* Variable: KeCAFC_n_FrntBlwrIndcLv6
                                          * Referenced by: '<S690>/Constant8'
                                          * 6����ת��ֵ
                                          */
extern uint16_T KeCAFC_n_FrntBlwrIndcLv7;/* Variable: KeCAFC_n_FrntBlwrIndcLv7
                                          * Referenced by: '<S690>/Constant9'
                                          * 7����ת��ֵ
                                          */
extern uint16_T KeCAFC_n_FrntBlwrIndcLv8;/* Variable: KeCAFC_n_FrntBlwrIndcLv8
                                          * Referenced by: '<S690>/Chart'
                                          * 8����ת��ֵ
                                          */
extern uint16_T KeCAFC_n_FrntBlwrIndcLv9;/* Variable: KeCAFC_n_FrntBlwrIndcLv9
                                          * Referenced by: '<S690>/Chart'
                                          * 9����ת��ֵ
                                          */
extern uint16_T KeCAFC_na_FrntBlwrRespRateRv;/* Variable: KeCAFC_na_FrntBlwrRespRateRv
                                              * Referenced by: '<S10>/ConstantRv554'
                                              */
extern uint16_T KeCREC_sec_TakeBreathTimer;/* Variable: KeCREC_sec_TakeBreathTimer
                                            * Referenced by: '<S817>/Constant22'
                                            * �������ܶ�ʱ��
                                            */
extern uint16_T KeCTCM_Af_FrntDrvWghFlowRv;/* Variable: KeCTCM_Af_FrntDrvWghFlowRv
                                            * Referenced by: '<S20>/ConstantRv89'
                                            */
extern uint16_T KeCTCM_Af_FrntPassWghFlowRv;/* Variable: KeCTCM_Af_FrntPassWghFlowRv
                                             * Referenced by: '<S20>/ConstantRv86'
                                             */
extern uint16_T KeCTCM_Af_SecDrvWghFlowRv;/* Variable: KeCTCM_Af_SecDrvWghFlowRv
                                           * Referenced by: '<S20>/ConstantRv87'
                                           */
extern uint16_T KeCTCM_Af_SecPassWghFlowRv;/* Variable: KeCTCM_Af_SecPassWghFlowRv
                                            * Referenced by: '<S20>/ConstantRv88'
                                            */
extern uint16_T KeCTCM_Af_Yn2FpWghFlow_D[15];/* Variable: KeCTCM_Af_Yn2FpWghFlow_D
                                              * Referenced by: '<S945>/1-D Lookup Table'
                                              * ǰ�Ÿ��������������ֵ
                                              */
extern uint16_T KeCTCM_Af_Yn2SpWghFlow_D[15];/* Variable: KeCTCM_Af_Yn2SpWghFlow_D
                                              * Referenced by: '<S949>/1-D Lookup Table'
                                              * ���Ÿ��������������ֵ
                                              */
extern uint16_T KeLeSolarDataRv;       /* Variable: KeLeSolarDataRv
                                        * Referenced by: '<S6>/ConstantRv51'
                                        */
extern uint16_T KePCAT_t_NapTrigTim;   /* Variable: KePCAT_t_NapTrigTim
                                        * Referenced by: '<S1186>/Constant5'
                                        * ���ٵ�������ʱ��
                                        */
extern uint16_T KeRiSolarDataRv;       /* Variable: KeRiSolarDataRv
                                        * Referenced by: '<S6>/ConstantRv52'
                                        */
extern boolean_T KeACTU_Stp_PreSelfStudyEnb;/* Variable: KeACTU_Stp_PreSelfStudyEnb
                                             * Referenced by: '<S3>/ConstantEnb365'
                                             */
extern boolean_T KeACTU_Stp_PreSelfStudyRv;/* Variable: KeACTU_Stp_PreSelfStudyRv
                                            * Referenced by: '<S3>/ConstantRv365'
                                            */
extern boolean_T KeACTU_U_FdhMaxRngEnb;/* Variable: KeACTU_U_FdhMaxRngEnb
                                        * Referenced by: '<S3>/ConstantEnb382'
                                        */
extern boolean_T KeACTU_U_FdhMinRngEnb;/* Variable: KeACTU_U_FdhMinRngEnb
                                        * Referenced by: '<S3>/ConstantEnb381'
                                        */
extern boolean_T KeACTU_U_FdvMaxRngEnb;/* Variable: KeACTU_U_FdvMaxRngEnb
                                        * Referenced by: '<S3>/ConstantEnb362'
                                        */
extern boolean_T KeACTU_U_FdvMinRngEnb;/* Variable: KeACTU_U_FdvMinRngEnb
                                        * Referenced by: '<S3>/ConstantEnb361'
                                        */
extern boolean_T KeACTU_U_FphMaxRngEnb;/* Variable: KeACTU_U_FphMaxRngEnb
                                        * Referenced by: '<S3>/ConstantEnb387'
                                        */
extern boolean_T KeACTU_U_FphMinRngEnb;/* Variable: KeACTU_U_FphMinRngEnb
                                        * Referenced by: '<S3>/ConstantEnb385'
                                        */
extern boolean_T KeACTU_U_FpvMaxRngEnb;/* Variable: KeACTU_U_FpvMaxRngEnb
                                        * Referenced by: '<S3>/ConstantEnb370'
                                        */
extern boolean_T KeACTU_U_FpvMinRngEnb;/* Variable: KeACTU_U_FpvMinRngEnb
                                        * Referenced by: '<S3>/ConstantEnb368'
                                        */
extern boolean_T KeACTU_U_RecMaxRngEnb;/* Variable: KeACTU_U_RecMaxRngEnb
                                        * Referenced by: '<S3>/ConstantEnb394'
                                        */
extern boolean_T KeACTU_U_RecMinRngEnb;/* Variable: KeACTU_U_RecMinRngEnb
                                        * Referenced by: '<S3>/ConstantEnb393'
                                        */
extern boolean_T KeACTU_U_SdhMaxRngEnb;/* Variable: KeACTU_U_SdhMaxRngEnb
                                        * Referenced by: '<S3>/ConstantEnb390'
                                        */
extern boolean_T KeACTU_U_SdhMinRngEnb;/* Variable: KeACTU_U_SdhMinRngEnb
                                        * Referenced by: '<S3>/ConstantEnb389'
                                        */
extern boolean_T KeACTU_U_SdvMaxRngEnb;/* Variable: KeACTU_U_SdvMaxRngEnb
                                        * Referenced by: '<S3>/ConstantEnb378'
                                        */
extern boolean_T KeACTU_U_SdvMinRngEnb;/* Variable: KeACTU_U_SdvMinRngEnb
                                        * Referenced by: '<S3>/ConstantEnb376'
                                        */
extern boolean_T KeACTU_na_ActrOperCtrSaveEepEnb;
                                    /* Variable: KeACTU_na_ActrOperCtrSaveEepEnb
                                     * Referenced by: '<S3>/ConstantEnb321'
                                     */
extern boolean_T KeACTU_na_AssignModeEnb;/* Variable: KeACTU_na_AssignModeEnb
                                          * Referenced by: '<S3>/ConstantEnb312'
                                          */
extern boolean_T KeACTU_na_DcFbReadyEnb;/* Variable: KeACTU_na_DcFbReadyEnb
                                         * Referenced by: '<S3>/ConstantEnb401'
                                         */
extern boolean_T KeACTU_na_DcFbReadyRv;/* Variable: KeACTU_na_DcFbReadyRv
                                        * Referenced by: '<S3>/ConstantRv401'
                                        */
extern boolean_T KeACTU_na_DcRangeUpdtEnb;/* Variable: KeACTU_na_DcRangeUpdtEnb
                                           * Referenced by: '<S3>/ConstantEnb411'
                                           */
extern boolean_T KeACTU_na_DcRangeUpdtRv;/* Variable: KeACTU_na_DcRangeUpdtRv
                                          * Referenced by: '<S3>/ConstantRv411'
                                          */
extern boolean_T KeACTU_na_DcRstDoneEnb;/* Variable: KeACTU_na_DcRstDoneEnb
                                         * Referenced by: '<S3>/ConstantEnb402'
                                         */
extern boolean_T KeACTU_na_DcRstDoneRv;/* Variable: KeACTU_na_DcRstDoneRv
                                        * Referenced by: '<S3>/ConstantRv402'
                                        */
extern boolean_T KeACTU_na_DcStopDoneEnb;/* Variable: KeACTU_na_DcStopDoneEnb
                                          * Referenced by: '<S3>/ConstantEnb403'
                                          */
extern boolean_T KeACTU_na_DcStopDoneRv;/* Variable: KeACTU_na_DcStopDoneRv
                                         * Referenced by: '<S3>/ConstantRv403'
                                         */
extern boolean_T KeACTU_na_FbModeEnb;  /* Variable: KeACTU_na_FbModeEnb
                                        * Referenced by: '<S3>/ConstantEnb310'
                                        */
extern boolean_T KeACTU_na_FbModeRv;   /* Variable: KeACTU_na_FbModeRv
                                        * Referenced by: '<S3>/ConstantRv310'
                                        */
extern boolean_T KeACTU_na_FdfDCBorderEnb;/* Variable: KeACTU_na_FdfDCBorderEnb
                                           * Referenced by: '<S3>/ConstantEnb328'
                                           */
extern boolean_T KeACTU_na_FdfDcTypeEnb;/* Variable: KeACTU_na_FdfDcTypeEnb
                                         * Referenced by: '<S3>/ConstantEnb405'
                                         */
extern boolean_T KeACTU_na_FdfDcTypeRv;/* Variable: KeACTU_na_FdfDcTypeRv
                                        * Referenced by: '<S3>/ConstantRv405'
                                        */
extern boolean_T KeACTU_na_FdhAssignFlagEnb;/* Variable: KeACTU_na_FdhAssignFlagEnb
                                             * Referenced by: '<S3>/ConstantEnb344'
                                             */
extern boolean_T KeACTU_na_FdhDCBorderEnb;/* Variable: KeACTU_na_FdhDCBorderEnb
                                           * Referenced by: '<S3>/ConstantEnb345'
                                           */
extern boolean_T KeACTU_na_FdhDcTypeEnb;/* Variable: KeACTU_na_FdhDcTypeEnb
                                         * Referenced by: '<S3>/ConstantEnb407'
                                         */
extern boolean_T KeACTU_na_FdhDcTypeRv;/* Variable: KeACTU_na_FdhDcTypeRv
                                        * Referenced by: '<S3>/ConstantRv407'
                                        */
extern boolean_T KeACTU_na_FdhPosnFbEnb;/* Variable: KeACTU_na_FdhPosnFbEnb
                                         * Referenced by: '<S3>/ConstantEnb383'
                                         */
extern boolean_T KeACTU_na_FdhPosnFbQfEnb;/* Variable: KeACTU_na_FdhPosnFbQfEnb
                                           * Referenced by: '<S3>/ConstantEnb384'
                                           */
extern boolean_T KeACTU_na_FdhPosnFbQfRv;/* Variable: KeACTU_na_FdhPosnFbQfRv
                                          * Referenced by: '<S3>/ConstantRv384'
                                          */
extern boolean_T KeACTU_na_FdhStepBorderEnb;/* Variable: KeACTU_na_FdhStepBorderEnb
                                             * Referenced by: '<S3>/ConstantEnb343'
                                             */
extern boolean_T KeACTU_na_FdhStepPosnReqEnb;/* Variable: KeACTU_na_FdhStepPosnReqEnb
                                              * Referenced by: '<S3>/ConstantEnb340'
                                              */
extern boolean_T KeACTU_na_FdhStepRangeEnb;/* Variable: KeACTU_na_FdhStepRangeEnb
                                            * Referenced by: '<S3>/ConstantEnb329'
                                            */
extern boolean_T KeACTU_na_FdhStepTypeEnb;/* Variable: KeACTU_na_FdhStepTypeEnb
                                           * Referenced by: '<S3>/ConstantEnb341'
                                           */
extern boolean_T KeACTU_na_FdhStepTypeRv;/* Variable: KeACTU_na_FdhStepTypeRv
                                          * Referenced by: '<S3>/ConstantRv341'
                                          */
extern boolean_T KeACTU_na_FdhStsFbEnb;/* Variable: KeACTU_na_FdhStsFbEnb
                                        * Referenced by: '<S3>/ConstantEnb386'
                                        */
extern boolean_T KeACTU_na_FdhStsFbRv; /* Variable: KeACTU_na_FdhStsFbRv
                                        * Referenced by: '<S3>/ConstantRv386'
                                        */
extern boolean_T KeACTU_na_FdhVltgPosnReqEnb;/* Variable: KeACTU_na_FdhVltgPosnReqEnb
                                              * Referenced by: '<S3>/ConstantEnb338'
                                              */
extern boolean_T KeACTU_na_FdvAssignFlagEnb;/* Variable: KeACTU_na_FdvAssignFlagEnb
                                             * Referenced by: '<S3>/ConstantEnb318'
                                             */
extern boolean_T KeACTU_na_FdvDCBorderEnb;/* Variable: KeACTU_na_FdvDCBorderEnb
                                           * Referenced by: '<S3>/ConstantEnb316'
                                           */
extern boolean_T KeACTU_na_FdvDCBorderRv;/* Variable: KeACTU_na_FdvDCBorderRv
                                          * Referenced by: '<S3>/ConstantRv316'
                                          */
extern boolean_T KeACTU_na_FdvDcTypeEnb;/* Variable: KeACTU_na_FdvDcTypeEnb
                                         * Referenced by: '<S3>/ConstantEnb404'
                                         */
extern boolean_T KeACTU_na_FdvDcTypeRv;/* Variable: KeACTU_na_FdvDcTypeRv
                                        * Referenced by: '<S3>/ConstantRv404'
                                        */
extern boolean_T KeACTU_na_FdvPosnFbEnb;/* Variable: KeACTU_na_FdvPosnFbEnb
                                         * Referenced by: '<S3>/ConstantEnb353'
                                         */
extern boolean_T KeACTU_na_FdvPosnFbQfEnb;/* Variable: KeACTU_na_FdvPosnFbQfEnb
                                           * Referenced by: '<S3>/ConstantEnb355'
                                           */
extern boolean_T KeACTU_na_FdvPosnFbQfRv;/* Variable: KeACTU_na_FdvPosnFbQfRv
                                          * Referenced by: '<S3>/ConstantRv355'
                                          */
extern boolean_T KeACTU_na_FdvStepBorderEnb;/* Variable: KeACTU_na_FdvStepBorderEnb
                                             * Referenced by: '<S3>/ConstantEnb313'
                                             */
extern boolean_T KeACTU_na_FdvStepPosnReqEnb;/* Variable: KeACTU_na_FdvStepPosnReqEnb
                                              * Referenced by: '<S3>/ConstantEnb309'
                                              */
extern boolean_T KeACTU_na_FdvStepRangeEnb;/* Variable: KeACTU_na_FdvStepRangeEnb
                                            * Referenced by: '<S3>/ConstantEnb306'
                                            */
extern boolean_T KeACTU_na_FdvStepTypeEnb;/* Variable: KeACTU_na_FdvStepTypeEnb
                                           * Referenced by: '<S3>/ConstantEnb311'
                                           */
extern boolean_T KeACTU_na_FdvStepTypeRv;/* Variable: KeACTU_na_FdvStepTypeRv
                                          * Referenced by: '<S3>/ConstantRv311'
                                          */
extern boolean_T KeACTU_na_FdvStsFbEnb;/* Variable: KeACTU_na_FdvStsFbEnb
                                        * Referenced by: '<S3>/ConstantEnb359'
                                        */
extern boolean_T KeACTU_na_FdvStsFbRv; /* Variable: KeACTU_na_FdvStsFbRv
                                        * Referenced by: '<S3>/ConstantRv359'
                                        */
extern boolean_T KeACTU_na_FdvVltgPosnReqEnb;/* Variable: KeACTU_na_FdvVltgPosnReqEnb
                                              * Referenced by: '<S3>/ConstantEnb308'
                                              */
extern boolean_T KeACTU_na_FphAssignFlagEnb;/* Variable: KeACTU_na_FphAssignFlagEnb
                                             * Referenced by: '<S3>/ConstantEnb350'
                                             */
extern boolean_T KeACTU_na_FphDCBorderEnb;/* Variable: KeACTU_na_FphDCBorderEnb
                                           * Referenced by: '<S3>/ConstantEnb352'
                                           */
extern boolean_T KeACTU_na_FphDcTypeEnb;/* Variable: KeACTU_na_FphDcTypeEnb
                                         * Referenced by: '<S3>/ConstantEnb408'
                                         */
extern boolean_T KeACTU_na_FphDcTypeRv;/* Variable: KeACTU_na_FphDcTypeRv
                                        * Referenced by: '<S3>/ConstantRv408'
                                        */
extern boolean_T KeACTU_na_FphPosnFbEnb;/* Variable: KeACTU_na_FphPosnFbEnb
                                         * Referenced by: '<S3>/ConstantEnb388'
                                         */
extern boolean_T KeACTU_na_FphPosnFbQfEnb;/* Variable: KeACTU_na_FphPosnFbQfEnb
                                           * Referenced by: '<S3>/ConstantEnb391'
                                           */
extern boolean_T KeACTU_na_FphPosnFbQfRv;/* Variable: KeACTU_na_FphPosnFbQfRv
                                          * Referenced by: '<S3>/ConstantRv391'
                                          */
extern boolean_T KeACTU_na_FphStepBorderEnb;/* Variable: KeACTU_na_FphStepBorderEnb
                                             * Referenced by: '<S3>/ConstantEnb351'
                                             */
extern boolean_T KeACTU_na_FphStepPosnReqEnb;/* Variable: KeACTU_na_FphStepPosnReqEnb
                                              * Referenced by: '<S3>/ConstantEnb348'
                                              */
extern boolean_T KeACTU_na_FphStepRangeEnb;/* Variable: KeACTU_na_FphStepRangeEnb
                                            * Referenced by: '<S3>/ConstantEnb333'
                                            */
extern boolean_T KeACTU_na_FphStepTypeEnb;/* Variable: KeACTU_na_FphStepTypeEnb
                                           * Referenced by: '<S3>/ConstantEnb349'
                                           */
extern boolean_T KeACTU_na_FphStepTypeRv;/* Variable: KeACTU_na_FphStepTypeRv
                                          * Referenced by: '<S3>/ConstantRv349'
                                          */
extern boolean_T KeACTU_na_FphStsFbEnb;/* Variable: KeACTU_na_FphStsFbEnb
                                        * Referenced by: '<S3>/ConstantEnb392'
                                        */
extern boolean_T KeACTU_na_FphStsFbRv; /* Variable: KeACTU_na_FphStsFbRv
                                        * Referenced by: '<S3>/ConstantRv392'
                                        */
extern boolean_T KeACTU_na_FphVltgPosnReqEnb;/* Variable: KeACTU_na_FphVltgPosnReqEnb
                                              * Referenced by: '<S3>/ConstantEnb347'
                                              */
extern boolean_T KeACTU_na_FpvAssignFlagEnb;/* Variable: KeACTU_na_FpvAssignFlagEnb
                                             * Referenced by: '<S3>/ConstantEnb327'
                                             */
extern boolean_T KeACTU_na_FpvPosnFbEnb;/* Variable: KeACTU_na_FpvPosnFbEnb
                                         * Referenced by: '<S3>/ConstantEnb364'
                                         */
extern boolean_T KeACTU_na_FpvPosnFbQfEnb;/* Variable: KeACTU_na_FpvPosnFbQfEnb
                                           * Referenced by: '<S3>/ConstantEnb366'
                                           */
extern boolean_T KeACTU_na_FpvPosnFbQfRv;/* Variable: KeACTU_na_FpvPosnFbQfRv
                                          * Referenced by: '<S3>/ConstantRv366'
                                          */
extern boolean_T KeACTU_na_FpvStepBorderEnb;/* Variable: KeACTU_na_FpvStepBorderEnb
                                             * Referenced by: '<S3>/ConstantEnb325'
                                             */
extern boolean_T KeACTU_na_FpvStepPosnReqEnb;/* Variable: KeACTU_na_FpvStepPosnReqEnb
                                              * Referenced by: '<S3>/ConstantEnb322'
                                              */
extern boolean_T KeACTU_na_FpvStepRangeEnb;/* Variable: KeACTU_na_FpvStepRangeEnb
                                            * Referenced by: '<S3>/ConstantEnb314'
                                            */
extern boolean_T KeACTU_na_FpvStepTypeEnb;/* Variable: KeACTU_na_FpvStepTypeEnb
                                           * Referenced by: '<S3>/ConstantEnb324'
                                           */
extern boolean_T KeACTU_na_FpvStepTypeRv;/* Variable: KeACTU_na_FpvStepTypeRv
                                          * Referenced by: '<S3>/ConstantRv324'
                                          */
extern boolean_T KeACTU_na_FpvStsFbEnb;/* Variable: KeACTU_na_FpvStsFbEnb
                                        * Referenced by: '<S3>/ConstantEnb371'
                                        */
extern boolean_T KeACTU_na_FpvStsFbRv; /* Variable: KeACTU_na_FpvStsFbRv
                                        * Referenced by: '<S3>/ConstantRv371'
                                        */
extern boolean_T KeACTU_na_FpvVltgPosnReqEnb;/* Variable: KeACTU_na_FpvVltgPosnReqEnb
                                              * Referenced by: '<S3>/ConstantEnb320'
                                              */
extern boolean_T KeACTU_na_OperStsEnb; /* Variable: KeACTU_na_OperStsEnb
                                        * Referenced by: '<S3>/ConstantEnb305'
                                        */
extern boolean_T KeACTU_na_RangeUpdtEnb;/* Variable: KeACTU_na_RangeUpdtEnb
                                         * Referenced by: '<S3>/ConstantEnb315'
                                         */
extern boolean_T KeACTU_na_RangeUpdtRv;/* Variable: KeACTU_na_RangeUpdtRv
                                        * Referenced by: '<S3>/ConstantRv315'
                                        */
extern boolean_T KeACTU_na_RecAssignFlagEnb;/* Variable: KeACTU_na_RecAssignFlagEnb
                                             * Referenced by: '<S3>/ConstantEnb372'
                                             */
extern boolean_T KeACTU_na_RecDCBorderEnb;/* Variable: KeACTU_na_RecDCBorderEnb
                                           * Referenced by: '<S3>/ConstantEnb377'
                                           */
extern boolean_T KeACTU_na_RecDcTypeEnb;/* Variable: KeACTU_na_RecDcTypeEnb
                                         * Referenced by: '<S3>/ConstantEnb410'
                                         */
extern boolean_T KeACTU_na_RecDcTypeRv;/* Variable: KeACTU_na_RecDcTypeRv
                                        * Referenced by: '<S3>/ConstantRv410'
                                        */
extern boolean_T KeACTU_na_RecPosnFbEnb;/* Variable: KeACTU_na_RecPosnFbEnb
                                         * Referenced by: '<S3>/ConstantEnb398'
                                         */
extern boolean_T KeACTU_na_RecPosnFbQfEnb;/* Variable: KeACTU_na_RecPosnFbQfEnb
                                           * Referenced by: '<S3>/ConstantEnb399'
                                           */
extern boolean_T KeACTU_na_RecPosnFbQfRv;/* Variable: KeACTU_na_RecPosnFbQfRv
                                          * Referenced by: '<S3>/ConstantRv399'
                                          */
extern boolean_T KeACTU_na_RecStepBorderEnb;/* Variable: KeACTU_na_RecStepBorderEnb
                                             * Referenced by: '<S3>/ConstantEnb374'
                                             */
extern boolean_T KeACTU_na_RecStepPosnReqEnb;/* Variable: KeACTU_na_RecStepPosnReqEnb
                                              * Referenced by: '<S3>/ConstantEnb369'
                                              */
extern boolean_T KeACTU_na_RecStepRangeEnb;/* Variable: KeACTU_na_RecStepRangeEnb
                                            * Referenced by: '<S3>/ConstantEnb346'
                                            */
extern boolean_T KeACTU_na_RecStepTypeEnb;/* Variable: KeACTU_na_RecStepTypeEnb
                                           * Referenced by: '<S3>/ConstantEnb373'
                                           */
extern boolean_T KeACTU_na_RecStepTypeRv;/* Variable: KeACTU_na_RecStepTypeRv
                                          * Referenced by: '<S3>/ConstantRv373'
                                          */
extern boolean_T KeACTU_na_RecStsFbEnb;/* Variable: KeACTU_na_RecStsFbEnb
                                        * Referenced by: '<S3>/ConstantEnb400'
                                        */
extern boolean_T KeACTU_na_RecStsFbRv; /* Variable: KeACTU_na_RecStsFbRv
                                        * Referenced by: '<S3>/ConstantRv400'
                                        */
extern boolean_T KeACTU_na_RecVltgPosnReqEnb;/* Variable: KeACTU_na_RecVltgPosnReqEnb
                                              * Referenced by: '<S3>/ConstantEnb367'
                                              */
extern boolean_T KeACTU_na_ReqModeEnb; /* Variable: KeACTU_na_ReqModeEnb
                                        * Referenced by: '<S3>/ConstantEnb307'
                                        */
extern boolean_T KeACTU_na_ReqModeRv;  /* Variable: KeACTU_na_ReqModeRv
                                        * Referenced by: '<S3>/ConstantRv307'
                                        */
extern boolean_T KeACTU_na_SdhAssignFlagEnb;/* Variable: KeACTU_na_SdhAssignFlagEnb
                                             * Referenced by: '<S3>/ConstantEnb358'
                                             */
extern boolean_T KeACTU_na_SdhDCBorderEnb;/* Variable: KeACTU_na_SdhDCBorderEnb
                                           * Referenced by: '<S3>/ConstantEnb363'
                                           */
extern boolean_T KeACTU_na_SdhDcTypeEnb;/* Variable: KeACTU_na_SdhDcTypeEnb
                                         * Referenced by: '<S3>/ConstantEnb409'
                                         */
extern boolean_T KeACTU_na_SdhDcTypeRv;/* Variable: KeACTU_na_SdhDcTypeRv
                                        * Referenced by: '<S3>/ConstantRv409'
                                        */
extern boolean_T KeACTU_na_SdhPosnFbEnb;/* Variable: KeACTU_na_SdhPosnFbEnb
                                         * Referenced by: '<S3>/ConstantEnb395'
                                         */
extern boolean_T KeACTU_na_SdhPosnFbQfEnb;/* Variable: KeACTU_na_SdhPosnFbQfEnb
                                           * Referenced by: '<S3>/ConstantEnb396'
                                           */
extern boolean_T KeACTU_na_SdhPosnFbQfRv;/* Variable: KeACTU_na_SdhPosnFbQfRv
                                          * Referenced by: '<S3>/ConstantRv396'
                                          */
extern boolean_T KeACTU_na_SdhStepBorderEnb;/* Variable: KeACTU_na_SdhStepBorderEnb
                                             * Referenced by: '<S3>/ConstantEnb360'
                                             */
extern boolean_T KeACTU_na_SdhStepPosnReqEnb;/* Variable: KeACTU_na_SdhStepPosnReqEnb
                                              * Referenced by: '<S3>/ConstantEnb356'
                                              */
extern boolean_T KeACTU_na_SdhStepRangeEnb;/* Variable: KeACTU_na_SdhStepRangeEnb
                                            * Referenced by: '<S3>/ConstantEnb339'
                                            */
extern boolean_T KeACTU_na_SdhStepTypeEnb;/* Variable: KeACTU_na_SdhStepTypeEnb
                                           * Referenced by: '<S3>/ConstantEnb357'
                                           */
extern boolean_T KeACTU_na_SdhStepTypeRv;/* Variable: KeACTU_na_SdhStepTypeRv
                                          * Referenced by: '<S3>/ConstantRv357'
                                          */
extern boolean_T KeACTU_na_SdhStsFbEnb;/* Variable: KeACTU_na_SdhStsFbEnb
                                        * Referenced by: '<S3>/ConstantEnb397'
                                        */
extern boolean_T KeACTU_na_SdhStsFbRv; /* Variable: KeACTU_na_SdhStsFbRv
                                        * Referenced by: '<S3>/ConstantRv397'
                                        */
extern boolean_T KeACTU_na_SdhVltgPosnReqEnb;/* Variable: KeACTU_na_SdhVltgPosnReqEnb
                                              * Referenced by: '<S3>/ConstantEnb354'
                                              */
extern boolean_T KeACTU_na_SdvAssignFlagEnb;/* Variable: KeACTU_na_SdvAssignFlagEnb
                                             * Referenced by: '<S3>/ConstantEnb335'
                                             */
extern boolean_T KeACTU_na_SdvDCBorderEnb;/* Variable: KeACTU_na_SdvDCBorderEnb
                                           * Referenced by: '<S3>/ConstantEnb336'
                                           */
extern boolean_T KeACTU_na_SdvDcTypeEnb;/* Variable: KeACTU_na_SdvDcTypeEnb
                                         * Referenced by: '<S3>/ConstantEnb406'
                                         */
extern boolean_T KeACTU_na_SdvDcTypeRv;/* Variable: KeACTU_na_SdvDcTypeRv
                                        * Referenced by: '<S3>/ConstantRv406'
                                        */
extern boolean_T KeACTU_na_SdvPosnFbEnb;/* Variable: KeACTU_na_SdvPosnFbEnb
                                         * Referenced by: '<S3>/ConstantEnb375'
                                         */
extern boolean_T KeACTU_na_SdvPosnFbQfEnb;/* Variable: KeACTU_na_SdvPosnFbQfEnb
                                           * Referenced by: '<S3>/ConstantEnb379'
                                           */
extern boolean_T KeACTU_na_SdvPosnFbQfRv;/* Variable: KeACTU_na_SdvPosnFbQfRv
                                          * Referenced by: '<S3>/ConstantRv379'
                                          */
extern boolean_T KeACTU_na_SdvStepBorderEnb;/* Variable: KeACTU_na_SdvStepBorderEnb
                                             * Referenced by: '<S3>/ConstantEnb334'
                                             */
extern boolean_T KeACTU_na_SdvStepPosnReqEnb;/* Variable: KeACTU_na_SdvStepPosnReqEnb
                                              * Referenced by: '<S3>/ConstantEnb331'
                                              */
extern boolean_T KeACTU_na_SdvStepRangeEnb;/* Variable: KeACTU_na_SdvStepRangeEnb
                                            * Referenced by: '<S3>/ConstantEnb323'
                                            */
extern boolean_T KeACTU_na_SdvStepTypeEnb;/* Variable: KeACTU_na_SdvStepTypeEnb
                                           * Referenced by: '<S3>/ConstantEnb332'
                                           */
extern boolean_T KeACTU_na_SdvStepTypeRv;/* Variable: KeACTU_na_SdvStepTypeRv
                                          * Referenced by: '<S3>/ConstantRv332'
                                          */
extern boolean_T KeACTU_na_SdvStsFbEnb;/* Variable: KeACTU_na_SdvStsFbEnb
                                        * Referenced by: '<S3>/ConstantEnb380'
                                        */
extern boolean_T KeACTU_na_SdvStsFbRv; /* Variable: KeACTU_na_SdvStsFbRv
                                        * Referenced by: '<S3>/ConstantRv380'
                                        */
extern boolean_T KeACTU_na_SdvVltgPosnReqEnb;/* Variable: KeACTU_na_SdvVltgPosnReqEnb
                                              * Referenced by: '<S3>/ConstantEnb330'
                                              */
extern boolean_T KeACTU_na_StepFbReadyEnb;/* Variable: KeACTU_na_StepFbReadyEnb
                                           * Referenced by: '<S3>/ConstantEnb337'
                                           */
extern boolean_T KeACTU_na_StepFbReadyRv;/* Variable: KeACTU_na_StepFbReadyRv
                                          * Referenced by: '<S3>/ConstantRv337'
                                          */
extern boolean_T KeACTU_na_StepMotorResetCmdEnb;
                                     /* Variable: KeACTU_na_StepMotorResetCmdEnb
                                      * Referenced by: '<S3>/ConstantEnb319'
                                      */
extern boolean_T KeACTU_na_StepMotorResetCmdRv;
                                      /* Variable: KeACTU_na_StepMotorResetCmdRv
                                       * Referenced by: '<S3>/ConstantRv319'
                                       */
extern boolean_T KeACTU_na_StepRstDoneEnb;/* Variable: KeACTU_na_StepRstDoneEnb
                                           * Referenced by: '<S3>/ConstantEnb317'
                                           */
extern boolean_T KeACTU_na_StepRstDoneRv;/* Variable: KeACTU_na_StepRstDoneRv
                                          * Referenced by: '<S3>/ConstantRv317'
                                          */
extern boolean_T KeACTU_na_StepStopDoneEnb;/* Variable: KeACTU_na_StepStopDoneEnb
                                            * Referenced by: '<S3>/ConstantEnb342'
                                            */
extern boolean_T KeACTU_na_StepStopDoneRv;/* Variable: KeACTU_na_StepStopDoneRv
                                           * Referenced by: '<S3>/ConstantRv342'
                                           */
extern boolean_T KeAmbTRawAmbTValEnb;  /* Variable: KeAmbTRawAmbTValEnb
                                        * Referenced by: '<S6>/ConstantEnb49'
                                        */
extern boolean_T KeCADC_na_BpStopReqEnb;/* Variable: KeCADC_na_BpStopReqEnb
                                         * Referenced by: '<S8>/ConstantEnb286'
                                         */
extern boolean_T KeCADC_na_BpStopReqRv;/* Variable: KeCADC_na_BpStopReqRv
                                        * Referenced by: '<S8>/ConstantRv286'
                                        */
extern boolean_T KeCADC_na_DefPosnCalcnModeEnb;
                                      /* Variable: KeCADC_na_DefPosnCalcnModeEnb
                                       * Referenced by: '<S8>/ConstantEnb181'
                                       */
extern boolean_T KeCADC_na_DefPosnUpdStsEnb;/* Variable: KeCADC_na_DefPosnUpdStsEnb
                                             * Referenced by: '<S8>/ConstantEnb184'
                                             */
extern boolean_T KeCADC_na_DefPosnUpdStsRv;/* Variable: KeCADC_na_DefPosnUpdStsRv
                                            * Referenced by: '<S8>/ConstantRv184'
                                            */
extern boolean_T KeCADC_na_DefStopReqEnb;/* Variable: KeCADC_na_DefStopReqEnb
                                          * Referenced by: '<S8>/ConstantEnb284'
                                          */
extern boolean_T KeCADC_na_DefStopReqRv;/* Variable: KeCADC_na_DefStopReqRv
                                         * Referenced by: '<S8>/ConstantRv284'
                                         */
extern boolean_T KeCADC_na_FdfPosnCalcnModeEnb;
                                      /* Variable: KeCADC_na_FdfPosnCalcnModeEnb
                                       * Referenced by: '<S8>/ConstantEnb183'
                                       */
extern boolean_T KeCADC_na_FdfPosnUpdStsEnb;/* Variable: KeCADC_na_FdfPosnUpdStsEnb
                                             * Referenced by: '<S8>/ConstantEnb186'
                                             */
extern boolean_T KeCADC_na_FdfPosnUpdStsRv;/* Variable: KeCADC_na_FdfPosnUpdStsRv
                                            * Referenced by: '<S8>/ConstantRv186'
                                            */
extern boolean_T KeCADC_na_FdfStopReqEnb;/* Variable: KeCADC_na_FdfStopReqEnb
                                          * Referenced by: '<S8>/ConstantEnb290'
                                          */
extern boolean_T KeCADC_na_FdfStopReqRv;/* Variable: KeCADC_na_FdfStopReqRv
                                         * Referenced by: '<S8>/ConstantRv290'
                                         */
extern boolean_T KeCADC_na_FdvPosnCalcnModeEnb;
                                      /* Variable: KeCADC_na_FdvPosnCalcnModeEnb
                                       * Referenced by: '<S8>/ConstantEnb182'
                                       */
extern boolean_T KeCADC_na_FdvPosnUpdStsEnb;/* Variable: KeCADC_na_FdvPosnUpdStsEnb
                                             * Referenced by: '<S8>/ConstantEnb185'
                                             */
extern boolean_T KeCADC_na_FdvPosnUpdStsRv;/* Variable: KeCADC_na_FdvPosnUpdStsRv
                                            * Referenced by: '<S8>/ConstantRv185'
                                            */
extern boolean_T KeCADC_na_FdvStopReqEnb;/* Variable: KeCADC_na_FdvStopReqEnb
                                          * Referenced by: '<S8>/ConstantEnb288'
                                          */
extern boolean_T KeCADC_na_FdvStopReqRv;/* Variable: KeCADC_na_FdvStopReqRv
                                         * Referenced by: '<S8>/ConstantRv288'
                                         */
extern boolean_T KeCADC_na_FpfPosnCalcnModeEnb;
                                      /* Variable: KeCADC_na_FpfPosnCalcnModeEnb
                                       * Referenced by: '<S8>/ConstantEnb216'
                                       */
extern boolean_T KeCADC_na_FpfPosnUpdStsEnb;/* Variable: KeCADC_na_FpfPosnUpdStsEnb
                                             * Referenced by: '<S8>/ConstantEnb218'
                                             */
extern boolean_T KeCADC_na_FpfPosnUpdStsRv;/* Variable: KeCADC_na_FpfPosnUpdStsRv
                                            * Referenced by: '<S8>/ConstantRv218'
                                            */
extern boolean_T KeCADC_na_FpfStopReqEnb;/* Variable: KeCADC_na_FpfStopReqEnb
                                          * Referenced by: '<S8>/ConstantEnb296'
                                          */
extern boolean_T KeCADC_na_FpfStopReqRv;/* Variable: KeCADC_na_FpfStopReqRv
                                         * Referenced by: '<S8>/ConstantRv296'
                                         */
extern boolean_T KeCADC_na_FpvPosnCalcnModeEnb;
                                      /* Variable: KeCADC_na_FpvPosnCalcnModeEnb
                                       * Referenced by: '<S8>/ConstantEnb215'
                                       */
extern boolean_T KeCADC_na_FpvPosnUpdStsEnb;/* Variable: KeCADC_na_FpvPosnUpdStsEnb
                                             * Referenced by: '<S8>/ConstantEnb217'
                                             */
extern boolean_T KeCADC_na_FpvPosnUpdStsRv;/* Variable: KeCADC_na_FpvPosnUpdStsRv
                                            * Referenced by: '<S8>/ConstantRv217'
                                            */
extern boolean_T KeCADC_na_FpvStopReqEnb;/* Variable: KeCADC_na_FpvStopReqEnb
                                          * Referenced by: '<S8>/ConstantEnb294'
                                          */
extern boolean_T KeCADC_na_FpvStopReqRv;/* Variable: KeCADC_na_FpvStopReqRv
                                         * Referenced by: '<S8>/ConstantRv294'
                                         */
extern boolean_T KeCADC_na_FrntDrvDistbnModeEnb;
                                     /* Variable: KeCADC_na_FrntDrvDistbnModeEnb
                                      * Referenced by: '<S8>/ConstantEnb208'
                                      */
extern boolean_T KeCADC_na_FrntDrvOperStsEnb;/* Variable: KeCADC_na_FrntDrvOperStsEnb
                                              * Referenced by: '<S8>/ConstantEnb180'
                                              */
extern boolean_T KeCADC_na_FrntDrvZoneFlapParkStsEnb;
                                /* Variable: KeCADC_na_FrntDrvZoneFlapParkStsEnb
                                 * Referenced by: '<S8>/ConstantEnb213'
                                 */
extern boolean_T KeCADC_na_FrntDrvZoneFlapParkStsRv;
                                 /* Variable: KeCADC_na_FrntDrvZoneFlapParkStsRv
                                  * Referenced by: '<S8>/ConstantRv213'
                                  */
extern boolean_T KeCADC_na_FrntPassDistbnModeEnb;
                                    /* Variable: KeCADC_na_FrntPassDistbnModeEnb
                                     * Referenced by: '<S8>/ConstantEnb229'
                                     */
extern boolean_T KeCADC_na_FrntPassOperStsEnb;/* Variable: KeCADC_na_FrntPassOperStsEnb
                                               * Referenced by: '<S8>/ConstantEnb214'
                                               */
extern boolean_T KeCADC_na_FrntPassZoneFlapParkStsEnb;
                               /* Variable: KeCADC_na_FrntPassZoneFlapParkStsEnb
                                * Referenced by: '<S8>/ConstantEnb232'
                                */
extern boolean_T KeCADC_na_FrntPassZoneFlapParkStsRv;
                                /* Variable: KeCADC_na_FrntPassZoneFlapParkStsRv
                                 * Referenced by: '<S8>/ConstantRv232'
                                 */
extern boolean_T KeCADC_na_SdfPosnCalcnModeEnb;
                                      /* Variable: KeCADC_na_SdfPosnCalcnModeEnb
                                       * Referenced by: '<S8>/ConstantEnb235'
                                       */
extern boolean_T KeCADC_na_SdfPosnUpdStsEnb;/* Variable: KeCADC_na_SdfPosnUpdStsEnb
                                             * Referenced by: '<S8>/ConstantEnb237'
                                             */
extern boolean_T KeCADC_na_SdfStopReqEnb;/* Variable: KeCADC_na_SdfStopReqEnb
                                          * Referenced by: '<S8>/ConstantEnb300'
                                          */
extern boolean_T KeCADC_na_SdfStopReqRv;/* Variable: KeCADC_na_SdfStopReqRv
                                         * Referenced by: '<S8>/ConstantRv300'
                                         */
extern boolean_T KeCADC_na_SdvPosnCalcnModeEnb;
                                      /* Variable: KeCADC_na_SdvPosnCalcnModeEnb
                                       * Referenced by: '<S8>/ConstantEnb234'
                                       */
extern boolean_T KeCADC_na_SdvPosnUpdStsEnb;/* Variable: KeCADC_na_SdvPosnUpdStsEnb
                                             * Referenced by: '<S8>/ConstantEnb236'
                                             */
extern boolean_T KeCADC_na_SdvStopReqEnb;/* Variable: KeCADC_na_SdvStopReqEnb
                                          * Referenced by: '<S8>/ConstantEnb298'
                                          */
extern boolean_T KeCADC_na_SdvStopReqRv;/* Variable: KeCADC_na_SdvStopReqRv
                                         * Referenced by: '<S8>/ConstantRv298'
                                         */
extern boolean_T KeCADC_na_SecDrvDistbnModeEnb;
                                      /* Variable: KeCADC_na_SecDrvDistbnModeEnb
                                       * Referenced by: '<S8>/ConstantEnb253'
                                       */
extern boolean_T KeCADC_na_SecDrvOperStsEnb;/* Variable: KeCADC_na_SecDrvOperStsEnb
                                             * Referenced by: '<S8>/ConstantEnb233'
                                             */
extern boolean_T KeCADC_na_SecDrvZoneFlapParkStsEnb;
                                 /* Variable: KeCADC_na_SecDrvZoneFlapParkStsEnb
                                  * Referenced by: '<S8>/ConstantEnb254'
                                  */
extern boolean_T KeCADC_na_SecPassDistbnModeEnb;
                                     /* Variable: KeCADC_na_SecPassDistbnModeEnb
                                      * Referenced by: '<S8>/ConstantEnb279'
                                      */
extern boolean_T KeCADC_na_SecPassOperStsEnb;/* Variable: KeCADC_na_SecPassOperStsEnb
                                              * Referenced by: '<S8>/ConstantEnb260'
                                              */
extern boolean_T KeCADC_na_SecPassZoneFlapParkStsEnb;
                                /* Variable: KeCADC_na_SecPassZoneFlapParkStsEnb
                                 * Referenced by: '<S8>/ConstantEnb282'
                                 */
extern boolean_T KeCADC_na_SecPassZoneFlapParkStsRv;
                                 /* Variable: KeCADC_na_SecPassZoneFlapParkStsRv
                                  * Referenced by: '<S8>/ConstantRv282'
                                  */
extern boolean_T KeCADC_na_SpfPosnCalcnModeEnb;
                                      /* Variable: KeCADC_na_SpfPosnCalcnModeEnb
                                       * Referenced by: '<S8>/ConstantEnb262'
                                       */
extern boolean_T KeCADC_na_SpfPosnUpdStsEnb;/* Variable: KeCADC_na_SpfPosnUpdStsEnb
                                             * Referenced by: '<S8>/ConstantEnb264'
                                             */
extern boolean_T KeCADC_na_SpfStopReqEnb;/* Variable: KeCADC_na_SpfStopReqEnb
                                          * Referenced by: '<S8>/ConstantEnb304'
                                          */
extern boolean_T KeCADC_na_SpfStopReqRv;/* Variable: KeCADC_na_SpfStopReqRv
                                         * Referenced by: '<S8>/ConstantRv304'
                                         */
extern boolean_T KeCADC_na_SpvPosnCalcnModeEnb;
                                      /* Variable: KeCADC_na_SpvPosnCalcnModeEnb
                                       * Referenced by: '<S8>/ConstantEnb261'
                                       */
extern boolean_T KeCADC_na_SpvPosnUpdStsEnb;/* Variable: KeCADC_na_SpvPosnUpdStsEnb
                                             * Referenced by: '<S8>/ConstantEnb263'
                                             */
extern boolean_T KeCADC_na_SpvStopReqEnb;/* Variable: KeCADC_na_SpvStopReqEnb
                                          * Referenced by: '<S8>/ConstantEnb302'
                                          */
extern boolean_T KeCADC_na_SpvStopReqRv;/* Variable: KeCADC_na_SpvStopReqRv
                                         * Referenced by: '<S8>/ConstantRv302'
                                         */
extern boolean_T KeCADC_pct_BpFlapPosnEnb;/* Variable: KeCADC_pct_BpFlapPosnEnb
                                           * Referenced by: '<S8>/ConstantEnb210'
                                           */
extern boolean_T KeCADC_pct_BpPosnBaseEnb;/* Variable: KeCADC_pct_BpPosnBaseEnb
                                           * Referenced by: '<S8>/ConstantEnb292'
                                           */
extern boolean_T KeCADC_pct_BpPosnCalcdEnb;/* Variable: KeCADC_pct_BpPosnCalcdEnb
                                            * Referenced by: '<S8>/ConstantEnb197'
                                            */
extern boolean_T KeCADC_pct_BpPosnDasEnb;/* Variable: KeCADC_pct_BpPosnDasEnb
                                          * Referenced by: '<S8>/ConstantEnb201'
                                          */
extern boolean_T KeCADC_pct_BpPosnErrMngtEnb;/* Variable: KeCADC_pct_BpPosnErrMngtEnb
                                              * Referenced by: '<S8>/ConstantEnb205'
                                              */
extern boolean_T KeCADC_pct_BpPosnReqEnb;/* Variable: KeCADC_pct_BpPosnReqEnb
                                          * Referenced by: '<S8>/ConstantEnb285'
                                          */
extern boolean_T KeCADC_pct_DefFlapPosnEnb;/* Variable: KeCADC_pct_DefFlapPosnEnb
                                            * Referenced by: '<S8>/ConstantEnb209'
                                            */
extern boolean_T KeCADC_pct_DefPosnBaseEnb;/* Variable: KeCADC_pct_DefPosnBaseEnb
                                            * Referenced by: '<S8>/ConstantEnb291'
                                            */
extern boolean_T KeCADC_pct_DefPosnCalcdEnb;/* Variable: KeCADC_pct_DefPosnCalcdEnb
                                             * Referenced by: '<S8>/ConstantEnb196'
                                             */
extern boolean_T KeCADC_pct_DefPosnDasEnb;/* Variable: KeCADC_pct_DefPosnDasEnb
                                           * Referenced by: '<S8>/ConstantEnb200'
                                           */
extern boolean_T KeCADC_pct_DefPosnErrMngtEnb;/* Variable: KeCADC_pct_DefPosnErrMngtEnb
                                               * Referenced by: '<S8>/ConstantEnb204'
                                               */
extern boolean_T KeCADC_pct_DefPosnNvhCmpEnb;/* Variable: KeCADC_pct_DefPosnNvhCmpEnb
                                              * Referenced by: '<S8>/ConstantEnb193'
                                              */
extern boolean_T KeCADC_pct_DefPosnReqEnb;/* Variable: KeCADC_pct_DefPosnReqEnb
                                           * Referenced by: '<S8>/ConstantEnb283'
                                           */
extern boolean_T KeCADC_pct_FdfDefCmpEnb;/* Variable: KeCADC_pct_FdfDefCmpEnb
                                          * Referenced by: '<S8>/ConstantEnb190'
                                          */
extern boolean_T KeCADC_pct_FdfFlapPosnEnb;/* Variable: KeCADC_pct_FdfFlapPosnEnb
                                            * Referenced by: '<S8>/ConstantEnb212'
                                            */
extern boolean_T KeCADC_pct_FdfPosnAmbCmpEnb;/* Variable: KeCADC_pct_FdfPosnAmbCmpEnb
                                              * Referenced by: '<S8>/ConstantEnb192'
                                              */
extern boolean_T KeCADC_pct_FdfPosnBaseEnb;/* Variable: KeCADC_pct_FdfPosnBaseEnb
                                            * Referenced by: '<S8>/ConstantEnb188'
                                            */
extern boolean_T KeCADC_pct_FdfPosnCalcdEnb;/* Variable: KeCADC_pct_FdfPosnCalcdEnb
                                             * Referenced by: '<S8>/ConstantEnb199'
                                             */
extern boolean_T KeCADC_pct_FdfPosnDasEnb;/* Variable: KeCADC_pct_FdfPosnDasEnb
                                           * Referenced by: '<S8>/ConstantEnb203'
                                           */
extern boolean_T KeCADC_pct_FdfPosnErrMngtEnb;/* Variable: KeCADC_pct_FdfPosnErrMngtEnb
                                               * Referenced by: '<S8>/ConstantEnb206'
                                               */
extern boolean_T KeCADC_pct_FdfPosnNvhCmpEnb;/* Variable: KeCADC_pct_FdfPosnNvhCmpEnb
                                              * Referenced by: '<S8>/ConstantEnb195'
                                              */
extern boolean_T KeCADC_pct_FdfPosnReqEnb;/* Variable: KeCADC_pct_FdfPosnReqEnb
                                           * Referenced by: '<S8>/ConstantEnb289'
                                           */
extern boolean_T KeCADC_pct_FdvDefCmpEnb;/* Variable: KeCADC_pct_FdvDefCmpEnb
                                          * Referenced by: '<S8>/ConstantEnb189'
                                          */
extern boolean_T KeCADC_pct_FdvFlapPosnEnb;/* Variable: KeCADC_pct_FdvFlapPosnEnb
                                            * Referenced by: '<S8>/ConstantEnb211'
                                            */
extern boolean_T KeCADC_pct_FdvPosnAmbCmpEnb;/* Variable: KeCADC_pct_FdvPosnAmbCmpEnb
                                              * Referenced by: '<S8>/ConstantEnb191'
                                              */
extern boolean_T KeCADC_pct_FdvPosnBaseEnb;/* Variable: KeCADC_pct_FdvPosnBaseEnb
                                            * Referenced by: '<S8>/ConstantEnb187'
                                            */
extern boolean_T KeCADC_pct_FdvPosnCalcdEnb;/* Variable: KeCADC_pct_FdvPosnCalcdEnb
                                             * Referenced by: '<S8>/ConstantEnb198'
                                             */
extern boolean_T KeCADC_pct_FdvPosnDasEnb;/* Variable: KeCADC_pct_FdvPosnDasEnb
                                           * Referenced by: '<S8>/ConstantEnb202'
                                           */
extern boolean_T KeCADC_pct_FdvPosnErrMngtEnb;/* Variable: KeCADC_pct_FdvPosnErrMngtEnb
                                               * Referenced by: '<S8>/ConstantEnb207'
                                               */
extern boolean_T KeCADC_pct_FdvPosnNvhCmpEnb;/* Variable: KeCADC_pct_FdvPosnNvhCmpEnb
                                              * Referenced by: '<S8>/ConstantEnb194'
                                              */
extern boolean_T KeCADC_pct_FdvPosnReqEnb;/* Variable: KeCADC_pct_FdvPosnReqEnb
                                           * Referenced by: '<S8>/ConstantEnb287'
                                           */
extern boolean_T KeCADC_pct_FpfDefCmpEnb;/* Variable: KeCADC_pct_FpfDefCmpEnb
                                          * Referenced by: '<S8>/ConstantEnb219'
                                          */
extern boolean_T KeCADC_pct_FpfFlapPosnEnb;/* Variable: KeCADC_pct_FpfFlapPosnEnb
                                            * Referenced by: '<S8>/ConstantEnb231'
                                            */
extern boolean_T KeCADC_pct_FpfPosnAmbCmpEnb;/* Variable: KeCADC_pct_FpfPosnAmbCmpEnb
                                              * Referenced by: '<S8>/ConstantEnb221'
                                              */
extern boolean_T KeCADC_pct_FpfPosnBaseEnb;/* Variable: KeCADC_pct_FpfPosnBaseEnb
                                            * Referenced by: '<S8>/ConstantEnb257'
                                            */
extern boolean_T KeCADC_pct_FpfPosnCalcdEnb;/* Variable: KeCADC_pct_FpfPosnCalcdEnb
                                             * Referenced by: '<S8>/ConstantEnb259'
                                             */
extern boolean_T KeCADC_pct_FpfPosnDasEnb;/* Variable: KeCADC_pct_FpfPosnDasEnb
                                           * Referenced by: '<S8>/ConstantEnb226'
                                           */
extern boolean_T KeCADC_pct_FpfPosnErrMngtEnb;/* Variable: KeCADC_pct_FpfPosnErrMngtEnb
                                               * Referenced by: '<S8>/ConstantEnb228'
                                               */
extern boolean_T KeCADC_pct_FpfPosnNvhCmpEnb;/* Variable: KeCADC_pct_FpfPosnNvhCmpEnb
                                              * Referenced by: '<S8>/ConstantEnb223'
                                              */
extern boolean_T KeCADC_pct_FpfPosnReqEnb;/* Variable: KeCADC_pct_FpfPosnReqEnb
                                           * Referenced by: '<S8>/ConstantEnb295'
                                           */
extern boolean_T KeCADC_pct_FpvDefCmpEnb;/* Variable: KeCADC_pct_FpvDefCmpEnb
                                          * Referenced by: '<S8>/ConstantEnb258'
                                          */
extern boolean_T KeCADC_pct_FpvFlapPosnEnb;/* Variable: KeCADC_pct_FpvFlapPosnEnb
                                            * Referenced by: '<S8>/ConstantEnb230'
                                            */
extern boolean_T KeCADC_pct_FpvPosnAmbCmpEnb;/* Variable: KeCADC_pct_FpvPosnAmbCmpEnb
                                              * Referenced by: '<S8>/ConstantEnb220'
                                              */
extern boolean_T KeCADC_pct_FpvPosnBaseEnb;/* Variable: KeCADC_pct_FpvPosnBaseEnb
                                            * Referenced by: '<S8>/ConstantEnb256'
                                            */
extern boolean_T KeCADC_pct_FpvPosnCalcdEnb;/* Variable: KeCADC_pct_FpvPosnCalcdEnb
                                             * Referenced by: '<S8>/ConstantEnb224'
                                             */
extern boolean_T KeCADC_pct_FpvPosnDasEnb;/* Variable: KeCADC_pct_FpvPosnDasEnb
                                           * Referenced by: '<S8>/ConstantEnb225'
                                           */
extern boolean_T KeCADC_pct_FpvPosnErrMngtEnb;/* Variable: KeCADC_pct_FpvPosnErrMngtEnb
                                               * Referenced by: '<S8>/ConstantEnb227'
                                               */
extern boolean_T KeCADC_pct_FpvPosnNvhCmpEnb;/* Variable: KeCADC_pct_FpvPosnNvhCmpEnb
                                              * Referenced by: '<S8>/ConstantEnb222'
                                              */
extern boolean_T KeCADC_pct_FpvPosnReqEnb;/* Variable: KeCADC_pct_FpvPosnReqEnb
                                           * Referenced by: '<S8>/ConstantEnb293'
                                           */
extern boolean_T KeCADC_pct_SdfDefCmpEnb;/* Variable: KeCADC_pct_SdfDefCmpEnb
                                          * Referenced by: '<S8>/ConstantEnb241'
                                          */
extern boolean_T KeCADC_pct_SdfFlapPosnEnb;/* Variable: KeCADC_pct_SdfFlapPosnEnb
                                            * Referenced by: '<S8>/ConstantEnb252'
                                            */
extern boolean_T KeCADC_pct_SdfPosnAmbCmpEnb;/* Variable: KeCADC_pct_SdfPosnAmbCmpEnb
                                              * Referenced by: '<S8>/ConstantEnb243'
                                              */
extern boolean_T KeCADC_pct_SdfPosnBaseEnb;/* Variable: KeCADC_pct_SdfPosnBaseEnb
                                            * Referenced by: '<S8>/ConstantEnb239'
                                            */
extern boolean_T KeCADC_pct_SdfPosnCalcdEnb;/* Variable: KeCADC_pct_SdfPosnCalcdEnb
                                             * Referenced by: '<S8>/ConstantEnb255'
                                             */
extern boolean_T KeCADC_pct_SdfPosnDasEnb;/* Variable: KeCADC_pct_SdfPosnDasEnb
                                           * Referenced by: '<S8>/ConstantEnb248'
                                           */
extern boolean_T KeCADC_pct_SdfPosnErrMngtEnb;/* Variable: KeCADC_pct_SdfPosnErrMngtEnb
                                               * Referenced by: '<S8>/ConstantEnb250'
                                               */
extern boolean_T KeCADC_pct_SdfPosnNvhCmpEnb;/* Variable: KeCADC_pct_SdfPosnNvhCmpEnb
                                              * Referenced by: '<S8>/ConstantEnb245'
                                              */
extern boolean_T KeCADC_pct_SdfPosnReqEnb;/* Variable: KeCADC_pct_SdfPosnReqEnb
                                           * Referenced by: '<S8>/ConstantEnb299'
                                           */
extern boolean_T KeCADC_pct_SdvDefCmpEnb;/* Variable: KeCADC_pct_SdvDefCmpEnb
                                          * Referenced by: '<S8>/ConstantEnb240'
                                          */
extern boolean_T KeCADC_pct_SdvFlapPosnEnb;/* Variable: KeCADC_pct_SdvFlapPosnEnb
                                            * Referenced by: '<S8>/ConstantEnb251'
                                            */
extern boolean_T KeCADC_pct_SdvPosnAmbCmpEnb;/* Variable: KeCADC_pct_SdvPosnAmbCmpEnb
                                              * Referenced by: '<S8>/ConstantEnb242'
                                              */
extern boolean_T KeCADC_pct_SdvPosnBaseEnb;/* Variable: KeCADC_pct_SdvPosnBaseEnb
                                            * Referenced by: '<S8>/ConstantEnb238'
                                            */
extern boolean_T KeCADC_pct_SdvPosnCalcdEnb;/* Variable: KeCADC_pct_SdvPosnCalcdEnb
                                             * Referenced by: '<S8>/ConstantEnb246'
                                             */
extern boolean_T KeCADC_pct_SdvPosnDasEnb;/* Variable: KeCADC_pct_SdvPosnDasEnb
                                           * Referenced by: '<S8>/ConstantEnb247'
                                           */
extern boolean_T KeCADC_pct_SdvPosnErrMngtEnb;/* Variable: KeCADC_pct_SdvPosnErrMngtEnb
                                               * Referenced by: '<S8>/ConstantEnb249'
                                               */
extern boolean_T KeCADC_pct_SdvPosnNvhCmpEnb;/* Variable: KeCADC_pct_SdvPosnNvhCmpEnb
                                              * Referenced by: '<S8>/ConstantEnb244'
                                              */
extern boolean_T KeCADC_pct_SdvPosnReqEnb;/* Variable: KeCADC_pct_SdvPosnReqEnb
                                           * Referenced by: '<S8>/ConstantEnb297'
                                           */
extern boolean_T KeCADC_pct_SpfDefCmpEnb;/* Variable: KeCADC_pct_SpfDefCmpEnb
                                          * Referenced by: '<S8>/ConstantEnb268'
                                          */
extern boolean_T KeCADC_pct_SpfFlapPosnEnb;/* Variable: KeCADC_pct_SpfFlapPosnEnb
                                            * Referenced by: '<S8>/ConstantEnb281'
                                            */
extern boolean_T KeCADC_pct_SpfPosnAmbCmpEnb;/* Variable: KeCADC_pct_SpfPosnAmbCmpEnb
                                              * Referenced by: '<S8>/ConstantEnb270'
                                              */
extern boolean_T KeCADC_pct_SpfPosnBaseEnb;/* Variable: KeCADC_pct_SpfPosnBaseEnb
                                            * Referenced by: '<S8>/ConstantEnb265'
                                            */
extern boolean_T KeCADC_pct_SpfPosnCalcdEnb;/* Variable: KeCADC_pct_SpfPosnCalcdEnb
                                             * Referenced by: '<S8>/ConstantEnb274'
                                             */
extern boolean_T KeCADC_pct_SpfPosnDasEnb;/* Variable: KeCADC_pct_SpfPosnDasEnb
                                           * Referenced by: '<S8>/ConstantEnb276'
                                           */
extern boolean_T KeCADC_pct_SpfPosnErrMngtEnb;/* Variable: KeCADC_pct_SpfPosnErrMngtEnb
                                               * Referenced by: '<S8>/ConstantEnb278'
                                               */
extern boolean_T KeCADC_pct_SpfPosnNvhCmpEnb;/* Variable: KeCADC_pct_SpfPosnNvhCmpEnb
                                              * Referenced by: '<S8>/ConstantEnb272'
                                              */
extern boolean_T KeCADC_pct_SpfPosnReqEnb;/* Variable: KeCADC_pct_SpfPosnReqEnb
                                           * Referenced by: '<S8>/ConstantEnb303'
                                           */
extern boolean_T KeCADC_pct_SpvDefCmpEnb;/* Variable: KeCADC_pct_SpvDefCmpEnb
                                          * Referenced by: '<S8>/ConstantEnb267'
                                          */
extern boolean_T KeCADC_pct_SpvFlapPosnEnb;/* Variable: KeCADC_pct_SpvFlapPosnEnb
                                            * Referenced by: '<S8>/ConstantEnb280'
                                            */
extern boolean_T KeCADC_pct_SpvPosnAmbCmpEnb;/* Variable: KeCADC_pct_SpvPosnAmbCmpEnb
                                              * Referenced by: '<S8>/ConstantEnb269'
                                              */
extern boolean_T KeCADC_pct_SpvPosnBaseEnb;/* Variable: KeCADC_pct_SpvPosnBaseEnb
                                            * Referenced by: '<S8>/ConstantEnb266'
                                            */
extern boolean_T KeCADC_pct_SpvPosnCalcdEnb;/* Variable: KeCADC_pct_SpvPosnCalcdEnb
                                             * Referenced by: '<S8>/ConstantEnb273'
                                             */
extern boolean_T KeCADC_pct_SpvPosnDasEnb;/* Variable: KeCADC_pct_SpvPosnDasEnb
                                           * Referenced by: '<S8>/ConstantEnb275'
                                           */
extern boolean_T KeCADC_pct_SpvPosnErrMngtEnb;/* Variable: KeCADC_pct_SpvPosnErrMngtEnb
                                               * Referenced by: '<S8>/ConstantEnb277'
                                               */
extern boolean_T KeCADC_pct_SpvPosnNvhCmpEnb;/* Variable: KeCADC_pct_SpvPosnNvhCmpEnb
                                              * Referenced by: '<S8>/ConstantEnb271'
                                              */
extern boolean_T KeCADC_pct_SpvPosnReqEnb;/* Variable: KeCADC_pct_SpvPosnReqEnb
                                           * Referenced by: '<S8>/ConstantEnb301'
                                           */
extern boolean_T KeCAFC_n_BlwrSpeedRampEnb;/* Variable: KeCAFC_n_BlwrSpeedRampEnb
                                            * Referenced by: '<S10>/ConstantEnb566'
                                            */
extern boolean_T KeCAFC_n_BlwrSpeedReqEnb;/* Variable: KeCAFC_n_BlwrSpeedReqEnb
                                           * Referenced by: '<S10>/ConstantEnb565'
                                           */
extern boolean_T KeCAFC_n_BlwrSpeedTarEnb;/* Variable: KeCAFC_n_BlwrSpeedTarEnb
                                           * Referenced by: '<S10>/ConstantEnb564'
                                           */
extern boolean_T KeCAFC_na_BlwrRlyReqEnb;/* Variable: KeCAFC_na_BlwrRlyReqEnb
                                          * Referenced by: '<S10>/ConstantEnb568'
                                          */
extern boolean_T KeCAFC_na_BlwrRlyReqRv;/* Variable: KeCAFC_na_BlwrRlyReqRv
                                         * Referenced by: '<S10>/ConstantRv568'
                                         */
extern boolean_T KeCAFC_na_FrntAirFlowLvIndcEnb;
                                     /* Variable: KeCAFC_na_FrntAirFlowLvIndcEnb
                                      * Referenced by: '<S10>/ConstantEnb567'
                                      */
extern boolean_T KeCAFC_na_FrntBlwrCalcnModeEnb;
                                     /* Variable: KeCAFC_na_FrntBlwrCalcnModeEnb
                                      * Referenced by: '<S10>/ConstantEnb553'
                                      */
extern boolean_T KeCAFC_na_FrntBlwrOperStsEnb;/* Variable: KeCAFC_na_FrntBlwrOperStsEnb
                                               * Referenced by: '<S10>/ConstantEnb552'
                                               */
extern boolean_T KeCAFC_na_FrntBlwrRespRateEnb;
                                      /* Variable: KeCAFC_na_FrntBlwrRespRateEnb
                                       * Referenced by: '<S10>/ConstantEnb554'
                                       */
extern boolean_T KeCAFC_na_FrntBlwrUpdStsEnb;/* Variable: KeCAFC_na_FrntBlwrUpdStsEnb
                                              * Referenced by: '<S10>/ConstantEnb555'
                                              */
extern boolean_T KeCAFC_na_FrntBlwrUpdStsRv;/* Variable: KeCAFC_na_FrntBlwrUpdStsRv
                                             * Referenced by: '<S10>/ConstantRv555'
                                             */
extern boolean_T KeCAFC_v_ColdFlowLimEnb;/* Variable: KeCAFC_v_ColdFlowLimEnb
                                          * Referenced by: '<S10>/ConstantEnb557'
                                          */
extern boolean_T KeCAFC_v_FbFlowAmbCmpEnb;/* Variable: KeCAFC_v_FbFlowAmbCmpEnb
                                           * Referenced by: '<S10>/ConstantEnb556'
                                           */
extern boolean_T KeCAFC_v_FbFlowBaseEnb;/* Variable: KeCAFC_v_FbFlowBaseEnb
                                         * Referenced by: '<S10>/ConstantEnb569'
                                         */
extern boolean_T KeCAFC_v_FlowCalcdEnb;/* Variable: KeCAFC_v_FlowCalcdEnb
                                        * Referenced by: '<S10>/ConstantEnb560'
                                        */
extern boolean_T KeCAFC_v_FlowCccsLimEnb;/* Variable: KeCAFC_v_FlowCccsLimEnb
                                          * Referenced by: '<S10>/ConstantEnb558'
                                          */
extern boolean_T KeCAFC_v_FlowCddsEnb; /* Variable: KeCAFC_v_FlowCddsEnb
                                        * Referenced by: '<S10>/ConstantEnb562'
                                        */
extern boolean_T KeCAFC_v_FlowEemCmpEnb;/* Variable: KeCAFC_v_FlowEemCmpEnb
                                         * Referenced by: '<S10>/ConstantEnb561'
                                         */
extern boolean_T KeCAFC_v_FlowErrMngtEnb;/* Variable: KeCAFC_v_FlowErrMngtEnb
                                          * Referenced by: '<S10>/ConstantEnb563'
                                          */
extern boolean_T KeCAFC_v_FlowNvhCmpEnb;/* Variable: KeCAFC_v_FlowNvhCmpEnb
                                         * Referenced by: '<S10>/ConstantEnb559'
                                         */
extern boolean_T KeCHFC_na_FdhFlapPosnEnb;/* Variable: KeCHFC_na_FdhFlapPosnEnb
                                           * Referenced by: '<S12>/ConstantEnb151'
                                           */
extern boolean_T KeCHFC_na_FdhPosnCalcnModeEnb;
                                      /* Variable: KeCHFC_na_FdhPosnCalcnModeEnb
                                       * Referenced by: '<S12>/ConstantEnb145'
                                       */
extern boolean_T KeCHFC_na_FdhPosnReqEnb;/* Variable: KeCHFC_na_FdhPosnReqEnb
                                          * Referenced by: '<S12>/ConstantEnb149'
                                          */
extern boolean_T KeCHFC_na_FdhPosnUpdStEnb;/* Variable: KeCHFC_na_FdhPosnUpdStEnb
                                            * Referenced by: '<S12>/ConstantEnb146'
                                            */
extern boolean_T KeCHFC_na_FdhPosnUpdStRv;/* Variable: KeCHFC_na_FdhPosnUpdStRv
                                           * Referenced by: '<S12>/ConstantRv146'
                                           */
extern boolean_T KeCHFC_na_FdhStopReqEnb;/* Variable: KeCHFC_na_FdhStopReqEnb
                                          * Referenced by: '<S12>/ConstantEnb150'
                                          */
extern boolean_T KeCHFC_na_FdhStopReqRv;/* Variable: KeCHFC_na_FdhStopReqRv
                                         * Referenced by: '<S12>/ConstantRv150'
                                         */
extern boolean_T KeCHFC_na_FphFlapPosnEnb;/* Variable: KeCHFC_na_FphFlapPosnEnb
                                           * Referenced by: '<S12>/ConstantEnb160'
                                           */
extern boolean_T KeCHFC_na_FphPosnCalcnModeEnb;
                                      /* Variable: KeCHFC_na_FphPosnCalcnModeEnb
                                       * Referenced by: '<S12>/ConstantEnb154'
                                       */
extern boolean_T KeCHFC_na_FphPosnReqEnb;/* Variable: KeCHFC_na_FphPosnReqEnb
                                          * Referenced by: '<S12>/ConstantEnb158'
                                          */
extern boolean_T KeCHFC_na_FphPosnUpdStEnb;/* Variable: KeCHFC_na_FphPosnUpdStEnb
                                            * Referenced by: '<S12>/ConstantEnb155'
                                            */
extern boolean_T KeCHFC_na_FphPosnUpdStRv;/* Variable: KeCHFC_na_FphPosnUpdStRv
                                           * Referenced by: '<S12>/ConstantRv155'
                                           */
extern boolean_T KeCHFC_na_FphStopReqEnb;/* Variable: KeCHFC_na_FphStopReqEnb
                                          * Referenced by: '<S12>/ConstantEnb159'
                                          */
extern boolean_T KeCHFC_na_FphStopReqRv;/* Variable: KeCHFC_na_FphStopReqRv
                                         * Referenced by: '<S12>/ConstantRv159'
                                         */
extern boolean_T KeCHFC_na_FrntDrvOperStEnb;/* Variable: KeCHFC_na_FrntDrvOperStEnb
                                             * Referenced by: '<S12>/ConstantEnb144'
                                             */
extern boolean_T KeCHFC_na_FrntDrvZoneFlapParkStEnb;
                                 /* Variable: KeCHFC_na_FrntDrvZoneFlapParkStEnb
                                  * Referenced by: '<S12>/ConstantEnb152'
                                  */
extern boolean_T KeCHFC_na_FrntDrvZoneFlapParkStRv;
                                  /* Variable: KeCHFC_na_FrntDrvZoneFlapParkStRv
                                   * Referenced by: '<S12>/ConstantRv152'
                                   */
extern boolean_T KeCHFC_na_FrntPassOperStEnb;/* Variable: KeCHFC_na_FrntPassOperStEnb
                                              * Referenced by: '<S12>/ConstantEnb153'
                                              */
extern boolean_T KeCHFC_na_FrntPassZoneFlapParkStEnb;
                                /* Variable: KeCHFC_na_FrntPassZoneFlapParkStEnb
                                 * Referenced by: '<S12>/ConstantEnb161'
                                 */
extern boolean_T KeCHFC_na_FrntPassZoneFlapParkStRv;
                                 /* Variable: KeCHFC_na_FrntPassZoneFlapParkStRv
                                  * Referenced by: '<S12>/ConstantRv161'
                                  */
extern boolean_T KeCHFC_na_SdhFlapPosnEnb;/* Variable: KeCHFC_na_SdhFlapPosnEnb
                                           * Referenced by: '<S12>/ConstantEnb169'
                                           */
extern boolean_T KeCHFC_na_SdhPosnCalcnModeEnb;
                                      /* Variable: KeCHFC_na_SdhPosnCalcnModeEnb
                                       * Referenced by: '<S12>/ConstantEnb163'
                                       */
extern boolean_T KeCHFC_na_SdhPosnReqEnb;/* Variable: KeCHFC_na_SdhPosnReqEnb
                                          * Referenced by: '<S12>/ConstantEnb167'
                                          */
extern boolean_T KeCHFC_na_SdhPosnUpdStEnb;/* Variable: KeCHFC_na_SdhPosnUpdStEnb
                                            * Referenced by: '<S12>/ConstantEnb164'
                                            */
extern boolean_T KeCHFC_na_SdhPosnUpdStRv;/* Variable: KeCHFC_na_SdhPosnUpdStRv
                                           * Referenced by: '<S12>/ConstantRv164'
                                           */
extern boolean_T KeCHFC_na_SdhStopReqEnb;/* Variable: KeCHFC_na_SdhStopReqEnb
                                          * Referenced by: '<S12>/ConstantEnb168'
                                          */
extern boolean_T KeCHFC_na_SdhStopReqRv;/* Variable: KeCHFC_na_SdhStopReqRv
                                         * Referenced by: '<S12>/ConstantRv168'
                                         */
extern boolean_T KeCHFC_na_SecDrvOperStEnb;/* Variable: KeCHFC_na_SecDrvOperStEnb
                                            * Referenced by: '<S12>/ConstantEnb162'
                                            */
extern boolean_T KeCHFC_na_SecDrvZoneFlapParkStEnb;
                                  /* Variable: KeCHFC_na_SecDrvZoneFlapParkStEnb
                                   * Referenced by: '<S12>/ConstantEnb170'
                                   */
extern boolean_T KeCHFC_na_SecDrvZoneFlapParkStRv;
                                   /* Variable: KeCHFC_na_SecDrvZoneFlapParkStRv
                                    * Referenced by: '<S12>/ConstantRv170'
                                    */
extern boolean_T KeCHFC_na_SecPassOperStEnb;/* Variable: KeCHFC_na_SecPassOperStEnb
                                             * Referenced by: '<S12>/ConstantEnb171'
                                             */
extern boolean_T KeCHFC_na_SecPassZoneFlapParkStEnb;
                                 /* Variable: KeCHFC_na_SecPassZoneFlapParkStEnb
                                  * Referenced by: '<S12>/ConstantEnb179'
                                  */
extern boolean_T KeCHFC_na_SecPassZoneFlapParkStRv;
                                  /* Variable: KeCHFC_na_SecPassZoneFlapParkStRv
                                   * Referenced by: '<S12>/ConstantRv179'
                                   */
extern boolean_T KeCHFC_na_SphFlapPosnEnb;/* Variable: KeCHFC_na_SphFlapPosnEnb
                                           * Referenced by: '<S12>/ConstantEnb178'
                                           */
extern boolean_T KeCHFC_na_SphPosnCalcnModeEnb;
                                      /* Variable: KeCHFC_na_SphPosnCalcnModeEnb
                                       * Referenced by: '<S12>/ConstantEnb172'
                                       */
extern boolean_T KeCHFC_na_SphPosnReqEnb;/* Variable: KeCHFC_na_SphPosnReqEnb
                                          * Referenced by: '<S12>/ConstantEnb176'
                                          */
extern boolean_T KeCHFC_na_SphPosnUpdStEnb;/* Variable: KeCHFC_na_SphPosnUpdStEnb
                                            * Referenced by: '<S12>/ConstantEnb173'
                                            */
extern boolean_T KeCHFC_na_SphPosnUpdStRv;/* Variable: KeCHFC_na_SphPosnUpdStRv
                                           * Referenced by: '<S12>/ConstantRv173'
                                           */
extern boolean_T KeCHFC_na_SphStopReqEnb;/* Variable: KeCHFC_na_SphStopReqEnb
                                          * Referenced by: '<S12>/ConstantEnb177'
                                          */
extern boolean_T KeCHFC_na_SphStopReqRv;/* Variable: KeCHFC_na_SphStopReqRv
                                         * Referenced by: '<S12>/ConstantRv177'
                                         */
extern boolean_T KeCHFC_pct_FdhPosnCalcdEnb;/* Variable: KeCHFC_pct_FdhPosnCalcdEnb
                                             * Referenced by: '<S12>/ConstantEnb147'
                                             */
extern boolean_T KeCHFC_pct_FdhPosnErrMngtEnb;/* Variable: KeCHFC_pct_FdhPosnErrMngtEnb
                                               * Referenced by: '<S12>/ConstantEnb148'
                                               */
extern boolean_T KeCHFC_pct_FphPosnCalcdEnb;/* Variable: KeCHFC_pct_FphPosnCalcdEnb
                                             * Referenced by: '<S12>/ConstantEnb156'
                                             */
extern boolean_T KeCHFC_pct_FphPosnErrMngtEnb;/* Variable: KeCHFC_pct_FphPosnErrMngtEnb
                                               * Referenced by: '<S12>/ConstantEnb157'
                                               */
extern boolean_T KeCHFC_pct_SdhPosnCalcdEnb;/* Variable: KeCHFC_pct_SdhPosnCalcdEnb
                                             * Referenced by: '<S12>/ConstantEnb165'
                                             */
extern boolean_T KeCHFC_pct_SdhPosnErrMngtEnb;/* Variable: KeCHFC_pct_SdhPosnErrMngtEnb
                                               * Referenced by: '<S12>/ConstantEnb166'
                                               */
extern boolean_T KeCHFC_pct_SphPosnCalcdEnb;/* Variable: KeCHFC_pct_SphPosnCalcdEnb
                                             * Referenced by: '<S12>/ConstantEnb174'
                                             */
extern boolean_T KeCHFC_pct_SphPosnErrMngtEnb;/* Variable: KeCHFC_pct_SphPosnErrMngtEnb
                                               * Referenced by: '<S12>/ConstantEnb175'
                                               */
extern boolean_T KeCHMI_T_SetTempLEnb; /* Variable: KeCHMI_T_SetTempLEnb
                                        * Referenced by: '<S14>/ConstantEnb72'
                                        */
extern boolean_T KeCHMI_T_SetTempMLEnb;/* Variable: KeCHMI_T_SetTempMLEnb
                                        * Referenced by: '<S14>/ConstantEnb74'
                                        */
extern boolean_T KeCHMI_T_SetTempREnb; /* Variable: KeCHMI_T_SetTempREnb
                                        * Referenced by: '<S14>/ConstantEnb73'
                                        */
extern boolean_T KeCHMI_na_AcReqEnb;   /* Variable: KeCHMI_na_AcReqEnb
                                        * Referenced by: '<S14>/ConstantEnb67'
                                        */
extern boolean_T KeCHMI_na_AcReqRv;    /* Variable: KeCHMI_na_AcReqRv
                                        * Referenced by: '<S14>/ConstantRv67'
                                        */
extern boolean_T KeCHMI_na_AirdLAutoModeEnb;/* Variable: KeCHMI_na_AirdLAutoModeEnb
                                             * Referenced by: '<S14>/ConstantEnb64'
                                             */
extern boolean_T KeCHMI_na_AirdLAutoModeRv;/* Variable: KeCHMI_na_AirdLAutoModeRv
                                            * Referenced by: '<S14>/ConstantRv64'
                                            */
extern boolean_T KeCHMI_na_AirdMLAutoModeEnb;/* Variable: KeCHMI_na_AirdMLAutoModeEnb
                                              * Referenced by: '<S14>/ConstantEnb66'
                                              */
extern boolean_T KeCHMI_na_AirdMLAutoModeRv;/* Variable: KeCHMI_na_AirdMLAutoModeRv
                                             * Referenced by: '<S14>/ConstantRv66'
                                             */
extern boolean_T KeCHMI_na_AirdModeLEnb;/* Variable: KeCHMI_na_AirdModeLEnb
                                         * Referenced by: '<S14>/ConstantEnb69'
                                         */
extern boolean_T KeCHMI_na_AirdModeMLEnb;/* Variable: KeCHMI_na_AirdModeMLEnb
                                          * Referenced by: '<S14>/ConstantEnb71'
                                          */
extern boolean_T KeCHMI_na_AirdModeREnb;/* Variable: KeCHMI_na_AirdModeREnb
                                         * Referenced by: '<S14>/ConstantEnb70'
                                         */
extern boolean_T KeCHMI_na_AirdRAutoModeEnb;/* Variable: KeCHMI_na_AirdRAutoModeEnb
                                             * Referenced by: '<S14>/ConstantEnb65'
                                             */
extern boolean_T KeCHMI_na_AirdRAutoModeRv;/* Variable: KeCHMI_na_AirdRAutoModeRv
                                            * Referenced by: '<S14>/ConstantRv65'
                                            */
extern boolean_T KeCHMI_na_BlwrAutoModeEnb;/* Variable: KeCHMI_na_BlwrAutoModeEnb
                                            * Referenced by: '<S14>/ConstantEnb63'
                                            */
extern boolean_T KeCHMI_na_BlwrAutoModeRv;/* Variable: KeCHMI_na_BlwrAutoModeRv
                                           * Referenced by: '<S14>/ConstantRv63'
                                           */
extern boolean_T KeCHMI_na_BlwrLvEnb;  /* Variable: KeCHMI_na_BlwrLvEnb
                                        * Referenced by: '<S14>/ConstantEnb75'
                                        */
extern boolean_T KeCHMI_na_BlwrOffEnb; /* Variable: KeCHMI_na_BlwrOffEnb
                                        * Referenced by: '<S14>/ConstantEnb76'
                                        */
extern boolean_T KeCHMI_na_BlwrOffRv;  /* Variable: KeCHMI_na_BlwrOffRv
                                        * Referenced by: '<S14>/ConstantRv76'
                                        */
extern boolean_T KeCHMI_na_DefrostReqEnb;/* Variable: KeCHMI_na_DefrostReqEnb
                                          * Referenced by: '<S14>/ConstantEnb77'
                                          */
extern boolean_T KeCHMI_na_DefrostReqRv;/* Variable: KeCHMI_na_DefrostReqRv
                                         * Referenced by: '<S14>/ConstantRv77'
                                         */
extern boolean_T KeCHMI_na_RfaAutoModeEnb;/* Variable: KeCHMI_na_RfaAutoModeEnb
                                           * Referenced by: '<S14>/ConstantEnb62'
                                           */
extern boolean_T KeCHMI_na_RfaAutoModeRv;/* Variable: KeCHMI_na_RfaAutoModeRv
                                          * Referenced by: '<S14>/ConstantRv62'
                                          */
extern boolean_T KeCHMI_na_RfaModeEnb; /* Variable: KeCHMI_na_RfaModeEnb
                                        * Referenced by: '<S14>/ConstantEnb68'
                                        */
extern boolean_T KeCHMI_na_RfaModeRv;  /* Variable: KeCHMI_na_RfaModeRv
                                        * Referenced by: '<S14>/ConstantRv68'
                                        */
extern boolean_T KeCREC_na_CRECFlapParkStsEnb;/* Variable: KeCREC_na_CRECFlapParkStsEnb
                                               * Referenced by: '<S16>/ConstantEnb34'
                                               */
extern boolean_T KeCREC_na_CRECFlapParkStsRV;/* Variable: KeCREC_na_CRECFlapParkStsRV
                                              * Referenced by: '<S16>/ConstantRv34'
                                              */
extern boolean_T KeCREC_na_CRECOperStsEnb;/* Variable: KeCREC_na_CRECOperStsEnb
                                           * Referenced by: '<S16>/ConstantEnb16'
                                           */
extern boolean_T KeCREC_na_OsaFlapUpdStsEnb;/* Variable: KeCREC_na_OsaFlapUpdStsEnb
                                             * Referenced by: '<S16>/ConstantEnb20'
                                             */
extern boolean_T KeCREC_na_OsaFlapUpdStsRV;/* Variable: KeCREC_na_OsaFlapUpdStsRV
                                            * Referenced by: '<S16>/ConstantRv20'
                                            */
extern boolean_T KeCREC_na_OsaPosnCalcnModeEnb;
                                      /* Variable: KeCREC_na_OsaPosnCalcnModeEnb
                                       * Referenced by: '<S16>/ConstantEnb18'
                                       */
extern boolean_T KeCREC_na_OsaStopReqEnb;/* Variable: KeCREC_na_OsaStopReqEnb
                                          * Referenced by: '<S16>/ConstantEnb39'
                                          */
extern boolean_T KeCREC_na_OsaStopReqRV;/* Variable: KeCREC_na_OsaStopReqRV
                                         * Referenced by: '<S16>/ConstantRv39'
                                         */
extern boolean_T KeCREC_na_RecFlapUpdStsEnb;/* Variable: KeCREC_na_RecFlapUpdStsEnb
                                             * Referenced by: '<S16>/ConstantEnb19'
                                             */
extern boolean_T KeCREC_na_RecFlapUpdStsRV;/* Variable: KeCREC_na_RecFlapUpdStsRV
                                            * Referenced by: '<S16>/ConstantRv19'
                                            */
extern boolean_T KeCREC_na_RecPosnBaseQfEnb;/* Variable: KeCREC_na_RecPosnBaseQfEnb
                                             * Referenced by: '<S16>/ConstantEnb41'
                                             */
extern boolean_T KeCREC_na_RecPosnBaseQfRV;/* Variable: KeCREC_na_RecPosnBaseQfRV
                                            * Referenced by: '<S16>/ConstantRv41'
                                            */
extern boolean_T KeCREC_na_RecPosnCalcnModeEnb;
                                      /* Variable: KeCREC_na_RecPosnCalcnModeEnb
                                       * Referenced by: '<S16>/ConstantEnb17'
                                       */
extern boolean_T KeCREC_na_RecStopReqEnb;/* Variable: KeCREC_na_RecStopReqEnb
                                          * Referenced by: '<S16>/ConstantEnb37'
                                          */
extern boolean_T KeCREC_na_RecStopReqRV;/* Variable: KeCREC_na_RecStopReqRV
                                         * Referenced by: '<S16>/ConstantRv37'
                                         */
extern boolean_T KeCREC_na_TakeBreathTmrModeEnb;
                                     /* Variable: KeCREC_na_TakeBreathTmrModeEnb
                                      * Referenced by: '<S16>/ConstantEnb21'
                                      */
extern boolean_T KeCREC_na_TakeBreathTmrModeRV;
                                      /* Variable: KeCREC_na_TakeBreathTmrModeRV
                                       * Referenced by: '<S16>/ConstantRv21'
                                       */
extern boolean_T KeCREC_na_TakeBreathTmrStsEnb;
                                      /* Variable: KeCREC_na_TakeBreathTmrStsEnb
                                       * Referenced by: '<S16>/ConstantEnb35'
                                       */
extern boolean_T KeCREC_na_TakeBreathTmrStsRV;/* Variable: KeCREC_na_TakeBreathTmrStsRV
                                               * Referenced by: '<S16>/ConstantRv35'
                                               */
extern boolean_T KeCREC_pct_OsaFlapPosnEnb;/* Variable: KeCREC_pct_OsaFlapPosnEnb
                                            * Referenced by: '<S16>/ConstantEnb33'
                                            */
extern boolean_T KeCREC_pct_OsaPosnBaseEnb;/* Variable: KeCREC_pct_OsaPosnBaseEnb
                                            * Referenced by: '<S16>/ConstantEnb22'
                                            */
extern boolean_T KeCREC_pct_OsaPosnCADSEnb;/* Variable: KeCREC_pct_OsaPosnCADSEnb
                                            * Referenced by: '<S16>/ConstantEnb28'
                                            */
extern boolean_T KeCREC_pct_OsaPosnCalcdEnb;/* Variable: KeCREC_pct_OsaPosnCalcdEnb
                                             * Referenced by: '<S16>/ConstantEnb26'
                                             */
extern boolean_T KeCREC_pct_OsaPosnErrMngtEnb;/* Variable: KeCREC_pct_OsaPosnErrMngtEnb
                                               * Referenced by: '<S16>/ConstantEnb30'
                                               */
extern boolean_T KeCREC_pct_OsaPosnNvhCmpEnb;/* Variable: KeCREC_pct_OsaPosnNvhCmpEnb
                                              * Referenced by: '<S16>/ConstantEnb25'
                                              */
extern boolean_T KeCREC_pct_OsaPosnReqEnb;/* Variable: KeCREC_pct_OsaPosnReqEnb
                                           * Referenced by: '<S16>/ConstantEnb38'
                                           */
extern boolean_T KeCREC_pct_RecFlapPosnEnb;/* Variable: KeCREC_pct_RecFlapPosnEnb
                                            * Referenced by: '<S16>/ConstantEnb32'
                                            */
extern boolean_T KeCREC_pct_RecPosnBaseEnb;/* Variable: KeCREC_pct_RecPosnBaseEnb
                                            * Referenced by: '<S16>/ConstantEnb23'
                                            */
extern boolean_T KeCREC_pct_RecPosnCADSEnb;/* Variable: KeCREC_pct_RecPosnCADSEnb
                                            * Referenced by: '<S16>/ConstantEnb29'
                                            */
extern boolean_T KeCREC_pct_RecPosnCalcdEnb;/* Variable: KeCREC_pct_RecPosnCalcdEnb
                                             * Referenced by: '<S16>/ConstantEnb27'
                                             */
extern boolean_T KeCREC_pct_RecPosnErrMngtEnb;/* Variable: KeCREC_pct_RecPosnErrMngtEnb
                                               * Referenced by: '<S16>/ConstantEnb31'
                                               */
extern boolean_T KeCREC_pct_RecPosnNvhCmpEnb;/* Variable: KeCREC_pct_RecPosnNvhCmpEnb
                                              * Referenced by: '<S16>/ConstantEnb24'
                                              */
extern boolean_T KeCREC_pct_RecPosnReqEnb;/* Variable: KeCREC_pct_RecPosnReqEnb
                                           * Referenced by: '<S16>/ConstantEnb36'
                                           */
extern boolean_T KeCREC_pct_RecRatEnb; /* Variable: KeCREC_pct_RecRatEnb
                                        * Referenced by: '<S16>/ConstantEnb40'
                                        */
extern boolean_T KeCSCC_T_DuctAvgTempEnb;/* Variable: KeCSCC_T_DuctAvgTempEnb
                                          * Referenced by: '<S18>/ConstantEnb108'
                                          */
extern boolean_T KeCSCC_T_FdTmaEnb;    /* Variable: KeCSCC_T_FdTmaEnb
                                        * Referenced by: '<S18>/ConstantEnb91'
                                        */
extern boolean_T KeCSCC_T_FpTmaEnb;    /* Variable: KeCSCC_T_FpTmaEnb
                                        * Referenced by: '<S18>/ConstantEnb92'
                                        */
extern boolean_T KeCSCC_T_RecTempEnb;  /* Variable: KeCSCC_T_RecTempEnb
                                        * Referenced by: '<S18>/ConstantEnb99'
                                        */
extern boolean_T KeCSCC_T_SdTmaEnb;    /* Variable: KeCSCC_T_SdTmaEnb
                                        * Referenced by: '<S18>/ConstantEnb93'
                                        */
extern boolean_T KeCSCC_T_SpTmaEnb;    /* Variable: KeCSCC_T_SpTmaEnb
                                        * Referenced by: '<S18>/ConstantEnb94'
                                        */
extern boolean_T KeCSCC_V_FrntDrvDefEnb;/* Variable: KeCSCC_V_FrntDrvDefEnb
                                         * Referenced by: '<S18>/ConstantEnb86'
                                         */
extern boolean_T KeCSCC_V_FrntDrvFlowFbEnb;/* Variable: KeCSCC_V_FrntDrvFlowFbEnb
                                            * Referenced by: '<S18>/ConstantEnb101'
                                            */
extern boolean_T KeCSCC_V_FrntDrvFootEnb;/* Variable: KeCSCC_V_FrntDrvFootEnb
                                          * Referenced by: '<S18>/ConstantEnb85'
                                          */
extern boolean_T KeCSCC_V_FrntDrvVentEnb;/* Variable: KeCSCC_V_FrntDrvVentEnb
                                          * Referenced by: '<S18>/ConstantEnb84'
                                          */
extern boolean_T KeCSCC_V_FrntPassDefEnb;/* Variable: KeCSCC_V_FrntPassDefEnb
                                          * Referenced by: '<S18>/ConstantEnb100'
                                          */
extern boolean_T KeCSCC_V_FrntPassFlowFbEnb;/* Variable: KeCSCC_V_FrntPassFlowFbEnb
                                             * Referenced by: '<S18>/ConstantEnb102'
                                             */
extern boolean_T KeCSCC_V_FrntPassFootEnb;/* Variable: KeCSCC_V_FrntPassFootEnb
                                           * Referenced by: '<S18>/ConstantEnb88'
                                           */
extern boolean_T KeCSCC_V_FrntPassVentEnb;/* Variable: KeCSCC_V_FrntPassVentEnb
                                           * Referenced by: '<S18>/ConstantEnb87'
                                           */
extern boolean_T KeCSCC_V_SecDrvFlowFbEnb;/* Variable: KeCSCC_V_SecDrvFlowFbEnb
                                           * Referenced by: '<S18>/ConstantEnb103'
                                           */
extern boolean_T KeCSCC_V_SecDrvFootEnb;/* Variable: KeCSCC_V_SecDrvFootEnb
                                         * Referenced by: '<S18>/ConstantEnb90'
                                         */
extern boolean_T KeCSCC_V_SecDrvVentEnb;/* Variable: KeCSCC_V_SecDrvVentEnb
                                         * Referenced by: '<S18>/ConstantEnb89'
                                         */
extern boolean_T KeCSCC_V_SecPassFlowFbEnb;/* Variable: KeCSCC_V_SecPassFlowFbEnb
                                            * Referenced by: '<S18>/ConstantEnb104'
                                            */
extern boolean_T KeCSCC_m_FrEvaNormFlwOutHumEnb;
                                     /* Variable: KeCSCC_m_FrEvaNormFlwOutHumEnb
                                      * Referenced by: '<S18>/ConstantEnb105'
                                      */
extern boolean_T KeCSCC_m_ReEvaNormFlwOutHumEnb;
                                     /* Variable: KeCSCC_m_ReEvaNormFlwOutHumEnb
                                      * Referenced by: '<S18>/ConstantEnb106'
                                      */
extern boolean_T KeCSCC_m_RecFlwInHumEnb;/* Variable: KeCSCC_m_RecFlwInHumEnb
                                          * Referenced by: '<S18>/ConstantEnb107'
                                          */
extern boolean_T KeCSCC_pa_FlowInletResEnb;/* Variable: KeCSCC_pa_FlowInletResEnb
                                            * Referenced by: '<S18>/ConstantEnb95'
                                            */
extern boolean_T KeCSCC_pct_FdhPosnRioEnb;/* Variable: KeCSCC_pct_FdhPosnRioEnb
                                           * Referenced by: '<S18>/ConstantEnb96'
                                           */
extern boolean_T KeCSCC_pct_FphPosnRioEnb;/* Variable: KeCSCC_pct_FphPosnRioEnb
                                           * Referenced by: '<S18>/ConstantEnb97'
                                           */
extern boolean_T KeCSCC_pct_SdhPosnRioEnb;/* Variable: KeCSCC_pct_SdhPosnRioEnb
                                           * Referenced by: '<S18>/ConstantEnb98'
                                           */
extern boolean_T KeCSCC_pwr_SloarAvgPwrEnb;/* Variable: KeCSCC_pwr_SloarAvgPwrEnb
                                            * Referenced by: '<S18>/ConstantEnb109'
                                            */
extern boolean_T KeCTCM_Af_FrntDrvWghFlowEnb;/* Variable: KeCTCM_Af_FrntDrvWghFlowEnb
                                              * Referenced by: '<S20>/ConstantEnb89'
                                              */
extern boolean_T KeCTCM_Af_FrntPassWghFlowEnb;/* Variable: KeCTCM_Af_FrntPassWghFlowEnb
                                               * Referenced by: '<S20>/ConstantEnb86'
                                               */
extern boolean_T KeCTCM_Af_SecDrvWghFlowEnb;/* Variable: KeCTCM_Af_SecDrvWghFlowEnb
                                             * Referenced by: '<S20>/ConstantEnb87'
                                             */
extern boolean_T KeCTCM_Af_SecPassWghFlowEnb;/* Variable: KeCTCM_Af_SecPassWghFlowEnb
                                              * Referenced by: '<S20>/ConstantEnb88'
                                              */
extern boolean_T KeCTCM_P_FdEvaEnrgExchEnb;/* Variable: KeCTCM_P_FdEvaEnrgExchEnb
                                            * Referenced by: '<S20>/ConstantEnb114'
                                            */
extern boolean_T KeCTCM_P_FdInConEnrgChngEnb;/* Variable: KeCTCM_P_FdInConEnrgChngEnb
                                              * Referenced by: '<S20>/ConstantEnb106'
                                              */
extern boolean_T KeCTCM_P_FpEvaEnrgExchEnb;/* Variable: KeCTCM_P_FpEvaEnrgExchEnb
                                            * Referenced by: '<S20>/ConstantEnb115'
                                            */
extern boolean_T KeCTCM_P_FpInConEnrgChngEnb;/* Variable: KeCTCM_P_FpInConEnrgChngEnb
                                              * Referenced by: '<S20>/ConstantEnb107'
                                              */
extern boolean_T KeCTCM_P_FrntDrvHeatDemEnb;/* Variable: KeCTCM_P_FrntDrvHeatDemEnb
                                             * Referenced by: '<S20>/ConstantEnb62'
                                             */
extern boolean_T KeCTCM_P_FrntPassHeatDemEnb;/* Variable: KeCTCM_P_FrntPassHeatDemEnb
                                              * Referenced by: '<S20>/ConstantEnb63'
                                              */
extern boolean_T KeCTCM_P_SdEvaEnrgExchEnb;/* Variable: KeCTCM_P_SdEvaEnrgExchEnb
                                            * Referenced by: '<S20>/ConstantEnb116'
                                            */
extern boolean_T KeCTCM_P_SdInConEnrgChngEnb;/* Variable: KeCTCM_P_SdInConEnrgChngEnb
                                              * Referenced by: '<S20>/ConstantEnb108'
                                              */
extern boolean_T KeCTCM_P_SecDrvHeatDemEnb;/* Variable: KeCTCM_P_SecDrvHeatDemEnb
                                            * Referenced by: '<S20>/ConstantEnb64'
                                            */
extern boolean_T KeCTCM_P_SecPassHeatDemEnb;/* Variable: KeCTCM_P_SecPassHeatDemEnb
                                             * Referenced by: '<S20>/ConstantEnb65'
                                             */
extern boolean_T KeCTCM_P_SpEvaEnrgExchEnb;/* Variable: KeCTCM_P_SpEvaEnrgExchEnb
                                            * Referenced by: '<S20>/ConstantEnb117'
                                            */
extern boolean_T KeCTCM_P_SpInConEnrgChngEnb;/* Variable: KeCTCM_P_SpInConEnrgChngEnb
                                              * Referenced by: '<S20>/ConstantEnb109'
                                              */
extern boolean_T KeCTCM_T_AmbCmpCoeffEnb;/* Variable: KeCTCM_T_AmbCmpCoeffEnb
                                          * Referenced by: '<S20>/ConstantEnb19'
                                          */
extern boolean_T KeCTCM_T_DtFdEnb;     /* Variable: KeCTCM_T_DtFdEnb
                                        * Referenced by: '<S20>/ConstantEnb95'
                                        */
extern boolean_T KeCTCM_T_DtFpEnb;     /* Variable: KeCTCM_T_DtFpEnb
                                        * Referenced by: '<S20>/ConstantEnb97'
                                        */
extern boolean_T KeCTCM_T_DtSdEnb;     /* Variable: KeCTCM_T_DtSdEnb
                                        * Referenced by: '<S20>/ConstantEnb99'
                                        */
extern boolean_T KeCTCM_T_DtSpEnb;     /* Variable: KeCTCM_T_DtSpEnb
                                        * Referenced by: '<S20>/ConstantEnb101'
                                        */
extern boolean_T KeCTCM_T_ECOTcsOffsetEnb;/* Variable: KeCTCM_T_ECOTcsOffsetEnb
                                           * Referenced by: '<S20>/ConstantEnb24'
                                           */
extern boolean_T KeCTCM_T_EvaDefFlwTempEnb;/* Variable: KeCTCM_T_EvaDefFlwTempEnb
                                            * Referenced by: '<S20>/ConstantEnb112'
                                            */
extern boolean_T KeCTCM_T_EvaNormFlwTempEnb;/* Variable: KeCTCM_T_EvaNormFlwTempEnb
                                             * Referenced by: '<S20>/ConstantEnb111'
                                             */
extern boolean_T KeCTCM_T_EvaOutFlwTempEnb;/* Variable: KeCTCM_T_EvaOutFlwTempEnb
                                            * Referenced by: '<S20>/ConstantEnb113'
                                            */
extern boolean_T KeCTCM_T_FLowestTarFlwTempEnb;
                                      /* Variable: KeCTCM_T_FLowestTarFlwTempEnb
                                       * Referenced by: '<S20>/ConstantEnb130'
                                       */
extern boolean_T KeCTCM_T_FdFlwTarTempEnb;/* Variable: KeCTCM_T_FdFlwTarTempEnb
                                           * Referenced by: '<S20>/ConstantEnb91'
                                           */
extern boolean_T KeCTCM_T_FdHexTarFlwTempEnb;/* Variable: KeCTCM_T_FdHexTarFlwTempEnb
                                              * Referenced by: '<S20>/ConstantEnb136'
                                              */
extern boolean_T KeCTCM_T_FdTarRecTCtrlEnb;/* Variable: KeCTCM_T_FdTarRecTCtrlEnb
                                            * Referenced by: '<S20>/ConstantEnb103'
                                            */
extern boolean_T KeCTCM_T_FdTcsUserOffsetEnb;/* Variable: KeCTCM_T_FdTcsUserOffsetEnb
                                              * Referenced by: '<S20>/ConstantEnb33'
                                              */
extern boolean_T KeCTCM_T_FpFlwTarTempEnb;/* Variable: KeCTCM_T_FpFlwTarTempEnb
                                           * Referenced by: '<S20>/ConstantEnb92'
                                           */
extern boolean_T KeCTCM_T_FpHexTarFlwTempEnb;/* Variable: KeCTCM_T_FpHexTarFlwTempEnb
                                              * Referenced by: '<S20>/ConstantEnb137'
                                              */
extern boolean_T KeCTCM_T_FpTarRecTCtrlEnb;/* Variable: KeCTCM_T_FpTarRecTCtrlEnb
                                            * Referenced by: '<S20>/ConstantEnb104'
                                            */
extern boolean_T KeCTCM_T_FpTcsUserOffsetEnb;/* Variable: KeCTCM_T_FpTcsUserOffsetEnb
                                              * Referenced by: '<S20>/ConstantEnb42'
                                              */
extern boolean_T KeCTCM_T_FrntDrvFlowTempOfsEnb;
                                     /* Variable: KeCTCM_T_FrntDrvFlowTempOfsEnb
                                      * Referenced by: '<S20>/ConstantEnb96'
                                      */
extern boolean_T KeCTCM_T_FrntEvaNormFlwTempEnb;
                                     /* Variable: KeCTCM_T_FrntEvaNormFlwTempEnb
                                      * Referenced by: '<S20>/ConstantEnb132'
                                      */
extern boolean_T KeCTCM_T_FrntEvaTarTempEnb;/* Variable: KeCTCM_T_FrntEvaTarTempEnb
                                             * Referenced by: '<S20>/ConstantEnb133'
                                             */
extern boolean_T KeCTCM_T_FrntHexTarTempEnb;/* Variable: KeCTCM_T_FrntHexTarTempEnb
                                             * Referenced by: '<S20>/ConstantEnb141'
                                             */
extern boolean_T KeCTCM_T_FrntPassFlowTempOfsEnb;
                                    /* Variable: KeCTCM_T_FrntPassFlowTempOfsEnb
                                     * Referenced by: '<S20>/ConstantEnb98'
                                     */
extern boolean_T KeCTCM_T_LowestTarFlwTempEnb;/* Variable: KeCTCM_T_LowestTarFlwTempEnb
                                               * Referenced by: '<S20>/ConstantEnb110'
                                               */
extern boolean_T KeCTCM_T_RLowestTarFlwTempEnb;
                                      /* Variable: KeCTCM_T_RLowestTarFlwTempEnb
                                       * Referenced by: '<S20>/ConstantEnb131'
                                       */
extern boolean_T KeCTCM_T_RearEvaNormFlwTempEnb;
                                     /* Variable: KeCTCM_T_RearEvaNormFlwTempEnb
                                      * Referenced by: '<S20>/ConstantEnb134'
                                      */
extern boolean_T KeCTCM_T_RearEvaTarTempEnb;/* Variable: KeCTCM_T_RearEvaTarTempEnb
                                             * Referenced by: '<S20>/ConstantEnb135'
                                             */
extern boolean_T KeCTCM_T_RearHexTarTempEnb;/* Variable: KeCTCM_T_RearHexTarTempEnb
                                             * Referenced by: '<S20>/ConstantEnb140'
                                             */
extern boolean_T KeCTCM_T_RecTOffsEnb; /* Variable: KeCTCM_T_RecTOffsEnb
                                        * Referenced by: '<S20>/ConstantEnb129'
                                        */
extern boolean_T KeCTCM_T_SdFlwTarTempEnb;/* Variable: KeCTCM_T_SdFlwTarTempEnb
                                           * Referenced by: '<S20>/ConstantEnb93'
                                           */
extern boolean_T KeCTCM_T_SdHexTarFlwTempEnb;/* Variable: KeCTCM_T_SdHexTarFlwTempEnb
                                              * Referenced by: '<S20>/ConstantEnb138'
                                              */
extern boolean_T KeCTCM_T_SdTcsUserOffsetEnb;/* Variable: KeCTCM_T_SdTcsUserOffsetEnb
                                              * Referenced by: '<S20>/ConstantEnb51'
                                              */
extern boolean_T KeCTCM_T_SecDrvFlowTempOfsEnb;
                                      /* Variable: KeCTCM_T_SecDrvFlowTempOfsEnb
                                       * Referenced by: '<S20>/ConstantEnb100'
                                       */
extern boolean_T KeCTCM_T_SecPassFlowTempOfsEnb;
                                     /* Variable: KeCTCM_T_SecPassFlowTempOfsEnb
                                      * Referenced by: '<S20>/ConstantEnb102'
                                      */
extern boolean_T KeCTCM_T_SpFlwTarTempEnb;/* Variable: KeCTCM_T_SpFlwTarTempEnb
                                           * Referenced by: '<S20>/ConstantEnb94'
                                           */
extern boolean_T KeCTCM_T_SpHexTarFlwTempEnb;/* Variable: KeCTCM_T_SpHexTarFlwTempEnb
                                              * Referenced by: '<S20>/ConstantEnb139'
                                              */
extern boolean_T KeCTCM_T_SpTcsUserOffsetEnb;/* Variable: KeCTCM_T_SpTcsUserOffsetEnb
                                              * Referenced by: '<S20>/ConstantEnb60'
                                              */
extern boolean_T KeCTCM_T_SurfIntEff0sunEnb;/* Variable: KeCTCM_T_SurfIntEff0sunEnb
                                             * Referenced by: '<S20>/ConstantEnb22'
                                             */
extern boolean_T KeCTCM_T_SurfIntEff100sunEnb;/* Variable: KeCTCM_T_SurfIntEff100sunEnb
                                               * Referenced by: '<S20>/ConstantEnb23'
                                               */
extern boolean_T KeCTCM_T_SurfIntEffFdEnb;/* Variable: KeCTCM_T_SurfIntEffFdEnb
                                           * Referenced by: '<S20>/ConstantEnb30'
                                           */
extern boolean_T KeCTCM_T_SurfIntEffFpEnb;/* Variable: KeCTCM_T_SurfIntEffFpEnb
                                           * Referenced by: '<S20>/ConstantEnb39'
                                           */
extern boolean_T KeCTCM_T_SurfIntEffSdEnb;/* Variable: KeCTCM_T_SurfIntEffSdEnb
                                           * Referenced by: '<S20>/ConstantEnb48'
                                           */
extern boolean_T KeCTCM_T_SurfIntEffSpEnb;/* Variable: KeCTCM_T_SurfIntEffSpEnb
                                           * Referenced by: '<S20>/ConstantEnb57'
                                           */
extern boolean_T KeCTCM_T_TarRecTCrtlEnb;/* Variable: KeCTCM_T_TarRecTCrtlEnb
                                          * Referenced by: '<S20>/ConstantEnb105'
                                          */
extern boolean_T KeCTCM_T_Tcs0SunFdEnb;/* Variable: KeCTCM_T_Tcs0SunFdEnb
                                        * Referenced by: '<S20>/ConstantEnb26'
                                        */
extern boolean_T KeCTCM_T_Tcs0SunFpEnb;/* Variable: KeCTCM_T_Tcs0SunFpEnb
                                        * Referenced by: '<S20>/ConstantEnb35'
                                        */
extern boolean_T KeCTCM_T_Tcs0SunSdEnb;/* Variable: KeCTCM_T_Tcs0SunSdEnb
                                        * Referenced by: '<S20>/ConstantEnb44'
                                        */
extern boolean_T KeCTCM_T_Tcs0SunSpEnb;/* Variable: KeCTCM_T_Tcs0SunSpEnb
                                        * Referenced by: '<S20>/ConstantEnb53'
                                        */
extern boolean_T KeCTCM_T_Tcs100SunFdEnb;/* Variable: KeCTCM_T_Tcs100SunFdEnb
                                          * Referenced by: '<S20>/ConstantEnb27'
                                          */
extern boolean_T KeCTCM_T_Tcs100SunFpEnb;/* Variable: KeCTCM_T_Tcs100SunFpEnb
                                          * Referenced by: '<S20>/ConstantEnb36'
                                          */
extern boolean_T KeCTCM_T_Tcs100SunSdEnb;/* Variable: KeCTCM_T_Tcs100SunSdEnb
                                          * Referenced by: '<S20>/ConstantEnb45'
                                          */
extern boolean_T KeCTCM_T_Tcs100SunSpEnb;/* Variable: KeCTCM_T_Tcs100SunSpEnb
                                          * Referenced by: '<S20>/ConstantEnb54'
                                          */
extern boolean_T KeCTCM_T_TcsFdEnb;    /* Variable: KeCTCM_T_TcsFdEnb
                                        * Referenced by: '<S20>/ConstantEnb34'
                                        */
extern boolean_T KeCTCM_T_TcsFpEnb;    /* Variable: KeCTCM_T_TcsFpEnb
                                        * Referenced by: '<S20>/ConstantEnb43'
                                        */
extern boolean_T KeCTCM_T_TcsSdEnb;    /* Variable: KeCTCM_T_TcsSdEnb
                                        * Referenced by: '<S20>/ConstantEnb52'
                                        */
extern boolean_T KeCTCM_T_TcsSpEnb;    /* Variable: KeCTCM_T_TcsSpEnb
                                        * Referenced by: '<S20>/ConstantEnb61'
                                        */
extern boolean_T KeCTCM_T_TcsStdFdEnb; /* Variable: KeCTCM_T_TcsStdFdEnb
                                        * Referenced by: '<S20>/ConstantEnb28'
                                        */
extern boolean_T KeCTCM_T_TcsStdFpEnb; /* Variable: KeCTCM_T_TcsStdFpEnb
                                        * Referenced by: '<S20>/ConstantEnb37'
                                        */
extern boolean_T KeCTCM_T_TcsStdSdEnb; /* Variable: KeCTCM_T_TcsStdSdEnb
                                        * Referenced by: '<S20>/ConstantEnb46'
                                        */
extern boolean_T KeCTCM_T_TcsStdSpEnb; /* Variable: KeCTCM_T_TcsStdSpEnb
                                        * Referenced by: '<S20>/ConstantEnb55'
                                        */
extern boolean_T KeCTCM_T_TcsSurfOfstFdEnb;/* Variable: KeCTCM_T_TcsSurfOfstFdEnb
                                            * Referenced by: '<S20>/ConstantEnb32'
                                            */
extern boolean_T KeCTCM_T_TcsSurfOfstFpEnb;/* Variable: KeCTCM_T_TcsSurfOfstFpEnb
                                            * Referenced by: '<S20>/ConstantEnb41'
                                            */
extern boolean_T KeCTCM_T_TcsSurfOfstSdEnb;/* Variable: KeCTCM_T_TcsSurfOfstSdEnb
                                            * Referenced by: '<S20>/ConstantEnb50'
                                            */
extern boolean_T KeCTCM_T_TcsSurfOfstSpEnb;/* Variable: KeCTCM_T_TcsSurfOfstSpEnb
                                            * Referenced by: '<S20>/ConstantEnb59'
                                            */
extern boolean_T KeCTCM_T_TcslvnFdEnb; /* Variable: KeCTCM_T_TcslvnFdEnb
                                        * Referenced by: '<S20>/ConstantEnb29'
                                        */
extern boolean_T KeCTCM_T_TcslvnFpEnb; /* Variable: KeCTCM_T_TcslvnFpEnb
                                        * Referenced by: '<S20>/ConstantEnb38'
                                        */
extern boolean_T KeCTCM_T_TcslvnSdEnb; /* Variable: KeCTCM_T_TcslvnSdEnb
                                        * Referenced by: '<S20>/ConstantEnb47'
                                        */
extern boolean_T KeCTCM_T_TcslvnSpEnb; /* Variable: KeCTCM_T_TcslvnSpEnb
                                        * Referenced by: '<S20>/ConstantEnb56'
                                        */
extern boolean_T KeCTCM_T_dTsurfFdEnb; /* Variable: KeCTCM_T_dTsurfFdEnb
                                        * Referenced by: '<S20>/ConstantEnb31'
                                        */
extern boolean_T KeCTCM_T_dTsurfFpEnb; /* Variable: KeCTCM_T_dTsurfFpEnb
                                        * Referenced by: '<S20>/ConstantEnb40'
                                        */
extern boolean_T KeCTCM_T_dTsurfSdEnb; /* Variable: KeCTCM_T_dTsurfSdEnb
                                        * Referenced by: '<S20>/ConstantEnb49'
                                        */
extern boolean_T KeCTCM_T_dTsurfSpEnb; /* Variable: KeCTCM_T_dTsurfSpEnb
                                        * Referenced by: '<S20>/ConstantEnb58'
                                        */
extern boolean_T KeCTCM_na_ASCTypeEnb; /* Variable: KeCTCM_na_ASCTypeEnb
                                        * Referenced by: '<S20>/ConstantEnb127'
                                        */
extern boolean_T KeCTCM_na_ASCTypeRv;  /* Variable: KeCTCM_na_ASCTypeRv
                                        * Referenced by: '<S20>/ConstantRv127'
                                        */
extern boolean_T KeCTCM_na_BCFrntBlwrOperCtrlEnb;
                                    /* Variable: KeCTCM_na_BCFrntBlwrOperCtrlEnb
                                     * Referenced by: '<S20>/ConstantEnb5'
                                     */
extern boolean_T KeCTCM_na_BCFrntBlwrOperCtrlRv;
                                     /* Variable: KeCTCM_na_BCFrntBlwrOperCtrlRv
                                      * Referenced by: '<S20>/ConstantRv5'
                                      */
extern boolean_T KeCTCM_na_BCSecBlwrOperCtrlEnb;
                                     /* Variable: KeCTCM_na_BCSecBlwrOperCtrlEnb
                                      * Referenced by: '<S20>/ConstantEnb4'
                                      */
extern boolean_T KeCTCM_na_BCSecBlwrOperCtrlRv;
                                      /* Variable: KeCTCM_na_BCSecBlwrOperCtrlRv
                                       * Referenced by: '<S20>/ConstantRv4'
                                       */
extern boolean_T KeCTCM_na_ColdStartTmrStsEnb;/* Variable: KeCTCM_na_ColdStartTmrStsEnb
                                               * Referenced by: '<S20>/ConstantEnb71'
                                               */
extern boolean_T KeCTCM_na_ColdStartTmrStsRv;/* Variable: KeCTCM_na_ColdStartTmrStsRv
                                              * Referenced by: '<S20>/ConstantRv71'
                                              */
extern boolean_T KeCTCM_na_DFFrntDrvOperCtrlEnb;
                                     /* Variable: KeCTCM_na_DFFrntDrvOperCtrlEnb
                                      * Referenced by: '<S20>/ConstantEnb6'
                                      */
extern boolean_T KeCTCM_na_DFFrntDrvOperCtrlRv;
                                      /* Variable: KeCTCM_na_DFFrntDrvOperCtrlRv
                                       * Referenced by: '<S20>/ConstantRv6'
                                       */
extern boolean_T KeCTCM_na_DFFrntPassOperCtrlEnb;
                                    /* Variable: KeCTCM_na_DFFrntPassOperCtrlEnb
                                     * Referenced by: '<S20>/ConstantEnb7'
                                     */
extern boolean_T KeCTCM_na_DFFrntPassOperCtrlRv;
                                     /* Variable: KeCTCM_na_DFFrntPassOperCtrlRv
                                      * Referenced by: '<S20>/ConstantRv7'
                                      */
extern boolean_T KeCTCM_na_DFSecDrvOperCtrlEnb;
                                      /* Variable: KeCTCM_na_DFSecDrvOperCtrlEnb
                                       * Referenced by: '<S20>/ConstantEnb8'
                                       */
extern boolean_T KeCTCM_na_DFSecDrvOperCtrlRv;/* Variable: KeCTCM_na_DFSecDrvOperCtrlRv
                                               * Referenced by: '<S20>/ConstantRv8'
                                               */
extern boolean_T KeCTCM_na_DFSecPassOperCtrlEnb;
                                     /* Variable: KeCTCM_na_DFSecPassOperCtrlEnb
                                      * Referenced by: '<S20>/ConstantEnb9'
                                      */
extern boolean_T KeCTCM_na_DFSecPassOperCtrlRv;
                                      /* Variable: KeCTCM_na_DFSecPassOperCtrlRv
                                       * Referenced by: '<S20>/ConstantRv9'
                                       */
extern boolean_T KeCTCM_na_DefCfgActvEnb;/* Variable: KeCTCM_na_DefCfgActvEnb
                                          * Referenced by: '<S20>/ConstantEnb10'
                                          */
extern boolean_T KeCTCM_na_DefCfgActvRv;/* Variable: KeCTCM_na_DefCfgActvRv
                                         * Referenced by: '<S20>/ConstantRv10'
                                         */
extern boolean_T KeCTCM_na_DefCtrlTarEnb;/* Variable: KeCTCM_na_DefCtrlTarEnb
                                          * Referenced by: '<S20>/ConstantEnb77'
                                          */
extern boolean_T KeCTCM_na_FdZoneModStsEnb;/* Variable: KeCTCM_na_FdZoneModStsEnb
                                            * Referenced by: '<S20>/ConstantEnb73'
                                            */
extern boolean_T KeCTCM_na_FdfCfgActvEnb;/* Variable: KeCTCM_na_FdfCfgActvEnb
                                          * Referenced by: '<S20>/ConstantEnb12'
                                          */
extern boolean_T KeCTCM_na_FdfCfgActvRv;/* Variable: KeCTCM_na_FdfCfgActvRv
                                         * Referenced by: '<S20>/ConstantRv12'
                                         */
extern boolean_T KeCTCM_na_FdfCtrlTarEnb;/* Variable: KeCTCM_na_FdfCtrlTarEnb
                                          * Referenced by: '<S20>/ConstantEnb79'
                                          */
extern boolean_T KeCTCM_na_FdhCfgActvEnb;/* Variable: KeCTCM_na_FdhCfgActvEnb
                                          * Referenced by: '<S20>/ConstantEnb124'
                                          */
extern boolean_T KeCTCM_na_FdhCfgActvRv;/* Variable: KeCTCM_na_FdhCfgActvRv
                                         * Referenced by: '<S20>/ConstantRv124'
                                         */
extern boolean_T KeCTCM_na_FdvCfgActvEnb;/* Variable: KeCTCM_na_FdvCfgActvEnb
                                          * Referenced by: '<S20>/ConstantEnb11'
                                          */
extern boolean_T KeCTCM_na_FdvCfgActvRv;/* Variable: KeCTCM_na_FdvCfgActvRv
                                         * Referenced by: '<S20>/ConstantRv11'
                                         */
extern boolean_T KeCTCM_na_FdvCtrlTarEnb;/* Variable: KeCTCM_na_FdvCtrlTarEnb
                                          * Referenced by: '<S20>/ConstantEnb78'
                                          */
extern boolean_T KeCTCM_na_FpZoneModStsEnb;/* Variable: KeCTCM_na_FpZoneModStsEnb
                                            * Referenced by: '<S20>/ConstantEnb74'
                                            */
extern boolean_T KeCTCM_na_FpfCfgActvEnb;/* Variable: KeCTCM_na_FpfCfgActvEnb
                                          * Referenced by: '<S20>/ConstantEnb14'
                                          */
extern boolean_T KeCTCM_na_FpfCfgActvRv;/* Variable: KeCTCM_na_FpfCfgActvRv
                                         * Referenced by: '<S20>/ConstantRv14'
                                         */
extern boolean_T KeCTCM_na_FpfCtrlTarEnb;/* Variable: KeCTCM_na_FpfCtrlTarEnb
                                          * Referenced by: '<S20>/ConstantEnb81'
                                          */
extern boolean_T KeCTCM_na_FphCfgActvEnb;/* Variable: KeCTCM_na_FphCfgActvEnb
                                          * Referenced by: '<S20>/ConstantEnb125'
                                          */
extern boolean_T KeCTCM_na_FphCfgActvRv;/* Variable: KeCTCM_na_FphCfgActvRv
                                         * Referenced by: '<S20>/ConstantRv125'
                                         */
extern boolean_T KeCTCM_na_FpvCfgActvEnb;/* Variable: KeCTCM_na_FpvCfgActvEnb
                                          * Referenced by: '<S20>/ConstantEnb13'
                                          */
extern boolean_T KeCTCM_na_FpvCfgActvRv;/* Variable: KeCTCM_na_FpvCfgActvRv
                                         * Referenced by: '<S20>/ConstantRv13'
                                         */
extern boolean_T KeCTCM_na_FpvCtrlTarEnb;/* Variable: KeCTCM_na_FpvCtrlTarEnb
                                          * Referenced by: '<S20>/ConstantEnb80'
                                          */
extern boolean_T KeCTCM_na_FrntClimaStsEnb;/* Variable: KeCTCM_na_FrntClimaStsEnb
                                            * Referenced by: '<S20>/ConstantEnb20'
                                            */
extern boolean_T KeCTCM_na_FrntClimaStsRv;/* Variable: KeCTCM_na_FrntClimaStsRv
                                           * Referenced by: '<S20>/ConstantRv20'
                                           */
extern boolean_T KeCTCM_na_FrntDrvYnEnb;/* Variable: KeCTCM_na_FrntDrvYnEnb
                                         * Referenced by: '<S20>/ConstantEnb66'
                                         */
extern boolean_T KeCTCM_na_FrntPassYnEnb;/* Variable: KeCTCM_na_FrntPassYnEnb
                                          * Referenced by: '<S20>/ConstantEnb67'
                                          */
extern boolean_T KeCTCM_na_HFFrntDrvOperCtrlEnb;
                                     /* Variable: KeCTCM_na_HFFrntDrvOperCtrlEnb
                                      * Referenced by: '<S20>/ConstantEnb119'
                                      */
extern boolean_T KeCTCM_na_HFFrntDrvOperCtrlRv;
                                      /* Variable: KeCTCM_na_HFFrntDrvOperCtrlRv
                                       * Referenced by: '<S20>/ConstantRv119'
                                       */
extern boolean_T KeCTCM_na_HFFrntPassOperCtrlEnb;
                                    /* Variable: KeCTCM_na_HFFrntPassOperCtrlEnb
                                     * Referenced by: '<S20>/ConstantEnb120'
                                     */
extern boolean_T KeCTCM_na_HFFrntPassOperCtrlRv;
                                     /* Variable: KeCTCM_na_HFFrntPassOperCtrlRv
                                      * Referenced by: '<S20>/ConstantRv120'
                                      */
extern boolean_T KeCTCM_na_HFSecDrvOperCtrlEnb;
                                      /* Variable: KeCTCM_na_HFSecDrvOperCtrlEnb
                                       * Referenced by: '<S20>/ConstantEnb121'
                                       */
extern boolean_T KeCTCM_na_HFSecDrvOperCtrlRv;/* Variable: KeCTCM_na_HFSecDrvOperCtrlRv
                                               * Referenced by: '<S20>/ConstantRv121'
                                               */
extern boolean_T KeCTCM_na_HFSecPassOperCtrlEnb;
                                     /* Variable: KeCTCM_na_HFSecPassOperCtrlEnb
                                      * Referenced by: '<S20>/ConstantEnb122'
                                      */
extern boolean_T KeCTCM_na_HFSecPassOperCtrlRv;
                                      /* Variable: KeCTCM_na_HFSecPassOperCtrlRv
                                       * Referenced by: '<S20>/ConstantRv122'
                                       */
extern boolean_T KeCTCM_na_HotStartTmrStsEnb;/* Variable: KeCTCM_na_HotStartTmrStsEnb
                                              * Referenced by: '<S20>/ConstantEnb72'
                                              */
extern boolean_T KeCTCM_na_HotStartTmrStsRv;/* Variable: KeCTCM_na_HotStartTmrStsRv
                                             * Referenced by: '<S20>/ConstantRv72'
                                             */
extern boolean_T KeCTCM_na_KeepAwakeFlagEnb;/* Variable: KeCTCM_na_KeepAwakeFlagEnb
                                             * Referenced by: '<S20>/ConstantEnb1'
                                             */
extern boolean_T KeCTCM_na_KeepAwakeFlagRv;/* Variable: KeCTCM_na_KeepAwakeFlagRv
                                            * Referenced by: '<S20>/ConstantRv1'
                                            */
extern boolean_T KeCTCM_na_OperSpclStartStsEnb;
                                      /* Variable: KeCTCM_na_OperSpclStartStsEnb
                                       * Referenced by: '<S20>/ConstantEnb70'
                                       */
extern boolean_T KeCTCM_na_OperStsEnb; /* Variable: KeCTCM_na_OperStsEnb
                                        * Referenced by: '<S20>/ConstantEnb143'
                                        */
extern boolean_T KeCTCM_na_OsaCfgActvEnb;/* Variable: KeCTCM_na_OsaCfgActvEnb
                                          * Referenced by: '<S20>/ConstantEnb3'
                                          */
extern boolean_T KeCTCM_na_OsaCfgActvRv;/* Variable: KeCTCM_na_OsaCfgActvRv
                                         * Referenced by: '<S20>/ConstantRv3'
                                         */
extern boolean_T KeCTCM_na_RFOperCtrlEnb;/* Variable: KeCTCM_na_RFOperCtrlEnb
                                          * Referenced by: '<S20>/ConstantEnb128'
                                          */
extern boolean_T KeCTCM_na_RFOperCtrlRv;/* Variable: KeCTCM_na_RFOperCtrlRv
                                         * Referenced by: '<S20>/ConstantRv128'
                                         */
extern boolean_T KeCTCM_na_RecCfgActvEnb;/* Variable: KeCTCM_na_RecCfgActvEnb
                                          * Referenced by: '<S20>/ConstantEnb2'
                                          */
extern boolean_T KeCTCM_na_RecCfgActvRv;/* Variable: KeCTCM_na_RecCfgActvRv
                                         * Referenced by: '<S20>/ConstantRv2'
                                         */
extern boolean_T KeCTCM_na_SdZoneModStsEnb;/* Variable: KeCTCM_na_SdZoneModStsEnb
                                            * Referenced by: '<S20>/ConstantEnb75'
                                            */
extern boolean_T KeCTCM_na_SdfCfgActvEnb;/* Variable: KeCTCM_na_SdfCfgActvEnb
                                          * Referenced by: '<S20>/ConstantEnb16'
                                          */
extern boolean_T KeCTCM_na_SdfCfgActvRv;/* Variable: KeCTCM_na_SdfCfgActvRv
                                         * Referenced by: '<S20>/ConstantRv16'
                                         */
extern boolean_T KeCTCM_na_SdhCfgActvEnb;/* Variable: KeCTCM_na_SdhCfgActvEnb
                                          * Referenced by: '<S20>/ConstantEnb126'
                                          */
extern boolean_T KeCTCM_na_SdhCfgActvRv;/* Variable: KeCTCM_na_SdhCfgActvRv
                                         * Referenced by: '<S20>/ConstantRv126'
                                         */
extern boolean_T KeCTCM_na_SdvCfgActvEnb;/* Variable: KeCTCM_na_SdvCfgActvEnb
                                          * Referenced by: '<S20>/ConstantEnb15'
                                          */
extern boolean_T KeCTCM_na_SdvCfgActvRv;/* Variable: KeCTCM_na_SdvCfgActvRv
                                         * Referenced by: '<S20>/ConstantRv15'
                                         */
extern boolean_T KeCTCM_na_SdvCtrlTarEnb;/* Variable: KeCTCM_na_SdvCtrlTarEnb
                                          * Referenced by: '<S20>/ConstantEnb82'
                                          */
extern boolean_T KeCTCM_na_SecClimaStsEnb;/* Variable: KeCTCM_na_SecClimaStsEnb
                                           * Referenced by: '<S20>/ConstantEnb21'
                                           */
extern boolean_T KeCTCM_na_SecClimaStsRv;/* Variable: KeCTCM_na_SecClimaStsRv
                                          * Referenced by: '<S20>/ConstantRv21'
                                          */
extern boolean_T KeCTCM_na_SecDrvYnEnb;/* Variable: KeCTCM_na_SecDrvYnEnb
                                        * Referenced by: '<S20>/ConstantEnb68'
                                        */
extern boolean_T KeCTCM_na_SecPassYnEnb;/* Variable: KeCTCM_na_SecPassYnEnb
                                         * Referenced by: '<S20>/ConstantEnb69'
                                         */
extern boolean_T KeCTCM_na_SpZoneModStsEnb;/* Variable: KeCTCM_na_SpZoneModStsEnb
                                            * Referenced by: '<S20>/ConstantEnb76'
                                            */
extern boolean_T KeCTCM_na_SpfCfgActvEnb;/* Variable: KeCTCM_na_SpfCfgActvEnb
                                          * Referenced by: '<S20>/ConstantEnb18'
                                          */
extern boolean_T KeCTCM_na_SpfCfgActvRv;/* Variable: KeCTCM_na_SpfCfgActvRv
                                         * Referenced by: '<S20>/ConstantRv18'
                                         */
extern boolean_T KeCTCM_na_SpfCtrlTarEnb;/* Variable: KeCTCM_na_SpfCtrlTarEnb
                                          * Referenced by: '<S20>/ConstantEnb85'
                                          */
extern boolean_T KeCTCM_na_SphCfgActvEnb;/* Variable: KeCTCM_na_SphCfgActvEnb
                                          * Referenced by: '<S20>/ConstantEnb123'
                                          */
extern boolean_T KeCTCM_na_SphCfgActvRv;/* Variable: KeCTCM_na_SphCfgActvRv
                                         * Referenced by: '<S20>/ConstantRv123'
                                         */
extern boolean_T KeCTCM_na_SpvCfgActvEnb;/* Variable: KeCTCM_na_SpvCfgActvEnb
                                          * Referenced by: '<S20>/ConstantEnb17'
                                          */
extern boolean_T KeCTCM_na_SpvCfgActvRv;/* Variable: KeCTCM_na_SpvCfgActvRv
                                         * Referenced by: '<S20>/ConstantRv17'
                                         */
extern boolean_T KeCTCM_na_SpvCtrlTarEnb;/* Variable: KeCTCM_na_SpvCtrlTarEnb
                                          * Referenced by: '<S20>/ConstantEnb84'
                                          */
extern boolean_T KeCTCM_pct_TcsUserOffsetSclgEnb;
                                    /* Variable: KeCTCM_pct_TcsUserOffsetSclgEnb
                                     * Referenced by: '<S20>/ConstantEnb25'
                                     */
extern boolean_T KeCTCM_v_FbFlowCtrlTarEnb;/* Variable: KeCTCM_v_FbFlowCtrlTarEnb
                                            * Referenced by: '<S20>/ConstantEnb118'
                                            */
extern boolean_T KeCTCM_v_FbFlowWghCtrlTarEnb;/* Variable: KeCTCM_v_FbFlowWghCtrlTarEnb
                                               * Referenced by: '<S20>/ConstantEnb90'
                                               */
extern boolean_T KeCTCM_v_SecbFlowCtrlTarEnb;/* Variable: KeCTCM_v_SecbFlowCtrlTarEnb
                                              * Referenced by: '<S20>/ConstantEnb142'
                                              */
extern boolean_T KeDriverAirDrictionFbEnb;/* Variable: KeDriverAirDrictionFbEnb
                                           * Referenced by: '<S6>/ConstantEnb58'
                                           */
extern boolean_T KeDriverTempFlapFbEnb;/* Variable: KeDriverTempFlapFbEnb
                                        * Referenced by: '<S6>/ConstantEnb55'
                                        */
extern boolean_T KeFWDS_T_DewPntTempEnb;/* Variable: KeFWDS_T_DewPntTempEnb
                                         * Referenced by: '<S22>/ConstantEnb111'
                                         */
extern boolean_T KeFWDS_T_EvaDegTarEnb;/* Variable: KeFWDS_T_EvaDegTarEnb
                                        * Referenced by: '<S22>/ConstantEnb115'
                                        */
extern boolean_T KeFWDS_na_BlwrLvLimEnb;/* Variable: KeFWDS_na_BlwrLvLimEnb
                                         * Referenced by: '<S22>/ConstantEnb114'
                                         */
extern boolean_T KeFWDS_na_BlwrLvLimEnbEnb;/* Variable: KeFWDS_na_BlwrLvLimEnbEnb
                                            * Referenced by: '<S22>/ConstantEnb120'
                                            */
extern boolean_T KeFWDS_na_BlwrLvLimEnbRv;/* Variable: KeFWDS_na_BlwrLvLimEnbRv
                                           * Referenced by: '<S22>/ConstantRv120'
                                           */
extern boolean_T KeFWDS_na_DefRioEnbEnb;/* Variable: KeFWDS_na_DefRioEnbEnb
                                         * Referenced by: '<S22>/ConstantEnb119'
                                         */
extern boolean_T KeFWDS_na_DefRioEnbRv;/* Variable: KeFWDS_na_DefRioEnbRv
                                        * Referenced by: '<S22>/ConstantRv119'
                                        */
extern boolean_T KeFWDS_na_EvaDegTarEnbEnb;/* Variable: KeFWDS_na_EvaDegTarEnbEnb
                                            * Referenced by: '<S22>/ConstantEnb121'
                                            */
extern boolean_T KeFWDS_na_EvaDegTarEnbRv;/* Variable: KeFWDS_na_EvaDegTarEnbRv
                                           * Referenced by: '<S22>/ConstantRv121'
                                           */
extern boolean_T KeFWDS_na_OperStsEnb; /* Variable: KeFWDS_na_OperStsEnb
                                        * Referenced by: '<S22>/ConstantEnb110'
                                        */
extern boolean_T KeFWDS_na_RecRioEnbEnb;/* Variable: KeFWDS_na_RecRioEnbEnb
                                         * Referenced by: '<S22>/ConstantEnb118'
                                         */
extern boolean_T KeFWDS_na_RecRioEnbRv;/* Variable: KeFWDS_na_RecRioEnbRv
                                        * Referenced by: '<S22>/ConstantRv118'
                                        */
extern boolean_T KeFWDS_na_RiskLvEnb;  /* Variable: KeFWDS_na_RiskLvEnb
                                        * Referenced by: '<S22>/ConstantEnb117'
                                        */
extern boolean_T KeFWDS_na_RiskValueEnb;/* Variable: KeFWDS_na_RiskValueEnb
                                         * Referenced by: '<S22>/ConstantEnb116'
                                         */
extern boolean_T KeFWDS_pct_DefRioEnb; /* Variable: KeFWDS_pct_DefRioEnb
                                        * Referenced by: '<S22>/ConstantEnb113'
                                        */
extern boolean_T KeFWDS_pct_RecRioEnb; /* Variable: KeFWDS_pct_RecRioEnb
                                        * Referenced by: '<S22>/ConstantEnb112'
                                        */
extern boolean_T KeLeSolarDataEnb;     /* Variable: KeLeSolarDataEnb
                                        * Referenced by: '<S6>/ConstantEnb51'
                                        */
extern boolean_T KeNVMM_U_DcRangeSaveEepEnb;/* Variable: KeNVMM_U_DcRangeSaveEepEnb
                                             * Referenced by: '<S3>/ConstantEnb326'
                                             */
extern boolean_T KePCAT_T_FdBreaTempEnb;/* Variable: KePCAT_T_FdBreaTempEnb
                                         * Referenced by: '<S24>/ConstantEnb22'
                                         */
extern boolean_T KePCAT_T_FpBreaTempEnb;/* Variable: KePCAT_T_FpBreaTempEnb
                                         * Referenced by: '<S24>/ConstantEnb1'
                                         */
extern boolean_T KePCAT_T_SdBreaTempEnb;/* Variable: KePCAT_T_SdBreaTempEnb
                                         * Referenced by: '<S24>/ConstantEnb2'
                                         */
extern boolean_T KePCAT_T_SpBreaTempEnb;/* Variable: KePCAT_T_SpBreaTempEnb
                                         * Referenced by: '<S24>/ConstantEnb3'
                                         */
extern boolean_T KePCAT_T_SurfIntAvgEnb;/* Variable: KePCAT_T_SurfIntAvgEnb
                                         * Referenced by: '<S24>/ConstantEnb21'
                                         */
extern boolean_T KePCAT_T_VehBreaTempSaveEnb;/* Variable: KePCAT_T_VehBreaTempSaveEnb
                                              * Referenced by: '<S24>/ConstantEnb20'
                                              */
extern boolean_T KePCAT_T_VehExterSurfTempSaveEnb;
                                   /* Variable: KePCAT_T_VehExterSurfTempSaveEnb
                                    * Referenced by: '<S24>/ConstantEnb17'
                                    */
extern boolean_T KePCAT_T_VehIntrSurfTempSaveEnb;
                                    /* Variable: KePCAT_T_VehIntrSurfTempSaveEnb
                                     * Referenced by: '<S24>/ConstantEnb18'
                                     */
extern boolean_T KePCAT_T_VehMidSurfTempSaveEnb;
                                     /* Variable: KePCAT_T_VehMidSurfTempSaveEnb
                                      * Referenced by: '<S24>/ConstantEnb19'
                                      */
extern boolean_T KePCAT_T_lntrTemp8Enb;/* Variable: KePCAT_T_lntrTemp8Enb
                                        * Referenced by: '<S24>/ConstantEnb7'
                                        */
extern boolean_T KePCAT_deg_TextrEnb;  /* Variable: KePCAT_deg_TextrEnb
                                        * Referenced by: '<S24>/ConstantEnb5'
                                        */
extern boolean_T KePCAT_deg_TiVldEnb;  /* Variable: KePCAT_deg_TiVldEnb
                                        * Referenced by: '<S24>/ConstantEnb4'
                                        */
extern boolean_T KePCAT_deg_TiVldRv;   /* Variable: KePCAT_deg_TiVldRv
                                        * Referenced by: '<S24>/ConstantRv4'
                                        */
extern boolean_T KePCAT_deg_TmtrEnb;   /* Variable: KePCAT_deg_TmtrEnb
                                        * Referenced by: '<S24>/ConstantEnb6'
                                        */
extern boolean_T KePCAT_na_HiCoef8Enb; /* Variable: KePCAT_na_HiCoef8Enb
                                        * Referenced by: '<S24>/ConstantEnb9'
                                        */
extern boolean_T KePCAT_na_NapTimrStsEnb;/* Variable: KePCAT_na_NapTimrStsEnb
                                          * Referenced by: '<S24>/ConstantEnb15'
                                          */
extern boolean_T KePCAT_na_PCATOperStsEnb;/* Variable: KePCAT_na_PCATOperStsEnb
                                           * Referenced by: '<S24>/ConstantEnb10'
                                           */
extern boolean_T KePCAT_na_ShellArea8Enb;/* Variable: KePCAT_na_ShellArea8Enb
                                          * Referenced by: '<S24>/ConstantEnb8'
                                          */
extern boolean_T KePCAT_na_ShellCp8Enb;/* Variable: KePCAT_na_ShellCp8Enb
                                        * Referenced by: '<S24>/ConstantEnb12'
                                        */
extern boolean_T KePCAT_na_ShellHtCndvty8Enb;/* Variable: KePCAT_na_ShellHtCndvty8Enb
                                              * Referenced by: '<S24>/ConstantEnb13'
                                              */
extern boolean_T KePCAT_na_ShellMass8Enb;/* Variable: KePCAT_na_ShellMass8Enb
                                          * Referenced by: '<S24>/ConstantEnb11'
                                          */
extern boolean_T KePCAT_na_ShellThick8Enb;/* Variable: KePCAT_na_ShellThick8Enb
                                           * Referenced by: '<S24>/ConstantEnb14'
                                           */
extern boolean_T KePCAT_t_NapTimrEnb;  /* Variable: KePCAT_t_NapTimrEnb
                                        * Referenced by: '<S24>/ConstantEnb16'
                                        */
extern boolean_T KePassAirDrictionFbEnb;/* Variable: KePassAirDrictionFbEnb
                                         * Referenced by: '<S6>/ConstantEnb59'
                                         */
extern boolean_T KePassTempFlapFbEnb;  /* Variable: KePassTempFlapFbEnb
                                        * Referenced by: '<S6>/ConstantEnb56'
                                        */
extern boolean_T KeRearAirDrictionFbEnb;/* Variable: KeRearAirDrictionFbEnb
                                         * Referenced by: '<S6>/ConstantEnb60'
                                         */
extern boolean_T KeRearTempFlapFbEnb;  /* Variable: KeRearTempFlapFbEnb
                                        * Referenced by: '<S6>/ConstantEnb57'
                                        */
extern boolean_T KeRecFlapFbEnb;       /* Variable: KeRecFlapFbEnb
                                        * Referenced by: '<S6>/ConstantEnb61'
                                        */
extern boolean_T KeRiSolarDataEnb;     /* Variable: KeRiSolarDataEnb
                                        * Referenced by: '<S6>/ConstantEnb52'
                                        */
extern boolean_T KeSENA_T_AmbTempOutEnb;/* Variable: KeSENA_T_AmbTempOutEnb
                                         * Referenced by: '<S26>/ConstantEnb5'
                                         */
extern boolean_T KeSENA_T_FeavpTempEnb;/* Variable: KeSENA_T_FeavpTempEnb
                                        * Referenced by: '<S26>/ConstantEnb4'
                                        */
extern boolean_T KeSENA_T_FrtDrvFeetTempEnb;/* Variable: KeSENA_T_FrtDrvFeetTempEnb
                                             * Referenced by: '<S26>/ConstantEnb3'
                                             */
extern boolean_T KeSENA_T_FrtDrvVentTempEnb;/* Variable: KeSENA_T_FrtDrvVentTempEnb
                                             * Referenced by: '<S26>/ConstantEnb1'
                                             */
extern boolean_T KeSENA_T_FrtPassFeetTempEnb;/* Variable: KeSENA_T_FrtPassFeetTempEnb
                                              * Referenced by: '<S26>/ConstantEnb2'
                                              */
extern boolean_T KeSENA_T_FrtPassVentTempEnb;/* Variable: KeSENA_T_FrtPassVentTempEnb
                                              * Referenced by: '<S26>/ConstantEnb16'
                                              */
extern boolean_T KeSENA_T_HEXTempEnb;  /* Variable: KeSENA_T_HEXTempEnb
                                        * Referenced by: '<S26>/ConstantEnb9'
                                        */
extern boolean_T KeSENA_T_ICTEnb;      /* Variable: KeSENA_T_ICTEnb
                                        * Referenced by: '<S26>/ConstantEnb10'
                                        */
extern boolean_T KeSENA_T_SecDrvFeetTempEnb;/* Variable: KeSENA_T_SecDrvFeetTempEnb
                                             * Referenced by: '<S26>/ConstantEnb11'
                                             */
extern boolean_T KeSENA_T_SecDrvVentTempEnb;/* Variable: KeSENA_T_SecDrvVentTempEnb
                                             * Referenced by: '<S26>/ConstantEnb12'
                                             */
extern boolean_T KeSENA_T_WidShieldTempEnb;/* Variable: KeSENA_T_WidShieldTempEnb
                                            * Referenced by: '<S26>/ConstantEnb14'
                                            */
extern boolean_T KeSENA_Wpsm_FrtDrvSolarEnb;/* Variable: KeSENA_Wpsm_FrtDrvSolarEnb
                                             * Referenced by: '<S26>/ConstantEnb6'
                                             */
extern boolean_T KeSENA_Wpsm_FrtPassSolarEnb;/* Variable: KeSENA_Wpsm_FrtPassSolarEnb
                                              * Referenced by: '<S26>/ConstantEnb7'
                                              */
extern boolean_T KeSENA_Wpsm_SecDrvSolarEnb;/* Variable: KeSENA_Wpsm_SecDrvSolarEnb
                                             * Referenced by: '<S26>/ConstantEnb8'
                                             */
extern boolean_T KeSENA_na_AmbTempFaultStEnb;/* Variable: KeSENA_na_AmbTempFaultStEnb
                                              * Referenced by: '<S26>/ConstantEnb13'
                                              */
extern boolean_T KeSENA_pct_RelHumidityEnb;/* Variable: KeSENA_pct_RelHumidityEnb
                                            * Referenced by: '<S26>/ConstantEnb15'
                                            */
extern boolean_T KeTemp_Fevap_RawEnb;  /* Variable: KeTemp_Fevap_RawEnb
                                        * Referenced by: '<S6>/ConstantEnb48'
                                        */
extern boolean_T KeTemp_feet_FL_EX_RawEnb;/* Variable: KeTemp_feet_FL_EX_RawEnb
                                           * Referenced by: '<S6>/ConstantEnb45'
                                           */
extern boolean_T KeTemp_feet_FR_EX_RawEnb;/* Variable: KeTemp_feet_FR_EX_RawEnb
                                           * Referenced by: '<S6>/ConstantEnb44'
                                           */
extern boolean_T KeTemp_feet_SL_RawEnb;/* Variable: KeTemp_feet_SL_RawEnb
                                        * Referenced by: '<S6>/ConstantEnb46'
                                        */
extern boolean_T KeTemp_panel_FL_RawEnb;/* Variable: KeTemp_panel_FL_RawEnb
                                         * Referenced by: '<S6>/ConstantEnb43'
                                         */
extern boolean_T KeTemp_panel_FR_RawEnb;/* Variable: KeTemp_panel_FR_RawEnb
                                         * Referenced by: '<S6>/ConstantEnb42'
                                         */
extern boolean_T KeTemp_panel_SL_RawEnb;/* Variable: KeTemp_panel_SL_RawEnb
                                         * Referenced by: '<S6>/ConstantEnb47'
                                         */
extern boolean_T KeVTIC_mps_VehSpdLgtAEnb;/* Variable: KeVTIC_mps_VehSpdLgtAEnb
                                           * Referenced by: '<S45>/ConstantEnb78'
                                           */
extern boolean_T KeVTIC_na_UseModeEnb; /* Variable: KeVTIC_na_UseModeEnb
                                        * Referenced by: '<S45>/ConstantEnb79'
                                        */
extern boolean_T KeVTIC_na_UseModeRv;  /* Variable: KeVTIC_na_UseModeRv
                                        * Referenced by: '<S45>/ConstantRv79'
                                        */
extern boolean_T KeVTIC_na_WindshldWiprActivStsEnb;
                                  /* Variable: KeVTIC_na_WindshldWiprActivStsEnb
                                   * Referenced by: '<S45>/ConstantEnb80'
                                   */
extern boolean_T KeVTIC_na_WindshldWiprActivStsRv;
                                   /* Variable: KeVTIC_na_WindshldWiprActivStsRv
                                    * Referenced by: '<S45>/ConstantRv80'
                                    */
extern boolean_T KeVTIC_t_SoakTimeEnb; /* Variable: KeVTIC_t_SoakTimeEnb
                                        * Referenced by: '<S45>/ConstantEnb81'
                                        */
extern boolean_T KeVTIC_t_SoakTimeLoadEnb;/* Variable: KeVTIC_t_SoakTimeLoadEnb
                                           * Referenced by: '<S45>/ConstantEnb83'
                                           */
extern boolean_T KeVTIC_t_SoakTimeSavedEnb;/* Variable: KeVTIC_t_SoakTimeSavedEnb
                                            * Referenced by: '<S45>/ConstantEnb82'
                                            */
extern boolean_T KeVeTemp_Fincar_RawEnb;/* Variable: KeVeTemp_Fincar_RawEnb
                                         * Referenced by: '<S6>/ConstantEnb54'
                                         */
extern boolean_T KeVeTemp_HEX_RawEnb;  /* Variable: KeVeTemp_HEX_RawEnb
                                        * Referenced by: '<S6>/ConstantEnb53'
                                        */
extern boolean_T KeVehSpdLgtAEnb;      /* Variable: KeVehSpdLgtAEnb
                                        * Referenced by: '<S6>/ConstantEnb50'
                                        */
extern int8_T KeCTCM_P_HighEnrgOfs;    /* Variable: KeCTCM_P_HighEnrgOfs
                                        * Referenced by:
                                        *   '<S1009>/Constant'
                                        *   '<S1009>/Constant2'
                                        *   '<S1009>/Constant4'
                                        *   '<S1009>/Constant5'
                                        * �˿Ͳ����������жϻز�ֵ����
                                        */
extern int8_T KeCTCM_P_LowEnrgOfs;     /* Variable: KeCTCM_P_LowEnrgOfs
                                        * Referenced by:
                                        *   '<S1009>/Constant1'
                                        *   '<S1009>/Constant3'
                                        *   '<S1009>/Constant6'
                                        *   '<S1009>/Constant7'
                                        * �˿Ͳ����������жϻز�ֵ����
                                        */
extern int8_T KeCTCM_na_FrntDrvWghCoef[18];/* Variable: KeCTCM_na_FrntDrvWghCoef
                                            * Referenced by: '<S994>/Constant'
                                            * ǰ�����ݿ����ڵ��Ȩ��ϵ��
                                            */
extern int8_T KeCTCM_na_FrntPassWghCoef[18];/* Variable: KeCTCM_na_FrntPassWghCoef
                                             * Referenced by: '<S994>/Constant1'
                                             * ǰ�Ÿ��ݿ����ڵ��Ȩ��ϵ��
                                             */
extern int8_T KeCTCM_na_SecDrvWghCoef[18];/* Variable: KeCTCM_na_SecDrvWghCoef
                                           * Referenced by: '<S994>/Constant2'
                                           * �������ݿ����ڵ��Ȩ��ϵ��
                                           */
extern int8_T KeCTCM_na_SecPassWghCoef[18];/* Variable: KeCTCM_na_SecPassWghCoef
                                            * Referenced by: '<S994>/Constant3'
                                            * ���Ÿ��ݿ����ڵ��Ȩ��ϵ��
                                            */
extern uint8_T KeACTU_na_ActrOperCtrSaveEepRv;
                                     /* Variable: KeACTU_na_ActrOperCtrSaveEepRv
                                      * Referenced by: '<S3>/ConstantRv321'
                                      */
extern uint8_T KeACTU_na_AssignModeRv; /* Variable: KeACTU_na_AssignModeRv
                                        * Referenced by: '<S3>/ConstantRv312'
                                        */
extern uint8_T KeACTU_na_FdfDCBorderRv;/* Variable: KeACTU_na_FdfDCBorderRv
                                        * Referenced by: '<S3>/ConstantRv328'
                                        */
extern uint8_T KeACTU_na_FdhAssignFlagRv;/* Variable: KeACTU_na_FdhAssignFlagRv
                                          * Referenced by: '<S3>/ConstantRv344'
                                          */
extern uint8_T KeACTU_na_FdhDCBorderRv;/* Variable: KeACTU_na_FdhDCBorderRv
                                        * Referenced by: '<S3>/ConstantRv345'
                                        */
extern uint8_T KeACTU_na_FdhStepBorderRv;/* Variable: KeACTU_na_FdhStepBorderRv
                                          * Referenced by: '<S3>/ConstantRv343'
                                          */
extern uint8_T KeACTU_na_FdvAssignFlagRv;/* Variable: KeACTU_na_FdvAssignFlagRv
                                          * Referenced by: '<S3>/ConstantRv318'
                                          */
extern uint8_T KeACTU_na_FdvStepBorderRv;/* Variable: KeACTU_na_FdvStepBorderRv
                                          * Referenced by: '<S3>/ConstantRv313'
                                          */
extern uint8_T KeACTU_na_FphAssignFlagRv;/* Variable: KeACTU_na_FphAssignFlagRv
                                          * Referenced by: '<S3>/ConstantRv350'
                                          */
extern uint8_T KeACTU_na_FphDCBorderRv;/* Variable: KeACTU_na_FphDCBorderRv
                                        * Referenced by: '<S3>/ConstantRv352'
                                        */
extern uint8_T KeACTU_na_FphStepBorderRv;/* Variable: KeACTU_na_FphStepBorderRv
                                          * Referenced by: '<S3>/ConstantRv351'
                                          */
extern uint8_T KeACTU_na_FpvAssignFlagRv;/* Variable: KeACTU_na_FpvAssignFlagRv
                                          * Referenced by: '<S3>/ConstantRv327'
                                          */
extern uint8_T KeACTU_na_FpvStepBorderRv;/* Variable: KeACTU_na_FpvStepBorderRv
                                          * Referenced by: '<S3>/ConstantRv325'
                                          */
extern uint8_T KeACTU_na_OperStsRv;    /* Variable: KeACTU_na_OperStsRv
                                        * Referenced by: '<S3>/ConstantRv305'
                                        */
extern uint8_T KeACTU_na_RecAssignFlagRv;/* Variable: KeACTU_na_RecAssignFlagRv
                                          * Referenced by: '<S3>/ConstantRv372'
                                          */
extern uint8_T KeACTU_na_RecDCBorderRv;/* Variable: KeACTU_na_RecDCBorderRv
                                        * Referenced by: '<S3>/ConstantRv377'
                                        */
extern uint8_T KeACTU_na_RecStepBorderRv;/* Variable: KeACTU_na_RecStepBorderRv
                                          * Referenced by: '<S3>/ConstantRv374'
                                          */
extern uint8_T KeACTU_na_SdhAssignFlagRv;/* Variable: KeACTU_na_SdhAssignFlagRv
                                          * Referenced by: '<S3>/ConstantRv358'
                                          */
extern uint8_T KeACTU_na_SdhDCBorderRv;/* Variable: KeACTU_na_SdhDCBorderRv
                                        * Referenced by: '<S3>/ConstantRv363'
                                        */
extern uint8_T KeACTU_na_SdhStepBorderRv;/* Variable: KeACTU_na_SdhStepBorderRv
                                          * Referenced by: '<S3>/ConstantRv360'
                                          */
extern uint8_T KeACTU_na_SdvAssignFlagRv;/* Variable: KeACTU_na_SdvAssignFlagRv
                                          * Referenced by: '<S3>/ConstantRv335'
                                          */
extern uint8_T KeACTU_na_SdvDCBorderRv;/* Variable: KeACTU_na_SdvDCBorderRv
                                        * Referenced by: '<S3>/ConstantRv336'
                                        */
extern uint8_T KeACTU_na_SdvStepBorderRv;/* Variable: KeACTU_na_SdvStepBorderRv
                                          * Referenced by: '<S3>/ConstantRv334'
                                          */
extern uint8_T KeCADC_na_DefPosnCalcnModeRv;/* Variable: KeCADC_na_DefPosnCalcnModeRv
                                             * Referenced by: '<S8>/ConstantRv181'
                                             */
extern uint8_T KeCADC_na_FdfPosnCalcnModeRv;/* Variable: KeCADC_na_FdfPosnCalcnModeRv
                                             * Referenced by: '<S8>/ConstantRv183'
                                             */
extern uint8_T KeCADC_na_FdvPosnBaseStable_X[7];
                                      /* Variable: KeCADC_na_FdvPosnBaseStable_X
                                       * Referenced by: '<S423>/1-D Lookup Table'
                                       * HMI_AirdModeL HMI�ֶ����Ƶĳ���ģʽ����
                                       */
extern uint8_T KeCADC_na_FdvPosnCalcnModeRv;/* Variable: KeCADC_na_FdvPosnCalcnModeRv
                                             * Referenced by: '<S8>/ConstantRv182'
                                             */
extern uint8_T KeCADC_na_FpfPosnBaseStable_X[5];
                                      /* Variable: KeCADC_na_FpfPosnBaseStable_X
                                       * Referenced by:
                                       *   '<S429>/1-D Lookup Table'
                                       *   '<S520>/1-D Lookup Table'
                                       * VeHMI_na_AirdModeR HMI�ֶ����Ƶĳ���ģʽ����
                                       */
extern uint8_T KeCADC_na_FpfPosnCalcnModeRv;/* Variable: KeCADC_na_FpfPosnCalcnModeRv
                                             * Referenced by: '<S8>/ConstantRv216'
                                             */
extern uint8_T KeCADC_na_FpvPosnBaseStable_X[7];
                                      /* Variable: KeCADC_na_FpvPosnBaseStable_X
                                       * Referenced by:
                                       *   '<S435>/1-D Lookup Table'
                                       *   '<S515>/1-D Lookup Table'
                                       * VeHMI_na_AirdModeR HMI�ֶ����Ƶĳ���ģʽ����
                                       */
extern uint8_T KeCADC_na_FpvPosnCalcnModeRv;/* Variable: KeCADC_na_FpvPosnCalcnModeRv
                                             * Referenced by: '<S8>/ConstantRv215'
                                             */
extern uint8_T KeCADC_na_FrntDrvDistbn2HMI_D[7];
                                      /* Variable: KeCADC_na_FrntDrvDistbn2HMI_D
                                       * Referenced by: '<S398>/1-D Lookup Table'
                                       * ������ͷ���ŵ�������ã�ʹ�ô��߼����VeCADC_na_FrntDrvDistbnModeǰ�����ݴ���ģʽ
                                       */
extern uint8_T KeCADC_na_FrntDrvDistbnModeRv;
                                      /* Variable: KeCADC_na_FrntDrvDistbnModeRv
                                       * Referenced by: '<S8>/ConstantRv208'
                                       */
extern uint8_T KeCADC_na_FrntDrvOperStsRv;/* Variable: KeCADC_na_FrntDrvOperStsRv
                                           * Referenced by: '<S8>/ConstantRv180'
                                           */
extern uint8_T KeCADC_na_FrntPassDistbn2HMI_D[3];
                                     /* Variable: KeCADC_na_FrntPassDistbn2HMI_D
                                      * Referenced by: '<S501>/1-D Lookup Table'
                                      * ������ͷ���ŵ�������ã�ʹ�ô��߼����VeCADC_na_FrntPassDistbnModeǰ�Ÿ��ݴ���ģʽ
                                      */
extern uint8_T KeCADC_na_FrntPassDistbnModeRv;
                                     /* Variable: KeCADC_na_FrntPassDistbnModeRv
                                      * Referenced by: '<S8>/ConstantRv229'
                                      */
extern uint8_T KeCADC_na_FrntPassOperStsRv;/* Variable: KeCADC_na_FrntPassOperStsRv
                                            * Referenced by: '<S8>/ConstantRv214'
                                            */
extern uint8_T KeCADC_na_SdfPosnCalcnModeRv;/* Variable: KeCADC_na_SdfPosnCalcnModeRv
                                             * Referenced by: '<S8>/ConstantRv235'
                                             */
extern uint8_T KeCADC_na_SdfPosnUpdStsRv;/* Variable: KeCADC_na_SdfPosnUpdStsRv
                                          * Referenced by: '<S8>/ConstantRv237'
                                          */
extern uint8_T KeCADC_na_SdvPosnCalcnModeRv;/* Variable: KeCADC_na_SdvPosnCalcnModeRv
                                             * Referenced by: '<S8>/ConstantRv234'
                                             */
extern uint8_T KeCADC_na_SdvPosnUpdStsRv;/* Variable: KeCADC_na_SdvPosnUpdStsRv
                                          * Referenced by: '<S8>/ConstantRv236'
                                          */
extern uint8_T KeCADC_na_SecDrvDistbn2HMI_D[5];/* Variable: KeCADC_na_SecDrvDistbn2HMI_D
                                                * Referenced by: '<S565>/1-D Lookup Table'
                                                * ������ͷ���ŵ�������ã�ʹ�ô��߼����VeCADC_na_SecDrvDistbnMode�������ݴ���ģʽ
                                                */
extern uint8_T KeCADC_na_SecDrvDistbnModeRv;/* Variable: KeCADC_na_SecDrvDistbnModeRv
                                             * Referenced by: '<S8>/ConstantRv253'
                                             */
extern uint8_T KeCADC_na_SecDrvOperStsRv;/* Variable: KeCADC_na_SecDrvOperStsRv
                                          * Referenced by: '<S8>/ConstantRv233'
                                          */
extern uint8_T KeCADC_na_SecDrvZoneFlapParkStsRv;
                                  /* Variable: KeCADC_na_SecDrvZoneFlapParkStsRv
                                   * Referenced by: '<S8>/ConstantRv254'
                                   */
extern uint8_T KeCADC_na_SecPassDistbn2HMI_D[4];
                                      /* Variable: KeCADC_na_SecPassDistbn2HMI_D
                                       * Referenced by: '<S621>/1-D Lookup Table'
                                       * ������ͷ���ŵ�������ã�ʹ�ô��߼����VeCADC_na_SecPassDistbnMode�������ݴ���ģʽ
                                       */
extern uint8_T KeCADC_na_SecPassDistbnModeRv;
                                      /* Variable: KeCADC_na_SecPassDistbnModeRv
                                       * Referenced by: '<S8>/ConstantRv279'
                                       */
extern uint8_T KeCADC_na_SecPassOperStsRv;/* Variable: KeCADC_na_SecPassOperStsRv
                                           * Referenced by: '<S8>/ConstantRv260'
                                           */
extern uint8_T KeCADC_na_SpfPosnCalcnModeRv;/* Variable: KeCADC_na_SpfPosnCalcnModeRv
                                             * Referenced by: '<S8>/ConstantRv262'
                                             */
extern uint8_T KeCADC_na_SpfPosnUpdStsRv;/* Variable: KeCADC_na_SpfPosnUpdStsRv
                                          * Referenced by: '<S8>/ConstantRv264'
                                          */
extern uint8_T KeCADC_na_SpvPosnCalcnModeRv;/* Variable: KeCADC_na_SpvPosnCalcnModeRv
                                             * Referenced by: '<S8>/ConstantRv261'
                                             */
extern uint8_T KeCADC_na_SpvPosnUpdStsRv;/* Variable: KeCADC_na_SpvPosnUpdStsRv
                                          * Referenced by: '<S8>/ConstantRv263'
                                          */
extern uint8_T KeCADC_pct_SdfPosnBaseStable_X[4];
                                     /* Variable: KeCADC_pct_SdfPosnBaseStable_X
                                      * Referenced by: '<S585>/1-D Lookup Table'
                                      * VeHMI_na_AirdModeML HMI�ֶ����Ƶĳ���ģʽ����
                                      */
extern uint8_T KeCADC_pct_SdvPosnBaseStable_X[4];
                                     /* Variable: KeCADC_pct_SdvPosnBaseStable_X
                                      * Referenced by: '<S579>/1-D Lookup Table'
                                      * VeHMI_na_AirdModeML HMI�ֶ����Ƶĳ���ģʽ����
                                      */
extern uint8_T KeCADC_pct_SpvReq2SpfFlap_D[4];/* Variable: KeCADC_pct_SpvReq2SpfFlap_D
                                               * Referenced by: '<S621>/1-D Lookup Table2'
                                               * ������ͷ���ŵ�������ã�ʹ�ô��߼����VeCADC_pct_SpfFlapPosn�������ݴ��ŷ���λ��
                                               */
extern uint8_T KeCADC_pct_SpvReq2SpvFlap_D[4];/* Variable: KeCADC_pct_SpvReq2SpvFlap_D
                                               * Referenced by: '<S621>/1-D Lookup Table1'
                                               * ������ͷ���ŵ�������ã�ʹ�ô��߼����VeCADC_pct_SpvFlapPosn�����ݴ�ͷ����λ��
                                               */
extern uint8_T KeCAFC_n_FrntBlwrIndcDelt;/* Variable: KeCAFC_n_FrntBlwrIndcDelt
                                          * Referenced by: '<S690>/Constant2'
                                          * �ķ��ת�ٶ�Ӧ������λ�ز�ֵ
                                          */
extern uint8_T KeCAFC_na_FrntAirFlowLvIndcRv;
                                      /* Variable: KeCAFC_na_FrntAirFlowLvIndcRv
                                       * Referenced by: '<S10>/ConstantRv567'
                                       */
extern uint8_T KeCAFC_na_FrntBlwrCalcnModeRv;
                                      /* Variable: KeCAFC_na_FrntBlwrCalcnModeRv
                                       * Referenced by: '<S10>/ConstantRv553'
                                       */
extern uint8_T KeCAFC_na_FrntBlwrOperStsRv;/* Variable: KeCAFC_na_FrntBlwrOperStsRv
                                            * Referenced by: '<S10>/ConstantRv552'
                                            */
extern uint8_T KeCHFC_na_FdhPosnCalcnModeRv;/* Variable: KeCHFC_na_FdhPosnCalcnModeRv
                                             * Referenced by: '<S12>/ConstantRv145'
                                             */
extern uint8_T KeCHFC_na_FphPosnCalcnModeRv;/* Variable: KeCHFC_na_FphPosnCalcnModeRv
                                             * Referenced by: '<S12>/ConstantRv154'
                                             */
extern uint8_T KeCHFC_na_FrntDrvOperStRv;/* Variable: KeCHFC_na_FrntDrvOperStRv
                                          * Referenced by: '<S12>/ConstantRv144'
                                          */
extern uint8_T KeCHFC_na_FrntPassOperStRv;/* Variable: KeCHFC_na_FrntPassOperStRv
                                           * Referenced by: '<S12>/ConstantRv153'
                                           */
extern uint8_T KeCHFC_na_SdhPosnCalcnModeRv;/* Variable: KeCHFC_na_SdhPosnCalcnModeRv
                                             * Referenced by: '<S12>/ConstantRv163'
                                             */
extern uint8_T KeCHFC_na_SecDrvOperStRv;/* Variable: KeCHFC_na_SecDrvOperStRv
                                         * Referenced by: '<S12>/ConstantRv162'
                                         */
extern uint8_T KeCHFC_na_SecPassOperStRv;/* Variable: KeCHFC_na_SecPassOperStRv
                                          * Referenced by: '<S12>/ConstantRv171'
                                          */
extern uint8_T KeCHFC_na_SphPosnCalcnModeRv;/* Variable: KeCHFC_na_SphPosnCalcnModeRv
                                             * Referenced by: '<S12>/ConstantRv172'
                                             */
extern uint8_T KeCHMI_na_AirdModeLRv;  /* Variable: KeCHMI_na_AirdModeLRv
                                        * Referenced by: '<S14>/ConstantRv69'
                                        */
extern uint8_T KeCHMI_na_AirdModeMLRv; /* Variable: KeCHMI_na_AirdModeMLRv
                                        * Referenced by: '<S14>/ConstantRv71'
                                        */
extern uint8_T KeCHMI_na_AirdModeRRv;  /* Variable: KeCHMI_na_AirdModeRRv
                                        * Referenced by: '<S14>/ConstantRv70'
                                        */
extern uint8_T KeCHMI_na_BlwrLvRv;     /* Variable: KeCHMI_na_BlwrLvRv
                                        * Referenced by: '<S14>/ConstantRv75'
                                        */
extern uint8_T KeCREC_na_CRECOperStsRV;/* Variable: KeCREC_na_CRECOperStsRV
                                        * Referenced by: '<S16>/ConstantRv16'
                                        */
extern uint8_T KeCREC_na_OsaPosnCalcnModeRV;/* Variable: KeCREC_na_OsaPosnCalcnModeRV
                                             * Referenced by: '<S16>/ConstantRv18'
                                             */
extern uint8_T KeCREC_na_RecPosnCalcnModeRV;/* Variable: KeCREC_na_RecPosnCalcnModeRV
                                             * Referenced by: '<S16>/ConstantRv17'
                                             */
extern uint8_T KeCREC_sec_Wiper;       /* Variable: KeCREC_sec_Wiper
                                        * Referenced by: '<S15>/Constant'
                                        * ϴ�����ܼ�ʱ��
                                        */
extern uint8_T KeCTCM_na_EvaOutFlwCoef;/* Variable: KeCTCM_na_EvaOutFlwCoef
                                        * Referenced by:
                                        *   '<S1156>/Constant'
                                        *   '<S1159>/Constant'
                                        * �����������¶�������Ӱ�첹��ϵ��
                                        */
extern uint8_T KeCTCM_na_FdZoneModStsRv;/* Variable: KeCTCM_na_FdZoneModStsRv
                                         * Referenced by: '<S20>/ConstantRv73'
                                         */
extern uint8_T KeCTCM_na_FpZoneModStsRv;/* Variable: KeCTCM_na_FpZoneModStsRv
                                         * Referenced by: '<S20>/ConstantRv74'
                                         */
extern uint8_T KeCTCM_na_OperSpclStartStsRv;/* Variable: KeCTCM_na_OperSpclStartStsRv
                                             * Referenced by: '<S20>/ConstantRv70'
                                             */
extern uint8_T KeCTCM_na_OperStsRv;    /* Variable: KeCTCM_na_OperStsRv
                                        * Referenced by: '<S20>/ConstantRv143'
                                        */
extern uint8_T KeCTCM_na_SdZoneModStsRv;/* Variable: KeCTCM_na_SdZoneModStsRv
                                         * Referenced by: '<S20>/ConstantRv75'
                                         */
extern uint8_T KeCTCM_na_SpZoneModStsRv;/* Variable: KeCTCM_na_SpZoneModStsRv
                                         * Referenced by: '<S20>/ConstantRv76'
                                         */
extern uint8_T KeCTCM_na_Yn2DefdFlapACoef_D[105];/* Variable: KeCTCM_na_Yn2DefdFlapACoef_D
                                                  * Referenced by: '<S1038>/2-D Lookup Table'
                                                  * AC OFF״̬�µ����ݶԳ�˪���ŵ�λ������ֵ���
                                                  */
extern uint8_T KeCTCM_na_Yn2DefdFlap_D[105];/* Variable: KeCTCM_na_Yn2DefdFlap_D
                                             * Referenced by: '<S1037>/2-D Lookup Table'
                                             * AC ON״̬�µ����ݶԳ�˪���ŵ�λ������ֵ���
                                             */
extern uint8_T KeCTCM_na_Yn2DefpFlapACoef_D[105];/* Variable: KeCTCM_na_Yn2DefpFlapACoef_D
                                                  * Referenced by: '<S1038>/2-D Lookup Table1'
                                                  * AC OFF״̬�µĸ��ݶԳ�˪���ŵ�λ������ֵ���
                                                  */
extern uint8_T KeCTCM_na_Yn2DefpFlap_D[105];/* Variable: KeCTCM_na_Yn2DefpFlap_D
                                             * Referenced by: '<S1037>/2-D Lookup Table1'
                                             * VeTSAP_T_SunEftFd ǰ�����ݹ���ǿ��
                                             */
extern uint8_T KeCTCM_na_Yn2FdfFlapACoef_D[105];/* Variable: KeCTCM_na_Yn2FdfFlapACoef_D
                                                 * Referenced by: '<S1052>/2-D Lookup Table'
                                                 * AC ON״̬�µ�ǰ�����ݴ��ŷ��ŵ�λ������ֵ���
                                                 */
extern uint8_T KeCTCM_na_Yn2FdfFlap_D[105];/* Variable: KeCTCM_na_Yn2FdfFlap_D
                                            * Referenced by: '<S1051>/2-D Lookup Table'
                                            * AC ON״̬�µ�ǰ�����ݴ��ŷ��ŵ�λ������ֵ���
                                            */
extern uint8_T KeCTCM_na_Yn2FdvFlapACoef_D[105];/* Variable: KeCTCM_na_Yn2FdvFlapACoef_D
                                                 * Referenced by: '<S1050>/2-D Lookup Table'
                                                 * AC ON״̬�µ�ǰ�����ݴ�ͷ���ŵ�λ������ֵ���
                                                 */
extern uint8_T KeCTCM_na_Yn2FdvFlap_D[105];/* Variable: KeCTCM_na_Yn2FdvFlap_D
                                            * Referenced by: '<S1053>/2-D Lookup Table'
                                            * AC ON״̬�µ�ǰ�����ݴ�ͷ���ŵ�λ������ֵ���
                                            */
extern uint8_T KeCTCM_na_Yn2FpfFlapACoef_D[105];/* Variable: KeCTCM_na_Yn2FpfFlapACoef_D
                                                 * Referenced by: '<S1081>/2-D Lookup Table1'
                                                 * AC ON״̬�µ�ǰ�Ÿ��ݴ��ŷ��ŵ�λ������ֵ���
                                                 */
extern uint8_T KeCTCM_na_Yn2FpfFlap_D[105];/* Variable: KeCTCM_na_Yn2FpfFlap_D
                                            * Referenced by: '<S1080>/2-D Lookup Table1'
                                            * AC ON״̬�µ�ǰ�Ÿ��ݴ��ŷ��ŵ�λ������ֵ���
                                            */
extern uint8_T KeCTCM_na_Yn2FpvFlapACoef_D[105];/* Variable: KeCTCM_na_Yn2FpvFlapACoef_D
                                                 * Referenced by: '<S1078>/2-D Lookup Table1'
                                                 * AC ON״̬�µ�ǰ�Ÿ��ݴ�ͷ���ŵ�λ������ֵ���
                                                 */
extern uint8_T KeCTCM_na_Yn2SdfFlapACoef_D[105];/* Variable: KeCTCM_na_Yn2SdfFlapACoef_D
                                                 * Referenced by: '<S1108>/2-D Lookup Table1'
                                                 * AC ON״̬�µĶ������ݴ��ŷ��ŵ�λ������ֵ���
                                                 */
extern uint8_T KeCTCM_na_Yn2SdfFlap_D[105];/* Variable: KeCTCM_na_Yn2SdfFlap_D
                                            * Referenced by: '<S1107>/2-D Lookup Table1'
                                            * AC ON״̬�µĶ������ݴ��ŷ��ŵ�λ������ֵ���
                                            */
extern uint8_T KeCTCM_na_Yn2SdvFlapACoef_D[105];/* Variable: KeCTCM_na_Yn2SdvFlapACoef_D
                                                 * Referenced by: '<S1106>/2-D Lookup Table1'
                                                 * AC ON״̬�µĶ������ݴ�ͷ���ŵ�λ������ֵ���
                                                 */
extern uint8_T KeCTCM_na_Yn2SdvFlap_D[105];/* Variable: KeCTCM_na_Yn2SdvFlap_D
                                            * Referenced by: '<S1105>/2-D Lookup Table1'
                                            * AC ON״̬�µĶ������ݴ�ͷ���ŵ�λ������ֵ���
                                            */
extern uint8_T KeCTCM_na_Yn2SpfFlapACoef_D[105];/* Variable: KeCTCM_na_Yn2SpfFlapACoef_D
                                                 * Referenced by: '<S1134>/2-D Lookup Table1'
                                                 * AC ON״̬�µĶ��Ÿ��ݴ��ŷ��ŵ�λ������ֵ���
                                                 */
extern uint8_T KeCTCM_na_Yn2SpfFlap_D[105];/* Variable: KeCTCM_na_Yn2SpfFlap_D
                                            * Referenced by: '<S1133>/2-D Lookup Table1'
                                            * AC ON״̬�µĶ��Ÿ��ݴ��ŷ��ŵ�λ������ֵ���
                                            */
extern uint8_T KeCTCM_na_Yn2SpvFlapACoef_D[105];/* Variable: KeCTCM_na_Yn2SpvFlapACoef_D
                                                 * Referenced by: '<S1136>/2-D Lookup Table1'
                                                 * AC ON״̬�µĶ��Ÿ��ݴ�ͷ���ŵ�λ������ֵ���
                                                 */
extern uint8_T KeCTCM_na_Yn2SpvFlap_D[105];/* Variable: KeCTCM_na_Yn2SpvFlap_D
                                            * Referenced by: '<S1135>/2-D Lookup Table1'
                                            * AC ON״̬�µĶ��Ÿ��ݴ�ͷ���ŵ�λ������ֵ���
                                            */
extern uint8_T KeCTCM_sec_ColdStartTmr;/* Variable: KeCTCM_sec_ColdStartTmr
                                        * Referenced by: '<S19>/Constant8'
                                        * �������������ʱ���ʱ��
                                        */
extern uint8_T KeCTCM_sec_HotStartTmr; /* Variable: KeCTCM_sec_HotStartTmr
                                        * Referenced by: '<S19>/Constant9'
                                        * �������������ʱ���ʱ��
                                        */
extern uint8_T KeFWDS_na_BlwrLvLimRv;  /* Variable: KeFWDS_na_BlwrLvLimRv
                                        * Referenced by: '<S22>/ConstantRv114'
                                        */
extern uint8_T KeFWDS_na_OperStsRv;    /* Variable: KeFWDS_na_OperStsRv
                                        * Referenced by: '<S22>/ConstantRv110'
                                        */
extern uint8_T KeFWDS_na_RiskLvRv;     /* Variable: KeFWDS_na_RiskLvRv
                                        * Referenced by: '<S22>/ConstantRv117'
                                        */
extern uint8_T KePCAT_na_BreaTempEfctCoef_X[3];/* Variable: KePCAT_na_BreaTempEfctCoef_X
                                                * Referenced by: '<S1207>/KePCAT_na_BreaTempEfctCoef_D'
                                                * [1:3]
                                                */
extern uint8_T KePCAT_na_DeltTempCoef; /* Variable: KePCAT_na_DeltTempCoef
                                        * Referenced by: '<S1186>/Constant8'
                                        * ���ٵ���ʱ��ϵ��
                                        */
extern uint8_T KePCAT_na_FdFrtFlrHiCoef_X[8];/* Variable: KePCAT_na_FdFrtFlrHiCoef_X
                                              * Referenced by: '<S1245>/KePCAT_na_FdFrtFlrHiCoef_D'
                                              * ͨ��VeCADC_na_FrntDrvDistbnMode
                                              */
extern uint8_T KePCAT_na_FddHiCoef_X[8];/* Variable: KePCAT_na_FddHiCoef_X
                                         * Referenced by: '<S1245>/KePCAT_na_FddHiCoef_D'
                                         * ͨ��VeCADC_na_FrntDrvDistbnMode
                                         */
extern uint8_T KePCAT_na_FdsHiCoef_X[8];/* Variable: KePCAT_na_FdsHiCoef_X
                                         * Referenced by:
                                         *   '<S1245>/KePCAT_na_FdsHiCoef_D'
                                         *   '<S1245>/KePCAT_na_FpsHiCoef_D'
                                         * ͨ��VeCADC_na_FrntDrvDistbnMode
                                         */
extern uint8_T KePCAT_na_FpFrtFlrHiCoef_X[8];/* Variable: KePCAT_na_FpFrtFlrHiCoef_X
                                              * Referenced by: '<S1245>/KePCAT_na_FpFrtFlrHiCoef_D'
                                              * ͨ��VeCADC_na_FrntPasDistbnMode
                                              */
extern uint8_T KePCAT_na_FpdHiCoef_X[8];/* Variable: KePCAT_na_FpdHiCoef_X
                                         * Referenced by: '<S1245>/KePCAT_na_FpdHiCoef_D'
                                         * ͨ��VeCADC_na_FrntPasDistbnMode
                                         */
extern uint8_T KePCAT_na_NapTimrStsRv; /* Variable: KePCAT_na_NapTimrStsRv
                                        * Referenced by: '<S24>/ConstantRv15'
                                        */
extern uint8_T KePCAT_na_PCATOperStsRv;/* Variable: KePCAT_na_PCATOperStsRv
                                        * Referenced by: '<S24>/ConstantRv10'
                                        */
extern uint8_T KePCAT_na_RerFlrHiCoef_X[4];/* Variable: KePCAT_na_RerFlrHiCoef_X
                                            * Referenced by: '<S1245>/KePCAT_na_RerFlrHiCoef_D'
                                            * ͨ��VeCADC_na_SecDrvDistbnMode
                                            */
extern uint8_T KePCAT_na_SddHiCoef_X[4];/* Variable: KePCAT_na_SddHiCoef_X
                                         * Referenced by: '<S1245>/KePCAT_na_SddHiCoef_D'
                                         * ͨ��VeCADC_na_SecDrvDistbnMode
                                         */
extern uint8_T KePCAT_na_SdsHiCoef_X[4];/* Variable: KePCAT_na_SdsHiCoef_X
                                         * Referenced by: '<S1245>/KePCAT_na_SdsHiCoef_D'
                                         * ͨ��VeCADC_na_SecDrvDistbnMode
                                         */
extern uint8_T KePCAT_pct_AirFlowFpFoot_X[3];/* Variable: KePCAT_pct_AirFlowFpFoot_X
                                              * Referenced by: '<S1242>/KePCAT_pct_AirFlowFpFoot_D'
                                              * VeCADC_na_FrntPassDistbnMode
                                              */
extern uint8_T KePCAT_pct_AirFlowFpVentRC_X[3];/* Variable: KePCAT_pct_AirFlowFpVentRC_X
                                                * Referenced by: '<S1242>/KePCAT_pct_AirFlowFpVentRC_D'
                                                * VeCADC_na_FrntPassDistbnMode
                                                */
extern uint8_T KePCAT_pct_AirFlowFpVentRS_X[3];/* Variable: KePCAT_pct_AirFlowFpVentRS_X
                                                * Referenced by: '<S1242>/KePCAT_pct_AirFlowFpVentRS_D'
                                                * VeCADC_na_FrntPassDistbnMode
                                                */
extern uint8_T KeSENA_na_AmbTempFaultStRv;/* Variable: KeSENA_na_AmbTempFaultStRv
                                           * Referenced by: '<S26>/ConstantRv13'
                                           */

/* Model entry point functions */
extern void Thermal_Cabin_initialize(void);
extern void Thermal_Cabin_step(void);
extern void Thermal_Cabin_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Thermal_Cabin_T *const Thermal_Cabin_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'Thermal_Cabin'
 * '<S1>'   : 'Thermal_Cabin/All_CCU_Logic'
 * '<S2>'   : 'Thermal_Cabin/All_CCU_Logic/ACTU'
 * '<S3>'   : 'Thermal_Cabin/All_CCU_Logic/ACTU_Calibration'
 * '<S4>'   : 'Thermal_Cabin/All_CCU_Logic/BLWA'
 * '<S5>'   : 'Thermal_Cabin/All_CCU_Logic/BSWC'
 * '<S6>'   : 'Thermal_Cabin/All_CCU_Logic/BSWC_Calibration'
 * '<S7>'   : 'Thermal_Cabin/All_CCU_Logic/CADC'
 * '<S8>'   : 'Thermal_Cabin/All_CCU_Logic/CADC_Calibration'
 * '<S9>'   : 'Thermal_Cabin/All_CCU_Logic/CAFC'
 * '<S10>'  : 'Thermal_Cabin/All_CCU_Logic/CAFC_Calibration'
 * '<S11>'  : 'Thermal_Cabin/All_CCU_Logic/CHFC'
 * '<S12>'  : 'Thermal_Cabin/All_CCU_Logic/CHFC_Calibration'
 * '<S13>'  : 'Thermal_Cabin/All_CCU_Logic/CHMI'
 * '<S14>'  : 'Thermal_Cabin/All_CCU_Logic/CHMI_Calibration'
 * '<S15>'  : 'Thermal_Cabin/All_CCU_Logic/CREC'
 * '<S16>'  : 'Thermal_Cabin/All_CCU_Logic/CREC_Calibration'
 * '<S17>'  : 'Thermal_Cabin/All_CCU_Logic/CSCC'
 * '<S18>'  : 'Thermal_Cabin/All_CCU_Logic/CSCC_Calibration'
 * '<S19>'  : 'Thermal_Cabin/All_CCU_Logic/CTCM'
 * '<S20>'  : 'Thermal_Cabin/All_CCU_Logic/CTCM_Calibration'
 * '<S21>'  : 'Thermal_Cabin/All_CCU_Logic/FWDS'
 * '<S22>'  : 'Thermal_Cabin/All_CCU_Logic/FWDS_Calibration'
 * '<S23>'  : 'Thermal_Cabin/All_CCU_Logic/PCAT'
 * '<S24>'  : 'Thermal_Cabin/All_CCU_Logic/PCAT_Calibration'
 * '<S25>'  : 'Thermal_Cabin/All_CCU_Logic/SENA'
 * '<S26>'  : 'Thermal_Cabin/All_CCU_Logic/SENA_Calibration'
 * '<S27>'  : 'Thermal_Cabin/All_CCU_Logic/Subsystem10'
 * '<S28>'  : 'Thermal_Cabin/All_CCU_Logic/Subsystem11'
 * '<S29>'  : 'Thermal_Cabin/All_CCU_Logic/Subsystem12'
 * '<S30>'  : 'Thermal_Cabin/All_CCU_Logic/Subsystem13'
 * '<S31>'  : 'Thermal_Cabin/All_CCU_Logic/Subsystem14'
 * '<S32>'  : 'Thermal_Cabin/All_CCU_Logic/Subsystem15'
 * '<S33>'  : 'Thermal_Cabin/All_CCU_Logic/Subsystem16'
 * '<S34>'  : 'Thermal_Cabin/All_CCU_Logic/Subsystem17'
 * '<S35>'  : 'Thermal_Cabin/All_CCU_Logic/Subsystem18'
 * '<S36>'  : 'Thermal_Cabin/All_CCU_Logic/Subsystem19'
 * '<S37>'  : 'Thermal_Cabin/All_CCU_Logic/Subsystem20'
 * '<S38>'  : 'Thermal_Cabin/All_CCU_Logic/Subsystem21'
 * '<S39>'  : 'Thermal_Cabin/All_CCU_Logic/Subsystem22'
 * '<S40>'  : 'Thermal_Cabin/All_CCU_Logic/Subsystem23'
 * '<S41>'  : 'Thermal_Cabin/All_CCU_Logic/Subsystem24'
 * '<S42>'  : 'Thermal_Cabin/All_CCU_Logic/Subsystem25'
 * '<S43>'  : 'Thermal_Cabin/All_CCU_Logic/Subsystem26'
 * '<S44>'  : 'Thermal_Cabin/All_CCU_Logic/VTIC'
 * '<S45>'  : 'Thermal_Cabin/All_CCU_Logic/VTIC_Calibration'
 * '<S46>'  : 'Thermal_Cabin/All_CCU_Logic/ACTU/Chart'
 * '<S47>'  : 'Thermal_Cabin/All_CCU_Logic/ACTU/Chart1'
 * '<S48>'  : 'Thermal_Cabin/All_CCU_Logic/ACTU/Chart10'
 * '<S49>'  : 'Thermal_Cabin/All_CCU_Logic/ACTU/Chart11'
 * '<S50>'  : 'Thermal_Cabin/All_CCU_Logic/ACTU/Chart12'
 * '<S51>'  : 'Thermal_Cabin/All_CCU_Logic/ACTU/Chart13'
 * '<S52>'  : 'Thermal_Cabin/All_CCU_Logic/ACTU/Chart14'
 * '<S53>'  : 'Thermal_Cabin/All_CCU_Logic/ACTU/Chart15'
 * '<S54>'  : 'Thermal_Cabin/All_CCU_Logic/ACTU/Chart16'
 * '<S55>'  : 'Thermal_Cabin/All_CCU_Logic/ACTU/Chart17'
 * '<S56>'  : 'Thermal_Cabin/All_CCU_Logic/ACTU/Chart18'
 * '<S57>'  : 'Thermal_Cabin/All_CCU_Logic/ACTU/Chart19'
 * '<S58>'  : 'Thermal_Cabin/All_CCU_Logic/ACTU/Chart2'
 * '<S59>'  : 'Thermal_Cabin/All_CCU_Logic/ACTU/Chart20'
 * '<S60>'  : 'Thermal_Cabin/All_CCU_Logic/ACTU/Chart21'
 * '<S61>'  : 'Thermal_Cabin/All_CCU_Logic/ACTU/Chart22'
 * '<S62>'  : 'Thermal_Cabin/All_CCU_Logic/ACTU/Chart23'
 * '<S63>'  : 'Thermal_Cabin/All_CCU_Logic/ACTU/Chart24'
 * '<S64>'  : 'Thermal_Cabin/All_CCU_Logic/ACTU/Chart25'
 * '<S65>'  : 'Thermal_Cabin/All_CCU_Logic/ACTU/Chart26'
 * '<S66>'  : 'Thermal_Cabin/All_CCU_Logic/ACTU/Chart27'
 * '<S67>'  : 'Thermal_Cabin/All_CCU_Logic/ACTU/Chart28'
 * '<S68>'  : 'Thermal_Cabin/All_CCU_Logic/ACTU/Chart29'
 * '<S69>'  : 'Thermal_Cabin/All_CCU_Logic/ACTU/Chart3'
 * '<S70>'  : 'Thermal_Cabin/All_CCU_Logic/ACTU/Chart30'
 * '<S71>'  : 'Thermal_Cabin/All_CCU_Logic/ACTU/Chart31'
 * '<S72>'  : 'Thermal_Cabin/All_CCU_Logic/ACTU/Chart32'
 * '<S73>'  : 'Thermal_Cabin/All_CCU_Logic/ACTU/Chart33'
 * '<S74>'  : 'Thermal_Cabin/All_CCU_Logic/ACTU/Chart34'
 * '<S75>'  : 'Thermal_Cabin/All_CCU_Logic/ACTU/Chart35'
 * '<S76>'  : 'Thermal_Cabin/All_CCU_Logic/ACTU/Chart36'
 * '<S77>'  : 'Thermal_Cabin/All_CCU_Logic/ACTU/Chart37'
 * '<S78>'  : 'Thermal_Cabin/All_CCU_Logic/ACTU/Chart38'
 * '<S79>'  : 'Thermal_Cabin/All_CCU_Logic/ACTU/Chart39'
 * '<S80>'  : 'Thermal_Cabin/All_CCU_Logic/ACTU/Chart4'
 * '<S81>'  : 'Thermal_Cabin/All_CCU_Logic/ACTU/Chart40'
 * '<S82>'  : 'Thermal_Cabin/All_CCU_Logic/ACTU/Chart41'
 * '<S83>'  : 'Thermal_Cabin/All_CCU_Logic/ACTU/Chart42'
 * '<S84>'  : 'Thermal_Cabin/All_CCU_Logic/ACTU/Chart43'
 * '<S85>'  : 'Thermal_Cabin/All_CCU_Logic/ACTU/Chart5'
 * '<S86>'  : 'Thermal_Cabin/All_CCU_Logic/ACTU/Chart6'
 * '<S87>'  : 'Thermal_Cabin/All_CCU_Logic/ACTU/Chart7'
 * '<S88>'  : 'Thermal_Cabin/All_CCU_Logic/ACTU/Chart8'
 * '<S89>'  : 'Thermal_Cabin/All_CCU_Logic/ACTU/Chart9'
 * '<S90>'  : 'Thermal_Cabin/All_CCU_Logic/ACTU/Compare To Constant'
 * '<S91>'  : 'Thermal_Cabin/All_CCU_Logic/ACTU/Compare To Constant1'
 * '<S92>'  : 'Thermal_Cabin/All_CCU_Logic/ACTU/Compare To Constant2'
 * '<S93>'  : 'Thermal_Cabin/All_CCU_Logic/ACTU/Compare To Constant3'
 * '<S94>'  : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem1'
 * '<S95>'  : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem10'
 * '<S96>'  : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem11'
 * '<S97>'  : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem12'
 * '<S98>'  : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem13'
 * '<S99>'  : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem14'
 * '<S100>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem15'
 * '<S101>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem16'
 * '<S102>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem17'
 * '<S103>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem18'
 * '<S104>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem19'
 * '<S105>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem2'
 * '<S106>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem20'
 * '<S107>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem21'
 * '<S108>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem22'
 * '<S109>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem3'
 * '<S110>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem4'
 * '<S111>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem5'
 * '<S112>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem6'
 * '<S113>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem7'
 * '<S114>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem8'
 * '<S115>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem9'
 * '<S116>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Subsystem'
 * '<S117>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Subsystem1'
 * '<S118>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Subsystem10'
 * '<S119>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Subsystem11'
 * '<S120>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Subsystem12'
 * '<S121>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Subsystem13'
 * '<S122>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Subsystem17'
 * '<S123>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Subsystem2'
 * '<S124>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Subsystem3'
 * '<S125>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Subsystem4'
 * '<S126>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Subsystem5'
 * '<S127>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Subsystem6'
 * '<S128>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Subsystem7'
 * '<S129>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Subsystem8'
 * '<S130>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Subsystem9'
 * '<S131>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem1/Compare To Constant1'
 * '<S132>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem1/Compare To Constant2'
 * '<S133>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem1/Compare To Constant3'
 * '<S134>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem1/Compare To Constant4'
 * '<S135>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem1/Enabled Subsystem'
 * '<S136>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem1/Enabled Subsystem1'
 * '<S137>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem1/Enabled Subsystem/Compare To Constant'
 * '<S138>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem1/Enabled Subsystem/Compare To Constant1'
 * '<S139>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem1/Enabled Subsystem/Compare To Constant3'
 * '<S140>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem1/Enabled Subsystem1/Chart1'
 * '<S141>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem10/Enabled Subsystem'
 * '<S142>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem10/Subsystem'
 * '<S143>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem10/Enabled Subsystem/Subsystem'
 * '<S144>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem10/Enabled Subsystem/Subsystem16'
 * '<S145>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem10/Enabled Subsystem/Subsystem/Compare To Constant'
 * '<S146>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem10/Enabled Subsystem/Subsystem16/Compare To Constant'
 * '<S147>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem11/Enabled Subsystem'
 * '<S148>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem11/Subsystem'
 * '<S149>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem11/Enabled Subsystem/Subsystem'
 * '<S150>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem11/Enabled Subsystem/Subsystem16'
 * '<S151>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem11/Enabled Subsystem/Subsystem/Compare To Constant'
 * '<S152>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem11/Enabled Subsystem/Subsystem16/Compare To Constant'
 * '<S153>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem12/Enabled Subsystem'
 * '<S154>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem12/Subsystem'
 * '<S155>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem12/Enabled Subsystem/Subsystem'
 * '<S156>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem12/Enabled Subsystem/Subsystem16'
 * '<S157>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem12/Enabled Subsystem/Subsystem/Compare To Constant'
 * '<S158>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem12/Enabled Subsystem/Subsystem16/Compare To Constant'
 * '<S159>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem13/Enabled Subsystem'
 * '<S160>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem13/Subsystem'
 * '<S161>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem13/Enabled Subsystem/Subsystem'
 * '<S162>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem13/Enabled Subsystem/Subsystem16'
 * '<S163>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem13/Enabled Subsystem/Subsystem/Compare To Constant'
 * '<S164>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem13/Enabled Subsystem/Subsystem16/Compare To Constant'
 * '<S165>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem14/Enabled Subsystem'
 * '<S166>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem14/Subsystem'
 * '<S167>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem14/Enabled Subsystem/Subsystem'
 * '<S168>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem14/Enabled Subsystem/Subsystem16'
 * '<S169>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem14/Enabled Subsystem/Subsystem/Compare To Constant'
 * '<S170>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem14/Enabled Subsystem/Subsystem16/Compare To Constant'
 * '<S171>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem15/Enabled Subsystem'
 * '<S172>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem15/Subsystem'
 * '<S173>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem15/Enabled Subsystem/Subsystem'
 * '<S174>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem15/Enabled Subsystem/Subsystem16'
 * '<S175>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem15/Enabled Subsystem/Subsystem/Compare To Constant'
 * '<S176>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem15/Enabled Subsystem/Subsystem16/Compare To Constant'
 * '<S177>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem16/Compare To Constant1'
 * '<S178>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem16/Compare To Constant2'
 * '<S179>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem16/Compare To Constant3'
 * '<S180>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem16/Compare To Constant4'
 * '<S181>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem16/Enabled Subsystem'
 * '<S182>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem16/Enabled Subsystem1'
 * '<S183>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem16/Enabled Subsystem/Compare To Constant'
 * '<S184>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem16/Enabled Subsystem/Compare To Constant1'
 * '<S185>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem16/Enabled Subsystem/Compare To Constant3'
 * '<S186>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem16/Enabled Subsystem1/Chart1'
 * '<S187>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem17/Compare To Constant1'
 * '<S188>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem17/Compare To Constant2'
 * '<S189>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem17/Compare To Constant3'
 * '<S190>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem17/Compare To Constant4'
 * '<S191>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem17/Enabled Subsystem'
 * '<S192>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem17/Enabled Subsystem1'
 * '<S193>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem17/Enabled Subsystem/Compare To Constant'
 * '<S194>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem17/Enabled Subsystem/Compare To Constant1'
 * '<S195>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem17/Enabled Subsystem/Compare To Constant3'
 * '<S196>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem17/Enabled Subsystem1/Chart1'
 * '<S197>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem18/Compare To Constant1'
 * '<S198>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem18/Compare To Constant2'
 * '<S199>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem18/Compare To Constant3'
 * '<S200>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem18/Compare To Constant4'
 * '<S201>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem18/Enabled Subsystem'
 * '<S202>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem18/Enabled Subsystem1'
 * '<S203>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem18/Enabled Subsystem/Compare To Constant'
 * '<S204>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem18/Enabled Subsystem/Compare To Constant1'
 * '<S205>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem18/Enabled Subsystem/Compare To Constant3'
 * '<S206>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem18/Enabled Subsystem1/Chart1'
 * '<S207>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem19/Compare To Constant1'
 * '<S208>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem19/Compare To Constant2'
 * '<S209>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem19/Compare To Constant3'
 * '<S210>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem19/Compare To Constant4'
 * '<S211>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem19/Enabled Subsystem'
 * '<S212>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem19/Enabled Subsystem1'
 * '<S213>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem19/Enabled Subsystem/Compare To Constant'
 * '<S214>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem19/Enabled Subsystem/Compare To Constant1'
 * '<S215>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem19/Enabled Subsystem/Compare To Constant3'
 * '<S216>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem19/Enabled Subsystem1/Chart1'
 * '<S217>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem2/Compare To Constant1'
 * '<S218>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem2/Compare To Constant128'
 * '<S219>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem2/Compare To Constant2'
 * '<S220>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem2/Compare To Constant3'
 * '<S221>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem2/Compare To Constant4'
 * '<S222>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem2/Compare To Constant5'
 * '<S223>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem2/Enabled Subsystem'
 * '<S224>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem2/Enabled Subsystem1'
 * '<S225>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem2/Enabled Subsystem/Subsystem'
 * '<S226>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem2/Enabled Subsystem1/DC'
 * '<S227>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem2/Enabled Subsystem1/Step'
 * '<S228>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem20/Compare To Constant1'
 * '<S229>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem20/Compare To Constant2'
 * '<S230>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem20/Compare To Constant3'
 * '<S231>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem20/Compare To Constant4'
 * '<S232>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem20/Enabled Subsystem'
 * '<S233>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem20/Enabled Subsystem1'
 * '<S234>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem20/Enabled Subsystem/Compare To Constant'
 * '<S235>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem20/Enabled Subsystem/Compare To Constant1'
 * '<S236>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem20/Enabled Subsystem/Compare To Constant3'
 * '<S237>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem20/Enabled Subsystem1/Chart1'
 * '<S238>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem21/Compare To Constant1'
 * '<S239>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem21/Compare To Constant2'
 * '<S240>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem21/Compare To Constant3'
 * '<S241>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem21/Compare To Constant4'
 * '<S242>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem21/Enabled Subsystem'
 * '<S243>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem21/Enabled Subsystem1'
 * '<S244>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem21/Enabled Subsystem/Compare To Constant'
 * '<S245>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem21/Enabled Subsystem/Compare To Constant1'
 * '<S246>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem21/Enabled Subsystem/Compare To Constant3'
 * '<S247>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem21/Enabled Subsystem1/Chart1'
 * '<S248>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem3/Compare To Constant1'
 * '<S249>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem3/Compare To Constant128'
 * '<S250>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem3/Compare To Constant2'
 * '<S251>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem3/Compare To Constant3'
 * '<S252>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem3/Compare To Constant4'
 * '<S253>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem3/Compare To Constant5'
 * '<S254>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem3/Enabled Subsystem'
 * '<S255>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem3/Enabled Subsystem1'
 * '<S256>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem3/Enabled Subsystem/Subsystem'
 * '<S257>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem3/Enabled Subsystem1/DC'
 * '<S258>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem3/Enabled Subsystem1/Step'
 * '<S259>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem4/Compare To Constant1'
 * '<S260>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem4/Compare To Constant128'
 * '<S261>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem4/Compare To Constant2'
 * '<S262>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem4/Compare To Constant3'
 * '<S263>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem4/Compare To Constant4'
 * '<S264>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem4/Compare To Constant5'
 * '<S265>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem4/Enabled Subsystem'
 * '<S266>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem4/Enabled Subsystem1'
 * '<S267>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem4/Enabled Subsystem/Subsystem'
 * '<S268>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem4/Enabled Subsystem1/DC'
 * '<S269>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem4/Enabled Subsystem1/Step'
 * '<S270>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem5/Compare To Constant1'
 * '<S271>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem5/Compare To Constant128'
 * '<S272>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem5/Compare To Constant2'
 * '<S273>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem5/Compare To Constant3'
 * '<S274>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem5/Compare To Constant4'
 * '<S275>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem5/Compare To Constant5'
 * '<S276>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem5/Enabled Subsystem'
 * '<S277>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem5/Enabled Subsystem1'
 * '<S278>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem5/Enabled Subsystem/Subsystem'
 * '<S279>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem5/Enabled Subsystem1/DC'
 * '<S280>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem5/Enabled Subsystem1/Step'
 * '<S281>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem6/Compare To Constant1'
 * '<S282>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem6/Compare To Constant128'
 * '<S283>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem6/Compare To Constant2'
 * '<S284>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem6/Compare To Constant3'
 * '<S285>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem6/Compare To Constant4'
 * '<S286>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem6/Compare To Constant5'
 * '<S287>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem6/Enabled Subsystem'
 * '<S288>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem6/Enabled Subsystem1'
 * '<S289>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem6/Enabled Subsystem/Subsystem'
 * '<S290>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem6/Enabled Subsystem1/DC'
 * '<S291>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem6/Enabled Subsystem1/Step'
 * '<S292>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem7/Compare To Constant1'
 * '<S293>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem7/Compare To Constant128'
 * '<S294>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem7/Compare To Constant2'
 * '<S295>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem7/Compare To Constant3'
 * '<S296>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem7/Compare To Constant4'
 * '<S297>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem7/Compare To Constant5'
 * '<S298>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem7/Enabled Subsystem'
 * '<S299>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem7/Enabled Subsystem1'
 * '<S300>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem7/Enabled Subsystem/Subsystem'
 * '<S301>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem7/Enabled Subsystem1/DC'
 * '<S302>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem7/Enabled Subsystem1/Step'
 * '<S303>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem8/Enabled Subsystem'
 * '<S304>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem8/Subsystem'
 * '<S305>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem8/Enabled Subsystem/Subsystem'
 * '<S306>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem8/Enabled Subsystem/Subsystem16'
 * '<S307>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem8/Enabled Subsystem/Subsystem/Compare To Constant'
 * '<S308>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem8/Enabled Subsystem/Subsystem16/Compare To Constant'
 * '<S309>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem9/Compare To Constant1'
 * '<S310>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem9/Compare To Constant128'
 * '<S311>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem9/Compare To Constant2'
 * '<S312>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem9/Compare To Constant3'
 * '<S313>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem9/Compare To Constant4'
 * '<S314>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem9/Compare To Constant5'
 * '<S315>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem9/Enabled Subsystem'
 * '<S316>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem9/Enabled Subsystem1'
 * '<S317>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem9/Enabled Subsystem/Subsystem'
 * '<S318>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem9/Enabled Subsystem1/DC'
 * '<S319>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Enabled Subsystem9/Enabled Subsystem1/Step'
 * '<S320>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Subsystem1/Chart'
 * '<S321>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Subsystem1/Enabled Subsystem'
 * '<S322>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Subsystem1/Enabled Subsystem/Chart'
 * '<S323>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Subsystem1/Enabled Subsystem/Chart1'
 * '<S324>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Subsystem1/Enabled Subsystem/Compare To Constant'
 * '<S325>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Subsystem10/Chart1'
 * '<S326>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Subsystem10/Chart16'
 * '<S327>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Subsystem10/Chart2'
 * '<S328>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Subsystem10/Subsystem'
 * '<S329>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Subsystem10/Subsystem/Compare To Constant'
 * '<S330>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Subsystem11/Chart1'
 * '<S331>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Subsystem11/Chart16'
 * '<S332>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Subsystem11/Chart2'
 * '<S333>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Subsystem11/Subsystem'
 * '<S334>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Subsystem11/Subsystem/Compare To Constant'
 * '<S335>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Subsystem12/Chart1'
 * '<S336>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Subsystem12/Chart16'
 * '<S337>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Subsystem12/Chart2'
 * '<S338>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Subsystem12/Subsystem'
 * '<S339>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Subsystem12/Subsystem/Compare To Constant'
 * '<S340>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Subsystem13/Chart1'
 * '<S341>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Subsystem13/Chart16'
 * '<S342>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Subsystem13/Chart2'
 * '<S343>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Subsystem13/Subsystem'
 * '<S344>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Subsystem13/Subsystem/Compare To Constant'
 * '<S345>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Subsystem17/Chart'
 * '<S346>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Subsystem17/Enabled Subsystem'
 * '<S347>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Subsystem17/Enabled Subsystem/Chart'
 * '<S348>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Subsystem17/Enabled Subsystem/Chart1'
 * '<S349>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Subsystem17/Enabled Subsystem/Compare To Constant'
 * '<S350>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Subsystem2/Chart1'
 * '<S351>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Subsystem2/Chart16'
 * '<S352>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Subsystem2/Chart2'
 * '<S353>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Subsystem2/Subsystem'
 * '<S354>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Subsystem2/Subsystem/Compare To Constant'
 * '<S355>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Subsystem3/Chart'
 * '<S356>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Subsystem3/Enabled Subsystem'
 * '<S357>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Subsystem3/Enabled Subsystem/Chart'
 * '<S358>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Subsystem3/Enabled Subsystem/Chart1'
 * '<S359>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Subsystem3/Enabled Subsystem/Compare To Constant'
 * '<S360>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Subsystem4/Chart1'
 * '<S361>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Subsystem4/Chart16'
 * '<S362>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Subsystem4/Chart2'
 * '<S363>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Subsystem4/Subsystem'
 * '<S364>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Subsystem4/Subsystem/Compare To Constant'
 * '<S365>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Subsystem5/Chart'
 * '<S366>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Subsystem5/Enabled Subsystem'
 * '<S367>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Subsystem5/Enabled Subsystem/Chart'
 * '<S368>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Subsystem5/Enabled Subsystem/Chart1'
 * '<S369>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Subsystem5/Enabled Subsystem/Compare To Constant'
 * '<S370>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Subsystem6/Chart'
 * '<S371>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Subsystem6/Enabled Subsystem'
 * '<S372>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Subsystem6/Enabled Subsystem/Chart'
 * '<S373>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Subsystem6/Enabled Subsystem/Chart1'
 * '<S374>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Subsystem6/Enabled Subsystem/Compare To Constant'
 * '<S375>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Subsystem7/Chart'
 * '<S376>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Subsystem7/Enabled Subsystem'
 * '<S377>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Subsystem7/Enabled Subsystem/Chart'
 * '<S378>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Subsystem7/Enabled Subsystem/Chart1'
 * '<S379>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Subsystem7/Enabled Subsystem/Compare To Constant'
 * '<S380>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Subsystem8/Chart'
 * '<S381>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Subsystem8/Enabled Subsystem'
 * '<S382>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Subsystem8/Enabled Subsystem/Chart'
 * '<S383>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Subsystem8/Enabled Subsystem/Chart1'
 * '<S384>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Subsystem8/Enabled Subsystem/Compare To Constant'
 * '<S385>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Subsystem9/Chart1'
 * '<S386>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Subsystem9/Chart16'
 * '<S387>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Subsystem9/Chart2'
 * '<S388>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Subsystem9/Subsystem'
 * '<S389>' : 'Thermal_Cabin/All_CCU_Logic/ACTU/Subsystem9/Subsystem/Compare To Constant'
 * '<S390>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD'
 * '<S391>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FP'
 * '<S392>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SD'
 * '<S393>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SP'
 * '<S394>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD/Chart'
 * '<S395>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD/Subsystem'
 * '<S396>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD/Subsystem1'
 * '<S397>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD/Subsystem2'
 * '<S398>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD/Subsystem3'
 * '<S399>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD/Subsystem4'
 * '<S400>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD/Subsystem5'
 * '<S401>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD/Subsystem6'
 * '<S402>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD/Subsystem7'
 * '<S403>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD/Subsystem/Compare To Constant'
 * '<S404>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD/Subsystem/Compare To Constant1'
 * '<S405>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD/Subsystem/Compare To Constant10'
 * '<S406>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD/Subsystem/Compare To Constant11'
 * '<S407>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD/Subsystem/Compare To Constant12'
 * '<S408>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD/Subsystem/Compare To Constant2'
 * '<S409>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD/Subsystem/Compare To Constant3'
 * '<S410>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD/Subsystem/Compare To Constant4'
 * '<S411>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD/Subsystem/Compare To Constant5'
 * '<S412>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD/Subsystem/Compare To Constant6'
 * '<S413>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD/Subsystem/Compare To Constant7'
 * '<S414>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD/Subsystem/Compare To Constant8'
 * '<S415>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD/Subsystem/Subsystem'
 * '<S416>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD/Subsystem/Subsystem1'
 * '<S417>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD/Subsystem/Subsystem2'
 * '<S418>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD/Subsystem/Subsystem3'
 * '<S419>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD/Subsystem/Subsystem/Compare To Constant'
 * '<S420>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD/Subsystem/Subsystem/Compare To Constant1'
 * '<S421>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD/Subsystem/Subsystem/Compare To Constant2'
 * '<S422>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD/Subsystem/Subsystem/Compare To Constant3'
 * '<S423>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD/Subsystem/Subsystem/Enabled Subsystem'
 * '<S424>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD/Subsystem/Subsystem/Enabled Subsystem1'
 * '<S425>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD/Subsystem/Subsystem1/Compare To Constant'
 * '<S426>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD/Subsystem/Subsystem1/Compare To Constant1'
 * '<S427>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD/Subsystem/Subsystem1/Compare To Constant2'
 * '<S428>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD/Subsystem/Subsystem1/Compare To Constant3'
 * '<S429>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD/Subsystem/Subsystem1/Enabled Subsystem'
 * '<S430>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD/Subsystem/Subsystem1/Enabled Subsystem1'
 * '<S431>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD/Subsystem/Subsystem2/Compare To Constant'
 * '<S432>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD/Subsystem/Subsystem2/Compare To Constant1'
 * '<S433>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD/Subsystem/Subsystem2/Compare To Constant2'
 * '<S434>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD/Subsystem/Subsystem2/Compare To Constant3'
 * '<S435>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD/Subsystem/Subsystem2/Enabled Subsystem'
 * '<S436>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD/Subsystem/Subsystem2/Enabled Subsystem1'
 * '<S437>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD/Subsystem/Subsystem3/Compare To Constant10'
 * '<S438>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD/Subsystem1/Compare To Constant'
 * '<S439>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD/Subsystem1/Compare To Constant1'
 * '<S440>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD/Subsystem1/Compare To Constant10'
 * '<S441>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD/Subsystem1/Compare To Constant11'
 * '<S442>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD/Subsystem1/Compare To Constant12'
 * '<S443>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD/Subsystem1/Compare To Constant13'
 * '<S444>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD/Subsystem1/Compare To Constant14'
 * '<S445>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD/Subsystem1/Compare To Constant15'
 * '<S446>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD/Subsystem1/Compare To Constant16'
 * '<S447>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD/Subsystem1/Compare To Constant17'
 * '<S448>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD/Subsystem1/Compare To Constant18'
 * '<S449>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD/Subsystem1/Compare To Constant19'
 * '<S450>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD/Subsystem1/Compare To Constant2'
 * '<S451>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD/Subsystem1/Compare To Constant20'
 * '<S452>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD/Subsystem1/Compare To Constant21'
 * '<S453>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD/Subsystem1/Compare To Constant22'
 * '<S454>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD/Subsystem1/Compare To Constant23'
 * '<S455>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD/Subsystem1/Compare To Constant3'
 * '<S456>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD/Subsystem1/Compare To Constant4'
 * '<S457>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD/Subsystem1/Compare To Constant5'
 * '<S458>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD/Subsystem1/Compare To Constant6'
 * '<S459>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD/Subsystem1/Compare To Constant7'
 * '<S460>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD/Subsystem1/Compare To Constant8'
 * '<S461>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD/Subsystem1/Compare To Constant9'
 * '<S462>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD/Subsystem1/Enabled Subsystem'
 * '<S463>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD/Subsystem1/Enabled Subsystem1'
 * '<S464>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD/Subsystem1/Enabled Subsystem10'
 * '<S465>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD/Subsystem1/Enabled Subsystem11'
 * '<S466>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD/Subsystem1/Enabled Subsystem12'
 * '<S467>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD/Subsystem1/Enabled Subsystem13'
 * '<S468>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD/Subsystem1/Enabled Subsystem14'
 * '<S469>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD/Subsystem1/Enabled Subsystem15'
 * '<S470>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD/Subsystem1/Enabled Subsystem2'
 * '<S471>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD/Subsystem1/Enabled Subsystem3'
 * '<S472>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD/Subsystem1/Enabled Subsystem4'
 * '<S473>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD/Subsystem1/Enabled Subsystem5'
 * '<S474>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD/Subsystem1/Enabled Subsystem6'
 * '<S475>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD/Subsystem1/Enabled Subsystem7'
 * '<S476>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD/Subsystem1/Enabled Subsystem8'
 * '<S477>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD/Subsystem1/Enabled Subsystem9'
 * '<S478>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD/Subsystem2/Chart'
 * '<S479>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD/Subsystem3/Chart'
 * '<S480>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD/Subsystem3/Chart1'
 * '<S481>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD/Subsystem4/Compare To Constant'
 * '<S482>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD/Subsystem4/Quanter'
 * '<S483>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD/Subsystem4/Saturation Dynamic'
 * '<S484>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD/Subsystem4/Subsystem'
 * '<S485>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD/Subsystem5/Compare To Constant'
 * '<S486>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD/Subsystem5/Quanter'
 * '<S487>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD/Subsystem5/Saturation Dynamic'
 * '<S488>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD/Subsystem5/Subsystem'
 * '<S489>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD/Subsystem6/Compare To Constant'
 * '<S490>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD/Subsystem6/Quanter'
 * '<S491>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD/Subsystem6/Saturation Dynamic'
 * '<S492>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD/Subsystem6/Subsystem'
 * '<S493>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD/Subsystem7/Compare To Constant'
 * '<S494>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD/Subsystem7/Quanter'
 * '<S495>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD/Subsystem7/Saturation Dynamic'
 * '<S496>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FD/Subsystem7/Subsystem'
 * '<S497>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FP/Chart'
 * '<S498>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FP/Subsystem'
 * '<S499>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FP/Subsystem1'
 * '<S500>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FP/Subsystem2'
 * '<S501>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FP/Subsystem3'
 * '<S502>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FP/Subsystem4'
 * '<S503>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FP/Subsystem5'
 * '<S504>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FP/Subsystem/Compare To Constant'
 * '<S505>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FP/Subsystem/Compare To Constant1'
 * '<S506>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FP/Subsystem/Compare To Constant2'
 * '<S507>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FP/Subsystem/Compare To Constant3'
 * '<S508>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FP/Subsystem/Compare To Constant4'
 * '<S509>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FP/Subsystem/Compare To Constant5'
 * '<S510>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FP/Subsystem/Subsystem'
 * '<S511>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FP/Subsystem/Subsystem1'
 * '<S512>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FP/Subsystem/Subsystem/Compare To Constant'
 * '<S513>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FP/Subsystem/Subsystem/Compare To Constant1'
 * '<S514>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FP/Subsystem/Subsystem/Compare To Constant3'
 * '<S515>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FP/Subsystem/Subsystem/Enabled Subsystem'
 * '<S516>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FP/Subsystem/Subsystem/Enabled Subsystem1'
 * '<S517>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FP/Subsystem/Subsystem1/Compare To Constant'
 * '<S518>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FP/Subsystem/Subsystem1/Compare To Constant1'
 * '<S519>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FP/Subsystem/Subsystem1/Compare To Constant3'
 * '<S520>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FP/Subsystem/Subsystem1/Enabled Subsystem'
 * '<S521>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FP/Subsystem/Subsystem1/Enabled Subsystem1'
 * '<S522>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FP/Subsystem1/Compare To Constant'
 * '<S523>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FP/Subsystem1/Compare To Constant1'
 * '<S524>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FP/Subsystem1/Compare To Constant16'
 * '<S525>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FP/Subsystem1/Compare To Constant17'
 * '<S526>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FP/Subsystem1/Compare To Constant18'
 * '<S527>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FP/Subsystem1/Compare To Constant19'
 * '<S528>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FP/Subsystem1/Compare To Constant2'
 * '<S529>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FP/Subsystem1/Compare To Constant20'
 * '<S530>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FP/Subsystem1/Compare To Constant21'
 * '<S531>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FP/Subsystem1/Compare To Constant22'
 * '<S532>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FP/Subsystem1/Compare To Constant23'
 * '<S533>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FP/Subsystem1/Compare To Constant3'
 * '<S534>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FP/Subsystem1/Compare To Constant5'
 * '<S535>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FP/Subsystem1/Compare To Constant6'
 * '<S536>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FP/Subsystem1/Compare To Constant8'
 * '<S537>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FP/Subsystem1/Compare To Constant9'
 * '<S538>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FP/Subsystem1/Enabled Subsystem'
 * '<S539>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FP/Subsystem1/Enabled Subsystem1'
 * '<S540>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FP/Subsystem1/Enabled Subsystem12'
 * '<S541>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FP/Subsystem1/Enabled Subsystem13'
 * '<S542>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FP/Subsystem1/Enabled Subsystem14'
 * '<S543>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FP/Subsystem1/Enabled Subsystem15'
 * '<S544>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FP/Subsystem1/Enabled Subsystem2'
 * '<S545>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FP/Subsystem1/Enabled Subsystem3'
 * '<S546>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FP/Subsystem1/Enabled Subsystem5'
 * '<S547>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FP/Subsystem1/Enabled Subsystem6'
 * '<S548>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FP/Subsystem1/Enabled Subsystem8'
 * '<S549>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FP/Subsystem1/Enabled Subsystem9'
 * '<S550>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FP/Subsystem2/Chart'
 * '<S551>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FP/Subsystem3/Chart'
 * '<S552>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FP/Subsystem3/Chart1'
 * '<S553>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FP/Subsystem4/Compare To Constant'
 * '<S554>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FP/Subsystem4/Quanter'
 * '<S555>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FP/Subsystem4/Saturation Dynamic'
 * '<S556>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FP/Subsystem4/Subsystem'
 * '<S557>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FP/Subsystem5/Compare To Constant'
 * '<S558>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FP/Subsystem5/Quanter'
 * '<S559>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FP/Subsystem5/Saturation Dynamic'
 * '<S560>' : 'Thermal_Cabin/All_CCU_Logic/CADC/FP/Subsystem5/Subsystem'
 * '<S561>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SD/Chart'
 * '<S562>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SD/Subsystem'
 * '<S563>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SD/Subsystem1'
 * '<S564>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SD/Subsystem2'
 * '<S565>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SD/Subsystem3'
 * '<S566>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SD/Subsystem4'
 * '<S567>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SD/Subsystem/Compare To Constant'
 * '<S568>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SD/Subsystem/Compare To Constant1'
 * '<S569>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SD/Subsystem/Compare To Constant2'
 * '<S570>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SD/Subsystem/Compare To Constant3'
 * '<S571>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SD/Subsystem/Compare To Constant4'
 * '<S572>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SD/Subsystem/Compare To Constant5'
 * '<S573>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SD/Subsystem/Subsystem'
 * '<S574>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SD/Subsystem/Subsystem1'
 * '<S575>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SD/Subsystem/Subsystem/Compare To Constant'
 * '<S576>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SD/Subsystem/Subsystem/Compare To Constant1'
 * '<S577>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SD/Subsystem/Subsystem/Compare To Constant2'
 * '<S578>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SD/Subsystem/Subsystem/Compare To Constant3'
 * '<S579>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SD/Subsystem/Subsystem/Enabled Subsystem'
 * '<S580>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SD/Subsystem/Subsystem/Enabled Subsystem1'
 * '<S581>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SD/Subsystem/Subsystem1/Compare To Constant'
 * '<S582>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SD/Subsystem/Subsystem1/Compare To Constant1'
 * '<S583>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SD/Subsystem/Subsystem1/Compare To Constant2'
 * '<S584>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SD/Subsystem/Subsystem1/Compare To Constant3'
 * '<S585>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SD/Subsystem/Subsystem1/Enabled Subsystem'
 * '<S586>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SD/Subsystem/Subsystem1/Enabled Subsystem1'
 * '<S587>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SD/Subsystem1/Compare To Constant'
 * '<S588>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SD/Subsystem1/Compare To Constant1'
 * '<S589>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SD/Subsystem1/Compare To Constant17'
 * '<S590>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SD/Subsystem1/Compare To Constant18'
 * '<S591>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SD/Subsystem1/Compare To Constant19'
 * '<S592>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SD/Subsystem1/Compare To Constant2'
 * '<S593>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SD/Subsystem1/Compare To Constant21'
 * '<S594>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SD/Subsystem1/Compare To Constant22'
 * '<S595>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SD/Subsystem1/Compare To Constant23'
 * '<S596>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SD/Subsystem1/Compare To Constant3'
 * '<S597>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SD/Subsystem1/Compare To Constant5'
 * '<S598>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SD/Subsystem1/Compare To Constant6'
 * '<S599>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SD/Subsystem1/Enabled Subsystem'
 * '<S600>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SD/Subsystem1/Enabled Subsystem1'
 * '<S601>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SD/Subsystem1/Enabled Subsystem13'
 * '<S602>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SD/Subsystem1/Enabled Subsystem15'
 * '<S603>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SD/Subsystem1/Enabled Subsystem2'
 * '<S604>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SD/Subsystem1/Enabled Subsystem3'
 * '<S605>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SD/Subsystem1/Enabled Subsystem5'
 * '<S606>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SD/Subsystem1/Enabled Subsystem6'
 * '<S607>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SD/Subsystem2/Compare To Constant'
 * '<S608>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SD/Subsystem2/Quanter'
 * '<S609>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SD/Subsystem2/Saturation Dynamic'
 * '<S610>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SD/Subsystem2/Subsystem'
 * '<S611>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SD/Subsystem3/Chart'
 * '<S612>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SD/Subsystem3/Chart1'
 * '<S613>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SD/Subsystem4/Compare To Constant'
 * '<S614>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SD/Subsystem4/Quanter'
 * '<S615>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SD/Subsystem4/Saturation Dynamic'
 * '<S616>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SD/Subsystem4/Subsystem'
 * '<S617>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SP/Chart'
 * '<S618>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SP/Subsystem'
 * '<S619>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SP/Subsystem1'
 * '<S620>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SP/Subsystem2'
 * '<S621>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SP/Subsystem3'
 * '<S622>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SP/Subsystem4'
 * '<S623>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SP/Subsystem/Compare To Constant'
 * '<S624>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SP/Subsystem/Compare To Constant1'
 * '<S625>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SP/Subsystem/Compare To Constant2'
 * '<S626>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SP/Subsystem/Compare To Constant3'
 * '<S627>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SP/Subsystem/Compare To Constant4'
 * '<S628>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SP/Subsystem/Compare To Constant5'
 * '<S629>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SP/Subsystem/Subsystem'
 * '<S630>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SP/Subsystem/Subsystem1'
 * '<S631>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SP/Subsystem/Subsystem/Compare To Constant'
 * '<S632>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SP/Subsystem/Subsystem/Compare To Constant1'
 * '<S633>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SP/Subsystem/Subsystem/Compare To Constant2'
 * '<S634>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SP/Subsystem/Subsystem/Compare To Constant3'
 * '<S635>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SP/Subsystem/Subsystem/Enabled Subsystem'
 * '<S636>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SP/Subsystem/Subsystem/Enabled Subsystem1'
 * '<S637>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SP/Subsystem/Subsystem1/Compare To Constant'
 * '<S638>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SP/Subsystem/Subsystem1/Compare To Constant1'
 * '<S639>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SP/Subsystem/Subsystem1/Compare To Constant2'
 * '<S640>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SP/Subsystem/Subsystem1/Compare To Constant3'
 * '<S641>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SP/Subsystem/Subsystem1/Enabled Subsystem'
 * '<S642>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SP/Subsystem/Subsystem1/Enabled Subsystem1'
 * '<S643>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SP/Subsystem1/Compare To Constant'
 * '<S644>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SP/Subsystem1/Compare To Constant1'
 * '<S645>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SP/Subsystem1/Compare To Constant16'
 * '<S646>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SP/Subsystem1/Compare To Constant17'
 * '<S647>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SP/Subsystem1/Compare To Constant18'
 * '<S648>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SP/Subsystem1/Compare To Constant19'
 * '<S649>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SP/Subsystem1/Compare To Constant2'
 * '<S650>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SP/Subsystem1/Compare To Constant20'
 * '<S651>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SP/Subsystem1/Compare To Constant21'
 * '<S652>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SP/Subsystem1/Compare To Constant22'
 * '<S653>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SP/Subsystem1/Compare To Constant23'
 * '<S654>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SP/Subsystem1/Compare To Constant3'
 * '<S655>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SP/Subsystem1/Compare To Constant5'
 * '<S656>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SP/Subsystem1/Compare To Constant6'
 * '<S657>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SP/Subsystem1/Compare To Constant8'
 * '<S658>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SP/Subsystem1/Compare To Constant9'
 * '<S659>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SP/Subsystem1/Enabled Subsystem'
 * '<S660>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SP/Subsystem1/Enabled Subsystem1'
 * '<S661>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SP/Subsystem1/Enabled Subsystem12'
 * '<S662>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SP/Subsystem1/Enabled Subsystem13'
 * '<S663>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SP/Subsystem1/Enabled Subsystem14'
 * '<S664>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SP/Subsystem1/Enabled Subsystem15'
 * '<S665>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SP/Subsystem1/Enabled Subsystem2'
 * '<S666>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SP/Subsystem1/Enabled Subsystem3'
 * '<S667>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SP/Subsystem1/Enabled Subsystem5'
 * '<S668>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SP/Subsystem1/Enabled Subsystem6'
 * '<S669>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SP/Subsystem1/Enabled Subsystem8'
 * '<S670>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SP/Subsystem1/Enabled Subsystem9'
 * '<S671>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SP/Subsystem2/Compare To Constant'
 * '<S672>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SP/Subsystem2/Quanter'
 * '<S673>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SP/Subsystem2/Saturation Dynamic'
 * '<S674>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SP/Subsystem2/Subsystem'
 * '<S675>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SP/Subsystem3/Chart'
 * '<S676>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SP/Subsystem3/Chart1'
 * '<S677>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SP/Subsystem4/Compare To Constant'
 * '<S678>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SP/Subsystem4/Quanter'
 * '<S679>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SP/Subsystem4/Saturation Dynamic'
 * '<S680>' : 'Thermal_Cabin/All_CCU_Logic/CADC/SP/Subsystem4/Subsystem'
 * '<S681>' : 'Thermal_Cabin/All_CCU_Logic/CAFC/Chart'
 * '<S682>' : 'Thermal_Cabin/All_CCU_Logic/CAFC/Chart1'
 * '<S683>' : 'Thermal_Cabin/All_CCU_Logic/CAFC/Compare To Constant2'
 * '<S684>' : 'Thermal_Cabin/All_CCU_Logic/CAFC/Compare To Constant3'
 * '<S685>' : 'Thermal_Cabin/All_CCU_Logic/CAFC/Compare To Constant4'
 * '<S686>' : 'Thermal_Cabin/All_CCU_Logic/CAFC/Compare To Constant6'
 * '<S687>' : 'Thermal_Cabin/All_CCU_Logic/CAFC/Enabled Subsystem1'
 * '<S688>' : 'Thermal_Cabin/All_CCU_Logic/CAFC/Subsystem'
 * '<S689>' : 'Thermal_Cabin/All_CCU_Logic/CAFC/Subsystem1'
 * '<S690>' : 'Thermal_Cabin/All_CCU_Logic/CAFC/Subsystem2'
 * '<S691>' : 'Thermal_Cabin/All_CCU_Logic/CAFC/Subsystem3'
 * '<S692>' : 'Thermal_Cabin/All_CCU_Logic/CAFC/Subsystem/Compare To Constant'
 * '<S693>' : 'Thermal_Cabin/All_CCU_Logic/CAFC/Subsystem/Compare To Constant1'
 * '<S694>' : 'Thermal_Cabin/All_CCU_Logic/CAFC/Subsystem/Compare To Constant2'
 * '<S695>' : 'Thermal_Cabin/All_CCU_Logic/CAFC/Subsystem/Compare To Constant3'
 * '<S696>' : 'Thermal_Cabin/All_CCU_Logic/CAFC/Subsystem/Compare To Constant4'
 * '<S697>' : 'Thermal_Cabin/All_CCU_Logic/CAFC/Subsystem/Compare To Constant8'
 * '<S698>' : 'Thermal_Cabin/All_CCU_Logic/CAFC/Subsystem/Compare To Constant9'
 * '<S699>' : 'Thermal_Cabin/All_CCU_Logic/CAFC/Subsystem/Enabled Subsystem1'
 * '<S700>' : 'Thermal_Cabin/All_CCU_Logic/CAFC/Subsystem/Enabled Subsystem2'
 * '<S701>' : 'Thermal_Cabin/All_CCU_Logic/CAFC/Subsystem/Enabled Subsystem3'
 * '<S702>' : 'Thermal_Cabin/All_CCU_Logic/CAFC/Subsystem/Enabled Subsystem4'
 * '<S703>' : 'Thermal_Cabin/All_CCU_Logic/CAFC/Subsystem/Switch Case Action Subsystem'
 * '<S704>' : 'Thermal_Cabin/All_CCU_Logic/CAFC/Subsystem/Switch Case Action Subsystem1'
 * '<S705>' : 'Thermal_Cabin/All_CCU_Logic/CAFC/Subsystem/Enabled Subsystem2/Compare To Constant'
 * '<S706>' : 'Thermal_Cabin/All_CCU_Logic/CAFC/Subsystem/Enabled Subsystem3/Compare To Constant'
 * '<S707>' : 'Thermal_Cabin/All_CCU_Logic/CAFC/Subsystem/Enabled Subsystem3/Compare To Constant1'
 * '<S708>' : 'Thermal_Cabin/All_CCU_Logic/CAFC/Subsystem/Enabled Subsystem3/Compare To Constant2'
 * '<S709>' : 'Thermal_Cabin/All_CCU_Logic/CAFC/Subsystem/Switch Case Action Subsystem1/Compare To Constant5'
 * '<S710>' : 'Thermal_Cabin/All_CCU_Logic/CAFC/Subsystem/Switch Case Action Subsystem1/Compare To Constant6'
 * '<S711>' : 'Thermal_Cabin/All_CCU_Logic/CAFC/Subsystem/Switch Case Action Subsystem1/Compare To Constant7'
 * '<S712>' : 'Thermal_Cabin/All_CCU_Logic/CAFC/Subsystem1/Compare To Constant'
 * '<S713>' : 'Thermal_Cabin/All_CCU_Logic/CAFC/Subsystem1/Compare To Constant1'
 * '<S714>' : 'Thermal_Cabin/All_CCU_Logic/CAFC/Subsystem1/Compare To Constant2'
 * '<S715>' : 'Thermal_Cabin/All_CCU_Logic/CAFC/Subsystem1/Subsystem'
 * '<S716>' : 'Thermal_Cabin/All_CCU_Logic/CAFC/Subsystem1/Subsystem/Subsystem'
 * '<S717>' : 'Thermal_Cabin/All_CCU_Logic/CAFC/Subsystem2/Chart'
 * '<S718>' : 'Thermal_Cabin/All_CCU_Logic/CAFC/Subsystem2/Compare To Constant'
 * '<S719>' : 'Thermal_Cabin/All_CCU_Logic/CAFC/Subsystem2/Compare To Constant1'
 * '<S720>' : 'Thermal_Cabin/All_CCU_Logic/CAFC/Subsystem3/Compare To Constant'
 * '<S721>' : 'Thermal_Cabin/All_CCU_Logic/CAFC/Subsystem3/Compare To Constant1'
 * '<S722>' : 'Thermal_Cabin/All_CCU_Logic/CHFC/FDH'
 * '<S723>' : 'Thermal_Cabin/All_CCU_Logic/CHFC/FPH'
 * '<S724>' : 'Thermal_Cabin/All_CCU_Logic/CHFC/SDH'
 * '<S725>' : 'Thermal_Cabin/All_CCU_Logic/CHFC/SPH'
 * '<S726>' : 'Thermal_Cabin/All_CCU_Logic/CHFC/FDH/Chart'
 * '<S727>' : 'Thermal_Cabin/All_CCU_Logic/CHFC/FDH/Subsystem2'
 * '<S728>' : 'Thermal_Cabin/All_CCU_Logic/CHFC/FDH/Subsystem2/Subsystem1'
 * '<S729>' : 'Thermal_Cabin/All_CCU_Logic/CHFC/FDH/Subsystem2/Subsystem4'
 * '<S730>' : 'Thermal_Cabin/All_CCU_Logic/CHFC/FDH/Subsystem2/Subsystem1/Switch Case Action Subsystem'
 * '<S731>' : 'Thermal_Cabin/All_CCU_Logic/CHFC/FDH/Subsystem2/Subsystem1/Switch Case Action Subsystem1'
 * '<S732>' : 'Thermal_Cabin/All_CCU_Logic/CHFC/FDH/Subsystem2/Subsystem1/Switch Case Action Subsystem2'
 * '<S733>' : 'Thermal_Cabin/All_CCU_Logic/CHFC/FDH/Subsystem2/Subsystem4/Compare To Constant'
 * '<S734>' : 'Thermal_Cabin/All_CCU_Logic/CHFC/FDH/Subsystem2/Subsystem4/Quanter'
 * '<S735>' : 'Thermal_Cabin/All_CCU_Logic/CHFC/FDH/Subsystem2/Subsystem4/Saturation Dynamic'
 * '<S736>' : 'Thermal_Cabin/All_CCU_Logic/CHFC/FDH/Subsystem2/Subsystem4/Subsystem'
 * '<S737>' : 'Thermal_Cabin/All_CCU_Logic/CHFC/FPH/Chart'
 * '<S738>' : 'Thermal_Cabin/All_CCU_Logic/CHFC/FPH/Subsystem2'
 * '<S739>' : 'Thermal_Cabin/All_CCU_Logic/CHFC/FPH/Subsystem2/Subsystem1'
 * '<S740>' : 'Thermal_Cabin/All_CCU_Logic/CHFC/FPH/Subsystem2/Subsystem4'
 * '<S741>' : 'Thermal_Cabin/All_CCU_Logic/CHFC/FPH/Subsystem2/Subsystem1/Switch Case Action Subsystem'
 * '<S742>' : 'Thermal_Cabin/All_CCU_Logic/CHFC/FPH/Subsystem2/Subsystem1/Switch Case Action Subsystem1'
 * '<S743>' : 'Thermal_Cabin/All_CCU_Logic/CHFC/FPH/Subsystem2/Subsystem1/Switch Case Action Subsystem2'
 * '<S744>' : 'Thermal_Cabin/All_CCU_Logic/CHFC/FPH/Subsystem2/Subsystem4/Compare To Constant'
 * '<S745>' : 'Thermal_Cabin/All_CCU_Logic/CHFC/FPH/Subsystem2/Subsystem4/Quanter'
 * '<S746>' : 'Thermal_Cabin/All_CCU_Logic/CHFC/FPH/Subsystem2/Subsystem4/Saturation Dynamic'
 * '<S747>' : 'Thermal_Cabin/All_CCU_Logic/CHFC/FPH/Subsystem2/Subsystem4/Subsystem'
 * '<S748>' : 'Thermal_Cabin/All_CCU_Logic/CHFC/SDH/Chart'
 * '<S749>' : 'Thermal_Cabin/All_CCU_Logic/CHFC/SDH/Subsystem2'
 * '<S750>' : 'Thermal_Cabin/All_CCU_Logic/CHFC/SDH/Subsystem2/Subsystem1'
 * '<S751>' : 'Thermal_Cabin/All_CCU_Logic/CHFC/SDH/Subsystem2/Subsystem4'
 * '<S752>' : 'Thermal_Cabin/All_CCU_Logic/CHFC/SDH/Subsystem2/Subsystem1/Switch Case Action Subsystem'
 * '<S753>' : 'Thermal_Cabin/All_CCU_Logic/CHFC/SDH/Subsystem2/Subsystem1/Switch Case Action Subsystem1'
 * '<S754>' : 'Thermal_Cabin/All_CCU_Logic/CHFC/SDH/Subsystem2/Subsystem1/Switch Case Action Subsystem2'
 * '<S755>' : 'Thermal_Cabin/All_CCU_Logic/CHFC/SDH/Subsystem2/Subsystem4/Compare To Constant'
 * '<S756>' : 'Thermal_Cabin/All_CCU_Logic/CHFC/SDH/Subsystem2/Subsystem4/Quanter'
 * '<S757>' : 'Thermal_Cabin/All_CCU_Logic/CHFC/SDH/Subsystem2/Subsystem4/Saturation Dynamic'
 * '<S758>' : 'Thermal_Cabin/All_CCU_Logic/CHFC/SDH/Subsystem2/Subsystem4/Subsystem'
 * '<S759>' : 'Thermal_Cabin/All_CCU_Logic/CHFC/SPH/Chart'
 * '<S760>' : 'Thermal_Cabin/All_CCU_Logic/CHFC/SPH/Subsystem2'
 * '<S761>' : 'Thermal_Cabin/All_CCU_Logic/CHFC/SPH/Subsystem2/Subsystem1'
 * '<S762>' : 'Thermal_Cabin/All_CCU_Logic/CHFC/SPH/Subsystem2/Subsystem4'
 * '<S763>' : 'Thermal_Cabin/All_CCU_Logic/CHFC/SPH/Subsystem2/Subsystem1/Switch Case Action Subsystem'
 * '<S764>' : 'Thermal_Cabin/All_CCU_Logic/CHFC/SPH/Subsystem2/Subsystem1/Switch Case Action Subsystem1'
 * '<S765>' : 'Thermal_Cabin/All_CCU_Logic/CHFC/SPH/Subsystem2/Subsystem1/Switch Case Action Subsystem2'
 * '<S766>' : 'Thermal_Cabin/All_CCU_Logic/CHFC/SPH/Subsystem2/Subsystem4/Compare To Constant'
 * '<S767>' : 'Thermal_Cabin/All_CCU_Logic/CHFC/SPH/Subsystem2/Subsystem4/Quanter'
 * '<S768>' : 'Thermal_Cabin/All_CCU_Logic/CHFC/SPH/Subsystem2/Subsystem4/Saturation Dynamic'
 * '<S769>' : 'Thermal_Cabin/All_CCU_Logic/CHFC/SPH/Subsystem2/Subsystem4/Subsystem'
 * '<S770>' : 'Thermal_Cabin/All_CCU_Logic/CHMI/Compare To Constant'
 * '<S771>' : 'Thermal_Cabin/All_CCU_Logic/CHMI/Compare To Constant1'
 * '<S772>' : 'Thermal_Cabin/All_CCU_Logic/CHMI/Compare To Constant10'
 * '<S773>' : 'Thermal_Cabin/All_CCU_Logic/CHMI/Compare To Constant11'
 * '<S774>' : 'Thermal_Cabin/All_CCU_Logic/CHMI/Compare To Constant12'
 * '<S775>' : 'Thermal_Cabin/All_CCU_Logic/CHMI/Compare To Constant13'
 * '<S776>' : 'Thermal_Cabin/All_CCU_Logic/CHMI/Compare To Constant14'
 * '<S777>' : 'Thermal_Cabin/All_CCU_Logic/CHMI/Compare To Constant17'
 * '<S778>' : 'Thermal_Cabin/All_CCU_Logic/CHMI/Compare To Constant18'
 * '<S779>' : 'Thermal_Cabin/All_CCU_Logic/CHMI/Compare To Constant2'
 * '<S780>' : 'Thermal_Cabin/All_CCU_Logic/CHMI/Compare To Constant22'
 * '<S781>' : 'Thermal_Cabin/All_CCU_Logic/CHMI/Compare To Constant24'
 * '<S782>' : 'Thermal_Cabin/All_CCU_Logic/CHMI/Compare To Constant25'
 * '<S783>' : 'Thermal_Cabin/All_CCU_Logic/CHMI/Compare To Constant26'
 * '<S784>' : 'Thermal_Cabin/All_CCU_Logic/CHMI/Compare To Constant27'
 * '<S785>' : 'Thermal_Cabin/All_CCU_Logic/CHMI/Compare To Constant28'
 * '<S786>' : 'Thermal_Cabin/All_CCU_Logic/CHMI/Compare To Constant29'
 * '<S787>' : 'Thermal_Cabin/All_CCU_Logic/CHMI/Compare To Constant3'
 * '<S788>' : 'Thermal_Cabin/All_CCU_Logic/CHMI/Compare To Constant30'
 * '<S789>' : 'Thermal_Cabin/All_CCU_Logic/CHMI/Compare To Constant31'
 * '<S790>' : 'Thermal_Cabin/All_CCU_Logic/CHMI/Compare To Constant32'
 * '<S791>' : 'Thermal_Cabin/All_CCU_Logic/CHMI/Compare To Constant33'
 * '<S792>' : 'Thermal_Cabin/All_CCU_Logic/CHMI/Compare To Constant34'
 * '<S793>' : 'Thermal_Cabin/All_CCU_Logic/CHMI/Compare To Constant35'
 * '<S794>' : 'Thermal_Cabin/All_CCU_Logic/CHMI/Compare To Constant36'
 * '<S795>' : 'Thermal_Cabin/All_CCU_Logic/CHMI/Compare To Constant37'
 * '<S796>' : 'Thermal_Cabin/All_CCU_Logic/CHMI/Compare To Constant38'
 * '<S797>' : 'Thermal_Cabin/All_CCU_Logic/CHMI/Compare To Constant39'
 * '<S798>' : 'Thermal_Cabin/All_CCU_Logic/CHMI/Compare To Constant4'
 * '<S799>' : 'Thermal_Cabin/All_CCU_Logic/CHMI/Compare To Constant40'
 * '<S800>' : 'Thermal_Cabin/All_CCU_Logic/CHMI/Compare To Constant41'
 * '<S801>' : 'Thermal_Cabin/All_CCU_Logic/CHMI/Compare To Constant42'
 * '<S802>' : 'Thermal_Cabin/All_CCU_Logic/CHMI/Compare To Constant43'
 * '<S803>' : 'Thermal_Cabin/All_CCU_Logic/CHMI/Compare To Constant44'
 * '<S804>' : 'Thermal_Cabin/All_CCU_Logic/CHMI/Compare To Constant45'
 * '<S805>' : 'Thermal_Cabin/All_CCU_Logic/CHMI/Compare To Constant46'
 * '<S806>' : 'Thermal_Cabin/All_CCU_Logic/CHMI/Compare To Constant47'
 * '<S807>' : 'Thermal_Cabin/All_CCU_Logic/CHMI/Compare To Constant5'
 * '<S808>' : 'Thermal_Cabin/All_CCU_Logic/CHMI/Compare To Constant6'
 * '<S809>' : 'Thermal_Cabin/All_CCU_Logic/CHMI/Compare To Constant7'
 * '<S810>' : 'Thermal_Cabin/All_CCU_Logic/CHMI/Compare To Constant8'
 * '<S811>' : 'Thermal_Cabin/All_CCU_Logic/CHMI/Compare To Constant9'
 * '<S812>' : 'Thermal_Cabin/All_CCU_Logic/CHMI/HMIDetect'
 * '<S813>' : 'Thermal_Cabin/All_CCU_Logic/CREC/Chart'
 * '<S814>' : 'Thermal_Cabin/All_CCU_Logic/CREC/Chart1'
 * '<S815>' : 'Thermal_Cabin/All_CCU_Logic/CREC/Subsystem'
 * '<S816>' : 'Thermal_Cabin/All_CCU_Logic/CREC/Subsystem1'
 * '<S817>' : 'Thermal_Cabin/All_CCU_Logic/CREC/Subsystem2'
 * '<S818>' : 'Thermal_Cabin/All_CCU_Logic/CREC/Subsystem/Compare To Constant'
 * '<S819>' : 'Thermal_Cabin/All_CCU_Logic/CREC/Subsystem/Compare To Constant1'
 * '<S820>' : 'Thermal_Cabin/All_CCU_Logic/CREC/Subsystem/Compare To Constant2'
 * '<S821>' : 'Thermal_Cabin/All_CCU_Logic/CREC/Subsystem/Compare To Constant3'
 * '<S822>' : 'Thermal_Cabin/All_CCU_Logic/CREC/Subsystem/Compare To Constant4'
 * '<S823>' : 'Thermal_Cabin/All_CCU_Logic/CREC/Subsystem/Compare To Constant5'
 * '<S824>' : 'Thermal_Cabin/All_CCU_Logic/CREC/Subsystem/Compare To Constant6'
 * '<S825>' : 'Thermal_Cabin/All_CCU_Logic/CREC/Subsystem/Enabled Subsystem'
 * '<S826>' : 'Thermal_Cabin/All_CCU_Logic/CREC/Subsystem/Enabled Subsystem1'
 * '<S827>' : 'Thermal_Cabin/All_CCU_Logic/CREC/Subsystem/Enabled Subsystem2'
 * '<S828>' : 'Thermal_Cabin/All_CCU_Logic/CREC/Subsystem/Enabled Subsystem/Compare To Constant'
 * '<S829>' : 'Thermal_Cabin/All_CCU_Logic/CREC/Subsystem/Enabled Subsystem1/Compare To Constant12'
 * '<S830>' : 'Thermal_Cabin/All_CCU_Logic/CREC/Subsystem/Enabled Subsystem1/Compare To Constant15'
 * '<S831>' : 'Thermal_Cabin/All_CCU_Logic/CREC/Subsystem/Enabled Subsystem1/Compare To Constant16'
 * '<S832>' : 'Thermal_Cabin/All_CCU_Logic/CREC/Subsystem/Enabled Subsystem1/Compare To Constant2'
 * '<S833>' : 'Thermal_Cabin/All_CCU_Logic/CREC/Subsystem/Enabled Subsystem1/Compare To Constant3'
 * '<S834>' : 'Thermal_Cabin/All_CCU_Logic/CREC/Subsystem/Enabled Subsystem1/Compare To Constant7'
 * '<S835>' : 'Thermal_Cabin/All_CCU_Logic/CREC/Subsystem/Enabled Subsystem2/Compare To Constant12'
 * '<S836>' : 'Thermal_Cabin/All_CCU_Logic/CREC/Subsystem/Enabled Subsystem2/Compare To Constant15'
 * '<S837>' : 'Thermal_Cabin/All_CCU_Logic/CREC/Subsystem/Enabled Subsystem2/Compare To Constant16'
 * '<S838>' : 'Thermal_Cabin/All_CCU_Logic/CREC/Subsystem/Enabled Subsystem2/Compare To Constant2'
 * '<S839>' : 'Thermal_Cabin/All_CCU_Logic/CREC/Subsystem/Enabled Subsystem2/Compare To Constant3'
 * '<S840>' : 'Thermal_Cabin/All_CCU_Logic/CREC/Subsystem/Enabled Subsystem2/Compare To Constant7'
 * '<S841>' : 'Thermal_Cabin/All_CCU_Logic/CREC/Subsystem1/Subsystem'
 * '<S842>' : 'Thermal_Cabin/All_CCU_Logic/CREC/Subsystem1/Subsystem1'
 * '<S843>' : 'Thermal_Cabin/All_CCU_Logic/CREC/Subsystem1/Subsystem/Compare To Constant'
 * '<S844>' : 'Thermal_Cabin/All_CCU_Logic/CREC/Subsystem1/Subsystem/Compare To Constant1'
 * '<S845>' : 'Thermal_Cabin/All_CCU_Logic/CREC/Subsystem1/Subsystem/Enabled Subsystem'
 * '<S846>' : 'Thermal_Cabin/All_CCU_Logic/CREC/Subsystem1/Subsystem/Enabled Subsystem1'
 * '<S847>' : 'Thermal_Cabin/All_CCU_Logic/CREC/Subsystem1/Subsystem1/Compare To Constant20'
 * '<S848>' : 'Thermal_Cabin/All_CCU_Logic/CREC/Subsystem1/Subsystem1/Compare To Constant21'
 * '<S849>' : 'Thermal_Cabin/All_CCU_Logic/CREC/Subsystem1/Subsystem1/Compare To Constant23'
 * '<S850>' : 'Thermal_Cabin/All_CCU_Logic/CREC/Subsystem1/Subsystem1/Compare To Constant24'
 * '<S851>' : 'Thermal_Cabin/All_CCU_Logic/CREC/Subsystem2/Chart'
 * '<S852>' : 'Thermal_Cabin/All_CCU_Logic/CREC/Subsystem2/Chart4'
 * '<S853>' : 'Thermal_Cabin/All_CCU_Logic/CREC/Subsystem2/Chart6'
 * '<S854>' : 'Thermal_Cabin/All_CCU_Logic/CREC/Subsystem2/Subsystem1'
 * '<S855>' : 'Thermal_Cabin/All_CCU_Logic/CREC/Subsystem2/Subsystem4'
 * '<S856>' : 'Thermal_Cabin/All_CCU_Logic/CREC/Subsystem2/Subsystem1/Compare To Constant'
 * '<S857>' : 'Thermal_Cabin/All_CCU_Logic/CREC/Subsystem2/Subsystem1/Quanter'
 * '<S858>' : 'Thermal_Cabin/All_CCU_Logic/CREC/Subsystem2/Subsystem1/Saturation Dynamic'
 * '<S859>' : 'Thermal_Cabin/All_CCU_Logic/CREC/Subsystem2/Subsystem1/Subsystem'
 * '<S860>' : 'Thermal_Cabin/All_CCU_Logic/CREC/Subsystem2/Subsystem4/Compare To Constant'
 * '<S861>' : 'Thermal_Cabin/All_CCU_Logic/CREC/Subsystem2/Subsystem4/Quanter'
 * '<S862>' : 'Thermal_Cabin/All_CCU_Logic/CREC/Subsystem2/Subsystem4/Saturation Dynamic'
 * '<S863>' : 'Thermal_Cabin/All_CCU_Logic/CREC/Subsystem2/Subsystem4/Subsystem'
 * '<S864>' : 'Thermal_Cabin/All_CCU_Logic/CSCC/Compare To Constant4'
 * '<S865>' : 'Thermal_Cabin/All_CCU_Logic/CSCC/Compare To Constant5'
 * '<S866>' : 'Thermal_Cabin/All_CCU_Logic/CSCC/Compare To Constant6'
 * '<S867>' : 'Thermal_Cabin/All_CCU_Logic/CSCC/Compare To Constant7'
 * '<S868>' : 'Thermal_Cabin/All_CCU_Logic/CSCC/Subsystem1'
 * '<S869>' : 'Thermal_Cabin/All_CCU_Logic/CSCC/Subsystem2'
 * '<S870>' : 'Thermal_Cabin/All_CCU_Logic/CSCC/Subsystem3'
 * '<S871>' : 'Thermal_Cabin/All_CCU_Logic/CSCC/Subsystem4'
 * '<S872>' : 'Thermal_Cabin/All_CCU_Logic/CSCC/Subsystem1/Compare To Constant'
 * '<S873>' : 'Thermal_Cabin/All_CCU_Logic/CSCC/Subsystem1/Compare To Constant1'
 * '<S874>' : 'Thermal_Cabin/All_CCU_Logic/CSCC/Subsystem1/Compare To Constant2'
 * '<S875>' : 'Thermal_Cabin/All_CCU_Logic/CSCC/Subsystem1/Compare To Constant3'
 * '<S876>' : 'Thermal_Cabin/All_CCU_Logic/CSCC/Subsystem1/Compare To Constant4'
 * '<S877>' : 'Thermal_Cabin/All_CCU_Logic/CSCC/Subsystem1/Compare To Constant5'
 * '<S878>' : 'Thermal_Cabin/All_CCU_Logic/CSCC/Subsystem1/Compare To Constant6'
 * '<S879>' : 'Thermal_Cabin/All_CCU_Logic/CSCC/Subsystem1/Compare To Constant7'
 * '<S880>' : 'Thermal_Cabin/All_CCU_Logic/CSCC/Subsystem1/Subsystem'
 * '<S881>' : 'Thermal_Cabin/All_CCU_Logic/CSCC/Subsystem1/Subsystem1'
 * '<S882>' : 'Thermal_Cabin/All_CCU_Logic/CSCC/Subsystem1/Subsystem2'
 * '<S883>' : 'Thermal_Cabin/All_CCU_Logic/CSCC/Subsystem2/Compare To Constant'
 * '<S884>' : 'Thermal_Cabin/All_CCU_Logic/CSCC/Subsystem2/Compare To Constant1'
 * '<S885>' : 'Thermal_Cabin/All_CCU_Logic/CSCC/Subsystem2/Compare To Constant2'
 * '<S886>' : 'Thermal_Cabin/All_CCU_Logic/CSCC/Subsystem2/Compare To Constant3'
 * '<S887>' : 'Thermal_Cabin/All_CCU_Logic/CSCC/Subsystem2/Compare To Constant4'
 * '<S888>' : 'Thermal_Cabin/All_CCU_Logic/CSCC/Subsystem2/Compare To Constant5'
 * '<S889>' : 'Thermal_Cabin/All_CCU_Logic/CSCC/Subsystem2/Compare To Constant6'
 * '<S890>' : 'Thermal_Cabin/All_CCU_Logic/CSCC/Subsystem2/Compare To Constant7'
 * '<S891>' : 'Thermal_Cabin/All_CCU_Logic/CSCC/Subsystem2/Subsystem3'
 * '<S892>' : 'Thermal_Cabin/All_CCU_Logic/CSCC/Subsystem2/Subsystem4'
 * '<S893>' : 'Thermal_Cabin/All_CCU_Logic/CSCC/Subsystem2/Subsystem5'
 * '<S894>' : 'Thermal_Cabin/All_CCU_Logic/CSCC/Subsystem3/Compare To Constant'
 * '<S895>' : 'Thermal_Cabin/All_CCU_Logic/CSCC/Subsystem3/Compare To Constant1'
 * '<S896>' : 'Thermal_Cabin/All_CCU_Logic/CSCC/Subsystem3/Compare To Constant2'
 * '<S897>' : 'Thermal_Cabin/All_CCU_Logic/CSCC/Subsystem3/Compare To Constant3'
 * '<S898>' : 'Thermal_Cabin/All_CCU_Logic/CSCC/Subsystem3/Compare To Constant4'
 * '<S899>' : 'Thermal_Cabin/All_CCU_Logic/CSCC/Subsystem3/Compare To Constant5'
 * '<S900>' : 'Thermal_Cabin/All_CCU_Logic/CSCC/Subsystem3/Compare To Constant6'
 * '<S901>' : 'Thermal_Cabin/All_CCU_Logic/CSCC/Subsystem3/Compare To Constant7'
 * '<S902>' : 'Thermal_Cabin/All_CCU_Logic/CSCC/Subsystem3/Subsystem'
 * '<S903>' : 'Thermal_Cabin/All_CCU_Logic/CSCC/Subsystem3/Subsystem1'
 * '<S904>' : 'Thermal_Cabin/All_CCU_Logic/CSCC/Subsystem3/Subsystem2'
 * '<S905>' : 'Thermal_Cabin/All_CCU_Logic/CSCC/Subsystem4/Compare To Constant'
 * '<S906>' : 'Thermal_Cabin/All_CCU_Logic/CSCC/Subsystem4/Compare To Constant1'
 * '<S907>' : 'Thermal_Cabin/All_CCU_Logic/CSCC/Subsystem4/Compare To Constant2'
 * '<S908>' : 'Thermal_Cabin/All_CCU_Logic/CSCC/Subsystem4/Compare To Constant3'
 * '<S909>' : 'Thermal_Cabin/All_CCU_Logic/CSCC/Subsystem4/Compare To Constant4'
 * '<S910>' : 'Thermal_Cabin/All_CCU_Logic/CSCC/Subsystem4/Compare To Constant5'
 * '<S911>' : 'Thermal_Cabin/All_CCU_Logic/CSCC/Subsystem4/Compare To Constant6'
 * '<S912>' : 'Thermal_Cabin/All_CCU_Logic/CSCC/Subsystem4/Compare To Constant7'
 * '<S913>' : 'Thermal_Cabin/All_CCU_Logic/CSCC/Subsystem4/Subsystem3'
 * '<S914>' : 'Thermal_Cabin/All_CCU_Logic/CSCC/Subsystem4/Subsystem4'
 * '<S915>' : 'Thermal_Cabin/All_CCU_Logic/CSCC/Subsystem4/Subsystem5'
 * '<S916>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Chart'
 * '<S917>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Chart1'
 * '<S918>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Chart2'
 * '<S919>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Chart3'
 * '<S920>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Compare To Constant'
 * '<S921>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Compare To Constant1'
 * '<S922>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Compare To Constant2'
 * '<S923>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Enabled Subsystem'
 * '<S924>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Enabled Subsystem2'
 * '<S925>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Enabled Subsystem3'
 * '<S926>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem'
 * '<S927>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem1'
 * '<S928>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem10'
 * '<S929>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem11'
 * '<S930>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem2'
 * '<S931>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem3'
 * '<S932>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4'
 * '<S933>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem5'
 * '<S934>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem7'
 * '<S935>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Truth Table'
 * '<S936>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Enabled Subsystem2/Compare To Constant'
 * '<S937>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Enabled Subsystem2/Compare To Constant1'
 * '<S938>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Enabled Subsystem2/Compare To Constant2'
 * '<S939>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Enabled Subsystem2/Compare To Constant3'
 * '<S940>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Enabled Subsystem2/Compare To Constant4'
 * '<S941>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Enabled Subsystem2/Compare To Constant7'
 * '<S942>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Enabled Subsystem2/Compare To Constant8'
 * '<S943>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Enabled Subsystem2/Compare To Constant9'
 * '<S944>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Enabled Subsystem2/Subsystem'
 * '<S945>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Enabled Subsystem2/Subsystem1'
 * '<S946>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Enabled Subsystem2/Subsystem2'
 * '<S947>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Enabled Subsystem2/Subsystem3'
 * '<S948>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Enabled Subsystem2/Subsystem4'
 * '<S949>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Enabled Subsystem2/Subsystem5'
 * '<S950>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Enabled Subsystem2/Subsystem6'
 * '<S951>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Enabled Subsystem3/Chart'
 * '<S952>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Enabled Subsystem3/Chart1'
 * '<S953>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Enabled Subsystem3/Compare To Constant'
 * '<S954>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Enabled Subsystem3/Compare To Constant1'
 * '<S955>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Enabled Subsystem3/Compare To Constant10'
 * '<S956>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Enabled Subsystem3/Compare To Constant11'
 * '<S957>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Enabled Subsystem3/Compare To Constant12'
 * '<S958>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Enabled Subsystem3/Compare To Constant13'
 * '<S959>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Enabled Subsystem3/Compare To Constant14'
 * '<S960>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Enabled Subsystem3/Compare To Constant15'
 * '<S961>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Enabled Subsystem3/Compare To Constant16'
 * '<S962>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Enabled Subsystem3/Compare To Constant2'
 * '<S963>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Enabled Subsystem3/Compare To Constant3'
 * '<S964>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Enabled Subsystem3/Compare To Constant4'
 * '<S965>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Enabled Subsystem3/Compare To Constant5'
 * '<S966>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Enabled Subsystem3/Compare To Constant6'
 * '<S967>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Enabled Subsystem3/Compare To Constant7'
 * '<S968>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Enabled Subsystem3/Compare To Constant8'
 * '<S969>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Enabled Subsystem3/Compare To Constant9'
 * '<S970>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Enabled Subsystem3/Enabled Subsystem'
 * '<S971>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Enabled Subsystem3/Enabled Subsystem1'
 * '<S972>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Enabled Subsystem3/Subsystem1'
 * '<S973>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Enabled Subsystem3/Subsystem2'
 * '<S974>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem/Chart'
 * '<S975>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem/Chart1'
 * '<S976>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem10/Compare To Constant'
 * '<S977>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem10/Enabled Subsystem'
 * '<S978>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem10/Enabled Subsystem/Compare To Constant'
 * '<S979>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem10/Enabled Subsystem/Compare To Constant1'
 * '<S980>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem10/Enabled Subsystem/Compare To Constant10'
 * '<S981>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem10/Enabled Subsystem/Compare To Constant11'
 * '<S982>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem10/Enabled Subsystem/Compare To Constant2'
 * '<S983>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem10/Enabled Subsystem/Compare To Constant3'
 * '<S984>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem10/Enabled Subsystem/Compare To Constant4'
 * '<S985>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem10/Enabled Subsystem/Compare To Constant5'
 * '<S986>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem10/Enabled Subsystem/Compare To Constant6'
 * '<S987>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem10/Enabled Subsystem/Compare To Constant7'
 * '<S988>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem10/Enabled Subsystem/Compare To Constant8'
 * '<S989>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem10/Enabled Subsystem/Compare To Constant9'
 * '<S990>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem2/Chart'
 * '<S991>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem2/LowPassFilter'
 * '<S992>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem2/Subsystem'
 * '<S993>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem2/Subsystem1'
 * '<S994>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem2/Subsystem2'
 * '<S995>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem2/Subsystem3'
 * '<S996>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem2/Subsystem1/Compare To Constant'
 * '<S997>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem2/Subsystem1/Enabled Subsystem'
 * '<S998>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem2/Subsystem1/Enabled Subsystem1'
 * '<S999>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem2/Subsystem1/Enabled Subsystem2'
 * '<S1000>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem2/Subsystem1/Enabled Subsystem3'
 * '<S1001>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem2/Subsystem1/Enabled Subsystem/Compare To Constant'
 * '<S1002>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem2/Subsystem1/Enabled Subsystem/Subsystem'
 * '<S1003>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem2/Subsystem1/Enabled Subsystem1/Compare To Constant'
 * '<S1004>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem2/Subsystem1/Enabled Subsystem1/Subsystem'
 * '<S1005>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem2/Subsystem1/Enabled Subsystem2/Compare To Constant'
 * '<S1006>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem2/Subsystem1/Enabled Subsystem2/Subsystem'
 * '<S1007>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem2/Subsystem1/Enabled Subsystem3/Compare To Constant'
 * '<S1008>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem2/Subsystem1/Enabled Subsystem3/Subsystem'
 * '<S1009>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem3/Enabled Subsystem'
 * '<S1010>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem3/Enabled Subsystem/Chart'
 * '<S1011>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem3/Enabled Subsystem/Chart1'
 * '<S1012>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem3/Enabled Subsystem/Chart2'
 * '<S1013>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem3/Enabled Subsystem/Chart3'
 * '<S1014>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem'
 * '<S1015>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem1'
 * '<S1016>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem2'
 * '<S1017>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem3'
 * '<S1018>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem/Compare To Constant34'
 * '<S1019>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem/Compare To Constant35'
 * '<S1020>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem/Compare To Constant36'
 * '<S1021>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem/Compare To Constant37'
 * '<S1022>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem/Compare To Constant38'
 * '<S1023>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem/Enabled Subsystem13'
 * '<S1024>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem/Enabled Subsystem14'
 * '<S1025>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem/Enabled Subsystem5'
 * '<S1026>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem/Enabled Subsystem6'
 * '<S1027>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem/Enabled Subsystem7'
 * '<S1028>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem/Enabled Subsystem13/Chart'
 * '<S1029>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem/Enabled Subsystem14/Chart'
 * '<S1030>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem/Enabled Subsystem6/Compare To Constant'
 * '<S1031>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem/Enabled Subsystem6/Compare To Constant1'
 * '<S1032>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem/Enabled Subsystem6/Compare To Constant2'
 * '<S1033>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem/Enabled Subsystem6/Compare To Constant3'
 * '<S1034>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem/Enabled Subsystem6/Compare To Constant4'
 * '<S1035>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem/Enabled Subsystem6/Compare To Constant6'
 * '<S1036>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem/Enabled Subsystem6/Compare To Constant9'
 * '<S1037>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem/Enabled Subsystem6/Enabled Subsystem'
 * '<S1038>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem/Enabled Subsystem6/Enabled Subsystem1'
 * '<S1039>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem/Enabled Subsystem7/Compare To Constant'
 * '<S1040>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem/Enabled Subsystem7/Compare To Constant1'
 * '<S1041>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem/Enabled Subsystem7/Compare To Constant17'
 * '<S1042>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem/Enabled Subsystem7/Compare To Constant18'
 * '<S1043>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem/Enabled Subsystem7/Compare To Constant19'
 * '<S1044>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem/Enabled Subsystem7/Compare To Constant2'
 * '<S1045>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem/Enabled Subsystem7/Compare To Constant20'
 * '<S1046>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem/Enabled Subsystem7/Compare To Constant21'
 * '<S1047>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem/Enabled Subsystem7/Compare To Constant22'
 * '<S1048>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem/Enabled Subsystem7/Compare To Constant3'
 * '<S1049>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem/Enabled Subsystem7/Compare To Constant4'
 * '<S1050>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem/Enabled Subsystem7/Enabled Subsystem'
 * '<S1051>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem/Enabled Subsystem7/Enabled Subsystem10'
 * '<S1052>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem/Enabled Subsystem7/Enabled Subsystem11'
 * '<S1053>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem/Enabled Subsystem7/Enabled Subsystem3'
 * '<S1054>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem1/Compare To Constant34'
 * '<S1055>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem1/Compare To Constant35'
 * '<S1056>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem1/Compare To Constant37'
 * '<S1057>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem1/Compare To Constant38'
 * '<S1058>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem1/Enabled Subsystem13'
 * '<S1059>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem1/Enabled Subsystem14'
 * '<S1060>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem1/Enabled Subsystem5'
 * '<S1061>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem1/Enabled Subsystem6'
 * '<S1062>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem1/Enabled Subsystem13/Chart'
 * '<S1063>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem1/Enabled Subsystem14/Chart'
 * '<S1064>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem1/Enabled Subsystem6/Compare To Constant1'
 * '<S1065>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem1/Enabled Subsystem6/Compare To Constant10'
 * '<S1066>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem1/Enabled Subsystem6/Compare To Constant11'
 * '<S1067>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem1/Enabled Subsystem6/Compare To Constant12'
 * '<S1068>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem1/Enabled Subsystem6/Compare To Constant13'
 * '<S1069>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem1/Enabled Subsystem6/Compare To Constant14'
 * '<S1070>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem1/Enabled Subsystem6/Compare To Constant2'
 * '<S1071>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem1/Enabled Subsystem6/Compare To Constant3'
 * '<S1072>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem1/Enabled Subsystem6/Compare To Constant4'
 * '<S1073>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem1/Enabled Subsystem6/Compare To Constant5'
 * '<S1074>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem1/Enabled Subsystem6/Compare To Constant6'
 * '<S1075>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem1/Enabled Subsystem6/Compare To Constant7'
 * '<S1076>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem1/Enabled Subsystem6/Compare To Constant8'
 * '<S1077>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem1/Enabled Subsystem6/Compare To Constant9'
 * '<S1078>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem1/Enabled Subsystem6/Enabled Subsystem1'
 * '<S1079>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem1/Enabled Subsystem6/Enabled Subsystem2'
 * '<S1080>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem1/Enabled Subsystem6/Enabled Subsystem3'
 * '<S1081>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem1/Enabled Subsystem6/Enabled Subsystem4'
 * '<S1082>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem2/Compare To Constant34'
 * '<S1083>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem2/Compare To Constant35'
 * '<S1084>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem2/Compare To Constant37'
 * '<S1085>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem2/Compare To Constant38'
 * '<S1086>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem2/Enabled Subsystem13'
 * '<S1087>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem2/Enabled Subsystem14'
 * '<S1088>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem2/Enabled Subsystem5'
 * '<S1089>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem2/Enabled Subsystem6'
 * '<S1090>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem2/Enabled Subsystem13/Chart'
 * '<S1091>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem2/Enabled Subsystem14/Chart'
 * '<S1092>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem2/Enabled Subsystem6/Compare To Constant'
 * '<S1093>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem2/Enabled Subsystem6/Compare To Constant1'
 * '<S1094>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem2/Enabled Subsystem6/Compare To Constant14'
 * '<S1095>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem2/Enabled Subsystem6/Compare To Constant15'
 * '<S1096>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem2/Enabled Subsystem6/Compare To Constant16'
 * '<S1097>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem2/Enabled Subsystem6/Compare To Constant2'
 * '<S1098>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem2/Enabled Subsystem6/Compare To Constant3'
 * '<S1099>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem2/Enabled Subsystem6/Compare To Constant4'
 * '<S1100>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem2/Enabled Subsystem6/Compare To Constant5'
 * '<S1101>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem2/Enabled Subsystem6/Compare To Constant6'
 * '<S1102>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem2/Enabled Subsystem6/Compare To Constant7'
 * '<S1103>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem2/Enabled Subsystem6/Compare To Constant8'
 * '<S1104>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem2/Enabled Subsystem6/Compare To Constant9'
 * '<S1105>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem2/Enabled Subsystem6/Enabled Subsystem'
 * '<S1106>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem2/Enabled Subsystem6/Enabled Subsystem1'
 * '<S1107>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem2/Enabled Subsystem6/Enabled Subsystem2'
 * '<S1108>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem2/Enabled Subsystem6/Enabled Subsystem5'
 * '<S1109>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem3/Compare To Constant34'
 * '<S1110>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem3/Compare To Constant35'
 * '<S1111>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem3/Compare To Constant37'
 * '<S1112>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem3/Compare To Constant38'
 * '<S1113>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem3/Enabled Subsystem13'
 * '<S1114>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem3/Enabled Subsystem14'
 * '<S1115>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem3/Enabled Subsystem5'
 * '<S1116>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem3/Enabled Subsystem6'
 * '<S1117>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem3/Enabled Subsystem13/Chart'
 * '<S1118>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem3/Enabled Subsystem14/Chart'
 * '<S1119>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem3/Enabled Subsystem6/Compare To Constant1'
 * '<S1120>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem3/Enabled Subsystem6/Compare To Constant10'
 * '<S1121>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem3/Enabled Subsystem6/Compare To Constant11'
 * '<S1122>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem3/Enabled Subsystem6/Compare To Constant12'
 * '<S1123>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem3/Enabled Subsystem6/Compare To Constant13'
 * '<S1124>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem3/Enabled Subsystem6/Compare To Constant14'
 * '<S1125>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem3/Enabled Subsystem6/Compare To Constant2'
 * '<S1126>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem3/Enabled Subsystem6/Compare To Constant3'
 * '<S1127>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem3/Enabled Subsystem6/Compare To Constant4'
 * '<S1128>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem3/Enabled Subsystem6/Compare To Constant5'
 * '<S1129>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem3/Enabled Subsystem6/Compare To Constant6'
 * '<S1130>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem3/Enabled Subsystem6/Compare To Constant7'
 * '<S1131>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem3/Enabled Subsystem6/Compare To Constant8'
 * '<S1132>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem3/Enabled Subsystem6/Compare To Constant9'
 * '<S1133>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem3/Enabled Subsystem6/Enabled Subsystem1'
 * '<S1134>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem3/Enabled Subsystem6/Enabled Subsystem2'
 * '<S1135>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem3/Enabled Subsystem6/Enabled Subsystem3'
 * '<S1136>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem4/Subsystem3/Enabled Subsystem6/Enabled Subsystem4'
 * '<S1137>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem5/Subsystem'
 * '<S1138>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem5/Subsystem1'
 * '<S1139>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem5/Subsystem2'
 * '<S1140>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem5/Subsystem3'
 * '<S1141>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem7/Compare To Constant'
 * '<S1142>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem7/Compare To Constant1'
 * '<S1143>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem7/Compare To Constant10'
 * '<S1144>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem7/Compare To Constant11'
 * '<S1145>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem7/Compare To Constant12'
 * '<S1146>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem7/Compare To Constant13'
 * '<S1147>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem7/Compare To Constant2'
 * '<S1148>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem7/Compare To Constant3'
 * '<S1149>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem7/Compare To Constant4'
 * '<S1150>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem7/Compare To Constant5'
 * '<S1151>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem7/Compare To Constant6'
 * '<S1152>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem7/Compare To Constant7'
 * '<S1153>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem7/Compare To Constant8'
 * '<S1154>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem7/Compare To Constant9'
 * '<S1155>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem7/Enabled Subsystem'
 * '<S1156>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem7/Enabled Subsystem1'
 * '<S1157>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem7/Enabled Subsystem2'
 * '<S1158>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem7/Enabled Subsystem/Compare To Constant'
 * '<S1159>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem7/Enabled Subsystem/Triggered Subsystem'
 * '<S1160>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem7/Enabled Subsystem/Triggered Subsystem/Compare To Constant'
 * '<S1161>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem7/Enabled Subsystem/Triggered Subsystem/Compare To Constant1'
 * '<S1162>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem7/Enabled Subsystem/Triggered Subsystem/Compare To Constant2'
 * '<S1163>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem7/Enabled Subsystem/Triggered Subsystem/Compare To Constant3'
 * '<S1164>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem7/Enabled Subsystem/Triggered Subsystem/Compare To Constant4'
 * '<S1165>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem7/Enabled Subsystem/Triggered Subsystem/Compare To Constant5'
 * '<S1166>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem7/Enabled Subsystem/Triggered Subsystem/Compare To Constant6'
 * '<S1167>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem7/Enabled Subsystem/Triggered Subsystem/Compare To Constant7'
 * '<S1168>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem7/Enabled Subsystem1/Compare To Constant'
 * '<S1169>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem7/Enabled Subsystem1/Compare To Constant1'
 * '<S1170>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem7/Enabled Subsystem1/Compare To Constant2'
 * '<S1171>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem7/Enabled Subsystem1/Compare To Constant3'
 * '<S1172>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem7/Enabled Subsystem1/Compare To Constant4'
 * '<S1173>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem7/Enabled Subsystem1/Compare To Constant5'
 * '<S1174>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem7/Enabled Subsystem1/Compare To Constant6'
 * '<S1175>' : 'Thermal_Cabin/All_CCU_Logic/CTCM/Subsystem7/Enabled Subsystem1/Compare To Constant7'
 * '<S1176>' : 'Thermal_Cabin/All_CCU_Logic/FWDS/Chart'
 * '<S1177>' : 'Thermal_Cabin/All_CCU_Logic/FWDS/Compare To Constant1'
 * '<S1178>' : 'Thermal_Cabin/All_CCU_Logic/FWDS/Subsystem'
 * '<S1179>' : 'Thermal_Cabin/All_CCU_Logic/FWDS/Subsystem1'
 * '<S1180>' : 'Thermal_Cabin/All_CCU_Logic/FWDS/Subsystem2'
 * '<S1181>' : 'Thermal_Cabin/All_CCU_Logic/FWDS/Subsystem3'
 * '<S1182>' : 'Thermal_Cabin/All_CCU_Logic/FWDS/Subsystem1/Chart'
 * '<S1183>' : 'Thermal_Cabin/All_CCU_Logic/FWDS/Subsystem1/Compare To Constant'
 * '<S1184>' : 'Thermal_Cabin/All_CCU_Logic/FWDS/Subsystem1/Compare To Constant1'
 * '<S1185>' : 'Thermal_Cabin/All_CCU_Logic/FWDS/Subsystem3/Chart'
 * '<S1186>' : 'Thermal_Cabin/All_CCU_Logic/PCAT/Subsystem6'
 * '<S1187>' : 'Thermal_Cabin/All_CCU_Logic/PCAT/Subsystem6/Chart'
 * '<S1188>' : 'Thermal_Cabin/All_CCU_Logic/PCAT/Subsystem6/Chart1'
 * '<S1189>' : 'Thermal_Cabin/All_CCU_Logic/PCAT/Subsystem6/Compare To Constant'
 * '<S1190>' : 'Thermal_Cabin/All_CCU_Logic/PCAT/Subsystem6/PreCaliTi'
 * '<S1191>' : 'Thermal_Cabin/All_CCU_Logic/PCAT/Subsystem6/PreCaliTi/Compare To Constant'
 * '<S1192>' : 'Thermal_Cabin/All_CCU_Logic/PCAT/Subsystem6/PreCaliTi/Compare To Constant1'
 * '<S1193>' : 'Thermal_Cabin/All_CCU_Logic/PCAT/Subsystem6/PreCaliTi/Compare To Constant2'
 * '<S1194>' : 'Thermal_Cabin/All_CCU_Logic/PCAT/Subsystem6/PreCaliTi/Compare To Constant3'
 * '<S1195>' : 'Thermal_Cabin/All_CCU_Logic/PCAT/Subsystem6/PreCaliTi/Compare To Constant4'
 * '<S1196>' : 'Thermal_Cabin/All_CCU_Logic/PCAT/Subsystem6/PreCaliTi/Compare To Constant5'
 * '<S1197>' : 'Thermal_Cabin/All_CCU_Logic/PCAT/Subsystem6/PreCaliTi/FirstInit'
 * '<S1198>' : 'Thermal_Cabin/All_CCU_Logic/PCAT/Subsystem6/PreCaliTi/FirstInit1'
 * '<S1199>' : 'Thermal_Cabin/All_CCU_Logic/PCAT/Subsystem6/PreCaliTi/FirstInit2'
 * '<S1200>' : 'Thermal_Cabin/All_CCU_Logic/PCAT/Subsystem6/PreCaliTi/FirstInit3'
 * '<S1201>' : 'Thermal_Cabin/All_CCU_Logic/PCAT/Subsystem6/PreCaliTi/FirstInit4'
 * '<S1202>' : 'Thermal_Cabin/All_CCU_Logic/PCAT/Subsystem6/PreCaliTi/NapInit'
 * '<S1203>' : 'Thermal_Cabin/All_CCU_Logic/PCAT/Subsystem6/PreCaliTi/Subsystem'
 * '<S1204>' : 'Thermal_Cabin/All_CCU_Logic/PCAT/Subsystem6/PreCaliTi/FirstInit/T_IniSnr_Extr_18'
 * '<S1205>' : 'Thermal_Cabin/All_CCU_Logic/PCAT/Subsystem6/PreCaliTi/FirstInit/T_IniSnr_Intr_18'
 * '<S1206>' : 'Thermal_Cabin/All_CCU_Logic/PCAT/Subsystem6/PreCaliTi/FirstInit/T_IniSnr_Mtr_12'
 * '<S1207>' : 'Thermal_Cabin/All_CCU_Logic/PCAT/Subsystem6/PreCaliTi/FirstInit/TazInitial_4'
 * '<S1208>' : 'Thermal_Cabin/All_CCU_Logic/PCAT/Subsystem6/PreCaliTi/NapInit/FirstInit'
 * '<S1209>' : 'Thermal_Cabin/All_CCU_Logic/PCAT/Subsystem6/PreCaliTi/NapInit/IniSnrAddModified'
 * '<S1210>' : 'Thermal_Cabin/All_CCU_Logic/PCAT/Subsystem6/PreCaliTi/NapInit/Iterative operation'
 * '<S1211>' : 'Thermal_Cabin/All_CCU_Logic/PCAT/Subsystem6/PreCaliTi/NapInit/Q_PasgHt'
 * '<S1212>' : 'Thermal_Cabin/All_CCU_Logic/PCAT/Subsystem6/PreCaliTi/NapInit/Q_hvac2az1'
 * '<S1213>' : 'Thermal_Cabin/All_CCU_Logic/PCAT/Subsystem6/PreCaliTi/NapInit/Q_shell2az'
 * '<S1214>' : 'Thermal_Cabin/All_CCU_Logic/PCAT/Subsystem6/PreCaliTi/NapInit/TazCal'
 * '<S1215>' : 'Thermal_Cabin/All_CCU_Logic/PCAT/Subsystem6/PreCaliTi/NapInit/FirstInit/T_IniSnr_Extr_18'
 * '<S1216>' : 'Thermal_Cabin/All_CCU_Logic/PCAT/Subsystem6/PreCaliTi/NapInit/FirstInit/T_IniSnr_Intr_18'
 * '<S1217>' : 'Thermal_Cabin/All_CCU_Logic/PCAT/Subsystem6/PreCaliTi/NapInit/FirstInit/T_IniSnr_Mtr_12'
 * '<S1218>' : 'Thermal_Cabin/All_CCU_Logic/PCAT/Subsystem6/PreCaliTi/NapInit/FirstInit/TazInitial_4'
 * '<S1219>' : 'Thermal_Cabin/All_CCU_Logic/PCAT/Subsystem6/PreCaliTi/NapInit/Iterative operation/Compare To Constant1'
 * '<S1220>' : 'Thermal_Cabin/All_CCU_Logic/PCAT/Subsystem6/PreCaliTi/NapInit/Iterative operation/Compare To Constant2'
 * '<S1221>' : 'Thermal_Cabin/All_CCU_Logic/PCAT/Subsystem6/PreCaliTi/NapInit/Iterative operation/Compare To Constant3'
 * '<S1222>' : 'Thermal_Cabin/All_CCU_Logic/PCAT/Subsystem6/PreCaliTi/NapInit/Iterative operation/Compare To Constant4'
 * '<S1223>' : 'Thermal_Cabin/All_CCU_Logic/PCAT/Subsystem6/PreCaliTi/NapInit/Iterative operation/Compare To Constant5'
 * '<S1224>' : 'Thermal_Cabin/All_CCU_Logic/PCAT/Subsystem6/PreCaliTi/NapInit/Iterative operation/Compare To Constant6'
 * '<S1225>' : 'Thermal_Cabin/All_CCU_Logic/PCAT/Subsystem6/PreCaliTi/NapInit/Iterative operation/Compare To Constant7'
 * '<S1226>' : 'Thermal_Cabin/All_CCU_Logic/PCAT/Subsystem6/PreCaliTi/NapInit/Iterative operation/Compare To Constant8'
 * '<S1227>' : 'Thermal_Cabin/All_CCU_Logic/PCAT/Subsystem6/PreCaliTi/NapInit/Iterative operation/Subsystem1'
 * '<S1228>' : 'Thermal_Cabin/All_CCU_Logic/PCAT/Subsystem6/PreCaliTi/NapInit/Iterative operation/Subsystem2'
 * '<S1229>' : 'Thermal_Cabin/All_CCU_Logic/PCAT/Subsystem6/PreCaliTi/NapInit/Iterative operation/Subsystem3'
 * '<S1230>' : 'Thermal_Cabin/All_CCU_Logic/PCAT/Subsystem6/PreCaliTi/NapInit/Iterative operation/Subsystem40'
 * '<S1231>' : 'Thermal_Cabin/All_CCU_Logic/PCAT/Subsystem6/PreCaliTi/NapInit/Q_PasgHt/Compare To Constant'
 * '<S1232>' : 'Thermal_Cabin/All_CCU_Logic/PCAT/Subsystem6/PreCaliTi/NapInit/Q_PasgHt/Compare To Constant1'
 * '<S1233>' : 'Thermal_Cabin/All_CCU_Logic/PCAT/Subsystem6/PreCaliTi/NapInit/Q_PasgHt/Compare To Constant2'
 * '<S1234>' : 'Thermal_Cabin/All_CCU_Logic/PCAT/Subsystem6/PreCaliTi/NapInit/Q_PasgHt/Compare To Constant3'
 * '<S1235>' : 'Thermal_Cabin/All_CCU_Logic/PCAT/Subsystem6/PreCaliTi/NapInit/Q_PasgHt/Enabled Subsystem'
 * '<S1236>' : 'Thermal_Cabin/All_CCU_Logic/PCAT/Subsystem6/PreCaliTi/NapInit/Q_PasgHt/Enabled Subsystem1'
 * '<S1237>' : 'Thermal_Cabin/All_CCU_Logic/PCAT/Subsystem6/PreCaliTi/NapInit/Q_PasgHt/Enabled Subsystem2'
 * '<S1238>' : 'Thermal_Cabin/All_CCU_Logic/PCAT/Subsystem6/PreCaliTi/NapInit/Q_PasgHt/Enabled Subsystem3'
 * '<S1239>' : 'Thermal_Cabin/All_CCU_Logic/PCAT/Subsystem6/PreCaliTi/NapInit/Q_hvac2az1/DATCali1'
 * '<S1240>' : 'Thermal_Cabin/All_CCU_Logic/PCAT/Subsystem6/PreCaliTi/NapInit/Q_hvac2az1/EnthalpyCal'
 * '<S1241>' : 'Thermal_Cabin/All_CCU_Logic/PCAT/Subsystem6/PreCaliTi/NapInit/Q_hvac2az1/EnthalpyCal1'
 * '<S1242>' : 'Thermal_Cabin/All_CCU_Logic/PCAT/Subsystem6/PreCaliTi/NapInit/Q_hvac2az1/Subsystem'
 * '<S1243>' : 'Thermal_Cabin/All_CCU_Logic/PCAT/Subsystem6/PreCaliTi/NapInit/Q_hvac2az1/DATCali1/Enabled Subsystem'
 * '<S1244>' : 'Thermal_Cabin/All_CCU_Logic/PCAT/Subsystem6/PreCaliTi/NapInit/Q_shell2az/ComFctrCali1'
 * '<S1245>' : 'Thermal_Cabin/All_CCU_Logic/PCAT/Subsystem6/PreCaliTi/NapInit/Q_shell2az/HtTrsfCo'
 * '<S1246>' : 'Thermal_Cabin/All_CCU_Logic/PCAT/Subsystem6/PreCaliTi/NapInit/Q_shell2az/Q_shell2az'
 * '<S1247>' : 'Thermal_Cabin/All_CCU_Logic/PCAT/Subsystem6/PreCaliTi/NapInit/Q_shell2az/SunIntCalcu'
 * '<S1248>' : 'Thermal_Cabin/All_CCU_Logic/PCAT/Subsystem6/PreCaliTi/NapInit/Q_shell2az/Taz_surf'
 * '<S1249>' : 'Thermal_Cabin/All_CCU_Logic/PCAT/Subsystem6/PreCaliTi/NapInit/Q_shell2az/VehSurfTmpCalcu'
 * '<S1250>' : 'Thermal_Cabin/All_CCU_Logic/PCAT/Subsystem6/PreCaliTi/NapInit/Q_shell2az/ComFctrCali1/Subsystem'
 * '<S1251>' : 'Thermal_Cabin/All_CCU_Logic/PCAT/Subsystem6/PreCaliTi/NapInit/Q_shell2az/ComFctrCali1/Subsystem1'
 * '<S1252>' : 'Thermal_Cabin/All_CCU_Logic/PCAT/Subsystem6/PreCaliTi/NapInit/Q_shell2az/ComFctrCali1/Subsystem10'
 * '<S1253>' : 'Thermal_Cabin/All_CCU_Logic/PCAT/Subsystem6/PreCaliTi/NapInit/Q_shell2az/ComFctrCali1/Subsystem2'
 * '<S1254>' : 'Thermal_Cabin/All_CCU_Logic/PCAT/Subsystem6/PreCaliTi/NapInit/Q_shell2az/ComFctrCali1/Subsystem3'
 * '<S1255>' : 'Thermal_Cabin/All_CCU_Logic/PCAT/Subsystem6/PreCaliTi/NapInit/Q_shell2az/ComFctrCali1/Subsystem4'
 * '<S1256>' : 'Thermal_Cabin/All_CCU_Logic/PCAT/Subsystem6/PreCaliTi/NapInit/Q_shell2az/ComFctrCali1/Subsystem5'
 * '<S1257>' : 'Thermal_Cabin/All_CCU_Logic/PCAT/Subsystem6/PreCaliTi/NapInit/Q_shell2az/ComFctrCali1/Subsystem6'
 * '<S1258>' : 'Thermal_Cabin/All_CCU_Logic/PCAT/Subsystem6/PreCaliTi/NapInit/Q_shell2az/ComFctrCali1/Subsystem7'
 * '<S1259>' : 'Thermal_Cabin/All_CCU_Logic/PCAT/Subsystem6/PreCaliTi/NapInit/Q_shell2az/ComFctrCali1/Subsystem8'
 * '<S1260>' : 'Thermal_Cabin/All_CCU_Logic/PCAT/Subsystem6/PreCaliTi/NapInit/Q_shell2az/ComFctrCali1/Subsystem9'
 * '<S1261>' : 'Thermal_Cabin/All_CCU_Logic/PCAT/Subsystem6/PreCaliTi/NapInit/Q_shell2az/HtTrsfCo/Compare To Constant'
 * '<S1262>' : 'Thermal_Cabin/All_CCU_Logic/PCAT/Subsystem6/PreCaliTi/NapInit/Q_shell2az/Q_shell2az/Subsystem'
 * '<S1263>' : 'Thermal_Cabin/All_CCU_Logic/PCAT/Subsystem6/PreCaliTi/NapInit/TazCal/Q_az����add'
 * '<S1264>' : 'Thermal_Cabin/All_CCU_Logic/PCAT/Subsystem6/PreCaliTi/NapInit/TazCal/Q_shell2az'
 * '<S1265>' : 'Thermal_Cabin/All_CCU_Logic/SENA/Chart'
 * '<S1266>' : 'Thermal_Cabin/All_CCU_Logic/SENA/Chart1'
 * '<S1267>' : 'Thermal_Cabin/All_CCU_Logic/SENA/Chart10'
 * '<S1268>' : 'Thermal_Cabin/All_CCU_Logic/SENA/Chart11'
 * '<S1269>' : 'Thermal_Cabin/All_CCU_Logic/SENA/Chart12'
 * '<S1270>' : 'Thermal_Cabin/All_CCU_Logic/SENA/Chart2'
 * '<S1271>' : 'Thermal_Cabin/All_CCU_Logic/SENA/Chart3'
 * '<S1272>' : 'Thermal_Cabin/All_CCU_Logic/SENA/Chart4'
 * '<S1273>' : 'Thermal_Cabin/All_CCU_Logic/SENA/Chart5'
 * '<S1274>' : 'Thermal_Cabin/All_CCU_Logic/SENA/Chart6'
 * '<S1275>' : 'Thermal_Cabin/All_CCU_Logic/SENA/Chart7'
 * '<S1276>' : 'Thermal_Cabin/All_CCU_Logic/SENA/Chart8'
 * '<S1277>' : 'Thermal_Cabin/All_CCU_Logic/SENA/Chart9'
 * '<S1278>' : 'Thermal_Cabin/All_CCU_Logic/SENA/Compare To Constant'
 * '<S1279>' : 'Thermal_Cabin/All_CCU_Logic/SENA/Compare To Constant2'
 * '<S1280>' : 'Thermal_Cabin/All_CCU_Logic/SENA/Compare To Constant3'
 * '<S1281>' : 'Thermal_Cabin/All_CCU_Logic/SENA/Compare To Constant4'
 * '<S1282>' : 'Thermal_Cabin/All_CCU_Logic/SENA/Compare To Constant5'
 * '<S1283>' : 'Thermal_Cabin/All_CCU_Logic/SENA/Subsystem1'
 * '<S1284>' : 'Thermal_Cabin/All_CCU_Logic/SENA/Subsystem1/Chart15'
 * '<S1285>' : 'Thermal_Cabin/All_CCU_Logic/SENA/Subsystem1/Chart16'
 * '<S1286>' : 'Thermal_Cabin/All_CCU_Logic/Subsystem10/Compare To Constant14'
 * '<S1287>' : 'Thermal_Cabin/All_CCU_Logic/Subsystem11/Compare To Constant14'
 * '<S1288>' : 'Thermal_Cabin/All_CCU_Logic/Subsystem12/Compare To Constant14'
 * '<S1289>' : 'Thermal_Cabin/All_CCU_Logic/Subsystem13/Compare To Constant14'
 * '<S1290>' : 'Thermal_Cabin/All_CCU_Logic/Subsystem14/Compare To Constant14'
 * '<S1291>' : 'Thermal_Cabin/All_CCU_Logic/Subsystem15/Compare To Constant14'
 * '<S1292>' : 'Thermal_Cabin/All_CCU_Logic/Subsystem16/Compare To Constant14'
 * '<S1293>' : 'Thermal_Cabin/All_CCU_Logic/Subsystem17/Compare To Constant14'
 * '<S1294>' : 'Thermal_Cabin/All_CCU_Logic/Subsystem19/Compare To Constant14'
 * '<S1295>' : 'Thermal_Cabin/All_CCU_Logic/Subsystem20/Compare To Constant14'
 * '<S1296>' : 'Thermal_Cabin/All_CCU_Logic/Subsystem21/Compare To Constant14'
 * '<S1297>' : 'Thermal_Cabin/All_CCU_Logic/Subsystem22/Compare To Constant14'
 * '<S1298>' : 'Thermal_Cabin/All_CCU_Logic/Subsystem23/Compare To Constant14'
 * '<S1299>' : 'Thermal_Cabin/All_CCU_Logic/Subsystem24/Compare To Constant14'
 * '<S1300>' : 'Thermal_Cabin/All_CCU_Logic/Subsystem25/Compare To Constant14'
 * '<S1301>' : 'Thermal_Cabin/All_CCU_Logic/Subsystem26/Compare To Constant14'
 * '<S1302>' : 'Thermal_Cabin/All_CCU_Logic/VTIC/Compare To Constant'
 * '<S1303>' : 'Thermal_Cabin/All_CCU_Logic/VTIC/Compare To Constant1'
 * '<S1304>' : 'Thermal_Cabin/All_CCU_Logic/VTIC/Compare To Constant2'
 * '<S1305>' : 'Thermal_Cabin/All_CCU_Logic/VTIC/Compare To Constant3'
 * '<S1306>' : 'Thermal_Cabin/All_CCU_Logic/VTIC/Compare To Constant4'
 * '<S1307>' : 'Thermal_Cabin/All_CCU_Logic/VTIC/Compare To Constant5'
 * '<S1308>' : 'Thermal_Cabin/All_CCU_Logic/VTIC/Compare To Constant6'
 * '<S1309>' : 'Thermal_Cabin/All_CCU_Logic/VTIC/Compare To Constant7'
 */
#endif                                 /* RTW_HEADER_Thermal_Cabin_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
