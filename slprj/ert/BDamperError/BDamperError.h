/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: BDamperError.h
 *
 * Code generated for Simulink model 'BDamperError'.
 *
 * Model version                  : 13.5
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Wed Jun  3 14:54:31 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef BDamperError_h_
#define BDamperError_h_
#ifndef BDamperError_COMMON_INCLUDES_
#define BDamperError_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                                 /* BDamperError_COMMON_INCLUDES_ */

#include "BDamperError_types.h"

/* user code (top of header file) */
#include "stm32h7xx_ll_tim.h"

/* Real-time Model Data Structure */
struct tag_RTM_BDamperError_T {
  const char_T **errorStatus;
};

typedef struct {
  RT_MODEL_BDamperError_T rtm;
} MdlrefDW_BDamperError_T;

/* Model reference registration function */
extern void BDamperError_initialize(const char_T **rt_errorStatus,
  RT_MODEL_BDamperError_T *const BDamperError_M);
extern void BDamperError(const real_T *rtu_VDamperPotentiometerFL, const real_T *
  rtu_VDamperPotentiometerFR, const real_T *rtu_VDamperPotentiometerRL, const
  real_T *rtu_VDamperPotentiometerRR, boolean_T *rty_BDamperErrorFL, boolean_T
  *rty_BDamperErrorFR, boolean_T *rty_BDamperErrorRL, boolean_T
  *rty_BDamperErrorRR);

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
 * '<Root>' : 'BDamperError'
 * '<S1>'   : 'BDamperError/Compare To Constant'
 * '<S2>'   : 'BDamperError/Compare To Constant1'
 * '<S3>'   : 'BDamperError/Compare To Constant2'
 * '<S4>'   : 'BDamperError/Compare To Constant3'
 * '<S5>'   : 'BDamperError/Compare To Constant4'
 * '<S6>'   : 'BDamperError/Compare To Constant5'
 * '<S7>'   : 'BDamperError/Compare To Constant6'
 * '<S8>'   : 'BDamperError/Compare To Constant7'
 */
#endif                                 /* BDamperError_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
