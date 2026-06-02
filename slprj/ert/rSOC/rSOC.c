/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: rSOC.c
 *
 * Code generated for Simulink model 'rSOC'.
 *
 * Model version                  : 13.5
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Tue Jun  2 18:47:05 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "rSOC.h"
#include "rtwtypes.h"
#include "rSOC_private.h"

/* System initialize for referenced model: 'rSOC' */
void rSOC_Init(DW_rSOC_f_T *localDW)
{
  /* InitializeConditions for Memory: '<S1>/Memory' */
  localDW->Memory_PreviousInput = 100.0;

  /* InitializeConditions for Memory: '<S2>/Memory1' */
  localDW->Memory1_PreviousInput = 100.0;
}

/* Output and update for referenced model: 'rSOC' */
void rSOC(const real_T *rtu_IIVTS, const real_T *rtu_VDCAccumulator, real_T
          *rty_rSOC, real_T *rty_rSOE, DW_rSOC_f_T *localDW)
{
  /* Sum: '<S1>/Subtract' incorporates:
   *  Constant: '<S1>/ '
   *  Constant: '<S1>/Constant5'
   *  Gain: '<S1>/Gain'
   *  Memory: '<S1>/Memory'
   *  Product: '<S1>/Divide'
   *  Product: '<S1>/Multiply'
   */
  *rty_rSOC = localDW->Memory_PreviousInput - 0.001 * *rtu_IIVTS / 48960.0 *
    100.0;

  /* Sum: '<S2>/Subtract1' incorporates:
   *  Constant: '<S2>/Constant1'
   *  Constant: '<S2>/Constant5'
   *  Gain: '<S2>/Gain'
   *  Memory: '<S2>/Memory1'
   *  Product: '<S2>/Divide'
   *  Product: '<S2>/Divide2'
   *  Product: '<S2>/Multiply'
   */
  *rty_rSOE = localDW->Memory1_PreviousInput - 0.001 * *rtu_IIVTS *
    *rtu_VDCAccumulator / 2.3544E+7 * 100.0;

  /* Update for Memory: '<S1>/Memory' */
  localDW->Memory_PreviousInput = *rty_rSOC;

  /* Update for Memory: '<S2>/Memory1' */
  localDW->Memory1_PreviousInput = *rty_rSOE;
}

/* Model initialize function */
void rSOC_initialize(const char_T **rt_errorStatus, RT_MODEL_rSOC_T *const
                     rSOC_M)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(rSOC_M, rt_errorStatus);

  /* user code (Initialize function Body) */
  LL_TIM_EnableCounter(TIM2);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
