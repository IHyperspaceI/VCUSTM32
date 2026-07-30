/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: xDamper.c
 *
 * Code generated for Simulink model 'xDamper'.
 *
 * Model version                  : 13.2
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Thu Jul 30 16:44:55 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "xDamper.h"
#include "rtwtypes.h"
#include "xDamper_private.h"

/* System initialize for referenced model: 'xDamper' */
void xDamper_Init(DW_xDamper_f_T *localDW)
{
  /* InitializeConditions for Memory: '<S1>/Memory' */
  localDW->Memory_PreviousInput = 500.0;

  /* InitializeConditions for Memory: '<S2>/Memory' */
  localDW->Memory_PreviousInput_j = 500.0;

  /* InitializeConditions for Memory: '<S3>/Memory' */
  localDW->Memory_PreviousInput_h = 500.0;

  /* InitializeConditions for Memory: '<S4>/Memory' */
  localDW->Memory_PreviousInput_h5 = 500.0;
}

/* Output and update for referenced model: 'xDamper' */
void xDamper(const real_T *rtu_VDamperPotentiometerFL, const real_T
             *rtu_VDamperPotentiometerFR, const real_T
             *rtu_VDamperPotentiometerRL, const real_T
             *rtu_VDamperPotentiometerRR, const boolean_T *rtu_BCalibrationOn,
             real_T *rty_xDamperFL, real_T *rty_xDamperFR, real_T *rty_xDamperRL,
             real_T *rty_xDamperRR, DW_xDamper_f_T *localDW)
{
  real_T u0;

  /* Gain: '<S1>/Gain' incorporates:
   *  Memory: '<S1>/Memory'
   *  Sum: '<S1>/Subtract'
   */
  u0 = (*rtu_VDamperPotentiometerFL - localDW->Memory_PreviousInput) * 0.025;

  /* Saturate: '<S1>/Saturation' */
  if (u0 > 150.0) {
    *rty_xDamperFL = 150.0;
  } else if (u0 < -50.0) {
    *rty_xDamperFL = -50.0;
  } else {
    *rty_xDamperFL = u0;
  }

  /* End of Saturate: '<S1>/Saturation' */

  /* Gain: '<S2>/Gain' incorporates:
   *  Memory: '<S2>/Memory'
   *  Sum: '<S2>/Subtract'
   */
  u0 = (*rtu_VDamperPotentiometerFR - localDW->Memory_PreviousInput_j) * 0.025;

  /* Saturate: '<S2>/Saturation' */
  if (u0 > 150.0) {
    *rty_xDamperFR = 150.0;
  } else if (u0 < -50.0) {
    *rty_xDamperFR = -50.0;
  } else {
    *rty_xDamperFR = u0;
  }

  /* End of Saturate: '<S2>/Saturation' */

  /* Gain: '<S3>/Gain' incorporates:
   *  Memory: '<S3>/Memory'
   *  Sum: '<S3>/Subtract'
   */
  u0 = (*rtu_VDamperPotentiometerRL - localDW->Memory_PreviousInput_h) * 0.025;

  /* Saturate: '<S3>/Saturation' */
  if (u0 > 150.0) {
    *rty_xDamperRL = 150.0;
  } else if (u0 < -50.0) {
    *rty_xDamperRL = -50.0;
  } else {
    *rty_xDamperRL = u0;
  }

  /* End of Saturate: '<S3>/Saturation' */

  /* Gain: '<S4>/Gain' incorporates:
   *  Memory: '<S4>/Memory'
   *  Sum: '<S4>/Subtract'
   */
  u0 = (*rtu_VDamperPotentiometerRR - localDW->Memory_PreviousInput_h5) * 0.025;

  /* Saturate: '<S4>/Saturation' */
  if (u0 > 150.0) {
    *rty_xDamperRR = 150.0;
  } else if (u0 < -50.0) {
    *rty_xDamperRR = -50.0;
  } else {
    *rty_xDamperRR = u0;
  }

  /* End of Saturate: '<S4>/Saturation' */

  /* Switch: '<S1>/Switch' incorporates:
   *  Switch: '<S2>/Switch'
   *  Switch: '<S3>/Switch'
   *  Switch: '<S4>/Switch'
   */
  if (*rtu_BCalibrationOn) {
    /* Update for Memory: '<S1>/Memory' */
    localDW->Memory_PreviousInput = *rtu_VDamperPotentiometerFL;

    /* Update for Memory: '<S2>/Memory' */
    localDW->Memory_PreviousInput_j = *rtu_VDamperPotentiometerFR;

    /* Update for Memory: '<S3>/Memory' */
    localDW->Memory_PreviousInput_h = *rtu_VDamperPotentiometerRL;

    /* Update for Memory: '<S4>/Memory' */
    localDW->Memory_PreviousInput_h5 = *rtu_VDamperPotentiometerRR;
  }

  /* End of Switch: '<S1>/Switch' */
}

/* Model initialize function */
void xDamper_initialize(const char_T **rt_errorStatus, RT_MODEL_xDamper_T *const
  xDamper_M)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(xDamper_M, rt_errorStatus);

  /* user code (Initialize function Body) */
  LL_TIM_EnableCounter(TIM2);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
