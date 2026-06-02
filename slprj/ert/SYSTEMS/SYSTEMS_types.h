/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: SYSTEMS_types.h
 *
 * Code generated for Simulink model 'SYSTEMS'.
 *
 * Model version                  : 13.5
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Tue Jun  2 18:49:18 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef SYSTEMS_types_h_
#define SYSTEMS_types_h_
#include "rtwtypes.h"
#ifndef DEFINED_TYPEDEF_FOR_SystemsBus_
#define DEFINED_TYPEDEF_FOR_SystemsBus_

typedef struct {
  real_T rThrottlePedal;
  boolean_T BThrottleError;
  real_T tThrottleError;
  boolean_T BBrakeError;
  real_T tBrakeError;
  boolean_T BBrakeOn;
  real_T pBrakeMax;
  boolean_T BPedalOverlap;
  real_T tPedalOverlap;
  boolean_T BAppsOK;
  real_T tAppsTimer;
  real_T rSteeringAngle;
  real_T aSteeringAngle;
  real_T rRegenPaddle;
  boolean_T BRegenOn;
  boolean_T BBrakeLight;
  real_T xDamperFL;
  real_T xDamperFR;
  real_T xDamperRL;
  real_T xDamperRR;
  boolean_T BDamperErrorFL;
  boolean_T BDamperErrorFR;
  boolean_T BDamperErrorRL;
  boolean_T BDamperErrorRR;
  real_T vChassis;
  real_T sChassis;
  real_T sEMS1000m;
  boolean_T BEMS1000mPoint;
  boolean_T BEMS995mPoint;
  boolean_T BTorqueVectoringActivated;
  real_T NThrottleMap;
  real_T PDischarge;
  boolean_T BEMSActivated;
  real_T PRegen;
  real_T rTorqueSplit;
  real_T PEngineBraking;
  boolean_T BSpinningModelActivated;
  real_T NTractionControlKpSelector;
  boolean_T BTractionControlActivated;
  real_T rTorqueVectoringMultiplier;
  real_T NPowerControllerKpSelector;
  real_T NTorqueSplitSpeedSelector;
  boolean_T BAccumulatorFanOn;
  boolean_T BErrorReset;
  boolean_T BReadyToDriveButton;
  real_T NModeNumberDisplay5;
  real_T NModeNumberDisplay6;
  real_T TMotorMax;
  real_T TInvMax;
  real_T PActual;
  real_T rSOC;
  real_T rSOE;
  boolean_T BEncoderErrorRear;
  boolean_T BEncoderErrorFront;
  real_T rCoolingFansDuty;
  real_T rCoolingPumpsDuty;
  boolean_T BAccumulatorFanDuty;
  boolean_T BInvLVOn;
  real_T rThrottlePedal1;
  real_T rThrottlePedal2;
} SystemsBus;

#endif

/* Forward declaration for rtModel */
typedef struct tag_RTM_SYSTEMS_T RT_MODEL_SYSTEMS_T;

#endif                                 /* SYSTEMS_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
