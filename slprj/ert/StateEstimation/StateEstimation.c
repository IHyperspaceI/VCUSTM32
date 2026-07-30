/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: StateEstimation.c
 *
 * Code generated for Simulink model 'StateEstimation'.
 *
 * Model version                  : 13.2
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Thu Jul 30 16:46:24 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "StateEstimation.h"
#include "rtwtypes.h"
#include <math.h>
#include "StateEstimation_private.h"

/* Output and update for referenced model: 'StateEstimation' */
void StateEstimation(const real_T *rtu_vChassis, const real_T *rtu_vWheelFL,
                     const real_T *rtu_vWheelFR, const real_T *rtu_vWheelRL,
                     const real_T *rtu_vWheelRR, const real_T *rtu_gLateralIMU,
                     const real_T *rtu_gLongitudinalIMU, const real_T
                     *rtu_vLateralIMU, const real_T *rtu_nYawRateIMU, const
                     real_T *rtu_aSteeringAngle, real_T *rty_rSlipRatioFLActual,
                     real_T *rty_rSlipRatioFRActual, real_T
                     *rty_rSlipRatioRLActual, real_T *rty_rSlipRatioRRActual,
                     real_T *rty_FLongitudinalLoadTransfer, real_T
                     *rty_FTyreVerticalFL, real_T *rty_FTyreVerticalFR, real_T
                     *rty_FTyreVerticalRL, real_T *rty_FTyreVerticalRR, real_T
                     *rty_aSlipAngleFL, real_T *rty_aSlipAngleFR, real_T
                     *rty_aSlipAngleRL, real_T *rty_aSlipAngleRR, real_T
                     *rty_aCamberFL, real_T *rty_aCamberFR, real_T
                     *rty_aCamberRL, real_T *rty_aCamberRR, real_T
                     *rty_FLateralLoadTransfer, real_T
                     *rty_FLateralLoadTransferF, real_T
                     *rty_FLateralLoadTransferR, real_T *rty_FTotalDownforce,
                     real_T *rty_FDownforceF, real_T *rty_FDownforceR, real_T
                     *rty_aCamberGainSteerFL, real_T *rty_aCamberGainSteerFR,
                     real_T *rty_xHeaveTravelF, real_T *rty_xHeaveTravelR,
                     real_T *rty_aCamberGainHeaveF, real_T
                     *rty_aCamberGainHeaveR, real_T *rty_aRollAngle)
{
  real_T rtb_Saturation5;
  real_T rtb_Switch_m_idx_0;
  real_T rtb_Switch_m_idx_1;
  real_T rtb_Switch_m_idx_2;

  /* Saturate: '<S8>/Saturation5' */
  if (*rtu_vChassis > 35.0) {
    rtb_Saturation5 = 35.0;
  } else if (*rtu_vChassis < 0.0) {
    rtb_Saturation5 = 0.0;
  } else {
    rtb_Saturation5 = *rtu_vChassis;
  }

  /* End of Saturate: '<S8>/Saturation5' */

  /* Switch: '<S8>/Switch' incorporates:
   *  Abs: '<S8>/Abs'
   *  Constant: '<S8>/Constant'
   *  Product: '<S8>/Divide3'
   *  Sum: '<S8>/Subtract4'
   */
  if (rtb_Saturation5 > 0.3) {
    rtb_Switch_m_idx_0 = (*rtu_vWheelFL - rtb_Saturation5) / rtb_Saturation5;
    rtb_Switch_m_idx_1 = (*rtu_vWheelFR - rtb_Saturation5) / rtb_Saturation5;
    rtb_Switch_m_idx_2 = (*rtu_vWheelRL - rtb_Saturation5) / rtb_Saturation5;
    rtb_Saturation5 = (*rtu_vWheelRR - rtb_Saturation5) / rtb_Saturation5;
  } else {
    rtb_Switch_m_idx_0 = 0.0;
    rtb_Switch_m_idx_1 = 0.0;
    rtb_Switch_m_idx_2 = 0.0;
    rtb_Saturation5 = 0.0;
  }

  /* End of Switch: '<S8>/Switch' */

  /* Saturate: '<S8>/Saturation1' */
  if (rtb_Switch_m_idx_1 > 1.0) {
    *rty_rSlipRatioFRActual = 1.0;
  } else if (rtb_Switch_m_idx_1 < -1.0) {
    *rty_rSlipRatioFRActual = -1.0;
  } else {
    *rty_rSlipRatioFRActual = rtb_Switch_m_idx_1;
  }

  /* End of Saturate: '<S8>/Saturation1' */

  /* Saturate: '<S8>/Saturation2' */
  if (rtb_Switch_m_idx_2 > 1.0) {
    *rty_rSlipRatioRLActual = 1.0;
  } else if (rtb_Switch_m_idx_2 < -1.0) {
    *rty_rSlipRatioRLActual = -1.0;
  } else {
    *rty_rSlipRatioRLActual = rtb_Switch_m_idx_2;
  }

  /* End of Saturate: '<S8>/Saturation2' */

  /* Saturate: '<S8>/Saturation3' */
  if (rtb_Switch_m_idx_0 > 1.0) {
    *rty_rSlipRatioFLActual = 1.0;
  } else if (rtb_Switch_m_idx_0 < -1.0) {
    *rty_rSlipRatioFLActual = -1.0;
  } else {
    *rty_rSlipRatioFLActual = rtb_Switch_m_idx_0;
  }

  /* End of Saturate: '<S8>/Saturation3' */

  /* Saturate: '<S8>/Saturation4' */
  if (rtb_Saturation5 > 1.0) {
    *rty_rSlipRatioRRActual = 1.0;
  } else if (rtb_Saturation5 < -1.0) {
    *rty_rSlipRatioRRActual = -1.0;
  } else {
    *rty_rSlipRatioRRActual = rtb_Saturation5;
  }

  /* End of Saturate: '<S8>/Saturation4' */

  /* Gain: '<S12>/CL' incorporates:
   *  Gain: '<S12>/ '
   *  Gain: '<S12>/Air Density'
   *  Gain: '<S12>/Frontal Area'
   *  Math: '<S12>/Square'
   */
  *rty_FTotalDownforce = *rtu_vChassis * *rtu_vChassis * 1.2 * 0.5 * 1.2 * 4.2;

  /* Gain: '<S10>/CoP' */
  *rty_FDownforceF = 0.45 * *rty_FTotalDownforce;

  /* Gain: '<S14>/1//Wheelbase' incorporates:
   *  Gain: '<S14>/CoG Height'
   *  Gain: '<S14>/Mass'
   */
  *rty_FLongitudinalLoadTransfer = 275.0 * *rtu_gLongitudinalIMU * 0.26 *
    0.65146579804560267;

  /* Product: '<S33>/Multiply' incorporates:
   *  Sum: '<S33>/Subtract'
   */
  rtb_Switch_m_idx_0 = (*rty_FDownforceF - *rty_FLongitudinalLoadTransfer) /
    StateEstimation_ConstB.Gain_h;

  /* Saturate: '<S33>/Saturation3' */
  if (rtb_Switch_m_idx_0 > 0.03) {
    *rty_xHeaveTravelF = 0.03;
  } else if (rtb_Switch_m_idx_0 < -0.03) {
    *rty_xHeaveTravelF = -0.03;
  } else {
    *rty_xHeaveTravelF = rtb_Switch_m_idx_0;
  }

  /* End of Saturate: '<S33>/Saturation3' */

  /* Gain: '<S10>/1 - pCoP ' */
  *rty_FDownforceR = 0.55 * *rty_FTotalDownforce;

  /* Product: '<S34>/Multiply' incorporates:
   *  Sum: '<S34>/Add'
   */
  rtb_Switch_m_idx_0 = (*rty_FDownforceR + *rty_FLongitudinalLoadTransfer) /
    StateEstimation_ConstB.Gain_ay;

  /* Saturate: '<S34>/Saturation3' */
  if (rtb_Switch_m_idx_0 > 0.03) {
    *rty_xHeaveTravelR = 0.03;
  } else if (rtb_Switch_m_idx_0 < -0.03) {
    *rty_xHeaveTravelR = -0.03;
  } else {
    *rty_xHeaveTravelR = rtb_Switch_m_idx_0;
  }

  /* End of Saturate: '<S34>/Saturation3' */

  /* Gain: '<S3>/Gain' incorporates:
   *  Constant: '<S3>/Constant'
   *  Constant: '<S3>/Constant1'
   *  Product: '<S3>/Divide'
   *  Trigonometry: '<S3>/Trigonometric Function'
   */
  rtb_Saturation5 = atan(*rty_xHeaveTravelF / 2.1) * 57.295779513082323;
  rtb_Switch_m_idx_2 = atan(*rty_xHeaveTravelR / 1.4) * 57.295779513082323;

  /* SignalConversion generated from: '<Root>/aCamberGainHeaveF' */
  *rty_aCamberGainHeaveF = rtb_Saturation5;

  /* SignalConversion generated from: '<Root>/aCamberGainHeaveR' */
  *rty_aCamberGainHeaveR = rtb_Switch_m_idx_2;

  /* Sum: '<S17>/Add' incorporates:
   *  Constant: '<S17>/Constant'
   *  Sum: '<S17>/Subtract'
   */
  rtb_Switch_m_idx_0 = (-1.3 - rtb_Switch_m_idx_2) +
    StateEstimation_ConstB.Saturation3[1];

  /* Saturate: '<S17>/Saturation3' */
  if (rtb_Switch_m_idx_0 > 7.0) {
    *rty_aCamberRL = 7.0;
  } else if (rtb_Switch_m_idx_0 < -7.0) {
    *rty_aCamberRL = -7.0;
  } else {
    *rty_aCamberRL = rtb_Switch_m_idx_0;
  }

  /* End of Saturate: '<S17>/Saturation3' */

  /* Sum: '<S18>/Subtract1' incorporates:
   *  Constant: '<S18>/Constant'
   *  Sum: '<S18>/Subtract'
   */
  rtb_Switch_m_idx_0 = (-1.3 - rtb_Switch_m_idx_2) -
    StateEstimation_ConstB.Saturation3[1];

  /* Saturate: '<S18>/Saturation3' */
  if (rtb_Switch_m_idx_0 > 7.0) {
    *rty_aCamberRR = 7.0;
  } else if (rtb_Switch_m_idx_0 < -7.0) {
    *rty_aCamberRR = -7.0;
  } else {
    *rty_aCamberRR = rtb_Switch_m_idx_0;
  }

  /* End of Saturate: '<S18>/Saturation3' */

  /* Switch: '<S31>/Switch' incorporates:
   *  Constant: '<S31>/Constant'
   *  Product: '<S31>/Divide'
   *  Product: '<S31>/Divide1'
   *  Product: '<S31>/Multiply'
   *  Product: '<S31>/Multiply1'
   */
  if (*rtu_aSteeringAngle > 0.0) {
    rtb_Switch_m_idx_1 = *rtu_aSteeringAngle * 200.0 /
      StateEstimation_ConstB.Subtract_d;
  } else {
    rtb_Switch_m_idx_1 = *rtu_aSteeringAngle * StateEstimation_ConstB.Subtract1 /
      StateEstimation_ConstB.Subtract2;
  }

  /* End of Switch: '<S31>/Switch' */

  /* Gain: '<S21>/Gain5' */
  rtb_Switch_m_idx_2 = 0.017453292519943295 * rtb_Switch_m_idx_1;

  /* Product: '<S21>/Multiply2' incorporates:
   *  Trigonometry: '<S21>/Trigonometric Function7'
   */
  rtb_Switch_m_idx_0 = StateEstimation_ConstB.TrigonometricFunction6 * cos
    (rtb_Switch_m_idx_2);

  /* Product: '<S21>/Multiply3' incorporates:
   *  Trigonometry: '<S21>/Trigonometric Function9'
   */
  rtb_Switch_m_idx_2 = sin(rtb_Switch_m_idx_2) * StateEstimation_ConstB.Gain8;

  /* Trigonometry: '<S21>/Trigonometric Function8' */
  if (rtb_Switch_m_idx_0 > 1.0) {
    rtb_Switch_m_idx_0 = 1.0;
  } else if (rtb_Switch_m_idx_0 < -1.0) {
    rtb_Switch_m_idx_0 = -1.0;
  }

  /* Trigonometry: '<S21>/Trigonometric Function11' */
  if (rtb_Switch_m_idx_2 > 1.0) {
    rtb_Switch_m_idx_2 = 1.0;
  } else if (rtb_Switch_m_idx_2 < -1.0) {
    rtb_Switch_m_idx_2 = -1.0;
  }

  /* Sum: '<S21>/Minus1' incorporates:
   *  Constant: '<S21>/Constant1'
   *  Gain: '<S21>/Gain7'
   *  Sum: '<S21>/Plus1'
   *  Trigonometry: '<S21>/Trigonometric Function11'
   *  Trigonometry: '<S21>/Trigonometric Function8'
   */
  rtb_Switch_m_idx_0 = ((StateEstimation_ConstB.Gain4 + acos(rtb_Switch_m_idx_0))
                        + acos(rtb_Switch_m_idx_2)) * 57.295779513082323 - 180.0;

  /* Saturate: '<S21>/Saturation3' */
  if (rtb_Switch_m_idx_0 > 5.0) {
    *rty_aCamberGainSteerFL = 5.0;
  } else if (rtb_Switch_m_idx_0 < -5.0) {
    *rty_aCamberGainSteerFL = -5.0;
  } else {
    *rty_aCamberGainSteerFL = rtb_Switch_m_idx_0;
  }

  /* End of Saturate: '<S21>/Saturation3' */

  /* Sum: '<S15>/Add1' incorporates:
   *  Sum: '<S15>/Add'
   *  Sum: '<S15>/Subtract'
   */
  rtb_Switch_m_idx_0 = ((*rty_aCamberGainSteerFL - 1.3) - rtb_Saturation5) +
    StateEstimation_ConstB.Saturation3[0];

  /* Saturate: '<S15>/Saturation3' */
  if (rtb_Switch_m_idx_0 > 7.0) {
    *rty_aCamberFL = 7.0;
  } else if (rtb_Switch_m_idx_0 < -7.0) {
    *rty_aCamberFL = -7.0;
  } else {
    *rty_aCamberFL = rtb_Switch_m_idx_0;
  }

  /* End of Saturate: '<S15>/Saturation3' */

  /* Switch: '<S23>/Switch' incorporates:
   *  Constant: '<S23>/Constant1'
   *  Constant: '<S27>/Constant'
   *  Gain: '<S23>/Gain'
   *  Gain: '<S23>/Gain3'
   *  Gain: '<S23>/Gain4'
   *  Gain: '<S23>/Gain5'
   *  Gain: '<S23>/a'
   *  Product: '<S23>/Divide'
   *  RelationalOperator: '<S27>/Compare'
   *  Sum: '<S23>/Add'
   *  Sum: '<S23>/Add1'
   *  Sum: '<S23>/Minus'
   *  Sum: '<S23>/Minus1'
   */
  if (*rtu_vChassis >= 2.0) {
    /* Gain: '<S23>/Gain1' incorporates:
     *  Gain: '<S23>/Gain2'
     */
    rtb_Switch_m_idx_0 = 0.017453292519943295 * -*rtu_nYawRateIMU;
    rtb_Switch_m_idx_2 = ((-*rtu_vLateralIMU - 0.79 * rtb_Switch_m_idx_0) /
                          (0.62 * rtb_Switch_m_idx_0 + *rtu_vChassis) -
                          (rtb_Switch_m_idx_1 - 1.0) * 0.017453292519943295) *
      57.295779513082323;
  } else {
    rtb_Switch_m_idx_2 = 0.0;
  }

  /* End of Switch: '<S23>/Switch' */

  /* Saturate: '<S23>/Saturation3' */
  if (rtb_Switch_m_idx_2 > 15.0) {
    *rty_aSlipAngleFL = 15.0;
  } else if (rtb_Switch_m_idx_2 < -15.0) {
    *rty_aSlipAngleFL = -15.0;
  } else {
    *rty_aSlipAngleFL = rtb_Switch_m_idx_2;
  }

  /* End of Saturate: '<S23>/Saturation3' */

  /* Switch: '<S32>/Switch' incorporates:
   *  Constant: '<S32>/Constant'
   *  Product: '<S32>/Divide'
   *  Product: '<S32>/Divide1'
   *  Product: '<S32>/Multiply'
   *  Product: '<S32>/Multiply1'
   */
  if (*rtu_aSteeringAngle > 0.0) {
    rtb_Switch_m_idx_1 = *rtu_aSteeringAngle *
      StateEstimation_ConstB.Subtract1_c / StateEstimation_ConstB.Subtract2_m;
  } else {
    rtb_Switch_m_idx_1 = *rtu_aSteeringAngle * 200.0 /
      StateEstimation_ConstB.Subtract_h;
  }

  /* End of Switch: '<S32>/Switch' */

  /* Gain: '<S22>/Gain1' */
  rtb_Switch_m_idx_2 = 0.017453292519943295 * rtb_Switch_m_idx_1;

  /* Product: '<S22>/Multiply' incorporates:
   *  Trigonometry: '<S22>/Trigonometric Function1'
   */
  rtb_Switch_m_idx_0 = StateEstimation_ConstB.TrigonometricFunction * cos
    (rtb_Switch_m_idx_2);

  /* Product: '<S22>/Multiply1' incorporates:
   *  Trigonometry: '<S22>/Trigonometric Function3'
   */
  rtb_Switch_m_idx_2 = sin(rtb_Switch_m_idx_2) *
    StateEstimation_ConstB.TrigonometricFunction4;

  /* Trigonometry: '<S22>/Trigonometric Function2' */
  if (rtb_Switch_m_idx_0 > 1.0) {
    rtb_Switch_m_idx_0 = 1.0;
  } else if (rtb_Switch_m_idx_0 < -1.0) {
    rtb_Switch_m_idx_0 = -1.0;
  }

  /* Trigonometry: '<S22>/Trigonometric Function5' */
  if (rtb_Switch_m_idx_2 > 1.0) {
    rtb_Switch_m_idx_2 = 1.0;
  } else if (rtb_Switch_m_idx_2 < -1.0) {
    rtb_Switch_m_idx_2 = -1.0;
  }

  /* Sum: '<S22>/Minus' incorporates:
   *  Constant: '<S22>/Constant'
   *  Gain: '<S22>/Gain3'
   *  Sum: '<S22>/Plus'
   *  Trigonometry: '<S22>/Trigonometric Function2'
   *  Trigonometry: '<S22>/Trigonometric Function5'
   */
  rtb_Switch_m_idx_0 = ((StateEstimation_ConstB.Gain_o + acos(rtb_Switch_m_idx_0))
                        + acos(rtb_Switch_m_idx_2)) * 57.295779513082323 - 180.0;

  /* Saturate: '<S22>/Saturation3' */
  if (rtb_Switch_m_idx_0 > 5.0) {
    *rty_aCamberGainSteerFR = 5.0;
  } else if (rtb_Switch_m_idx_0 < -5.0) {
    *rty_aCamberGainSteerFR = -5.0;
  } else {
    *rty_aCamberGainSteerFR = rtb_Switch_m_idx_0;
  }

  /* End of Saturate: '<S22>/Saturation3' */

  /* Sum: '<S16>/Subtract1' incorporates:
   *  Sum: '<S16>/Add'
   *  Sum: '<S16>/Subtract'
   */
  rtb_Switch_m_idx_0 = ((*rty_aCamberGainSteerFR - 1.3) - rtb_Saturation5) -
    StateEstimation_ConstB.Saturation3[0];

  /* Saturate: '<S16>/Saturation3' */
  if (rtb_Switch_m_idx_0 > 7.0) {
    *rty_aCamberFR = 7.0;
  } else if (rtb_Switch_m_idx_0 < -7.0) {
    *rty_aCamberFR = -7.0;
  } else {
    *rty_aCamberFR = rtb_Switch_m_idx_0;
  }

  /* End of Saturate: '<S16>/Saturation3' */

  /* Switch: '<S24>/Switch' incorporates:
   *  Constant: '<S24>/Constant1'
   *  Constant: '<S28>/Constant'
   *  Gain: '<S24>/Gain'
   *  Gain: '<S24>/Gain3'
   *  Gain: '<S24>/Gain4'
   *  Gain: '<S24>/Gain5'
   *  Gain: '<S24>/a'
   *  Product: '<S24>/Divide'
   *  RelationalOperator: '<S28>/Compare'
   *  Sum: '<S24>/Add1'
   *  Sum: '<S24>/Minus'
   *  Sum: '<S24>/Minus1'
   *  Sum: '<S24>/Minus2'
   */
  if (*rtu_vChassis >= 2.0) {
    /* Gain: '<S24>/Gain1' incorporates:
     *  Gain: '<S24>/Gain2'
     */
    rtb_Switch_m_idx_0 = 0.017453292519943295 * -*rtu_nYawRateIMU;
    rtb_Switch_m_idx_2 = ((-*rtu_vLateralIMU - 0.79 * rtb_Switch_m_idx_0) /
                          (*rtu_vChassis - 0.62 * rtb_Switch_m_idx_0) -
                          (rtb_Switch_m_idx_1 - 1.0) * 0.017453292519943295) *
      57.295779513082323;
  } else {
    rtb_Switch_m_idx_2 = 0.0;
  }

  /* End of Switch: '<S24>/Switch' */

  /* Saturate: '<S24>/Saturation1' */
  if (rtb_Switch_m_idx_2 > 15.0) {
    *rty_aSlipAngleFR = 15.0;
  } else if (rtb_Switch_m_idx_2 < -15.0) {
    *rty_aSlipAngleFR = -15.0;
  } else {
    *rty_aSlipAngleFR = rtb_Switch_m_idx_2;
  }

  /* End of Saturate: '<S24>/Saturation1' */

  /* Gain: '<S13>/     ' */
  rtb_Switch_m_idx_2 = 0.5 * *rty_FDownforceR;

  /* Gain: '<S13>/  ' incorporates:
   *  Gain: '<S13>/ '
   */
  rtb_Saturation5 = 0.5 * *rty_FLongitudinalLoadTransfer;

  /* Gain: '<S14>/1//Trackwidth' incorporates:
   *  Gain: '<S14>/CoG Height'
   *  Gain: '<S14>/Mass'
   */
  *rty_FLateralLoadTransfer = 275.0 * *rtu_gLateralIMU * 0.26 *
    0.80645161290322587;

  /* Gain: '<S11>/1-LLTD' */
  *rty_FLateralLoadTransferR = 0.52 * *rty_FLateralLoadTransfer;

  /* Sum: '<S13>/Plus2' incorporates:
   *  Constant: '<S13>/Constant2'
   *  Gain: '<S13>/  '
   *  Sum: '<S13>/Add1'
   *  Sum: '<S13>/Add2'
   */
  rtb_Switch_m_idx_0 = ((*rty_FLateralLoadTransferR + 962.5) + rtb_Saturation5)
    + rtb_Switch_m_idx_2;

  /* Saturate: '<S13>/Saturation2' */
  if (rtb_Switch_m_idx_0 > 2300.0) {
    *rty_FTyreVerticalRL = 2300.0;
  } else if (rtb_Switch_m_idx_0 < 0.0) {
    *rty_FTyreVerticalRL = 0.0;
  } else {
    *rty_FTyreVerticalRL = rtb_Switch_m_idx_0;
  }

  /* End of Saturate: '<S13>/Saturation2' */

  /* Sum: '<S13>/Plus3' incorporates:
   *  Constant: '<S13>/Constant3'
   *  Gain: '<S13>/  '
   *  Sum: '<S13>/Add3'
   *  Sum: '<S13>/Minus1'
   */
  rtb_Switch_m_idx_0 = ((962.5 - *rty_FLateralLoadTransferR) + rtb_Saturation5)
    + rtb_Switch_m_idx_2;

  /* Saturate: '<S13>/Saturation4' */
  if (rtb_Switch_m_idx_0 > 2300.0) {
    *rty_FTyreVerticalRR = 2300.0;
  } else if (rtb_Switch_m_idx_0 < 0.0) {
    *rty_FTyreVerticalRR = 0.0;
  } else {
    *rty_FTyreVerticalRR = rtb_Switch_m_idx_0;
  }

  /* End of Saturate: '<S13>/Saturation4' */

  /* Gain: '<S11>/LLTD' */
  *rty_FLateralLoadTransferF = 0.48 * *rty_FLateralLoadTransfer;

  /* Gain: '<S13>/   ' */
  rtb_Switch_m_idx_2 = 0.5 * *rty_FDownforceF;

  /* Sum: '<S13>/Plus' incorporates:
   *  Constant: '<S13>/Constant'
   *  Sum: '<S13>/Add'
   *  Sum: '<S13>/Minus2'
   */
  rtb_Switch_m_idx_0 = ((*rty_FLateralLoadTransferF + 412.5) - rtb_Saturation5)
    + rtb_Switch_m_idx_2;

  /* Saturate: '<S13>/Saturation3' */
  if (rtb_Switch_m_idx_0 > 2300.0) {
    *rty_FTyreVerticalFL = 2300.0;
  } else if (rtb_Switch_m_idx_0 < 0.0) {
    *rty_FTyreVerticalFL = 0.0;
  } else {
    *rty_FTyreVerticalFL = rtb_Switch_m_idx_0;
  }

  /* End of Saturate: '<S13>/Saturation3' */

  /* Sum: '<S13>/Plus1' incorporates:
   *  Constant: '<S13>/Constant1'
   *  Sum: '<S13>/Minus'
   *  Sum: '<S13>/Minus3'
   */
  rtb_Switch_m_idx_0 = ((412.5 - *rty_FLateralLoadTransferF) - rtb_Saturation5)
    + rtb_Switch_m_idx_2;

  /* Saturate: '<S13>/Saturation1' */
  if (rtb_Switch_m_idx_0 > 2300.0) {
    *rty_FTyreVerticalFR = 2300.0;
  } else if (rtb_Switch_m_idx_0 < 0.0) {
    *rty_FTyreVerticalFR = 0.0;
  } else {
    *rty_FTyreVerticalFR = rtb_Switch_m_idx_0;
  }

  /* End of Saturate: '<S13>/Saturation1' */

  /* Product: '<S20>/Multiply' incorporates:
   *  Constant: '<S20>/Constant'
   *  Constant: '<S20>/Constant1'
   *  Product: '<S20>/Divide'
   */
  rtb_Switch_m_idx_0 = *rtu_gLateralIMU * 1.4 / 9.81;

  /* Saturate: '<S20>/Saturation3' */
  if (rtb_Switch_m_idx_0 > 4.0) {
    *rty_aRollAngle = 4.0;
  } else if (rtb_Switch_m_idx_0 < -4.0) {
    *rty_aRollAngle = -4.0;
  } else {
    *rty_aRollAngle = rtb_Switch_m_idx_0;
  }

  /* End of Saturate: '<S20>/Saturation3' */

  /* Switch: '<S25>/Switch' incorporates:
   *  Constant: '<S25>/Constant1'
   *  Constant: '<S29>/Constant'
   *  Gain: '<S25>/Gain3'
   *  Gain: '<S25>/Gain4'
   *  Gain: '<S25>/b'
   *  Product: '<S25>/Divide'
   *  RelationalOperator: '<S29>/Compare'
   *  Sum: '<S25>/Add'
   *  Sum: '<S25>/Add1'
   *  Sum: '<S25>/Minus1'
   */
  if (*rtu_vChassis >= 2.0) {
    /* Gain: '<S25>/Gain1' incorporates:
     *  Gain: '<S25>/Gain2'
     */
    rtb_Switch_m_idx_0 = 0.017453292519943295 * -*rtu_nYawRateIMU;
    rtb_Switch_m_idx_0 = ((0.73 * rtb_Switch_m_idx_0 - *rtu_vLateralIMU) / (0.62
      * rtb_Switch_m_idx_0 + *rtu_vChassis) - StateEstimation_ConstB.Gain5) *
      57.295779513082323;
  } else {
    rtb_Switch_m_idx_0 = 0.0;
  }

  /* End of Switch: '<S25>/Switch' */

  /* Saturate: '<S25>/Saturation3' */
  if (rtb_Switch_m_idx_0 > 15.0) {
    *rty_aSlipAngleRL = 15.0;
  } else if (rtb_Switch_m_idx_0 < -15.0) {
    *rty_aSlipAngleRL = -15.0;
  } else {
    *rty_aSlipAngleRL = rtb_Switch_m_idx_0;
  }

  /* End of Saturate: '<S25>/Saturation3' */

  /* Switch: '<S26>/Switch' incorporates:
   *  Constant: '<S26>/Constant1'
   *  Constant: '<S30>/Constant'
   *  Gain: '<S26>/Gain3'
   *  Gain: '<S26>/Gain4'
   *  Gain: '<S26>/b'
   *  Product: '<S26>/Divide'
   *  RelationalOperator: '<S30>/Compare'
   *  Sum: '<S26>/Add1'
   *  Sum: '<S26>/Minus1'
   *  Sum: '<S26>/Minus2'
   */
  if (*rtu_vChassis >= 2.0) {
    /* Gain: '<S26>/Gain1' incorporates:
     *  Gain: '<S26>/Gain2'
     */
    rtb_Switch_m_idx_0 = 0.017453292519943295 * -*rtu_nYawRateIMU;
    rtb_Switch_m_idx_0 = ((0.73 * rtb_Switch_m_idx_0 - *rtu_vLateralIMU) /
                          (*rtu_vChassis - 0.62 * rtb_Switch_m_idx_0) -
                          StateEstimation_ConstB.Gain5_m) * 57.295779513082323;
  } else {
    rtb_Switch_m_idx_0 = 0.0;
  }

  /* End of Switch: '<S26>/Switch' */

  /* Saturate: '<S26>/Saturation3' */
  if (rtb_Switch_m_idx_0 > 15.0) {
    *rty_aSlipAngleRR = 15.0;
  } else if (rtb_Switch_m_idx_0 < -15.0) {
    *rty_aSlipAngleRR = -15.0;
  } else {
    *rty_aSlipAngleRR = rtb_Switch_m_idx_0;
  }

  /* End of Saturate: '<S26>/Saturation3' */
}

/* Model initialize function */
void StateEstimation_initialize(const char_T **rt_errorStatus,
  RT_MODEL_StateEstimation_T *const StateEstimation_M)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(StateEstimation_M, rt_errorStatus);

  /* user code (Initialize function Body) */
  LL_TIM_EnableCounter(TIM2);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
