/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: ENV.c
 *
 * Code generated for Simulink model 'ENV'.
 *
 * Model version                  : 13.10
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Wed Jun  3 15:30:58 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ENV.h"

/* External inputs (root inport signals with default storage) */
ExtU_ENV_T ENV_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_ENV_T ENV_Y;

/* Real-time model */
static RT_MODEL_ENV_T ENV_M_;
RT_MODEL_ENV_T *const ENV_M = &ENV_M_;

/* Model step function */
void ENV_step(void)
{
  /* (no output/update code required) */
}

/* Model initialize function */
void ENV_initialize(void)
{
  /* ConstCode for Outport: '<Root>/BInvDCOnRL' */
  ENV_Y.BInvDCOnRL = 0.0;

  /* ConstCode for Outport: '<Root>/BInvEnableRL' */
  ENV_Y.BInvEnableRL = 0.0;

  /* ConstCode for Outport: '<Root>/BInvErrorResetRL' */
  ENV_Y.BInvErrorResetRL = 0.0;

  /* ConstCode for Outport: '<Root>/BInvOnRL' */
  ENV_Y.BInvOnRL = 0.0;

  /* ConstCode for Outport: '<Root>/MTorqueLimitNegativeRL' */
  ENV_Y.MTorqueLimitNegativeRL = 0.0;

  /* ConstCode for Outport: '<Root>/MTorqueLimitPositiveRL' */
  ENV_Y.MTorqueLimitPositiveRL = 0.0;

  /* ConstCode for Outport: '<Root>/MInvRLFinal' */
  ENV_Y.MInvRLFinal = 0.0;

  /* ConstCode for Outport: '<Root>/BInvDCOnFL' */
  ENV_Y.BInvDCOnFL = 0.0;

  /* ConstCode for Outport: '<Root>/BInvEnableFL' */
  ENV_Y.BInvEnableFL = 0.0;

  /* ConstCode for Outport: '<Root>/BInvErrorResetFL' */
  ENV_Y.BInvErrorResetFL = 0.0;

  /* ConstCode for Outport: '<Root>/BInvOnFL' */
  ENV_Y.BInvOnFL = 0.0;

  /* ConstCode for Outport: '<Root>/MTorqueLimitNegativeFL' */
  ENV_Y.MTorqueLimitNegativeFL = 0.0;

  /* ConstCode for Outport: '<Root>/MTorqueLimitPositiveFL' */
  ENV_Y.MTorqueLimitPositiveFL = 0.0;

  /* ConstCode for Outport: '<Root>/MInvFLFinal' */
  ENV_Y.MInvFLFinal = 0.0;

  /* ConstCode for Outport: '<Root>/BInvDCOnRR' */
  ENV_Y.BInvDCOnRR = 0.0;

  /* ConstCode for Outport: '<Root>/BInvEnableRR' */
  ENV_Y.BInvEnableRR = 0.0;

  /* ConstCode for Outport: '<Root>/BInvErrorResetRR' */
  ENV_Y.BInvErrorResetRR = 0.0;

  /* ConstCode for Outport: '<Root>/BInvOnRR' */
  ENV_Y.BInvOnRR = 0.0;

  /* ConstCode for Outport: '<Root>/MTorqueLimitNegativeRR' */
  ENV_Y.MTorqueLimitNegativeRR = 0.0;

  /* ConstCode for Outport: '<Root>/MTorqueLimitPositiveRR' */
  ENV_Y.MTorqueLimitPositiveRR = 0.0;

  /* ConstCode for Outport: '<Root>/MInvRRFinal' */
  ENV_Y.MInvRRFinal = 0.0;

  /* ConstCode for Outport: '<Root>/BInvDCOnFR ' */
  ENV_Y.BInvDCOnFR = 0.0;

  /* ConstCode for Outport: '<Root>/BInvEnableFR' */
  ENV_Y.BInvEnableFR = 0.0;

  /* ConstCode for Outport: '<Root>/BInvErrorResetFR' */
  ENV_Y.BInvErrorResetFR = 0.0;

  /* ConstCode for Outport: '<Root>/BInvOnFR ' */
  ENV_Y.BInvOnFR = 0.0;

  /* ConstCode for Outport: '<Root>/MTorqueLimitNegativeFR' */
  ENV_Y.MTorqueLimitNegativeFR = 0.0;

  /* ConstCode for Outport: '<Root>/MTorqueLimitPositiveFR' */
  ENV_Y.MTorqueLimitPositiveFR = 0.0;

  /* ConstCode for Outport: '<Root>/MInvFRFinal' */
  ENV_Y.MInvFRFinal = 0.0;

  /* ConstCode for Outport: '<Root>/PPowerControllerProportionalTerm' */
  ENV_Y.PPowerControllerProportionalTerm = 0.0;

  /* ConstCode for Outport: '<Root>/MTotalFinal' */
  ENV_Y.MTotalFinal = 0.0;

  /* ConstCode for Outport: '<Root>/PActual' */
  ENV_Y.PActual = 0.0;

  /* ConstCode for Outport: '<Root>/vChassis' */
  ENV_Y.vChassis = 0.0;

  /* ConstCode for Outport: '<Root>/PPowerControllerIntegralTerm' */
  ENV_Y.PPowerControllerIntegralTerm = 0.0;

  /* ConstCode for Outport: '<Root>/BSpinningModelActivated' */
  ENV_Y.BSpinningModelActivated = 0.0;

  /* ConstCode for Outport: '<Root>/BTorqueVectoringOK' */
  ENV_Y.BTorqueVectoringOK = 0.0;

  /* ConstCode for Outport: '<Root>/BEncoderErrorRear' */
  ENV_Y.BEncoderErrorRear = 0.0;

  /* ConstCode for Outport: '<Root>/BEncoderErrorFront' */
  ENV_Y.BEncoderErrorFront = 0.0;

  /* ConstCode for Outport: '<Root>/BBMSP0A80 ' */
  ENV_Y.BBMSP0A80 = 0.0;

  /* ConstCode for Outport: '<Root>/BBMSP0AC0 ' */
  ENV_Y.BBMSP0AC0 = 0.0;

  /* ConstCode for Outport: '<Root>/BBMSP0AFA ' */
  ENV_Y.BBMSP0AFA = 0.0;

  /* ConstCode for Outport: '<Root>/rHighCellTemperatureDischargeDerate' */
  ENV_Y.rHighCellTemperatureDischargeDerate = 0.0;

  /* ConstCode for Outport: '<Root>/rHighCellTemperatureRegenDerate' */
  ENV_Y.rHighCellTemperatureRegenDerate = 0.0;

  /* ConstCode for Outport: '<Root>/rInvTemperatureDerate' */
  ENV_Y.rInvTemperatureDerate = 0.0;

  /* ConstCode for Outport: '<Root>/rMotorTemperatureDerate' */
  ENV_Y.rMotorTemperatureDerate = 0.0;

  /* ConstCode for Outport: '<Root>/rLowCellVoltageDischargeDerate' */
  ENV_Y.rLowCellVoltageDischargeDerate = 0.0;

  /* ConstCode for Outport: '<Root>/rSOCDischargeDerate' */
  ENV_Y.rSOCDischargeDerate = 0.0;

  /* ConstCode for Outport: '<Root>/rSOCRegenDerate' */
  ENV_Y.rSOCRegenDerate = 0.0;

  /* ConstCode for Outport: '<Root>/rSpeedRegenDerate' */
  ENV_Y.rSpeedRegenDerate = 0.0;

  /* ConstCode for Outport: '<Root>/rDischargeDerate' */
  ENV_Y.rDischargeDerate = 0.0;

  /* ConstCode for Outport: '<Root>/rRegenDerate' */
  ENV_Y.rRegenDerate = 0.0;

  /* ConstCode for Outport: '<Root>/PDischarge' */
  ENV_Y.PDischarge = 0.0;

  /* ConstCode for Outport: '<Root>/rSOCTargetError' */
  ENV_Y.rSOCTargetError = 0.0;

  /* ConstCode for Outport: '<Root>/sEMS1000m' */
  ENV_Y.sEMS1000m = 0.0;

  /* ConstCode for Outport: '<Root>/rSOETargetError' */
  ENV_Y.rSOETargetError = 0.0;

  /* ConstCode for Outport: '<Root>/vWheelRL' */
  ENV_Y.vWheelRL = 0.0;

  /* ConstCode for Outport: '<Root>/vWheelRR' */
  ENV_Y.vWheelRR = 0.0;

  /* ConstCode for Outport: '<Root>/vWheelFL' */
  ENV_Y.vWheelFL = 0.0;

  /* ConstCode for Outport: '<Root>/vWheelFR' */
  ENV_Y.vWheelFR = 0.0;

  /* ConstCode for Outport: '<Root>/PPowerControllerRequested' */
  ENV_Y.PPowerControllerRequested = 0.0;

  /* ConstCode for Outport: '<Root>/MPowerControllerRequested' */
  ENV_Y.MPowerControllerRequested = 0.0;

  /* ConstCode for Outport: '<Root>/rThrottlePedal' */
  ENV_Y.rThrottlePedal = 0.0;

  /* ConstCode for Outport: '<Root>/BThrottleError' */
  ENV_Y.BThrottleError = 0.0;

  /* ConstCode for Outport: '<Root>/tThrottleError' */
  ENV_Y.tThrottleError = 0.0;

  /* ConstCode for Outport: '<Root>/BBrakeError' */
  ENV_Y.BBrakeError = 0.0;

  /* ConstCode for Outport: '<Root>/tBrakeError' */
  ENV_Y.tBrakeError = 0.0;

  /* ConstCode for Outport: '<Root>/BBrakeOn' */
  ENV_Y.BBrakeOn = 0.0;

  /* ConstCode for Outport: '<Root>/BPedalOverlap' */
  ENV_Y.BPedalOverlap = 0.0;

  /* ConstCode for Outport: '<Root>/BAppsOK' */
  ENV_Y.BAppsOK = 0.0;

  /* ConstCode for Outport: '<Root>/BRegenOn' */
  ENV_Y.BRegenOn = 0.0;

  /* ConstCode for Outport: '<Root>/BTorqueVectoringActivated' */
  ENV_Y.BTorqueVectoringActivated = 0.0;

  /* ConstCode for Outport: '<Root>/rSOE' */
  ENV_Y.rSOE = 0.0;

  /* ConstCode for Outport: '<Root>/sChassis' */
  ENV_Y.sChassis = 0.0;

  /* ConstCode for Outport: '<Root>/rSOC' */
  ENV_Y.rSOC = 0.0;

  /* ConstCode for Outport: '<Root>/PRegen' */
  ENV_Y.PRegen = 0.0;

  /* ConstCode for Outport: '<Root>/rTorqueVectoringMultiplier' */
  ENV_Y.rTorqueVectoringMultiplier = 0.0;

  /* ConstCode for Outport: '<Root>/NModelNumberDisplay5' */
  ENV_Y.NModelNumberDisplay5 = 0.0;

  /* ConstCode for Outport: '<Root>/PEngineBraking' */
  ENV_Y.PEngineBraking = 0.0;

  /* ConstCode for Outport: '<Root>/NModelNumberDisplay6' */
  ENV_Y.NModelNumberDisplay6 = 0.0;

  /* ConstCode for Outport: '<Root>/NPowerControllerKpSelector' */
  ENV_Y.NPowerControllerKpSelector = 0.0;

  /* ConstCode for Outport: '<Root>/NTorqueSplitSpeedSelector' */
  ENV_Y.NTorqueSplitSpeedSelector = 0.0;

  /* ConstCode for Outport: '<Root>/NBMSDLCOut' */
  ENV_Y.NBMSDLCOut = 0.0;

  /* ConstCode for Outport: '<Root>/NInvState' */
  ENV_Y.NInvState = 0.0;

  /* ConstCode for Outport: '<Root>/NBMSState' */
  ENV_Y.NBMSState = 0.0;

  /* ConstCode for Outport: '<Root>/rSlipRatioFLActual' */
  ENV_Y.rSlipRatioFLActual = 0.0;

  /* ConstCode for Outport: '<Root>/rSlipRatioFRActual' */
  ENV_Y.rSlipRatioFRActual = 0.0;

  /* ConstCode for Outport: '<Root>/rSlipRatioRLActual' */
  ENV_Y.rSlipRatioRLActual = 0.0;

  /* ConstCode for Outport: '<Root>/rSlipRatioRRActual' */
  ENV_Y.rSlipRatioRRActual = 0.0;

  /* ConstCode for Outport: '<Root>/NTractionControlMultiplierRR' */
  ENV_Y.NTractionControlMultiplierRR = 0.0;

  /* ConstCode for Outport: '<Root>/NABSMultiplierRR' */
  ENV_Y.NABSMultiplierRR = 0.0;

  /* ConstCode for Outport: '<Root>/NTractionControlMultiplierRL' */
  ENV_Y.NTractionControlMultiplierRL = 0.0;

  /* ConstCode for Outport: '<Root>/NABSMultiplierRL' */
  ENV_Y.NABSMultiplierRL = 0.0;

  /* ConstCode for Outport: '<Root>/NThrottleMap' */
  ENV_Y.NThrottleMap = 0.0;

  /* ConstCode for Outport: '<Root>/BReadyToDrive' */
  ENV_Y.BReadyToDrive = 0.0;

  /* ConstCode for Outport: '<Root>/MTractionControlFinalFR' */
  ENV_Y.MTractionControlFinalFR = 0.0;

  /* ConstCode for Outport: '<Root>/MTractionControlFinalRR' */
  ENV_Y.MTractionControlFinalRR = 0.0;

  /* ConstCode for Outport: '<Root>/MTractionControlFinalRL' */
  ENV_Y.MTractionControlFinalRL = 0.0;

  /* ConstCode for Outport: '<Root>/MTractionControlFinalFL' */
  ENV_Y.MTractionControlFinalFL = 0.0;

  /* ConstCode for Outport: '<Root>/NABSMultiplierFL' */
  ENV_Y.NABSMultiplierFL = 0.0;

  /* ConstCode for Outport: '<Root>/NABSMultiplierFR' */
  ENV_Y.NABSMultiplierFR = 0.0;

  /* ConstCode for Outport: '<Root>/BBalancingActiveOut' */
  ENV_Y.BBalancingActiveOut = 0.0;

  /* ConstCode for Outport: '<Root>/BBMSP0A0COut' */
  ENV_Y.BBMSP0A0COut = 0.0;

  /* ConstCode for Outport: '<Root>/MTVFinalFL' */
  ENV_Y.MTVFinalFL = 0.0;

  /* ConstCode for Outport: '<Root>/MTVFinalFR' */
  ENV_Y.MTVFinalFR = 0.0;

  /* ConstCode for Outport: '<Root>/MTVFinalRL' */
  ENV_Y.MTVFinalRL = 0.0;

  /* ConstCode for Outport: '<Root>/MTVFinalRR' */
  ENV_Y.MTVFinalRR = 0.0;

  /* ConstCode for Outport: '<Root>/NTractionControlMultiplierFL' */
  ENV_Y.NTractionControlMultiplierFL = 0.0;

  /* ConstCode for Outport: '<Root>/NTractionControlMultiplierFR ' */
  ENV_Y.NTractionControlMultiplierFR = 0.0;

  /* ConstCode for Outport: '<Root>/BBMSP0A0E ' */
  ENV_Y.BBMSP0A0E = 0.0;

  /* ConstCode for Outport: '<Root>/BBMSP0A10 ' */
  ENV_Y.BBMSP0A10 = 0.0;

  /* ConstCode for Outport: '<Root>/MDischargeLimited' */
  ENV_Y.MDischargeLimited = 0.0;

  /* ConstCode for Outport: '<Root>/MDriverRegenRequested' */
  ENV_Y.MDriverRegenRequested = 0.0;

  /* ConstCode for Outport: '<Root>/rSlipRatioOptimal' */
  ENV_Y.rSlipRatioOptimal = 0.0;

  /* ConstCode for Outport: '<Root>/MRegenLimited' */
  ENV_Y.MRegenLimited = 0.0;

  /* ConstCode for Outport: '<Root>/MSpinningModeFL' */
  ENV_Y.MSpinningModeFL = 0.0;

  /* ConstCode for Outport: '<Root>/MSpinningModeFR' */
  ENV_Y.MSpinningModeFR = 0.0;

  /* ConstCode for Outport: '<Root>/NCarState' */
  ENV_Y.NCarState = 0.0;

  /* ConstCode for Outport: '<Root>/MSpinningModelRL' */
  ENV_Y.MSpinningModelRL = 0.0;

  /* ConstCode for Outport: '<Root>/MSpinningModelRR' */
  ENV_Y.MSpinningModelRR = 0.0;

  /* ConstCode for Outport: '<Root>/MTorqueDistributionFinalFL' */
  ENV_Y.MTorqueDistributionFinalFL = 0.0;

  /* ConstCode for Outport: '<Root>/MTorqueDistributionFinalFR' */
  ENV_Y.MTorqueDistributionFinalFR = 0.0;

  /* ConstCode for Outport: '<Root>/MTorqueDistributionFinalRL' */
  ENV_Y.MTorqueDistributionFinalRL = 0.0;

  /* ConstCode for Outport: '<Root>/MTorqueDistributionFinalRR' */
  ENV_Y.MTorqueDistributionFinalRR = 0.0;

  /* ConstCode for Outport: '<Root>/VDamperPotentiometerFLOut' */
  ENV_Y.VDamperPotentiometerFLOut = 0.0;

  /* ConstCode for Outport: '<Root>/VDamperPotentiometerFROut' */
  ENV_Y.VDamperPotentiometerFROut = 0.0;

  /* ConstCode for Outport: '<Root>/rMotorTemperatureDerateFR' */
  ENV_Y.rMotorTemperatureDerateFR = 0.0;

  /* ConstCode for Outport: '<Root>/rMotorTemperatureDerateFL' */
  ENV_Y.rMotorTemperatureDerateFL = 0.0;

  /* ConstCode for Outport: '<Root>/rMotorTemperatureDerateRR' */
  ENV_Y.rMotorTemperatureDerateRR = 0.0;

  /* ConstCode for Outport: '<Root>/rMotorTemperatureDerateRL' */
  ENV_Y.rMotorTemperatureDerateRL = 0.0;

  /* ConstCode for Outport: '<Root>/rInvTemperatureDerateFR' */
  ENV_Y.rInvTemperatureDerateFR = 0.0;

  /* ConstCode for Outport: '<Root>/rInvTemperatureDerateFL' */
  ENV_Y.rInvTemperatureDerateFL = 0.0;

  /* ConstCode for Outport: '<Root>/rInvTemperatureDerateRR' */
  ENV_Y.rInvTemperatureDerateRR = 0.0;

  /* ConstCode for Outport: '<Root>/rInvTemperatureDerateRL' */
  ENV_Y.rInvTemperatureDerateRL = 0.0;

  /* ConstCode for Outport: '<Root>/MTotalEMSRequested' */
  ENV_Y.MTotalEMSRequested = 0.0;

  /* ConstCode for Outport: '<Root>/rThrottlePedal1' */
  ENV_Y.rThrottlePedal1 = 0.0;

  /* ConstCode for Outport: '<Root>/nMotorRL ' */
  ENV_Y.nMotorRL = 0.0;

  /* ConstCode for Outport: '<Root>/nMotorFL ' */
  ENV_Y.nMotorFL = 0.0;

  /* ConstCode for Outport: '<Root>/nMotorRR ' */
  ENV_Y.nMotorRR = 0.0;

  /* ConstCode for Outport: '<Root>/nMotorFR ' */
  ENV_Y.nMotorFR = 0.0;

  /* ConstCode for Outport: '<Root>/BDischargeAllowed' */
  ENV_Y.BDischargeAllowed = 0.0;

  /* ConstCode for Outport: '<Root>/TMotorRL ' */
  ENV_Y.TMotorRL = 0.0;

  /* ConstCode for Outport: '<Root>/TInvRL ' */
  ENV_Y.TInvRL = 0.0;

  /* ConstCode for Outport: '<Root>/TMotorFL ' */
  ENV_Y.TMotorFL = 0.0;

  /* ConstCode for Outport: '<Root>/TInvFL ' */
  ENV_Y.TInvFL = 0.0;

  /* ConstCode for Outport: '<Root>/TMotorRR ' */
  ENV_Y.TMotorRR = 0.0;

  /* ConstCode for Outport: '<Root>/TInvRR ' */
  ENV_Y.TInvRR = 0.0;

  /* ConstCode for Outport: '<Root>/TMotorFR ' */
  ENV_Y.TMotorFR = 0.0;

  /* ConstCode for Outport: '<Root>/TInvFR ' */
  ENV_Y.TInvFR = 0.0;

  /* ConstCode for Outport: '<Root>/TInvMax' */
  ENV_Y.TInvMax = 0.0;

  /* ConstCode for Outport: '<Root>/TMotorMax' */
  ENV_Y.TMotorMax = 0.0;

  /* ConstCode for Outport: '<Root>/NInvDTCRL ' */
  ENV_Y.NInvDTCRL = 0.0;

  /* ConstCode for Outport: '<Root>/NInvDTCFL ' */
  ENV_Y.NInvDTCFL = 0.0;

  /* ConstCode for Outport: '<Root>/NInvDTCRR ' */
  ENV_Y.NInvDTCRR = 0.0;

  /* ConstCode for Outport: '<Root>/NInvDTCFR ' */
  ENV_Y.NInvDTCFR = 0.0;

  /* ConstCode for Outport: '<Root>/TCellMax ' */
  ENV_Y.TCellMax = 0.0;

  /* ConstCode for Outport: '<Root>/VCellDelta' */
  ENV_Y.VCellDelta = 0.0;

  /* ConstCode for Outport: '<Root>/VDCAccumulator ' */
  ENV_Y.VDCAccumulator = 0.0;

  /* ConstCode for Outport: '<Root>/IBMSHallEffect ' */
  ENV_Y.IBMSHallEffect = 0.0;

  /* ConstCode for Outport: '<Root>/VDCInvRL ' */
  ENV_Y.VDCInvRL = 0.0;

  /* ConstCode for Outport: '<Root>/IIVTS ' */
  ENV_Y.IIVTS = 0.0;

  /* ConstCode for Outport: '<Root>/MTotalRequested' */
  ENV_Y.MTotalRequested = 0.0;

  /* ConstCode for Outport: '<Root>/BEMSActivated' */
  ENV_Y.BEMSActivated = 0.0;

  /* ConstCode for Outport: '<Root>/BTractionControlActivated' */
  ENV_Y.BTractionControlActivated = 0.0;

  /* ConstCode for Outport: '<Root>/BAccumulatorFanOn' */
  ENV_Y.BAccumulatorFanOn = 0.0;

  /* ConstCode for Outport: '<Root>/VCellMin ' */
  ENV_Y.VCellMin = 0.0;

  /* ConstCode for Outport: '<Root>/VCellMax ' */
  ENV_Y.VCellMax = 0.0;

  /* ConstCode for Outport: '<Root>/TCellMin ' */
  ENV_Y.TCellMin = 0.0;

  /* ConstCode for Outport: '<Root>/NTractionControlKpSelector' */
  ENV_Y.NTractionControlKpSelector = 0.0;

  /* ConstCode for Outport: '<Root>/nYawRateErrorActual' */
  ENV_Y.nYawRateErrorActual = 0.0;

  /* ConstCode for Outport: '<Root>/tPedalOverlap' */
  ENV_Y.tPedalOverlap = 0.0;

  /* ConstCode for Outport: '<Root>/tAppsTimer' */
  ENV_Y.tAppsTimer = 0.0;

  /* ConstCode for Outport: '<Root>/aSteeringAngle' */
  ENV_Y.aSteeringAngle = 0.0;

  /* ConstCode for Outport: '<Root>/PDischargeLimited' */
  ENV_Y.PDischargeLimited = 0.0;

  /* ConstCode for Outport: '<Root>/rSplitRear' */
  ENV_Y.rSplitRear = 0.0;

  /* ConstCode for Outport: '<Root>/BAccumulatorFanOnRequest' */
  ENV_Y.BAccumulatorFanOnRequest = 0.0;

  /* ConstCode for Outport: '<Root>/BInvLVOnRequest' */
  ENV_Y.BInvLVOnRequest = 0.0;

  /* ConstCode for Outport: '<Root>/BEMS1000mPoint' */
  ENV_Y.BEMS1000mPoint = 0.0;

  /* ConstCode for Outport: '<Root>/BAccumulatorFanDutyRequest' */
  ENV_Y.BAccumulatorFanDutyRequest = 0.0;

  /* ConstCode for Outport: '<Root>/BEMS995mPoint' */
  ENV_Y.BEMS995mPoint = 0.0;

  /* ConstCode for Outport: '<Root>/BBrakeLightOnRequest' */
  ENV_Y.BBrakeLightOnRequest = 0.0;

  /* ConstCode for Outport: '<Root>/MDriverDischargeRequested' */
  ENV_Y.MDriverDischargeRequested = 0.0;

  /* ConstCode for Outport: '<Root>/BReadyToDriveBuzzerRequest' */
  ENV_Y.BReadyToDriveBuzzerRequest = 0.0;

  /* ConstCode for Outport: '<Root>/MFLFinal' */
  ENV_Y.MFLFinal = 0.0;

  /* ConstCode for Outport: '<Root>/MFRFinal' */
  ENV_Y.MFRFinal = 0.0;

  /* ConstCode for Outport: '<Root>/MRLFinal' */
  ENV_Y.MRLFinal = 0.0;

  /* ConstCode for Outport: '<Root>/MRRFinal' */
  ENV_Y.MRRFinal = 0.0;

  /* ConstCode for Outport: '<Root>/Multiplexer' */
  ENV_Y.Multiplexer = 0.0;

  /* ConstCode for Outport: '<Root>/multiplexer' */
  ENV_Y.multiplexer = 0.0;

  /* ConstCode for Outport: '<Root>/rRegenPaddle' */
  ENV_Y.rRegenPaddle = 0.0;
}

/* Model terminate function */
void ENV_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
