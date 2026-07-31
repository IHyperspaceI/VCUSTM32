/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: NCarState.h
 *
 * Code generated for Simulink model 'NCarState'.
 *
 * Model version                  : 13.2
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Fri Jul 31 17:29:48 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef NCarState_h_
#define NCarState_h_
#ifndef NCarState_COMMON_INCLUDES_
#define NCarState_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                                 /* NCarState_COMMON_INCLUDES_ */

#include "NCarState_types.h"

/* user code (top of header file) */
#include "stm32h7xx_ll_tim.h"

/* Block signals for model 'NCarState' */
typedef struct {
  real_T BReadyToDriveBuzzer;          /* '<Root>/NCarState System' */
  real_T BReadyToDrive;                /* '<Root>/NCarState System' */
} B_NCarState_c_T;

/* Block states (default storage) for model 'NCarState' */
typedef struct {
  uint16_T temporalCounter_i1;         /* '<Root>/NCarState System' */
  uint8_T is_active_c1_NCarState;      /* '<Root>/NCarState System' */
  uint8_T is_c1_NCarState;             /* '<Root>/NCarState System' */
  uint8_T is_Ready_To_Drive;           /* '<Root>/NCarState System' */
} DW_NCarState_f_T;

/* Real-time Model Data Structure */
struct tag_RTM_NCarState_T {
  const char_T **errorStatus;
};

typedef struct {
  B_NCarState_c_T rtb;
  DW_NCarState_f_T rtdw;
  RT_MODEL_NCarState_T rtm;
} MdlrefDW_NCarState_T;

/* Model reference registration function */
extern void NCarState_initialize(const char_T **rt_errorStatus,
  RT_MODEL_NCarState_T *const NCarState_M);
extern void NCarState(const boolean_T *rtu_BErrorReset, const real_T
                      *rtu_rThrottlePedal, const real_T *rtu_pBrakeF, const
                      real_T *rtu_pBrakeR, const real_T *rtu_VDCInvRL, const
                      real_T *rtu_nMotorRL, const real_T *rtu_NBMSState, const
                      real_T *rtu_NInvState, const boolean_T
                      *rtu_BReadyToDriveButton, const boolean_T *rtu_BBrakeError,
                      real_T *rty_NCarState, boolean_T *rty_BReadyToDriveBuzzer,
                      boolean_T *rty_BReadyToDrive, B_NCarState_c_T *localB,
                      DW_NCarState_f_T *localDW);

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
 * '<Root>' : 'NCarState'
 * '<S1>'   : 'NCarState/NCarState System'
 */
#endif                                 /* NCarState_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
