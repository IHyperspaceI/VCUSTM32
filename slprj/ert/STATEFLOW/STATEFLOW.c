/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: STATEFLOW.c
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

#include "STATEFLOW.h"
#include "rtwtypes.h"
#include "STATEFLOW_private.h"
#include "NCarState.h"
#include "NBMSState.h"
#include "NInvState.h"

/* System initialize for referenced model: 'STATEFLOW' */
void STATEFLOW_Init(DW_STATEFLOW_f_T *localDW)
{
  /* SystemInitialize for ModelReference: '<S1>/Model2' */
  NInvState_Init(&(localDW->Model2_InstanceData.rtdw));
}

/* Output and update for referenced model: 'STATEFLOW' */
void STATEFLOW(const real_T *rtu_Global_InverterSignalsBus_I, const boolean_T
               *rtu_Global_InverterSignalsBus_g, const boolean_T
               *rtu_Global_InverterSignalsBus_c, const boolean_T
               *rtu_Global_InverterSignalsBus_e, const boolean_T
               *rtu_Global_InverterSignalsBus_n, const real_T
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
               *rtu_Global_SystemsBus_BReadyToD, real_T *rty_Stateflow_NCarState,
               boolean_T *rty_Stateflow_BReadyToDriveBuzz, boolean_T
               *rty_Stateflow_BReadyToDrive, real_T *rty_Stateflow_NBMSState,
               real_T *rty_Stateflow_NInvState, real_T *rty_Stateflow_BHVOn,
               real_T *rty_Stateflow_BInvOnRL, real_T *rty_Stateflow_BInvOnRR,
               real_T *rty_Stateflow_BInvOnFL, real_T *rty_Stateflow_BInvOnFR,
               real_T *rty_Stateflow_BInvDCOnRL, real_T
               *rty_Stateflow_BInvDCOnRR, real_T *rty_Stateflow_BInvDCOnFL,
               real_T *rty_Stateflow_BInvDCOnFR, real_T
               *rty_Stateflow_BInvEnableRL, real_T *rty_Stateflow_BInvEnableRR,
               real_T *rty_Stateflow_BInvEnableFL, real_T
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
               *rty_Stateflow_MTorqueLimitPos_h, DW_STATEFLOW_f_T *localDW)
{
  /* ModelReference: '<S1>/Model1' */
  NBMSState(rtu_Global_BMSSignalsBus_BBMSP0, rtu_Global_BMSSignalsBus_BBMS_m,
            rtu_Global_BMSSignalsBus_BBMS_p, rtu_Global_BMSSignalsBus_BBMS_i,
            rtu_Global_BMSSignalsBus_BBMS_k, rtu_Global_BMSSignalsBus_BBMS_h,
            rtu_Global_BMSSignalsBus_RCellA, rtu_Global_BMSSignalsBus_BBalan,
            rtu_Global_BMSSignalsBus_VCellA, rty_Stateflow_NBMSState,
            &(localDW->Model1_InstanceData.rtdw));

  /* ModelReference: '<S1>/Model2' */
  NInvState(rtu_Global_SystemsBus_BErrorRes, rtu_Global_InverterSignalsBus_k,
            rtu_Global_InverterSignalsBus_I, rtu_Global_InverterSignalsBus_g,
            rtu_Global_InverterSignalsBu_cj, rtu_Global_InverterSignalsBus_h,
            rtu_Global_InverterSignalsBu_dm, rtu_Global_InverterSignalsBus_f,
            rtu_Global_InverterSignalsBus_d, rtu_Global_InverterSignalsBu_el,
            rtu_Global_InverterSignalsBus_i, rtu_Global_InverterSignalsBus_n,
            rtu_Global_InverterSignalsBus_p, rtu_Global_InverterSignalsB_kaa,
            rtu_Global_InverterSignalsBu_pd, rtu_Global_InverterSignalsBus_e,
            rtu_Global_InverterSignalsBus_o, rtu_Global_InverterSignalsBu_ka,
            rtu_Global_InverterSignalsBus_m, rtu_Global_InverterSignalsBus_c,
            rtu_Global_InverterSignalsBu_ez, rtu_Global_InverterSignalsBu_kw,
            rtu_Global_InverterSignalsBu_gy, rtu_Global_BMSSignalsBus_VDCAcc,
            rty_Stateflow_NInvState, rty_Stateflow_BHVOn, rty_Stateflow_BInvOnRL,
            rty_Stateflow_BInvOnRR, rty_Stateflow_BInvOnFL,
            rty_Stateflow_BInvOnFR, rty_Stateflow_BInvDCOnRL,
            rty_Stateflow_BInvDCOnRR, rty_Stateflow_BInvDCOnFL,
            rty_Stateflow_BInvDCOnFR, rty_Stateflow_BInvEnableRL,
            rty_Stateflow_BInvEnableRR, rty_Stateflow_BInvEnableFL,
            rty_Stateflow_BInvEnableFR, rty_Stateflow_BInvErrorResetRL,
            rty_Stateflow_BInvErrorResetRR, rty_Stateflow_BInvErrorResetFL,
            rty_Stateflow_BInvErrorResetFR, rty_Stateflow_MTargetTorqueRL,
            rty_Stateflow_MTargetTorqueRR, rty_Stateflow_MTargetTorqueFL,
            rty_Stateflow_MTargetTorqueFR, rty_Stateflow_MTorqueLimitNegat,
            rty_Stateflow_MTorqueLimitNeg_j, rty_Stateflow_MTorqueLimitNeg_p,
            rty_Stateflow_MTorqueLimitNeg_m, rty_Stateflow_MTorqueLimitPosit,
            rty_Stateflow_MTorqueLimitPos_i, rty_Stateflow_MTorqueLimitPos_k,
            rty_Stateflow_MTorqueLimitPos_h, &(localDW->Model2_InstanceData.rtb),
            &(localDW->Model2_InstanceData.rtdw));

  /* ModelReference: '<S1>/Model' */
  NCarState(rtu_Global_SystemsBus_BErrorRes, rtu_Global_SystemsBus_rThrottle,
            rtu_Global_SensorSignalsBus_pBr, rtu_Global_SensorSignalsBus_p_p,
            rtu_Global_InverterSignalsBus_k, rtu_Global_InverterSignalsBus_I,
            rty_Stateflow_NInvState, rtu_Global_SystemsBus_BReadyToD,
            rty_Stateflow_NCarState, rty_Stateflow_BReadyToDriveBuzz,
            rty_Stateflow_BReadyToDrive, &(localDW->Model_InstanceData.rtb),
            &(localDW->Model_InstanceData.rtdw));
}

/* Model initialize function */
void STATEFLOW_initialize(const char_T **rt_errorStatus, RT_MODEL_STATEFLOW_T *
  const STATEFLOW_M, DW_STATEFLOW_f_T *localDW)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(STATEFLOW_M, rt_errorStatus);

  /* Model Initialize function for ModelReference Block: '<S1>/Model' */
  NCarState_initialize(rtmGetErrorStatusPointer(STATEFLOW_M),
                       &(localDW->Model_InstanceData.rtm));

  /* Model Initialize function for ModelReference Block: '<S1>/Model1' */
  NBMSState_initialize(rtmGetErrorStatusPointer(STATEFLOW_M),
                       &(localDW->Model1_InstanceData.rtm));

  /* Model Initialize function for ModelReference Block: '<S1>/Model2' */
  NInvState_initialize(rtmGetErrorStatusPointer(STATEFLOW_M),
                       &(localDW->Model2_InstanceData.rtm));

  /* user code (Initialize function Body) */
  LL_TIM_EnableCounter(TIM2);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
