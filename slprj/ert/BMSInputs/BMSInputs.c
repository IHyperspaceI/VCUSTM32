/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: BMSInputs.c
 *
 * Code generated for Simulink model 'BMSInputs'.
 *
 * Model version                  : 13.2
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Thu Jul 30 16:37:22 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BMSInputs.h"
#include "rtwtypes.h"
#include "BMSInputs_private.h"

/* Output and update for referenced model: 'BMSInputs' */
void BMSInputs(const real_T *rtu_BMS_IIVTS, const real_T *rtu_BMS_IBMSHallEffect,
               const real_T *rtu_BMS_VDCAccumulator, const real_T
               *rtu_BMS_TCellMin, const real_T *rtu_BMS_VCellAverage, const
               real_T *rtu_BMS_VCellMax, const real_T *rtu_BMS_TCellMax, const
               real_T *rtu_BMS_IBMSDLC, const real_T *rtu_BMS_VCellMin, const
               real_T *rtu_BMS_RCellAverage, const boolean_T
               *rtu_BMS_BBalancingOn, const boolean_T *rtu_BMS_BBMSP0A0C, const
               boolean_T *rtu_BMS_BBMSP0A0E, const boolean_T *rtu_BMS_BBMSP0A10,
               const boolean_T *rtu_BMS_BBMSP0A80, const boolean_T
               *rtu_BMS_BBMSP0AC0, const boolean_T *rtu_BMS_BBMSP0AFA, real_T
               *rty_BMSSignalsBus_VCellMax, real_T *rty_BMSSignalsBus_VCellDelta,
               real_T *rty_BMSSignalsBus_VCellMin, real_T
               *rty_BMSSignalsBus_VCellAverage, real_T
               *rty_BMSSignalsBus_TCellMax, real_T *rty_BMSSignalsBus_IBMSDLC,
               real_T *rty_BMSSignalsBus_TCellMin, real_T
               *rty_BMSSignalsBus_IBMSHallEffec, real_T
               *rty_BMSSignalsBus_VDCAccumulato, real_T
               *rty_BMSSignalsBus_RCellAverage, boolean_T
               *rty_BMSSignalsBus_BBalancingOn, boolean_T
               *rty_BMSSignalsBus_BBMSP0A0C, boolean_T
               *rty_BMSSignalsBus_BBMSP0A0E, boolean_T
               *rty_BMSSignalsBus_BBMSP0A10, boolean_T
               *rty_BMSSignalsBus_BBMSP0A80, boolean_T
               *rty_BMSSignalsBus_BBMSP0AC0, boolean_T
               *rty_BMSSignalsBus_BBMSP0AFA, real_T *rty_BMSSignalsBus_IIVTS)
{
  /* DataTypeConversion: '<S1>/Cast To Boolean' */
  *rty_BMSSignalsBus_BBalancingOn = *rtu_BMS_BBalancingOn;

  /* DataTypeConversion: '<S1>/Cast To Boolean1' */
  *rty_BMSSignalsBus_BBMSP0A0C = *rtu_BMS_BBMSP0A0C;

  /* DataTypeConversion: '<S1>/Cast To Boolean2' */
  *rty_BMSSignalsBus_BBMSP0A0E = *rtu_BMS_BBMSP0A0E;

  /* DataTypeConversion: '<S1>/Cast To Boolean3' */
  *rty_BMSSignalsBus_BBMSP0A10 = *rtu_BMS_BBMSP0A10;

  /* DataTypeConversion: '<S1>/Cast To Boolean4' */
  *rty_BMSSignalsBus_BBMSP0A80 = *rtu_BMS_BBMSP0A80;

  /* DataTypeConversion: '<S1>/Cast To Boolean5' */
  *rty_BMSSignalsBus_BBMSP0AC0 = *rtu_BMS_BBMSP0AC0;

  /* DataTypeConversion: '<S1>/Cast To Boolean6' */
  *rty_BMSSignalsBus_BBMSP0AFA = *rtu_BMS_BBMSP0AFA;

  /* Sum: '<S1>/Subtract' */
  *rty_BMSSignalsBus_VCellDelta = *rtu_BMS_VCellMax - *rtu_BMS_VCellMin;

  /* Gain: '<S1>/mA to A Conversion' */
  *rty_BMSSignalsBus_IIVTS = 0.001 * *rtu_BMS_IIVTS;

  /* SignalConversion generated from: '<Root>/BMSSignalsBus' */
  *rty_BMSSignalsBus_VCellMax = *rtu_BMS_VCellMax;

  /* SignalConversion generated from: '<Root>/BMSSignalsBus' */
  *rty_BMSSignalsBus_RCellAverage = *rtu_BMS_RCellAverage;

  /* SignalConversion generated from: '<Root>/BMSSignalsBus' */
  *rty_BMSSignalsBus_VCellMin = *rtu_BMS_VCellMin;

  /* SignalConversion generated from: '<Root>/BMSSignalsBus' */
  *rty_BMSSignalsBus_VCellAverage = *rtu_BMS_VCellAverage;

  /* SignalConversion generated from: '<Root>/BMSSignalsBus' */
  *rty_BMSSignalsBus_TCellMax = *rtu_BMS_TCellMax;

  /* SignalConversion generated from: '<Root>/BMSSignalsBus' */
  *rty_BMSSignalsBus_IBMSDLC = *rtu_BMS_IBMSDLC;

  /* SignalConversion generated from: '<Root>/BMSSignalsBus' */
  *rty_BMSSignalsBus_TCellMin = *rtu_BMS_TCellMin;

  /* SignalConversion generated from: '<Root>/BMSSignalsBus' */
  *rty_BMSSignalsBus_IBMSHallEffec = *rtu_BMS_IBMSHallEffect;

  /* SignalConversion generated from: '<Root>/BMSSignalsBus' */
  *rty_BMSSignalsBus_VDCAccumulato = *rtu_BMS_VDCAccumulator;
}

/* Model initialize function */
void BMSInputs_initialize(const char_T **rt_errorStatus, RT_MODEL_BMSInputs_T *
  const BMSInputs_M)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(BMSInputs_M, rt_errorStatus);

  /* user code (Initialize function Body) */
  LL_TIM_EnableCounter(TIM2);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
