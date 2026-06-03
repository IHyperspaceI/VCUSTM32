/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: MASTER.h
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

#ifndef MASTER_h_
#define MASTER_h_
#ifndef MASTER_COMMON_INCLUDES_
#define MASTER_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                                 /* MASTER_COMMON_INCLUDES_ */

#include "MASTER_types.h"
#include "TORQUECONTROL.h"
#include "LIMITATIONS.h"
#include "STATEFLOW.h"
#include "SYSTEMS.h"
#include "INPUT.h"
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

/* user code (top of header file) */
#include "stm32h7xx_ll_tim.h"

/* Block signals (default storage) */
typedef struct {
  real_T MDriverDischargeRequested_a;  /* '<Root>/TORQUECONTROL' */
  real_T MDriverRegenRequested_m;      /* '<Root>/TORQUECONTROL' */
  real_T MDischargeLimited;            /* '<Root>/TORQUECONTROL' */
  real_T MRegenLimited;                /* '<Root>/TORQUECONTROL' */
  real_T PPowerControllerRequested;    /* '<Root>/TORQUECONTROL' */
  real_T MPowerControllerRequested;    /* '<Root>/TORQUECONTROL' */
  real_T PPowerControllerProportionalTer;/* '<Root>/TORQUECONTROL' */
  real_T PPowerControllerIntegralTerm; /* '<Root>/TORQUECONTROL' */
  real_T PDischargeLimited;            /* '<Root>/TORQUECONTROL' */
  real_T MTotalRequested_h;            /* '<Root>/TORQUECONTROL' */
  real_T MTotalEMSRequested;           /* '<Root>/TORQUECONTROL' */
  real_T rSOCTargetError;              /* '<Root>/TORQUECONTROL' */
  real_T rSOETargetError;              /* '<Root>/TORQUECONTROL' */
  real_T nYawRateErrorActual;          /* '<Root>/TORQUECONTROL' */
  real_T MTorqueVectoringFL;           /* '<Root>/TORQUECONTROL' */
  real_T MTorqueVectoringFR;           /* '<Root>/TORQUECONTROL' */
  real_T MTorqueVectoringRL;           /* '<Root>/TORQUECONTROL' */
  real_T MTorqueVectoringRR;           /* '<Root>/TORQUECONTROL' */
  real_T rSplitRear;                   /* '<Root>/TORQUECONTROL' */
  real_T MTorqueDistributionFL;        /* '<Root>/TORQUECONTROL' */
  real_T MTorqueDistributionFR;        /* '<Root>/TORQUECONTROL' */
  real_T MTorqueDistributionRL;        /* '<Root>/TORQUECONTROL' */
  real_T MTorqueDistributionRR;        /* '<Root>/TORQUECONTROL' */
  real_T rSlipRatioOptimal;            /* '<Root>/TORQUECONTROL' */
  real_T NTractionControlMultiplierFL; /* '<Root>/TORQUECONTROL' */
  real_T NTractionControlMultiplierFR; /* '<Root>/TORQUECONTROL' */
  real_T NTractionControlMultiplierRL; /* '<Root>/TORQUECONTROL' */
  real_T NTractionControlMultiplierRR; /* '<Root>/TORQUECONTROL' */
  real_T NABSMultiplierFL;             /* '<Root>/TORQUECONTROL' */
  real_T NABSMultiplierFR;             /* '<Root>/TORQUECONTROL' */
  real_T NABSMultiplierRL;             /* '<Root>/TORQUECONTROL' */
  real_T NABSMultiplierRR;             /* '<Root>/TORQUECONTROL' */
  real_T rSlipRatioFLActual;           /* '<Root>/TORQUECONTROL' */
  real_T rSlipRatioFRActual;           /* '<Root>/TORQUECONTROL' */
  real_T rSlipRatioRLActual;           /* '<Root>/TORQUECONTROL' */
  real_T rSlipRatioRRActual;           /* '<Root>/TORQUECONTROL' */
  real_T MTractionControlFLTotal;      /* '<Root>/TORQUECONTROL' */
  real_T MTractionControlFRTotal;      /* '<Root>/TORQUECONTROL' */
  real_T MTractionControlRLTotal;      /* '<Root>/TORQUECONTROL' */
  real_T MTractionControlRRTotal;      /* '<Root>/TORQUECONTROL' */
  real_T MTractionControlFLFinal;      /* '<Root>/TORQUECONTROL' */
  real_T MTractionControlFRFinal;      /* '<Root>/TORQUECONTROL' */
  real_T MTractionControlRLFinal;      /* '<Root>/TORQUECONTROL' */
  real_T MTractionControlRRFinal;      /* '<Root>/TORQUECONTROL' */
  real_T MSpinningModelFL;             /* '<Root>/TORQUECONTROL' */
  real_T MSpinningModelFR;             /* '<Root>/TORQUECONTROL' */
  real_T MSpinningModelRL;             /* '<Root>/TORQUECONTROL' */
  real_T MSpinningModelRR;             /* '<Root>/TORQUECONTROL' */
  real_T MFLFinal;                     /* '<Root>/TORQUECONTROL' */
  real_T MFRFinal;                     /* '<Root>/TORQUECONTROL' */
  real_T MRLFinal;                     /* '<Root>/TORQUECONTROL' */
  real_T MRRFinal;                     /* '<Root>/TORQUECONTROL' */
  real_T MTotalFinal;                  /* '<Root>/TORQUECONTROL' */
  real_T nMotorRL;
  real_T NInvDTCRL;
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
  real_T TMotorRL;
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
  real_T VDCInvRL;
  real_T vLongitudinalOXTSIMU;
  real_T gLateralOXTSIMU;
  real_T gLongitudinalOXTSIMU;
  real_T nYawRateOXTSIMU;
  real_T VCellMax;
  real_T VCellDelta;
  real_T VCellMin;
  real_T VCellAverage;
  real_T TCellMax;
  real_T NBMSDLC;
  real_T TInvRL;
  real_T TCellMin;
  real_T IBMSHallEffect;
  real_T VDCAccumulator;
  real_T RCellAverage;
  real_T nMotorFL;
  real_T IIVTS;
  real_T rThrottlePedal;
  real_T tThrottleError;
  real_T tBrakeError;
  real_T pBrakeMax;
  real_T tPedalOverlap;
  real_T tAppsTimer;
  real_T rSteeringAngle_h;
  real_T aSteeringAngle;
  real_T rRegenPaddle_g;
  real_T xDamperFL;
  real_T xDamperFR;
  real_T xDamperRL;
  real_T xDamperRR;
  real_T vChassis_e;
  real_T sChassis;
  real_T sEMS1000m;
  real_T NThrottleMap;
  real_T PDischarge;
  real_T PRegen;
  real_T rTorqueSplit;
  real_T PEngineBraking;
  real_T NTractionControlKpSelector;
  real_T rTorqueVectoringMultiplier;
  real_T NPowerControllerKpSelector;
  real_T NTorqueSplitSpeedSelector;
  real_T NModeNumberDisplay5;
  real_T NModeNumberDisplay6;
  real_T TMotorMax;
  real_T TInvMax;
  real_T PActual_m;
  real_T rSOC_d;
  real_T rSOE;
  real_T rCoolingFansDuty;
  real_T rCoolingPumpsDuty;
  real_T rThrottlePedal1;
  real_T rThrottlePedal2;
  real_T NCarState_h;
  real_T NBMSState_j;
  real_T NInvState_d;
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
  real_T MMotorMeasuredFL;
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
  real_T NInvDTCFL;
  real_T MTorqueLimitNegativeFL;
  real_T MTorqueLimitNegativeFR;
  real_T MTorqueLimitPositiveRL;
  real_T MTorqueLimitPositiveRR;
  real_T MTorqueLimitPositiveFL;
  real_T MTorqueLimitPositiveFR;
  real_T rInvTemperatureDerate_o;
  real_T rInvTemperatureDerateFR;
  real_T rInvTemperatureDerateFL;
  real_T TMotorFL;
  real_T rInvTemperatureDerateRR;
  real_T rInvTemperatureDerateRL;
  real_T rMotorTemperatureDerate_g;
  real_T rMotorTemperatureDerateFR;
  real_T rMotorTemperatureDerateFL;
  real_T rMotorTemperatureDerateRR;
  real_T rMotorTemperatureDerateRL;
  real_T rTSTemperatureDerateFR;
  real_T rTSTemperatureDerateFL;
  real_T rTSTemperatureDerateRR;
  real_T VDCInvFL;
  real_T rTSTemperatureDerateRL;
  real_T rHighCellTemperatureDischargeDe;
  real_T rHighCellTemperatureRegenDerate;
  real_T rLowCellVoltageDischargeDerate;
  real_T rSOCDischargeDerate;
  real_T rSOCRegenDerate;
  real_T rSpeedRegenDerate_n;
  real_T rDischargeDerate_k;
  real_T rRegenDerate_l;
  real_T MDriverDischargeRequested_l;
  real_T TInvFL;
  real_T MDriverRegenRequested_j;
  real_T MDischargeLimited_c;
  real_T MRegenLimited_i;
  real_T PPowerControllerRequested_j;
  real_T MPowerControllerRequested_j;
  real_T PPowerControllerProportionalT_k;
  real_T PPowerControllerIntegralTerm_d;
  real_T PDischargeLimited_i;
  real_T MTotalRequested_i;
  real_T MTotalEMSRequested_m;
  real_T nMotorRR;
  real_T rSOCTargetError_c;
  real_T rSOETargetError_a;
  real_T nYawRateErrorActual_i;
  real_T MTorqueVectoringFL_b;
  real_T MTorqueVectoringFR_b;
  real_T MTorqueVectoringRL_m;
  real_T MTorqueVectoringRR_f;
  real_T rSplitRear_k;
  real_T MTorqueDistributionFL_d;
  real_T MTorqueDistributionFR_j;
  real_T MTorqueDistributionRL_n;
  real_T MTorqueDistributionRR_o;
  real_T rSlipRatioOptimal_k;
  real_T NTractionControlMultiplierFL_c;
  real_T NTractionControlMultiplierFR_p;
  real_T NTractionControlMultiplierRL_p;
  real_T NTractionControlMultiplierRR_g;
  real_T NABSMultiplierFL_i;
  real_T NABSMultiplierFR_i;
  real_T NABSMultiplierRL_b;
  real_T NABSMultiplierRR_p;
  real_T rSlipRatioFLActual_j;
  real_T rSlipRatioFRActual_l;
  real_T rSlipRatioRLActual_o;
  real_T rSlipRatioRRActual_f;
  real_T MTractionControlFLTotal_a;
  real_T MTractionControlFRTotal_f;
  real_T MTractionControlRLTotal_f;
  real_T MTractionControlRRTotal_f;
  real_T MTractionControlFLFinal_i;
  real_T MTractionControlFRFinal_b;
  real_T MTractionControlRLFinal_h;
  real_T MTractionControlRRFinal_f;
  real_T MSpinningModelFL_n;
  real_T MSpinningModelFR_b;
  real_T MSpinningModelRL_a;
  real_T MSpinningModelRR_f;
  real_T MFLFinal_p;
  real_T MFRFinal_g;
  real_T MRLFinal_a;
  real_T MRRFinal_a;
  real_T MTotalFinal_k;
  real_T MMotorMeasuredRR;
  real_T NInvDTCRR;
  real_T TMotorRR;
  real_T VDCInvRR;
  real_T TInvRR;
  real_T nMotorFR;
  real_T MMotorMeasuredFR;
  real_T NInvDTCFR;
  real_T TMotorFR;
  real_T VDCInvFR;
  real_T TInvFR;
  real_T vWheelRL;
  real_T vWheelRR;
  real_T vWheelFL;
  real_T vWheelFR;
  real_T pBrakeF;
  real_T pBrakeR;
  real_T VDamperPotentiometerFL;
  real_T VDamperPotentiometerFR;
  real_T NDisplayNumberDDU7;
  real_T VSteeringAngle;
  real_T VThrottlePedal1;
  real_T VThrottlePedal2;
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
  real_T MMotorMeasuredRL;
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
  real_T rInvTemperatureDerate_h;      /* '<Root>/LIMITATIONS' */
  real_T rInvTemperatureDerateFR_e;    /* '<Root>/LIMITATIONS' */
  real_T rInvTemperatureDerateFL_g;    /* '<Root>/LIMITATIONS' */
  real_T rInvTemperatureDerateRR_l;    /* '<Root>/LIMITATIONS' */
  real_T rInvTemperatureDerateRL_c;    /* '<Root>/LIMITATIONS' */
  real_T rMotorTemperatureDerate_b;    /* '<Root>/LIMITATIONS' */
  real_T rMotorTemperatureDerateFR_i;  /* '<Root>/LIMITATIONS' */
  real_T rMotorTemperatureDerateFL_f;  /* '<Root>/LIMITATIONS' */
  real_T rMotorTemperatureDerateRR_a;  /* '<Root>/LIMITATIONS' */
  real_T rMotorTemperatureDerateRL_l;  /* '<Root>/LIMITATIONS' */
  real_T rTSTemperatureDerateFR_o;     /* '<Root>/LIMITATIONS' */
  real_T rTSTemperatureDerateFL_h;     /* '<Root>/LIMITATIONS' */
  real_T rTSTemperatureDerateRR_o;     /* '<Root>/LIMITATIONS' */
  real_T rTSTemperatureDerateRL_e;     /* '<Root>/LIMITATIONS' */
  real_T rHighCellTemperatureDischarge_o;/* '<Root>/LIMITATIONS' */
  real_T rHighCellTemperatureRegenDera_b;/* '<Root>/LIMITATIONS' */
  real_T rLowCellVoltageDischargeDerat_b;/* '<Root>/LIMITATIONS' */
  real_T rSOCDischargeDerate_i;        /* '<Root>/LIMITATIONS' */
  real_T rSOCRegenDerate_d;            /* '<Root>/LIMITATIONS' */
  real_T rSpeedRegenDerate_n4;         /* '<Root>/LIMITATIONS' */
  real_T rDischargeDerate_g;           /* '<Root>/LIMITATIONS' */
  real_T rRegenDerate_b;               /* '<Root>/LIMITATIONS' */
  real_T nMotorRL_d;
  real_T NInvDTCRL_j;
  real_T C2P26_Status_g;
  real_T C2P27_Status_m;
  real_T C2P28_Status_i;
  real_T C2P29_Status_i;
  real_T C2P30_Status_i;
  real_T C2P31_Status_e;
  real_T C2P33_Status_j;
  real_T C1P16_Digital_f;
  real_T C1P17_Digital_h;
  real_T C2P17_Digital_d;
  real_T TMotorRL_m;
  real_T C2P18_Digital_o;
  real_T C2P35_Status_d;
  real_T C2P36_Status_f;
  real_T C2P37_Status_n;
  real_T C2P38_Status_c;
  real_T ILVSystem_i;
  real_T TLVSystem_a;
  real_T VLVSystem_c;
  real_T VDamperPotentiometerRL_g;
  real_T VDamperPotentiometerRR_p;
  real_T VDCInvRL_o;
  real_T vLongitudinalOXTSIMU_f;
  real_T gLateralOXTSIMU_o;
  real_T gLongitudinalOXTSIMU_i;
  real_T nYawRateOXTSIMU_f;
  real_T VCellMax_j;
  real_T VCellDelta_c;
  real_T VCellMin_o;
  real_T VCellAverage_f;
  real_T TCellMax_n;
  real_T NBMSDLC_m;
  real_T TInvRL_j;
  real_T TCellMin_e;
  real_T IBMSHallEffect_b;
  real_T VDCAccumulator_g;
  real_T RCellAverage_f;
  real_T nMotorFL_k;
  real_T IIVTS_o;
  real_T rThrottlePedal_d;
  real_T tThrottleError_m;
  real_T tBrakeError_o;
  real_T pBrakeMax_d;
  real_T tPedalOverlap_p;
  real_T tAppsTimer_k;
  real_T rSteeringAngle_hi;
  real_T aSteeringAngle_p;
  real_T rRegenPaddle_ge;
  real_T xDamperFL_e;
  real_T xDamperFR_f;
  real_T xDamperRL_d;
  real_T xDamperRR_j;
  real_T vChassis_ey;
  real_T sChassis_l;
  real_T sEMS1000m_b;
  real_T NThrottleMap_c;
  real_T PDischarge_b;
  real_T PRegen_c;
  real_T rTorqueSplit_l;
  real_T PEngineBraking_i;
  real_T NTractionControlKpSelector_j;
  real_T rTorqueVectoringMultiplier_l;
  real_T NPowerControllerKpSelector_i;
  real_T NTorqueSplitSpeedSelector_b;
  real_T NModeNumberDisplay5_c;
  real_T NModeNumberDisplay6_o;
  real_T TMotorMax_b;
  real_T TInvMax_m;
  real_T PActual_my;
  real_T rSOC_do;
  real_T rSOE_c;
  real_T rCoolingFansDuty_i;
  real_T rCoolingPumpsDuty_n;
  real_T rThrottlePedal1_g;
  real_T rThrottlePedal2_m;
  real_T NCarState_ho;
  real_T NBMSState_jb;
  real_T NInvState_do;
  real_T BHVOn_e;
  real_T BInvOnRL_o;
  real_T BInvOnRR_b;
  real_T BInvOnFL_a;
  real_T BInvOnFR_g;
  real_T BInvDCOnRL_j;
  real_T BInvDCOnRR_f;
  real_T BInvDCOnFL_a;
  real_T BInvDCOnFR_a;
  real_T BInvEnableRL_i;
  real_T BInvEnableRR_e;
  real_T BInvEnableFL_h;
  real_T BInvEnableFR_g;
  real_T MMotorMeasuredFL_a;
  real_T BInvErrorResetRL_j;
  real_T BInvErrorResetRR_a;
  real_T BInvErrorResetFL_i;
  real_T BInvErrorResetFR_a;
  real_T MTargetTorqueRL_m;
  real_T MTargetTorqueRR_o;
  real_T MTargetTorqueFL_j;
  real_T MTargetTorqueFR_n;
  real_T MTorqueLimitNegativeRL_a;
  real_T MTorqueLimitNegativeRR_n;
  real_T NInvDTCFL_j;
  real_T MTorqueLimitNegativeFL_d;
  real_T MTorqueLimitNegativeFR_f;
  real_T MTorqueLimitPositiveRL_p;
  real_T MTorqueLimitPositiveRR_d;
  real_T MTorqueLimitPositiveFL_d;
  real_T MTorqueLimitPositiveFR_h;
  real_T rInvTemperatureDerate_of;
  real_T rInvTemperatureDerateFR_o;
  real_T rInvTemperatureDerateFL_j;
  real_T TMotorFL_d;
  real_T rInvTemperatureDerateRR_d;
  real_T rInvTemperatureDerateRL_d;
  real_T rMotorTemperatureDerate_gi;
  real_T rMotorTemperatureDerateFR_d;
  real_T rMotorTemperatureDerateFL_j;
  real_T rMotorTemperatureDerateRR_aa;
  real_T rMotorTemperatureDerateRL_e;
  real_T rTSTemperatureDerateFR_e;
  real_T rTSTemperatureDerateFL_n;
  real_T rTSTemperatureDerateRR_b;
  real_T VDCInvFL_c;
  real_T rTSTemperatureDerateRL_k;
  real_T rHighCellTemperatureDischarge_d;
  real_T rHighCellTemperatureRegenDera_o;
  real_T rLowCellVoltageDischargeDerat_g;
  real_T rSOCDischargeDerate_b;
  real_T rSOCRegenDerate_c;
  real_T rSpeedRegenDerate_ns;
  real_T rDischargeDerate_k2;
  real_T rRegenDerate_lm;
  real_T MDriverDischargeRequested_lc;
  real_T TInvFL_d;
  real_T MDriverRegenRequested_ji;
  real_T MDischargeLimited_cj;
  real_T MRegenLimited_id;
  real_T PPowerControllerRequested_jd;
  real_T MPowerControllerRequested_ja;
  real_T PPowerControllerProportional_kq;
  real_T PPowerControllerIntegralTerm_db;
  real_T PDischargeLimited_id;
  real_T MTotalRequested_iu;
  real_T MTotalEMSRequested_mo;
  real_T nMotorRR_m;
  real_T rSOCTargetError_c0;
  real_T rSOETargetError_aj;
  real_T nYawRateErrorActual_is;
  real_T MTorqueVectoringFL_bm;
  real_T MTorqueVectoringFR_bf;
  real_T MTorqueVectoringRL_m4;
  real_T MTorqueVectoringRR_f3;
  real_T rSplitRear_kp;
  real_T MTorqueDistributionFL_dc;
  real_T MTorqueDistributionFR_js;
  real_T MTorqueDistributionRL_no;
  real_T MTorqueDistributionRR_od;
  real_T rSlipRatioOptimal_kz;
  real_T NTractionControlMultiplierFL_cg;
  real_T NTractionControlMultiplierFR_pp;
  real_T NTractionControlMultiplierRL_pd;
  real_T NTractionControlMultiplierRR_gd;
  real_T NABSMultiplierFL_i3;
  real_T NABSMultiplierFR_i0;
  real_T NABSMultiplierRL_bb;
  real_T NABSMultiplierRR_p0;
  real_T rSlipRatioFLActual_jp;
  real_T rSlipRatioFRActual_lb;
  real_T rSlipRatioRLActual_ot;
  real_T rSlipRatioRRActual_f4;
  real_T MTractionControlFLTotal_aq;
  real_T MTractionControlFRTotal_fg;
  real_T MTractionControlRLTotal_fb;
  real_T MTractionControlRRTotal_f1;
  real_T MTractionControlFLFinal_ic;
  real_T MTractionControlFRFinal_b5;
  real_T MTractionControlRLFinal_he;
  real_T MTractionControlRRFinal_f1;
  real_T MSpinningModelFL_ni;
  real_T MSpinningModelFR_bd;
  real_T MSpinningModelRL_af;
  real_T MSpinningModelRR_fm;
  real_T MFLFinal_pt;
  real_T MFRFinal_gw;
  real_T MRLFinal_ai;
  real_T MRRFinal_a2;
  real_T MTotalFinal_k2;
  real_T MMotorMeasuredRR_m;
  real_T NInvDTCRR_j;
  real_T TMotorRR_a;
  real_T VDCInvRR_n;
  real_T TInvRR_j;
  real_T nMotorFR_f;
  real_T MMotorMeasuredFR_p;
  real_T NInvDTCFR_j;
  real_T TMotorFR_c;
  real_T VDCInvFR_m;
  real_T TInvFR_f;
  real_T vWheelRL_h;
  real_T vWheelRR_a;
  real_T vWheelFL_n;
  real_T vWheelFR_o;
  real_T pBrakeF_a;
  real_T pBrakeR_p;
  real_T VDamperPotentiometerFL_o;
  real_T VDamperPotentiometerFR_j;
  real_T NDisplayNumberDDU7_n;
  real_T VSteeringAngle_b;
  real_T VThrottlePedal1_b;
  real_T VThrottlePedal2_a;
  real_T VRegenPaddle1_b;
  real_T VRegenPaddle2_a;
  real_T C1P01_Status_m;
  real_T C1P02_Status_a;
  real_T C1P03_Status_i;
  real_T C1P04_Status_a;
  real_T C1P07_Status_g;
  real_T C1P11_Status_l;
  real_T C1P12_Status_h;
  real_T C1P13_Status_c;
  real_T C1P25_Status_j;
  real_T C1P26_Status_g;
  real_T C1P28_Status_f;
  real_T C1P30_Status_j;
  real_T C1P31_Status_i;
  real_T C1P33_Status_j;
  real_T C1P34_Status_b;
  real_T MMotorMeasuredRL_i;
  real_T C1P36_Status_g;
  real_T C1P37_Status_a;
  real_T C1P38_Status_m;
  real_T C2P01_Status_b;
  real_T C2P02_Status_n;
  real_T C2P03_Status_m;
  real_T C2P04_Status_n;
  real_T C2P05_Status_m;
  real_T C2P13_Status_j;
  real_T C2P25_Status_o;
  real_T NCarState_n;                  /* '<Root>/STATEFLOW' */
  real_T NBMSState_b;                  /* '<Root>/STATEFLOW' */
  real_T NInvState_g;                  /* '<Root>/STATEFLOW' */
  real_T BHVOn_e1;                     /* '<Root>/STATEFLOW' */
  real_T BInvOnRL_i;                   /* '<Root>/STATEFLOW' */
  real_T BInvOnRR_p;                   /* '<Root>/STATEFLOW' */
  real_T BInvOnFL_f;                   /* '<Root>/STATEFLOW' */
  real_T BInvOnFR_k;                   /* '<Root>/STATEFLOW' */
  real_T BInvDCOnRL_i;                 /* '<Root>/STATEFLOW' */
  real_T BInvDCOnRR_o;                 /* '<Root>/STATEFLOW' */
  real_T BInvDCOnFL_k;                 /* '<Root>/STATEFLOW' */
  real_T BInvDCOnFR_n;                 /* '<Root>/STATEFLOW' */
  real_T BInvEnableRL_l;               /* '<Root>/STATEFLOW' */
  real_T BInvEnableRR_b;               /* '<Root>/STATEFLOW' */
  real_T BInvEnableFL_n;               /* '<Root>/STATEFLOW' */
  real_T BInvEnableFR_p;               /* '<Root>/STATEFLOW' */
  real_T BInvErrorResetRL_d;           /* '<Root>/STATEFLOW' */
  real_T BInvErrorResetRR_j;           /* '<Root>/STATEFLOW' */
  real_T BInvErrorResetFL_b;           /* '<Root>/STATEFLOW' */
  real_T BInvErrorResetFR_k;           /* '<Root>/STATEFLOW' */
  real_T MTargetTorqueRL_b;            /* '<Root>/STATEFLOW' */
  real_T MTargetTorqueRR_oi;           /* '<Root>/STATEFLOW' */
  real_T MTargetTorqueFL_p;            /* '<Root>/STATEFLOW' */
  real_T MTargetTorqueFR_o;            /* '<Root>/STATEFLOW' */
  real_T MTorqueLimitNegativeRL_l;     /* '<Root>/STATEFLOW' */
  real_T MTorqueLimitNegativeRR_c;     /* '<Root>/STATEFLOW' */
  real_T MTorqueLimitNegativeFL_n;     /* '<Root>/STATEFLOW' */
  real_T MTorqueLimitNegativeFR_k;     /* '<Root>/STATEFLOW' */
  real_T MTorqueLimitPositiveRL_a;     /* '<Root>/STATEFLOW' */
  real_T MTorqueLimitPositiveRR_n;     /* '<Root>/STATEFLOW' */
  real_T MTorqueLimitPositiveFL_k;     /* '<Root>/STATEFLOW' */
  real_T MTorqueLimitPositiveFR_f;     /* '<Root>/STATEFLOW' */
  real_T nMotorRL_dy;
  real_T NInvDTCRL_jc;
  real_T C2P26_Status_ga;
  real_T C2P27_Status_mz;
  real_T C2P28_Status_i2;
  real_T C2P29_Status_ih;
  real_T C2P30_Status_iu;
  real_T C2P31_Status_ed;
  real_T C2P33_Status_j4;
  real_T C1P16_Digital_fw;
  real_T C1P17_Digital_hr;
  real_T C2P17_Digital_dd;
  real_T TMotorRL_mn;
  real_T C2P18_Digital_ob;
  real_T C2P35_Status_df;
  real_T C2P36_Status_fj;
  real_T C2P37_Status_ny;
  real_T C2P38_Status_ck;
  real_T ILVSystem_iw;
  real_T TLVSystem_ay;
  real_T VLVSystem_ch;
  real_T VDamperPotentiometerRL_gb;
  real_T VDamperPotentiometerRR_pg;
  real_T VDCInvRL_ob;
  real_T vLongitudinalOXTSIMU_fr;
  real_T gLateralOXTSIMU_ok;
  real_T gLongitudinalOXTSIMU_if;
  real_T nYawRateOXTSIMU_f3;
  real_T VCellMax_jv;
  real_T VCellDelta_c2;
  real_T VCellMin_ox;
  real_T VCellAverage_fr;
  real_T TCellMax_n1;
  real_T NBMSDLC_m3;
  real_T TInvRL_ji;
  real_T TCellMin_et;
  real_T IBMSHallEffect_bc;
  real_T VDCAccumulator_gb;
  real_T RCellAverage_fq;
  real_T nMotorFL_kc;
  real_T IIVTS_oz;
  real_T rThrottlePedal_dx;
  real_T tThrottleError_mn;
  real_T tBrakeError_o3;
  real_T pBrakeMax_d5;
  real_T tPedalOverlap_pf;
  real_T tAppsTimer_kb;
  real_T rSteeringAngle_hif;
  real_T aSteeringAngle_p3;
  real_T rRegenPaddle_get;
  real_T xDamperFL_eg;
  real_T xDamperFR_f5;
  real_T xDamperRL_db;
  real_T xDamperRR_jw;
  real_T vChassis_eyf;
  real_T sChassis_lq;
  real_T sEMS1000m_bw;
  real_T NThrottleMap_cg;
  real_T PDischarge_bx;
  real_T PRegen_cu;
  real_T rTorqueSplit_lt;
  real_T PEngineBraking_ie;
  real_T NTractionControlKpSelector_jm;
  real_T rTorqueVectoringMultiplier_lq;
  real_T NPowerControllerKpSelector_in;
  real_T NTorqueSplitSpeedSelector_bh;
  real_T NModeNumberDisplay5_c0;
  real_T NModeNumberDisplay6_ot;
  real_T TMotorMax_ba;
  real_T TInvMax_mh;
  real_T PActual_myv;
  real_T rSOC_doj;
  real_T rSOE_ch;
  real_T rCoolingFansDuty_iv;
  real_T rCoolingPumpsDuty_nn;
  real_T rThrottlePedal1_gt;
  real_T rThrottlePedal2_mq;
  real_T NCarState_hou;
  real_T NBMSState_jbd;
  real_T NInvState_dos;
  real_T BHVOn_ev;
  real_T BInvOnRL_os;
  real_T BInvOnRR_bz;
  real_T BInvOnFL_ay;
  real_T BInvOnFR_gi;
  real_T BInvDCOnRL_jr;
  real_T BInvDCOnRR_fc;
  real_T BInvDCOnFL_ak;
  real_T BInvDCOnFR_az;
  real_T BInvEnableRL_it;
  real_T BInvEnableRR_er;
  real_T BInvEnableFL_hu;
  real_T BInvEnableFR_gu;
  real_T MMotorMeasuredFL_am;
  real_T BInvErrorResetRL_jk;
  real_T BInvErrorResetRR_af;
  real_T BInvErrorResetFL_iu;
  real_T BInvErrorResetFR_am;
  real_T MTargetTorqueRL_m4;
  real_T MTargetTorqueRR_oo;
  real_T MTargetTorqueFL_jm;
  real_T MTargetTorqueFR_n4;
  real_T MTorqueLimitNegativeRL_aq;
  real_T MTorqueLimitNegativeRR_ns;
  real_T NInvDTCFL_jy;
  real_T MTorqueLimitNegativeFL_ds;
  real_T MTorqueLimitNegativeFR_fq;
  real_T MTorqueLimitPositiveRL_pz;
  real_T MTorqueLimitPositiveRR_d5;
  real_T MTorqueLimitPositiveFL_d2;
  real_T MTorqueLimitPositiveFR_hv;
  real_T rInvTemperatureDerate_ofs;
  real_T rInvTemperatureDerateFR_ob;
  real_T rInvTemperatureDerateFL_jv;
  real_T TMotorFL_d4;
  real_T rInvTemperatureDerateRR_d3;
  real_T rInvTemperatureDerateRL_ds;
  real_T rMotorTemperatureDerate_gig;
  real_T rMotorTemperatureDerateFR_di;
  real_T rMotorTemperatureDerateFL_ji;
  real_T rMotorTemperatureDerateRR_aai;
  real_T rMotorTemperatureDerateRL_el;
  real_T rTSTemperatureDerateFR_el;
  real_T rTSTemperatureDerateFL_nv;
  real_T rTSTemperatureDerateRR_bs;
  real_T VDCInvFL_cu;
  real_T rTSTemperatureDerateRL_ks;
  real_T rHighCellTemperatureDischarg_dp;
  real_T rHighCellTemperatureRegenDer_ol;
  real_T rLowCellVoltageDischargeDera_gk;
  real_T rSOCDischargeDerate_bf;
  real_T rSOCRegenDerate_ct;
  real_T rSpeedRegenDerate_nsg;
  real_T rDischargeDerate_k2m;
  real_T rRegenDerate_lmp;
  real_T MDriverDischargeRequested_lcu;
  real_T TInvFL_di;
  real_T MDriverRegenRequested_jiv;
  real_T MDischargeLimited_cj1;
  real_T MRegenLimited_idu;
  real_T PPowerControllerRequested_jdl;
  real_T MPowerControllerRequested_ja3;
  real_T PPowerControllerProportiona_kqr;
  real_T PPowerControllerIntegralTer_dbk;
  real_T PDischargeLimited_id4;
  real_T MTotalRequested_iu5;
  real_T MTotalEMSRequested_mo3;
  real_T nMotorRR_my;
  real_T rSOCTargetError_c0r;
  real_T rSOETargetError_ajb;
  real_T nYawRateErrorActual_isf;
  real_T MTorqueVectoringFL_bmp;
  real_T MTorqueVectoringFR_bfm;
  real_T MTorqueVectoringRL_m4y;
  real_T MTorqueVectoringRR_f34;
  real_T rSplitRear_kpy;
  real_T MTorqueDistributionFL_dc2;
  real_T MTorqueDistributionFR_jsf;
  real_T MTorqueDistributionRL_no0;
  real_T MTorqueDistributionRR_odz;
  real_T rSlipRatioOptimal_kzc;
  real_T NTractionControlMultiplierF_cgs;
  real_T NTractionControlMultiplierF_ppz;
  real_T NTractionControlMultiplierR_pd4;
  real_T NTractionControlMultiplierR_gdg;
  real_T NABSMultiplierFL_i3s;
  real_T NABSMultiplierFR_i0e;
  real_T NABSMultiplierRL_bbs;
  real_T NABSMultiplierRR_p0t;
  real_T rSlipRatioFLActual_jp4;
  real_T rSlipRatioFRActual_lbp;
  real_T rSlipRatioRLActual_otw;
  real_T rSlipRatioRRActual_f4p;
  real_T MTractionControlFLTotal_aqt;
  real_T MTractionControlFRTotal_fg1;
  real_T MTractionControlRLTotal_fbd;
  real_T MTractionControlRRTotal_f1t;
  real_T MTractionControlFLFinal_ice;
  real_T MTractionControlFRFinal_b5c;
  real_T MTractionControlRLFinal_hes;
  real_T MTractionControlRRFinal_f1j;
  real_T MSpinningModelFL_nix;
  real_T MSpinningModelFR_bdx;
  real_T MSpinningModelRL_afr;
  real_T MSpinningModelRR_fmd;
  real_T MFLFinal_pt0;
  real_T MFRFinal_gwf;
  real_T MRLFinal_ai3;
  real_T MRRFinal_a2f;
  real_T MTotalFinal_k2q;
  real_T MMotorMeasuredRR_mx;
  real_T NInvDTCRR_j2;
  real_T TMotorRR_am;
  real_T VDCInvRR_nt;
  real_T TInvRR_ju;
  real_T nMotorFR_fh;
  real_T MMotorMeasuredFR_pi;
  real_T NInvDTCFR_jf;
  real_T TMotorFR_c0;
  real_T VDCInvFR_mv;
  real_T TInvFR_fo;
  real_T vWheelRL_hm;
  real_T vWheelRR_ap;
  real_T vWheelFL_n1;
  real_T vWheelFR_ol;
  real_T pBrakeF_ax;
  real_T pBrakeR_px;
  real_T VDamperPotentiometerFL_on;
  real_T VDamperPotentiometerFR_ju;
  real_T NDisplayNumberDDU7_nz;
  real_T VSteeringAngle_bk;
  real_T VThrottlePedal1_bm;
  real_T VThrottlePedal2_ag;
  real_T VRegenPaddle1_bo;
  real_T VRegenPaddle2_aj;
  real_T C1P01_Status_m2;
  real_T C1P02_Status_a2;
  real_T C1P03_Status_iv;
  real_T C1P04_Status_aq;
  real_T C1P07_Status_gm;
  real_T C1P11_Status_l1;
  real_T C1P12_Status_hy;
  real_T C1P13_Status_cx;
  real_T C1P25_Status_jt;
  real_T C1P26_Status_gp;
  real_T C1P28_Status_fw;
  real_T C1P30_Status_jv;
  real_T C1P31_Status_is;
  real_T C1P33_Status_jx;
  real_T C1P34_Status_bl;
  real_T MMotorMeasuredRL_ij;
  real_T C1P36_Status_gb;
  real_T C1P37_Status_ah;
  real_T C1P38_Status_mr;
  real_T C2P01_Status_bd;
  real_T C2P02_Status_nz;
  real_T C2P03_Status_mb;
  real_T C2P04_Status_nw;
  real_T C2P05_Status_my;
  real_T C2P13_Status_je;
  real_T C2P25_Status_oc;
  real_T rThrottlePedal_k;             /* '<Root>/SYSTEMS' */
  real_T tThrottleError_o;             /* '<Root>/SYSTEMS' */
  real_T tBrakeError_f;                /* '<Root>/SYSTEMS' */
  real_T pBrakeMax_d2;                 /* '<Root>/SYSTEMS' */
  real_T tPedalOverlap_h;              /* '<Root>/SYSTEMS' */
  real_T tAppsTimer_h;                 /* '<Root>/SYSTEMS' */
  real_T rSteeringAngle_e;             /* '<Root>/SYSTEMS' */
  real_T aSteeringAngle_c;             /* '<Root>/SYSTEMS' */
  real_T rRegenPaddle_n;               /* '<Root>/SYSTEMS' */
  real_T xDamperFL_g;                  /* '<Root>/SYSTEMS' */
  real_T xDamperFR_d;                  /* '<Root>/SYSTEMS' */
  real_T xDamperRL_b;                  /* '<Root>/SYSTEMS' */
  real_T xDamperRR_h;                  /* '<Root>/SYSTEMS' */
  real_T vChassis_d;                   /* '<Root>/SYSTEMS' */
  real_T sChassis_m;                   /* '<Root>/SYSTEMS' */
  real_T sEMS1000m_c;                  /* '<Root>/SYSTEMS' */
  real_T NThrottleMap_ce;              /* '<Root>/SYSTEMS' */
  real_T PDischarge_n;                 /* '<Root>/SYSTEMS' */
  real_T PRegen_o;                     /* '<Root>/SYSTEMS' */
  real_T rTorqueSplit_b;               /* '<Root>/SYSTEMS' */
  real_T PEngineBraking_m;             /* '<Root>/SYSTEMS' */
  real_T NTractionControlKpSelector_m; /* '<Root>/SYSTEMS' */
  real_T rTorqueVectoringMultiplier_p; /* '<Root>/SYSTEMS' */
  real_T NPowerControllerKpSelector_a; /* '<Root>/SYSTEMS' */
  real_T NTorqueSplitSpeedSelector_h;  /* '<Root>/SYSTEMS' */
  real_T NModeNumberDisplay5_j;        /* '<Root>/SYSTEMS' */
  real_T NModeNumberDisplay6_k;        /* '<Root>/SYSTEMS' */
  real_T TMotorMax_j;                  /* '<Root>/SYSTEMS' */
  real_T TInvMax_c;                    /* '<Root>/SYSTEMS' */
  real_T PActual_a;                    /* '<Root>/SYSTEMS' */
  real_T rSOC_i;                       /* '<Root>/SYSTEMS' */
  real_T rSOE_b;                       /* '<Root>/SYSTEMS' */
  real_T rCoolingFansDuty_a;           /* '<Root>/SYSTEMS' */
  real_T rCoolingPumpsDuty_l;          /* '<Root>/SYSTEMS' */
  real_T rThrottlePedal1_k;            /* '<Root>/SYSTEMS' */
  real_T rThrottlePedal2_b;            /* '<Root>/SYSTEMS' */
  real_T nMotorRL_dyg;
  real_T NInvDTCRL_jcu;
  real_T C2P26_Status_gap;
  real_T C2P27_Status_mzi;
  real_T C2P28_Status_i22;
  real_T C2P29_Status_iho;
  real_T C2P30_Status_iuz;
  real_T C2P31_Status_edj;
  real_T C2P33_Status_j4m;
  real_T C1P16_Digital_fw2;
  real_T C1P17_Digital_hrt;
  real_T C2P17_Digital_ddm;
  real_T TMotorRL_mnc;
  real_T C2P18_Digital_obj;
  real_T C2P35_Status_df2;
  real_T C2P36_Status_fjk;
  real_T C2P37_Status_nyp;
  real_T C2P38_Status_ckb;
  real_T ILVSystem_iwp;
  real_T TLVSystem_ayy;
  real_T VLVSystem_cht;
  real_T VDamperPotentiometerRL_gbf;
  real_T VDamperPotentiometerRR_pg3;
  real_T VDCInvRL_obw;
  real_T vLongitudinalOXTSIMU_frb;
  real_T gLateralOXTSIMU_okc;
  real_T gLongitudinalOXTSIMU_ifc;
  real_T nYawRateOXTSIMU_f31;
  real_T VCellMax_jv4;
  real_T VCellDelta_c2a;
  real_T VCellMin_oxh;
  real_T VCellAverage_frs;
  real_T TCellMax_n1u;
  real_T NBMSDLC_m3i;
  real_T TInvRL_jia;
  real_T TCellMin_etn;
  real_T IBMSHallEffect_bcz;
  real_T VDCAccumulator_gbt;
  real_T RCellAverage_fql;
  real_T nMotorFL_kcv;
  real_T IIVTS_ozl;
  real_T rThrottlePedal_dxa;
  real_T tThrottleError_mnm;
  real_T tBrakeError_o3t;
  real_T pBrakeMax_d5c;
  real_T tPedalOverlap_pfo;
  real_T tAppsTimer_kbm;
  real_T rSteeringAngle_hif0;
  real_T aSteeringAngle_p30;
  real_T rRegenPaddle_getj;
  real_T xDamperFL_eg5;
  real_T xDamperFR_f5l;
  real_T xDamperRL_db0;
  real_T xDamperRR_jw0;
  real_T vChassis_eyfm;
  real_T sChassis_lq1;
  real_T sEMS1000m_bwf;
  real_T NThrottleMap_cgk;
  real_T PDischarge_bxs;
  real_T PRegen_cub;
  real_T rTorqueSplit_lt2;
  real_T PEngineBraking_iea;
  real_T NTractionControlKpSelector_jml;
  real_T rTorqueVectoringMultiplier_lqg;
  real_T NPowerControllerKpSelector_in3;
  real_T NTorqueSplitSpeedSelector_bhx;
  real_T NModeNumberDisplay5_c05;
  real_T NModeNumberDisplay6_otn;
  real_T TMotorMax_bas;
  real_T TInvMax_mh2;
  real_T PActual_myvv;
  real_T rSOC_dojw;
  real_T rSOE_chs;
  real_T rCoolingFansDuty_iv0;
  real_T rCoolingPumpsDuty_nnm;
  real_T rThrottlePedal1_gtl;
  real_T rThrottlePedal2_mqi;
  real_T NCarState_hou4;
  real_T NBMSState_jbdk;
  real_T NInvState_dos0;
  real_T BHVOn_evi;
  real_T BInvOnRL_osz;
  real_T BInvOnRR_bzd;
  real_T BInvOnFL_ayc;
  real_T BInvOnFR_gif;
  real_T BInvDCOnRL_jrw;
  real_T BInvDCOnRR_fch;
  real_T BInvDCOnFL_aka;
  real_T BInvDCOnFR_az5;
  real_T BInvEnableRL_it3;
  real_T BInvEnableRR_ere;
  real_T BInvEnableFL_hug;
  real_T BInvEnableFR_guy;
  real_T MMotorMeasuredFL_amc;
  real_T BInvErrorResetRL_jk0;
  real_T BInvErrorResetRR_afc;
  real_T BInvErrorResetFL_iup;
  real_T BInvErrorResetFR_amp;
  real_T MTargetTorqueRL_m4t;
  real_T MTargetTorqueRR_oom;
  real_T MTargetTorqueFL_jmh;
  real_T MTargetTorqueFR_n4r;
  real_T MTorqueLimitNegativeRL_aqi;
  real_T MTorqueLimitNegativeRR_nsa;
  real_T NInvDTCFL_jy2;
  real_T MTorqueLimitNegativeFL_ds4;
  real_T MTorqueLimitNegativeFR_fqx;
  real_T MTorqueLimitPositiveRL_pzu;
  real_T MTorqueLimitPositiveRR_d53;
  real_T MTorqueLimitPositiveFL_d2m;
  real_T MTorqueLimitPositiveFR_hvv;
  real_T rInvTemperatureDerate_ofsg;
  real_T rInvTemperatureDerateFR_ob5;
  real_T rInvTemperatureDerateFL_jvj;
  real_T TMotorFL_d45;
  real_T rInvTemperatureDerateRR_d33;
  real_T rInvTemperatureDerateRL_dsq;
  real_T rMotorTemperatureDerate_gigq;
  real_T rMotorTemperatureDerateFR_dio;
  real_T rMotorTemperatureDerateFL_jip;
  real_T rMotorTemperatureDerateRR_aaij;
  real_T rMotorTemperatureDerateRL_eln;
  real_T rTSTemperatureDerateFR_el2;
  real_T rTSTemperatureDerateFL_nvf;
  real_T rTSTemperatureDerateRR_bsp;
  real_T VDCInvFL_cul;
  real_T rTSTemperatureDerateRL_ksy;
  real_T rHighCellTemperatureDischar_dps;
  real_T rHighCellTemperatureRegenDe_olj;
  real_T rLowCellVoltageDischargeDer_gkc;
  real_T rSOCDischargeDerate_bfw;
  real_T rSOCRegenDerate_ct2;
  real_T rSpeedRegenDerate_nsgv;
  real_T rDischargeDerate_k2m3;
  real_T rRegenDerate_lmpj;
  real_T MDriverDischargeRequested_lcue;
  real_T TInvFL_die;
  real_T MDriverRegenRequested_jivd;
  real_T MDischargeLimited_cj1p;
  real_T MRegenLimited_idug;
  real_T PPowerControllerRequested_jdlf;
  real_T MPowerControllerRequested_ja3c;
  real_T PPowerControllerProportion_kqr2;
  real_T PPowerControllerIntegralTe_dbkd;
  real_T PDischargeLimited_id4n;
  real_T MTotalRequested_iu50;
  real_T MTotalEMSRequested_mo3h;
  real_T nMotorRR_myi;
  real_T rSOCTargetError_c0re;
  real_T rSOETargetError_ajbo;
  real_T nYawRateErrorActual_isfy;
  real_T MTorqueVectoringFL_bmpj;
  real_T MTorqueVectoringFR_bfmv;
  real_T MTorqueVectoringRL_m4yg;
  real_T MTorqueVectoringRR_f34b;
  real_T rSplitRear_kpyx;
  real_T MTorqueDistributionFL_dc2i;
  real_T MTorqueDistributionFR_jsfo;
  real_T MTorqueDistributionRL_no0z;
  real_T MTorqueDistributionRR_odzd;
  real_T rSlipRatioOptimal_kzcl;
  real_T NTractionControlMultiplier_cgsl;
  real_T NTractionControlMultiplier_ppzi;
  real_T NTractionControlMultiplier_pd4f;
  real_T NTractionControlMultiplier_gdgy;
  real_T NABSMultiplierFL_i3sf;
  real_T NABSMultiplierFR_i0es;
  real_T NABSMultiplierRL_bbs5;
  real_T NABSMultiplierRR_p0to;
  real_T rSlipRatioFLActual_jp44;
  real_T rSlipRatioFRActual_lbpv;
  real_T rSlipRatioRLActual_otwa;
  real_T rSlipRatioRRActual_f4pn;
  real_T MTractionControlFLTotal_aqtd;
  real_T MTractionControlFRTotal_fg1y;
  real_T MTractionControlRLTotal_fbdt;
  real_T MTractionControlRRTotal_f1tf;
  real_T MTractionControlFLFinal_icee;
  real_T MTractionControlFRFinal_b5c0;
  real_T MTractionControlRLFinal_hesz;
  real_T MTractionControlRRFinal_f1jb;
  real_T MSpinningModelFL_nixo;
  real_T MSpinningModelFR_bdx4;
  real_T MSpinningModelRL_afr1;
  real_T MSpinningModelRR_fmde;
  real_T MFLFinal_pt0x;
  real_T MFRFinal_gwfk;
  real_T MRLFinal_ai3o;
  real_T MRRFinal_a2fx;
  real_T MTotalFinal_k2qc;
  real_T MMotorMeasuredRR_mxv;
  real_T NInvDTCRR_j2m;
  real_T TMotorRR_amm;
  real_T VDCInvRR_nty;
  real_T TInvRR_jut;
  real_T nMotorFR_fhn;
  real_T MMotorMeasuredFR_pii;
  real_T NInvDTCFR_jf5;
  real_T TMotorFR_c05;
  real_T VDCInvFR_mvm;
  real_T TInvFR_foe;
  real_T vWheelRL_hmp;
  real_T vWheelRR_apy;
  real_T vWheelFL_n1y;
  real_T vWheelFR_olm;
  real_T pBrakeF_axi;
  real_T pBrakeR_pxi;
  real_T VDamperPotentiometerFL_on0;
  real_T VDamperPotentiometerFR_jug;
  real_T NDisplayNumberDDU7_nzg;
  real_T VSteeringAngle_bkv;
  real_T VThrottlePedal1_bmt;
  real_T VThrottlePedal2_agz;
  real_T VRegenPaddle1_bos;
  real_T VRegenPaddle2_ajw;
  real_T C1P01_Status_m2f;
  real_T C1P02_Status_a2p;
  real_T C1P03_Status_ivq;
  real_T C1P04_Status_aqm;
  real_T C1P07_Status_gmm;
  real_T C1P11_Status_l13;
  real_T C1P12_Status_hy1;
  real_T C1P13_Status_cxp;
  real_T C1P25_Status_jtq;
  real_T C1P26_Status_gpv;
  real_T C1P28_Status_fwl;
  real_T C1P30_Status_jvz;
  real_T C1P31_Status_ism;
  real_T C1P33_Status_jxj;
  real_T C1P34_Status_bll;
  real_T MMotorMeasuredRL_ijj;
  real_T C1P36_Status_gbz;
  real_T C1P37_Status_ah4;
  real_T C1P38_Status_mrl;
  real_T C2P01_Status_bdi;
  real_T C2P02_Status_nzw;
  real_T C2P03_Status_mby;
  real_T C2P04_Status_nwd;
  real_T C2P05_Status_myr;
  real_T C2P13_Status_jej;
  real_T C2P25_Status_oc4;
  real_T nMotorRL_k;                   /* '<Root>/INPUT' */
  real_T MMotorMeasuredRL_a;           /* '<Root>/INPUT' */
  real_T NInvDTCRL_g;                  /* '<Root>/INPUT' */
  real_T TMotorRL_d;                   /* '<Root>/INPUT' */
  real_T VDCInvRL_h;                   /* '<Root>/INPUT' */
  real_T TInvRL_l;                     /* '<Root>/INPUT' */
  real_T nMotorFL_o;                   /* '<Root>/INPUT' */
  real_T MMotorMeasuredFL_c;           /* '<Root>/INPUT' */
  real_T NInvDTCFL_d;                  /* '<Root>/INPUT' */
  real_T TMotorFL_b;                   /* '<Root>/INPUT' */
  real_T VDCInvFL_l;                   /* '<Root>/INPUT' */
  real_T TInvFL_j;                     /* '<Root>/INPUT' */
  real_T nMotorRR_o;                   /* '<Root>/INPUT' */
  real_T MMotorMeasuredRR_d;           /* '<Root>/INPUT' */
  real_T NInvDTCRR_m;                  /* '<Root>/INPUT' */
  real_T TMotorRR_k;                   /* '<Root>/INPUT' */
  real_T VDCInvRR_o;                   /* '<Root>/INPUT' */
  real_T TInvRR_b;                     /* '<Root>/INPUT' */
  real_T nMotorFR_a;                   /* '<Root>/INPUT' */
  real_T MMotorMeasuredFR_d;           /* '<Root>/INPUT' */
  real_T NInvDTCFR_a;                  /* '<Root>/INPUT' */
  real_T TMotorFR_g;                   /* '<Root>/INPUT' */
  real_T VDCInvFR_p;                   /* '<Root>/INPUT' */
  real_T TInvFR_i;                     /* '<Root>/INPUT' */
  real_T vWheelRL_k;                   /* '<Root>/INPUT' */
  real_T vWheelRR_f;                   /* '<Root>/INPUT' */
  real_T vWheelFL_g;                   /* '<Root>/INPUT' */
  real_T vWheelFR_n;                   /* '<Root>/INPUT' */
  real_T pBrakeF_p;                    /* '<Root>/INPUT' */
  real_T pBrakeR_b;                    /* '<Root>/INPUT' */
  real_T VDamperPotentiometerFL_i;     /* '<Root>/INPUT' */
  real_T VDamperPotentiometerFR_h;     /* '<Root>/INPUT' */
  real_T NDisplayNumberDDU7_k;         /* '<Root>/INPUT' */
  real_T VSteeringAngle_a;             /* '<Root>/INPUT' */
  real_T VThrottlePedal1_f;            /* '<Root>/INPUT' */
  real_T VThrottlePedal2_o;            /* '<Root>/INPUT' */
  real_T VRegenPaddle1_o;              /* '<Root>/INPUT' */
  real_T VRegenPaddle2_b;              /* '<Root>/INPUT' */
  real_T C1P01_Status_k;               /* '<Root>/INPUT' */
  real_T C1P02_Status_a5;              /* '<Root>/INPUT' */
  real_T C1P03_Status_g;               /* '<Root>/INPUT' */
  real_T C1P04_Status_o;               /* '<Root>/INPUT' */
  real_T C1P07_Status_i;               /* '<Root>/INPUT' */
  real_T C1P11_Status_k;               /* '<Root>/INPUT' */
  real_T C1P12_Status_g;               /* '<Root>/INPUT' */
  real_T C1P13_Status_k;               /* '<Root>/INPUT' */
  real_T C1P25_Status_a;               /* '<Root>/INPUT' */
  real_T C1P26_Status_m;               /* '<Root>/INPUT' */
  real_T C1P28_Status_m;               /* '<Root>/INPUT' */
  real_T C1P30_Status_d;               /* '<Root>/INPUT' */
  real_T C1P31_Status_j;               /* '<Root>/INPUT' */
  real_T C1P33_Status_c;               /* '<Root>/INPUT' */
  real_T C1P34_Status_l;               /* '<Root>/INPUT' */
  real_T C1P36_Status_c;               /* '<Root>/INPUT' */
  real_T C1P37_Status_i;               /* '<Root>/INPUT' */
  real_T C1P38_Status_mf;              /* '<Root>/INPUT' */
  real_T C2P01_Status_i;               /* '<Root>/INPUT' */
  real_T C2P02_Status_h;               /* '<Root>/INPUT' */
  real_T C2P03_Status_h;               /* '<Root>/INPUT' */
  real_T C2P04_Status_o;               /* '<Root>/INPUT' */
  real_T C2P05_Status_mh;              /* '<Root>/INPUT' */
  real_T C2P13_Status_p;               /* '<Root>/INPUT' */
  real_T C2P25_Status_a;               /* '<Root>/INPUT' */
  real_T C2P26_Status_b;               /* '<Root>/INPUT' */
  real_T C2P27_Status_k;               /* '<Root>/INPUT' */
  real_T C2P28_Status_f;               /* '<Root>/INPUT' */
  real_T C2P29_Status_n;               /* '<Root>/INPUT' */
  real_T C2P30_Status_e;               /* '<Root>/INPUT' */
  real_T C2P31_Status_b;               /* '<Root>/INPUT' */
  real_T C2P33_Status_m;               /* '<Root>/INPUT' */
  real_T C1P16_Digital_e;              /* '<Root>/INPUT' */
  real_T C1P17_Digital_m;              /* '<Root>/INPUT' */
  real_T C2P17_Digital_m;              /* '<Root>/INPUT' */
  real_T C2P18_Digital_f;              /* '<Root>/INPUT' */
  real_T C2P35_Status_k;               /* '<Root>/INPUT' */
  real_T C2P36_Status_o;               /* '<Root>/INPUT' */
  real_T C2P37_Status_h;               /* '<Root>/INPUT' */
  real_T C2P38_Status_d;               /* '<Root>/INPUT' */
  real_T ILVSystem_p;                  /* '<Root>/INPUT' */
  real_T TLVSystem_f;                  /* '<Root>/INPUT' */
  real_T VLVSystem_e;                  /* '<Root>/INPUT' */
  real_T VDamperPotentiometerRL_i;     /* '<Root>/INPUT' */
  real_T VDamperPotentiometerRR_o;     /* '<Root>/INPUT' */
  real_T vLongitudinalOXTSIMU_d;       /* '<Root>/INPUT' */
  real_T gLateralOXTSIMU_l;            /* '<Root>/INPUT' */
  real_T gLongitudinalOXTSIMU_f;       /* '<Root>/INPUT' */
  real_T nYawRateOXTSIMU_fe;           /* '<Root>/INPUT' */
  real_T VCellMax_m;                   /* '<Root>/INPUT' */
  real_T VCellDelta_b;                 /* '<Root>/INPUT' */
  real_T VCellMin_e;                   /* '<Root>/INPUT' */
  real_T VCellAverage_d;               /* '<Root>/INPUT' */
  real_T TCellMax_h;                   /* '<Root>/INPUT' */
  real_T NBMSDLC_k;                    /* '<Root>/INPUT' */
  real_T TCellMin_d;                   /* '<Root>/INPUT' */
  real_T IBMSHallEffect_k;             /* '<Root>/INPUT' */
  real_T VDCAccumulator_j;             /* '<Root>/INPUT' */
  real_T RCellAverage_p;               /* '<Root>/INPUT' */
  real_T IIVTS_l;                      /* '<Root>/INPUT' */
  boolean_T BTorqueVectoringOK;        /* '<Root>/TORQUECONTROL' */
  boolean_T BBalancingActive;
  boolean_T BBMSP0A0C;
  boolean_T BBMSP0A0E;
  boolean_T BBMSP0A10;
  boolean_T BBMSP0A80;
  boolean_T BBMSP0AC0;
  boolean_T BBMSP0AFA;
  boolean_T BThrottleError_g;
  boolean_T BBrakeError_j;
  boolean_T BBrakeOn;
  boolean_T BPedalOverlap_e;
  boolean_T BInvDCOnFL_akaj;
  boolean_T BAppsOK_o;
  boolean_T BRegenOn;
  boolean_T BBrakeLight_g;
  boolean_T BInvErrorFL;
  boolean_T BDamperErrorFL;
  boolean_T BDamperErrorFR;
  boolean_T BDamperErrorRL;
  boolean_T BDamperErrorRR;
  boolean_T BEMS1000mPoint;
  boolean_T BInvOnFL_aycn;
  boolean_T BEMS995mPoint;
  boolean_T BTorqueVectoringActivated;
  boolean_T BEMSActivated;
  boolean_T BSpinningModelActivated;
  boolean_T BInvDCQuitInvOnFL;
  boolean_T BTractionControlActivated;
  boolean_T BAccumulatorFanOn;
  boolean_T BErrorReset;
  boolean_T BReadyToDriveButton;
  boolean_T BInvQuitInvOnFL;
  boolean_T BEncoderErrorRear;
  boolean_T BEncoderErrorFront;
  boolean_T BAccumulatorFanDuty;
  boolean_T BInvLVOn;
  boolean_T BInvDCOnRL_jrwe;
  boolean_T BInvSysReadyFL;
  boolean_T BReadyToDriveBuzzer;
  boolean_T BReadyToDrive;
  boolean_T BInvWarnFL;
  boolean_T BDischargeAllowed;
  boolean_T BTorqueVectoringOK_f;
  boolean_T BInvDCOnRR_fchg;
  boolean_T BInvErrorRR;
  boolean_T BInvErrorRL;
  boolean_T BInvOnRR_bzdz;
  boolean_T BInvDCQuitInvOnRR;
  boolean_T BInvQuitInvOnRR;
  boolean_T BInvSysReadyRR;
  boolean_T BInvWarnRR;
  boolean_T BInvOnRL_osze;
  boolean_T BInvDCOnFR_az50;
  boolean_T BInvErrorFR;
  boolean_T BInvOnFR_gifo;
  boolean_T BInvDCQuitInvOnFR;
  boolean_T BInvQuitInvOnFR;
  boolean_T BInvSysReadyFR;
  boolean_T BInvWarnFR;
  boolean_T BInvDCQuitInvOnRL;
  boolean_T BInvQuitInvOnRL;
  boolean_T BSteeringWheelButton1;
  boolean_T BSteeringWheelButton2;
  boolean_T BSteeringWheelButton3;
  boolean_T BSteeringWheelButton4;
  boolean_T BSteeringWheelButton5;
  boolean_T BInvSysReadyRL;
  boolean_T BSteeringWheelButton6;
  boolean_T BSteeringWheelButton7;
  boolean_T BSteeringWheelButton8;
  boolean_T BInvWarnRL;
  boolean_T BDischargeAllowed_c;       /* '<Root>/LIMITATIONS' */
  boolean_T BBalancingActive_n;
  boolean_T BBMSP0A0C_i;
  boolean_T BBMSP0A0E_n;
  boolean_T BBMSP0A10_g;
  boolean_T BBMSP0A80_a;
  boolean_T BBMSP0AC0_m;
  boolean_T BBMSP0AFA_b;
  boolean_T BThrottleError_gx;
  boolean_T BBrakeError_jn;
  boolean_T BBrakeOn_p;
  boolean_T BPedalOverlap_eg;
  boolean_T BInvDCOnFL_akajd;
  boolean_T BAppsOK_oe;
  boolean_T BRegenOn_c;
  boolean_T BBrakeLight_gj;
  boolean_T BInvErrorFL_l;
  boolean_T BDamperErrorFL_c;
  boolean_T BDamperErrorFR_h;
  boolean_T BDamperErrorRL_n;
  boolean_T BDamperErrorRR_k;
  boolean_T BEMS1000mPoint_n;
  boolean_T BInvOnFL_aycnr;
  boolean_T BEMS995mPoint_f;
  boolean_T BTorqueVectoringActivated_j;
  boolean_T BEMSActivated_e;
  boolean_T BSpinningModelActivated_m;
  boolean_T BInvDCQuitInvOnFL_l;
  boolean_T BTractionControlActivated_j;
  boolean_T BAccumulatorFanOn_p;
  boolean_T BErrorReset_e;
  boolean_T BReadyToDriveButton_g;
  boolean_T BInvQuitInvOnFL_l;
  boolean_T BEncoderErrorRear_p;
  boolean_T BEncoderErrorFront_i;
  boolean_T BAccumulatorFanDuty_k;
  boolean_T BInvLVOn_a;
  boolean_T BInvDCOnRL_jrwec;
  boolean_T BInvSysReadyFL_p;
  boolean_T BReadyToDriveBuzzer_i;
  boolean_T BReadyToDrive_c;
  boolean_T BInvWarnFL_l;
  boolean_T BDischargeAllowed_h;
  boolean_T BTorqueVectoringOK_f4;
  boolean_T BInvDCOnRR_fchgb;
  boolean_T BInvErrorRR_g;
  boolean_T BInvErrorRL_h;
  boolean_T BInvOnRR_bzdzx;
  boolean_T BInvDCQuitInvOnRR_l;
  boolean_T BInvQuitInvOnRR_m;
  boolean_T BInvSysReadyRR_c;
  boolean_T BInvWarnRR_i;
  boolean_T BInvOnRL_oszez;
  boolean_T BInvDCOnFR_az50k;
  boolean_T BInvErrorFR_g;
  boolean_T BInvOnFR_gifo4;
  boolean_T BInvDCQuitInvOnFR_m;
  boolean_T BInvQuitInvOnFR_g;
  boolean_T BInvSysReadyFR_i;
  boolean_T BInvWarnFR_m;
  boolean_T BInvDCQuitInvOnRL_g;
  boolean_T BInvQuitInvOnRL_d;
  boolean_T BSteeringWheelButton1_i;
  boolean_T BSteeringWheelButton2_l;
  boolean_T BSteeringWheelButton3_e;
  boolean_T BSteeringWheelButton4_o;
  boolean_T BSteeringWheelButton5_o;
  boolean_T BInvSysReadyRL_m;
  boolean_T BSteeringWheelButton6_n;
  boolean_T BSteeringWheelButton7_i;
  boolean_T BSteeringWheelButton8_n;
  boolean_T BInvWarnRL_i;
  boolean_T BReadyToDriveBuzzer_l;     /* '<Root>/STATEFLOW' */
  boolean_T BReadyToDrive_c0;          /* '<Root>/STATEFLOW' */
  boolean_T BBalancingActive_nf;
  boolean_T BBMSP0A0C_in;
  boolean_T BBMSP0A0E_na;
  boolean_T BBMSP0A10_gs;
  boolean_T BBMSP0A80_a0;
  boolean_T BBMSP0AC0_ml;
  boolean_T BBMSP0AFA_bz;
  boolean_T BThrottleError_gxn;
  boolean_T BBrakeError_jno;
  boolean_T BBrakeOn_pz;
  boolean_T BPedalOverlap_egm;
  boolean_T BInvDCOnFL_akajd2;
  boolean_T BAppsOK_oea;
  boolean_T BRegenOn_ch;
  boolean_T BBrakeLight_gjh;
  boolean_T BInvErrorFL_ls;
  boolean_T BDamperErrorFL_cn;
  boolean_T BDamperErrorFR_h1;
  boolean_T BDamperErrorRL_n2;
  boolean_T BDamperErrorRR_k1;
  boolean_T BEMS1000mPoint_nb;
  boolean_T BInvOnFL_aycnru;
  boolean_T BEMS995mPoint_fp;
  boolean_T BTorqueVectoringActivated_jz;
  boolean_T BEMSActivated_ei;
  boolean_T BSpinningModelActivated_ma;
  boolean_T BInvDCQuitInvOnFL_l5;
  boolean_T BTractionControlActivated_ja;
  boolean_T BAccumulatorFanOn_p3;
  boolean_T BErrorReset_ey;
  boolean_T BReadyToDriveButton_gb;
  boolean_T BInvQuitInvOnFL_lw;
  boolean_T BEncoderErrorRear_pi;
  boolean_T BEncoderErrorFront_iu;
  boolean_T BAccumulatorFanDuty_kx;
  boolean_T BInvLVOn_ae;
  boolean_T BInvDCOnRL_jrweci;
  boolean_T BInvSysReadyFL_pu;
  boolean_T BReadyToDriveBuzzer_i1;
  boolean_T BReadyToDrive_cd;
  boolean_T BInvWarnFL_lo;
  boolean_T BDischargeAllowed_hc;
  boolean_T BTorqueVectoringOK_f4y;
  boolean_T BInvDCOnRR_fchgb2;
  boolean_T BInvErrorRR_gp;
  boolean_T BInvErrorRL_h5;
  boolean_T BInvOnRR_bzdzxt;
  boolean_T BInvDCQuitInvOnRR_lk;
  boolean_T BInvQuitInvOnRR_mj;
  boolean_T BInvSysReadyRR_cu;
  boolean_T BInvWarnRR_il;
  boolean_T BInvOnRL_oszezh;
  boolean_T BInvDCOnFR_az50kz;
  boolean_T BInvErrorFR_gu;
  boolean_T BInvOnFR_gifo4l;
  boolean_T BInvDCQuitInvOnFR_m0;
  boolean_T BInvQuitInvOnFR_gb;
  boolean_T BInvSysReadyFR_im;
  boolean_T BInvWarnFR_mx;
  boolean_T BInvDCQuitInvOnRL_gn;
  boolean_T BInvQuitInvOnRL_dc;
  boolean_T BSteeringWheelButton1_i0;
  boolean_T BSteeringWheelButton2_lk;
  boolean_T BSteeringWheelButton3_ej;
  boolean_T BSteeringWheelButton4_oz;
  boolean_T BSteeringWheelButton5_o3;
  boolean_T BInvSysReadyRL_mu;
  boolean_T BSteeringWheelButton6_nd;
  boolean_T BSteeringWheelButton7_id;
  boolean_T BSteeringWheelButton8_nz;
  boolean_T BInvWarnRL_it;
  boolean_T BThrottleError_a;          /* '<Root>/SYSTEMS' */
  boolean_T BBrakeError_a;             /* '<Root>/SYSTEMS' */
  boolean_T BBrakeOn_ph;               /* '<Root>/SYSTEMS' */
  boolean_T BPedalOverlap_m;           /* '<Root>/SYSTEMS' */
  boolean_T BAppsOK_m;                 /* '<Root>/SYSTEMS' */
  boolean_T BRegenOn_l;                /* '<Root>/SYSTEMS' */
  boolean_T BBrakeLight_n;             /* '<Root>/SYSTEMS' */
  boolean_T BDamperErrorFL_g;          /* '<Root>/SYSTEMS' */
  boolean_T BDamperErrorFR_m;          /* '<Root>/SYSTEMS' */
  boolean_T BDamperErrorRL_d;          /* '<Root>/SYSTEMS' */
  boolean_T BDamperErrorRR_c;          /* '<Root>/SYSTEMS' */
  boolean_T BEMS1000mPoint_g;          /* '<Root>/SYSTEMS' */
  boolean_T BEMS995mPoint_g;           /* '<Root>/SYSTEMS' */
  boolean_T BTorqueVectoringActivated_c;/* '<Root>/SYSTEMS' */
  boolean_T BEMSActivated_i;           /* '<Root>/SYSTEMS' */
  boolean_T BSpinningModelActivated_l; /* '<Root>/SYSTEMS' */
  boolean_T BTractionControlActivated_n;/* '<Root>/SYSTEMS' */
  boolean_T BAccumulatorFanOn_c;       /* '<Root>/SYSTEMS' */
  boolean_T BErrorReset_a;             /* '<Root>/SYSTEMS' */
  boolean_T BReadyToDriveButton_g2;    /* '<Root>/SYSTEMS' */
  boolean_T BEncoderErrorRear_d;       /* '<Root>/SYSTEMS' */
  boolean_T BEncoderErrorFront_iu5;    /* '<Root>/SYSTEMS' */
  boolean_T BAccumulatorFanDuty_d;     /* '<Root>/SYSTEMS' */
  boolean_T BInvLVOn_l;                /* '<Root>/SYSTEMS' */
  boolean_T BBalancingActive_nfy;
  boolean_T BBMSP0A0C_inm;
  boolean_T BBMSP0A0E_nao;
  boolean_T BBMSP0A10_gso;
  boolean_T BBMSP0A80_a0m;
  boolean_T BBMSP0AC0_mlo;
  boolean_T BBMSP0AFA_bzt;
  boolean_T BThrottleError_gxnl;
  boolean_T BBrakeError_jnoj;
  boolean_T BBrakeOn_pz1;
  boolean_T BPedalOverlap_egmb;
  boolean_T BInvDCOnFL_akajd2f;
  boolean_T BAppsOK_oea0;
  boolean_T BRegenOn_ch3;
  boolean_T BBrakeLight_gjh3;
  boolean_T BInvErrorFL_lsp;
  boolean_T BDamperErrorFL_cn5;
  boolean_T BDamperErrorFR_h1l;
  boolean_T BDamperErrorRL_n2j;
  boolean_T BDamperErrorRR_k1e;
  boolean_T BEMS1000mPoint_nbk;
  boolean_T BInvOnFL_aycnruk;
  boolean_T BEMS995mPoint_fpc;
  boolean_T BTorqueVectoringActivated_jzk;
  boolean_T BEMSActivated_eiv;
  boolean_T BSpinningModelActivated_mab;
  boolean_T BInvDCQuitInvOnFL_l51;
  boolean_T BTractionControlActivated_jaz;
  boolean_T BAccumulatorFanOn_p3q;
  boolean_T BErrorReset_eye;
  boolean_T BReadyToDriveButton_gbb;
  boolean_T BInvQuitInvOnFL_lwh;
  boolean_T BEncoderErrorRear_pi5;
  boolean_T BEncoderErrorFront_iuh;
  boolean_T BAccumulatorFanDuty_kxp;
  boolean_T BInvLVOn_aew;
  boolean_T BInvDCOnRL_jrweci4;
  boolean_T BInvSysReadyFL_pur;
  boolean_T BReadyToDriveBuzzer_i11;
  boolean_T BReadyToDrive_cdg;
  boolean_T BInvWarnFL_log;
  boolean_T BDischargeAllowed_hcz;
  boolean_T BTorqueVectoringOK_f4yr;
  boolean_T BInvDCOnRR_fchgb2p;
  boolean_T BInvErrorRR_gpt;
  boolean_T BInvErrorRL_h54;
  boolean_T BInvOnRR_bzdzxto;
  boolean_T BInvDCQuitInvOnRR_lk3;
  boolean_T BInvQuitInvOnRR_mjf;
  boolean_T BInvSysReadyRR_cuw;
  boolean_T BInvWarnRR_ily;
  boolean_T BInvOnRL_oszezhv;
  boolean_T BInvDCOnFR_az50kzw;
  boolean_T BInvErrorFR_gus;
  boolean_T BInvOnFR_gifo4l1;
  boolean_T BInvDCQuitInvOnFR_m0q;
  boolean_T BInvQuitInvOnFR_gbx;
  boolean_T BInvSysReadyFR_im5;
  boolean_T BInvWarnFR_mxi;
  boolean_T BInvDCQuitInvOnRL_gnj;
  boolean_T BInvQuitInvOnRL_dc5;
  boolean_T BSteeringWheelButton1_i0y;
  boolean_T BSteeringWheelButton2_lk5;
  boolean_T BSteeringWheelButton3_ejo;
  boolean_T BSteeringWheelButton4_ozt;
  boolean_T BSteeringWheelButton5_o3d;
  boolean_T BInvSysReadyRL_muq;
  boolean_T BSteeringWheelButton6_ndb;
  boolean_T BSteeringWheelButton7_idy;
  boolean_T BSteeringWheelButton8_nzd;
  boolean_T BInvWarnRL_it5;
  boolean_T BInvDCOnRL_e;              /* '<Root>/INPUT' */
  boolean_T BInvErrorRL_c;             /* '<Root>/INPUT' */
  boolean_T BInvOnRL_m;                /* '<Root>/INPUT' */
  boolean_T BInvDCQuitInvOnRL_a;       /* '<Root>/INPUT' */
  boolean_T BInvQuitInvOnRL_g;         /* '<Root>/INPUT' */
  boolean_T BInvSysReadyRL_a;          /* '<Root>/INPUT' */
  boolean_T BInvWarnRL_c;              /* '<Root>/INPUT' */
  boolean_T BInvDCOnFL_o;              /* '<Root>/INPUT' */
  boolean_T BInvErrorFL_g;             /* '<Root>/INPUT' */
  boolean_T BInvOnFL_l;                /* '<Root>/INPUT' */
  boolean_T BInvDCQuitInvOnFL_i;       /* '<Root>/INPUT' */
  boolean_T BInvQuitInvOnFL_i;         /* '<Root>/INPUT' */
  boolean_T BInvSysReadyFL_j;          /* '<Root>/INPUT' */
  boolean_T BInvWarnFL_p;              /* '<Root>/INPUT' */
  boolean_T BInvDCOnRR_o4;             /* '<Root>/INPUT' */
  boolean_T BInvErrorRR_b;             /* '<Root>/INPUT' */
  boolean_T BInvOnRR_l;                /* '<Root>/INPUT' */
  boolean_T BInvDCQuitInvOnRR_m;       /* '<Root>/INPUT' */
  boolean_T BInvQuitInvOnRR_d;         /* '<Root>/INPUT' */
  boolean_T BInvSysReadyRR_e;          /* '<Root>/INPUT' */
  boolean_T BInvWarnRR_m;              /* '<Root>/INPUT' */
  boolean_T BInvDCOnFR_j;              /* '<Root>/INPUT' */
  boolean_T BInvErrorFR_c;             /* '<Root>/INPUT' */
  boolean_T BInvOnFR_b;                /* '<Root>/INPUT' */
  boolean_T BInvDCQuitInvOnFR_l;       /* '<Root>/INPUT' */
  boolean_T BInvQuitInvOnFR_c;         /* '<Root>/INPUT' */
  boolean_T BInvSysReadyFR_d;          /* '<Root>/INPUT' */
  boolean_T BInvWarnFR_h;              /* '<Root>/INPUT' */
  boolean_T BSteeringWheelButton1_h;   /* '<Root>/INPUT' */
  boolean_T BSteeringWheelButton2_n;   /* '<Root>/INPUT' */
  boolean_T BSteeringWheelButton3_b;   /* '<Root>/INPUT' */
  boolean_T BSteeringWheelButton4_e;   /* '<Root>/INPUT' */
  boolean_T BSteeringWheelButton5_p;   /* '<Root>/INPUT' */
  boolean_T BSteeringWheelButton6_c;   /* '<Root>/INPUT' */
  boolean_T BSteeringWheelButton7_j;   /* '<Root>/INPUT' */
  boolean_T BSteeringWheelButton8_k;   /* '<Root>/INPUT' */
  boolean_T BBalancingActive_nc;       /* '<Root>/INPUT' */
  boolean_T BBMSP0A0C_n;               /* '<Root>/INPUT' */
  boolean_T BBMSP0A0E_j;               /* '<Root>/INPUT' */
  boolean_T BBMSP0A10_l;               /* '<Root>/INPUT' */
  boolean_T BBMSP0A80_b;               /* '<Root>/INPUT' */
  boolean_T BBMSP0AC0_a;               /* '<Root>/INPUT' */
  boolean_T BBMSP0AFA_e;               /* '<Root>/INPUT' */
} B_MASTER_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  MdlrefDW_TORQUECONTROL_T TORQUECONTROL_InstanceData;/* '<Root>/TORQUECONTROL' */
  MdlrefDW_LIMITATIONS_T LIMITATIONS_InstanceData;/* '<Root>/LIMITATIONS' */
  MdlrefDW_STATEFLOW_T STATEFLOW_InstanceData;/* '<Root>/STATEFLOW' */
  MdlrefDW_SYSTEMS_T SYSTEMS_InstanceData;/* '<Root>/SYSTEMS' */
  MdlrefDW_INPUT_T INPUT_InstanceData; /* '<Root>/INPUT' */
} DW_MASTER_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  CAN1_2Bus CAN1_2;                    /* '<Root>/CAN1_2' */
  CAN3Bus CAN3;                        /* '<Root>/CAN3' */
  CAN4Bus BMSCAN;                      /* '<Root>/BMSCAN' */
} ExtU_MASTER_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  Global Global_b;                     /* '<Root>/Global' */
} ExtY_MASTER_T;

/* Real-time Model Data Structure */
struct tag_RTM_MASTER_T {
  const char_T *errorStatus;
};

/* Block signals (default storage) */
extern B_MASTER_T MASTER_B;

/* Block states (default storage) */
extern DW_MASTER_T MASTER_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_MASTER_T MASTER_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_MASTER_T MASTER_Y;

/* Model entry point functions */
extern void MASTER_initialize(void);
extern void MASTER_step(void);
extern void MASTER_terminate(void);

/* Real-time Model object */
extern RT_MODEL_MASTER_T *const MASTER_M;
extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

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
 * '<Root>' : 'MASTER'
 */
#endif                                 /* MASTER_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
