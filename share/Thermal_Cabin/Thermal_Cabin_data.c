/*
 * File: Thermal_Cabin_data.c
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

#include "Thermal_Cabin.h"
#include "Thermal_Cabin_private.h"

/* Invariant block signals (default storage) */
const ConstB_Thermal_Cabin_T Thermal_Cabin_ConstB = {
  0.0F,                                /* '<S1>/Data Type Conversion' */
  0.0F,                                /* '<S395>/Data Type Conversion' */
  0.0F,                                /* '<S395>/Data Type Conversion2' */
  96.5F,                               /* '<S729>/Add' */
  3.5F,                                /* '<S729>/Add1' */
  0.01F,                               /* '<S734>/Saturation' */
  100.0F,                              /* '<S734>/Divide' */
  96.5F,                               /* '<S740>/Add' */
  3.5F,                                /* '<S740>/Add1' */
  0.01F,                               /* '<S745>/Saturation' */
  100.0F,                              /* '<S745>/Divide' */
  96.5F,                               /* '<S751>/Add' */
  3.5F,                                /* '<S751>/Add1' */
  0.01F,                               /* '<S756>/Saturation' */
  100.0F,                              /* '<S756>/Divide' */
  96.5F,                               /* '<S762>/Add' */
  3.5F,                                /* '<S762>/Add1' */
  0.01F,                               /* '<S767>/Saturation' */
  100.0F,                              /* '<S767>/Divide' */
  0.0039F,                             /* '<S17>/1-D Lookup Table10' */
  0.99F,                               /* '<S991>/Add1' */
  10.0F,                               /* '<S1>/Constant32' */

  { 1.0F, 2.0F, 3.0F, 4.0F, 5.0F, 6.0F, 7.0F, 8.0F, 9.0F, 10.0F, 11.0F, 12.0F,
    13.0F, 14.0F, 15.0F, 16.0F, 17.0F, 18.0F },/* '<S1186>/Constant1' */

  { 1.0F, 2.0F, 3.0F, 4.0F, 5.0F, 6.0F, 7.0F, 8.0F, 9.0F, 10.0F, 11.0F, 12.0F,
    13.0F, 14.0F, 15.0F, 16.0F, 17.0F, 18.0F },/* '<S1186>/Constant2' */

  { 1.0F, 2.0F, 3.0F, 4.0F, 5.0F, 6.0F, 7.0F, 8.0F, 9.0F, 10.0F, 11.0F, 12.0F },/* '<S1186>/Constant3' */

  { 1.0F, 2.0F, 3.0F, 4.0F },          /* '<S1186>/Constant4' */
  3.0F,                                /* '<S25>/soaktime1' */
  0.0F,                                /* '<S1155>/Constant' */
  15.0F,                               /* '<S977>/Saturation2' */
  0.0F,                                /* '<S914>/Add' */
  4.6F,                                /* '<S116>/Constant36' */
  4.6F,                                /* '<S116>/Constant37' */
  3.96F,                               /* '<S116>/Constant38' */
  4.4F,                                /* '<S116>/Constant39' */
  3.81F,                               /* '<S116>/Constant40' */
  3.93F,                               /* '<S116>/Constant41' */
  3.5F,                                /* '<S116>/Constant42' */
  1.11F,                               /* '<S116>/Constant43' */
  1.0F,                                /* '<S116>/Constant44' */
  0.95F,                               /* '<S116>/Constant45' */
  2.45F,                               /* '<S116>/Constant46' */
  1.46F,                               /* '<S116>/Constant47' */
  1.01F,                               /* '<S116>/Constant48' */
  1.04F,                               /* '<S116>/Constant49' */
  0,                                   /* '<S481>/Compare' */
  0,                                   /* '<S485>/Compare' */
  0,                                   /* '<S493>/Compare' */
  0,                                   /* '<S557>/Compare' */
  0,                                   /* '<S607>/Compare' */
  0,                                   /* '<S671>/Compare' */
  0,                                   /* '<S677>/Compare' */
  0,                                   /* '<S725>/Switch' */
  0,                                   /* '<S766>/Compare' */
  0,                                   /* '<S860>/Compare' */
  0,                                   /* '<S905>/Compare' */
  0,                                   /* '<S906>/Compare' */
  1,                                   /* '<S907>/Compare' */
  0,                                   /* '<S908>/Compare' */
  0,                                   /* '<S909>/Compare' */
  0,                                   /* '<S910>/Compare' */
  0,                                   /* '<S911>/Compare' */
  0,                                   /* '<S912>/Compare' */
  0,                                   /* '<S871>/OR' */
  1,                                   /* '<S871>/OR1' */
  0,                                   /* '<S871>/OR2' */
  0,                                   /* '<S871>/OR3' */
  1,                                   /* '<S1>/Constant25' */
  1,                                   /* '<S1>/Constant35' */
  1,                                   /* '<S1>/Constant42' */
  1,                                   /* '<S1>/Constant48' */
  1,                                   /* '<S1>/Constant52' */
  1,                                   /* '<S1>/Constant59' */
  1,                                   /* '<S1>/Constant60' */
  1,                                   /* '<S1286>/Compare' */
  1,                                   /* '<S1287>/Compare' */
  1,                                   /* '<S1288>/Compare' */
  1,                                   /* '<S1289>/Compare' */
  1,                                   /* '<S1290>/Compare' */
  1,                                   /* '<S1291>/Compare' */
  1,                                   /* '<S1292>/Compare' */
  1,                                   /* '<S1293>/Compare' */
  1,                                   /* '<S1294>/Compare' */
  1,                                   /* '<S1295>/Compare' */
  1,                                   /* '<S1296>/Compare' */
  1,                                   /* '<S1297>/Compare' */
  1,                                   /* '<S1298>/Compare' */
  1,                                   /* '<S1299>/Compare' */
  1,                                   /* '<S1300>/Compare' */
  1,                                   /* '<S1301>/Compare' */
  1,                                   /* '<S1>/Constant33' */

  /* Start of '<S1186>/PreCaliTi' */
  {
    0.5,                               /* '<S1246>/Gain1' */
    0.5,                               /* '<S1246>/Gain10' */
    0.5,                               /* '<S1246>/Gain11' */
    0.5,                               /* '<S1246>/Gain12' */
    0.5,                               /* '<S1246>/Gain13' */
    0.5,                               /* '<S1246>/Gain14' */
    0.5,                               /* '<S1246>/Gain15' */
    0.5,                               /* '<S1246>/Gain16' */
    0.5,                               /* '<S1246>/Gain17' */
    0.5,                               /* '<S1246>/Gain18' */
    0.5,                               /* '<S1246>/Gain19' */
    0.5,                               /* '<S1246>/Gain2' */
    0.5,                               /* '<S1246>/Gain20' */
    0.5,                               /* '<S1246>/Gain3' */
    0.5,                               /* '<S1246>/Gain4' */
    0.5,                               /* '<S1246>/Gain5' */
    0.5,                               /* '<S1246>/Gain6' */
    0.5,                               /* '<S1246>/Gain7' */
    0.5,                               /* '<S1246>/Gain8' */
    0.5,                               /* '<S1246>/Gain9' */
    1.0,                               /* '<S1209>/KePCAT_Scnd_SnrIniWght2' */
    0.0,                               /* '<S1209>/Subtract' */
    1.0,                               /* '<S1208>/Constant' */
    128U,                              /* '<S1242>/Divide1' */
    1,                                 /* '<S1231>/Compare' */
    1,                                 /* '<S1232>/Compare' */
    1,                                 /* '<S1233>/Compare' */
    1,                                 /* '<S1234>/Compare' */

    /* Start of '<S1213>/SunIntCalcu' */
    {
      3.14159274F,                     /* '<S1247>/Gain3' */
      3.14159274F,                     /* '<S1247>/Gain4' */
      -0.000196038454F,                /* '<S1247>/Trigonometric Function4' */
      -0.999999881F                    /* '<S1247>/Trigonometric Function5' */
    }
    /* End of '<S1213>/SunIntCalcu' */
  }
  ,

  /* End of '<S1186>/PreCaliTi' */

  /* Start of '<S115>/Enabled Subsystem' */
  {
    0U,                                /* '<S317>/Constant2' */
    0U,                                /* '<S317>/Constant5' */
    0,                                 /* '<S317>/Constant1' */
    0                                  /* '<S317>/Constant4' */
  }
  ,

  /* End of '<S115>/Enabled Subsystem' */

  /* Start of '<S2>/Enabled Subsystem7' */
  {
    /* Start of '<S109>/Enabled Subsystem' */
    {
      0U,                              /* '<S300>/Constant2' */
      0U,                              /* '<S300>/Constant5' */
      0,                               /* '<S300>/Constant1' */
      0                                /* '<S300>/Constant4' */
    }
    /* End of '<S109>/Enabled Subsystem' */
  }
  ,

  /* End of '<S2>/Enabled Subsystem7' */

  /* Start of '<S2>/Enabled Subsystem6' */
  {
    /* Start of '<S109>/Enabled Subsystem' */
    {
      0U,                              /* '<S289>/Constant2' */
      0U,                              /* '<S289>/Constant5' */
      0,                               /* '<S289>/Constant1' */
      0                                /* '<S289>/Constant4' */
    }
    /* End of '<S109>/Enabled Subsystem' */
  }
  ,

  /* End of '<S2>/Enabled Subsystem6' */

  /* Start of '<S2>/Enabled Subsystem5' */
  {
    /* Start of '<S109>/Enabled Subsystem' */
    {
      0U,                              /* '<S278>/Constant2' */
      0U,                              /* '<S278>/Constant5' */
      0,                               /* '<S278>/Constant1' */
      0                                /* '<S278>/Constant4' */
    }
    /* End of '<S109>/Enabled Subsystem' */
  }
  ,

  /* End of '<S2>/Enabled Subsystem5' */

  /* Start of '<S2>/Enabled Subsystem4' */
  {
    /* Start of '<S109>/Enabled Subsystem' */
    {
      0U,                              /* '<S267>/Constant2' */
      0U,                              /* '<S267>/Constant5' */
      0,                               /* '<S267>/Constant1' */
      0                                /* '<S267>/Constant4' */
    }
    /* End of '<S109>/Enabled Subsystem' */
  }
  ,

  /* End of '<S2>/Enabled Subsystem4' */

  /* Start of '<S2>/Enabled Subsystem3' */
  {
    /* Start of '<S109>/Enabled Subsystem' */
    {
      0U,                              /* '<S256>/Constant2' */
      0U,                              /* '<S256>/Constant5' */
      0,                               /* '<S256>/Constant1' */
      0                                /* '<S256>/Constant4' */
    }
    /* End of '<S109>/Enabled Subsystem' */
  }
  ,

  /* End of '<S2>/Enabled Subsystem3' */

  /* Start of '<S105>/Enabled Subsystem' */
  {
    0U,                                /* '<S225>/Constant2' */
    0U,                                /* '<S225>/Constant5' */
    0,                                 /* '<S225>/Constant1' */
    0                                  /* '<S225>/Constant4' */
  }
  /* End of '<S105>/Enabled Subsystem' */
};

/* Block parameters (default storage) */
P_Thermal_Cabin_T Thermal_Cabin_P = {
  /* Variable: KeCAFC_na_FbFlowBaseACC_X
   * Referenced by: '<S691>/1-D Lookup Table1'
   */
  { 0.0F, 1.0F, 2.0F, 3.0F, 4.0F, 5.0F, 6.0F, 7.0F },

  /* Variable: KeCAFC_v_CddsLowerLimit_D
   * Referenced by: '<S687>/1-D Lookup Table'
   */
  { 0.0F, 180.0F, 220.0F, 260.0F, 300.0F, 340.0F, 380.0F, 420.0F },

  /* Variable: KeCAFC_v_ColdFlowMax
   * Referenced by: '<S700>/Constant'
   */
  240.0F,

  /* Variable: KeCAFC_v_FbFlowAmbTemp_D
   * Referenced by: '<S699>/2-D Lookup Table'
   */
  { 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 120.0F, 120.0F, 120.0F, 120.0F, 120.0F,
    120.0F, 240.0F, 240.0F, 240.0F, 240.0F, 240.0F, 240.0F, 300.0F, 300.0F,
    300.0F, 300.0F, 300.0F, 300.0F, 420.0F, 420.0F, 420.0F, 420.0F, 420.0F,
    420.0F },

  /* Variable: KeCAFC_v_FbFlowBaseACC_D
   * Referenced by: '<S691>/1-D Lookup Table1'
   */
  { 0.0F, 180.0F, 220.0F, 260.0F, 300.0F, 340.0F, 380.0F, 420.0F },

  /* Variable: KeCAFC_v_FbFlowBaseStable_D
   * Referenced by: '<S691>/1-D Lookup Table'
   */
  { 0.0F, 171.12F, 240.88F, 307.21F, 367.75F, 427.89F, 487.75F, 535.16F, 541.24F,
    546.17F, 0.0F, 158.11F, 230.81F, 299.44F, 361.55F, 427.42F, 492.11F, 530.72F,
    536.67F, 541.76F, 0.0F, 127.84F, 205.93F, 274.98F, 336.24F, 395.79F, 459.45F,
    507.17F, 513.66F, 519.93F, 0.0F, 128.24F, 194.97F, 266.31F, 324.01F, 382.35F,
    436.2F, 481.25F, 488.52F, 493.37F, 0.0F, 86.66F, 133.38F, 179.11F, 218.53F,
    262.16F, 305.77F, 342.08F, 383.09F, 406.63F, 0.0F, 86.47F, 123.12F, 162.18F,
    197.87F, 230.59F, 264.86F, 294.52F, 324.74F, 358.7F },

  /* Variable: KeCAFC_v_FlowCccsECO_D
   * Referenced by: '<S701>/1-D Lookup Table'
   */
  { 0.0F, 80.0F, 137.0F, 192.0F, 248.0F, 304.0F, 380.0F, 420.0F },

  /* Variable: KeCAFC_v_FlowCccsECO_X
   * Referenced by: '<S701>/1-D Lookup Table'
   */
  { 0.0F, 180.0F, 220.0F, 260.0F, 300.0F, 340.0F, 380.0F, 420.0F },

  /* Variable: KeCAFC_v_FlowCccsStrong_D
   * Referenced by: '<S701>/1-D Lookup Table1'
   */
  { 0.0F, 80.0F, 137.0F, 192.0F, 248.0F, 304.0F, 380.0F, 420.0F },

  /* Variable: KeCAFC_v_FlowCccsStrong_X
   * Referenced by: '<S701>/1-D Lookup Table1'
   */
  { 0.0F, 180.0F, 220.0F, 260.0F, 300.0F, 340.0F, 380.0F, 420.0F },

  /* Variable: KeCAFC_v_FlowEemLv1_D
   * Referenced by: '<S688>/1-D Lookup Table'
   */
  { 0.0F, 60.0F, 120.0F, 180.0F, 180.0F, 180.0F, 180.0F, 180.0F },

  /* Variable: KeCAFC_v_FlowEemLv1_X
   * Referenced by: '<S688>/1-D Lookup Table'
   */
  { 0.0F, 180.0F, 220.0F, 260.0F, 300.0F, 340.0F, 380.0F, 420.0F },

  /* Variable: KeCAFC_v_FlowEemLv2_D
   * Referenced by: '<S688>/1-D Lookup Table1'
   */
  { 0.0F, 60.0F, 60.0F, 60.0F, 60.0F, 60.0F, 60.0F, 60.0F },

  /* Variable: KeCAFC_v_FlowEemLv2_X
   * Referenced by: '<S688>/1-D Lookup Table1'
   */
  { 0.0F, 180.0F, 220.0F, 260.0F, 300.0F, 340.0F, 380.0F, 420.0F },

  /* Variable: KeCAFC_v_FlowNvhCmp_D
   * Referenced by: '<S702>/1-D Lookup Table'
   */
  { 0.0F, 180.0F, 220.0F, 260.0F, 300.0F, 340.0F, 380.0F, 420.0F },

  /* Variable: KeCAFC_v_FlowNvhCmp_X
   * Referenced by: '<S702>/1-D Lookup Table'
   */
  { 0.0F, 180.0F, 220.0F, 260.0F, 300.0F, 340.0F, 380.0F, 420.0F },

  /* Variable: KeCAFC_n_BlwrHiSpeedLim
   * Referenced by: '<S689>/Saturation'
   */
  5500U,

  /* Variable: KeCAFC_n_BlwrLoSpeedLim
   * Referenced by: '<S689>/Saturation'
   */
  300U,

  /* Variable: KeCAFC_n_FbBlwrLoSpeedLim
   * Referenced by: '<S9>/Constant2'
   */
  300U,

  /* Variable: KeCAFC_n_Flow2Speed_D
   * Referenced by: '<S689>/2-D Lookup Table'
   */
  { 0U, 520U, 1246U, 1713U, 2083U, 2470U, 2894U, 3132U, 3162U, 0U, 616U, 1317U,
    1765U, 2115U, 2481U, 2916U, 3147U, 3189U, 0U, 766U, 1468U, 1903U, 2247U,
    2644U, 3057U, 3271U, 3297U, 0U, 818U, 1530U, 1953U, 2325U, 2733U, 3249U,
    3499U, 3534U, 0U, 1008U, 2050U, 2660U, 3147U, 3632U, 4196U, 4517U, 4562U, 0U,
    1100U, 2250U, 2909U, 3439U, 3992U, 4633U, 4998U, 5050U },

  /* Variable: KeCAFC_n_SlowRespRate
   * Referenced by: '<S9>/Constant1'
   */
  20U,

  /* Variable: KeCAFC_na_CddsLowerLimit_X
   * Referenced by: '<S687>/1-D Lookup Table'
   */
  { 0U, 1U, 2U, 3U, 4U, 5U, 6U, 7U },

  /* Variable: KeCAFC_na_FbFlowBaseStable_X
   * Referenced by: '<S691>/1-D Lookup Table'
   */
  { 0U, 1U, 2U, 3U, 4U, 5U, 6U, 7U, 8U, 9U },

  /* Variable: KeCAFC_na_RapaidRespRate
   * Referenced by: '<S9>/Constant'
   */
  100U
};

/* Constant parameters (default storage) */
const ConstP_Thermal_Cabin_T Thermal_Cabin_ConstP = {
  /* Expression: [0,1000]
   * Referenced by: '<S999>/Constant'
   */
  { 0.0, 1000.0 },

  /* Expression: KeCAFC_v_FbFlowAmbTemp_X
   * Referenced by: '<S699>/2-D Lookup Table'
   */
  { -20.0F, 0.0F, 5.0F, 20.0F, 30.0F, 40.0F },

  /* Expression: KeCAFC_v_FbFlowAmbTemp_Y
   * Referenced by: '<S699>/2-D Lookup Table'
   */
  { 0.0F, 120.0F, 240.0F, 300.0F, 420.0F },

  /* Pooled Parameter (Mixed Expressions)
   * Referenced by:
   *   '<S689>/2-D Lookup Table'
   *   '<S691>/1-D Lookup Table'
   */
  { 6.09F, 6.19F, 6.8F, 7.11F, 10.21F, 11.49F },

  /* Pooled Parameter (Expression: KeCHFC_na_SphKpTable_D)
   * Referenced by:
   *   '<S731>/KeCHFC_na_SphKpTable_D'
   *   '<S742>/KeCHFC_na_SphKpTable_D'
   *   '<S753>/KeCHFC_na_SphKpTable_D'
   *   '<S764>/KeCHFC_na_SphKpTable_D1'
   */
  { -0.3F, -0.25F, -0.2F, -0.15F, -0.1F, 0.0F, 0.1F, 0.15F, 0.2F, 0.25F, 0.3F },

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
  { -10.0F, -8.0F, -6.0F, -4.0F, -2.0F, 0.0F, 2.0F, 4.0F, 6.0F, 8.0F, 10.0F },

  /* Pooled Parameter (Expression: KeCHFC_na_SphKiTable_D)
   * Referenced by:
   *   '<S731>/KeCHFC_na_SphKiTable_D'
   *   '<S742>/KeCHFC_na_SphKiTable_D'
   *   '<S753>/KeCHFC_na_SphKiTable_D'
   *   '<S764>/KeCHFC_na_SphKiTable_D1'
   */
  { -0.03F, -0.025F, -0.02F, -0.015F, -0.01F, 0.0F, 0.01F, 0.015F, 0.02F, 0.025F,
    0.03F },

  /* Pooled Parameter (Mixed Expressions)
   * Referenced by:
   *   '<S742>/1-D Lookup Table'
   *   '<S742>/1-D Lookup Table1'
   *   '<S753>/1-D Lookup Table'
   *   '<S753>/1-D Lookup Table1'
   *   '<S764>/1-D Lookup Table'
   *   '<S764>/1-D Lookup Table1'
   */
  { 0.0F, 10.0F, 30.0F, 50.0F, 70.0F, 90.0F, 100.0F },

  /* Pooled Parameter (Mixed Expressions)
   * Referenced by:
   *   '<S17>/1-D Lookup Table10'
   *   '<S17>/1-D Lookup Table11'
   *   '<S17>/1-D Lookup Table9'
   */
  { 0.001F, 0.0016F, 0.0025F, 0.0039F, 0.0054F, 0.0076F, 0.0106F, 0.0147F,
    0.0201F, 0.0272F, 0.0366F, 0.0489F },

  /* Pooled Parameter (Mixed Expressions)
   * Referenced by:
   *   '<S17>/1-D Lookup Table10'
   *   '<S17>/1-D Lookup Table11'
   *   '<S17>/1-D Lookup Table9'
   *   '<S17>/2-D Lookup Table'
   */
  { -15.0F, -10.0F, -5.0F, 0.0F, 5.0F, 10.0F, 15.0F, 20.0F, 25.0F, 30.0F, 35.0F,
    40.0F },

  /* Expression: KeCSCC_m_FlwTempHum_D
   * Referenced by: '<S17>/2-D Lookup Table'
   */
  { 0.0001F, 0.0002F, 0.0003F, 0.0004F, 0.0005F, 0.0008F, 0.001F, 0.0014F,
    0.002F, 0.0026F, 0.0035F, 0.0046F, 0.0002F, 0.0003F, 0.0005F, 0.0008F,
    0.0011F, 0.0015F, 0.0021F, 0.0029F, 0.0039F, 0.0053F, 0.007F, 0.0092F,
    0.0003F, 0.0005F, 0.0008F, 0.0012F, 0.0016F, 0.0023F, 0.0032F, 0.0043F,
    0.0059F, 0.0079F, 0.0105F, 0.0139F, 0.0004F, 0.0007F, 0.001F, 0.0015F,
    0.0021F, 0.003F, 0.0042F, 0.0058F, 0.0079F, 0.0106F, 0.01416F, 0.0187F,
    0.0005F, 0.0008F, 0.0013F, 0.0019F, 0.0027F, 0.0038F, 0.0053F, 0.0073F,
    0.0099F, 0.0133F, 0.0178F, 0.0235F, 0.0006F, 0.001F, 0.0015F, 0.0023F,
    0.0032F, 0.0046F, 0.0063F, 0.0087F, 0.0119F, 0.016F, 0.0214F, 0.0284F,
    0.0007F, 0.0011F, 0.0018F, 0.0027F, 0.0038F, 0.0053F, 0.0074F, 0.0102F,
    0.0139F, 0.0188F, 0.0252F, 0.0334F, 0.0008F, 0.0013F, 0.002F, 0.0031F,
    0.0043F, 0.0061F, 0.0085F, 0.0117F, 0.016F, 0.0216F, 0.0289F, 0.0385F,
    0.0009F, 0.0015F, 0.0023F, 0.0035F, 0.0049F, 0.0069F, 0.0096F, 0.0132F,
    0.018F, 0.0244F, 0.0327F, 0.0437F, 0.001F, 0.0016F, 0.0025F, 0.0039F,
    0.0054F, 0.0076F, 0.0106F, 0.0147F, 0.0201F, 0.0272F, 0.0366F, 0.0489F },

  /* Expression: KeCSCC_m_FlwTempHum_Y
   * Referenced by: '<S17>/2-D Lookup Table'
   */
  { 10.0F, 20.0F, 30.0F, 40.0F, 50.0F, 60.0F, 70.0F, 80.0F, 90.0F, 100.0F },

  /* Expression: KeCSCC_v_Flow2InRes_D
   * Referenced by: '<S17>/BUOUCreator'
   */
  { 7.11F, 6.65F, 9.3F, 8.66F, 9.26F, 6.6F, 6.95F, 6.65F, 6.19F, 8.84F, 8.2F,
    8.8F, 6.14F, 6.5F, 9.3F, 8.84F, 11.49F, 10.85F, 11.45F, 8.79F, 9.14F, 8.66F,
    8.2F, 10.85F, 10.21F, 10.81F, 8.15F, 8.5F, 9.26F, 8.8F, 11.45F, 10.81F,
    11.41F, 8.75F, 9.1F, 6.6F, 6.14F, 8.79F, 8.15F, 8.75F, 6.09F, 6.45F, 6.95F,
    6.5F, 9.14F, 8.5F, 9.1F, 6.45F, 6.8F },

  /* Expression: KeFWDS_pct_RecRio_D
   * Referenced by: '<S1180>/1-D Lookup Table'
   */
  { 0.0F, 0.0F, 10.0F, 30.0F, 50.0F, 100.0F, 100.0F, 100.0F, 100.0F, 100.0F,
    100.0F, 100.0F, 100.0F },

  /* Pooled Parameter (Mixed Expressions)
   * Referenced by:
   *   '<S1180>/1-D Lookup Table'
   *   '<S1180>/1-D Lookup Table1'
   *   '<S1180>/1-D Lookup Table2'
   *   '<S1180>/1-D Lookup Table3'
   */
  { -1000.0F, 0.0F, 50.0F, 100.0F, 200.0F, 300.0F, 400.0F, 500.0F, 600.0F,
    700.0F, 800.0F, 900.0F, 1000.0F },

  /* Computed Parameter: uDLookupTable1_tableData
   * Referenced by: '<S1180>/1-D Lookup Table1'
   */
  { 0.0F, 0.0F, 0.0F, 0.0F, 10.0F, 20.0F, 40.0F, 100.0F, 100.0F, 100.0F, 100.0F,
    100.0F, 100.0F },

  /* Computed Parameter: uDLookupTable3_tableData
   * Referenced by: '<S1180>/1-D Lookup Table3'
   */
  { 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 7.0F, 5.0F, 4.0F, 3.0F, 3.0F, 3.0F, 3.0F
  },

  /* Expression: single([0.296875,0.53125,0.4]);
   * Referenced by: '<S1207>/KePCAT_na_BreaTempEfctCoef_D'
   */
  { 0.296875F, 0.53125F, 0.4F },

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
  { 0.0F, 100.0F },

  /* Pooled Parameter (Expression: 1:18)
   * Referenced by:
   *   '<S1186>/Constant1'
   *   '<S1186>/Constant11'
   *   '<S1186>/Constant12'
   *   '<S1186>/Constant2'
   */
  { 1.0F, 2.0F, 3.0F, 4.0F, 5.0F, 6.0F, 7.0F, 8.0F, 9.0F, 10.0F, 11.0F, 12.0F,
    13.0F, 14.0F, 15.0F, 16.0F, 17.0F, 18.0F },

  /* Pooled Parameter (Expression: 1:12)
   * Referenced by:
   *   '<S1186>/Constant13'
   *   '<S1186>/Constant3'
   */
  { 1.0F, 2.0F, 3.0F, 4.0F, 5.0F, 6.0F, 7.0F, 8.0F, 9.0F, 10.0F, 11.0F, 12.0F },

  /* Expression: KeCAFC_n_Flow2Speed_X
   * Referenced by: '<S689>/2-D Lookup Table'
   */
  { 0.0F, 76.66F, 194.69F, 272.03F, 336.24F, 406.63F, 488.52F, 535.16F, 541.76F
  },

  /* Expression: KeCTCM_T_HeatUpRecOffs_X
   * Referenced by: '<S19>/1-D Lookup Table4'
   */
  { -400.0F, -200.0F, -100.0F, 0.0F, 100.0F, 200.0F, 300.0F, 400.0F, 800.0F },

  /* Expression: KeCSCC_pct_FrntDrvVentRio_D
   * Referenced by: '<S17>/1-D Lookup Table'
   */
  { 0.39F, 0.26F, 0.03F, 0.03F, 0.03F, 0.24F, 0.14F },

  /* Expression: KeCSCC_pct_FrntPassVentRio_D
   * Referenced by: '<S17>/1-D Lookup Table1'
   */
  { 0.39F, 0.26F, 0.03F, 0.39F, 0.26F, 0.03F, 0.39F, 0.26F, 0.03F, 0.26F, 0.16F,
    0.03F, 0.24F, 0.14F, 0.03F, 0.24F, 0.16F, 0.05F, 0.26F, 0.14F, 0.05F },

  /* Expression: KeCSCC_pct_SecDrvVentRio_D
   * Referenced by: '<S17>/1-D Lookup Table2'
   */
  { 0.22F, 0.12F, 0.0F, 0.0F },

  /* Expression: KeCSCC_pct_FrntDrvFootRio_D
   * Referenced by: '<S17>/1-D Lookup Table3'
   */
  { 0.0F, 0.11F, 0.22F, 0.14F, 0.0F, 0.0F, 0.1F },

  /* Expression: KeCSCC_pct_FrntPassFootRio_D
   * Referenced by: '<S17>/1-D Lookup Table4'
   */
  { 0.0F, 0.18F, 0.34F, 0.0F, 0.18F, 0.34F, 0.0F, 0.18F, 0.34F, 0.0F, 0.18F,
    0.24F, 0.0F, 0.16F, 0.24F, 0.0F, 0.18F, 0.26F, 0.0F, 0.16F, 0.26F },

  /* Expression: KeCSCC_pct_SecDrvFootRio_D
   * Referenced by: '<S17>/1-D Lookup Table5'
   */
  { 0.0F, 0.14F, 0.24F, 0.0F },

  /* Pooled Parameter (Mixed Expressions)
   * Referenced by:
   *   '<S17>/1-D Lookup Table6'
   *   '<S17>/1-D Lookup Table8'
   */
  { 0.0F, 0.0F, 0.13F, 0.23F, 0.47F, 0.17F, 0.15F },

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
  { 100.0F, 95.0F, 90.0F, 85.0F, 84.0F, 83.0F, 82.0F, 81.0F, 80.0F, 79.0F, 78.0F,
    77.0F, 76.0F, 75.0F, 74.0F, 73.0F, 72.0F, 71.0F, 70.0F, 69.0F, 68.0F, 67.0F,
    66.0F, 65.0F, 64.0F, 63.0F, 62.0F, 61.0F, 60.0F, 59.0F, 58.0F, 57.0F, 56.0F,
    55.0F, 54.0F, 53.0F, 52.0F, 51.0F, 50.0F, 49.0F, 48.0F, 47.0F, 46.0F, 45.0F,
    44.0F, 43.0F, 42.0F, 41.0F, 40.0F, 39.0F, 38.0F, 37.0F, 36.0F, 35.0F, 34.0F,
    33.0F, 32.0F, 31.0F, 30.0F, 29.0F, 28.0F, 27.0F, 26.0F, 25.0F, 24.0F, 23.0F,
    22.0F, 21.0F, 20.0F, 19.0F, 18.0F, 17.0F, 16.0F, 15.0F, 14.0F, 13.0F, 12.0F,
    11.0F, 10.0F, 9.0F, 8.0F, 7.0F, 6.0F, 5.0F, 4.0F, 3.0F, 2.0F, 1.0F, 0.0F,
    -1.0F, -2.0F, -3.0F, -4.0F, -5.0F, -6.0F, -7.0F, -8.0F, -9.0F, -10.0F,
    -11.0F, -12.0F, -13.0F, -14.0F, -15.0F, -16.0F, -17.0F, -18.0F, -19.0F,
    -20.0F, -21.0F, -22.0F, -23.0F, -24.0F, -25.0F, -26.0F, -27.0F, -28.0F,
    -29.0F, -30.0F, -31.0F, -32.0F, -33.0F, -34.0F, -35.0F, -36.0F, -37.0F,
    -38.0F, -39.0F, -40.0F },

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
  { 204.0F, 236.5F, 275.3F, 321.7F, 332.0F, 342.7F, 353.9F, 365.4F, 377.4F,
    389.8F, 402.7F, 416.0F, 429.9F, 444.4F, 459.4F, 475.0F, 491.2F, 508.1F,
    525.6F, 543.9F, 562.9F, 582.8F, 603.4F, 624.9F, 647.2F, 670.5F, 694.8F,
    720.0F, 746.4F, 773.8F, 802.4F, 832.3F, 863.4F, 895.9F, 929.8F, 965.1F,
    1002.0F, 1041.0F, 1081.0F, 1123.0F, 1167.0F, 1213.0F, 1261.0F, 1311.0F,
    1363.0F, 1418.0F, 1475.0F, 1535.0F, 1598.0F, 1664.0F, 1732.0F, 1804.0F,
    1880.0F, 1959.0F, 2042.0F, 2129.0F, 2220.0F, 2316.0F, 2417.0F, 2522.0F,
    2633.0F, 2749.0F, 2871.0F, 3000.0F, 3135.0F, 3276.0F, 3425.0F, 3582.0F,
    3747.0F, 3920.0F, 4103.0F, 4295.0F, 4498.0F, 4712.0F, 4937.0F, 5175.0F,
    5425.0F, 5690.0F, 5970.0F, 6264.0F, 6574.0F, 6902.0F, 7249.0F, 7616.0F,
    8003.0F, 8413.0F, 8847.0F, 9307.0F, 9795.0F, 10309.0F, 10853.0F, 11431.0F,
    12044.0F, 12695.0F, 13384.0F, 14115.0F, 14893.0F, 15720.0F, 16599.0F,
    17527.0F, 18514.0F, 19566.0F, 20686.0F, 21879.0F, 23146.0F, 24497.0F,
    25939.0F, 27478.0F, 29121.0F, 30862.0F, 32721.0F, 34709.0F, 36836.0F,
    39111.0F, 41536.0F, 44134.0F, 46917.0F, 49900.0F, 53100.0F, 56497.0F,
    60141.0F, 64055.0F, 68258.0F, 72777.0F, 77613.0F, 82817.0F, 88417.0F,
    94449.0F, 100950.0F },

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
  { 100.0F, 99.0F, 98.0F, 97.0F, 96.0F, 95.0F, 94.0F, 93.0F, 92.0F, 91.0F, 90.0F,
    89.0F, 88.0F, 87.0F, 86.0F, 85.0F, 84.0F, 83.0F, 82.0F, 81.0F, 80.0F, 79.0F,
    78.0F, 77.0F, 76.0F, 75.0F, 74.0F, 73.0F, 72.0F, 71.0F, 70.0F, 69.0F, 68.0F,
    67.0F, 66.0F, 65.0F, 64.0F, 63.0F, 62.0F, 61.0F, 60.0F, 59.0F, 58.0F, 57.0F,
    56.0F, 55.0F, 54.0F, 53.0F, 52.0F, 51.0F, 50.0F, 49.0F, 48.0F, 47.0F, 46.0F,
    45.0F, 44.0F, 43.0F, 42.0F, 41.0F, 40.0F, 39.0F, 38.0F, 37.0F, 36.0F, 35.0F,
    34.0F, 33.0F, 32.0F, 31.0F, 30.0F, 29.0F, 28.0F, 27.0F, 26.0F, 25.0F, 24.0F,
    23.0F, 22.0F, 21.0F, 20.0F, 19.0F, 18.0F, 17.0F, 16.0F, 15.0F, 14.0F, 13.0F,
    12.0F, 11.0F, 10.0F, 9.0F, 8.0F, 7.0F, 6.0F, 5.0F, 4.0F, 3.0F, 2.0F, 1.0F,
    0.0F, -1.0F, -2.0F, -3.0F, -4.0F, -5.0F, -6.0F, -7.0F, -8.0F, -9.0F, -10.0F,
    -11.0F, -12.0F, -13.0F, -14.0F, -15.0F, -16.0F, -17.0F, -18.0F, -19.0F,
    -20.0F, -21.0F, -22.0F, -23.0F, -24.0F, -25.0F, -26.0F, -27.0F, -28.0F,
    -29.0F, -30.0F },

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
  { 674.0F, 694.0F, 715.0F, 737.0F, 759.0F, 782.0F, 806.0F, 831.0F, 857.0F,
    884.0F, 912.0F, 940.0F, 970.0F, 1001.0F, 1033.0F, 1066.0F, 1101.0F, 1137.0F,
    1174.0F, 1212.0F, 1252.0F, 1294.0F, 1337.0F, 1382.0F, 1428.0F, 1477.0F,
    1527.0F, 1579.0F, 1634.0F, 1690.0F, 1749.0F, 1810.0F, 1873.0F, 1940.0F,
    2008.0F, 2080.0F, 2155.0F, 2232.0F, 2313.0F, 2398.0F, 2486.0F, 2577.0F,
    2673.0F, 2772.0F, 2876.0F, 2985.0F, 3098.0F, 3215.0F, 3339.0F, 3467.0F,
    3601.0F, 3741.0F, 3888.0F, 4041.0F, 4201.0F, 4368.0F, 4543.0F, 4726.0F,
    4917.0F, 5117.0F, 5327.0F, 5546.0F, 5776.0F, 6016.0F, 6268.0F, 6532.0F,
    6809.0F, 7099.0F, 7403.0F, 7723.0F, 8057.0F, 8409.0F, 8778.0F, 9165.0F,
    9572.0F, 10000.0F, 10449.0F, 10922.0F, 11418.0F, 11941.0F, 12491.0F,
    13069.0F, 13678.0F, 14319.0F, 14995.0F, 15706.0F, 16456.0F, 17247.0F,
    18081.0F, 18960.0F, 19888.0F, 20868.0F, 21903.0F, 22996.0F, 24150.0F,
    25370.0F, 26661.0F, 28025.0F, 29469.0F, 30997.0F, 32614.0F, 34327.0F,
    36142.0F, 38066.0F, 40105.0F, 42268.0F, 44563.0F, 46998.0F, 49584.0F,
    52331.0F, 55249.0F, 58351.0F, 61650.0F, 65159.0F, 68894.0F, 72870.0F,
    77104.0F, 81616.0F, 86426.0F, 91555.0F, 97026.0F, 102866.0F, 109102.0F,
    115763.0F, 122882.0F, 130493.0F, 138634.0F, 147346.0F, 156674.0F, 166665.0F,
    177373.0F },

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
  { 85.0F, 80.0F, 75.0F, 70.0F, 65.0F, 60.0F, 55.0F, 50.0F, 45.0F, 40.0F, 35.0F,
    30.0F, 25.0F, 20.0F, 15.0F, 10.0F, 5.0F, 0.0F, -5.0F, -10.0F, -15.0F, -20.0F,
    -25.0F, -30.0F, -35.0F, -40.0F },

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
  { 295.6F, 346.8F, 408.3F, 482.9F, 574.2F, 685.8F, 823.2F, 993.2F, 1204.0F,
    1468.0F, 1800.0F, 2221.0F, 2757.0F, 3443.0F, 4330.0F, 5485.0F, 6998.0F,
    9000.0F, 11664.0F, 15252.0F, 20103.0F, 26757.0F, 35937.0F, 48790.0F,
    66870.0F, 92757.0F },

  /* Computed Parameter: uDLookupTable10_tableData
   * Referenced by: '<S25>/1-D Lookup Table10'
   */
  { 80.0F, 60.0F, 35.0F, 25.0F, 15.0F, 0.0F, -15.0F, -30.0F },

  /* Computed Parameter: uDLookupTable10_bp01Data
   * Referenced by: '<S25>/1-D Lookup Table10'
   */
  { 3758.0F, 7463.0F, 19590.0F, 30000.0F, 47130.0F, 97710.0F, 216100.0F,
    509600.0F },

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
  { 4U, 5U },

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
  { 4U, 10U },

  /* Computed Parameter: uDLookupTable_maxIndex
   * Referenced by: '<S699>/2-D Lookup Table'
   */
  { 5U, 4U },

  /* Computed Parameter: uDLookupTable_maxIndex_c
   * Referenced by: '<S691>/1-D Lookup Table'
   */
  { 9U, 5U },

  /* Computed Parameter: uDLookupTable_maxIndex_d
   * Referenced by: '<S825>/2-D Lookup Table'
   */
  { 2U, 4U },

  /* Computed Parameter: uDLookupTable_maxIndex_a
   * Referenced by: '<S17>/2-D Lookup Table'
   */
  { 11U, 9U },

  /* Computed Parameter: BUOUCreator_maxIndex
   * Referenced by: '<S17>/BUOUCreator'
   */
  { 6U, 6U },

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S997>/2-D Lookup Table'
   *   '<S998>/2-D Lookup Table'
   *   '<S999>/2-D Lookup Table'
   *   '<S1000>/2-D Lookup Table'
   */
  { 11U, 14U },

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
  { 14U, 6U },

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S992>/2-D Lookup Table'
   *   '<S992>/2-D Lookup Table1'
   */
  { 10U, 10U },

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S17>/1-D Lookup Table1'
   *   '<S17>/1-D Lookup Table4'
   *   '<S1242>/KePCAT_pct_AirFlowFpFoot_D'
   *   '<S1242>/KePCAT_pct_AirFlowFpVentRC_D'
   *   '<S1242>/KePCAT_pct_AirFlowFpVentRS_D'
   */
  { 2U, 6U },

  /* Computed Parameter: uDLookupTable_maxIndex_l
   * Referenced by: '<S689>/2-D Lookup Table'
   */
  { 8U, 5U },

  /* Expression: KeBLWA_pct_RadioReq_X
   * Referenced by: '<S4>/1-D Lookup Table'
   */
  { 600U, 1100U, 1532U, 1920U, 2250U, 2586U, 2912U, 3192U, 3249U, 3716U },

  /* Pooled Parameter (Mixed Expressions)
   * Referenced by:
   *   '<S731>/1-D Lookup Table'
   *   '<S731>/1-D Lookup Table1'
   *   '<S742>/1-D Lookup Table'
   *   '<S753>/1-D Lookup Table'
   *   '<S764>/1-D Lookup Table'
   */
  { 0U, 10U, 30U, 50U, 70U, 90U, 100U },

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
  { 0U, 1U, 2U, 3U, 4U, 5U, 6U },

  /* Expression: KeFWDS_na_BlwrLvLim_D
   * Referenced by: '<S1180>/1-D Lookup Table2'
   */
  { 0U, 0U, 0U, 0U, 0U, 3U, 5U, 7U, 9U, 9U, 9U, 9U, 9U },

  /* Expression: KeBLWA_pct_RadioReq_D
   * Referenced by: '<S4>/1-D Lookup Table'
   */
  { 10U, 26U, 36U, 46U, 53U, 61U, 69U, 75U, 82U, 91U },

  /* Pooled Parameter (Mixed Expressions)
   * Referenced by:
   *   '<S17>/1-D Lookup Table1'
   *   '<S17>/1-D Lookup Table4'
   */
  { 0U, 1U, 2U },

  /* Pooled Parameter (Mixed Expressions)
   * Referenced by:
   *   '<S17>/1-D Lookup Table2'
   *   '<S17>/1-D Lookup Table5'
   */
  { 0U, 1U, 2U, 3U }
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
