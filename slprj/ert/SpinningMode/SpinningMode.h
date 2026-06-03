/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: SpinningMode.h
 *
 * Code generated for Simulink model 'SpinningMode'.
 *
 * Model version                  : 13.5
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Wed Jun  3 14:56:43 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef SpinningMode_h_
#define SpinningMode_h_
#ifndef SpinningMode_COMMON_INCLUDES_
#define SpinningMode_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                                 /* SpinningMode_COMMON_INCLUDES_ */

#include "SpinningMode_types.h"

/* user code (top of header file) */
#include "stm32h7xx_ll_tim.h"

/* Block states (default storage) for model 'SpinningMode' */
typedef struct {
  real_T Memory1_PreviousInput;        /* '<S8>/Memory1' */
  real_T Memory1_PreviousInput_p;      /* '<S14>/Memory1' */
  real_T Memory1_PreviousInput_n;      /* '<S18>/Memory1' */
  real_T Memory1_PreviousInput_g;      /* '<S22>/Memory1' */
  real_T Memory1_PreviousInput_k;      /* '<S26>/Memory1' */
  boolean_T Memory_PreviousInput;      /* '<S9>/Memory' */
} DW_SpinningMode_f_T;

/* Real-time Model Data Structure */
struct tag_RTM_SpinningMode_T {
  const char_T **errorStatus;
};

typedef struct {
  DW_SpinningMode_f_T rtdw;
  RT_MODEL_SpinningMode_T rtm;
} MdlrefDW_SpinningMode_T;

/* Model reference registration function */
extern void SpinningMode_initialize(const char_T **rt_errorStatus,
  RT_MODEL_SpinningMode_T *const SpinningMode_M);
extern void SpinningMode(const real_T *rtu_rThrottlePedal, const boolean_T
  *rtu_BSpinningModelActivated, const boolean_T *rtu_BReadyToDrive, const real_T
  *rtu_pBrakeMax, const real_T *rtu_nMotorRL, const real_T *rtu_nMotorFL, const
  real_T *rtu_nMotorFR, const real_T *rtu_nMotorRR, real_T *rty_MSpinningModelFL,
  real_T *rty_MSpinningModelFR, real_T *rty_MSpinningModelRL, real_T
  *rty_MSpinningModelRR, DW_SpinningMode_f_T *localDW);

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
 * '<Root>' : 'SpinningMode'
 * '<S1>'   : 'SpinningMode/BSpinningModelON System'
 * '<S2>'   : 'SpinningMode/BSpinningModelStopped System'
 * '<S3>'   : 'SpinningMode/BSpinningModelTriggered System'
 * '<S4>'   : 'SpinningMode/MSpinningModelFL System'
 * '<S5>'   : 'SpinningMode/MSpinningModelFR System'
 * '<S6>'   : 'SpinningMode/MSpinningModelRL System'
 * '<S7>'   : 'SpinningMode/MSpinningModelRR System'
 * '<S8>'   : 'SpinningMode/tSpinningModelTimer System'
 * '<S9>'   : 'SpinningMode/BSpinningModelON System/S-R Flip-Flop'
 * '<S10>'  : 'SpinningMode/BSpinningModelStopped System/Compare To Constant'
 * '<S11>'  : 'SpinningMode/BSpinningModelStopped System/Compare To Constant1'
 * '<S12>'  : 'SpinningMode/BSpinningModelTriggered System/Compare To Constant'
 * '<S13>'  : 'SpinningMode/MSpinningModelFL System/MSpinningModelFL System'
 * '<S14>'  : 'SpinningMode/MSpinningModelFL System/NSpinningModelIntegralTerm System'
 * '<S15>'  : 'SpinningMode/MSpinningModelFL System/NSpinningModelProportionalTerm System'
 * '<S16>'  : 'SpinningMode/MSpinningModelFL System/nRPMError System'
 * '<S17>'  : 'SpinningMode/MSpinningModelFR System/MSpinningModelFR System'
 * '<S18>'  : 'SpinningMode/MSpinningModelFR System/NSpinningModelIntegralTerm System'
 * '<S19>'  : 'SpinningMode/MSpinningModelFR System/NSpinningModelProportionalTerm System'
 * '<S20>'  : 'SpinningMode/MSpinningModelFR System/nRPMError System'
 * '<S21>'  : 'SpinningMode/MSpinningModelRL System/MSpinningModelRL System'
 * '<S22>'  : 'SpinningMode/MSpinningModelRL System/NSpinningModelIntegralTerm System'
 * '<S23>'  : 'SpinningMode/MSpinningModelRL System/NSpinningModelProportionalTerm System'
 * '<S24>'  : 'SpinningMode/MSpinningModelRL System/nRPMError System'
 * '<S25>'  : 'SpinningMode/MSpinningModelRR System/MSpinningModelRR System'
 * '<S26>'  : 'SpinningMode/MSpinningModelRR System/NSpinningModelIntegralTerm System'
 * '<S27>'  : 'SpinningMode/MSpinningModelRR System/NSpinningModelProportionalTerm System'
 * '<S28>'  : 'SpinningMode/MSpinningModelRR System/nRPMError System'
 */
#endif                                 /* SpinningMode_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
