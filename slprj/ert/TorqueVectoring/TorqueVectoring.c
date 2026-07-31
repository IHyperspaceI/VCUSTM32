/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: TorqueVectoring.c
 *
 * Code generated for Simulink model 'TorqueVectoring'.
 *
 * Model version                  : 13.2
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Fri Jul 31 17:37:13 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "TorqueVectoring.h"
#include "rtwtypes.h"
#include <math.h>
#include "TorqueVectoring_private.h"
#include "look1_binlxpw.h"

/* Named constants for Chart: '<S1>/BTVOk System' */
#define TorqueVectoring_IN_StartTV1    ((uint8_T)1U)
#define TorqueVectoring_IN_StopTV      ((uint8_T)2U)

/* Output and update for referenced model: 'TorqueVectoring' */
void TorqueVectoring(const real_T *rtu_gLongitudinalIMU, const real_T
                     *rtu_aSteeringAngle, const real_T *rtu_vChassis, const
                     real_T *rtu_pBrakeMax, const real_T *rtu_rThrottlePedal,
                     const boolean_T *rtu_BTVOn, const real_T
                     *rtu_MTotalRequested, const real_T *rtu_rTVMultiplier,
                     const real_T *rtu_nYawRateIMU, const real_T
                     *rtu_FLongitudinalLoadTransfer, const real_T
                     *rtu_MMotorMaxFL, const real_T *rtu_MMotorMaxFR, const
                     real_T *rtu_MMotorMaxRL, const real_T *rtu_MMotorMaxRR,
                     real_T *rty_nYawRateErrorActual, boolean_T *rty_BTVOk,
                     real_T *rty_MTorqueVectoringFL, real_T
                     *rty_MTorqueVectoringFR, real_T *rty_MTorqueVectoringRL,
                     real_T *rty_MTorqueVectoringRR, DW_TorqueVectoring_f_T
                     *localDW)
{
  real_T rtb_Add;
  real_T rtb_Add1;
  real_T rtb_Add1_k;
  real_T rtb_Multiply1_b_idx_0;
  real_T rtb_Multiply1_b_idx_1;
  real_T rtb_NmtoConversion;
  real_T rtb_rTorqueSplitRear;

  /* Sum: '<S37>/Add' */
  rtb_Add = TorqueVectoring_ConstB.Add2 - *rtu_FLongitudinalLoadTransfer;

  /* Sum: '<S37>/Add1' */
  rtb_Add1 = *rtu_FLongitudinalLoadTransfer + TorqueVectoring_ConstB.Add3;

  /* MATLAB Function: '<S38>/Torque Longitudinal Distribution' */
  rtb_Multiply1_b_idx_1 = rtb_Add + rtb_Add1;
  rtb_Add /= rtb_Multiply1_b_idx_1;
  rtb_rTorqueSplitRear = rtb_Add1 / rtb_Multiply1_b_idx_1;

  /* Sum: '<S30>/Subtract' incorporates:
   *  Constant: '<S28>/WB'
   *  Gain: '<S28>/Degs to rads converison'
   *  Gain: '<S28>/rads//s to degs//s conversion'
   *  Lookup_n-D: '<S28>/Corner Bias'
   *  Product: '<S28>/Divide'
   *  Product: '<S28>/Multiply'
   *  Product: '<S28>/Multiply1'
   *  Trigonometry: '<S28>/Tan'
   */
  *rty_nYawRateErrorActual = tan(0.017453292519943295 * *rtu_aSteeringAngle) *
    *rtu_vChassis / 1.535 * 57.295779513082323 * look1_binlxpw(*rtu_vChassis,
    rtCP_CornerBias_bp01Data, rtCP_CornerBias_tableData, 6U) - *rtu_nYawRateIMU;

  /* Logic: '<S1>/Logical Operator' incorporates:
   *  Constant: '<S10>/Constant'
   *  Constant: '<S11>/Constant'
   *  Constant: '<S12>/Constant'
   *  Constant: '<S13>/Constant'
   *  Constant: '<S16>/Constant'
   *  Constant: '<S17>/Constant'
   *  Constant: '<S18>/Constant'
   *  Constant: '<S19>/Constant'
   *  Logic: '<S14>/Logical Operator'
   *  Logic: '<S15>/Logical Operator'
   *  Logic: '<S5>/Logical Operator'
   *  Logic: '<S6>/Logical Operator'
   *  Logic: '<S8>/Logical Operator1'
   *  Logic: '<S9>/Logical Operator1'
   *  RelationalOperator: '<S10>/Compare'
   *  RelationalOperator: '<S11>/Compare'
   *  RelationalOperator: '<S12>/Compare'
   *  RelationalOperator: '<S13>/Compare'
   *  RelationalOperator: '<S16>/Compare'
   *  RelationalOperator: '<S17>/Compare'
   *  RelationalOperator: '<S18>/Compare'
   *  RelationalOperator: '<S19>/Compare'
   */
  *rty_BTVOk = ((*rtu_vChassis < 31.0) && (*rtu_vChassis > -2.0) &&
                ((*rtu_aSteeringAngle > -29.0) && (*rtu_aSteeringAngle < 29.0)) &&
                (((!(*rtu_pBrakeMax > 10.0)) || (!(*rtu_gLongitudinalIMU > 5.0)))
                 && ((!(*rtu_rThrottlePedal > 80.0)) || (!(*rtu_gLongitudinalIMU
    < -5.0)))));

  /* Switch: '<S29>/Switch' incorporates:
   *  Abs: '<S29>/Abs'
   *  Abs: '<S29>/Abs1'
   *  Constant: '<S29>/Constant3'
   *  Constant: '<S31>/Constant'
   *  Constant: '<S32>/Constant'
   *  Constant: '<S33>/Constant'
   *  Constant: '<S34>/Constant'
   *  Constant: '<S35>/Constant'
   *  Constant: '<S36>/Constant'
   *  Logic: '<S29>/AND'
   *  Logic: '<S29>/Logical Operator'
   *  Logic: '<S29>/Logical Operator1'
   *  Logic: '<S29>/Logical Operator2'
   *  Logic: '<S29>/Logical Operator3'
   *  RelationalOperator: '<S31>/Compare'
   *  RelationalOperator: '<S32>/Compare'
   *  RelationalOperator: '<S33>/Compare'
   *  RelationalOperator: '<S34>/Compare'
   *  RelationalOperator: '<S35>/Compare'
   *  RelationalOperator: '<S36>/Compare'
   */
  if ((*rty_BTVOk) && (fabs(*rty_nYawRateErrorActual) >= 10.0) && (fabs
       (*rtu_nYawRateIMU) >= 15.0) && (((*rtu_aSteeringAngle > 0.0) &&
        (*rtu_nYawRateIMU > 0.0)) || ((*rtu_aSteeringAngle < 0.0) &&
        (*rtu_nYawRateIMU < 0.0)))) {
    rtb_Add1_k = *rty_nYawRateErrorActual;
  } else {
    rtb_Add1_k = 0.0;
  }

  /* Gain: '<S21>/Tyre Radius' incorporates:
   *  Gain: '<S21>/0.5 * Track width'
   *  Gain: '<S21>/Time to correct error'
   *  Gain: '<S21>/Tyre Radius1'
   *  Gain: '<S21>/Yaw Inertia'
   *  Gain: '<S21>/degs//s to rads//s conversion'
   *  Switch: '<S29>/Switch'
   */
  rtb_Add1 = 0.017453292519943295 * rtb_Add1_k * 3.3333333333333335 * 148.66 *
    1.6129032258064517 * 0.064304546331425627 * 0.203;

  /* Saturate: '<S21>/Saturation3' */
  if (rtb_Add1 > 80.0) {
    rtb_Add1 = 80.0;
  } else if (rtb_Add1 < -80.0) {
    rtb_Add1 = -80.0;
  }

  /* End of Saturate: '<S21>/Saturation3' */

  /* Product: '<S22>/Multiply1' incorporates:
   *  Gain: '<S22>/Gain'
   *  Gain: '<S22>/Gain1'
   */
  rtb_Multiply1_b_idx_0 = 0.5 * rtb_Add * rtb_Add1 * *rtu_rTVMultiplier;
  rtb_Multiply1_b_idx_1 = 0.5 * rtb_rTorqueSplitRear * rtb_Add1 *
    *rtu_rTVMultiplier;

  /* Gain: '<Root>/% to Nm Conversion' */
  rtb_Add1 = 0.098 * *rtu_MTotalRequested;

  /* Switch: '<S39>/Switch' */
  if (rtb_Add1 > 0.0) {
    rtb_Add1_k = rtb_Add;
  } else {
    rtb_Add1_k = rtb_rTorqueSplitRear;
  }

  /* Gain: '<S39>/Gain' incorporates:
   *  Product: '<S39>/Multiply'
   *  Switch: '<S39>/Switch'
   */
  rtb_Add1_k = rtb_Add1_k * rtb_Add1 * 0.5;

  /* Gain: '<S20>/Nm to % Conversion' incorporates:
   *  Sum: '<S20>/Add4'
   */
  rtb_NmtoConversion = (rtb_Add1_k - rtb_Multiply1_b_idx_0) * 10.204081632653061;

  /* Switch: '<S26>/Switch2' incorporates:
   *  Constant: '<S20>/Constant3'
   *  RelationalOperator: '<S26>/LowerRelop1'
   *  RelationalOperator: '<S26>/UpperRelop'
   *  Switch: '<S26>/Switch'
   */
  if (rtb_NmtoConversion > *rtu_MMotorMaxFL) {
    *rty_MTorqueVectoringFL = *rtu_MMotorMaxFL;
  } else if (rtb_NmtoConversion < -153.1) {
    /* Switch: '<S26>/Switch' incorporates:
     *  Constant: '<S20>/Constant3'
     */
    *rty_MTorqueVectoringFL = -153.1;
  } else {
    *rty_MTorqueVectoringFL = rtb_NmtoConversion;
  }

  /* End of Switch: '<S26>/Switch2' */

  /* Gain: '<S20>/Nm to % Conversion ' incorporates:
   *  Sum: '<S20>/Add5'
   */
  rtb_Multiply1_b_idx_0 = (rtb_Multiply1_b_idx_0 + rtb_Add1_k) *
    10.204081632653061;

  /* Switch: '<S24>/Switch2' incorporates:
   *  Constant: '<S20>/Constant2'
   *  RelationalOperator: '<S24>/LowerRelop1'
   *  RelationalOperator: '<S24>/UpperRelop'
   *  Switch: '<S24>/Switch'
   */
  if (rtb_Multiply1_b_idx_0 > *rtu_MMotorMaxFR) {
    *rty_MTorqueVectoringFR = *rtu_MMotorMaxFR;
  } else if (rtb_Multiply1_b_idx_0 < -153.1) {
    /* Switch: '<S24>/Switch' incorporates:
     *  Constant: '<S20>/Constant2'
     */
    *rty_MTorqueVectoringFR = -153.1;
  } else {
    *rty_MTorqueVectoringFR = rtb_Multiply1_b_idx_0;
  }

  /* End of Switch: '<S24>/Switch2' */

  /* Switch: '<S39>/Switch1' */
  if (rtb_Add1 > 0.0) {
    rtb_Add = rtb_rTorqueSplitRear;
  }

  /* Gain: '<S39>/Gain1' incorporates:
   *  Product: '<S39>/Multiply1'
   *  Switch: '<S39>/Switch1'
   */
  rtb_Add1 = rtb_Add1 * rtb_Add * 0.5;

  /* Gain: '<S20>/Nm to % Conversion  ' incorporates:
   *  Sum: '<S20>/Add1'
   */
  rtb_Add = (rtb_Add1 - rtb_Multiply1_b_idx_1) * 10.204081632653061;

  /* Switch: '<S25>/Switch2' incorporates:
   *  Constant: '<S20>/Constant1'
   *  RelationalOperator: '<S25>/LowerRelop1'
   *  RelationalOperator: '<S25>/UpperRelop'
   *  Switch: '<S25>/Switch'
   */
  if (rtb_Add > *rtu_MMotorMaxRL) {
    *rty_MTorqueVectoringRL = *rtu_MMotorMaxRL;
  } else if (rtb_Add < -153.1) {
    /* Switch: '<S25>/Switch' incorporates:
     *  Constant: '<S20>/Constant1'
     */
    *rty_MTorqueVectoringRL = -153.1;
  } else {
    *rty_MTorqueVectoringRL = rtb_Add;
  }

  /* End of Switch: '<S25>/Switch2' */

  /* Gain: '<S20>/Nm to % Conversion     ' incorporates:
   *  Sum: '<S20>/Add2'
   */
  rtb_Add = (rtb_Multiply1_b_idx_1 + rtb_Add1) * 10.204081632653061;

  /* Switch: '<S23>/Switch2' incorporates:
   *  Constant: '<S20>/Constant'
   *  RelationalOperator: '<S23>/LowerRelop1'
   *  RelationalOperator: '<S23>/UpperRelop'
   *  Switch: '<S23>/Switch'
   */
  if (rtb_Add > *rtu_MMotorMaxRR) {
    *rty_MTorqueVectoringRR = *rtu_MMotorMaxRR;
  } else if (rtb_Add < -153.1) {
    /* Switch: '<S23>/Switch' incorporates:
     *  Constant: '<S20>/Constant'
     */
    *rty_MTorqueVectoringRR = -153.1;
  } else {
    *rty_MTorqueVectoringRR = rtb_Add;
  }

  /* End of Switch: '<S23>/Switch2' */

  /* Chart: '<S1>/BTVOk System' */
  if (localDW->is_active_c1_TorqueVectoring == 0) {
    localDW->is_active_c1_TorqueVectoring = 1U;
    localDW->is_c1_TorqueVectoring = TorqueVectoring_IN_StartTV1;
  } else if (localDW->is_c1_TorqueVectoring == TorqueVectoring_IN_StartTV1) {
    localDW->is_c1_TorqueVectoring = TorqueVectoring_IN_StopTV;

    /* case IN_StopTV: */
  } else if ((real_T)*rtu_BTVOn < 0.5) {
    localDW->is_c1_TorqueVectoring = TorqueVectoring_IN_StartTV1;
  }

  /* End of Chart: '<S1>/BTVOk System' */
}

/* Model initialize function */
void TorqueVectoring_initialize(const char_T **rt_errorStatus,
  RT_MODEL_TorqueVectoring_T *const TorqueVectoring_M)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(TorqueVectoring_M, rt_errorStatus);

  /* user code (Initialize function Body) */
  LL_TIM_EnableCounter(TIM2);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
