/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: PTSTemperatureDerate.h
 *
 * Code generated for Simulink model 'PTSTemperatureDerate'.
 *
 * Model version                  : 13.3
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Tue Sep  8 11:38:45 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef PTSTemperatureDerate_h_
#define PTSTemperatureDerate_h_
#ifndef PTSTemperatureDerate_COMMON_INCLUDES_
#define PTSTemperatureDerate_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                               /* PTSTemperatureDerate_COMMON_INCLUDES_ */

#include "PTSTemperatureDerate_types.h"

/* Real-time Model Data Structure */
struct tag_RTM_PTSTemperatureDerate_T {
  const char_T **errorStatus;
};

typedef struct {
  RT_MODEL_PTSTemperatureDerate_T rtm;
} MdlrefDW_PTSTemperatureDerate_T;

/* Model reference registration function */
extern void PTSTemperatureDerate_initialize(const char_T **rt_errorStatus,
  RT_MODEL_PTSTemperatureDerate_T *const PTSTemperatureDerate_M);
extern void PTSTemperatureDerate(const real_T *rtu_PInvTemperatureDerateFR,
  const real_T *rtu_PMotorTemperatureDerateFR, const real_T
  *rtu_PInvTemperatureDerateFL, const real_T *rtu_PMotorTemperatureDerateFL,
  const real_T *rtu_PInvTemperatureDerateRR, const real_T
  *rtu_PMotorTemperatureDerateRR, const real_T *rtu_PInvTemperatureDerateRL,
  const real_T *rtu_PMotorTemperatureDerateRL, real_T
  *rty_PTSTemperatureDerateFR, real_T *rty_PTSTemperatureDerateFL, real_T
  *rty_PTSTemperatureDerateRR, real_T *rty_PTSTemperatureDerateRL);

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
 * '<Root>' : 'PTSTemperatureDerate'
 */
#endif                                 /* PTSTemperatureDerate_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
