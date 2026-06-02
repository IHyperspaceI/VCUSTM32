/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: STATEFLOW.h
 *
 * Code generated for Simulink model 'STATEFLOW'.
 *
 * Model version                  : 13.5
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Tue Jun  2 18:49:06 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef STATEFLOW_h_
#define STATEFLOW_h_
#ifndef STATEFLOW_COMMON_INCLUDES_
#define STATEFLOW_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                                 /* STATEFLOW_COMMON_INCLUDES_ */

#include "STATEFLOW_types.h"
#include "NBMSState.h"
#include "NInvState.h"
#include "NCarState.h"

/* user code (top of header file) */
#include "stm32h7xx_ll_tim.h"

/* Block states (default storage) for model 'STATEFLOW' */
typedef struct {
  MdlrefDW_NBMSState_T Model1_InstanceData;/* '<S1>/Model1' */
  MdlrefDW_NInvState_T Model2_InstanceData;/* '<S1>/Model2' */
  MdlrefDW_NCarState_T Model_InstanceData;/* '<S1>/Model' */
} DW_STATEFLOW_f_T;

/* Real-time Model Data Structure */
struct tag_RTM_STATEFLOW_T {
  const char_T **errorStatus;
};

typedef struct {
  DW_STATEFLOW_f_T rtdw;
  RT_MODEL_STATEFLOW_T rtm;
} MdlrefDW_STATEFLOW_T;

/* Model reference registration function */
extern void STATEFLOW_initialize(const char_T **rt_errorStatus,
  RT_MODEL_STATEFLOW_T *const STATEFLOW_M, DW_STATEFLOW_f_T *localDW);
extern void STATEFLOW_Init(DW_STATEFLOW_f_T *localDW);
extern void STATEFLOW(const real_T *rtu_Global_InverterSignalsBus_I, const
                      boolean_T *rtu_Global_InverterSignalsBus_g, const
                      boolean_T *rtu_Global_InverterSignalsBus_c, const
                      boolean_T *rtu_Global_InverterSignalsBus_e, const
                      boolean_T *rtu_Global_InverterSignalsBus_n, const real_T
                      *rtu_Global_InverterSignalsBus_f, const real_T
                      *rtu_Global_InverterSignalsBus_k, const boolean_T
                      *rtu_Global_InverterSignalsBus_h, const boolean_T
                      *rtu_Global_InverterSignalsBu_kw, const boolean_T
                      *rtu_Global_InverterSignalsBu_ka, const boolean_T
                      *rtu_Global_InverterSignalsB_kaa, const real_T
                      *rtu_Global_InverterSignalsBu_el, const boolean_T
                      *rtu_Global_InverterSignalsBu_cj, const boolean_T
                      *rtu_Global_InverterSignalsBu_ez, const boolean_T
                      *rtu_Global_InverterSignalsBus_o, const boolean_T
                      *rtu_Global_InverterSignalsBus_p, const real_T
                      *rtu_Global_InverterSignalsBus_d, const boolean_T
                      *rtu_Global_InverterSignalsBu_dm, const boolean_T
                      *rtu_Global_InverterSignalsBu_gy, const boolean_T
                      *rtu_Global_InverterSignalsBus_m, const boolean_T
                      *rtu_Global_InverterSignalsBu_pd, const real_T
                      *rtu_Global_InverterSignalsBus_i, const real_T
                      *rtu_Global_SensorSignalsBus_pBr, const real_T
                      *rtu_Global_SensorSignalsBus_p_p, const real_T
                      *rtu_Global_BMSSignalsBus_VCellA, const real_T
                      *rtu_Global_BMSSignalsBus_VDCAcc, const real_T
                      *rtu_Global_BMSSignalsBus_RCellA, const boolean_T
                      *rtu_Global_BMSSignalsBus_BBalan, const boolean_T
                      *rtu_Global_BMSSignalsBus_BBMSP0, const boolean_T
                      *rtu_Global_BMSSignalsBus_BBMS_m, const boolean_T
                      *rtu_Global_BMSSignalsBus_BBMS_p, const boolean_T
                      *rtu_Global_BMSSignalsBus_BBMS_i, const boolean_T
                      *rtu_Global_BMSSignalsBus_BBMS_k, const boolean_T
                      *rtu_Global_BMSSignalsBus_BBMS_h, const real_T
                      *rtu_Global_SystemsBus_rThrottle, const boolean_T
                      *rtu_Global_SystemsBus_BErrorRes, const boolean_T
                      *rtu_Global_SystemsBus_BReadyToD, real_T
                      *rty_Stateflow_NCarState, boolean_T
                      *rty_Stateflow_BReadyToDriveBuzz, boolean_T
                      *rty_Stateflow_BReadyToDrive, real_T
                      *rty_Stateflow_NBMSState, real_T *rty_Stateflow_NInvState,
                      real_T *rty_Stateflow_BHVOn, real_T
                      *rty_Stateflow_BInvOnRL, real_T *rty_Stateflow_BInvOnRR,
                      real_T *rty_Stateflow_BInvOnFL, real_T
                      *rty_Stateflow_BInvOnFR, real_T *rty_Stateflow_BInvDCOnRL,
                      real_T *rty_Stateflow_BInvDCOnRR, real_T
                      *rty_Stateflow_BInvDCOnFL, real_T
                      *rty_Stateflow_BInvDCOnFR, real_T
                      *rty_Stateflow_BInvEnableRL, real_T
                      *rty_Stateflow_BInvEnableRR, real_T
                      *rty_Stateflow_BInvEnableFL, real_T
                      *rty_Stateflow_BInvEnableFR, real_T
                      *rty_Stateflow_BInvErrorResetRL, real_T
                      *rty_Stateflow_BInvErrorResetRR, real_T
                      *rty_Stateflow_BInvErrorResetFL, real_T
                      *rty_Stateflow_BInvErrorResetFR, real_T
                      *rty_Stateflow_MTargetTorqueRL, real_T
                      *rty_Stateflow_MTargetTorqueRR, real_T
                      *rty_Stateflow_MTargetTorqueFL, real_T
                      *rty_Stateflow_MTargetTorqueFR, real_T
                      *rty_Stateflow_MTorqueLimitNegat, real_T
                      *rty_Stateflow_MTorqueLimitNeg_j, real_T
                      *rty_Stateflow_MTorqueLimitNeg_p, real_T
                      *rty_Stateflow_MTorqueLimitNeg_m, real_T
                      *rty_Stateflow_MTorqueLimitPosit, real_T
                      *rty_Stateflow_MTorqueLimitPos_i, real_T
                      *rty_Stateflow_MTorqueLimitPos_k, real_T
                      *rty_Stateflow_MTorqueLimitPos_h, DW_STATEFLOW_f_T
                      *localDW);

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
 * '<Root>' : 'STATEFLOW'
 * '<S1>'   : 'STATEFLOW/Stateflow Model'
 */
#endif                                 /* STATEFLOW_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
