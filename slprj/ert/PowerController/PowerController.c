/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: PowerController.c
 *
 * Code generated for Simulink model 'PowerController'.
 *
 * Model version                  : 13.5
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Wed Jun  3 14:56:36 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "PowerController.h"
#include "rtwtypes.h"
#include "look1_binlxpw.h"
#include "PowerController_private.h"

/* Output and update for referenced model: 'PowerController' */
void PowerController(const real_T *rtu_vChassis, const real_T
                     *rtu_NPowerControllerKpSelector, const real_T *rtu_VDCInvRL,
                     const real_T *rtu_PActual, const real_T *rtu_rThrottlePedal,
                     const real_T *rtu_PDischarge, const real_T
                     *rtu_MDischargeLimited, real_T
                     *rty_PPowerControllerRequested, real_T
                     *rty_MPowerControllerRequested, real_T
                     *rty_PPowerControllerProportiona, real_T
                     *rty_PPowerControllerIntegralTer, real_T
                     *rty_PDischargeLimited, DW_PowerController_f_T *localDW)
{
  real_T rtb_Switch1;
  real_T rtb_WtokWConversion;
  boolean_T rtb_LogicalOperator;

  /* Gain: '<S5>/W to kW Conversion' incorporates:
   *  Constant: '<S5>/Constant'
   *  Constant: '<S5>/Constant8'
   *  Product: '<S5>/Divide'
   *  Product: '<S5>/Multiply1'
   *  Product: '<S5>/Multiply2'
   */
  rtb_WtokWConversion = 0.098 * *rtu_MDischargeLimited * 3.8461538461538458 *
    *rtu_VDCInvRL * 0.001;

  /* Switch: '<S19>/Switch2' incorporates:
   *  Constant: '<S5>/Constant1'
   *  RelationalOperator: '<S19>/LowerRelop1'
   *  RelationalOperator: '<S19>/UpperRelop'
   *  Switch: '<S19>/Switch'
   */
  if (rtb_WtokWConversion > *rtu_PDischarge) {
    *rty_PDischargeLimited = *rtu_PDischarge;
  } else if (rtb_WtokWConversion < 0.0) {
    /* Switch: '<S19>/Switch' incorporates:
     *  Constant: '<S5>/Constant1'
     */
    *rty_PDischargeLimited = 0.0;
  } else {
    *rty_PDischargeLimited = rtb_WtokWConversion;
  }

  /* End of Switch: '<S19>/Switch2' */

  /* Sum: '<S8>/Subtract' */
  rtb_WtokWConversion = *rty_PDischargeLimited - *rtu_PActual;

  /* MultiPortSwitch: '<S2>/Multiport Switch' incorporates:
   *  Constant: '<S2>/Constant1'
   *  Constant: '<S2>/Constant2'
   *  Constant: '<S2>/Constant5'
   *  Lookup_n-D: '<S2>/1-D Lookup Table'
   *  Lookup_n-D: '<S2>/1-D Lookup Table1'
   *  Lookup_n-D: '<S2>/1-D Lookup Table2'
   */
  switch ((int32_T)*rtu_NPowerControllerKpSelector) {
   case 1:
    rtb_Switch1 = 0.5;
    break;

   case 2:
    rtb_Switch1 = 0.67;
    break;

   case 3:
    rtb_Switch1 = 0.33;
    break;

   case 4:
    rtb_Switch1 = look1_binlxpw(*rtu_vChassis, rtCP_uDLookupTable_bp01Data,
      rtCP_uDLookupTable_tableData, 3U);
    break;

   case 5:
    rtb_Switch1 = look1_binlxpw(*rtu_vChassis, rtCP_uDLookupTable1_bp01Data,
      rtCP_uDLookupTable1_tableData, 3U);
    break;

   default:
    rtb_Switch1 = look1_binlxpw(*rtu_vChassis, rtCP_uDLookupTable2_bp01Data,
      rtCP_uDLookupTable2_tableData, 3U);
    break;
  }

  /* End of MultiPortSwitch: '<S2>/Multiport Switch' */

  /* Product: '<S10>/Multiply1' */
  rtb_Switch1 *= rtb_WtokWConversion;

  /* Switch: '<S18>/Switch2' incorporates:
   *  Constant: '<S10>/Constant7'
   *  Constant: '<S10>/Constant8'
   *  RelationalOperator: '<S18>/LowerRelop1'
   *  RelationalOperator: '<S18>/UpperRelop'
   *  Switch: '<S18>/Switch'
   */
  if (rtb_Switch1 > 6.0) {
    *rty_PPowerControllerProportiona = 6.0;
  } else if (rtb_Switch1 < -10.0) {
    /* Switch: '<S18>/Switch' incorporates:
     *  Constant: '<S10>/Constant8'
     */
    *rty_PPowerControllerProportiona = -10.0;
  } else {
    *rty_PPowerControllerProportiona = rtb_Switch1;
  }

  /* End of Switch: '<S18>/Switch2' */

  /* Logic: '<S7>/Logical Operator' incorporates:
   *  Constant: '<S12>/Constant'
   *  Constant: '<S13>/Constant'
   *  RelationalOperator: '<S12>/Compare'
   *  RelationalOperator: '<S13>/Compare'
   */
  rtb_LogicalOperator = ((*rtu_PActual > 70.0) && (*rtu_rThrottlePedal > 90.0));

  /* Switch: '<S17>/Switch' */
  if (rtb_LogicalOperator) {
    /* Switch: '<S17>/Switch' incorporates:
     *  Constant: '<S9>/Constant'
     *  Memory: '<S16>/Memory1'
     *  Memory: '<S17>/Memory'
     *  Product: '<S17>/Multiply'
     *  Product: '<S9>/Multiply2'
     *  Sum: '<S17>/Sum2'
     */
    localDW->Memory_PreviousInput += rtb_WtokWConversion * 0.05 *
      localDW->Memory1_PreviousInput;
  } else {
    /* Switch: '<S17>/Switch' incorporates:
     *  Constant: '<S17>/Constant1'
     */
    localDW->Memory_PreviousInput = 0.0;
  }

  /* End of Switch: '<S17>/Switch' */

  /* Switch: '<S15>/Switch2' incorporates:
   *  Constant: '<S9>/Constant7'
   *  Constant: '<S9>/Constant8'
   *  RelationalOperator: '<S15>/LowerRelop1'
   *  RelationalOperator: '<S15>/UpperRelop'
   *  Switch: '<S15>/Switch'
   */
  if (localDW->Memory_PreviousInput > 3.0) {
    *rty_PPowerControllerIntegralTer = 3.0;
  } else if (localDW->Memory_PreviousInput < -8.0) {
    /* Switch: '<S15>/Switch' incorporates:
     *  Constant: '<S9>/Constant8'
     */
    *rty_PPowerControllerIntegralTer = -8.0;
  } else {
    *rty_PPowerControllerIntegralTer = localDW->Memory_PreviousInput;
  }

  /* End of Switch: '<S15>/Switch2' */

  /* Sum: '<S11>/Add' */
  rtb_WtokWConversion = (*rty_PDischargeLimited +
    *rty_PPowerControllerProportiona) + *rty_PPowerControllerIntegralTer;

  /* Switch: '<S6>/Switch2' incorporates:
   *  Constant: '<S1>/Constant5'
   *  Constant: '<S1>/Constant6'
   *  RelationalOperator: '<S6>/LowerRelop1'
   *  RelationalOperator: '<S6>/UpperRelop'
   *  Sum: '<S1>/Add1'
   *  Switch: '<S6>/Switch'
   */
  if (rtb_WtokWConversion > *rtu_PDischarge + 8.0) {
    *rty_PPowerControllerRequested = *rtu_PDischarge + 8.0;
  } else if (rtb_WtokWConversion < 0.0) {
    /* Switch: '<S6>/Switch' incorporates:
     *  Constant: '<S1>/Constant6'
     */
    *rty_PPowerControllerRequested = 0.0;
  } else {
    *rty_PPowerControllerRequested = rtb_WtokWConversion;
  }

  /* End of Switch: '<S6>/Switch2' */

  /* Product: '<S4>/Divide2' incorporates:
   *  Constant: '<S4>/Constant2'
   *  Constant: '<S4>/Constant3'
   *  Gain: '<S4>/kW to W Conversion'
   *  Product: '<S4>/Divide1'
   *  Product: '<S4>/Multiply3'
   */
  *rty_MPowerControllerRequested = 1000.0 * *rty_PPowerControllerRequested /
    *rtu_VDCInvRL * 0.26 / 0.098;

  /* Switch: '<S16>/Switch1' incorporates:
   *  Constant: '<S16>/start time'
   */
  if (!rtb_LogicalOperator) {
    localDW->Memory1_PreviousInput = 0.0;
  }

  /* Update for Switch: '<S16>/Switch1' incorporates:
   *  Constant: '<S16>/Constant5'
   *  Memory: '<S16>/Memory1'
   *  Sum: '<S16>/Add'
   */
  localDW->Memory1_PreviousInput += 0.001;
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
