/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: GPSIMUSignals.c
 *
 * Code generated for Simulink model 'GPSIMUSignals'.
 *
 * Model version                  : 13.7
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Wed Jun  3 14:52:27 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "GPSIMUSignals.h"
#include "rtwtypes.h"
#include "GPSIMUSignals_private.h"

/* Output and update for referenced model: 'GPSIMUSignals' */
void GPSIMUSignals(const real_T *rtu_CAN3_OXTSDataFrame1540_vLon, const real_T
                   *rtu_CAN3_OXTSDataFrame1541_gLat, const real_T
                   *rtu_CAN3_OXTSDataFrame1541_gLon, const real_T
                   *rtu_CAN3_OXTSDataFrame1544_nYaw, real_T
                   *rty_GPSIMUSignalsBus_vLongitudi, real_T
                   *rty_GPSIMUSignalsBus_gLateralOX, real_T
                   *rty_GPSIMUSignalsBus_gLongitudi, real_T
                   *rty_GPSIMUSignalsBus_nYawRateOX)
{
  /* SignalConversion generated from: '<Root>/GPSIMUSignalsBus' */
  *rty_GPSIMUSignalsBus_vLongitudi = *rtu_CAN3_OXTSDataFrame1540_vLon;

  /* SignalConversion generated from: '<Root>/GPSIMUSignalsBus' */
  *rty_GPSIMUSignalsBus_gLateralOX = *rtu_CAN3_OXTSDataFrame1541_gLat;

  /* SignalConversion generated from: '<Root>/GPSIMUSignalsBus' */
  *rty_GPSIMUSignalsBus_gLongitudi = *rtu_CAN3_OXTSDataFrame1541_gLon;

  /* SignalConversion generated from: '<Root>/GPSIMUSignalsBus' */
  *rty_GPSIMUSignalsBus_nYawRateOX = *rtu_CAN3_OXTSDataFrame1544_nYaw;
}

/* Model initialize function */
void GPSIMUSignals_initialize(const char_T **rt_errorStatus,
  RT_MODEL_GPSIMUSignals_T *const GPSIMUSignals_M)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(GPSIMUSignals_M, rt_errorStatus);

  /* user code (Initialize function Body) */
  LL_TIM_EnableCounter(TIM2);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
