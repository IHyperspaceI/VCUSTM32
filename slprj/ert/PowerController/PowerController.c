/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: PowerController.c
 *
 * Code generated for Simulink model 'PowerController'.
 *
 * Model version                  : 13.2
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Fri Jul 31 17:36:12 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "PowerController.h"
#include "rtwtypes.h"
#include <math.h>
#include "look1_binlxpw.h"
#include "PowerController_private.h"

/* Output and update for referenced model: 'PowerController' */
void PowerController(const real_T *rtu_vChassis, const real_T *rtu_NPCKpSelector,
                     const real_T *rtu_PDischargeMax, const real_T
                     *rtu_MDriverDischargeRequested, const real_T *rtu_PRegenMax,
                     const real_T *rtu_PDischargeDerate, const real_T
                     *rtu_PRegenDerate, const real_T *rtu_PActual, const real_T *
                     rtu_rThrottlePedal, const real_T *rtu_rRegenPaddle, const
                     real_T *rtu_PRegenRequested, const boolean_T
                     *rtu_BDischargeAllowed, real_T *rty_PDischargeLimit, real_T
                     *rty_PPCIntegralTermDischarge, real_T
                     *rty_PPCProportionalTermDischarg, real_T
                     *rty_MPCDischargeRequested, real_T *rty_PRegenLimit, real_T
                     *rty_PPCIntegralTermRegen, real_T
                     *rty_PPCProportionalTermRegen, real_T
                     *rty_MPCRegenRequested, real_T *rty_PPCDischargeRequested,
                     real_T *rty_PPCRegenRequested, real_T
                     *rty_PDischargeLimited, DW_PowerController_f_T *localDW)
{
  real_T rtb_Multiply1_k;
  real_T rtb_Subtract;
  real_T rtb_Switch1_h;
  real_T rtb_WtokWConversion;
  boolean_T rtb_LogicalOperator;

  /* MinMax: '<S4>/Min' */
  *rty_PDischargeLimit = fmin(*rtu_PDischargeMax, *rtu_PDischargeDerate);

  /* Sum: '<S6>/Add1' incorporates:
   *  Constant: '<S6>/Constant5'
   */
  rtb_Switch1_h = *rty_PDischargeLimit + 8.0;

  /* Gain: '<S3>/W to kW Conversion' incorporates:
   *  Constant: '<S3>/Constant'
   *  Constant: '<S3>/Constant2'
   *  Constant: '<S3>/Constant3'
   *  Gain: '<S3>/Gain'
   *  Product: '<S3>/Divide'
   *  Product: '<S3>/Divide1'
   *  Product: '<S3>/Multiply1'
   *  Product: '<S3>/Multiply3'
   */
  rtb_WtokWConversion = 9.8 * *rtu_MDriverDischargeRequested / 100.0 * 15.551 *
    (*rtu_vChassis / 0.203) * 0.001;

  /* Switch: '<S21>/Switch2' incorporates:
   *  Constant: '<S3>/Constant1'
   *  RelationalOperator: '<S21>/LowerRelop1'
   *  RelationalOperator: '<S21>/UpperRelop'
   *  Switch: '<S21>/Switch'
   */
  if (rtb_WtokWConversion > *rty_PDischargeLimit) {
    *rty_PDischargeLimited = *rty_PDischargeLimit;
  } else if (rtb_WtokWConversion < 0.0) {
    /* Switch: '<S21>/Switch' incorporates:
     *  Constant: '<S3>/Constant1'
     */
    *rty_PDischargeLimited = 0.0;
  } else {
    *rty_PDischargeLimited = rtb_WtokWConversion;
  }

  /* End of Switch: '<S21>/Switch2' */

  /* Sum: '<S11>/Subtract' */
  rtb_Subtract = *rty_PDischargeLimit - *rtu_PActual;

  /* MultiPortSwitch: '<S2>/Multiport Switch' incorporates:
   *  Constant: '<S2>/Constant1'
   *  Constant: '<S2>/Constant2'
   *  Constant: '<S2>/Constant5'
   *  Lookup_n-D: '<S2>/1-D Lookup Table'
   *  Lookup_n-D: '<S2>/1-D Lookup Table1'
   *  Lookup_n-D: '<S2>/1-D Lookup Table2'
   */
  switch ((int32_T)*rtu_vChassis) {
   case 1:
    rtb_WtokWConversion = 0.5;
    break;

   case 2:
    rtb_WtokWConversion = 0.67;
    break;

   case 3:
    rtb_WtokWConversion = 0.33;
    break;

   case 4:
    rtb_WtokWConversion = look1_binlxpw(*rtu_NPCKpSelector,
      rtCP_uDLookupTable_bp01Data, rtCP_uDLookupTable_tableData, 3U);
    break;

   case 5:
    rtb_WtokWConversion = look1_binlxpw(*rtu_NPCKpSelector,
      rtCP_uDLookupTable1_bp01Data, rtCP_uDLookupTable1_tableData, 3U);
    break;

   default:
    rtb_WtokWConversion = look1_binlxpw(*rtu_NPCKpSelector,
      rtCP_uDLookupTable2_bp01Data, rtCP_uDLookupTable2_tableData, 3U);
    break;
  }

  /* End of MultiPortSwitch: '<S2>/Multiport Switch' */

  /* Product: '<S13>/Multiply1' */
  rtb_Multiply1_k = rtb_Subtract * rtb_WtokWConversion;

  /* Switch: '<S20>/Switch2' incorporates:
   *  Constant: '<S13>/Constant7'
   *  Constant: '<S13>/Constant8'
   *  RelationalOperator: '<S20>/LowerRelop1'
   *  RelationalOperator: '<S20>/UpperRelop'
   *  Switch: '<S20>/Switch'
   */
  if (rtb_Multiply1_k > 6.0) {
    *rty_PPCProportionalTermDischarg = 6.0;
  } else if (rtb_Multiply1_k < -10.0) {
    /* Switch: '<S20>/Switch' incorporates:
     *  Constant: '<S13>/Constant8'
     */
    *rty_PPCProportionalTermDischarg = -10.0;
  } else {
    *rty_PPCProportionalTermDischarg = rtb_Multiply1_k;
  }

  /* End of Switch: '<S20>/Switch2' */

  /* Logic: '<S10>/Logical Operator' incorporates:
   *  Constant: '<S10>/Constant'
   *  Constant: '<S15>/Constant'
   *  RelationalOperator: '<S10>/GreaterThan'
   *  RelationalOperator: '<S15>/Compare'
   *  Sum: '<S10>/Subtract'
   */
  rtb_LogicalOperator = ((*rtu_PActual > *rty_PDischargeLimit - 5.0) &&
    (*rtu_rThrottlePedal > 90.0));

  /* Switch: '<S19>/Switch' */
  if (rtb_LogicalOperator) {
    /* Switch: '<S19>/Switch' incorporates:
     *  Constant: '<S12>/Constant'
     *  Memory: '<S18>/Memory1'
     *  Memory: '<S19>/Memory'
     *  Product: '<S12>/Multiply2'
     *  Product: '<S19>/Multiply'
     *  Sum: '<S19>/Sum2'
     */
    localDW->Memory_PreviousInput += rtb_Subtract * 0.05 *
      localDW->Memory1_PreviousInput;
  } else {
    /* Switch: '<S19>/Switch' incorporates:
     *  Constant: '<S19>/Constant1'
     */
    localDW->Memory_PreviousInput = 0.0;
  }

  /* End of Switch: '<S19>/Switch' */

  /* Switch: '<S17>/Switch2' incorporates:
   *  Constant: '<S12>/Constant7'
   *  Constant: '<S12>/Constant8'
   *  RelationalOperator: '<S17>/LowerRelop1'
   *  RelationalOperator: '<S17>/UpperRelop'
   *  Switch: '<S17>/Switch'
   */
  if (localDW->Memory_PreviousInput > 3.0) {
    *rty_PPCIntegralTermDischarge = 3.0;
  } else if (localDW->Memory_PreviousInput < -8.0) {
    /* Switch: '<S17>/Switch' incorporates:
     *  Constant: '<S12>/Constant8'
     */
    *rty_PPCIntegralTermDischarge = -8.0;
  } else {
    *rty_PPCIntegralTermDischarge = localDW->Memory_PreviousInput;
  }

  /* End of Switch: '<S17>/Switch2' */

  /* Sum: '<S14>/Add' */
  rtb_Subtract = (*rty_PDischargeLimited + *rty_PPCProportionalTermDischarg) +
    *rty_PPCIntegralTermDischarge;

  /* Switch: '<S9>/Switch2' incorporates:
   *  Constant: '<S6>/Constant5'
   *  RelationalOperator: '<S9>/LowerRelop1'
   *  Sum: '<S6>/Add1'
   */
  if (!(rtb_Subtract > *rty_PDischargeLimit + 8.0)) {
    /* Switch: '<S9>/Switch' incorporates:
     *  Constant: '<S6>/Constant6'
     *  RelationalOperator: '<S9>/UpperRelop'
     */
    if (rtb_Subtract < 0.0) {
      rtb_Switch1_h = 0.0;
    } else {
      rtb_Switch1_h = rtb_Subtract;
    }

    /* End of Switch: '<S9>/Switch' */
  }

  /* End of Switch: '<S9>/Switch2' */

  /* Product: '<S6>/Multiply' */
  *rty_PPCDischargeRequested = (real_T)*rtu_BDischargeAllowed * rtb_Switch1_h;

  /* Saturate: '<S8>/Saturation1' */
  if (*rtu_vChassis > 40.0) {
    rtb_Subtract = 40.0;
  } else if (*rtu_vChassis < 0.1) {
    rtb_Subtract = 0.1;
  } else {
    rtb_Subtract = *rtu_vChassis;
  }

  /* Product: '<S8>/Divide2' incorporates:
   *  Constant: '<S8>/Constant'
   *  Constant: '<S8>/Constant1'
   *  Gain: '<S8>/%'
   *  Gain: '<S8>/Gain'
   *  Gain: '<S8>/kW to W Conversion'
   *  Product: '<S8>/Divide1'
   *  Product: '<S8>/Divide3'
   *  Saturate: '<S8>/Saturation1'
   */
  rtb_Subtract = 1000.0 * *rty_PPCDischargeRequested / (rtb_Subtract / 0.203) *
    100.0 * 0.064304546331425627 / 9.8;

  /* Saturate: '<S8>/Saturation' */
  if (rtb_Subtract > 857.0) {
    *rty_MPCDischargeRequested = 857.0;
  } else if (rtb_Subtract < 0.0) {
    *rty_MPCDischargeRequested = 0.0;
  } else {
    *rty_MPCDischargeRequested = rtb_Subtract;
  }

  /* End of Saturate: '<S8>/Saturation' */

  /* Switch: '<S18>/Switch1' incorporates:
   *  Constant: '<S18>/start time'
   *  Memory: '<S18>/Memory1'
   */
  if (rtb_LogicalOperator) {
    rtb_Switch1_h = localDW->Memory1_PreviousInput;
  } else {
    rtb_Switch1_h = 0.0;
  }

  /* End of Switch: '<S18>/Switch1' */

  /* Gain: '<S4>/Gain' incorporates:
   *  MinMax: '<S4>/Min1'
   */
  *rty_PRegenLimit = -fmin(*rtu_PRegenMax, *rtu_PRegenDerate);

  /* Sum: '<S27>/Subtract' */
  rtb_Subtract = *rty_PRegenLimit - *rtu_PActual;

  /* Product: '<S29>/Multiply1' */
  rtb_WtokWConversion *= rtb_Subtract;

  /* Switch: '<S36>/Switch2' incorporates:
   *  Constant: '<S29>/Constant7'
   *  Constant: '<S29>/Constant8'
   *  RelationalOperator: '<S36>/LowerRelop1'
   *  RelationalOperator: '<S36>/UpperRelop'
   *  Switch: '<S36>/Switch'
   */
  if (rtb_WtokWConversion > 10.0) {
    *rty_PPCProportionalTermRegen = 10.0;
  } else if (rtb_WtokWConversion < 0.0) {
    /* Switch: '<S36>/Switch' incorporates:
     *  Constant: '<S29>/Constant8'
     */
    *rty_PPCProportionalTermRegen = 0.0;
  } else {
    *rty_PPCProportionalTermRegen = rtb_WtokWConversion;
  }

  /* End of Switch: '<S36>/Switch2' */

  /* Logic: '<S26>/Logical Operator' incorporates:
   *  Constant: '<S26>/Constant'
   *  Constant: '<S31>/Constant'
   *  RelationalOperator: '<S26>/GreaterThan'
   *  RelationalOperator: '<S31>/Compare'
   *  Sum: '<S26>/Subtract'
   */
  rtb_LogicalOperator = ((*rtu_PActual < *rty_PRegenLimit + 5.0) &&
    (*rtu_rRegenPaddle > 60.0));

  /* Switch: '<S35>/Switch' */
  if (rtb_LogicalOperator) {
    /* Switch: '<S35>/Switch' incorporates:
     *  Constant: '<S28>/Constant'
     *  Memory: '<S34>/Memory1'
     *  Memory: '<S35>/Memory'
     *  Product: '<S28>/Multiply2'
     *  Product: '<S35>/Multiply'
     *  Sum: '<S35>/Sum2'
     */
    localDW->Memory_PreviousInput_b += rtb_Subtract * 0.05 *
      localDW->Memory1_PreviousInput_k;
  } else {
    /* Switch: '<S35>/Switch' incorporates:
     *  Constant: '<S35>/Constant1'
     */
    localDW->Memory_PreviousInput_b = 0.0;
  }

  /* End of Switch: '<S35>/Switch' */

  /* Switch: '<S33>/Switch2' incorporates:
   *  Constant: '<S28>/Constant7'
   *  Constant: '<S28>/Constant8'
   *  RelationalOperator: '<S33>/LowerRelop1'
   *  RelationalOperator: '<S33>/UpperRelop'
   *  Switch: '<S33>/Switch'
   */
  if (localDW->Memory_PreviousInput_b > 10.0) {
    *rty_PPCIntegralTermRegen = 10.0;
  } else if (localDW->Memory_PreviousInput_b < 0.0) {
    /* Switch: '<S33>/Switch' incorporates:
     *  Constant: '<S28>/Constant8'
     */
    *rty_PPCIntegralTermRegen = 0.0;
  } else {
    *rty_PPCIntegralTermRegen = localDW->Memory_PreviousInput_b;
  }

  /* End of Switch: '<S33>/Switch2' */

  /* Sum: '<S30>/Add' incorporates:
   *  Gain: '<Root>/Gain'
   */
  rtb_WtokWConversion = (-*rtu_PRegenRequested + *rty_PPCProportionalTermRegen)
    + *rty_PPCIntegralTermRegen;

  /* Switch: '<S25>/Switch2' incorporates:
   *  Constant: '<S22>/Constant6'
   *  RelationalOperator: '<S25>/LowerRelop1'
   *  RelationalOperator: '<S25>/UpperRelop'
   *  Switch: '<S25>/Switch'
   */
  if (rtb_WtokWConversion > 0.0) {
    *rty_PPCRegenRequested = 0.0;
  } else if (rtb_WtokWConversion < *rty_PRegenLimit) {
    /* Switch: '<S25>/Switch' */
    *rty_PPCRegenRequested = *rty_PRegenLimit;
  } else {
    *rty_PPCRegenRequested = rtb_WtokWConversion;
  }

  /* End of Switch: '<S25>/Switch2' */

  /* Saturate: '<S24>/Saturation1' */
  if (*rtu_vChassis > 40.0) {
    rtb_Subtract = 40.0;
  } else if (*rtu_vChassis < 0.1) {
    rtb_Subtract = 0.1;
  } else {
    rtb_Subtract = *rtu_vChassis;
  }

  /* Product: '<S24>/Divide2' incorporates:
   *  Constant: '<S24>/Constant'
   *  Constant: '<S24>/Constant1'
   *  Gain: '<S24>/% '
   *  Gain: '<S24>/Gain'
   *  Gain: '<S24>/kW to W Conversion'
   *  Product: '<S24>/Divide1'
   *  Product: '<S24>/Divide3'
   *  Saturate: '<S24>/Saturation1'
   */
  rtb_Subtract = 1000.0 * *rty_PPCRegenRequested / (rtb_Subtract / 0.203) *
    100.0 * 0.064304546331425627 / 9.8;

  /* Saturate: '<S24>/Saturation' */
  if (rtb_Subtract > 0.0) {
    *rty_MPCRegenRequested = 0.0;
  } else if (rtb_Subtract < -653.0) {
    *rty_MPCRegenRequested = -653.0;
  } else {
    *rty_MPCRegenRequested = rtb_Subtract;
  }

  /* End of Saturate: '<S24>/Saturation' */

  /* Update for Memory: '<S18>/Memory1' incorporates:
   *  Constant: '<S18>/Constant5'
   *  Sum: '<S18>/Add'
   */
  localDW->Memory1_PreviousInput = rtb_Switch1_h + 0.001;

  /* Switch: '<S34>/Switch1' incorporates:
   *  Constant: '<S34>/start time'
   */
  if (!rtb_LogicalOperator) {
    localDW->Memory1_PreviousInput_k = 0.0;
  }

  /* Update for Switch: '<S34>/Switch1' incorporates:
   *  Constant: '<S34>/Constant5'
   *  Memory: '<S34>/Memory1'
   *  Sum: '<S34>/Add'
   */
  localDW->Memory1_PreviousInput_k += 0.001;
}

/* Model initialize function */
void PowerController_initialize(const char_T **rt_errorStatus,
  RT_MODEL_PowerController_T *const PowerController_M)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(PowerController_M, rt_errorStatus);

  /* user code (Initialize function Body) */
  LL_TIM_EnableCounter(TIM2);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
