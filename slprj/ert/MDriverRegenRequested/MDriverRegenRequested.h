/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: MDriverRegenRequested.h
 *
 * Code generated for Simulink model 'MDriverRegenRequested'.
 *
 * Model version                  : 13.5
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Tue Jun  2 18:47:46 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef MDriverRegenRequested_h_
#define MDriverRegenRequested_h_
#ifndef MDriverRegenRequested_COMMON_INCLUDES_
#define MDriverRegenRequested_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                              /* MDriverRegenRequested_COMMON_INCLUDES_ */

#include "MDriverRegenRequested_types.h"

/* user code (top of header file) */
#include "stm32h7xx_ll_tim.h"

/* Block signals for model 'MDriverRegenRequested' */
typedef struct {
  real_T BHighChargeOK;                /* '<S2>/Relax Latch System' */
} B_MDriverRegenRequested_c_T;

/* Block states (default storage) for model 'MDriverRegenRequested' */
typedef struct {
  real_T Memory1_PreviousInput;        /* '<S4>/Memory1' */
  uint16_T temporalCounter_i1;         /* '<S2>/Relax Latch System' */
  uint8_T is_active_c3_MDriverRegenReques;/* '<S2>/Relax Latch System' */
  uint8_T is_c3_MDriverRegenRequested; /* '<S2>/Relax Latch System' */
} DW_MDriverRegenRequested_f_T;

/* Real-time Model Data Structure */
struct tag_RTM_MDriverRegenRequested_T {
  const char_T **errorStatus;
};

typedef struct {
  B_MDriverRegenRequested_c_T rtb;
  DW_MDriverRegenRequested_f_T rtdw;
  RT_MODEL_MDriverRegenRequeste_T rtm;
} MdlrefDW_MDriverRegenRequeste_T;

/* Model reference registration function */
extern void MDriverRegenRequeste_initialize(const char_T **rt_errorStatus,
  RT_MODEL_MDriverRegenRequeste_T *const MDriverRegenRequested_M);
extern void MDriverRegenRequested(const real_T *rtu_IIVTS, const real_T
  *rtu_PRegen, const real_T *rtu_rRegenPaddle, const real_T *rtu_VDCInvRL,
  real_T *rty_MDriverRegenRequested, B_MDriverRegenRequested_c_T *localB,
  DW_MDriverRegenRequested_f_T *localDW);

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S9>/Data Type Duplicate' : Unused code path elimination
 * Block '<S9>/Data Type Propagation' : Unused code path elimination
 */

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
 * '<Root>' : 'MDriverRegenRequested'
 * '<S1>'   : 'MDriverRegenRequested/IRegenRequested System'
 * '<S2>'   : 'MDriverRegenRequested/IRegenRestricted System'
 * '<S3>'   : 'MDriverRegenRequested/MDriverRegenRequested System '
 * '<S4>'   : 'MDriverRegenRequested/IRegenRestricted System/Charge Timer System'
 * '<S5>'   : 'MDriverRegenRequested/IRegenRestricted System/Relax Latch System'
 * '<S6>'   : 'MDriverRegenRequested/IRegenRestricted System/Subsystem'
 * '<S7>'   : 'MDriverRegenRequested/IRegenRestricted System/Charge Timer System/Compare To Constant'
 * '<S8>'   : 'MDriverRegenRequested/IRegenRestricted System/Charge Timer System/Compare To Constant1'
 * '<S9>'   : 'MDriverRegenRequested/IRegenRestricted System/Subsystem/Saturation Dynamic1'
 */
#endif                                 /* MDriverRegenRequested_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
