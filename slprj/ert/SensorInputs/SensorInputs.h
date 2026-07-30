/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: SensorInputs.h
 *
 * Code generated for Simulink model 'SensorInputs'.
 *
 * Model version                  : 13.2
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Thu Jul 30 16:39:18 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef SensorInputs_h_
#define SensorInputs_h_
#ifndef SensorInputs_COMMON_INCLUDES_
#define SensorInputs_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                                 /* SensorInputs_COMMON_INCLUDES_ */

#include "SensorInputs_types.h"

/* user code (top of header file) */
#include "stm32h7xx_ll_tim.h"

/* Real-time Model Data Structure */
struct tag_RTM_SensorInputs_T {
  const char_T **errorStatus;
};

typedef struct {
  RT_MODEL_SensorInputs_T rtm;
} MdlrefDW_SensorInputs_T;

/* Model reference registration function */
extern void SensorInputs_initialize(const char_T **rt_errorStatus,
  RT_MODEL_SensorInputs_T *const SensorInputs_M);
extern void SensorInputs(const boolean_T *rtu_CAN3Bus_STW_BSteeringWheelB, const
  boolean_T *rtu_CAN3Bus_STW_BSteeringWhee_g, const boolean_T
  *rtu_CAN3Bus_STW_BSteeringWhee_c, const boolean_T
  *rtu_CAN3Bus_STW_BSteeringWhee_e, const real_T
  *rtu_CAN3Bus_STW_NPageSelectRota, const real_T
  *rtu_CAN3Bus_STW_NParameterRotar, const real_T
  *rtu_CAN3Bus_STW_NEventModeRotar, const real_T *rtu_CAN3Bus_STW_VRegenPaddle1,
  const real_T *rtu_CAN3Bus_STW_VRegenPaddle2, const real_T
  *rtu_CAN3Bus_DDU7_NDisplayNumber, const real_T
  *rtu_CAN3Bus_DDU7_VSteeringAngle, const real_T
  *rtu_CAN3Bus_DDU7_VThrottlePedal, const real_T
  *rtu_CAN3Bus_DDU7_VThrottlePed_c, const real_T *rtu_CAN3Bus_DDU7_VBrakeF,
  const real_T *rtu_CAN3Bus_DDU7_VBrakeR, const real_T
  *rtu_CAN3Bus_DDU7_VDamperPotenti, const real_T
  *rtu_CAN3Bus_DDU7_VDamperPoten_d, real_T *rty_SensorSignals_VDamperPotent,
  real_T *rty_SensorSignals_VDamperPote_g, real_T
  *rty_SensorSignals_NDisplayNumbe, real_T *rty_SensorSignals_VSteeringAngl,
  real_T *rty_SensorSignals_VThrottlePeda, real_T
  *rty_SensorSignals_VThrottlePe_f, boolean_T *rty_SensorSignals_BSteeringWhee,
  boolean_T *rty_SensorSignals_BSteeringWh_h, boolean_T
  *rty_SensorSignals_BSteeringWh_k, boolean_T *rty_SensorSignals_BSteeringW_ka,
  real_T *rty_SensorSignals_NPageSelectRo, real_T
  *rty_SensorSignals_NParameterRot, real_T *rty_SensorSignals_NEventModeRot,
  real_T *rty_SensorSignals_VRegenPaddle1, real_T
  *rty_SensorSignals_VRegenPaddle2, real_T *rty_SensorSignals_VBrakeF, real_T
  *rty_SensorSignals_VBrakeR);

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S1>/Cast To Boolean1' : Eliminate redundant data type conversion
 * Block '<S1>/Cast To Boolean2' : Eliminate redundant data type conversion
 * Block '<S1>/Cast To Boolean3' : Eliminate redundant data type conversion
 * Block '<S1>/Cast To Boolean4' : Eliminate redundant data type conversion
 */

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
 * '<Root>' : 'SensorInputs'
 * '<S1>'   : 'SensorInputs/SensorSignals System'
 */
#endif                                 /* SensorInputs_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
