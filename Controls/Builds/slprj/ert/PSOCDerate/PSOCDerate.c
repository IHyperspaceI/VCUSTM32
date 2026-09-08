/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: PSOCDerate.c
 *
 * Code generated for Simulink model 'PSOCDerate'.
 *
 * Model version                  : 13.3
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Tue Sep  8 11:38:39 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "PSOCDerate.h"
#include "rtwtypes.h"
#include "look1_binlxpw.h"
#include "PSOCDerate_private.h"

/* Output and update for referenced model: 'PSOCDerate' */
void PSOCDerate(const real_T *rtu_VDCAccumulator, real_T
                *rty_PSOCDischargeDerate, real_T *rty_PSOCRegenDerate)
{
  /* Lookup_n-D: '<Root>/PSOCDischargeDerate Map' */
  *rty_PSOCDischargeDerate = look1_binlxpw(*rtu_VDCAccumulator,
    rtCP_PSOCDischargeDerateMap_bp0, rtCP_PSOCDischargeDerateMap_tab, 5U);

  /* Lookup_n-D: '<Root>/PSOCRegenDerate Map ' */
  *rty_PSOCRegenDerate = look1_binlxpw(*rtu_VDCAccumulator,
    rtCP_PSOCRegenDerateMap_bp01Dat, rtCP_PSOCRegenDerateMap_tableDa, 5U);
}

/* Model initialize function */
void PSOCDerate_initialize(const char_T **rt_errorStatus, RT_MODEL_PSOCDerate_T *
  const PSOCDerate_M)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(PSOCDerate_M, rt_errorStatus);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
