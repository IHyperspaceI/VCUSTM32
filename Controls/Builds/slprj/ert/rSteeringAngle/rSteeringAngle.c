/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: rSteeringAngle.c
 *
 * Code generated for Simulink model 'rSteeringAngle'.
 *
 * Model version                  : 13.3
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Tue Sep  8 11:41:57 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "rSteeringAngle.h"
#include "rtwtypes.h"
#include "rSteeringAngle_private.h"

/* System initialize for referenced model: 'rSteeringAngle' */
void rSteeringAngle_Init(DW_rSteeringAngle_f_T *localDW)
{
  /* InitializeConditions for Memory: '<Root>/Memory2' */
  localDW->Memory2_PreviousInput = 2866.0;
}

/* Output and update for referenced model: 'rSteeringAngle' */
void rSteeringAngle(const real_T *rtu_VSteeringAngle, const boolean_T
                    *rtu_BCalibrationOn, real_T *rty_rSteeringAngle, real_T
                    *rty_aSteeringAngle, DW_rSteeringAngle_f_T *localDW)
{
  real_T rtb_Saturation2;
  real_T u0;

  /* Gain: '<Root>/Gain7' incorporates:
   *  Memory: '<Root>/Memory2'
   *  Sum: '<Root>/Subtract1'
   */
  rtb_Saturation2 = (*rtu_VSteeringAngle - localDW->Memory2_PreviousInput) *
    0.06353349282;

  /* Gain: '<Root>/Gain9' */
  u0 = 0.26557 * rtb_Saturation2;

  /* Saturate: '<Root>/Saturation3' */
  if (u0 > 35.0) {
    /* Gain: '<Root>/Gain10' */
    *rty_aSteeringAngle = -35.0;
  } else if (u0 < -35.0) {
    /* Gain: '<Root>/Gain10' */
    *rty_aSteeringAngle = 35.0;
  } else {
    /* Gain: '<Root>/Gain10' */
    *rty_aSteeringAngle = -u0;
  }

  /* End of Saturate: '<Root>/Saturation3' */

  /* Saturate: '<Root>/Saturation2' */
  if (rtb_Saturation2 > 100.0) {
    /* Gain: '<Root>/Gain8' */
    *rty_rSteeringAngle = -100.0;
  } else if (rtb_Saturation2 < -100.0) {
    /* Gain: '<Root>/Gain8' */
    *rty_rSteeringAngle = 100.0;
  } else {
    /* Gain: '<Root>/Gain8' */
    *rty_rSteeringAngle = -rtb_Saturation2;
  }

  /* End of Saturate: '<Root>/Saturation2' */

  /* Switch: '<Root>/Switch3' */
  if (*rtu_BCalibrationOn) {
    /* Update for Memory: '<Root>/Memory2' */
    localDW->Memory2_PreviousInput = *rtu_VSteeringAngle;
  }

  /* End of Switch: '<Root>/Switch3' */
}

/* Model initialize function */
void rSteeringAngle_initialize(const char_T **rt_errorStatus,
  RT_MODEL_rSteeringAngle_T *const rSteeringAngle_M)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(rSteeringAngle_M, rt_errorStatus);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
