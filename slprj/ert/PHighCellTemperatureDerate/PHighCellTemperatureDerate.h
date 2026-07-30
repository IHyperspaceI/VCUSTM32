/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: PHighCellTemperatureDerate.h
 *
 * Code generated for Simulink model 'PHighCellTemperatureDerate'.
 *
 * Model version                  : 13.2
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Thu Jul 30 16:40:00 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef PHighCellTemperatureDerate_h_
#define PHighCellTemperatureDerate_h_
#ifndef PHighCellTemperatureDerate_COMMON_INCLUDES_
#define PHighCellTemperatureDerate_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                         /* PHighCellTemperatureDerate_COMMON_INCLUDES_ */

#include "PHighCellTemperatureDerate_types.h"

/* user code (top of header file) */
#include "stm32h7xx_ll_tim.h"

/* Real-time Model Data Structure */
struct tag_RTM_PHighCellTemperatureD_T {
  const char_T **errorStatus;
};

typedef struct {
  RT_MODEL_PHighCellTemperature_T rtm;
} MdlrefDW_PHighCellTemperature_T;

/* Model reference registration function */
extern void PHighCellTemperature_initialize(const char_T **rt_errorStatus,
  RT_MODEL_PHighCellTemperature_T *const PHighCellTemperatureDerate_M);
extern void PHighCellTemperatureDerate(const real_T *rtu_TCellMax, real_T
  *rty_PHighCellTemperatureDerate);

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
 * '<Root>' : 'PHighCellTemperatureDerate'
 */
#endif                                 /* PHighCellTemperatureDerate_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
