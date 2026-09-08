/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: MTotalRequested.c
 *
 * Code generated for Simulink model 'MTotalRequested'.
 *
 * Model version                  : 13.3
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Tue Sep  8 11:42:57 2026
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
void MTotalRequested(const real_T *rtu_PDischargeLimited, const real_T
                     *rtu_vChassis, const real_T *rtu_PRegenRequested, const
                     real_T *rtu_PActual, const real_T *rtu_PDischargeLimit,
                     const real_T *rtu_rThrottlePedal, const real_T
                     *rtu_MPCDischargeRequested, const real_T *rtu_rRegenPaddle,
                     const real_T *rtu_MPCRegenRequested, const real_T
                     *rtu_PRegenLimit, const boolean_T *rtu_BDischargeAllowed,
                     const real_T *rtu_MDriverDischargeRequested, real_T
                     *rty_MDischargeLimited, real_T *rty_MRegenLimited, real_T
                     *rty_MTotalRequested)
{
  real_T u0;

  /* Saturate: '<S4>/Saturation2' */
  if (*rtu_vChassis > 40.0) {
    u0 = 40.0;
  } else if (*rtu_vChassis < 0.1) {
    u0 = 0.1;
  } else {
    u0 = *rtu_vChassis;
  }

  /* Product: '<S4>/Divide2' incorporates:
   *  Constant: '<S4>/Constant'
   *  Constant: '<S4>/Constant1'
   *  Gain: '<S4>/% '
   *  Gain: '<S4>/Gain'
   *  Gain: '<S4>/kW to W Conversion'
   *  Product: '<S4>/Divide1'
   *  Product: '<S4>/Divide3'
   *  Saturate: '<S4>/Saturation2'
   */
  u0 = -1000.0 * *rtu_PRegenRequested / (u0 / 0.203 * 15.551) * 100.0 / 9.8;

  /* Saturate: '<S4>/Saturation1' */
  if (u0 > 0.0) {
    *rty_MRegenLimited = 0.0;
  } else if (u0 < -653.0) {
    *rty_MRegenLimited = -653.0;
  } else {
    *rty_MRegenLimited = u0;
  }

  /* End of Saturate: '<S4>/Saturation1' */

  /* Switch: '<S2>/Switch' */
  if (*rtu_vChassis > 3.0) {
    /* Saturate: '<S2>/Saturation2' */
    if (*rtu_vChassis > 40.0) {
      u0 = 40.0;
    } else if (*rtu_vChassis < 0.1) {
      u0 = 0.1;
    } else {
      u0 = *rtu_vChassis;
    }

    /* Product: '<S2>/Divide2' incorporates:
     *  Constant: '<S2>/Constant'
     *  Constant: '<S2>/Constant1'
     *  Gain: '<S2>/% '
     *  Gain: '<S2>/Gain'
     *  Gain: '<S2>/kW to W Conversion'
     *  Product: '<S2>/Divide1'
     *  Product: '<S2>/Divide3'
     *  Saturate: '<S2>/Saturation2'
     */
    u0 = 1000.0 * *rtu_PDischargeLimited / (u0 / 0.203 * 15.551) * 100.0 / 9.8;

    /* Saturate: '<S2>/Saturation1' */
    if (u0 > 857.0) {
      *rty_MDischargeLimited = 857.0;
    } else if (u0 < 0.0) {
      *rty_MDischargeLimited = 0.0;
    } else {
      *rty_MDischargeLimited = u0;
    }

    /* End of Saturate: '<S2>/Saturation1' */
  } else {
    /* Product: '<S2>/Divide4' */
    u0 = *rtu_MDriverDischargeRequested * (real_T)*rtu_BDischargeAllowed;

    /* Saturate: '<S2>/Saturation3' */
    if (u0 > 857.0) {
      *rty_MDischargeLimited = 857.0;
    } else if (u0 < 0.0) {
      *rty_MDischargeLimited = 0.0;
    } else {
      *rty_MDischargeLimited = u0;
    }

    /* End of Saturate: '<S2>/Saturation3' */
  }

  /* End of Switch: '<S2>/Switch' */

  /* Switch: '<S6>/Switch1' incorporates:
   *  Constant: '<S10>/Constant'
   *  Constant: '<S5>/Constant'
   *  Constant: '<S5>/Constant1'
   *  Constant: '<S7>/Constant'
   *  Constant: '<S8>/Constant'
   *  Logic: '<S1>/AND1'
   *  Logic: '<S5>/Logical Operator'
   *  RelationalOperator: '<S10>/Compare'
   *  RelationalOperator: '<S5>/Less Than'
   *  RelationalOperator: '<S5>/Less Than1'
   *  RelationalOperator: '<S7>/Compare'
   *  RelationalOperator: '<S8>/Compare'
   *  Sum: '<S5>/Plus'
   *  Switch: '<S3>/Switch'
   *  Switch: '<S5>/Switch1'
   */
  if ((!(*rtu_rThrottlePedal < 1.0)) || (!(*rty_MRegenLimited < 0.0))) {
    /* Switch: '<S3>/Switch' incorporates:
     *  Constant: '<S3>/Constant'
     *  Constant: '<S3>/Constant1'
     *  Constant: '<S9>/Constant'
     *  Logic: '<S3>/Logical Operator'
     *  RelationalOperator: '<S3>/Less Than'
     *  RelationalOperator: '<S3>/Less Than1'
     *  RelationalOperator: '<S9>/Compare'
     *  Sum: '<S3>/Minus'
     */
    if ((*rtu_PDischargeLimit > 35.0) && (*rtu_PActual > *rtu_PDischargeLimit -
         5.0) && (*rtu_rThrottlePedal > 85.0)) {
      *rty_MTotalRequested = *rtu_MPCDischargeRequested;
    } else {
      *rty_MTotalRequested = *rty_MDischargeLimited;
    }
  } else if ((*rtu_PRegenLimit < -35.0) && (*rtu_PActual < *rtu_PRegenLimit +
              5.0) && (*rtu_rRegenPaddle > 60.0)) {
    /* Switch: '<S5>/Switch1' incorporates:
     *  Switch: '<S3>/Switch'
     */
    *rty_MTotalRequested = *rtu_MPCRegenRequested;
  } else {
    *rty_MTotalRequested = *rty_MRegenLimited;
  }

  /* End of Switch: '<S6>/Switch1' */
}

/* Model initialize function */
void MTotalRequested_initialize(const char_T **rt_errorStatus,
  RT_MODEL_MTotalRequested_T *const MTotalRequested_M)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(MTotalRequested_M, rt_errorStatus);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
