/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: INPUT_types.h
 *
 * Code generated for Simulink model 'INPUT'.
 *
 * Model version                  : 13.18
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Tue Jun  2 18:48:46 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef INPUT_types_h_
#define INPUT_types_h_
#include "rtwtypes.h"
#ifndef DEFINED_TYPEDEF_FOR_WheelSpeedsBus_
#define DEFINED_TYPEDEF_FOR_WheelSpeedsBus_

typedef struct {
  real_T vWheelRL;
  real_T vWheelRR;
  real_T vWheelFL;
  real_T vWheelFR;
} WheelSpeedsBus;

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

/* Forward declaration for rtModel */
typedef struct tag_RTM_INPUT_T RT_MODEL_INPUT_T;

#endif                                 /* INPUT_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
