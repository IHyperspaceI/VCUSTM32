/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: MTotalRequested.c
 *
 * Code generated for Simulink model 'MTotalRequested'.
 *
 * Model version                  : 13.5
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Tue Jun  2 18:48:02 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "MTotalRequested.h"
#include "rtwtypes.h"
#include "MTotalRequested_private.h"

/* Output and update for referenced model: 'MTotalRequested' */
void MTotalRequested(const real_T *rtu_MPowerControllerRequested, const real_T
                     *rtu_rThrottlePedal, const real_T *rtu_MRegenLimited, const
                     real_T *rtu_MDischargeLimited, const real_T *rtu_PActual,
                     real_T *rty_MTotalRequested)
{
  /* Switch: '<S3>/Switch1' incorporates:
   *  Constant: '<S4>/Constant'
   *  Constant: '<S5>/Constant'
   *  Logic: '<S1>/AND1'
   *  RelationalOperator: '<S4>/Compare'
   *  RelationalOperator: '<S5>/Compare'
   *  Switch: '<S2>/Switch'
   */
  if ((!(*rtu_rThrottlePedal < 1.0)) || (!(*rtu_MRegenLimited < 0.0))) {
    /* Switch: '<S2>/Switch' incorporates:
     *  Constant: '<S6>/Constant'
     *  Constant: '<S7>/Constant'
     *  Logic: '<S2>/Logical Operator'
     *  RelationalOperator: '<S6>/Compare'
     *  RelationalOperator: '<S7>/Compare'
     */
    if ((*rtu_PActual > 70.0) && (*rtu_rThrottlePedal > 85.0)) {
      *rty_MTotalRequested = *rtu_MPowerControllerRequested;
    } else {
      *rty_MTotalRequested = *rtu_MDischargeLimited;
    }
  } else {
    *rty_MTotalRequested = *rtu_MRegenLimited;
  }

  /* End of Switch: '<S3>/Switch1' */
}

/* Model initialize function */
void MTotalRequested_initialize(const char_T **rt_errorStatus,
  RT_MODEL_MTotalRequested_T *const MTotalRequested_M)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(MTotalRequested_M, rt_errorStatus);

  /* user code (Initialize function Body) */
  LL_TIM_EnableCounter(TIM2);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
