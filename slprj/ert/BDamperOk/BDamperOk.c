/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: BDamperOk.c
 *
 * Code generated for Simulink model 'BDamperOk'.
 *
 * Model version                  : 13.2
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Thu Jul 30 16:42:00 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BDamperOk.h"
#include "rtwtypes.h"
#include "BDamperOk_private.h"

/* Output and update for referenced model: 'BDamperOk' */
void BDamperOk(const real_T *rtu_VDamperPotentiometerFL, const real_T
               *rtu_VDamperPotentiometerFR, const real_T
               *rtu_VDamperPotentiometerRL, const real_T
               *rtu_VDamperPotentiometerRR, boolean_T *rty_BxDamperFLOk,
               boolean_T *rty_BxDamperFROk, boolean_T *rty_BxDamperRLOk,
               boolean_T *rty_BxDamperRROk, boolean_T *rty_BxDamperOk)
{
  /* Logic: '<Root>/OR' incorporates:
   *  Constant: '<S1>/Constant'
   *  Constant: '<S2>/Constant'
   *  RelationalOperator: '<S1>/Compare'
   *  RelationalOperator: '<S2>/Compare'
   */
  *rty_BxDamperFLOk = ((!(*rtu_VDamperPotentiometerFL < 0.0)) &&
                       (!(*rtu_VDamperPotentiometerFL > 4900.0)));

  /* Logic: '<Root>/OR1' incorporates:
   *  Constant: '<S3>/Constant'
   *  Constant: '<S4>/Constant'
   *  RelationalOperator: '<S3>/Compare'
   *  RelationalOperator: '<S4>/Compare'
   */
  *rty_BxDamperFROk = ((!(*rtu_VDamperPotentiometerFR < 0.0)) &&
                       (!(*rtu_VDamperPotentiometerFR > 4900.0)));

  /* Logic: '<Root>/OR2' incorporates:
   *  Constant: '<S5>/Constant'
   *  Constant: '<S6>/Constant'
   *  RelationalOperator: '<S5>/Compare'
   *  RelationalOperator: '<S6>/Compare'
   */
  *rty_BxDamperRLOk = ((!(*rtu_VDamperPotentiometerRL < 0.0)) &&
                       (!(*rtu_VDamperPotentiometerRL > 4900.0)));

  /* Logic: '<Root>/OR3' incorporates:
   *  Constant: '<S7>/Constant'
   *  Constant: '<S8>/Constant'
   *  RelationalOperator: '<S7>/Compare'
   *  RelationalOperator: '<S8>/Compare'
   */
  *rty_BxDamperRROk = ((!(*rtu_VDamperPotentiometerRR < 0.0)) &&
                       (!(*rtu_VDamperPotentiometerRR > 4900.0)));

  /* Logic: '<Root>/AND' */
  *rty_BxDamperOk = ((*rty_BxDamperFLOk) && (*rty_BxDamperFROk) &&
                     (*rty_BxDamperRLOk) && (*rty_BxDamperRROk));
}

/* Model initialize function */
void BDamperOk_initialize(const char_T **rt_errorStatus, RT_MODEL_BDamperOk_T *
  const BDamperOk_M)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(BDamperOk_M, rt_errorStatus);

  /* user code (Initialize function Body) */
  LL_TIM_EnableCounter(TIM2);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
