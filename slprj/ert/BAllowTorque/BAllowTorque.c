/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: BAllowTorque.c
 *
 * Code generated for Simulink model 'BAllowTorque'.
 *
 * Model version                  : 13.2
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Fri Jul 31 17:28:03 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BAllowTorque.h"
#include "rtwtypes.h"
#include <math.h>
#include "BAllowTorque_private.h"

/* Output and update for referenced model: 'BAllowTorque' */
void BAllowTorque(const boolean_T *rtu_BReadyToDrive, const boolean_T
                  *rtu_BBrakeOn, const boolean_T *rtu_BThrottleError, const
                  boolean_T *rtu_BBrakeError, const boolean_T *rtu_BAppsOK,
                  const real_T *rtu_nMotorFL, const real_T *rtu_nMotorFR, const
                  real_T *rtu_nMotorRL, const real_T *rtu_nMotorRR, const real_T
                  *rtu_IIVTS, const boolean_T *rtu_BRegenOn, boolean_T
                  *rty_BDischargeAllowed)
{
  /* Logic: '<Root>/OR' incorporates:
   *  Constant: '<S1>/Constant'
   *  Constant: '<S2>/Constant'
   *  MinMax: '<Root>/Max'
   *  RelationalOperator: '<S1>/Compare'
   *  RelationalOperator: '<S2>/Compare'
   */
  *rty_BDischargeAllowed = ((*rtu_BReadyToDrive) && (!*rtu_BBrakeOn) &&
    (!*rtu_BThrottleError) && (!*rtu_BBrakeError) && (!(fmax(fmax(fmax
    (*rtu_nMotorFL, *rtu_nMotorFR), *rtu_nMotorRL), *rtu_nMotorRR) > 22500.0)) &&
    (*rtu_BAppsOK) && (!(*rtu_IIVTS > 195.0)) && (!*rtu_BRegenOn));
}

/* Model initialize function */
void BAllowTorque_initialize(const char_T **rt_errorStatus,
  RT_MODEL_BAllowTorque_T *const BAllowTorque_M)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(BAllowTorque_M, rt_errorStatus);

  /* user code (Initialize function Body) */
  LL_TIM_EnableCounter(TIM2);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
