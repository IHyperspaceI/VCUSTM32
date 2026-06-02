/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: rDischargeDerate.h
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

#ifndef rDischargeDerate_h_
#define rDischargeDerate_h_
#ifndef rDischargeDerate_COMMON_INCLUDES_
#define rDischargeDerate_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                                 /* rDischargeDerate_COMMON_INCLUDES_ */

#include "rDischargeDerate_types.h"

/* user code (top of header file) */
#include "stm32h7xx_ll_tim.h"

/* Real-time Model Data Structure */
struct tag_RTM_rDischargeDerate_T {
  const char_T **errorStatus;
};

typedef struct {
  RT_MODEL_rDischargeDerate_T rtm;
} MdlrefDW_rDischargeDerate_T;

/* Model reference registration function */
extern void rDischargeDerate_initialize(const char_T **rt_errorStatus,
  RT_MODEL_rDischargeDerate_T *const rDischargeDerate_M);
extern void rDischargeDerate(const boolean_T *rtu_BDischargeAllowed, const
  real_T *rtu_rInverterTemperatureDerate, const real_T
  *rtu_rMotorTemperatureDerate, const real_T *rtu_rLowCellVoltageDischargeDer,
  const real_T *rtu_rHighCellTemperatureDischar, const real_T
  *rtu_rSOCDischargeDerate, const boolean_T *rtu_BEMSActivated, real_T
  *rty_rDischargeDerate);

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'rDischargeDerate'
 */
#endif                                 /* rDischargeDerate_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
