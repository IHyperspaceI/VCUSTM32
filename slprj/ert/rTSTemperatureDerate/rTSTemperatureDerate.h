/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: rTSTemperatureDerate.h
 *
 * Code generated for Simulink model 'rTSTemperatureDerate'.
 *
 * Model version                  : 13.5
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Tue Jun  2 18:45:19 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef rTSTemperatureDerate_h_
#define rTSTemperatureDerate_h_
#ifndef rTSTemperatureDerate_COMMON_INCLUDES_
#define rTSTemperatureDerate_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                               /* rTSTemperatureDerate_COMMON_INCLUDES_ */

#include "rTSTemperatureDerate_types.h"

/* user code (top of header file) */
#include "stm32h7xx_ll_tim.h"

/* Real-time Model Data Structure */
struct tag_RTM_rTSTemperatureDerate_T {
  const char_T **errorStatus;
};

typedef struct {
  RT_MODEL_rTSTemperatureDerate_T rtm;
} MdlrefDW_rTSTemperatureDerate_T;

/* Model reference registration function */
extern void rTSTemperatureDerate_initialize(const char_T **rt_errorStatus,
  RT_MODEL_rTSTemperatureDerate_T *const rTSTemperatureDerate_M);
extern void rTSTemperatureDerate(const real_T *rtu_rInvTemperatureDerateFR,
  const real_T *rtu_rInvTemperatureDerateFL, const real_T
  *rtu_rInvTemperatureDerateRR, const real_T *rtu_rInvTemperatureDerateRL, const
  real_T *rtu_rMotorTemperatureDerateFR, const real_T
  *rtu_rMotorTemperatureDerateFL, const real_T *rtu_rMotorTemperatureDerateRR,
  const real_T *rtu_rMotorTemperatureDerateRL, real_T
  *rty_rTSTemperatureDerateFR, real_T *rty_rTSTemperatureDerateFL, real_T
  *rty_rTSTemperatureDerateRR, real_T *rty_rTSTemperatureDerateRL);

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
 * '<Root>' : 'rTSTemperatureDerate'
 */
#endif                                 /* rTSTemperatureDerate_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
