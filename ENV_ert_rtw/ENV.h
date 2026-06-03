/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: ENV.h
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

#ifndef ENV_h_
#define ENV_h_
#ifndef ENV_COMMON_INCLUDES_
#define ENV_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                                 /* ENV_COMMON_INCLUDES_ */

#include "ENV_types.h"
#include <stddef.h>
#include "MW_target_hardware_resources.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T nMotorRL;                     /* '<Root>/nMotorRL' */
  real_T BInvDCOnRL;                   /* '<Root>/BInvDCOnRLIn' */
  real_T BInvErrorRL;                  /* '<Root>/BInvErrorRL' */
  real_T BInvOnRL;                     /* '<Root>/BInvOnRLIn' */
  real_T BInvDCQuitInvOnRL;            /* '<Root>/BInvDCQuitInvOnRL' */
  real_T BInvQuitInvOnRL;              /* '<Root>/BInvQuitInvOnRL' */
  real_T BInvSysReadyRL;               /* '<Root>/BInvSysReadyRL' */
  real_T BInvWarnRL;                   /* '<Root>/BInvWarnRL' */
  real_T MMotorMeasuredRL;             /* '<Root>/MMotorMeasuredRL' */
  real_T NInvDTCRL;                    /* '<Root>/NInvDTCRL' */
  real_T TMotorRL;                     /* '<Root>/TMotorRL' */
  real_T VDCInvRL;                     /* '<Root>/VDCInvRL' */
  real_T TInvRL;                       /* '<Root>/TInvRL' */
  real_T nMotorRR;                     /* '<Root>/nMotorRR' */
  real_T BInvDCOnRR;                   /* '<Root>/BInvDCOnRRIn' */
  real_T BInvErrorRR;                  /* '<Root>/BInvErrorRR' */
  real_T BInvOnRR;                     /* '<Root>/BInvOnRRIn' */
  real_T BInvDCQuitInvOnRR;            /* '<Root>/BInvDCQuitInvOnRR' */
  real_T BInvQuitInvOnRR;              /* '<Root>/BInvQuitInvOnRR' */
  real_T BInvSysReadyRR;               /* '<Root>/BInvSysReadyRR' */
  real_T BInvWarnRR;                   /* '<Root>/BInvWarnRR' */
  real_T MMotorMeasuredRR;             /* '<Root>/MMotorMeasuredRR' */
  real_T NInvDTCRR;                    /* '<Root>/NInvDTCRR' */
  real_T TMotorRR;                     /* '<Root>/TMotorRR' */
  real_T VDCInvRR;                     /* '<Root>/VDCInvRR' */
  real_T TInvRR;                       /* '<Root>/TInvRR' */
  real_T nMotorFL;                     /* '<Root>/nMotorFL' */
  real_T BInvDCOnFL;                   /* '<Root>/BInvDCOnFLIn' */
  real_T BInvErrorFL;                  /* '<Root>/BInvErrorFL' */
  real_T BInvOnFL;                     /* '<Root>/BInvOnFLIn' */
  real_T BInvDCQuitInvOnFL;            /* '<Root>/BInvDCQuitInvOnFL' */
  real_T BInvQuitInvOnFL;              /* '<Root>/BInvQuitInvOnFL' */
  real_T BInvSysReadyFL;               /* '<Root>/BInvSysReadyFL' */
  real_T BInvWarnFL;                   /* '<Root>/BInvWarnFL' */
  real_T MMotorMeasuredFL;             /* '<Root>/MMotorMeasuredFL' */
  real_T NInvDTCFL;                    /* '<Root>/NInvDTCFL' */
  real_T TMotorFL;                     /* '<Root>/TMotorFL' */
  real_T VDCInvFL;                     /* '<Root>/VDCInvFL' */
  real_T TInvFL;                       /* '<Root>/TInvFL' */
  real_T nMotorFR;                     /* '<Root>/nMotorFR' */
  real_T BInvDCOnFR;                   /* '<Root>/BInvDCOnFR' */
  real_T BInvErrorFR;                  /* '<Root>/BInvErrorFR' */
  real_T BInvOnFR;                     /* '<Root>/BInvOnFR' */
  real_T BInvDCQuitInvOnFR;            /* '<Root>/BInvDCQuitInvOnFR' */
  real_T BInvQuitInvOnFR;              /* '<Root>/BInvQuitInvOnFR' */
  real_T BInvSysReadyFR;               /* '<Root>/BInvSysReadyFR' */
  real_T BInvWarnFR;                   /* '<Root>/BInvWarnFR' */
  real_T MMotorMeasuredFR;             /* '<Root>/MMotorMeasuredFR' */
  real_T NInvDTCFR;                    /* '<Root>/NInvDTCFR' */
  real_T TMotorFR;                     /* '<Root>/TMotorFR' */
  real_T VDCInvFR;                     /* '<Root>/VDCInvFR' */
  real_T TInvFR;                       /* '<Root>/TInvFR' */
  real_T IIVTS;                        /* '<Root>/IIVTS' */
  real_T IBMSHallEffect;               /* '<Root>/IBMSHallEffect' */
  real_T VDCAccumulator;               /* '<Root>/VDCAccumulator' */
  real_T TCellMin;                     /* '<Root>/TCellMin' */
  real_T VCellAverage;                 /* '<Root>/VCellAverage' */
  real_T VCellMax;                     /* '<Root>/VCellMax' */
  real_T TCellMax;                     /* '<Root>/TCellMax' */
  real_T NBMSDLC;                      /* '<Root>/NBMSDLC' */
  real_T VCellMin;                     /* '<Root>/VCellMin' */
  real_T RCellAverage;                 /* '<Root>/RCellAverage' */
  real_T BBalancingActive;             /* '<Root>/BBalancingActive' */
  real_T BBMSP0A0C;                    /* '<Root>/BBMSP0A0C' */
  real_T BBMSP0A0E;                    /* '<Root>/BBMSP0A0E' */
  real_T BBMSP0A10;                    /* '<Root>/BBMSP0A10' */
  real_T BBMSP0A80;                    /* '<Root>/BBMSP0A80' */
  real_T BBMSP0AC0;                    /* '<Root>/BBMSP0AC0' */
  real_T BBMSP0AFA;                    /* '<Root>/BBMSP0AFA' */
  real_T pBrakeF;                      /* '<Root>/pBrakeF' */
  real_T pBrakeR;                      /* '<Root>/pBrakeR' */
  real_T NDisplayNumberDDU7;           /* '<Root>/NDisplayNumberDDU7' */
  real_T VSteeringAngle;               /* '<Root>/VSteeringAngle' */
  real_T VThrottlePedal1;              /* '<Root>/VThrottlePedal1' */
  real_T VThrottlePedal2;              /* '<Root>/VThrottlePedal2' */
  real_T vLateralOXTSIMU;              /* '<Root>/vLateralOXTSIMU' */
  real_T vLongitudinalOXTSIMU;         /* '<Root>/vLongitudinalOXTSIMU' */
  real_T gLateralOXTS;                 /* '<Root>/gLateralOXTS' */
  real_T gLongitudinalOXTS;            /* '<Root>/gLongitudinalOXTS' */
  real_T gVerticalOXTS;                /* '<Root>/gVerticalOXTS' */
  real_T nPitchRateOXTSIMU;            /* '<Root>/nPitchRateOXTSIMU' */
  real_T nRollRateOXTSIMU;             /* '<Root>/nRollRateOXTSIMU' */
  real_T nYawRateOXTSIMU;              /* '<Root>/nYawRateOXTSIMU' */
  real_T C1P14_AnalogInput03;          /* '<Root>/C1P14_AnalogInput03' */
  real_T C1P15_AnalogInput04;          /* '<Root>/C1P15_AnalogInput04' */
  real_T C2P15_AnalogInput01;          /* '<Root>/C2P15_AnalogInput01' */
  real_T C2P16_AnalogInput02;          /* '<Root>/C2P16_AnalogInput02' */
  real_T C1P05_AnalogInput07;          /* '<Root>/C1P05_AnalogInput07' */
  real_T C1P06_AnalogInput08;          /* '<Root>/C1P06_AnalogInput08' */
  real_T C1P27_AnalogInput05;          /* '<Root>/C1P27_AnalogInput05' */
  real_T C1P29_AnalogInput06;          /* '<Root>/C1P29_AnalogInput06' */
  real_T C1P18_AnalogInput09;          /* '<Root>/C1P18_AnalogInput09' */
  real_T C1P19_AnalogInput10;          /* '<Root>/C1P19_AnalogInput10' */
  real_T C1P32_AnalogInput11;          /* '<Root>/C1P32_AnalogInput11' */
  real_T C1P35_AnalogInput12;          /* '<Root>/C1P35_AnalogInput12' */
  real_T C1P01_Status;                 /* '<Root>/C1P01_Status' */
  real_T C1P02_Status;                 /* '<Root>/C1P02_Status' */
  real_T C1P03_Status;                 /* '<Root>/C1P03_Status' */
  real_T C1P04_Status;                 /* '<Root>/C1P04_Status' */
  real_T C1P07_Status;                 /* '<Root>/C1P07_Status' */
  real_T C1P11_Status;                 /* '<Root>/C1P11_Status' */
  real_T C1P12_Status;                 /* '<Root>/C1P12_Status' */
  real_T C1P13_Status;                 /* '<Root>/C1P13_Status' */
  real_T C1P25_Status;                 /* '<Root>/C1P25_Status' */
  real_T C1P26_Status;                 /* '<Root>/C1P26_Status' */
  real_T C1P28_Status;                 /* '<Root>/C1P28_Status' */
  real_T C1P30_Status;                 /* '<Root>/C1P30_Status' */
  real_T C1P31_Status;                 /* '<Root>/C1P31_Status' */
  real_T C1P33_Status;                 /* '<Root>/C1P33_Status' */
  real_T C1P34_Status;                 /* '<Root>/C1P34_Status' */
  real_T C1P36_Status;                 /* '<Root>/C1P36_Status' */
  real_T C1P37_Status;                 /* '<Root>/C1P37_Status' */
  real_T C1P38_Status;                 /* '<Root>/C1P38_Status' */
  real_T C2P01_Status;                 /* '<Root>/C2P01_Status' */
  real_T C2P02_Status;                 /* '<Root>/C2P02_Status' */
  real_T C2P03_Status;                 /* '<Root>/C2P03_Status' */
  real_T C2P04_Status;                 /* '<Root>/C2P04_Status' */
  real_T C2P05_Status;                 /* '<Root>/C2P05_Status' */
  real_T C2P13_Status;                 /* '<Root>/C2P13_Status' */
  real_T C2P25_Status;                 /* '<Root>/C2P25_Status' */
  real_T C2P26_Status;                 /* '<Root>/C2P26_Status' */
  real_T C2P27_Status;                 /* '<Root>/C2P27_Status' */
  real_T C2P28_Status;                 /* '<Root>/C2P28_Status' */
  real_T C2P29_Status;                 /* '<Root>/C2P29_Status' */
  real_T C2P30_Status;                 /* '<Root>/C2P30_Status' */
  real_T C2P31_Status;                 /* '<Root>/C2P31_Status' */
  real_T C2P33_Status;                 /* '<Root>/C2P33_Status' */
  real_T C1P16_Digital;                /* '<Root>/C1P16_Digital' */
  real_T C1P17_Digital;                /* '<Root>/C1P17_Digital' */
  real_T C2P17_Digital;                /* '<Root>/C2P17_Digital' */
  real_T C2P18_Digital;                /* '<Root>/C2P18_Digital' */
  real_T C2P35_Status;                 /* '<Root>/C2P35_Status' */
  real_T C2P36_Status;                 /* '<Root>/C2P36_Status' */
  real_T C2P37_Status;                 /* '<Root>/C2P37_Status' */
  real_T C2P38_Status;                 /* '<Root>/C2P38_Status' */
  real_T ILVSystem;                    /* '<Root>/ILVSystem' */
  real_T TLVSystem;                    /* '<Root>/TLVSystem' */
  real_T VLVSystem;                    /* '<Root>/VLVSystem' */
  real_T BSteeringWheelButton1;        /* '<Root>/BSteeringWheelButton1' */
  real_T BSteeringWheelButton2;        /* '<Root>/BSteeringWheelButton2' */
  real_T BSteeringWheelButton3;        /* '<Root>/BSteeringWheelButton3' */
  real_T BSteeringWheelButton4;        /* '<Root>/BSteeringWheelButton4' */
  real_T BSteeringWheelButton5;        /* '<Root>/BSteeringWheelButton5' */
  real_T BSteeringWheelButton6;        /* '<Root>/BSteeringWheelButton6' */
  real_T BSteeringWheelButton7;        /* '<Root>/BSteeringWheelButton7' */
  real_T BSteeringWheelButton8;        /* '<Root>/BSteeringWheelButton8' */
  real_T VRegenPaddle1;                /* '<Root>/VRegenPaddle1' */
  real_T VRegenPaddle2;                /* '<Root>/VRegenPaddle2' */
  real_T VDamperPotentiometerFL;       /* '<Root>/VDamperPotentiometerFL' */
  real_T VDamperPotentiometerFR;       /* '<Root>/VDamperPotentiometerFR' */
  real_T VDamperPotentiometerRR;       /* '<Root>/VDamperPotentiometerRR' */
  real_T VDamperPotentiometerRL;       /* '<Root>/VDamperPotentiometerRL' */
} ExtU_ENV_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T BInvDCOnRL;                   /* '<Root>/BInvDCOnRL' */
  real_T BInvEnableRL;                 /* '<Root>/BInvEnableRL' */
  real_T BInvErrorResetRL;             /* '<Root>/BInvErrorResetRL' */
  real_T BInvOnRL;                     /* '<Root>/BInvOnRL' */
  real_T MTorqueLimitNegativeRL;       /* '<Root>/MTorqueLimitNegativeRL' */
  real_T MTorqueLimitPositiveRL;       /* '<Root>/MTorqueLimitPositiveRL' */
  real_T MInvRLFinal;                  /* '<Root>/MInvRLFinal' */
  real_T BInvDCOnFL;                   /* '<Root>/BInvDCOnFL' */
  real_T BInvEnableFL;                 /* '<Root>/BInvEnableFL' */
  real_T BInvErrorResetFL;             /* '<Root>/BInvErrorResetFL' */
  real_T BInvOnFL;                     /* '<Root>/BInvOnFL' */
  real_T MTorqueLimitNegativeFL;       /* '<Root>/MTorqueLimitNegativeFL' */
  real_T MTorqueLimitPositiveFL;       /* '<Root>/MTorqueLimitPositiveFL' */
  real_T MInvFLFinal;                  /* '<Root>/MInvFLFinal' */
  real_T BInvDCOnRR;                   /* '<Root>/BInvDCOnRR' */
  real_T BInvEnableRR;                 /* '<Root>/BInvEnableRR' */
  real_T BInvErrorResetRR;             /* '<Root>/BInvErrorResetRR' */
  real_T BInvOnRR;                     /* '<Root>/BInvOnRR' */
  real_T MTorqueLimitNegativeRR;       /* '<Root>/MTorqueLimitNegativeRR' */
  real_T MTorqueLimitPositiveRR;       /* '<Root>/MTorqueLimitPositiveRR' */
  real_T MInvRRFinal;                  /* '<Root>/MInvRRFinal' */
  real_T BInvDCOnFR;                   /* '<Root>/BInvDCOnFR ' */
  real_T BInvEnableFR;                 /* '<Root>/BInvEnableFR' */
  real_T BInvErrorResetFR;             /* '<Root>/BInvErrorResetFR' */
  real_T BInvOnFR;                     /* '<Root>/BInvOnFR ' */
  real_T MTorqueLimitNegativeFR;       /* '<Root>/MTorqueLimitNegativeFR' */
  real_T MTorqueLimitPositiveFR;       /* '<Root>/MTorqueLimitPositiveFR' */
  real_T MInvFRFinal;                  /* '<Root>/MInvFRFinal' */
  real_T PPowerControllerProportionalTerm;
                                 /* '<Root>/PPowerControllerProportionalTerm' */
  real_T MTotalFinal;                  /* '<Root>/MTotalFinal' */
  real_T PActual;                      /* '<Root>/PActual' */
  real_T vChassis;                     /* '<Root>/vChassis' */
  real_T PPowerControllerIntegralTerm;
                                     /* '<Root>/PPowerControllerIntegralTerm' */
  real_T BSpinningModelActivated;      /* '<Root>/BSpinningModelActivated' */
  real_T BTorqueVectoringOK;           /* '<Root>/BTorqueVectoringOK' */
  real_T BEncoderErrorRear;            /* '<Root>/BEncoderErrorRear' */
  real_T BEncoderErrorFront;           /* '<Root>/BEncoderErrorFront' */
  real_T BBMSP0A80;                    /* '<Root>/BBMSP0A80 ' */
  real_T BBMSP0AC0;                    /* '<Root>/BBMSP0AC0 ' */
  real_T BBMSP0AFA;                    /* '<Root>/BBMSP0AFA ' */
  real_T rHighCellTemperatureDischargeDerate;
                              /* '<Root>/rHighCellTemperatureDischargeDerate' */
  real_T rHighCellTemperatureRegenDerate;
                                  /* '<Root>/rHighCellTemperatureRegenDerate' */
  real_T rInvTemperatureDerate;        /* '<Root>/rInvTemperatureDerate' */
  real_T rMotorTemperatureDerate;      /* '<Root>/rMotorTemperatureDerate' */
  real_T rLowCellVoltageDischargeDerate;
                                   /* '<Root>/rLowCellVoltageDischargeDerate' */
  real_T rSOCDischargeDerate;          /* '<Root>/rSOCDischargeDerate' */
  real_T rSOCRegenDerate;              /* '<Root>/rSOCRegenDerate' */
  real_T rSpeedRegenDerate;            /* '<Root>/rSpeedRegenDerate' */
  real_T rDischargeDerate;             /* '<Root>/rDischargeDerate' */
  real_T rRegenDerate;                 /* '<Root>/rRegenDerate' */
  real_T PDischarge;                   /* '<Root>/PDischarge' */
  real_T rSOCTargetError;              /* '<Root>/rSOCTargetError' */
  real_T sEMS1000m;                    /* '<Root>/sEMS1000m' */
  real_T rSOETargetError;              /* '<Root>/rSOETargetError' */
  real_T vWheelRL;                     /* '<Root>/vWheelRL' */
  real_T vWheelRR;                     /* '<Root>/vWheelRR' */
  real_T vWheelFL;                     /* '<Root>/vWheelFL' */
  real_T vWheelFR;                     /* '<Root>/vWheelFR' */
  real_T PPowerControllerRequested;    /* '<Root>/PPowerControllerRequested' */
  real_T MPowerControllerRequested;    /* '<Root>/MPowerControllerRequested' */
  real_T rThrottlePedal;               /* '<Root>/rThrottlePedal' */
  real_T BThrottleError;               /* '<Root>/BThrottleError' */
  real_T tThrottleError;               /* '<Root>/tThrottleError' */
  real_T BBrakeError;                  /* '<Root>/BBrakeError' */
  real_T tBrakeError;                  /* '<Root>/tBrakeError' */
  real_T BBrakeOn;                     /* '<Root>/BBrakeOn' */
  real_T BPedalOverlap;                /* '<Root>/BPedalOverlap' */
  real_T BAppsOK;                      /* '<Root>/BAppsOK' */
  real_T BRegenOn;                     /* '<Root>/BRegenOn' */
  real_T BTorqueVectoringActivated;    /* '<Root>/BTorqueVectoringActivated' */
  real_T rSOE;                         /* '<Root>/rSOE' */
  real_T sChassis;                     /* '<Root>/sChassis' */
  real_T rSOC;                         /* '<Root>/rSOC' */
  real_T PRegen;                       /* '<Root>/PRegen' */
  real_T rTorqueVectoringMultiplier;   /* '<Root>/rTorqueVectoringMultiplier' */
  real_T NModelNumberDisplay5;         /* '<Root>/NModelNumberDisplay5' */
  real_T PEngineBraking;               /* '<Root>/PEngineBraking' */
  real_T NModelNumberDisplay6;         /* '<Root>/NModelNumberDisplay6' */
  real_T NPowerControllerKpSelector;   /* '<Root>/NPowerControllerKpSelector' */
  real_T NTorqueSplitSpeedSelector;    /* '<Root>/NTorqueSplitSpeedSelector' */
  real_T NBMSDLCOut;                   /* '<Root>/NBMSDLCOut' */
  real_T NInvState;                    /* '<Root>/NInvState' */
  real_T NBMSState;                    /* '<Root>/NBMSState' */
  real_T rSlipRatioFLActual;           /* '<Root>/rSlipRatioFLActual' */
  real_T rSlipRatioFRActual;           /* '<Root>/rSlipRatioFRActual' */
  real_T rSlipRatioRLActual;           /* '<Root>/rSlipRatioRLActual' */
  real_T rSlipRatioRRActual;           /* '<Root>/rSlipRatioRRActual' */
  real_T NTractionControlMultiplierRR;
                                     /* '<Root>/NTractionControlMultiplierRR' */
  real_T NABSMultiplierRR;             /* '<Root>/NABSMultiplierRR' */
  real_T NTractionControlMultiplierRL;
                                     /* '<Root>/NTractionControlMultiplierRL' */
  real_T NABSMultiplierRL;             /* '<Root>/NABSMultiplierRL' */
  real_T NThrottleMap;                 /* '<Root>/NThrottleMap' */
  real_T BReadyToDrive;                /* '<Root>/BReadyToDrive' */
  real_T MTractionControlFinalFR;      /* '<Root>/MTractionControlFinalFR' */
  real_T MTractionControlFinalRR;      /* '<Root>/MTractionControlFinalRR' */
  real_T MTractionControlFinalRL;      /* '<Root>/MTractionControlFinalRL' */
  real_T MTractionControlFinalFL;      /* '<Root>/MTractionControlFinalFL' */
  real_T NABSMultiplierFL;             /* '<Root>/NABSMultiplierFL' */
  real_T NABSMultiplierFR;             /* '<Root>/NABSMultiplierFR' */
  real_T BBalancingActiveOut;          /* '<Root>/BBalancingActiveOut' */
  real_T BBMSP0A0COut;                 /* '<Root>/BBMSP0A0COut' */
  real_T MTVFinalFL;                   /* '<Root>/MTVFinalFL' */
  real_T MTVFinalFR;                   /* '<Root>/MTVFinalFR' */
  real_T MTVFinalRL;                   /* '<Root>/MTVFinalRL' */
  real_T MTVFinalRR;                   /* '<Root>/MTVFinalRR' */
  real_T NTractionControlMultiplierFL;
                                     /* '<Root>/NTractionControlMultiplierFL' */
  real_T NTractionControlMultiplierFR;
                                    /* '<Root>/NTractionControlMultiplierFR ' */
  real_T BBMSP0A0E;                    /* '<Root>/BBMSP0A0E ' */
  real_T BBMSP0A10;                    /* '<Root>/BBMSP0A10 ' */
  real_T MDischargeLimited;            /* '<Root>/MDischargeLimited' */
  real_T MDriverRegenRequested;        /* '<Root>/MDriverRegenRequested' */
  real_T rSlipRatioOptimal;            /* '<Root>/rSlipRatioOptimal' */
  real_T MRegenLimited;                /* '<Root>/MRegenLimited' */
  real_T MSpinningModeFL;              /* '<Root>/MSpinningModeFL' */
  real_T MSpinningModeFR;              /* '<Root>/MSpinningModeFR' */
  real_T NCarState;                    /* '<Root>/NCarState' */
  real_T MSpinningModelRL;             /* '<Root>/MSpinningModelRL' */
  real_T MSpinningModelRR;             /* '<Root>/MSpinningModelRR' */
  real_T MTorqueDistributionFinalFL;   /* '<Root>/MTorqueDistributionFinalFL' */
  real_T MTorqueDistributionFinalFR;   /* '<Root>/MTorqueDistributionFinalFR' */
  real_T MTorqueDistributionFinalRL;   /* '<Root>/MTorqueDistributionFinalRL' */
  real_T MTorqueDistributionFinalRR;   /* '<Root>/MTorqueDistributionFinalRR' */
  real_T VDamperPotentiometerFLOut;    /* '<Root>/VDamperPotentiometerFLOut' */
  real_T VDamperPotentiometerFROut;    /* '<Root>/VDamperPotentiometerFROut' */
  real_T rMotorTemperatureDerateFR;    /* '<Root>/rMotorTemperatureDerateFR' */
  real_T rMotorTemperatureDerateFL;    /* '<Root>/rMotorTemperatureDerateFL' */
  real_T rMotorTemperatureDerateRR;    /* '<Root>/rMotorTemperatureDerateRR' */
  real_T rMotorTemperatureDerateRL;    /* '<Root>/rMotorTemperatureDerateRL' */
  real_T rInvTemperatureDerateFR;      /* '<Root>/rInvTemperatureDerateFR' */
  real_T rInvTemperatureDerateFL;      /* '<Root>/rInvTemperatureDerateFL' */
  real_T rInvTemperatureDerateRR;      /* '<Root>/rInvTemperatureDerateRR' */
  real_T rInvTemperatureDerateRL;      /* '<Root>/rInvTemperatureDerateRL' */
  real_T MTotalEMSRequested;           /* '<Root>/MTotalEMSRequested' */
  real_T rThrottlePedal1;              /* '<Root>/rThrottlePedal1' */
  real_T nMotorRL;                     /* '<Root>/nMotorRL ' */
  real_T nMotorFL;                     /* '<Root>/nMotorFL ' */
  real_T nMotorRR;                     /* '<Root>/nMotorRR ' */
  real_T nMotorFR;                     /* '<Root>/nMotorFR ' */
  real_T BDischargeAllowed;            /* '<Root>/BDischargeAllowed' */
  real_T TMotorRL;                     /* '<Root>/TMotorRL ' */
  real_T TInvRL;                       /* '<Root>/TInvRL ' */
  real_T TMotorFL;                     /* '<Root>/TMotorFL ' */
  real_T TInvFL;                       /* '<Root>/TInvFL ' */
  real_T TMotorRR;                     /* '<Root>/TMotorRR ' */
  real_T TInvRR;                       /* '<Root>/TInvRR ' */
  real_T TMotorFR;                     /* '<Root>/TMotorFR ' */
  real_T TInvFR;                       /* '<Root>/TInvFR ' */
  real_T TInvMax;                      /* '<Root>/TInvMax' */
  real_T TMotorMax;                    /* '<Root>/TMotorMax' */
  real_T NInvDTCRL;                    /* '<Root>/NInvDTCRL ' */
  real_T NInvDTCFL;                    /* '<Root>/NInvDTCFL ' */
  real_T NInvDTCRR;                    /* '<Root>/NInvDTCRR ' */
  real_T NInvDTCFR;                    /* '<Root>/NInvDTCFR ' */
  real_T TCellMax;                     /* '<Root>/TCellMax ' */
  real_T VCellDelta;                   /* '<Root>/VCellDelta' */
  real_T VDCAccumulator;               /* '<Root>/VDCAccumulator ' */
  real_T IBMSHallEffect;               /* '<Root>/IBMSHallEffect ' */
  real_T VDCInvRL;                     /* '<Root>/VDCInvRL ' */
  real_T IIVTS;                        /* '<Root>/IIVTS ' */
  real_T MTotalRequested;              /* '<Root>/MTotalRequested' */
  real_T BEMSActivated;                /* '<Root>/BEMSActivated' */
  real_T BTractionControlActivated;    /* '<Root>/BTractionControlActivated' */
  real_T BAccumulatorFanOn;            /* '<Root>/BAccumulatorFanOn' */
  real_T VCellMin;                     /* '<Root>/VCellMin ' */
  real_T VCellMax;                     /* '<Root>/VCellMax ' */
  real_T TCellMin;                     /* '<Root>/TCellMin ' */
  real_T NTractionControlKpSelector;   /* '<Root>/NTractionControlKpSelector' */
  real_T nYawRateErrorActual;          /* '<Root>/nYawRateErrorActual' */
  real_T tPedalOverlap;                /* '<Root>/tPedalOverlap' */
  real_T tAppsTimer;                   /* '<Root>/tAppsTimer' */
  real_T aSteeringAngle;               /* '<Root>/aSteeringAngle' */
  real_T PDischargeLimited;            /* '<Root>/PDischargeLimited' */
  real_T rSplitRear;                   /* '<Root>/rSplitRear' */
  real_T BAccumulatorFanOnRequest;     /* '<Root>/BAccumulatorFanOnRequest' */
  real_T BInvLVOnRequest;              /* '<Root>/BInvLVOnRequest' */
  real_T BEMS1000mPoint;               /* '<Root>/BEMS1000mPoint' */
  real_T BAccumulatorFanDutyRequest;   /* '<Root>/BAccumulatorFanDutyRequest' */
  real_T BEMS995mPoint;                /* '<Root>/BEMS995mPoint' */
  real_T BBrakeLightOnRequest;         /* '<Root>/BBrakeLightOnRequest' */
  real_T MDriverDischargeRequested;    /* '<Root>/MDriverDischargeRequested' */
  real_T BReadyToDriveBuzzerRequest;   /* '<Root>/BReadyToDriveBuzzerRequest' */
  real_T MFLFinal;                     /* '<Root>/MFLFinal' */
  real_T MFRFinal;                     /* '<Root>/MFRFinal' */
  real_T MRLFinal;                     /* '<Root>/MRLFinal' */
  real_T MRRFinal;                     /* '<Root>/MRRFinal' */
  real_T Multiplexer;                  /* '<Root>/Multiplexer' */
  real_T multiplexer;                  /* '<Root>/multiplexer' */
  real_T rRegenPaddle;                 /* '<Root>/rRegenPaddle' */
} ExtY_ENV_T;

/* Real-time Model Data Structure */
struct tag_RTM_ENV_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with default storage) */
extern ExtU_ENV_T ENV_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_ENV_T ENV_Y;

/* Model entry point functions */
extern void ENV_initialize(void);
extern void ENV_step(void);
extern void ENV_terminate(void);

/* Real-time Model object */
extern RT_MODEL_ENV_T *const ENV_M;
extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Constant' : Unused code path elimination
 * Block '<Root>/Multiply' : Unused code path elimination
 */

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
 * '<Root>' : 'ENV'
 */
#endif                                 /* ENV_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
