/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: WheelSpeeds.h
 *
 * Code generated for Simulink model 'WheelSpeeds'.
 *
 * Model version                  : 13.6
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Wed Jun  3 14:52:49 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef WheelSpeeds_h_
#define WheelSpeeds_h_
#ifndef WheelSpeeds_COMMON_INCLUDES_
#define WheelSpeeds_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                                 /* WheelSpeeds_COMMON_INCLUDES_ */

#include "WheelSpeeds_types.h"

/* user code (top of header file) */
#include "stm32h7xx_ll_tim.h"

/* Real-time Model Data Structure */
struct tag_RTM_WheelSpeeds_T {
  const char_T **errorStatus;
};

typedef struct {
  RT_MODEL_WheelSpeeds_T rtm;
} MdlrefDW_WheelSpeeds_T;

/* Model reference registration function */
extern void WheelSpeeds_initialize(const char_T **rt_errorStatus,
  RT_MODEL_WheelSpeeds_T *const WheelSpeeds_M);
extern void WheelSpeeds(const real_T *rtu_InverterCAN_InverterFLCANBu, const
  real_T *rtu_InverterCAN_InverterFRCANBu, const real_T
  *rtu_InverterCAN_InverterRLCANBu, const real_T
  *rtu_InverterCAN_InverterRRCANBu, real_T *rty_WheelSpeedsBus_vWheelRL, real_T *
  rty_WheelSpeedsBus_vWheelRR, real_T *rty_WheelSpeedsBus_vWheelFL, real_T
  *rty_WheelSpeedsBus_vWheelFR);

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
 * '<Root>' : 'WheelSpeeds'
 * '<S1>'   : 'WheelSpeeds/WheelSpeeds System'
 */
#endif                                 /* WheelSpeeds_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
