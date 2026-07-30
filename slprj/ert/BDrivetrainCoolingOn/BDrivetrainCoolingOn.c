/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: BDrivetrainCoolingOn.c
 *
 * Code generated for Simulink model 'BDrivetrainCoolingOn'.
 *
 * Model version                  : 13.2
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Thu Jul 30 16:42:08 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BDrivetrainCoolingOn.h"
#include "rtwtypes.h"
#include "BDrivetrainCoolingOn_private.h"

/* Output and update for referenced model: 'BDrivetrainCoolingOn' */
void BDrivetrainCoolingOn(const real_T *rtu_TCellMax, const real_T
  *rtu_TMotorMax, const boolean_T *rtu_BDrivetrainCoolingOn, const real_T
  *rtu_TInvMax, boolean_T *rty_BAccuFanOn, boolean_T *rty_BMotorRBHFanOn,
  boolean_T *rty_BInverterFanOn)
{
  /* Logic: '<Root>/OR' incorporates:
   *  Constant: '<S1>/Constant'
   *  RelationalOperator: '<S1>/Compare'
   */
  *rty_BAccuFanOn = ((*rtu_TCellMax > 25.0) || (*rtu_BDrivetrainCoolingOn));

  /* Logic: '<Root>/OR1' incorporates:
   *  Constant: '<S2>/Constant'
   *  RelationalOperator: '<S2>/Compare'
   */
  *rty_BMotorRBHFanOn = ((*rtu_TMotorMax > 25.0) || (*rtu_BDrivetrainCoolingOn));

  /* Logic: '<Root>/OR2' incorporates:
   *  Constant: '<S3>/Constant'
   *  RelationalOperator: '<S3>/Compare'
   */
  *rty_BInverterFanOn = ((*rtu_TInvMax > 25.0) || (*rtu_BDrivetrainCoolingOn));
}

/* Model initialize function */
void BDrivetrainCoolingOn_initialize(const char_T **rt_errorStatus,
  RT_MODEL_BDrivetrainCoolingOn_T *const BDrivetrainCoolingOn_M)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(BDrivetrainCoolingOn_M, rt_errorStatus);

  /* user code (Initialize function Body) */
  LL_TIM_EnableCounter(TIM2);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
