/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: TorqueVectoring.h
 *
 * Code generated for Simulink model 'TorqueVectoring'.
 *
 * Model version                  : 13.5
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Tue Jun  2 18:48:28 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef TorqueVectoring_h_
#define TorqueVectoring_h_
#ifndef TorqueVectoring_COMMON_INCLUDES_
#define TorqueVectoring_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                                 /* TorqueVectoring_COMMON_INCLUDES_ */

#include "TorqueVectoring_types.h"

/* user code (top of header file) */
#include "stm32h7xx_ll_tim.h"

/* Block states (default storage) for model 'TorqueVectoring' */
typedef struct {
  uint8_T is_active_c1_TorqueVectoring;/* '<S1>/BTorqueVectoringOK System' */
  uint8_T is_c1_TorqueVectoring;       /* '<S1>/BTorqueVectoringOK System' */
} DW_TorqueVectoring_f_T;

/* Real-time Model Data Structure */
struct tag_RTM_TorqueVectoring_T {
  const char_T **errorStatus;
};

typedef struct {
  DW_TorqueVectoring_f_T rtdw;
  RT_MODEL_TorqueVectoring_T rtm;
} MdlrefDW_TorqueVectoring_T;

/* Model reference registration function */
extern void TorqueVectoring_initialize(const char_T **rt_errorStatus,
  RT_MODEL_TorqueVectoring_T *const TorqueVectoring_M);
extern void TorqueVectoring(const real_T *rtu_MFinalEMSRequested, const real_T
  *rtu_gLongitudinalOXTSIMU, const real_T *rtu_rTorqueVectoringMultiplier, const
  real_T *rtu_aSteeringAngle, const real_T *rtu_vChassis, const real_T
  *rtu_pBrakeMax, const real_T *rtu_rThrottlePedal, const boolean_T
  *rtu_BTorqueVectoringActivated, const real_T *rtu_nYawRateOXTSIMU, real_T
  *rty_nYawRateErrorActual, boolean_T *rty_BTorqueVectoringOK, real_T
  *rty_MTorqueVectoringFL, real_T *rty_MTorqueVectoringFR, real_T
  *rty_MTorqueVectoringRL, real_T *rty_MTorqueVectoringRR,
  DW_TorqueVectoring_f_T *localDW);

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S5>/Data Type Conversion' : Eliminate redundant data type conversion
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
 * '<Root>' : 'TorqueVectoring'
 * '<S1>'   : 'TorqueVectoring/BTorqueVectoringOK System'
 * '<S2>'   : 'TorqueVectoring/MTorqueVectoring System'
 * '<S3>'   : 'TorqueVectoring/nFinalYawRateError System'
 * '<S4>'   : 'TorqueVectoring/rTorqueSplit System'
 * '<S5>'   : 'TorqueVectoring/BTorqueVectoringOK System/BContradictionsOK System'
 * '<S6>'   : 'TorqueVectoring/BTorqueVectoringOK System/BSensorsOK System'
 * '<S7>'   : 'TorqueVectoring/BTorqueVectoringOK System/BTorqueVectoringOK System'
 * '<S8>'   : 'TorqueVectoring/BTorqueVectoringOK System/BContradictionsOK System/Brake Contradiction'
 * '<S9>'   : 'TorqueVectoring/BTorqueVectoringOK System/BContradictionsOK System/Throttle Contradiction'
 * '<S10>'  : 'TorqueVectoring/BTorqueVectoringOK System/BContradictionsOK System/Brake Contradiction/Compare To Constant'
 * '<S11>'  : 'TorqueVectoring/BTorqueVectoringOK System/BContradictionsOK System/Brake Contradiction/Compare To Constant1'
 * '<S12>'  : 'TorqueVectoring/BTorqueVectoringOK System/BContradictionsOK System/Throttle Contradiction/Compare To Constant'
 * '<S13>'  : 'TorqueVectoring/BTorqueVectoringOK System/BContradictionsOK System/Throttle Contradiction/Compare To Constant1'
 * '<S14>'  : 'TorqueVectoring/BTorqueVectoringOK System/BSensorsOK System/BSteeringAngleOK System'
 * '<S15>'  : 'TorqueVectoring/BTorqueVectoringOK System/BSensorsOK System/BVelocityOK System'
 * '<S16>'  : 'TorqueVectoring/BTorqueVectoringOK System/BSensorsOK System/BSteeringAngleOK System/Compare To Constant'
 * '<S17>'  : 'TorqueVectoring/BTorqueVectoringOK System/BSensorsOK System/BSteeringAngleOK System/Compare To Constant1'
 * '<S18>'  : 'TorqueVectoring/BTorqueVectoringOK System/BSensorsOK System/BVelocityOK System/Compare To Constant'
 * '<S19>'  : 'TorqueVectoring/BTorqueVectoringOK System/BSensorsOK System/BVelocityOK System/Compare To Constant1'
 * '<S20>'  : 'TorqueVectoring/MTorqueVectoring System/MTorqueVectoring System'
 * '<S21>'  : 'TorqueVectoring/MTorqueVectoring System/MTorqueVectoringAdjustment System'
 * '<S22>'  : 'TorqueVectoring/MTorqueVectoring System/MTorqueVectoringAdjustmentFront System'
 * '<S23>'  : 'TorqueVectoring/MTorqueVectoring System/MTorqueVectoringAdjustmentRear System'
 * '<S24>'  : 'TorqueVectoring/nFinalYawRateError System/nFinalYawRateError System'
 * '<S25>'  : 'TorqueVectoring/nFinalYawRateError System/nYawRateRequested System'
 * '<S26>'  : 'TorqueVectoring/nFinalYawRateError System/nFinalYawRateError System/nFinalYawRateError System'
 * '<S27>'  : 'TorqueVectoring/nFinalYawRateError System/nFinalYawRateError System/nYawRateErrorActual System'
 * '<S28>'  : 'TorqueVectoring/nFinalYawRateError System/nFinalYawRateError System/nFinalYawRateError System/Compare To Constant'
 * '<S29>'  : 'TorqueVectoring/nFinalYawRateError System/nFinalYawRateError System/nFinalYawRateError System/Compare To Constant1'
 * '<S30>'  : 'TorqueVectoring/rTorqueSplit System/Front and Rear Weight System'
 * '<S31>'  : 'TorqueVectoring/rTorqueSplit System/Subsystem'
 * '<S32>'  : 'TorqueVectoring/rTorqueSplit System/Weight Transfer Calculation'
 * '<S33>'  : 'TorqueVectoring/rTorqueSplit System/Subsystem/MWheel System'
 * '<S34>'  : 'TorqueVectoring/rTorqueSplit System/Subsystem/Torque Longitudinal Distribution'
 */
#endif                                 /* TorqueVectoring_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
