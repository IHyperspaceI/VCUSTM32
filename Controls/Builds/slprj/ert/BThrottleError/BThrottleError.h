/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: BThrottleError.h
 *
 * Code generated for Simulink model 'BThrottleError'.
 *
 * Model version                  : 13.3
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Tue Sep  8 11:40:28 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef BThrottleError_h_
#define BThrottleError_h_
#ifndef BThrottleError_COMMON_INCLUDES_
#define BThrottleError_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                                 /* BThrottleError_COMMON_INCLUDES_ */

#include "BThrottleError_types.h"

/* Block states (default storage) for model 'BThrottleError' */
typedef struct {
  real_T Memory_PreviousInput;         /* '<S2>/Memory' */
} DW_BThrottleError_f_T;

/* Real-time Model Data Structure */
struct tag_RTM_BThrottleError_T {
  const char_T **errorStatus;
};

typedef struct {
  DW_BThrottleError_f_T rtdw;
  RT_MODEL_BThrottleError_T rtm;
} MdlrefDW_BThrottleError_T;

/* Model reference registration function */
extern void BThrottleError_initialize(const char_T **rt_errorStatus,
  RT_MODEL_BThrottleError_T *const BThrottleError_M);
extern void BThrottleError(const real_T *rtu_VThrottlePedal1, const real_T
  *rtu_VThrottlePedal2, const real_T *rtu_rThrottlePedal1, const real_T
  *rtu_rThrottlePedal2, boolean_T *rty_BThrottleError, real_T
  *rty_tThrottleError, DW_BThrottleError_f_T *localDW);

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S3>/Compare' : Unused code path elimination
 * Block '<S3>/Constant' : Unused code path elimination
 * Block '<S1>/Max3' : Unused code path elimination
 */

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
 * '<Root>' : 'BThrottleError'
 * '<S1>'   : 'BThrottleError/BThrottleError System'
 * '<S2>'   : 'BThrottleError/tThrottleError System'
 * '<S3>'   : 'BThrottleError/BThrottleError System/Compare To Constant'
 * '<S4>'   : 'BThrottleError/BThrottleError System/Compare To Constant1'
 * '<S5>'   : 'BThrottleError/BThrottleError System/Compare To Constant2'
 */
#endif                                 /* BThrottleError_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
