/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: BBrakeLight.c
 *
 * Code generated for Simulink model 'BBrakeLight'.
 *
 * Model version                  : 13.2
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Fri Jul 31 17:30:41 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BBrakeLight.h"
#include "rtwtypes.h"
#include "BBrakeLight_private.h"

/* Output and update for referenced model: 'BBrakeLight' */
void BBrakeLight(const boolean_T *rtu_BBrakeOn, const real_T
                 *rtu_gLongitudinalIMU, const real_T *rtu_vChassis, boolean_T
                 *rty_BBrakeLight)
{
  boolean_T tmp;

  /* Switch: '<Root>/Switch' incorporates:
   *  Constant: '<Root>/Constant'
   *  Constant: '<Root>/Constant1'
   *  RelationalOperator: '<Root>/GreaterThan'
   *  RelationalOperator: '<Root>/GreaterThan1'
   */
  if (*rtu_vChassis > 5.0) {
    tmp = (*rtu_gLongitudinalIMU <= -4.0);
  } else {
    tmp = (*rtu_gLongitudinalIMU <= -1.3);
  }

  /* Logic: '<Root>/Logical Operator' incorporates:
   *  Switch: '<Root>/Switch'
   */
  *rty_BBrakeLight = ((*rtu_BBrakeOn) || tmp);
}

/* Model initialize function */
void BBrakeLight_initialize(const char_T **rt_errorStatus,
  RT_MODEL_BBrakeLight_T *const BBrakeLight_M)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(BBrakeLight_M, rt_errorStatus);

  /* user code (Initialize function Body) */
  LL_TIM_EnableCounter(TIM2);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
