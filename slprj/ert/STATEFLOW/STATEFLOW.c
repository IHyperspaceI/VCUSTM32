/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: STATEFLOW.c
 *
 * Code generated for Simulink model 'STATEFLOW'.
 *
 * Model version                  : 13.4
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Fri Jul 31 17:38:15 2026
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
void STATEFLOW(const real_T *rtu_Global_InverterSignals_Inve, const boolean_T
               *rtu_Global_InverterSignals_In_g, const boolean_T
               *rtu_Global_InverterSignals_In_c, const boolean_T
               *rtu_Global_InverterSignals_In_e, const boolean_T
               *rtu_Global_InverterSignals_In_n, const real_T
               *rtu_Global_InverterSignals_In_f, const real_T
               *rtu_Global_InverterSignals_In_k, const real_T
               *rtu_Global_InverterSignals_In_h, const boolean_T
               *rtu_Global_InverterSignals_I_kw, const boolean_T
               *rtu_Global_InverterSignals_I_ka, const boolean_T
               *rtu_Global_InverterSignals__kaa, const boolean_T
               *rtu_Global_InverterSignals_I_el, const real_T
               *rtu_Global_InverterSignals_I_cj, const real_T
               *rtu_Global_InverterSignals_I_ez, const boolean_T
               *rtu_Global_InverterSignals_In_o, const boolean_T
               *rtu_Global_InverterSignals_In_p, const boolean_T
               *rtu_Global_InverterSignals_In_d, const boolean_T
               *rtu_Global_InverterSignals_I_dm, const real_T
               *rtu_Global_InverterSignals_I_gy, const real_T
               *rtu_Global_InverterSignals_In_m, const boolean_T
               *rtu_Global_InverterSignals_I_pd, const boolean_T
               *rtu_Global_InverterSignals_In_i, const boolean_T
               *rtu_Global_InverterSignals_I_pr, const boolean_T
               *rtu_Global_InverterSignals_I_pe, const real_T
               *rtu_Global_InverterSignals_I_o3, const real_T
               *rtu_Global_BMSSignals_VCellMin, const real_T
               *rtu_Global_BMSSignals_VDCAccumu, const real_T
               *rtu_Global_BMSSignals_RCellAver, const boolean_T
               *rtu_Global_BMSSignals_BBalancin, const boolean_T
               *rtu_Global_BMSSignals_BBMSP0A0C, const boolean_T
               *rtu_Global_BMSSignals_BBMSP0A0E, const boolean_T
               *rtu_Global_BMSSignals_BBMSP0A10, const boolean_T
               *rtu_Global_BMSSignals_BBMSP0A80, const boolean_T
               *rtu_Global_BMSSignals_BBMSP0AC0, const boolean_T
               *rtu_Global_BMSSignals_BBMSP0AFA, const real_T
               *rtu_Global_Systems_rThrottlePed, const real_T
               *rtu_Global_Systems_pBrakeF, const real_T
               *rtu_Global_Systems_pBrakeR, const boolean_T
               *rtu_Global_Systems_BBrakeError, const boolean_T
               *rtu_Global_Systems_BReadyToDriv, const boolean_T
               *rtu_Global_Systems_BErrorReset, real_T *rty_Stateflow_NCarState,
               boolean_T *rty_Stateflow_BReadyToDriveBuzz, boolean_T
               *rty_Stateflow_BReadyToDrive, real_T *rty_Stateflow_NBMSState,
               real_T *rty_Stateflow_NInvState, real_T *rty_Stateflow_BHVOn,
               real_T *rty_Stateflow_BInvOnRLOut, real_T
               *rty_Stateflow_BInvOnRROut, real_T *rty_Stateflow_BInvOnFLOut,
               real_T *rty_Stateflow_BInvOnFROut, real_T
               *rty_Stateflow_BInvDCOnRLOut, real_T *rty_Stateflow_BInvDCOnRROut,
               real_T *rty_Stateflow_BInvDCOnFLOut, real_T
               *rty_Stateflow_BInvDCOnFROut, real_T *rty_Stateflow_BInvEnableRL,
               real_T *rty_Stateflow_BInvEnableRR, real_T
               *rty_Stateflow_BInvEnableFL, real_T *rty_Stateflow_BInvEnableFR,
               real_T *rty_Stateflow_BInvErrorResetRL, real_T
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
  NBMSState(rtu_Global_BMSSignals_BBMSP0A0C, rtu_Global_BMSSignals_BBMSP0A0E,
            rtu_Global_BMSSignals_BBMSP0A10, rtu_Global_BMSSignals_BBMSP0A80,
            rtu_Global_BMSSignals_BBMSP0AC0, rtu_Global_BMSSignals_BBMSP0AFA,
            rtu_Global_BMSSignals_RCellAver, rtu_Global_BMSSignals_BBalancin,
            rtu_Global_BMSSignals_VCellMin, rty_Stateflow_NBMSState,
            &(localDW->Model1_InstanceData.rtdw));

  /* ModelReference: '<S1>/Model2' */
  NInvState(rtu_Global_Systems_BErrorReset, rtu_Global_InverterSignals_In_k,
            rtu_Global_InverterSignals_Inve, rtu_Global_InverterSignals_In_g,
            rtu_Global_InverterSignals_In_o, rtu_Global_InverterSignals_I_kw,
            rtu_Global_InverterSignals_I_pd, rtu_Global_InverterSignals_In_f,
            rtu_Global_InverterSignals_I_gy, rtu_Global_InverterSignals_I_cj,
            rtu_Global_InverterSignals_I_o3, rtu_Global_InverterSignals_In_n,
            rtu_Global_InverterSignals_I_dm, rtu_Global_InverterSignals_I_el,
            rtu_Global_InverterSignals_I_pe, rtu_Global_InverterSignals_In_e,
            rtu_Global_InverterSignals_In_d, rtu_Global_InverterSignals__kaa,
            rtu_Global_InverterSignals_I_pr, rtu_Global_InverterSignals_In_c,
            rtu_Global_InverterSignals_In_p, rtu_Global_InverterSignals_I_ka,
            rtu_Global_InverterSignals_In_i, rtu_Global_BMSSignals_VDCAccumu,
            rtu_Global_InverterSignals_I_ez, rtu_Global_InverterSignals_In_m,
            rtu_Global_InverterSignals_In_h, rty_Stateflow_NInvState,
            rty_Stateflow_BHVOn, rty_Stateflow_BInvOnRLOut,
            rty_Stateflow_BInvOnRROut, rty_Stateflow_BInvOnFLOut,
            rty_Stateflow_BInvOnFROut, rty_Stateflow_BInvDCOnRLOut,
            rty_Stateflow_BInvDCOnRROut, rty_Stateflow_BInvDCOnFLOut,
            rty_Stateflow_BInvDCOnFROut, rty_Stateflow_BInvEnableRL,
            rty_Stateflow_BInvEnableRR, rty_Stateflow_BInvEnableFL,
            rty_Stateflow_BInvEnableFR, rty_Stateflow_BInvErrorResetRL,
            rty_Stateflow_BInvErrorResetRR, rty_Stateflow_BInvErrorResetFL,
            rty_Stateflow_BInvErrorResetFR, rty_Stateflow_MTargetTorqueRL,
            rty_Stateflow_MTargetTorqueRR, rty_Stateflow_MTargetTorqueFL,
            rty_Stateflow_MTargetTorqueFR, rty_Stateflow_MTorqueLimitNegat,
            rty_Stateflow_MTorqueLimitNeg_j, rty_Stateflow_MTorqueLimitNeg_p,
            rty_Stateflow_MTorqueLimitNeg_m, rty_Stateflow_MTorqueLimitPosit,
            rty_Stateflow_MTorqueLimitPos_i, rty_Stateflow_MTorqueLimitPos_k,
            rty_Stateflow_MTorqueLimitPos_h, &(localDW->Model2_InstanceData.rtdw));

  /* ModelReference: '<S1>/Model' */
  NCarState(rtu_Global_Systems_BErrorReset, rtu_Global_Systems_rThrottlePed,
            rtu_Global_Systems_pBrakeF, rtu_Global_Systems_pBrakeR,
            rtu_Global_InverterSignals_In_k, rtu_Global_InverterSignals_Inve,
            rty_Stateflow_NBMSState, rty_Stateflow_NInvState,
            rtu_Global_Systems_BReadyToDriv, rtu_Global_Systems_BBrakeError,
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
