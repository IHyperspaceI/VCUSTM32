/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: SensorSignals.c
 *
 * Code generated for Simulink model 'SensorSignals'.
 *
 * Model version                  : 13.6
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Tue Jun  2 18:44:05 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "SensorSignals.h"
#include "rtwtypes.h"
#include "SensorSignals_private.h"

/* Output and update for referenced model: 'SensorSignals' */
void SensorSignals(const real_T *rtu_CAN3_DDU7_Analoge_1_pBrakeF, const real_T
                   *rtu_CAN3_DDU7_Analoge_1_pBrakeR, const real_T
                   *rtu_CAN3_DDU7_Analoge_1_VDamper, const real_T
                   *rtu_CAN3_DDU7_Analoge_1_VDamp_e, const real_T
                   *rtu_CAN3_DDU7_Analoge_1_VDamp_n, const real_T
                   *rtu_CAN3_DDU7_Analoge_1_VDamp_f, const real_T
                   *rtu_CAN3_DDU7_Analoge_2_NDispla, const real_T
                   *rtu_CAN3_DDU7_Analoge_2_VSteeri, const real_T
                   *rtu_CAN3_DDU7_Analoge_2_VThrott, const real_T
                   *rtu_CAN3_DDU7_Analoge_2_VThro_k, const real_T
                   *rtu_CAN3_PDM_Status_1_C1P01_Sta, const real_T
                   *rtu_CAN3_PDM_Status_1_C1P02_Sta, const real_T
                   *rtu_CAN3_PDM_Status_1_C1P03_Sta, const real_T
                   *rtu_CAN3_PDM_Status_1_C1P04_Sta, const real_T
                   *rtu_CAN3_PDM_Status_1_C1P07_Sta, const real_T
                   *rtu_CAN3_PDM_Status_1_C1P11_Sta, const real_T
                   *rtu_CAN3_PDM_Status_1_C1P12_Sta, const real_T
                   *rtu_CAN3_PDM_Status_1_C1P13_Sta, const real_T
                   *rtu_CAN3_PDM_Status_1_C1P25_Sta, const real_T
                   *rtu_CAN3_PDM_Status_1_C1P26_Sta, const real_T
                   *rtu_CAN3_PDM_Status_1_C1P28_Sta, const real_T
                   *rtu_CAN3_PDM_Status_1_C1P30_Sta, const real_T
                   *rtu_CAN3_PDM_Status_1_C1P31_Sta, const real_T
                   *rtu_CAN3_PDM_Status_1_C1P33_Sta, const real_T
                   *rtu_CAN3_PDM_Status_1_C1P34_Sta, const real_T
                   *rtu_CAN3_PDM_Status_1_C1P36_Sta, const real_T
                   *rtu_CAN3_PDM_Status_2_C1P37_Sta, const real_T
                   *rtu_CAN3_PDM_Status_2_C1P38_Sta, const real_T
                   *rtu_CAN3_PDM_Status_2_C2P01_Sta, const real_T
                   *rtu_CAN3_PDM_Status_2_C2P02_Sta, const real_T
                   *rtu_CAN3_PDM_Status_2_C2P03_Sta, const real_T
                   *rtu_CAN3_PDM_Status_2_C2P04_Sta, const real_T
                   *rtu_CAN3_PDM_Status_2_C2P05_Sta, const real_T
                   *rtu_CAN3_PDM_Status_2_C2P13_Sta, const real_T
                   *rtu_CAN3_PDM_Status_2_C2P25_Sta, const real_T
                   *rtu_CAN3_PDM_Status_2_C2P26_Sta, const real_T
                   *rtu_CAN3_PDM_Status_2_C2P27_Sta, const real_T
                   *rtu_CAN3_PDM_Status_2_C2P28_Sta, const real_T
                   *rtu_CAN3_PDM_Status_2_C2P29_Sta, const real_T
                   *rtu_CAN3_PDM_Status_2_C2P30_Sta, const real_T
                   *rtu_CAN3_PDM_Status_2_C2P31_Sta, const real_T
                   *rtu_CAN3_PDM_Status_2_C2P33_Sta, const real_T
                   *rtu_CAN3_PDM_Status_3_C1P16_Dig, const real_T
                   *rtu_CAN3_PDM_Status_3_C1P17_Dig, const real_T
                   *rtu_CAN3_PDM_Status_3_C2P17_Dig, const real_T
                   *rtu_CAN3_PDM_Status_3_C2P18_Dig, const real_T
                   *rtu_CAN3_PDM_Status_3_C2P35_Sta, const real_T
                   *rtu_CAN3_PDM_Status_3_C2P36_Sta, const real_T
                   *rtu_CAN3_PDM_Status_3_C2P37_Sta, const real_T
                   *rtu_CAN3_PDM_Status_3_C2P38_Sta, const real_T
                   *rtu_CAN3_PDM_Status_3_ILVSystem, const real_T
                   *rtu_CAN3_PDM_Status_3_TLVSystem, const real_T
                   *rtu_CAN3_PDM_Status_3_VLVSystem, const boolean_T
                   *rtu_CAN3_SteeringWheelBus_BStee, const boolean_T
                   *rtu_CAN3_SteeringWheelBus_BSt_h, const boolean_T
                   *rtu_CAN3_SteeringWheelBus_BS_hs, const boolean_T
                   *rtu_CAN3_SteeringWheelBus_BSt_i, const boolean_T
                   *rtu_CAN3_SteeringWheelBus_BS_h5, const boolean_T
                   *rtu_CAN3_SteeringWheelBus_BS_h1, const boolean_T
                   *rtu_CAN3_SteeringWheelBus_BS_ig, const boolean_T
                   *rtu_CAN3_SteeringWheelBus_BSt_d, const real_T
                   *rtu_CAN3_SteeringWheelBus_VRege, const real_T
                   *rtu_CAN3_SteeringWheelBus_VRe_i, real_T
                   *rty_SensorSignalsBus_pBrakeF, real_T
                   *rty_SensorSignalsBus_pBrakeR, real_T
                   *rty_SensorSignalsBus_VDamperPot, real_T
                   *rty_SensorSignalsBus_VDamperP_e, real_T
                   *rty_SensorSignalsBus_NDisplayNu, real_T
                   *rty_SensorSignalsBus_VSteeringA, real_T
                   *rty_SensorSignalsBus_VThrottleP, real_T
                   *rty_SensorSignalsBus_VThrottl_h, boolean_T
                   *rty_SensorSignalsBus_BSteeringW, boolean_T
                   *rty_SensorSignalsBus_BSteerin_k, boolean_T
                   *rty_SensorSignalsBus_BSteeri_ka, boolean_T
                   *rty_SensorSignalsBus_BSteerin_e, boolean_T
                   *rty_SensorSignalsBus_BSteerin_c, boolean_T
                   *rty_SensorSignalsBus_BSteeri_ez, boolean_T
                   *rty_SensorSignalsBus_BSteerin_o, boolean_T
                   *rty_SensorSignalsBus_BSteerin_p, real_T
                   *rty_SensorSignalsBus_VRegenPadd, real_T
                   *rty_SensorSignalsBus_VRegenPa_d, real_T
                   *rty_SensorSignalsBus_C1P01_Stat, real_T
                   *rty_SensorSignalsBus_C1P02_Stat, real_T
                   *rty_SensorSignalsBus_C1P03_Stat, real_T
                   *rty_SensorSignalsBus_C1P04_Stat, real_T
                   *rty_SensorSignalsBus_C1P07_Stat, real_T
                   *rty_SensorSignalsBus_C1P11_Stat, real_T
                   *rty_SensorSignalsBus_C1P12_Stat, real_T
                   *rty_SensorSignalsBus_C1P13_Stat, real_T
                   *rty_SensorSignalsBus_C1P25_Stat, real_T
                   *rty_SensorSignalsBus_C1P26_Stat, real_T
                   *rty_SensorSignalsBus_C1P28_Stat, real_T
                   *rty_SensorSignalsBus_C1P30_Stat, real_T
                   *rty_SensorSignalsBus_C1P31_Stat, real_T
                   *rty_SensorSignalsBus_C1P33_Stat, real_T
                   *rty_SensorSignalsBus_C1P34_Stat, real_T
                   *rty_SensorSignalsBus_C1P36_Stat, real_T
                   *rty_SensorSignalsBus_C1P37_Stat, real_T
                   *rty_SensorSignalsBus_C1P38_Stat, real_T
                   *rty_SensorSignalsBus_C2P01_Stat, real_T
                   *rty_SensorSignalsBus_C2P02_Stat, real_T
                   *rty_SensorSignalsBus_C2P03_Stat, real_T
                   *rty_SensorSignalsBus_C2P04_Stat, real_T
                   *rty_SensorSignalsBus_C2P05_Stat, real_T
                   *rty_SensorSignalsBus_C2P13_Stat, real_T
                   *rty_SensorSignalsBus_C2P25_Stat, real_T
                   *rty_SensorSignalsBus_C2P26_Stat, real_T
                   *rty_SensorSignalsBus_C2P27_Stat, real_T
                   *rty_SensorSignalsBus_C2P28_Stat, real_T
                   *rty_SensorSignalsBus_C2P29_Stat, real_T
                   *rty_SensorSignalsBus_C2P30_Stat, real_T
                   *rty_SensorSignalsBus_C2P31_Stat, real_T
                   *rty_SensorSignalsBus_C2P33_Stat, real_T
                   *rty_SensorSignalsBus_C1P16_Digi, real_T
                   *rty_SensorSignalsBus_C1P17_Digi, real_T
                   *rty_SensorSignalsBus_C2P17_Digi, real_T
                   *rty_SensorSignalsBus_C2P18_Digi, real_T
                   *rty_SensorSignalsBus_C2P35_Stat, real_T
                   *rty_SensorSignalsBus_C2P36_Stat, real_T
                   *rty_SensorSignalsBus_C2P37_Stat, real_T
                   *rty_SensorSignalsBus_C2P38_Stat, real_T
                   *rty_SensorSignalsBus_ILVSystem, real_T
                   *rty_SensorSignalsBus_TLVSystem, real_T
                   *rty_SensorSignalsBus_VLVSystem, real_T
                   *rty_SensorSignalsBus_VDamperP_a, real_T
                   *rty_SensorSignalsBus_VDamperP_i)
{
  /* SignalConversion generated from: '<Root>/SensorSignalsBus' */
  *rty_SensorSignalsBus_pBrakeF = *rtu_CAN3_DDU7_Analoge_1_pBrakeF;

  /* SignalConversion generated from: '<Root>/SensorSignalsBus' */
  *rty_SensorSignalsBus_BSteerin_k = *rtu_CAN3_SteeringWheelBus_BSt_h;

  /* SignalConversion generated from: '<Root>/SensorSignalsBus' */
  *rty_SensorSignalsBus_BSteeri_ka = *rtu_CAN3_SteeringWheelBus_BS_hs;

  /* SignalConversion generated from: '<Root>/SensorSignalsBus' */
  *rty_SensorSignalsBus_BSteerin_e = *rtu_CAN3_SteeringWheelBus_BSt_i;

  /* SignalConversion generated from: '<Root>/SensorSignalsBus' */
  *rty_SensorSignalsBus_BSteerin_c = *rtu_CAN3_SteeringWheelBus_BS_h5;

  /* SignalConversion generated from: '<Root>/SensorSignalsBus' */
  *rty_SensorSignalsBus_BSteeri_ez = *rtu_CAN3_SteeringWheelBus_BS_h1;

  /* SignalConversion generated from: '<Root>/SensorSignalsBus' */
  *rty_SensorSignalsBus_BSteerin_o = *rtu_CAN3_SteeringWheelBus_BS_ig;

  /* SignalConversion generated from: '<Root>/SensorSignalsBus' */
  *rty_SensorSignalsBus_BSteerin_p = *rtu_CAN3_SteeringWheelBus_BSt_d;

  /* SignalConversion generated from: '<Root>/SensorSignalsBus' */
  *rty_SensorSignalsBus_VRegenPadd = *rtu_CAN3_SteeringWheelBus_VRege;

  /* SignalConversion generated from: '<Root>/SensorSignalsBus' */
  *rty_SensorSignalsBus_VRegenPa_d = *rtu_CAN3_SteeringWheelBus_VRe_i;

  /* SignalConversion generated from: '<Root>/SensorSignalsBus' */
  *rty_SensorSignalsBus_C1P01_Stat = *rtu_CAN3_PDM_Status_1_C1P01_Sta;

  /* SignalConversion generated from: '<Root>/SensorSignalsBus' */
  *rty_SensorSignalsBus_pBrakeR = *rtu_CAN3_DDU7_Analoge_1_pBrakeR;

  /* SignalConversion generated from: '<Root>/SensorSignalsBus' */
  *rty_SensorSignalsBus_C1P02_Stat = *rtu_CAN3_PDM_Status_1_C1P02_Sta;

  /* SignalConversion generated from: '<Root>/SensorSignalsBus' */
  *rty_SensorSignalsBus_C1P03_Stat = *rtu_CAN3_PDM_Status_1_C1P03_Sta;

  /* SignalConversion generated from: '<Root>/SensorSignalsBus' */
  *rty_SensorSignalsBus_C1P04_Stat = *rtu_CAN3_PDM_Status_1_C1P04_Sta;

  /* SignalConversion generated from: '<Root>/SensorSignalsBus' */
  *rty_SensorSignalsBus_C1P07_Stat = *rtu_CAN3_PDM_Status_1_C1P07_Sta;

  /* SignalConversion generated from: '<Root>/SensorSignalsBus' */
  *rty_SensorSignalsBus_C1P11_Stat = *rtu_CAN3_PDM_Status_1_C1P11_Sta;

  /* SignalConversion generated from: '<Root>/SensorSignalsBus' */
  *rty_SensorSignalsBus_C1P12_Stat = *rtu_CAN3_PDM_Status_1_C1P12_Sta;

  /* SignalConversion generated from: '<Root>/SensorSignalsBus' */
  *rty_SensorSignalsBus_C1P13_Stat = *rtu_CAN3_PDM_Status_1_C1P13_Sta;

  /* SignalConversion generated from: '<Root>/SensorSignalsBus' */
  *rty_SensorSignalsBus_C1P25_Stat = *rtu_CAN3_PDM_Status_1_C1P25_Sta;

  /* SignalConversion generated from: '<Root>/SensorSignalsBus' */
  *rty_SensorSignalsBus_C1P26_Stat = *rtu_CAN3_PDM_Status_1_C1P26_Sta;

  /* SignalConversion generated from: '<Root>/SensorSignalsBus' */
  *rty_SensorSignalsBus_C1P28_Stat = *rtu_CAN3_PDM_Status_1_C1P28_Sta;

  /* SignalConversion generated from: '<Root>/SensorSignalsBus' */
  *rty_SensorSignalsBus_VDamperPot = *rtu_CAN3_DDU7_Analoge_1_VDamper;

  /* SignalConversion generated from: '<Root>/SensorSignalsBus' */
  *rty_SensorSignalsBus_C1P30_Stat = *rtu_CAN3_PDM_Status_1_C1P30_Sta;

  /* SignalConversion generated from: '<Root>/SensorSignalsBus' */
  *rty_SensorSignalsBus_C1P31_Stat = *rtu_CAN3_PDM_Status_1_C1P31_Sta;

  /* SignalConversion generated from: '<Root>/SensorSignalsBus' */
  *rty_SensorSignalsBus_C1P33_Stat = *rtu_CAN3_PDM_Status_1_C1P33_Sta;

  /* SignalConversion generated from: '<Root>/SensorSignalsBus' */
  *rty_SensorSignalsBus_C1P34_Stat = *rtu_CAN3_PDM_Status_1_C1P34_Sta;

  /* SignalConversion generated from: '<Root>/SensorSignalsBus' */
  *rty_SensorSignalsBus_C1P36_Stat = *rtu_CAN3_PDM_Status_1_C1P36_Sta;

  /* SignalConversion generated from: '<Root>/SensorSignalsBus' */
  *rty_SensorSignalsBus_C1P37_Stat = *rtu_CAN3_PDM_Status_2_C1P37_Sta;

  /* SignalConversion generated from: '<Root>/SensorSignalsBus' */
  *rty_SensorSignalsBus_C1P38_Stat = *rtu_CAN3_PDM_Status_2_C1P38_Sta;

  /* SignalConversion generated from: '<Root>/SensorSignalsBus' */
  *rty_SensorSignalsBus_C2P01_Stat = *rtu_CAN3_PDM_Status_2_C2P01_Sta;

  /* SignalConversion generated from: '<Root>/SensorSignalsBus' */
  *rty_SensorSignalsBus_C2P02_Stat = *rtu_CAN3_PDM_Status_2_C2P02_Sta;

  /* SignalConversion generated from: '<Root>/SensorSignalsBus' */
  *rty_SensorSignalsBus_C2P03_Stat = *rtu_CAN3_PDM_Status_2_C2P03_Sta;

  /* SignalConversion generated from: '<Root>/SensorSignalsBus' */
  *rty_SensorSignalsBus_VDamperP_e = *rtu_CAN3_DDU7_Analoge_1_VDamp_e;

  /* SignalConversion generated from: '<Root>/SensorSignalsBus' */
  *rty_SensorSignalsBus_C2P04_Stat = *rtu_CAN3_PDM_Status_2_C2P04_Sta;

  /* SignalConversion generated from: '<Root>/SensorSignalsBus' */
  *rty_SensorSignalsBus_C2P05_Stat = *rtu_CAN3_PDM_Status_2_C2P05_Sta;

  /* SignalConversion generated from: '<Root>/SensorSignalsBus' */
  *rty_SensorSignalsBus_C2P13_Stat = *rtu_CAN3_PDM_Status_2_C2P13_Sta;

  /* SignalConversion generated from: '<Root>/SensorSignalsBus' */
  *rty_SensorSignalsBus_C2P25_Stat = *rtu_CAN3_PDM_Status_2_C2P25_Sta;

  /* SignalConversion generated from: '<Root>/SensorSignalsBus' */
  *rty_SensorSignalsBus_C2P26_Stat = *rtu_CAN3_PDM_Status_2_C2P26_Sta;

  /* SignalConversion generated from: '<Root>/SensorSignalsBus' */
  *rty_SensorSignalsBus_C2P27_Stat = *rtu_CAN3_PDM_Status_2_C2P27_Sta;

  /* SignalConversion generated from: '<Root>/SensorSignalsBus' */
  *rty_SensorSignalsBus_C2P28_Stat = *rtu_CAN3_PDM_Status_2_C2P28_Sta;

  /* SignalConversion generated from: '<Root>/SensorSignalsBus' */
  *rty_SensorSignalsBus_C2P29_Stat = *rtu_CAN3_PDM_Status_2_C2P29_Sta;

  /* SignalConversion generated from: '<Root>/SensorSignalsBus' */
  *rty_SensorSignalsBus_C2P30_Stat = *rtu_CAN3_PDM_Status_2_C2P30_Sta;

  /* SignalConversion generated from: '<Root>/SensorSignalsBus' */
  *rty_SensorSignalsBus_C2P31_Stat = *rtu_CAN3_PDM_Status_2_C2P31_Sta;

  /* SignalConversion generated from: '<Root>/SensorSignalsBus' */
  *rty_SensorSignalsBus_NDisplayNu = *rtu_CAN3_DDU7_Analoge_2_NDispla;

  /* SignalConversion generated from: '<Root>/SensorSignalsBus' */
  *rty_SensorSignalsBus_C2P33_Stat = *rtu_CAN3_PDM_Status_2_C2P33_Sta;

  /* SignalConversion generated from: '<Root>/SensorSignalsBus' */
  *rty_SensorSignalsBus_C1P16_Digi = *rtu_CAN3_PDM_Status_3_C1P16_Dig;

  /* SignalConversion generated from: '<Root>/SensorSignalsBus' */
  *rty_SensorSignalsBus_C1P17_Digi = *rtu_CAN3_PDM_Status_3_C1P17_Dig;

  /* SignalConversion generated from: '<Root>/SensorSignalsBus' */
  *rty_SensorSignalsBus_C2P17_Digi = *rtu_CAN3_PDM_Status_3_C2P17_Dig;

  /* SignalConversion generated from: '<Root>/SensorSignalsBus' */
  *rty_SensorSignalsBus_C2P18_Digi = *rtu_CAN3_PDM_Status_3_C2P18_Dig;

  /* SignalConversion generated from: '<Root>/SensorSignalsBus' */
  *rty_SensorSignalsBus_C2P35_Stat = *rtu_CAN3_PDM_Status_3_C2P35_Sta;

  /* SignalConversion generated from: '<Root>/SensorSignalsBus' */
  *rty_SensorSignalsBus_C2P36_Stat = *rtu_CAN3_PDM_Status_3_C2P36_Sta;

  /* SignalConversion generated from: '<Root>/SensorSignalsBus' */
  *rty_SensorSignalsBus_C2P37_Stat = *rtu_CAN3_PDM_Status_3_C2P37_Sta;

  /* SignalConversion generated from: '<Root>/SensorSignalsBus' */
  *rty_SensorSignalsBus_C2P38_Stat = *rtu_CAN3_PDM_Status_3_C2P38_Sta;

  /* SignalConversion generated from: '<Root>/SensorSignalsBus' */
  *rty_SensorSignalsBus_ILVSystem = *rtu_CAN3_PDM_Status_3_ILVSystem;

  /* SignalConversion generated from: '<Root>/SensorSignalsBus' */
  *rty_SensorSignalsBus_VSteeringA = *rtu_CAN3_DDU7_Analoge_2_VSteeri;

  /* SignalConversion generated from: '<Root>/SensorSignalsBus' */
  *rty_SensorSignalsBus_TLVSystem = *rtu_CAN3_PDM_Status_3_TLVSystem;

  /* SignalConversion generated from: '<Root>/SensorSignalsBus' */
  *rty_SensorSignalsBus_VLVSystem = *rtu_CAN3_PDM_Status_3_VLVSystem;

  /* SignalConversion generated from: '<Root>/SensorSignalsBus' */
  *rty_SensorSignalsBus_VDamperP_a = *rtu_CAN3_DDU7_Analoge_1_VDamp_n;

  /* SignalConversion generated from: '<Root>/SensorSignalsBus' */
  *rty_SensorSignalsBus_VDamperP_i = *rtu_CAN3_DDU7_Analoge_1_VDamp_f;

  /* SignalConversion generated from: '<Root>/SensorSignalsBus' */
  *rty_SensorSignalsBus_VThrottleP = *rtu_CAN3_DDU7_Analoge_2_VThrott;

  /* SignalConversion generated from: '<Root>/SensorSignalsBus' */
  *rty_SensorSignalsBus_VThrottl_h = *rtu_CAN3_DDU7_Analoge_2_VThro_k;

  /* SignalConversion generated from: '<Root>/SensorSignalsBus' */
  *rty_SensorSignalsBus_BSteeringW = *rtu_CAN3_SteeringWheelBus_BStee;
}

/* Model initialize function */
void SensorSignals_initialize(const char_T **rt_errorStatus,
  RT_MODEL_SensorSignals_T *const SensorSignals_M)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(SensorSignals_M, rt_errorStatus);

  /* user code (Initialize function Body) */
  LL_TIM_EnableCounter(TIM2);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
