/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: EMS.c
 *
 * Code generated for Simulink model 'EMS'.
 *
 * Model version                  : 13.5
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Tue Jun  2 18:47:33 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "EMS.h"
#include "rtwtypes.h"
#include <math.h>
#include "look1_binlxpw.h"
#include "EMS_private.h"

/* System initialize for referenced model: 'EMS' */
void EMS_Init(DW_EMS_f_T *localDW)
{
  /* InitializeConditions for Memory: '<S14>/Memory' */
  localDW->Memory_PreviousInput = -3.863;

  /* InitializeConditions for Memory: '<S10>/Memory' */
  localDW->Memory_PreviousInput_n = -3.863;

  /* InitializeConditions for Memory: '<S9>/Memory1' */
  localDW->Memory1_PreviousInput = 100.0;

  /* InitializeConditions for Memory: '<S9>/Memory2' */
  localDW->Memory2_PreviousInput = 100.0;

  /* InitializeConditions for Memory: '<S13>/Memory1' */
  localDW->Memory1_PreviousInput_o = 100.0;

  /* InitializeConditions for Memory: '<S13>/Memory2' */
  localDW->Memory2_PreviousInput_p = 100.0;
}

/* Output and update for referenced model: 'EMS' */
void EMS(const boolean_T *rtu_BEMSActivated, const real_T *rtu_rSOC, const
         boolean_T *rtu_BEMS1000mPoint, const boolean_T *rtu_BEMS995mPoint,
         const real_T *rtu_MTotalRequested, const real_T *rtu_rSOE, const real_T
         *rtu_vChassis, const real_T *rtu_rDischargeDerate, real_T
         *rty_MFinalEMSRequested, real_T *rty_MTotalEMSRequested, real_T
         *rty_rSOCTargetError, real_T *rty_rSOETargetError, DW_EMS_f_T *localDW)
{
  real_T rtb_Add;
  real_T rtb_Add_p;
  real_T rtb_Switch2;

  /* Lookup_n-D: '<S12>/1-D Lookup Table' */
  rtb_Switch2 = look1_binlxpw(*rtu_vChassis, rtCP_uDLookupTable_bp01Data,
    rtCP_uDLookupTable_tableData, 20U);

  /* Sum: '<S14>/Subtract' incorporates:
   *  Constant: '<S14>/Constant1'
   *  Memory: '<S14>/Memory'
   */
  *rty_rSOETargetError = localDW->Memory_PreviousInput - -3.863;

  /* Sum: '<S12>/Add' incorporates:
   *  Abs: '<S12>/Abs'
   *  Constant: '<S12>/Constant1'
   *  Lookup_n-D: '<S12>/1-D Lookup Table1'
   *  Product: '<S12>/Divide'
   *  Product: '<S12>/Multiply'
   */
  rtb_Add = *rtu_MTotalRequested - -0.25886616619207869 * *rty_rSOETargetError *
    *rtu_MTotalRequested * look1_binlxpw(fabs(*rty_rSOETargetError),
    rtCP_uDLookupTable1_bp01Data, rtCP_uDLookupTable1_tableData, 1U);

  /* Switch: '<S15>/Switch2' incorporates:
   *  RelationalOperator: '<S15>/LowerRelop1'
   */
  if (!(rtb_Add > rtb_Switch2)) {
    /* Switch: '<S15>/Switch' incorporates:
     *  Constant: '<S12>/Constant'
     *  RelationalOperator: '<S15>/UpperRelop'
     */
    if (rtb_Add < 0.0) {
      rtb_Switch2 = 0.0;
    } else {
      rtb_Switch2 = rtb_Add;
    }

    /* End of Switch: '<S15>/Switch' */
  }

  /* End of Switch: '<S15>/Switch2' */

  /* Lookup_n-D: '<S8>/1-D Lookup Table' */
  rtb_Add = look1_binlxpw(*rtu_vChassis, rtCP_uDLookupTable_bp01Data_b,
    rtCP_uDLookupTable_tableData_m, 20U);

  /* Sum: '<S10>/Subtract' incorporates:
   *  Constant: '<S10>/Constant1'
   *  Memory: '<S10>/Memory'
   */
  *rty_rSOCTargetError = localDW->Memory_PreviousInput_n - -3.863;

  /* Sum: '<S8>/Add' incorporates:
   *  Abs: '<S8>/Abs'
   *  Constant: '<S8>/Constant1'
   *  Lookup_n-D: '<S8>/1-D Lookup Table1'
   *  Product: '<S8>/Divide'
   *  Product: '<S8>/Multiply'
   */
  rtb_Add_p = *rtu_MTotalRequested - -0.25886616619207869 * *rty_rSOCTargetError
    * *rtu_MTotalRequested * look1_binlxpw(fabs(*rty_rSOCTargetError),
    rtCP_uDLookupTable1_bp01Data_f, rtCP_uDLookupTable1_tableData_j, 1U);

  /* Switch: '<S11>/Switch2' incorporates:
   *  RelationalOperator: '<S11>/LowerRelop1'
   */
  if (!(rtb_Add_p > rtb_Add)) {
    /* Switch: '<S11>/Switch' incorporates:
     *  Constant: '<S8>/Constant'
     *  RelationalOperator: '<S11>/UpperRelop'
     */
    if (rtb_Add_p < 0.0) {
      rtb_Add = 0.0;
    } else {
      rtb_Add = rtb_Add_p;
    }

    /* End of Switch: '<S11>/Switch' */
  }

  /* End of Switch: '<S11>/Switch2' */

  /* MinMax: '<S5>/Min' */
  *rty_MTotalEMSRequested = fmin(rtb_Switch2, rtb_Add);

  /* Switch: '<S4>/Switch' incorporates:
   *  Constant: '<S6>/Constant'
   *  Constant: '<S7>/Constant'
   *  Logic: '<S4>/AND'
   *  RelationalOperator: '<S6>/Compare'
   *  RelationalOperator: '<S7>/Compare'
   */
  if ((*rtu_BEMSActivated) && (*rtu_rDischargeDerate == 1.0) &&
      (*rtu_MTotalRequested > 0.0)) {
    *rty_MFinalEMSRequested = *rty_MTotalEMSRequested;
  } else {
    *rty_MFinalEMSRequested = *rtu_MTotalRequested;
  }

  /* End of Switch: '<S4>/Switch' */

  /* Switch: '<S10>/Switch5' incorporates:
   *  Switch: '<S13>/Switch4'
   *  Switch: '<S14>/Switch5'
   *  Switch: '<S9>/Switch4'
   */
  if (*rtu_BEMS995mPoint) {
    /* Update for Memory: '<S10>/Memory' incorporates:
     *  Memory: '<S9>/Memory1'
     *  Sum: '<S9>/Subtract2'
     */
    localDW->Memory_PreviousInput_n = *rtu_rSOC - localDW->Memory1_PreviousInput;

    /* Update for Memory: '<S14>/Memory' incorporates:
     *  Memory: '<S13>/Memory1'
     *  Sum: '<S13>/Subtract2'
     */
    localDW->Memory_PreviousInput = *rtu_rSOE - localDW->Memory1_PreviousInput_o;

    /* Update for Memory: '<S9>/Memory1' incorporates:
     *  Memory: '<S9>/Memory2'
     */
    localDW->Memory1_PreviousInput = localDW->Memory2_PreviousInput;

    /* Update for Memory: '<S13>/Memory1' incorporates:
     *  Memory: '<S13>/Memory2'
     */
    localDW->Memory1_PreviousInput_o = localDW->Memory2_PreviousInput_p;
  }

  /* End of Switch: '<S10>/Switch5' */

  /* Switch: '<S9>/Switch6' incorporates:
   *  Switch: '<S13>/Switch6'
   */
  if (*rtu_BEMS1000mPoint) {
    /* Update for Memory: '<S9>/Memory2' */
    localDW->Memory2_PreviousInput = *rtu_rSOC;

    /* Update for Memory: '<S13>/Memory2' */
    localDW->Memory2_PreviousInput_p = *rtu_rSOE;
  }

  /* End of Switch: '<S9>/Switch6' */
}

/* Model initialize function */
void EMS_initialize(const char_T **rt_errorStatus, RT_MODEL_EMS_T *const EMS_M)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(EMS_M, rt_errorStatus);

  /* user code (Initialize function Body) */
  LL_TIM_EnableCounter(TIM2);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
