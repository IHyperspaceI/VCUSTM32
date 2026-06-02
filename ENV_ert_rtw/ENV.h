/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: ENV.h
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

#ifndef ENV_h_
#define ENV_h_
#ifndef ENV_COMMON_INCLUDES_
#define ENV_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                                 /* ENV_COMMON_INCLUDES_ */

#include "ENV_types.h"
#include "MASTER.h"
#include <stddef.h>
#include "MW_target_hardware_resources.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetErrorStatusPointer
#define rtmGetErrorStatusPointer(rtm)  ((const char_T **)(&((rtm)->errorStatus)))
#endif

#ifndef rtmStepTask
#define rtmStepTask(rtm, idx)          ((rtm)->Timing.TaskCounters.TID[(idx)] == 0)
#endif

#ifndef rtmTaskCounter
#define rtmTaskCounter(rtm, idx)       ((rtm)->Timing.TaskCounters.TID[(idx)])
#endif

/* user code (top of header file) */
#include "stm32h7xx_ll_tim.h"

/* Block signals (default storage) */
typedef struct {
  real_T nMotorRL;                     /* '<Root>/Model' */
  real_T MMotorMeasuredRL;             /* '<Root>/Model' */
  real_T NInvDTCRL;                    /* '<Root>/Model' */
  real_T TMotorRL;                     /* '<Root>/Model' */
  real_T VDCInvRL;                     /* '<Root>/Model' */
  real_T TInvRL;                       /* '<Root>/Model' */
  real_T nMotorFL;                     /* '<Root>/Model' */
  real_T MMotorMeasuredFL;             /* '<Root>/Model' */
  real_T NInvDTCFL;                    /* '<Root>/Model' */
  real_T TMotorFL;                     /* '<Root>/Model' */
  real_T VDCInvFL;                     /* '<Root>/Model' */
  real_T TInvFL;                       /* '<Root>/Model' */
  real_T nMotorRR;                     /* '<Root>/Model' */
  real_T MMotorMeasuredRR;             /* '<Root>/Model' */
  real_T NInvDTCRR;                    /* '<Root>/Model' */
  real_T TMotorRR;                     /* '<Root>/Model' */
  real_T VDCInvRR;                     /* '<Root>/Model' */
  real_T TInvRR;                       /* '<Root>/Model' */
  real_T nMotorFR;                     /* '<Root>/Model' */
  real_T MMotorMeasuredFR;             /* '<Root>/Model' */
  real_T NInvDTCFR;                    /* '<Root>/Model' */
  real_T TMotorFR;                     /* '<Root>/Model' */
  real_T VDCInvFR;                     /* '<Root>/Model' */
  real_T TInvFR;                       /* '<Root>/Model' */
  real_T vWheelRL;                     /* '<Root>/Model' */
  real_T vWheelRR;                     /* '<Root>/Model' */
  real_T vWheelFL;                     /* '<Root>/Model' */
  real_T vWheelFR;                     /* '<Root>/Model' */
  real_T pBrakeF;                      /* '<Root>/Model' */
  real_T pBrakeR;                      /* '<Root>/Model' */
  real_T VDamperPotentiometerFL;       /* '<Root>/Model' */
  real_T VDamperPotentiometerFR;       /* '<Root>/Model' */
  real_T NDisplayNumberDDU7;           /* '<Root>/Model' */
  real_T VSteeringAngle;               /* '<Root>/Model' */
  real_T VThrottlePedal1;              /* '<Root>/Model' */
  real_T VThrottlePedal2;              /* '<Root>/Model' */
  real_T VRegenPaddle1;                /* '<Root>/Model' */
  real_T VRegenPaddle2;                /* '<Root>/Model' */
  real_T C1P01_Status;                 /* '<Root>/Model' */
  real_T C1P02_Status;                 /* '<Root>/Model' */
  real_T C1P03_Status;                 /* '<Root>/Model' */
  real_T C1P04_Status;                 /* '<Root>/Model' */
  real_T C1P07_Status;                 /* '<Root>/Model' */
  real_T C1P11_Status;                 /* '<Root>/Model' */
  real_T C1P12_Status;                 /* '<Root>/Model' */
  real_T C1P13_Status;                 /* '<Root>/Model' */
  real_T C1P25_Status;                 /* '<Root>/Model' */
  real_T C1P26_Status;                 /* '<Root>/Model' */
  real_T C1P28_Status;                 /* '<Root>/Model' */
  real_T C1P30_Status;                 /* '<Root>/Model' */
  real_T C1P31_Status;                 /* '<Root>/Model' */
  real_T C1P33_Status;                 /* '<Root>/Model' */
  real_T C1P34_Status;                 /* '<Root>/Model' */
  real_T C1P36_Status;                 /* '<Root>/Model' */
  real_T C1P37_Status;                 /* '<Root>/Model' */
  real_T C1P38_Status;                 /* '<Root>/Model' */
  real_T C2P01_Status;                 /* '<Root>/Model' */
  real_T C2P02_Status;                 /* '<Root>/Model' */
  real_T C2P03_Status;                 /* '<Root>/Model' */
  real_T C2P04_Status;                 /* '<Root>/Model' */
  real_T C2P05_Status;                 /* '<Root>/Model' */
  real_T C2P13_Status;                 /* '<Root>/Model' */
  real_T C2P25_Status;                 /* '<Root>/Model' */
  real_T C2P26_Status;                 /* '<Root>/Model' */
  real_T C2P27_Status;                 /* '<Root>/Model' */
  real_T C2P28_Status;                 /* '<Root>/Model' */
  real_T C2P29_Status;                 /* '<Root>/Model' */
  real_T C2P30_Status;                 /* '<Root>/Model' */
  real_T C2P31_Status;                 /* '<Root>/Model' */
  real_T C2P33_Status;                 /* '<Root>/Model' */
  real_T C1P16_Digital;                /* '<Root>/Model' */
  real_T C1P17_Digital;                /* '<Root>/Model' */
  real_T C2P17_Digital;                /* '<Root>/Model' */
  real_T C2P18_Digital;                /* '<Root>/Model' */
  real_T C2P35_Status;                 /* '<Root>/Model' */
  real_T C2P36_Status;                 /* '<Root>/Model' */
  real_T C2P37_Status;                 /* '<Root>/Model' */
  real_T C2P38_Status;                 /* '<Root>/Model' */
  real_T ILVSystem;                    /* '<Root>/Model' */
  real_T TLVSystem;                    /* '<Root>/Model' */
  real_T VLVSystem;                    /* '<Root>/Model' */
  real_T VDamperPotentiometerRL;       /* '<Root>/Model' */
  real_T VDamperPotentiometerRR;       /* '<Root>/Model' */
  real_T vLongitudinalOXTSIMU;         /* '<Root>/Model' */
  real_T gLateralOXTSIMU;              /* '<Root>/Model' */
  real_T gLongitudinalOXTSIMU;         /* '<Root>/Model' */
  real_T nYawRateOXTSIMU;              /* '<Root>/Model' */
  real_T VCellMax;                     /* '<Root>/Model' */
  real_T VCellDelta;                   /* '<Root>/Model' */
  real_T VCellMin;                     /* '<Root>/Model' */
  real_T VCellAverage;                 /* '<Root>/Model' */
  real_T TCellMax;                     /* '<Root>/Model' */
  real_T NBMSDLC;                      /* '<Root>/Model' */
  real_T TCellMin;                     /* '<Root>/Model' */
  real_T IBMSHallEffect;               /* '<Root>/Model' */
  real_T VDCAccumulator;               /* '<Root>/Model' */
  real_T RCellAverage;                 /* '<Root>/Model' */
  real_T IIVTS;                        /* '<Root>/Model' */
  real_T rThrottlePedal;               /* '<Root>/Model' */
  real_T tThrottleError;               /* '<Root>/Model' */
  real_T tBrakeError;                  /* '<Root>/Model' */
  real_T pBrakeMax;                    /* '<Root>/Model' */
  real_T tPedalOverlap;                /* '<Root>/Model' */
  real_T tAppsTimer;                   /* '<Root>/Model' */
  real_T rSteeringAngle_k;             /* '<Root>/Model' */
  real_T aSteeringAngle;               /* '<Root>/Model' */
  real_T rRegenPaddle_i;               /* '<Root>/Model' */
  real_T xDamperFL;                    /* '<Root>/Model' */
  real_T xDamperFR;                    /* '<Root>/Model' */
  real_T xDamperRL;                    /* '<Root>/Model' */
  real_T xDamperRR;                    /* '<Root>/Model' */
  real_T vChassis_e;                   /* '<Root>/Model' */
  real_T sChassis;                     /* '<Root>/Model' */
  real_T sEMS1000m;                    /* '<Root>/Model' */
  real_T NThrottleMap;                 /* '<Root>/Model' */
  real_T PDischarge;                   /* '<Root>/Model' */
  real_T PRegen;                       /* '<Root>/Model' */
  real_T rTorqueSplit;                 /* '<Root>/Model' */
  real_T PEngineBraking;               /* '<Root>/Model' */
  real_T NTractionControlKpSelector;   /* '<Root>/Model' */
  real_T rTorqueVectoringMultiplier;   /* '<Root>/Model' */
  real_T NPowerControllerKpSelector;   /* '<Root>/Model' */
  real_T NTorqueSplitSpeedSelector;    /* '<Root>/Model' */
  real_T NModeNumberDisplay5;          /* '<Root>/Model' */
  real_T NModeNumberDisplay6;          /* '<Root>/Model' */
  real_T TMotorMax;                    /* '<Root>/Model' */
  real_T TInvMax;                      /* '<Root>/Model' */
  real_T PActual_p;                    /* '<Root>/Model' */
  real_T rSOC_a;                       /* '<Root>/Model' */
  real_T rSOE;                         /* '<Root>/Model' */
  real_T rCoolingFansDuty;             /* '<Root>/Model' */
  real_T rCoolingPumpsDuty;            /* '<Root>/Model' */
  real_T rThrottlePedal1;              /* '<Root>/Model' */
  real_T rThrottlePedal2;              /* '<Root>/Model' */
  real_T NCarState_h;                  /* '<Root>/Model' */
  real_T NBMSState_f;                  /* '<Root>/Model' */
  real_T NInvState_d;                  /* '<Root>/Model' */
  real_T BHVOn;                        /* '<Root>/Model' */
  real_T BInvOnRL;                     /* '<Root>/Model' */
  real_T BInvOnRR;                     /* '<Root>/Model' */
  real_T BInvOnFL;                     /* '<Root>/Model' */
  real_T BInvOnFR;                     /* '<Root>/Model' */
  real_T BInvDCOnRL;                   /* '<Root>/Model' */
  real_T BInvDCOnRR;                   /* '<Root>/Model' */
  real_T BInvDCOnFL;                   /* '<Root>/Model' */
  real_T BInvDCOnFR;                   /* '<Root>/Model' */
  real_T BInvEnableRL;                 /* '<Root>/Model' */
  real_T BInvEnableRR;                 /* '<Root>/Model' */
  real_T BInvEnableFL;                 /* '<Root>/Model' */
  real_T BInvEnableFR;                 /* '<Root>/Model' */
  real_T BInvErrorResetRL;             /* '<Root>/Model' */
  real_T BInvErrorResetRR;             /* '<Root>/Model' */
  real_T BInvErrorResetFL;             /* '<Root>/Model' */
  real_T BInvErrorResetFR;             /* '<Root>/Model' */
  real_T MTargetTorqueRL;              /* '<Root>/Model' */
  real_T MTargetTorqueRR;              /* '<Root>/Model' */
  real_T MTargetTorqueFL;              /* '<Root>/Model' */
  real_T MTargetTorqueFR;              /* '<Root>/Model' */
  real_T MTorqueLimitNegativeRL;       /* '<Root>/Model' */
  real_T MTorqueLimitNegativeRR;       /* '<Root>/Model' */
  real_T MTorqueLimitNegativeFL;       /* '<Root>/Model' */
  real_T MTorqueLimitNegativeFR;       /* '<Root>/Model' */
  real_T MTorqueLimitPositiveRL;       /* '<Root>/Model' */
  real_T MTorqueLimitPositiveRR;       /* '<Root>/Model' */
  real_T MTorqueLimitPositiveFL;       /* '<Root>/Model' */
  real_T MTorqueLimitPositiveFR;       /* '<Root>/Model' */
  real_T rInvTemperatureDerate_o;      /* '<Root>/Model' */
  real_T rInvTemperatureDerateFR;      /* '<Root>/Model' */
  real_T rInvTemperatureDerateFL;      /* '<Root>/Model' */
  real_T rInvTemperatureDerateRR;      /* '<Root>/Model' */
  real_T rInvTemperatureDerateRL;      /* '<Root>/Model' */
  real_T rMotorTemperatureDerate_p;    /* '<Root>/Model' */
  real_T rMotorTemperatureDerateFR;    /* '<Root>/Model' */
  real_T rMotorTemperatureDerateFL;    /* '<Root>/Model' */
  real_T rMotorTemperatureDerateRR;    /* '<Root>/Model' */
  real_T rMotorTemperatureDerateRL;    /* '<Root>/Model' */
  real_T rTSTemperatureDerateFR;       /* '<Root>/Model' */
  real_T rTSTemperatureDerateFL;       /* '<Root>/Model' */
  real_T rTSTemperatureDerateRR;       /* '<Root>/Model' */
  real_T rTSTemperatureDerateRL;       /* '<Root>/Model' */
  real_T rHighCellTemperatureDischargeDe;/* '<Root>/Model' */
  real_T rHighCellTemperatureRegenDerate;/* '<Root>/Model' */
  real_T rLowCellVoltageDischargeDerate;/* '<Root>/Model' */
  real_T rSOCDischargeDerate;          /* '<Root>/Model' */
  real_T rSOCRegenDerate;              /* '<Root>/Model' */
  real_T rSpeedRegenDerate_o;          /* '<Root>/Model' */
  real_T rDischargeDerate_o;           /* '<Root>/Model' */
  real_T rRegenDerate_k;               /* '<Root>/Model' */
  real_T MDriverDischargeRequested_h;  /* '<Root>/Model' */
  real_T MDriverRegenRequested_d;      /* '<Root>/Model' */
  real_T MDischargeLimited;            /* '<Root>/Model' */
  real_T MRegenLimited;                /* '<Root>/Model' */
  real_T PPowerControllerRequested;    /* '<Root>/Model' */
  real_T MPowerControllerRequested;    /* '<Root>/Model' */
  real_T PPowerControllerProportionalTer;/* '<Root>/Model' */
  real_T PPowerControllerIntegralTerm; /* '<Root>/Model' */
  real_T PDischargeLimited;            /* '<Root>/Model' */
  real_T MTotalRequested_p;            /* '<Root>/Model' */
  real_T MTotalEMSRequested;           /* '<Root>/Model' */
  real_T rSOCTargetError;              /* '<Root>/Model' */
  real_T rSOETargetError;              /* '<Root>/Model' */
  real_T nYawRateErrorActual;          /* '<Root>/Model' */
  real_T MTorqueVectoringFL;           /* '<Root>/Model' */
  real_T MTorqueVectoringFR;           /* '<Root>/Model' */
  real_T MTorqueVectoringRL;           /* '<Root>/Model' */
  real_T MTorqueVectoringRR;           /* '<Root>/Model' */
  real_T rSplitRear;                   /* '<Root>/Model' */
  real_T MTorqueDistributionFL;        /* '<Root>/Model' */
  real_T MTorqueDistributionFR;        /* '<Root>/Model' */
  real_T MTorqueDistributionRL;        /* '<Root>/Model' */
  real_T MTorqueDistributionRR;        /* '<Root>/Model' */
  real_T rSlipRatioOptimal;            /* '<Root>/Model' */
  real_T NTractionControlMultiplierFL; /* '<Root>/Model' */
  real_T NTractionControlMultiplierFR; /* '<Root>/Model' */
  real_T NTractionControlMultiplierRL; /* '<Root>/Model' */
  real_T NTractionControlMultiplierRR; /* '<Root>/Model' */
  real_T NABSMultiplierFL;             /* '<Root>/Model' */
  real_T NABSMultiplierFR;             /* '<Root>/Model' */
  real_T NABSMultiplierRL;             /* '<Root>/Model' */
  real_T NABSMultiplierRR;             /* '<Root>/Model' */
  real_T rSlipRatioFLActual;           /* '<Root>/Model' */
  real_T rSlipRatioFRActual;           /* '<Root>/Model' */
  real_T rSlipRatioRLActual;           /* '<Root>/Model' */
  real_T rSlipRatioRRActual;           /* '<Root>/Model' */
  real_T MTractionControlFLTotal;      /* '<Root>/Model' */
  real_T MTractionControlFRTotal;      /* '<Root>/Model' */
  real_T MTractionControlRLTotal;      /* '<Root>/Model' */
  real_T MTractionControlRRTotal;      /* '<Root>/Model' */
  real_T MTractionControlFLFinal;      /* '<Root>/Model' */
  real_T MTractionControlFRFinal;      /* '<Root>/Model' */
  real_T MTractionControlRLFinal;      /* '<Root>/Model' */
  real_T MTractionControlRRFinal;      /* '<Root>/Model' */
  real_T MSpinningModelFL;             /* '<Root>/Model' */
  real_T MSpinningModelFR;             /* '<Root>/Model' */
  real_T MSpinningModelRL;             /* '<Root>/Model' */
  real_T MSpinningModelRR;             /* '<Root>/Model' */
  real_T MFLFinal;                     /* '<Root>/Model' */
  real_T MFRFinal;                     /* '<Root>/Model' */
  real_T MRLFinal;                     /* '<Root>/Model' */
  real_T MRRFinal;                     /* '<Root>/Model' */
  real_T MTotalFinal;                  /* '<Root>/Model' */
  boolean_T BInvDCOnRL_p;              /* '<Root>/Model' */
  boolean_T BInvErrorRL;               /* '<Root>/Model' */
  boolean_T BInvOnRL_b;                /* '<Root>/Model' */
  boolean_T BInvDCQuitInvOnRL;         /* '<Root>/Model' */
  boolean_T BInvQuitInvOnRL;           /* '<Root>/Model' */
  boolean_T BInvSysReadyRL;            /* '<Root>/Model' */
  boolean_T BInvWarnRL;                /* '<Root>/Model' */
  boolean_T BInvDCOnFL_g;              /* '<Root>/Model' */
  boolean_T BInvErrorFL;               /* '<Root>/Model' */
  boolean_T BInvOnFL_o;                /* '<Root>/Model' */
  boolean_T BInvDCQuitInvOnFL;         /* '<Root>/Model' */
  boolean_T BInvQuitInvOnFL;           /* '<Root>/Model' */
  boolean_T BInvSysReadyFL;            /* '<Root>/Model' */
  boolean_T BInvWarnFL;                /* '<Root>/Model' */
  boolean_T BInvDCOnRR_i;              /* '<Root>/Model' */
  boolean_T BInvErrorRR;               /* '<Root>/Model' */
  boolean_T BInvOnRR_j;                /* '<Root>/Model' */
  boolean_T BInvDCQuitInvOnRR;         /* '<Root>/Model' */
  boolean_T BInvQuitInvOnRR;           /* '<Root>/Model' */
  boolean_T BInvSysReadyRR;            /* '<Root>/Model' */
  boolean_T BInvWarnRR;                /* '<Root>/Model' */
  boolean_T BInvDCOnFR_l;              /* '<Root>/Model' */
  boolean_T BInvErrorFR;               /* '<Root>/Model' */
  boolean_T BInvOnFR_g;                /* '<Root>/Model' */
  boolean_T BInvDCQuitInvOnFR;         /* '<Root>/Model' */
  boolean_T BInvQuitInvOnFR;           /* '<Root>/Model' */
  boolean_T BInvSysReadyFR;            /* '<Root>/Model' */
  boolean_T BInvWarnFR;                /* '<Root>/Model' */
  boolean_T BSteeringWheelButton1;     /* '<Root>/Model' */
  boolean_T BSteeringWheelButton2;     /* '<Root>/Model' */
  boolean_T BSteeringWheelButton3;     /* '<Root>/Model' */
  boolean_T BSteeringWheelButton4;     /* '<Root>/Model' */
  boolean_T BSteeringWheelButton5;     /* '<Root>/Model' */
  boolean_T BSteeringWheelButton6;     /* '<Root>/Model' */
  boolean_T BSteeringWheelButton7;     /* '<Root>/Model' */
  boolean_T BSteeringWheelButton8;     /* '<Root>/Model' */
  boolean_T BBalancingActive;          /* '<Root>/Model' */
  boolean_T BBMSP0A0C;                 /* '<Root>/Model' */
  boolean_T BBMSP0A0E;                 /* '<Root>/Model' */
  boolean_T BBMSP0A10;                 /* '<Root>/Model' */
  boolean_T BBMSP0A80;                 /* '<Root>/Model' */
  boolean_T BBMSP0AC0;                 /* '<Root>/Model' */
  boolean_T BBMSP0AFA;                 /* '<Root>/Model' */
  boolean_T BThrottleError_g;          /* '<Root>/Model' */
  boolean_T BBrakeError_o;             /* '<Root>/Model' */
  boolean_T BBrakeOn;                  /* '<Root>/Model' */
  boolean_T BPedalOverlap_k;           /* '<Root>/Model' */
  boolean_T BAppsOK_n;                 /* '<Root>/Model' */
  boolean_T BRegenOn;                  /* '<Root>/Model' */
  boolean_T BBrakeLight_b;             /* '<Root>/Model' */
  boolean_T BDamperErrorFL;            /* '<Root>/Model' */
  boolean_T BDamperErrorFR;            /* '<Root>/Model' */
  boolean_T BDamperErrorRL;            /* '<Root>/Model' */
  boolean_T BDamperErrorRR;            /* '<Root>/Model' */
  boolean_T BEMS1000mPoint;            /* '<Root>/Model' */
  boolean_T BEMS995mPoint;             /* '<Root>/Model' */
  boolean_T BTorqueVectoringActivated; /* '<Root>/Model' */
  boolean_T BEMSActivated;             /* '<Root>/Model' */
  boolean_T BSpinningModelActivated;   /* '<Root>/Model' */
  boolean_T BTractionControlActivated; /* '<Root>/Model' */
  boolean_T BAccumulatorFanOn;         /* '<Root>/Model' */
  boolean_T BErrorReset;               /* '<Root>/Model' */
  boolean_T BReadyToDriveButton;       /* '<Root>/Model' */
  boolean_T BEncoderErrorRear;         /* '<Root>/Model' */
  boolean_T BEncoderErrorFront;        /* '<Root>/Model' */
  boolean_T BAccumulatorFanDuty;       /* '<Root>/Model' */
  boolean_T BInvLVOn;                  /* '<Root>/Model' */
  boolean_T BReadyToDriveBuzzer;       /* '<Root>/Model' */
  boolean_T BReadyToDrive;             /* '<Root>/Model' */
  boolean_T BDischargeAllowed;         /* '<Root>/Model' */
  boolean_T BTorqueVectoringOK;        /* '<Root>/Model' */
} B_ENV_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T Memory_PreviousInput;         /* '<S3>/Memory' */
  real_T Memory_PreviousInput_i;       /* '<S4>/Memory' */
  uint8_T Output_DSTATE;               /* '<S1>/Output' */
  uint8_T Output_DSTATE_f;             /* '<S2>/Output' */
  MdlrefDW_MASTER_T Model_InstanceData;/* '<Root>/Model' */
} DW_ENV_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T nMotorRL;                     /* '<Root>/nMotorRL' */
  boolean_T BInvDCOnRL;                /* '<Root>/BInvDCOnRLIn' */
  boolean_T BInvErrorRL;               /* '<Root>/BInvErrorRL' */
  boolean_T BInvOnRL;                  /* '<Root>/BInvOnRLIn' */
  boolean_T BInvDCQuitInvOnRL;         /* '<Root>/BInvDCQuitInvOnRL' */
  boolean_T BInvQuitInvOnRL;           /* '<Root>/BInvQuitInvOnRL' */
  boolean_T BInvSysReadyRL;            /* '<Root>/BInvSysReadyRL' */
  boolean_T BInvWarnRL;                /* '<Root>/BInvWarnRL' */
  real_T MMotorMeasuredRL;             /* '<Root>/MMotorMeasuredRL' */
  real_T NInvDTCRL;                    /* '<Root>/NInvDTCRL' */
  real_T TMotorRL;                     /* '<Root>/TMotorRL' */
  real_T VDCInvRL;                     /* '<Root>/VDCInvRL' */
  real_T TInvRL;                       /* '<Root>/TInvRL' */
  real_T nMotorRR;                     /* '<Root>/nMotorRR' */
  boolean_T BInvDCOnRR;                /* '<Root>/BInvDCOnRRIn' */
  boolean_T BInvErrorRR;               /* '<Root>/BInvErrorRR' */
  boolean_T BInvOnRR;                  /* '<Root>/BInvOnRRIn' */
  boolean_T BInvDCQuitInvOnRR;         /* '<Root>/BInvDCQuitInvOnRR' */
  boolean_T BInvQuitInvOnRR;           /* '<Root>/BInvQuitInvOnRR' */
  boolean_T BInvSysReadyRR;            /* '<Root>/BInvSysReadyRR' */
  boolean_T BInvWarnRR;                /* '<Root>/BInvWarnRR' */
  real_T MMotorMeasuredRR;             /* '<Root>/MMotorMeasuredRR' */
  real_T NInvDTCRR;                    /* '<Root>/NInvDTCRR' */
  real_T TMotorRR;                     /* '<Root>/TMotorRR' */
  real_T VDCInvRR;                     /* '<Root>/VDCInvRR' */
  real_T TInvRR;                       /* '<Root>/TInvRR' */
  real_T nMotorFL;                     /* '<Root>/nMotorFL' */
  boolean_T BInvDCOnFL;                /* '<Root>/BInvDCOnFLIn' */
  boolean_T BInvErrorFL;               /* '<Root>/BInvErrorFL' */
  boolean_T BInvOnFL;                  /* '<Root>/BInvOnFLIn' */
  boolean_T BInvDCQuitInvOnFL;         /* '<Root>/BInvDCQuitInvOnFL' */
  boolean_T BInvQuitInvOnFL;           /* '<Root>/BInvQuitInvOnFL' */
  boolean_T BInvSysReadyFL;            /* '<Root>/BInvSysReadyFL' */
  boolean_T BInvWarnFL;                /* '<Root>/BInvWarnFL' */
  real_T MMotorMeasuredFL;             /* '<Root>/MMotorMeasuredFL' */
  real_T NInvDTCFL;                    /* '<Root>/NInvDTCFL' */
  real_T TMotorFL;                     /* '<Root>/TMotorFL' */
  real_T VDCInvFL;                     /* '<Root>/VDCInvFL' */
  real_T TInvFL;                       /* '<Root>/TInvFL' */
  real_T nMotorFR;                     /* '<Root>/nMotorFR' */
  boolean_T BInvDCOnFR;                /* '<Root>/BInvDCOnFR' */
  boolean_T BInvErrorFR;               /* '<Root>/BInvErrorFR' */
  boolean_T BInvOnFR;                  /* '<Root>/BInvOnFR' */
  boolean_T BInvDCQuitInvOnFR;         /* '<Root>/BInvDCQuitInvOnFR' */
  boolean_T BInvQuitInvOnFR;           /* '<Root>/BInvQuitInvOnFR' */
  boolean_T BInvSysReadyFR;            /* '<Root>/BInvSysReadyFR' */
  boolean_T BInvWarnFR;                /* '<Root>/BInvWarnFR' */
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
  boolean_T BSteeringWheelButton1;     /* '<Root>/BSteeringWheelButton1' */
  boolean_T BSteeringWheelButton2;     /* '<Root>/BSteeringWheelButton2' */
  boolean_T BSteeringWheelButton3;     /* '<Root>/BSteeringWheelButton3' */
  boolean_T BSteeringWheelButton4;     /* '<Root>/BSteeringWheelButton4' */
  boolean_T BSteeringWheelButton5;     /* '<Root>/BSteeringWheelButton5' */
  boolean_T BSteeringWheelButton6;     /* '<Root>/BSteeringWheelButton6' */
  boolean_T BSteeringWheelButton7;     /* '<Root>/BSteeringWheelButton7' */
  boolean_T BSteeringWheelButton8;     /* '<Root>/BSteeringWheelButton8' */
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
  real_T PPowerControllerProportionalTer;
                                 /* '<Root>/PPowerControllerProportionalTerm' */
  real_T MTotalFinal;                  /* '<Root>/MTotalFinal' */
  real_T PActual_l;                    /* '<Root>/PActual' */
  real_T vChassis_f;                   /* '<Root>/vChassis' */
  real_T PPowerControllerIntegralTerm;
                                     /* '<Root>/PPowerControllerIntegralTerm' */
  boolean_T BSpinningModelActivated;   /* '<Root>/BSpinningModelActivated' */
  boolean_T BTorqueVectoringOK;        /* '<Root>/BTorqueVectoringOK' */
  boolean_T BEncoderErrorRear;         /* '<Root>/BEncoderErrorRear' */
  boolean_T BEncoderErrorFront;        /* '<Root>/BEncoderErrorFront' */
  boolean_T BBMSP0A80;                 /* '<Root>/BBMSP0A80 ' */
  boolean_T BBMSP0AC0;                 /* '<Root>/BBMSP0AC0 ' */
  boolean_T BBMSP0AFA;                 /* '<Root>/BBMSP0AFA ' */
  real_T rHighCellTemperatureDischargeDe;
                              /* '<Root>/rHighCellTemperatureDischargeDerate' */
  real_T rHighCellTemperatureRegenDerate;
                                  /* '<Root>/rHighCellTemperatureRegenDerate' */
  real_T rInvTemperatureDerate_n;      /* '<Root>/rInvTemperatureDerate' */
  real_T rMotorTemperatureDerate_a;    /* '<Root>/rMotorTemperatureDerate' */
  real_T rLowCellVoltageDischargeDerate;
                                   /* '<Root>/rLowCellVoltageDischargeDerate' */
  real_T rSOCDischargeDerate;          /* '<Root>/rSOCDischargeDerate' */
  real_T rSOCRegenDerate;              /* '<Root>/rSOCRegenDerate' */
  real_T rSpeedRegenDerate_p;          /* '<Root>/rSpeedRegenDerate' */
  real_T rDischargeDerate_f;           /* '<Root>/rDischargeDerate' */
  real_T rRegenDerate_b;               /* '<Root>/rRegenDerate' */
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
  boolean_T BThrottleError_i;          /* '<Root>/BThrottleError' */
  real_T tThrottleError;               /* '<Root>/tThrottleError' */
  boolean_T BBrakeError_i;             /* '<Root>/BBrakeError' */
  real_T tBrakeError;                  /* '<Root>/tBrakeError' */
  boolean_T BBrakeOn;                  /* '<Root>/BBrakeOn' */
  boolean_T BPedalOverlap_o;           /* '<Root>/BPedalOverlap' */
  boolean_T BAppsOK_m;                 /* '<Root>/BAppsOK' */
  boolean_T BRegenOn;                  /* '<Root>/BRegenOn' */
  boolean_T BTorqueVectoringActivated; /* '<Root>/BTorqueVectoringActivated' */
  real_T rSOE;                         /* '<Root>/rSOE' */
  real_T sChassis;                     /* '<Root>/sChassis' */
  real_T rSOC_j;                       /* '<Root>/rSOC' */
  real_T PRegen;                       /* '<Root>/PRegen' */
  real_T rTorqueVectoringMultiplier;   /* '<Root>/rTorqueVectoringMultiplier' */
  real_T NModelNumberDisplay5;         /* '<Root>/NModelNumberDisplay5' */
  real_T PEngineBraking;               /* '<Root>/PEngineBraking' */
  real_T NModelNumberDisplay6;         /* '<Root>/NModelNumberDisplay6' */
  real_T NPowerControllerKpSelector;   /* '<Root>/NPowerControllerKpSelector' */
  real_T NTorqueSplitSpeedSelector;    /* '<Root>/NTorqueSplitSpeedSelector' */
  real_T NBMSDLCOut;                   /* '<Root>/NBMSDLCOut' */
  real_T NInvState_o;                  /* '<Root>/NInvState' */
  real_T NBMSState_f;                  /* '<Root>/NBMSState' */
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
  boolean_T BReadyToDrive;             /* '<Root>/BReadyToDrive' */
  real_T MTractionControlFinalFR;      /* '<Root>/MTractionControlFinalFR' */
  real_T MTractionControlFinalRR;      /* '<Root>/MTractionControlFinalRR' */
  real_T MTractionControlFinalRL;      /* '<Root>/MTractionControlFinalRL' */
  real_T MTractionControlFinalFL;      /* '<Root>/MTractionControlFinalFL' */
  real_T NABSMultiplierFL;             /* '<Root>/NABSMultiplierFL' */
  real_T NABSMultiplierFR;             /* '<Root>/NABSMultiplierFR' */
  boolean_T BBalancingActiveOut;       /* '<Root>/BBalancingActiveOut' */
  boolean_T BBMSP0A0COut;              /* '<Root>/BBMSP0A0COut' */
  real_T MTVFinalFL;                   /* '<Root>/MTVFinalFL' */
  real_T MTVFinalFR;                   /* '<Root>/MTVFinalFR' */
  real_T MTVFinalRL;                   /* '<Root>/MTVFinalRL' */
  real_T MTVFinalRR;                   /* '<Root>/MTVFinalRR' */
  real_T NTractionControlMultiplierFL;
                                     /* '<Root>/NTractionControlMultiplierFL' */
  real_T NTractionControlMultiplierFR;
                                    /* '<Root>/NTractionControlMultiplierFR ' */
  boolean_T BBMSP0A0E;                 /* '<Root>/BBMSP0A0E ' */
  boolean_T BBMSP0A10;                 /* '<Root>/BBMSP0A10 ' */
  real_T MDischargeLimited;            /* '<Root>/MDischargeLimited' */
  real_T MDriverRegenRequested_f;      /* '<Root>/MDriverRegenRequested' */
  real_T rSlipRatioOptimal;            /* '<Root>/rSlipRatioOptimal' */
  real_T MRegenLimited;                /* '<Root>/MRegenLimited' */
  real_T MSpinningModeFL;              /* '<Root>/MSpinningModeFL' */
  real_T MSpinningModeFR;              /* '<Root>/MSpinningModeFR' */
  real_T NCarState_f;                  /* '<Root>/NCarState' */
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
  boolean_T BDischargeAllowed;         /* '<Root>/BDischargeAllowed' */
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
  real_T MTotalRequested_h;            /* '<Root>/MTotalRequested' */
  boolean_T BEMSActivated;             /* '<Root>/BEMSActivated' */
  boolean_T BTractionControlActivated; /* '<Root>/BTractionControlActivated' */
  boolean_T BAccumulatorFanOn;         /* '<Root>/BAccumulatorFanOn' */
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
  boolean_T BAccumulatorFanOnRequest;  /* '<Root>/BAccumulatorFanOnRequest' */
  boolean_T BInvLVOnRequest;           /* '<Root>/BInvLVOnRequest' */
  boolean_T BEMS1000mPoint;            /* '<Root>/BEMS1000mPoint' */
  boolean_T BAccumulatorFanDutyRequest;/* '<Root>/BAccumulatorFanDutyRequest' */
  boolean_T BEMS995mPoint;             /* '<Root>/BEMS995mPoint' */
  boolean_T BBrakeLightOnRequest;      /* '<Root>/BBrakeLightOnRequest' */
  real_T MDriverDischargeRequested_f;  /* '<Root>/MDriverDischargeRequested' */
  boolean_T BReadyToDriveBuzzerRequest;/* '<Root>/BReadyToDriveBuzzerRequest' */
  real_T MFLFinal;                     /* '<Root>/MFLFinal' */
  real_T MFRFinal;                     /* '<Root>/MFRFinal' */
  real_T MRLFinal;                     /* '<Root>/MRLFinal' */
  real_T MRRFinal;                     /* '<Root>/MRRFinal' */
  uint8_T Multiplexer;                 /* '<Root>/Multiplexer' */
  uint8_T multiplexer;                 /* '<Root>/multiplexer' */
  real_T rRegenPaddle_a;               /* '<Root>/rRegenPaddle' */
} ExtY_ENV_T;

/* Real-time Model Data Structure */
struct tag_RTM_ENV_T {
  const char_T *errorStatus;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    struct {
      uint32_T TID[2];
    } TaskCounters;
  } Timing;
};

/* Block signals (default storage) */
extern B_ENV_T ENV_B;

/* Block states (default storage) */
extern DW_ENV_T ENV_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_ENV_T ENV_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_ENV_T ENV_Y;

/* External function called from main */
extern void ENV_SetEventsForThisBaseStep(boolean_T *eventFlags);

/* Model entry point functions */
extern void ENV_initialize(void);
extern void ENV_step0(void);           /* Sample time: [0.001s, 0.0s] */
extern void ENV_step1(void);           /* Sample time: [5.0s, 0.0s] */
extern void ENV_terminate(void);

/* Real-time Model object */
extern RT_MODEL_ENV_T *const ENV_M;
extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S1>/Data Type Propagation' : Unused code path elimination
 * Block '<S5>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S6>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S2>/Data Type Propagation' : Unused code path elimination
 * Block '<S7>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S8>/FixPt Data Type Duplicate1' : Unused code path elimination
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
 * '<S1>'   : 'ENV/Counter Limited'
 * '<S2>'   : 'ENV/Counter Limited1'
 * '<S3>'   : 'ENV/gLat'
 * '<S4>'   : 'ENV/gLong'
 * '<S5>'   : 'ENV/Counter Limited/Increment Real World'
 * '<S6>'   : 'ENV/Counter Limited/Wrap To Zero'
 * '<S7>'   : 'ENV/Counter Limited1/Increment Real World'
 * '<S8>'   : 'ENV/Counter Limited1/Wrap To Zero'
 * '<S9>'   : 'ENV/gLat/Compare To Constant'
 * '<S10>'  : 'ENV/gLat/Compare To Constant1'
 * '<S11>'  : 'ENV/gLong/Compare To Constant'
 * '<S12>'  : 'ENV/gLong/Compare To Constant1'
 */
#endif                                 /* ENV_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
