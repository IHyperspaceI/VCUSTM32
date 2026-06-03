/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: rInvTemperatureDerate.c
 *
 * Code generated for Simulink model 'rInvTemperatureDerate'.
 *
 * Model version                  : 13.6
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Wed Jun  3 14:53:10 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "rInvTemperatureDerate.h"
#include "rtwtypes.h"
#include "look1_binlxpw.h"
#include "rInvTemperatureDerate_private.h"

/* Output and update for referenced model: 'rInvTemperatureDerate' */
void rInvTemperatureDerate(const real_T *rtu_TInvMax, const real_T *rtu_TInvFR,
  const real_T *rtu_TInvFL, const real_T *rtu_TInvRR, const real_T *rtu_TInvRL,
  real_T *rty_rInvTemperatureDerate, real_T *rty_rInvTemperatureDerateFR, real_T
  *rty_rInvTemperatureDerateFL, real_T *rty_rInvTemperatureDerateRR, real_T
  *rty_rInvTemperatureDerateRL)
{
  real_T rtb_rInvTemperatureDerateMap[5];
  int32_T iU;

  /* SignalConversion generated from: '<Root>/rInvTemperatureDerate Map' */
  rtb_rInvTemperatureDerateMap[0] = *rtu_TInvMax;
  rtb_rInvTemperatureDerateMap[1] = *rtu_TInvFR;
  rtb_rInvTemperatureDerateMap[2] = *rtu_TInvFL;
  rtb_rInvTemperatureDerateMap[3] = *rtu_TInvRR;
  rtb_rInvTemperatureDerateMap[4] = *rtu_TInvRL;

  /* Lookup_n-D: '<Root>/rInvTemperatureDerate Map' */
  for (iU = 0; iU < 5; iU++) {
    rtb_rInvTemperatureDerateMap[iU] = look1_binlxpw
      (rtb_rInvTemperatureDerateMap[iU], rtCP_rInvTemperatureDerateMap_b,
       rtCP_rInvTemperatureDerateMap_t, 6U);
  }

  /* End of Lookup_n-D: '<Root>/rInvTemperatureDerate Map' */

  /* SignalConversion generated from: '<Root>/rInvTemperatureDerateFL' */
  *rty_rInvTemperatureDerateFL = rtb_rInvTemperatureDerateMap[2];

  /* SignalConversion generated from: '<Root>/rInvTemperatureDerateFR' */
  *rty_rInvTemperatureDerateFR = rtb_rInvTemperatureDerateMap[1];

  /* SignalConversion generated from: '<Root>/rInvTemperatureDerate' */
  *rty_rInvTemperatureDerate = rtb_rInvTemperatureDerateMap[0];

  /* SignalConversion generated from: '<Root>/rInvTemperatureDerateRL' */
  *rty_rInvTemperatureDerateRL = rtb_rInvTemperatureDerateMap[4];

  /* SignalConversion generated from: '<Root>/rInvTemperatureDerateRR' */
  *rty_rInvTemperatureDerateRR = rtb_rInvTemperatureDerateMap[3];
}

/* Model initialize function */
void rInvTemperatureDerat_initialize(const char_T **rt_errorStatus,
  RT_MODEL_rInvTemperatureDerat_T *const rInvTemperatureDerate_M)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(rInvTemperatureDerate_M, rt_errorStatus);

  /* user code (Initialize function Body) */
  LL_TIM_EnableCounter(TIM2);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
