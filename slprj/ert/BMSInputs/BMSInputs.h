/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: BMSInputs.h
 *
 * Code generated for Simulink model 'BMSInputs'.
 *
 * Model version                  : 13.2
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Thu Jul 30 16:37:22 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef BMSInputs_h_
#define BMSInputs_h_
#ifndef BMSInputs_COMMON_INCLUDES_
#define BMSInputs_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                                 /* BMSInputs_COMMON_INCLUDES_ */

#include "BMSInputs_types.h"

/* user code (top of header file) */
#include "stm32h7xx_ll_tim.h"

/* Real-time Model Data Structure */
struct tag_RTM_BMSInputs_T {
  const char_T **errorStatus;
};

typedef struct {
  RT_MODEL_BMSInputs_T rtm;
} MdlrefDW_BMSInputs_T;

/* Model reference registration function */
extern void BMSInputs_initialize(const char_T **rt_errorStatus,
  RT_MODEL_BMSInputs_T *const BMSInputs_M);
extern void BMSInputs(const real_T *rtu_BMS_IIVTS, const real_T
                      *rtu_BMS_IBMSHallEffect, const real_T
                      *rtu_BMS_VDCAccumulator, const real_T *rtu_BMS_TCellMin,
                      const real_T *rtu_BMS_VCellAverage, const real_T
                      *rtu_BMS_VCellMax, const real_T *rtu_BMS_TCellMax, const
                      real_T *rtu_BMS_IBMSDLC, const real_T *rtu_BMS_VCellMin,
                      const real_T *rtu_BMS_RCellAverage, const boolean_T
                      *rtu_BMS_BBalancingOn, const boolean_T *rtu_BMS_BBMSP0A0C,
                      const boolean_T *rtu_BMS_BBMSP0A0E, const boolean_T
                      *rtu_BMS_BBMSP0A10, const boolean_T *rtu_BMS_BBMSP0A80,
                      const boolean_T *rtu_BMS_BBMSP0AC0, const boolean_T
                      *rtu_BMS_BBMSP0AFA, real_T *rty_BMSSignalsBus_VCellMax,
                      real_T *rty_BMSSignalsBus_VCellDelta, real_T
                      *rty_BMSSignalsBus_VCellMin, real_T
                      *rty_BMSSignalsBus_VCellAverage, real_T
                      *rty_BMSSignalsBus_TCellMax, real_T
                      *rty_BMSSignalsBus_IBMSDLC, real_T
                      *rty_BMSSignalsBus_TCellMin, real_T
                      *rty_BMSSignalsBus_IBMSHallEffec, real_T
                      *rty_BMSSignalsBus_VDCAccumulato, real_T
                      *rty_BMSSignalsBus_RCellAverage, boolean_T
                      *rty_BMSSignalsBus_BBalancingOn, boolean_T
                      *rty_BMSSignalsBus_BBMSP0A0C, boolean_T
                      *rty_BMSSignalsBus_BBMSP0A0E, boolean_T
                      *rty_BMSSignalsBus_BBMSP0A10, boolean_T
                      *rty_BMSSignalsBus_BBMSP0A80, boolean_T
                      *rty_BMSSignalsBus_BBMSP0AC0, boolean_T
                      *rty_BMSSignalsBus_BBMSP0AFA, real_T
                      *rty_BMSSignalsBus_IIVTS);

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
 * '<Root>' : 'BMSInputs'
 * '<S1>'   : 'BMSInputs/BMSSignals System'
 */
#endif                                 /* BMSInputs_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
