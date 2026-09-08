/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: MDriverDischargeRequested.h
 *
 * Code generated for Simulink model 'MDriverDischargeRequested'.
 *
 * Model version                  : 13.3
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Tue Sep  8 11:42:38 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef MDriverDischargeRequested_h_
#define MDriverDischargeRequested_h_
#ifndef MDriverDischargeRequested_COMMON_INCLUDES_
#define MDriverDischargeRequested_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                          /* MDriverDischargeRequested_COMMON_INCLUDES_ */

#include "MDriverDischargeRequested_types.h"

/* Real-time Model Data Structure */
struct tag_RTM_MDriverDischargeReque_T {
  const char_T **errorStatus;
};

typedef struct {
  RT_MODEL_MDriverDischargeRequ_T rtm;
} MdlrefDW_MDriverDischargeRequ_T;

/* Model reference registration function */
extern void MDriverDischargeRequ_initialize(const char_T **rt_errorStatus,
  RT_MODEL_MDriverDischargeRequ_T *const MDriverDischargeRequested_M);
extern void MDriverDischargeRequested(const real_T *rtu_NThrottleMap, const
  real_T *rtu_vChassis, const real_T *rtu_rThrottlePedal, real_T
  *rty_MDriverDischargeRequested);

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
 * '<Root>' : 'MDriverDischargeRequested'
 */
#endif                                 /* MDriverDischargeRequested_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
