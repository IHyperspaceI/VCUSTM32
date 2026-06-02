/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: EMS.h
 *
 * Code generated for Simulink model 'EMS'.
 *
 * Model version                  : 13.5
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Tue Jun  2 18:47:33 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef EMS_h_
#define EMS_h_
#ifndef EMS_COMMON_INCLUDES_
#define EMS_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                                 /* EMS_COMMON_INCLUDES_ */

#include "EMS_types.h"

/* user code (top of header file) */
#include "stm32h7xx_ll_tim.h"

/* Block states (default storage) for model 'EMS' */
typedef struct {
  real_T Memory_PreviousInput;         /* '<S14>/Memory' */
  real_T Memory_PreviousInput_n;       /* '<S10>/Memory' */
  real_T Memory1_PreviousInput;        /* '<S9>/Memory1' */
  real_T Memory2_PreviousInput;        /* '<S9>/Memory2' */
  real_T Memory1_PreviousInput_o;      /* '<S13>/Memory1' */
  real_T Memory2_PreviousInput_p;      /* '<S13>/Memory2' */
} DW_EMS_f_T;

/* Real-time Model Data Structure */
struct tag_RTM_EMS_T {
  const char_T **errorStatus;
};

typedef struct {
  DW_EMS_f_T rtdw;
  RT_MODEL_EMS_T rtm;
} MdlrefDW_EMS_T;

/* Model reference registration function */
extern void EMS_initialize(const char_T **rt_errorStatus, RT_MODEL_EMS_T *const
  EMS_M);
extern void EMS_Init(DW_EMS_f_T *localDW);
extern void EMS(const boolean_T *rtu_BEMSActivated, const real_T *rtu_rSOC,
                const boolean_T *rtu_BEMS1000mPoint, const boolean_T
                *rtu_BEMS995mPoint, const real_T *rtu_MTotalRequested, const
                real_T *rtu_rSOE, const real_T *rtu_vChassis, const real_T
                *rtu_rDischargeDerate, real_T *rty_MFinalEMSRequested, real_T
                *rty_MTotalEMSRequested, real_T *rty_rSOCTargetError, real_T
                *rty_rSOETargetError, DW_EMS_f_T *localDW);

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S11>/Data Type Duplicate' : Unused code path elimination
 * Block '<S11>/Data Type Propagation' : Unused code path elimination
 * Block '<S15>/Data Type Duplicate' : Unused code path elimination
 * Block '<S15>/Data Type Propagation' : Unused code path elimination
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
 * '<Root>' : 'EMS'
 * '<S1>'   : 'EMS/MFinalEMSRequested System'
 * '<S2>'   : 'EMS/SOC EMS'
 * '<S3>'   : 'EMS/SOE EMS'
 * '<S4>'   : 'EMS/MFinalEMSRequested System/MFinalEMSRequested System'
 * '<S5>'   : 'EMS/MFinalEMSRequested System/MTotalEMSRequested System'
 * '<S6>'   : 'EMS/MFinalEMSRequested System/MFinalEMSRequested System/Compare To Constant'
 * '<S7>'   : 'EMS/MFinalEMSRequested System/MFinalEMSRequested System/Compare To Constant1'
 * '<S8>'   : 'EMS/SOC EMS/MEMSRequestedSOC System'
 * '<S9>'   : 'EMS/SOC EMS/rCapacityUsed System'
 * '<S10>'  : 'EMS/SOC EMS/rSOCTargetError System'
 * '<S11>'  : 'EMS/SOC EMS/MEMSRequestedSOC System/Saturation Dynamic'
 * '<S12>'  : 'EMS/SOE EMS/MEMSRequestedSOE System'
 * '<S13>'  : 'EMS/SOE EMS/rEnergyUsed System'
 * '<S14>'  : 'EMS/SOE EMS/rSOETargetError System'
 * '<S15>'  : 'EMS/SOE EMS/MEMSRequestedSOE System/Saturation Dynamic'
 */
#endif                                 /* EMS_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
