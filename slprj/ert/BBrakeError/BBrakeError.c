/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: BBrakeError.c
 *
 * Code generated for Simulink model 'BBrakeError'.
 *
 * Model version                  : 13.2
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Thu Jul 30 16:41:45 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BBrakeError.h"
#include "rtwtypes.h"
#include <math.h>
#include "BBrakeError_private.h"

/* Output and update for referenced model: 'BBrakeError' */
void BBrakeError(const real_T *rtu_pBrakeF, const real_T *rtu_pBrakeR, const
                 real_T *rtu_VBrakeF, const real_T *rtu_VBrakeR, boolean_T
                 *rty_BBrakeError, real_T *rty_tBrakeError, boolean_T
                 *rty_BBrakeOn, real_T *rty_pBrakeMax, DW_BBrakeError_f_T
                 *localDW)
{
  real_T tmp;

  /* Logic: '<S1>/OR' incorporates:
   *  Constant: '<S4>/Constant'
   *  Constant: '<S5>/Constant'
   *  MinMax: '<S1>/Max1'
   *  MinMax: '<S1>/Min'
   *  RelationalOperator: '<S4>/Compare'
   *  RelationalOperator: '<S5>/Compare'
   */
  *rty_BBrakeError = ((fmin(*rtu_VBrakeF, *rtu_VBrakeR) < 100.0) || (fmax
    (*rtu_VBrakeF, *rtu_VBrakeR) > 4900.0));

  /* Memory: '<S3>/Memory' */
  *rty_tBrakeError = localDW->Memory_PreviousInput;

  /* MinMax: '<S2>/Max' */
  *rty_pBrakeMax = fmax(*rtu_pBrakeF, *rtu_pBrakeR);

  /* RelationalOperator: '<S6>/Compare' incorporates:
   *  Constant: '<S6>/Constant'
   */
  *rty_BBrakeOn = (*rty_pBrakeMax > 1.5);

  /* Switch: '<S3>/Switch1' incorporates:
   *  Constant: '<S3>/Constant6'
   */
  if (*rty_BBrakeError) {
    tmp = *rty_tBrakeError;
  } else {
    tmp = 0.0;
  }

  /* Update for Memory: '<S3>/Memory' incorporates:
   *  Constant: '<S3>/Constant5'
   *  Sum: '<S3>/Add'
   *  Switch: '<S3>/Switch1'
   */
  localDW->Memory_PreviousInput = tmp + 0.001;
}

/* Model initialize function */
void BBrakeError_initialize(const char_T **rt_errorStatus,
  RT_MODEL_BBrakeError_T *const BBrakeError_M)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(BBrakeError_M, rt_errorStatus);

  /* user code (Initialize function Body) */
  LL_TIM_EnableCounter(TIM2);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
