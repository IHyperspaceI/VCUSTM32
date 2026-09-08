/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: MDriverRegenRequested.c
 *
 * Code generated for Simulink model 'MDriverRegenRequested'.
 *
 * Model version                  : 13.3
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Tue Sep  8 11:42:45 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "MDriverRegenRequested.h"
#include "rtwtypes.h"
#include <math.h>
#include "MDriverRegenRequested_private.h"

/* Named constants for Chart: '<S2>/Relax Latch System' */
#define MDriverRegenRequest_IN_Entrance ((uint8_T)1U)
#define MDriverRegenRequested_IN_Reset ((uint8_T)2U)

/* Output and update for referenced model: 'MDriverRegenRequested' */
void MDriverRegenRequested(const real_T *rtu_MRegenMax, const real_T
  *rtu_rRegenPaddle, const real_T *rtu_vChassis, const real_T *rtu_PRegenMax,
  const real_T *rtu_VDCInvRL, const real_T *rtu_IIVTS, const real_T
  *rtu_PRegenDerate, real_T *rty_PRegenRequested, real_T
  *rty_MDriverRegenRequested, B_MDriverRegenRequested_c_T *localB,
  DW_MDriverRegenRequested_f_T *localDW)
{
  real_T rtb_Gain1;
  real_T rtb_Switch1_o;

  /* MinMax: '<S4>/Min1' */
  rtb_Switch1_o = fmin(*rtu_PRegenMax, *rtu_PRegenDerate);

  /* Gain: '<S4>/Gain1' incorporates:
   *  Constant: '<S4>/Constant'
   *  Gain: '<S4>/Gain'
   *  Gain: '<S4>/Gain2'
   *  Product: '<S4>/Divide'
   *  Product: '<S4>/Multiply'
   */
  rtb_Gain1 = 0.01 * *rtu_rRegenPaddle * *rtu_MRegenMax * (*rtu_vChassis / 0.203
    * 15.551) * 0.001;

  /* Switch: '<S12>/Switch2' incorporates:
   *  Constant: '<S4>/Constant1'
   *  RelationalOperator: '<S12>/LowerRelop1'
   *  RelationalOperator: '<S12>/UpperRelop'
   *  Switch: '<S12>/Switch'
   */
  if (rtb_Gain1 > rtb_Switch1_o) {
    *rty_PRegenRequested = rtb_Switch1_o;
  } else if (rtb_Gain1 < 0.0) {
    /* Switch: '<S12>/Switch' incorporates:
     *  Constant: '<S4>/Constant1'
     */
    *rty_PRegenRequested = 0.0;
  } else {
    *rty_PRegenRequested = rtb_Gain1;
  }

  /* End of Switch: '<S12>/Switch2' */

  /* Product: '<S1>/Divide' incorporates:
   *  Gain: '<S1>/Gain1'
   */
  rtb_Switch1_o = -1000.0 * *rty_PRegenRequested / *rtu_VDCInvRL;

  /* Chart: '<S2>/Relax Latch System' incorporates:
   *  Constant: '<S8>/Constant'
   *  Memory: '<S5>/Memory1'
   *  RelationalOperator: '<S8>/Compare'
   */
  if (localDW->temporalCounter_i1 < 8191) {
    localDW->temporalCounter_i1++;
  }

  if (localDW->is_active_c3_MDriverRegenReques == 0) {
    localDW->is_active_c3_MDriverRegenReques = 1U;
    localDW->is_c3_MDriverRegenRequested = MDriverRegenRequest_IN_Entrance;
    localB->BHighChargeOK = 1.0;
  } else if (localDW->is_c3_MDriverRegenRequested ==
             MDriverRegenRequest_IN_Entrance) {
    if ((localDW->Memory1_PreviousInput < 1.9) < 0.5) {
      localDW->temporalCounter_i1 = 0U;
      localDW->is_c3_MDriverRegenRequested = MDriverRegenRequested_IN_Reset;
      localB->BHighChargeOK = 0.0;
    }

    /* case IN_Reset: */
  } else if (localDW->temporalCounter_i1 >= 5000) {
    localDW->is_c3_MDriverRegenRequested = MDriverRegenRequest_IN_Entrance;
    localB->BHighChargeOK = 1.0;
  } else {
    localB->BHighChargeOK = 0.0;
  }

  /* End of Chart: '<S2>/Relax Latch System' */

  /* Switch: '<S10>/Switch2' incorporates:
   *  Constant: '<S6>/Zero'
   *  DataTypeConversion: '<S2>/Data Type Conversion'
   *  RelationalOperator: '<S10>/LowerRelop1'
   *  Switch: '<S6>/Switch1'
   */
  if (rtb_Switch1_o > 0.0) {
    rtb_Switch1_o = 0.0;
  } else {
    int32_T rtb_Switch1;
    if (localB->BHighChargeOK != 0.0) {
      /* Switch: '<S6>/Switch1' incorporates:
       *  Constant: '<S6>/Constant2'
       */
      rtb_Switch1 = -180;
    } else {
      /* Switch: '<S6>/Switch1' incorporates:
       *  Constant: '<S6>/ '
       */
      rtb_Switch1 = -72;
    }

    /* Switch: '<S10>/Switch' incorporates:
     *  RelationalOperator: '<S10>/UpperRelop'
     */
    if (rtb_Switch1_o < rtb_Switch1) {
      rtb_Switch1_o = rtb_Switch1;
    }

    /* End of Switch: '<S10>/Switch' */
  }

  /* End of Switch: '<S10>/Switch2' */

  /* Saturate: '<S3>/Saturation2' */
  if (*rtu_vChassis > 40.0) {
    rtb_Gain1 = 40.0;
  } else if (*rtu_vChassis < 0.1) {
    rtb_Gain1 = 0.1;
  } else {
    rtb_Gain1 = *rtu_vChassis;
  }

  /* Gain: '<S3>/Gain' incorporates:
   *  Constant: '<S3>/Nom Torque'
   *  Constant: '<S3>/Nom Torque1'
   *  Gain: '<S3>/Gain1'
   *  Product: '<S3>/Divide'
   *  Product: '<S3>/Divide1'
   *  Product: '<S3>/Divide2'
   *  Product: '<S3>/Multiply'
   *  Saturate: '<S3>/Saturation2'
   */
  rtb_Switch1_o = rtb_Switch1_o * *rtu_VDCInvRL / (rtb_Gain1 / 0.203 * 15.551) /
    9.8 * 100.0;

  /* Switch: '<S11>/Switch2' incorporates:
   *  Constant: '<S3>/Constant'
   *  RelationalOperator: '<S11>/LowerRelop1'
   */
  if (rtb_Switch1_o > 0.0) {
    *rty_MDriverRegenRequested = 0.0;
  } else {
    /* Gain: '<S3>/Gain2' incorporates:
     *  Constant: '<S3>/Nom Torque2'
     *  Product: '<S3>/Divide3'
     */
    rtb_Gain1 = *rtu_MRegenMax / 9.8 * -100.0;

    /* Switch: '<S11>/Switch' incorporates:
     *  RelationalOperator: '<S11>/UpperRelop'
     */
    if (rtb_Switch1_o < rtb_Gain1) {
      *rty_MDriverRegenRequested = rtb_Gain1;
    } else {
      *rty_MDriverRegenRequested = rtb_Switch1_o;
    }

    /* End of Switch: '<S11>/Switch' */
  }

  /* End of Switch: '<S11>/Switch2' */

  /* Switch: '<S5>/Switch1' incorporates:
   *  Constant: '<S5>/Constant6'
   *  Constant: '<S9>/Constant'
   *  RelationalOperator: '<S9>/Compare'
   */
  if (!(*rtu_IIVTS < -170.0)) {
    localDW->Memory1_PreviousInput = 0.0;
  }

  /* Update for Switch: '<S5>/Switch1' incorporates:
   *  Constant: '<S5>/Constant5'
   *  Memory: '<S5>/Memory1'
   *  Sum: '<S5>/Add1'
   */
  localDW->Memory1_PreviousInput += 0.001;
}

/* Model initialize function */
void MDriverRegenRequeste_initialize(const char_T **rt_errorStatus,
  RT_MODEL_MDriverRegenRequeste_T *const MDriverRegenRequested_M)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(MDriverRegenRequested_M, rt_errorStatus);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
