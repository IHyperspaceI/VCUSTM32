/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: PCellVoltageDerate.c
 *
 * Code generated for Simulink model 'PCellVoltageDerate'.
 *
 * Model version                  : 13.3
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Tue Sep  8 11:38:02 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "PCellVoltageDerate.h"
#include "rtwtypes.h"
#include "look1_binlxpw.h"
#include "PCellVoltageDerate_private.h"

/* Output and update for referenced model: 'PCellVoltageDerate' */
void PCellVoltageDerate(const real_T *rtu_VCellMin, const real_T *rtu_VCellMax,
  real_T *rty_PLowCellVoltageDischargeDer, real_T
  *rty_PHighCellVoltageRegenDerate)
{
  /* Lookup_n-D: '<Root>/PLowCellVoltageDischargeDerate Map' */
  *rty_PLowCellVoltageDischargeDer = look1_binlxpw(*rtu_VCellMin,
    rtCP_PLowCellVoltageDischarge_e, rtCP_PLowCellVoltageDischargeDe, 5U);

  /* Lookup_n-D: '<Root>/PHighCellVoltageRegenDerate Map' */
  *rty_PHighCellVoltageRegenDerate = look1_binlxpw(*rtu_VCellMax,
    rtCP_PHighCellVoltageRegenDer_p, rtCP_PHighCellVoltageRegenDerat, 6U);
}

/* Model initialize function */
void PCellVoltageDerate_initialize(const char_T **rt_errorStatus,
  RT_MODEL_PCellVoltageDerate_T *const PCellVoltageDerate_M)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(PCellVoltageDerate_M, rt_errorStatus);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
