/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: TractionControl.c
 *
 * Code generated for Simulink model 'TractionControl'.
 *
 * Model version                  : 13.5
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Wed Jun  3 14:57:04 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "TractionControl.h"
#include "rtwtypes.h"
#include <math.h>
#include "look1_binlxpw.h"
#include "TractionControl_private.h"

/* Output and update for referenced model: 'TractionControl' */
void TractionControl(const real_T *rtu_rSteeringAngle, const real_T
                     *rtu_vChassis, const boolean_T
                     *rtu_BTractionControlActivated, const real_T
                     *rtu_NTractionControlKpSelector, const real_T *rtu_vWheelFL,
                     const real_T *rtu_vWheelFR, const real_T *rtu_vWheelRL,
                     const real_T *rtu_vWheelRR, const real_T
                     *rtu_MTorqueDistributionFL, const real_T
                     *rtu_MTorqueDistributionFR, const real_T
                     *rtu_MTorqueDistributionRL, const real_T
                     *rtu_MTorqueDistributionRR, real_T *rty_rSlipRatioOptimal,
                     real_T *rty_NTractionControlMultiplierF, real_T
                     *rty_NTractionControlMultiplie_c, real_T
                     *rty_NTractionControlMultiplierR, real_T
                     *rty_NTractionControlMultiplie_n, real_T
                     *rty_NABSMultiplierFL, real_T *rty_NABSMultiplierFR, real_T
                     *rty_NABSMultiplierRL, real_T *rty_NABSMultiplierRR, real_T
                     *rty_rSlipRatioFLActual, real_T *rty_rSlipRatioFRActual,
                     real_T *rty_rSlipRatioRLActual, real_T
                     *rty_rSlipRatioRRActual, real_T
                     *rty_MTractionControlFLTotal, real_T
                     *rty_MTractionControlFRTotal, real_T
                     *rty_MTractionControlRLTotal, real_T
                     *rty_MTractionControlRRTotal, real_T
                     *rty_MTractionControlFLFinal, real_T
                     *rty_MTractionControlFRFinal, real_T
                     *rty_MTractionControlRLFinal, real_T
                     *rty_MTractionControlRRFinal)
{
  real_T rtb_Abs;
  real_T rtb_Kp1_linear_agg2_idx_0;
  real_T rtb_Kp1_linear_agg2_idx_1;
  real_T rtb_Kp1_linear_agg2_idx_2;
  real_T rtb_Kp1_linear_agg2_idx_3;
  real_T rtb_Kp1_linear_agg2_m_idx_0;
  real_T rtb_Kp1_linear_agg2_m_idx_1;
  real_T rtb_Kp1_linear_agg2_m_idx_2;
  real_T rtb_Saturation;
  real_T rtb_Saturation1_idx_0;
  real_T rtb_Saturation1_idx_1;
  real_T rtb_Saturation1_idx_2;
  real_T rtb_Subtract_idx_0;
  real_T rtb_Subtract_idx_1;
  real_T rtb_Subtract_idx_2;
  real_T rtb_Subtract_idx_3;

  /* Saturate: '<S13>/Saturation' */
  if (*rtu_vChassis > 50.0) {
    rtb_Saturation = 50.0;
  } else if (*rtu_vChassis < 0.1) {
    rtb_Saturation = 0.1;
  } else {
    rtb_Saturation = *rtu_vChassis;
  }

  /* End of Saturate: '<S13>/Saturation' */

  /* Product: '<S13>/Divide' incorporates:
   *  Sum: '<S13>/Add'
   */
  rtb_Saturation1_idx_0 = (*rtu_vWheelFL - rtb_Saturation) / rtb_Saturation;

  /* Saturate: '<S13>/Saturation1' */
  if (rtb_Saturation1_idx_0 > 1000.0) {
    rtb_Saturation1_idx_0 = 1000.0;
  } else if (rtb_Saturation1_idx_0 < -1.0) {
    rtb_Saturation1_idx_0 = -1.0;
  }

  /* Product: '<S13>/Divide' incorporates:
   *  Sum: '<S13>/Add'
   */
  rtb_Saturation1_idx_1 = (*rtu_vWheelFR - rtb_Saturation) / rtb_Saturation;

  /* Saturate: '<S13>/Saturation1' */
  if (rtb_Saturation1_idx_1 > 1000.0) {
    rtb_Saturation1_idx_1 = 1000.0;
  } else if (rtb_Saturation1_idx_1 < -1.0) {
    rtb_Saturation1_idx_1 = -1.0;
  }

  /* Product: '<S13>/Divide' incorporates:
   *  Sum: '<S13>/Add'
   */
  rtb_Saturation1_idx_2 = (*rtu_vWheelRL - rtb_Saturation) / rtb_Saturation;

  /* Saturate: '<S13>/Saturation1' */
  if (rtb_Saturation1_idx_2 > 1000.0) {
    rtb_Saturation1_idx_2 = 1000.0;
  } else if (rtb_Saturation1_idx_2 < -1.0) {
    rtb_Saturation1_idx_2 = -1.0;
  }

  /* Product: '<S13>/Divide' incorporates:
   *  Sum: '<S13>/Add'
   */
  rtb_Saturation = (*rtu_vWheelRR - rtb_Saturation) / rtb_Saturation;

  /* Saturate: '<S13>/Saturation1' */
  if (rtb_Saturation > 1000.0) {
    rtb_Saturation = 1000.0;
  } else if (rtb_Saturation < -1.0) {
    rtb_Saturation = -1.0;
  }

  /* Abs: '<S5>/Abs' */
  rtb_Abs = fabs(*rtu_rSteeringAngle);

  /* Switch: '<S5>/Switch2' incorporates:
   *  Constant: '<S5>/Constant'
   *  Constant: '<S5>/Constant3'
   *  Gain: '<S5>/Gain'
   *  Gain: '<S5>/Gain4'
   *  Sum: '<S5>/Add2'
   */
  if (rtb_Abs > 5.0) {
    *rty_rSlipRatioOptimal = (3.0 * rtb_Abs + 100.0) * 0.001;
  } else {
    *rty_rSlipRatioOptimal = 0.1;
  }

  /* End of Switch: '<S5>/Switch2' */

  /* Sum: '<S14>/Subtract' */
  rtb_Subtract_idx_0 = rtb_Saturation1_idx_0 - *rty_rSlipRatioOptimal;
  rtb_Subtract_idx_1 = rtb_Saturation1_idx_1 - *rty_rSlipRatioOptimal;
  rtb_Subtract_idx_2 = rtb_Saturation1_idx_2 - *rty_rSlipRatioOptimal;
  rtb_Subtract_idx_3 = rtb_Saturation - *rty_rSlipRatioOptimal;

  /* MultiPortSwitch: '<S9>/Multiport Switch' incorporates:
   *  Gain: '<S9>/Gain1'
   *  Gain: '<S9>/Gain2'
   *  Gain: '<S9>/Gain3'
   *  Lookup_n-D: '<S9>/Kp1_linear_agg1'
   *  Lookup_n-D: '<S9>/Kp1_linear_agg2'
   *  Lookup_n-D: '<S9>/Kp1_linear_agg3'
   */
  switch ((int32_T)*rtu_NTractionControlKpSelector) {
   case 1:
    /* Lookup_n-D: '<S9>/Kp1_linear_agg' */
    rtb_Kp1_linear_agg2_m_idx_0 = look1_binlxpw(rtb_Subtract_idx_0,
      rtCP_Kp1_linear_agg_bp01Data, rtCP_Kp1_linear_agg_tableData, 40U);
    rtb_Kp1_linear_agg2_m_idx_1 = look1_binlxpw(rtb_Subtract_idx_1,
      rtCP_Kp1_linear_agg_bp01Data, rtCP_Kp1_linear_agg_tableData, 40U);
    rtb_Kp1_linear_agg2_m_idx_2 = look1_binlxpw(rtb_Subtract_idx_2,
      rtCP_Kp1_linear_agg_bp01Data, rtCP_Kp1_linear_agg_tableData, 40U);
    rtb_Abs = look1_binlxpw(rtb_Subtract_idx_3, rtCP_Kp1_linear_agg_bp01Data,
      rtCP_Kp1_linear_agg_tableData, 40U);
    break;

   case 2:
    rtb_Kp1_linear_agg2_m_idx_0 = 1.2 * look1_binlxpw(rtb_Subtract_idx_0,
      rtCP_Kp1_linear_agg1_bp01Data, rtCP_Kp1_linear_agg1_tableData, 40U);
    rtb_Kp1_linear_agg2_m_idx_1 = 1.2 * look1_binlxpw(rtb_Subtract_idx_1,
      rtCP_Kp1_linear_agg1_bp01Data, rtCP_Kp1_linear_agg1_tableData, 40U);
    rtb_Kp1_linear_agg2_m_idx_2 = 1.2 * look1_binlxpw(rtb_Subtract_idx_2,
      rtCP_Kp1_linear_agg1_bp01Data, rtCP_Kp1_linear_agg1_tableData, 40U);
    rtb_Abs = 1.2 * look1_binlxpw(rtb_Subtract_idx_3,
      rtCP_Kp1_linear_agg1_bp01Data, rtCP_Kp1_linear_agg1_tableData, 40U);
    break;

   case 3:
    rtb_Kp1_linear_agg2_m_idx_0 = 1.5 * look1_binlxpw(rtb_Subtract_idx_0,
      rtCP_Kp1_linear_agg2_bp01Data, rtCP_Kp1_linear_agg2_tableData, 40U);
    rtb_Kp1_linear_agg2_m_idx_1 = 1.5 * look1_binlxpw(rtb_Subtract_idx_1,
      rtCP_Kp1_linear_agg2_bp01Data, rtCP_Kp1_linear_agg2_tableData, 40U);
    rtb_Kp1_linear_agg2_m_idx_2 = 1.5 * look1_binlxpw(rtb_Subtract_idx_2,
      rtCP_Kp1_linear_agg2_bp01Data, rtCP_Kp1_linear_agg2_tableData, 40U);
    rtb_Abs = 1.5 * look1_binlxpw(rtb_Subtract_idx_3,
      rtCP_Kp1_linear_agg2_bp01Data, rtCP_Kp1_linear_agg2_tableData, 40U);
    break;

   default:
    rtb_Kp1_linear_agg2_m_idx_0 = 1.7 * look1_binlxpw(rtb_Subtract_idx_0,
      rtCP_Kp1_linear_agg3_bp01Data, rtCP_Kp1_linear_agg3_tableData, 40U);
    rtb_Kp1_linear_agg2_m_idx_1 = 1.7 * look1_binlxpw(rtb_Subtract_idx_1,
      rtCP_Kp1_linear_agg3_bp01Data, rtCP_Kp1_linear_agg3_tableData, 40U);
    rtb_Kp1_linear_agg2_m_idx_2 = 1.7 * look1_binlxpw(rtb_Subtract_idx_2,
      rtCP_Kp1_linear_agg3_bp01Data, rtCP_Kp1_linear_agg3_tableData, 40U);
    rtb_Abs = 1.7 * look1_binlxpw(rtb_Subtract_idx_3,
      rtCP_Kp1_linear_agg3_bp01Data, rtCP_Kp1_linear_agg3_tableData, 40U);
    break;
  }

  /* End of MultiPortSwitch: '<S9>/Multiport Switch' */

  /* Saturate: '<S10>/Saturation1' incorporates:
   *  Product: '<S10>/Multiply'
   */
  rtb_Kp1_linear_agg2_idx_0 = rtb_Kp1_linear_agg2_m_idx_0 * rtb_Subtract_idx_0;
  if (rtb_Kp1_linear_agg2_idx_0 > 0.0) {
    rtb_Kp1_linear_agg2_idx_0 = 0.0;
  } else if (rtb_Kp1_linear_agg2_idx_0 < -0.8) {
    rtb_Kp1_linear_agg2_idx_0 = -0.8;
  }

  /* Saturate: '<S10>/Saturation2' incorporates:
   *  Constant: '<S10>/Constant1'
   *  Sum: '<S10>/Add1'
   */
  if (rtb_Kp1_linear_agg2_idx_0 + 1.0 < 0.2) {
    rtb_Kp1_linear_agg2_m_idx_0 = 0.2;
  } else {
    rtb_Kp1_linear_agg2_m_idx_0 = rtb_Kp1_linear_agg2_idx_0 + 1.0;
  }

  /* Saturate: '<S10>/Saturation1' incorporates:
   *  Product: '<S10>/Multiply'
   */
  rtb_Kp1_linear_agg2_idx_0 = rtb_Kp1_linear_agg2_m_idx_1 * rtb_Subtract_idx_1;
  if (rtb_Kp1_linear_agg2_idx_0 > 0.0) {
    rtb_Kp1_linear_agg2_idx_0 = 0.0;
  } else if (rtb_Kp1_linear_agg2_idx_0 < -0.8) {
    rtb_Kp1_linear_agg2_idx_0 = -0.8;
  }

  /* Saturate: '<S10>/Saturation2' incorporates:
   *  Constant: '<S10>/Constant1'
   *  Sum: '<S10>/Add1'
   */
  if (rtb_Kp1_linear_agg2_idx_0 + 1.0 < 0.2) {
    rtb_Kp1_linear_agg2_m_idx_1 = 0.2;
  } else {
    rtb_Kp1_linear_agg2_m_idx_1 = rtb_Kp1_linear_agg2_idx_0 + 1.0;
  }

  /* Saturate: '<S10>/Saturation1' incorporates:
   *  Product: '<S10>/Multiply'
   */
  rtb_Kp1_linear_agg2_idx_0 = rtb_Kp1_linear_agg2_m_idx_2 * rtb_Subtract_idx_2;
  if (rtb_Kp1_linear_agg2_idx_0 > 0.0) {
    rtb_Kp1_linear_agg2_idx_0 = 0.0;
  } else if (rtb_Kp1_linear_agg2_idx_0 < -0.8) {
    rtb_Kp1_linear_agg2_idx_0 = -0.8;
  }

  /* Saturate: '<S10>/Saturation2' incorporates:
   *  Constant: '<S10>/Constant1'
   *  Sum: '<S10>/Add1'
   */
  if (rtb_Kp1_linear_agg2_idx_0 + 1.0 < 0.2) {
    rtb_Kp1_linear_agg2_m_idx_2 = 0.2;
  } else {
    rtb_Kp1_linear_agg2_m_idx_2 = rtb_Kp1_linear_agg2_idx_0 + 1.0;
  }

  /* Saturate: '<S10>/Saturation1' incorporates:
   *  Product: '<S10>/Multiply'
   */
  rtb_Kp1_linear_agg2_idx_0 = rtb_Abs * rtb_Subtract_idx_3;
  if (rtb_Kp1_linear_agg2_idx_0 > 0.0) {
    rtb_Kp1_linear_agg2_idx_0 = 0.0;
  } else if (rtb_Kp1_linear_agg2_idx_0 < -0.8) {
    rtb_Kp1_linear_agg2_idx_0 = -0.8;
  }

  /* Saturate: '<S10>/Saturation2' incorporates:
   *  Constant: '<S10>/Constant1'
   *  Sum: '<S10>/Add1'
   */
  if (rtb_Kp1_linear_agg2_idx_0 + 1.0 < 0.2) {
    rtb_Abs = 0.2;
  } else {
    rtb_Abs = rtb_Kp1_linear_agg2_idx_0 + 1.0;
  }

  /* MultiPortSwitch: '<S11>/Multiport Switch' incorporates:
   *  Gain: '<S11>/Gain1'
   *  Gain: '<S11>/Gain2'
   *  Gain: '<S11>/Gain3'
   *  Gain: '<S11>/Gain4'
   *  Lookup_n-D: '<S11>/Kp1_linear_agg'
   *  Lookup_n-D: '<S11>/Kp1_linear_agg1'
   *  Lookup_n-D: '<S11>/Kp1_linear_agg2'
   *  Lookup_n-D: '<S11>/Kp1_linear_agg3'
   */
  switch ((int32_T)*rtu_NTractionControlKpSelector) {
   case 1:
    rtb_Kp1_linear_agg2_idx_0 = 1.2 * look1_binlxpw(rtb_Subtract_idx_0,
      rtCP_Kp1_linear_agg_bp01Data_e, rtCP_Kp1_linear_agg_tableData_g, 40U);
    rtb_Kp1_linear_agg2_idx_1 = 1.2 * look1_binlxpw(rtb_Subtract_idx_1,
      rtCP_Kp1_linear_agg_bp01Data_e, rtCP_Kp1_linear_agg_tableData_g, 40U);
    rtb_Kp1_linear_agg2_idx_2 = 1.2 * look1_binlxpw(rtb_Subtract_idx_2,
      rtCP_Kp1_linear_agg_bp01Data_e, rtCP_Kp1_linear_agg_tableData_g, 40U);
    rtb_Kp1_linear_agg2_idx_3 = 1.2 * look1_binlxpw(rtb_Subtract_idx_3,
      rtCP_Kp1_linear_agg_bp01Data_e, rtCP_Kp1_linear_agg_tableData_g, 40U);
    break;

   case 2:
    rtb_Kp1_linear_agg2_idx_0 = 1.6 * look1_binlxpw(rtb_Subtract_idx_0,
      rtCP_Kp1_linear_agg1_bp01Data_p, rtCP_Kp1_linear_agg1_tableData_, 40U);
    rtb_Kp1_linear_agg2_idx_1 = 1.6 * look1_binlxpw(rtb_Subtract_idx_1,
      rtCP_Kp1_linear_agg1_bp01Data_p, rtCP_Kp1_linear_agg1_tableData_, 40U);
    rtb_Kp1_linear_agg2_idx_2 = 1.6 * look1_binlxpw(rtb_Subtract_idx_2,
      rtCP_Kp1_linear_agg1_bp01Data_p, rtCP_Kp1_linear_agg1_tableData_, 40U);
    rtb_Kp1_linear_agg2_idx_3 = 1.6 * look1_binlxpw(rtb_Subtract_idx_3,
      rtCP_Kp1_linear_agg1_bp01Data_p, rtCP_Kp1_linear_agg1_tableData_, 40U);
    break;

   case 3:
    rtb_Kp1_linear_agg2_idx_0 = 2.0 * look1_binlxpw(rtb_Subtract_idx_0,
      rtCP_Kp1_linear_agg2_bp01Data_b, rtCP_Kp1_linear_agg2_tableData_, 40U);
    rtb_Kp1_linear_agg2_idx_1 = 2.0 * look1_binlxpw(rtb_Subtract_idx_1,
      rtCP_Kp1_linear_agg2_bp01Data_b, rtCP_Kp1_linear_agg2_tableData_, 40U);
    rtb_Kp1_linear_agg2_idx_2 = 2.0 * look1_binlxpw(rtb_Subtract_idx_2,
      rtCP_Kp1_linear_agg2_bp01Data_b, rtCP_Kp1_linear_agg2_tableData_, 40U);
    rtb_Kp1_linear_agg2_idx_3 = 2.0 * look1_binlxpw(rtb_Subtract_idx_3,
      rtCP_Kp1_linear_agg2_bp01Data_b, rtCP_Kp1_linear_agg2_tableData_, 40U);
    break;

   default:
    rtb_Kp1_linear_agg2_idx_0 = 2.4 * look1_binlxpw(rtb_Subtract_idx_0,
      rtCP_Kp1_linear_agg3_bp01Data_c, rtCP_Kp1_linear_agg3_tableData_, 40U);
    rtb_Kp1_linear_agg2_idx_1 = 2.4 * look1_binlxpw(rtb_Subtract_idx_1,
      rtCP_Kp1_linear_agg3_bp01Data_c, rtCP_Kp1_linear_agg3_tableData_, 40U);
    rtb_Kp1_linear_agg2_idx_2 = 2.4 * look1_binlxpw(rtb_Subtract_idx_2,
      rtCP_Kp1_linear_agg3_bp01Data_c, rtCP_Kp1_linear_agg3_tableData_, 40U);
    rtb_Kp1_linear_agg2_idx_3 = 2.4 * look1_binlxpw(rtb_Subtract_idx_3,
      rtCP_Kp1_linear_agg3_bp01Data_c, rtCP_Kp1_linear_agg3_tableData_, 40U);
    break;
  }

  /* End of MultiPortSwitch: '<S11>/Multiport Switch' */

  /* Saturate: '<S11>/Saturation' */
  if (rtb_Kp1_linear_agg2_idx_0 > 1000.0) {
    rtb_Kp1_linear_agg2_idx_0 = 1000.0;
  } else if (rtb_Kp1_linear_agg2_idx_0 < 0.0) {
    rtb_Kp1_linear_agg2_idx_0 = 0.0;
  }

  /* Saturate: '<S12>/Saturation1' incorporates:
   *  Product: '<S12>/Multiply'
   *  Saturate: '<S11>/Saturation'
   */
  rtb_Kp1_linear_agg2_idx_0 *= rtb_Subtract_idx_0;
  if (rtb_Kp1_linear_agg2_idx_0 > 1.0) {
    rtb_Kp1_linear_agg2_idx_0 = 1.0;
  } else if (rtb_Kp1_linear_agg2_idx_0 < 0.0) {
    rtb_Kp1_linear_agg2_idx_0 = 0.0;
  }

  /* Saturate: '<S11>/Saturation' */
  if (rtb_Kp1_linear_agg2_idx_1 > 1000.0) {
    rtb_Kp1_linear_agg2_idx_1 = 1000.0;
  } else if (rtb_Kp1_linear_agg2_idx_1 < 0.0) {
    rtb_Kp1_linear_agg2_idx_1 = 0.0;
  }

  /* Saturate: '<S12>/Saturation1' incorporates:
   *  Product: '<S12>/Multiply'
   *  Saturate: '<S11>/Saturation'
   */
  rtb_Kp1_linear_agg2_idx_1 *= rtb_Subtract_idx_1;
  if (rtb_Kp1_linear_agg2_idx_1 > 1.0) {
    rtb_Kp1_linear_agg2_idx_1 = 1.0;
  } else if (rtb_Kp1_linear_agg2_idx_1 < 0.0) {
    rtb_Kp1_linear_agg2_idx_1 = 0.0;
  }

  /* Saturate: '<S11>/Saturation' */
  if (rtb_Kp1_linear_agg2_idx_2 > 1000.0) {
    rtb_Kp1_linear_agg2_idx_2 = 1000.0;
  } else if (rtb_Kp1_linear_agg2_idx_2 < 0.0) {
    rtb_Kp1_linear_agg2_idx_2 = 0.0;
  }

  /* Saturate: '<S12>/Saturation1' incorporates:
   *  Product: '<S12>/Multiply'
   *  Saturate: '<S11>/Saturation'
   */
  rtb_Kp1_linear_agg2_idx_2 *= rtb_Subtract_idx_2;
  if (rtb_Kp1_linear_agg2_idx_2 > 1.0) {
    rtb_Kp1_linear_agg2_idx_2 = 1.0;
  } else if (rtb_Kp1_linear_agg2_idx_2 < 0.0) {
    rtb_Kp1_linear_agg2_idx_2 = 0.0;
  }

  /* Saturate: '<S11>/Saturation' */
  if (rtb_Kp1_linear_agg2_idx_3 > 1000.0) {
    rtb_Kp1_linear_agg2_idx_3 = 1000.0;
  } else if (rtb_Kp1_linear_agg2_idx_3 < 0.0) {
    rtb_Kp1_linear_agg2_idx_3 = 0.0;
  }

  /* Saturate: '<S12>/Saturation1' incorporates:
   *  Product: '<S12>/Multiply'
   *  Saturate: '<S11>/Saturation'
   */
  rtb_Kp1_linear_agg2_idx_3 *= rtb_Subtract_idx_3;
  if (rtb_Kp1_linear_agg2_idx_3 > 1.0) {
    rtb_Kp1_linear_agg2_idx_3 = 1.0;
  } else if (rtb_Kp1_linear_agg2_idx_3 < 0.0) {
    rtb_Kp1_linear_agg2_idx_3 = 0.0;
  }

  /* Switch: '<S2>/Switch' incorporates:
   *  Constant: '<S12>/Constant1'
   *  Product: '<S2>/Multiply'
   *  Product: '<S2>/Multiply1'
   *  Saturate: '<S12>/Saturation2'
   *  Sum: '<S12>/Add1'
   */
  if (*rtu_MTorqueDistributionFL > 0.0) {
    rtb_Subtract_idx_0 = (1.0 - rtb_Kp1_linear_agg2_idx_0) *
      *rtu_MTorqueDistributionFL;
  } else {
    rtb_Subtract_idx_0 = *rtu_MTorqueDistributionFL *
      rtb_Kp1_linear_agg2_m_idx_0;
  }

  if (*rtu_MTorqueDistributionFR > 0.0) {
    rtb_Subtract_idx_1 = (1.0 - rtb_Kp1_linear_agg2_idx_1) *
      *rtu_MTorqueDistributionFR;
  } else {
    rtb_Subtract_idx_1 = *rtu_MTorqueDistributionFR *
      rtb_Kp1_linear_agg2_m_idx_1;
  }

  if (*rtu_MTorqueDistributionRL > 0.0) {
    rtb_Subtract_idx_2 = (1.0 - rtb_Kp1_linear_agg2_idx_2) *
      *rtu_MTorqueDistributionRL;
  } else {
    rtb_Subtract_idx_2 = *rtu_MTorqueDistributionRL *
      rtb_Kp1_linear_agg2_m_idx_2;
  }

  if (*rtu_MTorqueDistributionRR > 0.0) {
    rtb_Subtract_idx_3 = (1.0 - rtb_Kp1_linear_agg2_idx_3) *
      *rtu_MTorqueDistributionRR;
  } else {
    rtb_Subtract_idx_3 = *rtu_MTorqueDistributionRR * rtb_Abs;
  }

  /* End of Switch: '<S2>/Switch' */

  /* Switch: '<S8>/Switch2' incorporates:
   *  Constant: '<S2>/Constant2'
   *  RelationalOperator: '<S8>/LowerRelop1'
   *  RelationalOperator: '<S8>/UpperRelop'
   *  Switch: '<S8>/Switch'
   */
  if (rtb_Subtract_idx_0 > *rtu_MTorqueDistributionFL) {
    rtb_Subtract_idx_0 = *rtu_MTorqueDistributionFL;
  } else if (rtb_Subtract_idx_0 < -100.0) {
    /* Switch: '<S8>/Switch' incorporates:
     *  Constant: '<S2>/Constant2'
     */
    rtb_Subtract_idx_0 = -100.0;
  }

  if (rtb_Subtract_idx_1 > *rtu_MTorqueDistributionFR) {
    rtb_Subtract_idx_1 = *rtu_MTorqueDistributionFR;
  } else if (rtb_Subtract_idx_1 < -100.0) {
    /* Switch: '<S8>/Switch' incorporates:
     *  Constant: '<S2>/Constant2'
     */
    rtb_Subtract_idx_1 = -100.0;
  }

  if (rtb_Subtract_idx_2 > *rtu_MTorqueDistributionRL) {
    rtb_Subtract_idx_2 = *rtu_MTorqueDistributionRL;
  } else if (rtb_Subtract_idx_2 < -100.0) {
    /* Switch: '<S8>/Switch' incorporates:
     *  Constant: '<S2>/Constant2'
     */
    rtb_Subtract_idx_2 = -100.0;
  }

  if (rtb_Subtract_idx_3 > *rtu_MTorqueDistributionRR) {
    rtb_Subtract_idx_3 = *rtu_MTorqueDistributionRR;
  } else if (rtb_Subtract_idx_3 < -100.0) {
    /* Switch: '<S8>/Switch' incorporates:
     *  Constant: '<S2>/Constant2'
     */
    rtb_Subtract_idx_3 = -100.0;
  }

  /* End of Switch: '<S8>/Switch2' */

  /* Switch: '<S1>/Switch' incorporates:
   *  Constant: '<S7>/Constant'
   *  Logic: '<S1>/AND'
   *  RelationalOperator: '<S7>/Compare'
   */
  if ((*rtu_BTractionControlActivated) && (*rtu_vChassis > 0.3)) {
    /* SignalConversion generated from: '<Root>/MTractionControlFLFinal' */
    *rty_MTractionControlFLFinal = rtb_Subtract_idx_0;

    /* SignalConversion generated from: '<Root>/MTractionControlFRFinal' */
    *rty_MTractionControlFRFinal = rtb_Subtract_idx_1;

    /* SignalConversion generated from: '<Root>/MTractionControlRLFinal' */
    *rty_MTractionControlRLFinal = rtb_Subtract_idx_2;

    /* SignalConversion generated from: '<Root>/MTractionControlRRFinal' */
    *rty_MTractionControlRRFinal = rtb_Subtract_idx_3;
  } else {
    /* SignalConversion generated from: '<Root>/MTractionControlFLFinal' */
    *rty_MTractionControlFLFinal = *rtu_MTorqueDistributionFL;

    /* SignalConversion generated from: '<Root>/MTractionControlFRFinal' */
    *rty_MTractionControlFRFinal = *rtu_MTorqueDistributionFR;

    /* SignalConversion generated from: '<Root>/MTractionControlRLFinal' */
    *rty_MTractionControlRLFinal = *rtu_MTorqueDistributionRL;

    /* SignalConversion generated from: '<Root>/MTractionControlRRFinal' */
    *rty_MTractionControlRRFinal = *rtu_MTorqueDistributionRR;
  }

  /* End of Switch: '<S1>/Switch' */

  /* SignalConversion generated from: '<Root>/MTractionControlFLTotal' */
  *rty_MTractionControlFLTotal = rtb_Subtract_idx_0;

  /* SignalConversion generated from: '<Root>/MTractionControlFRTotal' */
  *rty_MTractionControlFRTotal = rtb_Subtract_idx_1;

  /* SignalConversion generated from: '<Root>/MTractionControlRLTotal' */
  *rty_MTractionControlRLTotal = rtb_Subtract_idx_2;

  /* SignalConversion generated from: '<Root>/MTractionControlRRTotal' */
  *rty_MTractionControlRRTotal = rtb_Subtract_idx_3;

  /* SignalConversion generated from: '<Root>/NTractionControlMultiplierFL' incorporates:
   *  Constant: '<S12>/Constant1'
   *  Saturate: '<S12>/Saturation2'
   *  Sum: '<S12>/Add1'
   */
  *rty_NTractionControlMultiplierF = 1.0 - rtb_Kp1_linear_agg2_idx_0;

  /* SignalConversion generated from: '<Root>/NTractionControlMultiplierFR' incorporates:
   *  Constant: '<S12>/Constant1'
   *  Saturate: '<S12>/Saturation2'
   *  Sum: '<S12>/Add1'
   */
  *rty_NTractionControlMultiplie_c = 1.0 - rtb_Kp1_linear_agg2_idx_1;

  /* SignalConversion generated from: '<Root>/NTractionControlMultiplierRL' incorporates:
   *  Constant: '<S12>/Constant1'
   *  Saturate: '<S12>/Saturation2'
   *  Sum: '<S12>/Add1'
   */
  *rty_NTractionControlMultiplierR = 1.0 - rtb_Kp1_linear_agg2_idx_2;

  /* SignalConversion generated from: '<Root>/NTractionControlMultiplierRR' incorporates:
   *  Constant: '<S12>/Constant1'
   *  Saturate: '<S12>/Saturation2'
   *  Sum: '<S12>/Add1'
   */
  *rty_NTractionControlMultiplie_n = 1.0 - rtb_Kp1_linear_agg2_idx_3;

  /* SignalConversion generated from: '<Root>/NABSMultiplierFL' */
  *rty_NABSMultiplierFL = rtb_Kp1_linear_agg2_m_idx_0;

  /* SignalConversion generated from: '<Root>/NABSMultiplierFR' */
  *rty_NABSMultiplierFR = rtb_Kp1_linear_agg2_m_idx_1;

  /* SignalConversion generated from: '<Root>/NABSMultiplierRL' */
  *rty_NABSMultiplierRL = rtb_Kp1_linear_agg2_m_idx_2;

  /* SignalConversion generated from: '<Root>/NABSMultiplierRR' */
  *rty_NABSMultiplierRR = rtb_Abs;

  /* SignalConversion generated from: '<Root>/rSlipRatioFLActual' */
  *rty_rSlipRatioFLActual = rtb_Saturation1_idx_0;

  /* SignalConversion generated from: '<Root>/rSlipRatioFRActual' */
  *rty_rSlipRatioFRActual = rtb_Saturation1_idx_1;

  /* SignalConversion generated from: '<Root>/rSlipRatioRLActual' */
  *rty_rSlipRatioRLActual = rtb_Saturation1_idx_2;

  /* SignalConversion generated from: '<Root>/rSlipRatioRRActual' */
  *rty_rSlipRatioRRActual = rtb_Saturation;
}

/* Model initialize function */
void TractionControl_initialize(const char_T **rt_errorStatus,
  RT_MODEL_TractionControl_T *const TractionControl_M)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(TractionControl_M, rt_errorStatus);

  /* user code (Initialize function Body) */
  LL_TIM_EnableCounter(TIM2);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
