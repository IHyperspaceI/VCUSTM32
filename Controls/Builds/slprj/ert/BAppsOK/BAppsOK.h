/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: BAppsOK.h
 *
 * Code generated for Simulink model 'BAppsOK'.
 *
 * Model version                  : 13.3
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Tue Sep  8 11:39:35 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef BAppsOK_h_
#define BAppsOK_h_
#ifndef BAppsOK_COMMON_INCLUDES_
#define BAppsOK_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                                 /* BAppsOK_COMMON_INCLUDES_ */

#include "BAppsOK_types.h"

/* Block states (default storage) for model 'BAppsOK' */
typedef struct {
  real_T Memory1_PreviousInput;        /* '<S3>/Memory1' */
  uint8_T is_active_c3_BAppsOK;        /* '<Root>/BAppsOK System' */
  uint8_T is_c3_BAppsOK;               /* '<Root>/BAppsOK System' */
} DW_BAppsOK_f_T;

/* Real-time Model Data Structure */
struct tag_RTM_BAppsOK_T {
  const char_T **errorStatus;
};

typedef struct {
  DW_BAppsOK_f_T rtdw;
  RT_MODEL_BAppsOK_T rtm;
} MdlrefDW_BAppsOK_T;

/* Model reference registration function */
extern void BAppsOK_initialize(const char_T **rt_errorStatus, RT_MODEL_BAppsOK_T
  *const BAppsOK_M);
extern void BAppsOK(const real_T *rtu_rThrottlePedal, const real_T
                    *rtu_pBrakeMax, boolean_T *rty_BAppsOK, real_T
                    *rty_tAppsTimer, DW_BAppsOK_f_T *localDW);

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
 * '<Root>' : 'BAppsOK'
 * '<S1>'   : 'BAppsOK/BAppsEngaged System'
 * '<S2>'   : 'BAppsOK/BAppsOK System'
 * '<S3>'   : 'BAppsOK/tAppsTimer System'
 * '<S4>'   : 'BAppsOK/BAppsEngaged System/Compare To Constant'
 * '<S5>'   : 'BAppsOK/BAppsEngaged System/Compare To Constant1'
 */
#endif                                 /* BAppsOK_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
