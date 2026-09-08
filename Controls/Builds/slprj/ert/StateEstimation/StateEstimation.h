/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: StateEstimation.h
 *
 * Code generated for Simulink model 'StateEstimation'.
 *
 * Model version                  : 13.3
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Tue Sep  8 11:43:18 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef StateEstimation_h_
#define StateEstimation_h_
#ifndef StateEstimation_COMMON_INCLUDES_
#define StateEstimation_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                                 /* StateEstimation_COMMON_INCLUDES_ */

#include "StateEstimation_types.h"

/* Invariant block signals for model 'StateEstimation' */
typedef struct {
  const real_T Gain[2];                /* '<S19>/Gain' */
  const real_T Divide[2];              /* '<S19>/Divide' */
  const real_T Subtract[2];            /* '<S19>/Subtract' */
  const real_T Multiply[2];            /* '<S19>/Multiply' */
  const real_T Saturation3[2];         /* '<S19>/Saturation3' */
  const real_T TmpSignalConversionAtaCambe;
  const real_T TmpSignalConversionAtaCam_h;
  const real_T Gain4;                  /* '<S21>/Gain4' */
  const real_T Gain6;                  /* '<S21>/Gain6' */
  const real_T TrigonometricFunction10;/* '<S21>/Trigonometric Function10' */
  const real_T Gain8;                  /* '<S21>/Gain8' */
  const real_T TrigonometricFunction6; /* '<S21>/Trigonometric Function6' */
  const real_T Gain_o;                 /* '<S22>/Gain' */
  const real_T Gain2;                  /* '<S22>/Gain2' */
  const real_T TrigonometricFunction;  /* '<S22>/Trigonometric Function' */
  const real_T TrigonometricFunction4; /* '<S22>/Trigonometric Function4' */
  const real_T Gain5;                  /* '<S25>/Gain5' */
  const real_T Gain5_m;                /* '<S26>/Gain5' */
  const real_T Gain_os;                /* '<S31>/Gain' */
  const real_T Subtract_d;             /* '<S31>/Subtract' */
  const real_T Subtract1;              /* '<S31>/Subtract1' */
  const real_T Subtract2;              /* '<S31>/Subtract2' */
  const real_T Gain_a;                 /* '<S32>/Gain' */
  const real_T Subtract_h;             /* '<S32>/Subtract' */
  const real_T Subtract1_c;            /* '<S32>/Subtract1' */
  const real_T Subtract2_m;            /* '<S32>/Subtract2' */
  const real_T Gain_h;                 /* '<S33>/Gain' */
  const real_T Gain_ay;                /* '<S34>/Gain' */
} ConstB_StateEstimation_h_T;

/* Real-time Model Data Structure */
struct tag_RTM_StateEstimation_T {
  const char_T **errorStatus;
};

typedef struct {
  RT_MODEL_StateEstimation_T rtm;
} MdlrefDW_StateEstimation_T;

/* Model reference registration function */
extern void StateEstimation_initialize(const char_T **rt_errorStatus,
  RT_MODEL_StateEstimation_T *const StateEstimation_M);
extern void StateEstimation(const real_T *rtu_vChassis, const real_T
  *rtu_vWheelFL, const real_T *rtu_vWheelFR, const real_T *rtu_vWheelRL, const
  real_T *rtu_vWheelRR, const real_T *rtu_gLateralIMU, const real_T
  *rtu_gLongitudinalIMU, const real_T *rtu_vLateralIMU, const real_T
  *rtu_nYawRateIMU, const real_T *rtu_aSteeringAngle, real_T
  *rty_rSlipRatioFLActual, real_T *rty_rSlipRatioFRActual, real_T
  *rty_rSlipRatioRLActual, real_T *rty_rSlipRatioRRActual, real_T
  *rty_FLongitudinalLoadTransfer, real_T *rty_FTyreVerticalFL, real_T
  *rty_FTyreVerticalFR, real_T *rty_FTyreVerticalRL, real_T *rty_FTyreVerticalRR,
  real_T *rty_aSlipAngleFL, real_T *rty_aSlipAngleFR, real_T *rty_aSlipAngleRL,
  real_T *rty_aSlipAngleRR, real_T *rty_aCamberFL, real_T *rty_aCamberFR, real_T
  *rty_aCamberRL, real_T *rty_aCamberRR, real_T *rty_FLateralLoadTransfer,
  real_T *rty_FLateralLoadTransferF, real_T *rty_FLateralLoadTransferR, real_T
  *rty_FTotalDownforce, real_T *rty_FDownforceF, real_T *rty_FDownforceR, real_T
  *rty_aCamberGainSteerFL, real_T *rty_aCamberGainSteerFR, real_T
  *rty_xHeaveTravelF, real_T *rty_xHeaveTravelR, real_T *rty_aCamberGainHeaveF,
  real_T *rty_aCamberGainHeaveR, real_T *rty_aRollAngle);

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
 * '<Root>' : 'StateEstimation'
 * '<S1>'   : 'StateEstimation/FTyreVertical System'
 * '<S2>'   : 'StateEstimation/aCamber System'
 * '<S3>'   : 'StateEstimation/aCamberGainHeave System'
 * '<S4>'   : 'StateEstimation/aCamberGainRoll System'
 * '<S5>'   : 'StateEstimation/aCamberGainSteer System'
 * '<S6>'   : 'StateEstimation/aSlipAngle System'
 * '<S7>'   : 'StateEstimation/aSteerAngleTyre System'
 * '<S8>'   : 'StateEstimation/rSlipRatioActual System'
 * '<S9>'   : 'StateEstimation/xHeaveTravel System'
 * '<S10>'  : 'StateEstimation/FTyreVertical System/FDownforceF//R System'
 * '<S11>'  : 'StateEstimation/FTyreVertical System/FLateralLoadTransfer System'
 * '<S12>'  : 'StateEstimation/FTyreVertical System/FTotalDownforce System'
 * '<S13>'  : 'StateEstimation/FTyreVertical System/FTyreVertical System'
 * '<S14>'  : 'StateEstimation/FTyreVertical System/Total Lateral and Longitudinal Load Transfers'
 * '<S15>'  : 'StateEstimation/aCamber System/aCamberFL System'
 * '<S16>'  : 'StateEstimation/aCamber System/aCamberFR System'
 * '<S17>'  : 'StateEstimation/aCamber System/aCamberRL System'
 * '<S18>'  : 'StateEstimation/aCamber System/aCamberRR System'
 * '<S19>'  : 'StateEstimation/aCamberGainRoll System/aCamberGainRoll System'
 * '<S20>'  : 'StateEstimation/aCamberGainRoll System/aRollAngle System'
 * '<S21>'  : 'StateEstimation/aCamberGainSteer System/aCamberGainSteerFL System'
 * '<S22>'  : 'StateEstimation/aCamberGainSteer System/aCamberGainSteerFR System'
 * '<S23>'  : 'StateEstimation/aSlipAngle System/aSlipAngleFL System'
 * '<S24>'  : 'StateEstimation/aSlipAngle System/aSlipAngleFR System'
 * '<S25>'  : 'StateEstimation/aSlipAngle System/aSlipAngleRL System'
 * '<S26>'  : 'StateEstimation/aSlipAngle System/aSlipAngleRR System'
 * '<S27>'  : 'StateEstimation/aSlipAngle System/aSlipAngleFL System/Compare To Constant'
 * '<S28>'  : 'StateEstimation/aSlipAngle System/aSlipAngleFR System/Compare To Constant'
 * '<S29>'  : 'StateEstimation/aSlipAngle System/aSlipAngleRL System/Compare To Constant'
 * '<S30>'  : 'StateEstimation/aSlipAngle System/aSlipAngleRR System/Compare To Constant'
 * '<S31>'  : 'StateEstimation/aSteerAngleTyre System/aSteeringAngleTyreFL System'
 * '<S32>'  : 'StateEstimation/aSteerAngleTyre System/aSteeringAngleTyreFR System'
 * '<S33>'  : 'StateEstimation/xHeaveTravel System/xHeaveTravelF System'
 * '<S34>'  : 'StateEstimation/xHeaveTravel System/xHeaveTravelR System'
 */
#endif                                 /* StateEstimation_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
