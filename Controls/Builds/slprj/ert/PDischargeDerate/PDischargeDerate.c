/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: PDischargeDerate.c
 *
 * Code generated for Simulink model 'PDischargeDerate'.
 *
 * Model version                  : 13.3
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Tue Sep  8 11:38:10 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "PDischargeDerate.h"
#include "rtwtypes.h"
#include <math.h>
#include "PDischargeDerate_private.h"

/* Output and update for referenced model: 'PDischargeDerate' */
void PDischargeDerate(const boolean_T *rtu_BDischargeAllowed, const real_T
                      *rtu_PLowCellVoltageDischargeDer, const real_T
                      *rtu_PHighCellTemperatureDerate, const real_T
                      *rtu_PSOCDischargeDerate, real_T *rty_PDischargeDerate)
{
  /* Switch: '<Root>/Switch' incorporates:
   *  Constant: '<Root>/Constant'
   *  MinMax: '<Root>/Min'
   */
  if (*rtu_BDischargeAllowed) {
    *rty_PDischargeDerate = fmin(fmin(*rtu_PHighCellTemperatureDerate,
      *rtu_PSOCDischargeDerate), *rtu_PLowCellVoltageDischargeDer);
  } else {
    *rty_PDischargeDerate = 0.0;
  }

  /* End of Switch: '<Root>/Switch' */
}

/* Model initialize function */
void PDischargeDerate_initialize(const char_T **rt_errorStatus,
  RT_MODEL_PDischargeDerate_T *const PDischargeDerate_M)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(PDischargeDerate_M, rt_errorStatus);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
