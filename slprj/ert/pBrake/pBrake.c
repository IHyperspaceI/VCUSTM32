/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: pBrake.c
 *
 * Code generated for Simulink model 'pBrake'.
 *
 * Model version                  : 13.2
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Thu Jul 30 16:43:57 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "pBrake.h"
#include "rtwtypes.h"
#include "pBrake_private.h"

/* System initialize for referenced model: 'pBrake' */
void pBrake_Init(DW_pBrake_f_T *localDW)
{
  /* InitializeConditions for Memory: '<S1>/Memory' */
  localDW->Memory_PreviousInput = 500.0;

  /* InitializeConditions for Memory: '<S2>/Memory' */
  localDW->Memory_PreviousInput_f = 500.0;
}

/* Output and update for referenced model: 'pBrake' */
void pBrake(const real_T *rtu_VBrakeF, const boolean_T *rtu_BCalibrationOn,
            const real_T *rtu_VBrakeR, real_T *rty_pBrakeF, real_T *rty_pBrakeR,
            DW_pBrake_f_T *localDW)
{
  real_T u0;

  /* Gain: '<S1>/Gain' incorporates:
   *  Memory: '<S1>/Memory'
   *  Sum: '<S1>/Subtract'
   */
  u0 = (*rtu_VBrakeF - localDW->Memory_PreviousInput) * 0.04;

  /* Saturate: '<S1>/Saturation' */
  if (u0 > 240.0) {
    *rty_pBrakeF = 240.0;
  } else if (u0 < -80.0) {
    *rty_pBrakeF = -80.0;
  } else {
    *rty_pBrakeF = u0;
  }

  /* End of Saturate: '<S1>/Saturation' */

  /* Gain: '<S2>/Gain' incorporates:
   *  Memory: '<S2>/Memory'
   *  Sum: '<S2>/Subtract'
   */
  u0 = (*rtu_VBrakeR - localDW->Memory_PreviousInput_f) * 0.04;

  /* Saturate: '<S2>/Saturation' */
  if (u0 > 240.0) {
    *rty_pBrakeR = 240.0;
  } else if (u0 < -80.0) {
    *rty_pBrakeR = -80.0;
  } else {
    *rty_pBrakeR = u0;
  }

  /* End of Saturate: '<S2>/Saturation' */

  /* Switch: '<S1>/Switch' incorporates:
   *  Switch: '<S2>/Switch'
   */
  if (*rtu_BCalibrationOn) {
    /* Update for Memory: '<S1>/Memory' */
    localDW->Memory_PreviousInput = *rtu_VBrakeF;

    /* Update for Memory: '<S2>/Memory' */
    localDW->Memory_PreviousInput_f = *rtu_VBrakeR;
  }

  /* End of Switch: '<S1>/Switch' */
}

/* Model initialize function */
void pBrake_initialize(const char_T **rt_errorStatus, RT_MODEL_pBrake_T *const
  pBrake_M)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(pBrake_M, rt_errorStatus);

  /* user code (Initialize function Body) */
  LL_TIM_EnableCounter(TIM2);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
