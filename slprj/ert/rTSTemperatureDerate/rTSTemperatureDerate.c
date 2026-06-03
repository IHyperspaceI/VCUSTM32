/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: rTSTemperatureDerate.c
 *
 * Code generated for Simulink model 'rTSTemperatureDerate'.
 *
 * Model version                  : 13.5
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Wed Jun  3 14:53:42 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "rTSTemperatureDerate.h"
#include "rtwtypes.h"
#include <math.h>
#include "rTSTemperatureDerate_private.h"

/* Output and update for referenced model: 'rTSTemperatureDerate' */
void rTSTemperatureDerate(const real_T *rtu_rInvTemperatureDerateFR, const
  real_T *rtu_rInvTemperatureDerateFL, const real_T *rtu_rInvTemperatureDerateRR,
  const real_T *rtu_rInvTemperatureDerateRL, const real_T
  *rtu_rMotorTemperatureDerateFR, const real_T *rtu_rMotorTemperatureDerateFL,
  const real_T *rtu_rMotorTemperatureDerateRR, const real_T
  *rtu_rMotorTemperatureDerateRL, real_T *rty_rTSTemperatureDerateFR, real_T
  *rty_rTSTemperatureDerateFL, real_T *rty_rTSTemperatureDerateRR, real_T
  *rty_rTSTemperatureDerateRL)
{
  /* MinMax: '<Root>/Min' */
  *rty_rTSTemperatureDerateFR = fmin(*rtu_rInvTemperatureDerateFR,
    *rtu_rMotorTemperatureDerateFR);

  /* MinMax: '<Root>/Min1' */
  *rty_rTSTemperatureDerateFL = fmin(*rtu_rInvTemperatureDerateFL,
    *rtu_rMotorTemperatureDerateFL);

  /* MinMax: '<Root>/Min2' */
  *rty_rTSTemperatureDerateRR = fmin(*rtu_rInvTemperatureDerateRR,
    *rtu_rMotorTemperatureDerateRR);

  /* MinMax: '<Root>/Min3' */
  *rty_rTSTemperatureDerateRL = fmin(*rtu_rInvTemperatureDerateRL,
    *rtu_rMotorTemperatureDerateRL);
}

/* Model initialize function */
void rTSTemperatureDerate_initialize(const char_T **rt_errorStatus,
  RT_MODEL_rTSTemperatureDerate_T *const rTSTemperatureDerate_M)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(rTSTemperatureDerate_M, rt_errorStatus);

  /* user code (Initialize function Body) */
  LL_TIM_EnableCounter(TIM2);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
