/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: rSteeringAngle.c
 *
 * Code generated for Simulink model 'rSteeringAngle'.
 *
 * Model version                  : 13.5
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Tue Jun  2 18:47:10 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "rSteeringAngle.h"
#include "rtwtypes.h"
#include "rSteeringAngle_private.h"

/* Output and update for referenced model: 'rSteeringAngle' */
void rSteeringAngle(const real_T *rtu_VSteeringAngle, real_T *rty_rSteeringAngle,
                    real_T *rty_aSteeringAngle)
{
  /* Sum: '<Root>/Subtract3' incorporates:
   *  Constant: '<Root>/Constant4'
   *  Product: '<Root>/Multiply'
   *  Sum: '<Root>/Subtract2'
   */
  *rty_rSteeringAngle = (*rtu_VSteeringAngle - 1006.0) *
    rSteeringAngle_ConstB.Divide - 100.0;

  /* Gain: '<Root>/Gain' */
  *rty_aSteeringAngle = 0.26557 * *rty_rSteeringAngle;
}

/* Model initialize function */
void rSteeringAngle_initialize(const char_T **rt_errorStatus,
  RT_MODEL_rSteeringAngle_T *const rSteeringAngle_M)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(rSteeringAngle_M, rt_errorStatus);

  /* user code (Initialize function Body) */
  LL_TIM_EnableCounter(TIM2);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
