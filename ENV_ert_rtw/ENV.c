/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: ENV.c
 *
 * Code generated for Simulink model 'ENV'.
 *
 * Model version                  : 13.6
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Tue Jun  2 18:58:30 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ENV.h"
#include "rtwtypes.h"
#include "MASTER.h"

/* Block signals (default storage) */
B_ENV_T ENV_B;

/* Block states (default storage) */
DW_ENV_T ENV_DW;

/* External inputs (root inport signals with default storage) */
ExtU_ENV_T ENV_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_ENV_T ENV_Y;

/* Real-time model */
static RT_MODEL_ENV_T ENV_M_;
RT_MODEL_ENV_T *const ENV_M = &ENV_M_;
static void rate_monotonic_scheduler(void);

/*
 * Set which subrates need to run this base step (base rate always runs).
 * This function must be called prior to calling the model step function
 * in order to remember which rates need to run this base step.  The
 * buffering of events allows for overlapping preemption.
 */
void ENV_SetEventsForThisBaseStep(boolean_T *eventFlags)
{
  /* Task runs when its counter is zero, computed via rtmStepTask macro */
  eventFlags[1] = ((boolean_T)rtmStepTask(ENV_M, 1));
}

/*
 *         This function updates active task flag for each subrate
 *         and rate transition flags for tasks that exchange data.
 *         The function assumes rate-monotonic multitasking scheduler.
 *         The function must be called at model base rate so that
 *         the generated code self-manages all its subrates and rate
 *         transition flags.
 */
static void rate_monotonic_scheduler(void)
{
  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (ENV_M->Timing.TaskCounters.TID[1])++;
  if ((ENV_M->Timing.TaskCounters.TID[1]) > 4999) {/* Sample time: [5.0s, 0.0s] */
    ENV_M->Timing.TaskCounters.TID[1] = 0;
  }
}

/* Model step function for TID0 */
void ENV_step0(void)                   /* Sample time: [0.001s, 0.0s] */
{
  {                                    /* Sample time: [0.001s, 0.0s] */
    rate_monotonic_scheduler();
  }
}

/* Model step function for TID1 */
void ENV_step1(void)                   /* Sample time: [5.0s, 0.0s] */
{
  /* Switch: '<S4>/Switch' incorporates:
   *  Constant: '<S11>/Constant'
   *  Constant: '<S12>/Constant'
   *  Inport: '<Root>/vLongitudinalOXTSIMU'
   *  Logic: '<S4>/OR'
   *  RelationalOperator: '<S11>/Compare'
   *  RelationalOperator: '<S12>/Compare'
   */
  if ((!(ENV_U.vLongitudinalOXTSIMU >= 9.9)) || (!(ENV_U.vLongitudinalOXTSIMU <=
        10.1))) {
    /* Switch: '<S4>/Switch' */
    ENV_DW.Memory_PreviousInput_i = ENV_U.vLongitudinalOXTSIMU;
  }

  /* End of Switch: '<S4>/Switch' */

  /* ModelReference generated from: '<Root>/Model' incorporates:
   *  Inport: '<Root>/BBMSP0A0C'
   *  Inport: '<Root>/BBMSP0A0E'
   *  Inport: '<Root>/BBMSP0A10'
   *  Inport: '<Root>/BBMSP0A80'
   *  Inport: '<Root>/BBMSP0AC0'
   *  Inport: '<Root>/BBMSP0AFA'
   *  Inport: '<Root>/BBalancingActive'
   *  Inport: '<Root>/BInvDCOnFLIn'
   *  Inport: '<Root>/BInvDCOnFR'
   *  Inport: '<Root>/BInvDCOnRLIn'
   *  Inport: '<Root>/BInvDCOnRRIn'
   *  Inport: '<Root>/BInvDCQuitInvOnFL'
   *  Inport: '<Root>/BInvDCQuitInvOnFR'
   *  Inport: '<Root>/BInvDCQuitInvOnRL'
   *  Inport: '<Root>/BInvDCQuitInvOnRR'
   *  Inport: '<Root>/BInvErrorFL'
   *  Inport: '<Root>/BInvErrorFR'
   *  Inport: '<Root>/BInvErrorRL'
   *  Inport: '<Root>/BInvErrorRR'
   *  Inport: '<Root>/BInvOnFLIn'
   *  Inport: '<Root>/BInvOnFR'
   *  Inport: '<Root>/BInvOnRLIn'
   *  Inport: '<Root>/BInvOnRRIn'
   *  Inport: '<Root>/BInvQuitInvOnFL'
   *  Inport: '<Root>/BInvQuitInvOnFR'
   *  Inport: '<Root>/BInvQuitInvOnRL'
   *  Inport: '<Root>/BInvQuitInvOnRR'
   *  Inport: '<Root>/BInvSysReadyFL'
   *  Inport: '<Root>/BInvSysReadyFR'
   *  Inport: '<Root>/BInvSysReadyRL'
   *  Inport: '<Root>/BInvSysReadyRR'
   *  Inport: '<Root>/BInvWarnFL'
   *  Inport: '<Root>/BInvWarnFR'
   *  Inport: '<Root>/BInvWarnRL'
   *  Inport: '<Root>/BInvWarnRR'
   *  Inport: '<Root>/BSteeringWheelButton1'
   *  Inport: '<Root>/BSteeringWheelButton2'
   *  Inport: '<Root>/BSteeringWheelButton3'
   *  Inport: '<Root>/BSteeringWheelButton4'
   *  Inport: '<Root>/BSteeringWheelButton5'
   *  Inport: '<Root>/BSteeringWheelButton6'
   *  Inport: '<Root>/BSteeringWheelButton7'
   *  Inport: '<Root>/BSteeringWheelButton8'
   *  Inport: '<Root>/C1P01_Status'
   *  Inport: '<Root>/C1P02_Status'
   *  Inport: '<Root>/C1P03_Status'
   *  Inport: '<Root>/C1P04_Status'
   *  Inport: '<Root>/C1P07_Status'
   *  Inport: '<Root>/C1P11_Status'
   *  Inport: '<Root>/C1P12_Status'
   *  Inport: '<Root>/C1P13_Status'
   *  Inport: '<Root>/C1P16_Digital'
   *  Inport: '<Root>/C1P17_Digital'
   *  Inport: '<Root>/C1P25_Status'
   *  Inport: '<Root>/C1P26_Status'
   *  Inport: '<Root>/C1P28_Status'
   *  Inport: '<Root>/C1P30_Status'
   *  Inport: '<Root>/C1P31_Status'
   *  Inport: '<Root>/C1P33_Status'
   *  Inport: '<Root>/C1P34_Status'
   *  Inport: '<Root>/C1P36_Status'
   *  Inport: '<Root>/C1P37_Status'
   *  Inport: '<Root>/C1P38_Status'
   *  Inport: '<Root>/C2P01_Status'
   *  Inport: '<Root>/C2P02_Status'
   *  Inport: '<Root>/C2P03_Status'
   *  Inport: '<Root>/C2P04_Status'
   *  Inport: '<Root>/C2P05_Status'
   *  Inport: '<Root>/C2P13_Status'
   *  Inport: '<Root>/C2P17_Digital'
   *  Inport: '<Root>/C2P18_Digital'
   *  Inport: '<Root>/C2P25_Status'
   *  Inport: '<Root>/C2P26_Status'
   *  Inport: '<Root>/C2P27_Status'
   *  Inport: '<Root>/C2P28_Status'
   *  Inport: '<Root>/C2P29_Status'
   *  Inport: '<Root>/C2P30_Status'
   *  Inport: '<Root>/C2P31_Status'
   *  Inport: '<Root>/C2P33_Status'
   *  Inport: '<Root>/C2P35_Status'
   *  Inport: '<Root>/C2P36_Status'
   *  Inport: '<Root>/C2P37_Status'
   *  Inport: '<Root>/C2P38_Status'
   *  Inport: '<Root>/IBMSHallEffect'
   *  Inport: '<Root>/IIVTS'
   *  Inport: '<Root>/ILVSystem'
   *  Inport: '<Root>/MMotorMeasuredFL'
   *  Inport: '<Root>/MMotorMeasuredFR'
   *  Inport: '<Root>/MMotorMeasuredRL'
   *  Inport: '<Root>/MMotorMeasuredRR'
   *  Inport: '<Root>/NBMSDLC'
   *  Inport: '<Root>/NDisplayNumberDDU7'
   *  Inport: '<Root>/NInvDTCFL'
   *  Inport: '<Root>/NInvDTCFR'
   *  Inport: '<Root>/NInvDTCRL'
   *  Inport: '<Root>/NInvDTCRR'
   *  Inport: '<Root>/RCellAverage'
   *  Inport: '<Root>/TCellMax'
   *  Inport: '<Root>/TCellMin'
   *  Inport: '<Root>/TInvFL'
   *  Inport: '<Root>/TInvFR'
   *  Inport: '<Root>/TInvRL'
   *  Inport: '<Root>/TInvRR'
   *  Inport: '<Root>/TLVSystem'
   *  Inport: '<Root>/TMotorFL'
   *  Inport: '<Root>/TMotorFR'
   *  Inport: '<Root>/TMotorRL'
   *  Inport: '<Root>/TMotorRR'
   *  Inport: '<Root>/VCellAverage'
   *  Inport: '<Root>/VCellMax'
   *  Inport: '<Root>/VCellMin'
   *  Inport: '<Root>/VDCAccumulator'
   *  Inport: '<Root>/VDCInvFL'
   *  Inport: '<Root>/VDCInvFR'
   *  Inport: '<Root>/VDCInvRL'
   *  Inport: '<Root>/VDCInvRR'
   *  Inport: '<Root>/VDamperPotentiometerFL'
   *  Inport: '<Root>/VDamperPotentiometerFR'
   *  Inport: '<Root>/VDamperPotentiometerRL'
   *  Inport: '<Root>/VDamperPotentiometerRR'
   *  Inport: '<Root>/VLVSystem'
   *  Inport: '<Root>/VRegenPaddle1'
   *  Inport: '<Root>/VRegenPaddle2'
   *  Inport: '<Root>/VSteeringAngle'
   *  Inport: '<Root>/VThrottlePedal1'
   *  Inport: '<Root>/VThrottlePedal2'
   *  Inport: '<Root>/gLateralOXTS'
   *  Inport: '<Root>/gLongitudinalOXTS'
   *  Inport: '<Root>/nMotorFL'
   *  Inport: '<Root>/nMotorFR'
   *  Inport: '<Root>/nMotorRL'
   *  Inport: '<Root>/nMotorRR'
   *  Inport: '<Root>/nYawRateOXTSIMU'
   *  Inport: '<Root>/pBrakeF'
   *  Inport: '<Root>/pBrakeR'
   */
  MASTER(&ENV_U.nMotorFL, &ENV_U.BInvDCOnFL, &ENV_U.BInvErrorFL, &ENV_U.BInvOnFL,
         &ENV_U.BInvDCQuitInvOnFL, &ENV_U.BInvQuitInvOnFL, &ENV_U.BInvSysReadyFL,
         &ENV_U.BInvWarnFL, &ENV_U.MMotorMeasuredFL, &ENV_U.NInvDTCFL,
         &ENV_U.TMotorFL, &ENV_U.VDCInvFL, &ENV_U.TInvFL, &ENV_U.nMotorFR,
         &ENV_U.BInvDCOnFR, &ENV_U.BInvErrorFR, &ENV_U.BInvOnFR,
         &ENV_U.BInvDCQuitInvOnFR, &ENV_U.BInvQuitInvOnFR, &ENV_U.BInvSysReadyFR,
         &ENV_U.BInvWarnFR, &ENV_U.MMotorMeasuredFR, &ENV_U.NInvDTCFR,
         &ENV_U.TMotorFR, &ENV_U.VDCInvFR, &ENV_U.TInvFR, &ENV_U.nMotorRL,
         &ENV_U.BInvDCOnRL, &ENV_U.BInvErrorRL, &ENV_U.BInvOnRL,
         &ENV_U.BInvDCQuitInvOnRL, &ENV_U.BInvQuitInvOnRL, &ENV_U.BInvSysReadyRL,
         &ENV_U.BInvWarnRL, &ENV_U.MMotorMeasuredRL, &ENV_U.NInvDTCRL,
         &ENV_U.TMotorRL, &ENV_U.VDCInvRL, &ENV_U.TInvRL, &ENV_U.nMotorRR,
         &ENV_U.BInvDCOnRR, &ENV_U.BInvErrorRR, &ENV_U.BInvOnRR,
         &ENV_U.BInvDCQuitInvOnRR, &ENV_U.BInvQuitInvOnRR, &ENV_U.BInvSysReadyRR,
         &ENV_U.BInvWarnRR, &ENV_U.MMotorMeasuredRR, &ENV_U.NInvDTCRR,
         &ENV_U.TMotorRR, &ENV_U.VDCInvRR, &ENV_U.TInvRR, &ENV_U.pBrakeF,
         &ENV_U.pBrakeR, &ENV_U.VDamperPotentiometerFL,
         &ENV_U.VDamperPotentiometerFR, &ENV_U.VDamperPotentiometerRL,
         &ENV_U.VDamperPotentiometerRR, &ENV_U.NDisplayNumberDDU7,
         &ENV_U.VSteeringAngle, &ENV_U.VThrottlePedal1, &ENV_U.VThrottlePedal2,
         &ENV_DW.Memory_PreviousInput_i, &ENV_U.gLateralOXTS,
         &ENV_U.gLongitudinalOXTS, &ENV_U.nYawRateOXTSIMU, &ENV_U.C1P01_Status,
         &ENV_U.C1P02_Status, &ENV_U.C1P03_Status, &ENV_U.C1P04_Status,
         &ENV_U.C1P07_Status, &ENV_U.C1P11_Status, &ENV_U.C1P12_Status,
         &ENV_U.C1P13_Status, &ENV_U.C1P25_Status, &ENV_U.C1P26_Status,
         &ENV_U.C1P28_Status, &ENV_U.C1P30_Status, &ENV_U.C1P31_Status,
         &ENV_U.C1P33_Status, &ENV_U.C1P34_Status, &ENV_U.C1P36_Status,
         &ENV_U.C1P37_Status, &ENV_U.C1P38_Status, &ENV_U.C2P01_Status,
         &ENV_U.C2P02_Status, &ENV_U.C2P03_Status, &ENV_U.C2P04_Status,
         &ENV_U.C2P05_Status, &ENV_U.C2P13_Status, &ENV_U.C2P25_Status,
         &ENV_U.C2P26_Status, &ENV_U.C2P27_Status, &ENV_U.C2P28_Status,
         &ENV_U.C2P29_Status, &ENV_U.C2P30_Status, &ENV_U.C2P31_Status,
         &ENV_U.C2P33_Status, &ENV_U.C1P16_Digital, &ENV_U.C1P17_Digital,
         &ENV_U.C2P17_Digital, &ENV_U.C2P18_Digital, &ENV_U.C2P35_Status,
         &ENV_U.C2P36_Status, &ENV_U.C2P37_Status, &ENV_U.C2P38_Status,
         &ENV_U.ILVSystem, &ENV_U.TLVSystem, &ENV_U.VLVSystem,
         &ENV_U.BSteeringWheelButton1, &ENV_U.BSteeringWheelButton2,
         &ENV_U.BSteeringWheelButton3, &ENV_U.BSteeringWheelButton4,
         &ENV_U.BSteeringWheelButton5, &ENV_U.BSteeringWheelButton6,
         &ENV_U.BSteeringWheelButton7, &ENV_U.BSteeringWheelButton8,
         &ENV_U.VRegenPaddle1, &ENV_U.VRegenPaddle2, &ENV_U.IIVTS,
         &ENV_U.IBMSHallEffect, &ENV_U.VDCAccumulator, &ENV_U.TCellMin,
         &ENV_U.VCellAverage, &ENV_U.VCellMax, &ENV_U.TCellMax, &ENV_U.NBMSDLC,
         &ENV_U.VCellMin, &ENV_U.RCellAverage, &ENV_U.BBalancingActive,
         &ENV_U.BBMSP0A0C, &ENV_U.BBMSP0A0E, &ENV_U.BBMSP0A10, &ENV_U.BBMSP0A80,
         &ENV_U.BBMSP0AC0, &ENV_U.BBMSP0AFA, &ENV_B.nMotorRL,
         &ENV_B.BInvDCOnRL_p, &ENV_B.BInvErrorRL, &ENV_B.BInvOnRL_b,
         &ENV_B.BInvDCQuitInvOnRL, &ENV_B.BInvQuitInvOnRL, &ENV_B.BInvSysReadyRL,
         &ENV_B.BInvWarnRL, &ENV_B.MMotorMeasuredRL, &ENV_B.NInvDTCRL,
         &ENV_B.TMotorRL, &ENV_B.VDCInvRL, &ENV_B.TInvRL, &ENV_B.nMotorFL,
         &ENV_B.BInvDCOnFL_g, &ENV_B.BInvErrorFL, &ENV_B.BInvOnFL_o,
         &ENV_B.BInvDCQuitInvOnFL, &ENV_B.BInvQuitInvOnFL, &ENV_B.BInvSysReadyFL,
         &ENV_B.BInvWarnFL, &ENV_B.MMotorMeasuredFL, &ENV_B.NInvDTCFL,
         &ENV_B.TMotorFL, &ENV_B.VDCInvFL, &ENV_B.TInvFL, &ENV_B.nMotorRR,
         &ENV_B.BInvDCOnRR_i, &ENV_B.BInvErrorRR, &ENV_B.BInvOnRR_j,
         &ENV_B.BInvDCQuitInvOnRR, &ENV_B.BInvQuitInvOnRR, &ENV_B.BInvSysReadyRR,
         &ENV_B.BInvWarnRR, &ENV_B.MMotorMeasuredRR, &ENV_B.NInvDTCRR,
         &ENV_B.TMotorRR, &ENV_B.VDCInvRR, &ENV_B.TInvRR, &ENV_B.nMotorFR,
         &ENV_B.BInvDCOnFR_l, &ENV_B.BInvErrorFR, &ENV_B.BInvOnFR_g,
         &ENV_B.BInvDCQuitInvOnFR, &ENV_B.BInvQuitInvOnFR, &ENV_B.BInvSysReadyFR,
         &ENV_B.BInvWarnFR, &ENV_B.MMotorMeasuredFR, &ENV_B.NInvDTCFR,
         &ENV_B.TMotorFR, &ENV_B.VDCInvFR, &ENV_B.TInvFR, &ENV_B.vWheelRL,
         &ENV_B.vWheelRR, &ENV_B.vWheelFL, &ENV_B.vWheelFR, &ENV_B.pBrakeF,
         &ENV_B.pBrakeR, &ENV_B.VDamperPotentiometerFL,
         &ENV_B.VDamperPotentiometerFR, &ENV_B.NDisplayNumberDDU7,
         &ENV_B.VSteeringAngle, &ENV_B.VThrottlePedal1, &ENV_B.VThrottlePedal2,
         &ENV_B.BSteeringWheelButton1, &ENV_B.BSteeringWheelButton2,
         &ENV_B.BSteeringWheelButton3, &ENV_B.BSteeringWheelButton4,
         &ENV_B.BSteeringWheelButton5, &ENV_B.BSteeringWheelButton6,
         &ENV_B.BSteeringWheelButton7, &ENV_B.BSteeringWheelButton8,
         &ENV_B.VRegenPaddle1, &ENV_B.VRegenPaddle2, &ENV_B.C1P01_Status,
         &ENV_B.C1P02_Status, &ENV_B.C1P03_Status, &ENV_B.C1P04_Status,
         &ENV_B.C1P07_Status, &ENV_B.C1P11_Status, &ENV_B.C1P12_Status,
         &ENV_B.C1P13_Status, &ENV_B.C1P25_Status, &ENV_B.C1P26_Status,
         &ENV_B.C1P28_Status, &ENV_B.C1P30_Status, &ENV_B.C1P31_Status,
         &ENV_B.C1P33_Status, &ENV_B.C1P34_Status, &ENV_B.C1P36_Status,
         &ENV_B.C1P37_Status, &ENV_B.C1P38_Status, &ENV_B.C2P01_Status,
         &ENV_B.C2P02_Status, &ENV_B.C2P03_Status, &ENV_B.C2P04_Status,
         &ENV_B.C2P05_Status, &ENV_B.C2P13_Status, &ENV_B.C2P25_Status,
         &ENV_B.C2P26_Status, &ENV_B.C2P27_Status, &ENV_B.C2P28_Status,
         &ENV_B.C2P29_Status, &ENV_B.C2P30_Status, &ENV_B.C2P31_Status,
         &ENV_B.C2P33_Status, &ENV_B.C1P16_Digital, &ENV_B.C1P17_Digital,
         &ENV_B.C2P17_Digital, &ENV_B.C2P18_Digital, &ENV_B.C2P35_Status,
         &ENV_B.C2P36_Status, &ENV_B.C2P37_Status, &ENV_B.C2P38_Status,
         &ENV_B.ILVSystem, &ENV_B.TLVSystem, &ENV_B.VLVSystem,
         &ENV_B.VDamperPotentiometerRL, &ENV_B.VDamperPotentiometerRR,
         &ENV_B.vLongitudinalOXTSIMU, &ENV_B.gLateralOXTSIMU,
         &ENV_B.gLongitudinalOXTSIMU, &ENV_B.nYawRateOXTSIMU, &ENV_B.VCellMax,
         &ENV_B.VCellDelta, &ENV_B.VCellMin, &ENV_B.VCellAverage,
         &ENV_B.TCellMax, &ENV_B.NBMSDLC, &ENV_B.TCellMin, &ENV_B.IBMSHallEffect,
         &ENV_B.VDCAccumulator, &ENV_B.RCellAverage, &ENV_B.BBalancingActive,
         &ENV_B.BBMSP0A0C, &ENV_B.BBMSP0A0E, &ENV_B.BBMSP0A10, &ENV_B.BBMSP0A80,
         &ENV_B.BBMSP0AC0, &ENV_B.BBMSP0AFA, &ENV_B.IIVTS, &ENV_B.rThrottlePedal,
         &ENV_B.BThrottleError_g, &ENV_B.tThrottleError, &ENV_B.BBrakeError_o,
         &ENV_B.tBrakeError, &ENV_B.BBrakeOn, &ENV_B.pBrakeMax,
         &ENV_B.BPedalOverlap_k, &ENV_B.tPedalOverlap, &ENV_B.BAppsOK_n,
         &ENV_B.tAppsTimer, &ENV_B.rSteeringAngle_k, &ENV_B.aSteeringAngle,
         &ENV_B.rRegenPaddle_i, &ENV_B.BRegenOn, &ENV_B.BBrakeLight_b,
         &ENV_B.xDamperFL, &ENV_B.xDamperFR, &ENV_B.xDamperRL, &ENV_B.xDamperRR,
         &ENV_B.BDamperErrorFL, &ENV_B.BDamperErrorFR, &ENV_B.BDamperErrorRL,
         &ENV_B.BDamperErrorRR, &ENV_B.vChassis_e, &ENV_B.sChassis,
         &ENV_B.sEMS1000m, &ENV_B.BEMS1000mPoint, &ENV_B.BEMS995mPoint,
         &ENV_B.BTorqueVectoringActivated, &ENV_B.NThrottleMap,
         &ENV_B.PDischarge, &ENV_B.BEMSActivated, &ENV_B.PRegen,
         &ENV_B.rTorqueSplit, &ENV_B.PEngineBraking,
         &ENV_B.BSpinningModelActivated, &ENV_B.NTractionControlKpSelector,
         &ENV_B.BTractionControlActivated, &ENV_B.rTorqueVectoringMultiplier,
         &ENV_B.NPowerControllerKpSelector, &ENV_B.NTorqueSplitSpeedSelector,
         &ENV_B.BAccumulatorFanOn, &ENV_B.BErrorReset,
         &ENV_B.BReadyToDriveButton, &ENV_B.NModeNumberDisplay5,
         &ENV_B.NModeNumberDisplay6, &ENV_B.TMotorMax, &ENV_B.TInvMax,
         &ENV_B.PActual_p, &ENV_B.rSOC_a, &ENV_B.rSOE, &ENV_B.BEncoderErrorRear,
         &ENV_B.BEncoderErrorFront, &ENV_B.rCoolingFansDuty,
         &ENV_B.rCoolingPumpsDuty, &ENV_B.BAccumulatorFanDuty, &ENV_B.BInvLVOn,
         &ENV_B.rThrottlePedal1, &ENV_B.rThrottlePedal2, &ENV_B.NCarState_h,
         &ENV_B.BReadyToDriveBuzzer, &ENV_B.BReadyToDrive, &ENV_B.NBMSState_f,
         &ENV_B.NInvState_d, &ENV_B.BHVOn, &ENV_B.BInvOnRL, &ENV_B.BInvOnRR,
         &ENV_B.BInvOnFL, &ENV_B.BInvOnFR, &ENV_B.BInvDCOnRL, &ENV_B.BInvDCOnRR,
         &ENV_B.BInvDCOnFL, &ENV_B.BInvDCOnFR, &ENV_B.BInvEnableRL,
         &ENV_B.BInvEnableRR, &ENV_B.BInvEnableFL, &ENV_B.BInvEnableFR,
         &ENV_B.BInvErrorResetRL, &ENV_B.BInvErrorResetRR,
         &ENV_B.BInvErrorResetFL, &ENV_B.BInvErrorResetFR,
         &ENV_B.MTargetTorqueRL, &ENV_B.MTargetTorqueRR, &ENV_B.MTargetTorqueFL,
         &ENV_B.MTargetTorqueFR, &ENV_B.MTorqueLimitNegativeRL,
         &ENV_B.MTorqueLimitNegativeRR, &ENV_B.MTorqueLimitNegativeFL,
         &ENV_B.MTorqueLimitNegativeFR, &ENV_B.MTorqueLimitPositiveRL,
         &ENV_B.MTorqueLimitPositiveRR, &ENV_B.MTorqueLimitPositiveFL,
         &ENV_B.MTorqueLimitPositiveFR, &ENV_B.BDischargeAllowed,
         &ENV_B.rInvTemperatureDerate_o, &ENV_B.rInvTemperatureDerateFR,
         &ENV_B.rInvTemperatureDerateFL, &ENV_B.rInvTemperatureDerateRR,
         &ENV_B.rInvTemperatureDerateRL, &ENV_B.rMotorTemperatureDerate_p,
         &ENV_B.rMotorTemperatureDerateFR, &ENV_B.rMotorTemperatureDerateFL,
         &ENV_B.rMotorTemperatureDerateRR, &ENV_B.rMotorTemperatureDerateRL,
         &ENV_B.rTSTemperatureDerateFR, &ENV_B.rTSTemperatureDerateFL,
         &ENV_B.rTSTemperatureDerateRR, &ENV_B.rTSTemperatureDerateRL,
         &ENV_B.rHighCellTemperatureDischargeDe,
         &ENV_B.rHighCellTemperatureRegenDerate,
         &ENV_B.rLowCellVoltageDischargeDerate, &ENV_B.rSOCDischargeDerate,
         &ENV_B.rSOCRegenDerate, &ENV_B.rSpeedRegenDerate_o,
         &ENV_B.rDischargeDerate_o, &ENV_B.rRegenDerate_k,
         &ENV_B.MDriverDischargeRequested_h, &ENV_B.MDriverRegenRequested_d,
         &ENV_B.MDischargeLimited, &ENV_B.MRegenLimited,
         &ENV_B.PPowerControllerRequested, &ENV_B.MPowerControllerRequested,
         &ENV_B.PPowerControllerProportionalTer,
         &ENV_B.PPowerControllerIntegralTerm, &ENV_B.PDischargeLimited,
         &ENV_B.MTotalRequested_p, &ENV_B.MTotalEMSRequested,
         &ENV_B.rSOCTargetError, &ENV_B.rSOETargetError,
         &ENV_B.nYawRateErrorActual, &ENV_B.BTorqueVectoringOK,
         &ENV_B.MTorqueVectoringFL, &ENV_B.MTorqueVectoringFR,
         &ENV_B.MTorqueVectoringRL, &ENV_B.MTorqueVectoringRR, &ENV_B.rSplitRear,
         &ENV_B.MTorqueDistributionFL, &ENV_B.MTorqueDistributionFR,
         &ENV_B.MTorqueDistributionRL, &ENV_B.MTorqueDistributionRR,
         &ENV_B.rSlipRatioOptimal, &ENV_B.NTractionControlMultiplierFL,
         &ENV_B.NTractionControlMultiplierFR,
         &ENV_B.NTractionControlMultiplierRL,
         &ENV_B.NTractionControlMultiplierRR, &ENV_B.NABSMultiplierFL,
         &ENV_B.NABSMultiplierFR, &ENV_B.NABSMultiplierRL,
         &ENV_B.NABSMultiplierRR, &ENV_B.rSlipRatioFLActual,
         &ENV_B.rSlipRatioFRActual, &ENV_B.rSlipRatioRLActual,
         &ENV_B.rSlipRatioRRActual, &ENV_B.MTractionControlFLTotal,
         &ENV_B.MTractionControlFRTotal, &ENV_B.MTractionControlRLTotal,
         &ENV_B.MTractionControlRRTotal, &ENV_B.MTractionControlFLFinal,
         &ENV_B.MTractionControlFRFinal, &ENV_B.MTractionControlRLFinal,
         &ENV_B.MTractionControlRRFinal, &ENV_B.MSpinningModelFL,
         &ENV_B.MSpinningModelFR, &ENV_B.MSpinningModelRL,
         &ENV_B.MSpinningModelRR, &ENV_B.MFLFinal, &ENV_B.MFRFinal,
         &ENV_B.MRLFinal, &ENV_B.MRRFinal, &ENV_B.MTotalFinal,
         &(ENV_DW.Model_InstanceData.rtb), &(ENV_DW.Model_InstanceData.rtdw));

  /* Outport: '<Root>/BInvDCOnRL' */
  ENV_Y.BInvDCOnRL = ENV_B.BInvDCOnRL;

  /* Outport: '<Root>/BInvEnableRL' */
  ENV_Y.BInvEnableRL = ENV_B.BInvEnableRL;

  /* Outport: '<Root>/BInvErrorResetRL' */
  ENV_Y.BInvErrorResetRL = ENV_B.BInvErrorResetRL;

  /* Outport: '<Root>/BInvOnRL' */
  ENV_Y.BInvOnRL = ENV_B.BInvOnRL;

  /* Outport: '<Root>/MTorqueLimitNegativeRL' */
  ENV_Y.MTorqueLimitNegativeRL = ENV_B.MTorqueLimitNegativeRL;

  /* Outport: '<Root>/MTorqueLimitPositiveRL' */
  ENV_Y.MTorqueLimitPositiveRL = ENV_B.MTorqueLimitPositiveRL;

  /* Outport: '<Root>/MInvRLFinal' */
  ENV_Y.MInvRLFinal = ENV_B.MRLFinal;

  /* Outport: '<Root>/BInvDCOnFL' */
  ENV_Y.BInvDCOnFL = ENV_B.BInvDCOnFL;

  /* Outport: '<Root>/BInvEnableFL' */
  ENV_Y.BInvEnableFL = ENV_B.BInvEnableFL;

  /* Outport: '<Root>/BInvErrorResetFL' */
  ENV_Y.BInvErrorResetFL = ENV_B.BInvErrorResetFL;

  /* Outport: '<Root>/BInvOnFL' */
  ENV_Y.BInvOnFL = ENV_B.BInvOnFL;

  /* Outport: '<Root>/MTorqueLimitNegativeFL' */
  ENV_Y.MTorqueLimitNegativeFL = ENV_B.MTorqueLimitNegativeFL;

  /* Outport: '<Root>/MTorqueLimitPositiveFL' */
  ENV_Y.MTorqueLimitPositiveFL = ENV_B.MTorqueLimitPositiveFL;

  /* Outport: '<Root>/MInvFLFinal' */
  ENV_Y.MInvFLFinal = ENV_B.MFLFinal;

  /* Outport: '<Root>/BInvDCOnRR' */
  ENV_Y.BInvDCOnRR = ENV_B.BInvDCOnRR;

  /* Outport: '<Root>/BInvEnableRR' */
  ENV_Y.BInvEnableRR = ENV_B.BInvEnableRR;

  /* Outport: '<Root>/BInvErrorResetRR' */
  ENV_Y.BInvErrorResetRR = ENV_B.BInvErrorResetRR;

  /* Outport: '<Root>/BInvOnRR' */
  ENV_Y.BInvOnRR = ENV_B.BInvOnRR;

  /* Outport: '<Root>/MTorqueLimitNegativeRR' */
  ENV_Y.MTorqueLimitNegativeRR = ENV_B.MTorqueLimitNegativeRR;

  /* Outport: '<Root>/MTorqueLimitPositiveRR' */
  ENV_Y.MTorqueLimitPositiveRR = ENV_B.MTorqueLimitPositiveRR;

  /* Outport: '<Root>/MInvRRFinal' */
  ENV_Y.MInvRRFinal = ENV_B.MRRFinal;

  /* Outport: '<Root>/BInvDCOnFR ' */
  ENV_Y.BInvDCOnFR = ENV_B.BInvDCOnFR;

  /* Outport: '<Root>/BInvEnableFR' */
  ENV_Y.BInvEnableFR = ENV_B.BInvEnableFR;

  /* Outport: '<Root>/BInvErrorResetFR' */
  ENV_Y.BInvErrorResetFR = ENV_B.BInvErrorResetFR;

  /* Outport: '<Root>/BInvOnFR ' */
  ENV_Y.BInvOnFR = ENV_B.BInvOnFR;

  /* Outport: '<Root>/MTorqueLimitNegativeFR' */
  ENV_Y.MTorqueLimitNegativeFR = ENV_B.MTorqueLimitNegativeFR;

  /* Outport: '<Root>/MTorqueLimitPositiveFR' */
  ENV_Y.MTorqueLimitPositiveFR = ENV_B.MTorqueLimitPositiveFR;

  /* Outport: '<Root>/MInvFRFinal' */
  ENV_Y.MInvFRFinal = ENV_B.MFRFinal;

  /* Outport: '<Root>/PPowerControllerProportionalTerm' */
  ENV_Y.PPowerControllerProportionalTer = ENV_B.PPowerControllerProportionalTer;

  /* Outport: '<Root>/MTotalFinal' */
  ENV_Y.MTotalFinal = ENV_B.MTotalFinal;

  /* Outport: '<Root>/PActual' */
  ENV_Y.PActual_l = ENV_B.PActual_p;

  /* Outport: '<Root>/vChassis' */
  ENV_Y.vChassis_f = ENV_B.vChassis_e;

  /* Outport: '<Root>/PPowerControllerIntegralTerm' */
  ENV_Y.PPowerControllerIntegralTerm = ENV_B.PPowerControllerIntegralTerm;

  /* Outport: '<Root>/BSpinningModelActivated' */
  ENV_Y.BSpinningModelActivated = ENV_B.BSpinningModelActivated;

  /* Outport: '<Root>/BTorqueVectoringOK' */
  ENV_Y.BTorqueVectoringOK = ENV_B.BTorqueVectoringOK;

  /* Outport: '<Root>/BEncoderErrorRear' */
  ENV_Y.BEncoderErrorRear = ENV_B.BEncoderErrorRear;

  /* Outport: '<Root>/BEncoderErrorFront' */
  ENV_Y.BEncoderErrorFront = ENV_B.BEncoderErrorFront;

  /* Outport: '<Root>/BBMSP0A80 ' */
  ENV_Y.BBMSP0A80 = ENV_B.BBMSP0A80;

  /* Outport: '<Root>/BBMSP0AC0 ' */
  ENV_Y.BBMSP0AC0 = ENV_B.BBMSP0AC0;

  /* Outport: '<Root>/BBMSP0AFA ' */
  ENV_Y.BBMSP0AFA = ENV_B.BBMSP0AFA;

  /* Outport: '<Root>/rHighCellTemperatureDischargeDerate' */
  ENV_Y.rHighCellTemperatureDischargeDe = ENV_B.rHighCellTemperatureDischargeDe;

  /* Outport: '<Root>/rHighCellTemperatureRegenDerate' */
  ENV_Y.rHighCellTemperatureRegenDerate = ENV_B.rHighCellTemperatureRegenDerate;

  /* Outport: '<Root>/rInvTemperatureDerate' */
  ENV_Y.rInvTemperatureDerate_n = ENV_B.rInvTemperatureDerate_o;

  /* Outport: '<Root>/rMotorTemperatureDerate' */
  ENV_Y.rMotorTemperatureDerate_a = ENV_B.rMotorTemperatureDerate_p;

  /* Outport: '<Root>/rLowCellVoltageDischargeDerate' */
  ENV_Y.rLowCellVoltageDischargeDerate = ENV_B.rLowCellVoltageDischargeDerate;

  /* Outport: '<Root>/rSOCDischargeDerate' */
  ENV_Y.rSOCDischargeDerate = ENV_B.rSOCDischargeDerate;

  /* Outport: '<Root>/rSOCRegenDerate' */
  ENV_Y.rSOCRegenDerate = ENV_B.rSOCRegenDerate;

  /* Outport: '<Root>/rSpeedRegenDerate' */
  ENV_Y.rSpeedRegenDerate_p = ENV_B.rSpeedRegenDerate_o;

  /* Outport: '<Root>/rDischargeDerate' */
  ENV_Y.rDischargeDerate_f = ENV_B.rDischargeDerate_o;

  /* Outport: '<Root>/rRegenDerate' */
  ENV_Y.rRegenDerate_b = ENV_B.rRegenDerate_k;

  /* Outport: '<Root>/PDischarge' */
  ENV_Y.PDischarge = ENV_B.PDischarge;

  /* Outport: '<Root>/rSOCTargetError' */
  ENV_Y.rSOCTargetError = ENV_B.rSOCTargetError;

  /* Outport: '<Root>/sEMS1000m' */
  ENV_Y.sEMS1000m = ENV_B.sEMS1000m;

  /* Outport: '<Root>/rSOETargetError' */
  ENV_Y.rSOETargetError = ENV_B.rSOETargetError;

  /* Outport: '<Root>/vWheelRL' */
  ENV_Y.vWheelRL = ENV_B.vWheelRL;

  /* Outport: '<Root>/vWheelRR' */
  ENV_Y.vWheelRR = ENV_B.vWheelRR;

  /* Outport: '<Root>/vWheelFL' */
  ENV_Y.vWheelFL = ENV_B.vWheelFL;

  /* Outport: '<Root>/vWheelFR' */
  ENV_Y.vWheelFR = ENV_B.vWheelFR;

  /* Outport: '<Root>/PPowerControllerRequested' */
  ENV_Y.PPowerControllerRequested = ENV_B.PPowerControllerRequested;

  /* Outport: '<Root>/MPowerControllerRequested' */
  ENV_Y.MPowerControllerRequested = ENV_B.MPowerControllerRequested;

  /* Outport: '<Root>/rThrottlePedal' */
  ENV_Y.rThrottlePedal = ENV_B.rThrottlePedal;

  /* Outport: '<Root>/BThrottleError' */
  ENV_Y.BThrottleError_i = ENV_B.BThrottleError_g;

  /* Outport: '<Root>/tThrottleError' */
  ENV_Y.tThrottleError = ENV_B.tThrottleError;

  /* Outport: '<Root>/BBrakeError' */
  ENV_Y.BBrakeError_i = ENV_B.BBrakeError_o;

  /* Outport: '<Root>/tBrakeError' */
  ENV_Y.tBrakeError = ENV_B.tBrakeError;

  /* Outport: '<Root>/BBrakeOn' */
  ENV_Y.BBrakeOn = ENV_B.BBrakeOn;

  /* Outport: '<Root>/BPedalOverlap' */
  ENV_Y.BPedalOverlap_o = ENV_B.BPedalOverlap_k;

  /* Outport: '<Root>/BAppsOK' */
  ENV_Y.BAppsOK_m = ENV_B.BAppsOK_n;

  /* Outport: '<Root>/BRegenOn' */
  ENV_Y.BRegenOn = ENV_B.BRegenOn;

  /* Outport: '<Root>/BTorqueVectoringActivated' */
  ENV_Y.BTorqueVectoringActivated = ENV_B.BTorqueVectoringActivated;

  /* Outport: '<Root>/rSOE' */
  ENV_Y.rSOE = ENV_B.rSOE;

  /* Outport: '<Root>/sChassis' */
  ENV_Y.sChassis = ENV_B.sChassis;

  /* Outport: '<Root>/rSOC' */
  ENV_Y.rSOC_j = ENV_B.rSOC_a;

  /* Outport: '<Root>/PRegen' */
  ENV_Y.PRegen = ENV_B.PRegen;

  /* Outport: '<Root>/rTorqueVectoringMultiplier' */
  ENV_Y.rTorqueVectoringMultiplier = ENV_B.rTorqueVectoringMultiplier;

  /* Outport: '<Root>/NModelNumberDisplay5' */
  ENV_Y.NModelNumberDisplay5 = ENV_B.NModeNumberDisplay5;

  /* Outport: '<Root>/PEngineBraking' */
  ENV_Y.PEngineBraking = ENV_B.PEngineBraking;

  /* Outport: '<Root>/NModelNumberDisplay6' */
  ENV_Y.NModelNumberDisplay6 = ENV_B.NModeNumberDisplay6;

  /* Outport: '<Root>/NPowerControllerKpSelector' */
  ENV_Y.NPowerControllerKpSelector = ENV_B.NPowerControllerKpSelector;

  /* Outport: '<Root>/NTorqueSplitSpeedSelector' */
  ENV_Y.NTorqueSplitSpeedSelector = ENV_B.NTorqueSplitSpeedSelector;

  /* Outport: '<Root>/NBMSDLCOut' */
  ENV_Y.NBMSDLCOut = ENV_B.NBMSDLC;

  /* Outport: '<Root>/NInvState' */
  ENV_Y.NInvState_o = ENV_B.NInvState_d;

  /* Outport: '<Root>/NBMSState' */
  ENV_Y.NBMSState_f = ENV_B.NBMSState_f;

  /* Outport: '<Root>/rSlipRatioFLActual' */
  ENV_Y.rSlipRatioFLActual = ENV_B.rSlipRatioFLActual;

  /* Outport: '<Root>/rSlipRatioFRActual' */
  ENV_Y.rSlipRatioFRActual = ENV_B.rSlipRatioFRActual;

  /* Outport: '<Root>/rSlipRatioRLActual' */
  ENV_Y.rSlipRatioRLActual = ENV_B.rSlipRatioRLActual;

  /* Outport: '<Root>/rSlipRatioRRActual' */
  ENV_Y.rSlipRatioRRActual = ENV_B.rSlipRatioRRActual;

  /* Outport: '<Root>/NTractionControlMultiplierRR' */
  ENV_Y.NTractionControlMultiplierRR = ENV_B.NTractionControlMultiplierRR;

  /* Outport: '<Root>/NABSMultiplierRR' */
  ENV_Y.NABSMultiplierRR = ENV_B.NABSMultiplierRR;

  /* Outport: '<Root>/NTractionControlMultiplierRL' */
  ENV_Y.NTractionControlMultiplierRL = ENV_B.NTractionControlMultiplierRL;

  /* Outport: '<Root>/NABSMultiplierRL' */
  ENV_Y.NABSMultiplierRL = ENV_B.NABSMultiplierRL;

  /* Outport: '<Root>/NThrottleMap' */
  ENV_Y.NThrottleMap = ENV_B.NThrottleMap;

  /* Outport: '<Root>/BReadyToDrive' */
  ENV_Y.BReadyToDrive = ENV_B.BReadyToDrive;

  /* Outport: '<Root>/MTractionControlFinalFR' */
  ENV_Y.MTractionControlFinalFR = ENV_B.MTractionControlFRTotal;

  /* Outport: '<Root>/MTractionControlFinalRR' */
  ENV_Y.MTractionControlFinalRR = ENV_B.MTractionControlRRTotal;

  /* Outport: '<Root>/MTractionControlFinalRL' */
  ENV_Y.MTractionControlFinalRL = ENV_B.MTractionControlRLTotal;

  /* Outport: '<Root>/MTractionControlFinalFL' */
  ENV_Y.MTractionControlFinalFL = ENV_B.MTractionControlFLTotal;

  /* Outport: '<Root>/NABSMultiplierFL' */
  ENV_Y.NABSMultiplierFL = ENV_B.NABSMultiplierFL;

  /* Outport: '<Root>/NABSMultiplierFR' */
  ENV_Y.NABSMultiplierFR = ENV_B.NABSMultiplierFR;

  /* Outport: '<Root>/BBalancingActiveOut' */
  ENV_Y.BBalancingActiveOut = ENV_B.BBalancingActive;

  /* Outport: '<Root>/BBMSP0A0COut' */
  ENV_Y.BBMSP0A0COut = ENV_B.BBMSP0A0C;

  /* Outport: '<Root>/MTVFinalFL' */
  ENV_Y.MTVFinalFL = ENV_B.MTorqueVectoringFL;

  /* Outport: '<Root>/MTVFinalFR' */
  ENV_Y.MTVFinalFR = ENV_B.MTorqueVectoringFR;

  /* Outport: '<Root>/MTVFinalRL' */
  ENV_Y.MTVFinalRL = ENV_B.MTorqueVectoringRL;

  /* Outport: '<Root>/MTVFinalRR' */
  ENV_Y.MTVFinalRR = ENV_B.MTorqueVectoringRR;

  /* Outport: '<Root>/NTractionControlMultiplierFL' */
  ENV_Y.NTractionControlMultiplierFL = ENV_B.NTractionControlMultiplierFL;

  /* Outport: '<Root>/NTractionControlMultiplierFR ' */
  ENV_Y.NTractionControlMultiplierFR = ENV_B.NTractionControlMultiplierFR;

  /* Outport: '<Root>/BBMSP0A0E ' */
  ENV_Y.BBMSP0A0E = ENV_B.BBMSP0A0E;

  /* Outport: '<Root>/BBMSP0A10 ' */
  ENV_Y.BBMSP0A10 = ENV_B.BBMSP0A10;

  /* Outport: '<Root>/MDischargeLimited' */
  ENV_Y.MDischargeLimited = ENV_B.MDischargeLimited;

  /* Outport: '<Root>/MDriverRegenRequested' */
  ENV_Y.MDriverRegenRequested_f = ENV_B.MDriverRegenRequested_d;

  /* Outport: '<Root>/rSlipRatioOptimal' */
  ENV_Y.rSlipRatioOptimal = ENV_B.rSlipRatioOptimal;

  /* Outport: '<Root>/MRegenLimited' */
  ENV_Y.MRegenLimited = ENV_B.MRegenLimited;

  /* Outport: '<Root>/MSpinningModeFL' */
  ENV_Y.MSpinningModeFL = ENV_B.MSpinningModelFL;

  /* Outport: '<Root>/MSpinningModeFR' */
  ENV_Y.MSpinningModeFR = ENV_B.MSpinningModelFR;

  /* Outport: '<Root>/NCarState' */
  ENV_Y.NCarState_f = ENV_B.NCarState_h;

  /* Outport: '<Root>/MSpinningModelRL' */
  ENV_Y.MSpinningModelRL = ENV_B.MSpinningModelRL;

  /* Outport: '<Root>/MSpinningModelRR' */
  ENV_Y.MSpinningModelRR = ENV_B.MSpinningModelRR;

  /* Outport: '<Root>/MTorqueDistributionFinalFL' */
  ENV_Y.MTorqueDistributionFinalFL = ENV_B.MTorqueDistributionFL;

  /* Outport: '<Root>/MTorqueDistributionFinalFR' */
  ENV_Y.MTorqueDistributionFinalFR = ENV_B.MTorqueDistributionFR;

  /* Outport: '<Root>/MTorqueDistributionFinalRL' */
  ENV_Y.MTorqueDistributionFinalRL = ENV_B.MTorqueDistributionRL;

  /* Outport: '<Root>/MTorqueDistributionFinalRR' */
  ENV_Y.MTorqueDistributionFinalRR = ENV_B.MTorqueDistributionRR;

  /* Outport: '<Root>/VDamperPotentiometerFLOut' */
  ENV_Y.VDamperPotentiometerFLOut = ENV_B.VDamperPotentiometerFL;

  /* Outport: '<Root>/VDamperPotentiometerFROut' */
  ENV_Y.VDamperPotentiometerFROut = ENV_B.VDamperPotentiometerFR;

  /* Outport: '<Root>/rMotorTemperatureDerateFR' */
  ENV_Y.rMotorTemperatureDerateFR = ENV_B.rMotorTemperatureDerateFR;

  /* Outport: '<Root>/rMotorTemperatureDerateFL' */
  ENV_Y.rMotorTemperatureDerateFL = ENV_B.rMotorTemperatureDerateFL;

  /* Outport: '<Root>/rMotorTemperatureDerateRR' */
  ENV_Y.rMotorTemperatureDerateRR = ENV_B.rMotorTemperatureDerateRR;

  /* Outport: '<Root>/rMotorTemperatureDerateRL' */
  ENV_Y.rMotorTemperatureDerateRL = ENV_B.rMotorTemperatureDerateRL;

  /* Outport: '<Root>/rInvTemperatureDerateFR' */
  ENV_Y.rInvTemperatureDerateFR = ENV_B.rInvTemperatureDerateFR;

  /* Outport: '<Root>/rInvTemperatureDerateFL' */
  ENV_Y.rInvTemperatureDerateFL = ENV_B.rInvTemperatureDerateFL;

  /* Outport: '<Root>/rInvTemperatureDerateRR' */
  ENV_Y.rInvTemperatureDerateRR = ENV_B.rInvTemperatureDerateRR;

  /* Outport: '<Root>/rInvTemperatureDerateRL' */
  ENV_Y.rInvTemperatureDerateRL = ENV_B.rInvTemperatureDerateRL;

  /* Outport: '<Root>/MTotalEMSRequested' */
  ENV_Y.MTotalEMSRequested = ENV_B.MTotalEMSRequested;

  /* Outport: '<Root>/rThrottlePedal1' */
  ENV_Y.rThrottlePedal1 = ENV_B.rThrottlePedal;

  /* Outport: '<Root>/nMotorRL ' */
  ENV_Y.nMotorRL = ENV_B.nMotorRL;

  /* Outport: '<Root>/nMotorFL ' */
  ENV_Y.nMotorFL = ENV_B.nMotorFL;

  /* Outport: '<Root>/nMotorRR ' */
  ENV_Y.nMotorRR = ENV_B.nMotorRR;

  /* Outport: '<Root>/nMotorFR ' */
  ENV_Y.nMotorFR = ENV_B.nMotorFR;

  /* Outport: '<Root>/BDischargeAllowed' */
  ENV_Y.BDischargeAllowed = ENV_B.BDischargeAllowed;

  /* Outport: '<Root>/TMotorRL ' */
  ENV_Y.TMotorRL = ENV_B.TMotorRL;

  /* Outport: '<Root>/TInvRL ' */
  ENV_Y.TInvRL = ENV_B.TInvRL;

  /* Outport: '<Root>/TMotorFL ' */
  ENV_Y.TMotorFL = ENV_B.TMotorFL;

  /* Outport: '<Root>/TInvFL ' */
  ENV_Y.TInvFL = ENV_B.TInvFL;

  /* Outport: '<Root>/TMotorRR ' */
  ENV_Y.TMotorRR = ENV_B.TMotorRR;

  /* Outport: '<Root>/TInvRR ' */
  ENV_Y.TInvRR = ENV_B.TInvRR;

  /* Outport: '<Root>/TMotorFR ' */
  ENV_Y.TMotorFR = ENV_B.TMotorFR;

  /* Outport: '<Root>/TInvFR ' */
  ENV_Y.TInvFR = ENV_B.TInvFR;

  /* Outport: '<Root>/TInvMax' */
  ENV_Y.TInvMax = ENV_B.TInvMax;

  /* Outport: '<Root>/TMotorMax' */
  ENV_Y.TMotorMax = ENV_B.TMotorMax;

  /* Outport: '<Root>/NInvDTCRL ' */
  ENV_Y.NInvDTCRL = ENV_B.NInvDTCRL;

  /* Outport: '<Root>/NInvDTCFL ' */
  ENV_Y.NInvDTCFL = ENV_B.NInvDTCFL;

  /* Outport: '<Root>/NInvDTCRR ' */
  ENV_Y.NInvDTCRR = ENV_B.NInvDTCRR;

  /* Outport: '<Root>/NInvDTCFR ' */
  ENV_Y.NInvDTCFR = ENV_B.NInvDTCFR;

  /* Outport: '<Root>/TCellMax ' */
  ENV_Y.TCellMax = ENV_B.TCellMax;

  /* Outport: '<Root>/VCellDelta' */
  ENV_Y.VCellDelta = ENV_B.VCellDelta;

  /* Outport: '<Root>/VDCAccumulator ' */
  ENV_Y.VDCAccumulator = ENV_B.VDCAccumulator;

  /* Outport: '<Root>/IBMSHallEffect ' */
  ENV_Y.IBMSHallEffect = ENV_B.IBMSHallEffect;

  /* Outport: '<Root>/VDCInvRL ' */
  ENV_Y.VDCInvRL = ENV_B.VDCInvRL;

  /* Outport: '<Root>/IIVTS ' */
  ENV_Y.IIVTS = ENV_B.IIVTS;

  /* Outport: '<Root>/MTotalRequested' */
  ENV_Y.MTotalRequested_h = ENV_B.MTotalRequested_p;

  /* Outport: '<Root>/BEMSActivated' */
  ENV_Y.BEMSActivated = ENV_B.BEMSActivated;

  /* Outport: '<Root>/BTractionControlActivated' */
  ENV_Y.BTractionControlActivated = ENV_B.BTractionControlActivated;

  /* Outport: '<Root>/BAccumulatorFanOn' */
  ENV_Y.BAccumulatorFanOn = ENV_B.BAccumulatorFanOn;

  /* Outport: '<Root>/VCellMin ' */
  ENV_Y.VCellMin = ENV_B.VCellMin;

  /* Outport: '<Root>/VCellMax ' */
  ENV_Y.VCellMax = ENV_B.VCellMax;

  /* Outport: '<Root>/TCellMin ' */
  ENV_Y.TCellMin = ENV_B.TCellMin;

  /* Outport: '<Root>/NTractionControlKpSelector' */
  ENV_Y.NTractionControlKpSelector = ENV_B.NTractionControlKpSelector;

  /* Outport: '<Root>/nYawRateErrorActual' */
  ENV_Y.nYawRateErrorActual = ENV_B.nYawRateErrorActual;

  /* Outport: '<Root>/tPedalOverlap' */
  ENV_Y.tPedalOverlap = ENV_B.tPedalOverlap;

  /* Outport: '<Root>/tAppsTimer' */
  ENV_Y.tAppsTimer = ENV_B.tAppsTimer;

  /* Outport: '<Root>/aSteeringAngle' */
  ENV_Y.aSteeringAngle = ENV_B.aSteeringAngle;

  /* Outport: '<Root>/PDischargeLimited' */
  ENV_Y.PDischargeLimited = ENV_B.PDischargeLimited;

  /* Outport: '<Root>/rSplitRear' */
  ENV_Y.rSplitRear = ENV_B.rSplitRear;

  /* Outport: '<Root>/BAccumulatorFanOnRequest' */
  ENV_Y.BAccumulatorFanOnRequest = ENV_B.BAccumulatorFanOn;

  /* Outport: '<Root>/BInvLVOnRequest' */
  ENV_Y.BInvLVOnRequest = ENV_B.BInvLVOn;

  /* Outport: '<Root>/BEMS1000mPoint' */
  ENV_Y.BEMS1000mPoint = ENV_B.BEMS1000mPoint;

  /* Outport: '<Root>/BAccumulatorFanDutyRequest' */
  ENV_Y.BAccumulatorFanDutyRequest = ENV_B.BAccumulatorFanDuty;

  /* Outport: '<Root>/BEMS995mPoint' */
  ENV_Y.BEMS995mPoint = ENV_B.BEMS995mPoint;

  /* Outport: '<Root>/BBrakeLightOnRequest' */
  ENV_Y.BBrakeLightOnRequest = ENV_B.BBrakeLight_b;

  /* Outport: '<Root>/MDriverDischargeRequested' */
  ENV_Y.MDriverDischargeRequested_f = ENV_B.MDriverDischargeRequested_h;

  /* Outport: '<Root>/BReadyToDriveBuzzerRequest' */
  ENV_Y.BReadyToDriveBuzzerRequest = ENV_B.BReadyToDriveBuzzer;

  /* Outport: '<Root>/MFLFinal' */
  ENV_Y.MFLFinal = ENV_B.MFLFinal;

  /* Outport: '<Root>/MFRFinal' */
  ENV_Y.MFRFinal = ENV_B.MFRFinal;

  /* Outport: '<Root>/MRLFinal' */
  ENV_Y.MRLFinal = ENV_B.MRLFinal;

  /* Outport: '<Root>/MRRFinal' */
  ENV_Y.MRRFinal = ENV_B.MRRFinal;

  /* Outport: '<Root>/rRegenPaddle' */
  ENV_Y.rRegenPaddle_a = ENV_B.rRegenPaddle_i;

  /* Outport: '<Root>/Multiplexer' incorporates:
   *  UnitDelay: '<S1>/Output'
   */
  ENV_Y.Multiplexer = ENV_DW.Output_DSTATE;

  /* Switch: '<S6>/FixPt Switch' incorporates:
   *  Constant: '<S5>/FixPt Constant'
   *  Constant: '<S6>/Constant'
   *  Sum: '<S5>/FixPt Sum1'
   *  UnitDelay: '<S1>/Output'
   */
  if ((uint8_T)(ENV_DW.Output_DSTATE + 1) > 1) {
    ENV_DW.Output_DSTATE = 0U;
  } else {
    ENV_DW.Output_DSTATE++;
  }

  /* End of Switch: '<S6>/FixPt Switch' */

  /* Outport: '<Root>/multiplexer' incorporates:
   *  UnitDelay: '<S2>/Output'
   */
  ENV_Y.multiplexer = ENV_DW.Output_DSTATE_f;

  /* Switch: '<S8>/FixPt Switch' incorporates:
   *  Constant: '<S7>/FixPt Constant'
   *  Constant: '<S8>/Constant'
   *  Sum: '<S7>/FixPt Sum1'
   *  UnitDelay: '<S2>/Output'
   */
  if ((uint8_T)(ENV_DW.Output_DSTATE_f + 1) > 1) {
    ENV_DW.Output_DSTATE_f = 0U;
  } else {
    ENV_DW.Output_DSTATE_f++;
  }

  /* End of Switch: '<S8>/FixPt Switch' */

  /* Switch: '<S3>/Switch' incorporates:
   *  Constant: '<S10>/Constant'
   *  Constant: '<S9>/Constant'
   *  Inport: '<Root>/vLateralOXTSIMU'
   *  Logic: '<S3>/OR'
   *  RelationalOperator: '<S10>/Compare'
   *  RelationalOperator: '<S9>/Compare'
   */
  if ((!(ENV_U.vLateralOXTSIMU >= -0.1)) || (!(ENV_U.vLateralOXTSIMU <= 0.1))) {
    /* Update for Memory: '<S3>/Memory' */
    ENV_DW.Memory_PreviousInput = ENV_U.vLateralOXTSIMU;
  }

  /* End of Switch: '<S3>/Switch' */
}

/* Model initialize function */
void ENV_initialize(void)
{
  /* Model Initialize function for ModelReference Block: '<Root>/Model' */
  MASTER_initialize(rtmGetErrorStatusPointer(ENV_M),
                    &(ENV_DW.Model_InstanceData.rtm),
                    &(ENV_DW.Model_InstanceData.rtdw));

  /* SystemInitialize for ModelReference generated from: '<Root>/Model' */
  MASTER_Init(&(ENV_DW.Model_InstanceData.rtdw));

  /* user code (Initialize function Body) */
  LL_TIM_EnableCounter(TIM2);
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
