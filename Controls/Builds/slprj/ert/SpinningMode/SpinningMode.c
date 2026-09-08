/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: SpinningMode.c
 *
 * Code generated for Simulink model 'SpinningMode'.
 *
 * Model version                  : 13.3
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Tue Sep  8 11:43:11 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "SpinningMode.h"
#include "rtwtypes.h"
#include <math.h>
#include "look1_binlxpw.h"
#include "SpinningMode_private.h"

/* Output and update for referenced model: 'SpinningMode' */
void SpinningMode(const real_T *rtu_rThrottlePedal, const boolean_T
                  *rtu_BSpinningModeOn, const boolean_T *rtu_BReadyToDrive,
                  const real_T *rtu_pBrakeMax, const real_T *rtu_nMotorRL, const
                  real_T *rtu_nMotorFL, const real_T *rtu_nMotorFR, const real_T
                  *rtu_nMotorRR, real_T *rty_MSpinningModeFL, real_T
                  *rty_MSpinningModeFR, real_T *rty_MSpinningModeRL, real_T
                  *rty_MSpinningModeRR, DW_SpinningMode_f_T *localDW)
{
  real_T rtb_Add1_idx_0;
  real_T rtb_Add1_idx_1;
  real_T rtb_Add1_idx_2;
  real_T rtb_Add1_idx_3;
  int32_T rtb_Switch1;
  boolean_T rtb_Switch3;

  /* Switch: '<S1>/Switch3' incorporates:
   *  CombinatorialLogic: '<S6>/Logic'
   *  Constant: '<S7>/Constant'
   *  Constant: '<S8>/Constant'
   *  Constant: '<S9>/Constant'
   *  Logic: '<S2>/OR1'
   *  Logic: '<S3>/Logical Operator'
   *  Memory: '<S5>/Memory1'
   *  Memory: '<S6>/Memory'
   *  RelationalOperator: '<S7>/Compare'
   *  RelationalOperator: '<S8>/Compare'
   *  RelationalOperator: '<S9>/Compare'
   */
  localDW->Memory_PreviousInput = rtCP_Logic_table[((((uint32_T)
    ((*rtu_rThrottlePedal > 90.0) && (*rtu_BSpinningModeOn) &&
     (*rtu_BReadyToDrive)) << 1) + (uint32_T)((localDW->Memory1_PreviousInput_d >
    5.0) || (*rtu_pBrakeMax > 1.0))) << 1) + localDW->Memory_PreviousInput];
  rtb_Switch3 = ((!(*rtu_pBrakeMax > 1.0)) && localDW->Memory_PreviousInput);

  /* Switch: '<S13>/Switch1' incorporates:
   *  Constant: '<S13>/Constant3'
   *  Constant: '<S13>/Constant7'
   */
  if (rtb_Switch3) {
    rtb_Switch1 = 5000;
  } else {
    rtb_Switch1 = 0;
  }

  /* End of Switch: '<S13>/Switch1' */

  /* Sum: '<S13>/Add1' */
  rtb_Add1_idx_0 = (real_T)rtb_Switch1 - *rtu_nMotorFL;
  rtb_Add1_idx_1 = (real_T)rtb_Switch1 - *rtu_nMotorFR;
  rtb_Add1_idx_2 = (real_T)rtb_Switch1 - *rtu_nMotorRL;
  rtb_Add1_idx_3 = (real_T)rtb_Switch1 - *rtu_nMotorRR;

  /* Sum: '<S11>/Add3' incorporates:
   *  Abs: '<S11>/Abs'
   *  Constant: '<S11>/Constant1'
   *  Constant: '<S11>/Constant2'
   *  Gain: '<S11>/Gain1'
   *  Memory: '<S11>/Memory1'
   *  Product: '<S11>/Multiply'
   *  RelationalOperator: '<S11>/GreaterThan'
   */
  localDW->Memory1_PreviousInput[0] += 0.01 * rtb_Add1_idx_0 * (real_T)(fabs
    (rtb_Add1_idx_0) < 3000.0) * 0.001;
  localDW->Memory1_PreviousInput[1] += 0.01 * rtb_Add1_idx_1 * (real_T)(fabs
    (rtb_Add1_idx_1) < 3000.0) * 0.001;
  localDW->Memory1_PreviousInput[2] += 0.01 * rtb_Add1_idx_2 * (real_T)(fabs
    (rtb_Add1_idx_2) < 3000.0) * 0.001;
  localDW->Memory1_PreviousInput[3] += 0.01 * rtb_Add1_idx_3 * (real_T)(fabs
    (rtb_Add1_idx_3) < 3000.0) * 0.001;

  /* Switch: '<S10>/Switch2' incorporates:
   *  Constant: '<S10>/Constant5'
   *  Constant: '<S10>/SpinTorque'
   *  Saturate: '<S11>/Saturation2'
   *  Saturate: '<S12>/Saturation1'
   *  Sum: '<S10>/Add2'
   */
  if (rtb_Switch3) {
    real_T tmp;
    real_T u0;

    /* Saturate: '<S12>/Saturation1' incorporates:
     *  Lookup_n-D: '<S12>/NSpinningModeKp'
     *  Product: '<S12>/Multiply1'
     */
    u0 = look1_binlxpw(rtb_Add1_idx_0, rtCP_NSpinningModeKp_bp01Data,
                       rtCP_NSpinningModeKp_tableData, 2U) * rtb_Add1_idx_0;
    if (u0 > 7.0) {
      u0 = 7.0;
    } else if (u0 < -7.0) {
      u0 = -7.0;
    }

    /* Saturate: '<S11>/Saturation2' incorporates:
     *  Product: '<S12>/Multiply1'
     */
    if (localDW->Memory1_PreviousInput[0] > 3.0) {
      tmp = 3.0;
    } else if (localDW->Memory1_PreviousInput[0] < -3.0) {
      tmp = -3.0;
    } else {
      tmp = localDW->Memory1_PreviousInput[0];
    }

    rtb_Add1_idx_0 = (u0 + 5.0) + tmp;

    /* Saturate: '<S12>/Saturation1' incorporates:
     *  Constant: '<S10>/SpinTorque'
     *  Lookup_n-D: '<S12>/NSpinningModeKp'
     *  Product: '<S12>/Multiply1'
     *  Saturate: '<S11>/Saturation2'
     *  Sum: '<S10>/Add2'
     */
    u0 = look1_binlxpw(rtb_Add1_idx_1, rtCP_NSpinningModeKp_bp01Data,
                       rtCP_NSpinningModeKp_tableData, 2U) * rtb_Add1_idx_1;
    if (u0 > 7.0) {
      u0 = 7.0;
    } else if (u0 < -7.0) {
      u0 = -7.0;
    }

    /* Saturate: '<S11>/Saturation2' incorporates:
     *  Product: '<S12>/Multiply1'
     */
    if (localDW->Memory1_PreviousInput[1] > 3.0) {
      tmp = 3.0;
    } else if (localDW->Memory1_PreviousInput[1] < -3.0) {
      tmp = -3.0;
    } else {
      tmp = localDW->Memory1_PreviousInput[1];
    }

    rtb_Add1_idx_1 = (u0 + 5.0) + tmp;

    /* Saturate: '<S12>/Saturation1' incorporates:
     *  Constant: '<S10>/SpinTorque'
     *  Lookup_n-D: '<S12>/NSpinningModeKp'
     *  Product: '<S12>/Multiply1'
     *  Saturate: '<S11>/Saturation2'
     *  Sum: '<S10>/Add2'
     */
    u0 = look1_binlxpw(rtb_Add1_idx_2, rtCP_NSpinningModeKp_bp01Data,
                       rtCP_NSpinningModeKp_tableData, 2U) * rtb_Add1_idx_2;
    if (u0 > 7.0) {
      u0 = 7.0;
    } else if (u0 < -7.0) {
      u0 = -7.0;
    }

    /* Saturate: '<S11>/Saturation2' incorporates:
     *  Product: '<S12>/Multiply1'
     */
    if (localDW->Memory1_PreviousInput[2] > 3.0) {
      tmp = 3.0;
    } else if (localDW->Memory1_PreviousInput[2] < -3.0) {
      tmp = -3.0;
    } else {
      tmp = localDW->Memory1_PreviousInput[2];
    }

    rtb_Add1_idx_2 = (u0 + 5.0) + tmp;

    /* Saturate: '<S12>/Saturation1' incorporates:
     *  Constant: '<S10>/SpinTorque'
     *  Lookup_n-D: '<S12>/NSpinningModeKp'
     *  Product: '<S12>/Multiply1'
     *  Saturate: '<S11>/Saturation2'
     *  Sum: '<S10>/Add2'
     */
    u0 = look1_binlxpw(rtb_Add1_idx_3, rtCP_NSpinningModeKp_bp01Data,
                       rtCP_NSpinningModeKp_tableData, 2U) * rtb_Add1_idx_3;
    if (u0 > 7.0) {
      u0 = 7.0;
    } else if (u0 < -7.0) {
      u0 = -7.0;
    }

    /* Saturate: '<S11>/Saturation2' incorporates:
     *  Product: '<S12>/Multiply1'
     */
    if (localDW->Memory1_PreviousInput[3] > 3.0) {
      tmp = 3.0;
    } else if (localDW->Memory1_PreviousInput[3] < -3.0) {
      tmp = -3.0;
    } else {
      tmp = localDW->Memory1_PreviousInput[3];
    }

    rtb_Add1_idx_3 = (u0 + 5.0) + tmp;
  } else {
    rtb_Add1_idx_0 = 0.0;
    rtb_Add1_idx_1 = 0.0;
    rtb_Add1_idx_2 = 0.0;
    rtb_Add1_idx_3 = 0.0;
  }

  /* End of Switch: '<S10>/Switch2' */

  /* Saturate: '<S10>/Saturation' */
  if (rtb_Add1_idx_0 < 0.0) {
    /* SignalConversion generated from: '<Root>/MSpinningModeFL' */
    *rty_MSpinningModeFL = 0.0;
  } else {
    /* SignalConversion generated from: '<Root>/MSpinningModeFL' */
    *rty_MSpinningModeFL = rtb_Add1_idx_0;
  }

  if (rtb_Add1_idx_1 < 0.0) {
    /* SignalConversion generated from: '<Root>/MSpinningModeFR' */
    *rty_MSpinningModeFR = 0.0;
  } else {
    /* SignalConversion generated from: '<Root>/MSpinningModeFR' */
    *rty_MSpinningModeFR = rtb_Add1_idx_1;
  }

  if (rtb_Add1_idx_2 < 0.0) {
    /* SignalConversion generated from: '<Root>/MSpinningModeRL' */
    *rty_MSpinningModeRL = 0.0;
  } else {
    /* SignalConversion generated from: '<Root>/MSpinningModeRL' */
    *rty_MSpinningModeRL = rtb_Add1_idx_2;
  }

  if (rtb_Add1_idx_3 < 0.0) {
    /* SignalConversion generated from: '<Root>/MSpinningModeRR' */
    *rty_MSpinningModeRR = 0.0;
  } else {
    /* SignalConversion generated from: '<Root>/MSpinningModeRR' */
    *rty_MSpinningModeRR = rtb_Add1_idx_3;
  }

  /* End of Saturate: '<S10>/Saturation' */

  /* Switch: '<S5>/Switch1' incorporates:
   *  Constant: '<S5>/Constant6'
   */
  if (!rtb_Switch3) {
    localDW->Memory1_PreviousInput_d = 0.0;
  }

  /* Update for Switch: '<S5>/Switch1' incorporates:
   *  Constant: '<S5>/Constant5'
   *  Memory: '<S5>/Memory1'
   *  Sum: '<S5>/Add1'
   */
  localDW->Memory1_PreviousInput_d += 0.001;
}

/* Model initialize function */
void SpinningMode_initialize(const char_T **rt_errorStatus,
  RT_MODEL_SpinningMode_T *const SpinningMode_M)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(SpinningMode_M, rt_errorStatus);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
