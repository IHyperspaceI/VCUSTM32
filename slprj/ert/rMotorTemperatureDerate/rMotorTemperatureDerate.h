/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: rMotorTemperatureDerate.h
 *
 * Code generated for Simulink model 'rMotorTemperatureDerate'.
 *
 * Model version                  : 13.6
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Wed Jun  3 14:53:21 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef rMotorTemperatureDerate_h_
#define rMotorTemperatureDerate_h_
#ifndef rMotorTemperatureDerate_COMMON_INCLUDES_
#define rMotorTemperatureDerate_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                            /* rMotorTemperatureDerate_COMMON_INCLUDES_ */

#include "rMotorTemperatureDerate_types.h"

/* user code (top of header file) */
#include "stm32h7xx_ll_tim.h"

/* Real-time Model Data Structure */
struct tag_RTM_rMotorTemperatureDera_T {
  const char_T **errorStatus;
};

typedef struct {
  RT_MODEL_rMotorTemperatureDer_T rtm;
} MdlrefDW_rMotorTemperatureDer_T;

/* Model reference registration function */
extern void rMotorTemperatureDer_initialize(const char_T **rt_errorStatus,
  RT_MODEL_rMotorTemperatureDer_T *const rMotorTemperatureDerate_M);
extern void rMotorTemperatureDerate(const real_T *rtu_TMotorMax, const real_T
  *rtu_TMotorFR, const real_T *rtu_TMotorFL, const real_T *rtu_TMotorRR, const
  real_T *rtu_TMotorRL, real_T *rty_rMotorTemperatureDerate, real_T
  *rty_rMotorTemperatureDerateFR, real_T *rty_rMotorTemperatureDerateFL, real_T *
  rty_rMotorTemperatureDerateRR, real_T *rty_rMotorTemperatureDerateRL);

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
 * '<Root>' : 'rMotorTemperatureDerate'
 */
#endif                                 /* rMotorTemperatureDerate_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
