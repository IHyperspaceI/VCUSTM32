/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: SpinningMode.h
 *
 * Code generated for Simulink model 'SpinningMode'.
 *
 * Model version                  : 13.2
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Fri Jul 31 17:36:30 2026
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
  real_T Memory1_PreviousInput[4];     /* '<S11>/Memory1' */
  real_T Memory1_PreviousInput_d;      /* '<S5>/Memory1' */
  boolean_T Memory_PreviousInput;      /* '<S6>/Memory' */
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
  *rtu_BSpinningModeOn, const boolean_T *rtu_BReadyToDrive, const real_T
  *rtu_pBrakeMax, const real_T *rtu_nMotorRL, const real_T *rtu_nMotorFL, const
  real_T *rtu_nMotorFR, const real_T *rtu_nMotorRR, real_T *rty_MSpinningModeFL,
  real_T *rty_MSpinningModeFR, real_T *rty_MSpinningModeRL, real_T
  *rty_MSpinningModeRR, DW_SpinningMode_f_T *localDW);

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
 * '<S1>'   : 'SpinningMode/BSpinningModeON System'
 * '<S2>'   : 'SpinningMode/BSpinningModeStopped System'
 * '<S3>'   : 'SpinningMode/BSpinningModeTriggered System'
 * '<S4>'   : 'SpinningMode/MSpinningMode System'
 * '<S5>'   : 'SpinningMode/tSpinningModeTimer System'
 * '<S6>'   : 'SpinningMode/BSpinningModeON System/S-R Flip-Flop'
 * '<S7>'   : 'SpinningMode/BSpinningModeStopped System/Compare To Constant'
 * '<S8>'   : 'SpinningMode/BSpinningModeStopped System/Compare To Constant1'
 * '<S9>'   : 'SpinningMode/BSpinningModeTriggered System/Compare To Constant'
 * '<S10>'  : 'SpinningMode/MSpinningMode System/MSpinningModeXX System'
 * '<S11>'  : 'SpinningMode/MSpinningMode System/NSpinningModeIntegralTerm System'
 * '<S12>'  : 'SpinningMode/MSpinningMode System/NSpinningModeProportionalTerm System'
 * '<S13>'  : 'SpinningMode/MSpinningMode System/nRPMError System'
 */
#endif                                 /* SpinningMode_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
