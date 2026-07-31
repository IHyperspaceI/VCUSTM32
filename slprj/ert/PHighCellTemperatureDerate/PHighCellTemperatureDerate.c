/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: PHighCellTemperatureDerate.c
 *
 * Code generated for Simulink model 'PHighCellTemperatureDerate'.
 *
 * Model version                  : 13.2
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Fri Jul 31 17:28:30 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "PHighCellTemperatureDerate.h"
#include "rtwtypes.h"
#include "look1_binlxpw.h"
#include "PHighCellTemperatureDerate_private.h"

/* Output and update for referenced model: 'PHighCellTemperatureDerate' */
void PHighCellTemperatureDerate(const real_T *rtu_TCellMax, real_T
  *rty_PHighCellTemperatureDerate)
{
  /* Lookup_n-D: '<Root>/PHighCellTemperatureDischargeDerate Map' */
  *rty_PHighCellTemperatureDerate = look1_binlxpw(*rtu_TCellMax,
    rtCP_PHighCellTemperatureDisc_p, rtCP_PHighCellTemperatureDischa, 6U);
}

/* Model initialize function */
void PHighCellTemperature_initialize(const char_T **rt_errorStatus,
  RT_MODEL_PHighCellTemperature_T *const PHighCellTemperatureDerate_M)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(PHighCellTemperatureDerate_M, rt_errorStatus);

  /* user code (Initialize function Body) */
  LL_TIM_EnableCounter(TIM2);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
