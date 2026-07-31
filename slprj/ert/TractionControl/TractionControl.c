/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: TractionControl.c
 *
 * Code generated for Simulink model 'TractionControl'.
 *
 * Model version                  : 13.2
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Fri Jul 31 17:37:27 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "TractionControl.h"
#include "rtwtypes.h"
#include <math.h>
#include "rt_nonfinite.h"
#include "TractionControl_private.h"
#include "look1_binlxpw.h"

/* Output and update for referenced model: 'TractionControl' */
void TractionControl(const real_T *rtu_rSteeringAngle, const real_T
                     *rtu_MTotalRequested, const real_T *rtu_rGrip, const real_T
                     *rtu_MTorqueDistributionFL, const real_T
                     *rtu_MTorqueDistributionFR, const real_T
                     *rtu_MTorqueDistributionRL, const real_T
                     *rtu_MTorqueDistributionRR, const boolean_T *rtu_BTCOn,
                     const real_T *rtu_vChassis, const real_T
                     *rtu_rSlipRatioFLActual, const real_T
                     *rtu_rSlipRatioFRActual, const real_T
                     *rtu_rSlipRatioRLActual, const real_T
                     *rtu_rSlipRatioRRActual, const real_T *rtu_NTCKdSelector,
                     real_T *rty_rSlipRatioOptimal, real_T
                     *rty_NTractionControlMultiplierF, real_T
                     *rty_NTractionControlMultiplie_c, real_T
                     *rty_NTractionControlMultiplierR, real_T
                     *rty_NTractionControlMultiplie_n, real_T
                     *rty_NTractionControlPTermFL, real_T
                     *rty_NTractionControlPTermFR, real_T
                     *rty_NTractionControlPTermRL, real_T
                     *rty_NTractionControlPTermRR, real_T
                     *rty_NTractionControlDTermFL, real_T
                     *rty_NTractionControlDTermFR, real_T
                     *rty_NTractionControlDTermRL, real_T
                     *rty_NTractionControlDTermRR, real_T *rty_NABSMultiplierFL,
                     real_T *rty_NABSMultiplierFR, real_T *rty_NABSMultiplierRL,
                     real_T *rty_NABSMultiplierRR, real_T *rty_NABSPTermFL,
                     real_T *rty_NABSPTermFR, real_T *rty_NABSPTermRL, real_T
                     *rty_NABSPTermRR, real_T *rty_NABSDTermFL, real_T
                     *rty_NABSDTermFR, real_T *rty_NABSDTermRL, real_T
                     *rty_NABSDTermRR, real_T *rty_MTractionControlFLTotal,
                     real_T *rty_MTractionControlFRTotal, real_T
                     *rty_MTractionControlRLTotal, real_T
                     *rty_MTractionControlRRTotal, real_T
                     *rty_MTractionControlFLFinal, real_T
                     *rty_MTractionControlFRFinal, real_T
                     *rty_MTractionControlRLFinal, real_T
                     *rty_MTractionControlRRFinal, DW_TractionControl_f_T
                     *localDW)
{
  real_T Memory_PreviousInput_j;
  real_T rtb_Abs;
  real_T rtb_Gain1;
  real_T rtb_Gain2;
  real_T rtb_Gain_c;
  real_T rtb_Multiply3;
  real_T rtb_Saturation1_b_0;
  real_T rtb_Saturation1_b_idx_0;
  real_T rtb_Saturation1_b_idx_1;
  real_T rtb_Saturation1_b_idx_2;
  real_T rtb_Saturation1_idx_0;
  real_T rtb_Saturation1_idx_1;
  real_T rtb_Saturation1_idx_2;
  real_T rtb_Saturation3_e_idx_0;
  real_T rtb_Saturation3_e_idx_1;
  real_T rtb_Saturation3_e_idx_2;
  real_T rtb_Saturation3_e_idx_3;
  real_T rtb_Saturation3_idx_0;
  real_T rtb_Saturation3_idx_1;
  real_T rtb_Saturation3_idx_2;
  real_T rtb_Saturation3_idx_3;
  real_T u0;
  real_T u0_0;
  real_T u0_1;
  real_T u0_2;
  real_T u0_3;
  real_T u0_4;

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
    rtb_Abs = (3.0 * rtb_Abs + 100.0) * 0.001;
  } else {
    rtb_Abs = 0.1;
  }

  /* Signum: '<S5>/Sign' */
  if (rtIsNaN(*rtu_MTotalRequested)) {
    rtb_Saturation1_idx_0 = (rtNaN);
  } else if (*rtu_MTotalRequested < 0.0) {
    rtb_Saturation1_idx_0 = -1.0;
  } else {
    rtb_Saturation1_idx_0 = (*rtu_MTotalRequested > 0.0);
  }

  /* Product: '<S5>/Product' incorporates:
   *  Signum: '<S5>/Sign'
   *  Switch: '<S5>/Switch2'
   */
  *rty_rSlipRatioOptimal = rtb_Abs * rtb_Saturation1_idx_0;

  /* Sum: '<S6>/Subtract' */
  rtb_Saturation3_e_idx_0 = *rtu_rSlipRatioFLActual - *rty_rSlipRatioOptimal;
  rtb_Saturation3_e_idx_1 = *rtu_rSlipRatioFRActual - *rty_rSlipRatioOptimal;
  rtb_Saturation3_e_idx_2 = *rtu_rSlipRatioRLActual - *rty_rSlipRatioOptimal;
  rtb_Saturation3_e_idx_3 = *rtu_rSlipRatioRRActual - *rty_rSlipRatioOptimal;

  /* Saturate: '<S20>/Saturation1' */
  if (rtb_Saturation3_e_idx_0 > 1.0) {
    rtb_Abs = 1.0;
  } else if (rtb_Saturation3_e_idx_0 < -1.0) {
    rtb_Abs = -1.0;
  } else {
    rtb_Abs = rtb_Saturation3_e_idx_0;
  }

  rtb_Saturation1_idx_0 = rtb_Abs;

  /* Gain: '<S22>/Gain' incorporates:
   *  Memory: '<S22>/Memory'
   *  Sum: '<S22>/Add'
   */
  localDW->Memory_PreviousInput[0] = (rtb_Abs - localDW->Memory_PreviousInput[0])
    * 1000.0;

  /* Saturate: '<S20>/Saturation1' */
  if (rtb_Saturation3_e_idx_1 > 1.0) {
    rtb_Abs = 1.0;
  } else if (rtb_Saturation3_e_idx_1 < -1.0) {
    rtb_Abs = -1.0;
  } else {
    rtb_Abs = rtb_Saturation3_e_idx_1;
  }

  rtb_Saturation1_idx_1 = rtb_Abs;

  /* Gain: '<S22>/Gain' incorporates:
   *  Memory: '<S22>/Memory'
   *  Sum: '<S22>/Add'
   */
  localDW->Memory_PreviousInput[1] = (rtb_Abs - localDW->Memory_PreviousInput[1])
    * 1000.0;

  /* Saturate: '<S20>/Saturation1' */
  if (rtb_Saturation3_e_idx_2 > 1.0) {
    rtb_Abs = 1.0;
  } else if (rtb_Saturation3_e_idx_2 < -1.0) {
    rtb_Abs = -1.0;
  } else {
    rtb_Abs = rtb_Saturation3_e_idx_2;
  }

  rtb_Saturation1_idx_2 = rtb_Abs;

  /* Gain: '<S22>/Gain' incorporates:
   *  Memory: '<S22>/Memory'
   *  Sum: '<S22>/Add'
   */
  localDW->Memory_PreviousInput[2] = (rtb_Abs - localDW->Memory_PreviousInput[2])
    * 1000.0;

  /* Saturate: '<S20>/Saturation1' */
  if (rtb_Saturation3_e_idx_3 > 1.0) {
    rtb_Abs = 1.0;
  } else if (rtb_Saturation3_e_idx_3 < -1.0) {
    rtb_Abs = -1.0;
  } else {
    rtb_Abs = rtb_Saturation3_e_idx_3;
  }

  /* Gain: '<S22>/Gain' incorporates:
   *  Memory: '<S22>/Memory'
   *  Sum: '<S22>/Add'
   */
  localDW->Memory_PreviousInput[3] = (rtb_Abs - localDW->Memory_PreviousInput[3])
    * 1000.0;

  /* MultiPortSwitch: '<S21>/Multiport Switch' incorporates:
   *  Constant: '<S21>/Constant'
   *  Constant: '<S21>/Constant1'
   *  Constant: '<S21>/Constant2'
   *  Constant: '<S21>/Constant3'
   *  Constant: '<S21>/Constant4'
   */
  switch ((int32_T)*rtu_NTCKdSelector) {
   case 1:
    rtb_Multiply3 = 0.0;
    break;

   case 2:
    rtb_Multiply3 = 0.05;
    break;

   case 3:
    rtb_Multiply3 = 0.1;
    break;

   case 4:
    rtb_Multiply3 = 0.2;
    break;

   default:
    rtb_Multiply3 = 0.001;
    break;
  }

  /* End of MultiPortSwitch: '<S21>/Multiport Switch' */

  /* Product: '<S20>/Multiply2' incorporates:
   *  Memory: '<S22>/y(k-1)'
   *  Product: '<S23>/Multiply'
   *  Sum: '<S23>/Subtract'
   *  Sum: '<S23>/Subtract2'
   */
  u0_2 = ((localDW->Memory_PreviousInput[0] - localDW->yk1_PreviousInput[0]) *
          TractionControl_ConstB.Subtract1_g + localDW->yk1_PreviousInput[0]) *
    rtb_Multiply3;

  /* Saturate: '<S20>/Saturation' */
  if (u0_2 > 0.0) {
    u0_2 = 0.0;
  } else if (u0_2 < -0.5) {
    u0_2 = -0.5;
  }

  /* RateLimiter: '<S20>/Rate Limiter' */
  rtb_Gain_c = u0_2 - localDW->PrevY[0];
  if (rtb_Gain_c > 0.006) {
    u0_2 = localDW->PrevY[0] + 0.006;
  } else if (rtb_Gain_c < -0.03) {
    u0_2 = localDW->PrevY[0] - 0.03;
  }

  /* SignalConversion generated from: '<Root>/NTractionControlDTermFL' incorporates:
   *  RateLimiter: '<S20>/Rate Limiter'
   */
  *rty_NTractionControlDTermFL = u0_2;

  /* RateLimiter: '<S20>/Rate Limiter' */
  localDW->PrevY[0] = u0_2;

  /* Abs: '<S21>/Abs' incorporates:
   *  Abs: '<S17>/Abs'
   */
  u0_4 = fabs(rtb_Saturation3_e_idx_0);

  /* Saturate: '<S21>/Saturation' incorporates:
   *  Abs: '<S21>/Abs'
   *  Lookup_n-D: '<S21>/KpLookup'
   *  Product: '<S21>/Divide'
   */
  u0 = look1_binlxpw(u0_4, rtCP_KpLookup_bp01Data, rtCP_KpLookup_tableData, 41U)
    / *rtu_rGrip;
  if (u0 > 2.0) {
    u0 = 2.0;
  } else if (u0 < 0.0) {
    u0 = 0.0;
  }

  /* Saturate: '<S20>/Saturation2' incorporates:
   *  Product: '<S20>/Multiply'
   *  Saturate: '<S21>/Saturation'
   */
  u0_3 = rtb_Saturation1_idx_0 * u0;
  if (u0_3 < 0.0) {
    u0_3 = 0.0;
  }

  /* SignalConversion generated from: '<Root>/NTractionControlPTermFL' incorporates:
   *  Saturate: '<S20>/Saturation2'
   */
  *rty_NTractionControlPTermFL = u0_3;

  /* Sum: '<S20>/Subtract' incorporates:
   *  Constant: '<S20>/Constant'
   *  Sum: '<S20>/Add'
   */
  rtb_Saturation3_idx_0 = 1.0 - (u0_3 + u0_2);

  /* Saturate: '<S20>/Saturation3' */
  if (rtb_Saturation3_idx_0 > 1.0) {
    rtb_Saturation3_idx_0 = 1.0;
  } else if (rtb_Saturation3_idx_0 < 0.0) {
    rtb_Saturation3_idx_0 = 0.0;
  }

  /* Saturate: '<S16>/Saturation1' incorporates:
   *  Abs: '<S21>/Abs'
   */
  if (rtb_Saturation3_e_idx_0 > 1.0) {
    rtb_Saturation1_b_0 = 1.0;
  } else if (rtb_Saturation3_e_idx_0 < -1.0) {
    rtb_Saturation1_b_0 = -1.0;
  } else {
    rtb_Saturation1_b_0 = rtb_Saturation3_e_idx_0;
  }

  rtb_Saturation1_b_idx_0 = rtb_Saturation1_b_0;

  /* Saturate: '<S17>/Saturation' incorporates:
   *  Lookup_n-D: '<S17>/KpLookup'
   *  Product: '<S17>/Divide'
   */
  u0 = look1_binlxpw(u0_4, rtCP_KpLookup_bp01Data_b, rtCP_KpLookup_tableData_g,
                     41U) / *rtu_rGrip;
  if (u0 > 2.0) {
    u0 = 2.0;
  } else if (u0 < 0.0) {
    u0 = 0.0;
  }

  /* Saturate: '<S16>/Saturation2' incorporates:
   *  Product: '<S16>/Multiply'
   *  Saturate: '<S17>/Saturation'
   */
  u0 *= rtb_Saturation1_b_0;
  if (u0 > 0.0) {
    u0 = 0.0;
  }

  /* Product: '<S20>/Multiply2' incorporates:
   *  Memory: '<S22>/y(k-1)'
   *  Product: '<S23>/Multiply'
   *  Sum: '<S23>/Subtract'
   *  Sum: '<S23>/Subtract2'
   */
  u0_2 = ((localDW->Memory_PreviousInput[1] - localDW->yk1_PreviousInput[1]) *
          TractionControl_ConstB.Subtract1_g + localDW->yk1_PreviousInput[1]) *
    rtb_Multiply3;

  /* Saturate: '<S20>/Saturation' */
  if (u0_2 > 0.0) {
    u0_2 = 0.0;
  } else if (u0_2 < -0.5) {
    u0_2 = -0.5;
  }

  /* RateLimiter: '<S20>/Rate Limiter' */
  rtb_Gain_c = u0_2 - localDW->PrevY[1];
  if (rtb_Gain_c > 0.006) {
    u0_2 = localDW->PrevY[1] + 0.006;
  } else if (rtb_Gain_c < -0.03) {
    u0_2 = localDW->PrevY[1] - 0.03;
  }

  /* SignalConversion generated from: '<Root>/NTractionControlDTermFR' incorporates:
   *  RateLimiter: '<S20>/Rate Limiter'
   */
  *rty_NTractionControlDTermFR = u0_2;

  /* RateLimiter: '<S20>/Rate Limiter' */
  localDW->PrevY[1] = u0_2;

  /* Abs: '<S21>/Abs' incorporates:
   *  Abs: '<S17>/Abs'
   */
  u0_4 = fabs(rtb_Saturation3_e_idx_1);

  /* Saturate: '<S21>/Saturation' incorporates:
   *  Abs: '<S21>/Abs'
   *  Lookup_n-D: '<S21>/KpLookup'
   *  Product: '<S21>/Divide'
   */
  u0_0 = look1_binlxpw(u0_4, rtCP_KpLookup_bp01Data, rtCP_KpLookup_tableData,
                       41U) / *rtu_rGrip;
  if (u0_0 > 2.0) {
    u0_0 = 2.0;
  } else if (u0_0 < 0.0) {
    u0_0 = 0.0;
  }

  /* Saturate: '<S20>/Saturation2' incorporates:
   *  Product: '<S20>/Multiply'
   *  Saturate: '<S21>/Saturation'
   */
  u0_3 = rtb_Saturation1_idx_1 * u0_0;
  if (u0_3 < 0.0) {
    u0_3 = 0.0;
  }

  /* SignalConversion generated from: '<Root>/NTractionControlPTermFR' incorporates:
   *  Saturate: '<S20>/Saturation2'
   */
  *rty_NTractionControlPTermFR = u0_3;

  /* Sum: '<S20>/Subtract' incorporates:
   *  Constant: '<S20>/Constant'
   *  Sum: '<S20>/Add'
   */
  rtb_Saturation3_idx_1 = 1.0 - (u0_3 + u0_2);

  /* Saturate: '<S20>/Saturation3' */
  if (rtb_Saturation3_idx_1 > 1.0) {
    rtb_Saturation3_idx_1 = 1.0;
  } else if (rtb_Saturation3_idx_1 < 0.0) {
    rtb_Saturation3_idx_1 = 0.0;
  }

  /* Saturate: '<S16>/Saturation1' incorporates:
   *  Abs: '<S21>/Abs'
   */
  if (rtb_Saturation3_e_idx_1 > 1.0) {
    rtb_Saturation1_b_0 = 1.0;
  } else if (rtb_Saturation3_e_idx_1 < -1.0) {
    rtb_Saturation1_b_0 = -1.0;
  } else {
    rtb_Saturation1_b_0 = rtb_Saturation3_e_idx_1;
  }

  rtb_Saturation1_b_idx_1 = rtb_Saturation1_b_0;

  /* Saturate: '<S17>/Saturation' incorporates:
   *  Lookup_n-D: '<S17>/KpLookup'
   *  Product: '<S17>/Divide'
   */
  u0_0 = look1_binlxpw(u0_4, rtCP_KpLookup_bp01Data_b, rtCP_KpLookup_tableData_g,
                       41U) / *rtu_rGrip;
  if (u0_0 > 2.0) {
    u0_0 = 2.0;
  } else if (u0_0 < 0.0) {
    u0_0 = 0.0;
  }

  /* Saturate: '<S16>/Saturation2' incorporates:
   *  Product: '<S16>/Multiply'
   *  Saturate: '<S17>/Saturation'
   */
  u0_0 *= rtb_Saturation1_b_0;
  if (u0_0 > 0.0) {
    u0_0 = 0.0;
  }

  /* Product: '<S20>/Multiply2' incorporates:
   *  Memory: '<S22>/y(k-1)'
   *  Product: '<S23>/Multiply'
   *  Sum: '<S23>/Subtract'
   *  Sum: '<S23>/Subtract2'
   */
  u0_2 = ((localDW->Memory_PreviousInput[2] - localDW->yk1_PreviousInput[2]) *
          TractionControl_ConstB.Subtract1_g + localDW->yk1_PreviousInput[2]) *
    rtb_Multiply3;

  /* Saturate: '<S20>/Saturation' */
  if (u0_2 > 0.0) {
    u0_2 = 0.0;
  } else if (u0_2 < -0.5) {
    u0_2 = -0.5;
  }

  /* RateLimiter: '<S20>/Rate Limiter' */
  rtb_Gain_c = u0_2 - localDW->PrevY[2];
  if (rtb_Gain_c > 0.006) {
    u0_2 = localDW->PrevY[2] + 0.006;
  } else if (rtb_Gain_c < -0.03) {
    u0_2 = localDW->PrevY[2] - 0.03;
  }

  /* SignalConversion generated from: '<Root>/NTractionControlDTermRL' incorporates:
   *  RateLimiter: '<S20>/Rate Limiter'
   */
  *rty_NTractionControlDTermRL = u0_2;

  /* RateLimiter: '<S20>/Rate Limiter' */
  localDW->PrevY[2] = u0_2;

  /* Abs: '<S21>/Abs' incorporates:
   *  Abs: '<S17>/Abs'
   */
  u0_4 = fabs(rtb_Saturation3_e_idx_2);

  /* Saturate: '<S21>/Saturation' incorporates:
   *  Abs: '<S21>/Abs'
   *  Lookup_n-D: '<S21>/KpLookup'
   *  Product: '<S21>/Divide'
   */
  u0_1 = look1_binlxpw(u0_4, rtCP_KpLookup_bp01Data, rtCP_KpLookup_tableData,
                       41U) / *rtu_rGrip;
  if (u0_1 > 2.0) {
    u0_1 = 2.0;
  } else if (u0_1 < 0.0) {
    u0_1 = 0.0;
  }

  /* Saturate: '<S20>/Saturation2' incorporates:
   *  Product: '<S20>/Multiply'
   *  Saturate: '<S21>/Saturation'
   */
  u0_3 = rtb_Saturation1_idx_2 * u0_1;
  if (u0_3 < 0.0) {
    u0_3 = 0.0;
  }

  /* SignalConversion generated from: '<Root>/NTractionControlPTermRL' incorporates:
   *  Saturate: '<S20>/Saturation2'
   */
  *rty_NTractionControlPTermRL = u0_3;

  /* Sum: '<S20>/Subtract' incorporates:
   *  Constant: '<S20>/Constant'
   *  Sum: '<S20>/Add'
   */
  rtb_Saturation3_idx_2 = 1.0 - (u0_3 + u0_2);

  /* Saturate: '<S20>/Saturation3' */
  if (rtb_Saturation3_idx_2 > 1.0) {
    rtb_Saturation3_idx_2 = 1.0;
  } else if (rtb_Saturation3_idx_2 < 0.0) {
    rtb_Saturation3_idx_2 = 0.0;
  }

  /* Saturate: '<S16>/Saturation1' incorporates:
   *  Abs: '<S21>/Abs'
   */
  if (rtb_Saturation3_e_idx_2 > 1.0) {
    rtb_Saturation1_b_0 = 1.0;
  } else if (rtb_Saturation3_e_idx_2 < -1.0) {
    rtb_Saturation1_b_0 = -1.0;
  } else {
    rtb_Saturation1_b_0 = rtb_Saturation3_e_idx_2;
  }

  rtb_Saturation1_b_idx_2 = rtb_Saturation1_b_0;

  /* Saturate: '<S17>/Saturation' incorporates:
   *  Lookup_n-D: '<S17>/KpLookup'
   *  Product: '<S17>/Divide'
   */
  u0_1 = look1_binlxpw(u0_4, rtCP_KpLookup_bp01Data_b, rtCP_KpLookup_tableData_g,
                       41U) / *rtu_rGrip;
  if (u0_1 > 2.0) {
    u0_1 = 2.0;
  } else if (u0_1 < 0.0) {
    u0_1 = 0.0;
  }

  /* Saturate: '<S16>/Saturation2' incorporates:
   *  Product: '<S16>/Multiply'
   *  Saturate: '<S17>/Saturation'
   */
  u0_1 *= rtb_Saturation1_b_0;
  if (u0_1 > 0.0) {
    u0_1 = 0.0;
  }

  /* Product: '<S20>/Multiply2' incorporates:
   *  Memory: '<S22>/y(k-1)'
   *  Product: '<S23>/Multiply'
   *  Sum: '<S23>/Subtract'
   *  Sum: '<S23>/Subtract2'
   */
  u0_2 = ((localDW->Memory_PreviousInput[3] - localDW->yk1_PreviousInput[3]) *
          TractionControl_ConstB.Subtract1_g + localDW->yk1_PreviousInput[3]) *
    rtb_Multiply3;

  /* Saturate: '<S20>/Saturation' */
  if (u0_2 > 0.0) {
    u0_2 = 0.0;
  } else if (u0_2 < -0.5) {
    u0_2 = -0.5;
  }

  /* RateLimiter: '<S20>/Rate Limiter' */
  rtb_Gain_c = u0_2 - localDW->PrevY[3];
  if (rtb_Gain_c > 0.006) {
    u0_2 = localDW->PrevY[3] + 0.006;
  } else if (rtb_Gain_c < -0.03) {
    u0_2 = localDW->PrevY[3] - 0.03;
  }

  localDW->PrevY[3] = u0_2;

  /* Abs: '<S21>/Abs' incorporates:
   *  Abs: '<S17>/Abs'
   */
  u0_4 = fabs(rtb_Saturation3_e_idx_3);

  /* Saturate: '<S21>/Saturation' incorporates:
   *  Abs: '<S21>/Abs'
   *  Lookup_n-D: '<S21>/KpLookup'
   *  Product: '<S21>/Divide'
   */
  u0_3 = look1_binlxpw(u0_4, rtCP_KpLookup_bp01Data, rtCP_KpLookup_tableData,
                       41U) / *rtu_rGrip;
  if (u0_3 > 2.0) {
    u0_3 = 2.0;
  } else if (u0_3 < 0.0) {
    u0_3 = 0.0;
  }

  /* Saturate: '<S20>/Saturation2' incorporates:
   *  Product: '<S20>/Multiply'
   *  Saturate: '<S20>/Saturation1'
   *  Saturate: '<S21>/Saturation'
   */
  u0_3 *= rtb_Abs;
  if (u0_3 < 0.0) {
    u0_3 = 0.0;
  }

  /* Sum: '<S20>/Subtract' incorporates:
   *  Constant: '<S20>/Constant'
   *  Sum: '<S20>/Add'
   */
  rtb_Saturation3_idx_3 = 1.0 - (u0_3 + u0_2);

  /* Saturate: '<S20>/Saturation3' */
  if (rtb_Saturation3_idx_3 > 1.0) {
    rtb_Saturation3_idx_3 = 1.0;
  } else if (rtb_Saturation3_idx_3 < 0.0) {
    rtb_Saturation3_idx_3 = 0.0;
  }

  /* Saturate: '<S16>/Saturation1' incorporates:
   *  Abs: '<S21>/Abs'
   */
  if (rtb_Saturation3_e_idx_3 > 1.0) {
    rtb_Saturation1_b_0 = 1.0;
  } else if (rtb_Saturation3_e_idx_3 < -1.0) {
    rtb_Saturation1_b_0 = -1.0;
  } else {
    rtb_Saturation1_b_0 = rtb_Saturation3_e_idx_3;
  }

  /* Saturate: '<S17>/Saturation' incorporates:
   *  Lookup_n-D: '<S17>/KpLookup'
   *  Product: '<S17>/Divide'
   */
  u0_4 = look1_binlxpw(u0_4, rtCP_KpLookup_bp01Data_b, rtCP_KpLookup_tableData_g,
                       41U) / *rtu_rGrip;
  if (u0_4 > 2.0) {
    u0_4 = 2.0;
  } else if (u0_4 < 0.0) {
    u0_4 = 0.0;
  }

  /* Saturate: '<S16>/Saturation2' incorporates:
   *  Product: '<S16>/Multiply'
   *  Saturate: '<S17>/Saturation'
   */
  u0_4 *= rtb_Saturation1_b_0;
  if (u0_4 > 0.0) {
    u0_4 = 0.0;
  }

  /* MultiPortSwitch: '<S17>/Multiport Switch' incorporates:
   *  Constant: '<S17>/Constant'
   *  Constant: '<S17>/Constant1'
   *  Constant: '<S17>/Constant2'
   *  Constant: '<S17>/Constant3'
   *  Constant: '<S17>/Constant4'
   */
  switch ((int32_T)*rtu_NTCKdSelector) {
   case 1:
    rtb_Multiply3 = 0.0;
    break;

   case 2:
    rtb_Multiply3 = 0.05;
    break;

   case 3:
    rtb_Multiply3 = 0.1;
    break;

   case 4:
    rtb_Multiply3 = 0.2;
    break;

   default:
    rtb_Multiply3 = 0.001;
    break;
  }

  /* End of MultiPortSwitch: '<S17>/Multiport Switch' */

  /* Gain: '<S18>/Gain' incorporates:
   *  Memory: '<S18>/Memory'
   *  Sum: '<S18>/Add'
   */
  Memory_PreviousInput_j = (rtb_Saturation1_b_idx_0 -
    localDW->Memory_PreviousInput_j[0]) * 1000.0;
  localDW->Memory_PreviousInput_j[0] = Memory_PreviousInput_j;

  /* Product: '<S16>/Multiply2' incorporates:
   *  Memory: '<S18>/y(k-1)'
   *  Product: '<S19>/Multiply'
   *  Sum: '<S19>/Subtract'
   *  Sum: '<S19>/Subtract2'
   */
  Memory_PreviousInput_j = ((Memory_PreviousInput_j -
    localDW->yk1_PreviousInput_g[0]) * TractionControl_ConstB.Subtract1 +
    localDW->yk1_PreviousInput_g[0]) * rtb_Multiply3;

  /* Saturate: '<S16>/Saturation' */
  if (Memory_PreviousInput_j > 0.5) {
    Memory_PreviousInput_j = 0.5;
  } else if (Memory_PreviousInput_j < 0.0) {
    Memory_PreviousInput_j = 0.0;
  }

  /* RateLimiter: '<S16>/Rate Limiter' */
  rtb_Gain_c = Memory_PreviousInput_j - localDW->PrevY_f[0];
  if (rtb_Gain_c > 0.03) {
    Memory_PreviousInput_j = localDW->PrevY_f[0] + 0.03;
  } else if (rtb_Gain_c < -0.006) {
    Memory_PreviousInput_j = localDW->PrevY_f[0] - 0.006;
  }

  /* SignalConversion generated from: '<Root>/NABSDTermFL' incorporates:
   *  RateLimiter: '<S16>/Rate Limiter'
   */
  *rty_NABSDTermFL = Memory_PreviousInput_j;

  /* RateLimiter: '<S16>/Rate Limiter' */
  localDW->PrevY_f[0] = Memory_PreviousInput_j;

  /* Sum: '<S16>/Subtract' incorporates:
   *  Constant: '<S16>/Constant'
   *  Sum: '<S16>/Add'
   */
  rtb_Saturation3_e_idx_0 = (u0 + Memory_PreviousInput_j) + 1.0;

  /* Saturate: '<S16>/Saturation3' */
  if (rtb_Saturation3_e_idx_0 > 1.0) {
    rtb_Saturation3_e_idx_0 = 1.0;
  } else if (rtb_Saturation3_e_idx_0 < 0.0) {
    rtb_Saturation3_e_idx_0 = 0.0;
  }

  /* Gain: '<S18>/Gain' incorporates:
   *  Memory: '<S18>/Memory'
   *  Sum: '<S18>/Add'
   */
  Memory_PreviousInput_j = (rtb_Saturation1_b_idx_1 -
    localDW->Memory_PreviousInput_j[1]) * 1000.0;
  localDW->Memory_PreviousInput_j[1] = Memory_PreviousInput_j;

  /* Product: '<S16>/Multiply2' incorporates:
   *  Memory: '<S18>/y(k-1)'
   *  Product: '<S19>/Multiply'
   *  Sum: '<S19>/Subtract'
   *  Sum: '<S19>/Subtract2'
   */
  Memory_PreviousInput_j = ((Memory_PreviousInput_j -
    localDW->yk1_PreviousInput_g[1]) * TractionControl_ConstB.Subtract1 +
    localDW->yk1_PreviousInput_g[1]) * rtb_Multiply3;

  /* Saturate: '<S16>/Saturation' */
  if (Memory_PreviousInput_j > 0.5) {
    Memory_PreviousInput_j = 0.5;
  } else if (Memory_PreviousInput_j < 0.0) {
    Memory_PreviousInput_j = 0.0;
  }

  /* RateLimiter: '<S16>/Rate Limiter' */
  rtb_Gain_c = Memory_PreviousInput_j - localDW->PrevY_f[1];
  if (rtb_Gain_c > 0.03) {
    Memory_PreviousInput_j = localDW->PrevY_f[1] + 0.03;
  } else if (rtb_Gain_c < -0.006) {
    Memory_PreviousInput_j = localDW->PrevY_f[1] - 0.006;
  }

  /* SignalConversion generated from: '<Root>/NABSDTermFR' incorporates:
   *  RateLimiter: '<S16>/Rate Limiter'
   */
  *rty_NABSDTermFR = Memory_PreviousInput_j;

  /* RateLimiter: '<S16>/Rate Limiter' */
  localDW->PrevY_f[1] = Memory_PreviousInput_j;

  /* Sum: '<S16>/Subtract' incorporates:
   *  Constant: '<S16>/Constant'
   *  Sum: '<S16>/Add'
   */
  rtb_Saturation3_e_idx_1 = (u0_0 + Memory_PreviousInput_j) + 1.0;

  /* Saturate: '<S16>/Saturation3' */
  if (rtb_Saturation3_e_idx_1 > 1.0) {
    rtb_Saturation3_e_idx_1 = 1.0;
  } else if (rtb_Saturation3_e_idx_1 < 0.0) {
    rtb_Saturation3_e_idx_1 = 0.0;
  }

  /* Gain: '<S18>/Gain' incorporates:
   *  Memory: '<S18>/Memory'
   *  Sum: '<S18>/Add'
   */
  Memory_PreviousInput_j = (rtb_Saturation1_b_idx_2 -
    localDW->Memory_PreviousInput_j[2]) * 1000.0;
  localDW->Memory_PreviousInput_j[2] = Memory_PreviousInput_j;

  /* Product: '<S16>/Multiply2' incorporates:
   *  Memory: '<S18>/y(k-1)'
   *  Product: '<S19>/Multiply'
   *  Sum: '<S19>/Subtract'
   *  Sum: '<S19>/Subtract2'
   */
  Memory_PreviousInput_j = ((Memory_PreviousInput_j -
    localDW->yk1_PreviousInput_g[2]) * TractionControl_ConstB.Subtract1 +
    localDW->yk1_PreviousInput_g[2]) * rtb_Multiply3;

  /* Saturate: '<S16>/Saturation' */
  if (Memory_PreviousInput_j > 0.5) {
    Memory_PreviousInput_j = 0.5;
  } else if (Memory_PreviousInput_j < 0.0) {
    Memory_PreviousInput_j = 0.0;
  }

  /* RateLimiter: '<S16>/Rate Limiter' */
  rtb_Gain_c = Memory_PreviousInput_j - localDW->PrevY_f[2];
  if (rtb_Gain_c > 0.03) {
    Memory_PreviousInput_j = localDW->PrevY_f[2] + 0.03;
  } else if (rtb_Gain_c < -0.006) {
    Memory_PreviousInput_j = localDW->PrevY_f[2] - 0.006;
  }

  /* SignalConversion generated from: '<Root>/NABSDTermRL' incorporates:
   *  RateLimiter: '<S16>/Rate Limiter'
   */
  *rty_NABSDTermRL = Memory_PreviousInput_j;

  /* RateLimiter: '<S16>/Rate Limiter' */
  localDW->PrevY_f[2] = Memory_PreviousInput_j;

  /* Sum: '<S16>/Subtract' incorporates:
   *  Constant: '<S16>/Constant'
   *  Sum: '<S16>/Add'
   */
  rtb_Saturation3_e_idx_2 = (u0_1 + Memory_PreviousInput_j) + 1.0;

  /* Saturate: '<S16>/Saturation3' */
  if (rtb_Saturation3_e_idx_2 > 1.0) {
    rtb_Saturation3_e_idx_2 = 1.0;
  } else if (rtb_Saturation3_e_idx_2 < 0.0) {
    rtb_Saturation3_e_idx_2 = 0.0;
  }

  /* Gain: '<S18>/Gain' incorporates:
   *  Memory: '<S18>/Memory'
   *  Saturate: '<S16>/Saturation1'
   *  Sum: '<S18>/Add'
   */
  Memory_PreviousInput_j = (rtb_Saturation1_b_0 -
    localDW->Memory_PreviousInput_j[3]) * 1000.0;
  localDW->Memory_PreviousInput_j[3] = Memory_PreviousInput_j;

  /* Product: '<S16>/Multiply2' incorporates:
   *  Memory: '<S18>/y(k-1)'
   *  Product: '<S19>/Multiply'
   *  Sum: '<S19>/Subtract'
   *  Sum: '<S19>/Subtract2'
   */
  Memory_PreviousInput_j = ((Memory_PreviousInput_j -
    localDW->yk1_PreviousInput_g[3]) * TractionControl_ConstB.Subtract1 +
    localDW->yk1_PreviousInput_g[3]) * rtb_Multiply3;

  /* Saturate: '<S16>/Saturation' */
  if (Memory_PreviousInput_j > 0.5) {
    Memory_PreviousInput_j = 0.5;
  } else if (Memory_PreviousInput_j < 0.0) {
    Memory_PreviousInput_j = 0.0;
  }

  /* RateLimiter: '<S16>/Rate Limiter' */
  rtb_Gain_c = Memory_PreviousInput_j - localDW->PrevY_f[3];
  if (rtb_Gain_c > 0.03) {
    Memory_PreviousInput_j = localDW->PrevY_f[3] + 0.03;
  } else if (rtb_Gain_c < -0.006) {
    Memory_PreviousInput_j = localDW->PrevY_f[3] - 0.006;
  }

  localDW->PrevY_f[3] = Memory_PreviousInput_j;

  /* Sum: '<S16>/Subtract' incorporates:
   *  Constant: '<S16>/Constant'
   *  Saturate: '<S16>/Saturation2'
   *  Sum: '<S16>/Add'
   */
  rtb_Saturation3_e_idx_3 = (u0_4 + Memory_PreviousInput_j) + 1.0;

  /* Saturate: '<S16>/Saturation3' */
  if (rtb_Saturation3_e_idx_3 > 1.0) {
    rtb_Saturation3_e_idx_3 = 1.0;
  } else if (rtb_Saturation3_e_idx_3 < 0.0) {
    rtb_Saturation3_e_idx_3 = 0.0;
  }

  /* Product: '<S2>/Multiply3' */
  rtb_Multiply3 = rtb_Saturation3_e_idx_0 * *rtu_MTorqueDistributionFL;

  /* Switch: '<S9>/Switch2' incorporates:
   *  Constant: '<S2>/Constant2'
   *  RelationalOperator: '<S9>/LowerRelop1'
   */
  if (rtb_Multiply3 > 0.0) {
    rtb_Multiply3 = 0.0;
  } else {
    /* Gain: '<S2>/Gain' incorporates:
     *  Abs: '<S2>/Abs1'
     */
    rtb_Gain_c = -fabs(*rtu_MTorqueDistributionFL);

    /* Switch: '<S9>/Switch' incorporates:
     *  RelationalOperator: '<S9>/UpperRelop'
     */
    if (rtb_Multiply3 < rtb_Gain_c) {
      rtb_Multiply3 = rtb_Gain_c;
    }

    /* End of Switch: '<S9>/Switch' */
  }

  /* End of Switch: '<S9>/Switch2' */

  /* Product: '<S2>/Multiply5' */
  rtb_Gain_c = rtb_Saturation3_e_idx_1 * *rtu_MTorqueDistributionFR;

  /* Switch: '<S11>/Switch2' incorporates:
   *  Constant: '<S2>/Constant4'
   *  RelationalOperator: '<S11>/LowerRelop1'
   */
  if (rtb_Gain_c > 0.0) {
    rtb_Gain_c = 0.0;
  } else {
    /* Gain: '<S2>/Gain1' incorporates:
     *  Abs: '<S2>/Abs3'
     */
    rtb_Gain1 = -fabs(*rtu_MTorqueDistributionFR);

    /* Switch: '<S11>/Switch' incorporates:
     *  RelationalOperator: '<S11>/UpperRelop'
     */
    if (rtb_Gain_c < rtb_Gain1) {
      rtb_Gain_c = rtb_Gain1;
    }

    /* End of Switch: '<S11>/Switch' */
  }

  /* End of Switch: '<S11>/Switch2' */

  /* Product: '<S2>/Multiply7' */
  rtb_Gain1 = rtb_Saturation3_e_idx_2 * *rtu_MTorqueDistributionRL;

  /* Switch: '<S13>/Switch2' incorporates:
   *  Constant: '<S2>/Constant6'
   *  RelationalOperator: '<S13>/LowerRelop1'
   */
  if (rtb_Gain1 > 0.0) {
    rtb_Gain1 = 0.0;
  } else {
    /* Gain: '<S2>/Gain2' incorporates:
     *  Abs: '<S2>/Abs5'
     */
    rtb_Gain2 = -fabs(*rtu_MTorqueDistributionRL);

    /* Switch: '<S13>/Switch' incorporates:
     *  RelationalOperator: '<S13>/UpperRelop'
     */
    if (rtb_Gain1 < rtb_Gain2) {
      rtb_Gain1 = rtb_Gain2;
    }

    /* End of Switch: '<S13>/Switch' */
  }

  /* End of Switch: '<S13>/Switch2' */

  /* Product: '<S2>/Multiply9' */
  rtb_Gain2 = rtb_Saturation3_e_idx_3 * *rtu_MTorqueDistributionRR;

  /* Switch: '<S15>/Switch2' incorporates:
   *  Constant: '<S2>/Constant8'
   *  RelationalOperator: '<S15>/LowerRelop1'
   */
  if (rtb_Gain2 > 0.0) {
    rtb_Gain2 = 0.0;
  } else {
    real_T rtb_Gain3;

    /* Gain: '<S2>/Gain3' incorporates:
     *  Abs: '<S2>/Abs7'
     */
    rtb_Gain3 = -fabs(*rtu_MTorqueDistributionRR);

    /* Switch: '<S15>/Switch' incorporates:
     *  RelationalOperator: '<S15>/UpperRelop'
     */
    if (rtb_Gain2 < rtb_Gain3) {
      rtb_Gain2 = rtb_Gain3;
    }

    /* End of Switch: '<S15>/Switch' */
  }

  /* End of Switch: '<S15>/Switch2' */

  /* MinMax: '<S2>/Max' */
  rtb_Multiply3 = fmax(fmax(fmax(rtb_Multiply3, rtb_Gain_c), rtb_Gain1),
                       rtb_Gain2);

  /* Switch: '<S2>/Switch1' */
  if (*rtu_MTorqueDistributionFL > 0.0) {
    /* Product: '<S2>/Multiply2' */
    rtb_Gain_c = rtb_Saturation3_idx_0 * *rtu_MTorqueDistributionFL;

    /* Abs: '<S2>/Abs' */
    rtb_Gain1 = fabs(*rtu_MTorqueDistributionFL);

    /* Switch: '<S8>/Switch2' incorporates:
     *  Constant: '<S2>/Constant'
     *  RelationalOperator: '<S8>/LowerRelop1'
     *  RelationalOperator: '<S8>/UpperRelop'
     *  Switch: '<S8>/Switch'
     */
    if (rtb_Gain_c > rtb_Gain1) {
      *rty_MTractionControlFLTotal = rtb_Gain1;
    } else if (rtb_Gain_c < 0.0) {
      /* Switch: '<S8>/Switch' incorporates:
       *  Constant: '<S2>/Constant'
       */
      *rty_MTractionControlFLTotal = 0.0;
    } else {
      *rty_MTractionControlFLTotal = rtb_Gain_c;
    }

    /* End of Switch: '<S8>/Switch2' */
  } else {
    *rty_MTractionControlFLTotal = rtb_Multiply3;
  }

  /* End of Switch: '<S2>/Switch1' */

  /* Switch: '<S2>/Switch2' */
  if (*rtu_MTorqueDistributionFR > 0.0) {
    /* Product: '<S2>/Multiply4' */
    rtb_Gain_c = rtb_Saturation3_idx_1 * *rtu_MTorqueDistributionFR;

    /* Abs: '<S2>/Abs2' */
    rtb_Gain1 = fabs(*rtu_MTorqueDistributionFR);

    /* Switch: '<S10>/Switch2' incorporates:
     *  Constant: '<S2>/Constant3'
     *  RelationalOperator: '<S10>/LowerRelop1'
     *  RelationalOperator: '<S10>/UpperRelop'
     *  Switch: '<S10>/Switch'
     */
    if (rtb_Gain_c > rtb_Gain1) {
      *rty_MTractionControlFRTotal = rtb_Gain1;
    } else if (rtb_Gain_c < 0.0) {
      /* Switch: '<S10>/Switch' incorporates:
       *  Constant: '<S2>/Constant3'
       */
      *rty_MTractionControlFRTotal = 0.0;
    } else {
      *rty_MTractionControlFRTotal = rtb_Gain_c;
    }

    /* End of Switch: '<S10>/Switch2' */
  } else {
    *rty_MTractionControlFRTotal = rtb_Multiply3;
  }

  /* End of Switch: '<S2>/Switch2' */

  /* Switch: '<S2>/Switch3' */
  if (*rtu_MTorqueDistributionRL > 0.0) {
    /* Product: '<S2>/Multiply6' */
    rtb_Gain_c = rtb_Saturation3_idx_2 * *rtu_MTorqueDistributionRL;

    /* Abs: '<S2>/Abs4' */
    rtb_Gain1 = fabs(*rtu_MTorqueDistributionRL);

    /* Switch: '<S12>/Switch2' incorporates:
     *  Constant: '<S2>/Constant5'
     *  RelationalOperator: '<S12>/LowerRelop1'
     *  RelationalOperator: '<S12>/UpperRelop'
     *  Switch: '<S12>/Switch'
     */
    if (rtb_Gain_c > rtb_Gain1) {
      *rty_MTractionControlRLTotal = rtb_Gain1;
    } else if (rtb_Gain_c < 0.0) {
      /* Switch: '<S12>/Switch' incorporates:
       *  Constant: '<S2>/Constant5'
       */
      *rty_MTractionControlRLTotal = 0.0;
    } else {
      *rty_MTractionControlRLTotal = rtb_Gain_c;
    }

    /* End of Switch: '<S12>/Switch2' */
  } else {
    *rty_MTractionControlRLTotal = rtb_Multiply3;
  }

  /* End of Switch: '<S2>/Switch3' */

  /* Switch: '<S2>/Switch4' */
  if (*rtu_MTorqueDistributionRR > 0.0) {
    /* Product: '<S2>/Multiply8' */
    rtb_Multiply3 = rtb_Saturation3_idx_3 * *rtu_MTorqueDistributionRR;

    /* Abs: '<S2>/Abs6' */
    rtb_Gain_c = fabs(*rtu_MTorqueDistributionRR);

    /* Switch: '<S14>/Switch2' incorporates:
     *  Constant: '<S2>/Constant7'
     *  RelationalOperator: '<S14>/LowerRelop1'
     *  RelationalOperator: '<S14>/UpperRelop'
     *  Switch: '<S14>/Switch'
     */
    if (rtb_Multiply3 > rtb_Gain_c) {
      *rty_MTractionControlRRTotal = rtb_Gain_c;
    } else if (rtb_Multiply3 < 0.0) {
      /* Switch: '<S14>/Switch' incorporates:
       *  Constant: '<S2>/Constant7'
       */
      *rty_MTractionControlRRTotal = 0.0;
    } else {
      *rty_MTractionControlRRTotal = rtb_Multiply3;
    }

    /* End of Switch: '<S14>/Switch2' */
  } else {
    *rty_MTractionControlRRTotal = rtb_Multiply3;
  }

  /* End of Switch: '<S2>/Switch4' */

  /* Switch: '<S1>/Switch' incorporates:
   *  Constant: '<S7>/Constant'
   *  Logic: '<S1>/AND'
   *  RelationalOperator: '<S7>/Compare'
   */
  if ((*rtu_BTCOn) && (*rtu_vChassis > 0.3)) {
    /* SignalConversion generated from: '<Root>/MTractionControlFLFinal' */
    *rty_MTractionControlFLFinal = *rty_MTractionControlFLTotal;

    /* SignalConversion generated from: '<Root>/MTractionControlFRFinal' */
    *rty_MTractionControlFRFinal = *rty_MTractionControlFRTotal;

    /* SignalConversion generated from: '<Root>/MTractionControlRLFinal' */
    *rty_MTractionControlRLFinal = *rty_MTractionControlRLTotal;

    /* SignalConversion generated from: '<Root>/MTractionControlRRFinal' */
    *rty_MTractionControlRRFinal = *rty_MTractionControlRRTotal;
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

  /* SignalConversion generated from: '<Root>/NABSMultiplierFL' */
  *rty_NABSMultiplierFL = rtb_Saturation3_e_idx_0;

  /* SignalConversion generated from: '<Root>/NABSMultiplierFR' */
  *rty_NABSMultiplierFR = rtb_Saturation3_e_idx_1;

  /* SignalConversion generated from: '<Root>/NABSMultiplierRL' */
  *rty_NABSMultiplierRL = rtb_Saturation3_e_idx_2;

  /* SignalConversion generated from: '<Root>/NABSMultiplierRR' */
  *rty_NABSMultiplierRR = rtb_Saturation3_e_idx_3;

  /* SignalConversion generated from: '<Root>/NABSDTermRR' incorporates:
   *  RateLimiter: '<S16>/Rate Limiter'
   */
  *rty_NABSDTermRR = Memory_PreviousInput_j;

  /* SignalConversion generated from: '<Root>/NABSPTermFL' */
  *rty_NABSPTermFL = u0;

  /* SignalConversion generated from: '<Root>/NABSPTermFR' */
  *rty_NABSPTermFR = u0_0;

  /* SignalConversion generated from: '<Root>/NABSPTermRL' */
  *rty_NABSPTermRL = u0_1;

  /* SignalConversion generated from: '<Root>/NABSPTermRR' incorporates:
   *  Saturate: '<S16>/Saturation2'
   */
  *rty_NABSPTermRR = u0_4;

  /* SignalConversion generated from: '<Root>/NTractionControlMultiplierFL ' */
  *rty_NTractionControlMultiplierF = rtb_Saturation3_idx_0;

  /* SignalConversion generated from: '<Root>/NTractionControlMultiplierFR ' */
  *rty_NTractionControlMultiplie_c = rtb_Saturation3_idx_1;

  /* SignalConversion generated from: '<Root>/NTractionControlMultiplierRL ' */
  *rty_NTractionControlMultiplierR = rtb_Saturation3_idx_2;

  /* SignalConversion generated from: '<Root>/NTractionControlMultiplierRR ' */
  *rty_NTractionControlMultiplie_n = rtb_Saturation3_idx_3;

  /* SignalConversion generated from: '<Root>/NTractionControlPTermRR' incorporates:
   *  Saturate: '<S20>/Saturation2'
   */
  *rty_NTractionControlPTermRR = u0_3;

  /* SignalConversion generated from: '<Root>/NTractionControlDTermRR' incorporates:
   *  RateLimiter: '<S20>/Rate Limiter'
   */
  *rty_NTractionControlDTermRR = u0_2;

  /* Update for Memory: '<S22>/y(k-1)' */
  localDW->yk1_PreviousInput[0] = localDW->Memory_PreviousInput[0];

  /* Update for Memory: '<S22>/Memory' incorporates:
   *  Gain: '<S22>/Gain'
   */
  localDW->Memory_PreviousInput[0] = rtb_Saturation1_idx_0;

  /* Update for Memory: '<S18>/y(k-1)' */
  localDW->yk1_PreviousInput_g[0] = localDW->Memory_PreviousInput_j[0];

  /* Update for Memory: '<S18>/Memory' incorporates:
   *  Gain: '<S18>/Gain'
   */
  localDW->Memory_PreviousInput_j[0] = rtb_Saturation1_b_idx_0;

  /* Update for Memory: '<S22>/y(k-1)' */
  localDW->yk1_PreviousInput[1] = localDW->Memory_PreviousInput[1];

  /* Update for Memory: '<S22>/Memory' incorporates:
   *  Gain: '<S22>/Gain'
   */
  localDW->Memory_PreviousInput[1] = rtb_Saturation1_idx_1;

  /* Update for Memory: '<S18>/y(k-1)' */
  localDW->yk1_PreviousInput_g[1] = localDW->Memory_PreviousInput_j[1];

  /* Update for Memory: '<S18>/Memory' incorporates:
   *  Gain: '<S18>/Gain'
   */
  localDW->Memory_PreviousInput_j[1] = rtb_Saturation1_b_idx_1;

  /* Update for Memory: '<S22>/y(k-1)' */
  localDW->yk1_PreviousInput[2] = localDW->Memory_PreviousInput[2];

  /* Update for Memory: '<S22>/Memory' incorporates:
   *  Gain: '<S22>/Gain'
   */
  localDW->Memory_PreviousInput[2] = rtb_Saturation1_idx_2;

  /* Update for Memory: '<S18>/y(k-1)' */
  localDW->yk1_PreviousInput_g[2] = localDW->Memory_PreviousInput_j[2];

  /* Update for Memory: '<S18>/Memory' incorporates:
   *  Gain: '<S18>/Gain'
   */
  localDW->Memory_PreviousInput_j[2] = rtb_Saturation1_b_idx_2;

  /* Update for Memory: '<S22>/y(k-1)' */
  localDW->yk1_PreviousInput[3] = localDW->Memory_PreviousInput[3];

  /* Update for Memory: '<S22>/Memory' incorporates:
   *  Gain: '<S22>/Gain'
   *  Saturate: '<S20>/Saturation1'
   */
  localDW->Memory_PreviousInput[3] = rtb_Abs;

  /* Update for Memory: '<S18>/y(k-1)' */
  localDW->yk1_PreviousInput_g[3] = localDW->Memory_PreviousInput_j[3];

  /* Update for Memory: '<S18>/Memory' incorporates:
   *  Gain: '<S18>/Gain'
   *  Saturate: '<S16>/Saturation1'
   */
  localDW->Memory_PreviousInput_j[3] = rtb_Saturation1_b_0;
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
