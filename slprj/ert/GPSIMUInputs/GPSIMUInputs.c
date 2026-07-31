/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: GPSIMUInputs.c
 *
 * Code generated for Simulink model 'GPSIMUInputs'.
 *
 * Model version                  : 13.2
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Fri Jul 31 17:27:19 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "GPSIMUInputs.h"
#include "rtwtypes.h"
#include "GPSIMUInputs_private.h"

/* Output and update for referenced model: 'GPSIMUInputs' */
void GPSIMUInputs(const real_T *rtu_CAN3_IMU_vLateralIMU, const real_T
                  *rtu_CAN3_IMU_gVerticalIMU, const real_T
                  *rtu_CAN3_IMU_vLongitudinalIMU, const real_T
                  *rtu_CAN3_IMU_gLateralIMU, const real_T
                  *rtu_CAN3_IMU_gLongitudinalIMU, const real_T
                  *rtu_CAN3_IMU_nYawRateIMU, real_T
                  *rty_GPSIMUSignals_vLateralIMU, real_T
                  *rty_GPSIMUSignals_gVerticalIMU, real_T
                  *rty_GPSIMUSignals_vLongitudinal, real_T
                  *rty_GPSIMUSignals_gLateralIMU, real_T
                  *rty_GPSIMUSignals_gLongitudinal, real_T
                  *rty_GPSIMUSignals_nYawRateIMU)
{
  /* SignalConversion generated from: '<Root>/GPSIMUSignals' */
  *rty_GPSIMUSignals_vLateralIMU = *rtu_CAN3_IMU_vLateralIMU;

  /* SignalConversion generated from: '<Root>/GPSIMUSignals' */
  *rty_GPSIMUSignals_gVerticalIMU = *rtu_CAN3_IMU_gVerticalIMU;

  /* SignalConversion generated from: '<Root>/GPSIMUSignals' */
  *rty_GPSIMUSignals_vLongitudinal = *rtu_CAN3_IMU_vLongitudinalIMU;

  /* SignalConversion generated from: '<Root>/GPSIMUSignals' */
  *rty_GPSIMUSignals_gLateralIMU = *rtu_CAN3_IMU_gLateralIMU;

  /* SignalConversion generated from: '<Root>/GPSIMUSignals' */
  *rty_GPSIMUSignals_gLongitudinal = *rtu_CAN3_IMU_gLongitudinalIMU;

  /* Gain: '<S1>/Gain' */
  *rty_GPSIMUSignals_nYawRateIMU = -*rtu_CAN3_IMU_nYawRateIMU;
}

/* Model initialize function */
void GPSIMUInputs_initialize(const char_T **rt_errorStatus,
  RT_MODEL_GPSIMUInputs_T *const GPSIMUInputs_M)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(GPSIMUInputs_M, rt_errorStatus);

  /* user code (Initialize function Body) */
  LL_TIM_EnableCounter(TIM2);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
