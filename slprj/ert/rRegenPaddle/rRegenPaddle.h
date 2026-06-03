/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: rRegenPaddle.h
 *
 * Code generated for Simulink model 'rRegenPaddle'.
 *
 * Model version                  : 13.5
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Wed Jun  3 14:55:25 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef rRegenPaddle_h_
#define rRegenPaddle_h_
#ifndef rRegenPaddle_COMMON_INCLUDES_
#define rRegenPaddle_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                                 /* rRegenPaddle_COMMON_INCLUDES_ */

#include "rRegenPaddle_types.h"

/* user code (top of header file) */
#include "stm32h7xx_ll_tim.h"

/* Invariant block signals for model 'rRegenPaddle' */
typedef struct {
  const real_T Subtract;               /* '<S2>/Subtract' */
  const real_T Subtract1;              /* '<S2>/Subtract1' */
  const real_T Divide;                 /* '<S2>/Divide' */
  const real_T Subtract_h;             /* '<S3>/Subtract' */
  const real_T Subtract1_i;            /* '<S3>/Subtract1' */
  const real_T Divide_g;               /* '<S3>/Divide' */
} ConstB_rRegenPaddle_h_T;

/* Real-time Model Data Structure */
struct tag_RTM_rRegenPaddle_T {
  const char_T **errorStatus;
};

typedef struct {
  RT_MODEL_rRegenPaddle_T rtm;
} MdlrefDW_rRegenPaddle_T;

/* Model reference registration function */
extern void rRegenPaddle_initialize(const char_T **rt_errorStatus,
  RT_MODEL_rRegenPaddle_T *const rRegenPaddle_M);
extern void rRegenPaddle(const real_T *rtu_VRegenPaddle1, const real_T
  *rtu_VRegenPaddle2, real_T *rty_rRegenPaddle, boolean_T *rty_BRegenOn);

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
 * '<Root>' : 'rRegenPaddle'
 * '<S1>'   : 'rRegenPaddle/Compare To Constant'
 * '<S2>'   : 'rRegenPaddle/rRegenPaddle1 System'
 * '<S3>'   : 'rRegenPaddle/rRegenPaddle2 System'
 */
#endif                                 /* rRegenPaddle_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
