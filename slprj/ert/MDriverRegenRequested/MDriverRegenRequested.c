/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: MDriverRegenRequested.c
 *
 * Code generated for Simulink model 'MDriverRegenRequested'.
 *
 * Model version                  : 13.5
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Tue Jun  2 18:47:46 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "MDriverRegenRequested.h"
#include "rtwtypes.h"
#include "MDriverRegenRequested_private.h"

/* Named constants for Chart: '<S2>/Relax Latch System' */
#define MDriverRegenRequest_IN_Entrance ((uint8_T)1U)
#define MDriverRegenRequested_IN_Reset ((uint8_T)2U)

/* Output and update for referenced model: 'MDriverRegenRequested' */
void MDriverRegenRequested(const real_T *rtu_IIVTS, const real_T *rtu_PRegen,
  const real_T *rtu_rRegenPaddle, const real_T *rtu_VDCInvRL, real_T
  *rty_MDriverRegenRequested, B_MDriverRegenRequested_c_T *localB,
  DW_MDriverRegenRequested_f_T *localDW)
{
  real_T rtb_Divide;

  /* Product: '<S1>/Divide' incorporates:
   *  Gain: '<S1>/Gain'
   *  Gain: '<S1>/Negative Torque'
   *  Gain: '<S1>/kW to W'
   *  Product: '<S1>/Multiply'
   */
  rtb_Divide = -(0.01 * *rtu_rRegenPaddle * *rtu_PRegen * 1000.0) /
    *rtu_VDCInvRL;

  /* Chart: '<S2>/Relax Latch System' incorporates:
   *  Constant: '<S8>/Constant'
   *  Memory: '<S4>/Memory1'
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
  } else if (localDW->temporalCounter_i1 >= 8000) {
    localDW->is_c3_MDriverRegenRequested = MDriverRegenRequest_IN_Entrance;
    localB->BHighChargeOK = 1.0;
  } else {
    localB->BHighChargeOK = 0.0;
  }

  /* End of Chart: '<S2>/Relax Latch System' */

  /* Switch: '<S9>/Switch2' incorporates:
   *  Constant: '<S6>/Zero'
   *  DataTypeConversion: '<S2>/Data Type Conversion'
   *  RelationalOperator: '<S9>/LowerRelop1'
   *  Switch: '<S6>/Switch1'
   */
  if (rtb_Divide > 0.0) {
    rtb_Divide = 0.0;
  } else {
    real_T rtb_Switch1;
    if (localB->BHighChargeOK != 0.0) {
      /* Switch: '<S6>/Switch1' incorporates:
       *  Constant: '<S6>/Constant2'
       */
      rtb_Switch1 = -80.0;
    } else {
      /* Switch: '<S6>/Switch1' incorporates:
       *  Constant: '<S6>/Constant1'
       */
      rtb_Switch1 = -27.2;
    }

    /* Switch: '<S9>/Switch' incorporates:
     *  RelationalOperator: '<S9>/UpperRelop'
     */
    if (rtb_Divide < rtb_Switch1) {
      rtb_Divide = rtb_Switch1;
    }

    /* End of Switch: '<S9>/Switch' */
  }

  /* End of Switch: '<S9>/Switch2' */

  /* Gain: '<S3>/Gain' incorporates:
   *  Constant: '<S3>/Nom Torque'
   *  Gain: '<S3>/Ke'
   *  Product: '<S3>/Divide1'
   */
  rtb_Divide = 0.26 * rtb_Divide / 9.8 * 100.0;

  /* Saturate: '<S3>/Saturation' */
  if (rtb_Divide < -200.0) {
    *rty_MDriverRegenRequested = -200.0;
  } else {
    *rty_MDriverRegenRequested = rtb_Divide;
  }

  /* End of Saturate: '<S3>/Saturation' */

  /* Switch: '<S4>/Switch1' incorporates:
   *  Constant: '<S4>/Constant6'
   *  Constant: '<S7>/Constant'
   *  RelationalOperator: '<S7>/Compare'
   */
  if (!(*rtu_IIVTS < -80.0)) {
    localDW->Memory1_PreviousInput = 0.0;
  }

  /* Update for Switch: '<S4>/Switch1' incorporates:
   *  Constant: '<S4>/Constant5'
   *  Memory: '<S4>/Memory1'
   *  Sum: '<S4>/Add1'
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

  /* user code (Initialize function Body) */
  LL_TIM_EnableCounter(TIM2);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
