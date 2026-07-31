/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: MFinal.c
 *
 * Code generated for Simulink model 'MFinal'.
 *
 * Model version                  : 13.2
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Fri Jul 31 17:35:49 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "MFinal.h"
#include "rtwtypes.h"
#include "MFinal_private.h"

/* Output and update for referenced model: 'MFinal' */
void MFinal(const real_T *rtu_MSpinningModeFL, const boolean_T
            *rtu_BSpinningModeOn, const real_T *rtu_MTractionControlFLFinal,
            const real_T *rtu_rSpeedRegenDerateFL, const real_T
            *rtu_MSpinningModeFR, const real_T *rtu_MTractionControlFRFinal,
            const real_T *rtu_rSpeedRegenDerateFR, const real_T
            *rtu_MSpinningModeRL, const real_T *rtu_MTractionControlRLFinal,
            const real_T *rtu_rSpeedRegenDerateRL, const real_T
            *rtu_MSpinningModeRR, const real_T *rtu_MTractionControlRRFinal,
            const real_T *rtu_rSpeedRegenDerateRR, real_T *rty_MFLFinal, real_T *
            rty_MFRFinal, real_T *rty_MRLFinal, real_T *rty_MRRFinal, real_T
            *rty_MTotalFinal)
{
  real_T rtb_Product1_idx_0;
  real_T rtb_Product1_idx_1;
  real_T rtb_Product1_idx_2;
  real_T rtb_Product1_idx_3;
  real_T tmp;

  /* Switch: '<Root>/Switch' */
  if (*rtu_BSpinningModeOn) {
    rtb_Product1_idx_0 = *rtu_MSpinningModeFL;
    rtb_Product1_idx_1 = *rtu_MSpinningModeFR;
    rtb_Product1_idx_2 = *rtu_MSpinningModeRL;
    rtb_Product1_idx_3 = *rtu_MSpinningModeRR;
  } else {
    rtb_Product1_idx_0 = *rtu_MTractionControlFLFinal;
    rtb_Product1_idx_1 = *rtu_MTractionControlFRFinal;
    rtb_Product1_idx_2 = *rtu_MTractionControlRLFinal;
    rtb_Product1_idx_3 = *rtu_MTractionControlRRFinal;
  }

  /* End of Switch: '<Root>/Switch' */

  /* Switch: '<Root>/Switch3' incorporates:
   *  Constant: '<Root>/Constant1'
   *  Product: '<Root>/Product1'
   */
  if (rtb_Product1_idx_0 > 0.0) {
    tmp = 1.0;
  } else {
    tmp = *rtu_rSpeedRegenDerateFL;
  }

  /* Product: '<Root>/Product1' incorporates:
   *  Switch: '<Root>/Switch3'
   */
  rtb_Product1_idx_0 *= tmp;

  /* Switch: '<Root>/Switch3' incorporates:
   *  Constant: '<Root>/Constant1'
   *  Product: '<Root>/Product1'
   */
  if (rtb_Product1_idx_1 > 0.0) {
    tmp = 1.0;
  } else {
    tmp = *rtu_rSpeedRegenDerateFR;
  }

  /* Product: '<Root>/Product1' incorporates:
   *  Switch: '<Root>/Switch3'
   */
  rtb_Product1_idx_1 *= tmp;

  /* Switch: '<Root>/Switch3' incorporates:
   *  Constant: '<Root>/Constant1'
   *  Product: '<Root>/Product1'
   */
  if (rtb_Product1_idx_2 > 0.0) {
    tmp = 1.0;
  } else {
    tmp = *rtu_rSpeedRegenDerateRL;
  }

  /* Product: '<Root>/Product1' incorporates:
   *  Switch: '<Root>/Switch3'
   */
  rtb_Product1_idx_2 *= tmp;

  /* Switch: '<Root>/Switch3' incorporates:
   *  Constant: '<Root>/Constant1'
   *  Product: '<Root>/Product1'
   */
  if (rtb_Product1_idx_3 > 0.0) {
    tmp = 1.0;
  } else {
    tmp = *rtu_rSpeedRegenDerateRR;
  }

  /* Product: '<Root>/Product1' incorporates:
   *  Switch: '<Root>/Switch3'
   */
  rtb_Product1_idx_3 *= tmp;

  /* Sum: '<Root>/Add' incorporates:
   *  Product: '<Root>/Product1'
   */
  *rty_MTotalFinal = ((rtb_Product1_idx_0 + rtb_Product1_idx_1) +
                      rtb_Product1_idx_2) + rtb_Product1_idx_3;

  /* SignalConversion generated from: '<Root>/MFLFinal' incorporates:
   *  Product: '<Root>/Product1'
   */
  *rty_MFLFinal = rtb_Product1_idx_0;

  /* SignalConversion generated from: '<Root>/MFRFinal' incorporates:
   *  Product: '<Root>/Product1'
   */
  *rty_MFRFinal = rtb_Product1_idx_1;

  /* SignalConversion generated from: '<Root>/MRLFinal' incorporates:
   *  Product: '<Root>/Product1'
   */
  *rty_MRLFinal = rtb_Product1_idx_2;

  /* SignalConversion generated from: '<Root>/MRRFinal' incorporates:
   *  Product: '<Root>/Product1'
   */
  *rty_MRRFinal = rtb_Product1_idx_3;
}

/* Model initialize function */
void MFinal_initialize(const char_T **rt_errorStatus, RT_MODEL_MFinal_T *const
  MFinal_M)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(MFinal_M, rt_errorStatus);

  /* user code (Initialize function Body) */
  LL_TIM_EnableCounter(TIM2);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
