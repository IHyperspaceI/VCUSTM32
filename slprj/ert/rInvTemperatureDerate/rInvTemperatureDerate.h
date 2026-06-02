/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: rInvTemperatureDerate.h
 *
 * Code generated for Simulink model 'rInvTemperatureDerate'.
 *
 * Model version                  : 13.6
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Tue Jun  2 18:44:47 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef rInvTemperatureDerate_h_
#define rInvTemperatureDerate_h_
#ifndef rInvTemperatureDerate_COMMON_INCLUDES_
#define rInvTemperatureDerate_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                              /* rInvTemperatureDerate_COMMON_INCLUDES_ */

#include "rInvTemperatureDerate_types.h"

/* user code (top of header file) */
#include "stm32h7xx_ll_tim.h"

/* Real-time Model Data Structure */
struct tag_RTM_rInvTemperatureDerate_T {
  const char_T **errorStatus;
};

typedef struct {
  RT_MODEL_rInvTemperatureDerat_T rtm;
} MdlrefDW_rInvTemperatureDerat_T;

/* Model reference registration function */
extern void rInvTemperatureDerat_initialize(const char_T **rt_errorStatus,
  RT_MODEL_rInvTemperatureDerat_T *const rInvTemperatureDerate_M);
extern void rInvTemperatureDerate(const real_T *rtu_TInvMax, const real_T
  *rtu_TInvFR, const real_T *rtu_TInvFL, const real_T *rtu_TInvRR, const real_T *
  rtu_TInvRL, real_T *rty_rInvTemperatureDerate, real_T
  *rty_rInvTemperatureDerateFR, real_T *rty_rInvTemperatureDerateFL, real_T
  *rty_rInvTemperatureDerateRR, real_T *rty_rInvTemperatureDerateRL);

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/PTInvDischargeDerate Map' : Unused code path elimination
 */

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
 * '<Root>' : 'rInvTemperatureDerate'
 */
#endif                                 /* rInvTemperatureDerate_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
