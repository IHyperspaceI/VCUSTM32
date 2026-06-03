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
 * C/C++ source code generated on : Wed Jun  3 14:57:15 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "INPUT.h"
#include "rtwtypes.h"
#include "INPUT_private.h"
#include "WheelSpeeds.h"
#include "InverterSignals.h"
#include "BMSSignals.h"
#include "SensorSignals.h"
#include "GPSIMUSignals.h"

/* Output and update for referenced model: 'INPUT' */
void INPUT(const real_T *rtu_InverterCAN_InverterFLCANBu, const boolean_T
           *rtu_InverterCAN_InverterFLCAN_g, const boolean_T
           *rtu_InverterCAN_InverterFLCAN_c, const boolean_T
           *rtu_InverterCAN_InverterFLCAN_e, const boolean_T
           *rtu_InverterCAN_InverterFLCAN_n, const boolean_T
           *rtu_InverterCAN_InverterFLCAN_f, const boolean_T
           *rtu_InverterCAN_InverterFLCAN_k, const boolean_T
           *rtu_InverterCAN_InverterFLCAN_h, const real_T
           *rtu_InverterCAN_InverterFLCA_kw, const real_T
           *rtu_InverterCAN_InverterFLCA_ka, const real_T
           *rtu_InverterCAN_InverterFLC_kaa, const real_T
           *rtu_InverterCAN_InverterFLCA_el, const real_T
           *rtu_InverterCAN_InverterFLCA_cj, const real_T
           *rtu_InverterCAN_InverterFRCANBu, const boolean_T
           *rtu_InverterCAN_InverterFRCAN_o, const boolean_T
           *rtu_InverterCAN_InverterFRCAN_p, const boolean_T
           *rtu_InverterCAN_InverterFRCAN_d, const boolean_T
           *rtu_InverterCAN_InverterFRCA_dm, const boolean_T
           *rtu_InverterCAN_InverterFRCAN_g, const boolean_T
           *rtu_InverterCAN_InverterFRCAN_m, const boolean_T
           *rtu_InverterCAN_InverterFRCA_pd, const real_T
           *rtu_InverterCAN_InverterFRCAN_i, const real_T
           *rtu_InverterCAN_InverterFRCA_pr, const real_T
           *rtu_InverterCAN_InverterFRCA_pe, const real_T
           *rtu_InverterCAN_InverterFRCA_o3, const real_T
           *rtu_InverterCAN_InverterFRCAN_e, const real_T
           *rtu_InverterCAN_InverterRLCANBu, const boolean_T
           *rtu_InverterCAN_InverterRLCAN_j, const boolean_T
           *rtu_InverterCAN_InverterRLCAN_p, const boolean_T
           *rtu_InverterCAN_InverterRLCAN_m, const boolean_T
           *rtu_InverterCAN_InverterRLCA_p2, const boolean_T
           *rtu_InverterCAN_InverterRLCAN_i, const boolean_T
           *rtu_InverterCAN_InverterRLCAN_k, const boolean_T
           *rtu_InverterCAN_InverterRLCAN_h, const real_T
           *rtu_InverterCAN_InverterRLCAN_b, const real_T
           *rtu_InverterCAN_InverterRLCAN_n, const real_T
           *rtu_InverterCAN_InverterRLCAN_g, const real_T
           *rtu_InverterCAN_InverterRLCA_go, const real_T
           *rtu_InverterCAN_InverterRLCAN_e, const real_T
           *rtu_InverterCAN_InverterRRCANBu, const boolean_T
           *rtu_InverterCAN_InverterRRCAN_b, const boolean_T
           *rtu_InverterCAN_InverterRRCAN_c, const boolean_T
           *rtu_InverterCAN_InverterRRCAN_l, const boolean_T
           *rtu_InverterCAN_InverterRRCAN_p, const boolean_T
           *rtu_InverterCAN_InverterRRCA_py, const boolean_T
           *rtu_InverterCAN_InverterRRCAN_e, const boolean_T
           *rtu_InverterCAN_InverterRRCA_px, const real_T
           *rtu_InverterCAN_InverterRRCAN_m, const real_T
           *rtu_InverterCAN_InverterRRCAN_n, const real_T
           *rtu_InverterCAN_InverterRRCAN_f, const real_T
           *rtu_InverterCAN_InverterRRCAN_d, const real_T
           *rtu_InverterCAN_InverterRRCA_mw, const real_T
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
           *rtu_CAN3_SteeringWheelBus_VRe_j, const real_T *rtu_BMSCAN_IIVTS,
           const real_T *rtu_BMSCAN_IBMSHallEffect, const real_T
           *rtu_BMSCAN_VDCAccumulator, const real_T *rtu_BMSCAN_TCellMin, const
           real_T *rtu_BMSCAN_VCellAverage, const real_T *rtu_BMSCAN_VCellMax,
           const real_T *rtu_BMSCAN_TCellMax, const real_T *rtu_BMSCAN_NBMSDLC,
           const real_T *rtu_BMSCAN_VCellMin, const real_T
           *rtu_BMSCAN_RCellAverage, const real_T *rtu_BMSCAN_BBalancingActive,
           const real_T *rtu_BMSCAN_BBMSP0A0C, const real_T
           *rtu_BMSCAN_BBMSP0A0E, const real_T *rtu_BMSCAN_BBMSP0A10, const
           real_T *rtu_BMSCAN_BBMSP0A80, const real_T *rtu_BMSCAN_BBMSP0AC0,
           const real_T *rtu_BMSCAN_BBMSP0AFA, real_T
           *rty_InverterSignalsBus_Inverter, boolean_T
           *rty_InverterSignalsBus_Invert_g, boolean_T
           *rty_InverterSignalsBus_Invert_c, boolean_T
           *rty_InverterSignalsBus_Invert_e, boolean_T
           *rty_InverterSignalsBus_Invert_n, boolean_T
           *rty_InverterSignalsBus_Invert_f, boolean_T
           *rty_InverterSignalsBus_Invert_k, boolean_T
           *rty_InverterSignalsBus_Invert_h, real_T
           *rty_InverterSignalsBus_Inver_kw, real_T
           *rty_InverterSignalsBus_Inver_ka, real_T
           *rty_InverterSignalsBus_Inve_kaa, real_T
           *rty_InverterSignalsBus_Inver_el, real_T
           *rty_InverterSignalsBus_Inver_cj, real_T
           *rty_InverterSignalsBus_Inver_ez, boolean_T
           *rty_InverterSignalsBus_Invert_o, boolean_T
           *rty_InverterSignalsBus_Invert_p, boolean_T
           *rty_InverterSignalsBus_Invert_d, boolean_T
           *rty_InverterSignalsBus_Inver_dm, boolean_T
           *rty_InverterSignalsBus_Inver_gy, boolean_T
           *rty_InverterSignalsBus_Invert_m, boolean_T
           *rty_InverterSignalsBus_Inver_pd, real_T
           *rty_InverterSignalsBus_Invert_i, real_T
           *rty_InverterSignalsBus_Inver_pr, real_T
           *rty_InverterSignalsBus_Inver_pe, real_T
           *rty_InverterSignalsBus_Inver_o3, real_T
           *rty_InverterSignalsBus_Inver_e4, real_T
           *rty_InverterSignalsBus_Inver_mc, boolean_T
           *rty_InverterSignalsBus_Invert_j, boolean_T
           *rty_InverterSignalsBus_Inver_po, boolean_T
           *rty_InverterSignalsBus_Inver_m3, boolean_T
           *rty_InverterSignalsBus_Inver_p2, boolean_T
           *rty_InverterSignalsBus_Inver_i3, boolean_T
           *rty_InverterSignalsBus_Inve_ka1, boolean_T
           *rty_InverterSignalsBus_Inver_hs, real_T
           *rty_InverterSignalsBus_Invert_b, real_T
           *rty_InverterSignalsBus_Inver_ng, real_T
           *rty_InverterSignalsBus_Inve_gye, real_T
           *rty_InverterSignalsBus_Inver_go, real_T
           *rty_InverterSignalsBus_Inver_ep, real_T
           *rty_InverterSignalsBus_Inver_kf, boolean_T
           *rty_InverterSignalsBus_Inver_bn, boolean_T
           *rty_InverterSignalsBus_Inver_c4, boolean_T
           *rty_InverterSignalsBus_Invert_l, boolean_T
           *rty_InverterSignalsBus_Inver_p4, boolean_T
           *rty_InverterSignalsBus_Inver_py, boolean_T
           *rty_InverterSignalsBus_Inver_en, boolean_T
           *rty_InverterSignalsBus_Inver_px, real_T
           *rty_InverterSignalsBus_Inver_mk, real_T
           *rty_InverterSignalsBus_Inver_nk, real_T
           *rty_InverterSignalsBus_Inver_fp, real_T
           *rty_InverterSignalsBus_Inver_df, real_T
           *rty_InverterSignalsBus_Inver_mw, real_T *rty_WheelSpeedsBus_vWheelRL,
           real_T *rty_WheelSpeedsBus_vWheelRR, real_T
           *rty_WheelSpeedsBus_vWheelFL, real_T *rty_WheelSpeedsBus_vWheelFR,
           real_T *rty_SensorSignalsBus_pBrakeF, real_T
           *rty_SensorSignalsBus_pBrakeR, real_T
           *rty_SensorSignalsBus_VDamperPot, real_T
           *rty_SensorSignalsBus_VDamperP_i, real_T
           *rty_SensorSignalsBus_NDisplayNu, real_T
           *rty_SensorSignalsBus_VSteeringA, real_T
           *rty_SensorSignalsBus_VThrottleP, real_T
           *rty_SensorSignalsBus_VThrottl_b, boolean_T
           *rty_SensorSignalsBus_BSteeringW, boolean_T
           *rty_SensorSignalsBus_BSteerin_j, boolean_T
           *rty_SensorSignalsBus_BSteerin_l, boolean_T
           *rty_SensorSignalsBus_BSteerin_e, boolean_T
           *rty_SensorSignalsBus_BSteeri_le, boolean_T
           *rty_SensorSignalsBus_BSteerin_h, boolean_T
           *rty_SensorSignalsBus_BSteeri_hc, boolean_T
           *rty_SensorSignalsBus_BSteeri_hl, real_T
           *rty_SensorSignalsBus_VRegenPadd, real_T
           *rty_SensorSignalsBus_VRegenPa_h, real_T
           *rty_SensorSignalsBus_C1P01_Stat, real_T
           *rty_SensorSignalsBus_C1P02_Stat, real_T
           *rty_SensorSignalsBus_C1P03_Stat, real_T
           *rty_SensorSignalsBus_C1P04_Stat, real_T
           *rty_SensorSignalsBus_C1P07_Stat, real_T
           *rty_SensorSignalsBus_C1P11_Stat, real_T
           *rty_SensorSignalsBus_C1P12_Stat, real_T
           *rty_SensorSignalsBus_C1P13_Stat, real_T
           *rty_SensorSignalsBus_C1P25_Stat, real_T
           *rty_SensorSignalsBus_C1P26_Stat, real_T
           *rty_SensorSignalsBus_C1P28_Stat, real_T
           *rty_SensorSignalsBus_C1P30_Stat, real_T
           *rty_SensorSignalsBus_C1P31_Stat, real_T
           *rty_SensorSignalsBus_C1P33_Stat, real_T
           *rty_SensorSignalsBus_C1P34_Stat, real_T
           *rty_SensorSignalsBus_C1P36_Stat, real_T
           *rty_SensorSignalsBus_C1P37_Stat, real_T
           *rty_SensorSignalsBus_C1P38_Stat, real_T
           *rty_SensorSignalsBus_C2P01_Stat, real_T
           *rty_SensorSignalsBus_C2P02_Stat, real_T
           *rty_SensorSignalsBus_C2P03_Stat, real_T
           *rty_SensorSignalsBus_C2P04_Stat, real_T
           *rty_SensorSignalsBus_C2P05_Stat, real_T
           *rty_SensorSignalsBus_C2P13_Stat, real_T
           *rty_SensorSignalsBus_C2P25_Stat, real_T
           *rty_SensorSignalsBus_C2P26_Stat, real_T
           *rty_SensorSignalsBus_C2P27_Stat, real_T
           *rty_SensorSignalsBus_C2P28_Stat, real_T
           *rty_SensorSignalsBus_C2P29_Stat, real_T
           *rty_SensorSignalsBus_C2P30_Stat, real_T
           *rty_SensorSignalsBus_C2P31_Stat, real_T
           *rty_SensorSignalsBus_C2P33_Stat, real_T
           *rty_SensorSignalsBus_C1P16_Digi, real_T
           *rty_SensorSignalsBus_C1P17_Digi, real_T
           *rty_SensorSignalsBus_C2P17_Digi, real_T
           *rty_SensorSignalsBus_C2P18_Digi, real_T
           *rty_SensorSignalsBus_C2P35_Stat, real_T
           *rty_SensorSignalsBus_C2P36_Stat, real_T
           *rty_SensorSignalsBus_C2P37_Stat, real_T
           *rty_SensorSignalsBus_C2P38_Stat, real_T
           *rty_SensorSignalsBus_ILVSystem, real_T
           *rty_SensorSignalsBus_TLVSystem, real_T
           *rty_SensorSignalsBus_VLVSystem, real_T
           *rty_SensorSignalsBus_VDamper_ik, real_T
           *rty_SensorSignalsBus_VDamper_iu, real_T
           *rty_GPSIMUSignalsBus_vLongitudi, real_T
           *rty_GPSIMUSignalsBus_gLateralOX, real_T
           *rty_GPSIMUSignalsBus_gLongitudi, real_T
           *rty_GPSIMUSignalsBus_nYawRateOX, real_T *rty_BMSSignalsBus_VCellMax,
           real_T *rty_BMSSignalsBus_VCellDelta, real_T
           *rty_BMSSignalsBus_VCellMin, real_T *rty_BMSSignalsBus_VCellAverage,
           real_T *rty_BMSSignalsBus_TCellMax, real_T *rty_BMSSignalsBus_NBMSDLC,
           real_T *rty_BMSSignalsBus_TCellMin, real_T
           *rty_BMSSignalsBus_IBMSHallEffec, real_T
           *rty_BMSSignalsBus_VDCAccumulato, real_T
           *rty_BMSSignalsBus_RCellAverage, boolean_T
           *rty_BMSSignalsBus_BBalancingAct, boolean_T
           *rty_BMSSignalsBus_BBMSP0A0C, boolean_T *rty_BMSSignalsBus_BBMSP0A0E,
           boolean_T *rty_BMSSignalsBus_BBMSP0A10, boolean_T
           *rty_BMSSignalsBus_BBMSP0A80, boolean_T *rty_BMSSignalsBus_BBMSP0AC0,
           boolean_T *rty_BMSSignalsBus_BBMSP0AFA, real_T
           *rty_BMSSignalsBus_IIVTS)
{
  /* ModelReference generated from: '<Root>/Model' */
  WheelSpeeds(rtu_InverterCAN_InverterFLCANBu, rtu_InverterCAN_InverterFRCANBu,
              rtu_InverterCAN_InverterRLCANBu, rtu_InverterCAN_InverterRRCANBu,
              rty_WheelSpeedsBus_vWheelRL, rty_WheelSpeedsBus_vWheelRR,
              rty_WheelSpeedsBus_vWheelFL, rty_WheelSpeedsBus_vWheelFR);

  /* ModelReference generated from: '<Root>/Model1' */
  InverterSignals(rtu_InverterCAN_InverterFLCANBu,
                  rtu_InverterCAN_InverterFLCAN_g,
                  rtu_InverterCAN_InverterFLCAN_c,
                  rtu_InverterCAN_InverterFLCAN_e,
                  rtu_InverterCAN_InverterFLCAN_n,
                  rtu_InverterCAN_InverterFLCAN_f,
                  rtu_InverterCAN_InverterFLCAN_k,
                  rtu_InverterCAN_InverterFLCAN_h,
                  rtu_InverterCAN_InverterFLCA_kw,
                  rtu_InverterCAN_InverterFLCA_ka,
                  rtu_InverterCAN_InverterFLC_kaa,
                  rtu_InverterCAN_InverterFLCA_el,
                  rtu_InverterCAN_InverterFLCA_cj,
                  rtu_InverterCAN_InverterFRCANBu,
                  rtu_InverterCAN_InverterFRCAN_o,
                  rtu_InverterCAN_InverterFRCAN_p,
                  rtu_InverterCAN_InverterFRCAN_d,
                  rtu_InverterCAN_InverterFRCA_dm,
                  rtu_InverterCAN_InverterFRCAN_g,
                  rtu_InverterCAN_InverterFRCAN_m,
                  rtu_InverterCAN_InverterFRCA_pd,
                  rtu_InverterCAN_InverterFRCAN_i,
                  rtu_InverterCAN_InverterFRCA_pr,
                  rtu_InverterCAN_InverterFRCA_pe,
                  rtu_InverterCAN_InverterFRCA_o3,
                  rtu_InverterCAN_InverterFRCAN_e,
                  rtu_InverterCAN_InverterRLCANBu,
                  rtu_InverterCAN_InverterRLCAN_j,
                  rtu_InverterCAN_InverterRLCAN_p,
                  rtu_InverterCAN_InverterRLCAN_m,
                  rtu_InverterCAN_InverterRLCA_p2,
                  rtu_InverterCAN_InverterRLCAN_i,
                  rtu_InverterCAN_InverterRLCAN_k,
                  rtu_InverterCAN_InverterRLCAN_h,
                  rtu_InverterCAN_InverterRLCAN_b,
                  rtu_InverterCAN_InverterRLCAN_n,
                  rtu_InverterCAN_InverterRLCAN_g,
                  rtu_InverterCAN_InverterRLCA_go,
                  rtu_InverterCAN_InverterRLCAN_e,
                  rtu_InverterCAN_InverterRRCANBu,
                  rtu_InverterCAN_InverterRRCAN_b,
                  rtu_InverterCAN_InverterRRCAN_c,
                  rtu_InverterCAN_InverterRRCAN_l,
                  rtu_InverterCAN_InverterRRCAN_p,
                  rtu_InverterCAN_InverterRRCA_py,
                  rtu_InverterCAN_InverterRRCAN_e,
                  rtu_InverterCAN_InverterRRCA_px,
                  rtu_InverterCAN_InverterRRCAN_m,
                  rtu_InverterCAN_InverterRRCAN_n,
                  rtu_InverterCAN_InverterRRCAN_f,
                  rtu_InverterCAN_InverterRRCAN_d,
                  rtu_InverterCAN_InverterRRCA_mw,
                  rty_InverterSignalsBus_Inverter,
                  rty_InverterSignalsBus_Invert_g,
                  rty_InverterSignalsBus_Invert_c,
                  rty_InverterSignalsBus_Invert_e,
                  rty_InverterSignalsBus_Invert_n,
                  rty_InverterSignalsBus_Invert_f,
                  rty_InverterSignalsBus_Invert_k,
                  rty_InverterSignalsBus_Invert_h,
                  rty_InverterSignalsBus_Inver_kw,
                  rty_InverterSignalsBus_Inver_ka,
                  rty_InverterSignalsBus_Inve_kaa,
                  rty_InverterSignalsBus_Inver_el,
                  rty_InverterSignalsBus_Inver_cj,
                  rty_InverterSignalsBus_Inver_ez,
                  rty_InverterSignalsBus_Invert_o,
                  rty_InverterSignalsBus_Invert_p,
                  rty_InverterSignalsBus_Invert_d,
                  rty_InverterSignalsBus_Inver_dm,
                  rty_InverterSignalsBus_Inver_gy,
                  rty_InverterSignalsBus_Invert_m,
                  rty_InverterSignalsBus_Inver_pd,
                  rty_InverterSignalsBus_Invert_i,
                  rty_InverterSignalsBus_Inver_pr,
                  rty_InverterSignalsBus_Inver_pe,
                  rty_InverterSignalsBus_Inver_o3,
                  rty_InverterSignalsBus_Inver_e4,
                  rty_InverterSignalsBus_Inver_mc,
                  rty_InverterSignalsBus_Invert_j,
                  rty_InverterSignalsBus_Inver_po,
                  rty_InverterSignalsBus_Inver_m3,
                  rty_InverterSignalsBus_Inver_p2,
                  rty_InverterSignalsBus_Inver_i3,
                  rty_InverterSignalsBus_Inve_ka1,
                  rty_InverterSignalsBus_Inver_hs,
                  rty_InverterSignalsBus_Invert_b,
                  rty_InverterSignalsBus_Inver_ng,
                  rty_InverterSignalsBus_Inve_gye,
                  rty_InverterSignalsBus_Inver_go,
                  rty_InverterSignalsBus_Inver_ep,
                  rty_InverterSignalsBus_Inver_kf,
                  rty_InverterSignalsBus_Inver_bn,
                  rty_InverterSignalsBus_Inver_c4,
                  rty_InverterSignalsBus_Invert_l,
                  rty_InverterSignalsBus_Inver_p4,
                  rty_InverterSignalsBus_Inver_py,
                  rty_InverterSignalsBus_Inver_en,
                  rty_InverterSignalsBus_Inver_px,
                  rty_InverterSignalsBus_Inver_mk,
                  rty_InverterSignalsBus_Inver_nk,
                  rty_InverterSignalsBus_Inver_fp,
                  rty_InverterSignalsBus_Inver_df,
                  rty_InverterSignalsBus_Inver_mw);

  /* ModelReference generated from: '<Root>/Model3' */
  SensorSignals(rtu_CAN3_DDU7_Analoge_1_pBrakeF, rtu_CAN3_DDU7_Analoge_1_pBrakeR,
                rtu_CAN3_DDU7_Analoge_1_VDamper, rtu_CAN3_DDU7_Analoge_1_VDamp_h,
                rtu_CAN3_DDU7_Analoge_1_VDamp_i, rtu_CAN3_DDU7_Analoge_1_VDam_h5,
                rtu_CAN3_DDU7_Analoge_2_NDispla, rtu_CAN3_DDU7_Analoge_2_VSteeri,
                rtu_CAN3_DDU7_Analoge_2_VThrott, rtu_CAN3_DDU7_Analoge_2_VThro_a,
                rtu_CAN3_PDM_Status_1_C1P01_Sta, rtu_CAN3_PDM_Status_1_C1P02_Sta,
                rtu_CAN3_PDM_Status_1_C1P03_Sta, rtu_CAN3_PDM_Status_1_C1P04_Sta,
                rtu_CAN3_PDM_Status_1_C1P07_Sta, rtu_CAN3_PDM_Status_1_C1P11_Sta,
                rtu_CAN3_PDM_Status_1_C1P12_Sta, rtu_CAN3_PDM_Status_1_C1P13_Sta,
                rtu_CAN3_PDM_Status_1_C1P25_Sta, rtu_CAN3_PDM_Status_1_C1P26_Sta,
                rtu_CAN3_PDM_Status_1_C1P28_Sta, rtu_CAN3_PDM_Status_1_C1P30_Sta,
                rtu_CAN3_PDM_Status_1_C1P31_Sta, rtu_CAN3_PDM_Status_1_C1P33_Sta,
                rtu_CAN3_PDM_Status_1_C1P34_Sta, rtu_CAN3_PDM_Status_1_C1P36_Sta,
                rtu_CAN3_PDM_Status_2_C1P37_Sta, rtu_CAN3_PDM_Status_2_C1P38_Sta,
                rtu_CAN3_PDM_Status_2_C2P01_Sta, rtu_CAN3_PDM_Status_2_C2P02_Sta,
                rtu_CAN3_PDM_Status_2_C2P03_Sta, rtu_CAN3_PDM_Status_2_C2P04_Sta,
                rtu_CAN3_PDM_Status_2_C2P05_Sta, rtu_CAN3_PDM_Status_2_C2P13_Sta,
                rtu_CAN3_PDM_Status_2_C2P25_Sta, rtu_CAN3_PDM_Status_2_C2P26_Sta,
                rtu_CAN3_PDM_Status_2_C2P27_Sta, rtu_CAN3_PDM_Status_2_C2P28_Sta,
                rtu_CAN3_PDM_Status_2_C2P29_Sta, rtu_CAN3_PDM_Status_2_C2P30_Sta,
                rtu_CAN3_PDM_Status_2_C2P31_Sta, rtu_CAN3_PDM_Status_2_C2P33_Sta,
                rtu_CAN3_PDM_Status_3_C1P16_Dig, rtu_CAN3_PDM_Status_3_C1P17_Dig,
                rtu_CAN3_PDM_Status_3_C2P17_Dig, rtu_CAN3_PDM_Status_3_C2P18_Dig,
                rtu_CAN3_PDM_Status_3_C2P35_Sta, rtu_CAN3_PDM_Status_3_C2P36_Sta,
                rtu_CAN3_PDM_Status_3_C2P37_Sta, rtu_CAN3_PDM_Status_3_C2P38_Sta,
                rtu_CAN3_PDM_Status_3_ILVSystem, rtu_CAN3_PDM_Status_3_TLVSystem,
                rtu_CAN3_PDM_Status_3_VLVSystem, rtu_CAN3_SteeringWheelBus_BStee,
                rtu_CAN3_SteeringWheelBus_BSt_g, rtu_CAN3_SteeringWheelBus_BSt_h,
                rtu_CAN3_SteeringWheelBus_BS_hs, rtu_CAN3_SteeringWheelBus_BSt_c,
                rtu_CAN3_SteeringWheelBus_BSt_p, rtu_CAN3_SteeringWheelBus_BSt_n,
                rtu_CAN3_SteeringWheelBus_BSt_k, rtu_CAN3_SteeringWheelBus_VRege,
                rtu_CAN3_SteeringWheelBus_VRe_j, rty_SensorSignalsBus_pBrakeF,
                rty_SensorSignalsBus_pBrakeR, rty_SensorSignalsBus_VDamperPot,
                rty_SensorSignalsBus_VDamperP_i, rty_SensorSignalsBus_NDisplayNu,
                rty_SensorSignalsBus_VSteeringA, rty_SensorSignalsBus_VThrottleP,
                rty_SensorSignalsBus_VThrottl_b, rty_SensorSignalsBus_BSteeringW,
                rty_SensorSignalsBus_BSteerin_j, rty_SensorSignalsBus_BSteerin_l,
                rty_SensorSignalsBus_BSteerin_e, rty_SensorSignalsBus_BSteeri_le,
                rty_SensorSignalsBus_BSteerin_h, rty_SensorSignalsBus_BSteeri_hc,
                rty_SensorSignalsBus_BSteeri_hl, rty_SensorSignalsBus_VRegenPadd,
                rty_SensorSignalsBus_VRegenPa_h, rty_SensorSignalsBus_C1P01_Stat,
                rty_SensorSignalsBus_C1P02_Stat, rty_SensorSignalsBus_C1P03_Stat,
                rty_SensorSignalsBus_C1P04_Stat, rty_SensorSignalsBus_C1P07_Stat,
                rty_SensorSignalsBus_C1P11_Stat, rty_SensorSignalsBus_C1P12_Stat,
                rty_SensorSignalsBus_C1P13_Stat, rty_SensorSignalsBus_C1P25_Stat,
                rty_SensorSignalsBus_C1P26_Stat, rty_SensorSignalsBus_C1P28_Stat,
                rty_SensorSignalsBus_C1P30_Stat, rty_SensorSignalsBus_C1P31_Stat,
                rty_SensorSignalsBus_C1P33_Stat, rty_SensorSignalsBus_C1P34_Stat,
                rty_SensorSignalsBus_C1P36_Stat, rty_SensorSignalsBus_C1P37_Stat,
                rty_SensorSignalsBus_C1P38_Stat, rty_SensorSignalsBus_C2P01_Stat,
                rty_SensorSignalsBus_C2P02_Stat, rty_SensorSignalsBus_C2P03_Stat,
                rty_SensorSignalsBus_C2P04_Stat, rty_SensorSignalsBus_C2P05_Stat,
                rty_SensorSignalsBus_C2P13_Stat, rty_SensorSignalsBus_C2P25_Stat,
                rty_SensorSignalsBus_C2P26_Stat, rty_SensorSignalsBus_C2P27_Stat,
                rty_SensorSignalsBus_C2P28_Stat, rty_SensorSignalsBus_C2P29_Stat,
                rty_SensorSignalsBus_C2P30_Stat, rty_SensorSignalsBus_C2P31_Stat,
                rty_SensorSignalsBus_C2P33_Stat, rty_SensorSignalsBus_C1P16_Digi,
                rty_SensorSignalsBus_C1P17_Digi, rty_SensorSignalsBus_C2P17_Digi,
                rty_SensorSignalsBus_C2P18_Digi, rty_SensorSignalsBus_C2P35_Stat,
                rty_SensorSignalsBus_C2P36_Stat, rty_SensorSignalsBus_C2P37_Stat,
                rty_SensorSignalsBus_C2P38_Stat, rty_SensorSignalsBus_ILVSystem,
                rty_SensorSignalsBus_TLVSystem, rty_SensorSignalsBus_VLVSystem,
                rty_SensorSignalsBus_VDamper_ik, rty_SensorSignalsBus_VDamper_iu);

  /* ModelReference generated from: '<Root>/Model4' */
  GPSIMUSignals(rtu_CAN3_OXTSDataFrame1540_vLon, rtu_CAN3_OXTSDataFrame1541_gLat,
                rtu_CAN3_OXTSDataFrame1541_gLon, rtu_CAN3_OXTSDataFrame1544_nYaw,
                rty_GPSIMUSignalsBus_vLongitudi, rty_GPSIMUSignalsBus_gLateralOX,
                rty_GPSIMUSignalsBus_gLongitudi, rty_GPSIMUSignalsBus_nYawRateOX);

  /* ModelReference generated from: '<Root>/Model2' */
  BMSSignals(rtu_BMSCAN_IIVTS, rtu_BMSCAN_IBMSHallEffect,
             rtu_BMSCAN_VDCAccumulator, rtu_BMSCAN_TCellMin,
             rtu_BMSCAN_VCellAverage, rtu_BMSCAN_VCellMax, rtu_BMSCAN_TCellMax,
             rtu_BMSCAN_NBMSDLC, rtu_BMSCAN_VCellMin, rtu_BMSCAN_RCellAverage,
             rtu_BMSCAN_BBalancingActive, rtu_BMSCAN_BBMSP0A0C,
             rtu_BMSCAN_BBMSP0A0E, rtu_BMSCAN_BBMSP0A10, rtu_BMSCAN_BBMSP0A80,
             rtu_BMSCAN_BBMSP0AC0, rtu_BMSCAN_BBMSP0AFA,
             rty_BMSSignalsBus_VCellMax, rty_BMSSignalsBus_VCellDelta,
             rty_BMSSignalsBus_VCellMin, rty_BMSSignalsBus_VCellAverage,
             rty_BMSSignalsBus_TCellMax, rty_BMSSignalsBus_NBMSDLC,
             rty_BMSSignalsBus_TCellMin, rty_BMSSignalsBus_IBMSHallEffec,
             rty_BMSSignalsBus_VDCAccumulato, rty_BMSSignalsBus_RCellAverage,
             rty_BMSSignalsBus_BBalancingAct, rty_BMSSignalsBus_BBMSP0A0C,
             rty_BMSSignalsBus_BBMSP0A0E, rty_BMSSignalsBus_BBMSP0A10,
             rty_BMSSignalsBus_BBMSP0A80, rty_BMSSignalsBus_BBMSP0AC0,
             rty_BMSSignalsBus_BBMSP0AFA, rty_BMSSignalsBus_IIVTS);
}

/* Model initialize function */
void INPUT_initialize(const char_T **rt_errorStatus, RT_MODEL_INPUT_T *const
                      INPUT_M, DW_INPUT_f_T *localDW)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(INPUT_M, rt_errorStatus);

  /* Model Initialize function for ModelReference Block: '<Root>/Model' */
  WheelSpeeds_initialize(rtmGetErrorStatusPointer(INPUT_M),
    &(localDW->Model_InstanceData.rtm));

  /* Model Initialize function for ModelReference Block: '<Root>/Model1' */
  InverterSignals_initialize(rtmGetErrorStatusPointer(INPUT_M),
    &(localDW->Model1_InstanceData.rtm));

  /* Model Initialize function for ModelReference Block: '<Root>/Model2' */
  BMSSignals_initialize(rtmGetErrorStatusPointer(INPUT_M),
                        &(localDW->Model2_InstanceData.rtm));

  /* Model Initialize function for ModelReference Block: '<Root>/Model3' */
  SensorSignals_initialize(rtmGetErrorStatusPointer(INPUT_M),
    &(localDW->Model3_InstanceData.rtm));

  /* Model Initialize function for ModelReference Block: '<Root>/Model4' */
  GPSIMUSignals_initialize(rtmGetErrorStatusPointer(INPUT_M),
    &(localDW->Model4_InstanceData.rtm));

  /* user code (Initialize function Body) */
  LL_TIM_EnableCounter(TIM2);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
