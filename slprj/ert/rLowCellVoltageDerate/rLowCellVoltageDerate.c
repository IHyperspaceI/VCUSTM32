/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: rLowCellVoltageDerate.c
 *
 * Code generated for Simulink model 'rLowCellVoltageDerate'.
 *
 * Model version                  : 13.6
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Wed Jun  3 14:53:16 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "rLowCellVoltageDerate.h"
#include "rtwtypes.h"
#include "look1_binlxpw.h"
#include "rLowCellVoltageDerate_private.h"

/* Output and update for referenced model: 'rLowCellVoltageDerate' */
void rLowCellVoltageDerate(const real_T *rtu_VCellMin, real_T
  *rty_rLowCellVoltageDischargeDer)
{
  /* Lookup_n-D: '<Root>/rLowCellVoltageDischargeDerate Map' */
  *rty_rLowCellVoltageDischargeDer = look1_binlxpw(*rtu_VCellMin,
    rtCP_rLowCellVoltageDischarge_n, rtCP_rLowCellVoltageDischargeDe, 5U);
}

/* Model initialize function */
void rLowCellVoltageDerat_initialize(const char_T **rt_errorStatus,
  RT_MODEL_rLowCellVoltageDerat_T *const rLowCellVoltageDerate_M)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(rLowCellVoltageDerate_M, rt_errorStatus);

  /* user code (Initialize function Body) */
  LL_TIM_EnableCounter(TIM2);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
