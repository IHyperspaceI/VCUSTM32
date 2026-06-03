/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: vChassis.c
 *
 * Code generated for Simulink model 'vChassis'.
 *
 * Model version                  : 13.5
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Wed Jun  3 14:55:49 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "vChassis.h"
#include "rtwtypes.h"
#include "vChassis_private.h"

/* Output and update for referenced model: 'vChassis' */
void vChassis(const real_T *rtu_vWheelRL, const real_T *rtu_vWheelRR, real_T
              *rty_vChassis, real_T *rty_sChassis, real_T *rty_sEMS1000m,
              boolean_T *rty_BEMS1000mPoint, boolean_T *rty_BEMS995Point,
              DW_vChassis_f_T *localDW)
{
  /* Switch: '<Root>/Switch' incorporates:
   *  Constant: '<Root>/Constant'
   *  Gain: '<Root>/Gain'
   *  Sum: '<Root>/Add'
   */
  if (*rtu_vWheelRL > 0.65) {
    *rty_vChassis = (*rtu_vWheelRL + *rtu_vWheelRR) * 0.5;
  } else {
    *rty_vChassis = 0.0;
  }

  /* End of Switch: '<Root>/Switch' */

  /* Sum: '<S2>/Add' incorporates:
   *  Constant: '<S2>/Constant5'
   *  Memory: '<S2>/Memory'
   *  Product: '<S2>/Multiply'
   */
  *rty_sChassis = *rty_vChassis * 0.001 + localDW->Memory_PreviousInput;

  /* Sum: '<S3>/Add1' incorporates:
   *  Constant: '<S3>/Constant5'
   *  Memory: '<S3>/Memory1'
   *  Product: '<S3>/Multiply'
   */
  *rty_sEMS1000m = *rty_vChassis * 0.001 + localDW->Memory1_PreviousInput;

  /* RelationalOperator: '<S3>/GreaterThan' incorporates:
   *  Constant: '<S3>/Constant1'
   */
  *rty_BEMS1000mPoint = (*rty_sEMS1000m > 998.0);

  /* Logic: '<S3>/Logical Operator' incorporates:
   *  Constant: '<S3>/Constant2'
   *  Constant: '<S3>/Constant3'
   *  RelationalOperator: '<S3>/GreaterThan1'
   *  RelationalOperator: '<S3>/GreaterThan2'
   */
  *rty_BEMS995Point = (*rty_sEMS1000m > 997.0) ^ (*rty_sEMS1000m > 995.0);

  /* Update for Memory: '<S2>/Memory' */
  localDW->Memory_PreviousInput = *rty_sChassis;

  /* Switch: '<S3>/Switch' */
  if (*rty_sEMS1000m >= 1000.0) {
    /* Update for Memory: '<S3>/Memory1' incorporates:
     *  Constant: '<S3>/Constant'
     */
    localDW->Memory1_PreviousInput = 0.0;
  } else {
    /* Update for Memory: '<S3>/Memory1' */
    localDW->Memory1_PreviousInput = *rty_sEMS1000m;
  }

  /* End of Switch: '<S3>/Switch' */
}

/* Model initialize function */
void vChassis_initialize(const char_T **rt_errorStatus, RT_MODEL_vChassis_T *
  const vChassis_M)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(vChassis_M, rt_errorStatus);

  /* user code (Initialize function Body) */
  LL_TIM_EnableCounter(TIM2);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
