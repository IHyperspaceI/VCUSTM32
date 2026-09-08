/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: pBrake.h
 *
 * Code generated for Simulink model 'pBrake'.
 *
 * Model version                  : 13.3
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Tue Sep  8 11:41:40 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef pBrake_h_
#define pBrake_h_
#ifndef pBrake_COMMON_INCLUDES_
#define pBrake_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                                 /* pBrake_COMMON_INCLUDES_ */

#include "pBrake_types.h"

/* Block states (default storage) for model 'pBrake' */
typedef struct {
  real_T Memory_PreviousInput;         /* '<S1>/Memory' */
  real_T Memory_PreviousInput_f;       /* '<S2>/Memory' */
} DW_pBrake_f_T;

/* Real-time Model Data Structure */
struct tag_RTM_pBrake_T {
  const char_T **errorStatus;
};

typedef struct {
  DW_pBrake_f_T rtdw;
  RT_MODEL_pBrake_T rtm;
} MdlrefDW_pBrake_T;

/* Model reference registration function */
extern void pBrake_initialize(const char_T **rt_errorStatus, RT_MODEL_pBrake_T *
  const pBrake_M);
extern void pBrake_Init(DW_pBrake_f_T *localDW);
extern void pBrake(const real_T *rtu_VBrakeF, const boolean_T
                   *rtu_BCalibrationOn, const real_T *rtu_VBrakeR, real_T
                   *rty_pBrakeF, real_T *rty_pBrakeR, DW_pBrake_f_T *localDW);

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
 * '<Root>' : 'pBrake'
 * '<S1>'   : 'pBrake/pBrakeF System'
 * '<S2>'   : 'pBrake/pBrakeR System'
 */
#endif                                 /* pBrake_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
