/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: MLimited.h
 *
 * Code generated for Simulink model 'MLimited'.
 *
 * Model version                  : 13.5
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Tue Jun  2 18:47:57 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef MLimited_h_
#define MLimited_h_
#ifndef MLimited_COMMON_INCLUDES_
#define MLimited_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                                 /* MLimited_COMMON_INCLUDES_ */

#include "MLimited_types.h"

/* user code (top of header file) */
#include "stm32h7xx_ll_tim.h"

/* Real-time Model Data Structure */
struct tag_RTM_MLimited_T {
  const char_T **errorStatus;
};

typedef struct {
  RT_MODEL_MLimited_T rtm;
} MdlrefDW_MLimited_T;

/* Model reference registration function */
extern void MLimited_initialize(const char_T **rt_errorStatus,
  RT_MODEL_MLimited_T *const MLimited_M);
extern void MLimited(const real_T *rtu_MDriverDischargeRequested, const real_T
                     *rtu_MDriverRegenRequested, const real_T
                     *rtu_rDischargeDerate, const real_T *rtu_rRegenDerate,
                     real_T *rty_MDischargeLimited, real_T *rty_MRegenLimited);

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
 * '<Root>' : 'MLimited'
 */
#endif                                 /* MLimited_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
