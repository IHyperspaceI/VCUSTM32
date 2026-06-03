/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: PActual.h
 *
 * Code generated for Simulink model 'PActual'.
 *
 * Model version                  : 13.5
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Wed Jun  3 14:55:00 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef PActual_h_
#define PActual_h_
#ifndef PActual_COMMON_INCLUDES_
#define PActual_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                                 /* PActual_COMMON_INCLUDES_ */

#include "PActual_types.h"

/* user code (top of header file) */
#include "stm32h7xx_ll_tim.h"

/* Real-time Model Data Structure */
struct tag_RTM_PActual_T {
  const char_T **errorStatus;
};

typedef struct {
  RT_MODEL_PActual_T rtm;
} MdlrefDW_PActual_T;

/* Model reference registration function */
extern void PActual_initialize(const char_T **rt_errorStatus, RT_MODEL_PActual_T
  *const PActual_M);
extern void PActual(const real_T *rtu_VDCInvRL, const real_T *rtu_IIVTS, real_T *
                    rty_PActual);

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
 * '<Root>' : 'PActual'
 */
#endif                                 /* PActual_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
