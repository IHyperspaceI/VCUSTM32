/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: BIMUOk.c
 *
 * Code generated for Simulink model 'BIMUOk'.
 *
 * Model version                  : 13.2
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Thu Jul 30 16:42:16 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BIMUOk.h"
#include "rtwtypes.h"
#include "BIMUOk_private.h"

/* Output and update for referenced model: 'BIMUOk' */
void BIMUOk(const real_T *rtu_gLongitudinalIMU, const real_T *rtu_gLateralIMU,
            const real_T *rtu_nYawRateIMU, const real_T *rtu_gVerticalIMU,
            boolean_T *rty_BIMUError, boolean_T *rty_BIMUOK, real_T
            *rty_tIMUError, DW_BIMUOk_f_T *localDW)
{
  real_T tmp;

  /* Memory: '<Root>/Memory1' */
  *rty_tIMUError = localDW->Memory1_PreviousInput;

  /* RelationalOperator: '<S1>/Compare' incorporates:
   *  Constant: '<S1>/Constant'
   */
  *rty_BIMUOK = (*rty_tIMUError < 0.5);

  /* Logic: '<Root>/Logical Operator' incorporates:
   *  Constant: '<S10>/Constant'
   *  Constant: '<S11>/Constant'
   *  Constant: '<S12>/Constant'
   *  Constant: '<S13>/Constant'
   *  Constant: '<S6>/Constant'
   *  Constant: '<S7>/Constant'
   *  Constant: '<S8>/Constant'
   *  Constant: '<S9>/Constant'
   *  Logic: '<S2>/Logical Operator'
   *  Logic: '<S3>/Logical Operator'
   *  Logic: '<S4>/Logical Operator'
   *  Logic: '<S5>/Logical Operator'
   *  RelationalOperator: '<S10>/Compare'
   *  RelationalOperator: '<S11>/Compare'
   *  RelationalOperator: '<S12>/Compare'
   *  RelationalOperator: '<S13>/Compare'
   *  RelationalOperator: '<S6>/Compare'
   *  RelationalOperator: '<S7>/Compare'
   *  RelationalOperator: '<S8>/Compare'
   *  RelationalOperator: '<S9>/Compare'
   */
  *rty_BIMUError = ((!(*rtu_gLongitudinalIMU < 17.658)) ||
                    (!(*rtu_gLongitudinalIMU > -21.582)) || ((!(*rtu_gLateralIMU
    < 21.582)) || (!(*rtu_gLateralIMU > -21.582))) || ((!(*rtu_nYawRateIMU <
    790.0)) || (!(*rtu_nYawRateIMU > -790.0))) || ((!(*rtu_gVerticalIMU < -3.67))
    || (!(*rtu_gVerticalIMU > -20.59))));

  /* Switch: '<Root>/Switch1' incorporates:
   *  Constant: '<Root>/Constant6'
   */
  if (*rty_BIMUError) {
    tmp = *rty_tIMUError;
  } else {
    tmp = 0.0;
  }

  /* Update for Memory: '<Root>/Memory1' incorporates:
   *  Constant: '<Root>/Constant5'
   *  Sum: '<Root>/Add1'
   *  Switch: '<Root>/Switch1'
   */
  localDW->Memory1_PreviousInput = tmp + 0.001;
}

/* Model initialize function */
void BIMUOk_initialize(const char_T **rt_errorStatus, RT_MODEL_BIMUOk_T *const
  BIMUOk_M)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(BIMUOk_M, rt_errorStatus);

  /* user code (Initialize function Body) */
  LL_TIM_EnableCounter(TIM2);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
