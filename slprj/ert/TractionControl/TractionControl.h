/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: TractionControl.h
 *
 * Code generated for Simulink model 'TractionControl'.
 *
 * Model version                  : 13.5
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Wed Jun  3 14:57:04 2026
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
#include "math.h"
#endif                                 /* TractionControl_COMMON_INCLUDES_ */

#include "TractionControl_types.h"

/* user code (top of header file) */
#include "stm32h7xx_ll_tim.h"

/* Real-time Model Data Structure */
struct tag_RTM_TractionControl_T {
  const char_T **errorStatus;
};

typedef struct {
  RT_MODEL_TractionControl_T rtm;
} MdlrefDW_TractionControl_T;

/* Model reference registration function */
extern void TractionControl_initialize(const char_T **rt_errorStatus,
  RT_MODEL_TractionControl_T *const TractionControl_M);
extern void TractionControl(const real_T *rtu_rSteeringAngle, const real_T
  *rtu_vChassis, const boolean_T *rtu_BTractionControlActivated, const real_T
  *rtu_NTractionControlKpSelector, const real_T *rtu_vWheelFL, const real_T
  *rtu_vWheelFR, const real_T *rtu_vWheelRL, const real_T *rtu_vWheelRR, const
  real_T *rtu_MTorqueDistributionFL, const real_T *rtu_MTorqueDistributionFR,
  const real_T *rtu_MTorqueDistributionRL, const real_T
  *rtu_MTorqueDistributionRR, real_T *rty_rSlipRatioOptimal, real_T
  *rty_NTractionControlMultiplierF, real_T *rty_NTractionControlMultiplie_c,
  real_T *rty_NTractionControlMultiplierR, real_T
  *rty_NTractionControlMultiplie_n, real_T *rty_NABSMultiplierFL, real_T
  *rty_NABSMultiplierFR, real_T *rty_NABSMultiplierRL, real_T
  *rty_NABSMultiplierRR, real_T *rty_rSlipRatioFLActual, real_T
  *rty_rSlipRatioFRActual, real_T *rty_rSlipRatioRLActual, real_T
  *rty_rSlipRatioRRActual, real_T *rty_MTractionControlFLTotal, real_T
  *rty_MTractionControlFRTotal, real_T *rty_MTractionControlRLTotal, real_T
  *rty_MTractionControlRRTotal, real_T *rty_MTractionControlFLFinal, real_T
  *rty_MTractionControlFRFinal, real_T *rty_MTractionControlRLFinal, real_T
  *rty_MTractionControlRRFinal);

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S8>/Data Type Duplicate' : Unused code path elimination
 * Block '<S8>/Data Type Propagation' : Unused code path elimination
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
 * '<S2>'   : 'TractionControl/MTractionControlTotal System'
 * '<S3>'   : 'TractionControl/NABSMultiplier System'
 * '<S4>'   : 'TractionControl/NTractionControlMultiplier System'
 * '<S5>'   : 'TractionControl/Optimal Slip Ratio Calculator'
 * '<S6>'   : 'TractionControl/rSlipRatioError System'
 * '<S7>'   : 'TractionControl/MTractionControlFinal System/Compare To Constant'
 * '<S8>'   : 'TractionControl/MTractionControlTotal System/Saturation Dynamic'
 * '<S9>'   : 'TractionControl/NABSMultiplier System/NABSKp System'
 * '<S10>'  : 'TractionControl/NABSMultiplier System/NABSMultiplier System'
 * '<S11>'  : 'TractionControl/NTractionControlMultiplier System/NTractionControlKp System'
 * '<S12>'  : 'TractionControl/NTractionControlMultiplier System/NTractionControlMultiplier System'
 * '<S13>'  : 'TractionControl/rSlipRatioError System/rSlipRatioActual System'
 * '<S14>'  : 'TractionControl/rSlipRatioError System/rSlipRatioError System'
 */
#endif                                 /* TractionControl_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
