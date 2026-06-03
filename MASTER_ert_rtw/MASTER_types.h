/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: MASTER_types.h
 *
 * Code generated for Simulink model 'MASTER'.
 *
 * Model version                  : 13.13
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Wed Jun  3 15:24:51 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef MASTER_types_h_
#define MASTER_types_h_
#include "rtwtypes.h"
#ifndef DEFINED_TYPEDEF_FOR_InverterFLCANBus_
#define DEFINED_TYPEDEF_FOR_InverterFLCANBus_

typedef struct {
  real_T nMotorFL;
  boolean_T BInvDCOnFL;
  boolean_T BInvErrorFL;
  boolean_T BInvOnFL;
  boolean_T BInvDCQuitInvOnFL;
  boolean_T BInvQuitInvOnFL;
  boolean_T BInvSysReadyFL;
  boolean_T BInvWarnFL;
  real_T MMotorMeasuredFL;
  real_T NInvDTCFL;
  real_T TMotorFL;
  real_T VDCInvFL;
  real_T TInvFL;
} InverterFLCANBus;

#endif

#ifndef DEFINED_TYPEDEF_FOR_InverterFRCANBus_
#define DEFINED_TYPEDEF_FOR_InverterFRCANBus_

typedef struct {
  real_T nMotorFR;
  boolean_T BInvDCOnFR;
  boolean_T BInvErrorFR;
  boolean_T BInvOnFR;
  boolean_T BInvDCQuitInvOnFR;
  boolean_T BInvQuitInvOnFR;
  boolean_T BInvSysReadyFR;
  boolean_T BInvWarnFR;
  real_T MMotorMeasuredFR;
  real_T NInvDTCFR;
  real_T TMotorFR;
  real_T VDCInvFR;
  real_T TInvFR;
} InverterFRCANBus;

#endif

#ifndef DEFINED_TYPEDEF_FOR_InverterRLCANBus_
#define DEFINED_TYPEDEF_FOR_InverterRLCANBus_

typedef struct {
  real_T nMotorRL;
  boolean_T BInvDCOnRL;
  boolean_T BInvErrorRL;
  boolean_T BInvOnRL;
  boolean_T BInvDCQuitInvOnRL;
  boolean_T BInvQuitInvOnRL;
  boolean_T BInvSysReadyRL;
  boolean_T BInvWarnRL;
  real_T MMotorMeasuredRL;
  real_T NInvDTCRL;
  real_T TMotorRL;
  real_T VDCInvRL;
  real_T TInvRL;
} InverterRLCANBus;

#endif

#ifndef DEFINED_TYPEDEF_FOR_InverterRRCANBus_
#define DEFINED_TYPEDEF_FOR_InverterRRCANBus_

typedef struct {
  real_T nMotorRR;
  boolean_T BInvDCOnRR;
  boolean_T BInvErrorRR;
  boolean_T BInvOnRR;
  boolean_T BInvDCQuitInvOnRR;
  boolean_T BInvQuitInvOnRR;
  boolean_T BInvSysReadyRR;
  boolean_T BInvWarnRR;
  real_T MMotorMeasuredRR;
  real_T NInvDTCRR;
  real_T TMotorRR;
  real_T VDCInvRR;
  real_T TInvRR;
} InverterRRCANBus;

#endif

#ifndef DEFINED_TYPEDEF_FOR_CAN1_2Bus_
#define DEFINED_TYPEDEF_FOR_CAN1_2Bus_

typedef struct {
  InverterFLCANBus InverterFLCANBus;
  InverterFRCANBus InverterFRCANBus;
  InverterRLCANBus InverterRLCANBus;
  InverterRRCANBus InverterRRCANBus;
} CAN1_2Bus;

#endif

#ifndef DEFINED_TYPEDEF_FOR_DDU7_Analoge_1_
#define DEFINED_TYPEDEF_FOR_DDU7_Analoge_1_

typedef struct {
  real_T pBrakeF;
  real_T pBrakeR;
  real_T VDamperPotentiometerFL;
  real_T VDamperPotentiometerFR;
  real_T VDamperPotentiometerRL;
  real_T VDamperPotentiometerRR;
} DDU7_Analoge_1;

#endif

#ifndef DEFINED_TYPEDEF_FOR_DDU7_Analoge_2_
#define DEFINED_TYPEDEF_FOR_DDU7_Analoge_2_

typedef struct {
  real_T NDisplayNumberDDU7;
  real_T VSteeringAngle;
  real_T VThrottlePedal1;
  real_T VThrottlePedal2;
} DDU7_Analoge_2;

#endif

#ifndef DEFINED_TYPEDEF_FOR_OXTSDataFrame1540_
#define DEFINED_TYPEDEF_FOR_OXTSDataFrame1540_

typedef struct {
  real_T vLateralOXTSIMU;
  real_T vLongitudinalOXTSIMU;
} OXTSDataFrame1540;

#endif

#ifndef DEFINED_TYPEDEF_FOR_OXTSDataFrame1541_
#define DEFINED_TYPEDEF_FOR_OXTSDataFrame1541_

typedef struct {
  real_T gLateralOXTS;
  real_T gLongitudinalOXTS;
  real_T gVerticalOXTS;
} OXTSDataFrame1541;

#endif

#ifndef DEFINED_TYPEDEF_FOR_OXTSDataFrame1544_
#define DEFINED_TYPEDEF_FOR_OXTSDataFrame1544_

typedef struct {
  real_T nPitchRateOXTSIMU;
  real_T nRollRateOXTSIMU;
  real_T nYawRateOXTSIMU;
} OXTSDataFrame1544;

#endif

#ifndef DEFINED_TYPEDEF_FOR_PDM_Status_1_
#define DEFINED_TYPEDEF_FOR_PDM_Status_1_

typedef struct {
  real_T C1P01_Status;
  real_T C1P02_Status;
  real_T C1P03_Status;
  real_T C1P04_Status;
  real_T C1P07_Status;
  real_T C1P11_Status;
  real_T C1P12_Status;
  real_T C1P13_Status;
  real_T C1P25_Status;
  real_T C1P26_Status;
  real_T C1P28_Status;
  real_T C1P30_Status;
  real_T C1P31_Status;
  real_T C1P33_Status;
  real_T C1P34_Status;
  real_T C1P36_Status;
} PDM_Status_1;

#endif

#ifndef DEFINED_TYPEDEF_FOR_PDM_Status_2_
#define DEFINED_TYPEDEF_FOR_PDM_Status_2_

typedef struct {
  real_T C1P37_Status;
  real_T C1P38_Status;
  real_T C2P01_Status;
  real_T C2P02_Status;
  real_T C2P03_Status;
  real_T C2P04_Status;
  real_T C2P05_Status;
  real_T C2P13_Status;
  real_T C2P25_Status;
  real_T C2P26_Status;
  real_T C2P27_Status;
  real_T C2P28_Status;
  real_T C2P29_Status;
  real_T C2P30_Status;
  real_T C2P31_Status;
  real_T C2P33_Status;
} PDM_Status_2;

#endif

#ifndef DEFINED_TYPEDEF_FOR_PDM_Status_3_
#define DEFINED_TYPEDEF_FOR_PDM_Status_3_

typedef struct {
  real_T C1P16_Digital;
  real_T C1P17_Digital;
  real_T C2P17_Digital;
  real_T C2P18_Digital;
  real_T C2P35_Status;
  real_T C2P36_Status;
  real_T C2P37_Status;
  real_T C2P38_Status;
  real_T ILVSystem;
  real_T TLVSystem;
  real_T VLVSystem;
} PDM_Status_3;

#endif

#ifndef DEFINED_TYPEDEF_FOR_PDM_Analoge_1_
#define DEFINED_TYPEDEF_FOR_PDM_Analoge_1_

typedef struct {
  real_T C1P14_AnalogInput03;
  real_T C1P15_AnalogInput04;
  real_T C2P15_AnalogInput01;
  real_T C2P16_AnalogInput02;
} PDM_Analoge_1;

#endif

#ifndef DEFINED_TYPEDEF_FOR_PDM_Analoge_2_
#define DEFINED_TYPEDEF_FOR_PDM_Analoge_2_

typedef struct {
  real_T C1P05_AnalogInput07;
  real_T C1P06_AnalogInput08;
  real_T C1P27_AnalogInput05;
  real_T C1P29_AnalogInput06;
} PDM_Analoge_2;

#endif

#ifndef DEFINED_TYPEDEF_FOR_PDM_Analoge_3_
#define DEFINED_TYPEDEF_FOR_PDM_Analoge_3_

typedef struct {
  real_T C1P18_AnalogInput09;
  real_T C1P19_AnalogInput10;
  real_T C1P32_AnalogInput11;
  real_T C1P35_AnalogInput12;
} PDM_Analoge_3;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SteeringWheelBus_
#define DEFINED_TYPEDEF_FOR_SteeringWheelBus_

typedef struct {
  boolean_T BSteeringWheelButton1;
  boolean_T BSteeringWheelButton2;
  boolean_T BSteeringWheelButton3;
  boolean_T BSteeringWheelButton4;
  boolean_T BSteeringWheelButton5;
  boolean_T BSteeringWheelButton6;
  boolean_T BSteeringWheelButton7;
  boolean_T BSteeringWheelButton8;
  real_T VRegenPaddle1;
  real_T VRegenPaddle2;
} SteeringWheelBus;

#endif

#ifndef DEFINED_TYPEDEF_FOR_CAN3Bus_
#define DEFINED_TYPEDEF_FOR_CAN3Bus_

typedef struct {
  DDU7_Analoge_1 DDU7_Analoge_1;
  DDU7_Analoge_2 DDU7_Analoge_2;
  OXTSDataFrame1540 OXTSDataFrame1540;
  OXTSDataFrame1541 OXTSDataFrame1541;
  OXTSDataFrame1544 OXTSDataFrame1544;
  PDM_Status_1 PDM_Status_1;
  PDM_Status_2 PDM_Status_2;
  PDM_Status_3 PDM_Status_3;
  PDM_Analoge_1 PDM_Analoge_1;
  PDM_Analoge_2 PDM_Analoge_2;
  PDM_Analoge_3 PDM_Analoge_3;
  SteeringWheelBus SteeringWheelBus;
} CAN3Bus;

#endif

#ifndef DEFINED_TYPEDEF_FOR_CAN4Bus_
#define DEFINED_TYPEDEF_FOR_CAN4Bus_

typedef struct {
  real_T IIVTS;
  real_T IBMSHallEffect;
  real_T VDCAccumulator;
  real_T TCellMin;
  real_T VCellAverage;
  real_T VCellMax;
  real_T TCellMax;
  real_T NBMSDLC;
  real_T VCellMin;
  real_T RCellAverage;
  real_T BBalancingActive;
  real_T BBMSP0A0C;
  real_T BBMSP0A0E;
  real_T BBMSP0A10;
  real_T BBMSP0A80;
  real_T BBMSP0AC0;
  real_T BBMSP0AFA;
} CAN4Bus;

#endif

#ifndef DEFINED_TYPEDEF_FOR_InverterRLSignalsBus_
#define DEFINED_TYPEDEF_FOR_InverterRLSignalsBus_

typedef struct {
  real_T nMotorRL;
  boolean_T BInvDCOnRL;
  boolean_T BInvErrorRL;
  boolean_T BInvOnRL;
  boolean_T BInvDCQuitInvOnRL;
  boolean_T BInvQuitInvOnRL;
  boolean_T BInvSysReadyRL;
  boolean_T BInvWarnRL;
  real_T MMotorMeasuredRL;
  real_T NInvDTCRL;
  real_T TMotorRL;
  real_T VDCInvRL;
  real_T TInvRL;
} InverterRLSignalsBus;

#endif

#ifndef DEFINED_TYPEDEF_FOR_InverterFLSignalsBus_
#define DEFINED_TYPEDEF_FOR_InverterFLSignalsBus_

typedef struct {
  real_T nMotorFL;
  boolean_T BInvDCOnFL;
  boolean_T BInvErrorFL;
  boolean_T BInvOnFL;
  boolean_T BInvDCQuitInvOnFL;
  boolean_T BInvQuitInvOnFL;
  boolean_T BInvSysReadyFL;
  boolean_T BInvWarnFL;
  real_T MMotorMeasuredFL;
  real_T NInvDTCFL;
  real_T TMotorFL;
  real_T VDCInvFL;
  real_T TInvFL;
} InverterFLSignalsBus;

#endif

#ifndef DEFINED_TYPEDEF_FOR_InverterRRSignalsBus_
#define DEFINED_TYPEDEF_FOR_InverterRRSignalsBus_

typedef struct {
  real_T nMotorRR;
  boolean_T BInvDCOnRR;
  boolean_T BInvErrorRR;
  boolean_T BInvOnRR;
  boolean_T BInvDCQuitInvOnRR;
  boolean_T BInvQuitInvOnRR;
  boolean_T BInvSysReadyRR;
  boolean_T BInvWarnRR;
  real_T MMotorMeasuredRR;
  real_T NInvDTCRR;
  real_T TMotorRR;
  real_T VDCInvRR;
  real_T TInvRR;
} InverterRRSignalsBus;

#endif

#ifndef DEFINED_TYPEDEF_FOR_InverterFRSignalsBus_
#define DEFINED_TYPEDEF_FOR_InverterFRSignalsBus_

typedef struct {
  real_T nMotorFR;
  boolean_T BInvDCOnFR;
  boolean_T BInvErrorFR;
  boolean_T BInvOnFR;
  boolean_T BInvDCQuitInvOnFR;
  boolean_T BInvQuitInvOnFR;
  boolean_T BInvSysReadyFR;
  boolean_T BInvWarnFR;
  real_T MMotorMeasuredFR;
  real_T NInvDTCFR;
  real_T TMotorFR;
  real_T VDCInvFR;
  real_T TInvFR;
} InverterFRSignalsBus;

#endif

#ifndef DEFINED_TYPEDEF_FOR_InverterSignalsBus_
#define DEFINED_TYPEDEF_FOR_InverterSignalsBus_

typedef struct {
  InverterRLSignalsBus InverterRLSignalsBus;
  InverterFLSignalsBus InverterFLSignalsBus;
  InverterRRSignalsBus InverterRRSignalsBus;
  InverterFRSignalsBus InverterFRSignalsBus;
} InverterSignalsBus;

#endif

#ifndef DEFINED_TYPEDEF_FOR_WheelSpeedsBus_
#define DEFINED_TYPEDEF_FOR_WheelSpeedsBus_

typedef struct {
  real_T vWheelRL;
  real_T vWheelRR;
  real_T vWheelFL;
  real_T vWheelFR;
} WheelSpeedsBus;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SensorSignalsBus_
#define DEFINED_TYPEDEF_FOR_SensorSignalsBus_

typedef struct {
  real_T pBrakeF;
  real_T pBrakeR;
  real_T VDamperPotentiometerFL;
  real_T VDamperPotentiometerFR;
  real_T NDisplayNumberDDU7;
  real_T VSteeringAngle;
  real_T VThrottlePedal1;
  real_T VThrottlePedal2;
  boolean_T BSteeringWheelButton1;
  boolean_T BSteeringWheelButton2;
  boolean_T BSteeringWheelButton3;
  boolean_T BSteeringWheelButton4;
  boolean_T BSteeringWheelButton5;
  boolean_T BSteeringWheelButton6;
  boolean_T BSteeringWheelButton7;
  boolean_T BSteeringWheelButton8;
  real_T VRegenPaddle1;
  real_T VRegenPaddle2;
  real_T C1P01_Status;
  real_T C1P02_Status;
  real_T C1P03_Status;
  real_T C1P04_Status;
  real_T C1P07_Status;
  real_T C1P11_Status;
  real_T C1P12_Status;
  real_T C1P13_Status;
  real_T C1P25_Status;
  real_T C1P26_Status;
  real_T C1P28_Status;
  real_T C1P30_Status;
  real_T C1P31_Status;
  real_T C1P33_Status;
  real_T C1P34_Status;
  real_T C1P36_Status;
  real_T C1P37_Status;
  real_T C1P38_Status;
  real_T C2P01_Status;
  real_T C2P02_Status;
  real_T C2P03_Status;
  real_T C2P04_Status;
  real_T C2P05_Status;
  real_T C2P13_Status;
  real_T C2P25_Status;
  real_T C2P26_Status;
  real_T C2P27_Status;
  real_T C2P28_Status;
  real_T C2P29_Status;
  real_T C2P30_Status;
  real_T C2P31_Status;
  real_T C2P33_Status;
  real_T C1P16_Digital;
  real_T C1P17_Digital;
  real_T C2P17_Digital;
  real_T C2P18_Digital;
  real_T C2P35_Status;
  real_T C2P36_Status;
  real_T C2P37_Status;
  real_T C2P38_Status;
  real_T ILVSystem;
  real_T TLVSystem;
  real_T VLVSystem;
  real_T VDamperPotentiometerRL;
  real_T VDamperPotentiometerRR;
} SensorSignalsBus;

#endif

#ifndef DEFINED_TYPEDEF_FOR_GPSIMUSignalsBus_
#define DEFINED_TYPEDEF_FOR_GPSIMUSignalsBus_

typedef struct {
  real_T vLongitudinalOXTSIMU;
  real_T gLateralOXTSIMU;
  real_T gLongitudinalOXTSIMU;
  real_T nYawRateOXTSIMU;
} GPSIMUSignalsBus;

#endif

#ifndef DEFINED_TYPEDEF_FOR_BMSSignalsBus_
#define DEFINED_TYPEDEF_FOR_BMSSignalsBus_

typedef struct {
  real_T VCellMax;
  real_T VCellDelta;
  real_T VCellMin;
  real_T VCellAverage;
  real_T TCellMax;
  real_T NBMSDLC;
  real_T TCellMin;
  real_T IBMSHallEffect;
  real_T VDCAccumulator;
  real_T RCellAverage;
  boolean_T BBalancingActive;
  boolean_T BBMSP0A0C;
  boolean_T BBMSP0A0E;
  boolean_T BBMSP0A10;
  boolean_T BBMSP0A80;
  boolean_T BBMSP0AC0;
  boolean_T BBMSP0AFA;
  real_T IIVTS;
} BMSSignalsBus;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SystemsBus_
#define DEFINED_TYPEDEF_FOR_SystemsBus_

typedef struct {
  real_T rThrottlePedal;
  boolean_T BThrottleError;
  real_T tThrottleError;
  boolean_T BBrakeError;
  real_T tBrakeError;
  boolean_T BBrakeOn;
  real_T pBrakeMax;
  boolean_T BPedalOverlap;
  real_T tPedalOverlap;
  boolean_T BAppsOK;
  real_T tAppsTimer;
  real_T rSteeringAngle;
  real_T aSteeringAngle;
  real_T rRegenPaddle;
  boolean_T BRegenOn;
  boolean_T BBrakeLight;
  real_T xDamperFL;
  real_T xDamperFR;
  real_T xDamperRL;
  real_T xDamperRR;
  boolean_T BDamperErrorFL;
  boolean_T BDamperErrorFR;
  boolean_T BDamperErrorRL;
  boolean_T BDamperErrorRR;
  real_T vChassis;
  real_T sChassis;
  real_T sEMS1000m;
  boolean_T BEMS1000mPoint;
  boolean_T BEMS995mPoint;
  boolean_T BTorqueVectoringActivated;
  real_T NThrottleMap;
  real_T PDischarge;
  boolean_T BEMSActivated;
  real_T PRegen;
  real_T rTorqueSplit;
  real_T PEngineBraking;
  boolean_T BSpinningModelActivated;
  real_T NTractionControlKpSelector;
  boolean_T BTractionControlActivated;
  real_T rTorqueVectoringMultiplier;
  real_T NPowerControllerKpSelector;
  real_T NTorqueSplitSpeedSelector;
  boolean_T BAccumulatorFanOn;
  boolean_T BErrorReset;
  boolean_T BReadyToDriveButton;
  real_T NModeNumberDisplay5;
  real_T NModeNumberDisplay6;
  real_T TMotorMax;
  real_T TInvMax;
  real_T PActual;
  real_T rSOC;
  real_T rSOE;
  boolean_T BEncoderErrorRear;
  boolean_T BEncoderErrorFront;
  real_T rCoolingFansDuty;
  real_T rCoolingPumpsDuty;
  boolean_T BAccumulatorFanDuty;
  boolean_T BInvLVOn;
  real_T rThrottlePedal1;
  real_T rThrottlePedal2;
} SystemsBus;

#endif

#ifndef DEFINED_TYPEDEF_FOR_StateflowBus_
#define DEFINED_TYPEDEF_FOR_StateflowBus_

typedef struct {
  real_T NCarState;
  boolean_T BReadyToDriveBuzzer;
  boolean_T BReadyToDrive;
  real_T NBMSState;
  real_T NInvState;
  real_T BHVOn;
  real_T BInvOnRL;
  real_T BInvOnRR;
  real_T BInvOnFL;
  real_T BInvOnFR;
  real_T BInvDCOnRL;
  real_T BInvDCOnRR;
  real_T BInvDCOnFL;
  real_T BInvDCOnFR;
  real_T BInvEnableRL;
  real_T BInvEnableRR;
  real_T BInvEnableFL;
  real_T BInvEnableFR;
  real_T BInvErrorResetRL;
  real_T BInvErrorResetRR;
  real_T BInvErrorResetFL;
  real_T BInvErrorResetFR;
  real_T MTargetTorqueRL;
  real_T MTargetTorqueRR;
  real_T MTargetTorqueFL;
  real_T MTargetTorqueFR;
  real_T MTorqueLimitNegativeRL;
  real_T MTorqueLimitNegativeRR;
  real_T MTorqueLimitNegativeFL;
  real_T MTorqueLimitNegativeFR;
  real_T MTorqueLimitPositiveRL;
  real_T MTorqueLimitPositiveRR;
  real_T MTorqueLimitPositiveFL;
  real_T MTorqueLimitPositiveFR;
} StateflowBus;

#endif

#ifndef DEFINED_TYPEDEF_FOR_LimitationsBus_
#define DEFINED_TYPEDEF_FOR_LimitationsBus_

typedef struct {
  boolean_T BDischargeAllowed;
  real_T rInvTemperatureDerate;
  real_T rInvTemperatureDerateFR;
  real_T rInvTemperatureDerateFL;
  real_T rInvTemperatureDerateRR;
  real_T rInvTemperatureDerateRL;
  real_T rMotorTemperatureDerate;
  real_T rMotorTemperatureDerateFR;
  real_T rMotorTemperatureDerateFL;
  real_T rMotorTemperatureDerateRR;
  real_T rMotorTemperatureDerateRL;
  real_T rTSTemperatureDerateFR;
  real_T rTSTemperatureDerateFL;
  real_T rTSTemperatureDerateRR;
  real_T rTSTemperatureDerateRL;
  real_T rHighCellTemperatureDischargeDerate;
  real_T rHighCellTemperatureRegenDerate;
  real_T rLowCellVoltageDischargeDerate;
  real_T rSOCDischargeDerate;
  real_T rSOCRegenDerate;
  real_T rSpeedRegenDerate;
  real_T rDischargeDerate;
  real_T rRegenDerate;
} LimitationsBus;

#endif

#ifndef DEFINED_TYPEDEF_FOR_TorqueControlBus_
#define DEFINED_TYPEDEF_FOR_TorqueControlBus_

typedef struct {
  real_T MDriverDischargeRequested;
  real_T MDriverRegenRequested;
  real_T MDischargeLimited;
  real_T MRegenLimited;
  real_T PPowerControllerRequested;
  real_T MPowerControllerRequested;
  real_T PPowerControllerProportionalTerm;
  real_T PPowerControllerIntegralTerm;
  real_T PDischargeLimited;
  real_T MTotalRequested;
  real_T MTotalEMSRequested;
  real_T rSOCTargetError;
  real_T rSOETargetError;
  real_T nYawRateErrorActual;
  boolean_T BTorqueVectoringOK;
  real_T MTorqueVectoringFL;
  real_T MTorqueVectoringFR;
  real_T MTorqueVectoringRL;
  real_T MTorqueVectoringRR;
  real_T rSplitRear;
  real_T MTorqueDistributionFL;
  real_T MTorqueDistributionFR;
  real_T MTorqueDistributionRL;
  real_T MTorqueDistributionRR;
  real_T rSlipRatioOptimal;
  real_T NTractionControlMultiplierFL;
  real_T NTractionControlMultiplierFR;
  real_T NTractionControlMultiplierRL;
  real_T NTractionControlMultiplierRR;
  real_T NABSMultiplierFL;
  real_T NABSMultiplierFR;
  real_T NABSMultiplierRL;
  real_T NABSMultiplierRR;
  real_T rSlipRatioFLActual;
  real_T rSlipRatioFRActual;
  real_T rSlipRatioRLActual;
  real_T rSlipRatioRRActual;
  real_T MTractionControlFLTotal;
  real_T MTractionControlFRTotal;
  real_T MTractionControlRLTotal;
  real_T MTractionControlRRTotal;
  real_T MTractionControlFLFinal;
  real_T MTractionControlFRFinal;
  real_T MTractionControlRLFinal;
  real_T MTractionControlRRFinal;
  real_T MSpinningModelFL;
  real_T MSpinningModelFR;
  real_T MSpinningModelRL;
  real_T MSpinningModelRR;
  real_T MFLFinal;
  real_T MFRFinal;
  real_T MRLFinal;
  real_T MRRFinal;
  real_T MTotalFinal;
} TorqueControlBus;

#endif

#ifndef DEFINED_TYPEDEF_FOR_Global_
#define DEFINED_TYPEDEF_FOR_Global_

typedef struct {
  InverterSignalsBus InverterSignalsBus;
  WheelSpeedsBus WheelSpeedsBus;
  SensorSignalsBus SensorSignalsBus;
  GPSIMUSignalsBus GPSIMUSignalsBus;
  BMSSignalsBus BMSSignalsBus;
  SystemsBus SystemsBus;
  StateflowBus StateflowBus;
  LimitationsBus LimitationsBus;
  TorqueControlBus TorqueControlBus;
} Global;

#endif

/* Forward declaration for rtModel */
typedef struct tag_RTM_MASTER_T RT_MODEL_MASTER_T;

#endif                                 /* MASTER_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
