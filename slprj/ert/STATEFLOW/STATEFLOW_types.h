/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: STATEFLOW_types.h
 *
 * Code generated for Simulink model 'STATEFLOW'.
 *
 * Model version                  : 13.5
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Wed Jun  3 14:57:36 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef STATEFLOW_types_h_
#define STATEFLOW_types_h_
#include "rtwtypes.h"
#ifndef DEFINED_TYPEDEF_FOR_StateflowBus_
#define DEFINED_TYPEDEF_FOR_StateflowBus_

typedef struct {
  real_T NCarState;
  boolean_T BReadyToDriveBuzzer;
  boolean_T BReadyToDrive;
  real_T NBMSState;
  real_T NInvState;
  real_T BHVOn;
  real_T BInvOnRL;
  real_T BInvOnRR;
  real_T BInvOnFL;
  real_T BInvOnFR;
  real_T BInvDCOnRL;
  real_T BInvDCOnRR;
  real_T BInvDCOnFL;
  real_T BInvDCOnFR;
  real_T BInvEnableRL;
  real_T BInvEnableRR;
  real_T BInvEnableFL;
  real_T BInvEnableFR;
  real_T BInvErrorResetRL;
  real_T BInvErrorResetRR;
  real_T BInvErrorResetFL;
  real_T BInvErrorResetFR;
  real_T MTargetTorqueRL;
  real_T MTargetTorqueRR;
  real_T MTargetTorqueFL;
  real_T MTargetTorqueFR;
  real_T MTorqueLimitNegativeRL;
  real_T MTorqueLimitNegativeRR;
  real_T MTorqueLimitNegativeFL;
  real_T MTorqueLimitNegativeFR;
  real_T MTorqueLimitPositiveRL;
  real_T MTorqueLimitPositiveRR;
  real_T MTorqueLimitPositiveFL;
  real_T MTorqueLimitPositiveFR;
} StateflowBus;

#endif

/* Forward declaration for rtModel */
typedef struct tag_RTM_STATEFLOW_T RT_MODEL_STATEFLOW_T;

#endif                                 /* STATEFLOW_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
