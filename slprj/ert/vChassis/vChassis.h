/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: vChassis.h
 *
 * Code generated for Simulink model 'vChassis'.
 *
 * Model version                  : 13.2
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Thu Jul 30 16:44:44 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef vChassis_h_
#define vChassis_h_
#ifndef vChassis_COMMON_INCLUDES_
#define vChassis_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rt_nonfinite.h"
#include "math.h"
#endif                                 /* vChassis_COMMON_INCLUDES_ */

#include "vChassis_types.h"

/* user code (top of header file) */
#include "stm32h7xx_ll_tim.h"

/* Block states (default storage) for model 'vChassis' */
typedef struct {
  real_T PrevY;                        /* '<Root>/Rate Limiter' */
  real_T Memory_PreviousInput;         /* '<S2>/Memory' */
} DW_vChassis_f_T;

/* Real-time Model Data Structure */
struct tag_RTM_vChassis_T {
  const char_T **errorStatus;
};

typedef struct {
  DW_vChassis_f_T rtdw;
  RT_MODEL_vChassis_T rtm;
} MdlrefDW_vChassis_T;

/* Model reference registration function */
extern void vChassis_initialize(const char_T **rt_errorStatus,
  RT_MODEL_vChassis_T *const vChassis_M);
extern void vChassis(const real_T *rtu_vWheelFL, const real_T *rtu_vWheelFR,
                     const real_T *rtu_vWheelRL, const real_T *rtu_vWheelRR,
                     const real_T *rtu_gLateralIMU, const real_T
                     *rtu_gLongitudinalIMU, const real_T *rtu_aSteeringAngle,
                     real_T *rty_vChassis, real_T *rty_sChassis, DW_vChassis_f_T
                     *localDW);

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
 * '<Root>' : 'vChassis'
 * '<S1>'   : 'vChassis/MATLAB Function'
 * '<S2>'   : 'vChassis/sChassis System'
 */
#endif                                 /* vChassis_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
