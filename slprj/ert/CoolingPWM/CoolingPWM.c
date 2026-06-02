/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: CoolingPWM.c
 *
 * Code generated for Simulink model 'CoolingPWM'.
 *
 * Model version                  : 13.5
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Tue Jun  2 18:46:29 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "CoolingPWM.h"
#include "rtwtypes.h"
#include "CoolingPWM_private.h"

/* Output and update for referenced model: 'CoolingPWM' */
void CoolingPWM(const real_T *rtu_TCellMax, const boolean_T
                *rtu_BAccumulatorFanOn, boolean_T *rty_BAccumulatorFanDuty)
{
  /* Logic: '<Root>/OR' incorporates:
   *  Constant: '<S1>/Constant'
   *  RelationalOperator: '<S1>/Compare'
   */
  *rty_BAccumulatorFanDuty = ((*rtu_TCellMax > 25.0) || (*rtu_BAccumulatorFanOn));
}

/* Model initialize function */
void CoolingPWM_initialize(const char_T **rt_errorStatus, RT_MODEL_CoolingPWM_T *
  const CoolingPWM_M)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(CoolingPWM_M, rt_errorStatus);

  /* user code (Initialize function Body) */
  LL_TIM_EnableCounter(TIM2);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
