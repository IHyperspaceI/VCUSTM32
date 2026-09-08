/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: PSOCDerate.h
 *
 * Code generated for Simulink model 'PSOCDerate'.
 *
 * Model version                  : 13.3
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Tue Sep  8 11:38:39 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef PSOCDerate_h_
#define PSOCDerate_h_
#ifndef PSOCDerate_COMMON_INCLUDES_
#define PSOCDerate_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                                 /* PSOCDerate_COMMON_INCLUDES_ */

#include "PSOCDerate_types.h"

/* Real-time Model Data Structure */
struct tag_RTM_PSOCDerate_T {
  const char_T **errorStatus;
};

typedef struct {
  RT_MODEL_PSOCDerate_T rtm;
} MdlrefDW_PSOCDerate_T;

/* Model reference registration function */
extern void PSOCDerate_initialize(const char_T **rt_errorStatus,
  RT_MODEL_PSOCDerate_T *const PSOCDerate_M);
extern void PSOCDerate(const real_T *rtu_VDCAccumulator, real_T
  *rty_PSOCDischargeDerate, real_T *rty_PSOCRegenDerate);

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
 * '<Root>' : 'PSOCDerate'
 */
#endif                                 /* PSOCDerate_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
