/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: LIMITATIONS.h
 *
 * Code generated for Simulink model 'LIMITATIONS'.
 *
 * Model version                  : 13.6
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Tue Jun  2 18:48:57 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef LIMITATIONS_h_
#define LIMITATIONS_h_
#ifndef LIMITATIONS_COMMON_INCLUDES_
#define LIMITATIONS_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                                 /* LIMITATIONS_COMMON_INCLUDES_ */

#include "LIMITATIONS_types.h"
#include "BAllowTorque.h"
#include "rInvTemperatureDerate.h"
#include "rSOCDerate.h"
#include "rHighCellTemperatureDerate.h"
#include "rLowCellVoltageDerate.h"
#include "rSpeedRegenDerate.h"
#include "rMotorTemperatureDerate.h"
#include "rDischargeDerate.h"
#include "rRegenDerate.h"
#include "rTSTemperatureDerate.h"

/* user code (top of header file) */
#include "stm32h7xx_ll_tim.h"

/* Block states (default storage) for model 'LIMITATIONS' */
typedef struct {
  MdlrefDW_BAllowTorque_T Model_InstanceData;/* '<S1>/Model' */
  MdlrefDW_rInvTemperatureDerat_T Model1_InstanceData;/* '<S1>/Model1' */
  MdlrefDW_rSOCDerate_T Model2_InstanceData;/* '<S1>/Model2' */
  MdlrefDW_rHighCellTemperature_T Model3_InstanceData;/* '<S1>/Model3' */
  MdlrefDW_rLowCellVoltageDerat_T Model4_InstanceData;/* '<S1>/Model4' */
  MdlrefDW_rSpeedRegenDerate_T Model5_InstanceData;/* '<S1>/Model5' */
  MdlrefDW_rMotorTemperatureDer_T Model6_InstanceData;/* '<S1>/Model6' */
  MdlrefDW_rDischargeDerate_T Model7_InstanceData;/* '<S1>/Model7' */
  MdlrefDW_rRegenDerate_T Model8_InstanceData;/* '<S1>/Model8' */
  MdlrefDW_rTSTemperatureDerate_T Model9_InstanceData;/* '<S1>/Model9' */
} DW_LIMITATIONS_f_T;

/* Real-time Model Data Structure */
struct tag_RTM_LIMITATIONS_T {
  const char_T **errorStatus;
};

typedef struct {
  DW_LIMITATIONS_f_T rtdw;
  RT_MODEL_LIMITATIONS_T rtm;
} MdlrefDW_LIMITATIONS_T;

/* Model reference registration function */
extern void LIMITATIONS_initialize(const char_T **rt_errorStatus,
  RT_MODEL_LIMITATIONS_T *const LIMITATIONS_M, DW_LIMITATIONS_f_T *localDW);
extern void LIMITATIONS(const real_T *rtu_Global_InverterSignalsBus_I, const
  real_T *rtu_Global_InverterSignalsBus_g, const real_T
  *rtu_Global_InverterSignalsBus_c, const real_T
  *rtu_Global_InverterSignalsBus_e, const real_T
  *rtu_Global_InverterSignalsBus_n, const real_T
  *rtu_Global_InverterSignalsBus_f, const real_T
  *rtu_Global_InverterSignalsBus_k, const real_T
  *rtu_Global_InverterSignalsBus_h, const real_T
  *rtu_Global_InverterSignalsBu_kw, const real_T
  *rtu_Global_InverterSignalsBu_ka, const real_T
  *rtu_Global_InverterSignalsB_kaa, const real_T
  *rtu_Global_InverterSignalsBu_el, const real_T
  *rtu_Global_BMSSignalsBus_VCellM, const real_T
  *rtu_Global_BMSSignalsBus_TCellM, const real_T
  *rtu_Global_BMSSignalsBus_VDCAcc, const real_T *rtu_Global_BMSSignalsBus_IIVTS,
  const boolean_T *rtu_Global_SystemsBus_BThrottle, const boolean_T
  *rtu_Global_SystemsBus_BBrakeErr, const boolean_T
  *rtu_Global_SystemsBus_BBrakeOn, const boolean_T
  *rtu_Global_SystemsBus_BAppsOK, const real_T *rtu_Global_SystemsBus_vChassis,
  const boolean_T *rtu_Global_SystemsBus_BEMSActiv, const real_T
  *rtu_Global_SystemsBus_TMotorMax, const real_T *rtu_Global_SystemsBus_TInvMax,
  const boolean_T *rtu_Global_StateflowBus_BReadyT, boolean_T
  *rty_Limitations_BDischargeAllow, real_T *rty_Limitations_rInvTemperature,
  real_T *rty_Limitations_rInvTemperatu_c, real_T
  *rty_Limitations_rInvTemperatu_e, real_T *rty_Limitations_rInvTemperatu_n,
  real_T *rty_Limitations_rInvTemperatu_f, real_T
  *rty_Limitations_rMotorTemperatu, real_T *rty_Limitations_rMotorTempera_h,
  real_T *rty_Limitations_rMotorTempera_k, real_T
  *rty_Limitations_rMotorTemper_ka, real_T *rty_Limitations_rMotorTempe_kaa,
  real_T *rty_Limitations_rTSTemperatureD, real_T
  *rty_Limitations_rTSTemperatur_c, real_T *rty_Limitations_rTSTemperatur_e,
  real_T *rty_Limitations_rTSTemperatur_o, real_T
  *rty_Limitations_rHighCellTemper, real_T *rty_Limitations_rHighCellTemp_d,
  real_T *rty_Limitations_rLowCellVoltage, real_T
  *rty_Limitations_rSOCDischargeDe, real_T *rty_Limitations_rSOCRegenDerate,
  real_T *rty_Limitations_rSpeedRegenDera, real_T
  *rty_Limitations_rDischargeDerat, real_T *rty_Limitations_rRegenDerate);

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
 * '<Root>' : 'LIMITATIONS'
 * '<S1>'   : 'LIMITATIONS/Limitations Model '
 */
#endif                                 /* LIMITATIONS_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
