/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: rHighCellTemperatureDerate.c
 *
 * Code generated for Simulink model 'rHighCellTemperatureDerate'.
 *
 * Model version                  : 13.6
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Wed Jun  3 14:53:05 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "rHighCellTemperatureDerate.h"
#include "rtwtypes.h"
#include "look1_binlxpw.h"
#include "rHighCellTemperatureDerate_private.h"

/* Output and update for referenced model: 'rHighCellTemperatureDerate' */
void rHighCellTemperatureDerate(const real_T *rtu_TCellMax, real_T
  *rty_rHighCellTemperatureDischar, real_T *rty_rHighCellTemperatureRegenDe)
{
  /* Lookup_n-D: '<Root>/rLowCellVoltageDischargeDerate Map' */
  *rty_rHighCellTemperatureDischar = look1_binlxpw(*rtu_TCellMax,
    rtCP_rLowCellVoltageDischarge_j, rtCP_rLowCellVoltageDischargeDe, 6U);

  /* Lookup_n-D: '<Root>/rLowCellVoltageDischargeDerate Map2' */
  *rty_rHighCellTemperatureRegenDe = look1_binlxpw(*rtu_TCellMax,
    rtCP_rLowCellVoltageDischarge_n, rtCP_rLowCellVoltageDischarge_m, 6U);
}

/* Model initialize function */
void rHighCellTemperature_initialize(const char_T **rt_errorStatus,
  RT_MODEL_rHighCellTemperature_T *const rHighCellTemperatureDerate_M)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(rHighCellTemperatureDerate_M, rt_errorStatus);

  /* user code (Initialize function Body) */
  LL_TIM_EnableCounter(TIM2);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
