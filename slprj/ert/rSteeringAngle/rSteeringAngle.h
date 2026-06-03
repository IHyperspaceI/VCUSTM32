/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: rSteeringAngle.h
 *
 * Code generated for Simulink model 'rSteeringAngle'.
 *
 * Model version                  : 13.5
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Wed Jun  3 14:55:37 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef rSteeringAngle_h_
#define rSteeringAngle_h_
#ifndef rSteeringAngle_COMMON_INCLUDES_
#define rSteeringAngle_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                                 /* rSteeringAngle_COMMON_INCLUDES_ */

#include "rSteeringAngle_types.h"

/* user code (top of header file) */
#include "stm32h7xx_ll_tim.h"

/* Invariant block signals for model 'rSteeringAngle' */
typedef struct {
  const real_T Subtract;               /* '<Root>/Subtract' */
  const real_T Subtract1;              /* '<Root>/Subtract1' */
  const real_T Divide;                 /* '<Root>/Divide' */
} ConstB_rSteeringAngle_h_T;

/* Real-time Model Data Structure */
struct tag_RTM_rSteeringAngle_T {
  const char_T **errorStatus;
};

typedef struct {
  RT_MODEL_rSteeringAngle_T rtm;
} MdlrefDW_rSteeringAngle_T;

/* Model reference registration function */
extern void rSteeringAngle_initialize(const char_T **rt_errorStatus,
  RT_MODEL_rSteeringAngle_T *const rSteeringAngle_M);
extern void rSteeringAngle(const real_T *rtu_VSteeringAngle, real_T
  *rty_rSteeringAngle, real_T *rty_aSteeringAngle);

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
 * '<Root>' : 'rSteeringAngle'
 */
#endif                                 /* rSteeringAngle_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
