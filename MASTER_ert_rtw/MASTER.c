/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: MASTER.c
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

#include "MASTER.h"
#include "INPUT.h"
#include "LIMITATIONS.h"
#include "STATEFLOW.h"
#include "SYSTEMS.h"
#include "TORQUECONTROL.h"

/* Block signals (default storage) */
B_MASTER_T MASTER_B;

/* Block states (default storage) */
DW_MASTER_T MASTER_DW;

/* External inputs (root inport signals with default storage) */
ExtU_MASTER_T MASTER_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_MASTER_T MASTER_Y;

/* Real-time model */
static RT_MODEL_MASTER_T MASTER_M_;
RT_MODEL_MASTER_T *const MASTER_M = &MASTER_M_;

/* Model step function */
void MASTER_step(void)
{
  /* S-Function (fcgen): '<Root>/Function-Call Generator' */

  /* ModelReference generated from: '<Root>/INPUT' incorporates:
   *  Inport: '<Root>/BMSCAN'
   *  Inport: '<Root>/CAN1_2'
   *  Inport: '<Root>/CAN3'
   */
  INPUT(&MASTER_U.CAN1_2.InverterFLCANBus.nMotorFL,
        &MASTER_U.CAN1_2.InverterFLCANBus.BInvDCOnFL,
        &MASTER_U.CAN1_2.InverterFLCANBus.BInvErrorFL,
        &MASTER_U.CAN1_2.InverterFLCANBus.BInvOnFL,
        &MASTER_U.CAN1_2.InverterFLCANBus.BInvDCQuitInvOnFL,
        &MASTER_U.CAN1_2.InverterFLCANBus.BInvQuitInvOnFL,
        &MASTER_U.CAN1_2.InverterFLCANBus.BInvSysReadyFL,
        &MASTER_U.CAN1_2.InverterFLCANBus.BInvWarnFL,
        &MASTER_U.CAN1_2.InverterFLCANBus.MMotorMeasuredFL,
        &MASTER_U.CAN1_2.InverterFLCANBus.NInvDTCFL,
        &MASTER_U.CAN1_2.InverterFLCANBus.TMotorFL,
        &MASTER_U.CAN1_2.InverterFLCANBus.VDCInvFL,
        &MASTER_U.CAN1_2.InverterFLCANBus.TInvFL,
        &MASTER_U.CAN1_2.InverterFRCANBus.nMotorFR,
        &MASTER_U.CAN1_2.InverterFRCANBus.BInvDCOnFR,
        &MASTER_U.CAN1_2.InverterFRCANBus.BInvErrorFR,
        &MASTER_U.CAN1_2.InverterFRCANBus.BInvOnFR,
        &MASTER_U.CAN1_2.InverterFRCANBus.BInvDCQuitInvOnFR,
        &MASTER_U.CAN1_2.InverterFRCANBus.BInvQuitInvOnFR,
        &MASTER_U.CAN1_2.InverterFRCANBus.BInvSysReadyFR,
        &MASTER_U.CAN1_2.InverterFRCANBus.BInvWarnFR,
        &MASTER_U.CAN1_2.InverterFRCANBus.MMotorMeasuredFR,
        &MASTER_U.CAN1_2.InverterFRCANBus.NInvDTCFR,
        &MASTER_U.CAN1_2.InverterFRCANBus.TMotorFR,
        &MASTER_U.CAN1_2.InverterFRCANBus.VDCInvFR,
        &MASTER_U.CAN1_2.InverterFRCANBus.TInvFR,
        &MASTER_U.CAN1_2.InverterRLCANBus.nMotorRL,
        &MASTER_U.CAN1_2.InverterRLCANBus.BInvDCOnRL,
        &MASTER_U.CAN1_2.InverterRLCANBus.BInvErrorRL,
        &MASTER_U.CAN1_2.InverterRLCANBus.BInvOnRL,
        &MASTER_U.CAN1_2.InverterRLCANBus.BInvDCQuitInvOnRL,
        &MASTER_U.CAN1_2.InverterRLCANBus.BInvQuitInvOnRL,
        &MASTER_U.CAN1_2.InverterRLCANBus.BInvSysReadyRL,
        &MASTER_U.CAN1_2.InverterRLCANBus.BInvWarnRL,
        &MASTER_U.CAN1_2.InverterRLCANBus.MMotorMeasuredRL,
        &MASTER_U.CAN1_2.InverterRLCANBus.NInvDTCRL,
        &MASTER_U.CAN1_2.InverterRLCANBus.TMotorRL,
        &MASTER_U.CAN1_2.InverterRLCANBus.VDCInvRL,
        &MASTER_U.CAN1_2.InverterRLCANBus.TInvRL,
        &MASTER_U.CAN1_2.InverterRRCANBus.nMotorRR,
        &MASTER_U.CAN1_2.InverterRRCANBus.BInvDCOnRR,
        &MASTER_U.CAN1_2.InverterRRCANBus.BInvErrorRR,
        &MASTER_U.CAN1_2.InverterRRCANBus.BInvOnRR,
        &MASTER_U.CAN1_2.InverterRRCANBus.BInvDCQuitInvOnRR,
        &MASTER_U.CAN1_2.InverterRRCANBus.BInvQuitInvOnRR,
        &MASTER_U.CAN1_2.InverterRRCANBus.BInvSysReadyRR,
        &MASTER_U.CAN1_2.InverterRRCANBus.BInvWarnRR,
        &MASTER_U.CAN1_2.InverterRRCANBus.MMotorMeasuredRR,
        &MASTER_U.CAN1_2.InverterRRCANBus.NInvDTCRR,
        &MASTER_U.CAN1_2.InverterRRCANBus.TMotorRR,
        &MASTER_U.CAN1_2.InverterRRCANBus.VDCInvRR,
        &MASTER_U.CAN1_2.InverterRRCANBus.TInvRR,
        &MASTER_U.CAN3.DDU7_Analoge_1.pBrakeF,
        &MASTER_U.CAN3.DDU7_Analoge_1.pBrakeR,
        &MASTER_U.CAN3.DDU7_Analoge_1.VDamperPotentiometerFL,
        &MASTER_U.CAN3.DDU7_Analoge_1.VDamperPotentiometerFR,
        &MASTER_U.CAN3.DDU7_Analoge_1.VDamperPotentiometerRL,
        &MASTER_U.CAN3.DDU7_Analoge_1.VDamperPotentiometerRR,
        &MASTER_U.CAN3.DDU7_Analoge_2.NDisplayNumberDDU7,
        &MASTER_U.CAN3.DDU7_Analoge_2.VSteeringAngle,
        &MASTER_U.CAN3.DDU7_Analoge_2.VThrottlePedal1,
        &MASTER_U.CAN3.DDU7_Analoge_2.VThrottlePedal2,
        &MASTER_U.CAN3.OXTSDataFrame1540.vLongitudinalOXTSIMU,
        &MASTER_U.CAN3.OXTSDataFrame1541.gLateralOXTS,
        &MASTER_U.CAN3.OXTSDataFrame1541.gLongitudinalOXTS,
        &MASTER_U.CAN3.OXTSDataFrame1544.nYawRateOXTSIMU,
        &MASTER_U.CAN3.PDM_Status_1.C1P01_Status,
        &MASTER_U.CAN3.PDM_Status_1.C1P02_Status,
        &MASTER_U.CAN3.PDM_Status_1.C1P03_Status,
        &MASTER_U.CAN3.PDM_Status_1.C1P04_Status,
        &MASTER_U.CAN3.PDM_Status_1.C1P07_Status,
        &MASTER_U.CAN3.PDM_Status_1.C1P11_Status,
        &MASTER_U.CAN3.PDM_Status_1.C1P12_Status,
        &MASTER_U.CAN3.PDM_Status_1.C1P13_Status,
        &MASTER_U.CAN3.PDM_Status_1.C1P25_Status,
        &MASTER_U.CAN3.PDM_Status_1.C1P26_Status,
        &MASTER_U.CAN3.PDM_Status_1.C1P28_Status,
        &MASTER_U.CAN3.PDM_Status_1.C1P30_Status,
        &MASTER_U.CAN3.PDM_Status_1.C1P31_Status,
        &MASTER_U.CAN3.PDM_Status_1.C1P33_Status,
        &MASTER_U.CAN3.PDM_Status_1.C1P34_Status,
        &MASTER_U.CAN3.PDM_Status_1.C1P36_Status,
        &MASTER_U.CAN3.PDM_Status_2.C1P37_Status,
        &MASTER_U.CAN3.PDM_Status_2.C1P38_Status,
        &MASTER_U.CAN3.PDM_Status_2.C2P01_Status,
        &MASTER_U.CAN3.PDM_Status_2.C2P02_Status,
        &MASTER_U.CAN3.PDM_Status_2.C2P03_Status,
        &MASTER_U.CAN3.PDM_Status_2.C2P04_Status,
        &MASTER_U.CAN3.PDM_Status_2.C2P05_Status,
        &MASTER_U.CAN3.PDM_Status_2.C2P13_Status,
        &MASTER_U.CAN3.PDM_Status_2.C2P25_Status,
        &MASTER_U.CAN3.PDM_Status_2.C2P26_Status,
        &MASTER_U.CAN3.PDM_Status_2.C2P27_Status,
        &MASTER_U.CAN3.PDM_Status_2.C2P28_Status,
        &MASTER_U.CAN3.PDM_Status_2.C2P29_Status,
        &MASTER_U.CAN3.PDM_Status_2.C2P30_Status,
        &MASTER_U.CAN3.PDM_Status_2.C2P31_Status,
        &MASTER_U.CAN3.PDM_Status_2.C2P33_Status,
        &MASTER_U.CAN3.PDM_Status_3.C1P16_Digital,
        &MASTER_U.CAN3.PDM_Status_3.C1P17_Digital,
        &MASTER_U.CAN3.PDM_Status_3.C2P17_Digital,
        &MASTER_U.CAN3.PDM_Status_3.C2P18_Digital,
        &MASTER_U.CAN3.PDM_Status_3.C2P35_Status,
        &MASTER_U.CAN3.PDM_Status_3.C2P36_Status,
        &MASTER_U.CAN3.PDM_Status_3.C2P37_Status,
        &MASTER_U.CAN3.PDM_Status_3.C2P38_Status,
        &MASTER_U.CAN3.PDM_Status_3.ILVSystem,
        &MASTER_U.CAN3.PDM_Status_3.TLVSystem,
        &MASTER_U.CAN3.PDM_Status_3.VLVSystem,
        &MASTER_U.CAN3.SteeringWheelBus.BSteeringWheelButton1,
        &MASTER_U.CAN3.SteeringWheelBus.BSteeringWheelButton2,
        &MASTER_U.CAN3.SteeringWheelBus.BSteeringWheelButton3,
        &MASTER_U.CAN3.SteeringWheelBus.BSteeringWheelButton4,
        &MASTER_U.CAN3.SteeringWheelBus.BSteeringWheelButton5,
        &MASTER_U.CAN3.SteeringWheelBus.BSteeringWheelButton6,
        &MASTER_U.CAN3.SteeringWheelBus.BSteeringWheelButton7,
        &MASTER_U.CAN3.SteeringWheelBus.BSteeringWheelButton8,
        &MASTER_U.CAN3.SteeringWheelBus.VRegenPaddle1,
        &MASTER_U.CAN3.SteeringWheelBus.VRegenPaddle2, &MASTER_U.BMSCAN.IIVTS,
        &MASTER_U.BMSCAN.IBMSHallEffect, &MASTER_U.BMSCAN.VDCAccumulator,
        &MASTER_U.BMSCAN.TCellMin, &MASTER_U.BMSCAN.VCellAverage,
        &MASTER_U.BMSCAN.VCellMax, &MASTER_U.BMSCAN.TCellMax,
        &MASTER_U.BMSCAN.NBMSDLC, &MASTER_U.BMSCAN.VCellMin,
        &MASTER_U.BMSCAN.RCellAverage, &MASTER_U.BMSCAN.BBalancingActive,
        &MASTER_U.BMSCAN.BBMSP0A0C, &MASTER_U.BMSCAN.BBMSP0A0E,
        &MASTER_U.BMSCAN.BBMSP0A10, &MASTER_U.BMSCAN.BBMSP0A80,
        &MASTER_U.BMSCAN.BBMSP0AC0, &MASTER_U.BMSCAN.BBMSP0AFA,
        &MASTER_B.nMotorRL_k, &MASTER_B.BInvDCOnRL_e, &MASTER_B.BInvErrorRL_c,
        &MASTER_B.BInvOnRL_m, &MASTER_B.BInvDCQuitInvOnRL_a,
        &MASTER_B.BInvQuitInvOnRL_g, &MASTER_B.BInvSysReadyRL_a,
        &MASTER_B.BInvWarnRL_c, &MASTER_B.MMotorMeasuredRL_a,
        &MASTER_B.NInvDTCRL_g, &MASTER_B.TMotorRL_d, &MASTER_B.VDCInvRL_h,
        &MASTER_B.TInvRL_l, &MASTER_B.nMotorFL_o, &MASTER_B.BInvDCOnFL_o,
        &MASTER_B.BInvErrorFL_g, &MASTER_B.BInvOnFL_l,
        &MASTER_B.BInvDCQuitInvOnFL_i, &MASTER_B.BInvQuitInvOnFL_i,
        &MASTER_B.BInvSysReadyFL_j, &MASTER_B.BInvWarnFL_p,
        &MASTER_B.MMotorMeasuredFL_c, &MASTER_B.NInvDTCFL_d,
        &MASTER_B.TMotorFL_b, &MASTER_B.VDCInvFL_l, &MASTER_B.TInvFL_j,
        &MASTER_B.nMotorRR_o, &MASTER_B.BInvDCOnRR_o4, &MASTER_B.BInvErrorRR_b,
        &MASTER_B.BInvOnRR_l, &MASTER_B.BInvDCQuitInvOnRR_m,
        &MASTER_B.BInvQuitInvOnRR_d, &MASTER_B.BInvSysReadyRR_e,
        &MASTER_B.BInvWarnRR_m, &MASTER_B.MMotorMeasuredRR_d,
        &MASTER_B.NInvDTCRR_m, &MASTER_B.TMotorRR_k, &MASTER_B.VDCInvRR_o,
        &MASTER_B.TInvRR_b, &MASTER_B.nMotorFR_a, &MASTER_B.BInvDCOnFR_j,
        &MASTER_B.BInvErrorFR_c, &MASTER_B.BInvOnFR_b,
        &MASTER_B.BInvDCQuitInvOnFR_l, &MASTER_B.BInvQuitInvOnFR_c,
        &MASTER_B.BInvSysReadyFR_d, &MASTER_B.BInvWarnFR_h,
        &MASTER_B.MMotorMeasuredFR_d, &MASTER_B.NInvDTCFR_a,
        &MASTER_B.TMotorFR_g, &MASTER_B.VDCInvFR_p, &MASTER_B.TInvFR_i,
        &MASTER_B.vWheelRL_k, &MASTER_B.vWheelRR_f, &MASTER_B.vWheelFL_g,
        &MASTER_B.vWheelFR_n, &MASTER_B.pBrakeF_p, &MASTER_B.pBrakeR_b,
        &MASTER_B.VDamperPotentiometerFL_i, &MASTER_B.VDamperPotentiometerFR_h,
        &MASTER_B.NDisplayNumberDDU7_k, &MASTER_B.VSteeringAngle_a,
        &MASTER_B.VThrottlePedal1_f, &MASTER_B.VThrottlePedal2_o,
        &MASTER_B.BSteeringWheelButton1_h, &MASTER_B.BSteeringWheelButton2_n,
        &MASTER_B.BSteeringWheelButton3_b, &MASTER_B.BSteeringWheelButton4_e,
        &MASTER_B.BSteeringWheelButton5_p, &MASTER_B.BSteeringWheelButton6_c,
        &MASTER_B.BSteeringWheelButton7_j, &MASTER_B.BSteeringWheelButton8_k,
        &MASTER_B.VRegenPaddle1_o, &MASTER_B.VRegenPaddle2_b,
        &MASTER_B.C1P01_Status_k, &MASTER_B.C1P02_Status_a5,
        &MASTER_B.C1P03_Status_g, &MASTER_B.C1P04_Status_o,
        &MASTER_B.C1P07_Status_i, &MASTER_B.C1P11_Status_k,
        &MASTER_B.C1P12_Status_g, &MASTER_B.C1P13_Status_k,
        &MASTER_B.C1P25_Status_a, &MASTER_B.C1P26_Status_m,
        &MASTER_B.C1P28_Status_m, &MASTER_B.C1P30_Status_d,
        &MASTER_B.C1P31_Status_j, &MASTER_B.C1P33_Status_c,
        &MASTER_B.C1P34_Status_l, &MASTER_B.C1P36_Status_c,
        &MASTER_B.C1P37_Status_i, &MASTER_B.C1P38_Status_mf,
        &MASTER_B.C2P01_Status_i, &MASTER_B.C2P02_Status_h,
        &MASTER_B.C2P03_Status_h, &MASTER_B.C2P04_Status_o,
        &MASTER_B.C2P05_Status_mh, &MASTER_B.C2P13_Status_p,
        &MASTER_B.C2P25_Status_a, &MASTER_B.C2P26_Status_b,
        &MASTER_B.C2P27_Status_k, &MASTER_B.C2P28_Status_f,
        &MASTER_B.C2P29_Status_n, &MASTER_B.C2P30_Status_e,
        &MASTER_B.C2P31_Status_b, &MASTER_B.C2P33_Status_m,
        &MASTER_B.C1P16_Digital_e, &MASTER_B.C1P17_Digital_m,
        &MASTER_B.C2P17_Digital_m, &MASTER_B.C2P18_Digital_f,
        &MASTER_B.C2P35_Status_k, &MASTER_B.C2P36_Status_o,
        &MASTER_B.C2P37_Status_h, &MASTER_B.C2P38_Status_d,
        &MASTER_B.ILVSystem_p, &MASTER_B.TLVSystem_f, &MASTER_B.VLVSystem_e,
        &MASTER_B.VDamperPotentiometerRL_i, &MASTER_B.VDamperPotentiometerRR_o,
        &MASTER_B.vLongitudinalOXTSIMU_d, &MASTER_B.gLateralOXTSIMU_l,
        &MASTER_B.gLongitudinalOXTSIMU_f, &MASTER_B.nYawRateOXTSIMU_fe,
        &MASTER_B.VCellMax_m, &MASTER_B.VCellDelta_b, &MASTER_B.VCellMin_e,
        &MASTER_B.VCellAverage_d, &MASTER_B.TCellMax_h, &MASTER_B.NBMSDLC_k,
        &MASTER_B.TCellMin_d, &MASTER_B.IBMSHallEffect_k,
        &MASTER_B.VDCAccumulator_j, &MASTER_B.RCellAverage_p,
        &MASTER_B.BBalancingActive_nc, &MASTER_B.BBMSP0A0C_n,
        &MASTER_B.BBMSP0A0E_j, &MASTER_B.BBMSP0A10_l, &MASTER_B.BBMSP0A80_b,
        &MASTER_B.BBMSP0AC0_a, &MASTER_B.BBMSP0AFA_e, &MASTER_B.IIVTS_l);

  /* End of Outputs for S-Function (fcgen): '<Root>/Function-Call Generator' */

  /* BusCreator generated from: '<Root>/Global' */
  MASTER_Y.Global_b.InverterSignalsBus.InverterRLSignalsBus.nMotorRL =
    MASTER_B.nMotorRL_k;
  MASTER_Y.Global_b.InverterSignalsBus.InverterRLSignalsBus.BInvDCOnRL =
    MASTER_B.BInvDCOnRL_e;
  MASTER_Y.Global_b.InverterSignalsBus.InverterRLSignalsBus.BInvErrorRL =
    MASTER_B.BInvErrorRL_c;
  MASTER_Y.Global_b.InverterSignalsBus.InverterRLSignalsBus.BInvOnRL =
    MASTER_B.BInvOnRL_m;
  MASTER_Y.Global_b.InverterSignalsBus.InverterRLSignalsBus.BInvDCQuitInvOnRL =
    MASTER_B.BInvDCQuitInvOnRL_a;
  MASTER_Y.Global_b.InverterSignalsBus.InverterRLSignalsBus.BInvQuitInvOnRL =
    MASTER_B.BInvQuitInvOnRL_g;
  MASTER_Y.Global_b.InverterSignalsBus.InverterRLSignalsBus.BInvSysReadyRL =
    MASTER_B.BInvSysReadyRL_a;
  MASTER_Y.Global_b.InverterSignalsBus.InverterRLSignalsBus.BInvWarnRL =
    MASTER_B.BInvWarnRL_c;
  MASTER_Y.Global_b.InverterSignalsBus.InverterRLSignalsBus.MMotorMeasuredRL =
    MASTER_B.MMotorMeasuredRL_a;
  MASTER_Y.Global_b.InverterSignalsBus.InverterRLSignalsBus.NInvDTCRL =
    MASTER_B.NInvDTCRL_g;
  MASTER_Y.Global_b.InverterSignalsBus.InverterRLSignalsBus.TMotorRL =
    MASTER_B.TMotorRL_d;
  MASTER_Y.Global_b.InverterSignalsBus.InverterRLSignalsBus.VDCInvRL =
    MASTER_B.VDCInvRL_h;
  MASTER_Y.Global_b.InverterSignalsBus.InverterRLSignalsBus.TInvRL =
    MASTER_B.TInvRL_l;

  /* BusCreator generated from: '<Root>/Global' */
  MASTER_Y.Global_b.InverterSignalsBus.InverterFLSignalsBus.nMotorFL =
    MASTER_B.nMotorFL_o;
  MASTER_Y.Global_b.InverterSignalsBus.InverterFLSignalsBus.BInvDCOnFL =
    MASTER_B.BInvDCOnFL_o;
  MASTER_Y.Global_b.InverterSignalsBus.InverterFLSignalsBus.BInvErrorFL =
    MASTER_B.BInvErrorFL_g;
  MASTER_Y.Global_b.InverterSignalsBus.InverterFLSignalsBus.BInvOnFL =
    MASTER_B.BInvOnFL_l;
  MASTER_Y.Global_b.InverterSignalsBus.InverterFLSignalsBus.BInvDCQuitInvOnFL =
    MASTER_B.BInvDCQuitInvOnFL_i;
  MASTER_Y.Global_b.InverterSignalsBus.InverterFLSignalsBus.BInvQuitInvOnFL =
    MASTER_B.BInvQuitInvOnFL_i;
  MASTER_Y.Global_b.InverterSignalsBus.InverterFLSignalsBus.BInvSysReadyFL =
    MASTER_B.BInvSysReadyFL_j;
  MASTER_Y.Global_b.InverterSignalsBus.InverterFLSignalsBus.BInvWarnFL =
    MASTER_B.BInvWarnFL_p;
  MASTER_Y.Global_b.InverterSignalsBus.InverterFLSignalsBus.MMotorMeasuredFL =
    MASTER_B.MMotorMeasuredFL_c;
  MASTER_Y.Global_b.InverterSignalsBus.InverterFLSignalsBus.NInvDTCFL =
    MASTER_B.NInvDTCFL_d;
  MASTER_Y.Global_b.InverterSignalsBus.InverterFLSignalsBus.TMotorFL =
    MASTER_B.TMotorFL_b;
  MASTER_Y.Global_b.InverterSignalsBus.InverterFLSignalsBus.VDCInvFL =
    MASTER_B.VDCInvFL_l;
  MASTER_Y.Global_b.InverterSignalsBus.InverterFLSignalsBus.TInvFL =
    MASTER_B.TInvFL_j;

  /* BusCreator generated from: '<Root>/Global' */
  MASTER_Y.Global_b.InverterSignalsBus.InverterRRSignalsBus.nMotorRR =
    MASTER_B.nMotorRR_o;
  MASTER_Y.Global_b.InverterSignalsBus.InverterRRSignalsBus.BInvDCOnRR =
    MASTER_B.BInvDCOnRR_o4;
  MASTER_Y.Global_b.InverterSignalsBus.InverterRRSignalsBus.BInvErrorRR =
    MASTER_B.BInvErrorRR_b;
  MASTER_Y.Global_b.InverterSignalsBus.InverterRRSignalsBus.BInvOnRR =
    MASTER_B.BInvOnRR_l;
  MASTER_Y.Global_b.InverterSignalsBus.InverterRRSignalsBus.BInvDCQuitInvOnRR =
    MASTER_B.BInvDCQuitInvOnRR_m;
  MASTER_Y.Global_b.InverterSignalsBus.InverterRRSignalsBus.BInvQuitInvOnRR =
    MASTER_B.BInvQuitInvOnRR_d;
  MASTER_Y.Global_b.InverterSignalsBus.InverterRRSignalsBus.BInvSysReadyRR =
    MASTER_B.BInvSysReadyRR_e;
  MASTER_Y.Global_b.InverterSignalsBus.InverterRRSignalsBus.BInvWarnRR =
    MASTER_B.BInvWarnRR_m;
  MASTER_Y.Global_b.InverterSignalsBus.InverterRRSignalsBus.MMotorMeasuredRR =
    MASTER_B.MMotorMeasuredRR_d;
  MASTER_Y.Global_b.InverterSignalsBus.InverterRRSignalsBus.NInvDTCRR =
    MASTER_B.NInvDTCRR_m;
  MASTER_Y.Global_b.InverterSignalsBus.InverterRRSignalsBus.TMotorRR =
    MASTER_B.TMotorRR_k;
  MASTER_Y.Global_b.InverterSignalsBus.InverterRRSignalsBus.VDCInvRR =
    MASTER_B.VDCInvRR_o;
  MASTER_Y.Global_b.InverterSignalsBus.InverterRRSignalsBus.TInvRR =
    MASTER_B.TInvRR_b;

  /* BusCreator generated from: '<Root>/Global' */
  MASTER_Y.Global_b.InverterSignalsBus.InverterFRSignalsBus.nMotorFR =
    MASTER_B.nMotorFR_a;
  MASTER_Y.Global_b.InverterSignalsBus.InverterFRSignalsBus.BInvDCOnFR =
    MASTER_B.BInvDCOnFR_j;
  MASTER_Y.Global_b.InverterSignalsBus.InverterFRSignalsBus.BInvErrorFR =
    MASTER_B.BInvErrorFR_c;
  MASTER_Y.Global_b.InverterSignalsBus.InverterFRSignalsBus.BInvOnFR =
    MASTER_B.BInvOnFR_b;
  MASTER_Y.Global_b.InverterSignalsBus.InverterFRSignalsBus.BInvDCQuitInvOnFR =
    MASTER_B.BInvDCQuitInvOnFR_l;
  MASTER_Y.Global_b.InverterSignalsBus.InverterFRSignalsBus.BInvQuitInvOnFR =
    MASTER_B.BInvQuitInvOnFR_c;
  MASTER_Y.Global_b.InverterSignalsBus.InverterFRSignalsBus.BInvSysReadyFR =
    MASTER_B.BInvSysReadyFR_d;
  MASTER_Y.Global_b.InverterSignalsBus.InverterFRSignalsBus.BInvWarnFR =
    MASTER_B.BInvWarnFR_h;
  MASTER_Y.Global_b.InverterSignalsBus.InverterFRSignalsBus.MMotorMeasuredFR =
    MASTER_B.MMotorMeasuredFR_d;
  MASTER_Y.Global_b.InverterSignalsBus.InverterFRSignalsBus.NInvDTCFR =
    MASTER_B.NInvDTCFR_a;
  MASTER_Y.Global_b.InverterSignalsBus.InverterFRSignalsBus.TMotorFR =
    MASTER_B.TMotorFR_g;
  MASTER_Y.Global_b.InverterSignalsBus.InverterFRSignalsBus.VDCInvFR =
    MASTER_B.VDCInvFR_p;
  MASTER_Y.Global_b.InverterSignalsBus.InverterFRSignalsBus.TInvFR =
    MASTER_B.TInvFR_i;

  /* BusCreator generated from: '<Root>/Global' */
  MASTER_Y.Global_b.WheelSpeedsBus.vWheelRL = MASTER_B.vWheelRL_k;
  MASTER_Y.Global_b.WheelSpeedsBus.vWheelRR = MASTER_B.vWheelRR_f;
  MASTER_Y.Global_b.WheelSpeedsBus.vWheelFL = MASTER_B.vWheelFL_g;
  MASTER_Y.Global_b.WheelSpeedsBus.vWheelFR = MASTER_B.vWheelFR_n;

  /* BusCreator generated from: '<Root>/Global' */
  MASTER_Y.Global_b.SensorSignalsBus.pBrakeF = MASTER_B.pBrakeF_p;
  MASTER_Y.Global_b.SensorSignalsBus.pBrakeR = MASTER_B.pBrakeR_b;
  MASTER_Y.Global_b.SensorSignalsBus.VDamperPotentiometerFL =
    MASTER_B.VDamperPotentiometerFL_i;
  MASTER_Y.Global_b.SensorSignalsBus.VDamperPotentiometerFR =
    MASTER_B.VDamperPotentiometerFR_h;
  MASTER_Y.Global_b.SensorSignalsBus.NDisplayNumberDDU7 =
    MASTER_B.NDisplayNumberDDU7_k;
  MASTER_Y.Global_b.SensorSignalsBus.VSteeringAngle = MASTER_B.VSteeringAngle_a;
  MASTER_Y.Global_b.SensorSignalsBus.VThrottlePedal1 =
    MASTER_B.VThrottlePedal1_f;
  MASTER_Y.Global_b.SensorSignalsBus.VThrottlePedal2 =
    MASTER_B.VThrottlePedal2_o;
  MASTER_Y.Global_b.SensorSignalsBus.BSteeringWheelButton1 =
    MASTER_B.BSteeringWheelButton1_h;
  MASTER_Y.Global_b.SensorSignalsBus.BSteeringWheelButton2 =
    MASTER_B.BSteeringWheelButton2_n;
  MASTER_Y.Global_b.SensorSignalsBus.BSteeringWheelButton3 =
    MASTER_B.BSteeringWheelButton3_b;
  MASTER_Y.Global_b.SensorSignalsBus.BSteeringWheelButton4 =
    MASTER_B.BSteeringWheelButton4_e;
  MASTER_Y.Global_b.SensorSignalsBus.BSteeringWheelButton5 =
    MASTER_B.BSteeringWheelButton5_p;
  MASTER_Y.Global_b.SensorSignalsBus.BSteeringWheelButton6 =
    MASTER_B.BSteeringWheelButton6_c;
  MASTER_Y.Global_b.SensorSignalsBus.BSteeringWheelButton7 =
    MASTER_B.BSteeringWheelButton7_j;
  MASTER_Y.Global_b.SensorSignalsBus.BSteeringWheelButton8 =
    MASTER_B.BSteeringWheelButton8_k;
  MASTER_Y.Global_b.SensorSignalsBus.VRegenPaddle1 = MASTER_B.VRegenPaddle1_o;
  MASTER_Y.Global_b.SensorSignalsBus.VRegenPaddle2 = MASTER_B.VRegenPaddle2_b;
  MASTER_Y.Global_b.SensorSignalsBus.C1P01_Status = MASTER_B.C1P01_Status_k;
  MASTER_Y.Global_b.SensorSignalsBus.C1P02_Status = MASTER_B.C1P02_Status_a5;
  MASTER_Y.Global_b.SensorSignalsBus.C1P03_Status = MASTER_B.C1P03_Status_g;
  MASTER_Y.Global_b.SensorSignalsBus.C1P04_Status = MASTER_B.C1P04_Status_o;
  MASTER_Y.Global_b.SensorSignalsBus.C1P07_Status = MASTER_B.C1P07_Status_i;
  MASTER_Y.Global_b.SensorSignalsBus.C1P11_Status = MASTER_B.C1P11_Status_k;
  MASTER_Y.Global_b.SensorSignalsBus.C1P12_Status = MASTER_B.C1P12_Status_g;
  MASTER_Y.Global_b.SensorSignalsBus.C1P13_Status = MASTER_B.C1P13_Status_k;
  MASTER_Y.Global_b.SensorSignalsBus.C1P25_Status = MASTER_B.C1P25_Status_a;
  MASTER_Y.Global_b.SensorSignalsBus.C1P26_Status = MASTER_B.C1P26_Status_m;
  MASTER_Y.Global_b.SensorSignalsBus.C1P28_Status = MASTER_B.C1P28_Status_m;
  MASTER_Y.Global_b.SensorSignalsBus.C1P30_Status = MASTER_B.C1P30_Status_d;
  MASTER_Y.Global_b.SensorSignalsBus.C1P31_Status = MASTER_B.C1P31_Status_j;
  MASTER_Y.Global_b.SensorSignalsBus.C1P33_Status = MASTER_B.C1P33_Status_c;
  MASTER_Y.Global_b.SensorSignalsBus.C1P34_Status = MASTER_B.C1P34_Status_l;
  MASTER_Y.Global_b.SensorSignalsBus.C1P36_Status = MASTER_B.C1P36_Status_c;
  MASTER_Y.Global_b.SensorSignalsBus.C1P37_Status = MASTER_B.C1P37_Status_i;
  MASTER_Y.Global_b.SensorSignalsBus.C1P38_Status = MASTER_B.C1P38_Status_mf;
  MASTER_Y.Global_b.SensorSignalsBus.C2P01_Status = MASTER_B.C2P01_Status_i;
  MASTER_Y.Global_b.SensorSignalsBus.C2P02_Status = MASTER_B.C2P02_Status_h;
  MASTER_Y.Global_b.SensorSignalsBus.C2P03_Status = MASTER_B.C2P03_Status_h;
  MASTER_Y.Global_b.SensorSignalsBus.C2P04_Status = MASTER_B.C2P04_Status_o;
  MASTER_Y.Global_b.SensorSignalsBus.C2P05_Status = MASTER_B.C2P05_Status_mh;
  MASTER_Y.Global_b.SensorSignalsBus.C2P13_Status = MASTER_B.C2P13_Status_p;
  MASTER_Y.Global_b.SensorSignalsBus.C2P25_Status = MASTER_B.C2P25_Status_a;
  MASTER_Y.Global_b.SensorSignalsBus.C2P26_Status = MASTER_B.C2P26_Status_b;
  MASTER_Y.Global_b.SensorSignalsBus.C2P27_Status = MASTER_B.C2P27_Status_k;
  MASTER_Y.Global_b.SensorSignalsBus.C2P28_Status = MASTER_B.C2P28_Status_f;
  MASTER_Y.Global_b.SensorSignalsBus.C2P29_Status = MASTER_B.C2P29_Status_n;
  MASTER_Y.Global_b.SensorSignalsBus.C2P30_Status = MASTER_B.C2P30_Status_e;
  MASTER_Y.Global_b.SensorSignalsBus.C2P31_Status = MASTER_B.C2P31_Status_b;
  MASTER_Y.Global_b.SensorSignalsBus.C2P33_Status = MASTER_B.C2P33_Status_m;
  MASTER_Y.Global_b.SensorSignalsBus.C1P16_Digital = MASTER_B.C1P16_Digital_e;
  MASTER_Y.Global_b.SensorSignalsBus.C1P17_Digital = MASTER_B.C1P17_Digital_m;
  MASTER_Y.Global_b.SensorSignalsBus.C2P17_Digital = MASTER_B.C2P17_Digital_m;
  MASTER_Y.Global_b.SensorSignalsBus.C2P18_Digital = MASTER_B.C2P18_Digital_f;
  MASTER_Y.Global_b.SensorSignalsBus.C2P35_Status = MASTER_B.C2P35_Status_k;
  MASTER_Y.Global_b.SensorSignalsBus.C2P36_Status = MASTER_B.C2P36_Status_o;
  MASTER_Y.Global_b.SensorSignalsBus.C2P37_Status = MASTER_B.C2P37_Status_h;
  MASTER_Y.Global_b.SensorSignalsBus.C2P38_Status = MASTER_B.C2P38_Status_d;
  MASTER_Y.Global_b.SensorSignalsBus.ILVSystem = MASTER_B.ILVSystem_p;
  MASTER_Y.Global_b.SensorSignalsBus.TLVSystem = MASTER_B.TLVSystem_f;
  MASTER_Y.Global_b.SensorSignalsBus.VLVSystem = MASTER_B.VLVSystem_e;
  MASTER_Y.Global_b.SensorSignalsBus.VDamperPotentiometerRL =
    MASTER_B.VDamperPotentiometerRL_i;
  MASTER_Y.Global_b.SensorSignalsBus.VDamperPotentiometerRR =
    MASTER_B.VDamperPotentiometerRR_o;

  /* BusCreator generated from: '<Root>/Global' */
  MASTER_Y.Global_b.GPSIMUSignalsBus.vLongitudinalOXTSIMU =
    MASTER_B.vLongitudinalOXTSIMU_d;
  MASTER_Y.Global_b.GPSIMUSignalsBus.gLateralOXTSIMU =
    MASTER_B.gLateralOXTSIMU_l;
  MASTER_Y.Global_b.GPSIMUSignalsBus.gLongitudinalOXTSIMU =
    MASTER_B.gLongitudinalOXTSIMU_f;
  MASTER_Y.Global_b.GPSIMUSignalsBus.nYawRateOXTSIMU =
    MASTER_B.nYawRateOXTSIMU_fe;

  /* BusCreator generated from: '<Root>/Global' */
  MASTER_Y.Global_b.BMSSignalsBus.VCellMax = MASTER_B.VCellMax_m;
  MASTER_Y.Global_b.BMSSignalsBus.VCellDelta = MASTER_B.VCellDelta_b;
  MASTER_Y.Global_b.BMSSignalsBus.VCellMin = MASTER_B.VCellMin_e;
  MASTER_Y.Global_b.BMSSignalsBus.VCellAverage = MASTER_B.VCellAverage_d;
  MASTER_Y.Global_b.BMSSignalsBus.TCellMax = MASTER_B.TCellMax_h;
  MASTER_Y.Global_b.BMSSignalsBus.NBMSDLC = MASTER_B.NBMSDLC_k;
  MASTER_Y.Global_b.BMSSignalsBus.TCellMin = MASTER_B.TCellMin_d;
  MASTER_Y.Global_b.BMSSignalsBus.IBMSHallEffect = MASTER_B.IBMSHallEffect_k;
  MASTER_Y.Global_b.BMSSignalsBus.VDCAccumulator = MASTER_B.VDCAccumulator_j;
  MASTER_Y.Global_b.BMSSignalsBus.RCellAverage = MASTER_B.RCellAverage_p;
  MASTER_Y.Global_b.BMSSignalsBus.BBalancingActive =
    MASTER_B.BBalancingActive_nc;
  MASTER_Y.Global_b.BMSSignalsBus.BBMSP0A0C = MASTER_B.BBMSP0A0C_n;
  MASTER_Y.Global_b.BMSSignalsBus.BBMSP0A0E = MASTER_B.BBMSP0A0E_j;
  MASTER_Y.Global_b.BMSSignalsBus.BBMSP0A10 = MASTER_B.BBMSP0A10_l;
  MASTER_Y.Global_b.BMSSignalsBus.BBMSP0A80 = MASTER_B.BBMSP0A80_b;
  MASTER_Y.Global_b.BMSSignalsBus.BBMSP0AC0 = MASTER_B.BBMSP0AC0_a;
  MASTER_Y.Global_b.BMSSignalsBus.BBMSP0AFA = MASTER_B.BBMSP0AFA_e;
  MASTER_Y.Global_b.BMSSignalsBus.IIVTS = MASTER_B.IIVTS_l;

  /* S-Function (fcgen): '<Root>/Function-Call Generator1' */
  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.nMotorRL_dyg = MASTER_B.nMotorRL_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.NInvDTCRL_jcu = MASTER_B.NInvDTCRL_g;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.C2P26_Status_gap = MASTER_B.C2P26_Status_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.C2P27_Status_mzi = MASTER_B.C2P27_Status_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.C2P28_Status_i22 = MASTER_B.C2P28_Status_f;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.C2P29_Status_iho = MASTER_B.C2P29_Status_n;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.C2P30_Status_iuz = MASTER_B.C2P30_Status_e;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.C2P31_Status_edj = MASTER_B.C2P31_Status_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.C2P33_Status_j4m = MASTER_B.C2P33_Status_m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.C1P16_Digital_fw2 = MASTER_B.C1P16_Digital_e;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.C1P17_Digital_hrt = MASTER_B.C1P17_Digital_m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.C2P17_Digital_ddm = MASTER_B.C2P17_Digital_m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.TMotorRL_mnc = MASTER_B.TMotorRL_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.C2P18_Digital_obj = MASTER_B.C2P18_Digital_f;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.C2P35_Status_df2 = MASTER_B.C2P35_Status_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.C2P36_Status_fjk = MASTER_B.C2P36_Status_o;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.C2P37_Status_nyp = MASTER_B.C2P37_Status_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.C2P38_Status_ckb = MASTER_B.C2P38_Status_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.ILVSystem_iwp = MASTER_B.ILVSystem_p;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.TLVSystem_ayy = MASTER_B.TLVSystem_f;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.VLVSystem_cht = MASTER_B.VLVSystem_e;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.VDamperPotentiometerRL_gbf = MASTER_B.VDamperPotentiometerRL_i;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.VDamperPotentiometerRR_pg3 = MASTER_B.VDamperPotentiometerRR_o;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.VDCInvRL_obw = MASTER_B.VDCInvRL_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.vLongitudinalOXTSIMU_frb = MASTER_B.vLongitudinalOXTSIMU_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.gLateralOXTSIMU_okc = MASTER_B.gLateralOXTSIMU_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.gLongitudinalOXTSIMU_ifc = MASTER_B.gLongitudinalOXTSIMU_f;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.nYawRateOXTSIMU_f31 = MASTER_B.nYawRateOXTSIMU_fe;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.VCellMax_jv4 = MASTER_B.VCellMax_m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.VCellDelta_c2a = MASTER_B.VCellDelta_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.VCellMin_oxh = MASTER_B.VCellMin_e;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.VCellAverage_frs = MASTER_B.VCellAverage_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.TCellMax_n1u = MASTER_B.TCellMax_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.NBMSDLC_m3i = MASTER_B.NBMSDLC_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.TInvRL_jia = MASTER_B.TInvRL_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.TCellMin_etn = MASTER_B.TCellMin_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.IBMSHallEffect_bcz = MASTER_B.IBMSHallEffect_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.VDCAccumulator_gbt = MASTER_B.VDCAccumulator_j;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.RCellAverage_fql = MASTER_B.RCellAverage_p;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.BBalancingActive_nfy = MASTER_B.BBalancingActive_nc;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.BBMSP0A0C_inm = MASTER_B.BBMSP0A0C_n;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.BBMSP0A0E_nao = MASTER_B.BBMSP0A0E_j;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.BBMSP0A10_gso = MASTER_B.BBMSP0A10_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.BBMSP0A80_a0m = MASTER_B.BBMSP0A80_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.BBMSP0AC0_mlo = MASTER_B.BBMSP0AC0_a;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.nMotorFL_kcv = MASTER_B.nMotorFL_o;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.BBMSP0AFA_bzt = MASTER_B.BBMSP0AFA_e;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.IIVTS_ozl = MASTER_B.IIVTS_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.rThrottlePedal_dxa = MASTER_B.rThrottlePedal_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.BThrottleError_gxnl = MASTER_B.BThrottleError_a;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.tThrottleError_mnm = MASTER_B.tThrottleError_o;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.BBrakeError_jnoj = MASTER_B.BBrakeError_a;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.tBrakeError_o3t = MASTER_B.tBrakeError_f;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.BBrakeOn_pz1 = MASTER_B.BBrakeOn_ph;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.pBrakeMax_d5c = MASTER_B.pBrakeMax_d2;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.BPedalOverlap_egmb = MASTER_B.BPedalOverlap_m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.BInvDCOnFL_akajd2f = MASTER_B.BInvDCOnFL_o;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.tPedalOverlap_pfo = MASTER_B.tPedalOverlap_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.BAppsOK_oea0 = MASTER_B.BAppsOK_m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.tAppsTimer_kbm = MASTER_B.tAppsTimer_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.rSteeringAngle_hif0 = MASTER_B.rSteeringAngle_e;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.aSteeringAngle_p30 = MASTER_B.aSteeringAngle_c;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.rRegenPaddle_getj = MASTER_B.rRegenPaddle_n;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.BRegenOn_ch3 = MASTER_B.BRegenOn_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.BBrakeLight_gjh3 = MASTER_B.BBrakeLight_n;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.xDamperFL_eg5 = MASTER_B.xDamperFL_g;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.xDamperFR_f5l = MASTER_B.xDamperFR_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.BInvErrorFL_lsp = MASTER_B.BInvErrorFL_g;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.xDamperRL_db0 = MASTER_B.xDamperRL_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.xDamperRR_jw0 = MASTER_B.xDamperRR_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.BDamperErrorFL_cn5 = MASTER_B.BDamperErrorFL_g;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.BDamperErrorFR_h1l = MASTER_B.BDamperErrorFR_m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.BDamperErrorRL_n2j = MASTER_B.BDamperErrorRL_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.BDamperErrorRR_k1e = MASTER_B.BDamperErrorRR_c;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.vChassis_eyfm = MASTER_B.vChassis_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.sChassis_lq1 = MASTER_B.sChassis_m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.sEMS1000m_bwf = MASTER_B.sEMS1000m_c;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.BEMS1000mPoint_nbk = MASTER_B.BEMS1000mPoint_g;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.BInvOnFL_aycnruk = MASTER_B.BInvOnFL_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.BEMS995mPoint_fpc = MASTER_B.BEMS995mPoint_g;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.BTorqueVectoringActivated_jzk = MASTER_B.BTorqueVectoringActivated_c;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.NThrottleMap_cgk = MASTER_B.NThrottleMap_ce;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.PDischarge_bxs = MASTER_B.PDischarge_n;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.BEMSActivated_eiv = MASTER_B.BEMSActivated_i;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.PRegen_cub = MASTER_B.PRegen_o;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.rTorqueSplit_lt2 = MASTER_B.rTorqueSplit_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.PEngineBraking_iea = MASTER_B.PEngineBraking_m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.BSpinningModelActivated_mab = MASTER_B.BSpinningModelActivated_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.NTractionControlKpSelector_jml =
    MASTER_B.NTractionControlKpSelector_m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.BInvDCQuitInvOnFL_l51 = MASTER_B.BInvDCQuitInvOnFL_i;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.BTractionControlActivated_jaz = MASTER_B.BTractionControlActivated_n;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.rTorqueVectoringMultiplier_lqg =
    MASTER_B.rTorqueVectoringMultiplier_p;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.NPowerControllerKpSelector_in3 =
    MASTER_B.NPowerControllerKpSelector_a;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.NTorqueSplitSpeedSelector_bhx = MASTER_B.NTorqueSplitSpeedSelector_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.BAccumulatorFanOn_p3q = MASTER_B.BAccumulatorFanOn_c;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.BErrorReset_eye = MASTER_B.BErrorReset_a;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.BReadyToDriveButton_gbb = MASTER_B.BReadyToDriveButton_g2;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.NModeNumberDisplay5_c05 = MASTER_B.NModeNumberDisplay5_j;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.NModeNumberDisplay6_otn = MASTER_B.NModeNumberDisplay6_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.TMotorMax_bas = MASTER_B.TMotorMax_j;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.BInvQuitInvOnFL_lwh = MASTER_B.BInvQuitInvOnFL_i;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.TInvMax_mh2 = MASTER_B.TInvMax_c;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.PActual_myvv = MASTER_B.PActual_a;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.rSOC_dojw = MASTER_B.rSOC_i;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.rSOE_chs = MASTER_B.rSOE_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.BEncoderErrorRear_pi5 = MASTER_B.BEncoderErrorRear_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.BEncoderErrorFront_iuh = MASTER_B.BEncoderErrorFront_iu5;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.rCoolingFansDuty_iv0 = MASTER_B.rCoolingFansDuty_a;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.rCoolingPumpsDuty_nnm = MASTER_B.rCoolingPumpsDuty_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.BAccumulatorFanDuty_kxp = MASTER_B.BAccumulatorFanDuty_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.BInvLVOn_aew = MASTER_B.BInvLVOn_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.BInvDCOnRL_jrweci4 = MASTER_B.BInvDCOnRL_e;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.BInvSysReadyFL_pur = MASTER_B.BInvSysReadyFL_j;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.rThrottlePedal1_gtl = MASTER_B.rThrottlePedal1_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.rThrottlePedal2_mqi = MASTER_B.rThrottlePedal2_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.NCarState_hou4 = MASTER_B.NCarState_n;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.BReadyToDriveBuzzer_i11 = MASTER_B.BReadyToDriveBuzzer_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.BReadyToDrive_cdg = MASTER_B.BReadyToDrive_c0;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.NBMSState_jbdk = MASTER_B.NBMSState_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.NInvState_dos0 = MASTER_B.NInvState_g;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.BHVOn_evi = MASTER_B.BHVOn_e1;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.BInvOnRL_osz = MASTER_B.BInvOnRL_i;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.BInvOnRR_bzd = MASTER_B.BInvOnRR_p;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.BInvWarnFL_log = MASTER_B.BInvWarnFL_p;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.BInvOnFL_ayc = MASTER_B.BInvOnFL_f;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.BInvOnFR_gif = MASTER_B.BInvOnFR_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.BInvDCOnRL_jrw = MASTER_B.BInvDCOnRL_i;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.BInvDCOnRR_fch = MASTER_B.BInvDCOnRR_o;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.BInvDCOnFL_aka = MASTER_B.BInvDCOnFL_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.BInvDCOnFR_az5 = MASTER_B.BInvDCOnFR_n;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.BInvEnableRL_it3 = MASTER_B.BInvEnableRL_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.BInvEnableRR_ere = MASTER_B.BInvEnableRR_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.BInvEnableFL_hug = MASTER_B.BInvEnableFL_n;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.BInvEnableFR_guy = MASTER_B.BInvEnableFR_p;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.MMotorMeasuredFL_amc = MASTER_B.MMotorMeasuredFL_c;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.BInvErrorResetRL_jk0 = MASTER_B.BInvErrorResetRL_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.BInvErrorResetRR_afc = MASTER_B.BInvErrorResetRR_j;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.BInvErrorResetFL_iup = MASTER_B.BInvErrorResetFL_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.BInvErrorResetFR_amp = MASTER_B.BInvErrorResetFR_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.MTargetTorqueRL_m4t = MASTER_B.MTargetTorqueRL_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.MTargetTorqueRR_oom = MASTER_B.MTargetTorqueRR_oi;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.MTargetTorqueFL_jmh = MASTER_B.MTargetTorqueFL_p;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.MTargetTorqueFR_n4r = MASTER_B.MTargetTorqueFR_o;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.MTorqueLimitNegativeRL_aqi = MASTER_B.MTorqueLimitNegativeRL_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.MTorqueLimitNegativeRR_nsa = MASTER_B.MTorqueLimitNegativeRR_c;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.NInvDTCFL_jy2 = MASTER_B.NInvDTCFL_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.MTorqueLimitNegativeFL_ds4 = MASTER_B.MTorqueLimitNegativeFL_n;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.MTorqueLimitNegativeFR_fqx = MASTER_B.MTorqueLimitNegativeFR_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.MTorqueLimitPositiveRL_pzu = MASTER_B.MTorqueLimitPositiveRL_a;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.MTorqueLimitPositiveRR_d53 = MASTER_B.MTorqueLimitPositiveRR_n;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.MTorqueLimitPositiveFL_d2m = MASTER_B.MTorqueLimitPositiveFL_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.MTorqueLimitPositiveFR_hvv = MASTER_B.MTorqueLimitPositiveFR_f;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.BDischargeAllowed_hcz = MASTER_B.BDischargeAllowed_c;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.rInvTemperatureDerate_ofsg = MASTER_B.rInvTemperatureDerate_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.rInvTemperatureDerateFR_ob5 = MASTER_B.rInvTemperatureDerateFR_e;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.rInvTemperatureDerateFL_jvj = MASTER_B.rInvTemperatureDerateFL_g;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.TMotorFL_d45 = MASTER_B.TMotorFL_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.rInvTemperatureDerateRR_d33 = MASTER_B.rInvTemperatureDerateRR_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.rInvTemperatureDerateRL_dsq = MASTER_B.rInvTemperatureDerateRL_c;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.rMotorTemperatureDerate_gigq = MASTER_B.rMotorTemperatureDerate_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.rMotorTemperatureDerateFR_dio = MASTER_B.rMotorTemperatureDerateFR_i;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.rMotorTemperatureDerateFL_jip = MASTER_B.rMotorTemperatureDerateFL_f;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.rMotorTemperatureDerateRR_aaij = MASTER_B.rMotorTemperatureDerateRR_a;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.rMotorTemperatureDerateRL_eln = MASTER_B.rMotorTemperatureDerateRL_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.rTSTemperatureDerateFR_el2 = MASTER_B.rTSTemperatureDerateFR_o;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.rTSTemperatureDerateFL_nvf = MASTER_B.rTSTemperatureDerateFL_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.rTSTemperatureDerateRR_bsp = MASTER_B.rTSTemperatureDerateRR_o;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.VDCInvFL_cul = MASTER_B.VDCInvFL_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.rTSTemperatureDerateRL_ksy = MASTER_B.rTSTemperatureDerateRL_e;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.rHighCellTemperatureDischar_dps =
    MASTER_B.rHighCellTemperatureDischarge_o;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.rHighCellTemperatureRegenDe_olj =
    MASTER_B.rHighCellTemperatureRegenDera_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.rLowCellVoltageDischargeDer_gkc =
    MASTER_B.rLowCellVoltageDischargeDerat_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.rSOCDischargeDerate_bfw = MASTER_B.rSOCDischargeDerate_i;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.rSOCRegenDerate_ct2 = MASTER_B.rSOCRegenDerate_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.rSpeedRegenDerate_nsgv = MASTER_B.rSpeedRegenDerate_n4;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.rDischargeDerate_k2m3 = MASTER_B.rDischargeDerate_g;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.rRegenDerate_lmpj = MASTER_B.rRegenDerate_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.MDriverDischargeRequested_lcue = MASTER_B.MDriverDischargeRequested_a;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.TInvFL_die = MASTER_B.TInvFL_j;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.MDriverRegenRequested_jivd = MASTER_B.MDriverRegenRequested_m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.MDischargeLimited_cj1p = MASTER_B.MDischargeLimited;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.MRegenLimited_idug = MASTER_B.MRegenLimited;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.PPowerControllerRequested_jdlf = MASTER_B.PPowerControllerRequested;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.MPowerControllerRequested_ja3c = MASTER_B.MPowerControllerRequested;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.PPowerControllerProportion_kqr2 =
    MASTER_B.PPowerControllerProportionalTer;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.PPowerControllerIntegralTe_dbkd =
    MASTER_B.PPowerControllerIntegralTerm;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.PDischargeLimited_id4n = MASTER_B.PDischargeLimited;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.MTotalRequested_iu50 = MASTER_B.MTotalRequested_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.MTotalEMSRequested_mo3h = MASTER_B.MTotalEMSRequested;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.nMotorRR_myi = MASTER_B.nMotorRR_o;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.rSOCTargetError_c0re = MASTER_B.rSOCTargetError;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.rSOETargetError_ajbo = MASTER_B.rSOETargetError;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.nYawRateErrorActual_isfy = MASTER_B.nYawRateErrorActual;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.BTorqueVectoringOK_f4yr = MASTER_B.BTorqueVectoringOK;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.MTorqueVectoringFL_bmpj = MASTER_B.MTorqueVectoringFL;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.MTorqueVectoringFR_bfmv = MASTER_B.MTorqueVectoringFR;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.MTorqueVectoringRL_m4yg = MASTER_B.MTorqueVectoringRL;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.MTorqueVectoringRR_f34b = MASTER_B.MTorqueVectoringRR;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.rSplitRear_kpyx = MASTER_B.rSplitRear;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.MTorqueDistributionFL_dc2i = MASTER_B.MTorqueDistributionFL;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.BInvDCOnRR_fchgb2p = MASTER_B.BInvDCOnRR_o4;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.MTorqueDistributionFR_jsfo = MASTER_B.MTorqueDistributionFR;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.MTorqueDistributionRL_no0z = MASTER_B.MTorqueDistributionRL;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.MTorqueDistributionRR_odzd = MASTER_B.MTorqueDistributionRR;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.rSlipRatioOptimal_kzcl = MASTER_B.rSlipRatioOptimal;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.NTractionControlMultiplier_cgsl =
    MASTER_B.NTractionControlMultiplierFL;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.NTractionControlMultiplier_ppzi =
    MASTER_B.NTractionControlMultiplierFR;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.NTractionControlMultiplier_pd4f =
    MASTER_B.NTractionControlMultiplierRL;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.NTractionControlMultiplier_gdgy =
    MASTER_B.NTractionControlMultiplierRR;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.NABSMultiplierFL_i3sf = MASTER_B.NABSMultiplierFL;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.NABSMultiplierFR_i0es = MASTER_B.NABSMultiplierFR;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.BInvErrorRR_gpt = MASTER_B.BInvErrorRR_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.NABSMultiplierRL_bbs5 = MASTER_B.NABSMultiplierRL;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.NABSMultiplierRR_p0to = MASTER_B.NABSMultiplierRR;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.rSlipRatioFLActual_jp44 = MASTER_B.rSlipRatioFLActual;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.rSlipRatioFRActual_lbpv = MASTER_B.rSlipRatioFRActual;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.rSlipRatioRLActual_otwa = MASTER_B.rSlipRatioRLActual;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.rSlipRatioRRActual_f4pn = MASTER_B.rSlipRatioRRActual;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.MTractionControlFLTotal_aqtd = MASTER_B.MTractionControlFLTotal;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.MTractionControlFRTotal_fg1y = MASTER_B.MTractionControlFRTotal;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.MTractionControlRLTotal_fbdt = MASTER_B.MTractionControlRLTotal;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.MTractionControlRRTotal_f1tf = MASTER_B.MTractionControlRRTotal;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.BInvErrorRL_h54 = MASTER_B.BInvErrorRL_c;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.BInvOnRR_bzdzxto = MASTER_B.BInvOnRR_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.MTractionControlFLFinal_icee = MASTER_B.MTractionControlFLFinal;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.MTractionControlFRFinal_b5c0 = MASTER_B.MTractionControlFRFinal;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.MTractionControlRLFinal_hesz = MASTER_B.MTractionControlRLFinal;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.MTractionControlRRFinal_f1jb = MASTER_B.MTractionControlRRFinal;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.MSpinningModelFL_nixo = MASTER_B.MSpinningModelFL;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.MSpinningModelFR_bdx4 = MASTER_B.MSpinningModelFR;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.MSpinningModelRL_afr1 = MASTER_B.MSpinningModelRL;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.MSpinningModelRR_fmde = MASTER_B.MSpinningModelRR;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.MFLFinal_pt0x = MASTER_B.MFLFinal;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.MFRFinal_gwfk = MASTER_B.MFRFinal;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.BInvDCQuitInvOnRR_lk3 = MASTER_B.BInvDCQuitInvOnRR_m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.MRLFinal_ai3o = MASTER_B.MRLFinal;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.MRRFinal_a2fx = MASTER_B.MRRFinal;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.MTotalFinal_k2qc = MASTER_B.MTotalFinal;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.BInvQuitInvOnRR_mjf = MASTER_B.BInvQuitInvOnRR_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.BInvSysReadyRR_cuw = MASTER_B.BInvSysReadyRR_e;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.BInvWarnRR_ily = MASTER_B.BInvWarnRR_m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.MMotorMeasuredRR_mxv = MASTER_B.MMotorMeasuredRR_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.NInvDTCRR_j2m = MASTER_B.NInvDTCRR_m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.TMotorRR_amm = MASTER_B.TMotorRR_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.VDCInvRR_nty = MASTER_B.VDCInvRR_o;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.TInvRR_jut = MASTER_B.TInvRR_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.BInvOnRL_oszezhv = MASTER_B.BInvOnRL_m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.nMotorFR_fhn = MASTER_B.nMotorFR_a;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.BInvDCOnFR_az50kzw = MASTER_B.BInvDCOnFR_j;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.BInvErrorFR_gus = MASTER_B.BInvErrorFR_c;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.BInvOnFR_gifo4l1 = MASTER_B.BInvOnFR_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.BInvDCQuitInvOnFR_m0q = MASTER_B.BInvDCQuitInvOnFR_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.BInvQuitInvOnFR_gbx = MASTER_B.BInvQuitInvOnFR_c;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.BInvSysReadyFR_im5 = MASTER_B.BInvSysReadyFR_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.BInvWarnFR_mxi = MASTER_B.BInvWarnFR_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.MMotorMeasuredFR_pii = MASTER_B.MMotorMeasuredFR_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.NInvDTCFR_jf5 = MASTER_B.NInvDTCFR_a;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.BInvDCQuitInvOnRL_gnj = MASTER_B.BInvDCQuitInvOnRL_a;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.TMotorFR_c05 = MASTER_B.TMotorFR_g;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.VDCInvFR_mvm = MASTER_B.VDCInvFR_p;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.TInvFR_foe = MASTER_B.TInvFR_i;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.vWheelRL_hmp = MASTER_B.vWheelRL_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.vWheelRR_apy = MASTER_B.vWheelRR_f;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.vWheelFL_n1y = MASTER_B.vWheelFL_g;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.vWheelFR_olm = MASTER_B.vWheelFR_n;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.pBrakeF_axi = MASTER_B.pBrakeF_p;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.pBrakeR_pxi = MASTER_B.pBrakeR_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.VDamperPotentiometerFL_on0 = MASTER_B.VDamperPotentiometerFL_i;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.BInvQuitInvOnRL_dc5 = MASTER_B.BInvQuitInvOnRL_g;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.VDamperPotentiometerFR_jug = MASTER_B.VDamperPotentiometerFR_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.NDisplayNumberDDU7_nzg = MASTER_B.NDisplayNumberDDU7_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.VSteeringAngle_bkv = MASTER_B.VSteeringAngle_a;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.VThrottlePedal1_bmt = MASTER_B.VThrottlePedal1_f;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.VThrottlePedal2_agz = MASTER_B.VThrottlePedal2_o;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.BSteeringWheelButton1_i0y = MASTER_B.BSteeringWheelButton1_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.BSteeringWheelButton2_lk5 = MASTER_B.BSteeringWheelButton2_n;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.BSteeringWheelButton3_ejo = MASTER_B.BSteeringWheelButton3_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.BSteeringWheelButton4_ozt = MASTER_B.BSteeringWheelButton4_e;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.BSteeringWheelButton5_o3d = MASTER_B.BSteeringWheelButton5_p;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.BInvSysReadyRL_muq = MASTER_B.BInvSysReadyRL_a;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.BSteeringWheelButton6_ndb = MASTER_B.BSteeringWheelButton6_c;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.BSteeringWheelButton7_idy = MASTER_B.BSteeringWheelButton7_j;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.BSteeringWheelButton8_nzd = MASTER_B.BSteeringWheelButton8_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.VRegenPaddle1_bos = MASTER_B.VRegenPaddle1_o;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.VRegenPaddle2_ajw = MASTER_B.VRegenPaddle2_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.C1P01_Status_m2f = MASTER_B.C1P01_Status_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.C1P02_Status_a2p = MASTER_B.C1P02_Status_a5;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.C1P03_Status_ivq = MASTER_B.C1P03_Status_g;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.C1P04_Status_aqm = MASTER_B.C1P04_Status_o;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.C1P07_Status_gmm = MASTER_B.C1P07_Status_i;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.BInvWarnRL_it5 = MASTER_B.BInvWarnRL_c;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.C1P11_Status_l13 = MASTER_B.C1P11_Status_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.C1P12_Status_hy1 = MASTER_B.C1P12_Status_g;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.C1P13_Status_cxp = MASTER_B.C1P13_Status_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.C1P25_Status_jtq = MASTER_B.C1P25_Status_a;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.C1P26_Status_gpv = MASTER_B.C1P26_Status_m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.C1P28_Status_fwl = MASTER_B.C1P28_Status_m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.C1P30_Status_jvz = MASTER_B.C1P30_Status_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.C1P31_Status_ism = MASTER_B.C1P31_Status_j;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.C1P33_Status_jxj = MASTER_B.C1P33_Status_c;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.C1P34_Status_bll = MASTER_B.C1P34_Status_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.MMotorMeasuredRL_ijj = MASTER_B.MMotorMeasuredRL_a;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.C1P36_Status_gbz = MASTER_B.C1P36_Status_c;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.C1P37_Status_ah4 = MASTER_B.C1P37_Status_i;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.C1P38_Status_mrl = MASTER_B.C1P38_Status_mf;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.C2P01_Status_bdi = MASTER_B.C2P01_Status_i;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.C2P02_Status_nzw = MASTER_B.C2P02_Status_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.C2P03_Status_mby = MASTER_B.C2P03_Status_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.C2P04_Status_nwd = MASTER_B.C2P04_Status_o;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.C2P05_Status_myr = MASTER_B.C2P05_Status_mh;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.C2P13_Status_jej = MASTER_B.C2P13_Status_p;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  MASTER_B.C2P25_Status_oc4 = MASTER_B.C2P25_Status_a;

  /* ModelReference generated from: '<Root>/SYSTEMS' */
  SYSTEMS(&MASTER_B.NInvDTCRL_jcu, &MASTER_B.TMotorRL_mnc,
          &MASTER_B.VDCInvRL_obw, &MASTER_B.TInvRL_jia, &MASTER_B.NInvDTCFL_jy2,
          &MASTER_B.TMotorFL_d45, &MASTER_B.TInvFL_die, &MASTER_B.NInvDTCRR_j2m,
          &MASTER_B.TMotorRR_amm, &MASTER_B.TInvRR_jut, &MASTER_B.NInvDTCFR_jf5,
          &MASTER_B.TMotorFR_c05, &MASTER_B.TInvFR_foe, &MASTER_B.vWheelRL_hmp,
          &MASTER_B.vWheelRR_apy, &MASTER_B.pBrakeF_axi, &MASTER_B.pBrakeR_pxi,
          &MASTER_B.VDamperPotentiometerFL_on0,
          &MASTER_B.VDamperPotentiometerFR_jug, &MASTER_B.NDisplayNumberDDU7_nzg,
          &MASTER_B.VSteeringAngle_bkv, &MASTER_B.VThrottlePedal1_bmt,
          &MASTER_B.VThrottlePedal2_agz, &MASTER_B.BSteeringWheelButton2_lk5,
          &MASTER_B.BSteeringWheelButton4_ozt,
          &MASTER_B.BSteeringWheelButton5_o3d,
          &MASTER_B.BSteeringWheelButton6_ndb,
          &MASTER_B.BSteeringWheelButton7_idy, &MASTER_B.VRegenPaddle1_bos,
          &MASTER_B.VRegenPaddle2_ajw, &MASTER_B.VDamperPotentiometerRL_gbf,
          &MASTER_B.VDamperPotentiometerRR_pg3,
          &MASTER_B.gLongitudinalOXTSIMU_ifc, &MASTER_B.TCellMax_n1u,
          &MASTER_B.VDCAccumulator_gbt, &MASTER_B.IIVTS_ozl,
          &MASTER_B.rThrottlePedal_k, &MASTER_B.BThrottleError_a,
          &MASTER_B.tThrottleError_o, &MASTER_B.BBrakeError_a,
          &MASTER_B.tBrakeError_f, &MASTER_B.BBrakeOn_ph, &MASTER_B.pBrakeMax_d2,
          &MASTER_B.BPedalOverlap_m, &MASTER_B.tPedalOverlap_h,
          &MASTER_B.BAppsOK_m, &MASTER_B.tAppsTimer_h,
          &MASTER_B.rSteeringAngle_e, &MASTER_B.aSteeringAngle_c,
          &MASTER_B.rRegenPaddle_n, &MASTER_B.BRegenOn_l,
          &MASTER_B.BBrakeLight_n, &MASTER_B.xDamperFL_g, &MASTER_B.xDamperFR_d,
          &MASTER_B.xDamperRL_b, &MASTER_B.xDamperRR_h,
          &MASTER_B.BDamperErrorFL_g, &MASTER_B.BDamperErrorFR_m,
          &MASTER_B.BDamperErrorRL_d, &MASTER_B.BDamperErrorRR_c,
          &MASTER_B.vChassis_d, &MASTER_B.sChassis_m, &MASTER_B.sEMS1000m_c,
          &MASTER_B.BEMS1000mPoint_g, &MASTER_B.BEMS995mPoint_g,
          &MASTER_B.BTorqueVectoringActivated_c, &MASTER_B.NThrottleMap_ce,
          &MASTER_B.PDischarge_n, &MASTER_B.BEMSActivated_i, &MASTER_B.PRegen_o,
          &MASTER_B.rTorqueSplit_b, &MASTER_B.PEngineBraking_m,
          &MASTER_B.BSpinningModelActivated_l,
          &MASTER_B.NTractionControlKpSelector_m,
          &MASTER_B.BTractionControlActivated_n,
          &MASTER_B.rTorqueVectoringMultiplier_p,
          &MASTER_B.NPowerControllerKpSelector_a,
          &MASTER_B.NTorqueSplitSpeedSelector_h, &MASTER_B.BAccumulatorFanOn_c,
          &MASTER_B.BErrorReset_a, &MASTER_B.BReadyToDriveButton_g2,
          &MASTER_B.NModeNumberDisplay5_j, &MASTER_B.NModeNumberDisplay6_k,
          &MASTER_B.TMotorMax_j, &MASTER_B.TInvMax_c, &MASTER_B.PActual_a,
          &MASTER_B.rSOC_i, &MASTER_B.rSOE_b, &MASTER_B.BEncoderErrorRear_d,
          &MASTER_B.BEncoderErrorFront_iu5, &MASTER_B.rCoolingFansDuty_a,
          &MASTER_B.rCoolingPumpsDuty_l, &MASTER_B.BAccumulatorFanDuty_d,
          &MASTER_B.BInvLVOn_l, &MASTER_B.rThrottlePedal1_k,
          &MASTER_B.rThrottlePedal2_b, &(MASTER_DW.SYSTEMS_InstanceData.rtb),
          &(MASTER_DW.SYSTEMS_InstanceData.rtdw));

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.nMotorRL_dy = MASTER_B.nMotorRL_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.NInvDTCRL_jc = MASTER_B.NInvDTCRL_g;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.C2P26_Status_ga = MASTER_B.C2P26_Status_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.C2P27_Status_mz = MASTER_B.C2P27_Status_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.C2P28_Status_i2 = MASTER_B.C2P28_Status_f;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.C2P29_Status_ih = MASTER_B.C2P29_Status_n;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.C2P30_Status_iu = MASTER_B.C2P30_Status_e;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.C2P31_Status_ed = MASTER_B.C2P31_Status_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.C2P33_Status_j4 = MASTER_B.C2P33_Status_m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.C1P16_Digital_fw = MASTER_B.C1P16_Digital_e;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.C1P17_Digital_hr = MASTER_B.C1P17_Digital_m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.C2P17_Digital_dd = MASTER_B.C2P17_Digital_m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.TMotorRL_mn = MASTER_B.TMotorRL_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.C2P18_Digital_ob = MASTER_B.C2P18_Digital_f;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.C2P35_Status_df = MASTER_B.C2P35_Status_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.C2P36_Status_fj = MASTER_B.C2P36_Status_o;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.C2P37_Status_ny = MASTER_B.C2P37_Status_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.C2P38_Status_ck = MASTER_B.C2P38_Status_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.ILVSystem_iw = MASTER_B.ILVSystem_p;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.TLVSystem_ay = MASTER_B.TLVSystem_f;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.VLVSystem_ch = MASTER_B.VLVSystem_e;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.VDamperPotentiometerRL_gb = MASTER_B.VDamperPotentiometerRL_i;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.VDamperPotentiometerRR_pg = MASTER_B.VDamperPotentiometerRR_o;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.VDCInvRL_ob = MASTER_B.VDCInvRL_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.vLongitudinalOXTSIMU_fr = MASTER_B.vLongitudinalOXTSIMU_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.gLateralOXTSIMU_ok = MASTER_B.gLateralOXTSIMU_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.gLongitudinalOXTSIMU_if = MASTER_B.gLongitudinalOXTSIMU_f;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.nYawRateOXTSIMU_f3 = MASTER_B.nYawRateOXTSIMU_fe;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.VCellMax_jv = MASTER_B.VCellMax_m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.VCellDelta_c2 = MASTER_B.VCellDelta_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.VCellMin_ox = MASTER_B.VCellMin_e;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.VCellAverage_fr = MASTER_B.VCellAverage_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.TCellMax_n1 = MASTER_B.TCellMax_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.NBMSDLC_m3 = MASTER_B.NBMSDLC_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.TInvRL_ji = MASTER_B.TInvRL_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.TCellMin_et = MASTER_B.TCellMin_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.IBMSHallEffect_bc = MASTER_B.IBMSHallEffect_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.VDCAccumulator_gb = MASTER_B.VDCAccumulator_j;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.RCellAverage_fq = MASTER_B.RCellAverage_p;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.BBalancingActive_nf = MASTER_B.BBalancingActive_nc;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.BBMSP0A0C_in = MASTER_B.BBMSP0A0C_n;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.BBMSP0A0E_na = MASTER_B.BBMSP0A0E_j;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.BBMSP0A10_gs = MASTER_B.BBMSP0A10_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.BBMSP0A80_a0 = MASTER_B.BBMSP0A80_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.BBMSP0AC0_ml = MASTER_B.BBMSP0AC0_a;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.nMotorFL_kc = MASTER_B.nMotorFL_o;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.BBMSP0AFA_bz = MASTER_B.BBMSP0AFA_e;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.IIVTS_oz = MASTER_B.IIVTS_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.rThrottlePedal_dx = MASTER_B.rThrottlePedal_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.BThrottleError_gxn = MASTER_B.BThrottleError_a;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.tThrottleError_mn = MASTER_B.tThrottleError_o;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.BBrakeError_jno = MASTER_B.BBrakeError_a;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.tBrakeError_o3 = MASTER_B.tBrakeError_f;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.BBrakeOn_pz = MASTER_B.BBrakeOn_ph;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.pBrakeMax_d5 = MASTER_B.pBrakeMax_d2;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.BPedalOverlap_egm = MASTER_B.BPedalOverlap_m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.BInvDCOnFL_akajd2 = MASTER_B.BInvDCOnFL_o;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.tPedalOverlap_pf = MASTER_B.tPedalOverlap_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.BAppsOK_oea = MASTER_B.BAppsOK_m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.tAppsTimer_kb = MASTER_B.tAppsTimer_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.rSteeringAngle_hif = MASTER_B.rSteeringAngle_e;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.aSteeringAngle_p3 = MASTER_B.aSteeringAngle_c;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.rRegenPaddle_get = MASTER_B.rRegenPaddle_n;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.BRegenOn_ch = MASTER_B.BRegenOn_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.BBrakeLight_gjh = MASTER_B.BBrakeLight_n;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.xDamperFL_eg = MASTER_B.xDamperFL_g;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.xDamperFR_f5 = MASTER_B.xDamperFR_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.BInvErrorFL_ls = MASTER_B.BInvErrorFL_g;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.xDamperRL_db = MASTER_B.xDamperRL_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.xDamperRR_jw = MASTER_B.xDamperRR_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.BDamperErrorFL_cn = MASTER_B.BDamperErrorFL_g;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.BDamperErrorFR_h1 = MASTER_B.BDamperErrorFR_m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.BDamperErrorRL_n2 = MASTER_B.BDamperErrorRL_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.BDamperErrorRR_k1 = MASTER_B.BDamperErrorRR_c;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.vChassis_eyf = MASTER_B.vChassis_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.sChassis_lq = MASTER_B.sChassis_m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.sEMS1000m_bw = MASTER_B.sEMS1000m_c;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.BEMS1000mPoint_nb = MASTER_B.BEMS1000mPoint_g;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.BInvOnFL_aycnru = MASTER_B.BInvOnFL_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.BEMS995mPoint_fp = MASTER_B.BEMS995mPoint_g;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.BTorqueVectoringActivated_jz = MASTER_B.BTorqueVectoringActivated_c;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.NThrottleMap_cg = MASTER_B.NThrottleMap_ce;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.PDischarge_bx = MASTER_B.PDischarge_n;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.BEMSActivated_ei = MASTER_B.BEMSActivated_i;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.PRegen_cu = MASTER_B.PRegen_o;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.rTorqueSplit_lt = MASTER_B.rTorqueSplit_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.PEngineBraking_ie = MASTER_B.PEngineBraking_m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.BSpinningModelActivated_ma = MASTER_B.BSpinningModelActivated_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.NTractionControlKpSelector_jm = MASTER_B.NTractionControlKpSelector_m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.BInvDCQuitInvOnFL_l5 = MASTER_B.BInvDCQuitInvOnFL_i;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.BTractionControlActivated_ja = MASTER_B.BTractionControlActivated_n;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.rTorqueVectoringMultiplier_lq = MASTER_B.rTorqueVectoringMultiplier_p;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.NPowerControllerKpSelector_in = MASTER_B.NPowerControllerKpSelector_a;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.NTorqueSplitSpeedSelector_bh = MASTER_B.NTorqueSplitSpeedSelector_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.BAccumulatorFanOn_p3 = MASTER_B.BAccumulatorFanOn_c;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.BErrorReset_ey = MASTER_B.BErrorReset_a;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.BReadyToDriveButton_gb = MASTER_B.BReadyToDriveButton_g2;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.NModeNumberDisplay5_c0 = MASTER_B.NModeNumberDisplay5_j;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.NModeNumberDisplay6_ot = MASTER_B.NModeNumberDisplay6_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.TMotorMax_ba = MASTER_B.TMotorMax_j;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.BInvQuitInvOnFL_lw = MASTER_B.BInvQuitInvOnFL_i;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.TInvMax_mh = MASTER_B.TInvMax_c;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.PActual_myv = MASTER_B.PActual_a;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.rSOC_doj = MASTER_B.rSOC_i;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.rSOE_ch = MASTER_B.rSOE_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.BEncoderErrorRear_pi = MASTER_B.BEncoderErrorRear_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.BEncoderErrorFront_iu = MASTER_B.BEncoderErrorFront_iu5;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.rCoolingFansDuty_iv = MASTER_B.rCoolingFansDuty_a;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.rCoolingPumpsDuty_nn = MASTER_B.rCoolingPumpsDuty_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.BAccumulatorFanDuty_kx = MASTER_B.BAccumulatorFanDuty_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.BInvLVOn_ae = MASTER_B.BInvLVOn_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.BInvDCOnRL_jrweci = MASTER_B.BInvDCOnRL_e;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.BInvSysReadyFL_pu = MASTER_B.BInvSysReadyFL_j;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.rThrottlePedal1_gt = MASTER_B.rThrottlePedal1_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.rThrottlePedal2_mq = MASTER_B.rThrottlePedal2_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.NCarState_hou = MASTER_B.NCarState_n;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.BReadyToDriveBuzzer_i1 = MASTER_B.BReadyToDriveBuzzer_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.BReadyToDrive_cd = MASTER_B.BReadyToDrive_c0;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.NBMSState_jbd = MASTER_B.NBMSState_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.NInvState_dos = MASTER_B.NInvState_g;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.BHVOn_ev = MASTER_B.BHVOn_e1;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.BInvOnRL_os = MASTER_B.BInvOnRL_i;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.BInvOnRR_bz = MASTER_B.BInvOnRR_p;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.BInvWarnFL_lo = MASTER_B.BInvWarnFL_p;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.BInvOnFL_ay = MASTER_B.BInvOnFL_f;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.BInvOnFR_gi = MASTER_B.BInvOnFR_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.BInvDCOnRL_jr = MASTER_B.BInvDCOnRL_i;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.BInvDCOnRR_fc = MASTER_B.BInvDCOnRR_o;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.BInvDCOnFL_ak = MASTER_B.BInvDCOnFL_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.BInvDCOnFR_az = MASTER_B.BInvDCOnFR_n;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.BInvEnableRL_it = MASTER_B.BInvEnableRL_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.BInvEnableRR_er = MASTER_B.BInvEnableRR_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.BInvEnableFL_hu = MASTER_B.BInvEnableFL_n;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.BInvEnableFR_gu = MASTER_B.BInvEnableFR_p;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.MMotorMeasuredFL_am = MASTER_B.MMotorMeasuredFL_c;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.BInvErrorResetRL_jk = MASTER_B.BInvErrorResetRL_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.BInvErrorResetRR_af = MASTER_B.BInvErrorResetRR_j;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.BInvErrorResetFL_iu = MASTER_B.BInvErrorResetFL_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.BInvErrorResetFR_am = MASTER_B.BInvErrorResetFR_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.MTargetTorqueRL_m4 = MASTER_B.MTargetTorqueRL_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.MTargetTorqueRR_oo = MASTER_B.MTargetTorqueRR_oi;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.MTargetTorqueFL_jm = MASTER_B.MTargetTorqueFL_p;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.MTargetTorqueFR_n4 = MASTER_B.MTargetTorqueFR_o;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.MTorqueLimitNegativeRL_aq = MASTER_B.MTorqueLimitNegativeRL_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.MTorqueLimitNegativeRR_ns = MASTER_B.MTorqueLimitNegativeRR_c;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.NInvDTCFL_jy = MASTER_B.NInvDTCFL_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.MTorqueLimitNegativeFL_ds = MASTER_B.MTorqueLimitNegativeFL_n;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.MTorqueLimitNegativeFR_fq = MASTER_B.MTorqueLimitNegativeFR_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.MTorqueLimitPositiveRL_pz = MASTER_B.MTorqueLimitPositiveRL_a;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.MTorqueLimitPositiveRR_d5 = MASTER_B.MTorqueLimitPositiveRR_n;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.MTorqueLimitPositiveFL_d2 = MASTER_B.MTorqueLimitPositiveFL_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.MTorqueLimitPositiveFR_hv = MASTER_B.MTorqueLimitPositiveFR_f;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.BDischargeAllowed_hc = MASTER_B.BDischargeAllowed_c;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.rInvTemperatureDerate_ofs = MASTER_B.rInvTemperatureDerate_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.rInvTemperatureDerateFR_ob = MASTER_B.rInvTemperatureDerateFR_e;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.rInvTemperatureDerateFL_jv = MASTER_B.rInvTemperatureDerateFL_g;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.TMotorFL_d4 = MASTER_B.TMotorFL_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.rInvTemperatureDerateRR_d3 = MASTER_B.rInvTemperatureDerateRR_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.rInvTemperatureDerateRL_ds = MASTER_B.rInvTemperatureDerateRL_c;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.rMotorTemperatureDerate_gig = MASTER_B.rMotorTemperatureDerate_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.rMotorTemperatureDerateFR_di = MASTER_B.rMotorTemperatureDerateFR_i;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.rMotorTemperatureDerateFL_ji = MASTER_B.rMotorTemperatureDerateFL_f;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.rMotorTemperatureDerateRR_aai = MASTER_B.rMotorTemperatureDerateRR_a;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.rMotorTemperatureDerateRL_el = MASTER_B.rMotorTemperatureDerateRL_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.rTSTemperatureDerateFR_el = MASTER_B.rTSTemperatureDerateFR_o;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.rTSTemperatureDerateFL_nv = MASTER_B.rTSTemperatureDerateFL_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.rTSTemperatureDerateRR_bs = MASTER_B.rTSTemperatureDerateRR_o;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.VDCInvFL_cu = MASTER_B.VDCInvFL_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.rTSTemperatureDerateRL_ks = MASTER_B.rTSTemperatureDerateRL_e;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.rHighCellTemperatureDischarg_dp =
    MASTER_B.rHighCellTemperatureDischarge_o;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.rHighCellTemperatureRegenDer_ol =
    MASTER_B.rHighCellTemperatureRegenDera_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.rLowCellVoltageDischargeDera_gk =
    MASTER_B.rLowCellVoltageDischargeDerat_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.rSOCDischargeDerate_bf = MASTER_B.rSOCDischargeDerate_i;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.rSOCRegenDerate_ct = MASTER_B.rSOCRegenDerate_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.rSpeedRegenDerate_nsg = MASTER_B.rSpeedRegenDerate_n4;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.rDischargeDerate_k2m = MASTER_B.rDischargeDerate_g;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.rRegenDerate_lmp = MASTER_B.rRegenDerate_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.MDriverDischargeRequested_lcu = MASTER_B.MDriverDischargeRequested_a;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.TInvFL_di = MASTER_B.TInvFL_j;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.MDriverRegenRequested_jiv = MASTER_B.MDriverRegenRequested_m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.MDischargeLimited_cj1 = MASTER_B.MDischargeLimited;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.MRegenLimited_idu = MASTER_B.MRegenLimited;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.PPowerControllerRequested_jdl = MASTER_B.PPowerControllerRequested;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.MPowerControllerRequested_ja3 = MASTER_B.MPowerControllerRequested;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.PPowerControllerProportiona_kqr =
    MASTER_B.PPowerControllerProportionalTer;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.PPowerControllerIntegralTer_dbk =
    MASTER_B.PPowerControllerIntegralTerm;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.PDischargeLimited_id4 = MASTER_B.PDischargeLimited;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.MTotalRequested_iu5 = MASTER_B.MTotalRequested_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.MTotalEMSRequested_mo3 = MASTER_B.MTotalEMSRequested;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.nMotorRR_my = MASTER_B.nMotorRR_o;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.rSOCTargetError_c0r = MASTER_B.rSOCTargetError;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.rSOETargetError_ajb = MASTER_B.rSOETargetError;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.nYawRateErrorActual_isf = MASTER_B.nYawRateErrorActual;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.BTorqueVectoringOK_f4y = MASTER_B.BTorqueVectoringOK;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.MTorqueVectoringFL_bmp = MASTER_B.MTorqueVectoringFL;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.MTorqueVectoringFR_bfm = MASTER_B.MTorqueVectoringFR;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.MTorqueVectoringRL_m4y = MASTER_B.MTorqueVectoringRL;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.MTorqueVectoringRR_f34 = MASTER_B.MTorqueVectoringRR;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.rSplitRear_kpy = MASTER_B.rSplitRear;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.MTorqueDistributionFL_dc2 = MASTER_B.MTorqueDistributionFL;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.BInvDCOnRR_fchgb2 = MASTER_B.BInvDCOnRR_o4;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.MTorqueDistributionFR_jsf = MASTER_B.MTorqueDistributionFR;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.MTorqueDistributionRL_no0 = MASTER_B.MTorqueDistributionRL;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.MTorqueDistributionRR_odz = MASTER_B.MTorqueDistributionRR;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.rSlipRatioOptimal_kzc = MASTER_B.rSlipRatioOptimal;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.NTractionControlMultiplierF_cgs =
    MASTER_B.NTractionControlMultiplierFL;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.NTractionControlMultiplierF_ppz =
    MASTER_B.NTractionControlMultiplierFR;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.NTractionControlMultiplierR_pd4 =
    MASTER_B.NTractionControlMultiplierRL;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.NTractionControlMultiplierR_gdg =
    MASTER_B.NTractionControlMultiplierRR;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.NABSMultiplierFL_i3s = MASTER_B.NABSMultiplierFL;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.NABSMultiplierFR_i0e = MASTER_B.NABSMultiplierFR;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.BInvErrorRR_gp = MASTER_B.BInvErrorRR_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.NABSMultiplierRL_bbs = MASTER_B.NABSMultiplierRL;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.NABSMultiplierRR_p0t = MASTER_B.NABSMultiplierRR;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.rSlipRatioFLActual_jp4 = MASTER_B.rSlipRatioFLActual;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.rSlipRatioFRActual_lbp = MASTER_B.rSlipRatioFRActual;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.rSlipRatioRLActual_otw = MASTER_B.rSlipRatioRLActual;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.rSlipRatioRRActual_f4p = MASTER_B.rSlipRatioRRActual;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.MTractionControlFLTotal_aqt = MASTER_B.MTractionControlFLTotal;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.MTractionControlFRTotal_fg1 = MASTER_B.MTractionControlFRTotal;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.MTractionControlRLTotal_fbd = MASTER_B.MTractionControlRLTotal;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.MTractionControlRRTotal_f1t = MASTER_B.MTractionControlRRTotal;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.BInvErrorRL_h5 = MASTER_B.BInvErrorRL_c;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.BInvOnRR_bzdzxt = MASTER_B.BInvOnRR_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.MTractionControlFLFinal_ice = MASTER_B.MTractionControlFLFinal;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.MTractionControlFRFinal_b5c = MASTER_B.MTractionControlFRFinal;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.MTractionControlRLFinal_hes = MASTER_B.MTractionControlRLFinal;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.MTractionControlRRFinal_f1j = MASTER_B.MTractionControlRRFinal;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.MSpinningModelFL_nix = MASTER_B.MSpinningModelFL;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.MSpinningModelFR_bdx = MASTER_B.MSpinningModelFR;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.MSpinningModelRL_afr = MASTER_B.MSpinningModelRL;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.MSpinningModelRR_fmd = MASTER_B.MSpinningModelRR;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.MFLFinal_pt0 = MASTER_B.MFLFinal;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.MFRFinal_gwf = MASTER_B.MFRFinal;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.BInvDCQuitInvOnRR_lk = MASTER_B.BInvDCQuitInvOnRR_m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.MRLFinal_ai3 = MASTER_B.MRLFinal;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.MRRFinal_a2f = MASTER_B.MRRFinal;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.MTotalFinal_k2q = MASTER_B.MTotalFinal;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.BInvQuitInvOnRR_mj = MASTER_B.BInvQuitInvOnRR_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.BInvSysReadyRR_cu = MASTER_B.BInvSysReadyRR_e;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.BInvWarnRR_il = MASTER_B.BInvWarnRR_m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.MMotorMeasuredRR_mx = MASTER_B.MMotorMeasuredRR_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.NInvDTCRR_j2 = MASTER_B.NInvDTCRR_m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.TMotorRR_am = MASTER_B.TMotorRR_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.VDCInvRR_nt = MASTER_B.VDCInvRR_o;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.TInvRR_ju = MASTER_B.TInvRR_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.BInvOnRL_oszezh = MASTER_B.BInvOnRL_m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.nMotorFR_fh = MASTER_B.nMotorFR_a;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.BInvDCOnFR_az50kz = MASTER_B.BInvDCOnFR_j;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.BInvErrorFR_gu = MASTER_B.BInvErrorFR_c;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.BInvOnFR_gifo4l = MASTER_B.BInvOnFR_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.BInvDCQuitInvOnFR_m0 = MASTER_B.BInvDCQuitInvOnFR_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.BInvQuitInvOnFR_gb = MASTER_B.BInvQuitInvOnFR_c;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.BInvSysReadyFR_im = MASTER_B.BInvSysReadyFR_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.BInvWarnFR_mx = MASTER_B.BInvWarnFR_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.MMotorMeasuredFR_pi = MASTER_B.MMotorMeasuredFR_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.NInvDTCFR_jf = MASTER_B.NInvDTCFR_a;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.BInvDCQuitInvOnRL_gn = MASTER_B.BInvDCQuitInvOnRL_a;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.TMotorFR_c0 = MASTER_B.TMotorFR_g;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.VDCInvFR_mv = MASTER_B.VDCInvFR_p;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.TInvFR_fo = MASTER_B.TInvFR_i;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.vWheelRL_hm = MASTER_B.vWheelRL_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.vWheelRR_ap = MASTER_B.vWheelRR_f;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.vWheelFL_n1 = MASTER_B.vWheelFL_g;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.vWheelFR_ol = MASTER_B.vWheelFR_n;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.pBrakeF_ax = MASTER_B.pBrakeF_p;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.pBrakeR_px = MASTER_B.pBrakeR_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.VDamperPotentiometerFL_on = MASTER_B.VDamperPotentiometerFL_i;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.BInvQuitInvOnRL_dc = MASTER_B.BInvQuitInvOnRL_g;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.VDamperPotentiometerFR_ju = MASTER_B.VDamperPotentiometerFR_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.NDisplayNumberDDU7_nz = MASTER_B.NDisplayNumberDDU7_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.VSteeringAngle_bk = MASTER_B.VSteeringAngle_a;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.VThrottlePedal1_bm = MASTER_B.VThrottlePedal1_f;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.VThrottlePedal2_ag = MASTER_B.VThrottlePedal2_o;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.BSteeringWheelButton1_i0 = MASTER_B.BSteeringWheelButton1_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.BSteeringWheelButton2_lk = MASTER_B.BSteeringWheelButton2_n;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.BSteeringWheelButton3_ej = MASTER_B.BSteeringWheelButton3_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.BSteeringWheelButton4_oz = MASTER_B.BSteeringWheelButton4_e;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.BSteeringWheelButton5_o3 = MASTER_B.BSteeringWheelButton5_p;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.BInvSysReadyRL_mu = MASTER_B.BInvSysReadyRL_a;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.BSteeringWheelButton6_nd = MASTER_B.BSteeringWheelButton6_c;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.BSteeringWheelButton7_id = MASTER_B.BSteeringWheelButton7_j;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.BSteeringWheelButton8_nz = MASTER_B.BSteeringWheelButton8_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.VRegenPaddle1_bo = MASTER_B.VRegenPaddle1_o;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.VRegenPaddle2_aj = MASTER_B.VRegenPaddle2_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.C1P01_Status_m2 = MASTER_B.C1P01_Status_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.C1P02_Status_a2 = MASTER_B.C1P02_Status_a5;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.C1P03_Status_iv = MASTER_B.C1P03_Status_g;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.C1P04_Status_aq = MASTER_B.C1P04_Status_o;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.C1P07_Status_gm = MASTER_B.C1P07_Status_i;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.BInvWarnRL_it = MASTER_B.BInvWarnRL_c;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.C1P11_Status_l1 = MASTER_B.C1P11_Status_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.C1P12_Status_hy = MASTER_B.C1P12_Status_g;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.C1P13_Status_cx = MASTER_B.C1P13_Status_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.C1P25_Status_jt = MASTER_B.C1P25_Status_a;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.C1P26_Status_gp = MASTER_B.C1P26_Status_m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.C1P28_Status_fw = MASTER_B.C1P28_Status_m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.C1P30_Status_jv = MASTER_B.C1P30_Status_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.C1P31_Status_is = MASTER_B.C1P31_Status_j;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.C1P33_Status_jx = MASTER_B.C1P33_Status_c;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.C1P34_Status_bl = MASTER_B.C1P34_Status_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.MMotorMeasuredRL_ij = MASTER_B.MMotorMeasuredRL_a;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.C1P36_Status_gb = MASTER_B.C1P36_Status_c;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.C1P37_Status_ah = MASTER_B.C1P37_Status_i;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.C1P38_Status_mr = MASTER_B.C1P38_Status_mf;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.C2P01_Status_bd = MASTER_B.C2P01_Status_i;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.C2P02_Status_nz = MASTER_B.C2P02_Status_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.C2P03_Status_mb = MASTER_B.C2P03_Status_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.C2P04_Status_nw = MASTER_B.C2P04_Status_o;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.C2P05_Status_my = MASTER_B.C2P05_Status_mh;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.C2P13_Status_je = MASTER_B.C2P13_Status_p;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  MASTER_B.C2P25_Status_oc = MASTER_B.C2P25_Status_a;

  /* ModelReference generated from: '<Root>/STATEFLOW' */
  STATEFLOW(&MASTER_B.nMotorRL_dy, &MASTER_B.BInvErrorRL_h5,
            &MASTER_B.BInvDCQuitInvOnRL_gn, &MASTER_B.BInvQuitInvOnRL_dc,
            &MASTER_B.BInvSysReadyRL_mu, &MASTER_B.NInvDTCRL_jc,
            &MASTER_B.VDCInvRL_ob, &MASTER_B.BInvErrorFL_ls,
            &MASTER_B.BInvDCQuitInvOnFL_l5, &MASTER_B.BInvQuitInvOnFL_lw,
            &MASTER_B.BInvSysReadyFL_pu, &MASTER_B.NInvDTCFL_jy,
            &MASTER_B.BInvErrorRR_gp, &MASTER_B.BInvDCQuitInvOnRR_lk,
            &MASTER_B.BInvQuitInvOnRR_mj, &MASTER_B.BInvSysReadyRR_cu,
            &MASTER_B.NInvDTCRR_j2, &MASTER_B.BInvErrorFR_gu,
            &MASTER_B.BInvDCQuitInvOnFR_m0, &MASTER_B.BInvQuitInvOnFR_gb,
            &MASTER_B.BInvSysReadyFR_im, &MASTER_B.NInvDTCFR_jf,
            &MASTER_B.pBrakeF_ax, &MASTER_B.pBrakeR_px,
            &MASTER_B.VCellAverage_fr, &MASTER_B.VDCAccumulator_gb,
            &MASTER_B.RCellAverage_fq, &MASTER_B.BBalancingActive_nf,
            &MASTER_B.BBMSP0A0C_in, &MASTER_B.BBMSP0A0E_na,
            &MASTER_B.BBMSP0A10_gs, &MASTER_B.BBMSP0A80_a0,
            &MASTER_B.BBMSP0AC0_ml, &MASTER_B.BBMSP0AFA_bz,
            &MASTER_B.rThrottlePedal_dx, &MASTER_B.BErrorReset_ey,
            &MASTER_B.BReadyToDriveButton_gb, &MASTER_B.NCarState_n,
            &MASTER_B.BReadyToDriveBuzzer_l, &MASTER_B.BReadyToDrive_c0,
            &MASTER_B.NBMSState_b, &MASTER_B.NInvState_g, &MASTER_B.BHVOn_e1,
            &MASTER_B.BInvOnRL_i, &MASTER_B.BInvOnRR_p, &MASTER_B.BInvOnFL_f,
            &MASTER_B.BInvOnFR_k, &MASTER_B.BInvDCOnRL_i, &MASTER_B.BInvDCOnRR_o,
            &MASTER_B.BInvDCOnFL_k, &MASTER_B.BInvDCOnFR_n,
            &MASTER_B.BInvEnableRL_l, &MASTER_B.BInvEnableRR_b,
            &MASTER_B.BInvEnableFL_n, &MASTER_B.BInvEnableFR_p,
            &MASTER_B.BInvErrorResetRL_d, &MASTER_B.BInvErrorResetRR_j,
            &MASTER_B.BInvErrorResetFL_b, &MASTER_B.BInvErrorResetFR_k,
            &MASTER_B.MTargetTorqueRL_b, &MASTER_B.MTargetTorqueRR_oi,
            &MASTER_B.MTargetTorqueFL_p, &MASTER_B.MTargetTorqueFR_o,
            &MASTER_B.MTorqueLimitNegativeRL_l,
            &MASTER_B.MTorqueLimitNegativeRR_c,
            &MASTER_B.MTorqueLimitNegativeFL_n,
            &MASTER_B.MTorqueLimitNegativeFR_k,
            &MASTER_B.MTorqueLimitPositiveRL_a,
            &MASTER_B.MTorqueLimitPositiveRR_n,
            &MASTER_B.MTorqueLimitPositiveFL_k,
            &MASTER_B.MTorqueLimitPositiveFR_f,
            &(MASTER_DW.STATEFLOW_InstanceData.rtdw));

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.nMotorRL_d = MASTER_B.nMotorRL_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.NInvDTCRL_j = MASTER_B.NInvDTCRL_g;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.C2P26_Status_g = MASTER_B.C2P26_Status_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.C2P27_Status_m = MASTER_B.C2P27_Status_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.C2P28_Status_i = MASTER_B.C2P28_Status_f;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.C2P29_Status_i = MASTER_B.C2P29_Status_n;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.C2P30_Status_i = MASTER_B.C2P30_Status_e;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.C2P31_Status_e = MASTER_B.C2P31_Status_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.C2P33_Status_j = MASTER_B.C2P33_Status_m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.C1P16_Digital_f = MASTER_B.C1P16_Digital_e;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.C1P17_Digital_h = MASTER_B.C1P17_Digital_m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.C2P17_Digital_d = MASTER_B.C2P17_Digital_m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.TMotorRL_m = MASTER_B.TMotorRL_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.C2P18_Digital_o = MASTER_B.C2P18_Digital_f;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.C2P35_Status_d = MASTER_B.C2P35_Status_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.C2P36_Status_f = MASTER_B.C2P36_Status_o;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.C2P37_Status_n = MASTER_B.C2P37_Status_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.C2P38_Status_c = MASTER_B.C2P38_Status_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.ILVSystem_i = MASTER_B.ILVSystem_p;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.TLVSystem_a = MASTER_B.TLVSystem_f;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.VLVSystem_c = MASTER_B.VLVSystem_e;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.VDamperPotentiometerRL_g = MASTER_B.VDamperPotentiometerRL_i;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.VDamperPotentiometerRR_p = MASTER_B.VDamperPotentiometerRR_o;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.VDCInvRL_o = MASTER_B.VDCInvRL_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.vLongitudinalOXTSIMU_f = MASTER_B.vLongitudinalOXTSIMU_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.gLateralOXTSIMU_o = MASTER_B.gLateralOXTSIMU_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.gLongitudinalOXTSIMU_i = MASTER_B.gLongitudinalOXTSIMU_f;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.nYawRateOXTSIMU_f = MASTER_B.nYawRateOXTSIMU_fe;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.VCellMax_j = MASTER_B.VCellMax_m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.VCellDelta_c = MASTER_B.VCellDelta_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.VCellMin_o = MASTER_B.VCellMin_e;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.VCellAverage_f = MASTER_B.VCellAverage_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.TCellMax_n = MASTER_B.TCellMax_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.NBMSDLC_m = MASTER_B.NBMSDLC_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.TInvRL_j = MASTER_B.TInvRL_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.TCellMin_e = MASTER_B.TCellMin_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.IBMSHallEffect_b = MASTER_B.IBMSHallEffect_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.VDCAccumulator_g = MASTER_B.VDCAccumulator_j;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.RCellAverage_f = MASTER_B.RCellAverage_p;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.BBalancingActive_n = MASTER_B.BBalancingActive_nc;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.BBMSP0A0C_i = MASTER_B.BBMSP0A0C_n;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.BBMSP0A0E_n = MASTER_B.BBMSP0A0E_j;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.BBMSP0A10_g = MASTER_B.BBMSP0A10_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.BBMSP0A80_a = MASTER_B.BBMSP0A80_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.BBMSP0AC0_m = MASTER_B.BBMSP0AC0_a;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.nMotorFL_k = MASTER_B.nMotorFL_o;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.BBMSP0AFA_b = MASTER_B.BBMSP0AFA_e;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.IIVTS_o = MASTER_B.IIVTS_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.rThrottlePedal_d = MASTER_B.rThrottlePedal_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.BThrottleError_gx = MASTER_B.BThrottleError_a;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.tThrottleError_m = MASTER_B.tThrottleError_o;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.BBrakeError_jn = MASTER_B.BBrakeError_a;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.tBrakeError_o = MASTER_B.tBrakeError_f;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.BBrakeOn_p = MASTER_B.BBrakeOn_ph;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.pBrakeMax_d = MASTER_B.pBrakeMax_d2;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.BPedalOverlap_eg = MASTER_B.BPedalOverlap_m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.BInvDCOnFL_akajd = MASTER_B.BInvDCOnFL_o;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.tPedalOverlap_p = MASTER_B.tPedalOverlap_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.BAppsOK_oe = MASTER_B.BAppsOK_m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.tAppsTimer_k = MASTER_B.tAppsTimer_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.rSteeringAngle_hi = MASTER_B.rSteeringAngle_e;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.aSteeringAngle_p = MASTER_B.aSteeringAngle_c;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.rRegenPaddle_ge = MASTER_B.rRegenPaddle_n;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.BRegenOn_c = MASTER_B.BRegenOn_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.BBrakeLight_gj = MASTER_B.BBrakeLight_n;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.xDamperFL_e = MASTER_B.xDamperFL_g;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.xDamperFR_f = MASTER_B.xDamperFR_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.BInvErrorFL_l = MASTER_B.BInvErrorFL_g;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.xDamperRL_d = MASTER_B.xDamperRL_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.xDamperRR_j = MASTER_B.xDamperRR_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.BDamperErrorFL_c = MASTER_B.BDamperErrorFL_g;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.BDamperErrorFR_h = MASTER_B.BDamperErrorFR_m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.BDamperErrorRL_n = MASTER_B.BDamperErrorRL_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.BDamperErrorRR_k = MASTER_B.BDamperErrorRR_c;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.vChassis_ey = MASTER_B.vChassis_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.sChassis_l = MASTER_B.sChassis_m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.sEMS1000m_b = MASTER_B.sEMS1000m_c;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.BEMS1000mPoint_n = MASTER_B.BEMS1000mPoint_g;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.BInvOnFL_aycnr = MASTER_B.BInvOnFL_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.BEMS995mPoint_f = MASTER_B.BEMS995mPoint_g;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.BTorqueVectoringActivated_j = MASTER_B.BTorqueVectoringActivated_c;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.NThrottleMap_c = MASTER_B.NThrottleMap_ce;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.PDischarge_b = MASTER_B.PDischarge_n;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.BEMSActivated_e = MASTER_B.BEMSActivated_i;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.PRegen_c = MASTER_B.PRegen_o;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.rTorqueSplit_l = MASTER_B.rTorqueSplit_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.PEngineBraking_i = MASTER_B.PEngineBraking_m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.BSpinningModelActivated_m = MASTER_B.BSpinningModelActivated_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.NTractionControlKpSelector_j = MASTER_B.NTractionControlKpSelector_m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.BInvDCQuitInvOnFL_l = MASTER_B.BInvDCQuitInvOnFL_i;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.BTractionControlActivated_j = MASTER_B.BTractionControlActivated_n;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.rTorqueVectoringMultiplier_l = MASTER_B.rTorqueVectoringMultiplier_p;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.NPowerControllerKpSelector_i = MASTER_B.NPowerControllerKpSelector_a;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.NTorqueSplitSpeedSelector_b = MASTER_B.NTorqueSplitSpeedSelector_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.BAccumulatorFanOn_p = MASTER_B.BAccumulatorFanOn_c;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.BErrorReset_e = MASTER_B.BErrorReset_a;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.BReadyToDriveButton_g = MASTER_B.BReadyToDriveButton_g2;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.NModeNumberDisplay5_c = MASTER_B.NModeNumberDisplay5_j;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.NModeNumberDisplay6_o = MASTER_B.NModeNumberDisplay6_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.TMotorMax_b = MASTER_B.TMotorMax_j;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.BInvQuitInvOnFL_l = MASTER_B.BInvQuitInvOnFL_i;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.TInvMax_m = MASTER_B.TInvMax_c;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.PActual_my = MASTER_B.PActual_a;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.rSOC_do = MASTER_B.rSOC_i;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.rSOE_c = MASTER_B.rSOE_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.BEncoderErrorRear_p = MASTER_B.BEncoderErrorRear_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.BEncoderErrorFront_i = MASTER_B.BEncoderErrorFront_iu5;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.rCoolingFansDuty_i = MASTER_B.rCoolingFansDuty_a;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.rCoolingPumpsDuty_n = MASTER_B.rCoolingPumpsDuty_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.BAccumulatorFanDuty_k = MASTER_B.BAccumulatorFanDuty_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.BInvLVOn_a = MASTER_B.BInvLVOn_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.BInvDCOnRL_jrwec = MASTER_B.BInvDCOnRL_e;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.BInvSysReadyFL_p = MASTER_B.BInvSysReadyFL_j;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.rThrottlePedal1_g = MASTER_B.rThrottlePedal1_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.rThrottlePedal2_m = MASTER_B.rThrottlePedal2_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.NCarState_ho = MASTER_B.NCarState_n;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.BReadyToDriveBuzzer_i = MASTER_B.BReadyToDriveBuzzer_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.BReadyToDrive_c = MASTER_B.BReadyToDrive_c0;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.NBMSState_jb = MASTER_B.NBMSState_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.NInvState_do = MASTER_B.NInvState_g;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.BHVOn_e = MASTER_B.BHVOn_e1;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.BInvOnRL_o = MASTER_B.BInvOnRL_i;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.BInvOnRR_b = MASTER_B.BInvOnRR_p;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.BInvWarnFL_l = MASTER_B.BInvWarnFL_p;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.BInvOnFL_a = MASTER_B.BInvOnFL_f;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.BInvOnFR_g = MASTER_B.BInvOnFR_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.BInvDCOnRL_j = MASTER_B.BInvDCOnRL_i;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.BInvDCOnRR_f = MASTER_B.BInvDCOnRR_o;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.BInvDCOnFL_a = MASTER_B.BInvDCOnFL_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.BInvDCOnFR_a = MASTER_B.BInvDCOnFR_n;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.BInvEnableRL_i = MASTER_B.BInvEnableRL_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.BInvEnableRR_e = MASTER_B.BInvEnableRR_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.BInvEnableFL_h = MASTER_B.BInvEnableFL_n;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.BInvEnableFR_g = MASTER_B.BInvEnableFR_p;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.MMotorMeasuredFL_a = MASTER_B.MMotorMeasuredFL_c;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.BInvErrorResetRL_j = MASTER_B.BInvErrorResetRL_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.BInvErrorResetRR_a = MASTER_B.BInvErrorResetRR_j;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.BInvErrorResetFL_i = MASTER_B.BInvErrorResetFL_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.BInvErrorResetFR_a = MASTER_B.BInvErrorResetFR_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.MTargetTorqueRL_m = MASTER_B.MTargetTorqueRL_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.MTargetTorqueRR_o = MASTER_B.MTargetTorqueRR_oi;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.MTargetTorqueFL_j = MASTER_B.MTargetTorqueFL_p;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.MTargetTorqueFR_n = MASTER_B.MTargetTorqueFR_o;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.MTorqueLimitNegativeRL_a = MASTER_B.MTorqueLimitNegativeRL_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.MTorqueLimitNegativeRR_n = MASTER_B.MTorqueLimitNegativeRR_c;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.NInvDTCFL_j = MASTER_B.NInvDTCFL_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.MTorqueLimitNegativeFL_d = MASTER_B.MTorqueLimitNegativeFL_n;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.MTorqueLimitNegativeFR_f = MASTER_B.MTorqueLimitNegativeFR_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.MTorqueLimitPositiveRL_p = MASTER_B.MTorqueLimitPositiveRL_a;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.MTorqueLimitPositiveRR_d = MASTER_B.MTorqueLimitPositiveRR_n;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.MTorqueLimitPositiveFL_d = MASTER_B.MTorqueLimitPositiveFL_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.MTorqueLimitPositiveFR_h = MASTER_B.MTorqueLimitPositiveFR_f;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.BDischargeAllowed_h = MASTER_B.BDischargeAllowed_c;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.rInvTemperatureDerate_of = MASTER_B.rInvTemperatureDerate_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.rInvTemperatureDerateFR_o = MASTER_B.rInvTemperatureDerateFR_e;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.rInvTemperatureDerateFL_j = MASTER_B.rInvTemperatureDerateFL_g;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.TMotorFL_d = MASTER_B.TMotorFL_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.rInvTemperatureDerateRR_d = MASTER_B.rInvTemperatureDerateRR_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.rInvTemperatureDerateRL_d = MASTER_B.rInvTemperatureDerateRL_c;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.rMotorTemperatureDerate_gi = MASTER_B.rMotorTemperatureDerate_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.rMotorTemperatureDerateFR_d = MASTER_B.rMotorTemperatureDerateFR_i;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.rMotorTemperatureDerateFL_j = MASTER_B.rMotorTemperatureDerateFL_f;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.rMotorTemperatureDerateRR_aa = MASTER_B.rMotorTemperatureDerateRR_a;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.rMotorTemperatureDerateRL_e = MASTER_B.rMotorTemperatureDerateRL_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.rTSTemperatureDerateFR_e = MASTER_B.rTSTemperatureDerateFR_o;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.rTSTemperatureDerateFL_n = MASTER_B.rTSTemperatureDerateFL_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.rTSTemperatureDerateRR_b = MASTER_B.rTSTemperatureDerateRR_o;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.VDCInvFL_c = MASTER_B.VDCInvFL_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.rTSTemperatureDerateRL_k = MASTER_B.rTSTemperatureDerateRL_e;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.rHighCellTemperatureDischarge_d =
    MASTER_B.rHighCellTemperatureDischarge_o;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.rHighCellTemperatureRegenDera_o =
    MASTER_B.rHighCellTemperatureRegenDera_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.rLowCellVoltageDischargeDerat_g =
    MASTER_B.rLowCellVoltageDischargeDerat_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.rSOCDischargeDerate_b = MASTER_B.rSOCDischargeDerate_i;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.rSOCRegenDerate_c = MASTER_B.rSOCRegenDerate_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.rSpeedRegenDerate_ns = MASTER_B.rSpeedRegenDerate_n4;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.rDischargeDerate_k2 = MASTER_B.rDischargeDerate_g;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.rRegenDerate_lm = MASTER_B.rRegenDerate_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.MDriverDischargeRequested_lc = MASTER_B.MDriverDischargeRequested_a;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.TInvFL_d = MASTER_B.TInvFL_j;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.MDriverRegenRequested_ji = MASTER_B.MDriverRegenRequested_m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.MDischargeLimited_cj = MASTER_B.MDischargeLimited;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.MRegenLimited_id = MASTER_B.MRegenLimited;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.PPowerControllerRequested_jd = MASTER_B.PPowerControllerRequested;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.MPowerControllerRequested_ja = MASTER_B.MPowerControllerRequested;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.PPowerControllerProportional_kq =
    MASTER_B.PPowerControllerProportionalTer;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.PPowerControllerIntegralTerm_db =
    MASTER_B.PPowerControllerIntegralTerm;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.PDischargeLimited_id = MASTER_B.PDischargeLimited;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.MTotalRequested_iu = MASTER_B.MTotalRequested_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.MTotalEMSRequested_mo = MASTER_B.MTotalEMSRequested;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.nMotorRR_m = MASTER_B.nMotorRR_o;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.rSOCTargetError_c0 = MASTER_B.rSOCTargetError;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.rSOETargetError_aj = MASTER_B.rSOETargetError;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.nYawRateErrorActual_is = MASTER_B.nYawRateErrorActual;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.BTorqueVectoringOK_f4 = MASTER_B.BTorqueVectoringOK;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.MTorqueVectoringFL_bm = MASTER_B.MTorqueVectoringFL;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.MTorqueVectoringFR_bf = MASTER_B.MTorqueVectoringFR;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.MTorqueVectoringRL_m4 = MASTER_B.MTorqueVectoringRL;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.MTorqueVectoringRR_f3 = MASTER_B.MTorqueVectoringRR;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.rSplitRear_kp = MASTER_B.rSplitRear;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.MTorqueDistributionFL_dc = MASTER_B.MTorqueDistributionFL;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.BInvDCOnRR_fchgb = MASTER_B.BInvDCOnRR_o4;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.MTorqueDistributionFR_js = MASTER_B.MTorqueDistributionFR;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.MTorqueDistributionRL_no = MASTER_B.MTorqueDistributionRL;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.MTorqueDistributionRR_od = MASTER_B.MTorqueDistributionRR;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.rSlipRatioOptimal_kz = MASTER_B.rSlipRatioOptimal;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.NTractionControlMultiplierFL_cg =
    MASTER_B.NTractionControlMultiplierFL;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.NTractionControlMultiplierFR_pp =
    MASTER_B.NTractionControlMultiplierFR;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.NTractionControlMultiplierRL_pd =
    MASTER_B.NTractionControlMultiplierRL;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.NTractionControlMultiplierRR_gd =
    MASTER_B.NTractionControlMultiplierRR;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.NABSMultiplierFL_i3 = MASTER_B.NABSMultiplierFL;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.NABSMultiplierFR_i0 = MASTER_B.NABSMultiplierFR;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.BInvErrorRR_g = MASTER_B.BInvErrorRR_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.NABSMultiplierRL_bb = MASTER_B.NABSMultiplierRL;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.NABSMultiplierRR_p0 = MASTER_B.NABSMultiplierRR;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.rSlipRatioFLActual_jp = MASTER_B.rSlipRatioFLActual;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.rSlipRatioFRActual_lb = MASTER_B.rSlipRatioFRActual;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.rSlipRatioRLActual_ot = MASTER_B.rSlipRatioRLActual;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.rSlipRatioRRActual_f4 = MASTER_B.rSlipRatioRRActual;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.MTractionControlFLTotal_aq = MASTER_B.MTractionControlFLTotal;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.MTractionControlFRTotal_fg = MASTER_B.MTractionControlFRTotal;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.MTractionControlRLTotal_fb = MASTER_B.MTractionControlRLTotal;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.MTractionControlRRTotal_f1 = MASTER_B.MTractionControlRRTotal;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.BInvErrorRL_h = MASTER_B.BInvErrorRL_c;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.BInvOnRR_bzdzx = MASTER_B.BInvOnRR_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.MTractionControlFLFinal_ic = MASTER_B.MTractionControlFLFinal;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.MTractionControlFRFinal_b5 = MASTER_B.MTractionControlFRFinal;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.MTractionControlRLFinal_he = MASTER_B.MTractionControlRLFinal;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.MTractionControlRRFinal_f1 = MASTER_B.MTractionControlRRFinal;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.MSpinningModelFL_ni = MASTER_B.MSpinningModelFL;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.MSpinningModelFR_bd = MASTER_B.MSpinningModelFR;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.MSpinningModelRL_af = MASTER_B.MSpinningModelRL;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.MSpinningModelRR_fm = MASTER_B.MSpinningModelRR;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.MFLFinal_pt = MASTER_B.MFLFinal;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.MFRFinal_gw = MASTER_B.MFRFinal;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.BInvDCQuitInvOnRR_l = MASTER_B.BInvDCQuitInvOnRR_m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.MRLFinal_ai = MASTER_B.MRLFinal;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.MRRFinal_a2 = MASTER_B.MRRFinal;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.MTotalFinal_k2 = MASTER_B.MTotalFinal;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.BInvQuitInvOnRR_m = MASTER_B.BInvQuitInvOnRR_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.BInvSysReadyRR_c = MASTER_B.BInvSysReadyRR_e;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.BInvWarnRR_i = MASTER_B.BInvWarnRR_m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.MMotorMeasuredRR_m = MASTER_B.MMotorMeasuredRR_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.NInvDTCRR_j = MASTER_B.NInvDTCRR_m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.TMotorRR_a = MASTER_B.TMotorRR_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.VDCInvRR_n = MASTER_B.VDCInvRR_o;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.TInvRR_j = MASTER_B.TInvRR_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.BInvOnRL_oszez = MASTER_B.BInvOnRL_m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.nMotorFR_f = MASTER_B.nMotorFR_a;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.BInvDCOnFR_az50k = MASTER_B.BInvDCOnFR_j;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.BInvErrorFR_g = MASTER_B.BInvErrorFR_c;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.BInvOnFR_gifo4 = MASTER_B.BInvOnFR_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.BInvDCQuitInvOnFR_m = MASTER_B.BInvDCQuitInvOnFR_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.BInvQuitInvOnFR_g = MASTER_B.BInvQuitInvOnFR_c;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.BInvSysReadyFR_i = MASTER_B.BInvSysReadyFR_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.BInvWarnFR_m = MASTER_B.BInvWarnFR_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.MMotorMeasuredFR_p = MASTER_B.MMotorMeasuredFR_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.NInvDTCFR_j = MASTER_B.NInvDTCFR_a;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.BInvDCQuitInvOnRL_g = MASTER_B.BInvDCQuitInvOnRL_a;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.TMotorFR_c = MASTER_B.TMotorFR_g;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.VDCInvFR_m = MASTER_B.VDCInvFR_p;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.TInvFR_f = MASTER_B.TInvFR_i;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.vWheelRL_h = MASTER_B.vWheelRL_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.vWheelRR_a = MASTER_B.vWheelRR_f;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.vWheelFL_n = MASTER_B.vWheelFL_g;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.vWheelFR_o = MASTER_B.vWheelFR_n;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.pBrakeF_a = MASTER_B.pBrakeF_p;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.pBrakeR_p = MASTER_B.pBrakeR_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.VDamperPotentiometerFL_o = MASTER_B.VDamperPotentiometerFL_i;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.BInvQuitInvOnRL_d = MASTER_B.BInvQuitInvOnRL_g;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.VDamperPotentiometerFR_j = MASTER_B.VDamperPotentiometerFR_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.NDisplayNumberDDU7_n = MASTER_B.NDisplayNumberDDU7_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.VSteeringAngle_b = MASTER_B.VSteeringAngle_a;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.VThrottlePedal1_b = MASTER_B.VThrottlePedal1_f;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.VThrottlePedal2_a = MASTER_B.VThrottlePedal2_o;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.BSteeringWheelButton1_i = MASTER_B.BSteeringWheelButton1_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.BSteeringWheelButton2_l = MASTER_B.BSteeringWheelButton2_n;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.BSteeringWheelButton3_e = MASTER_B.BSteeringWheelButton3_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.BSteeringWheelButton4_o = MASTER_B.BSteeringWheelButton4_e;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.BSteeringWheelButton5_o = MASTER_B.BSteeringWheelButton5_p;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.BInvSysReadyRL_m = MASTER_B.BInvSysReadyRL_a;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.BSteeringWheelButton6_n = MASTER_B.BSteeringWheelButton6_c;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.BSteeringWheelButton7_i = MASTER_B.BSteeringWheelButton7_j;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.BSteeringWheelButton8_n = MASTER_B.BSteeringWheelButton8_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.VRegenPaddle1_b = MASTER_B.VRegenPaddle1_o;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.VRegenPaddle2_a = MASTER_B.VRegenPaddle2_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.C1P01_Status_m = MASTER_B.C1P01_Status_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.C1P02_Status_a = MASTER_B.C1P02_Status_a5;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.C1P03_Status_i = MASTER_B.C1P03_Status_g;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.C1P04_Status_a = MASTER_B.C1P04_Status_o;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.C1P07_Status_g = MASTER_B.C1P07_Status_i;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.BInvWarnRL_i = MASTER_B.BInvWarnRL_c;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.C1P11_Status_l = MASTER_B.C1P11_Status_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.C1P12_Status_h = MASTER_B.C1P12_Status_g;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.C1P13_Status_c = MASTER_B.C1P13_Status_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.C1P25_Status_j = MASTER_B.C1P25_Status_a;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.C1P26_Status_g = MASTER_B.C1P26_Status_m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.C1P28_Status_f = MASTER_B.C1P28_Status_m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.C1P30_Status_j = MASTER_B.C1P30_Status_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.C1P31_Status_i = MASTER_B.C1P31_Status_j;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.C1P33_Status_j = MASTER_B.C1P33_Status_c;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.C1P34_Status_b = MASTER_B.C1P34_Status_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.MMotorMeasuredRL_i = MASTER_B.MMotorMeasuredRL_a;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.C1P36_Status_g = MASTER_B.C1P36_Status_c;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.C1P37_Status_a = MASTER_B.C1P37_Status_i;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.C1P38_Status_m = MASTER_B.C1P38_Status_mf;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.C2P01_Status_b = MASTER_B.C2P01_Status_i;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.C2P02_Status_n = MASTER_B.C2P02_Status_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.C2P03_Status_m = MASTER_B.C2P03_Status_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.C2P04_Status_n = MASTER_B.C2P04_Status_o;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.C2P05_Status_m = MASTER_B.C2P05_Status_mh;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.C2P13_Status_j = MASTER_B.C2P13_Status_p;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  MASTER_B.C2P25_Status_o = MASTER_B.C2P25_Status_a;

  /* ModelReference generated from: '<Root>/LIMITATIONS' */
  LIMITATIONS(&MASTER_B.nMotorRL_d, &MASTER_B.TMotorRL_m, &MASTER_B.TInvRL_j,
              &MASTER_B.nMotorFL_k, &MASTER_B.TMotorFL_d, &MASTER_B.TInvFL_d,
              &MASTER_B.nMotorRR_m, &MASTER_B.TMotorRR_a, &MASTER_B.TInvRR_j,
              &MASTER_B.nMotorFR_f, &MASTER_B.TMotorFR_c, &MASTER_B.TInvFR_f,
              &MASTER_B.VCellMin_o, &MASTER_B.TCellMax_n,
              &MASTER_B.VDCAccumulator_g, &MASTER_B.IIVTS_o,
              &MASTER_B.BThrottleError_gx, &MASTER_B.BBrakeError_jn,
              &MASTER_B.BBrakeOn_p, &MASTER_B.BAppsOK_oe, &MASTER_B.vChassis_ey,
              &MASTER_B.BEMSActivated_e, &MASTER_B.TMotorMax_b,
              &MASTER_B.TInvMax_m, &MASTER_B.BReadyToDrive_c,
              &MASTER_B.BDischargeAllowed_c, &MASTER_B.rInvTemperatureDerate_h,
              &MASTER_B.rInvTemperatureDerateFR_e,
              &MASTER_B.rInvTemperatureDerateFL_g,
              &MASTER_B.rInvTemperatureDerateRR_l,
              &MASTER_B.rInvTemperatureDerateRL_c,
              &MASTER_B.rMotorTemperatureDerate_b,
              &MASTER_B.rMotorTemperatureDerateFR_i,
              &MASTER_B.rMotorTemperatureDerateFL_f,
              &MASTER_B.rMotorTemperatureDerateRR_a,
              &MASTER_B.rMotorTemperatureDerateRL_l,
              &MASTER_B.rTSTemperatureDerateFR_o,
              &MASTER_B.rTSTemperatureDerateFL_h,
              &MASTER_B.rTSTemperatureDerateRR_o,
              &MASTER_B.rTSTemperatureDerateRL_e,
              &MASTER_B.rHighCellTemperatureDischarge_o,
              &MASTER_B.rHighCellTemperatureRegenDera_b,
              &MASTER_B.rLowCellVoltageDischargeDerat_b,
              &MASTER_B.rSOCDischargeDerate_i, &MASTER_B.rSOCRegenDerate_d,
              &MASTER_B.rSpeedRegenDerate_n4, &MASTER_B.rDischargeDerate_g,
              &MASTER_B.rRegenDerate_b);

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.nMotorRL = MASTER_B.nMotorRL_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.NInvDTCRL = MASTER_B.NInvDTCRL_g;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.C2P26_Status = MASTER_B.C2P26_Status_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.C2P27_Status = MASTER_B.C2P27_Status_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.C2P28_Status = MASTER_B.C2P28_Status_f;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.C2P29_Status = MASTER_B.C2P29_Status_n;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.C2P30_Status = MASTER_B.C2P30_Status_e;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.C2P31_Status = MASTER_B.C2P31_Status_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.C2P33_Status = MASTER_B.C2P33_Status_m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.C1P16_Digital = MASTER_B.C1P16_Digital_e;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.C1P17_Digital = MASTER_B.C1P17_Digital_m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.C2P17_Digital = MASTER_B.C2P17_Digital_m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.TMotorRL = MASTER_B.TMotorRL_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.C2P18_Digital = MASTER_B.C2P18_Digital_f;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.C2P35_Status = MASTER_B.C2P35_Status_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.C2P36_Status = MASTER_B.C2P36_Status_o;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.C2P37_Status = MASTER_B.C2P37_Status_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.C2P38_Status = MASTER_B.C2P38_Status_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.ILVSystem = MASTER_B.ILVSystem_p;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.TLVSystem = MASTER_B.TLVSystem_f;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.VLVSystem = MASTER_B.VLVSystem_e;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.VDamperPotentiometerRL = MASTER_B.VDamperPotentiometerRL_i;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.VDamperPotentiometerRR = MASTER_B.VDamperPotentiometerRR_o;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.VDCInvRL = MASTER_B.VDCInvRL_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.vLongitudinalOXTSIMU = MASTER_B.vLongitudinalOXTSIMU_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.gLateralOXTSIMU = MASTER_B.gLateralOXTSIMU_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.gLongitudinalOXTSIMU = MASTER_B.gLongitudinalOXTSIMU_f;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.nYawRateOXTSIMU = MASTER_B.nYawRateOXTSIMU_fe;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.VCellMax = MASTER_B.VCellMax_m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.VCellDelta = MASTER_B.VCellDelta_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.VCellMin = MASTER_B.VCellMin_e;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.VCellAverage = MASTER_B.VCellAverage_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.TCellMax = MASTER_B.TCellMax_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.NBMSDLC = MASTER_B.NBMSDLC_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.TInvRL = MASTER_B.TInvRL_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.TCellMin = MASTER_B.TCellMin_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.IBMSHallEffect = MASTER_B.IBMSHallEffect_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.VDCAccumulator = MASTER_B.VDCAccumulator_j;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.RCellAverage = MASTER_B.RCellAverage_p;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.BBalancingActive = MASTER_B.BBalancingActive_nc;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.BBMSP0A0C = MASTER_B.BBMSP0A0C_n;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.BBMSP0A0E = MASTER_B.BBMSP0A0E_j;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.BBMSP0A10 = MASTER_B.BBMSP0A10_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.BBMSP0A80 = MASTER_B.BBMSP0A80_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.BBMSP0AC0 = MASTER_B.BBMSP0AC0_a;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.nMotorFL = MASTER_B.nMotorFL_o;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.BBMSP0AFA = MASTER_B.BBMSP0AFA_e;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.IIVTS = MASTER_B.IIVTS_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.rThrottlePedal = MASTER_B.rThrottlePedal_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.BThrottleError_g = MASTER_B.BThrottleError_a;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.tThrottleError = MASTER_B.tThrottleError_o;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.BBrakeError_j = MASTER_B.BBrakeError_a;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.tBrakeError = MASTER_B.tBrakeError_f;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.BBrakeOn = MASTER_B.BBrakeOn_ph;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.pBrakeMax = MASTER_B.pBrakeMax_d2;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.BPedalOverlap_e = MASTER_B.BPedalOverlap_m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.BInvDCOnFL_akaj = MASTER_B.BInvDCOnFL_o;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.tPedalOverlap = MASTER_B.tPedalOverlap_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.BAppsOK_o = MASTER_B.BAppsOK_m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.tAppsTimer = MASTER_B.tAppsTimer_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.rSteeringAngle_h = MASTER_B.rSteeringAngle_e;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.aSteeringAngle = MASTER_B.aSteeringAngle_c;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.rRegenPaddle_g = MASTER_B.rRegenPaddle_n;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.BRegenOn = MASTER_B.BRegenOn_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.BBrakeLight_g = MASTER_B.BBrakeLight_n;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.xDamperFL = MASTER_B.xDamperFL_g;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.xDamperFR = MASTER_B.xDamperFR_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.BInvErrorFL = MASTER_B.BInvErrorFL_g;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.xDamperRL = MASTER_B.xDamperRL_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.xDamperRR = MASTER_B.xDamperRR_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.BDamperErrorFL = MASTER_B.BDamperErrorFL_g;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.BDamperErrorFR = MASTER_B.BDamperErrorFR_m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.BDamperErrorRL = MASTER_B.BDamperErrorRL_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.BDamperErrorRR = MASTER_B.BDamperErrorRR_c;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.vChassis_e = MASTER_B.vChassis_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.sChassis = MASTER_B.sChassis_m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.sEMS1000m = MASTER_B.sEMS1000m_c;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.BEMS1000mPoint = MASTER_B.BEMS1000mPoint_g;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.BInvOnFL_aycn = MASTER_B.BInvOnFL_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.BEMS995mPoint = MASTER_B.BEMS995mPoint_g;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.BTorqueVectoringActivated = MASTER_B.BTorqueVectoringActivated_c;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.NThrottleMap = MASTER_B.NThrottleMap_ce;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.PDischarge = MASTER_B.PDischarge_n;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.BEMSActivated = MASTER_B.BEMSActivated_i;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.PRegen = MASTER_B.PRegen_o;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.rTorqueSplit = MASTER_B.rTorqueSplit_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.PEngineBraking = MASTER_B.PEngineBraking_m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.BSpinningModelActivated = MASTER_B.BSpinningModelActivated_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.NTractionControlKpSelector = MASTER_B.NTractionControlKpSelector_m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.BInvDCQuitInvOnFL = MASTER_B.BInvDCQuitInvOnFL_i;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.BTractionControlActivated = MASTER_B.BTractionControlActivated_n;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.rTorqueVectoringMultiplier = MASTER_B.rTorqueVectoringMultiplier_p;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.NPowerControllerKpSelector = MASTER_B.NPowerControllerKpSelector_a;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.NTorqueSplitSpeedSelector = MASTER_B.NTorqueSplitSpeedSelector_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.BAccumulatorFanOn = MASTER_B.BAccumulatorFanOn_c;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.BErrorReset = MASTER_B.BErrorReset_a;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.BReadyToDriveButton = MASTER_B.BReadyToDriveButton_g2;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.NModeNumberDisplay5 = MASTER_B.NModeNumberDisplay5_j;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.NModeNumberDisplay6 = MASTER_B.NModeNumberDisplay6_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.TMotorMax = MASTER_B.TMotorMax_j;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.BInvQuitInvOnFL = MASTER_B.BInvQuitInvOnFL_i;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.TInvMax = MASTER_B.TInvMax_c;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.PActual_m = MASTER_B.PActual_a;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.rSOC_d = MASTER_B.rSOC_i;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.rSOE = MASTER_B.rSOE_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.BEncoderErrorRear = MASTER_B.BEncoderErrorRear_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.BEncoderErrorFront = MASTER_B.BEncoderErrorFront_iu5;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.rCoolingFansDuty = MASTER_B.rCoolingFansDuty_a;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.rCoolingPumpsDuty = MASTER_B.rCoolingPumpsDuty_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.BAccumulatorFanDuty = MASTER_B.BAccumulatorFanDuty_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.BInvLVOn = MASTER_B.BInvLVOn_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.BInvDCOnRL_jrwe = MASTER_B.BInvDCOnRL_e;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.BInvSysReadyFL = MASTER_B.BInvSysReadyFL_j;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.rThrottlePedal1 = MASTER_B.rThrottlePedal1_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.rThrottlePedal2 = MASTER_B.rThrottlePedal2_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.NCarState_h = MASTER_B.NCarState_n;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.BReadyToDriveBuzzer = MASTER_B.BReadyToDriveBuzzer_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.BReadyToDrive = MASTER_B.BReadyToDrive_c0;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.NBMSState_j = MASTER_B.NBMSState_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.NInvState_d = MASTER_B.NInvState_g;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.BHVOn = MASTER_B.BHVOn_e1;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.BInvOnRL = MASTER_B.BInvOnRL_i;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.BInvOnRR = MASTER_B.BInvOnRR_p;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.BInvWarnFL = MASTER_B.BInvWarnFL_p;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.BInvOnFL = MASTER_B.BInvOnFL_f;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.BInvOnFR = MASTER_B.BInvOnFR_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.BInvDCOnRL = MASTER_B.BInvDCOnRL_i;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.BInvDCOnRR = MASTER_B.BInvDCOnRR_o;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.BInvDCOnFL = MASTER_B.BInvDCOnFL_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.BInvDCOnFR = MASTER_B.BInvDCOnFR_n;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.BInvEnableRL = MASTER_B.BInvEnableRL_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.BInvEnableRR = MASTER_B.BInvEnableRR_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.BInvEnableFL = MASTER_B.BInvEnableFL_n;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.BInvEnableFR = MASTER_B.BInvEnableFR_p;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.MMotorMeasuredFL = MASTER_B.MMotorMeasuredFL_c;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.BInvErrorResetRL = MASTER_B.BInvErrorResetRL_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.BInvErrorResetRR = MASTER_B.BInvErrorResetRR_j;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.BInvErrorResetFL = MASTER_B.BInvErrorResetFL_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.BInvErrorResetFR = MASTER_B.BInvErrorResetFR_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.MTargetTorqueRL = MASTER_B.MTargetTorqueRL_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.MTargetTorqueRR = MASTER_B.MTargetTorqueRR_oi;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.MTargetTorqueFL = MASTER_B.MTargetTorqueFL_p;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.MTargetTorqueFR = MASTER_B.MTargetTorqueFR_o;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.MTorqueLimitNegativeRL = MASTER_B.MTorqueLimitNegativeRL_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.MTorqueLimitNegativeRR = MASTER_B.MTorqueLimitNegativeRR_c;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.NInvDTCFL = MASTER_B.NInvDTCFL_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.MTorqueLimitNegativeFL = MASTER_B.MTorqueLimitNegativeFL_n;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.MTorqueLimitNegativeFR = MASTER_B.MTorqueLimitNegativeFR_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.MTorqueLimitPositiveRL = MASTER_B.MTorqueLimitPositiveRL_a;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.MTorqueLimitPositiveRR = MASTER_B.MTorqueLimitPositiveRR_n;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.MTorqueLimitPositiveFL = MASTER_B.MTorqueLimitPositiveFL_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.MTorqueLimitPositiveFR = MASTER_B.MTorqueLimitPositiveFR_f;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.BDischargeAllowed = MASTER_B.BDischargeAllowed_c;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.rInvTemperatureDerate_o = MASTER_B.rInvTemperatureDerate_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.rInvTemperatureDerateFR = MASTER_B.rInvTemperatureDerateFR_e;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.rInvTemperatureDerateFL = MASTER_B.rInvTemperatureDerateFL_g;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.TMotorFL = MASTER_B.TMotorFL_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.rInvTemperatureDerateRR = MASTER_B.rInvTemperatureDerateRR_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.rInvTemperatureDerateRL = MASTER_B.rInvTemperatureDerateRL_c;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.rMotorTemperatureDerate_g = MASTER_B.rMotorTemperatureDerate_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.rMotorTemperatureDerateFR = MASTER_B.rMotorTemperatureDerateFR_i;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.rMotorTemperatureDerateFL = MASTER_B.rMotorTemperatureDerateFL_f;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.rMotorTemperatureDerateRR = MASTER_B.rMotorTemperatureDerateRR_a;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.rMotorTemperatureDerateRL = MASTER_B.rMotorTemperatureDerateRL_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.rTSTemperatureDerateFR = MASTER_B.rTSTemperatureDerateFR_o;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.rTSTemperatureDerateFL = MASTER_B.rTSTemperatureDerateFL_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.rTSTemperatureDerateRR = MASTER_B.rTSTemperatureDerateRR_o;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.VDCInvFL = MASTER_B.VDCInvFL_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.rTSTemperatureDerateRL = MASTER_B.rTSTemperatureDerateRL_e;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.rHighCellTemperatureDischargeDe =
    MASTER_B.rHighCellTemperatureDischarge_o;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.rHighCellTemperatureRegenDerate =
    MASTER_B.rHighCellTemperatureRegenDera_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.rLowCellVoltageDischargeDerate =
    MASTER_B.rLowCellVoltageDischargeDerat_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.rSOCDischargeDerate = MASTER_B.rSOCDischargeDerate_i;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.rSOCRegenDerate = MASTER_B.rSOCRegenDerate_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.rSpeedRegenDerate_n = MASTER_B.rSpeedRegenDerate_n4;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.rDischargeDerate_k = MASTER_B.rDischargeDerate_g;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.rRegenDerate_l = MASTER_B.rRegenDerate_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.MDriverDischargeRequested_l = MASTER_B.MDriverDischargeRequested_a;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.TInvFL = MASTER_B.TInvFL_j;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.MDriverRegenRequested_j = MASTER_B.MDriverRegenRequested_m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.MDischargeLimited_c = MASTER_B.MDischargeLimited;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.MRegenLimited_i = MASTER_B.MRegenLimited;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.PPowerControllerRequested_j = MASTER_B.PPowerControllerRequested;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.MPowerControllerRequested_j = MASTER_B.MPowerControllerRequested;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.PPowerControllerProportionalT_k =
    MASTER_B.PPowerControllerProportionalTer;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.PPowerControllerIntegralTerm_d =
    MASTER_B.PPowerControllerIntegralTerm;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.PDischargeLimited_i = MASTER_B.PDischargeLimited;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.MTotalRequested_i = MASTER_B.MTotalRequested_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.MTotalEMSRequested_m = MASTER_B.MTotalEMSRequested;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.nMotorRR = MASTER_B.nMotorRR_o;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.rSOCTargetError_c = MASTER_B.rSOCTargetError;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.rSOETargetError_a = MASTER_B.rSOETargetError;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.nYawRateErrorActual_i = MASTER_B.nYawRateErrorActual;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.BTorqueVectoringOK_f = MASTER_B.BTorqueVectoringOK;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.MTorqueVectoringFL_b = MASTER_B.MTorqueVectoringFL;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.MTorqueVectoringFR_b = MASTER_B.MTorqueVectoringFR;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.MTorqueVectoringRL_m = MASTER_B.MTorqueVectoringRL;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.MTorqueVectoringRR_f = MASTER_B.MTorqueVectoringRR;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.rSplitRear_k = MASTER_B.rSplitRear;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.MTorqueDistributionFL_d = MASTER_B.MTorqueDistributionFL;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.BInvDCOnRR_fchg = MASTER_B.BInvDCOnRR_o4;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.MTorqueDistributionFR_j = MASTER_B.MTorqueDistributionFR;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.MTorqueDistributionRL_n = MASTER_B.MTorqueDistributionRL;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.MTorqueDistributionRR_o = MASTER_B.MTorqueDistributionRR;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.rSlipRatioOptimal_k = MASTER_B.rSlipRatioOptimal;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.NTractionControlMultiplierFL_c =
    MASTER_B.NTractionControlMultiplierFL;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.NTractionControlMultiplierFR_p =
    MASTER_B.NTractionControlMultiplierFR;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.NTractionControlMultiplierRL_p =
    MASTER_B.NTractionControlMultiplierRL;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.NTractionControlMultiplierRR_g =
    MASTER_B.NTractionControlMultiplierRR;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.NABSMultiplierFL_i = MASTER_B.NABSMultiplierFL;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.NABSMultiplierFR_i = MASTER_B.NABSMultiplierFR;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.BInvErrorRR = MASTER_B.BInvErrorRR_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.NABSMultiplierRL_b = MASTER_B.NABSMultiplierRL;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.NABSMultiplierRR_p = MASTER_B.NABSMultiplierRR;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.rSlipRatioFLActual_j = MASTER_B.rSlipRatioFLActual;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.rSlipRatioFRActual_l = MASTER_B.rSlipRatioFRActual;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.rSlipRatioRLActual_o = MASTER_B.rSlipRatioRLActual;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.rSlipRatioRRActual_f = MASTER_B.rSlipRatioRRActual;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.MTractionControlFLTotal_a = MASTER_B.MTractionControlFLTotal;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.MTractionControlFRTotal_f = MASTER_B.MTractionControlFRTotal;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.MTractionControlRLTotal_f = MASTER_B.MTractionControlRLTotal;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.MTractionControlRRTotal_f = MASTER_B.MTractionControlRRTotal;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.BInvErrorRL = MASTER_B.BInvErrorRL_c;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.BInvOnRR_bzdz = MASTER_B.BInvOnRR_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.MTractionControlFLFinal_i = MASTER_B.MTractionControlFLFinal;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.MTractionControlFRFinal_b = MASTER_B.MTractionControlFRFinal;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.MTractionControlRLFinal_h = MASTER_B.MTractionControlRLFinal;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.MTractionControlRRFinal_f = MASTER_B.MTractionControlRRFinal;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.MSpinningModelFL_n = MASTER_B.MSpinningModelFL;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.MSpinningModelFR_b = MASTER_B.MSpinningModelFR;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.MSpinningModelRL_a = MASTER_B.MSpinningModelRL;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.MSpinningModelRR_f = MASTER_B.MSpinningModelRR;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.MFLFinal_p = MASTER_B.MFLFinal;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.MFRFinal_g = MASTER_B.MFRFinal;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.BInvDCQuitInvOnRR = MASTER_B.BInvDCQuitInvOnRR_m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.MRLFinal_a = MASTER_B.MRLFinal;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.MRRFinal_a = MASTER_B.MRRFinal;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.MTotalFinal_k = MASTER_B.MTotalFinal;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.BInvQuitInvOnRR = MASTER_B.BInvQuitInvOnRR_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.BInvSysReadyRR = MASTER_B.BInvSysReadyRR_e;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.BInvWarnRR = MASTER_B.BInvWarnRR_m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.MMotorMeasuredRR = MASTER_B.MMotorMeasuredRR_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.NInvDTCRR = MASTER_B.NInvDTCRR_m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.TMotorRR = MASTER_B.TMotorRR_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.VDCInvRR = MASTER_B.VDCInvRR_o;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.TInvRR = MASTER_B.TInvRR_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.BInvOnRL_osze = MASTER_B.BInvOnRL_m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.nMotorFR = MASTER_B.nMotorFR_a;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.BInvDCOnFR_az50 = MASTER_B.BInvDCOnFR_j;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.BInvErrorFR = MASTER_B.BInvErrorFR_c;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.BInvOnFR_gifo = MASTER_B.BInvOnFR_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.BInvDCQuitInvOnFR = MASTER_B.BInvDCQuitInvOnFR_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.BInvQuitInvOnFR = MASTER_B.BInvQuitInvOnFR_c;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.BInvSysReadyFR = MASTER_B.BInvSysReadyFR_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.BInvWarnFR = MASTER_B.BInvWarnFR_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.MMotorMeasuredFR = MASTER_B.MMotorMeasuredFR_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.NInvDTCFR = MASTER_B.NInvDTCFR_a;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.BInvDCQuitInvOnRL = MASTER_B.BInvDCQuitInvOnRL_a;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.TMotorFR = MASTER_B.TMotorFR_g;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.VDCInvFR = MASTER_B.VDCInvFR_p;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.TInvFR = MASTER_B.TInvFR_i;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.vWheelRL = MASTER_B.vWheelRL_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.vWheelRR = MASTER_B.vWheelRR_f;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.vWheelFL = MASTER_B.vWheelFL_g;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.vWheelFR = MASTER_B.vWheelFR_n;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.pBrakeF = MASTER_B.pBrakeF_p;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.pBrakeR = MASTER_B.pBrakeR_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.VDamperPotentiometerFL = MASTER_B.VDamperPotentiometerFL_i;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.BInvQuitInvOnRL = MASTER_B.BInvQuitInvOnRL_g;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.VDamperPotentiometerFR = MASTER_B.VDamperPotentiometerFR_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.NDisplayNumberDDU7 = MASTER_B.NDisplayNumberDDU7_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.VSteeringAngle = MASTER_B.VSteeringAngle_a;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.VThrottlePedal1 = MASTER_B.VThrottlePedal1_f;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.VThrottlePedal2 = MASTER_B.VThrottlePedal2_o;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.BSteeringWheelButton1 = MASTER_B.BSteeringWheelButton1_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.BSteeringWheelButton2 = MASTER_B.BSteeringWheelButton2_n;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.BSteeringWheelButton3 = MASTER_B.BSteeringWheelButton3_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.BSteeringWheelButton4 = MASTER_B.BSteeringWheelButton4_e;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.BSteeringWheelButton5 = MASTER_B.BSteeringWheelButton5_p;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.BInvSysReadyRL = MASTER_B.BInvSysReadyRL_a;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.BSteeringWheelButton6 = MASTER_B.BSteeringWheelButton6_c;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.BSteeringWheelButton7 = MASTER_B.BSteeringWheelButton7_j;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.BSteeringWheelButton8 = MASTER_B.BSteeringWheelButton8_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.VRegenPaddle1 = MASTER_B.VRegenPaddle1_o;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.VRegenPaddle2 = MASTER_B.VRegenPaddle2_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.C1P01_Status = MASTER_B.C1P01_Status_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.C1P02_Status = MASTER_B.C1P02_Status_a5;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.C1P03_Status = MASTER_B.C1P03_Status_g;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.C1P04_Status = MASTER_B.C1P04_Status_o;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.C1P07_Status = MASTER_B.C1P07_Status_i;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.BInvWarnRL = MASTER_B.BInvWarnRL_c;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.C1P11_Status = MASTER_B.C1P11_Status_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.C1P12_Status = MASTER_B.C1P12_Status_g;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.C1P13_Status = MASTER_B.C1P13_Status_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.C1P25_Status = MASTER_B.C1P25_Status_a;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.C1P26_Status = MASTER_B.C1P26_Status_m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.C1P28_Status = MASTER_B.C1P28_Status_m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.C1P30_Status = MASTER_B.C1P30_Status_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.C1P31_Status = MASTER_B.C1P31_Status_j;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.C1P33_Status = MASTER_B.C1P33_Status_c;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.C1P34_Status = MASTER_B.C1P34_Status_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.MMotorMeasuredRL = MASTER_B.MMotorMeasuredRL_a;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.C1P36_Status = MASTER_B.C1P36_Status_c;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.C1P37_Status = MASTER_B.C1P37_Status_i;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.C1P38_Status = MASTER_B.C1P38_Status_mf;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.C2P01_Status = MASTER_B.C2P01_Status_i;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.C2P02_Status = MASTER_B.C2P02_Status_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.C2P03_Status = MASTER_B.C2P03_Status_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.C2P04_Status = MASTER_B.C2P04_Status_o;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.C2P05_Status = MASTER_B.C2P05_Status_mh;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.C2P13_Status = MASTER_B.C2P13_Status_p;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  MASTER_B.C2P25_Status = MASTER_B.C2P25_Status_a;

  /* ModelReference generated from: '<Root>/TORQUECONTROL' */
  TORQUECONTROL(&MASTER_B.nMotorRL, &MASTER_B.VDCInvRL, &MASTER_B.nMotorFL,
                &MASTER_B.nMotorRR, &MASTER_B.nMotorFR, &MASTER_B.vWheelRL,
                &MASTER_B.vWheelRR, &MASTER_B.vWheelFL, &MASTER_B.vWheelFR,
                &MASTER_B.gLongitudinalOXTSIMU, &MASTER_B.nYawRateOXTSIMU,
                &MASTER_B.IIVTS, &MASTER_B.rThrottlePedal, &MASTER_B.pBrakeMax,
                &MASTER_B.rSteeringAngle_h, &MASTER_B.aSteeringAngle,
                &MASTER_B.rRegenPaddle_g, &MASTER_B.vChassis_e,
                &MASTER_B.BEMS1000mPoint, &MASTER_B.BEMS995mPoint,
                &MASTER_B.BTorqueVectoringActivated, &MASTER_B.NThrottleMap,
                &MASTER_B.PDischarge, &MASTER_B.BEMSActivated, &MASTER_B.PRegen,
                &MASTER_B.PEngineBraking, &MASTER_B.BSpinningModelActivated,
                &MASTER_B.NTractionControlKpSelector,
                &MASTER_B.BTractionControlActivated,
                &MASTER_B.rTorqueVectoringMultiplier,
                &MASTER_B.NPowerControllerKpSelector, &MASTER_B.PActual_m,
                &MASTER_B.rSOC_d, &MASTER_B.rSOE, &MASTER_B.BEncoderErrorRear,
                &MASTER_B.BEncoderErrorFront, &MASTER_B.BReadyToDrive,
                &MASTER_B.rTSTemperatureDerateFR,
                &MASTER_B.rTSTemperatureDerateFL,
                &MASTER_B.rTSTemperatureDerateRR,
                &MASTER_B.rTSTemperatureDerateRL, &MASTER_B.rDischargeDerate_k,
                &MASTER_B.rRegenDerate_l, &MASTER_B.MDriverDischargeRequested_a,
                &MASTER_B.MDriverRegenRequested_m, &MASTER_B.MDischargeLimited,
                &MASTER_B.MRegenLimited, &MASTER_B.PPowerControllerRequested,
                &MASTER_B.MPowerControllerRequested,
                &MASTER_B.PPowerControllerProportionalTer,
                &MASTER_B.PPowerControllerIntegralTerm,
                &MASTER_B.PDischargeLimited, &MASTER_B.MTotalRequested_h,
                &MASTER_B.MTotalEMSRequested, &MASTER_B.rSOCTargetError,
                &MASTER_B.rSOETargetError, &MASTER_B.nYawRateErrorActual,
                &MASTER_B.BTorqueVectoringOK, &MASTER_B.MTorqueVectoringFL,
                &MASTER_B.MTorqueVectoringFR, &MASTER_B.MTorqueVectoringRL,
                &MASTER_B.MTorqueVectoringRR, &MASTER_B.rSplitRear,
                &MASTER_B.MTorqueDistributionFL, &MASTER_B.MTorqueDistributionFR,
                &MASTER_B.MTorqueDistributionRL, &MASTER_B.MTorqueDistributionRR,
                &MASTER_B.rSlipRatioOptimal,
                &MASTER_B.NTractionControlMultiplierFL,
                &MASTER_B.NTractionControlMultiplierFR,
                &MASTER_B.NTractionControlMultiplierRL,
                &MASTER_B.NTractionControlMultiplierRR,
                &MASTER_B.NABSMultiplierFL, &MASTER_B.NABSMultiplierFR,
                &MASTER_B.NABSMultiplierRL, &MASTER_B.NABSMultiplierRR,
                &MASTER_B.rSlipRatioFLActual, &MASTER_B.rSlipRatioFRActual,
                &MASTER_B.rSlipRatioRLActual, &MASTER_B.rSlipRatioRRActual,
                &MASTER_B.MTractionControlFLTotal,
                &MASTER_B.MTractionControlFRTotal,
                &MASTER_B.MTractionControlRLTotal,
                &MASTER_B.MTractionControlRRTotal,
                &MASTER_B.MTractionControlFLFinal,
                &MASTER_B.MTractionControlFRFinal,
                &MASTER_B.MTractionControlRLFinal,
                &MASTER_B.MTractionControlRRFinal, &MASTER_B.MSpinningModelFL,
                &MASTER_B.MSpinningModelFR, &MASTER_B.MSpinningModelRL,
                &MASTER_B.MSpinningModelRR, &MASTER_B.MFLFinal,
                &MASTER_B.MFRFinal, &MASTER_B.MRLFinal, &MASTER_B.MRRFinal,
                &MASTER_B.MTotalFinal,
                &(MASTER_DW.TORQUECONTROL_InstanceData.rtdw));

  /* End of Outputs for S-Function (fcgen): '<Root>/Function-Call Generator1' */

  /* BusCreator generated from: '<Root>/Global' */
  MASTER_Y.Global_b.SystemsBus.rThrottlePedal = MASTER_B.rThrottlePedal_k;
  MASTER_Y.Global_b.SystemsBus.BThrottleError = MASTER_B.BThrottleError_a;
  MASTER_Y.Global_b.SystemsBus.tThrottleError = MASTER_B.tThrottleError_o;
  MASTER_Y.Global_b.SystemsBus.BBrakeError = MASTER_B.BBrakeError_a;
  MASTER_Y.Global_b.SystemsBus.tBrakeError = MASTER_B.tBrakeError_f;
  MASTER_Y.Global_b.SystemsBus.BBrakeOn = MASTER_B.BBrakeOn_ph;
  MASTER_Y.Global_b.SystemsBus.pBrakeMax = MASTER_B.pBrakeMax_d2;
  MASTER_Y.Global_b.SystemsBus.BPedalOverlap = MASTER_B.BPedalOverlap_m;
  MASTER_Y.Global_b.SystemsBus.tPedalOverlap = MASTER_B.tPedalOverlap_h;
  MASTER_Y.Global_b.SystemsBus.BAppsOK = MASTER_B.BAppsOK_m;
  MASTER_Y.Global_b.SystemsBus.tAppsTimer = MASTER_B.tAppsTimer_h;
  MASTER_Y.Global_b.SystemsBus.rSteeringAngle = MASTER_B.rSteeringAngle_e;
  MASTER_Y.Global_b.SystemsBus.aSteeringAngle = MASTER_B.aSteeringAngle_c;
  MASTER_Y.Global_b.SystemsBus.rRegenPaddle = MASTER_B.rRegenPaddle_n;
  MASTER_Y.Global_b.SystemsBus.BRegenOn = MASTER_B.BRegenOn_l;
  MASTER_Y.Global_b.SystemsBus.BBrakeLight = MASTER_B.BBrakeLight_n;
  MASTER_Y.Global_b.SystemsBus.xDamperFL = MASTER_B.xDamperFL_g;
  MASTER_Y.Global_b.SystemsBus.xDamperFR = MASTER_B.xDamperFR_d;
  MASTER_Y.Global_b.SystemsBus.xDamperRL = MASTER_B.xDamperRL_b;
  MASTER_Y.Global_b.SystemsBus.xDamperRR = MASTER_B.xDamperRR_h;
  MASTER_Y.Global_b.SystemsBus.BDamperErrorFL = MASTER_B.BDamperErrorFL_g;
  MASTER_Y.Global_b.SystemsBus.BDamperErrorFR = MASTER_B.BDamperErrorFR_m;
  MASTER_Y.Global_b.SystemsBus.BDamperErrorRL = MASTER_B.BDamperErrorRL_d;
  MASTER_Y.Global_b.SystemsBus.BDamperErrorRR = MASTER_B.BDamperErrorRR_c;
  MASTER_Y.Global_b.SystemsBus.vChassis = MASTER_B.vChassis_d;
  MASTER_Y.Global_b.SystemsBus.sChassis = MASTER_B.sChassis_m;
  MASTER_Y.Global_b.SystemsBus.sEMS1000m = MASTER_B.sEMS1000m_c;
  MASTER_Y.Global_b.SystemsBus.BEMS1000mPoint = MASTER_B.BEMS1000mPoint_g;
  MASTER_Y.Global_b.SystemsBus.BEMS995mPoint = MASTER_B.BEMS995mPoint_g;
  MASTER_Y.Global_b.SystemsBus.BTorqueVectoringActivated =
    MASTER_B.BTorqueVectoringActivated_c;
  MASTER_Y.Global_b.SystemsBus.NThrottleMap = MASTER_B.NThrottleMap_ce;
  MASTER_Y.Global_b.SystemsBus.PDischarge = MASTER_B.PDischarge_n;
  MASTER_Y.Global_b.SystemsBus.BEMSActivated = MASTER_B.BEMSActivated_i;
  MASTER_Y.Global_b.SystemsBus.PRegen = MASTER_B.PRegen_o;
  MASTER_Y.Global_b.SystemsBus.rTorqueSplit = MASTER_B.rTorqueSplit_b;
  MASTER_Y.Global_b.SystemsBus.PEngineBraking = MASTER_B.PEngineBraking_m;
  MASTER_Y.Global_b.SystemsBus.BSpinningModelActivated =
    MASTER_B.BSpinningModelActivated_l;
  MASTER_Y.Global_b.SystemsBus.NTractionControlKpSelector =
    MASTER_B.NTractionControlKpSelector_m;
  MASTER_Y.Global_b.SystemsBus.BTractionControlActivated =
    MASTER_B.BTractionControlActivated_n;
  MASTER_Y.Global_b.SystemsBus.rTorqueVectoringMultiplier =
    MASTER_B.rTorqueVectoringMultiplier_p;
  MASTER_Y.Global_b.SystemsBus.NPowerControllerKpSelector =
    MASTER_B.NPowerControllerKpSelector_a;
  MASTER_Y.Global_b.SystemsBus.NTorqueSplitSpeedSelector =
    MASTER_B.NTorqueSplitSpeedSelector_h;
  MASTER_Y.Global_b.SystemsBus.BAccumulatorFanOn = MASTER_B.BAccumulatorFanOn_c;
  MASTER_Y.Global_b.SystemsBus.BErrorReset = MASTER_B.BErrorReset_a;
  MASTER_Y.Global_b.SystemsBus.BReadyToDriveButton =
    MASTER_B.BReadyToDriveButton_g2;
  MASTER_Y.Global_b.SystemsBus.NModeNumberDisplay5 =
    MASTER_B.NModeNumberDisplay5_j;
  MASTER_Y.Global_b.SystemsBus.NModeNumberDisplay6 =
    MASTER_B.NModeNumberDisplay6_k;
  MASTER_Y.Global_b.SystemsBus.TMotorMax = MASTER_B.TMotorMax_j;
  MASTER_Y.Global_b.SystemsBus.TInvMax = MASTER_B.TInvMax_c;
  MASTER_Y.Global_b.SystemsBus.PActual = MASTER_B.PActual_a;
  MASTER_Y.Global_b.SystemsBus.rSOC = MASTER_B.rSOC_i;
  MASTER_Y.Global_b.SystemsBus.rSOE = MASTER_B.rSOE_b;
  MASTER_Y.Global_b.SystemsBus.BEncoderErrorRear = MASTER_B.BEncoderErrorRear_d;
  MASTER_Y.Global_b.SystemsBus.BEncoderErrorFront =
    MASTER_B.BEncoderErrorFront_iu5;
  MASTER_Y.Global_b.SystemsBus.rCoolingFansDuty = MASTER_B.rCoolingFansDuty_a;
  MASTER_Y.Global_b.SystemsBus.rCoolingPumpsDuty = MASTER_B.rCoolingPumpsDuty_l;
  MASTER_Y.Global_b.SystemsBus.BAccumulatorFanDuty =
    MASTER_B.BAccumulatorFanDuty_d;
  MASTER_Y.Global_b.SystemsBus.BInvLVOn = MASTER_B.BInvLVOn_l;
  MASTER_Y.Global_b.SystemsBus.rThrottlePedal1 = MASTER_B.rThrottlePedal1_k;
  MASTER_Y.Global_b.SystemsBus.rThrottlePedal2 = MASTER_B.rThrottlePedal2_b;

  /* BusCreator generated from: '<Root>/Global' */
  MASTER_Y.Global_b.StateflowBus.NCarState = MASTER_B.NCarState_n;
  MASTER_Y.Global_b.StateflowBus.BReadyToDriveBuzzer =
    MASTER_B.BReadyToDriveBuzzer_l;
  MASTER_Y.Global_b.StateflowBus.BReadyToDrive = MASTER_B.BReadyToDrive_c0;
  MASTER_Y.Global_b.StateflowBus.NBMSState = MASTER_B.NBMSState_b;
  MASTER_Y.Global_b.StateflowBus.NInvState = MASTER_B.NInvState_g;
  MASTER_Y.Global_b.StateflowBus.BHVOn = MASTER_B.BHVOn_e1;
  MASTER_Y.Global_b.StateflowBus.BInvOnRL = MASTER_B.BInvOnRL_i;
  MASTER_Y.Global_b.StateflowBus.BInvOnRR = MASTER_B.BInvOnRR_p;
  MASTER_Y.Global_b.StateflowBus.BInvOnFL = MASTER_B.BInvOnFL_f;
  MASTER_Y.Global_b.StateflowBus.BInvOnFR = MASTER_B.BInvOnFR_k;
  MASTER_Y.Global_b.StateflowBus.BInvDCOnRL = MASTER_B.BInvDCOnRL_i;
  MASTER_Y.Global_b.StateflowBus.BInvDCOnRR = MASTER_B.BInvDCOnRR_o;
  MASTER_Y.Global_b.StateflowBus.BInvDCOnFL = MASTER_B.BInvDCOnFL_k;
  MASTER_Y.Global_b.StateflowBus.BInvDCOnFR = MASTER_B.BInvDCOnFR_n;
  MASTER_Y.Global_b.StateflowBus.BInvEnableRL = MASTER_B.BInvEnableRL_l;
  MASTER_Y.Global_b.StateflowBus.BInvEnableRR = MASTER_B.BInvEnableRR_b;
  MASTER_Y.Global_b.StateflowBus.BInvEnableFL = MASTER_B.BInvEnableFL_n;
  MASTER_Y.Global_b.StateflowBus.BInvEnableFR = MASTER_B.BInvEnableFR_p;
  MASTER_Y.Global_b.StateflowBus.BInvErrorResetRL = MASTER_B.BInvErrorResetRL_d;
  MASTER_Y.Global_b.StateflowBus.BInvErrorResetRR = MASTER_B.BInvErrorResetRR_j;
  MASTER_Y.Global_b.StateflowBus.BInvErrorResetFL = MASTER_B.BInvErrorResetFL_b;
  MASTER_Y.Global_b.StateflowBus.BInvErrorResetFR = MASTER_B.BInvErrorResetFR_k;
  MASTER_Y.Global_b.StateflowBus.MTargetTorqueRL = MASTER_B.MTargetTorqueRL_b;
  MASTER_Y.Global_b.StateflowBus.MTargetTorqueRR = MASTER_B.MTargetTorqueRR_oi;
  MASTER_Y.Global_b.StateflowBus.MTargetTorqueFL = MASTER_B.MTargetTorqueFL_p;
  MASTER_Y.Global_b.StateflowBus.MTargetTorqueFR = MASTER_B.MTargetTorqueFR_o;
  MASTER_Y.Global_b.StateflowBus.MTorqueLimitNegativeRL =
    MASTER_B.MTorqueLimitNegativeRL_l;
  MASTER_Y.Global_b.StateflowBus.MTorqueLimitNegativeRR =
    MASTER_B.MTorqueLimitNegativeRR_c;
  MASTER_Y.Global_b.StateflowBus.MTorqueLimitNegativeFL =
    MASTER_B.MTorqueLimitNegativeFL_n;
  MASTER_Y.Global_b.StateflowBus.MTorqueLimitNegativeFR =
    MASTER_B.MTorqueLimitNegativeFR_k;
  MASTER_Y.Global_b.StateflowBus.MTorqueLimitPositiveRL =
    MASTER_B.MTorqueLimitPositiveRL_a;
  MASTER_Y.Global_b.StateflowBus.MTorqueLimitPositiveRR =
    MASTER_B.MTorqueLimitPositiveRR_n;
  MASTER_Y.Global_b.StateflowBus.MTorqueLimitPositiveFL =
    MASTER_B.MTorqueLimitPositiveFL_k;
  MASTER_Y.Global_b.StateflowBus.MTorqueLimitPositiveFR =
    MASTER_B.MTorqueLimitPositiveFR_f;

  /* BusCreator generated from: '<Root>/Global' */
  MASTER_Y.Global_b.LimitationsBus.BDischargeAllowed =
    MASTER_B.BDischargeAllowed_c;
  MASTER_Y.Global_b.LimitationsBus.rInvTemperatureDerate =
    MASTER_B.rInvTemperatureDerate_h;
  MASTER_Y.Global_b.LimitationsBus.rInvTemperatureDerateFR =
    MASTER_B.rInvTemperatureDerateFR_e;
  MASTER_Y.Global_b.LimitationsBus.rInvTemperatureDerateFL =
    MASTER_B.rInvTemperatureDerateFL_g;
  MASTER_Y.Global_b.LimitationsBus.rInvTemperatureDerateRR =
    MASTER_B.rInvTemperatureDerateRR_l;
  MASTER_Y.Global_b.LimitationsBus.rInvTemperatureDerateRL =
    MASTER_B.rInvTemperatureDerateRL_c;
  MASTER_Y.Global_b.LimitationsBus.rMotorTemperatureDerate =
    MASTER_B.rMotorTemperatureDerate_b;
  MASTER_Y.Global_b.LimitationsBus.rMotorTemperatureDerateFR =
    MASTER_B.rMotorTemperatureDerateFR_i;
  MASTER_Y.Global_b.LimitationsBus.rMotorTemperatureDerateFL =
    MASTER_B.rMotorTemperatureDerateFL_f;
  MASTER_Y.Global_b.LimitationsBus.rMotorTemperatureDerateRR =
    MASTER_B.rMotorTemperatureDerateRR_a;
  MASTER_Y.Global_b.LimitationsBus.rMotorTemperatureDerateRL =
    MASTER_B.rMotorTemperatureDerateRL_l;
  MASTER_Y.Global_b.LimitationsBus.rTSTemperatureDerateFR =
    MASTER_B.rTSTemperatureDerateFR_o;
  MASTER_Y.Global_b.LimitationsBus.rTSTemperatureDerateFL =
    MASTER_B.rTSTemperatureDerateFL_h;
  MASTER_Y.Global_b.LimitationsBus.rTSTemperatureDerateRR =
    MASTER_B.rTSTemperatureDerateRR_o;
  MASTER_Y.Global_b.LimitationsBus.rTSTemperatureDerateRL =
    MASTER_B.rTSTemperatureDerateRL_e;
  MASTER_Y.Global_b.LimitationsBus.rHighCellTemperatureDischargeDerate =
    MASTER_B.rHighCellTemperatureDischarge_o;
  MASTER_Y.Global_b.LimitationsBus.rHighCellTemperatureRegenDerate =
    MASTER_B.rHighCellTemperatureRegenDera_b;
  MASTER_Y.Global_b.LimitationsBus.rLowCellVoltageDischargeDerate =
    MASTER_B.rLowCellVoltageDischargeDerat_b;
  MASTER_Y.Global_b.LimitationsBus.rSOCDischargeDerate =
    MASTER_B.rSOCDischargeDerate_i;
  MASTER_Y.Global_b.LimitationsBus.rSOCRegenDerate = MASTER_B.rSOCRegenDerate_d;
  MASTER_Y.Global_b.LimitationsBus.rSpeedRegenDerate =
    MASTER_B.rSpeedRegenDerate_n4;
  MASTER_Y.Global_b.LimitationsBus.rDischargeDerate =
    MASTER_B.rDischargeDerate_g;
  MASTER_Y.Global_b.LimitationsBus.rRegenDerate = MASTER_B.rRegenDerate_b;

  /* BusCreator generated from: '<Root>/Global' */
  MASTER_Y.Global_b.TorqueControlBus.MDriverDischargeRequested =
    MASTER_B.MDriverDischargeRequested_a;
  MASTER_Y.Global_b.TorqueControlBus.MDriverRegenRequested =
    MASTER_B.MDriverRegenRequested_m;
  MASTER_Y.Global_b.TorqueControlBus.MDischargeLimited =
    MASTER_B.MDischargeLimited;
  MASTER_Y.Global_b.TorqueControlBus.MRegenLimited = MASTER_B.MRegenLimited;
  MASTER_Y.Global_b.TorqueControlBus.PPowerControllerRequested =
    MASTER_B.PPowerControllerRequested;
  MASTER_Y.Global_b.TorqueControlBus.MPowerControllerRequested =
    MASTER_B.MPowerControllerRequested;
  MASTER_Y.Global_b.TorqueControlBus.PPowerControllerProportionalTerm =
    MASTER_B.PPowerControllerProportionalTer;
  MASTER_Y.Global_b.TorqueControlBus.PPowerControllerIntegralTerm =
    MASTER_B.PPowerControllerIntegralTerm;
  MASTER_Y.Global_b.TorqueControlBus.PDischargeLimited =
    MASTER_B.PDischargeLimited;
  MASTER_Y.Global_b.TorqueControlBus.MTotalRequested =
    MASTER_B.MTotalRequested_h;
  MASTER_Y.Global_b.TorqueControlBus.MTotalEMSRequested =
    MASTER_B.MTotalEMSRequested;
  MASTER_Y.Global_b.TorqueControlBus.rSOCTargetError = MASTER_B.rSOCTargetError;
  MASTER_Y.Global_b.TorqueControlBus.rSOETargetError = MASTER_B.rSOETargetError;
  MASTER_Y.Global_b.TorqueControlBus.nYawRateErrorActual =
    MASTER_B.nYawRateErrorActual;
  MASTER_Y.Global_b.TorqueControlBus.BTorqueVectoringOK =
    MASTER_B.BTorqueVectoringOK;
  MASTER_Y.Global_b.TorqueControlBus.MTorqueVectoringFL =
    MASTER_B.MTorqueVectoringFL;
  MASTER_Y.Global_b.TorqueControlBus.MTorqueVectoringFR =
    MASTER_B.MTorqueVectoringFR;
  MASTER_Y.Global_b.TorqueControlBus.MTorqueVectoringRL =
    MASTER_B.MTorqueVectoringRL;
  MASTER_Y.Global_b.TorqueControlBus.MTorqueVectoringRR =
    MASTER_B.MTorqueVectoringRR;
  MASTER_Y.Global_b.TorqueControlBus.rSplitRear = MASTER_B.rSplitRear;
  MASTER_Y.Global_b.TorqueControlBus.MTorqueDistributionFL =
    MASTER_B.MTorqueDistributionFL;
  MASTER_Y.Global_b.TorqueControlBus.MTorqueDistributionFR =
    MASTER_B.MTorqueDistributionFR;
  MASTER_Y.Global_b.TorqueControlBus.MTorqueDistributionRL =
    MASTER_B.MTorqueDistributionRL;
  MASTER_Y.Global_b.TorqueControlBus.MTorqueDistributionRR =
    MASTER_B.MTorqueDistributionRR;
  MASTER_Y.Global_b.TorqueControlBus.rSlipRatioOptimal =
    MASTER_B.rSlipRatioOptimal;
  MASTER_Y.Global_b.TorqueControlBus.NTractionControlMultiplierFL =
    MASTER_B.NTractionControlMultiplierFL;
  MASTER_Y.Global_b.TorqueControlBus.NTractionControlMultiplierFR =
    MASTER_B.NTractionControlMultiplierFR;
  MASTER_Y.Global_b.TorqueControlBus.NTractionControlMultiplierRL =
    MASTER_B.NTractionControlMultiplierRL;
  MASTER_Y.Global_b.TorqueControlBus.NTractionControlMultiplierRR =
    MASTER_B.NTractionControlMultiplierRR;
  MASTER_Y.Global_b.TorqueControlBus.NABSMultiplierFL =
    MASTER_B.NABSMultiplierFL;
  MASTER_Y.Global_b.TorqueControlBus.NABSMultiplierFR =
    MASTER_B.NABSMultiplierFR;
  MASTER_Y.Global_b.TorqueControlBus.NABSMultiplierRL =
    MASTER_B.NABSMultiplierRL;
  MASTER_Y.Global_b.TorqueControlBus.NABSMultiplierRR =
    MASTER_B.NABSMultiplierRR;
  MASTER_Y.Global_b.TorqueControlBus.rSlipRatioFLActual =
    MASTER_B.rSlipRatioFLActual;
  MASTER_Y.Global_b.TorqueControlBus.rSlipRatioFRActual =
    MASTER_B.rSlipRatioFRActual;
  MASTER_Y.Global_b.TorqueControlBus.rSlipRatioRLActual =
    MASTER_B.rSlipRatioRLActual;
  MASTER_Y.Global_b.TorqueControlBus.rSlipRatioRRActual =
    MASTER_B.rSlipRatioRRActual;
  MASTER_Y.Global_b.TorqueControlBus.MTractionControlFLTotal =
    MASTER_B.MTractionControlFLTotal;
  MASTER_Y.Global_b.TorqueControlBus.MTractionControlFRTotal =
    MASTER_B.MTractionControlFRTotal;
  MASTER_Y.Global_b.TorqueControlBus.MTractionControlRLTotal =
    MASTER_B.MTractionControlRLTotal;
  MASTER_Y.Global_b.TorqueControlBus.MTractionControlRRTotal =
    MASTER_B.MTractionControlRRTotal;
  MASTER_Y.Global_b.TorqueControlBus.MTractionControlFLFinal =
    MASTER_B.MTractionControlFLFinal;
  MASTER_Y.Global_b.TorqueControlBus.MTractionControlFRFinal =
    MASTER_B.MTractionControlFRFinal;
  MASTER_Y.Global_b.TorqueControlBus.MTractionControlRLFinal =
    MASTER_B.MTractionControlRLFinal;
  MASTER_Y.Global_b.TorqueControlBus.MTractionControlRRFinal =
    MASTER_B.MTractionControlRRFinal;
  MASTER_Y.Global_b.TorqueControlBus.MSpinningModelFL =
    MASTER_B.MSpinningModelFL;
  MASTER_Y.Global_b.TorqueControlBus.MSpinningModelFR =
    MASTER_B.MSpinningModelFR;
  MASTER_Y.Global_b.TorqueControlBus.MSpinningModelRL =
    MASTER_B.MSpinningModelRL;
  MASTER_Y.Global_b.TorqueControlBus.MSpinningModelRR =
    MASTER_B.MSpinningModelRR;
  MASTER_Y.Global_b.TorqueControlBus.MFLFinal = MASTER_B.MFLFinal;
  MASTER_Y.Global_b.TorqueControlBus.MFRFinal = MASTER_B.MFRFinal;
  MASTER_Y.Global_b.TorqueControlBus.MRLFinal = MASTER_B.MRLFinal;
  MASTER_Y.Global_b.TorqueControlBus.MRRFinal = MASTER_B.MRRFinal;
  MASTER_Y.Global_b.TorqueControlBus.MTotalFinal = MASTER_B.MTotalFinal;
}

/* Model initialize function */
void MASTER_initialize(void)
{
  /* Model Initialize function for ModelReference Block: '<Root>/INPUT' */
  INPUT_initialize(rtmGetErrorStatusPointer(MASTER_M),
                   &(MASTER_DW.INPUT_InstanceData.rtm),
                   &(MASTER_DW.INPUT_InstanceData.rtdw));

  /* Model Initialize function for ModelReference Block: '<Root>/LIMITATIONS' */
  LIMITATIONS_initialize(rtmGetErrorStatusPointer(MASTER_M),
    &(MASTER_DW.LIMITATIONS_InstanceData.rtm),
    &(MASTER_DW.LIMITATIONS_InstanceData.rtdw));

  /* Model Initialize function for ModelReference Block: '<Root>/STATEFLOW' */
  STATEFLOW_initialize(rtmGetErrorStatusPointer(MASTER_M),
                       &(MASTER_DW.STATEFLOW_InstanceData.rtm),
                       &(MASTER_DW.STATEFLOW_InstanceData.rtdw));

  /* Model Initialize function for ModelReference Block: '<Root>/SYSTEMS' */
  SYSTEMS_initialize(rtmGetErrorStatusPointer(MASTER_M),
                     &(MASTER_DW.SYSTEMS_InstanceData.rtm),
                     &(MASTER_DW.SYSTEMS_InstanceData.rtb),
                     &(MASTER_DW.SYSTEMS_InstanceData.rtdw));

  /* Model Initialize function for ModelReference Block: '<Root>/TORQUECONTROL' */
  TORQUECONTROL_initialize(rtmGetErrorStatusPointer(MASTER_M),
    &(MASTER_DW.TORQUECONTROL_InstanceData.rtm),
    &(MASTER_DW.TORQUECONTROL_InstanceData.rtdw));

  /* SystemInitialize for S-Function (fcgen): '<Root>/Function-Call Generator1' */

  /* SystemInitialize for ModelReference generated from: '<Root>/SYSTEMS' */
  SYSTEMS_Init(&(MASTER_DW.SYSTEMS_InstanceData.rtdw));

  /* SystemInitialize for ModelReference generated from: '<Root>/STATEFLOW' */
  STATEFLOW_Init(&(MASTER_DW.STATEFLOW_InstanceData.rtdw));

  /* SystemInitialize for ModelReference generated from: '<Root>/TORQUECONTROL' */
  TORQUECONTROL_Init(&(MASTER_DW.TORQUECONTROL_InstanceData.rtdw));

  /* End of SystemInitialize for S-Function (fcgen): '<Root>/Function-Call Generator1' */

  /* user code (Initialize function Body) */
  LL_TIM_EnableCounter(TIM2);
}

/* Model terminate function */
void MASTER_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
