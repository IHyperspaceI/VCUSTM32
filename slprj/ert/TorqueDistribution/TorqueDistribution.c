/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: TorqueDistribution.c
 *
 * Code generated for Simulink model 'TorqueDistribution'.
 *
 * Model version                  : 13.5
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Wed Jun  3 14:56:50 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "TorqueDistribution.h"
#include "rtwtypes.h"
#include "TorqueDistribution_private.h"

/* Output and update for referenced model: 'TorqueDistribution' */
void TorqueDistribution(const real_T *rtu_MFinalEMSRequested, const real_T
  *rtu_vChassis, const real_T *rtu_rThrottlePedal, const real_T
  *rtu_rRegenPaddle, const boolean_T *rtu_BEncoderErrorRear, const boolean_T
  *rtu_BEncoderErrorFront, const real_T *rtu_PEngineBraking, const real_T
  *rtu_rRegenDerate, const real_T *rtu_VDCInvRL, const real_T
  *rtu_MTorqueVectoringFL, const real_T *rtu_MTorqueVectoringFR, const real_T
  *rtu_MTorqueVectoringRL, const real_T *rtu_MTorqueVectoringRR, const boolean_T
  *rtu_BTorqueVectoringActivated, const real_T *rtu_rTSTemperatureDerateFL,
  const real_T *rtu_rTSTemperatureDerateFR, const real_T
  *rtu_rTSTemperatureDerateRL, const real_T *rtu_rTSTemperatureDerateRR, const
  real_T *rtu_NThrottleMap, const boolean_T *rtu_BEMSActivated, real_T
  *rty_rSplitRear, real_T *rty_MTorqueDistributionFL, real_T
  *rty_MTorqueDistributionFR, real_T *rty_MTorqueDistributionRL, real_T
  *rty_MTorqueDistributionRR)
{
  real_T rtb_Gain1;
  real_T rtb_Multiply_idx_0;
  real_T rtb_Multiply_idx_1;
  real_T rtb_Multiply_idx_3;
  real_T tmp;

  /* Switch: '<S5>/Switch2' incorporates:
   *  Constant: '<S13>/Constant'
   *  Constant: '<S14>/Constant'
   *  Constant: '<S5>/Constant5'
   *  Constant: '<S5>/Rear-Wheel Drive'
   *  Logic: '<S5>/AND'
   *  Logic: '<S5>/OR'
   *  RelationalOperator: '<S13>/Compare'
   *  RelationalOperator: '<S14>/Compare'
   *  RelationalOperator: '<S5>/GreaterThan3'
   *  Switch: '<S5>/Switch4'
   *  Switch: '<S5>/Switch5'
   */
  if (*rtu_BEncoderErrorFront) {
    *rty_rSplitRear = 1.0;
  } else if (*rtu_BEncoderErrorRear) {
    /* Switch: '<S5>/Switch5' incorporates:
     *  Constant: '<S5>/Front-Wheel Drive'
     */
    *rty_rSplitRear = 0.0;
  } else if ((*rtu_vChassis > 6.84) && ((*rtu_NThrottleMap == 1.0) ||
              (*rtu_NThrottleMap == 2.0))) {
    /* Switch: '<S5>/Switch4' incorporates:
     *  Constant: '<S5>/50//50 Torque Split'
     *  Switch: '<S5>/Switch5'
     */
    *rty_rSplitRear = 0.5;
  } else {
    /* Switch: '<S5>/Switch5' incorporates:
     *  Constant: '<S5>/70//30 Torque Split'
     *  Switch: '<S5>/Switch4'
     */
    *rty_rSplitRear = 0.7;
  }

  /* End of Switch: '<S5>/Switch2' */

  /* Switch: '<S4>/Switch' incorporates:
   *  Switch: '<S2>/Switch2'
   */
  if (*rtu_BTorqueVectoringActivated) {
    rtb_Multiply_idx_0 = *rtu_MTorqueVectoringFL;
    rtb_Multiply_idx_1 = *rtu_MTorqueVectoringFR;
    rtb_Gain1 = *rtu_MTorqueVectoringRL;
    rtb_Multiply_idx_3 = *rtu_MTorqueVectoringRR;
  } else {
    if (*rtu_MFinalEMSRequested > 0.0) {
      /* Switch: '<S2>/Switch2' incorporates:
       *  Constant: '<S5>/Constant'
       *  Sum: '<S5>/Subtract'
       */
      tmp = 1.0 - *rty_rSplitRear;
    } else {
      /* Switch: '<S2>/Switch2' */
      tmp = *rty_rSplitRear;
    }

    /* Gain: '<S2>/Gain1' incorporates:
     *  Product: '<S2>/Multiply1'
     *  Switch: '<S2>/Switch2'
     */
    rtb_Gain1 = tmp * *rtu_MFinalEMSRequested * 0.5;

    /* Saturate: '<S2>/Saturation1' incorporates:
     *  Saturate: '<S2>/Saturation2'
     */
    if (rtb_Gain1 > 204.8) {
      rtb_Multiply_idx_1 = 204.8;
      rtb_Multiply_idx_0 = 204.8;
    } else if (rtb_Gain1 < -100.0) {
      rtb_Multiply_idx_1 = -100.0;
      rtb_Multiply_idx_0 = -100.0;
    } else {
      rtb_Multiply_idx_1 = rtb_Gain1;
      rtb_Multiply_idx_0 = rtb_Gain1;
    }

    /* End of Saturate: '<S2>/Saturation1' */

    /* Switch: '<S10>/Switch' incorporates:
     *  Constant: '<S12>/Constant2'
     *  Constant: '<S12>/Constant3'
     *  Constant: '<S6>/Constant'
     *  Constant: '<S7>/Constant'
     *  Constant: '<S8>/Constant'
     *  Gain: '<S12>/Negative Torque'
     *  Gain: '<S12>/kW to W Conversion'
     *  Logic: '<S1>/AND'
     *  Product: '<S11>/Multiply1'
     *  Product: '<S12>/Divide1'
     *  Product: '<S12>/Divide2'
     *  Product: '<S12>/Multiply3'
     *  Product: '<S9>/Multiply3'
     *  RelationalOperator: '<S6>/Compare'
     *  RelationalOperator: '<S7>/Compare'
     *  RelationalOperator: '<S8>/Compare'
     *  Switch: '<S11>/Switch2'
     */
    if ((*rtu_rRegenPaddle < 1.0) && (*rtu_rThrottlePedal < 1.0) &&
        (*rtu_vChassis < 25.0)) {
      rtb_Gain1 = -(1000.0 * *rtu_PEngineBraking / *rtu_VDCInvRL * 0.26 / 0.098)
        * *rtu_rRegenDerate;
    } else {
      if (*rtu_MFinalEMSRequested > 0.0) {
        /* Switch: '<S11>/Switch2' */
        tmp = *rty_rSplitRear;
      } else {
        /* Switch: '<S11>/Switch2' incorporates:
         *  Constant: '<S5>/Constant'
         *  Sum: '<S5>/Subtract'
         */
        tmp = 1.0 - *rty_rSplitRear;
      }

      rtb_Gain1 = tmp * *rtu_MFinalEMSRequested;
    }

    /* End of Switch: '<S10>/Switch' */

    /* Gain: '<S10>/Gain1' */
    rtb_Gain1 *= 0.5;

    /* Saturate: '<S10>/Saturation2' incorporates:
     *  Saturate: '<S10>/Saturation1'
     */
    if (rtb_Gain1 > 204.8) {
      rtb_Gain1 = 204.8;
      rtb_Multiply_idx_3 = 204.8;
    } else if (rtb_Gain1 < -100.0) {
      rtb_Gain1 = -100.0;
      rtb_Multiply_idx_3 = -100.0;
    } else {
      rtb_Multiply_idx_3 = rtb_Gain1;
    }

    /* End of Saturate: '<S10>/Saturation2' */
  }

  /* End of Switch: '<S4>/Switch' */

  /* Switch: '<S4>/Switch1' incorporates:
   *  Constant: '<S4>/Constant'
   */
  if (*rtu_BEMSActivated) {
    tmp = *rtu_rTSTemperatureDerateFL;
  } else {
    tmp = 1.0;
  }

  /* SignalConversion generated from: '<Root>/MTorqueDistributionFL' incorporates:
   *  Product: '<S4>/Multiply'
   *  Switch: '<S4>/Switch1'
   */
  *rty_MTorqueDistributionFL = rtb_Multiply_idx_0 * tmp;

  /* Switch: '<S4>/Switch1' incorporates:
   *  Constant: '<S4>/Constant'
   */
  if (*rtu_BEMSActivated) {
    tmp = *rtu_rTSTemperatureDerateFR;
  } else {
    tmp = 1.0;
  }

  /* SignalConversion generated from: '<Root>/MTorqueDistributionFR' incorporates:
   *  Product: '<S4>/Multiply'
   *  Switch: '<S4>/Switch1'
   */
  *rty_MTorqueDistributionFR = rtb_Multiply_idx_1 * tmp;

  /* Switch: '<S4>/Switch1' incorporates:
   *  Constant: '<S4>/Constant'
   */
  if (*rtu_BEMSActivated) {
    tmp = *rtu_rTSTemperatureDerateRL;
  } else {
    tmp = 1.0;
  }

  /* SignalConversion generated from: '<Root>/MTorqueDistributionRL' incorporates:
   *  Product: '<S4>/Multiply'
   *  Switch: '<S4>/Switch1'
   */
  *rty_MTorqueDistributionRL = rtb_Gain1 * tmp;

  /* Switch: '<S4>/Switch1' incorporates:
   *  Constant: '<S4>/Constant'
   */
  if (*rtu_BEMSActivated) {
    tmp = *rtu_rTSTemperatureDerateRR;
  } else {
    tmp = 1.0;
  }

  /* SignalConversion generated from: '<Root>/MTorqueDistributionRR' incorporates:
   *  Product: '<S4>/Multiply'
   *  Switch: '<S4>/Switch1'
   */
  *rty_MTorqueDistributionRR = rtb_Multiply_idx_3 * tmp;
}

/* Model initialize function */
void TorqueDistribution_initialize(const char_T **rt_errorStatus,
  RT_MODEL_TorqueDistribution_T *const TorqueDistribution_M)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(TorqueDistribution_M, rt_errorStatus);

  /* user code (Initialize function Body) */
  LL_TIM_EnableCounter(TIM2);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
