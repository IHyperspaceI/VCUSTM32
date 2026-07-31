/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: rSpeedRegenDerate.c
 *
 * Code generated for Simulink model 'rSpeedRegenDerate'.
 *
 * Model version                  : 13.2
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Fri Jul 31 17:29:18 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "rSpeedRegenDerate.h"
#include "rtwtypes.h"
#include <math.h>
#include "look1_binlxpw.h"
#include "rSpeedRegenDerate_private.h"

/* Output and update for referenced model: 'rSpeedRegenDerate' */
void rSpeedRegenDerate(const real_T *rtu_vWheelRR, const real_T *rtu_vWheelRL,
  const real_T *rtu_vWheelFR, const real_T *rtu_vWheelFL, real_T
  *rty_rSpeedRegenDerateRR, real_T *rty_rSpeedRegenDerateRL, real_T
  *rty_rSpeedRegenDerateFR, real_T *rty_rSpeedRegenDerateFL, boolean_T
  *rty_BSpeedDerateOn)
{
  real_T rtb_rSpeedRegenDerateMap_idx_0;
  real_T rtb_rSpeedRegenDerateMap_idx_1;
  real_T rtb_rSpeedRegenDerateMap_idx_2;
  real_T rtb_rSpeedRegenDerateMap_idx_3;

  /* Lookup_n-D: '<Root>/rSpeedRegenDerate Map' */
  rtb_rSpeedRegenDerateMap_idx_0 = look1_binlxpw(*rtu_vWheelRR,
    rtCP_rSpeedRegenDerateMap_bp01D, rtCP_rSpeedRegenDerateMap_table, 3U);
  rtb_rSpeedRegenDerateMap_idx_1 = look1_binlxpw(*rtu_vWheelRL,
    rtCP_rSpeedRegenDerateMap_bp01D, rtCP_rSpeedRegenDerateMap_table, 3U);
  rtb_rSpeedRegenDerateMap_idx_2 = look1_binlxpw(*rtu_vWheelFR,
    rtCP_rSpeedRegenDerateMap_bp01D, rtCP_rSpeedRegenDerateMap_table, 3U);
  rtb_rSpeedRegenDerateMap_idx_3 = look1_binlxpw(*rtu_vWheelFL,
    rtCP_rSpeedRegenDerateMap_bp01D, rtCP_rSpeedRegenDerateMap_table, 3U);

  /* RelationalOperator: '<S1>/Compare' incorporates:
   *  Constant: '<S1>/Constant'
   *  MinMax: '<Root>/MinMax'
   */
  *rty_BSpeedDerateOn = (fmin(fmin(fmin(rtb_rSpeedRegenDerateMap_idx_0,
    rtb_rSpeedRegenDerateMap_idx_1), rtb_rSpeedRegenDerateMap_idx_2),
    rtb_rSpeedRegenDerateMap_idx_3) < 1.0);

  /* SignalConversion generated from: '<Root>/rSpeedRegenDerateFL' */
  *rty_rSpeedRegenDerateFL = rtb_rSpeedRegenDerateMap_idx_3;

  /* SignalConversion generated from: '<Root>/rSpeedRegenDerateFR' */
  *rty_rSpeedRegenDerateFR = rtb_rSpeedRegenDerateMap_idx_2;

  /* SignalConversion generated from: '<Root>/rSpeedRegenDerateRL' */
  *rty_rSpeedRegenDerateRL = rtb_rSpeedRegenDerateMap_idx_1;

  /* SignalConversion generated from: '<Root>/rSpeedRegenDerateRR' */
  *rty_rSpeedRegenDerateRR = rtb_rSpeedRegenDerateMap_idx_0;
}

/* Model initialize function */
void rSpeedRegenDerate_initialize(const char_T **rt_errorStatus,
  RT_MODEL_rSpeedRegenDerate_T *const rSpeedRegenDerate_M)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(rSpeedRegenDerate_M, rt_errorStatus);

  /* user code (Initialize function Body) */
  LL_TIM_EnableCounter(TIM2);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
