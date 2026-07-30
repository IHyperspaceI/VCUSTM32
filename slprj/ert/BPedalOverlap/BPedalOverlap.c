/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: BPedalOverlap.c
 *
 * Code generated for Simulink model 'BPedalOverlap'.
 *
 * Model version                  : 13.2
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Thu Jul 30 16:42:40 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BPedalOverlap.h"
#include "rtwtypes.h"
#include "BPedalOverlap_private.h"

/* Output and update for referenced model: 'BPedalOverlap' */
void BPedalOverlap(const real_T *rtu_rThrottlePedal, const real_T *rtu_pBrakeMax,
                   boolean_T *rty_BPedalOverlap, real_T *rty_tPedalOverlap,
                   DW_BPedalOverlap_f_T *localDW)
{
  real_T tmp;

  /* Logic: '<S1>/AND' incorporates:
   *  Constant: '<S3>/Constant'
   *  Constant: '<S4>/Constant'
   *  RelationalOperator: '<S3>/Compare'
   *  RelationalOperator: '<S4>/Compare'
   */
  *rty_BPedalOverlap = ((*rtu_rThrottlePedal > 0.0) && (*rtu_pBrakeMax > 1.5));

  /* Memory: '<S2>/Memory' */
  *rty_tPedalOverlap = localDW->Memory_PreviousInput;

  /* Switch: '<S2>/Switch' incorporates:
   *  Constant: '<S2>/Constant6'
   */
  if (*rty_BPedalOverlap) {
    tmp = *rty_tPedalOverlap;
  } else {
    tmp = 0.0;
  }

  /* Update for Memory: '<S2>/Memory' incorporates:
   *  Constant: '<S2>/Constant5'
   *  Sum: '<S2>/Add'
   *  Switch: '<S2>/Switch'
   */
  localDW->Memory_PreviousInput = tmp + 0.001;
}

/* Model initialize function */
void BPedalOverlap_initialize(const char_T **rt_errorStatus,
  RT_MODEL_BPedalOverlap_T *const BPedalOverlap_M)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(BPedalOverlap_M, rt_errorStatus);

  /* user code (Initialize function Body) */
  LL_TIM_EnableCounter(TIM2);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
