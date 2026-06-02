/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: TorqueVectoring.c
 *
 * Code generated for Simulink model 'TorqueVectoring'.
 *
 * Model version                  : 13.5
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Tue Jun  2 18:48:28 2026
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

/* Named constants for Chart: '<S1>/BTorqueVectoringOK System' */
#define TorqueVectoring_IN_StartTV1    ((uint8_T)1U)
#define TorqueVectoring_IN_StopTV      ((uint8_T)2U)

/* Output and update for referenced model: 'TorqueVectoring' */
void TorqueVectoring(const real_T *rtu_MFinalEMSRequested, const real_T
                     *rtu_gLongitudinalOXTSIMU, const real_T
                     *rtu_rTorqueVectoringMultiplier, const real_T
                     *rtu_aSteeringAngle, const real_T *rtu_vChassis, const
                     real_T *rtu_pBrakeMax, const real_T *rtu_rThrottlePedal,
                     const boolean_T *rtu_BTorqueVectoringActivated, const
                     real_T *rtu_nYawRateOXTSIMU, real_T
                     *rty_nYawRateErrorActual, boolean_T *rty_BTorqueVectoringOK,
                     real_T *rty_MTorqueVectoringFL, real_T
                     *rty_MTorqueVectoringFR, real_T *rty_MTorqueVectoringRL,
                     real_T *rty_MTorqueVectoringRR, DW_TorqueVectoring_f_T
                     *localDW)
{
  real_T rtb_Gain;
  real_T rtb_Multiply_e;
  real_T rtb_NmtoConversion2;
  real_T rtb_rTorqueSplitFront;
  real_T rtb_rTorqueSplitRear;
  real_T rtb_toNmConversion;
  int32_T rtb_BTorqueVectoringOK;

  /* Gain: '<Root>/% to Nm Conversion' */
  rtb_toNmConversion = 0.098 * *rtu_MFinalEMSRequested;

  /* Gain: '<S32>/1//Wheelbase' incorporates:
   *  Gain: '<S32>/CoG Height'
   *  Gain: '<S32>/Mass'
   *  Gain: '<S32>/Negative'
   */
  rtb_Gain = 315.0 * -*rtu_gLongitudinalOXTSIMU * 0.28 * 0.65146579804560267;

  /* MATLAB Function: '<S31>/Torque Longitudinal Distribution' incorporates:
   *  Constant: '<S30>/Constant'
   *  Constant: '<S30>/Constant1'
   *  Sum: '<S30>/Add'
   *  Sum: '<S30>/Add1'
   */
  rtb_Multiply_e = (rtb_Gain + 927.0) + (2163.0 - rtb_Gain);
  rtb_rTorqueSplitFront = (rtb_Gain + 927.0) / rtb_Multiply_e;
  rtb_rTorqueSplitRear = (2163.0 - rtb_Gain) / rtb_Multiply_e;

  /* Gain: '<S33>/Gain' incorporates:
   *  Product: '<S33>/Multiply'
   */
  rtb_Gain = rtb_rTorqueSplitFront * rtb_toNmConversion * 0.5;

  /* Sum: '<S27>/Subtract' incorporates:
   *  Constant: '<S25>/WB'
   *  Gain: '<S25>/Degs to rads converison'
   *  Gain: '<S25>/rads//s to degs//s conversion'
   *  Product: '<S25>/Divide'
   *  Product: '<S25>/Multiply'
   *  Trigonometry: '<S25>/Tan'
   */
  *rty_nYawRateErrorActual = tan(0.017453292519943295 * *rtu_aSteeringAngle) *
    *rtu_vChassis / 1.535 * 57.295779513082323 - *rtu_nYawRateOXTSIMU;

  /* Chart: '<S1>/BTorqueVectoringOK System' incorporates:
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
   *  Logic: '<S1>/Logical Operator'
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
  if (localDW->is_active_c1_TorqueVectoring == 0) {
    localDW->is_active_c1_TorqueVectoring = 1U;
    localDW->is_c1_TorqueVectoring = TorqueVectoring_IN_StartTV1;
    rtb_BTorqueVectoringOK = 1;
  } else if (localDW->is_c1_TorqueVectoring == TorqueVectoring_IN_StartTV1) {
    if (((*rtu_vChassis < 31.0) && (*rtu_vChassis > -2.0) &&
         ((*rtu_aSteeringAngle > -29.0) && (*rtu_aSteeringAngle < 29.0)) &&
         (((!(*rtu_pBrakeMax > 10.0)) || (!(*rtu_gLongitudinalOXTSIMU > 5.0))) &&
          ((!(*rtu_rThrottlePedal > 80.0)) || (!(*rtu_gLongitudinalOXTSIMU <
             -5.0))))) < 0.5) {
      localDW->is_c1_TorqueVectoring = TorqueVectoring_IN_StopTV;
      rtb_BTorqueVectoringOK = 0;
    } else {
      rtb_BTorqueVectoringOK = 1;
    }

    /* case IN_StopTV: */
  } else if ((real_T)*rtu_BTorqueVectoringActivated < 0.5) {
    localDW->is_c1_TorqueVectoring = TorqueVectoring_IN_StartTV1;
    rtb_BTorqueVectoringOK = 1;
  } else {
    rtb_BTorqueVectoringOK = 0;
  }

  /* End of Chart: '<S1>/BTorqueVectoringOK System' */

  /* DataTypeConversion: '<S1>/Data Type Conversion' */
  *rty_BTorqueVectoringOK = (rtb_BTorqueVectoringOK != 0);

  /* Switch: '<S26>/Switch' incorporates:
   *  Abs: '<S26>/Abs'
   *  Abs: '<S26>/Abs1'
   *  Constant: '<S26>/Constant3'
   *  Constant: '<S28>/Constant'
   *  Constant: '<S29>/Constant'
   *  Logic: '<S26>/AND'
   *  RelationalOperator: '<S28>/Compare'
   *  RelationalOperator: '<S29>/Compare'
   */
  if ((*rty_BTorqueVectoringOK) && (fabs(*rty_nYawRateErrorActual) >= 10.0) &&
      (fabs(*rtu_nYawRateOXTSIMU) >= 15.0)) {
    rtb_Multiply_e = *rty_nYawRateErrorActual;
  } else {
    rtb_Multiply_e = 0.0;
  }

  /* Gain: '<S21>/Tyre Radius' incorporates:
   *  Gain: '<S21>/0.5 * Track width'
   *  Gain: '<S21>/4 wheels'
   *  Gain: '<S21>/Time to correct error'
   *  Gain: '<S21>/Tyre Radius1'
   *  Gain: '<S21>/Yaw Inertia'
   *  Gain: '<S21>/degs//s to rads//s conversion'
   *  Switch: '<S26>/Switch'
   */
  rtb_Multiply_e = 0.017453292519943295 * rtb_Multiply_e * 3.3333333333333335 *
    148.66 * 0.25 * 1.6260162601626016 * 0.064304546331425627 * 0.203;

  /* Saturate: '<S21>/Saturation3' */
  if (rtb_Multiply_e > 10.0) {
    rtb_Multiply_e = 10.0;
  } else if (rtb_Multiply_e < -10.0) {
    rtb_Multiply_e = -10.0;
  }

  /* End of Saturate: '<S21>/Saturation3' */

  /* Product: '<S22>/Multiply' */
  rtb_NmtoConversion2 = rtb_Multiply_e * rtb_rTorqueSplitFront *
    *rtu_rTorqueVectoringMultiplier;

  /* Gain: '<S20>/Nm to % Conversion' incorporates:
   *  Sum: '<S20>/Add4'
   */
  rtb_rTorqueSplitFront = (rtb_Gain - rtb_NmtoConversion2) * 10.204081632653061;

  /* Saturate: '<S20>/Saturation8' */
  if (rtb_rTorqueSplitFront > 204.8) {
    *rty_MTorqueVectoringFL = 204.8;
  } else if (rtb_rTorqueSplitFront < -100.0) {
    *rty_MTorqueVectoringFL = -100.0;
  } else {
    *rty_MTorqueVectoringFL = rtb_rTorqueSplitFront;
  }

  /* End of Saturate: '<S20>/Saturation8' */

  /* Gain: '<S20>/Nm to % Conversion1' incorporates:
   *  Sum: '<S20>/Add5'
   */
  rtb_rTorqueSplitFront = (rtb_NmtoConversion2 + rtb_Gain) * 10.204081632653061;

  /* Saturate: '<S20>/Saturation1' */
  if (rtb_rTorqueSplitFront > 204.8) {
    *rty_MTorqueVectoringFR = 204.8;
  } else if (rtb_rTorqueSplitFront < -100.0) {
    *rty_MTorqueVectoringFR = -100.0;
  } else {
    *rty_MTorqueVectoringFR = rtb_rTorqueSplitFront;
  }

  /* End of Saturate: '<S20>/Saturation1' */

  /* Product: '<S23>/Multiply' */
  rtb_Multiply_e = rtb_Multiply_e * rtb_rTorqueSplitRear *
    *rtu_rTorqueVectoringMultiplier;

  /* Gain: '<S33>/Gain1' incorporates:
   *  Product: '<S33>/Multiply1'
   */
  rtb_toNmConversion = rtb_toNmConversion * rtb_rTorqueSplitRear * 0.5;

  /* Gain: '<S20>/Nm to % Conversion2' incorporates:
   *  Sum: '<S20>/Add1'
   */
  rtb_rTorqueSplitFront = (rtb_toNmConversion - rtb_Multiply_e) *
    10.204081632653061;

  /* Saturate: '<S20>/Saturation2' */
  if (rtb_rTorqueSplitFront > 204.8) {
    *rty_MTorqueVectoringRL = 204.8;
  } else if (rtb_rTorqueSplitFront < -100.0) {
    *rty_MTorqueVectoringRL = -100.0;
  } else {
    *rty_MTorqueVectoringRL = rtb_rTorqueSplitFront;
  }

  /* End of Saturate: '<S20>/Saturation2' */

  /* Gain: '<S20>/Nm to % Conversion3' incorporates:
   *  Sum: '<S20>/Add2'
   */
  rtb_rTorqueSplitFront = (rtb_Multiply_e + rtb_toNmConversion) *
    10.204081632653061;

  /* Saturate: '<S20>/Saturation3' */
  if (rtb_rTorqueSplitFront > 204.8) {
    *rty_MTorqueVectoringRR = 204.8;
  } else if (rtb_rTorqueSplitFront < -100.0) {
    *rty_MTorqueVectoringRR = -100.0;
  } else {
    *rty_MTorqueVectoringRR = rtb_rTorqueSplitFront;
  }

  /* End of Saturate: '<S20>/Saturation3' */
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
