/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: PTSTemperatureDerate.c
 *
 * Code generated for Simulink model 'PTSTemperatureDerate'.
 *
 * Model version                  : 13.3
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Tue Sep  8 11:38:45 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "PTSTemperatureDerate.h"
#include "rtwtypes.h"
#include <math.h>
#include "PTSTemperatureDerate_private.h"

/* Output and update for referenced model: 'PTSTemperatureDerate' */
void PTSTemperatureDerate(const real_T *rtu_PInvTemperatureDerateFR, const
  real_T *rtu_PMotorTemperatureDerateFR, const real_T
  *rtu_PInvTemperatureDerateFL, const real_T *rtu_PMotorTemperatureDerateFL,
  const real_T *rtu_PInvTemperatureDerateRR, const real_T
  *rtu_PMotorTemperatureDerateRR, const real_T *rtu_PInvTemperatureDerateRL,
  const real_T *rtu_PMotorTemperatureDerateRL, real_T
  *rty_PTSTemperatureDerateFR, real_T *rty_PTSTemperatureDerateFL, real_T
  *rty_PTSTemperatureDerateRR, real_T *rty_PTSTemperatureDerateRL)
{
  /* MinMax: '<Root>/Min' */
  *rty_PTSTemperatureDerateFR = fmin(*rtu_PInvTemperatureDerateFR,
    *rtu_PMotorTemperatureDerateFR);

  /* MinMax: '<Root>/Min1' */
  *rty_PTSTemperatureDerateFL = fmin(*rtu_PInvTemperatureDerateFL,
    *rtu_PMotorTemperatureDerateFL);

  /* MinMax: '<Root>/Min2' */
  *rty_PTSTemperatureDerateRR = fmin(*rtu_PInvTemperatureDerateRR,
    *rtu_PMotorTemperatureDerateRR);

  /* MinMax: '<Root>/Min3' */
  *rty_PTSTemperatureDerateRL = fmin(*rtu_PInvTemperatureDerateRL,
    *rtu_PMotorTemperatureDerateRL);
}

/* Model initialize function */
void PTSTemperatureDerate_initialize(const char_T **rt_errorStatus,
  RT_MODEL_PTSTemperatureDerate_T *const PTSTemperatureDerate_M)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(PTSTemperatureDerate_M, rt_errorStatus);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
