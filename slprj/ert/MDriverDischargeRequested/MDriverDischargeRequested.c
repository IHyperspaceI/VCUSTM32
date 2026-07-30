/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: MDriverDischargeRequested.c
 *
 * Code generated for Simulink model 'MDriverDischargeRequested'.
 *
 * Model version                  : 13.2
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Thu Jul 30 16:45:23 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "MDriverDischargeRequested.h"
#include "rtwtypes.h"
#include "look2_binlxpw.h"
#include "MDriverDischargeRequested_private.h"

/* Output and update for referenced model: 'MDriverDischargeRequested' */
void MDriverDischargeRequested(const real_T *rtu_NThrottleMap, const real_T
  *rtu_vChassis, const real_T *rtu_rThrottlePedal, real_T
  *rty_MDriverDischargeRequested)
{
  real_T rtb_MultiportSwitch2;

  /* MultiPortSwitch: '<Root>/Multiport Switch2' incorporates:
   *  Lookup_n-D: '<Root>/38kW 70:30 21Nm'
   *  Lookup_n-D: '<Root>/58kW 100:0 21Nm'
   *  Lookup_n-D: '<Root>/58kW 70:30 21Nm'
   *  Lookup_n-D: '<Root>/5kW Wheelspin 21%'
   *  Lookup_n-D: '<Root>/78kW 70:30 21Nm'
   *  Lookup_n-D: '<Root>/78kW 80:20 21Nm'
   */
  switch ((int32_T)*rtu_NThrottleMap) {
   case 1:
    rtb_MultiportSwitch2 = look2_binlxpw(*rtu_vChassis, *rtu_rThrottlePedal,
      rtCP_ukWWheelspin21_bp01Data, rtCP_ukWWheelspin21_bp02Data,
      rtCP_ukWWheelspin21_tableData, rtCP_ukWWheelspin21_maxIndex, 22U);
    break;

   case 2:
    rtb_MultiportSwitch2 = look2_binlxpw(*rtu_vChassis, *rtu_rThrottlePedal,
      rtCP_u8kW802021Nm_bp01Data, rtCP_u8kW802021Nm_bp02Data,
      rtCP_u8kW802021Nm_tableData, rtCP_u8kW802021Nm_maxIndex, 22U);
    break;

   case 3:
    rtb_MultiportSwitch2 = look2_binlxpw(*rtu_vChassis, *rtu_rThrottlePedal,
      rtCP_u8kW703021Nm_bp01Data, rtCP_u8kW703021Nm_bp02Data,
      rtCP_u8kW703021Nm_tableData, rtCP_u8kW703021Nm_maxIndex, 22U);
    break;

   case 4:
    rtb_MultiportSwitch2 = look2_binlxpw(*rtu_vChassis, *rtu_rThrottlePedal,
      rtCP_u8kW100021Nm_bp01Data, rtCP_u8kW100021Nm_bp02Data,
      rtCP_u8kW100021Nm_tableData, rtCP_u8kW100021Nm_maxIndex, 22U);
    break;

   case 5:
    rtb_MultiportSwitch2 = look2_binlxpw(*rtu_vChassis, *rtu_rThrottlePedal,
      rtCP_u8kW703021Nm_bp01Data_d, rtCP_u8kW703021Nm_bp02Data_j,
      rtCP_u8kW703021Nm_tableData_c, rtCP_u8kW703021Nm_maxIndex_a, 22U);
    break;

   default:
    rtb_MultiportSwitch2 = look2_binlxpw(*rtu_vChassis, *rtu_rThrottlePedal,
      rtCP_u8kW703021Nm_bp01Data_i, rtCP_u8kW703021Nm_bp02Data_g,
      rtCP_u8kW703021Nm_tableData_a, rtCP_u8kW703021Nm_maxIndex_d, 22U);
    break;
  }

  /* End of MultiPortSwitch: '<Root>/Multiport Switch2' */

  /* Saturate: '<Root>/Saturation1' */
  if (rtb_MultiportSwitch2 > 857.0) {
    *rty_MDriverDischargeRequested = 857.0;
  } else if (rtb_MultiportSwitch2 < 0.0) {
    *rty_MDriverDischargeRequested = 0.0;
  } else {
    *rty_MDriverDischargeRequested = rtb_MultiportSwitch2;
  }

  /* End of Saturate: '<Root>/Saturation1' */
}

/* Model initialize function */
void MDriverDischargeRequ_initialize(const char_T **rt_errorStatus,
  RT_MODEL_MDriverDischargeRequ_T *const MDriverDischargeRequested_M)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(MDriverDischargeRequested_M, rt_errorStatus);

  /* user code (Initialize function Body) */
  LL_TIM_EnableCounter(TIM2);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
