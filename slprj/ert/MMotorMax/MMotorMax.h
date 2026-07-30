/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: MMotorMax.h
 *
 * Code generated for Simulink model 'MMotorMax'.
 *
 * Model version                  : 13.2
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Thu Jul 30 16:42:56 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef MMotorMax_h_
#define MMotorMax_h_
#ifndef MMotorMax_COMMON_INCLUDES_
#define MMotorMax_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                                 /* MMotorMax_COMMON_INCLUDES_ */

#include "MMotorMax_types.h"

/* user code (top of header file) */
#include "stm32h7xx_ll_tim.h"

/* Real-time Model Data Structure */
struct tag_RTM_MMotorMax_T {
  const char_T **errorStatus;
};

typedef struct {
  RT_MODEL_MMotorMax_T rtm;
} MdlrefDW_MMotorMax_T;

/* Model reference registration function */
extern void MMotorMax_initialize(const char_T **rt_errorStatus,
  RT_MODEL_MMotorMax_T *const MMotorMax_M);
extern void MMotorMax(const real_T *rtu_nMotorFL, const real_T *rtu_nMotorFR,
                      const real_T *rtu_nMotorRL, const real_T *rtu_nMotorRR,
                      real_T *rty_MMotorMaxFL, real_T *rty_MMotorMaxFR, real_T
                      *rty_MMotorMaxRL, real_T *rty_MMotorMaxRR);

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
 * '<Root>' : 'MMotorMax'
 */
#endif                                 /* MMotorMax_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
