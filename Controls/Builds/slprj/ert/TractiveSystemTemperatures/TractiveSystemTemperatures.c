/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: TractiveSystemTemperatures.c
 *
 * Code generated for Simulink model 'TractiveSystemTemperatures'.
 *
 * Model version                  : 13.3
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Tue Sep  8 11:41:34 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "TractiveSystemTemperatures.h"
#include "rtwtypes.h"
#include <math.h>
#include "TractiveSystemTemperatures_private.h"

/* Output and update for referenced model: 'TractiveSystemTemperatures' */
void TractiveSystemTemperatures(const real_T *rtu_TMotorFL, const real_T
  *rtu_TMotorFR, const real_T *rtu_TMotorRL, const real_T *rtu_TMotorRR, const
  real_T *rtu_TInvFL, const real_T *rtu_TInvFR, const real_T *rtu_TInvRL, const
  real_T *rtu_TInvRR, real_T *rty_TMotorMax, real_T *rty_TInvMax)
{
  /* MinMax: '<Root>/Max' */
  *rty_TMotorMax = fmax(fmax(fmax(*rtu_TMotorFL, *rtu_TMotorFR), *rtu_TMotorRL),
                        *rtu_TMotorRR);

  /* MinMax: '<Root>/Max1' */
  *rty_TInvMax = fmax(fmax(fmax(*rtu_TInvFL, *rtu_TInvFR), *rtu_TInvRL),
                      *rtu_TInvRR);
}

/* Model initialize function */
void TractiveSystemTemper_initialize(const char_T **rt_errorStatus,
  RT_MODEL_TractiveSystemTemper_T *const TractiveSystemTemperatures_M)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(TractiveSystemTemperatures_M, rt_errorStatus);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
