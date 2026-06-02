/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: WheelSpeeds.c
 *
 * Code generated for Simulink model 'WheelSpeeds'.
 *
 * Model version                  : 13.6
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Tue Jun  2 18:44:13 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "WheelSpeeds.h"
#include "rtwtypes.h"
#include "WheelSpeeds_private.h"

/* Output and update for referenced model: 'WheelSpeeds' */
void WheelSpeeds(const real_T *rtu_InverterCAN_InverterFLCANBu, const real_T
                 *rtu_InverterCAN_InverterFRCANBu, const real_T
                 *rtu_InverterCAN_InverterRLCANBu, const real_T
                 *rtu_InverterCAN_InverterRRCANBu, real_T
                 *rty_WheelSpeedsBus_vWheelRL, real_T
                 *rty_WheelSpeedsBus_vWheelRR, real_T
                 *rty_WheelSpeedsBus_vWheelFL, real_T
                 *rty_WheelSpeedsBus_vWheelFR)
{
  /* SignalConversion generated from: '<Root>/WheelSpeedsBus' incorporates:
   *  Gain: '<S1>/2*pi*rTyreRadius'
   *  Gain: '<S1>/Motor RPM to Wheel RPM'
   *  Gain: '<S1>/RPMinute to RPSecond'
   */
  *rty_WheelSpeedsBus_vWheelRL = 0.064304546331425627 *
    *rtu_InverterCAN_InverterRLCANBu * 0.016666666666666666 * 1.2754866173574562;

  /* SignalConversion generated from: '<Root>/WheelSpeedsBus' incorporates:
   *  Gain: '<S1>/2*pi*rTyreRadius'
   *  Gain: '<S1>/Motor RPM to Wheel RPM'
   *  Gain: '<S1>/RPMinute to RPSecond'
   */
  *rty_WheelSpeedsBus_vWheelRR = 0.064304546331425627 *
    *rtu_InverterCAN_InverterRRCANBu * 0.016666666666666666 * 1.2754866173574562;

  /* SignalConversion generated from: '<Root>/WheelSpeedsBus' incorporates:
   *  Gain: '<S1>/2*pi*rTyreRadius'
   *  Gain: '<S1>/Motor RPM to Wheel RPM'
   *  Gain: '<S1>/RPMinute to RPSecond'
   */
  *rty_WheelSpeedsBus_vWheelFL = 0.064304546331425627 *
    *rtu_InverterCAN_InverterFLCANBu * 0.016666666666666666 * 1.2754866173574562;

  /* SignalConversion generated from: '<Root>/WheelSpeedsBus' incorporates:
   *  Gain: '<S1>/2*pi*rTyreRadius'
   *  Gain: '<S1>/Motor RPM to Wheel RPM'
   *  Gain: '<S1>/RPMinute to RPSecond'
   */
  *rty_WheelSpeedsBus_vWheelFR = 0.064304546331425627 *
    *rtu_InverterCAN_InverterFRCANBu * 0.016666666666666666 * 1.2754866173574562;
}

/* Model initialize function */
void WheelSpeeds_initialize(const char_T **rt_errorStatus,
  RT_MODEL_WheelSpeeds_T *const WheelSpeeds_M)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(WheelSpeeds_M, rt_errorStatus);

  /* user code (Initialize function Body) */
  LL_TIM_EnableCounter(TIM2);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
