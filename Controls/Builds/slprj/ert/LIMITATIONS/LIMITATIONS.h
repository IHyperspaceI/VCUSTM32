/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: LIMITATIONS.h
 *
 * Code generated for Simulink model 'LIMITATIONS'.
 *
 * Model version                  : 13.5
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Tue Sep  8 11:44:08 2026
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
#include "PInvTemperatureDerate.h"
#include "PSOCDerate.h"
#include "PHighCellTemperatureDerate.h"
#include "PCellVoltageDerate.h"
#include "rSpeedRegenDerate.h"
#include "PMotorTemperatureDerate.h"
#include "PDischargeDerate.h"
#include "PRegenDerate.h"
#include "PTSTemperatureDerate.h"

/* Block states (default storage) for model 'LIMITATIONS' */
typedef struct {
  MdlrefDW_BAllowTorque_T Model_InstanceData;/* '<S1>/Model' */
  MdlrefDW_PInvTemperatureDerat_T Model1_InstanceData;/* '<S1>/Model1' */
  MdlrefDW_PSOCDerate_T Model2_InstanceData;/* '<S1>/Model2' */
  MdlrefDW_PHighCellTemperature_T Model3_InstanceData;/* '<S1>/Model3' */
  MdlrefDW_PCellVoltageDerate_T Model4_InstanceData;/* '<S1>/Model4' */
  MdlrefDW_rSpeedRegenDerate_T Model5_InstanceData;/* '<S1>/Model5' */
  MdlrefDW_PMotorTemperatureDer_T Model6_InstanceData;/* '<S1>/Model6' */
  MdlrefDW_PDischargeDerate_T Model7_InstanceData;/* '<S1>/Model7' */
  MdlrefDW_PRegenDerate_T Model8_InstanceData;/* '<S1>/Model8' */
  MdlrefDW_PTSTemperatureDerate_T Model9_InstanceData;/* '<S1>/Model9' */
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
extern void LIMITATIONS(const real_T *rtu_Global_InverterSignals_Inve, const
  real_T *rtu_Global_InverterSignals_In_g, const real_T
  *rtu_Global_InverterSignals_In_c, const real_T
  *rtu_Global_InverterSignals_In_e, const real_T
  *rtu_Global_InverterSignals_In_n, const real_T
  *rtu_Global_InverterSignals_In_f, const real_T
  *rtu_Global_InverterSignals_In_k, const real_T
  *rtu_Global_InverterSignals_In_h, const real_T
  *rtu_Global_InverterSignals_I_kw, const real_T
  *rtu_Global_InverterSignals_I_ka, const real_T
  *rtu_Global_InverterSignals__kaa, const real_T
  *rtu_Global_InverterSignals_I_el, const real_T
  *rtu_Global_WheelSpeeds_vWheelRL, const real_T
  *rtu_Global_WheelSpeeds_vWheelRR, const real_T
  *rtu_Global_WheelSpeeds_vWheelFL, const real_T
  *rtu_Global_WheelSpeeds_vWheelFR, const real_T *rtu_Global_BMSSignals_VCellMax,
  const real_T *rtu_Global_BMSSignals_VCellMin, const real_T
  *rtu_Global_BMSSignals_TCellMax, const real_T *rtu_Global_BMSSignals_VDCAccumu,
  const real_T *rtu_Global_BMSSignals_IIVTS, const boolean_T
  *rtu_Global_Systems_BThrottleErr, const boolean_T
  *rtu_Global_Systems_BBrakeError, const boolean_T *rtu_Global_Systems_BBrakeOn,
  const boolean_T *rtu_Global_Systems_BAppsOK, const boolean_T
  *rtu_Global_Systems_BRegenOn, const real_T *rtu_Global_Systems_TMotorMax,
  const real_T *rtu_Global_Systems_TInvMax, const boolean_T
  *rtu_Global_Stateflow_BReadyToDr, boolean_T *rty_Limitations_BDischargeAllow,
  real_T *rty_Limitations_PInvTemperature, real_T
  *rty_Limitations_PInvTemperatu_c, real_T *rty_Limitations_PInvTemperatu_e,
  real_T *rty_Limitations_PInvTemperatu_n, real_T
  *rty_Limitations_PInvTemperatu_f, real_T *rty_Limitations_PMotorTemperatu,
  real_T *rty_Limitations_PMotorTempera_h, real_T
  *rty_Limitations_PMotorTempera_k, real_T *rty_Limitations_PMotorTemper_ka,
  real_T *rty_Limitations_PMotorTempe_kaa, real_T
  *rty_Limitations_PTSTemperatureD, real_T *rty_Limitations_PTSTemperatur_c,
  real_T *rty_Limitations_PTSTemperatur_e, real_T
  *rty_Limitations_PTSTemperatur_o, real_T *rty_Limitations_PHighCellTemper,
  real_T *rty_Limitations_PLowCellVoltage, real_T
  *rty_Limitations_PHighCellVoltag, real_T *rty_Limitations_PSOCDischargeDe,
  real_T *rty_Limitations_PSOCRegenDerate, real_T
  *rty_Limitations_rSpeedRegenDera, real_T *rty_Limitations_rSpeedRegenDe_i,
  real_T *rty_Limitations_rSpeedRegenDe_p, real_T
  *rty_Limitations_rSpeedRegenD_pe, boolean_T *rty_Limitations_BSpeedDerateOn,
  real_T *rty_Limitations_PDischargeDerat, real_T *rty_Limitations_PRegenDerate);

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
