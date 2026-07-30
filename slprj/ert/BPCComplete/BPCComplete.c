/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: BPCComplete.c
 *
 * Code generated for Simulink model 'BPCComplete'.
 *
 * Model version                  : 13.2
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Thu Jul 30 16:42:32 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BPCComplete.h"
#include "rtwtypes.h"
#include "BPCComplete_private.h"

/* Output and update for referenced model: 'BPCComplete' */
void BPCComplete(const real_T *rtu_VDCInvRL, const real_T *rtu_VDCAccumulator,
                 boolean_T *rty_BPCComplete)
{
  /* Logic: '<Root>/AND1' incorporates:
   *  Constant: '<S1>/Constant'
   *  Gain: '<Root>/Gain'
   *  RelationalOperator: '<Root>/GreaterThan'
   *  RelationalOperator: '<S1>/Compare'
   */
  *rty_BPCComplete = ((*rtu_VDCInvRL > 0.95 * *rtu_VDCAccumulator) &&
                      (*rtu_VDCInvRL > 400.0));
}

/* Model initialize function */
void BPCComplete_initialize(const char_T **rt_errorStatus,
  RT_MODEL_BPCComplete_T *const BPCComplete_M)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(BPCComplete_M, rt_errorStatus);

  /* user code (Initialize function Body) */
  LL_TIM_EnableCounter(TIM2);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
