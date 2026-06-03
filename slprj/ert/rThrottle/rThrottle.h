/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: rThrottle.h
 *
 * Code generated for Simulink model 'rThrottle'.
 *
 * Model version                  : 13.5
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Wed Jun  3 14:55:43 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef rThrottle_h_
#define rThrottle_h_
#ifndef rThrottle_COMMON_INCLUDES_
#define rThrottle_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                                 /* rThrottle_COMMON_INCLUDES_ */

#include "rThrottle_types.h"

/* user code (top of header file) */
#include "stm32h7xx_ll_tim.h"

/* Invariant block signals for model 'rThrottle' */
typedef struct {
  const real_T Subtract;               /* '<S1>/Subtract' */
  const real_T Subtract1;              /* '<S1>/Subtract1' */
  const real_T Divide;                 /* '<S1>/Divide' */
  const real_T Subtract4;              /* '<S2>/Subtract4' */
  const real_T Subtract5;              /* '<S2>/Subtract5' */
  const real_T Divide1;                /* '<S2>/Divide1' */
} ConstB_rThrottle_h_T;

/* Real-time Model Data Structure */
struct tag_RTM_rThrottle_T {
  const char_T **errorStatus;
};

typedef struct {
  RT_MODEL_rThrottle_T rtm;
} MdlrefDW_rThrottle_T;

/* Model reference registration function */
extern void rThrottle_initialize(const char_T **rt_errorStatus,
  RT_MODEL_rThrottle_T *const rThrottle_M);
extern void rThrottle(const real_T *rtu_VThrottlePedal1, const real_T
                      *rtu_VThrottlePedal2, real_T *rty_rThrottlePedal1, real_T *
                      rty_rThrottlePedal2, real_T *rty_rThrottlePedal);

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
 * '<Root>' : 'rThrottle'
 * '<S1>'   : 'rThrottle/rThrottlePedal1 System'
 * '<S2>'   : 'rThrottle/rThrottlePedal2 System'
 */
#endif                                 /* rThrottle_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
