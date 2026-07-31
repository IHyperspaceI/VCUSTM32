/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: PInvTemperatureDerate.h
 *
 * Code generated for Simulink model 'PInvTemperatureDerate'.
 *
 * Model version                  : 13.2
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Fri Jul 31 17:28:38 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef PInvTemperatureDerate_h_
#define PInvTemperatureDerate_h_
#ifndef PInvTemperatureDerate_COMMON_INCLUDES_
#define PInvTemperatureDerate_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                              /* PInvTemperatureDerate_COMMON_INCLUDES_ */

#include "PInvTemperatureDerate_types.h"

/* user code (top of header file) */
#include "stm32h7xx_ll_tim.h"

/* Real-time Model Data Structure */
struct tag_RTM_PInvTemperatureDerate_T {
  const char_T **errorStatus;
};

typedef struct {
  RT_MODEL_PInvTemperatureDerat_T rtm;
} MdlrefDW_PInvTemperatureDerat_T;

/* Model reference registration function */
extern void PInvTemperatureDerat_initialize(const char_T **rt_errorStatus,
  RT_MODEL_PInvTemperatureDerat_T *const PInvTemperatureDerate_M);
extern void PInvTemperatureDerate(const real_T *rtu_TInvMax, const real_T
  *rtu_TInvFR, const real_T *rtu_TInvFL, const real_T *rtu_TInvRR, const real_T *
  rtu_TInvRL, real_T *rty_PInvTemperatureDerate, real_T
  *rty_PInvTemperatureDerateFR, real_T *rty_PInvTemperatureDerateFL, real_T
  *rty_PInvTemperatureDerateRR, real_T *rty_PInvTemperatureDerateRL);

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
 * '<Root>' : 'PInvTemperatureDerate'
 */
#endif                                 /* PInvTemperatureDerate_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
