/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: rSOC.h
 *
 * Code generated for Simulink model 'rSOC'.
 *
 * Model version                  : 13.3
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Tue Sep  8 11:41:51 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef rSOC_h_
#define rSOC_h_
#ifndef rSOC_COMMON_INCLUDES_
#define rSOC_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                                 /* rSOC_COMMON_INCLUDES_ */

#include "rSOC_types.h"

/* Block states (default storage) for model 'rSOC' */
typedef struct {
  real_T Memory_PreviousInput;         /* '<S1>/Memory' */
  real_T Memory1_PreviousInput;        /* '<S1>/Memory1' */
  real_T Memory2_PreviousInput;        /* '<S2>/Memory2' */
  real_T Memory1_PreviousInput_b;      /* '<S2>/Memory1' */
} DW_rSOC_f_T;

/* Real-time Model Data Structure */
struct tag_RTM_rSOC_T {
  const char_T **errorStatus;
};

typedef struct {
  DW_rSOC_f_T rtdw;
  RT_MODEL_rSOC_T rtm;
} MdlrefDW_rSOC_T;

/* Model reference registration function */
extern void rSOC_initialize(const char_T **rt_errorStatus, RT_MODEL_rSOC_T *
  const rSOC_M);
extern void rSOC_Init(DW_rSOC_f_T *localDW);
extern void rSOC(const real_T *rtu_IIVTS, const real_T *rtu_VDCAccumulator,
                 const real_T *rtu_VCellMin, real_T *rty_rSOC, real_T *rty_rSOE,
                 DW_rSOC_f_T *localDW);

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
 * '<Root>' : 'rSOC'
 * '<S1>'   : 'rSOC/rSOC System'
 * '<S2>'   : 'rSOC/rSOE System'
 */
#endif                                 /* rSOC_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
