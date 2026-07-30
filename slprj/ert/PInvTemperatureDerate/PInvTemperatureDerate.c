/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: PInvTemperatureDerate.c
 *
 * Code generated for Simulink model 'PInvTemperatureDerate'.
 *
 * Model version                  : 13.2
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Thu Jul 30 16:40:08 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "PInvTemperatureDerate.h"
#include "rtwtypes.h"
#include "look1_binlxpw.h"
#include "PInvTemperatureDerate_private.h"

/* Output and update for referenced model: 'PInvTemperatureDerate' */
void PInvTemperatureDerate(const real_T *rtu_TInvMax, const real_T *rtu_TInvFR,
  const real_T *rtu_TInvFL, const real_T *rtu_TInvRR, const real_T *rtu_TInvRL,
  real_T *rty_PInvTemperatureDerate, real_T *rty_PInvTemperatureDerateFR, real_T
  *rty_PInvTemperatureDerateFL, real_T *rty_PInvTemperatureDerateRR, real_T
  *rty_PInvTemperatureDerateRL)
{
  real_T rtb_PInvTemperatureDerateMap[5];
  int32_T iU;

  /* SignalConversion generated from: '<Root>/PInvTemperatureDerate Map' */
  rtb_PInvTemperatureDerateMap[0] = *rtu_TInvMax;
  rtb_PInvTemperatureDerateMap[1] = *rtu_TInvFR;
  rtb_PInvTemperatureDerateMap[2] = *rtu_TInvFL;
  rtb_PInvTemperatureDerateMap[3] = *rtu_TInvRR;
  rtb_PInvTemperatureDerateMap[4] = *rtu_TInvRL;

  /* Lookup_n-D: '<Root>/PInvTemperatureDerate Map' */
  for (iU = 0; iU < 5; iU++) {
    rtb_PInvTemperatureDerateMap[iU] = look1_binlxpw
      (rtb_PInvTemperatureDerateMap[iU], rtCP_PInvTemperatureDerateMap_b,
       rtCP_PInvTemperatureDerateMap_t, 12U);
  }

  /* End of Lookup_n-D: '<Root>/PInvTemperatureDerate Map' */

  /* SignalConversion generated from: '<Root>/PInvTemperatureDerateFL' */
  *rty_PInvTemperatureDerateFL = rtb_PInvTemperatureDerateMap[2];

  /* SignalConversion generated from: '<Root>/PInvTemperatureDerateFR' */
  *rty_PInvTemperatureDerateFR = rtb_PInvTemperatureDerateMap[1];

  /* SignalConversion generated from: '<Root>/PInvTemperatureDerate' */
  *rty_PInvTemperatureDerate = rtb_PInvTemperatureDerateMap[0];

  /* SignalConversion generated from: '<Root>/PInvTemperatureDerateRL' */
  *rty_PInvTemperatureDerateRL = rtb_PInvTemperatureDerateMap[4];

  /* SignalConversion generated from: '<Root>/PInvTemperatureDerateRR' */
  *rty_PInvTemperatureDerateRR = rtb_PInvTemperatureDerateMap[3];
}

/* Model initialize function */
void PInvTemperatureDerat_initialize(const char_T **rt_errorStatus,
  RT_MODEL_PInvTemperatureDerat_T *const PInvTemperatureDerate_M)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(PInvTemperatureDerate_M, rt_errorStatus);

  /* user code (Initialize function Body) */
  LL_TIM_EnableCounter(TIM2);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
