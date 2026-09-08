/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: PEnergyMeter.c
 *
 * Code generated for Simulink model 'PEnergyMeter'.
 *
 * Model version                  : 13.5
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Tue Sep  8 11:40:49 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "PEnergyMeter.h"
#include "rtwtypes.h"
#include "PEnergyMeter_private.h"

/* Output and update for referenced model: 'PEnergyMeter' */
void PEnergyMeter(const real_T *rtu_VDCAccumulator, const real_T *rtu_IIVTS,
                  real_T *rty_PEnergyMeter, boolean_T *rty_BOverpower,
                  DW_PEnergyMeter_f_T *localDW)
{
  real_T accumulatedData;
  int32_T k;

  /* MATLAB Function: '<Root>/MATLAB Function' */
  for (k = 0; k < 499; k++) {
    localDW->buffer[k] = localDW->buffer[k + 1];
  }

  localDW->buffer[499] = *rtu_VDCAccumulator * *rtu_IIVTS;
  accumulatedData = localDW->buffer[0];
  for (k = 0; k < 499; k++) {
    accumulatedData += localDW->buffer[k + 1];
  }

  /* Gain: '<Root>/W to kW' incorporates:
   *  MATLAB Function: '<Root>/MATLAB Function'
   */
  *rty_PEnergyMeter = accumulatedData / 500.0 * 0.001;

  /* RelationalOperator: '<Root>/Relational Operator' incorporates:
   *  Constant: '<Root>/Constant'
   */
  *rty_BOverpower = (*rty_PEnergyMeter > 80.0);
}

/* Model initialize function */
void PEnergyMeter_initialize(const char_T **rt_errorStatus,
  RT_MODEL_PEnergyMeter_T *const PEnergyMeter_M)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(PEnergyMeter_M, rt_errorStatus);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
