/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: PRegenDerate.h
 *
 * Code generated for Simulink model 'PRegenDerate'.
 *
 * Model version                  : 13.3
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Tue Sep  8 11:38:34 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef PRegenDerate_h_
#define PRegenDerate_h_
#ifndef PRegenDerate_COMMON_INCLUDES_
#define PRegenDerate_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                                 /* PRegenDerate_COMMON_INCLUDES_ */

#include "PRegenDerate_types.h"

/* Real-time Model Data Structure */
struct tag_RTM_PRegenDerate_T {
  const char_T **errorStatus;
};

typedef struct {
  RT_MODEL_PRegenDerate_T rtm;
} MdlrefDW_PRegenDerate_T;

/* Model reference registration function */
extern void PRegenDerate_initialize(const char_T **rt_errorStatus,
  RT_MODEL_PRegenDerate_T *const PRegenDerate_M);
extern void PRegenDerate(const real_T *rtu_PHighCellTemperatureDerate, const
  real_T *rtu_PSOCRegenDerate, const real_T *rtu_PHighCellVoltageRegenDerate,
  real_T *rty_PRegenDerate);

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
 * '<Root>' : 'PRegenDerate'
 */
#endif                                 /* PRegenDerate_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
