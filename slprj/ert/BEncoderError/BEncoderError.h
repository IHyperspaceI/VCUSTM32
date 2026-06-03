/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: BEncoderError.h
 *
 * Code generated for Simulink model 'BEncoderError'.
 *
 * Model version                  : 13.5
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Wed Jun  3 14:54:37 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef BEncoderError_h_
#define BEncoderError_h_
#ifndef BEncoderError_COMMON_INCLUDES_
#define BEncoderError_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                                 /* BEncoderError_COMMON_INCLUDES_ */

#include "BEncoderError_types.h"

/* user code (top of header file) */
#include "stm32h7xx_ll_tim.h"

/* Real-time Model Data Structure */
struct tag_RTM_BEncoderError_T {
  const char_T **errorStatus;
};

typedef struct {
  RT_MODEL_BEncoderError_T rtm;
} MdlrefDW_BEncoderError_T;

/* Model reference registration function */
extern void BEncoderError_initialize(const char_T **rt_errorStatus,
  RT_MODEL_BEncoderError_T *const BEncoderError_M);
extern void BEncoderError(const real_T *rtu_NInvRLDTC, const real_T
  *rtu_NInvFLDTC, const real_T *rtu_NInvRRDTC, const real_T *rtu_NInvFRDTC,
  boolean_T *rty_BEncoderErrorRear, boolean_T *rty_BEncoderErrorFront);

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
 * '<Root>' : 'BEncoderError'
 * '<S1>'   : 'BEncoderError/BEncoderErrorFront System'
 * '<S2>'   : 'BEncoderError/BEncoderErrorRear System'
 * '<S3>'   : 'BEncoderError/BEncoderErrorFront System/Compare To Constant1'
 * '<S4>'   : 'BEncoderError/BEncoderErrorFront System/Compare To Constant2'
 * '<S5>'   : 'BEncoderError/BEncoderErrorFront System/Compare To Constant3'
 * '<S6>'   : 'BEncoderError/BEncoderErrorFront System/Compare To Constant4'
 * '<S7>'   : 'BEncoderError/BEncoderErrorRear System/Compare To Constant1'
 * '<S8>'   : 'BEncoderError/BEncoderErrorRear System/Compare To Constant2'
 * '<S9>'   : 'BEncoderError/BEncoderErrorRear System/Compare To Constant3'
 * '<S10>'  : 'BEncoderError/BEncoderErrorRear System/Compare To Constant4'
 */
#endif                                 /* BEncoderError_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
