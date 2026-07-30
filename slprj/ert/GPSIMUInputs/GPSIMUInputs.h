/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: GPSIMUInputs.h
 *
 * Code generated for Simulink model 'GPSIMUInputs'.
 *
 * Model version                  : 13.2
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Thu Jul 30 16:38:56 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef GPSIMUInputs_h_
#define GPSIMUInputs_h_
#ifndef GPSIMUInputs_COMMON_INCLUDES_
#define GPSIMUInputs_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                                 /* GPSIMUInputs_COMMON_INCLUDES_ */

#include "GPSIMUInputs_types.h"

/* user code (top of header file) */
#include "stm32h7xx_ll_tim.h"

/* Real-time Model Data Structure */
struct tag_RTM_GPSIMUInputs_T {
  const char_T **errorStatus;
};

typedef struct {
  RT_MODEL_GPSIMUInputs_T rtm;
} MdlrefDW_GPSIMUInputs_T;

/* Model reference registration function */
extern void GPSIMUInputs_initialize(const char_T **rt_errorStatus,
  RT_MODEL_GPSIMUInputs_T *const GPSIMUInputs_M);
extern void GPSIMUInputs(const real_T *rtu_CAN3_IMU_vLateralIMU, const real_T
  *rtu_CAN3_IMU_gVerticalIMU, const real_T *rtu_CAN3_IMU_vLongitudinalIMU, const
  real_T *rtu_CAN3_IMU_gLateralIMU, const real_T *rtu_CAN3_IMU_gLongitudinalIMU,
  const real_T *rtu_CAN3_IMU_nYawRateIMU, real_T *rty_GPSIMUSignals_vLateralIMU,
  real_T *rty_GPSIMUSignals_gVerticalIMU, real_T
  *rty_GPSIMUSignals_vLongitudinal, real_T *rty_GPSIMUSignals_gLateralIMU,
  real_T *rty_GPSIMUSignals_gLongitudinal, real_T *rty_GPSIMUSignals_nYawRateIMU);

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'GPSIMUInputs'
 * '<S1>'   : 'GPSIMUInputs/GPSIMUSignals System'
 */
#endif                                 /* GPSIMUInputs_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
