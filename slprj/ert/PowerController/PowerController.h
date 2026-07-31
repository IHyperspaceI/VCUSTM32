/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: PowerController.h
 *
 * Code generated for Simulink model 'PowerController'.
 *
 * Model version                  : 13.2
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Fri Jul 31 17:36:12 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef PowerController_h_
#define PowerController_h_
#ifndef PowerController_COMMON_INCLUDES_
#define PowerController_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                                 /* PowerController_COMMON_INCLUDES_ */

#include "PowerController_types.h"

/* user code (top of header file) */
#include "stm32h7xx_ll_tim.h"

/* Block states (default storage) for model 'PowerController' */
typedef struct {
  real_T Memory_PreviousInput;         /* '<S19>/Memory' */
  real_T Memory1_PreviousInput;        /* '<S18>/Memory1' */
  real_T Memory_PreviousInput_b;       /* '<S35>/Memory' */
  real_T Memory1_PreviousInput_k;      /* '<S34>/Memory1' */
} DW_PowerController_f_T;

/* Real-time Model Data Structure */
struct tag_RTM_PowerController_T {
  const char_T **errorStatus;
};

typedef struct {
  DW_PowerController_f_T rtdw;
  RT_MODEL_PowerController_T rtm;
} MdlrefDW_PowerController_T;

/* Model reference registration function */
extern void PowerController_initialize(const char_T **rt_errorStatus,
  RT_MODEL_PowerController_T *const PowerController_M);
extern void PowerController(const real_T *rtu_vChassis, const real_T
  *rtu_NPCKpSelector, const real_T *rtu_PDischargeMax, const real_T
  *rtu_MDriverDischargeRequested, const real_T *rtu_PRegenMax, const real_T
  *rtu_PDischargeDerate, const real_T *rtu_PRegenDerate, const real_T
  *rtu_PActual, const real_T *rtu_rThrottlePedal, const real_T *rtu_rRegenPaddle,
  const real_T *rtu_PRegenRequested, const boolean_T *rtu_BDischargeAllowed,
  real_T *rty_PDischargeLimit, real_T *rty_PPCIntegralTermDischarge, real_T
  *rty_PPCProportionalTermDischarg, real_T *rty_MPCDischargeRequested, real_T
  *rty_PRegenLimit, real_T *rty_PPCIntegralTermRegen, real_T
  *rty_PPCProportionalTermRegen, real_T *rty_MPCRegenRequested, real_T
  *rty_PPCDischargeRequested, real_T *rty_PPCRegenRequested, real_T
  *rty_PDischargeLimited, DW_PowerController_f_T *localDW);

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S9>/Data Type Duplicate' : Unused code path elimination
 * Block '<S9>/Data Type Propagation' : Unused code path elimination
 * Block '<S17>/Data Type Duplicate' : Unused code path elimination
 * Block '<S17>/Data Type Propagation' : Unused code path elimination
 * Block '<S20>/Data Type Duplicate' : Unused code path elimination
 * Block '<S20>/Data Type Propagation' : Unused code path elimination
 * Block '<S21>/Data Type Duplicate' : Unused code path elimination
 * Block '<S21>/Data Type Propagation' : Unused code path elimination
 * Block '<S25>/Data Type Duplicate' : Unused code path elimination
 * Block '<S25>/Data Type Propagation' : Unused code path elimination
 * Block '<S33>/Data Type Duplicate' : Unused code path elimination
 * Block '<S33>/Data Type Propagation' : Unused code path elimination
 * Block '<S36>/Data Type Duplicate' : Unused code path elimination
 * Block '<S36>/Data Type Propagation' : Unused code path elimination
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
 * '<Root>' : 'PowerController'
 * '<S1>'   : 'PowerController/DischargeController System'
 * '<S2>'   : 'PowerController/NPCKp System'
 * '<S3>'   : 'PowerController/PDischargeRequested System'
 * '<S4>'   : 'PowerController/PLimit System'
 * '<S5>'   : 'PowerController/RegenController System'
 * '<S6>'   : 'PowerController/DischargeController System/PPowerControllerRequested System'
 * '<S7>'   : 'PowerController/DischargeController System/Power PI Controller'
 * '<S8>'   : 'PowerController/DischargeController System/Power to Torque Converter'
 * '<S9>'   : 'PowerController/DischargeController System/PPowerControllerRequested System/Saturation Dynamic5'
 * '<S10>'  : 'PowerController/DischargeController System/Power PI Controller/BIntegralTermActivatedDischarge System'
 * '<S11>'  : 'PowerController/DischargeController System/Power PI Controller/PErrorDischarge System'
 * '<S12>'  : 'PowerController/DischargeController System/Power PI Controller/PPowerControllerIntegralTerm System'
 * '<S13>'  : 'PowerController/DischargeController System/Power PI Controller/PPowerControllerProportionalTerm System'
 * '<S14>'  : 'PowerController/DischargeController System/Power PI Controller/PPowerControllerRequested System'
 * '<S15>'  : 'PowerController/DischargeController System/Power PI Controller/BIntegralTermActivatedDischarge System/Compare To Constant'
 * '<S16>'  : 'PowerController/DischargeController System/Power PI Controller/PPowerControllerIntegralTerm System/PPowerControllerIntegralTermDischarge System'
 * '<S17>'  : 'PowerController/DischargeController System/Power PI Controller/PPowerControllerIntegralTerm System/Saturation Dynamic1'
 * '<S18>'  : 'PowerController/DischargeController System/Power PI Controller/PPowerControllerIntegralTerm System/PPowerControllerIntegralTermDischarge System/Integral Timer'
 * '<S19>'  : 'PowerController/DischargeController System/Power PI Controller/PPowerControllerIntegralTerm System/PPowerControllerIntegralTermDischarge System/PPowerControllerIntegralTerm System'
 * '<S20>'  : 'PowerController/DischargeController System/Power PI Controller/PPowerControllerProportionalTerm System/Saturation Dynamic'
 * '<S21>'  : 'PowerController/PDischargeRequested System/Saturation Dynamic4'
 * '<S22>'  : 'PowerController/RegenController System/PPowerControllerRequested System Regen'
 * '<S23>'  : 'PowerController/RegenController System/Power PI Controller Regen'
 * '<S24>'  : 'PowerController/RegenController System/Power to Torque Converter Regen'
 * '<S25>'  : 'PowerController/RegenController System/PPowerControllerRequested System Regen/Saturation Dynamic5'
 * '<S26>'  : 'PowerController/RegenController System/Power PI Controller Regen/BIntegralTermActivated System'
 * '<S27>'  : 'PowerController/RegenController System/Power PI Controller Regen/PErrorRegen System'
 * '<S28>'  : 'PowerController/RegenController System/Power PI Controller Regen/PPowerControllerIntegralTerm System'
 * '<S29>'  : 'PowerController/RegenController System/Power PI Controller Regen/PPowerControllerProportionalTerm System'
 * '<S30>'  : 'PowerController/RegenController System/Power PI Controller Regen/PPowerControllerRequested System'
 * '<S31>'  : 'PowerController/RegenController System/Power PI Controller Regen/BIntegralTermActivated System/Compare To Constant'
 * '<S32>'  : 'PowerController/RegenController System/Power PI Controller Regen/PPowerControllerIntegralTerm System/PPowerControllerIntegralTerm Integrator System'
 * '<S33>'  : 'PowerController/RegenController System/Power PI Controller Regen/PPowerControllerIntegralTerm System/Saturation Dynamic1'
 * '<S34>'  : 'PowerController/RegenController System/Power PI Controller Regen/PPowerControllerIntegralTerm System/PPowerControllerIntegralTerm Integrator System/Integral Timer'
 * '<S35>'  : 'PowerController/RegenController System/Power PI Controller Regen/PPowerControllerIntegralTerm System/PPowerControllerIntegralTerm Integrator System/PPowerControllerIntegralTerm System'
 * '<S36>'  : 'PowerController/RegenController System/Power PI Controller Regen/PPowerControllerProportionalTerm System/Saturation Dynamic'
 */
#endif                                 /* PowerController_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
