/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: rRegenPaddle.c
 *
 * Code generated for Simulink model 'rRegenPaddle'.
 *
 * Model version                  : 13.5
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Wed Jun  3 14:55:25 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "rRegenPaddle.h"
#include "rtwtypes.h"
#include <math.h>
#include "rRegenPaddle_private.h"

/* Output and update for referenced model: 'rRegenPaddle' */
void rRegenPaddle(const real_T *rtu_VRegenPaddle1, const real_T
                  *rtu_VRegenPaddle2, real_T *rty_rRegenPaddle, boolean_T
                  *rty_BRegenOn)
{
  real_T u0;

  /* MinMax: '<Root>/Max' incorporates:
   *  Constant: '<S2>/Constant4'
   *  Constant: '<S3>/Constant4'
   *  Product: '<S2>/Multiply'
   *  Product: '<S3>/Multiply'
   *  Sum: '<S2>/Subtract2'
   *  Sum: '<S2>/Subtract3'
   *  Sum: '<S3>/Subtract2'
   *  Sum: '<S3>/Subtract3'
   */
  u0 = fmax((*rtu_VRegenPaddle1 - 1.4) * rRegenPaddle_ConstB.Divide - 3.0,
            (*rtu_VRegenPaddle2 - 1.4) * rRegenPaddle_ConstB.Divide_g - 3.0);

  /* Saturate: '<Root>/Saturation' */
  if (u0 > 100.0) {
    *rty_rRegenPaddle = 100.0;
  } else if (u0 < 0.0) {
    *rty_rRegenPaddle = 0.0;
  } else {
    *rty_rRegenPaddle = u0;
  }

  /* End of Saturate: '<Root>/Saturation' */

  /* RelationalOperator: '<S1>/Compare' incorporates:
   *  Constant: '<S1>/Constant'
   */
  *rty_BRegenOn = (*rty_rRegenPaddle > 70.0);
}

/* Model initialize function */
void rRegenPaddle_initialize(const char_T **rt_errorStatus,
  RT_MODEL_rRegenPaddle_T *const rRegenPaddle_M)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(rRegenPaddle_M, rt_errorStatus);

  /* user code (Initialize function Body) */
  LL_TIM_EnableCounter(TIM2);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
