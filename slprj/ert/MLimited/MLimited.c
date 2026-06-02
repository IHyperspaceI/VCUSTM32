/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: MLimited.c
 *
 * Code generated for Simulink model 'MLimited'.
 *
 * Model version                  : 13.5
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Tue Jun  2 18:47:57 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "MLimited.h"
#include "rtwtypes.h"
#include "MLimited_private.h"

/* Output and update for referenced model: 'MLimited' */
void MLimited(const real_T *rtu_MDriverDischargeRequested, const real_T
              *rtu_MDriverRegenRequested, const real_T *rtu_rDischargeDerate,
              const real_T *rtu_rRegenDerate, real_T *rty_MDischargeLimited,
              real_T *rty_MRegenLimited)
{
  /* Product: '<Root>/Multiply' */
  *rty_MDischargeLimited = *rtu_MDriverDischargeRequested *
    *rtu_rDischargeDerate;

  /* Product: '<Root>/Multiply1' */
  *rty_MRegenLimited = *rtu_MDriverRegenRequested * *rtu_rRegenDerate;
}

/* Model initialize function */
void MLimited_initialize(const char_T **rt_errorStatus, RT_MODEL_MLimited_T *
  const MLimited_M)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(MLimited_M, rt_errorStatus);

  /* user code (Initialize function Body) */
  LL_TIM_EnableCounter(TIM2);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
