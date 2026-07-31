/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: NBMSState.h
 *
 * Code generated for Simulink model 'NBMSState'.
 *
 * Model version                  : 13.2
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Fri Jul 31 17:29:35 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef NBMSState_h_
#define NBMSState_h_
#ifndef NBMSState_COMMON_INCLUDES_
#define NBMSState_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                                 /* NBMSState_COMMON_INCLUDES_ */

#include "NBMSState_types.h"

/* user code (top of header file) */
#include "stm32h7xx_ll_tim.h"

/* Block states (default storage) for model 'NBMSState' */
typedef struct {
  uint16_T temporalCounter_i1;         /* '<Root>/NBMSState System' */
  uint8_T is_active_c3_NBMSState;      /* '<Root>/NBMSState System' */
  uint8_T is_c3_NBMSState;             /* '<Root>/NBMSState System' */
} DW_NBMSState_f_T;

/* Real-time Model Data Structure */
struct tag_RTM_NBMSState_T {
  const char_T **errorStatus;
};

typedef struct {
  DW_NBMSState_f_T rtdw;
  RT_MODEL_NBMSState_T rtm;
} MdlrefDW_NBMSState_T;

/* Model reference registration function */
extern void NBMSState_initialize(const char_T **rt_errorStatus,
  RT_MODEL_NBMSState_T *const NBMSState_M);
extern void NBMSState(const boolean_T *rtu_BBMSP0A0C, const boolean_T
                      *rtu_BBMAP0A0E, const boolean_T *rtu_BBMSP0A10, const
                      boolean_T *rtu_BBMSP0A80, const boolean_T *rtu_BBMSP0AC0,
                      const boolean_T *rtu_BBMSP0AFA, const real_T
                      *rtu_RCellAverage, const boolean_T *rtu_BBalancingOn,
                      const real_T *rtu_VCellMin, real_T *rty_NBMSState,
                      DW_NBMSState_f_T *localDW);

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
 * '<Root>' : 'NBMSState'
 * '<S1>'   : 'NBMSState/NBMSState System'
 */
#endif                                 /* NBMSState_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
