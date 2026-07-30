/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: BDrivetrainCoolingOn.h
 *
 * Code generated for Simulink model 'BDrivetrainCoolingOn'.
 *
 * Model version                  : 13.2
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Thu Jul 30 16:42:08 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef BDrivetrainCoolingOn_h_
#define BDrivetrainCoolingOn_h_
#ifndef BDrivetrainCoolingOn_COMMON_INCLUDES_
#define BDrivetrainCoolingOn_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                               /* BDrivetrainCoolingOn_COMMON_INCLUDES_ */

#include "BDrivetrainCoolingOn_types.h"

/* user code (top of header file) */
#include "stm32h7xx_ll_tim.h"

/* Real-time Model Data Structure */
struct tag_RTM_BDrivetrainCoolingOn_T {
  const char_T **errorStatus;
};

typedef struct {
  RT_MODEL_BDrivetrainCoolingOn_T rtm;
} MdlrefDW_BDrivetrainCoolingOn_T;

/* Model reference registration function */
extern void BDrivetrainCoolingOn_initialize(const char_T **rt_errorStatus,
  RT_MODEL_BDrivetrainCoolingOn_T *const BDrivetrainCoolingOn_M);
extern void BDrivetrainCoolingOn(const real_T *rtu_TCellMax, const real_T
  *rtu_TMotorMax, const boolean_T *rtu_BDrivetrainCoolingOn, const real_T
  *rtu_TInvMax, boolean_T *rty_BAccuFanOn, boolean_T *rty_BMotorRBHFanOn,
  boolean_T *rty_BInverterFanOn);

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
 * '<Root>' : 'BDrivetrainCoolingOn'
 * '<S1>'   : 'BDrivetrainCoolingOn/Compare To Constant'
 * '<S2>'   : 'BDrivetrainCoolingOn/Compare To Constant1'
 * '<S3>'   : 'BDrivetrainCoolingOn/Compare To Constant2'
 */
#endif                                 /* BDrivetrainCoolingOn_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
