/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: MDriverDischargeRequested.c
 *
 * Code generated for Simulink model 'MDriverDischargeRequested'.
 *
 * Model version                  : 13.5
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Wed Jun  3 14:56:07 2026
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
void MDriverDischargeRequested(const real_T *rtu_rThrottlePedal, const real_T
  *rtu_vChassis, const real_T *rtu_NThrottleMap, real_T
  *rty_MDriverDischargeRequested)
{
  real_T rtb_MultiportSwitch2;

  /* MultiPortSwitch: '<Root>/Multiport Switch2' incorporates:
   *  Lookup_n-D: '<Root>/30kW-21Nm'
   *  Lookup_n-D: '<Root>/38kW-21Nm'
   *  Lookup_n-D: '<Root>/45kW Enduro 21Nm'
   *  Lookup_n-D: '<Root>/58kW Accel 21Nm'
   *  Lookup_n-D: '<Root>/58kW-21Nm'
   *  Lookup_n-D: '<Root>/78kW Accel 21Nm'
   *  Lookup_n-D: '<Root>/78kW-21Nm'
   */
  switch ((int32_T)*rtu_NThrottleMap) {
   case 1:
    rtb_MultiportSwitch2 = look2_binlxpw(*rtu_vChassis, *rtu_rThrottlePedal,
      rtCP_u8kWAccel21Nm_bp01Data, rtCP_u8kWAccel21Nm_bp02Data,
      rtCP_u8kWAccel21Nm_tableData, rtCP_u8kWAccel21Nm_maxIndex, 21U);
    break;

   case 2:
    rtb_MultiportSwitch2 = look2_binlxpw(*rtu_vChassis, *rtu_rThrottlePedal,
      rtCP_u8kWAccel21Nm_bp01Data_a, rtCP_u8kWAccel21Nm_bp02Data_m,
      rtCP_u8kWAccel21Nm_tableData_d, rtCP_u8kWAccel21Nm_maxIndex_p, 21U);
    break;

   case 3:
    rtb_MultiportSwitch2 = look2_binlxpw(*rtu_vChassis, *rtu_rThrottlePedal,
      rtCP_u5kWEnduro21Nm_bp01Data, rtCP_u5kWEnduro21Nm_bp02Data,
      rtCP_u5kWEnduro21Nm_tableData, rtCP_u5kWEnduro21Nm_maxIndex, 21U);
    break;

   case 4:
    rtb_MultiportSwitch2 = look2_binlxpw(*rtu_vChassis, *rtu_rThrottlePedal,
      rtCP_u8kW21Nm_bp01Data, rtCP_u8kW21Nm_bp02Data, rtCP_u8kW21Nm_tableData,
      rtCP_u8kW21Nm_maxIndex, 21U);
    break;

   case 5:
    rtb_MultiportSwitch2 = look2_binlxpw(*rtu_vChassis, *rtu_rThrottlePedal,
      rtCP_u8kW21Nm_bp01Data_o, rtCP_u8kW21Nm_bp02Data_a,
      rtCP_u8kW21Nm_tableData_i, rtCP_u8kW21Nm_maxIndex_l, 21U);
    break;

   case 6:
    rtb_MultiportSwitch2 = look2_binlxpw(*rtu_vChassis, *rtu_rThrottlePedal,
      rtCP_u8kW21Nm_bp01Data_d, rtCP_u8kW21Nm_bp02Data_e,
      rtCP_u8kW21Nm_tableData_o, rtCP_u8kW21Nm_maxIndex_n, 21U);
    break;

   default:
    rtb_MultiportSwitch2 = look2_binlxpw(*rtu_vChassis, *rtu_rThrottlePedal,
      rtCP_u0kW21Nm_bp01Data, rtCP_u0kW21Nm_bp02Data, rtCP_u0kW21Nm_tableData,
      rtCP_u0kW21Nm_maxIndex, 21U);
    break;
  }

  /* End of MultiPortSwitch: '<Root>/Multiport Switch2' */

  /* Saturate: '<Root>/Saturation1' */
  if (rtb_MultiportSwitch2 > 816.33) {
    *rty_MDriverDischargeRequested = 816.33;
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
