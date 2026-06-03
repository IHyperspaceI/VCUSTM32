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
 * C/C++ source code generated on : Wed Jun  3 14:58:30 2026
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

/* user code (top of header file) */
#include "stm32h7xx_ll_tim.h"

/* Block signals for model 'MASTER' */
typedef struct {
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
  real_T MDischargeLimited;
  real_T MRegenLimited;
  real_T PPowerControllerRequested;
  real_T MPowerControllerRequested;
  real_T PPowerControllerProportionalTer;
  real_T PPowerControllerIntegralTerm;
  real_T PDischargeLimited;
  real_T MTotalRequested_i;
  real_T MTotalEMSRequested;
  real_T nMotorRR;
  real_T rSOCTargetError;
  real_T rSOETargetError;
  real_T nYawRateErrorActual;
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
  real_T rMotorTemperatureDerateRR_a;
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
  real_T MDischargeLimited_c;
  real_T MRegenLimited_i;
  real_T PPowerControllerRequested_j;
  real_T MPowerControllerRequested_j;
  real_T PPowerControllerProportionalT_k;
  real_T PPowerControllerIntegralTerm_d;
  real_T PDischargeLimited_i;
  real_T MTotalRequested_iu;
  real_T MTotalEMSRequested_m;
  real_T nMotorRR_m;
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
  real_T rMotorTemperatureDerateRR_aa;
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
  real_T MDischargeLimited_cj;
  real_T MRegenLimited_id;
  real_T PPowerControllerRequested_jd;
  real_T MPowerControllerRequested_ja;
  real_T PPowerControllerProportional_kq;
  real_T PPowerControllerIntegralTerm_db;
  real_T PDischargeLimited_id;
  real_T MTotalRequested_iu5;
  real_T MTotalEMSRequested_mo;
  real_T nMotorRR_my;
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
  real_T rMotorTemperatureDerateRR_aai;
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
  real_T MDischargeLimited_cj1;
  real_T MRegenLimited_idu;
  real_T PPowerControllerRequested_jdl;
  real_T MPowerControllerRequested_ja3;
  real_T PPowerControllerProportiona_kqr;
  real_T PPowerControllerIntegralTer_dbk;
  real_T PDischargeLimited_id4;
  real_T MTotalRequested_iu50;
  real_T MTotalEMSRequested_mo3;
  real_T nMotorRR_myi;
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
  boolean_T BTorqueVectoringOK;
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
  boolean_T BTorqueVectoringOK_f;
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
  boolean_T BTorqueVectoringOK_f4;
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
  boolean_T BTorqueVectoringOK_f4y;
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
} B_MASTER_c_T;

/* Block states (default storage) for model 'MASTER' */
typedef struct {
  MdlrefDW_TORQUECONTROL_T TORQUECONTROL_InstanceData;/* '<Root>/TORQUECONTROL' */
  MdlrefDW_LIMITATIONS_T LIMITATIONS_InstanceData;/* '<Root>/LIMITATIONS' */
  MdlrefDW_STATEFLOW_T STATEFLOW_InstanceData;/* '<Root>/STATEFLOW' */
  MdlrefDW_SYSTEMS_T SYSTEMS_InstanceData;/* '<Root>/SYSTEMS' */
  MdlrefDW_INPUT_T INPUT_InstanceData; /* '<Root>/INPUT' */
} DW_MASTER_f_T;

/* Real-time Model Data Structure */
struct tag_RTM_MASTER_T {
  const char_T **errorStatus;
};

typedef struct {
  B_MASTER_c_T rtb;
  DW_MASTER_f_T rtdw;
  RT_MODEL_MASTER_T rtm;
} MdlrefDW_MASTER_T;

/* Model reference registration function */
extern void MASTER_initialize(const char_T **rt_errorStatus, RT_MODEL_MASTER_T *
  const MASTER_M, DW_MASTER_f_T *localDW);
extern void MASTER_Init(DW_MASTER_f_T *localDW);
extern void MASTER(const real_T *rtu_CAN1_2_InverterFLCANBus_nMo, const
                   boolean_T *rtu_CAN1_2_InverterFLCANBus_BIn, const boolean_T
                   *rtu_CAN1_2_InverterFLCANBus_B_c, const boolean_T
                   *rtu_CAN1_2_InverterFLCANBus_B_e, const boolean_T
                   *rtu_CAN1_2_InverterFLCANBus_B_n, const boolean_T
                   *rtu_CAN1_2_InverterFLCANBus_B_f, const boolean_T
                   *rtu_CAN1_2_InverterFLCANBus_B_k, const boolean_T
                   *rtu_CAN1_2_InverterFLCANBus_B_h, const real_T
                   *rtu_CAN1_2_InverterFLCANBus_MMo, const real_T
                   *rtu_CAN1_2_InverterFLCANBus_NIn, const real_T
                   *rtu_CAN1_2_InverterFLCANBus_TMo, const real_T
                   *rtu_CAN1_2_InverterFLCANBus_VDC, const real_T
                   *rtu_CAN1_2_InverterFLCANBus_TIn, const real_T
                   *rtu_CAN1_2_InverterFRCANBus_nMo, const boolean_T
                   *rtu_CAN1_2_InverterFRCANBus_BIn, const boolean_T
                   *rtu_CAN1_2_InverterFRCANBus_B_p, const boolean_T
                   *rtu_CAN1_2_InverterFRCANBus_B_d, const boolean_T
                   *rtu_CAN1_2_InverterFRCANBus__dm, const boolean_T
                   *rtu_CAN1_2_InverterFRCANBus_B_g, const boolean_T
                   *rtu_CAN1_2_InverterFRCANBus_B_m, const boolean_T
                   *rtu_CAN1_2_InverterFRCANBus__pd, const real_T
                   *rtu_CAN1_2_InverterFRCANBus_MMo, const real_T
                   *rtu_CAN1_2_InverterFRCANBus_NIn, const real_T
                   *rtu_CAN1_2_InverterFRCANBus_TMo, const real_T
                   *rtu_CAN1_2_InverterFRCANBus_VDC, const real_T
                   *rtu_CAN1_2_InverterFRCANBus_TIn, const real_T
                   *rtu_CAN1_2_InverterRLCANBus_nMo, const boolean_T
                   *rtu_CAN1_2_InverterRLCANBus_BIn, const boolean_T
                   *rtu_CAN1_2_InverterRLCANBus_B_p, const boolean_T
                   *rtu_CAN1_2_InverterRLCANBus_B_m, const boolean_T
                   *rtu_CAN1_2_InverterRLCANBus__p2, const boolean_T
                   *rtu_CAN1_2_InverterRLCANBus_B_i, const boolean_T
                   *rtu_CAN1_2_InverterRLCANBus_B_k, const boolean_T
                   *rtu_CAN1_2_InverterRLCANBus_B_h, const real_T
                   *rtu_CAN1_2_InverterRLCANBus_MMo, const real_T
                   *rtu_CAN1_2_InverterRLCANBus_NIn, const real_T
                   *rtu_CAN1_2_InverterRLCANBus_TMo, const real_T
                   *rtu_CAN1_2_InverterRLCANBus_VDC, const real_T
                   *rtu_CAN1_2_InverterRLCANBus_TIn, const real_T
                   *rtu_CAN1_2_InverterRRCANBus_nMo, const boolean_T
                   *rtu_CAN1_2_InverterRRCANBus_BIn, const boolean_T
                   *rtu_CAN1_2_InverterRRCANBus_B_c, const boolean_T
                   *rtu_CAN1_2_InverterRRCANBus_B_l, const boolean_T
                   *rtu_CAN1_2_InverterRRCANBus_B_p, const boolean_T
                   *rtu_CAN1_2_InverterRRCANBus__py, const boolean_T
                   *rtu_CAN1_2_InverterRRCANBus_B_e, const boolean_T
                   *rtu_CAN1_2_InverterRRCANBus__px, const real_T
                   *rtu_CAN1_2_InverterRRCANBus_MMo, const real_T
                   *rtu_CAN1_2_InverterRRCANBus_NIn, const real_T
                   *rtu_CAN1_2_InverterRRCANBus_TMo, const real_T
                   *rtu_CAN1_2_InverterRRCANBus_VDC, const real_T
                   *rtu_CAN1_2_InverterRRCANBus_TIn, const real_T
                   *rtu_CAN3_DDU7_Analoge_1_pBrakeF, const real_T
                   *rtu_CAN3_DDU7_Analoge_1_pBrakeR, const real_T
                   *rtu_CAN3_DDU7_Analoge_1_VDamper, const real_T
                   *rtu_CAN3_DDU7_Analoge_1_VDamp_h, const real_T
                   *rtu_CAN3_DDU7_Analoge_1_VDamp_i, const real_T
                   *rtu_CAN3_DDU7_Analoge_1_VDam_h5, const real_T
                   *rtu_CAN3_DDU7_Analoge_2_NDispla, const real_T
                   *rtu_CAN3_DDU7_Analoge_2_VSteeri, const real_T
                   *rtu_CAN3_DDU7_Analoge_2_VThrott, const real_T
                   *rtu_CAN3_DDU7_Analoge_2_VThro_a, const real_T
                   *rtu_CAN3_OXTSDataFrame1540_vLon, const real_T
                   *rtu_CAN3_OXTSDataFrame1541_gLat, const real_T
                   *rtu_CAN3_OXTSDataFrame1541_gLon, const real_T
                   *rtu_CAN3_OXTSDataFrame1544_nYaw, const real_T
                   *rtu_CAN3_PDM_Status_1_C1P01_Sta, const real_T
                   *rtu_CAN3_PDM_Status_1_C1P02_Sta, const real_T
                   *rtu_CAN3_PDM_Status_1_C1P03_Sta, const real_T
                   *rtu_CAN3_PDM_Status_1_C1P04_Sta, const real_T
                   *rtu_CAN3_PDM_Status_1_C1P07_Sta, const real_T
                   *rtu_CAN3_PDM_Status_1_C1P11_Sta, const real_T
                   *rtu_CAN3_PDM_Status_1_C1P12_Sta, const real_T
                   *rtu_CAN3_PDM_Status_1_C1P13_Sta, const real_T
                   *rtu_CAN3_PDM_Status_1_C1P25_Sta, const real_T
                   *rtu_CAN3_PDM_Status_1_C1P26_Sta, const real_T
                   *rtu_CAN3_PDM_Status_1_C1P28_Sta, const real_T
                   *rtu_CAN3_PDM_Status_1_C1P30_Sta, const real_T
                   *rtu_CAN3_PDM_Status_1_C1P31_Sta, const real_T
                   *rtu_CAN3_PDM_Status_1_C1P33_Sta, const real_T
                   *rtu_CAN3_PDM_Status_1_C1P34_Sta, const real_T
                   *rtu_CAN3_PDM_Status_1_C1P36_Sta, const real_T
                   *rtu_CAN3_PDM_Status_2_C1P37_Sta, const real_T
                   *rtu_CAN3_PDM_Status_2_C1P38_Sta, const real_T
                   *rtu_CAN3_PDM_Status_2_C2P01_Sta, const real_T
                   *rtu_CAN3_PDM_Status_2_C2P02_Sta, const real_T
                   *rtu_CAN3_PDM_Status_2_C2P03_Sta, const real_T
                   *rtu_CAN3_PDM_Status_2_C2P04_Sta, const real_T
                   *rtu_CAN3_PDM_Status_2_C2P05_Sta, const real_T
                   *rtu_CAN3_PDM_Status_2_C2P13_Sta, const real_T
                   *rtu_CAN3_PDM_Status_2_C2P25_Sta, const real_T
                   *rtu_CAN3_PDM_Status_2_C2P26_Sta, const real_T
                   *rtu_CAN3_PDM_Status_2_C2P27_Sta, const real_T
                   *rtu_CAN3_PDM_Status_2_C2P28_Sta, const real_T
                   *rtu_CAN3_PDM_Status_2_C2P29_Sta, const real_T
                   *rtu_CAN3_PDM_Status_2_C2P30_Sta, const real_T
                   *rtu_CAN3_PDM_Status_2_C2P31_Sta, const real_T
                   *rtu_CAN3_PDM_Status_2_C2P33_Sta, const real_T
                   *rtu_CAN3_PDM_Status_3_C1P16_Dig, const real_T
                   *rtu_CAN3_PDM_Status_3_C1P17_Dig, const real_T
                   *rtu_CAN3_PDM_Status_3_C2P17_Dig, const real_T
                   *rtu_CAN3_PDM_Status_3_C2P18_Dig, const real_T
                   *rtu_CAN3_PDM_Status_3_C2P35_Sta, const real_T
                   *rtu_CAN3_PDM_Status_3_C2P36_Sta, const real_T
                   *rtu_CAN3_PDM_Status_3_C2P37_Sta, const real_T
                   *rtu_CAN3_PDM_Status_3_C2P38_Sta, const real_T
                   *rtu_CAN3_PDM_Status_3_ILVSystem, const real_T
                   *rtu_CAN3_PDM_Status_3_TLVSystem, const real_T
                   *rtu_CAN3_PDM_Status_3_VLVSystem, const boolean_T
                   *rtu_CAN3_SteeringWheelBus_BStee, const boolean_T
                   *rtu_CAN3_SteeringWheelBus_BSt_g, const boolean_T
                   *rtu_CAN3_SteeringWheelBus_BSt_h, const boolean_T
                   *rtu_CAN3_SteeringWheelBus_BS_hs, const boolean_T
                   *rtu_CAN3_SteeringWheelBus_BSt_c, const boolean_T
                   *rtu_CAN3_SteeringWheelBus_BSt_p, const boolean_T
                   *rtu_CAN3_SteeringWheelBus_BSt_n, const boolean_T
                   *rtu_CAN3_SteeringWheelBus_BSt_k, const real_T
                   *rtu_CAN3_SteeringWheelBus_VRege, const real_T
                   *rtu_CAN3_SteeringWheelBus_VRe_j, const real_T
                   *rtu_BMSCAN_IIVTS, const real_T *rtu_BMSCAN_IBMSHallEffect,
                   const real_T *rtu_BMSCAN_VDCAccumulator, const real_T
                   *rtu_BMSCAN_TCellMin, const real_T *rtu_BMSCAN_VCellAverage,
                   const real_T *rtu_BMSCAN_VCellMax, const real_T
                   *rtu_BMSCAN_TCellMax, const real_T *rtu_BMSCAN_NBMSDLC, const
                   real_T *rtu_BMSCAN_VCellMin, const real_T
                   *rtu_BMSCAN_RCellAverage, const real_T
                   *rtu_BMSCAN_BBalancingActive, const real_T
                   *rtu_BMSCAN_BBMSP0A0C, const real_T *rtu_BMSCAN_BBMSP0A0E,
                   const real_T *rtu_BMSCAN_BBMSP0A10, const real_T
                   *rtu_BMSCAN_BBMSP0A80, const real_T *rtu_BMSCAN_BBMSP0AC0,
                   const real_T *rtu_BMSCAN_BBMSP0AFA, real_T
                   *rty_Global_InverterSignalsBus_I, boolean_T
                   *rty_Global_InverterSignalsBus_g, boolean_T
                   *rty_Global_InverterSignalsBus_c, boolean_T
                   *rty_Global_InverterSignalsBus_e, boolean_T
                   *rty_Global_InverterSignalsBus_n, boolean_T
                   *rty_Global_InverterSignalsBus_f, boolean_T
                   *rty_Global_InverterSignalsBus_k, boolean_T
                   *rty_Global_InverterSignalsBus_h, real_T
                   *rty_Global_InverterSignalsBu_kw, real_T
                   *rty_Global_InverterSignalsBu_ka, real_T
                   *rty_Global_InverterSignalsB_kaa, real_T
                   *rty_Global_InverterSignalsBu_el, real_T
                   *rty_Global_InverterSignalsBu_cj, real_T
                   *rty_Global_InverterSignalsBu_ez, boolean_T
                   *rty_Global_InverterSignalsBus_o, boolean_T
                   *rty_Global_InverterSignalsBus_p, boolean_T
                   *rty_Global_InverterSignalsBus_d, boolean_T
                   *rty_Global_InverterSignalsBu_dm, boolean_T
                   *rty_Global_InverterSignalsBu_gy, boolean_T
                   *rty_Global_InverterSignalsBus_m, boolean_T
                   *rty_Global_InverterSignalsBu_pd, real_T
                   *rty_Global_InverterSignalsBus_i, real_T
                   *rty_Global_InverterSignalsBu_pr, real_T
                   *rty_Global_InverterSignalsBu_pe, real_T
                   *rty_Global_InverterSignalsBu_o3, real_T
                   *rty_Global_InverterSignalsBu_e4, real_T
                   *rty_Global_InverterSignalsBu_mc, boolean_T
                   *rty_Global_InverterSignalsBus_j, boolean_T
                   *rty_Global_InverterSignalsBu_po, boolean_T
                   *rty_Global_InverterSignalsBu_m3, boolean_T
                   *rty_Global_InverterSignalsBu_p2, boolean_T
                   *rty_Global_InverterSignalsBu_i3, boolean_T
                   *rty_Global_InverterSignalsB_ka1, boolean_T
                   *rty_Global_InverterSignalsBu_hs, real_T
                   *rty_Global_InverterSignalsBus_b, real_T
                   *rty_Global_InverterSignalsBu_ng, real_T
                   *rty_Global_InverterSignalsB_gye, real_T
                   *rty_Global_InverterSignalsBu_go, real_T
                   *rty_Global_InverterSignalsBu_ep, real_T
                   *rty_Global_InverterSignalsBu_kf, boolean_T
                   *rty_Global_InverterSignalsBu_bn, boolean_T
                   *rty_Global_InverterSignalsBu_c4, boolean_T
                   *rty_Global_InverterSignalsBus_l, boolean_T
                   *rty_Global_InverterSignalsBu_p4, boolean_T
                   *rty_Global_InverterSignalsBu_py, boolean_T
                   *rty_Global_InverterSignalsBu_en, boolean_T
                   *rty_Global_InverterSignalsBu_px, real_T
                   *rty_Global_InverterSignalsBu_mk, real_T
                   *rty_Global_InverterSignalsBu_nk, real_T
                   *rty_Global_InverterSignalsBu_fp, real_T
                   *rty_Global_InverterSignalsBu_df, real_T
                   *rty_Global_InverterSignalsBu_mw, real_T
                   *rty_Global_WheelSpeedsBus_vWhee, real_T
                   *rty_Global_WheelSpeedsBus_vWh_h, real_T
                   *rty_Global_WheelSpeedsBus_vW_h2, real_T
                   *rty_Global_WheelSpeedsBus_vW_hs, real_T
                   *rty_Global_SensorSignalsBus_pBr, real_T
                   *rty_Global_SensorSignalsBus_p_h, real_T
                   *rty_Global_SensorSignalsBus_VDa, real_T
                   *rty_Global_SensorSignalsBus_V_i, real_T
                   *rty_Global_SensorSignalsBus_NDi, real_T
                   *rty_Global_SensorSignalsBus_VSt, real_T
                   *rty_Global_SensorSignalsBus_VTh, real_T
                   *rty_Global_SensorSignalsBus_V_b, boolean_T
                   *rty_Global_SensorSignalsBus_BSt, boolean_T
                   *rty_Global_SensorSignalsBus_B_j, boolean_T
                   *rty_Global_SensorSignalsBus_B_l, boolean_T
                   *rty_Global_SensorSignalsBus_B_e, boolean_T
                   *rty_Global_SensorSignalsBus__le, boolean_T
                   *rty_Global_SensorSignalsBus_B_h, boolean_T
                   *rty_Global_SensorSignalsBus__hc, boolean_T
                   *rty_Global_SensorSignalsBus__hl, real_T
                   *rty_Global_SensorSignalsBus_VRe, real_T
                   *rty_Global_SensorSignalsBus_V_h, real_T
                   *rty_Global_SensorSignalsBus_C1P, real_T
                   *rty_Global_SensorSignalsBus_C_a, real_T
                   *rty_Global_SensorSignalsBus_C_k, real_T
                   *rty_Global_SensorSignalsBus_C_i, real_T
                   *rty_Global_SensorSignalsBus_C_b, real_T
                   *rty_Global_SensorSignalsBus__ir, real_T
                   *rty_Global_SensorSignalsBus__bx, real_T
                   *rty_Global_SensorSignalsBus_C_d, real_T
                   *rty_Global_SensorSignalsBus_C_g, real_T
                   *rty_Global_SensorSignalsBus__i1, real_T
                   *rty_Global_SensorSignalsBus_C_h, real_T
                   *rty_Global_SensorSignalsBus__bl, real_T
                   *rty_Global_SensorSignalsBus_C_l, real_T
                   *rty_Global_SensorSignalsBus__go, real_T
                   *rty_Global_SensorSignalsBus_C_f, real_T
                   *rty_Global_SensorSignalsBus__as, real_T
                   *rty_Global_SensorSignalsBus__gz, real_T
                   *rty_Global_SensorSignalsBus_C_c, real_T
                   *rty_Global_SensorSignalsBus_C2P, real_T
                   *rty_Global_SensorSignalsBus_C_e, real_T
                   *rty_Global_SensorSignalsBus__lr, real_T
                   *rty_Global_SensorSignalsBus__l2, real_T
                   *rty_Global_SensorSignalsBus__ft, real_T
                   *rty_Global_SensorSignalsBus__es, real_T
                   *rty_Global_SensorSignalsBus__c0, real_T
                   *rty_Global_SensorSignalsBus__gy, real_T
                   *rty_Global_SensorSignalsBus__lp, real_T
                   *rty_Global_SensorSignalsBus__bp, real_T
                   *rty_Global_SensorSignalsBus_i12, real_T
                   *rty_Global_SensorSignalsBus__aq, real_T
                   *rty_Global_SensorSignalsBus_C_o, real_T
                   *rty_Global_SensorSignalsBus__iq, real_T
                   *rty_Global_SensorSignalsBus__ex, real_T
                   *rty_Global_SensorSignalsBus__de, real_T
                   *rty_Global_SensorSignalsBus__do, real_T
                   *rty_Global_SensorSignalsBus__lj, real_T
                   *rty_Global_SensorSignalsBus__kg, real_T
                   *rty_Global_SensorSignalsBus_C_n, real_T
                   *rty_Global_SensorSignalsBus__ho, real_T
                   *rty_Global_SensorSignalsBus__gk, real_T
                   *rty_Global_SensorSignalsBus_ILV, real_T
                   *rty_Global_SensorSignalsBus_TLV, real_T
                   *rty_Global_SensorSignalsBus_VLV, real_T
                   *rty_Global_SensorSignalsBus__ik, real_T
                   *rty_Global_SensorSignalsBus__iu, real_T
                   *rty_Global_GPSIMUSignalsBus_vLo, real_T
                   *rty_Global_GPSIMUSignalsBus_gLa, real_T
                   *rty_Global_GPSIMUSignalsBus_gLo, real_T
                   *rty_Global_GPSIMUSignalsBus_nYa, real_T
                   *rty_Global_BMSSignalsBus_VCellM, real_T
                   *rty_Global_BMSSignalsBus_VCellD, real_T
                   *rty_Global_BMSSignalsBus_VCel_d, real_T
                   *rty_Global_BMSSignalsBus_VCellA, real_T
                   *rty_Global_BMSSignalsBus_TCellM, real_T
                   *rty_Global_BMSSignalsBus_NBMSDL, real_T
                   *rty_Global_BMSSignalsBus_TCel_c, real_T
                   *rty_Global_BMSSignalsBus_IBMSHa, real_T
                   *rty_Global_BMSSignalsBus_VDCAcc, real_T
                   *rty_Global_BMSSignalsBus_RCellA, boolean_T
                   *rty_Global_BMSSignalsBus_BBalan, boolean_T
                   *rty_Global_BMSSignalsBus_BBMSP0, boolean_T
                   *rty_Global_BMSSignalsBus_BBMS_c, boolean_T
                   *rty_Global_BMSSignalsBus_BBMS_k, boolean_T
                   *rty_Global_BMSSignalsBus_BBMS_m, boolean_T
                   *rty_Global_BMSSignalsBus_BBMS_b, boolean_T
                   *rty_Global_BMSSignalsBus_BBM_kd, real_T
                   *rty_Global_BMSSignalsBus_IIVTS, real_T
                   *rty_Global_SystemsBus_rThrottle, boolean_T
                   *rty_Global_SystemsBus_BThrottle, real_T
                   *rty_Global_SystemsBus_tThrottle, boolean_T
                   *rty_Global_SystemsBus_BBrakeErr, real_T
                   *rty_Global_SystemsBus_tBrakeErr, boolean_T
                   *rty_Global_SystemsBus_BBrakeOn, real_T
                   *rty_Global_SystemsBus_pBrakeMax, boolean_T
                   *rty_Global_SystemsBus_BPedalOve, real_T
                   *rty_Global_SystemsBus_tPedalOve, boolean_T
                   *rty_Global_SystemsBus_BAppsOK, real_T
                   *rty_Global_SystemsBus_tAppsTime, real_T
                   *rty_Global_SystemsBus_rSteering, real_T
                   *rty_Global_SystemsBus_aSteering, real_T
                   *rty_Global_SystemsBus_rRegenPad, boolean_T
                   *rty_Global_SystemsBus_BRegenOn, boolean_T
                   *rty_Global_SystemsBus_BBrakeLig, real_T
                   *rty_Global_SystemsBus_xDamperFL, real_T
                   *rty_Global_SystemsBus_xDamperFR, real_T
                   *rty_Global_SystemsBus_xDamperRL, real_T
                   *rty_Global_SystemsBus_xDamperRR, boolean_T
                   *rty_Global_SystemsBus_BDamperEr, boolean_T
                   *rty_Global_SystemsBus_BDamper_l, boolean_T
                   *rty_Global_SystemsBus_BDamper_d, boolean_T
                   *rty_Global_SystemsBus_BDamper_i, real_T
                   *rty_Global_SystemsBus_vChassis, real_T
                   *rty_Global_SystemsBus_sChassis, real_T
                   *rty_Global_SystemsBus_sEMS1000m, boolean_T
                   *rty_Global_SystemsBus_BEMS1000m, boolean_T
                   *rty_Global_SystemsBus_BEMS995mP, boolean_T
                   *rty_Global_SystemsBus_BTorqueVe, real_T
                   *rty_Global_SystemsBus_NThrottle, real_T
                   *rty_Global_SystemsBus_PDischarg, boolean_T
                   *rty_Global_SystemsBus_BEMSActiv, real_T
                   *rty_Global_SystemsBus_PRegen, real_T
                   *rty_Global_SystemsBus_rTorqueSp, real_T
                   *rty_Global_SystemsBus_PEngineBr, boolean_T
                   *rty_Global_SystemsBus_BSpinning, real_T
                   *rty_Global_SystemsBus_NTraction, boolean_T
                   *rty_Global_SystemsBus_BTraction, real_T
                   *rty_Global_SystemsBus_rTorqueVe, real_T
                   *rty_Global_SystemsBus_NPowerCon, real_T
                   *rty_Global_SystemsBus_NTorqueSp, boolean_T
                   *rty_Global_SystemsBus_BAccumula, boolean_T
                   *rty_Global_SystemsBus_BErrorRes, boolean_T
                   *rty_Global_SystemsBus_BReadyToD, real_T
                   *rty_Global_SystemsBus_NModeNumb, real_T
                   *rty_Global_SystemsBus_NModeNu_d, real_T
                   *rty_Global_SystemsBus_TMotorMax, real_T
                   *rty_Global_SystemsBus_TInvMax, real_T
                   *rty_Global_SystemsBus_PActual, real_T
                   *rty_Global_SystemsBus_rSOC, real_T
                   *rty_Global_SystemsBus_rSOE, boolean_T
                   *rty_Global_SystemsBus_BEncoderE, boolean_T
                   *rty_Global_SystemsBus_BEncode_h, real_T
                   *rty_Global_SystemsBus_rCoolingF, real_T
                   *rty_Global_SystemsBus_rCoolingP, boolean_T
                   *rty_Global_SystemsBus_BAccumu_k, boolean_T
                   *rty_Global_SystemsBus_BInvLVOn, real_T
                   *rty_Global_SystemsBus_rThrott_g, real_T
                   *rty_Global_SystemsBus_rThrot_gm, real_T
                   *rty_Global_StateflowBus_NCarSta, boolean_T
                   *rty_Global_StateflowBus_BReadyT, boolean_T
                   *rty_Global_StateflowBus_BRead_i, real_T
                   *rty_Global_StateflowBus_NBMSSta, real_T
                   *rty_Global_StateflowBus_NInvSta, real_T
                   *rty_Global_StateflowBus_BHVOn, real_T
                   *rty_Global_StateflowBus_BInvOnR, real_T
                   *rty_Global_StateflowBus_BInvO_j, real_T
                   *rty_Global_StateflowBus_BInvOnF, real_T
                   *rty_Global_StateflowBus_BInvO_p, real_T
                   *rty_Global_StateflowBus_BInvDCO, real_T
                   *rty_Global_StateflowBus_BInvD_h, real_T
                   *rty_Global_StateflowBus_BInvD_n, real_T
                   *rty_Global_StateflowBus_BInv_no, real_T
                   *rty_Global_StateflowBus_BInvEna, real_T
                   *rty_Global_StateflowBus_BInvE_h, real_T
                   *rty_Global_StateflowBus_BInvE_o, real_T
                   *rty_Global_StateflowBus_BInvE_j, real_T
                   *rty_Global_StateflowBus_BInvErr, real_T
                   *rty_Global_StateflowBus_BInvE_g, real_T
                   *rty_Global_StateflowBus_BInv_gg, real_T
                   *rty_Global_StateflowBus_BInvE_m, real_T
                   *rty_Global_StateflowBus_MTarget, real_T
                   *rty_Global_StateflowBus_MTarg_a, real_T
                   *rty_Global_StateflowBus_MTarg_l, real_T
                   *rty_Global_StateflowBus_MTarg_g, real_T
                   *rty_Global_StateflowBus_MTorque, real_T
                   *rty_Global_StateflowBus_MTorq_h, real_T
                   *rty_Global_StateflowBus_MTorq_l, real_T
                   *rty_Global_StateflowBus_MTorq_g, real_T
                   *rty_Global_StateflowBus_MTor_gn, real_T
                   *rty_Global_StateflowBus_MTorq_m, real_T
                   *rty_Global_StateflowBus_MTorq_i, real_T
                   *rty_Global_StateflowBus_MTor_if, boolean_T
                   *rty_Global_LimitationsBus_BDisc, real_T
                   *rty_Global_LimitationsBus_rInvT, real_T
                   *rty_Global_LimitationsBus_rIn_a, real_T
                   *rty_Global_LimitationsBus_rIn_c, real_T
                   *rty_Global_LimitationsBus_rIn_f, real_T
                   *rty_Global_LimitationsBus_rIn_m, real_T
                   *rty_Global_LimitationsBus_rMoto, real_T
                   *rty_Global_LimitationsBus_rMo_g, real_T
                   *rty_Global_LimitationsBus_rMo_h, real_T
                   *rty_Global_LimitationsBus_rMo_f, real_T
                   *rty_Global_LimitationsBus_rMo_e, real_T
                   *rty_Global_LimitationsBus_rTSTe, real_T
                   *rty_Global_LimitationsBus_rTS_f, real_T
                   *rty_Global_LimitationsBus_rTS_j, real_T
                   *rty_Global_LimitationsBus_rTS_d, real_T
                   *rty_Global_LimitationsBus_rHigh, real_T
                   *rty_Global_LimitationsBus_rHi_o, real_T
                   *rty_Global_LimitationsBus_rLowC, real_T
                   *rty_Global_LimitationsBus_rSOCD, real_T
                   *rty_Global_LimitationsBus_rSOCR, real_T
                   *rty_Global_LimitationsBus_rSpee, real_T
                   *rty_Global_LimitationsBus_rDisc, real_T
                   *rty_Global_LimitationsBus_rRege, real_T
                   *rty_Global_TorqueControlBus_MDr, real_T
                   *rty_Global_TorqueControlBus_M_f, real_T
                   *rty_Global_TorqueControlBus_MDi, real_T
                   *rty_Global_TorqueControlBus_MRe, real_T
                   *rty_Global_TorqueControlBus_PPo, real_T
                   *rty_Global_TorqueControlBus_MPo, real_T
                   *rty_Global_TorqueControlBus_P_l, real_T
                   *rty_Global_TorqueControlBus_P_j, real_T
                   *rty_Global_TorqueControlBus_PDi, real_T
                   *rty_Global_TorqueControlBus_MTo, real_T
                   *rty_Global_TorqueControlBus_M_m, real_T
                   *rty_Global_TorqueControlBus_rSO, real_T
                   *rty_Global_TorqueControlBus_r_j, real_T
                   *rty_Global_TorqueControlBus_nYa, boolean_T
                   *rty_Global_TorqueControlBus_BTo, real_T
                   *rty_Global_TorqueControlBus_M_i, real_T
                   *rty_Global_TorqueControlBus_M_b, real_T
                   *rty_Global_TorqueControlBus_M_l, real_T
                   *rty_Global_TorqueControlBus__mr, real_T
                   *rty_Global_TorqueControlBus_rSp, real_T
                   *rty_Global_TorqueControlBus__mk, real_T
                   *rty_Global_TorqueControlBus_M_n, real_T
                   *rty_Global_TorqueControlBus_M_k, real_T
                   *rty_Global_TorqueControlBus_M_a, real_T
                   *rty_Global_TorqueControlBus_rSl, real_T
                   *rty_Global_TorqueControlBus_NTr, real_T
                   *rty_Global_TorqueControlBus_N_d, real_T
                   *rty_Global_TorqueControlBus_N_j, real_T
                   *rty_Global_TorqueControlBus_N_m, real_T
                   *rty_Global_TorqueControlBus_NAB, real_T
                   *rty_Global_TorqueControlBus_N_c, real_T
                   *rty_Global_TorqueControlBus_N_p, real_T
                   *rty_Global_TorqueControlBus__jd, real_T
                   *rty_Global_TorqueControlBus__ja, real_T
                   *rty_Global_TorqueControlBus_r_e, real_T
                   *rty_Global_TorqueControlBus_r_d, real_T
                   *rty_Global_TorqueControlBus_r_k, real_T
                   *rty_Global_TorqueControlBus_MTr, real_T
                   *rty_Global_TorqueControlBus__ku, real_T
                   *rty_Global_TorqueControlBus__ae, real_T
                   *rty_Global_TorqueControlBus_M_j, real_T
                   *rty_Global_TorqueControlBus__ms, real_T
                   *rty_Global_TorqueControlBus_M_c, real_T
                   *rty_Global_TorqueControlBus__lr, real_T
                   *rty_Global_TorqueControlBus__cz, real_T
                   *rty_Global_TorqueControlBus_MSp, real_T
                   *rty_Global_TorqueControlBus__i4, real_T
                   *rty_Global_TorqueControlBus__be, real_T
                   *rty_Global_TorqueControlBus__k3, real_T
                   *rty_Global_TorqueControlBus_MFL, real_T
                   *rty_Global_TorqueControlBus_MFR, real_T
                   *rty_Global_TorqueControlBus_MRL, real_T
                   *rty_Global_TorqueControlBus_MRR, real_T
                   *rty_Global_TorqueControlBus_M_d, B_MASTER_c_T *localB,
                   DW_MASTER_f_T *localDW);

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
