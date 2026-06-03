/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: TORQUECONTROL_types.h
 *
 * Code generated for Simulink model 'TORQUECONTROL'.
 *
 * Model version                  : 13.5
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Wed Jun  3 14:58:01 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef TORQUECONTROL_types_h_
#define TORQUECONTROL_types_h_
#include "rtwtypes.h"
#ifndef DEFINED_TYPEDEF_FOR_TorqueControlBus_
#define DEFINED_TYPEDEF_FOR_TorqueControlBus_

typedef struct {
  real_T MDriverDischargeRequested;
  real_T MDriverRegenRequested;
  real_T MDischargeLimited;
  real_T MRegenLimited;
  real_T PPowerControllerRequested;
  real_T MPowerControllerRequested;
  real_T PPowerControllerProportionalTerm;
  real_T PPowerControllerIntegralTerm;
  real_T PDischargeLimited;
  real_T MTotalRequested;
  real_T MTotalEMSRequested;
  real_T rSOCTargetError;
  real_T rSOETargetError;
  real_T nYawRateErrorActual;
  boolean_T BTorqueVectoringOK;
  real_T MTorqueVectoringFL;
  real_T MTorqueVectoringFR;
  real_T MTorqueVectoringRL;
  real_T MTorqueVectoringRR;
  real_T rSplitRear;
  real_T MTorqueDistributionFL;
  real_T MTorqueDistributionFR;
  real_T MTorqueDistributionRL;
  real_T MTorqueDistributionRR;
  real_T rSlipRatioOptimal;
  real_T NTractionControlMultiplierFL;
  real_T NTractionControlMultiplierFR;
  real_T NTractionControlMultiplierRL;
  real_T NTractionControlMultiplierRR;
  real_T NABSMultiplierFL;
  real_T NABSMultiplierFR;
  real_T NABSMultiplierRL;
  real_T NABSMultiplierRR;
  real_T rSlipRatioFLActual;
  real_T rSlipRatioFRActual;
  real_T rSlipRatioRLActual;
  real_T rSlipRatioRRActual;
  real_T MTractionControlFLTotal;
  real_T MTractionControlFRTotal;
  real_T MTractionControlRLTotal;
  real_T MTractionControlRRTotal;
  real_T MTractionControlFLFinal;
  real_T MTractionControlFRFinal;
  real_T MTractionControlRLFinal;
  real_T MTractionControlRRFinal;
  real_T MSpinningModelFL;
  real_T MSpinningModelFR;
  real_T MSpinningModelRL;
  real_T MSpinningModelRR;
  real_T MFLFinal;
  real_T MFRFinal;
  real_T MRLFinal;
  real_T MRRFinal;
  real_T MTotalFinal;
} TorqueControlBus;

#endif

/* Forward declaration for rtModel */
typedef struct tag_RTM_TORQUECONTROL_T RT_MODEL_TORQUECONTROL_T;

#endif                                 /* TORQUECONTROL_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
