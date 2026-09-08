/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: BInverterError.c
 *
 * Code generated for Simulink model 'BInverterError'.
 *
 * Model version                  : 13.3
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Tue Sep  8 11:40:10 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BInverterError.h"
#include "rtwtypes.h"
#include "BInverterError_private.h"

/* Output and update for referenced model: 'BInverterError' */
void BInverterError(const real_T *rtu_NInvFLDTC, const real_T *rtu_NInvFRDTC,
                    const real_T *rtu_NInvRLDTC, const real_T *rtu_NInvRRDTC,
                    boolean_T *rty_BInverterErrorRear, boolean_T
                    *rty_BInverterErrorFront)
{
  /* Logic: '<S2>/OR' incorporates:
   *  Constant: '<S10>/Constant'
   *  Constant: '<S7>/Constant'
   *  Constant: '<S8>/Constant'
   *  Constant: '<S9>/Constant'
   *  Logic: '<S2>/AND'
   *  Logic: '<S2>/AND1'
   *  RelationalOperator: '<S10>/Compare'
   *  RelationalOperator: '<S7>/Compare'
   *  RelationalOperator: '<S8>/Compare'
   *  RelationalOperator: '<S9>/Compare'
   */
  *rty_BInverterErrorRear = (((*rtu_NInvRLDTC > 0.0) && (*rtu_NInvRLDTC !=
    1049.0)) || ((*rtu_NInvRRDTC > 0.0) && (*rtu_NInvRRDTC != 1049.0)));

  /* Logic: '<S1>/OR1' incorporates:
   *  Constant: '<S3>/Constant'
   *  Constant: '<S4>/Constant'
   *  Constant: '<S5>/Constant'
   *  Constant: '<S6>/Constant'
   *  Logic: '<S1>/AND'
   *  Logic: '<S1>/AND1'
   *  RelationalOperator: '<S3>/Compare'
   *  RelationalOperator: '<S4>/Compare'
   *  RelationalOperator: '<S5>/Compare'
   *  RelationalOperator: '<S6>/Compare'
   */
  *rty_BInverterErrorFront = (((*rtu_NInvFLDTC > 0.0) && (*rtu_NInvFLDTC !=
    1049.0)) || ((*rtu_NInvFRDTC > 0.0) && (*rtu_NInvFRDTC != 1049.0)));
}

/* Model initialize function */
void BInverterError_initialize(const char_T **rt_errorStatus,
  RT_MODEL_BInverterError_T *const BInverterError_M)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(BInverterError_M, rt_errorStatus);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
