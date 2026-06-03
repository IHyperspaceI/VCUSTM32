/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: rThrottle.c
 *
 * Code generated for Simulink model 'rThrottle'.
 *
 * Model version                  : 13.5
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Wed Jun  3 14:55:43 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "rThrottle.h"
#include "rtwtypes.h"
#include "rThrottle_private.h"

/* Output and update for referenced model: 'rThrottle' */
void rThrottle(const real_T *rtu_VThrottlePedal1, const real_T
               *rtu_VThrottlePedal2, real_T *rty_rThrottlePedal1, real_T
               *rty_rThrottlePedal2, real_T *rty_rThrottlePedal)
{
  real_T u0;

  /* Sum: '<S1>/Subtract3' incorporates:
   *  Constant: '<S1>/Constant4'
   *  Product: '<S1>/Multiply'
   *  Sum: '<S1>/Subtract2'
   */
  u0 = (*rtu_VThrottlePedal1 - 830.0) * rThrottle_ConstB.Divide - 3.0;

  /* Saturate: '<Root>/Saturation2' */
  if (u0 > 100.0) {
    *rty_rThrottlePedal1 = 100.0;
  } else if (u0 < 0.0) {
    *rty_rThrottlePedal1 = 0.0;
  } else {
    *rty_rThrottlePedal1 = u0;
  }

  /* End of Saturate: '<Root>/Saturation2' */

  /* Sum: '<S2>/Subtract7' incorporates:
   *  Constant: '<S2>/Constant10'
   *  Product: '<S2>/Multiply1'
   *  Sum: '<S2>/Subtract6'
   */
  u0 = (*rtu_VThrottlePedal2 - 350.0) * rThrottle_ConstB.Divide1 - 3.0;

  /* Saturate: '<Root>/Saturation1' */
  if (u0 > 100.0) {
    *rty_rThrottlePedal = 100.0;
  } else if (u0 < 0.0) {
    *rty_rThrottlePedal = 0.0;
  } else {
    *rty_rThrottlePedal = u0;
  }

  /* End of Saturate: '<Root>/Saturation1' */

  /* SignalConversion generated from: '<Root>/rThrottlePedal2' */
  *rty_rThrottlePedal2 = *rty_rThrottlePedal;
}

/* Model initialize function */
void rThrottle_initialize(const char_T **rt_errorStatus, RT_MODEL_rThrottle_T *
  const rThrottle_M)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(rThrottle_M, rt_errorStatus);

  /* user code (Initialize function Body) */
  LL_TIM_EnableCounter(TIM2);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
