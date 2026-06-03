/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: LIMITATIONS_types.h
 *
 * Code generated for Simulink model 'LIMITATIONS'.
 *
 * Model version                  : 13.6
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Wed Jun  3 14:57:26 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef LIMITATIONS_types_h_
#define LIMITATIONS_types_h_
#include "rtwtypes.h"
#ifndef DEFINED_TYPEDEF_FOR_LimitationsBus_
#define DEFINED_TYPEDEF_FOR_LimitationsBus_

typedef struct {
  boolean_T BDischargeAllowed;
  real_T rInvTemperatureDerate;
  real_T rInvTemperatureDerateFR;
  real_T rInvTemperatureDerateFL;
  real_T rInvTemperatureDerateRR;
  real_T rInvTemperatureDerateRL;
  real_T rMotorTemperatureDerate;
  real_T rMotorTemperatureDerateFR;
  real_T rMotorTemperatureDerateFL;
  real_T rMotorTemperatureDerateRR;
  real_T rMotorTemperatureDerateRL;
  real_T rTSTemperatureDerateFR;
  real_T rTSTemperatureDerateFL;
  real_T rTSTemperatureDerateRR;
  real_T rTSTemperatureDerateRL;
  real_T rHighCellTemperatureDischargeDerate;
  real_T rHighCellTemperatureRegenDerate;
  real_T rLowCellVoltageDischargeDerate;
  real_T rSOCDischargeDerate;
  real_T rSOCRegenDerate;
  real_T rSpeedRegenDerate;
  real_T rDischargeDerate;
  real_T rRegenDerate;
} LimitationsBus;

#endif

/* Forward declaration for rtModel */
typedef struct tag_RTM_LIMITATIONS_T RT_MODEL_LIMITATIONS_T;

#endif                                 /* LIMITATIONS_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
