/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: SpinningMode.c
 *
 * Code generated for Simulink model 'SpinningMode'.
 *
 * Model version                  : 13.5
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Tue Jun  2 18:48:14 2026
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
                  *rtu_BSpinningModelActivated, const boolean_T
                  *rtu_BReadyToDrive, const real_T *rtu_pBrakeMax, const real_T *
                  rtu_nMotorRL, const real_T *rtu_nMotorFL, const real_T
                  *rtu_nMotorFR, const real_T *rtu_nMotorRR, real_T
                  *rty_MSpinningModelFL, real_T *rty_MSpinningModelFR, real_T
                  *rty_MSpinningModelRL, real_T *rty_MSpinningModelRR,
                  DW_SpinningMode_f_T *localDW)
{
  real_T rtb_Add1;
  real_T tmp_0;
  int32_T tmp;
  boolean_T rtb_Switch3;

  /* Switch: '<S1>/Switch3' incorporates:
   *  CombinatorialLogic: '<S9>/Logic'
   *  Constant: '<S10>/Constant'
   *  Constant: '<S11>/Constant'
   *  Constant: '<S12>/Constant'
   *  Logic: '<S2>/OR1'
   *  Logic: '<S3>/Logical Operator'
   *  Memory: '<S8>/Memory1'
   *  Memory: '<S9>/Memory'
   *  RelationalOperator: '<S10>/Compare'
   *  RelationalOperator: '<S11>/Compare'
   *  RelationalOperator: '<S12>/Compare'
   */
  localDW->Memory_PreviousInput = rtCP_Logic_table[((((uint32_T)
    ((*rtu_rThrottlePedal > 90.0) && (*rtu_BSpinningModelActivated) &&
     (*rtu_BReadyToDrive)) << 1) + (uint32_T)((localDW->Memory1_PreviousInput >
    5.0) || (*rtu_pBrakeMax > 1.0))) << 1) + localDW->Memory_PreviousInput];
  rtb_Switch3 = ((!(*rtu_pBrakeMax > 1.0)) && localDW->Memory_PreviousInput);

  /* Switch: '<S16>/Switch1' incorporates:
   *  Constant: '<S16>/Constant3'
   *  Constant: '<S16>/Constant7'
   */
  if (rtb_Switch3) {
    tmp = 2000;
  } else {
    tmp = 0;
  }

  /* Sum: '<S16>/Add1' incorporates:
   *  Switch: '<S16>/Switch1'
   */
  rtb_Add1 = (real_T)tmp - *rtu_nMotorFL;

  /* Sum: '<S14>/Add3' incorporates:
   *  Abs: '<S14>/Abs'
   *  Constant: '<S14>/Constant1'
   *  Constant: '<S14>/Constant2'
   *  Gain: '<S14>/Gain1'
   *  Memory: '<S14>/Memory1'
   *  Product: '<S14>/Multiply'
   *  RelationalOperator: '<S14>/GreaterThan'
   */
  localDW->Memory1_PreviousInput_p += 0.05 * rtb_Add1 * (real_T)(fabs(rtb_Add1) <
    1000.0) * 0.001;

  /* Switch: '<S13>/Switch2' incorporates:
   *  Constant: '<S13>/Constant5'
   *  Constant: '<S13>/SpinTorque'
   *  Constant: '<S20>/Constant3'
   *  Constant: '<S20>/Constant7'
   *  Saturate: '<S14>/Saturation2'
   *  Saturate: '<S15>/Saturation1'
   *  Sum: '<S13>/Add2'
   *  Switch: '<S20>/Switch1'
   */
  if (rtb_Switch3) {
    /* Product: '<S15>/Multiply1' incorporates:
     *  Lookup_n-D: '<S15>/NSpinningModelKp'
     *  Sum: '<S16>/Add1'
     */
    rtb_Add1 *= look1_binlxpw(rtb_Add1, rtCP_NSpinningModelKp_bp01Data,
      rtCP_NSpinningModelKp_tableData, 2U);

    /* Saturate: '<S15>/Saturation1' */
    if (rtb_Add1 > 5.0) {
      rtb_Add1 = 5.0;
    } else if (rtb_Add1 < -5.0) {
      rtb_Add1 = -5.0;
    }

    /* Saturate: '<S14>/Saturation2' */
    if (localDW->Memory1_PreviousInput_p > 3.0) {
      tmp_0 = 3.0;
    } else if (localDW->Memory1_PreviousInput_p < -3.0) {
      tmp_0 = -3.0;
    } else {
      tmp_0 = localDW->Memory1_PreviousInput_p;
    }

    rtb_Add1 = (rtb_Add1 + 5.0) + tmp_0;
    tmp = 2000;
  } else {
    rtb_Add1 = 0.0;
    tmp = 0;
  }

  /* End of Switch: '<S13>/Switch2' */

  /* Saturate: '<S13>/Saturation' */
  if (rtb_Add1 < 0.0) {
    *rty_MSpinningModelFL = 0.0;
  } else {
    *rty_MSpinningModelFL = rtb_Add1;
  }

  /* End of Saturate: '<S13>/Saturation' */

  /* Sum: '<S20>/Add1' incorporates:
   *  Switch: '<S20>/Switch1'
   */
  rtb_Add1 = (real_T)tmp - *rtu_nMotorFR;

  /* Sum: '<S18>/Add3' incorporates:
   *  Abs: '<S18>/Abs'
   *  Constant: '<S18>/Constant1'
   *  Constant: '<S18>/Constant2'
   *  Gain: '<S18>/Gain1'
   *  Memory: '<S18>/Memory1'
   *  Product: '<S18>/Multiply'
   *  RelationalOperator: '<S18>/GreaterThan'
   */
  localDW->Memory1_PreviousInput_n += 0.05 * rtb_Add1 * (real_T)(fabs(rtb_Add1) <
    1000.0) * 0.001;

  /* Switch: '<S17>/Switch2' incorporates:
   *  Constant: '<S17>/Constant5'
   *  Constant: '<S17>/SpinTorque'
   *  Constant: '<S24>/Constant3'
   *  Constant: '<S24>/Constant7'
   *  Saturate: '<S18>/Saturation2'
   *  Saturate: '<S19>/Saturation1'
   *  Sum: '<S17>/Add2'
   *  Switch: '<S24>/Switch1'
   */
  if (rtb_Switch3) {
    /* Product: '<S19>/Multiply1' incorporates:
     *  Lookup_n-D: '<S19>/NSpinningModelKp'
     *  Sum: '<S20>/Add1'
     */
    rtb_Add1 *= look1_binlxpw(rtb_Add1, rtCP_NSpinningModelKp_bp01Data_,
      rtCP_NSpinningModelKp_tableDa_i, 2U);

    /* Saturate: '<S19>/Saturation1' */
    if (rtb_Add1 > 5.0) {
      rtb_Add1 = 5.0;
    } else if (rtb_Add1 < -5.0) {
      rtb_Add1 = -5.0;
    }

    /* Saturate: '<S18>/Saturation2' */
    if (localDW->Memory1_PreviousInput_n > 3.0) {
      tmp_0 = 3.0;
    } else if (localDW->Memory1_PreviousInput_n < -3.0) {
      tmp_0 = -3.0;
    } else {
      tmp_0 = localDW->Memory1_PreviousInput_n;
    }

    rtb_Add1 = (rtb_Add1 + 5.0) + tmp_0;
    tmp = 2000;
  } else {
    rtb_Add1 = 0.0;
    tmp = 0;
  }

  /* End of Switch: '<S17>/Switch2' */

  /* Saturate: '<S17>/Saturation' */
  if (rtb_Add1 < 0.0) {
    *rty_MSpinningModelFR = 0.0;
  } else {
    *rty_MSpinningModelFR = rtb_Add1;
  }

  /* End of Saturate: '<S17>/Saturation' */

  /* Sum: '<S24>/Add1' incorporates:
   *  Switch: '<S24>/Switch1'
   */
  rtb_Add1 = (real_T)tmp - *rtu_nMotorRL;

  /* Sum: '<S22>/Add3' incorporates:
   *  Abs: '<S22>/Abs'
   *  Constant: '<S22>/Constant1'
   *  Constant: '<S22>/Constant2'
   *  Gain: '<S22>/Gain1'
   *  Memory: '<S22>/Memory1'
   *  Product: '<S22>/Multiply'
   *  RelationalOperator: '<S22>/GreaterThan'
   */
  localDW->Memory1_PreviousInput_g += 0.05 * rtb_Add1 * (real_T)(fabs(rtb_Add1) <
    1000.0) * 0.001;

  /* Switch: '<S21>/Switch2' incorporates:
   *  Constant: '<S21>/Constant5'
   *  Constant: '<S21>/SpinTorque'
   *  Constant: '<S28>/Constant3'
   *  Constant: '<S28>/Constant7'
   *  Saturate: '<S22>/Saturation2'
   *  Saturate: '<S23>/Saturation1'
   *  Sum: '<S21>/Add2'
   *  Switch: '<S28>/Switch1'
   */
  if (rtb_Switch3) {
    /* Product: '<S23>/Multiply1' incorporates:
     *  Lookup_n-D: '<S23>/NSpinningModelKp'
     *  Sum: '<S24>/Add1'
     */
    rtb_Add1 *= look1_binlxpw(rtb_Add1, rtCP_NSpinningModelKp_bp01Dat_l,
      rtCP_NSpinningModelKp_tableDa_n, 2U);

    /* Saturate: '<S23>/Saturation1' */
    if (rtb_Add1 > 5.0) {
      rtb_Add1 = 5.0;
    } else if (rtb_Add1 < -5.0) {
      rtb_Add1 = -5.0;
    }

    /* Saturate: '<S22>/Saturation2' */
    if (localDW->Memory1_PreviousInput_g > 3.0) {
      tmp_0 = 3.0;
    } else if (localDW->Memory1_PreviousInput_g < -3.0) {
      tmp_0 = -3.0;
    } else {
      tmp_0 = localDW->Memory1_PreviousInput_g;
    }

    rtb_Add1 = (rtb_Add1 + 5.0) + tmp_0;
    tmp = 2000;
  } else {
    rtb_Add1 = 0.0;
    tmp = 0;
  }

  /* End of Switch: '<S21>/Switch2' */

  /* Saturate: '<S21>/Saturation' */
  if (rtb_Add1 < 0.0) {
    *rty_MSpinningModelRL = 0.0;
  } else {
    *rty_MSpinningModelRL = rtb_Add1;
  }

  /* End of Saturate: '<S21>/Saturation' */

  /* Sum: '<S28>/Add1' incorporates:
   *  Switch: '<S28>/Switch1'
   */
  rtb_Add1 = (real_T)tmp - *rtu_nMotorRR;

  /* Sum: '<S26>/Add3' incorporates:
   *  Abs: '<S26>/Abs'
   *  Constant: '<S26>/Constant1'
   *  Constant: '<S26>/Constant2'
   *  Gain: '<S26>/Gain1'
   *  Memory: '<S26>/Memory1'
   *  Product: '<S26>/Multiply'
   *  RelationalOperator: '<S26>/GreaterThan'
   */
  localDW->Memory1_PreviousInput_k += 0.05 * rtb_Add1 * (real_T)(fabs(rtb_Add1) <
    1000.0) * 0.001;

  /* Switch: '<S25>/Switch2' incorporates:
   *  Constant: '<S25>/Constant5'
   *  Constant: '<S25>/SpinTorque'
   *  Constant: '<S8>/Constant6'
   *  Saturate: '<S26>/Saturation2'
   *  Saturate: '<S27>/Saturation1'
   *  Sum: '<S25>/Add2'
   *  Switch: '<S8>/Switch1'
   */
  if (rtb_Switch3) {
    /* Product: '<S27>/Multiply1' incorporates:
     *  Lookup_n-D: '<S27>/NSpinningModelKp'
     *  Sum: '<S28>/Add1'
     */
    rtb_Add1 *= look1_binlxpw(rtb_Add1, rtCP_NSpinningModelKp_bp01Dat_i,
      rtCP_NSpinningModelKp_tableD_nv, 2U);

    /* Saturate: '<S27>/Saturation1' */
    if (rtb_Add1 > 5.0) {
      rtb_Add1 = 5.0;
    } else if (rtb_Add1 < -5.0) {
      rtb_Add1 = -5.0;
    }

    /* Saturate: '<S26>/Saturation2' */
    if (localDW->Memory1_PreviousInput_k > 3.0) {
      tmp_0 = 3.0;
    } else if (localDW->Memory1_PreviousInput_k < -3.0) {
      tmp_0 = -3.0;
    } else {
      tmp_0 = localDW->Memory1_PreviousInput_k;
    }

    rtb_Add1 = (rtb_Add1 + 5.0) + tmp_0;
  } else {
    rtb_Add1 = 0.0;
    localDW->Memory1_PreviousInput = 0.0;
  }

  /* End of Switch: '<S25>/Switch2' */

  /* Saturate: '<S25>/Saturation' */
  if (rtb_Add1 < 0.0) {
    *rty_MSpinningModelRR = 0.0;
  } else {
    *rty_MSpinningModelRR = rtb_Add1;
  }

  /* End of Saturate: '<S25>/Saturation' */

  /* Update for Switch: '<S8>/Switch1' incorporates:
   *  Constant: '<S8>/Constant5'
   *  Memory: '<S8>/Memory1'
   *  Sum: '<S8>/Add1'
   */
  localDW->Memory1_PreviousInput += 0.001;
}

/* Model initialize function */
void SpinningMode_initialize(const char_T **rt_errorStatus,
  RT_MODEL_SpinningMode_T *const SpinningMode_M)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(SpinningMode_M, rt_errorStatus);

  /* user code (Initialize function Body) */
  LL_TIM_EnableCounter(TIM2);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
