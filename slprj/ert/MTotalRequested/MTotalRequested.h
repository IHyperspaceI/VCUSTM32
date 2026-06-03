/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: MTotalRequested.h
 *
 * Code generated for Simulink model 'MTotalRequested'.
 *
 * Model version                  : 13.5
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Wed Jun  3 14:56:30 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef MTotalRequested_h_
#define MTotalRequested_h_
#ifndef MTotalRequested_COMMON_INCLUDES_
#define MTotalRequested_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                                 /* MTotalRequested_COMMON_INCLUDES_ */

#include "MTotalRequested_types.h"

/* user code (top of header file) */
#include "stm32h7xx_ll_tim.h"

/* Real-time Model Data Structure */
struct tag_RTM_MTotalRequested_T {
  const char_T **errorStatus;
};

typedef struct {
  RT_MODEL_MTotalRequested_T rtm;
} MdlrefDW_MTotalRequested_T;

/* Model reference registration function */
extern void MTotalRequested_initialize(const char_T **rt_errorStatus,
  RT_MODEL_MTotalRequested_T *const MTotalRequested_M);
extern void MTotalRequested(const real_T *rtu_MPowerControllerRequested, const
  real_T *rtu_rThrottlePedal, const real_T *rtu_MRegenLimited, const real_T
  *rtu_MDischargeLimited, const real_T *rtu_PActual, real_T *rty_MTotalRequested);

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
 * '<Root>' : 'MTotalRequested'
 * '<S1>'   : 'MTotalRequested/BTorqueStatus System'
 * '<S2>'   : 'MTotalRequested/MPositiveRequested System'
 * '<S3>'   : 'MTotalRequested/MTotalRequested System'
 * '<S4>'   : 'MTotalRequested/BTorqueStatus System/Compare To Constant'
 * '<S5>'   : 'MTotalRequested/BTorqueStatus System/Compare To Constant1'
 * '<S6>'   : 'MTotalRequested/MPositiveRequested System/Compare To Constant'
 * '<S7>'   : 'MTotalRequested/MPositiveRequested System/Compare To Constant1'
 */
#endif                                 /* MTotalRequested_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
