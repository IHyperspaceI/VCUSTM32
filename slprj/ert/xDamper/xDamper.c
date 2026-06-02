/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: xDamper.c
 *
 * Code generated for Simulink model 'xDamper'.
 *
 * Model version                  : 13.5
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Tue Jun  2 18:47:27 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "xDamper.h"
#include "rtwtypes.h"
#include "xDamper_private.h"

/* Output and update for referenced model: 'xDamper' */
void xDamper(const real_T *rtu_VDamperPotentiometerFL, const real_T
             *rtu_VDamperPotentiometerFR, const real_T
             *rtu_VDamperPotentiometerRL, const real_T
             *rtu_VDamperPotentiometerRR, real_T *rty_xDamperFL, real_T
             *rty_xDamperFR, real_T *rty_xDamperRL, real_T *rty_xDamperRR)
{
  /* Sum: '<Root>/Subtract' */
  *rty_xDamperFL = *rtu_VDamperPotentiometerFL;

  /* Sum: '<Root>/Subtract1' */
  *rty_xDamperFR = *rtu_VDamperPotentiometerFR;

  /* Sum: '<Root>/Subtract2' */
  *rty_xDamperRL = *rtu_VDamperPotentiometerRL;

  /* Sum: '<Root>/Subtract3' */
  *rty_xDamperRR = *rtu_VDamperPotentiometerRR;
}

/* Model initialize function */
void xDamper_initialize(const char_T **rt_errorStatus, RT_MODEL_xDamper_T *const
  xDamper_M)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(xDamper_M, rt_errorStatus);

  /* user code (Initialize function Body) */
  LL_TIM_EnableCounter(TIM2);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
