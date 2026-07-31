/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: WheelSpeedInputs.h
 *
 * Code generated for Simulink model 'WheelSpeedInputs'.
 *
 * Model version                  : 13.2
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Fri Jul 31 17:27:52 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef WheelSpeedInputs_h_
#define WheelSpeedInputs_h_
#ifndef WheelSpeedInputs_COMMON_INCLUDES_
#define WheelSpeedInputs_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                                 /* WheelSpeedInputs_COMMON_INCLUDES_ */

#include "WheelSpeedInputs_types.h"

/* user code (top of header file) */
#include "stm32h7xx_ll_tim.h"

/* Real-time Model Data Structure */
struct tag_RTM_WheelSpeedInputs_T {
  const char_T **errorStatus;
};

typedef struct {
  RT_MODEL_WheelSpeedInputs_T rtm;
} MdlrefDW_WheelSpeedInputs_T;

/* Model reference registration function */
extern void WheelSpeedInputs_initialize(const char_T **rt_errorStatus,
  RT_MODEL_WheelSpeedInputs_T *const WheelSpeedInputs_M);
extern void WheelSpeedInputs(const real_T *rtu_CAN1_2Bus_InverterFL_nMotor,
  const real_T *rtu_CAN1_2Bus_InverterFR_nMotor, const real_T
  *rtu_CAN1_2Bus_InverterRL_nMotor, const real_T
  *rtu_CAN1_2Bus_InverterRR_nMotor, real_T *rty_WheelSpeeds_vWheelRL, real_T
  *rty_WheelSpeeds_vWheelRR, real_T *rty_WheelSpeeds_vWheelFL, real_T
  *rty_WheelSpeeds_vWheelFR);

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
 * '<Root>' : 'WheelSpeedInputs'
 * '<S1>'   : 'WheelSpeedInputs/WheelSpeeds System'
 */
#endif                                 /* WheelSpeedInputs_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
