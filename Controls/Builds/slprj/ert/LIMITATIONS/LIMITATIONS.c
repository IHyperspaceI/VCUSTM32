/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: LIMITATIONS.c
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

#include "LIMITATIONS.h"
#include "rtwtypes.h"
#include "LIMITATIONS_private.h"
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

/* Output and update for referenced model: 'LIMITATIONS' */
void LIMITATIONS(const real_T *rtu_Global_InverterSignals_Inve, const real_T
                 *rtu_Global_InverterSignals_In_g, const real_T
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
                 *rtu_Global_WheelSpeeds_vWheelFR, const real_T
                 *rtu_Global_BMSSignals_VCellMax, const real_T
                 *rtu_Global_BMSSignals_VCellMin, const real_T
                 *rtu_Global_BMSSignals_TCellMax, const real_T
                 *rtu_Global_BMSSignals_VDCAccumu, const real_T
                 *rtu_Global_BMSSignals_IIVTS, const boolean_T
                 *rtu_Global_Systems_BThrottleErr, const boolean_T
                 *rtu_Global_Systems_BBrakeError, const boolean_T
                 *rtu_Global_Systems_BBrakeOn, const boolean_T
                 *rtu_Global_Systems_BAppsOK, const boolean_T
                 *rtu_Global_Systems_BRegenOn, const real_T
                 *rtu_Global_Systems_TMotorMax, const real_T
                 *rtu_Global_Systems_TInvMax, const boolean_T
                 *rtu_Global_Stateflow_BReadyToDr, boolean_T
                 *rty_Limitations_BDischargeAllow, real_T
                 *rty_Limitations_PInvTemperature, real_T
                 *rty_Limitations_PInvTemperatu_c, real_T
                 *rty_Limitations_PInvTemperatu_e, real_T
                 *rty_Limitations_PInvTemperatu_n, real_T
                 *rty_Limitations_PInvTemperatu_f, real_T
                 *rty_Limitations_PMotorTemperatu, real_T
                 *rty_Limitations_PMotorTempera_h, real_T
                 *rty_Limitations_PMotorTempera_k, real_T
                 *rty_Limitations_PMotorTemper_ka, real_T
                 *rty_Limitations_PMotorTempe_kaa, real_T
                 *rty_Limitations_PTSTemperatureD, real_T
                 *rty_Limitations_PTSTemperatur_c, real_T
                 *rty_Limitations_PTSTemperatur_e, real_T
                 *rty_Limitations_PTSTemperatur_o, real_T
                 *rty_Limitations_PHighCellTemper, real_T
                 *rty_Limitations_PLowCellVoltage, real_T
                 *rty_Limitations_PHighCellVoltag, real_T
                 *rty_Limitations_PSOCDischargeDe, real_T
                 *rty_Limitations_PSOCRegenDerate, real_T
                 *rty_Limitations_rSpeedRegenDera, real_T
                 *rty_Limitations_rSpeedRegenDe_i, real_T
                 *rty_Limitations_rSpeedRegenDe_p, real_T
                 *rty_Limitations_rSpeedRegenD_pe, boolean_T
                 *rty_Limitations_BSpeedDerateOn, real_T
                 *rty_Limitations_PDischargeDerat, real_T
                 *rty_Limitations_PRegenDerate)
{
  /* ModelReference: '<S1>/Model' */
  BAllowTorque(rtu_Global_Stateflow_BReadyToDr, rtu_Global_Systems_BBrakeOn,
               rtu_Global_Systems_BThrottleErr, rtu_Global_Systems_BBrakeError,
               rtu_Global_Systems_BAppsOK, rtu_Global_InverterSignals_In_e,
               rtu_Global_InverterSignals_I_ka, rtu_Global_InverterSignals_Inve,
               rtu_Global_InverterSignals_In_k, rtu_Global_BMSSignals_IIVTS,
               rtu_Global_Systems_BRegenOn, rty_Limitations_BDischargeAllow);

  /* ModelReference: '<S1>/Model1' */
  PInvTemperatureDerate(rtu_Global_Systems_TInvMax,
                        rtu_Global_InverterSignals_I_el,
                        rtu_Global_InverterSignals_In_f,
                        rtu_Global_InverterSignals_I_kw,
                        rtu_Global_InverterSignals_In_c,
                        rty_Limitations_PInvTemperature,
                        rty_Limitations_PInvTemperatu_c,
                        rty_Limitations_PInvTemperatu_e,
                        rty_Limitations_PInvTemperatu_n,
                        rty_Limitations_PInvTemperatu_f);

  /* ModelReference: '<S1>/Model2' */
  PSOCDerate(rtu_Global_BMSSignals_VDCAccumu, rty_Limitations_PSOCDischargeDe,
             rty_Limitations_PSOCRegenDerate);

  /* ModelReference: '<S1>/Model3' */
  PHighCellTemperatureDerate(rtu_Global_BMSSignals_TCellMax,
    rty_Limitations_PHighCellTemper);

  /* ModelReference: '<S1>/Model4' */
  PCellVoltageDerate(rtu_Global_BMSSignals_VCellMin,
                     rtu_Global_BMSSignals_VCellMax,
                     rty_Limitations_PLowCellVoltage,
                     rty_Limitations_PHighCellVoltag);

  /* ModelReference: '<S1>/Model5' */
  rSpeedRegenDerate(rtu_Global_WheelSpeeds_vWheelRR,
                    rtu_Global_WheelSpeeds_vWheelRL,
                    rtu_Global_WheelSpeeds_vWheelFR,
                    rtu_Global_WheelSpeeds_vWheelFL,
                    rty_Limitations_rSpeedRegenDera,
                    rty_Limitations_rSpeedRegenDe_i,
                    rty_Limitations_rSpeedRegenDe_p,
                    rty_Limitations_rSpeedRegenD_pe,
                    rty_Limitations_BSpeedDerateOn);

  /* ModelReference: '<S1>/Model6' */
  PMotorTemperatureDerate(rtu_Global_Systems_TMotorMax,
    rtu_Global_InverterSignals__kaa, rtu_Global_InverterSignals_In_n,
    rtu_Global_InverterSignals_In_h, rtu_Global_InverterSignals_In_g,
    rty_Limitations_PMotorTemperatu, rty_Limitations_PMotorTempera_h,
    rty_Limitations_PMotorTempera_k, rty_Limitations_PMotorTemper_ka,
    rty_Limitations_PMotorTempe_kaa);

  /* ModelReference: '<S1>/Model7' */
  PDischargeDerate(rty_Limitations_BDischargeAllow,
                   rty_Limitations_PLowCellVoltage,
                   rty_Limitations_PHighCellTemper,
                   rty_Limitations_PSOCDischargeDe,
                   rty_Limitations_PDischargeDerat);

  /* ModelReference: '<S1>/Model8' */
  PRegenDerate(rty_Limitations_PHighCellTemper, rty_Limitations_PSOCRegenDerate,
               rty_Limitations_PHighCellVoltag, rty_Limitations_PRegenDerate);

  /* ModelReference: '<S1>/Model9' */
  PTSTemperatureDerate(rty_Limitations_PInvTemperatu_c,
                       rty_Limitations_PMotorTempera_h,
                       rty_Limitations_PInvTemperatu_e,
                       rty_Limitations_PMotorTempera_k,
                       rty_Limitations_PInvTemperatu_n,
                       rty_Limitations_PMotorTemper_ka,
                       rty_Limitations_PInvTemperatu_f,
                       rty_Limitations_PMotorTempe_kaa,
                       rty_Limitations_PTSTemperatureD,
                       rty_Limitations_PTSTemperatur_c,
                       rty_Limitations_PTSTemperatur_e,
                       rty_Limitations_PTSTemperatur_o);
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
  PInvTemperatureDerat_initialize(rtmGetErrorStatusPointer(LIMITATIONS_M),
    &(localDW->Model1_InstanceData.rtm));

  /* Model Initialize function for ModelReference Block: '<S1>/Model2' */
  PSOCDerate_initialize(rtmGetErrorStatusPointer(LIMITATIONS_M),
                        &(localDW->Model2_InstanceData.rtm));

  /* Model Initialize function for ModelReference Block: '<S1>/Model3' */
  PHighCellTemperature_initialize(rtmGetErrorStatusPointer(LIMITATIONS_M),
    &(localDW->Model3_InstanceData.rtm));

  /* Model Initialize function for ModelReference Block: '<S1>/Model4' */
  PCellVoltageDerate_initialize(rtmGetErrorStatusPointer(LIMITATIONS_M),
    &(localDW->Model4_InstanceData.rtm));

  /* Model Initialize function for ModelReference Block: '<S1>/Model5' */
  rSpeedRegenDerate_initialize(rtmGetErrorStatusPointer(LIMITATIONS_M),
    &(localDW->Model5_InstanceData.rtm));

  /* Model Initialize function for ModelReference Block: '<S1>/Model6' */
  PMotorTemperatureDer_initialize(rtmGetErrorStatusPointer(LIMITATIONS_M),
    &(localDW->Model6_InstanceData.rtm));

  /* Model Initialize function for ModelReference Block: '<S1>/Model7' */
  PDischargeDerate_initialize(rtmGetErrorStatusPointer(LIMITATIONS_M),
    &(localDW->Model7_InstanceData.rtm));

  /* Model Initialize function for ModelReference Block: '<S1>/Model8' */
  PRegenDerate_initialize(rtmGetErrorStatusPointer(LIMITATIONS_M),
    &(localDW->Model8_InstanceData.rtm));

  /* Model Initialize function for ModelReference Block: '<S1>/Model9' */
  PTSTemperatureDerate_initialize(rtmGetErrorStatusPointer(LIMITATIONS_M),
    &(localDW->Model9_InstanceData.rtm));
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
