/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: BDamperOk.h
 *
 * Code generated for Simulink model 'BDamperOk'.
 *
 * Model version                  : 13.3
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Tue Sep  8 11:39:53 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef BDamperOk_h_
#define BDamperOk_h_
#ifndef BDamperOk_COMMON_INCLUDES_
#define BDamperOk_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                                 /* BDamperOk_COMMON_INCLUDES_ */

#include "BDamperOk_types.h"

/* Real-time Model Data Structure */
struct tag_RTM_BDamperOk_T {
  const char_T **errorStatus;
};

typedef struct {
  RT_MODEL_BDamperOk_T rtm;
} MdlrefDW_BDamperOk_T;

/* Model reference registration function */
extern void BDamperOk_initialize(const char_T **rt_errorStatus,
  RT_MODEL_BDamperOk_T *const BDamperOk_M);
extern void BDamperOk(const real_T *rtu_VDamperPotentiometerFL, const real_T
                      *rtu_VDamperPotentiometerFR, const real_T
                      *rtu_VDamperPotentiometerRL, const real_T
                      *rtu_VDamperPotentiometerRR, boolean_T *rty_BxDamperFLOk,
                      boolean_T *rty_BxDamperFROk, boolean_T *rty_BxDamperRLOk,
                      boolean_T *rty_BxDamperRROk, boolean_T *rty_BxDamperOk);

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
 * '<Root>' : 'BDamperOk'
 * '<S1>'   : 'BDamperOk/Compare To Constant'
 * '<S2>'   : 'BDamperOk/Compare To Constant1'
 * '<S3>'   : 'BDamperOk/Compare To Constant2'
 * '<S4>'   : 'BDamperOk/Compare To Constant3'
 * '<S5>'   : 'BDamperOk/Compare To Constant4'
 * '<S6>'   : 'BDamperOk/Compare To Constant5'
 * '<S7>'   : 'BDamperOk/Compare To Constant6'
 * '<S8>'   : 'BDamperOk/Compare To Constant7'
 */
#endif                                 /* BDamperOk_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
