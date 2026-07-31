/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: BBrakeError.h
 *
 * Code generated for Simulink model 'BBrakeError'.
 *
 * Model version                  : 13.2
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Fri Jul 31 17:30:28 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef BBrakeError_h_
#define BBrakeError_h_
#ifndef BBrakeError_COMMON_INCLUDES_
#define BBrakeError_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                                 /* BBrakeError_COMMON_INCLUDES_ */

#include "BBrakeError_types.h"

/* user code (top of header file) */
#include "stm32h7xx_ll_tim.h"

/* Block states (default storage) for model 'BBrakeError' */
typedef struct {
  real_T Memory_PreviousInput;         /* '<S3>/Memory' */
} DW_BBrakeError_f_T;

/* Real-time Model Data Structure */
struct tag_RTM_BBrakeError_T {
  const char_T **errorStatus;
};

typedef struct {
  DW_BBrakeError_f_T rtdw;
  RT_MODEL_BBrakeError_T rtm;
} MdlrefDW_BBrakeError_T;

/* Model reference registration function */
extern void BBrakeError_initialize(const char_T **rt_errorStatus,
  RT_MODEL_BBrakeError_T *const BBrakeError_M);
extern void BBrakeError(const real_T *rtu_pBrakeF, const real_T *rtu_pBrakeR,
  const real_T *rtu_VBrakeF, const real_T *rtu_VBrakeR, boolean_T
  *rty_BBrakeError, real_T *rty_tBrakeError, boolean_T *rty_BBrakeOn, real_T
  *rty_pBrakeMax, DW_BBrakeError_f_T *localDW);

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
 * '<Root>' : 'BBrakeError'
 * '<S1>'   : 'BBrakeError/BBrakeError System'
 * '<S2>'   : 'BBrakeError/BBrakeOn System'
 * '<S3>'   : 'BBrakeError/tBrakeError System'
 * '<S4>'   : 'BBrakeError/BBrakeError System/Compare To Constant'
 * '<S5>'   : 'BBrakeError/BBrakeError System/Compare To Constant1'
 * '<S6>'   : 'BBrakeError/BBrakeOn System/Compare To Constant'
 */
#endif                                 /* BBrakeError_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
