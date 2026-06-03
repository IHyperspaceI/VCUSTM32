/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: BAppsOK.c
 *
 * Code generated for Simulink model 'BAppsOK'.
 *
 * Model version                  : 13.5
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Wed Jun  3 14:54:14 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BAppsOK.h"
#include "rtwtypes.h"
#include "BAppsOK_private.h"

/* Named constants for Chart: '<Root>/BAppsOK System' */
#define BAppsOK_IN_Entrance            ((uint8_T)1U)
#define BAppsOK_IN_Reset               ((uint8_T)2U)

/* Output and update for referenced model: 'BAppsOK' */
void BAppsOK(const real_T *rtu_rThrottlePedal, const real_T *rtu_pBrakeMax,
             boolean_T *rty_BAppsOK, real_T *rty_tAppsTimer, DW_BAppsOK_f_T
             *localDW)
{
  real_T tmp;
  int32_T rtb_BAppsOK;

  /* Memory: '<S3>/Memory1' */
  *rty_tAppsTimer = localDW->Memory1_PreviousInput;

  /* Chart: '<Root>/BAppsOK System' */
  if (localDW->is_active_c3_BAppsOK == 0) {
    localDW->is_active_c3_BAppsOK = 1U;
    localDW->is_c3_BAppsOK = BAppsOK_IN_Entrance;
    rtb_BAppsOK = 1;
  } else if (localDW->is_c3_BAppsOK == BAppsOK_IN_Entrance) {
    if (*rty_tAppsTimer > 0.5) {
      localDW->is_c3_BAppsOK = BAppsOK_IN_Reset;
      rtb_BAppsOK = 0;
    } else {
      rtb_BAppsOK = 1;
    }

    /* case IN_Reset: */
  } else if (*rtu_rThrottlePedal < 6.25) {
    localDW->is_c3_BAppsOK = BAppsOK_IN_Entrance;
    rtb_BAppsOK = 1;
  } else {
    rtb_BAppsOK = 0;
  }

  /* End of Chart: '<Root>/BAppsOK System' */

  /* DataTypeConversion: '<Root>/Data Type Conversion2' */
  *rty_BAppsOK = (rtb_BAppsOK != 0);

  /* Switch: '<S3>/Switch' incorporates:
   *  Constant: '<S3>/Constant6'
   *  Constant: '<S4>/Constant'
   *  Constant: '<S5>/Constant'
   *  Logic: '<S1>/Logical Operator'
   *  RelationalOperator: '<S4>/Compare'
   *  RelationalOperator: '<S5>/Compare'
   */
  if ((*rtu_pBrakeMax > 10.0) && (*rtu_rThrottlePedal > 6.25)) {
    tmp = *rty_tAppsTimer;
  } else {
    tmp = 0.0;
  }

  /* Update for Memory: '<S3>/Memory1' incorporates:
   *  Constant: '<S3>/Constant5'
   *  Sum: '<S3>/Add1'
   *  Switch: '<S3>/Switch'
   */
  localDW->Memory1_PreviousInput = tmp + 0.001;
}

/* Model initialize function */
void BAppsOK_initialize(const char_T **rt_errorStatus, RT_MODEL_BAppsOK_T *const
  BAppsOK_M)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(BAppsOK_M, rt_errorStatus);

  /* user code (Initialize function Body) */
  LL_TIM_EnableCounter(TIM2);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
