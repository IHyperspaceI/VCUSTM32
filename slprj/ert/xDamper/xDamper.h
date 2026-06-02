/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: xDamper.h
 *
 * Code generated for Simulink model 'xDamper'.
 *
 * Model version                  : 13.5
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Tue Jun  2 18:47:27 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef xDamper_h_
#define xDamper_h_
#ifndef xDamper_COMMON_INCLUDES_
#define xDamper_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                                 /* xDamper_COMMON_INCLUDES_ */

#include "xDamper_types.h"

/* user code (top of header file) */
#include "stm32h7xx_ll_tim.h"

/* Real-time Model Data Structure */
struct tag_RTM_xDamper_T {
  const char_T **errorStatus;
};

typedef struct {
  RT_MODEL_xDamper_T rtm;
} MdlrefDW_xDamper_T;

/* Model reference registration function */
extern void xDamper_initialize(const char_T **rt_errorStatus, RT_MODEL_xDamper_T
  *const xDamper_M);
extern void xDamper(const real_T *rtu_VDamperPotentiometerFL, const real_T
                    *rtu_VDamperPotentiometerFR, const real_T
                    *rtu_VDamperPotentiometerRL, const real_T
                    *rtu_VDamperPotentiometerRR, real_T *rty_xDamperFL, real_T
                    *rty_xDamperFR, real_T *rty_xDamperRL, real_T *rty_xDamperRR);

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
 * '<Root>' : 'xDamper'
 */
#endif                                 /* xDamper_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
