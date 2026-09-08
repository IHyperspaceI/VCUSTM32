/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: PMotorTemperatureDerate.c
 *
 * Code generated for Simulink model 'PMotorTemperatureDerate'.
 *
 * Model version                  : 13.3
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Tue Sep  8 11:38:28 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "PMotorTemperatureDerate.h"
#include "rtwtypes.h"
#include "look1_binlxpw.h"
#include "PMotorTemperatureDerate_private.h"

/* Output and update for referenced model: 'PMotorTemperatureDerate' */
void PMotorTemperatureDerate(const real_T *rtu_TMotorMax, const real_T
  *rtu_TMotorFR, const real_T *rtu_TMotorFL, const real_T *rtu_TMotorRR, const
  real_T *rtu_TMotorRL, real_T *rty_PMotorTemperatureDerate, real_T
  *rty_PMotorTemperatureDerateFR, real_T *rty_PMotorTemperatureDerateFL, real_T *
  rty_PMotorTemperatureDerateRR, real_T *rty_PMotorTemperatureDerateRL)
{
  real_T rtb_PMotorTemperatureDerateMap[5];
  int32_T iU;

  /* SignalConversion generated from: '<Root>/PMotorTemperatureDerate Map' */
  rtb_PMotorTemperatureDerateMap[0] = *rtu_TMotorMax;
  rtb_PMotorTemperatureDerateMap[1] = *rtu_TMotorFR;
  rtb_PMotorTemperatureDerateMap[2] = *rtu_TMotorFL;
  rtb_PMotorTemperatureDerateMap[3] = *rtu_TMotorRR;
  rtb_PMotorTemperatureDerateMap[4] = *rtu_TMotorRL;

  /* Lookup_n-D: '<Root>/PMotorTemperatureDerate Map' */
  for (iU = 0; iU < 5; iU++) {
    rtb_PMotorTemperatureDerateMap[iU] = look1_binlxpw
      (rtb_PMotorTemperatureDerateMap[iU], rtCP_PMotorTemperatureDerateM_c,
       rtCP_PMotorTemperatureDerateMap, 12U);
  }

  /* End of Lookup_n-D: '<Root>/PMotorTemperatureDerate Map' */

  /* SignalConversion generated from: '<Root>/PMotorTemperatureDerateFL' */
  *rty_PMotorTemperatureDerateFL = rtb_PMotorTemperatureDerateMap[2];

  /* SignalConversion generated from: '<Root>/PMotorTemperatureDerateFR' */
  *rty_PMotorTemperatureDerateFR = rtb_PMotorTemperatureDerateMap[1];

  /* SignalConversion generated from: '<Root>/PMotorTemperatureDerate' */
  *rty_PMotorTemperatureDerate = rtb_PMotorTemperatureDerateMap[0];

  /* SignalConversion generated from: '<Root>/PMotorTemperatureDerateRL' */
  *rty_PMotorTemperatureDerateRL = rtb_PMotorTemperatureDerateMap[4];

  /* SignalConversion generated from: '<Root>/PMotorTemperatureDerateRR' */
  *rty_PMotorTemperatureDerateRR = rtb_PMotorTemperatureDerateMap[3];
}

/* Model initialize function */
void PMotorTemperatureDer_initialize(const char_T **rt_errorStatus,
  RT_MODEL_PMotorTemperatureDer_T *const PMotorTemperatureDerate_M)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(PMotorTemperatureDerate_M, rt_errorStatus);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
