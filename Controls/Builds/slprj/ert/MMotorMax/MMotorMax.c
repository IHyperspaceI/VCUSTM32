/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: MMotorMax.c
 *
 * Code generated for Simulink model 'MMotorMax'.
 *
 * Model version                  : 13.3
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Tue Sep  8 11:40:33 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "MMotorMax.h"
#include "rtwtypes.h"
#include <math.h>
#include "MMotorMax_private.h"

/* Output and update for referenced model: 'MMotorMax' */
void MMotorMax(const real_T *rtu_nMotorFL, const real_T *rtu_nMotorFR, const
               real_T *rtu_nMotorRL, const real_T *rtu_nMotorRR, real_T
               *rty_MMotorMaxFL, real_T *rty_MMotorMaxFR, real_T
               *rty_MMotorMaxRL, real_T *rty_MMotorMaxRR)
{
  /* Switch: '<Root>/Switch' */
  if (*rtu_nMotorFL > 2000.0) {
    /* SignalConversion generated from: '<Root>/MMotorMaxFL' incorporates:
     *  Constant: '<Root>/Constant1'
     *  Constant: '<Root>/Constant2'
     *  Gain: '<Root>/Gain'
     *  Gain: '<Root>/Gain1'
     *  MinMax: '<Root>/Min'
     *  Product: '<Root>/Divide'
     */
    *rty_MMotorMaxFL = fmin(28500.0 / (0.10471975511965977 * *rtu_nMotorFL) *
      10.204081632653061, 102.4);
  } else {
    /* SignalConversion generated from: '<Root>/MMotorMaxFL' incorporates:
     *  Constant: '<Root>/Constant'
     */
    *rty_MMotorMaxFL = 102.4;
  }

  if (*rtu_nMotorFR > 2000.0) {
    /* SignalConversion generated from: '<Root>/MMotorMaxFR' incorporates:
     *  Constant: '<Root>/Constant1'
     *  Constant: '<Root>/Constant2'
     *  Gain: '<Root>/Gain'
     *  Gain: '<Root>/Gain1'
     *  MinMax: '<Root>/Min'
     *  Product: '<Root>/Divide'
     */
    *rty_MMotorMaxFR = fmin(28500.0 / (0.10471975511965977 * *rtu_nMotorFR) *
      10.204081632653061, 102.4);
  } else {
    /* SignalConversion generated from: '<Root>/MMotorMaxFR' incorporates:
     *  Constant: '<Root>/Constant'
     */
    *rty_MMotorMaxFR = 102.4;
  }

  /* End of Switch: '<Root>/Switch' */

  /* Switch: '<Root>/Switch1' */
  if (*rtu_nMotorRL > 2000.0) {
    /* SignalConversion generated from: '<Root>/MMotorMaxRL' incorporates:
     *  Constant: '<Root>/Constant4'
     *  Constant: '<Root>/Constant5'
     *  Gain: '<Root>/Gain2'
     *  Gain: '<Root>/Gain3'
     *  MinMax: '<Root>/Min1'
     *  Product: '<Root>/Divide1'
     */
    *rty_MMotorMaxRL = fmin(28500.0 / (0.10471975511965977 * *rtu_nMotorRL) *
      10.204081632653061, 204.8);
  } else {
    /* SignalConversion generated from: '<Root>/MMotorMaxRL' incorporates:
     *  Constant: '<Root>/Constant3'
     */
    *rty_MMotorMaxRL = 204.8;
  }

  if (*rtu_nMotorRR > 2000.0) {
    /* SignalConversion generated from: '<Root>/MMotorMaxRR' incorporates:
     *  Constant: '<Root>/Constant4'
     *  Constant: '<Root>/Constant5'
     *  Gain: '<Root>/Gain2'
     *  Gain: '<Root>/Gain3'
     *  MinMax: '<Root>/Min1'
     *  Product: '<Root>/Divide1'
     */
    *rty_MMotorMaxRR = fmin(28500.0 / (0.10471975511965977 * *rtu_nMotorRR) *
      10.204081632653061, 204.8);
  } else {
    /* SignalConversion generated from: '<Root>/MMotorMaxRR' incorporates:
     *  Constant: '<Root>/Constant3'
     */
    *rty_MMotorMaxRR = 204.8;
  }

  /* End of Switch: '<Root>/Switch1' */
}

/* Model initialize function */
void MMotorMax_initialize(const char_T **rt_errorStatus, RT_MODEL_MMotorMax_T *
  const MMotorMax_M)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(MMotorMax_M, rt_errorStatus);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
