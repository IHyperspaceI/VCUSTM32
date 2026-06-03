/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: TorqueDistribution.h
 *
 * Code generated for Simulink model 'TorqueDistribution'.
 *
 * Model version                  : 13.5
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Wed Jun  3 14:56:50 2026
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
extern void TorqueDistribution(const real_T *rtu_MFinalEMSRequested, const
  real_T *rtu_vChassis, const real_T *rtu_rThrottlePedal, const real_T
  *rtu_rRegenPaddle, const boolean_T *rtu_BEncoderErrorRear, const boolean_T
  *rtu_BEncoderErrorFront, const real_T *rtu_PEngineBraking, const real_T
  *rtu_rRegenDerate, const real_T *rtu_VDCInvRL, const real_T
  *rtu_MTorqueVectoringFL, const real_T *rtu_MTorqueVectoringFR, const real_T
  *rtu_MTorqueVectoringRL, const real_T *rtu_MTorqueVectoringRR, const boolean_T
  *rtu_BTorqueVectoringActivated, const real_T *rtu_rTSTemperatureDerateFL,
  const real_T *rtu_rTSTemperatureDerateFR, const real_T
  *rtu_rTSTemperatureDerateRL, const real_T *rtu_rTSTemperatureDerateRR, const
  real_T *rtu_NThrottleMap, const boolean_T *rtu_BEMSActivated, real_T
  *rty_rSplitRear, real_T *rty_MTorqueDistributionFL, real_T
  *rty_MTorqueDistributionFR, real_T *rty_MTorqueDistributionRL, real_T
  *rty_MTorqueDistributionRR);

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
 * '<S2>'   : 'TorqueDistribution/MFixedTorqueDistributionFront System'
 * '<S3>'   : 'TorqueDistribution/MFixedTorqueDistributionRear System'
 * '<S4>'   : 'TorqueDistribution/MTorqueDistribution System'
 * '<S5>'   : 'TorqueDistribution/rSplit System'
 * '<S6>'   : 'TorqueDistribution/BEngineBrakingEngaged System/Compare To Constant'
 * '<S7>'   : 'TorqueDistribution/BEngineBrakingEngaged System/Compare To Constant1'
 * '<S8>'   : 'TorqueDistribution/BEngineBrakingEngaged System/Compare To Constant2'
 * '<S9>'   : 'TorqueDistribution/MFixedTorqueDistributionRear System/MEngineBraking System'
 * '<S10>'  : 'TorqueDistribution/MFixedTorqueDistributionRear System/MFixedTorqueDistribution System'
 * '<S11>'  : 'TorqueDistribution/MFixedTorqueDistributionRear System/MFixedTorqueDistributionRear System'
 * '<S12>'  : 'TorqueDistribution/MFixedTorqueDistributionRear System/MEngineBraking System/Power to Torque Converter'
 * '<S13>'  : 'TorqueDistribution/rSplit System/Compare To Constant'
 * '<S14>'  : 'TorqueDistribution/rSplit System/Compare To Constant1'
 */
#endif                                 /* TorqueDistribution_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
