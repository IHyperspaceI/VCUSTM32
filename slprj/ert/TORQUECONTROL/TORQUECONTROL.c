/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: TORQUECONTROL.c
 *
 * Code generated for Simulink model 'TORQUECONTROL'.
 *
 * Model version                  : 13.5
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Tue Jun  2 18:49:30 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "TORQUECONTROL.h"
#include "rtwtypes.h"
#include "TORQUECONTROL_private.h"
#include "MDriverRegenRequested.h"
#include "MLimited.h"
#include "MFinal.h"
#include "MDriverDischargeRequested.h"
#include "PowerController.h"
#include "MTotalRequested.h"
#include "EMS.h"
#include "TorqueVectoring.h"
#include "TorqueDistribution.h"
#include "TractionControl.h"
#include "SpinningMode.h"

/* System initialize for referenced model: 'TORQUECONTROL' */
void TORQUECONTROL_Init(DW_TORQUECONTROL_f_T *localDW)
{
  /* SystemInitialize for ModelReference: '<S1>/Model5' */
  EMS_Init(&(localDW->Model5_InstanceData.rtdw));
}

/* Output and update for referenced model: 'TORQUECONTROL' */
void TORQUECONTROL(const real_T *rtu_Global_InverterSignalsBus_I, const real_T
                   *rtu_Global_InverterSignalsBus_g, const real_T
                   *rtu_Global_InverterSignalsBus_c, const real_T
                   *rtu_Global_InverterSignalsBus_e, const real_T
                   *rtu_Global_InverterSignalsBus_n, const real_T
                   *rtu_Global_WheelSpeedsBus_vWhee, const real_T
                   *rtu_Global_WheelSpeedsBus_vWh_k, const real_T
                   *rtu_Global_WheelSpeedsBus_vWh_h, const real_T
                   *rtu_Global_WheelSpeedsBus_vW_kw, const real_T
                   *rtu_Global_GPSIMUSignalsBus_gLo, const real_T
                   *rtu_Global_GPSIMUSignalsBus_nYa, const real_T
                   *rtu_Global_BMSSignalsBus_IIVTS, const real_T
                   *rtu_Global_SystemsBus_rThrottle, const real_T
                   *rtu_Global_SystemsBus_pBrakeMax, const real_T
                   *rtu_Global_SystemsBus_rSteering, const real_T
                   *rtu_Global_SystemsBus_aSteering, const real_T
                   *rtu_Global_SystemsBus_rRegenPad, const real_T
                   *rtu_Global_SystemsBus_vChassis, const boolean_T
                   *rtu_Global_SystemsBus_BEMS1000m, const boolean_T
                   *rtu_Global_SystemsBus_BEMS995mP, const boolean_T
                   *rtu_Global_SystemsBus_BTorqueVe, const real_T
                   *rtu_Global_SystemsBus_NThrottle, const real_T
                   *rtu_Global_SystemsBus_PDischarg, const boolean_T
                   *rtu_Global_SystemsBus_BEMSActiv, const real_T
                   *rtu_Global_SystemsBus_PRegen, const real_T
                   *rtu_Global_SystemsBus_PEngineBr, const boolean_T
                   *rtu_Global_SystemsBus_BSpinning, const real_T
                   *rtu_Global_SystemsBus_NTraction, const boolean_T
                   *rtu_Global_SystemsBus_BTraction, const real_T
                   *rtu_Global_SystemsBus_rTorqueVe, const real_T
                   *rtu_Global_SystemsBus_NPowerCon, const real_T
                   *rtu_Global_SystemsBus_PActual, const real_T
                   *rtu_Global_SystemsBus_rSOC, const real_T
                   *rtu_Global_SystemsBus_rSOE, const boolean_T
                   *rtu_Global_SystemsBus_BEncoderE, const boolean_T
                   *rtu_Global_SystemsBus_BEncode_n, const boolean_T
                   *rtu_Global_StateflowBus_BReadyT, const real_T
                   *rtu_Global_LimitationsBus_rTSTe, const real_T
                   *rtu_Global_LimitationsBus_rTS_e, const real_T
                   *rtu_Global_LimitationsBus_rTS_k, const real_T
                   *rtu_Global_LimitationsBus_rTS_b, const real_T
                   *rtu_Global_LimitationsBus_rDisc, const real_T
                   *rtu_Global_LimitationsBus_rRege, real_T
                   *rty_TorqueControl_MDriverDischa, real_T
                   *rty_TorqueControl_MDriverRegenR, real_T
                   *rty_TorqueControl_MDischargeLim, real_T
                   *rty_TorqueControl_MRegenLimited, real_T
                   *rty_TorqueControl_PPowerControl, real_T
                   *rty_TorqueControl_MPowerControl, real_T
                   *rty_TorqueControl_PPowerContr_k, real_T
                   *rty_TorqueControl_PPowerContr_h, real_T
                   *rty_TorqueControl_PDischargeLim, real_T
                   *rty_TorqueControl_MTotalRequest, real_T
                   *rty_TorqueControl_MTotalEMSRequ, real_T
                   *rty_TorqueControl_rSOCTargetErr, real_T
                   *rty_TorqueControl_rSOETargetErr, real_T
                   *rty_TorqueControl_nYawRateError, boolean_T
                   *rty_TorqueControl_BTorqueVector, real_T
                   *rty_TorqueControl_MTorqueVector, real_T
                   *rty_TorqueControl_MTorqueVect_d, real_T
                   *rty_TorqueControl_MTorqueVec_dm, real_T
                   *rty_TorqueControl_MTorqueVect_g, real_T
                   *rty_TorqueControl_rSplitRear, real_T
                   *rty_TorqueControl_MTorqueDistri, real_T
                   *rty_TorqueControl_MTorqueDist_i, real_T
                   *rty_TorqueControl_MTorqueDist_p, real_T
                   *rty_TorqueControl_MTorqueDis_pe, real_T
                   *rty_TorqueControl_rSlipRatioOpt, real_T
                   *rty_TorqueControl_NTractionCont, real_T
                   *rty_TorqueControl_NTractionCo_m, real_T
                   *rty_TorqueControl_NTractionCo_j, real_T
                   *rty_TorqueControl_NTractionCo_p, real_T
                   *rty_TorqueControl_NABSMultiplie, real_T
                   *rty_TorqueControl_NABSMultipl_p, real_T
                   *rty_TorqueControl_NABSMultipl_i, real_T
                   *rty_TorqueControl_NABSMultipl_k, real_T
                   *rty_TorqueControl_rSlipRatioFLA, real_T
                   *rty_TorqueControl_rSlipRatioFRA, real_T
                   *rty_TorqueControl_rSlipRatioRLA, real_T
                   *rty_TorqueControl_rSlipRatioRRA, real_T
                   *rty_TorqueControl_MTractionCont, real_T
                   *rty_TorqueControl_MTractionCo_e, real_T
                   *rty_TorqueControl_MTractionCo_k, real_T
                   *rty_TorqueControl_MTractionCo_b, real_T
                   *rty_TorqueControl_MTractionCo_c, real_T
                   *rty_TorqueControl_MTractionCo_l, real_T
                   *rty_TorqueControl_MTractionCo_p, real_T
                   *rty_TorqueControl_MTractionC_py, real_T
                   *rty_TorqueControl_MSpinningMode, real_T
                   *rty_TorqueControl_MSpinningMo_p, real_T
                   *rty_TorqueControl_MSpinningMo_m, real_T
                   *rty_TorqueControl_MSpinningMo_n, real_T
                   *rty_TorqueControl_MFLFinal, real_T
                   *rty_TorqueControl_MFRFinal, real_T
                   *rty_TorqueControl_MRLFinal, real_T
                   *rty_TorqueControl_MRRFinal, real_T
                   *rty_TorqueControl_MTotalFinal, DW_TORQUECONTROL_f_T *localDW)
{
  /* local block i/o variables */
  real_T rtb_Model5_o1;

  /* ModelReference: '<S1>/Model' */
  MDriverRegenRequested(rtu_Global_BMSSignalsBus_IIVTS,
                        rtu_Global_SystemsBus_PRegen,
                        rtu_Global_SystemsBus_rRegenPad,
                        rtu_Global_InverterSignalsBus_g,
                        rty_TorqueControl_MDriverRegenR,
                        &(localDW->Model_InstanceData.rtb),
                        &(localDW->Model_InstanceData.rtdw));

  /* ModelReference: '<S1>/Model2' */
  MDriverDischargeRequested(rtu_Global_SystemsBus_rThrottle,
    rtu_Global_SystemsBus_vChassis, rtu_Global_SystemsBus_NThrottle,
    rty_TorqueControl_MDriverDischa);

  /* ModelReference: '<S1>/Model1' */
  MLimited(rty_TorqueControl_MDriverDischa, rty_TorqueControl_MDriverRegenR,
           rtu_Global_LimitationsBus_rDisc, rtu_Global_LimitationsBus_rRege,
           rty_TorqueControl_MDischargeLim, rty_TorqueControl_MRegenLimited);

  /* ModelReference: '<S1>/Model9' */
  SpinningMode(rtu_Global_SystemsBus_rThrottle, rtu_Global_SystemsBus_BSpinning,
               rtu_Global_StateflowBus_BReadyT, rtu_Global_SystemsBus_pBrakeMax,
               rtu_Global_InverterSignalsBus_I, rtu_Global_InverterSignalsBus_c,
               rtu_Global_InverterSignalsBus_n, rtu_Global_InverterSignalsBus_e,
               rty_TorqueControl_MSpinningMode, rty_TorqueControl_MSpinningMo_p,
               rty_TorqueControl_MSpinningMo_m, rty_TorqueControl_MSpinningMo_n,
               &(localDW->Model9_InstanceData.rtdw));

  /* ModelReference: '<S1>/Model3' */
  PowerController(rtu_Global_SystemsBus_vChassis,
                  rtu_Global_SystemsBus_NPowerCon,
                  rtu_Global_InverterSignalsBus_g, rtu_Global_SystemsBus_PActual,
                  rtu_Global_SystemsBus_rThrottle,
                  rtu_Global_SystemsBus_PDischarg,
                  rty_TorqueControl_MDischargeLim,
                  rty_TorqueControl_PPowerControl,
                  rty_TorqueControl_MPowerControl,
                  rty_TorqueControl_PPowerContr_k,
                  rty_TorqueControl_PPowerContr_h,
                  rty_TorqueControl_PDischargeLim,
                  &(localDW->Model3_InstanceData.rtdw));

  /* ModelReference: '<S1>/Model4' */
  MTotalRequested(rty_TorqueControl_MPowerControl,
                  rtu_Global_SystemsBus_rThrottle,
                  rty_TorqueControl_MRegenLimited,
                  rty_TorqueControl_MDischargeLim, rtu_Global_SystemsBus_PActual,
                  rty_TorqueControl_MTotalRequest);

  /* ModelReference: '<S1>/Model5' */
  EMS(rtu_Global_SystemsBus_BEMSActiv, rtu_Global_SystemsBus_rSOC,
      rtu_Global_SystemsBus_BEMS1000m, rtu_Global_SystemsBus_BEMS995mP,
      rty_TorqueControl_MTotalRequest, rtu_Global_SystemsBus_rSOE,
      rtu_Global_SystemsBus_vChassis, rtu_Global_LimitationsBus_rDisc,
      &rtb_Model5_o1, rty_TorqueControl_MTotalEMSRequ,
      rty_TorqueControl_rSOCTargetErr, rty_TorqueControl_rSOETargetErr,
      &(localDW->Model5_InstanceData.rtdw));

  /* ModelReference: '<S1>/Model6' */
  TorqueVectoring(&rtb_Model5_o1, rtu_Global_GPSIMUSignalsBus_gLo,
                  rtu_Global_SystemsBus_rTorqueVe,
                  rtu_Global_SystemsBus_aSteering,
                  rtu_Global_SystemsBus_vChassis,
                  rtu_Global_SystemsBus_pBrakeMax,
                  rtu_Global_SystemsBus_rThrottle,
                  rtu_Global_SystemsBus_BTorqueVe,
                  rtu_Global_GPSIMUSignalsBus_nYa,
                  rty_TorqueControl_nYawRateError,
                  rty_TorqueControl_BTorqueVector,
                  rty_TorqueControl_MTorqueVector,
                  rty_TorqueControl_MTorqueVect_d,
                  rty_TorqueControl_MTorqueVec_dm,
                  rty_TorqueControl_MTorqueVect_g,
                  &(localDW->Model6_InstanceData.rtdw));

  /* ModelReference: '<S1>/Model7' */
  TorqueDistribution(&rtb_Model5_o1, rtu_Global_SystemsBus_vChassis,
                     rtu_Global_SystemsBus_rThrottle,
                     rtu_Global_SystemsBus_rRegenPad,
                     rtu_Global_SystemsBus_BEncoderE,
                     rtu_Global_SystemsBus_BEncode_n,
                     rtu_Global_SystemsBus_PEngineBr,
                     rtu_Global_LimitationsBus_rRege,
                     rtu_Global_InverterSignalsBus_g,
                     rty_TorqueControl_MTorqueVector,
                     rty_TorqueControl_MTorqueVect_d,
                     rty_TorqueControl_MTorqueVec_dm,
                     rty_TorqueControl_MTorqueVect_g,
                     rtu_Global_SystemsBus_BTorqueVe,
                     rtu_Global_LimitationsBus_rTS_e,
                     rtu_Global_LimitationsBus_rTSTe,
                     rtu_Global_LimitationsBus_rTS_b,
                     rtu_Global_LimitationsBus_rTS_k,
                     rtu_Global_SystemsBus_NThrottle,
                     rtu_Global_SystemsBus_BEMSActiv,
                     rty_TorqueControl_rSplitRear,
                     rty_TorqueControl_MTorqueDistri,
                     rty_TorqueControl_MTorqueDist_i,
                     rty_TorqueControl_MTorqueDist_p,
                     rty_TorqueControl_MTorqueDis_pe);

  /* ModelReference: '<S1>/Model8' */
  TractionControl(rtu_Global_SystemsBus_rSteering,
                  rtu_Global_SystemsBus_vChassis,
                  rtu_Global_SystemsBus_BTraction,
                  rtu_Global_SystemsBus_NTraction,
                  rtu_Global_WheelSpeedsBus_vWh_h,
                  rtu_Global_WheelSpeedsBus_vW_kw,
                  rtu_Global_WheelSpeedsBus_vWhee,
                  rtu_Global_WheelSpeedsBus_vWh_k,
                  rty_TorqueControl_MTorqueDistri,
                  rty_TorqueControl_MTorqueDist_i,
                  rty_TorqueControl_MTorqueDist_p,
                  rty_TorqueControl_MTorqueDis_pe,
                  rty_TorqueControl_rSlipRatioOpt,
                  rty_TorqueControl_NTractionCont,
                  rty_TorqueControl_NTractionCo_m,
                  rty_TorqueControl_NTractionCo_j,
                  rty_TorqueControl_NTractionCo_p,
                  rty_TorqueControl_NABSMultiplie,
                  rty_TorqueControl_NABSMultipl_p,
                  rty_TorqueControl_NABSMultipl_i,
                  rty_TorqueControl_NABSMultipl_k,
                  rty_TorqueControl_rSlipRatioFLA,
                  rty_TorqueControl_rSlipRatioFRA,
                  rty_TorqueControl_rSlipRatioRLA,
                  rty_TorqueControl_rSlipRatioRRA,
                  rty_TorqueControl_MTractionCont,
                  rty_TorqueControl_MTractionCo_e,
                  rty_TorqueControl_MTractionCo_k,
                  rty_TorqueControl_MTractionCo_b,
                  rty_TorqueControl_MTractionCo_c,
                  rty_TorqueControl_MTractionCo_l,
                  rty_TorqueControl_MTractionCo_p,
                  rty_TorqueControl_MTractionC_py);

  /* ModelReference: '<S1>/Model10' */
  MFinal(rtu_Global_SystemsBus_BSpinning, rty_TorqueControl_MSpinningMode,
         rty_TorqueControl_MTractionCo_c, rty_TorqueControl_MSpinningMo_p,
         rty_TorqueControl_MTractionCo_l, rty_TorqueControl_MSpinningMo_m,
         rty_TorqueControl_MTractionCo_p, rty_TorqueControl_MSpinningMo_n,
         rty_TorqueControl_MTractionC_py, rty_TorqueControl_MFLFinal,
         rty_TorqueControl_MFRFinal, rty_TorqueControl_MRLFinal,
         rty_TorqueControl_MRRFinal, rty_TorqueControl_MTotalFinal);
}

/* Model initialize function */
void TORQUECONTROL_initialize(const char_T **rt_errorStatus,
  RT_MODEL_TORQUECONTROL_T *const TORQUECONTROL_M, DW_TORQUECONTROL_f_T *localDW)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(TORQUECONTROL_M, rt_errorStatus);

  /* Model Initialize function for ModelReference Block: '<S1>/Model' */
  MDriverRegenRequeste_initialize(rtmGetErrorStatusPointer(TORQUECONTROL_M),
    &(localDW->Model_InstanceData.rtm));

  /* Model Initialize function for ModelReference Block: '<S1>/Model1' */
  MLimited_initialize(rtmGetErrorStatusPointer(TORQUECONTROL_M),
                      &(localDW->Model1_InstanceData.rtm));

  /* Model Initialize function for ModelReference Block: '<S1>/Model10' */
  MFinal_initialize(rtmGetErrorStatusPointer(TORQUECONTROL_M),
                    &(localDW->Model10_InstanceData.rtm));

  /* Model Initialize function for ModelReference Block: '<S1>/Model2' */
  MDriverDischargeRequ_initialize(rtmGetErrorStatusPointer(TORQUECONTROL_M),
    &(localDW->Model2_InstanceData.rtm));

  /* Model Initialize function for ModelReference Block: '<S1>/Model3' */
  PowerController_initialize(rtmGetErrorStatusPointer(TORQUECONTROL_M),
    &(localDW->Model3_InstanceData.rtm));

  /* Model Initialize function for ModelReference Block: '<S1>/Model4' */
  MTotalRequested_initialize(rtmGetErrorStatusPointer(TORQUECONTROL_M),
    &(localDW->Model4_InstanceData.rtm));

  /* Model Initialize function for ModelReference Block: '<S1>/Model5' */
  EMS_initialize(rtmGetErrorStatusPointer(TORQUECONTROL_M),
                 &(localDW->Model5_InstanceData.rtm));

  /* Model Initialize function for ModelReference Block: '<S1>/Model6' */
  TorqueVectoring_initialize(rtmGetErrorStatusPointer(TORQUECONTROL_M),
    &(localDW->Model6_InstanceData.rtm));

  /* Model Initialize function for ModelReference Block: '<S1>/Model7' */
  TorqueDistribution_initialize(rtmGetErrorStatusPointer(TORQUECONTROL_M),
    &(localDW->Model7_InstanceData.rtm));

  /* Model Initialize function for ModelReference Block: '<S1>/Model8' */
  TractionControl_initialize(rtmGetErrorStatusPointer(TORQUECONTROL_M),
    &(localDW->Model8_InstanceData.rtm));

  /* Model Initialize function for ModelReference Block: '<S1>/Model9' */
  SpinningMode_initialize(rtmGetErrorStatusPointer(TORQUECONTROL_M),
    &(localDW->Model9_InstanceData.rtm));

  /* user code (Initialize function Body) */
  LL_TIM_EnableCounter(TIM2);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
