/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: PowerController.h
 *
 * Code generated for Simulink model 'PowerController'.
 *
 * Model version                  : 13.5
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Tue Jun  2 18:48:08 2026
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
  real_T Memory_PreviousInput;         /* '<S17>/Memory' */
  real_T Memory1_PreviousInput;        /* '<S16>/Memory1' */
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
  *rtu_NPowerControllerKpSelector, const real_T *rtu_VDCInvRL, const real_T
  *rtu_PActual, const real_T *rtu_rThrottlePedal, const real_T *rtu_PDischarge,
  const real_T *rtu_MDischargeLimited, real_T *rty_PPowerControllerRequested,
  real_T *rty_MPowerControllerRequested, real_T *rty_PPowerControllerProportiona,
  real_T *rty_PPowerControllerIntegralTer, real_T *rty_PDischargeLimited,
  DW_PowerController_f_T *localDW);

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S6>/Data Type Duplicate' : Unused code path elimination
 * Block '<S6>/Data Type Propagation' : Unused code path elimination
 * Block '<S15>/Data Type Duplicate' : Unused code path elimination
 * Block '<S15>/Data Type Propagation' : Unused code path elimination
 * Block '<S18>/Data Type Duplicate' : Unused code path elimination
 * Block '<S18>/Data Type Propagation' : Unused code path elimination
 * Block '<S19>/Data Type Duplicate' : Unused code path elimination
 * Block '<S19>/Data Type Propagation' : Unused code path elimination
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
 * '<S1>'   : 'PowerController/PPowerControllerRequested System'
 * '<S2>'   : 'PowerController/Power Controller Parameters Selection System'
 * '<S3>'   : 'PowerController/Power PI Controller'
 * '<S4>'   : 'PowerController/Power to Torque Converter'
 * '<S5>'   : 'PowerController/Torque to Power Converter'
 * '<S6>'   : 'PowerController/PPowerControllerRequested System/Saturation Dynamic5'
 * '<S7>'   : 'PowerController/Power PI Controller/BIntegralTermActivated System'
 * '<S8>'   : 'PowerController/Power PI Controller/PErrorSystem'
 * '<S9>'   : 'PowerController/Power PI Controller/PPowerControllerIntegralTerm System'
 * '<S10>'  : 'PowerController/Power PI Controller/PPowerControllerProportionalTerm System'
 * '<S11>'  : 'PowerController/Power PI Controller/PPowerControllerRequested System'
 * '<S12>'  : 'PowerController/Power PI Controller/BIntegralTermActivated System/Compare To Constant'
 * '<S13>'  : 'PowerController/Power PI Controller/BIntegralTermActivated System/Compare To Constant1'
 * '<S14>'  : 'PowerController/Power PI Controller/PPowerControllerIntegralTerm System/PPowerControllerIntegralTerm Integrator System'
 * '<S15>'  : 'PowerController/Power PI Controller/PPowerControllerIntegralTerm System/Saturation Dynamic1'
 * '<S16>'  : 'PowerController/Power PI Controller/PPowerControllerIntegralTerm System/PPowerControllerIntegralTerm Integrator System/Integral Timer'
 * '<S17>'  : 'PowerController/Power PI Controller/PPowerControllerIntegralTerm System/PPowerControllerIntegralTerm Integrator System/PPowerControllerIntegralTerm System'
 * '<S18>'  : 'PowerController/Power PI Controller/PPowerControllerProportionalTerm System/Saturation Dynamic'
 * '<S19>'  : 'PowerController/Torque to Power Converter/Saturation Dynamic4'
 */
#endif                                 /* PowerController_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
