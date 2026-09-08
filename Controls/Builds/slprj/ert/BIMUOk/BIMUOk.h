/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: BIMUOk.h
 *
 * Code generated for Simulink model 'BIMUOk'.
 *
 * Model version                  : 13.3
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Tue Sep  8 11:40:04 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef BIMUOk_h_
#define BIMUOk_h_
#ifndef BIMUOk_COMMON_INCLUDES_
#define BIMUOk_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                                 /* BIMUOk_COMMON_INCLUDES_ */

#include "BIMUOk_types.h"

/* Block states (default storage) for model 'BIMUOk' */
typedef struct {
  real_T Memory1_PreviousInput;        /* '<Root>/Memory1' */
} DW_BIMUOk_f_T;

/* Real-time Model Data Structure */
struct tag_RTM_BIMUOk_T {
  const char_T **errorStatus;
};

typedef struct {
  DW_BIMUOk_f_T rtdw;
  RT_MODEL_BIMUOk_T rtm;
} MdlrefDW_BIMUOk_T;

/* Model reference registration function */
extern void BIMUOk_initialize(const char_T **rt_errorStatus, RT_MODEL_BIMUOk_T *
  const BIMUOk_M);
extern void BIMUOk(const real_T *rtu_gLongitudinalIMU, const real_T
                   *rtu_gLateralIMU, const real_T *rtu_nYawRateIMU, const real_T
                   *rtu_gVerticalIMU, boolean_T *rty_BIMUError, boolean_T
                   *rty_BIMUOK, real_T *rty_tIMUError, DW_BIMUOk_f_T *localDW);

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
 * '<Root>' : 'BIMUOk'
 * '<S1>'   : 'BIMUOk/Compare To Constant'
 * '<S2>'   : 'BIMUOk/Subsystem'
 * '<S3>'   : 'BIMUOk/Subsystem1'
 * '<S4>'   : 'BIMUOk/Subsystem2'
 * '<S5>'   : 'BIMUOk/Subsystem3'
 * '<S6>'   : 'BIMUOk/Subsystem/Compare To Constant'
 * '<S7>'   : 'BIMUOk/Subsystem/Compare To Constant1'
 * '<S8>'   : 'BIMUOk/Subsystem1/Compare To Constant'
 * '<S9>'   : 'BIMUOk/Subsystem1/Compare To Constant1'
 * '<S10>'  : 'BIMUOk/Subsystem2/Compare To Constant'
 * '<S11>'  : 'BIMUOk/Subsystem2/Compare To Constant1'
 * '<S12>'  : 'BIMUOk/Subsystem3/Compare To Constant'
 * '<S13>'  : 'BIMUOk/Subsystem3/Compare To Constant1'
 */
#endif                                 /* BIMUOk_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
