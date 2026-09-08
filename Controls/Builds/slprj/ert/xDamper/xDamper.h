/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: xDamper.h
 *
 * Code generated for Simulink model 'xDamper'.
 *
 * Model version                  : 13.3
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Tue Sep  8 11:42:20 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef xDamper_h_
#define xDamper_h_
#ifndef xDamper_COMMON_INCLUDES_
#define xDamper_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                                 /* xDamper_COMMON_INCLUDES_ */

#include "xDamper_types.h"

/* Block states (default storage) for model 'xDamper' */
typedef struct {
  real_T Memory_PreviousInput;         /* '<S1>/Memory' */
  real_T Memory_PreviousInput_j;       /* '<S2>/Memory' */
  real_T Memory_PreviousInput_h;       /* '<S3>/Memory' */
  real_T Memory_PreviousInput_h5;      /* '<S4>/Memory' */
} DW_xDamper_f_T;

/* Real-time Model Data Structure */
struct tag_RTM_xDamper_T {
  const char_T **errorStatus;
};

typedef struct {
  DW_xDamper_f_T rtdw;
  RT_MODEL_xDamper_T rtm;
} MdlrefDW_xDamper_T;

/* Model reference registration function */
extern void xDamper_initialize(const char_T **rt_errorStatus, RT_MODEL_xDamper_T
  *const xDamper_M);
extern void xDamper_Init(DW_xDamper_f_T *localDW);
extern void xDamper(const real_T *rtu_VDamperPotentiometerFL, const real_T
                    *rtu_VDamperPotentiometerFR, const real_T
                    *rtu_VDamperPotentiometerRL, const real_T
                    *rtu_VDamperPotentiometerRR, const boolean_T
                    *rtu_BCalibrationOn, real_T *rty_xDamperFL, real_T
                    *rty_xDamperFR, real_T *rty_xDamperRL, real_T *rty_xDamperRR,
                    DW_xDamper_f_T *localDW);

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
 * '<Root>' : 'xDamper'
 * '<S1>'   : 'xDamper/xDamperFL System'
 * '<S2>'   : 'xDamper/xDamperFR System'
 * '<S3>'   : 'xDamper/xDamperRL System'
 * '<S4>'   : 'xDamper/xDamperRR System'
 */
#endif                                 /* xDamper_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
