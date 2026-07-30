/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: BPedalOverlap.h
 *
 * Code generated for Simulink model 'BPedalOverlap'.
 *
 * Model version                  : 13.2
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Thu Jul 30 16:42:40 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef BPedalOverlap_h_
#define BPedalOverlap_h_
#ifndef BPedalOverlap_COMMON_INCLUDES_
#define BPedalOverlap_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                                 /* BPedalOverlap_COMMON_INCLUDES_ */

#include "BPedalOverlap_types.h"

/* user code (top of header file) */
#include "stm32h7xx_ll_tim.h"

/* Block states (default storage) for model 'BPedalOverlap' */
typedef struct {
  real_T Memory_PreviousInput;         /* '<S2>/Memory' */
} DW_BPedalOverlap_f_T;

/* Real-time Model Data Structure */
struct tag_RTM_BPedalOverlap_T {
  const char_T **errorStatus;
};

typedef struct {
  DW_BPedalOverlap_f_T rtdw;
  RT_MODEL_BPedalOverlap_T rtm;
} MdlrefDW_BPedalOverlap_T;

/* Model reference registration function */
extern void BPedalOverlap_initialize(const char_T **rt_errorStatus,
  RT_MODEL_BPedalOverlap_T *const BPedalOverlap_M);
extern void BPedalOverlap(const real_T *rtu_rThrottlePedal, const real_T
  *rtu_pBrakeMax, boolean_T *rty_BPedalOverlap, real_T *rty_tPedalOverlap,
  DW_BPedalOverlap_f_T *localDW);

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
 * '<Root>' : 'BPedalOverlap'
 * '<S1>'   : 'BPedalOverlap/BPedalOverlap System'
 * '<S2>'   : 'BPedalOverlap/tPedalOverlap System'
 * '<S3>'   : 'BPedalOverlap/BPedalOverlap System/Compare To Constant'
 * '<S4>'   : 'BPedalOverlap/BPedalOverlap System/Compare To Constant1'
 */
#endif                                 /* BPedalOverlap_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
