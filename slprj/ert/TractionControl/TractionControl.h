/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: TractionControl.h
 *
 * Code generated for Simulink model 'TractionControl'.
 *
 * Model version                  : 13.2
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Fri Jul 31 17:37:27 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef TractionControl_h_
#define TractionControl_h_
#ifndef TractionControl_COMMON_INCLUDES_
#define TractionControl_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rt_nonfinite.h"
#include "math.h"
#endif                                 /* TractionControl_COMMON_INCLUDES_ */

#include "TractionControl_types.h"
#include "rtGetNaN.h"

/* user code (top of header file) */
#include "stm32h7xx_ll_tim.h"

/* Block states (default storage) for model 'TractionControl' */
typedef struct {
  real_T yk1_PreviousInput[4];         /* '<S22>/y(k-1)' */
  real_T Memory_PreviousInput[4];      /* '<S22>/Memory' */
  real_T PrevY[4];                     /* '<S20>/Rate Limiter' */
  real_T yk1_PreviousInput_g[4];       /* '<S18>/y(k-1)' */
  real_T Memory_PreviousInput_j[4];    /* '<S18>/Memory' */
  real_T PrevY_f[4];                   /* '<S16>/Rate Limiter' */
} DW_TractionControl_f_T;

/* Invariant block signals for model 'TractionControl' */
typedef struct {
  const real_T Divide;                 /* '<S19>/Divide' */
  const real_T Gain1;                  /* '<S19>/Gain1' */
  const real_T Exp;                    /* '<S19>/Exp' */
  const real_T Subtract1;              /* '<S19>/Subtract1' */
  const real_T Divide_e;               /* '<S23>/Divide' */
  const real_T Gain1_e;                /* '<S23>/Gain1' */
  const real_T Exp_m;                  /* '<S23>/Exp' */
  const real_T Subtract1_g;            /* '<S23>/Subtract1' */
} ConstB_TractionControl_h_T;

/* Real-time Model Data Structure */
struct tag_RTM_TractionControl_T {
  const char_T **errorStatus;
};

typedef struct {
  DW_TractionControl_f_T rtdw;
  RT_MODEL_TractionControl_T rtm;
} MdlrefDW_TractionControl_T;

/* Model reference registration function */
extern void TractionControl_initialize(const char_T **rt_errorStatus,
  RT_MODEL_TractionControl_T *const TractionControl_M);
extern void TractionControl(const real_T *rtu_rSteeringAngle, const real_T
  *rtu_MTotalRequested, const real_T *rtu_rGrip, const real_T
  *rtu_MTorqueDistributionFL, const real_T *rtu_MTorqueDistributionFR, const
  real_T *rtu_MTorqueDistributionRL, const real_T *rtu_MTorqueDistributionRR,
  const boolean_T *rtu_BTCOn, const real_T *rtu_vChassis, const real_T
  *rtu_rSlipRatioFLActual, const real_T *rtu_rSlipRatioFRActual, const real_T
  *rtu_rSlipRatioRLActual, const real_T *rtu_rSlipRatioRRActual, const real_T
  *rtu_NTCKdSelector, real_T *rty_rSlipRatioOptimal, real_T
  *rty_NTractionControlMultiplierF, real_T *rty_NTractionControlMultiplie_c,
  real_T *rty_NTractionControlMultiplierR, real_T
  *rty_NTractionControlMultiplie_n, real_T *rty_NTractionControlPTermFL, real_T *
  rty_NTractionControlPTermFR, real_T *rty_NTractionControlPTermRL, real_T
  *rty_NTractionControlPTermRR, real_T *rty_NTractionControlDTermFL, real_T
  *rty_NTractionControlDTermFR, real_T *rty_NTractionControlDTermRL, real_T
  *rty_NTractionControlDTermRR, real_T *rty_NABSMultiplierFL, real_T
  *rty_NABSMultiplierFR, real_T *rty_NABSMultiplierRL, real_T
  *rty_NABSMultiplierRR, real_T *rty_NABSPTermFL, real_T *rty_NABSPTermFR,
  real_T *rty_NABSPTermRL, real_T *rty_NABSPTermRR, real_T *rty_NABSDTermFL,
  real_T *rty_NABSDTermFR, real_T *rty_NABSDTermRL, real_T *rty_NABSDTermRR,
  real_T *rty_MTractionControlFLTotal, real_T *rty_MTractionControlFRTotal,
  real_T *rty_MTractionControlRLTotal, real_T *rty_MTractionControlRRTotal,
  real_T *rty_MTractionControlFLFinal, real_T *rty_MTractionControlFRFinal,
  real_T *rty_MTractionControlRLFinal, real_T *rty_MTractionControlRRFinal,
  DW_TractionControl_f_T *localDW);

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S8>/Data Type Duplicate' : Unused code path elimination
 * Block '<S8>/Data Type Propagation' : Unused code path elimination
 * Block '<S9>/Data Type Duplicate' : Unused code path elimination
 * Block '<S9>/Data Type Propagation' : Unused code path elimination
 * Block '<S10>/Data Type Duplicate' : Unused code path elimination
 * Block '<S10>/Data Type Propagation' : Unused code path elimination
 * Block '<S11>/Data Type Duplicate' : Unused code path elimination
 * Block '<S11>/Data Type Propagation' : Unused code path elimination
 * Block '<S12>/Data Type Duplicate' : Unused code path elimination
 * Block '<S12>/Data Type Propagation' : Unused code path elimination
 * Block '<S13>/Data Type Duplicate' : Unused code path elimination
 * Block '<S13>/Data Type Propagation' : Unused code path elimination
 * Block '<S14>/Data Type Duplicate' : Unused code path elimination
 * Block '<S14>/Data Type Propagation' : Unused code path elimination
 * Block '<S15>/Data Type Duplicate' : Unused code path elimination
 * Block '<S15>/Data Type Propagation' : Unused code path elimination
 */

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
 * '<Root>' : 'TractionControl'
 * '<S1>'   : 'TractionControl/MTractionControlFinal System'
 * '<S2>'   : 'TractionControl/MTractionControlTotal System1'
 * '<S3>'   : 'TractionControl/NABSMultiplier System'
 * '<S4>'   : 'TractionControl/NTractionControlMultiplier System'
 * '<S5>'   : 'TractionControl/Optimal Slip Ratio Calculator'
 * '<S6>'   : 'TractionControl/rSlipRatioError System'
 * '<S7>'   : 'TractionControl/MTractionControlFinal System/Compare To Constant'
 * '<S8>'   : 'TractionControl/MTractionControlTotal System1/Saturation Dynamic2'
 * '<S9>'   : 'TractionControl/MTractionControlTotal System1/Saturation Dynamic3'
 * '<S10>'  : 'TractionControl/MTractionControlTotal System1/Saturation Dynamic4'
 * '<S11>'  : 'TractionControl/MTractionControlTotal System1/Saturation Dynamic5'
 * '<S12>'  : 'TractionControl/MTractionControlTotal System1/Saturation Dynamic6'
 * '<S13>'  : 'TractionControl/MTractionControlTotal System1/Saturation Dynamic7'
 * '<S14>'  : 'TractionControl/MTractionControlTotal System1/Saturation Dynamic8'
 * '<S15>'  : 'TractionControl/MTractionControlTotal System1/Saturation Dynamic9'
 * '<S16>'  : 'TractionControl/NABSMultiplier System/NABS PD Controller System'
 * '<S17>'  : 'TractionControl/NABSMultiplier System/NABSKp System'
 * '<S18>'  : 'TractionControl/NABSMultiplier System/NABS PD Controller System/Subsystem1'
 * '<S19>'  : 'TractionControl/NABSMultiplier System/NABS PD Controller System/Subsystem1/Low Pass Filter'
 * '<S20>'  : 'TractionControl/NTractionControlMultiplier System/NTractionControl PD Controller'
 * '<S21>'  : 'TractionControl/NTractionControlMultiplier System/NTractionControlKp//d System'
 * '<S22>'  : 'TractionControl/NTractionControlMultiplier System/NTractionControl PD Controller/Subsystem1'
 * '<S23>'  : 'TractionControl/NTractionControlMultiplier System/NTractionControl PD Controller/Subsystem1/Low Pass Filter'
 */
#endif                                 /* TractionControl_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
