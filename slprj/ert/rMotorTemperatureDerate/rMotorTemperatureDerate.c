/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: rMotorTemperatureDerate.c
 *
 * Code generated for Simulink model 'rMotorTemperatureDerate'.
 *
 * Model version                  : 13.6
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Wed Jun  3 14:53:21 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "rMotorTemperatureDerate.h"
#include "rtwtypes.h"
#include "look1_binlxpw.h"
#include "rMotorTemperatureDerate_private.h"

/* Output and update for referenced model: 'rMotorTemperatureDerate' */
void rMotorTemperatureDerate(const real_T *rtu_TMotorMax, const real_T
  *rtu_TMotorFR, const real_T *rtu_TMotorFL, const real_T *rtu_TMotorRR, const
  real_T *rtu_TMotorRL, real_T *rty_rMotorTemperatureDerate, real_T
  *rty_rMotorTemperatureDerateFR, real_T *rty_rMotorTemperatureDerateFL, real_T *
  rty_rMotorTemperatureDerateRR, real_T *rty_rMotorTemperatureDerateRL)
{
  real_T rtb_rMotorTemperatureDerateMap[5];
  int32_T iU;

  /* SignalConversion generated from: '<Root>/rMotorTemperatureDerate Map' */
  rtb_rMotorTemperatureDerateMap[0] = *rtu_TMotorMax;
  rtb_rMotorTemperatureDerateMap[1] = *rtu_TMotorFR;
  rtb_rMotorTemperatureDerateMap[2] = *rtu_TMotorFL;
  rtb_rMotorTemperatureDerateMap[3] = *rtu_TMotorRR;
  rtb_rMotorTemperatureDerateMap[4] = *rtu_TMotorRL;

  /* Lookup_n-D: '<Root>/rMotorTemperatureDerate Map' */
  for (iU = 0; iU < 5; iU++) {
    rtb_rMotorTemperatureDerateMap[iU] = look1_binlxpw
      (rtb_rMotorTemperatureDerateMap[iU], rtCP_rMotorTemperatureDerateM_b,
       rtCP_rMotorTemperatureDerateMap, 6U);
  }

  /* End of Lookup_n-D: '<Root>/rMotorTemperatureDerate Map' */

  /* SignalConversion generated from: '<Root>/rMotorTemperatureDerateFL' */
  *rty_rMotorTemperatureDerateFL = rtb_rMotorTemperatureDerateMap[2];

  /* SignalConversion generated from: '<Root>/rMotorTemperatureDerateFR' */
  *rty_rMotorTemperatureDerateFR = rtb_rMotorTemperatureDerateMap[1];

  /* SignalConversion generated from: '<Root>/rMotorTemperatureDerate' */
  *rty_rMotorTemperatureDerate = rtb_rMotorTemperatureDerateMap[0];

  /* SignalConversion generated from: '<Root>/rMotorTemperatureDerateRL' */
  *rty_rMotorTemperatureDerateRL = rtb_rMotorTemperatureDerateMap[4];

  /* SignalConversion generated from: '<Root>/rMotorTemperatureDerateRR' */
  *rty_rMotorTemperatureDerateRR = rtb_rMotorTemperatureDerateMap[3];
}

/* Model initialize function */
void rMotorTemperatureDer_initialize(const char_T **rt_errorStatus,
  RT_MODEL_rMotorTemperatureDer_T *const rMotorTemperatureDerate_M)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(rMotorTemperatureDerate_M, rt_errorStatus);

  /* user code (Initialize function Body) */
  LL_TIM_EnableCounter(TIM2);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
