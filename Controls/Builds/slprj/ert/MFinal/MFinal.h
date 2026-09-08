/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: MFinal.h
 *
 * Code generated for Simulink model 'MFinal'.
 *
 * Model version                  : 13.3
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Tue Sep  8 11:42:51 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef MFinal_h_
#define MFinal_h_
#ifndef MFinal_COMMON_INCLUDES_
#define MFinal_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                                 /* MFinal_COMMON_INCLUDES_ */

#include "MFinal_types.h"

/* Real-time Model Data Structure */
struct tag_RTM_MFinal_T {
  const char_T **errorStatus;
};

typedef struct {
  RT_MODEL_MFinal_T rtm;
} MdlrefDW_MFinal_T;

/* Model reference registration function */
extern void MFinal_initialize(const char_T **rt_errorStatus, RT_MODEL_MFinal_T *
  const MFinal_M);
extern void MFinal(const real_T *rtu_MSpinningModeFL, const boolean_T
                   *rtu_BSpinningModeOn, const real_T
                   *rtu_MTractionControlFLFinal, const real_T
                   *rtu_rSpeedRegenDerateFL, const real_T *rtu_MSpinningModeFR,
                   const real_T *rtu_MTractionControlFRFinal, const real_T
                   *rtu_rSpeedRegenDerateFR, const real_T *rtu_MSpinningModeRL,
                   const real_T *rtu_MTractionControlRLFinal, const real_T
                   *rtu_rSpeedRegenDerateRL, const real_T *rtu_MSpinningModeRR,
                   const real_T *rtu_MTractionControlRRFinal, const real_T
                   *rtu_rSpeedRegenDerateRR, real_T *rty_MFLFinal, real_T
                   *rty_MFRFinal, real_T *rty_MRLFinal, real_T *rty_MRRFinal,
                   real_T *rty_MTotalFinal);

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
 * '<Root>' : 'MFinal'
 */
#endif                                 /* MFinal_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
