/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: rSOCDerate.h
 *
 * Code generated for Simulink model 'rSOCDerate'.
 *
 * Model version                  : 13.6
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Wed Jun  3 14:53:32 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef rSOCDerate_h_
#define rSOCDerate_h_
#ifndef rSOCDerate_COMMON_INCLUDES_
#define rSOCDerate_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                                 /* rSOCDerate_COMMON_INCLUDES_ */

#include "rSOCDerate_types.h"

/* user code (top of header file) */
#include "stm32h7xx_ll_tim.h"

/* Real-time Model Data Structure */
struct tag_RTM_rSOCDerate_T {
  const char_T **errorStatus;
};

typedef struct {
  RT_MODEL_rSOCDerate_T rtm;
} MdlrefDW_rSOCDerate_T;

/* Model reference registration function */
extern void rSOCDerate_initialize(const char_T **rt_errorStatus,
  RT_MODEL_rSOCDerate_T *const rSOCDerate_M);
extern void rSOCDerate(const real_T *rtu_VDCAccumulator, real_T
  *rty_rSOCDischargeDerate, real_T *rty_rSOCRegenDerate);

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
 * '<Root>' : 'rSOCDerate'
 */
#endif                                 /* rSOCDerate_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
