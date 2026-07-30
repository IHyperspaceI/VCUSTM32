/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: TorqueDistribution.h
 *
 * Code generated for Simulink model 'TorqueDistribution'.
 *
 * Model version                  : 13.2
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Thu Jul 30 16:46:34 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef TorqueDistribution_h_
#define TorqueDistribution_h_
#ifndef TorqueDistribution_COMMON_INCLUDES_
#define TorqueDistribution_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                                 /* TorqueDistribution_COMMON_INCLUDES_ */

#include "TorqueDistribution_types.h"

/* user code (top of header file) */
#include "stm32h7xx_ll_tim.h"

/* Real-time Model Data Structure */
struct tag_RTM_TorqueDistribution_T {
  const char_T **errorStatus;
};

typedef struct {
  RT_MODEL_TorqueDistribution_T rtm;
} MdlrefDW_TorqueDistribution_T;

/* Model reference registration function */
extern void TorqueDistribution_initialize(const char_T **rt_errorStatus,
  RT_MODEL_TorqueDistribution_T *const TorqueDistribution_M);
extern void TorqueDistribution(const real_T *rtu_MTotalRequested, const real_T
  *rtu_vChassis, const real_T *rtu_rThrottlePedal, const real_T
  *rtu_rRegenPaddle, const real_T *rtu_PEngineBraking, const real_T
  *rtu_MTorqueVectoringFL, const real_T *rtu_MTorqueVectoringFR, const real_T
  *rtu_MTorqueVectoringRL, const real_T *rtu_MTorqueVectoringRR, const boolean_T
  *rtu_BTVOn, const real_T *rtu_rEngineBrakingSplit, const real_T
  *rtu_rTorqueSplit, const real_T *rtu_PRegenLimit, const real_T
  *rtu_PDischargeLimit, const real_T *rtu_PTSTemperatureDerateFL, const real_T
  *rtu_PTSTemperatureDerateFR, const real_T *rtu_PTSTemperatureDerateRL, const
  real_T *rtu_PTSTemperatureDerateRR, const real_T *rtu_MMotorMaxFR, const
  real_T *rtu_MMotorMaxFL, const real_T *rtu_MMotorMaxRR, const real_T
  *rtu_MMotorMaxRL, real_T *rty_rSplitRear, real_T *rty_MTorqueDistributionFL,
  real_T *rty_MTorqueDistributionFR, real_T *rty_MTorqueDistributionRL, real_T
  *rty_MTorqueDistributionRR);

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S14>/Data Type Duplicate' : Unused code path elimination
 * Block '<S14>/Data Type Propagation' : Unused code path elimination
 * Block '<S15>/Data Type Duplicate' : Unused code path elimination
 * Block '<S15>/Data Type Propagation' : Unused code path elimination
 * Block '<S18>/Data Type Duplicate' : Unused code path elimination
 * Block '<S18>/Data Type Propagation' : Unused code path elimination
 * Block '<S19>/Data Type Duplicate' : Unused code path elimination
 * Block '<S19>/Data Type Propagation' : Unused code path elimination
 * Block '<S7>/Front-Wheel Drive' : Unused code path elimination
 * Block '<S7>/Rear-Wheel Drive' : Unused code path elimination
 * Block '<S7>/Switch2' : Unused code path elimination
 * Block '<S7>/Switch5' : Unused code path elimination
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
 * '<Root>' : 'TorqueDistribution'
 * '<S1>'   : 'TorqueDistribution/BEngineBrakingEngaged System'
 * '<S2>'   : 'TorqueDistribution/MEngineBraking System'
 * '<S3>'   : 'TorqueDistribution/MEngineBrakingF//R system'
 * '<S4>'   : 'TorqueDistribution/MFixedTorqueDistributionFront System'
 * '<S5>'   : 'TorqueDistribution/MFixedTorqueDistributionRear System'
 * '<S6>'   : 'TorqueDistribution/MTorqueDistribution System'
 * '<S7>'   : 'TorqueDistribution/rSplit System'
 * '<S8>'   : 'TorqueDistribution/BEngineBrakingEngaged System/Compare To Constant'
 * '<S9>'   : 'TorqueDistribution/BEngineBrakingEngaged System/Compare To Constant1'
 * '<S10>'  : 'TorqueDistribution/BEngineBrakingEngaged System/Compare To Constant2'
 * '<S11>'  : 'TorqueDistribution/BEngineBrakingEngaged System/Compare To Constant3'
 * '<S12>'  : 'TorqueDistribution/MEngineBraking System/Power to Torque Converter'
 * '<S13>'  : 'TorqueDistribution/MFixedTorqueDistributionFront System/MFixedTorqueDistribution System'
 * '<S14>'  : 'TorqueDistribution/MFixedTorqueDistributionFront System/MFixedTorqueDistribution System/Saturation Dynamic'
 * '<S15>'  : 'TorqueDistribution/MFixedTorqueDistributionFront System/MFixedTorqueDistribution System/Saturation Dynamic1'
 * '<S16>'  : 'TorqueDistribution/MFixedTorqueDistributionRear System/MFixedTorqueDistribution System'
 * '<S17>'  : 'TorqueDistribution/MFixedTorqueDistributionRear System/MFixedTorqueDistributionRear System'
 * '<S18>'  : 'TorqueDistribution/MFixedTorqueDistributionRear System/MFixedTorqueDistribution System/Saturation Dynamic'
 * '<S19>'  : 'TorqueDistribution/MFixedTorqueDistributionRear System/MFixedTorqueDistribution System/Saturation Dynamic1'
 */
#endif                                 /* TorqueDistribution_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
