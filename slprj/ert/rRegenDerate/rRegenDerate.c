/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: rRegenDerate.c
 *
 * Code generated for Simulink model 'rRegenDerate'.
 *
 * Model version                  : 13.5
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Wed Jun  3 14:53:26 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "rRegenDerate.h"
#include "rtwtypes.h"
#include <math.h>
#include "rRegenDerate_private.h"

/* Output and update for referenced model: 'rRegenDerate' */
void rRegenDerate(const real_T *rtu_rHighCellTemperatureRegenDe, const real_T
                  *rtu_rSOCRegenDerate, const real_T *rtu_rSpeedRegenDerate,
                  real_T *rty_rRegenDerate)
{
  /* MinMax: '<Root>/Min' */
  *rty_rRegenDerate = fmin(fmin(*rtu_rHighCellTemperatureRegenDe,
    *rtu_rSOCRegenDerate), *rtu_rSpeedRegenDerate);
}

/* Model initialize function */
void rRegenDerate_initialize(const char_T **rt_errorStatus,
  RT_MODEL_rRegenDerate_T *const rRegenDerate_M)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(rRegenDerate_M, rt_errorStatus);

  /* user code (Initialize function Body) */
  LL_TIM_EnableCounter(TIM2);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
