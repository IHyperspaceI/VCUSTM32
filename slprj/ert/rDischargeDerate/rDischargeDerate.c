/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: rDischargeDerate.c
 *
 * Code generated for Simulink model 'rDischargeDerate'.
 *
 * Model version                  : 13.5
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Tue Jun  2 18:44:35 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "rDischargeDerate.h"
#include "rtwtypes.h"
#include <math.h>
#include "rDischargeDerate_private.h"

/* Output and update for referenced model: 'rDischargeDerate' */
void rDischargeDerate(const boolean_T *rtu_BDischargeAllowed, const real_T
                      *rtu_rInverterTemperatureDerate, const real_T
                      *rtu_rMotorTemperatureDerate, const real_T
                      *rtu_rLowCellVoltageDischargeDer, const real_T
                      *rtu_rHighCellTemperatureDischar, const real_T
                      *rtu_rSOCDischargeDerate, const boolean_T
                      *rtu_BEMSActivated, real_T *rty_rDischargeDerate)
{
  /* Switch: '<Root>/Switch' incorporates:
   *  Constant: '<Root>/Constant'
   *  MinMax: '<Root>/Min'
   */
  if (*rtu_BDischargeAllowed) {
    real_T rtb_Switch1_idx_0;
    real_T rtb_Switch1_idx_1;

    /* Switch: '<Root>/Switch1' incorporates:
     *  Constant: '<Root>/Constant1'
     *  Constant: '<Root>/Constant2'
     */
    if (*rtu_BEMSActivated) {
      rtb_Switch1_idx_0 = 1.0;
      rtb_Switch1_idx_1 = 1.0;
    } else {
      rtb_Switch1_idx_0 = *rtu_rInverterTemperatureDerate;
      rtb_Switch1_idx_1 = *rtu_rMotorTemperatureDerate;
    }

    /* End of Switch: '<Root>/Switch1' */
    *rty_rDischargeDerate = fmin(fmin(fmin(fmin(rtb_Switch1_idx_0,
      rtb_Switch1_idx_1), *rtu_rLowCellVoltageDischargeDer),
      *rtu_rHighCellTemperatureDischar), *rtu_rSOCDischargeDerate);
  } else {
    *rty_rDischargeDerate = 0.0;
  }

  /* End of Switch: '<Root>/Switch' */
}

/* Model initialize function */
void rDischargeDerate_initialize(const char_T **rt_errorStatus,
  RT_MODEL_rDischargeDerate_T *const rDischargeDerate_M)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(rDischargeDerate_M, rt_errorStatus);

  /* user code (Initialize function Body) */
  LL_TIM_EnableCounter(TIM2);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
