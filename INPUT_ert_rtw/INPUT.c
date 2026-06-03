/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: INPUT.c
 *
 * Code generated for Simulink model 'INPUT'.
 *
 * Model version                  : 13.18
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Wed Jun  3 15:29:29 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "INPUT.h"
#include "INPUT_types.h"
#include "WheelSpeeds.h"
#include "InverterSignals.h"

const SensorSignalsBus INPUT_rtZSensorSignalsBus = {
  0.0,                                 /* pBrakeF */
  0.0,                                 /* pBrakeR */
  0.0,                                 /* VDamperPotentiometerFL */
  0.0,                                 /* VDamperPotentiometerFR */
  0.0,                                 /* NDisplayNumberDDU7 */
  0.0,                                 /* VSteeringAngle */
  0.0,                                 /* VThrottlePedal1 */
  0.0,                                 /* VThrottlePedal2 */
  false,                               /* BSteeringWheelButton1 */
  false,                               /* BSteeringWheelButton2 */
  false,                               /* BSteeringWheelButton3 */
  false,                               /* BSteeringWheelButton4 */
  false,                               /* BSteeringWheelButton5 */
  false,                               /* BSteeringWheelButton6 */
  false,                               /* BSteeringWheelButton7 */
  false,                               /* BSteeringWheelButton8 */
  0.0,                                 /* VRegenPaddle1 */
  0.0,                                 /* VRegenPaddle2 */
  0.0,                                 /* C1P01_Status */
  0.0,                                 /* C1P02_Status */
  0.0,                                 /* C1P03_Status */
  0.0,                                 /* C1P04_Status */
  0.0,                                 /* C1P07_Status */
  0.0,                                 /* C1P11_Status */
  0.0,                                 /* C1P12_Status */
  0.0,                                 /* C1P13_Status */
  0.0,                                 /* C1P25_Status */
  0.0,                                 /* C1P26_Status */
  0.0,                                 /* C1P28_Status */
  0.0,                                 /* C1P30_Status */
  0.0,                                 /* C1P31_Status */
  0.0,                                 /* C1P33_Status */
  0.0,                                 /* C1P34_Status */
  0.0,                                 /* C1P36_Status */
  0.0,                                 /* C1P37_Status */
  0.0,                                 /* C1P38_Status */
  0.0,                                 /* C2P01_Status */
  0.0,                                 /* C2P02_Status */
  0.0,                                 /* C2P03_Status */
  0.0,                                 /* C2P04_Status */
  0.0,                                 /* C2P05_Status */
  0.0,                                 /* C2P13_Status */
  0.0,                                 /* C2P25_Status */
  0.0,                                 /* C2P26_Status */
  0.0,                                 /* C2P27_Status */
  0.0,                                 /* C2P28_Status */
  0.0,                                 /* C2P29_Status */
  0.0,                                 /* C2P30_Status */
  0.0,                                 /* C2P31_Status */
  0.0,                                 /* C2P33_Status */
  0.0,                                 /* C1P16_Digital */
  0.0,                                 /* C1P17_Digital */
  0.0,                                 /* C2P17_Digital */
  0.0,                                 /* C2P18_Digital */
  0.0,                                 /* C2P35_Status */
  0.0,                                 /* C2P36_Status */
  0.0,                                 /* C2P37_Status */
  0.0,                                 /* C2P38_Status */
  0.0,                                 /* ILVSystem */
  0.0,                                 /* TLVSystem */
  0.0,                                 /* VLVSystem */
  0.0,                                 /* VDamperPotentiometerRL */
  0.0                                  /* VDamperPotentiometerRR */
};                                     /* SensorSignalsBus ground */

const GPSIMUSignalsBus INPUT_rtZGPSIMUSignalsBus = {
  0.0,                                 /* vLongitudinalOXTSIMU */
  0.0,                                 /* gLateralOXTSIMU */
  0.0,                                 /* gLongitudinalOXTSIMU */
  0.0                                  /* nYawRateOXTSIMU */
};                                     /* GPSIMUSignalsBus ground */

const BMSSignalsBus INPUT_rtZBMSSignalsBus = {
  0.0,                                 /* VCellMax */
  0.0,                                 /* VCellDelta */
  0.0,                                 /* VCellMin */
  0.0,                                 /* VCellAverage */
  0.0,                                 /* TCellMax */
  0.0,                                 /* NBMSDLC */
  0.0,                                 /* TCellMin */
  0.0,                                 /* IBMSHallEffect */
  0.0,                                 /* VDCAccumulator */
  0.0,                                 /* RCellAverage */
  false,                               /* BBalancingActive */
  false,                               /* BBMSP0A0C */
  false,                               /* BBMSP0A0E */
  false,                               /* BBMSP0A10 */
  false,                               /* BBMSP0A80 */
  false,                               /* BBMSP0AC0 */
  false,                               /* BBMSP0AFA */
  0.0                                  /* IIVTS */
};                                     /* BMSSignalsBus ground */

/* Block states (default storage) */
DW_INPUT_T INPUT_DW;

/* External inputs (root inport signals with default storage) */
ExtU_INPUT_T INPUT_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_INPUT_T INPUT_Y;

/* Real-time model */
static RT_MODEL_INPUT_T INPUT_M_;
RT_MODEL_INPUT_T *const INPUT_M = &INPUT_M_;

/* Model step function */
void INPUT_step(void)
{
  /* BusCreator generated from: '<Root>/InverterSignalsBus' incorporates:
   *  Inport: '<Root>/InverterCAN'
   *  ModelReference generated from: '<Root>/Model1'
   */
  InverterSignals(&INPUT_U.InverterCAN.InverterFLCANBus.nMotorFL,
                  &INPUT_U.InverterCAN.InverterFLCANBus.BInvDCOnFL,
                  &INPUT_U.InverterCAN.InverterFLCANBus.BInvErrorFL,
                  &INPUT_U.InverterCAN.InverterFLCANBus.BInvOnFL,
                  &INPUT_U.InverterCAN.InverterFLCANBus.BInvDCQuitInvOnFL,
                  &INPUT_U.InverterCAN.InverterFLCANBus.BInvQuitInvOnFL,
                  &INPUT_U.InverterCAN.InverterFLCANBus.BInvSysReadyFL,
                  &INPUT_U.InverterCAN.InverterFLCANBus.BInvWarnFL,
                  &INPUT_U.InverterCAN.InverterFLCANBus.MMotorMeasuredFL,
                  &INPUT_U.InverterCAN.InverterFLCANBus.NInvDTCFL,
                  &INPUT_U.InverterCAN.InverterFLCANBus.TMotorFL,
                  &INPUT_U.InverterCAN.InverterFLCANBus.VDCInvFL,
                  &INPUT_U.InverterCAN.InverterFLCANBus.TInvFL,
                  &INPUT_U.InverterCAN.InverterFRCANBus.nMotorFR,
                  &INPUT_U.InverterCAN.InverterFRCANBus.BInvDCOnFR,
                  &INPUT_U.InverterCAN.InverterFRCANBus.BInvErrorFR,
                  &INPUT_U.InverterCAN.InverterFRCANBus.BInvOnFR,
                  &INPUT_U.InverterCAN.InverterFRCANBus.BInvDCQuitInvOnFR,
                  &INPUT_U.InverterCAN.InverterFRCANBus.BInvQuitInvOnFR,
                  &INPUT_U.InverterCAN.InverterFRCANBus.BInvSysReadyFR,
                  &INPUT_U.InverterCAN.InverterFRCANBus.BInvWarnFR,
                  &INPUT_U.InverterCAN.InverterFRCANBus.MMotorMeasuredFR,
                  &INPUT_U.InverterCAN.InverterFRCANBus.NInvDTCFR,
                  &INPUT_U.InverterCAN.InverterFRCANBus.TMotorFR,
                  &INPUT_U.InverterCAN.InverterFRCANBus.VDCInvFR,
                  &INPUT_U.InverterCAN.InverterFRCANBus.TInvFR,
                  &INPUT_U.InverterCAN.InverterRLCANBus.nMotorRL,
                  &INPUT_U.InverterCAN.InverterRLCANBus.BInvDCOnRL,
                  &INPUT_U.InverterCAN.InverterRLCANBus.BInvErrorRL,
                  &INPUT_U.InverterCAN.InverterRLCANBus.BInvOnRL,
                  &INPUT_U.InverterCAN.InverterRLCANBus.BInvDCQuitInvOnRL,
                  &INPUT_U.InverterCAN.InverterRLCANBus.BInvQuitInvOnRL,
                  &INPUT_U.InverterCAN.InverterRLCANBus.BInvSysReadyRL,
                  &INPUT_U.InverterCAN.InverterRLCANBus.BInvWarnRL,
                  &INPUT_U.InverterCAN.InverterRLCANBus.MMotorMeasuredRL,
                  &INPUT_U.InverterCAN.InverterRLCANBus.NInvDTCRL,
                  &INPUT_U.InverterCAN.InverterRLCANBus.TMotorRL,
                  &INPUT_U.InverterCAN.InverterRLCANBus.VDCInvRL,
                  &INPUT_U.InverterCAN.InverterRLCANBus.TInvRL,
                  &INPUT_U.InverterCAN.InverterRRCANBus.nMotorRR,
                  &INPUT_U.InverterCAN.InverterRRCANBus.BInvDCOnRR,
                  &INPUT_U.InverterCAN.InverterRRCANBus.BInvErrorRR,
                  &INPUT_U.InverterCAN.InverterRRCANBus.BInvOnRR,
                  &INPUT_U.InverterCAN.InverterRRCANBus.BInvDCQuitInvOnRR,
                  &INPUT_U.InverterCAN.InverterRRCANBus.BInvQuitInvOnRR,
                  &INPUT_U.InverterCAN.InverterRRCANBus.BInvSysReadyRR,
                  &INPUT_U.InverterCAN.InverterRRCANBus.BInvWarnRR,
                  &INPUT_U.InverterCAN.InverterRRCANBus.MMotorMeasuredRR,
                  &INPUT_U.InverterCAN.InverterRRCANBus.NInvDTCRR,
                  &INPUT_U.InverterCAN.InverterRRCANBus.TMotorRR,
                  &INPUT_U.InverterCAN.InverterRRCANBus.VDCInvRR,
                  &INPUT_U.InverterCAN.InverterRRCANBus.TInvRR,
                  &INPUT_Y.InverterSignalsBus_m.InverterRLSignalsBus.nMotorRL,
                  &INPUT_Y.InverterSignalsBus_m.InverterRLSignalsBus.BInvDCOnRL,
                  &INPUT_Y.InverterSignalsBus_m.InverterRLSignalsBus.BInvErrorRL,
                  &INPUT_Y.InverterSignalsBus_m.InverterRLSignalsBus.BInvOnRL,
                  &INPUT_Y.InverterSignalsBus_m.InverterRLSignalsBus.BInvDCQuitInvOnRL,
                  &INPUT_Y.InverterSignalsBus_m.InverterRLSignalsBus.BInvQuitInvOnRL,
                  &INPUT_Y.InverterSignalsBus_m.InverterRLSignalsBus.BInvSysReadyRL,
                  &INPUT_Y.InverterSignalsBus_m.InverterRLSignalsBus.BInvWarnRL,
                  &INPUT_Y.InverterSignalsBus_m.InverterRLSignalsBus.MMotorMeasuredRL,
                  &INPUT_Y.InverterSignalsBus_m.InverterRLSignalsBus.NInvDTCRL,
                  &INPUT_Y.InverterSignalsBus_m.InverterRLSignalsBus.TMotorRL,
                  &INPUT_Y.InverterSignalsBus_m.InverterRLSignalsBus.VDCInvRL,
                  &INPUT_Y.InverterSignalsBus_m.InverterRLSignalsBus.TInvRL,
                  &INPUT_Y.InverterSignalsBus_m.InverterFLSignalsBus.nMotorFL,
                  &INPUT_Y.InverterSignalsBus_m.InverterFLSignalsBus.BInvDCOnFL,
                  &INPUT_Y.InverterSignalsBus_m.InverterFLSignalsBus.BInvErrorFL,
                  &INPUT_Y.InverterSignalsBus_m.InverterFLSignalsBus.BInvOnFL,
                  &INPUT_Y.InverterSignalsBus_m.InverterFLSignalsBus.BInvDCQuitInvOnFL,
                  &INPUT_Y.InverterSignalsBus_m.InverterFLSignalsBus.BInvQuitInvOnFL,
                  &INPUT_Y.InverterSignalsBus_m.InverterFLSignalsBus.BInvSysReadyFL,
                  &INPUT_Y.InverterSignalsBus_m.InverterFLSignalsBus.BInvWarnFL,
                  &INPUT_Y.InverterSignalsBus_m.InverterFLSignalsBus.MMotorMeasuredFL,
                  &INPUT_Y.InverterSignalsBus_m.InverterFLSignalsBus.NInvDTCFL,
                  &INPUT_Y.InverterSignalsBus_m.InverterFLSignalsBus.TMotorFL,
                  &INPUT_Y.InverterSignalsBus_m.InverterFLSignalsBus.VDCInvFL,
                  &INPUT_Y.InverterSignalsBus_m.InverterFLSignalsBus.TInvFL,
                  &INPUT_Y.InverterSignalsBus_m.InverterRRSignalsBus.nMotorRR,
                  &INPUT_Y.InverterSignalsBus_m.InverterRRSignalsBus.BInvDCOnRR,
                  &INPUT_Y.InverterSignalsBus_m.InverterRRSignalsBus.BInvErrorRR,
                  &INPUT_Y.InverterSignalsBus_m.InverterRRSignalsBus.BInvOnRR,
                  &INPUT_Y.InverterSignalsBus_m.InverterRRSignalsBus.BInvDCQuitInvOnRR,
                  &INPUT_Y.InverterSignalsBus_m.InverterRRSignalsBus.BInvQuitInvOnRR,
                  &INPUT_Y.InverterSignalsBus_m.InverterRRSignalsBus.BInvSysReadyRR,
                  &INPUT_Y.InverterSignalsBus_m.InverterRRSignalsBus.BInvWarnRR,
                  &INPUT_Y.InverterSignalsBus_m.InverterRRSignalsBus.MMotorMeasuredRR,
                  &INPUT_Y.InverterSignalsBus_m.InverterRRSignalsBus.NInvDTCRR,
                  &INPUT_Y.InverterSignalsBus_m.InverterRRSignalsBus.TMotorRR,
                  &INPUT_Y.InverterSignalsBus_m.InverterRRSignalsBus.VDCInvRR,
                  &INPUT_Y.InverterSignalsBus_m.InverterRRSignalsBus.TInvRR,
                  &INPUT_Y.InverterSignalsBus_m.InverterFRSignalsBus.nMotorFR,
                  &INPUT_Y.InverterSignalsBus_m.InverterFRSignalsBus.BInvDCOnFR,
                  &INPUT_Y.InverterSignalsBus_m.InverterFRSignalsBus.BInvErrorFR,
                  &INPUT_Y.InverterSignalsBus_m.InverterFRSignalsBus.BInvOnFR,
                  &INPUT_Y.InverterSignalsBus_m.InverterFRSignalsBus.BInvDCQuitInvOnFR,
                  &INPUT_Y.InverterSignalsBus_m.InverterFRSignalsBus.BInvQuitInvOnFR,
                  &INPUT_Y.InverterSignalsBus_m.InverterFRSignalsBus.BInvSysReadyFR,
                  &INPUT_Y.InverterSignalsBus_m.InverterFRSignalsBus.BInvWarnFR,
                  &INPUT_Y.InverterSignalsBus_m.InverterFRSignalsBus.MMotorMeasuredFR,
                  &INPUT_Y.InverterSignalsBus_m.InverterFRSignalsBus.NInvDTCFR,
                  &INPUT_Y.InverterSignalsBus_m.InverterFRSignalsBus.TMotorFR,
                  &INPUT_Y.InverterSignalsBus_m.InverterFRSignalsBus.VDCInvFR,
                  &INPUT_Y.InverterSignalsBus_m.InverterFRSignalsBus.TInvFR);

  /* BusCreator generated from: '<Root>/WheelSpeedsBus' incorporates:
   *  Inport: '<Root>/InverterCAN'
   *  ModelReference generated from: '<Root>/Model'
   *  Outport: '<Root>/WheelSpeedsBus'
   */
  WheelSpeeds(&INPUT_U.InverterCAN.InverterFLCANBus.nMotorFL,
              &INPUT_U.InverterCAN.InverterFRCANBus.nMotorFR,
              &INPUT_U.InverterCAN.InverterRLCANBus.nMotorRL,
              &INPUT_U.InverterCAN.InverterRRCANBus.nMotorRR,
              &INPUT_Y.WheelSpeedsBus_d.vWheelRL,
              &INPUT_Y.WheelSpeedsBus_d.vWheelRR,
              &INPUT_Y.WheelSpeedsBus_d.vWheelFL,
              &INPUT_Y.WheelSpeedsBus_d.vWheelFR);
}

/* Model initialize function */
void INPUT_initialize(void)
{
  /* Model Initialize function for ModelReference Block: '<Root>/Model' */
  WheelSpeeds_initialize(rtmGetErrorStatusPointer(INPUT_M),
    &(INPUT_DW.Model_InstanceData.rtm));

  /* Model Initialize function for ModelReference Block: '<Root>/Model1' */
  InverterSignals_initialize(rtmGetErrorStatusPointer(INPUT_M),
    &(INPUT_DW.Model1_InstanceData.rtm));

  /* ConstCode for Outport: '<Root>/SensorSignalsBus' */
  INPUT_Y.SensorSignalsBus_h = INPUT_rtZSensorSignalsBus;

  /* ConstCode for Outport: '<Root>/GPSIMUSignalsBus' */
  INPUT_Y.GPSIMUSignalsBus_j = INPUT_rtZGPSIMUSignalsBus;

  /* ConstCode for Outport: '<Root>/BMSSignalsBus' */
  INPUT_Y.BMSSignalsBus_o = INPUT_rtZBMSSignalsBus;

  /* user code (Initialize function Body) */
  LL_TIM_EnableCounter(TIM2);
}

/* Model terminate function */
void INPUT_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
