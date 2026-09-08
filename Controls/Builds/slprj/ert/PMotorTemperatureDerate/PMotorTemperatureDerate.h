/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: PMotorTemperatureDerate.h
 *
 * Code generated for Simulink model 'PMotorTemperatureDerate'.
 *
 * Model version                  : 13.3
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Tue Sep  8 11:38:28 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef PMotorTemperatureDerate_h_
#define PMotorTemperatureDerate_h_
#ifndef PMotorTemperatureDerate_COMMON_INCLUDES_
#define PMotorTemperatureDerate_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                            /* PMotorTemperatureDerate_COMMON_INCLUDES_ */

#include "PMotorTemperatureDerate_types.h"

/* Real-time Model Data Structure */
struct tag_RTM_PMotorTemperatureDera_T {
  const char_T **errorStatus;
};

typedef struct {
  RT_MODEL_PMotorTemperatureDer_T rtm;
} MdlrefDW_PMotorTemperatureDer_T;

/* Model reference registration function */
extern void PMotorTemperatureDer_initialize(const char_T **rt_errorStatus,
  RT_MODEL_PMotorTemperatureDer_T *const PMotorTemperatureDerate_M);
extern void PMotorTemperatureDerate(const real_T *rtu_TMotorMax, const real_T
  *rtu_TMotorFR, const real_T *rtu_TMotorFL, const real_T *rtu_TMotorRR, const
  real_T *rtu_TMotorRL, real_T *rty_PMotorTemperatureDerate, real_T
  *rty_PMotorTemperatureDerateFR, real_T *rty_PMotorTemperatureDerateFL, real_T *
  rty_PMotorTemperatureDerateRR, real_T *rty_PMotorTemperatureDerateRL);

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
 * '<Root>' : 'PMotorTemperatureDerate'
 */
#endif                                 /* PMotorTemperatureDerate_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
