/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: rRegenPaddle.c
 *
 * Code generated for Simulink model 'rRegenPaddle'.
 *
 * Model version                  : 13.3
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Tue Sep  8 11:41:45 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "rRegenPaddle.h"
#include "rtwtypes.h"
#include <math.h>
#include "rRegenPaddle_private.h"

/* System initialize for referenced model: 'rRegenPaddle' */
void rRegenPaddle_Init(DW_rRegenPaddle_f_T *localDW)
{
  /* InitializeConditions for Memory: '<S2>/Memory' */
  localDW->Memory_PreviousInput = 300.0;

  /* InitializeConditions for Memory: '<S3>/Memory' */
  localDW->Memory_PreviousInput_n = 300.0;
}

/* Output and update for referenced model: 'rRegenPaddle' */
void rRegenPaddle(const real_T *rtu_VRegenPaddle1, const real_T
                  *rtu_VRegenPaddle2, const boolean_T *rtu_BCalibrationOn,
                  real_T *rty_rRegenPaddle, boolean_T *rty_BRegenOn,
                  DW_rRegenPaddle_f_T *localDW)
{
  real_T rtb_Gain1;
  real_T rtb_Max;
  real_T rtb_Switch;

  /* Gain: '<S2>/Gain1' */
  rtb_Gain1 = 1000.0 * *rtu_VRegenPaddle1;

  /* Switch: '<S2>/Switch' incorporates:
   *  Memory: '<S2>/Memory'
   */
  if (*rtu_BCalibrationOn) {
    rtb_Switch = rtb_Gain1;
  } else {
    rtb_Switch = localDW->Memory_PreviousInput;
  }

  /* End of Switch: '<S2>/Switch' */

  /* Gain: '<S2>/Gain' incorporates:
   *  Bias: '<S2>/Bias'
   *  Memory: '<S2>/Memory'
   *  Sum: '<S2>/Subtract'
   */
  rtb_Max = (rtb_Gain1 - (localDW->Memory_PreviousInput + 50.0)) * 0.04;

  /* Gain: '<S3>/Gain1' */
  rtb_Gain1 = 1000.0 * *rtu_VRegenPaddle2;

  /* MinMax: '<Root>/Max' incorporates:
   *  Bias: '<S3>/Bias'
   *  Gain: '<S3>/Gain'
   *  Memory: '<S3>/Memory'
   *  Sum: '<S3>/Subtract'
   */
  rtb_Max = fmax(rtb_Max, (rtb_Gain1 - (localDW->Memory_PreviousInput_n + 50.0))
                 * 0.04);

  /* Saturate: '<Root>/Saturation' */
  if (rtb_Max > 100.0) {
    *rty_rRegenPaddle = 100.0;
  } else if (rtb_Max < 0.0) {
    *rty_rRegenPaddle = 0.0;
  } else {
    *rty_rRegenPaddle = rtb_Max;
  }

  /* End of Saturate: '<Root>/Saturation' */

  /* RelationalOperator: '<S1>/Compare' incorporates:
   *  Constant: '<S1>/Constant'
   */
  *rty_BRegenOn = (*rty_rRegenPaddle > 10.0);

  /* Update for Memory: '<S2>/Memory' */
  localDW->Memory_PreviousInput = rtb_Switch;

  /* Switch: '<S3>/Switch' */
  if (*rtu_BCalibrationOn) {
    /* Update for Memory: '<S3>/Memory' */
    localDW->Memory_PreviousInput_n = rtb_Gain1;
  }

  /* End of Switch: '<S3>/Switch' */
}

/* Model initialize function */
void rRegenPaddle_initialize(const char_T **rt_errorStatus,
  RT_MODEL_rRegenPaddle_T *const rRegenPaddle_M)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(rRegenPaddle_M, rt_errorStatus);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
