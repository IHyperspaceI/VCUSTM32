/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: PActual.c
 *
 * Code generated for Simulink model 'PActual'.
 *
 * Model version                  : 13.2
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Fri Jul 31 17:32:09 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "PActual.h"
#include "rtwtypes.h"
#include "PActual_private.h"

/* Output and update for referenced model: 'PActual' */
void PActual(const real_T *rtu_VDCInvRL, const real_T *rtu_IIVTS, real_T
             *rty_PActual)
{
  /* Gain: '<Root>/W to kW Conversion' incorporates:
   *  Product: '<Root>/Multiply'
   */
  *rty_PActual = *rtu_VDCInvRL * *rtu_IIVTS * 0.001;
}

/* Model initialize function */
void PActual_initialize(const char_T **rt_errorStatus, RT_MODEL_PActual_T *const
  PActual_M)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(PActual_M, rt_errorStatus);

  /* user code (Initialize function Body) */
  LL_TIM_EnableCounter(TIM2);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
