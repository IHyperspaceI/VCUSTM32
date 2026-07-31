/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: WheelSpeedInputs.c
 *
 * Code generated for Simulink model 'WheelSpeedInputs'.
 *
 * Model version                  : 13.2
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Fri Jul 31 17:27:52 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "WheelSpeedInputs.h"
#include "rtwtypes.h"
#include "WheelSpeedInputs_private.h"

/* Output and update for referenced model: 'WheelSpeedInputs' */
void WheelSpeedInputs(const real_T *rtu_CAN1_2Bus_InverterFL_nMotor, const
                      real_T *rtu_CAN1_2Bus_InverterFR_nMotor, const real_T
                      *rtu_CAN1_2Bus_InverterRL_nMotor, const real_T
                      *rtu_CAN1_2Bus_InverterRR_nMotor, real_T
                      *rty_WheelSpeeds_vWheelRL, real_T
                      *rty_WheelSpeeds_vWheelRR, real_T
                      *rty_WheelSpeeds_vWheelFL, real_T
                      *rty_WheelSpeeds_vWheelFR)
{
  /* SignalConversion generated from: '<Root>/WheelSpeeds' incorporates:
   *  Gain: '<S1>/2*pi*rTyreRadius'
   *  Gain: '<S1>/Motor RPM to Wheel RPM'
   *  Gain: '<S1>/RPMinute to RPSecond'
   */
  *rty_WheelSpeeds_vWheelRL = 0.064304546331425627 *
    *rtu_CAN1_2Bus_InverterRL_nMotor * 0.016666666666666666 * 1.2754866173574562;

  /* SignalConversion generated from: '<Root>/WheelSpeeds' incorporates:
   *  Gain: '<S1>/2*pi*rTyreRadius'
   *  Gain: '<S1>/Motor RPM to Wheel RPM'
   *  Gain: '<S1>/RPMinute to RPSecond'
   */
  *rty_WheelSpeeds_vWheelRR = 0.064304546331425627 *
    *rtu_CAN1_2Bus_InverterRR_nMotor * 0.016666666666666666 * 1.2754866173574562;

  /* SignalConversion generated from: '<Root>/WheelSpeeds' incorporates:
   *  Gain: '<S1>/2*pi*rTyreRadius'
   *  Gain: '<S1>/Motor RPM to Wheel RPM'
   *  Gain: '<S1>/RPMinute to RPSecond'
   */
  *rty_WheelSpeeds_vWheelFL = 0.064304546331425627 *
    *rtu_CAN1_2Bus_InverterFL_nMotor * 0.016666666666666666 * 1.2754866173574562;

  /* SignalConversion generated from: '<Root>/WheelSpeeds' incorporates:
   *  Gain: '<S1>/2*pi*rTyreRadius'
   *  Gain: '<S1>/Motor RPM to Wheel RPM'
   *  Gain: '<S1>/RPMinute to RPSecond'
   */
  *rty_WheelSpeeds_vWheelFR = 0.064304546331425627 *
    *rtu_CAN1_2Bus_InverterFR_nMotor * 0.016666666666666666 * 1.2754866173574562;
}

/* Model initialize function */
void WheelSpeedInputs_initialize(const char_T **rt_errorStatus,
  RT_MODEL_WheelSpeedInputs_T *const WheelSpeedInputs_M)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(WheelSpeedInputs_M, rt_errorStatus);

  /* user code (Initialize function Body) */
  LL_TIM_EnableCounter(TIM2);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
