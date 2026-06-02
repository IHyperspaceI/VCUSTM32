/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: BMSSignals.h
 *
 * Code generated for Simulink model 'BMSSignals'.
 *
 * Model version                  : 13.7
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Tue Jun  2 18:43:28 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef BMSSignals_h_
#define BMSSignals_h_
#ifndef BMSSignals_COMMON_INCLUDES_
#define BMSSignals_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                                 /* BMSSignals_COMMON_INCLUDES_ */

#include "BMSSignals_types.h"

/* user code (top of header file) */
#include "stm32h7xx_ll_tim.h"

/* Real-time Model Data Structure */
struct tag_RTM_BMSSignals_T {
  const char_T **errorStatus;
};

typedef struct {
  RT_MODEL_BMSSignals_T rtm;
} MdlrefDW_BMSSignals_T;

/* Model reference registration function */
extern void BMSSignals_initialize(const char_T **rt_errorStatus,
  RT_MODEL_BMSSignals_T *const BMSSignals_M);
extern void BMSSignals(const real_T *rtu_BMSCAN_IIVTS, const real_T
  *rtu_BMSCAN_IBMSHallEffect, const real_T *rtu_BMSCAN_VDCAccumulator, const
  real_T *rtu_BMSCAN_TCellMin, const real_T *rtu_BMSCAN_VCellAverage, const
  real_T *rtu_BMSCAN_VCellMax, const real_T *rtu_BMSCAN_TCellMax, const real_T
  *rtu_BMSCAN_NBMSDLC, const real_T *rtu_BMSCAN_VCellMin, const real_T
  *rtu_BMSCAN_RCellAverage, const real_T *rtu_BMSCAN_BBalancingActive, const
  real_T *rtu_BMSCAN_BBMSP0A0C, const real_T *rtu_BMSCAN_BBMSP0A0E, const real_T
  *rtu_BMSCAN_BBMSP0A10, const real_T *rtu_BMSCAN_BBMSP0A80, const real_T
  *rtu_BMSCAN_BBMSP0AC0, const real_T *rtu_BMSCAN_BBMSP0AFA, real_T
  *rty_BMSSignalsBus_VCellMax, real_T *rty_BMSSignalsBus_VCellDelta, real_T
  *rty_BMSSignalsBus_VCellMin, real_T *rty_BMSSignalsBus_VCellAverage, real_T
  *rty_BMSSignalsBus_TCellMax, real_T *rty_BMSSignalsBus_NBMSDLC, real_T
  *rty_BMSSignalsBus_TCellMin, real_T *rty_BMSSignalsBus_IBMSHallEffec, real_T
  *rty_BMSSignalsBus_VDCAccumulato, real_T *rty_BMSSignalsBus_RCellAverage,
  boolean_T *rty_BMSSignalsBus_BBalancingAct, boolean_T
  *rty_BMSSignalsBus_BBMSP0A0C, boolean_T *rty_BMSSignalsBus_BBMSP0A0E,
  boolean_T *rty_BMSSignalsBus_BBMSP0A10, boolean_T *rty_BMSSignalsBus_BBMSP0A80,
  boolean_T *rty_BMSSignalsBus_BBMSP0AC0, boolean_T *rty_BMSSignalsBus_BBMSP0AFA,
  real_T *rty_BMSSignalsBus_IIVTS);

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
 * '<Root>' : 'BMSSignals'
 * '<S1>'   : 'BMSSignals/BMSSignals System'
 */
#endif                                 /* BMSSignals_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
