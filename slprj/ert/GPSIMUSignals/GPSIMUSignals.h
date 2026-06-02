/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: GPSIMUSignals.h
 *
 * Code generated for Simulink model 'GPSIMUSignals'.
 *
 * Model version                  : 13.7
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Tue Jun  2 18:43:50 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef GPSIMUSignals_h_
#define GPSIMUSignals_h_
#ifndef GPSIMUSignals_COMMON_INCLUDES_
#define GPSIMUSignals_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                                 /* GPSIMUSignals_COMMON_INCLUDES_ */

#include "GPSIMUSignals_types.h"

/* user code (top of header file) */
#include "stm32h7xx_ll_tim.h"

/* Real-time Model Data Structure */
struct tag_RTM_GPSIMUSignals_T {
  const char_T **errorStatus;
};

typedef struct {
  RT_MODEL_GPSIMUSignals_T rtm;
} MdlrefDW_GPSIMUSignals_T;

/* Model reference registration function */
extern void GPSIMUSignals_initialize(const char_T **rt_errorStatus,
  RT_MODEL_GPSIMUSignals_T *const GPSIMUSignals_M);
extern void GPSIMUSignals(const real_T *rtu_CAN3_OXTSDataFrame1540_vLon, const
  real_T *rtu_CAN3_OXTSDataFrame1541_gLat, const real_T
  *rtu_CAN3_OXTSDataFrame1541_gLon, const real_T
  *rtu_CAN3_OXTSDataFrame1544_nYaw, real_T *rty_GPSIMUSignalsBus_vLongitudi,
  real_T *rty_GPSIMUSignalsBus_gLateralOX, real_T
  *rty_GPSIMUSignalsBus_gLongitudi, real_T *rty_GPSIMUSignalsBus_nYawRateOX);

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
 * '<Root>' : 'GPSIMUSignals'
 * '<S1>'   : 'GPSIMUSignals/GPSIMUSignals System'
 */
#endif                                 /* GPSIMUSignals_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
