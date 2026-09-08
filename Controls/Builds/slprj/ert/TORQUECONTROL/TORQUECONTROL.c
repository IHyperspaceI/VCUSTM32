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
 * C/C++ source code generated on : Tue Sep  8 11:44:52 2026
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
#include "StateEstimation.h"
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
void TORQUECONTROL(const real_T *rtu_Global_InverterSignals_Inve, const real_T
                   *rtu_Global_InverterSignals_In_g, const real_T
                   *rtu_Global_InverterSignals_In_c, const real_T
                   *rtu_Global_InverterSignals_In_e, const real_T
                   *rtu_Global_InverterSignals_In_n, const real_T
                   *rtu_Global_WheelSpeeds_vWheelRL, const real_T
                   *rtu_Global_WheelSpeeds_vWheelRR, const real_T
                   *rtu_Global_WheelSpeeds_vWheelFL, const real_T
                   *rtu_Global_WheelSpeeds_vWheelFR, const real_T
                   *rtu_Global_GPSIMUSignals_vLater, const real_T
                   *rtu_Global_GPSIMUSignals_gLater, const real_T
                   *rtu_Global_GPSIMUSignals_gLongi, const real_T
                   *rtu_Global_GPSIMUSignals_nYawRa, const real_T
                   *rtu_Global_BMSSignals_IIVTS, const real_T
                   *rtu_Global_Systems_rThrottlePed, const real_T
                   *rtu_Global_Systems_pBrakeMax, const real_T
                   *rtu_Global_Systems_rSteeringAng, const real_T
                   *rtu_Global_Systems_aSteeringAng, const real_T
                   *rtu_Global_Systems_rRegenPaddle, const real_T
                   *rtu_Global_Systems_vChassis, const real_T
                   *rtu_Global_Systems_sChassis, const boolean_T
                   *rtu_Global_Systems_BTVOn, const boolean_T
                   *rtu_Global_Systems_BTCOn, const boolean_T
                   *rtu_Global_Systems_BEMSOn, const boolean_T
                   *rtu_Global_Systems_BSpinningMod, const real_T
                   *rtu_Global_Systems_NThrottleMap, const real_T
                   *rtu_Global_Systems_PDischargeMa, const real_T
                   *rtu_Global_Systems_rTorqueSplit, const real_T
                   *rtu_Global_Systems_PRegenMax, const real_T
                   *rtu_Global_Systems_rTVMultiplie, const real_T
                   *rtu_Global_Systems_PEngineBraki, const real_T
                   *rtu_Global_Systems_rEngineBraki, const real_T
                   *rtu_Global_Systems_rGrip, const real_T
                   *rtu_Global_Systems_EOffset, const real_T
                   *rtu_Global_Systems_NTCKdSelecto, const real_T
                   *rtu_Global_Systems_MRegenMax, const real_T
                   *rtu_Global_Systems_NPCKpSelecto, const real_T
                   *rtu_Global_Systems_PActual, const real_T
                   *rtu_Global_Systems_rSOE, const real_T
                   *rtu_Global_Systems_MMotorMaxFL, const real_T
                   *rtu_Global_Systems_MMotorMaxFR, const real_T
                   *rtu_Global_Systems_MMotorMaxRL, const real_T
                   *rtu_Global_Systems_MMotorMaxRR, const boolean_T
                   *rtu_Global_Stateflow_BReadyToDr, const boolean_T
                   *rtu_Global_Limitations_BDischar, const real_T
                   *rtu_Global_Limitations_PTSTempe, const real_T
                   *rtu_Global_Limitations_PTSTem_n, const real_T
                   *rtu_Global_Limitations_PTSTem_f, const real_T
                   *rtu_Global_Limitations_PTSTem_d, const real_T
                   *rtu_Global_Limitations_rSpeedRe, const real_T
                   *rtu_Global_Limitations_rSpeed_h, const real_T
                   *rtu_Global_Limitations_rSpee_hz, const real_T
                   *rtu_Global_Limitations_rSpee_h2, const real_T
                   *rtu_Global_Limitations_PDischar, const real_T
                   *rtu_Global_Limitations_PRegenDe, real_T
                   *rty_TorqueControl_MDriverDischa, real_T
                   *rty_TorqueControl_PRegenRequest, real_T
                   *rty_TorqueControl_MDriverRegenR, real_T
                   *rty_TorqueControl_PDischargeLim, real_T
                   *rty_TorqueControl_PPCIntegralTe, real_T
                   *rty_TorqueControl_PPCProportion, real_T
                   *rty_TorqueControl_MPCDischargeR, real_T
                   *rty_TorqueControl_PRegenLimit, real_T
                   *rty_TorqueControl_PPCIntegral_k, real_T
                   *rty_TorqueControl_PPCProporti_k, real_T
                   *rty_TorqueControl_MPCRegenReque, real_T
                   *rty_TorqueControl_PPCDischargeR, real_T
                   *rty_TorqueControl_PPCRegenReque, real_T
                   *rty_TorqueControl_MDischargeLim, real_T
                   *rty_TorqueControl_MRegenLimited, real_T
                   *rty_TorqueControl_MTotalRequest, boolean_T
                   *rty_TorqueControl_BEMSDriverSig, boolean_T
                   *rty_TorqueControl_BEMSDriverS_d, boolean_T
                   *rty_TorqueControl_BEMSDriverS_g, real_T
                   *rty_TorqueControl_NLap, real_T
                   *rty_TorqueControl_NSectorGlobal, real_T
                   *rty_TorqueControl_NSectorLap, real_T
                   *rty_TorqueControl_ESector, real_T
                   *rty_TorqueControl_ERemaining, real_T
                   *rty_TorqueControl_EBudget, real_T *rty_TorqueControl_sSector,
                   real_T *rty_TorqueControl_rSlipRatioFLA, real_T
                   *rty_TorqueControl_rSlipRatioFRA, real_T
                   *rty_TorqueControl_rSlipRatioRLA, real_T
                   *rty_TorqueControl_rSlipRatioRRA, real_T
                   *rty_TorqueControl_FLongitudinal, real_T
                   *rty_TorqueControl_FTyreVertical, real_T
                   *rty_TorqueControl_FTyreVertic_k, real_T
                   *rty_TorqueControl_FTyreVertic_h, real_T
                   *rty_TorqueControl_FTyreVertic_b, real_T
                   *rty_TorqueControl_aSlipAngleFL, real_T
                   *rty_TorqueControl_aSlipAngleFR, real_T
                   *rty_TorqueControl_aSlipAngleRL, real_T
                   *rty_TorqueControl_aSlipAngleRR, real_T
                   *rty_TorqueControl_aCamberFL, real_T
                   *rty_TorqueControl_aCamberFR, real_T
                   *rty_TorqueControl_aCamberRL, real_T
                   *rty_TorqueControl_aCamberRR, real_T
                   *rty_TorqueControl_FTotalLateral, real_T
                   *rty_TorqueControl_FLateralLoadT, real_T
                   *rty_TorqueControl_FLateralLoa_e, real_T
                   *rty_TorqueControl_FTotalDownfor, real_T
                   *rty_TorqueControl_FDownforceF, real_T
                   *rty_TorqueControl_FDownforceR, real_T
                   *rty_TorqueControl_aCamberGainSt, real_T
                   *rty_TorqueControl_aCamberGain_d, real_T
                   *rty_TorqueControl_xHeaveTravelF, real_T
                   *rty_TorqueControl_xHeaveTravelR, real_T
                   *rty_TorqueControl_aCamberGainHe, real_T
                   *rty_TorqueControl_aCamberGain_h, real_T
                   *rty_TorqueControl_aRollAngle, real_T
                   *rty_TorqueControl_nYawRateError, boolean_T
                   *rty_TorqueControl_BTVOK, real_T
                   *rty_TorqueControl_MTorqueVector, real_T
                   *rty_TorqueControl_MTorqueVect_i, real_T
                   *rty_TorqueControl_MTorqueVect_d, real_T
                   *rty_TorqueControl_MTorqueVect_a, real_T
                   *rty_TorqueControl_rSplitRear, real_T
                   *rty_TorqueControl_MTorqueDistri, real_T
                   *rty_TorqueControl_MTorqueDist_d, real_T
                   *rty_TorqueControl_MTorqueDist_j, real_T
                   *rty_TorqueControl_MTorqueDist_l, real_T
                   *rty_TorqueControl_rSlipRatioOpt, real_T
                   *rty_TorqueControl_NTractionCont, real_T
                   *rty_TorqueControl_NTractionCo_h, real_T
                   *rty_TorqueControl_NTractionC_hc, real_T
                   *rty_TorqueControl_NTractionC_hl, real_T
                   *rty_TorqueControl_NABSMultiplie, real_T
                   *rty_TorqueControl_NABSMultipl_h, real_T
                   *rty_TorqueControl_NABSMultipl_b, real_T
                   *rty_TorqueControl_NABSMultipl_a, real_T
                   *rty_TorqueControl_NSector1Remai, real_T
                   *rty_TorqueControl_NSector2Remai, real_T
                   *rty_TorqueControl_NSector3Remai, real_T
                   *rty_TorqueControl_NSector4Remai, real_T
                   *rty_TorqueControl_NSector5Remai, real_T
                   *rty_TorqueControl_NSector6Remai, real_T
                   *rty_TorqueControl_NSector7Remai, real_T
                   *rty_TorqueControl_NSector8Remai, real_T
                   *rty_TorqueControl_NSector9Remai, real_T
                   *rty_TorqueControl_NSector10Rema, real_T
                   *rty_TorqueControl_NSector11Rema, real_T
                   *rty_TorqueControl_NSector12Rema, real_T
                   *rty_TorqueControl_ETotalRequest, real_T
                   *rty_TorqueControl_ESector1Remai, real_T
                   *rty_TorqueControl_ESector2Remai, real_T
                   *rty_TorqueControl_ESector3Remai, real_T
                   *rty_TorqueControl_MTractionCont, real_T
                   *rty_TorqueControl_MTractionCo_e, real_T
                   *rty_TorqueControl_MTractionCo_l, real_T
                   *rty_TorqueControl_MTractionC_l2, real_T
                   *rty_TorqueControl_ESector4Remai, real_T
                   *rty_TorqueControl_ESector5Remai, real_T
                   *rty_TorqueControl_ESector6Remai, real_T
                   *rty_TorqueControl_ESector7Remai, real_T
                   *rty_TorqueControl_ESector8Remai, real_T
                   *rty_TorqueControl_ESector9Remai, real_T
                   *rty_TorqueControl_ESector10Rema, real_T
                   *rty_TorqueControl_ESector11Rema, real_T
                   *rty_TorqueControl_ESector12Rema, real_T
                   *rty_TorqueControl_MFLFinal, real_T
                   *rty_TorqueControl_MFRFinal, real_T
                   *rty_TorqueControl_MRLFinal, real_T
                   *rty_TorqueControl_MRRFinal, real_T
                   *rty_TorqueControl_MTotalFinal, real_T
                   *rty_TorqueControl_PDischargeL_k, DW_TORQUECONTROL_f_T
                   *localDW)
{
  /* local block i/o variables */
  real_T rtb_Model8_o6;
  real_T rtb_Model8_o7;
  real_T rtb_Model8_o8;
  real_T rtb_Model8_o9;
  real_T rtb_Model8_o10;
  real_T rtb_Model8_o11;
  real_T rtb_Model8_o12;
  real_T rtb_Model8_o13;
  real_T rtb_Model8_o18;
  real_T rtb_Model8_o19;
  real_T rtb_Model8_o20;
  real_T rtb_Model8_o21;
  real_T rtb_Model8_o22;
  real_T rtb_Model8_o23;
  real_T rtb_Model8_o24;
  real_T rtb_Model8_o25;
  real_T rtb_Model9_o1;
  real_T rtb_Model9_o2;
  real_T rtb_Model9_o3;
  real_T rtb_Model9_o4;
  real_T rtb_Model8_o30;
  real_T rtb_Model8_o31;
  real_T rtb_Model8_o32;
  real_T rtb_Model8_o33;

  /* ModelReference: '<S1>/Model' */
  MDriverRegenRequested(rtu_Global_Systems_MRegenMax,
                        rtu_Global_Systems_rRegenPaddle,
                        rtu_Global_Systems_vChassis,
                        rtu_Global_Systems_PRegenMax,
                        rtu_Global_InverterSignals_In_g,
                        rtu_Global_BMSSignals_IIVTS,
                        rtu_Global_Limitations_PRegenDe,
                        rty_TorqueControl_PRegenRequest,
                        rty_TorqueControl_MDriverRegenR,
                        &(localDW->Model_InstanceData.rtb),
                        &(localDW->Model_InstanceData.rtdw));

  /* ModelReference: '<S1>/Model1' */
  StateEstimation(rtu_Global_Systems_vChassis, rtu_Global_WheelSpeeds_vWheelFL,
                  rtu_Global_WheelSpeeds_vWheelFR,
                  rtu_Global_WheelSpeeds_vWheelRL,
                  rtu_Global_WheelSpeeds_vWheelRR,
                  rtu_Global_GPSIMUSignals_gLater,
                  rtu_Global_GPSIMUSignals_gLongi,
                  rtu_Global_GPSIMUSignals_vLater,
                  rtu_Global_GPSIMUSignals_nYawRa,
                  rtu_Global_Systems_aSteeringAng,
                  rty_TorqueControl_rSlipRatioFLA,
                  rty_TorqueControl_rSlipRatioFRA,
                  rty_TorqueControl_rSlipRatioRLA,
                  rty_TorqueControl_rSlipRatioRRA,
                  rty_TorqueControl_FLongitudinal,
                  rty_TorqueControl_FTyreVertical,
                  rty_TorqueControl_FTyreVertic_k,
                  rty_TorqueControl_FTyreVertic_h,
                  rty_TorqueControl_FTyreVertic_b,
                  rty_TorqueControl_aSlipAngleFL, rty_TorqueControl_aSlipAngleFR,
                  rty_TorqueControl_aSlipAngleRL, rty_TorqueControl_aSlipAngleRR,
                  rty_TorqueControl_aCamberFL, rty_TorqueControl_aCamberFR,
                  rty_TorqueControl_aCamberRL, rty_TorqueControl_aCamberRR,
                  rty_TorqueControl_FTotalLateral,
                  rty_TorqueControl_FLateralLoadT,
                  rty_TorqueControl_FLateralLoa_e,
                  rty_TorqueControl_FTotalDownfor, rty_TorqueControl_FDownforceF,
                  rty_TorqueControl_FDownforceR, rty_TorqueControl_aCamberGainSt,
                  rty_TorqueControl_aCamberGain_d,
                  rty_TorqueControl_xHeaveTravelF,
                  rty_TorqueControl_xHeaveTravelR,
                  rty_TorqueControl_aCamberGainHe,
                  rty_TorqueControl_aCamberGain_h, rty_TorqueControl_aRollAngle);

  /* ModelReference: '<S1>/Model9' */
  SpinningMode(rtu_Global_Systems_rThrottlePed, rtu_Global_Systems_BSpinningMod,
               rtu_Global_Stateflow_BReadyToDr, rtu_Global_Systems_pBrakeMax,
               rtu_Global_InverterSignals_Inve, rtu_Global_InverterSignals_In_c,
               rtu_Global_InverterSignals_In_n, rtu_Global_InverterSignals_In_e,
               &rtb_Model9_o1, &rtb_Model9_o2, &rtb_Model9_o3, &rtb_Model9_o4,
               &(localDW->Model9_InstanceData.rtdw));

  /* ModelReference: '<S1>/Model2' */
  MDriverDischargeRequested(rtu_Global_Systems_NThrottleMap,
    rtu_Global_Systems_vChassis, rtu_Global_Systems_rThrottlePed,
    rty_TorqueControl_MDriverDischa);

  /* ModelReference: '<S1>/Model3' */
  PowerController(rtu_Global_Systems_vChassis, rtu_Global_Systems_NPCKpSelecto,
                  rtu_Global_Systems_PDischargeMa,
                  rty_TorqueControl_MDriverDischa, rtu_Global_Systems_PRegenMax,
                  rtu_Global_Limitations_PDischar,
                  rtu_Global_Limitations_PRegenDe, rtu_Global_Systems_PActual,
                  rtu_Global_Systems_rThrottlePed,
                  rtu_Global_Systems_rRegenPaddle,
                  rty_TorqueControl_PRegenRequest,
                  rtu_Global_Limitations_BDischar,
                  rty_TorqueControl_PDischargeLim,
                  rty_TorqueControl_PPCIntegralTe,
                  rty_TorqueControl_PPCProportion,
                  rty_TorqueControl_MPCDischargeR, rty_TorqueControl_PRegenLimit,
                  rty_TorqueControl_PPCIntegral_k,
                  rty_TorqueControl_PPCProporti_k,
                  rty_TorqueControl_MPCRegenReque,
                  rty_TorqueControl_PPCDischargeR,
                  rty_TorqueControl_PPCRegenReque,
                  rty_TorqueControl_PDischargeL_k,
                  &(localDW->Model3_InstanceData.rtdw));

  /* ModelReference: '<S1>/Model4' */
  MTotalRequested(rty_TorqueControl_PDischargeL_k, rtu_Global_Systems_vChassis,
                  rty_TorqueControl_PRegenRequest, rtu_Global_Systems_PActual,
                  rty_TorqueControl_PDischargeLim,
                  rtu_Global_Systems_rThrottlePed,
                  rty_TorqueControl_MPCDischargeR,
                  rtu_Global_Systems_rRegenPaddle,
                  rty_TorqueControl_MPCRegenReque, rty_TorqueControl_PRegenLimit,
                  rtu_Global_Limitations_BDischar,
                  rty_TorqueControl_MDriverDischa,
                  rty_TorqueControl_MDischargeLim,
                  rty_TorqueControl_MRegenLimited,
                  rty_TorqueControl_MTotalRequest);

  /* ModelReference: '<S1>/Model6' */
  TorqueVectoring(rtu_Global_GPSIMUSignals_gLongi,
                  rtu_Global_Systems_aSteeringAng, rtu_Global_Systems_vChassis,
                  rtu_Global_Systems_pBrakeMax, rtu_Global_Systems_rThrottlePed,
                  rtu_Global_Systems_BTVOn, rty_TorqueControl_MTotalRequest,
                  rtu_Global_Systems_rTVMultiplie,
                  rtu_Global_GPSIMUSignals_nYawRa,
                  rty_TorqueControl_FLongitudinal,
                  rtu_Global_Systems_MMotorMaxFL, rtu_Global_Systems_MMotorMaxFR,
                  rtu_Global_Systems_MMotorMaxRL, rtu_Global_Systems_MMotorMaxRR,
                  rty_TorqueControl_nYawRateError, rty_TorqueControl_BTVOK,
                  rty_TorqueControl_MTorqueVector,
                  rty_TorqueControl_MTorqueVect_i,
                  rty_TorqueControl_MTorqueVect_d,
                  rty_TorqueControl_MTorqueVect_a,
                  &(localDW->Model6_InstanceData.rtdw));

  /* ModelReference: '<S1>/Model7' */
  TorqueDistribution(rty_TorqueControl_MTotalRequest,
                     rtu_Global_Systems_vChassis,
                     rtu_Global_Systems_rThrottlePed,
                     rtu_Global_Systems_rRegenPaddle,
                     rtu_Global_Systems_PEngineBraki,
                     rty_TorqueControl_MTorqueVector,
                     rty_TorqueControl_MTorqueVect_i,
                     rty_TorqueControl_MTorqueVect_d,
                     rty_TorqueControl_MTorqueVect_a, rtu_Global_Systems_BTVOn,
                     rtu_Global_Systems_rEngineBraki,
                     rtu_Global_Systems_rTorqueSplit,
                     rty_TorqueControl_PRegenLimit,
                     rty_TorqueControl_PDischargeLim,
                     rtu_Global_Limitations_PTSTem_n,
                     rtu_Global_Limitations_PTSTempe,
                     rtu_Global_Limitations_PTSTem_d,
                     rtu_Global_Limitations_PTSTem_f,
                     rtu_Global_Systems_MMotorMaxFR,
                     rtu_Global_Systems_MMotorMaxFL,
                     rtu_Global_Systems_MMotorMaxRR,
                     rtu_Global_Systems_MMotorMaxRL,
                     rty_TorqueControl_rSplitRear,
                     rty_TorqueControl_MTorqueDistri,
                     rty_TorqueControl_MTorqueDist_d,
                     rty_TorqueControl_MTorqueDist_j,
                     rty_TorqueControl_MTorqueDist_l);

  /* ModelReference: '<S1>/Model8' */
  TractionControl(rtu_Global_Systems_rSteeringAng,
                  rty_TorqueControl_MTotalRequest, rtu_Global_Systems_rGrip,
                  rty_TorqueControl_MTorqueDistri,
                  rty_TorqueControl_MTorqueDist_d,
                  rty_TorqueControl_MTorqueDist_j,
                  rty_TorqueControl_MTorqueDist_l, rtu_Global_Systems_BTCOn,
                  rtu_Global_Systems_vChassis, rty_TorqueControl_rSlipRatioFLA,
                  rty_TorqueControl_rSlipRatioFRA,
                  rty_TorqueControl_rSlipRatioRLA,
                  rty_TorqueControl_rSlipRatioRRA,
                  rtu_Global_Systems_NTCKdSelecto,
                  rty_TorqueControl_rSlipRatioOpt,
                  rty_TorqueControl_NTractionCont,
                  rty_TorqueControl_NTractionCo_h,
                  rty_TorqueControl_NTractionC_hc,
                  rty_TorqueControl_NTractionC_hl, &rtb_Model8_o6,
                  &rtb_Model8_o7, &rtb_Model8_o8, &rtb_Model8_o9,
                  &rtb_Model8_o10, &rtb_Model8_o11, &rtb_Model8_o12,
                  &rtb_Model8_o13, rty_TorqueControl_NABSMultiplie,
                  rty_TorqueControl_NABSMultipl_h,
                  rty_TorqueControl_NABSMultipl_b,
                  rty_TorqueControl_NABSMultipl_a, &rtb_Model8_o18,
                  &rtb_Model8_o19, &rtb_Model8_o20, &rtb_Model8_o21,
                  &rtb_Model8_o22, &rtb_Model8_o23, &rtb_Model8_o24,
                  &rtb_Model8_o25, rty_TorqueControl_MTractionCont,
                  rty_TorqueControl_MTractionCo_e,
                  rty_TorqueControl_MTractionCo_l,
                  rty_TorqueControl_MTractionC_l2, &rtb_Model8_o30,
                  &rtb_Model8_o31, &rtb_Model8_o32, &rtb_Model8_o33,
                  &(localDW->Model8_InstanceData.rtdw));

  /* ModelReference: '<S1>/Model10' */
  MFinal(&rtb_Model9_o1, rtu_Global_Systems_BSpinningMod, &rtb_Model8_o30,
         rtu_Global_Limitations_rSpee_h2, &rtb_Model9_o2, &rtb_Model8_o31,
         rtu_Global_Limitations_rSpee_hz, &rtb_Model9_o3, &rtb_Model8_o32,
         rtu_Global_Limitations_rSpeed_h, &rtb_Model9_o4, &rtb_Model8_o33,
         rtu_Global_Limitations_rSpeedRe, rty_TorqueControl_MFLFinal,
         rty_TorqueControl_MFRFinal, rty_TorqueControl_MRLFinal,
         rty_TorqueControl_MRRFinal, rty_TorqueControl_MTotalFinal);

  /* ModelReference: '<S1>/Model5' */
  EMS(rtu_Global_Systems_rThrottlePed, rtu_Global_Systems_pBrakeMax,
      rtu_Global_Systems_PActual, rtu_Global_Systems_BEMSOn,
      rtu_Global_Systems_rRegenPaddle, rtu_Global_Systems_sChassis,
      rtu_Global_Systems_EOffset, rtu_Global_Systems_rSOE,
      rty_TorqueControl_BEMSDriverSig, rty_TorqueControl_BEMSDriverS_d,
      rty_TorqueControl_BEMSDriverS_g, rty_TorqueControl_NLap,
      rty_TorqueControl_NSectorGlobal, rty_TorqueControl_NSectorLap,
      rty_TorqueControl_ESector, rty_TorqueControl_ERemaining,
      rty_TorqueControl_EBudget, rty_TorqueControl_sSector,
      rty_TorqueControl_NSector1Remai, rty_TorqueControl_NSector2Remai,
      rty_TorqueControl_NSector3Remai, rty_TorqueControl_NSector4Remai,
      rty_TorqueControl_NSector5Remai, rty_TorqueControl_NSector6Remai,
      rty_TorqueControl_NSector7Remai, rty_TorqueControl_NSector8Remai,
      rty_TorqueControl_NSector9Remai, rty_TorqueControl_NSector10Rema,
      rty_TorqueControl_NSector11Rema, rty_TorqueControl_NSector12Rema,
      rty_TorqueControl_ETotalRequest, rty_TorqueControl_ESector1Remai,
      rty_TorqueControl_ESector2Remai, rty_TorqueControl_ESector3Remai,
      rty_TorqueControl_ESector4Remai, rty_TorqueControl_ESector5Remai,
      rty_TorqueControl_ESector6Remai, rty_TorqueControl_ESector7Remai,
      rty_TorqueControl_ESector8Remai, rty_TorqueControl_ESector9Remai,
      rty_TorqueControl_ESector10Rema, rty_TorqueControl_ESector11Rema,
      rty_TorqueControl_ESector12Rema, &(localDW->Model5_InstanceData.rtb),
      &(localDW->Model5_InstanceData.rtdw));
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
  StateEstimation_initialize(rtmGetErrorStatusPointer(TORQUECONTROL_M),
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
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
