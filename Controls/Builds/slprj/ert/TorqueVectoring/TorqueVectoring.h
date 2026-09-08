/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: TorqueVectoring.h
 *
 * Code generated for Simulink model 'TorqueVectoring'.
 *
 * Model version                  : 13.3
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Tue Sep  8 11:43:35 2026
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

/* Block states (default storage) for model 'TorqueVectoring' */
typedef struct {
  uint8_T is_active_c1_TorqueVectoring;/* '<S1>/BTVOk System' */
  uint8_T is_c1_TorqueVectoring;       /* '<S1>/BTVOk System' */
} DW_TorqueVectoring_f_T;

/* Invariant block signals for model 'TorqueVectoring' */
typedef struct {
  const real_T Add2;                   /* '<S37>/Add2' */
  const real_T Add3;                   /* '<S37>/Add3' */
} ConstB_TorqueVectoring_h_T;

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
extern void TorqueVectoring(const real_T *rtu_gLongitudinalIMU, const real_T
  *rtu_aSteeringAngle, const real_T *rtu_vChassis, const real_T *rtu_pBrakeMax,
  const real_T *rtu_rThrottlePedal, const boolean_T *rtu_BTVOn, const real_T
  *rtu_MTotalRequested, const real_T *rtu_rTVMultiplier, const real_T
  *rtu_nYawRateIMU, const real_T *rtu_FLongitudinalLoadTransfer, const real_T
  *rtu_MMotorMaxFL, const real_T *rtu_MMotorMaxFR, const real_T *rtu_MMotorMaxRL,
  const real_T *rtu_MMotorMaxRR, real_T *rty_nYawRateErrorActual, boolean_T
  *rty_BTVOk, real_T *rty_MTorqueVectoringFL, real_T *rty_MTorqueVectoringFR,
  real_T *rty_MTorqueVectoringRL, real_T *rty_MTorqueVectoringRR,
  DW_TorqueVectoring_f_T *localDW);

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S1>/Data Type Conversion' : Unused code path elimination
 * Block '<S23>/Data Type Duplicate' : Unused code path elimination
 * Block '<S23>/Data Type Propagation' : Unused code path elimination
 * Block '<S24>/Data Type Duplicate' : Unused code path elimination
 * Block '<S24>/Data Type Propagation' : Unused code path elimination
 * Block '<S25>/Data Type Duplicate' : Unused code path elimination
 * Block '<S25>/Data Type Propagation' : Unused code path elimination
 * Block '<S26>/Data Type Duplicate' : Unused code path elimination
 * Block '<S26>/Data Type Propagation' : Unused code path elimination
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
 * '<S1>'   : 'TorqueVectoring/BTVOk System'
 * '<S2>'   : 'TorqueVectoring/MTorqueVectoring System'
 * '<S3>'   : 'TorqueVectoring/nFinalYawRateError System'
 * '<S4>'   : 'TorqueVectoring/rLongitudinalTorqueSplit System'
 * '<S5>'   : 'TorqueVectoring/BTVOk System/BContradictionsOk System'
 * '<S6>'   : 'TorqueVectoring/BTVOk System/BSensorsOk System'
 * '<S7>'   : 'TorqueVectoring/BTVOk System/BTVOk System'
 * '<S8>'   : 'TorqueVectoring/BTVOk System/BContradictionsOk System/BBrakeContradictionOk System'
 * '<S9>'   : 'TorqueVectoring/BTVOk System/BContradictionsOk System/BThrottleContradictionOk System'
 * '<S10>'  : 'TorqueVectoring/BTVOk System/BContradictionsOk System/BBrakeContradictionOk System/Compare To Constant'
 * '<S11>'  : 'TorqueVectoring/BTVOk System/BContradictionsOk System/BBrakeContradictionOk System/Compare To Constant1'
 * '<S12>'  : 'TorqueVectoring/BTVOk System/BContradictionsOk System/BThrottleContradictionOk System/Compare To Constant'
 * '<S13>'  : 'TorqueVectoring/BTVOk System/BContradictionsOk System/BThrottleContradictionOk System/Compare To Constant1'
 * '<S14>'  : 'TorqueVectoring/BTVOk System/BSensorsOk System/BSteeringAngleOK System'
 * '<S15>'  : 'TorqueVectoring/BTVOk System/BSensorsOk System/BVelocityOK System'
 * '<S16>'  : 'TorqueVectoring/BTVOk System/BSensorsOk System/BSteeringAngleOK System/Compare To Constant'
 * '<S17>'  : 'TorqueVectoring/BTVOk System/BSensorsOk System/BSteeringAngleOK System/Compare To Constant1'
 * '<S18>'  : 'TorqueVectoring/BTVOk System/BSensorsOk System/BVelocityOK System/Compare To Constant'
 * '<S19>'  : 'TorqueVectoring/BTVOk System/BSensorsOk System/BVelocityOK System/Compare To Constant1'
 * '<S20>'  : 'TorqueVectoring/MTorqueVectoring System/MTorqueVectoring System'
 * '<S21>'  : 'TorqueVectoring/MTorqueVectoring System/MTorqueVectoringAdjustment System'
 * '<S22>'  : 'TorqueVectoring/MTorqueVectoring System/MTorqueVectoringAdjustmentFrontRear System'
 * '<S23>'  : 'TorqueVectoring/MTorqueVectoring System/MTorqueVectoring System/Saturation Dynamic'
 * '<S24>'  : 'TorqueVectoring/MTorqueVectoring System/MTorqueVectoring System/Saturation Dynamic1'
 * '<S25>'  : 'TorqueVectoring/MTorqueVectoring System/MTorqueVectoring System/Saturation Dynamic2'
 * '<S26>'  : 'TorqueVectoring/MTorqueVectoring System/MTorqueVectoring System/Saturation Dynamic3'
 * '<S27>'  : 'TorqueVectoring/nFinalYawRateError System/nFinalYawRateError System'
 * '<S28>'  : 'TorqueVectoring/nFinalYawRateError System/nYawRateRequested System'
 * '<S29>'  : 'TorqueVectoring/nFinalYawRateError System/nFinalYawRateError System/nFinalYawRateError System'
 * '<S30>'  : 'TorqueVectoring/nFinalYawRateError System/nFinalYawRateError System/nYawRateErrorActual System'
 * '<S31>'  : 'TorqueVectoring/nFinalYawRateError System/nFinalYawRateError System/nFinalYawRateError System/Compare To Constant'
 * '<S32>'  : 'TorqueVectoring/nFinalYawRateError System/nFinalYawRateError System/nFinalYawRateError System/Compare To Constant1'
 * '<S33>'  : 'TorqueVectoring/nFinalYawRateError System/nFinalYawRateError System/nFinalYawRateError System/Compare To Constant2'
 * '<S34>'  : 'TorqueVectoring/nFinalYawRateError System/nFinalYawRateError System/nFinalYawRateError System/Compare To Constant3'
 * '<S35>'  : 'TorqueVectoring/nFinalYawRateError System/nFinalYawRateError System/nFinalYawRateError System/Compare To Constant4'
 * '<S36>'  : 'TorqueVectoring/nFinalYawRateError System/nFinalYawRateError System/nFinalYawRateError System/Compare To Constant5'
 * '<S37>'  : 'TorqueVectoring/rLongitudinalTorqueSplit System/Front and Rear Weight System'
 * '<S38>'  : 'TorqueVectoring/rLongitudinalTorqueSplit System/MTorqueVectoringFront//Rear System '
 * '<S39>'  : 'TorqueVectoring/rLongitudinalTorqueSplit System/MTorqueVectoringFront//Rear System /MWheel System'
 * '<S40>'  : 'TorqueVectoring/rLongitudinalTorqueSplit System/MTorqueVectoringFront//Rear System /Torque Longitudinal Distribution'
 */
#endif                                 /* TorqueVectoring_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
