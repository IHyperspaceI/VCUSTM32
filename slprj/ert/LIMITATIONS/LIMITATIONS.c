/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: LIMITATIONS.c
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

#include "LIMITATIONS.h"
#include "rtwtypes.h"
#include "LIMITATIONS_private.h"
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

/* Output and update for referenced model: 'LIMITATIONS' */
void LIMITATIONS(const real_T *rtu_Global_InverterSignalsBus_I, const real_T
                 *rtu_Global_InverterSignalsBus_g, const real_T
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
                 *rtu_Global_BMSSignalsBus_VDCAcc, const real_T
                 *rtu_Global_BMSSignalsBus_IIVTS, const boolean_T
                 *rtu_Global_SystemsBus_BThrottle, const boolean_T
                 *rtu_Global_SystemsBus_BBrakeErr, const boolean_T
                 *rtu_Global_SystemsBus_BBrakeOn, const boolean_T
                 *rtu_Global_SystemsBus_BAppsOK, const real_T
                 *rtu_Global_SystemsBus_vChassis, const boolean_T
                 *rtu_Global_SystemsBus_BEMSActiv, const real_T
                 *rtu_Global_SystemsBus_TMotorMax, const real_T
                 *rtu_Global_SystemsBus_TInvMax, const boolean_T
                 *rtu_Global_StateflowBus_BReadyT, boolean_T
                 *rty_Limitations_BDischargeAllow, real_T
                 *rty_Limitations_rInvTemperature, real_T
                 *rty_Limitations_rInvTemperatu_c, real_T
                 *rty_Limitations_rInvTemperatu_e, real_T
                 *rty_Limitations_rInvTemperatu_n, real_T
                 *rty_Limitations_rInvTemperatu_f, real_T
                 *rty_Limitations_rMotorTemperatu, real_T
                 *rty_Limitations_rMotorTempera_h, real_T
                 *rty_Limitations_rMotorTempera_k, real_T
                 *rty_Limitations_rMotorTemper_ka, real_T
                 *rty_Limitations_rMotorTempe_kaa, real_T
                 *rty_Limitations_rTSTemperatureD, real_T
                 *rty_Limitations_rTSTemperatur_c, real_T
                 *rty_Limitations_rTSTemperatur_e, real_T
                 *rty_Limitations_rTSTemperatur_o, real_T
                 *rty_Limitations_rHighCellTemper, real_T
                 *rty_Limitations_rHighCellTemp_d, real_T
                 *rty_Limitations_rLowCellVoltage, real_T
                 *rty_Limitations_rSOCDischargeDe, real_T
                 *rty_Limitations_rSOCRegenDerate, real_T
                 *rty_Limitations_rSpeedRegenDera, real_T
                 *rty_Limitations_rDischargeDerat, real_T
                 *rty_Limitations_rRegenDerate)
{
  /* ModelReference: '<S1>/Model' */
  BAllowTorque(rtu_Global_StateflowBus_BReadyT, rtu_Global_SystemsBus_BBrakeOn,
               rtu_Global_SystemsBus_BThrottle, rtu_Global_SystemsBus_BBrakeErr,
               rtu_Global_SystemsBus_BAppsOK, rtu_Global_InverterSignalsBus_e,
               rtu_Global_InverterSignalsBu_ka, rtu_Global_InverterSignalsBus_I,
               rtu_Global_InverterSignalsBus_k, rtu_Global_BMSSignalsBus_IIVTS,
               rty_Limitations_BDischargeAllow);

  /* ModelReference: '<S1>/Model1' */
  rInvTemperatureDerate(rtu_Global_SystemsBus_TInvMax,
                        rtu_Global_InverterSignalsBu_el,
                        rtu_Global_InverterSignalsBus_f,
                        rtu_Global_InverterSignalsBu_kw,
                        rtu_Global_InverterSignalsBus_c,
                        rty_Limitations_rInvTemperature,
                        rty_Limitations_rInvTemperatu_c,
                        rty_Limitations_rInvTemperatu_e,
                        rty_Limitations_rInvTemperatu_n,
                        rty_Limitations_rInvTemperatu_f);

  /* ModelReference: '<S1>/Model2' */
  rSOCDerate(rtu_Global_BMSSignalsBus_VDCAcc, rty_Limitations_rSOCDischargeDe,
             rty_Limitations_rSOCRegenDerate);

  /* ModelReference: '<S1>/Model3' */
  rHighCellTemperatureDerate(rtu_Global_BMSSignalsBus_TCellM,
    rty_Limitations_rHighCellTemper, rty_Limitations_rHighCellTemp_d);

  /* ModelReference: '<S1>/Model4' */
  rLowCellVoltageDerate(rtu_Global_BMSSignalsBus_VCellM,
                        rty_Limitations_rLowCellVoltage);

  /* ModelReference: '<S1>/Model5' */
  rSpeedRegenDerate(rtu_Global_SystemsBus_vChassis,
                    rty_Limitations_rSpeedRegenDera);

  /* ModelReference: '<S1>/Model6' */
  rMotorTemperatureDerate(rtu_Global_SystemsBus_TMotorMax,
    rtu_Global_InverterSignalsB_kaa, rtu_Global_InverterSignalsBus_n,
    rtu_Global_InverterSignalsBus_h, rtu_Global_InverterSignalsBus_g,
    rty_Limitations_rMotorTemperatu, rty_Limitations_rMotorTempera_h,
    rty_Limitations_rMotorTempera_k, rty_Limitations_rMotorTemper_ka,
    rty_Limitations_rMotorTempe_kaa);

  /* ModelReference: '<S1>/Model7' */
  rDischargeDerate(rty_Limitations_BDischargeAllow,
                   rty_Limitations_rInvTemperature,
                   rty_Limitations_rMotorTemperatu,
                   rty_Limitations_rLowCellVoltage,
                   rty_Limitations_rHighCellTemper,
                   rty_Limitations_rSOCDischargeDe,
                   rtu_Global_SystemsBus_BEMSActiv,
                   rty_Limitations_rDischargeDerat);

  /* ModelReference: '<S1>/Model8' */
  rRegenDerate(rty_Limitations_rHighCellTemp_d, rty_Limitations_rSOCRegenDerate,
               rty_Limitations_rSpeedRegenDera, rty_Limitations_rRegenDerate);

  /* ModelReference: '<S1>/Model9' */
  rTSTemperatureDerate(rty_Limitations_rInvTemperatu_c,
                       rty_Limitations_rInvTemperatu_e,
                       rty_Limitations_rInvTemperatu_n,
                       rty_Limitations_rInvTemperatu_f,
                       rty_Limitations_rMotorTempera_h,
                       rty_Limitations_rMotorTempera_k,
                       rty_Limitations_rMotorTemper_ka,
                       rty_Limitations_rMotorTempe_kaa,
                       rty_Limitations_rTSTemperatureD,
                       rty_Limitations_rTSTemperatur_c,
                       rty_Limitations_rTSTemperatur_e,
                       rty_Limitations_rTSTemperatur_o);
}

/* Model initialize function */
void LIMITATIONS_initialize(const char_T **rt_errorStatus,
  RT_MODEL_LIMITATIONS_T *const LIMITATIONS_M, DW_LIMITATIONS_f_T *localDW)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(LIMITATIONS_M, rt_errorStatus);

  /* Model Initialize function for ModelReference Block: '<S1>/Model' */
  BAllowTorque_initialize(rtmGetErrorStatusPointer(LIMITATIONS_M),
    &(localDW->Model_InstanceData.rtm));

  /* Model Initialize function for ModelReference Block: '<S1>/Model1' */
  rInvTemperatureDerat_initialize(rtmGetErrorStatusPointer(LIMITATIONS_M),
    &(localDW->Model1_InstanceData.rtm));

  /* Model Initialize function for ModelReference Block: '<S1>/Model2' */
  rSOCDerate_initialize(rtmGetErrorStatusPointer(LIMITATIONS_M),
                        &(localDW->Model2_InstanceData.rtm));

  /* Model Initialize function for ModelReference Block: '<S1>/Model3' */
  rHighCellTemperature_initialize(rtmGetErrorStatusPointer(LIMITATIONS_M),
    &(localDW->Model3_InstanceData.rtm));

  /* Model Initialize function for ModelReference Block: '<S1>/Model4' */
  rLowCellVoltageDerat_initialize(rtmGetErrorStatusPointer(LIMITATIONS_M),
    &(localDW->Model4_InstanceData.rtm));

  /* Model Initialize function for ModelReference Block: '<S1>/Model5' */
  rSpeedRegenDerate_initialize(rtmGetErrorStatusPointer(LIMITATIONS_M),
    &(localDW->Model5_InstanceData.rtm));

  /* Model Initialize function for ModelReference Block: '<S1>/Model6' */
  rMotorTemperatureDer_initialize(rtmGetErrorStatusPointer(LIMITATIONS_M),
    &(localDW->Model6_InstanceData.rtm));

  /* Model Initialize function for ModelReference Block: '<S1>/Model7' */
  rDischargeDerate_initialize(rtmGetErrorStatusPointer(LIMITATIONS_M),
    &(localDW->Model7_InstanceData.rtm));

  /* Model Initialize function for ModelReference Block: '<S1>/Model8' */
  rRegenDerate_initialize(rtmGetErrorStatusPointer(LIMITATIONS_M),
    &(localDW->Model8_InstanceData.rtm));

  /* Model Initialize function for ModelReference Block: '<S1>/Model9' */
  rTSTemperatureDerate_initialize(rtmGetErrorStatusPointer(LIMITATIONS_M),
    &(localDW->Model9_InstanceData.rtm));

  /* user code (Initialize function Body) */
  LL_TIM_EnableCounter(TIM2);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
