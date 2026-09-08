/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: rThrottle.c
 *
 * Code generated for Simulink model 'rThrottle'.
 *
 * Model version                  : 13.3
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Tue Sep  8 11:42:04 2026
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
               *rtu_VThrottlePedal2, const boolean_T *rtu_BCalibrationOn, real_T
               *rty_rThrottlePedal1, real_T *rty_rThrottlePedal2, real_T
               *rty_rThrottlePedal, DW_rThrottle_f_T *localDW)
{
  real_T rateLimiterRate;
  real_T rtb_Memory;

  /* Gain: '<S2>/Gain' incorporates:
   *  Bias: '<S2>/Bias'
   *  Memory: '<S2>/Memory'
   *  Sum: '<S2>/Subtract'
   */
  rtb_Memory = (*rtu_VThrottlePedal2 - (localDW->Memory_PreviousInput +
    53.846153850295856)) * 0.03714285714;

  /* Saturate: '<Root>/Saturation1' */
  if (rtb_Memory > 100.0) {
    rtb_Memory = 100.0;
  } else if (rtb_Memory < 0.0) {
    rtb_Memory = 0.0;
  }

  /* End of Saturate: '<Root>/Saturation1' */

  /* RateLimiter: '<Root>/Rate Limiter' */
  rateLimiterRate = rtb_Memory - localDW->PrevY;
  if (rateLimiterRate > 75.0) {
    *rty_rThrottlePedal = localDW->PrevY + 75.0;
  } else if (rateLimiterRate < -200.0) {
    *rty_rThrottlePedal = localDW->PrevY - 200.0;
  } else {
    *rty_rThrottlePedal = rtb_Memory;
  }

  localDW->PrevY = *rty_rThrottlePedal;

  /* End of RateLimiter: '<Root>/Rate Limiter' */

  /* SignalConversion generated from: '<Root>/rThrottlePedal2' */
  *rty_rThrottlePedal2 = *rty_rThrottlePedal;

  /* Gain: '<S1>/Gain' incorporates:
   *  Bias: '<S1>/Bias'
   *  Memory: '<S1>/Memory'
   *  Sum: '<S1>/Subtract'
   */
  rtb_Memory = (*rtu_VThrottlePedal1 - (localDW->Memory_PreviousInput_e +
    18.846153846081361)) * 0.10612244898;

  /* Saturate: '<Root>/Saturation2' */
  if (rtb_Memory > 100.0) {
    rtb_Memory = 100.0;
  } else if (rtb_Memory < 0.0) {
    rtb_Memory = 0.0;
  }

  /* End of Saturate: '<Root>/Saturation2' */

  /* RateLimiter: '<Root>/Rate Limiter1' */
  rateLimiterRate = rtb_Memory - localDW->PrevY_m;
  if (rateLimiterRate > 75.0) {
    *rty_rThrottlePedal1 = localDW->PrevY_m + 75.0;
  } else if (rateLimiterRate < -200.0) {
    *rty_rThrottlePedal1 = localDW->PrevY_m - 200.0;
  } else {
    *rty_rThrottlePedal1 = rtb_Memory;
  }

  localDW->PrevY_m = *rty_rThrottlePedal1;

  /* End of RateLimiter: '<Root>/Rate Limiter1' */

  /* Switch: '<S2>/Switch' incorporates:
   *  Switch: '<S1>/Switch'
   */
  if (*rtu_BCalibrationOn) {
    /* Update for Memory: '<S2>/Memory' */
    localDW->Memory_PreviousInput = *rtu_VThrottlePedal2;

    /* Update for Memory: '<S1>/Memory' */
    localDW->Memory_PreviousInput_e = *rtu_VThrottlePedal1;
  }

  /* End of Switch: '<S2>/Switch' */
}

/* Model initialize function */
void rThrottle_initialize(const char_T **rt_errorStatus, RT_MODEL_rThrottle_T *
  const rThrottle_M)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(rThrottle_M, rt_errorStatus);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
