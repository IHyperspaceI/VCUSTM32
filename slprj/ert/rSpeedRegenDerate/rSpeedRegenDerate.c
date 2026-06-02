/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: rSpeedRegenDerate.c
 *
 * Code generated for Simulink model 'rSpeedRegenDerate'.
 *
 * Model version                  : 13.6
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Tue Jun  2 18:45:14 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "rSpeedRegenDerate.h"
#include "rtwtypes.h"
#include "look1_binlxpw.h"
#include "rSpeedRegenDerate_private.h"

/* Output and update for referenced model: 'rSpeedRegenDerate' */
void rSpeedRegenDerate(const real_T *rtu_vChassis, real_T *rty_rSpeedRegenDerate)
{
  /* Lookup_n-D: '<Root>/rSpeedRegenDerate Map' */
  *rty_rSpeedRegenDerate = look1_binlxpw(*rtu_vChassis,
    rtCP_rSpeedRegenDerateMap_bp01D, rtCP_rSpeedRegenDerateMap_table, 3U);
}

/* Model initialize function */
void rSpeedRegenDerate_initialize(const char_T **rt_errorStatus,
  RT_MODEL_rSpeedRegenDerate_T *const rSpeedRegenDerate_M)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(rSpeedRegenDerate_M, rt_errorStatus);

  /* user code (Initialize function Body) */
  LL_TIM_EnableCounter(TIM2);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
