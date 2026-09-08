/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: TorqueDistribution.c
 *
 * Code generated for Simulink model 'TorqueDistribution'.
 *
 * Model version                  : 13.3
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Tue Sep  8 11:43:26 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "TorqueDistribution.h"
#include "rtwtypes.h"
#include <math.h>
#include "TorqueDistribution_private.h"

/* Output and update for referenced model: 'TorqueDistribution' */
void TorqueDistribution(const real_T *rtu_MTotalRequested, const real_T
  *rtu_vChassis, const real_T *rtu_rThrottlePedal, const real_T
  *rtu_rRegenPaddle, const real_T *rtu_PEngineBraking, const real_T
  *rtu_MTorqueVectoringFL, const real_T *rtu_MTorqueVectoringFR, const real_T
  *rtu_MTorqueVectoringRL, const real_T *rtu_MTorqueVectoringRR, const boolean_T
  *rtu_BTVOn, const real_T *rtu_rEngineBrakingSplit, const real_T
  *rtu_rTorqueSplit, const real_T *rtu_PRegenLimit, const real_T
  *rtu_PDischargeLimit, const real_T *rtu_PTSTemperatureDerateFL, const real_T
  *rtu_PTSTemperatureDerateFR, const real_T *rtu_PTSTemperatureDerateRL, const
  real_T *rtu_PTSTemperatureDerateRR, const real_T *rtu_MMotorMaxFR, const
  real_T *rtu_MMotorMaxFL, const real_T *rtu_MMotorMaxRR, const real_T
  *rtu_MMotorMaxRL, real_T *rty_rSplitRear, real_T *rty_MTorqueDistributionFL,
  real_T *rty_MTorqueDistributionFR, real_T *rty_MTorqueDistributionRL, real_T
  *rty_MTorqueDistributionRR)
{
  real_T rtb_Divide3;
  real_T rtb_Saturation2;
  real_T rtb_Switch_eq_idx_0;
  real_T rtb_Switch_it;
  real_T rtu_PTSTemperatureDerateFL_id_0;
  real_T rtu_PTSTemperatureDerateFL_id_1;
  real_T rtu_PTSTemperatureDerateFL_id_2;
  real_T rtu_PTSTemperatureDerateFL_idx_;
  boolean_T rtb_AND;

  /* Logic: '<S1>/AND' incorporates:
   *  Constant: '<S10>/Constant'
   *  Constant: '<S11>/Constant'
   *  Constant: '<S8>/Constant'
   *  Constant: '<S9>/Constant'
   *  RelationalOperator: '<S10>/Compare'
   *  RelationalOperator: '<S11>/Compare'
   *  RelationalOperator: '<S8>/Compare'
   *  RelationalOperator: '<S9>/Compare'
   */
  rtb_AND = ((*rtu_rRegenPaddle < 1.0) && (*rtu_rThrottlePedal < 1.0) &&
             (*rtu_vChassis < 25.0) && (*rtu_vChassis > 5.0));

  /* Switch: '<S2>/Switch' incorporates:
   *  Constant: '<S2>/Constant'
   */
  if (rtb_AND) {
    /* MinMax: '<S2>/Max' incorporates:
     *  Gain: '<S2>/Gain'
     */
    rtb_Divide3 = fmax(-*rtu_PEngineBraking, *rtu_PRegenLimit);

    /* Saturate: '<S2>/Saturation' */
    if (rtb_Divide3 > 0.0) {
      rtb_Divide3 = 0.0;
    } else if (rtb_Divide3 < -100.0) {
      rtb_Divide3 = -100.0;
    }

    /* End of Saturate: '<S2>/Saturation' */
  } else {
    rtb_Divide3 = 0.0;
  }

  /* End of Switch: '<S2>/Switch' */

  /* Saturate: '<S12>/Saturation1' */
  if (*rtu_vChassis > 40.0) {
    rtu_PTSTemperatureDerateFL_id_2 = 40.0;
  } else if (*rtu_vChassis < 0.1) {
    rtu_PTSTemperatureDerateFL_id_2 = 0.1;
  } else {
    rtu_PTSTemperatureDerateFL_id_2 = *rtu_vChassis;
  }

  /* Product: '<S12>/Divide3' incorporates:
   *  Constant: '<S12>/Constant1'
   *  Gain: '<S12>/Gain'
   *  Gain: '<S12>/kW to W Conversion'
   *  Product: '<S12>/Divide'
   *  Saturate: '<S12>/Saturation1'
   */
  rtb_Saturation2 = 1000.0 * rtb_Divide3 / (rtu_PTSTemperatureDerateFL_id_2 /
    0.203 * 15.551);

  /* Saturate: '<S12>/Saturation2' */
  if (rtb_Saturation2 < -217.66666666666666) {
    rtb_Saturation2 = -217.66666666666666;
  }

  /* End of Saturate: '<S12>/Saturation2' */

  /* Saturate: '<S7>/Saturation' */
  if (*rtu_rTorqueSplit > 1.0) {
    *rty_rSplitRear = 1.0;
  } else if (*rtu_rTorqueSplit < 0.0) {
    *rty_rSplitRear = 0.0;
  } else {
    *rty_rSplitRear = *rtu_rTorqueSplit;
  }

  /* End of Saturate: '<S7>/Saturation' */

  /* Switch: '<S6>/Switch' incorporates:
   *  Switch: '<S13>/Switch'
   *  Switch: '<S4>/Switch2'
   */
  if (*rtu_BTVOn) {
    rtb_Switch_eq_idx_0 = *rtu_MTorqueVectoringFL;
    rtb_Divide3 = *rtu_MTorqueVectoringFR;
    rtb_Switch_it = *rtu_MTorqueVectoringRL;
    rtb_Saturation2 = *rtu_MTorqueVectoringRR;
  } else {
    if (rtb_AND) {
      /* Switch: '<S13>/Switch' incorporates:
       *  Constant: '<S3>/Constant'
       *  Product: '<S3>/Multiply2'
       *  Sum: '<S3>/Sum'
       */
      rtb_Switch_it = (1.0 - *rtu_rEngineBrakingSplit) * rtb_Saturation2;
    } else {
      if (*rtu_MTotalRequested > 0.0) {
        /* Switch: '<S4>/Switch2' incorporates:
         *  Constant: '<S7>/Constant'
         *  Sum: '<S7>/Subtract'
         *  Switch: '<S13>/Switch'
         */
        rtu_PTSTemperatureDerateFL_id_2 = 1.0 - *rty_rSplitRear;
      } else {
        /* Switch: '<S4>/Switch2' incorporates:
         *  Switch: '<S13>/Switch'
         */
        rtu_PTSTemperatureDerateFL_id_2 = *rty_rSplitRear;
      }

      /* Switch: '<S13>/Switch' incorporates:
       *  Product: '<S4>/Multiply1'
       *  Switch: '<S4>/Switch2'
       */
      rtb_Switch_it = rtu_PTSTemperatureDerateFL_id_2 * *rtu_MTotalRequested;
    }

    /* Gain: '<S13>/Gain1' incorporates:
     *  Switch: '<S13>/Switch'
     *  Switch: '<S4>/Switch2'
     */
    rtb_Divide3 = 0.5 * rtb_Switch_it;

    /* Switch: '<S16>/Switch' incorporates:
     *  Product: '<S17>/Multiply1'
     *  Product: '<S3>/Multiply1'
     *  Switch: '<S17>/Switch2'
     */
    if (rtb_AND) {
      rtb_Switch_it = *rtu_rEngineBrakingSplit * rtb_Saturation2;
    } else {
      if (*rtu_MTotalRequested > 0.0) {
        /* Switch: '<S17>/Switch2' */
        rtu_PTSTemperatureDerateFL_id_2 = *rty_rSplitRear;
      } else {
        /* Switch: '<S17>/Switch2' incorporates:
         *  Constant: '<S7>/Constant'
         *  Sum: '<S7>/Subtract'
         */
        rtu_PTSTemperatureDerateFL_id_2 = 1.0 - *rty_rSplitRear;
      }

      rtb_Switch_it = rtu_PTSTemperatureDerateFL_id_2 * *rtu_MTotalRequested;
    }

    /* End of Switch: '<S16>/Switch' */

    /* Gain: '<S16>/Gain2' */
    rtb_Saturation2 = 0.5 * rtb_Switch_it;

    /* Switch: '<S15>/Switch2' incorporates:
     *  Constant: '<S13>/Constant1'
     *  RelationalOperator: '<S15>/LowerRelop1'
     *  RelationalOperator: '<S15>/UpperRelop'
     *  Switch: '<S15>/Switch'
     */
    if (rtb_Divide3 > *rtu_MMotorMaxFL) {
      rtb_Switch_eq_idx_0 = *rtu_MMotorMaxFL;
    } else if (rtb_Divide3 < -153.1) {
      /* Switch: '<S15>/Switch' incorporates:
       *  Constant: '<S13>/Constant1'
       */
      rtb_Switch_eq_idx_0 = -153.1;
    } else {
      rtb_Switch_eq_idx_0 = rtb_Divide3;
    }

    /* End of Switch: '<S15>/Switch2' */

    /* Switch: '<S14>/Switch2' incorporates:
     *  Constant: '<S13>/Constant'
     *  RelationalOperator: '<S14>/LowerRelop1'
     *  RelationalOperator: '<S14>/UpperRelop'
     *  Switch: '<S14>/Switch'
     */
    if (rtb_Divide3 > *rtu_MMotorMaxFR) {
      rtb_Divide3 = *rtu_MMotorMaxFR;
    } else if (rtb_Divide3 < -153.1) {
      /* Switch: '<S14>/Switch' incorporates:
       *  Constant: '<S13>/Constant'
       */
      rtb_Divide3 = -153.1;
    }

    /* End of Switch: '<S14>/Switch2' */

    /* Switch: '<S19>/Switch2' incorporates:
     *  Constant: '<S16>/Constant1'
     *  RelationalOperator: '<S19>/LowerRelop1'
     *  RelationalOperator: '<S19>/UpperRelop'
     *  Switch: '<S19>/Switch'
     */
    if (rtb_Saturation2 > *rtu_MMotorMaxRL) {
      rtb_Switch_it = *rtu_MMotorMaxRL;
    } else if (rtb_Saturation2 < -153.1) {
      /* Switch: '<S19>/Switch' incorporates:
       *  Constant: '<S16>/Constant1'
       */
      rtb_Switch_it = -153.1;
    } else {
      rtb_Switch_it = rtb_Saturation2;
    }

    /* End of Switch: '<S19>/Switch2' */

    /* Switch: '<S18>/Switch2' incorporates:
     *  Constant: '<S16>/Constant'
     *  RelationalOperator: '<S18>/LowerRelop1'
     *  RelationalOperator: '<S18>/UpperRelop'
     *  Switch: '<S18>/Switch'
     */
    if (rtb_Saturation2 > *rtu_MMotorMaxRR) {
      rtb_Saturation2 = *rtu_MMotorMaxRR;
    } else if (rtb_Saturation2 < -153.1) {
      /* Switch: '<S18>/Switch' incorporates:
       *  Constant: '<S16>/Constant'
       */
      rtb_Saturation2 = -153.1;
    }

    /* End of Switch: '<S18>/Switch2' */
  }

  /* End of Switch: '<S6>/Switch' */

  /* Switch: '<S6>/Switch1' */
  if (rtb_Switch_eq_idx_0 > 0.5) {
    rtu_PTSTemperatureDerateFL_id_2 = *rtu_PDischargeLimit;
  } else {
    rtu_PTSTemperatureDerateFL_id_2 = *rtu_PRegenLimit;
  }

  /* Product: '<S6>/Divide' incorporates:
   *  Abs: '<S6>/Abs'
   *  Switch: '<S6>/Switch1'
   */
  rtu_PTSTemperatureDerateFL_idx_ = *rtu_PTSTemperatureDerateFL / fabs
    (rtu_PTSTemperatureDerateFL_id_2);

  /* Switch: '<S6>/Switch1' */
  if (rtb_Divide3 > 0.5) {
    rtu_PTSTemperatureDerateFL_id_2 = *rtu_PDischargeLimit;
  } else {
    rtu_PTSTemperatureDerateFL_id_2 = *rtu_PRegenLimit;
  }

  /* Product: '<S6>/Divide' incorporates:
   *  Abs: '<S6>/Abs'
   *  Switch: '<S6>/Switch1'
   */
  rtu_PTSTemperatureDerateFL_id_0 = *rtu_PTSTemperatureDerateFR / fabs
    (rtu_PTSTemperatureDerateFL_id_2);

  /* Switch: '<S6>/Switch1' */
  if (rtb_Switch_it > 0.5) {
    rtu_PTSTemperatureDerateFL_id_2 = *rtu_PDischargeLimit;
  } else {
    rtu_PTSTemperatureDerateFL_id_2 = *rtu_PRegenLimit;
  }

  /* Product: '<S6>/Divide' incorporates:
   *  Abs: '<S6>/Abs'
   *  Switch: '<S6>/Switch1'
   */
  rtu_PTSTemperatureDerateFL_id_1 = *rtu_PTSTemperatureDerateRL / fabs
    (rtu_PTSTemperatureDerateFL_id_2);

  /* Switch: '<S6>/Switch1' */
  if (rtb_Saturation2 > 0.5) {
    rtu_PTSTemperatureDerateFL_id_2 = *rtu_PDischargeLimit;
  } else {
    rtu_PTSTemperatureDerateFL_id_2 = *rtu_PRegenLimit;
  }

  /* Product: '<S6>/Divide' incorporates:
   *  Abs: '<S6>/Abs'
   *  Switch: '<S6>/Switch1'
   */
  rtu_PTSTemperatureDerateFL_id_2 = *rtu_PTSTemperatureDerateRR / fabs
    (rtu_PTSTemperatureDerateFL_id_2);

  /* Saturate: '<S6>/Saturation' */
  if (rtu_PTSTemperatureDerateFL_idx_ > 1.0) {
    rtu_PTSTemperatureDerateFL_idx_ = 1.0;
  } else if (rtu_PTSTemperatureDerateFL_idx_ < 0.0) {
    rtu_PTSTemperatureDerateFL_idx_ = 0.0;
  }

  /* SignalConversion generated from: '<Root>/MTorqueDistributionFL' incorporates:
   *  Product: '<S6>/Multiply'
   *  Saturate: '<S6>/Saturation'
   */
  *rty_MTorqueDistributionFL = rtu_PTSTemperatureDerateFL_idx_ *
    rtb_Switch_eq_idx_0;

  /* Saturate: '<S6>/Saturation' */
  if (rtu_PTSTemperatureDerateFL_id_0 > 1.0) {
    rtu_PTSTemperatureDerateFL_id_0 = 1.0;
  } else if (rtu_PTSTemperatureDerateFL_id_0 < 0.0) {
    rtu_PTSTemperatureDerateFL_id_0 = 0.0;
  }

  /* SignalConversion generated from: '<Root>/MTorqueDistributionFR' incorporates:
   *  Product: '<S6>/Multiply'
   *  Saturate: '<S6>/Saturation'
   */
  *rty_MTorqueDistributionFR = rtu_PTSTemperatureDerateFL_id_0 * rtb_Divide3;

  /* Saturate: '<S6>/Saturation' */
  if (rtu_PTSTemperatureDerateFL_id_1 > 1.0) {
    rtu_PTSTemperatureDerateFL_id_1 = 1.0;
  } else if (rtu_PTSTemperatureDerateFL_id_1 < 0.0) {
    rtu_PTSTemperatureDerateFL_id_1 = 0.0;
  }

  /* SignalConversion generated from: '<Root>/MTorqueDistributionRL' incorporates:
   *  Product: '<S6>/Multiply'
   *  Saturate: '<S6>/Saturation'
   */
  *rty_MTorqueDistributionRL = rtu_PTSTemperatureDerateFL_id_1 * rtb_Switch_it;

  /* Saturate: '<S6>/Saturation' */
  if (rtu_PTSTemperatureDerateFL_id_2 > 1.0) {
    rtu_PTSTemperatureDerateFL_id_2 = 1.0;
  } else if (rtu_PTSTemperatureDerateFL_id_2 < 0.0) {
    rtu_PTSTemperatureDerateFL_id_2 = 0.0;
  }

  /* SignalConversion generated from: '<Root>/MTorqueDistributionRR' incorporates:
   *  Product: '<S6>/Multiply'
   *  Saturate: '<S6>/Saturation'
   */
  *rty_MTorqueDistributionRR = rtu_PTSTemperatureDerateFL_id_2 * rtb_Saturation2;
}

/* Model initialize function */
void TorqueDistribution_initialize(const char_T **rt_errorStatus,
  RT_MODEL_TorqueDistribution_T *const TorqueDistribution_M)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(TorqueDistribution_M, rt_errorStatus);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
