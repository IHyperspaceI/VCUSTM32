/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: rSOCDerate.c
 *
 * Code generated for Simulink model 'rSOCDerate'.
 *
 * Model version                  : 13.6
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Tue Jun  2 18:45:09 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "rSOCDerate.h"
#include "rtwtypes.h"
#include "look1_binlxpw.h"
#include "rSOCDerate_private.h"

/* Output and update for referenced model: 'rSOCDerate' */
void rSOCDerate(const real_T *rtu_VDCAccumulator, real_T
                *rty_rSOCDischargeDerate, real_T *rty_rSOCRegenDerate)
{
  /* Lookup_n-D: '<Root>/rSOCDischargeDerate Map' */
  *rty_rSOCDischargeDerate = look1_binlxpw(*rtu_VDCAccumulator,
    rtCP_rSOCDischargeDerateMap_bp0, rtCP_rSOCDischargeDerateMap_tab, 5U);

  /* Lookup_n-D: '<Root>/rSOCRegenDerate Map ' */
  *rty_rSOCRegenDerate = look1_binlxpw(*rtu_VDCAccumulator,
    rtCP_rSOCRegenDerateMap_bp01Dat, rtCP_rSOCRegenDerateMap_tableDa, 5U);
}

/* Model initialize function */
void rSOCDerate_initialize(const char_T **rt_errorStatus, RT_MODEL_rSOCDerate_T *
  const rSOCDerate_M)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(rSOCDerate_M, rt_errorStatus);

  /* user code (Initialize function Body) */
  LL_TIM_EnableCounter(TIM2);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
