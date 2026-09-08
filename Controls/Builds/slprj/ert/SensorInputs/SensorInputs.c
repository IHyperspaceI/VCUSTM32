/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: SensorInputs.c
 *
 * Code generated for Simulink model 'SensorInputs'.
 *
 * Model version                  : 13.3
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Tue Sep  8 11:37:43 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "SensorInputs.h"
#include "rtwtypes.h"
#include "SensorInputs_private.h"

/* Output and update for referenced model: 'SensorInputs' */
void SensorInputs(const boolean_T *rtu_CAN3Bus_STW_BSteeringWheelB, const
                  boolean_T *rtu_CAN3Bus_STW_BSteeringWhee_g, const boolean_T
                  *rtu_CAN3Bus_STW_BSteeringWhee_c, const boolean_T
                  *rtu_CAN3Bus_STW_BSteeringWhee_e, const real_T
                  *rtu_CAN3Bus_STW_NPageSelectRota, const real_T
                  *rtu_CAN3Bus_STW_NParameterRotar, const real_T
                  *rtu_CAN3Bus_STW_NEventModeRotar, const real_T
                  *rtu_CAN3Bus_STW_VRegenPaddle1, const real_T
                  *rtu_CAN3Bus_STW_VRegenPaddle2, const real_T
                  *rtu_CAN3Bus_DDU7_NDisplayNumber, const real_T
                  *rtu_CAN3Bus_DDU7_VSteeringAngle, const real_T
                  *rtu_CAN3Bus_DDU7_VThrottlePedal, const real_T
                  *rtu_CAN3Bus_DDU7_VThrottlePed_c, const real_T
                  *rtu_CAN3Bus_DDU7_VBrakeF, const real_T
                  *rtu_CAN3Bus_DDU7_VBrakeR, const real_T
                  *rtu_CAN3Bus_DDU7_VDamperPotenti, const real_T
                  *rtu_CAN3Bus_DDU7_VDamperPoten_d, real_T
                  *rty_SensorSignals_VDamperPotent, real_T
                  *rty_SensorSignals_VDamperPote_g, real_T
                  *rty_SensorSignals_NDisplayNumbe, real_T
                  *rty_SensorSignals_VSteeringAngl, real_T
                  *rty_SensorSignals_VThrottlePeda, real_T
                  *rty_SensorSignals_VThrottlePe_f, boolean_T
                  *rty_SensorSignals_BSteeringWhee, boolean_T
                  *rty_SensorSignals_BSteeringWh_h, boolean_T
                  *rty_SensorSignals_BSteeringWh_k, boolean_T
                  *rty_SensorSignals_BSteeringW_ka, real_T
                  *rty_SensorSignals_NPageSelectRo, real_T
                  *rty_SensorSignals_NParameterRot, real_T
                  *rty_SensorSignals_NEventModeRot, real_T
                  *rty_SensorSignals_VRegenPaddle1, real_T
                  *rty_SensorSignals_VRegenPaddle2, real_T
                  *rty_SensorSignals_VBrakeF, real_T *rty_SensorSignals_VBrakeR)
{
  /* SignalConversion generated from: '<Root>/SensorSignals' */
  *rty_SensorSignals_VDamperPotent = *rtu_CAN3Bus_DDU7_VDamperPoten_d;

  /* SignalConversion generated from: '<Root>/SensorSignals' */
  *rty_SensorSignals_BSteeringW_ka = *rtu_CAN3Bus_STW_BSteeringWhee_e;

  /* SignalConversion generated from: '<Root>/SensorSignals' */
  *rty_SensorSignals_NPageSelectRo = *rtu_CAN3Bus_STW_NPageSelectRota;

  /* SignalConversion generated from: '<Root>/SensorSignals' */
  *rty_SensorSignals_NParameterRot = *rtu_CAN3Bus_STW_NParameterRotar;

  /* SignalConversion generated from: '<Root>/SensorSignals' */
  *rty_SensorSignals_NEventModeRot = *rtu_CAN3Bus_STW_NEventModeRotar;

  /* SignalConversion generated from: '<Root>/SensorSignals' */
  *rty_SensorSignals_VRegenPaddle1 = *rtu_CAN3Bus_STW_VRegenPaddle1;

  /* SignalConversion generated from: '<Root>/SensorSignals' */
  *rty_SensorSignals_VRegenPaddle2 = *rtu_CAN3Bus_STW_VRegenPaddle2;

  /* SignalConversion generated from: '<Root>/SensorSignals' */
  *rty_SensorSignals_VBrakeF = *rtu_CAN3Bus_DDU7_VBrakeF;

  /* SignalConversion generated from: '<Root>/SensorSignals' */
  *rty_SensorSignals_VBrakeR = *rtu_CAN3Bus_DDU7_VBrakeR;

  /* SignalConversion generated from: '<Root>/SensorSignals' */
  *rty_SensorSignals_VDamperPote_g = *rtu_CAN3Bus_DDU7_VDamperPotenti;

  /* SignalConversion generated from: '<Root>/SensorSignals' */
  *rty_SensorSignals_NDisplayNumbe = *rtu_CAN3Bus_DDU7_NDisplayNumber;

  /* SignalConversion generated from: '<Root>/SensorSignals' */
  *rty_SensorSignals_VSteeringAngl = *rtu_CAN3Bus_DDU7_VSteeringAngle;

  /* SignalConversion generated from: '<Root>/SensorSignals' */
  *rty_SensorSignals_VThrottlePeda = *rtu_CAN3Bus_DDU7_VThrottlePedal;

  /* SignalConversion generated from: '<Root>/SensorSignals' */
  *rty_SensorSignals_VThrottlePe_f = *rtu_CAN3Bus_DDU7_VThrottlePed_c;

  /* SignalConversion generated from: '<Root>/SensorSignals' */
  *rty_SensorSignals_BSteeringWhee = *rtu_CAN3Bus_STW_BSteeringWheelB;

  /* SignalConversion generated from: '<Root>/SensorSignals' */
  *rty_SensorSignals_BSteeringWh_h = *rtu_CAN3Bus_STW_BSteeringWhee_g;

  /* SignalConversion generated from: '<Root>/SensorSignals' */
  *rty_SensorSignals_BSteeringWh_k = *rtu_CAN3Bus_STW_BSteeringWhee_c;
}

/* Model initialize function */
void SensorInputs_initialize(const char_T **rt_errorStatus,
  RT_MODEL_SensorInputs_T *const SensorInputs_M)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(SensorInputs_M, rt_errorStatus);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
