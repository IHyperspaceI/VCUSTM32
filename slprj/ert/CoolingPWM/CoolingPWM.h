/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: CoolingPWM.h
 *
 * Code generated for Simulink model 'CoolingPWM'.
 *
 * Model version                  : 13.5
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Tue Jun  2 18:46:29 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef CoolingPWM_h_
#define CoolingPWM_h_
#ifndef CoolingPWM_COMMON_INCLUDES_
#define CoolingPWM_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                                 /* CoolingPWM_COMMON_INCLUDES_ */

#include "CoolingPWM_types.h"

/* user code (top of header file) */
#include "stm32h7xx_ll_tim.h"

/* Invariant block signals for model 'CoolingPWM' */
typedef struct {
  const real_T Constant1;              /* '<Root>/Constant1' */
  const real_T Constant;               /* '<Root>/Constant' */
} ConstB_CoolingPWM_h_T;

/* Real-time Model Data Structure */
struct tag_RTM_CoolingPWM_T {
  const char_T **errorStatus;
};

typedef struct {
  RT_MODEL_CoolingPWM_T rtm;
} MdlrefDW_CoolingPWM_T;

/* Model reference registration function */
extern void CoolingPWM_initialize(const char_T **rt_errorStatus,
  RT_MODEL_CoolingPWM_T *const CoolingPWM_M);
extern void CoolingPWM(const real_T *rtu_TCellMax, const boolean_T
  *rtu_BAccumulatorFanOn, boolean_T *rty_BAccumulatorFanDuty);

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
 * '<Root>' : 'CoolingPWM'
 * '<S1>'   : 'CoolingPWM/Compare To Constant'
 */
#endif                                 /* CoolingPWM_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
