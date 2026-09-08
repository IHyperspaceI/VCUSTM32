/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: BInverterError.h
 *
 * Code generated for Simulink model 'BInverterError'.
 *
 * Model version                  : 13.3
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Tue Sep  8 11:40:10 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef BInverterError_h_
#define BInverterError_h_
#ifndef BInverterError_COMMON_INCLUDES_
#define BInverterError_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                                 /* BInverterError_COMMON_INCLUDES_ */

#include "BInverterError_types.h"

/* Real-time Model Data Structure */
struct tag_RTM_BInverterError_T {
  const char_T **errorStatus;
};

typedef struct {
  RT_MODEL_BInverterError_T rtm;
} MdlrefDW_BInverterError_T;

/* Model reference registration function */
extern void BInverterError_initialize(const char_T **rt_errorStatus,
  RT_MODEL_BInverterError_T *const BInverterError_M);
extern void BInverterError(const real_T *rtu_NInvFLDTC, const real_T
  *rtu_NInvFRDTC, const real_T *rtu_NInvRLDTC, const real_T *rtu_NInvRRDTC,
  boolean_T *rty_BInverterErrorRear, boolean_T *rty_BInverterErrorFront);

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
 * '<Root>' : 'BInverterError'
 * '<S1>'   : 'BInverterError/BInverterErrorFront System'
 * '<S2>'   : 'BInverterError/BInverterErrorRear System'
 * '<S3>'   : 'BInverterError/BInverterErrorFront System/Compare To Constant1'
 * '<S4>'   : 'BInverterError/BInverterErrorFront System/Compare To Constant2'
 * '<S5>'   : 'BInverterError/BInverterErrorFront System/Compare To Constant3'
 * '<S6>'   : 'BInverterError/BInverterErrorFront System/Compare To Constant4'
 * '<S7>'   : 'BInverterError/BInverterErrorRear System/Compare To Constant1'
 * '<S8>'   : 'BInverterError/BInverterErrorRear System/Compare To Constant2'
 * '<S9>'   : 'BInverterError/BInverterErrorRear System/Compare To Constant3'
 * '<S10>'  : 'BInverterError/BInverterErrorRear System/Compare To Constant4'
 */
#endif                                 /* BInverterError_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
