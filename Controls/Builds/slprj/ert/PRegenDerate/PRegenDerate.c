/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: PRegenDerate.c
 *
 * Code generated for Simulink model 'PRegenDerate'.
 *
 * Model version                  : 13.3
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Tue Sep  8 11:38:34 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "PRegenDerate.h"
#include "rtwtypes.h"
#include <math.h>
#include "PRegenDerate_private.h"

/* Output and update for referenced model: 'PRegenDerate' */
void PRegenDerate(const real_T *rtu_PHighCellTemperatureDerate, const real_T
                  *rtu_PSOCRegenDerate, const real_T
                  *rtu_PHighCellVoltageRegenDerate, real_T *rty_PRegenDerate)
{
  /* MinMax: '<Root>/Min' */
  *rty_PRegenDerate = fmin(fmin(*rtu_PHighCellTemperatureDerate,
    *rtu_PSOCRegenDerate), *rtu_PHighCellVoltageRegenDerate);
}

/* Model initialize function */
void PRegenDerate_initialize(const char_T **rt_errorStatus,
  RT_MODEL_PRegenDerate_T *const PRegenDerate_M)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(PRegenDerate_M, rt_errorStatus);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
