/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: BMSSignals.c
 *
 * Code generated for Simulink model 'BMSSignals'.
 *
 * Model version                  : 13.7
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Tue Jun  2 18:43:28 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BMSSignals.h"
#include "rtwtypes.h"
#include "BMSSignals_private.h"

/* Output and update for referenced model: 'BMSSignals' */
void BMSSignals(const real_T *rtu_BMSCAN_IIVTS, const real_T
                *rtu_BMSCAN_IBMSHallEffect, const real_T
                *rtu_BMSCAN_VDCAccumulator, const real_T *rtu_BMSCAN_TCellMin,
                const real_T *rtu_BMSCAN_VCellAverage, const real_T
                *rtu_BMSCAN_VCellMax, const real_T *rtu_BMSCAN_TCellMax, const
                real_T *rtu_BMSCAN_NBMSDLC, const real_T *rtu_BMSCAN_VCellMin,
                const real_T *rtu_BMSCAN_RCellAverage, const real_T
                *rtu_BMSCAN_BBalancingActive, const real_T *rtu_BMSCAN_BBMSP0A0C,
                const real_T *rtu_BMSCAN_BBMSP0A0E, const real_T
                *rtu_BMSCAN_BBMSP0A10, const real_T *rtu_BMSCAN_BBMSP0A80, const
                real_T *rtu_BMSCAN_BBMSP0AC0, const real_T *rtu_BMSCAN_BBMSP0AFA,
                real_T *rty_BMSSignalsBus_VCellMax, real_T
                *rty_BMSSignalsBus_VCellDelta, real_T
                *rty_BMSSignalsBus_VCellMin, real_T
                *rty_BMSSignalsBus_VCellAverage, real_T
                *rty_BMSSignalsBus_TCellMax, real_T *rty_BMSSignalsBus_NBMSDLC,
                real_T *rty_BMSSignalsBus_TCellMin, real_T
                *rty_BMSSignalsBus_IBMSHallEffec, real_T
                *rty_BMSSignalsBus_VDCAccumulato, real_T
                *rty_BMSSignalsBus_RCellAverage, boolean_T
                *rty_BMSSignalsBus_BBalancingAct, boolean_T
                *rty_BMSSignalsBus_BBMSP0A0C, boolean_T
                *rty_BMSSignalsBus_BBMSP0A0E, boolean_T
                *rty_BMSSignalsBus_BBMSP0A10, boolean_T
                *rty_BMSSignalsBus_BBMSP0A80, boolean_T
                *rty_BMSSignalsBus_BBMSP0AC0, boolean_T
                *rty_BMSSignalsBus_BBMSP0AFA, real_T *rty_BMSSignalsBus_IIVTS)
{
  /* DataTypeConversion: '<S1>/Cast To Boolean' */
  *rty_BMSSignalsBus_BBalancingAct = (*rtu_BMSCAN_BBalancingActive != 0.0);

  /* DataTypeConversion: '<S1>/Cast To Boolean1' */
  *rty_BMSSignalsBus_BBMSP0A0C = (*rtu_BMSCAN_BBMSP0A0C != 0.0);

  /* DataTypeConversion: '<S1>/Cast To Boolean2' */
  *rty_BMSSignalsBus_BBMSP0A0E = (*rtu_BMSCAN_BBMSP0A0E != 0.0);

  /* DataTypeConversion: '<S1>/Cast To Boolean3' */
  *rty_BMSSignalsBus_BBMSP0A10 = (*rtu_BMSCAN_BBMSP0A10 != 0.0);

  /* DataTypeConversion: '<S1>/Cast To Boolean4' */
  *rty_BMSSignalsBus_BBMSP0A80 = (*rtu_BMSCAN_BBMSP0A80 != 0.0);

  /* DataTypeConversion: '<S1>/Cast To Boolean5' */
  *rty_BMSSignalsBus_BBMSP0AC0 = (*rtu_BMSCAN_BBMSP0AC0 != 0.0);

  /* DataTypeConversion: '<S1>/Cast To Boolean6' */
  *rty_BMSSignalsBus_BBMSP0AFA = (*rtu_BMSCAN_BBMSP0AFA != 0.0);

  /* Sum: '<S1>/Subtract' */
  *rty_BMSSignalsBus_VCellDelta = *rtu_BMSCAN_VCellMax - *rtu_BMSCAN_VCellMin;

  /* Gain: '<S1>/mA to A Conversion' */
  *rty_BMSSignalsBus_IIVTS = 0.001 * *rtu_BMSCAN_IIVTS;

  /* SignalConversion generated from: '<Root>/BMSSignalsBus' */
  *rty_BMSSignalsBus_VCellMax = *rtu_BMSCAN_VCellMax;

  /* SignalConversion generated from: '<Root>/BMSSignalsBus' */
  *rty_BMSSignalsBus_RCellAverage = *rtu_BMSCAN_RCellAverage;

  /* SignalConversion generated from: '<Root>/BMSSignalsBus' */
  *rty_BMSSignalsBus_VCellMin = *rtu_BMSCAN_VCellMin;

  /* SignalConversion generated from: '<Root>/BMSSignalsBus' */
  *rty_BMSSignalsBus_VCellAverage = *rtu_BMSCAN_VCellAverage;

  /* SignalConversion generated from: '<Root>/BMSSignalsBus' */
  *rty_BMSSignalsBus_TCellMax = *rtu_BMSCAN_TCellMax;

  /* SignalConversion generated from: '<Root>/BMSSignalsBus' */
  *rty_BMSSignalsBus_NBMSDLC = *rtu_BMSCAN_NBMSDLC;

  /* SignalConversion generated from: '<Root>/BMSSignalsBus' */
  *rty_BMSSignalsBus_TCellMin = *rtu_BMSCAN_TCellMin;

  /* SignalConversion generated from: '<Root>/BMSSignalsBus' */
  *rty_BMSSignalsBus_IBMSHallEffec = *rtu_BMSCAN_IBMSHallEffect;

  /* SignalConversion generated from: '<Root>/BMSSignalsBus' */
  *rty_BMSSignalsBus_VDCAccumulato = *rtu_BMSCAN_VDCAccumulator;
}

/* Model initialize function */
void BMSSignals_initialize(const char_T **rt_errorStatus, RT_MODEL_BMSSignals_T *
  const BMSSignals_M)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(BMSSignals_M, rt_errorStatus);

  /* user code (Initialize function Body) */
  LL_TIM_EnableCounter(TIM2);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
