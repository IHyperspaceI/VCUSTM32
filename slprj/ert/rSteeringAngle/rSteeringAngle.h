/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: rSteeringAngle.h
 *
 * Code generated for Simulink model 'rSteeringAngle'.
 *
 * Model version                  : 13.2
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Thu Jul 30 16:44:21 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef rSteeringAngle_h_
#define rSteeringAngle_h_
#ifndef rSteeringAngle_COMMON_INCLUDES_
#define rSteeringAngle_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                                 /* rSteeringAngle_COMMON_INCLUDES_ */

#include "rSteeringAngle_types.h"

/* user code (top of header file) */
#include "stm32h7xx_ll_tim.h"

/* Block states (default storage) for model 'rSteeringAngle' */
typedef struct {
  real_T Memory2_PreviousInput;        /* '<Root>/Memory2' */
} DW_rSteeringAngle_f_T;

/* Real-time Model Data Structure */
struct tag_RTM_rSteeringAngle_T {
  const char_T **errorStatus;
};

typedef struct {
  DW_rSteeringAngle_f_T rtdw;
  RT_MODEL_rSteeringAngle_T rtm;
} MdlrefDW_rSteeringAngle_T;

/* Model reference registration function */
extern void rSteeringAngle_initialize(const char_T **rt_errorStatus,
  RT_MODEL_rSteeringAngle_T *const rSteeringAngle_M);
extern void rSteeringAngle_Init(DW_rSteeringAngle_f_T *localDW);
extern void rSteeringAngle(const real_T *rtu_VSteeringAngle, const boolean_T
  *rtu_BCalibrationOn, real_T *rty_rSteeringAngle, real_T *rty_aSteeringAngle,
  DW_rSteeringAngle_f_T *localDW);

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Abs' : Unused code path elimination
 * Block '<Root>/Abs1' : Unused code path elimination
 * Block '<Root>/Abs2' : Unused code path elimination
 * Block '<Root>/Add' : Unused code path elimination
 * Block '<Root>/Add1' : Unused code path elimination
 * Block '<Root>/Add2' : Unused code path elimination
 * Block '<Root>/Add3' : Unused code path elimination
 * Block '<Root>/Add4' : Unused code path elimination
 * Block '<Root>/Add5' : Unused code path elimination
 * Block '<Root>/Add6' : Unused code path elimination
 * Block '<Root>/Add7' : Unused code path elimination
 * Block '<Root>/Constant' : Unused code path elimination
 * Block '<Root>/Constant1' : Unused code path elimination
 * Block '<Root>/Constant2' : Unused code path elimination
 * Block '<Root>/Gain' : Unused code path elimination
 * Block '<Root>/Gain1' : Unused code path elimination
 * Block '<Root>/Gain2' : Unused code path elimination
 * Block '<Root>/Gain3' : Unused code path elimination
 * Block '<Root>/Gain4' : Unused code path elimination
 * Block '<Root>/Gain5' : Unused code path elimination
 * Block '<Root>/Gain6' : Unused code path elimination
 * Block '<Root>/GreaterThan' : Unused code path elimination
 * Block '<Root>/GreaterThan1' : Unused code path elimination
 * Block '<Root>/Memory' : Unused code path elimination
 * Block '<Root>/Memory1' : Unused code path elimination
 * Block '<Root>/Saturation' : Unused code path elimination
 * Block '<Root>/Saturation1' : Unused code path elimination
 * Block '<Root>/Subtract' : Unused code path elimination
 * Block '<Root>/Switch' : Unused code path elimination
 * Block '<Root>/Switch1' : Unused code path elimination
 * Block '<Root>/Switch2' : Unused code path elimination
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
 * '<Root>' : 'rSteeringAngle'
 */
#endif                                 /* rSteeringAngle_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
