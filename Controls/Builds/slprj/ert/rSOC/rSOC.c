/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: rSOC.c
 *
 * Code generated for Simulink model 'rSOC'.
 *
 * Model version                  : 13.3
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Tue Sep  8 11:41:51 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "rSOC.h"
#include "rtwtypes.h"
#include "look1_binlxpw.h"
#include "rSOC_private.h"

/* System initialize for referenced model: 'rSOC' */
void rSOC_Init(DW_rSOC_f_T *localDW)
{
  /* InitializeConditions for Memory: '<S1>/Memory' */
  localDW->Memory_PreviousInput = 100.0;

  /* InitializeConditions for Memory: '<S2>/Memory1' */
  localDW->Memory1_PreviousInput_b = 100.0;
}

/* Output and update for referenced model: 'rSOC' */
void rSOC(const real_T *rtu_IIVTS, const real_T *rtu_VDCAccumulator, const
          real_T *rtu_VCellMin, real_T *rty_rSOC, real_T *rty_rSOE, DW_rSOC_f_T *
          localDW)
{
  real_T u0;

  /* Saturate: '<S1>/Saturation1' incorporates:
   *  Constant: '<S1>/Constant2'
   *  Memory: '<S1>/Memory1'
   *  Sum: '<S1>/Plus'
   */
  if (localDW->Memory1_PreviousInput + 0.001 > 25.0) {
    /* Saturate: '<S1>/Saturation1' */
    localDW->Memory1_PreviousInput = 25.0;
  } else if (localDW->Memory1_PreviousInput + 0.001 < 0.0) {
    /* Saturate: '<S1>/Saturation1' */
    localDW->Memory1_PreviousInput = 0.0;
  } else {
    /* Saturate: '<S1>/Saturation1' */
    localDW->Memory1_PreviousInput += 0.001;
  }

  /* End of Saturate: '<S1>/Saturation1' */

  /* Switch: '<S1>/Switch' incorporates:
   *  Constant: '<S1>/Constant1'
   *  RelationalOperator: '<S1>/GreaterThan'
   */
  if (localDW->Memory1_PreviousInput > 20.0) {
    /* Sum: '<S1>/Subtract' incorporates:
     *  Constant: '<S1>/ '
     *  Constant: '<S1>/Constant5'
     *  Gain: '<S1>/Gain'
     *  Memory: '<S1>/Memory'
     *  Product: '<S1>/Divide'
     *  Product: '<S1>/Multiply'
     */
    u0 = localDW->Memory_PreviousInput - 0.001 * *rtu_IIVTS / 43200.0 * 100.0;

    /* Saturate: '<S1>/Saturation2' */
    if (u0 > 100.0) {
      *rty_rSOC = 100.0;
    } else if (u0 < 0.0) {
      *rty_rSOC = 0.0;
    } else {
      *rty_rSOC = u0;
    }

    /* End of Saturate: '<S1>/Saturation2' */
  } else {
    /* Lookup_n-D: '<S1>/1-D Lookup Table' */
    u0 = look1_binlxpw(*rtu_VCellMin, rtCP_uDLookupTable_bp01Data,
                       rtCP_uDLookupTable_tableData, 933U);

    /* Saturate: '<S1>/Saturation' */
    if (u0 > 100.0) {
      *rty_rSOC = 100.0;
    } else if (u0 < 0.0) {
      *rty_rSOC = 0.0;
    } else {
      *rty_rSOC = u0;
    }

    /* End of Saturate: '<S1>/Saturation' */
  }

  /* End of Switch: '<S1>/Switch' */

  /* Saturate: '<S2>/Saturation1' incorporates:
   *  Constant: '<S2>/Constant3'
   *  Memory: '<S2>/Memory2'
   *  Sum: '<S2>/Plus'
   */
  if (localDW->Memory2_PreviousInput + 0.001 > 25.0) {
    /* Saturate: '<S2>/Saturation1' */
    localDW->Memory2_PreviousInput = 25.0;
  } else if (localDW->Memory2_PreviousInput + 0.001 < 0.0) {
    /* Saturate: '<S2>/Saturation1' */
    localDW->Memory2_PreviousInput = 0.0;
  } else {
    /* Saturate: '<S2>/Saturation1' */
    localDW->Memory2_PreviousInput += 0.001;
  }

  /* End of Saturate: '<S2>/Saturation1' */

  /* Switch: '<S2>/Switch' incorporates:
   *  Constant: '<S2>/Constant2'
   *  RelationalOperator: '<S2>/GreaterThan'
   */
  if (localDW->Memory2_PreviousInput > 20.0) {
    /* Sum: '<S2>/Subtract1' incorporates:
     *  Constant: '<S2>/Constant1'
     *  Constant: '<S2>/Constant5'
     *  Gain: '<S2>/Gain'
     *  Memory: '<S2>/Memory1'
     *  Product: '<S2>/Divide'
     *  Product: '<S2>/Divide2'
     *  Product: '<S2>/Multiply'
     */
    u0 = localDW->Memory1_PreviousInput_b - 0.001 * *rtu_IIVTS *
      *rtu_VDCAccumulator / 2.19024E+7 * 100.0;

    /* Saturate: '<S2>/Saturation2' */
    if (u0 > 100.0) {
      *rty_rSOE = 100.0;
    } else if (u0 < 0.0) {
      *rty_rSOE = 0.0;
    } else {
      *rty_rSOE = u0;
    }

    /* End of Saturate: '<S2>/Saturation2' */
  } else {
    /* Lookup_n-D: '<S2>/1-D Lookup Table' */
    u0 = look1_binlxpw(*rtu_VCellMin, rtCP_uDLookupTable_bp01Data_c,
                       rtCP_uDLookupTable_tableData_f, 933U);

    /* Saturate: '<S2>/Saturation3' */
    if (u0 > 100.0) {
      *rty_rSOE = 100.0;
    } else if (u0 < 0.0) {
      *rty_rSOE = 0.0;
    } else {
      *rty_rSOE = u0;
    }

    /* End of Saturate: '<S2>/Saturation3' */
  }

  /* End of Switch: '<S2>/Switch' */

  /* Update for Memory: '<S1>/Memory' */
  localDW->Memory_PreviousInput = *rty_rSOC;

  /* Update for Memory: '<S2>/Memory1' */
  localDW->Memory1_PreviousInput_b = *rty_rSOE;
}

/* Model initialize function */
void rSOC_initialize(const char_T **rt_errorStatus, RT_MODEL_rSOC_T *const
                     rSOC_M)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(rSOC_M, rt_errorStatus);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
