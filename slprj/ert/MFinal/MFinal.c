/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: MFinal.c
 *
 * Code generated for Simulink model 'MFinal'.
 *
 * Model version                  : 13.5
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Wed Jun  3 14:56:19 2026
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
void MFinal(const boolean_T *rtu_BSpinningModelActivated, const real_T
            *rtu_MSpinningModelFL, const real_T *rtu_MTractionControlFLFinal,
            const real_T *rtu_MSpinningModelFR, const real_T
            *rtu_MTractionControlFRFinal, const real_T *rtu_MSpinningModelRL,
            const real_T *rtu_MTractionControlRLFinal, const real_T
            *rtu_MSpinningModelRR, const real_T *rtu_MTractionControlRRFinal,
            real_T *rty_MFLFinal, real_T *rty_MFRFinal, real_T *rty_MRLFinal,
            real_T *rty_MRRFinal, real_T *rty_MTotalFinal)
{
  /* Switch: '<S1>/Switch' incorporates:
   *  Switch: '<S2>/Switch'
   *  Switch: '<S4>/Switch'
   *  Switch: '<S5>/Switch'
   */
  if (*rtu_BSpinningModelActivated) {
    *rty_MFLFinal = *rtu_MSpinningModelFL;
    *rty_MFRFinal = *rtu_MSpinningModelFR;
    *rty_MRLFinal = *rtu_MSpinningModelRL;
    *rty_MRRFinal = *rtu_MSpinningModelRR;
  } else {
    *rty_MFLFinal = *rtu_MTractionControlFLFinal;
    *rty_MFRFinal = *rtu_MTractionControlFRFinal;
    *rty_MRLFinal = *rtu_MTractionControlRLFinal;
    *rty_MRRFinal = *rtu_MTractionControlRRFinal;
  }

  /* End of Switch: '<S1>/Switch' */

  /* Sum: '<S3>/Add' */
  *rty_MTotalFinal = ((*rty_MFLFinal + *rty_MFRFinal) + *rty_MRLFinal) +
    *rty_MRRFinal;
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
