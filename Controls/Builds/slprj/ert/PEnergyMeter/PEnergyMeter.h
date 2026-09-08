/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: PEnergyMeter.h
 *
 * Code generated for Simulink model 'PEnergyMeter'.
 *
 * Model version                  : 13.5
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Tue Sep  8 11:40:49 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef PEnergyMeter_h_
#define PEnergyMeter_h_
#ifndef PEnergyMeter_COMMON_INCLUDES_
#define PEnergyMeter_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                                 /* PEnergyMeter_COMMON_INCLUDES_ */

#include "PEnergyMeter_types.h"

/* Block states (default storage) for model 'PEnergyMeter' */
typedef struct {
  real_T buffer[500];                  /* '<Root>/MATLAB Function' */
} DW_PEnergyMeter_f_T;

/* Real-time Model Data Structure */
struct tag_RTM_PEnergyMeter_T {
  const char_T **errorStatus;
};

typedef struct {
  DW_PEnergyMeter_f_T rtdw;
  RT_MODEL_PEnergyMeter_T rtm;
} MdlrefDW_PEnergyMeter_T;

/* Model reference registration function */
extern void PEnergyMeter_initialize(const char_T **rt_errorStatus,
  RT_MODEL_PEnergyMeter_T *const PEnergyMeter_M);
extern void PEnergyMeter(const real_T *rtu_VDCAccumulator, const real_T
  *rtu_IIVTS, real_T *rty_PEnergyMeter, boolean_T *rty_BOverpower,
  DW_PEnergyMeter_f_T *localDW);

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
 * '<Root>' : 'PEnergyMeter'
 * '<S1>'   : 'PEnergyMeter/MATLAB Function'
 */
#endif                                 /* PEnergyMeter_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
