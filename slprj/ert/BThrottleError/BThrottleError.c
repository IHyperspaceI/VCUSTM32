/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: BThrottleError.c
 *
 * Code generated for Simulink model 'BThrottleError'.
 *
 * Model version                  : 13.5
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Wed Jun  3 14:54:48 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BThrottleError.h"
#include "rtwtypes.h"
#include <math.h>
#include "BThrottleError_private.h"

/* Output and update for referenced model: 'BThrottleError' */
void BThrottleError(const real_T *rtu_VThrottlePedal1, const real_T
                    *rtu_VThrottlePedal2, const real_T *rtu_rThrottlePedal1,
                    const real_T *rtu_rThrottlePedal2, boolean_T
                    *rty_BThrottleError, real_T *rty_tThrottleError,
                    DW_BThrottleError_f_T *localDW)
{
  real_T tmp;

  /* Logic: '<S1>/OR1' incorporates:
   *  Abs: '<S1>/Abs'
   *  Constant: '<S3>/Constant'
   *  Constant: '<S4>/Constant'
   *  Constant: '<S5>/Constant'
   *  MinMax: '<S1>/Max2'
   *  MinMax: '<S1>/Max3'
   *  RelationalOperator: '<S3>/Compare'
   *  RelationalOperator: '<S4>/Compare'
   *  RelationalOperator: '<S5>/Compare'
   *  Sum: '<S1>/Subtract'
   */
  *rty_BThrottleError = ((fmin(*rtu_VThrottlePedal1, *rtu_VThrottlePedal2) <
    50.0) || (fmax(*rtu_VThrottlePedal1, *rtu_VThrottlePedal2) > 4900.0) ||
    (fabs(*rtu_rThrottlePedal1 - *rtu_rThrottlePedal2) > 10.0));

  /* Memory: '<S2>/Memory' */
  *rty_tThrottleError = localDW->Memory_PreviousInput;

  /* Switch: '<S2>/Switch' incorporates:
   *  Constant: '<S2>/Constant6'
   */
  if (*rty_BThrottleError) {
    tmp = *rty_tThrottleError;
  } else {
    tmp = 0.0;
  }

  /* Update for Memory: '<S2>/Memory' incorporates:
   *  Constant: '<S2>/Constant5'
   *  Sum: '<S2>/Add'
   *  Switch: '<S2>/Switch'
   */
  localDW->Memory_PreviousInput = tmp + 0.001;
}

/* Model initialize function */
void BThrottleError_initialize(const char_T **rt_errorStatus,
  RT_MODEL_BThrottleError_T *const BThrottleError_M)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(BThrottleError_M, rt_errorStatus);

  /* user code (Initialize function Body) */
  LL_TIM_EnableCounter(TIM2);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
