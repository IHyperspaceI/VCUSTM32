/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: SensorSignals.h
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

#ifndef SensorSignals_h_
#define SensorSignals_h_
#ifndef SensorSignals_COMMON_INCLUDES_
#define SensorSignals_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                                 /* SensorSignals_COMMON_INCLUDES_ */

#include "SensorSignals_types.h"

/* user code (top of header file) */
#include "stm32h7xx_ll_tim.h"

/* Real-time Model Data Structure */
struct tag_RTM_SensorSignals_T {
  const char_T **errorStatus;
};

typedef struct {
  RT_MODEL_SensorSignals_T rtm;
} MdlrefDW_SensorSignals_T;

/* Model reference registration function */
extern void SensorSignals_initialize(const char_T **rt_errorStatus,
  RT_MODEL_SensorSignals_T *const SensorSignals_M);
extern void SensorSignals(const real_T *rtu_CAN3_DDU7_Analoge_1_pBrakeF, const
  real_T *rtu_CAN3_DDU7_Analoge_1_pBrakeR, const real_T
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
  *rtu_CAN3_SteeringWheelBus_VRe_i, real_T *rty_SensorSignalsBus_pBrakeF, real_T
  *rty_SensorSignalsBus_pBrakeR, real_T *rty_SensorSignalsBus_VDamperPot, real_T
  *rty_SensorSignalsBus_VDamperP_e, real_T *rty_SensorSignalsBus_NDisplayNu,
  real_T *rty_SensorSignalsBus_VSteeringA, real_T
  *rty_SensorSignalsBus_VThrottleP, real_T *rty_SensorSignalsBus_VThrottl_h,
  boolean_T *rty_SensorSignalsBus_BSteeringW, boolean_T
  *rty_SensorSignalsBus_BSteerin_k, boolean_T *rty_SensorSignalsBus_BSteeri_ka,
  boolean_T *rty_SensorSignalsBus_BSteerin_e, boolean_T
  *rty_SensorSignalsBus_BSteerin_c, boolean_T *rty_SensorSignalsBus_BSteeri_ez,
  boolean_T *rty_SensorSignalsBus_BSteerin_o, boolean_T
  *rty_SensorSignalsBus_BSteerin_p, real_T *rty_SensorSignalsBus_VRegenPadd,
  real_T *rty_SensorSignalsBus_VRegenPa_d, real_T
  *rty_SensorSignalsBus_C1P01_Stat, real_T *rty_SensorSignalsBus_C1P02_Stat,
  real_T *rty_SensorSignalsBus_C1P03_Stat, real_T
  *rty_SensorSignalsBus_C1P04_Stat, real_T *rty_SensorSignalsBus_C1P07_Stat,
  real_T *rty_SensorSignalsBus_C1P11_Stat, real_T
  *rty_SensorSignalsBus_C1P12_Stat, real_T *rty_SensorSignalsBus_C1P13_Stat,
  real_T *rty_SensorSignalsBus_C1P25_Stat, real_T
  *rty_SensorSignalsBus_C1P26_Stat, real_T *rty_SensorSignalsBus_C1P28_Stat,
  real_T *rty_SensorSignalsBus_C1P30_Stat, real_T
  *rty_SensorSignalsBus_C1P31_Stat, real_T *rty_SensorSignalsBus_C1P33_Stat,
  real_T *rty_SensorSignalsBus_C1P34_Stat, real_T
  *rty_SensorSignalsBus_C1P36_Stat, real_T *rty_SensorSignalsBus_C1P37_Stat,
  real_T *rty_SensorSignalsBus_C1P38_Stat, real_T
  *rty_SensorSignalsBus_C2P01_Stat, real_T *rty_SensorSignalsBus_C2P02_Stat,
  real_T *rty_SensorSignalsBus_C2P03_Stat, real_T
  *rty_SensorSignalsBus_C2P04_Stat, real_T *rty_SensorSignalsBus_C2P05_Stat,
  real_T *rty_SensorSignalsBus_C2P13_Stat, real_T
  *rty_SensorSignalsBus_C2P25_Stat, real_T *rty_SensorSignalsBus_C2P26_Stat,
  real_T *rty_SensorSignalsBus_C2P27_Stat, real_T
  *rty_SensorSignalsBus_C2P28_Stat, real_T *rty_SensorSignalsBus_C2P29_Stat,
  real_T *rty_SensorSignalsBus_C2P30_Stat, real_T
  *rty_SensorSignalsBus_C2P31_Stat, real_T *rty_SensorSignalsBus_C2P33_Stat,
  real_T *rty_SensorSignalsBus_C1P16_Digi, real_T
  *rty_SensorSignalsBus_C1P17_Digi, real_T *rty_SensorSignalsBus_C2P17_Digi,
  real_T *rty_SensorSignalsBus_C2P18_Digi, real_T
  *rty_SensorSignalsBus_C2P35_Stat, real_T *rty_SensorSignalsBus_C2P36_Stat,
  real_T *rty_SensorSignalsBus_C2P37_Stat, real_T
  *rty_SensorSignalsBus_C2P38_Stat, real_T *rty_SensorSignalsBus_ILVSystem,
  real_T *rty_SensorSignalsBus_TLVSystem, real_T *rty_SensorSignalsBus_VLVSystem,
  real_T *rty_SensorSignalsBus_VDamperP_a, real_T
  *rty_SensorSignalsBus_VDamperP_i);

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
 * '<Root>' : 'SensorSignals'
 * '<S1>'   : 'SensorSignals/SensorSignals System'
 */
#endif                                 /* SensorSignals_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
