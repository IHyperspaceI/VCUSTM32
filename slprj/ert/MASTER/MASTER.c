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
 * C/C++ source code generated on : Wed Jun  3 14:58:30 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "MASTER.h"
#include "rtwtypes.h"
#include "MASTER_private.h"
#include "INPUT.h"
#include "LIMITATIONS.h"
#include "STATEFLOW.h"
#include "SYSTEMS.h"
#include "TORQUECONTROL.h"

/* System initialize for referenced model: 'MASTER' */
void MASTER_Init(DW_MASTER_f_T *localDW)
{
  /* SystemInitialize for S-Function (fcgen): '<Root>/Function-Call Generator1' */

  /* SystemInitialize for ModelReference generated from: '<Root>/SYSTEMS' */
  SYSTEMS_Init(&(localDW->SYSTEMS_InstanceData.rtdw));

  /* SystemInitialize for ModelReference generated from: '<Root>/STATEFLOW' */
  STATEFLOW_Init(&(localDW->STATEFLOW_InstanceData.rtdw));

  /* SystemInitialize for ModelReference generated from: '<Root>/TORQUECONTROL' */
  TORQUECONTROL_Init(&(localDW->TORQUECONTROL_InstanceData.rtdw));

  /* End of SystemInitialize for S-Function (fcgen): '<Root>/Function-Call Generator1' */
}

/* Output and update for referenced model: 'MASTER' */
void MASTER(const real_T *rtu_CAN1_2_InverterFLCANBus_nMo, const boolean_T
            *rtu_CAN1_2_InverterFLCANBus_BIn, const boolean_T
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
            *rty_Global_SystemsBus_PActual, real_T *rty_Global_SystemsBus_rSOC,
            real_T *rty_Global_SystemsBus_rSOE, boolean_T
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
            DW_MASTER_f_T *localDW)
{
  /* S-Function (fcgen): '<Root>/Function-Call Generator' */

  /* ModelReference generated from: '<Root>/INPUT' */
  INPUT(rtu_CAN1_2_InverterFLCANBus_nMo, rtu_CAN1_2_InverterFLCANBus_BIn,
        rtu_CAN1_2_InverterFLCANBus_B_c, rtu_CAN1_2_InverterFLCANBus_B_e,
        rtu_CAN1_2_InverterFLCANBus_B_n, rtu_CAN1_2_InverterFLCANBus_B_f,
        rtu_CAN1_2_InverterFLCANBus_B_k, rtu_CAN1_2_InverterFLCANBus_B_h,
        rtu_CAN1_2_InverterFLCANBus_MMo, rtu_CAN1_2_InverterFLCANBus_NIn,
        rtu_CAN1_2_InverterFLCANBus_TMo, rtu_CAN1_2_InverterFLCANBus_VDC,
        rtu_CAN1_2_InverterFLCANBus_TIn, rtu_CAN1_2_InverterFRCANBus_nMo,
        rtu_CAN1_2_InverterFRCANBus_BIn, rtu_CAN1_2_InverterFRCANBus_B_p,
        rtu_CAN1_2_InverterFRCANBus_B_d, rtu_CAN1_2_InverterFRCANBus__dm,
        rtu_CAN1_2_InverterFRCANBus_B_g, rtu_CAN1_2_InverterFRCANBus_B_m,
        rtu_CAN1_2_InverterFRCANBus__pd, rtu_CAN1_2_InverterFRCANBus_MMo,
        rtu_CAN1_2_InverterFRCANBus_NIn, rtu_CAN1_2_InverterFRCANBus_TMo,
        rtu_CAN1_2_InverterFRCANBus_VDC, rtu_CAN1_2_InverterFRCANBus_TIn,
        rtu_CAN1_2_InverterRLCANBus_nMo, rtu_CAN1_2_InverterRLCANBus_BIn,
        rtu_CAN1_2_InverterRLCANBus_B_p, rtu_CAN1_2_InverterRLCANBus_B_m,
        rtu_CAN1_2_InverterRLCANBus__p2, rtu_CAN1_2_InverterRLCANBus_B_i,
        rtu_CAN1_2_InverterRLCANBus_B_k, rtu_CAN1_2_InverterRLCANBus_B_h,
        rtu_CAN1_2_InverterRLCANBus_MMo, rtu_CAN1_2_InverterRLCANBus_NIn,
        rtu_CAN1_2_InverterRLCANBus_TMo, rtu_CAN1_2_InverterRLCANBus_VDC,
        rtu_CAN1_2_InverterRLCANBus_TIn, rtu_CAN1_2_InverterRRCANBus_nMo,
        rtu_CAN1_2_InverterRRCANBus_BIn, rtu_CAN1_2_InverterRRCANBus_B_c,
        rtu_CAN1_2_InverterRRCANBus_B_l, rtu_CAN1_2_InverterRRCANBus_B_p,
        rtu_CAN1_2_InverterRRCANBus__py, rtu_CAN1_2_InverterRRCANBus_B_e,
        rtu_CAN1_2_InverterRRCANBus__px, rtu_CAN1_2_InverterRRCANBus_MMo,
        rtu_CAN1_2_InverterRRCANBus_NIn, rtu_CAN1_2_InverterRRCANBus_TMo,
        rtu_CAN1_2_InverterRRCANBus_VDC, rtu_CAN1_2_InverterRRCANBus_TIn,
        rtu_CAN3_DDU7_Analoge_1_pBrakeF, rtu_CAN3_DDU7_Analoge_1_pBrakeR,
        rtu_CAN3_DDU7_Analoge_1_VDamper, rtu_CAN3_DDU7_Analoge_1_VDamp_h,
        rtu_CAN3_DDU7_Analoge_1_VDamp_i, rtu_CAN3_DDU7_Analoge_1_VDam_h5,
        rtu_CAN3_DDU7_Analoge_2_NDispla, rtu_CAN3_DDU7_Analoge_2_VSteeri,
        rtu_CAN3_DDU7_Analoge_2_VThrott, rtu_CAN3_DDU7_Analoge_2_VThro_a,
        rtu_CAN3_OXTSDataFrame1540_vLon, rtu_CAN3_OXTSDataFrame1541_gLat,
        rtu_CAN3_OXTSDataFrame1541_gLon, rtu_CAN3_OXTSDataFrame1544_nYaw,
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
        rtu_CAN3_SteeringWheelBus_VRe_j, rtu_BMSCAN_IIVTS,
        rtu_BMSCAN_IBMSHallEffect, rtu_BMSCAN_VDCAccumulator,
        rtu_BMSCAN_TCellMin, rtu_BMSCAN_VCellAverage, rtu_BMSCAN_VCellMax,
        rtu_BMSCAN_TCellMax, rtu_BMSCAN_NBMSDLC, rtu_BMSCAN_VCellMin,
        rtu_BMSCAN_RCellAverage, rtu_BMSCAN_BBalancingActive,
        rtu_BMSCAN_BBMSP0A0C, rtu_BMSCAN_BBMSP0A0E, rtu_BMSCAN_BBMSP0A10,
        rtu_BMSCAN_BBMSP0A80, rtu_BMSCAN_BBMSP0AC0, rtu_BMSCAN_BBMSP0AFA,
        rty_Global_InverterSignalsBus_I, rty_Global_InverterSignalsBus_g,
        rty_Global_InverterSignalsBus_c, rty_Global_InverterSignalsBus_e,
        rty_Global_InverterSignalsBus_n, rty_Global_InverterSignalsBus_f,
        rty_Global_InverterSignalsBus_k, rty_Global_InverterSignalsBus_h,
        rty_Global_InverterSignalsBu_kw, rty_Global_InverterSignalsBu_ka,
        rty_Global_InverterSignalsB_kaa, rty_Global_InverterSignalsBu_el,
        rty_Global_InverterSignalsBu_cj, rty_Global_InverterSignalsBu_ez,
        rty_Global_InverterSignalsBus_o, rty_Global_InverterSignalsBus_p,
        rty_Global_InverterSignalsBus_d, rty_Global_InverterSignalsBu_dm,
        rty_Global_InverterSignalsBu_gy, rty_Global_InverterSignalsBus_m,
        rty_Global_InverterSignalsBu_pd, rty_Global_InverterSignalsBus_i,
        rty_Global_InverterSignalsBu_pr, rty_Global_InverterSignalsBu_pe,
        rty_Global_InverterSignalsBu_o3, rty_Global_InverterSignalsBu_e4,
        rty_Global_InverterSignalsBu_mc, rty_Global_InverterSignalsBus_j,
        rty_Global_InverterSignalsBu_po, rty_Global_InverterSignalsBu_m3,
        rty_Global_InverterSignalsBu_p2, rty_Global_InverterSignalsBu_i3,
        rty_Global_InverterSignalsB_ka1, rty_Global_InverterSignalsBu_hs,
        rty_Global_InverterSignalsBus_b, rty_Global_InverterSignalsBu_ng,
        rty_Global_InverterSignalsB_gye, rty_Global_InverterSignalsBu_go,
        rty_Global_InverterSignalsBu_ep, rty_Global_InverterSignalsBu_kf,
        rty_Global_InverterSignalsBu_bn, rty_Global_InverterSignalsBu_c4,
        rty_Global_InverterSignalsBus_l, rty_Global_InverterSignalsBu_p4,
        rty_Global_InverterSignalsBu_py, rty_Global_InverterSignalsBu_en,
        rty_Global_InverterSignalsBu_px, rty_Global_InverterSignalsBu_mk,
        rty_Global_InverterSignalsBu_nk, rty_Global_InverterSignalsBu_fp,
        rty_Global_InverterSignalsBu_df, rty_Global_InverterSignalsBu_mw,
        rty_Global_WheelSpeedsBus_vWhee, rty_Global_WheelSpeedsBus_vWh_h,
        rty_Global_WheelSpeedsBus_vW_h2, rty_Global_WheelSpeedsBus_vW_hs,
        rty_Global_SensorSignalsBus_pBr, rty_Global_SensorSignalsBus_p_h,
        rty_Global_SensorSignalsBus_VDa, rty_Global_SensorSignalsBus_V_i,
        rty_Global_SensorSignalsBus_NDi, rty_Global_SensorSignalsBus_VSt,
        rty_Global_SensorSignalsBus_VTh, rty_Global_SensorSignalsBus_V_b,
        rty_Global_SensorSignalsBus_BSt, rty_Global_SensorSignalsBus_B_j,
        rty_Global_SensorSignalsBus_B_l, rty_Global_SensorSignalsBus_B_e,
        rty_Global_SensorSignalsBus__le, rty_Global_SensorSignalsBus_B_h,
        rty_Global_SensorSignalsBus__hc, rty_Global_SensorSignalsBus__hl,
        rty_Global_SensorSignalsBus_VRe, rty_Global_SensorSignalsBus_V_h,
        rty_Global_SensorSignalsBus_C1P, rty_Global_SensorSignalsBus_C_a,
        rty_Global_SensorSignalsBus_C_k, rty_Global_SensorSignalsBus_C_i,
        rty_Global_SensorSignalsBus_C_b, rty_Global_SensorSignalsBus__ir,
        rty_Global_SensorSignalsBus__bx, rty_Global_SensorSignalsBus_C_d,
        rty_Global_SensorSignalsBus_C_g, rty_Global_SensorSignalsBus__i1,
        rty_Global_SensorSignalsBus_C_h, rty_Global_SensorSignalsBus__bl,
        rty_Global_SensorSignalsBus_C_l, rty_Global_SensorSignalsBus__go,
        rty_Global_SensorSignalsBus_C_f, rty_Global_SensorSignalsBus__as,
        rty_Global_SensorSignalsBus__gz, rty_Global_SensorSignalsBus_C_c,
        rty_Global_SensorSignalsBus_C2P, rty_Global_SensorSignalsBus_C_e,
        rty_Global_SensorSignalsBus__lr, rty_Global_SensorSignalsBus__l2,
        rty_Global_SensorSignalsBus__ft, rty_Global_SensorSignalsBus__es,
        rty_Global_SensorSignalsBus__c0, rty_Global_SensorSignalsBus__gy,
        rty_Global_SensorSignalsBus__lp, rty_Global_SensorSignalsBus__bp,
        rty_Global_SensorSignalsBus_i12, rty_Global_SensorSignalsBus__aq,
        rty_Global_SensorSignalsBus_C_o, rty_Global_SensorSignalsBus__iq,
        rty_Global_SensorSignalsBus__ex, rty_Global_SensorSignalsBus__de,
        rty_Global_SensorSignalsBus__do, rty_Global_SensorSignalsBus__lj,
        rty_Global_SensorSignalsBus__kg, rty_Global_SensorSignalsBus_C_n,
        rty_Global_SensorSignalsBus__ho, rty_Global_SensorSignalsBus__gk,
        rty_Global_SensorSignalsBus_ILV, rty_Global_SensorSignalsBus_TLV,
        rty_Global_SensorSignalsBus_VLV, rty_Global_SensorSignalsBus__ik,
        rty_Global_SensorSignalsBus__iu, rty_Global_GPSIMUSignalsBus_vLo,
        rty_Global_GPSIMUSignalsBus_gLa, rty_Global_GPSIMUSignalsBus_gLo,
        rty_Global_GPSIMUSignalsBus_nYa, rty_Global_BMSSignalsBus_VCellM,
        rty_Global_BMSSignalsBus_VCellD, rty_Global_BMSSignalsBus_VCel_d,
        rty_Global_BMSSignalsBus_VCellA, rty_Global_BMSSignalsBus_TCellM,
        rty_Global_BMSSignalsBus_NBMSDL, rty_Global_BMSSignalsBus_TCel_c,
        rty_Global_BMSSignalsBus_IBMSHa, rty_Global_BMSSignalsBus_VDCAcc,
        rty_Global_BMSSignalsBus_RCellA, rty_Global_BMSSignalsBus_BBalan,
        rty_Global_BMSSignalsBus_BBMSP0, rty_Global_BMSSignalsBus_BBMS_c,
        rty_Global_BMSSignalsBus_BBMS_k, rty_Global_BMSSignalsBus_BBMS_m,
        rty_Global_BMSSignalsBus_BBMS_b, rty_Global_BMSSignalsBus_BBM_kd,
        rty_Global_BMSSignalsBus_IIVTS);

  /* End of Outputs for S-Function (fcgen): '<Root>/Function-Call Generator' */

  /* S-Function (fcgen): '<Root>/Function-Call Generator1' */
  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->nMotorRL_dyg = *rty_Global_InverterSignalsBus_I;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->NInvDTCRL_jcu = *rty_Global_InverterSignalsBu_ka;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->C2P26_Status_gap = *rty_Global_SensorSignalsBus__gy;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->C2P27_Status_mzi = *rty_Global_SensorSignalsBus__lp;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->C2P28_Status_i22 = *rty_Global_SensorSignalsBus__bp;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->C2P29_Status_iho = *rty_Global_SensorSignalsBus_i12;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->C2P30_Status_iuz = *rty_Global_SensorSignalsBus__aq;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->C2P31_Status_edj = *rty_Global_SensorSignalsBus_C_o;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->C2P33_Status_j4m = *rty_Global_SensorSignalsBus__iq;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->C1P16_Digital_fw2 = *rty_Global_SensorSignalsBus__ex;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->C1P17_Digital_hrt = *rty_Global_SensorSignalsBus__de;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->C2P17_Digital_ddm = *rty_Global_SensorSignalsBus__do;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->TMotorRL_mnc = *rty_Global_InverterSignalsB_kaa;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->C2P18_Digital_obj = *rty_Global_SensorSignalsBus__lj;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->C2P35_Status_df2 = *rty_Global_SensorSignalsBus__kg;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->C2P36_Status_fjk = *rty_Global_SensorSignalsBus_C_n;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->C2P37_Status_nyp = *rty_Global_SensorSignalsBus__ho;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->C2P38_Status_ckb = *rty_Global_SensorSignalsBus__gk;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->ILVSystem_iwp = *rty_Global_SensorSignalsBus_ILV;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->TLVSystem_ayy = *rty_Global_SensorSignalsBus_TLV;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->VLVSystem_cht = *rty_Global_SensorSignalsBus_VLV;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->VDamperPotentiometerRL_gbf = *rty_Global_SensorSignalsBus__ik;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->VDamperPotentiometerRR_pg3 = *rty_Global_SensorSignalsBus__iu;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->VDCInvRL_obw = *rty_Global_InverterSignalsBu_el;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->vLongitudinalOXTSIMU_frb = *rty_Global_GPSIMUSignalsBus_vLo;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->gLateralOXTSIMU_okc = *rty_Global_GPSIMUSignalsBus_gLa;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->gLongitudinalOXTSIMU_ifc = *rty_Global_GPSIMUSignalsBus_gLo;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->nYawRateOXTSIMU_f31 = *rty_Global_GPSIMUSignalsBus_nYa;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->VCellMax_jv4 = *rty_Global_BMSSignalsBus_VCellM;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->VCellDelta_c2a = *rty_Global_BMSSignalsBus_VCellD;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->VCellMin_oxh = *rty_Global_BMSSignalsBus_VCel_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->VCellAverage_frs = *rty_Global_BMSSignalsBus_VCellA;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->TCellMax_n1u = *rty_Global_BMSSignalsBus_TCellM;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->NBMSDLC_m3i = *rty_Global_BMSSignalsBus_NBMSDL;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->TInvRL_jia = *rty_Global_InverterSignalsBu_cj;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->TCellMin_etn = *rty_Global_BMSSignalsBus_TCel_c;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->IBMSHallEffect_bcz = *rty_Global_BMSSignalsBus_IBMSHa;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->VDCAccumulator_gbt = *rty_Global_BMSSignalsBus_VDCAcc;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->RCellAverage_fql = *rty_Global_BMSSignalsBus_RCellA;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->BBalancingActive_nfy = *rty_Global_BMSSignalsBus_BBalan;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->BBMSP0A0C_inm = *rty_Global_BMSSignalsBus_BBMSP0;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->BBMSP0A0E_nao = *rty_Global_BMSSignalsBus_BBMS_c;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->BBMSP0A10_gso = *rty_Global_BMSSignalsBus_BBMS_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->BBMSP0A80_a0m = *rty_Global_BMSSignalsBus_BBMS_m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->BBMSP0AC0_mlo = *rty_Global_BMSSignalsBus_BBMS_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->nMotorFL_kcv = *rty_Global_InverterSignalsBu_ez;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->BBMSP0AFA_bzt = *rty_Global_BMSSignalsBus_BBM_kd;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->IIVTS_ozl = *rty_Global_BMSSignalsBus_IIVTS;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->rThrottlePedal_dxa = *rty_Global_SystemsBus_rThrottle;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->BThrottleError_gxnl = *rty_Global_SystemsBus_BThrottle;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->tThrottleError_mnm = *rty_Global_SystemsBus_tThrottle;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->BBrakeError_jnoj = *rty_Global_SystemsBus_BBrakeErr;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->tBrakeError_o3t = *rty_Global_SystemsBus_tBrakeErr;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->BBrakeOn_pz1 = *rty_Global_SystemsBus_BBrakeOn;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->pBrakeMax_d5c = *rty_Global_SystemsBus_pBrakeMax;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->BPedalOverlap_egmb = *rty_Global_SystemsBus_BPedalOve;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->BInvDCOnFL_akajd2f = *rty_Global_InverterSignalsBus_o;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->tPedalOverlap_pfo = *rty_Global_SystemsBus_tPedalOve;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->BAppsOK_oea0 = *rty_Global_SystemsBus_BAppsOK;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->tAppsTimer_kbm = *rty_Global_SystemsBus_tAppsTime;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->rSteeringAngle_hif0 = *rty_Global_SystemsBus_rSteering;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->aSteeringAngle_p30 = *rty_Global_SystemsBus_aSteering;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->rRegenPaddle_getj = *rty_Global_SystemsBus_rRegenPad;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->BRegenOn_ch3 = *rty_Global_SystemsBus_BRegenOn;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->BBrakeLight_gjh3 = *rty_Global_SystemsBus_BBrakeLig;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->xDamperFL_eg5 = *rty_Global_SystemsBus_xDamperFL;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->xDamperFR_f5l = *rty_Global_SystemsBus_xDamperFR;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->BInvErrorFL_lsp = *rty_Global_InverterSignalsBus_p;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->xDamperRL_db0 = *rty_Global_SystemsBus_xDamperRL;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->xDamperRR_jw0 = *rty_Global_SystemsBus_xDamperRR;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->BDamperErrorFL_cn5 = *rty_Global_SystemsBus_BDamperEr;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->BDamperErrorFR_h1l = *rty_Global_SystemsBus_BDamper_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->BDamperErrorRL_n2j = *rty_Global_SystemsBus_BDamper_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->BDamperErrorRR_k1e = *rty_Global_SystemsBus_BDamper_i;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->vChassis_eyfm = *rty_Global_SystemsBus_vChassis;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->sChassis_lq1 = *rty_Global_SystemsBus_sChassis;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->sEMS1000m_bwf = *rty_Global_SystemsBus_sEMS1000m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->BEMS1000mPoint_nbk = *rty_Global_SystemsBus_BEMS1000m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->BInvOnFL_aycnruk = *rty_Global_InverterSignalsBus_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->BEMS995mPoint_fpc = *rty_Global_SystemsBus_BEMS995mP;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->BTorqueVectoringActivated_jzk = *rty_Global_SystemsBus_BTorqueVe;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->NThrottleMap_cgk = *rty_Global_SystemsBus_NThrottle;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->PDischarge_bxs = *rty_Global_SystemsBus_PDischarg;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->BEMSActivated_eiv = *rty_Global_SystemsBus_BEMSActiv;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->PRegen_cub = *rty_Global_SystemsBus_PRegen;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->rTorqueSplit_lt2 = *rty_Global_SystemsBus_rTorqueSp;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->PEngineBraking_iea = *rty_Global_SystemsBus_PEngineBr;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->BSpinningModelActivated_mab = *rty_Global_SystemsBus_BSpinning;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->NTractionControlKpSelector_jml = *rty_Global_SystemsBus_NTraction;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->BInvDCQuitInvOnFL_l51 = *rty_Global_InverterSignalsBu_dm;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->BTractionControlActivated_jaz = *rty_Global_SystemsBus_BTraction;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->rTorqueVectoringMultiplier_lqg = *rty_Global_SystemsBus_rTorqueVe;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->NPowerControllerKpSelector_in3 = *rty_Global_SystemsBus_NPowerCon;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->NTorqueSplitSpeedSelector_bhx = *rty_Global_SystemsBus_NTorqueSp;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->BAccumulatorFanOn_p3q = *rty_Global_SystemsBus_BAccumula;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->BErrorReset_eye = *rty_Global_SystemsBus_BErrorRes;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->BReadyToDriveButton_gbb = *rty_Global_SystemsBus_BReadyToD;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->NModeNumberDisplay5_c05 = *rty_Global_SystemsBus_NModeNumb;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->NModeNumberDisplay6_otn = *rty_Global_SystemsBus_NModeNu_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->TMotorMax_bas = *rty_Global_SystemsBus_TMotorMax;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->BInvQuitInvOnFL_lwh = *rty_Global_InverterSignalsBu_gy;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->TInvMax_mh2 = *rty_Global_SystemsBus_TInvMax;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->PActual_myvv = *rty_Global_SystemsBus_PActual;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->rSOC_dojw = *rty_Global_SystemsBus_rSOC;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->rSOE_chs = *rty_Global_SystemsBus_rSOE;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->BEncoderErrorRear_pi5 = *rty_Global_SystemsBus_BEncoderE;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->BEncoderErrorFront_iuh = *rty_Global_SystemsBus_BEncode_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->rCoolingFansDuty_iv0 = *rty_Global_SystemsBus_rCoolingF;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->rCoolingPumpsDuty_nnm = *rty_Global_SystemsBus_rCoolingP;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->BAccumulatorFanDuty_kxp = *rty_Global_SystemsBus_BAccumu_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->BInvLVOn_aew = *rty_Global_SystemsBus_BInvLVOn;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->BInvDCOnRL_jrweci4 = *rty_Global_InverterSignalsBus_g;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->BInvSysReadyFL_pur = *rty_Global_InverterSignalsBus_m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->rThrottlePedal1_gtl = *rty_Global_SystemsBus_rThrott_g;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->rThrottlePedal2_mqi = *rty_Global_SystemsBus_rThrot_gm;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->NCarState_hou4 = *rty_Global_StateflowBus_NCarSta;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->BReadyToDriveBuzzer_i11 = *rty_Global_StateflowBus_BReadyT;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->BReadyToDrive_cdg = *rty_Global_StateflowBus_BRead_i;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->NBMSState_jbdk = *rty_Global_StateflowBus_NBMSSta;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->NInvState_dos0 = *rty_Global_StateflowBus_NInvSta;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->BHVOn_evi = *rty_Global_StateflowBus_BHVOn;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->BInvOnRL_osz = *rty_Global_StateflowBus_BInvOnR;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->BInvOnRR_bzd = *rty_Global_StateflowBus_BInvO_j;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->BInvWarnFL_log = *rty_Global_InverterSignalsBu_pd;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->BInvOnFL_ayc = *rty_Global_StateflowBus_BInvOnF;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->BInvOnFR_gif = *rty_Global_StateflowBus_BInvO_p;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->BInvDCOnRL_jrw = *rty_Global_StateflowBus_BInvDCO;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->BInvDCOnRR_fch = *rty_Global_StateflowBus_BInvD_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->BInvDCOnFL_aka = *rty_Global_StateflowBus_BInvD_n;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->BInvDCOnFR_az5 = *rty_Global_StateflowBus_BInv_no;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->BInvEnableRL_it3 = *rty_Global_StateflowBus_BInvEna;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->BInvEnableRR_ere = *rty_Global_StateflowBus_BInvE_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->BInvEnableFL_hug = *rty_Global_StateflowBus_BInvE_o;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->BInvEnableFR_guy = *rty_Global_StateflowBus_BInvE_j;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->MMotorMeasuredFL_amc = *rty_Global_InverterSignalsBus_i;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->BInvErrorResetRL_jk0 = *rty_Global_StateflowBus_BInvErr;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->BInvErrorResetRR_afc = *rty_Global_StateflowBus_BInvE_g;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->BInvErrorResetFL_iup = *rty_Global_StateflowBus_BInv_gg;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->BInvErrorResetFR_amp = *rty_Global_StateflowBus_BInvE_m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->MTargetTorqueRL_m4t = *rty_Global_StateflowBus_MTarget;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->MTargetTorqueRR_oom = *rty_Global_StateflowBus_MTarg_a;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->MTargetTorqueFL_jmh = *rty_Global_StateflowBus_MTarg_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->MTargetTorqueFR_n4r = *rty_Global_StateflowBus_MTarg_g;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->MTorqueLimitNegativeRL_aqi = *rty_Global_StateflowBus_MTorque;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->MTorqueLimitNegativeRR_nsa = *rty_Global_StateflowBus_MTorq_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->NInvDTCFL_jy2 = *rty_Global_InverterSignalsBu_pr;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->MTorqueLimitNegativeFL_ds4 = *rty_Global_StateflowBus_MTorq_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->MTorqueLimitNegativeFR_fqx = *rty_Global_StateflowBus_MTorq_g;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->MTorqueLimitPositiveRL_pzu = *rty_Global_StateflowBus_MTor_gn;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->MTorqueLimitPositiveRR_d53 = *rty_Global_StateflowBus_MTorq_m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->MTorqueLimitPositiveFL_d2m = *rty_Global_StateflowBus_MTorq_i;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->MTorqueLimitPositiveFR_hvv = *rty_Global_StateflowBus_MTor_if;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->BDischargeAllowed_hcz = *rty_Global_LimitationsBus_BDisc;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->rInvTemperatureDerate_ofsg = *rty_Global_LimitationsBus_rInvT;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->rInvTemperatureDerateFR_ob5 = *rty_Global_LimitationsBus_rIn_a;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->rInvTemperatureDerateFL_jvj = *rty_Global_LimitationsBus_rIn_c;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->TMotorFL_d45 = *rty_Global_InverterSignalsBu_pe;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->rInvTemperatureDerateRR_d33 = *rty_Global_LimitationsBus_rIn_f;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->rInvTemperatureDerateRL_dsq = *rty_Global_LimitationsBus_rIn_m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->rMotorTemperatureDerate_gigq = *rty_Global_LimitationsBus_rMoto;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->rMotorTemperatureDerateFR_dio = *rty_Global_LimitationsBus_rMo_g;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->rMotorTemperatureDerateFL_jip = *rty_Global_LimitationsBus_rMo_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->rMotorTemperatureDerateRR_aai = *rty_Global_LimitationsBus_rMo_f;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->rMotorTemperatureDerateRL_eln = *rty_Global_LimitationsBus_rMo_e;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->rTSTemperatureDerateFR_el2 = *rty_Global_LimitationsBus_rTSTe;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->rTSTemperatureDerateFL_nvf = *rty_Global_LimitationsBus_rTS_f;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->rTSTemperatureDerateRR_bsp = *rty_Global_LimitationsBus_rTS_j;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->VDCInvFL_cul = *rty_Global_InverterSignalsBu_o3;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->rTSTemperatureDerateRL_ksy = *rty_Global_LimitationsBus_rTS_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->rHighCellTemperatureDischar_dps = *rty_Global_LimitationsBus_rHigh;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->rHighCellTemperatureRegenDe_olj = *rty_Global_LimitationsBus_rHi_o;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->rLowCellVoltageDischargeDer_gkc = *rty_Global_LimitationsBus_rLowC;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->rSOCDischargeDerate_bfw = *rty_Global_LimitationsBus_rSOCD;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->rSOCRegenDerate_ct2 = *rty_Global_LimitationsBus_rSOCR;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->rSpeedRegenDerate_nsgv = *rty_Global_LimitationsBus_rSpee;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->rDischargeDerate_k2m3 = *rty_Global_LimitationsBus_rDisc;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->rRegenDerate_lmpj = *rty_Global_LimitationsBus_rRege;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->MDriverDischargeRequested_lcue = *rty_Global_TorqueControlBus_MDr;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->TInvFL_die = *rty_Global_InverterSignalsBu_e4;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->MDriverRegenRequested_jivd = *rty_Global_TorqueControlBus_M_f;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->MDischargeLimited_cj1 = *rty_Global_TorqueControlBus_MDi;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->MRegenLimited_idu = *rty_Global_TorqueControlBus_MRe;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->PPowerControllerRequested_jdl = *rty_Global_TorqueControlBus_PPo;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->MPowerControllerRequested_ja3 = *rty_Global_TorqueControlBus_MPo;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->PPowerControllerProportiona_kqr = *rty_Global_TorqueControlBus_P_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->PPowerControllerIntegralTer_dbk = *rty_Global_TorqueControlBus_P_j;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->PDischargeLimited_id4 = *rty_Global_TorqueControlBus_PDi;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->MTotalRequested_iu50 = *rty_Global_TorqueControlBus_MTo;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->MTotalEMSRequested_mo3 = *rty_Global_TorqueControlBus_M_m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->nMotorRR_myi = *rty_Global_InverterSignalsBu_mc;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->rSOCTargetError_c0r = *rty_Global_TorqueControlBus_rSO;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->rSOETargetError_ajb = *rty_Global_TorqueControlBus_r_j;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->nYawRateErrorActual_isf = *rty_Global_TorqueControlBus_nYa;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->BTorqueVectoringOK_f4y = *rty_Global_TorqueControlBus_BTo;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->MTorqueVectoringFL_bmp = *rty_Global_TorqueControlBus_M_i;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->MTorqueVectoringFR_bfm = *rty_Global_TorqueControlBus_M_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->MTorqueVectoringRL_m4y = *rty_Global_TorqueControlBus_M_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->MTorqueVectoringRR_f34 = *rty_Global_TorqueControlBus__mr;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->rSplitRear_kpy = *rty_Global_TorqueControlBus_rSp;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->MTorqueDistributionFL_dc2 = *rty_Global_TorqueControlBus__mk;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->BInvDCOnRR_fchgb2p = *rty_Global_InverterSignalsBus_j;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->MTorqueDistributionFR_jsf = *rty_Global_TorqueControlBus_M_n;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->MTorqueDistributionRL_no0 = *rty_Global_TorqueControlBus_M_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->MTorqueDistributionRR_odz = *rty_Global_TorqueControlBus_M_a;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->rSlipRatioOptimal_kzc = *rty_Global_TorqueControlBus_rSl;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->NTractionControlMultiplierF_cgs = *rty_Global_TorqueControlBus_NTr;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->NTractionControlMultiplierF_ppz = *rty_Global_TorqueControlBus_N_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->NTractionControlMultiplierR_pd4 = *rty_Global_TorqueControlBus_N_j;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->NTractionControlMultiplierR_gdg = *rty_Global_TorqueControlBus_N_m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->NABSMultiplierFL_i3s = *rty_Global_TorqueControlBus_NAB;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->NABSMultiplierFR_i0e = *rty_Global_TorqueControlBus_N_c;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->BInvErrorRR_gpt = *rty_Global_InverterSignalsBu_po;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->NABSMultiplierRL_bbs = *rty_Global_TorqueControlBus_N_p;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->NABSMultiplierRR_p0t = *rty_Global_TorqueControlBus__jd;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->rSlipRatioFLActual_jp4 = *rty_Global_TorqueControlBus__ja;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->rSlipRatioFRActual_lbp = *rty_Global_TorqueControlBus_r_e;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->rSlipRatioRLActual_otw = *rty_Global_TorqueControlBus_r_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->rSlipRatioRRActual_f4p = *rty_Global_TorqueControlBus_r_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->MTractionControlFLTotal_aqt = *rty_Global_TorqueControlBus_MTr;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->MTractionControlFRTotal_fg1 = *rty_Global_TorqueControlBus__ku;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->MTractionControlRLTotal_fbd = *rty_Global_TorqueControlBus__ae;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->MTractionControlRRTotal_f1t = *rty_Global_TorqueControlBus_M_j;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->BInvErrorRL_h54 = *rty_Global_InverterSignalsBus_c;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->BInvOnRR_bzdzxto = *rty_Global_InverterSignalsBu_m3;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->MTractionControlFLFinal_ice = *rty_Global_TorqueControlBus__ms;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->MTractionControlFRFinal_b5c = *rty_Global_TorqueControlBus_M_c;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->MTractionControlRLFinal_hes = *rty_Global_TorqueControlBus__lr;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->MTractionControlRRFinal_f1j = *rty_Global_TorqueControlBus__cz;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->MSpinningModelFL_nix = *rty_Global_TorqueControlBus_MSp;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->MSpinningModelFR_bdx = *rty_Global_TorqueControlBus__i4;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->MSpinningModelRL_afr = *rty_Global_TorqueControlBus__be;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->MSpinningModelRR_fmd = *rty_Global_TorqueControlBus__k3;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->MFLFinal_pt0 = *rty_Global_TorqueControlBus_MFL;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->MFRFinal_gwf = *rty_Global_TorqueControlBus_MFR;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->BInvDCQuitInvOnRR_lk3 = *rty_Global_InverterSignalsBu_p2;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->MRLFinal_ai3 = *rty_Global_TorqueControlBus_MRL;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->MRRFinal_a2f = *rty_Global_TorqueControlBus_MRR;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->MTotalFinal_k2q = *rty_Global_TorqueControlBus_M_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->BInvQuitInvOnRR_mjf = *rty_Global_InverterSignalsBu_i3;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->BInvSysReadyRR_cuw = *rty_Global_InverterSignalsB_ka1;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->BInvWarnRR_ily = *rty_Global_InverterSignalsBu_hs;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->MMotorMeasuredRR_mxv = *rty_Global_InverterSignalsBus_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->NInvDTCRR_j2m = *rty_Global_InverterSignalsBu_ng;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->TMotorRR_amm = *rty_Global_InverterSignalsB_gye;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->VDCInvRR_nty = *rty_Global_InverterSignalsBu_go;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->TInvRR_jut = *rty_Global_InverterSignalsBu_ep;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->BInvOnRL_oszezhv = *rty_Global_InverterSignalsBus_e;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->nMotorFR_fhn = *rty_Global_InverterSignalsBu_kf;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->BInvDCOnFR_az50kzw = *rty_Global_InverterSignalsBu_bn;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->BInvErrorFR_gus = *rty_Global_InverterSignalsBu_c4;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->BInvOnFR_gifo4l1 = *rty_Global_InverterSignalsBus_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->BInvDCQuitInvOnFR_m0q = *rty_Global_InverterSignalsBu_p4;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->BInvQuitInvOnFR_gbx = *rty_Global_InverterSignalsBu_py;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->BInvSysReadyFR_im5 = *rty_Global_InverterSignalsBu_en;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->BInvWarnFR_mxi = *rty_Global_InverterSignalsBu_px;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->MMotorMeasuredFR_pii = *rty_Global_InverterSignalsBu_mk;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->NInvDTCFR_jf5 = *rty_Global_InverterSignalsBu_nk;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->BInvDCQuitInvOnRL_gnj = *rty_Global_InverterSignalsBus_n;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->TMotorFR_c05 = *rty_Global_InverterSignalsBu_fp;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->VDCInvFR_mvm = *rty_Global_InverterSignalsBu_df;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->TInvFR_foe = *rty_Global_InverterSignalsBu_mw;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->vWheelRL_hmp = *rty_Global_WheelSpeedsBus_vWhee;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->vWheelRR_apy = *rty_Global_WheelSpeedsBus_vWh_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->vWheelFL_n1y = *rty_Global_WheelSpeedsBus_vW_h2;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->vWheelFR_olm = *rty_Global_WheelSpeedsBus_vW_hs;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->pBrakeF_axi = *rty_Global_SensorSignalsBus_pBr;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->pBrakeR_pxi = *rty_Global_SensorSignalsBus_p_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->VDamperPotentiometerFL_on0 = *rty_Global_SensorSignalsBus_VDa;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->BInvQuitInvOnRL_dc5 = *rty_Global_InverterSignalsBus_f;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->VDamperPotentiometerFR_jug = *rty_Global_SensorSignalsBus_V_i;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->NDisplayNumberDDU7_nzg = *rty_Global_SensorSignalsBus_NDi;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->VSteeringAngle_bkv = *rty_Global_SensorSignalsBus_VSt;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->VThrottlePedal1_bmt = *rty_Global_SensorSignalsBus_VTh;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->VThrottlePedal2_agz = *rty_Global_SensorSignalsBus_V_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->BSteeringWheelButton1_i0y = *rty_Global_SensorSignalsBus_BSt;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->BSteeringWheelButton2_lk5 = *rty_Global_SensorSignalsBus_B_j;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->BSteeringWheelButton3_ejo = *rty_Global_SensorSignalsBus_B_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->BSteeringWheelButton4_ozt = *rty_Global_SensorSignalsBus_B_e;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->BSteeringWheelButton5_o3d = *rty_Global_SensorSignalsBus__le;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->BInvSysReadyRL_muq = *rty_Global_InverterSignalsBus_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->BSteeringWheelButton6_ndb = *rty_Global_SensorSignalsBus_B_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->BSteeringWheelButton7_idy = *rty_Global_SensorSignalsBus__hc;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->BSteeringWheelButton8_nzd = *rty_Global_SensorSignalsBus__hl;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->VRegenPaddle1_bos = *rty_Global_SensorSignalsBus_VRe;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->VRegenPaddle2_ajw = *rty_Global_SensorSignalsBus_V_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->C1P01_Status_m2f = *rty_Global_SensorSignalsBus_C1P;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->C1P02_Status_a2p = *rty_Global_SensorSignalsBus_C_a;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->C1P03_Status_ivq = *rty_Global_SensorSignalsBus_C_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->C1P04_Status_aqm = *rty_Global_SensorSignalsBus_C_i;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->C1P07_Status_gmm = *rty_Global_SensorSignalsBus_C_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->BInvWarnRL_it5 = *rty_Global_InverterSignalsBus_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->C1P11_Status_l13 = *rty_Global_SensorSignalsBus__ir;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->C1P12_Status_hy1 = *rty_Global_SensorSignalsBus__bx;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->C1P13_Status_cxp = *rty_Global_SensorSignalsBus_C_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->C1P25_Status_jtq = *rty_Global_SensorSignalsBus_C_g;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->C1P26_Status_gpv = *rty_Global_SensorSignalsBus__i1;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->C1P28_Status_fwl = *rty_Global_SensorSignalsBus_C_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->C1P30_Status_jvz = *rty_Global_SensorSignalsBus__bl;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->C1P31_Status_ism = *rty_Global_SensorSignalsBus_C_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->C1P33_Status_jxj = *rty_Global_SensorSignalsBus__go;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->C1P34_Status_bll = *rty_Global_SensorSignalsBus_C_f;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->MMotorMeasuredRL_ijj = *rty_Global_InverterSignalsBu_kw;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->C1P36_Status_gbz = *rty_Global_SensorSignalsBus__as;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->C1P37_Status_ah4 = *rty_Global_SensorSignalsBus__gz;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->C1P38_Status_mrl = *rty_Global_SensorSignalsBus_C_c;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->C2P01_Status_bdi = *rty_Global_SensorSignalsBus_C2P;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->C2P02_Status_nzw = *rty_Global_SensorSignalsBus_C_e;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->C2P03_Status_mby = *rty_Global_SensorSignalsBus__lr;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->C2P04_Status_nwd = *rty_Global_SensorSignalsBus__l2;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->C2P05_Status_myr = *rty_Global_SensorSignalsBus__ft;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->C2P13_Status_jej = *rty_Global_SensorSignalsBus__es;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch' */
  localB->C2P25_Status_oc4 = *rty_Global_SensorSignalsBus__c0;

  /* ModelReference generated from: '<Root>/SYSTEMS' */
  SYSTEMS(&localB->NInvDTCRL_jcu, &localB->TMotorRL_mnc, &localB->VDCInvRL_obw,
          &localB->TInvRL_jia, &localB->NInvDTCFL_jy2, &localB->TMotorFL_d45,
          &localB->TInvFL_die, &localB->NInvDTCRR_j2m, &localB->TMotorRR_amm,
          &localB->TInvRR_jut, &localB->NInvDTCFR_jf5, &localB->TMotorFR_c05,
          &localB->TInvFR_foe, &localB->vWheelRL_hmp, &localB->vWheelRR_apy,
          &localB->pBrakeF_axi, &localB->pBrakeR_pxi,
          &localB->VDamperPotentiometerFL_on0,
          &localB->VDamperPotentiometerFR_jug, &localB->NDisplayNumberDDU7_nzg,
          &localB->VSteeringAngle_bkv, &localB->VThrottlePedal1_bmt,
          &localB->VThrottlePedal2_agz, &localB->BSteeringWheelButton2_lk5,
          &localB->BSteeringWheelButton4_ozt, &localB->BSteeringWheelButton5_o3d,
          &localB->BSteeringWheelButton6_ndb, &localB->BSteeringWheelButton7_idy,
          &localB->VRegenPaddle1_bos, &localB->VRegenPaddle2_ajw,
          &localB->VDamperPotentiometerRL_gbf,
          &localB->VDamperPotentiometerRR_pg3, &localB->gLongitudinalOXTSIMU_ifc,
          &localB->TCellMax_n1u, &localB->VDCAccumulator_gbt, &localB->IIVTS_ozl,
          rty_Global_SystemsBus_rThrottle, rty_Global_SystemsBus_BThrottle,
          rty_Global_SystemsBus_tThrottle, rty_Global_SystemsBus_BBrakeErr,
          rty_Global_SystemsBus_tBrakeErr, rty_Global_SystemsBus_BBrakeOn,
          rty_Global_SystemsBus_pBrakeMax, rty_Global_SystemsBus_BPedalOve,
          rty_Global_SystemsBus_tPedalOve, rty_Global_SystemsBus_BAppsOK,
          rty_Global_SystemsBus_tAppsTime, rty_Global_SystemsBus_rSteering,
          rty_Global_SystemsBus_aSteering, rty_Global_SystemsBus_rRegenPad,
          rty_Global_SystemsBus_BRegenOn, rty_Global_SystemsBus_BBrakeLig,
          rty_Global_SystemsBus_xDamperFL, rty_Global_SystemsBus_xDamperFR,
          rty_Global_SystemsBus_xDamperRL, rty_Global_SystemsBus_xDamperRR,
          rty_Global_SystemsBus_BDamperEr, rty_Global_SystemsBus_BDamper_l,
          rty_Global_SystemsBus_BDamper_d, rty_Global_SystemsBus_BDamper_i,
          rty_Global_SystemsBus_vChassis, rty_Global_SystemsBus_sChassis,
          rty_Global_SystemsBus_sEMS1000m, rty_Global_SystemsBus_BEMS1000m,
          rty_Global_SystemsBus_BEMS995mP, rty_Global_SystemsBus_BTorqueVe,
          rty_Global_SystemsBus_NThrottle, rty_Global_SystemsBus_PDischarg,
          rty_Global_SystemsBus_BEMSActiv, rty_Global_SystemsBus_PRegen,
          rty_Global_SystemsBus_rTorqueSp, rty_Global_SystemsBus_PEngineBr,
          rty_Global_SystemsBus_BSpinning, rty_Global_SystemsBus_NTraction,
          rty_Global_SystemsBus_BTraction, rty_Global_SystemsBus_rTorqueVe,
          rty_Global_SystemsBus_NPowerCon, rty_Global_SystemsBus_NTorqueSp,
          rty_Global_SystemsBus_BAccumula, rty_Global_SystemsBus_BErrorRes,
          rty_Global_SystemsBus_BReadyToD, rty_Global_SystemsBus_NModeNumb,
          rty_Global_SystemsBus_NModeNu_d, rty_Global_SystemsBus_TMotorMax,
          rty_Global_SystemsBus_TInvMax, rty_Global_SystemsBus_PActual,
          rty_Global_SystemsBus_rSOC, rty_Global_SystemsBus_rSOE,
          rty_Global_SystemsBus_BEncoderE, rty_Global_SystemsBus_BEncode_h,
          rty_Global_SystemsBus_rCoolingF, rty_Global_SystemsBus_rCoolingP,
          rty_Global_SystemsBus_BAccumu_k, rty_Global_SystemsBus_BInvLVOn,
          rty_Global_SystemsBus_rThrott_g, rty_Global_SystemsBus_rThrot_gm,
          &(localDW->SYSTEMS_InstanceData.rtb),
          &(localDW->SYSTEMS_InstanceData.rtdw));

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->nMotorRL_dy = *rty_Global_InverterSignalsBus_I;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->NInvDTCRL_jc = *rty_Global_InverterSignalsBu_ka;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->C2P26_Status_ga = *rty_Global_SensorSignalsBus__gy;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->C2P27_Status_mz = *rty_Global_SensorSignalsBus__lp;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->C2P28_Status_i2 = *rty_Global_SensorSignalsBus__bp;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->C2P29_Status_ih = *rty_Global_SensorSignalsBus_i12;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->C2P30_Status_iu = *rty_Global_SensorSignalsBus__aq;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->C2P31_Status_ed = *rty_Global_SensorSignalsBus_C_o;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->C2P33_Status_j4 = *rty_Global_SensorSignalsBus__iq;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->C1P16_Digital_fw = *rty_Global_SensorSignalsBus__ex;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->C1P17_Digital_hr = *rty_Global_SensorSignalsBus__de;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->C2P17_Digital_dd = *rty_Global_SensorSignalsBus__do;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->TMotorRL_mn = *rty_Global_InverterSignalsB_kaa;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->C2P18_Digital_ob = *rty_Global_SensorSignalsBus__lj;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->C2P35_Status_df = *rty_Global_SensorSignalsBus__kg;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->C2P36_Status_fj = *rty_Global_SensorSignalsBus_C_n;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->C2P37_Status_ny = *rty_Global_SensorSignalsBus__ho;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->C2P38_Status_ck = *rty_Global_SensorSignalsBus__gk;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->ILVSystem_iw = *rty_Global_SensorSignalsBus_ILV;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->TLVSystem_ay = *rty_Global_SensorSignalsBus_TLV;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->VLVSystem_ch = *rty_Global_SensorSignalsBus_VLV;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->VDamperPotentiometerRL_gb = *rty_Global_SensorSignalsBus__ik;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->VDamperPotentiometerRR_pg = *rty_Global_SensorSignalsBus__iu;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->VDCInvRL_ob = *rty_Global_InverterSignalsBu_el;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->vLongitudinalOXTSIMU_fr = *rty_Global_GPSIMUSignalsBus_vLo;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->gLateralOXTSIMU_ok = *rty_Global_GPSIMUSignalsBus_gLa;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->gLongitudinalOXTSIMU_if = *rty_Global_GPSIMUSignalsBus_gLo;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->nYawRateOXTSIMU_f3 = *rty_Global_GPSIMUSignalsBus_nYa;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->VCellMax_jv = *rty_Global_BMSSignalsBus_VCellM;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->VCellDelta_c2 = *rty_Global_BMSSignalsBus_VCellD;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->VCellMin_ox = *rty_Global_BMSSignalsBus_VCel_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->VCellAverage_fr = *rty_Global_BMSSignalsBus_VCellA;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->TCellMax_n1 = *rty_Global_BMSSignalsBus_TCellM;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->NBMSDLC_m3 = *rty_Global_BMSSignalsBus_NBMSDL;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->TInvRL_ji = *rty_Global_InverterSignalsBu_cj;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->TCellMin_et = *rty_Global_BMSSignalsBus_TCel_c;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->IBMSHallEffect_bc = *rty_Global_BMSSignalsBus_IBMSHa;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->VDCAccumulator_gb = *rty_Global_BMSSignalsBus_VDCAcc;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->RCellAverage_fq = *rty_Global_BMSSignalsBus_RCellA;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->BBalancingActive_nf = *rty_Global_BMSSignalsBus_BBalan;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->BBMSP0A0C_in = *rty_Global_BMSSignalsBus_BBMSP0;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->BBMSP0A0E_na = *rty_Global_BMSSignalsBus_BBMS_c;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->BBMSP0A10_gs = *rty_Global_BMSSignalsBus_BBMS_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->BBMSP0A80_a0 = *rty_Global_BMSSignalsBus_BBMS_m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->BBMSP0AC0_ml = *rty_Global_BMSSignalsBus_BBMS_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->nMotorFL_kc = *rty_Global_InverterSignalsBu_ez;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->BBMSP0AFA_bz = *rty_Global_BMSSignalsBus_BBM_kd;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->IIVTS_oz = *rty_Global_BMSSignalsBus_IIVTS;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->rThrottlePedal_dx = *rty_Global_SystemsBus_rThrottle;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->BThrottleError_gxn = *rty_Global_SystemsBus_BThrottle;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->tThrottleError_mn = *rty_Global_SystemsBus_tThrottle;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->BBrakeError_jno = *rty_Global_SystemsBus_BBrakeErr;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->tBrakeError_o3 = *rty_Global_SystemsBus_tBrakeErr;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->BBrakeOn_pz = *rty_Global_SystemsBus_BBrakeOn;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->pBrakeMax_d5 = *rty_Global_SystemsBus_pBrakeMax;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->BPedalOverlap_egm = *rty_Global_SystemsBus_BPedalOve;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->BInvDCOnFL_akajd2 = *rty_Global_InverterSignalsBus_o;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->tPedalOverlap_pf = *rty_Global_SystemsBus_tPedalOve;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->BAppsOK_oea = *rty_Global_SystemsBus_BAppsOK;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->tAppsTimer_kb = *rty_Global_SystemsBus_tAppsTime;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->rSteeringAngle_hif = *rty_Global_SystemsBus_rSteering;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->aSteeringAngle_p3 = *rty_Global_SystemsBus_aSteering;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->rRegenPaddle_get = *rty_Global_SystemsBus_rRegenPad;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->BRegenOn_ch = *rty_Global_SystemsBus_BRegenOn;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->BBrakeLight_gjh = *rty_Global_SystemsBus_BBrakeLig;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->xDamperFL_eg = *rty_Global_SystemsBus_xDamperFL;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->xDamperFR_f5 = *rty_Global_SystemsBus_xDamperFR;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->BInvErrorFL_ls = *rty_Global_InverterSignalsBus_p;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->xDamperRL_db = *rty_Global_SystemsBus_xDamperRL;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->xDamperRR_jw = *rty_Global_SystemsBus_xDamperRR;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->BDamperErrorFL_cn = *rty_Global_SystemsBus_BDamperEr;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->BDamperErrorFR_h1 = *rty_Global_SystemsBus_BDamper_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->BDamperErrorRL_n2 = *rty_Global_SystemsBus_BDamper_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->BDamperErrorRR_k1 = *rty_Global_SystemsBus_BDamper_i;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->vChassis_eyf = *rty_Global_SystemsBus_vChassis;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->sChassis_lq = *rty_Global_SystemsBus_sChassis;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->sEMS1000m_bw = *rty_Global_SystemsBus_sEMS1000m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->BEMS1000mPoint_nb = *rty_Global_SystemsBus_BEMS1000m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->BInvOnFL_aycnru = *rty_Global_InverterSignalsBus_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->BEMS995mPoint_fp = *rty_Global_SystemsBus_BEMS995mP;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->BTorqueVectoringActivated_jz = *rty_Global_SystemsBus_BTorqueVe;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->NThrottleMap_cg = *rty_Global_SystemsBus_NThrottle;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->PDischarge_bx = *rty_Global_SystemsBus_PDischarg;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->BEMSActivated_ei = *rty_Global_SystemsBus_BEMSActiv;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->PRegen_cu = *rty_Global_SystemsBus_PRegen;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->rTorqueSplit_lt = *rty_Global_SystemsBus_rTorqueSp;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->PEngineBraking_ie = *rty_Global_SystemsBus_PEngineBr;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->BSpinningModelActivated_ma = *rty_Global_SystemsBus_BSpinning;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->NTractionControlKpSelector_jm = *rty_Global_SystemsBus_NTraction;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->BInvDCQuitInvOnFL_l5 = *rty_Global_InverterSignalsBu_dm;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->BTractionControlActivated_ja = *rty_Global_SystemsBus_BTraction;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->rTorqueVectoringMultiplier_lq = *rty_Global_SystemsBus_rTorqueVe;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->NPowerControllerKpSelector_in = *rty_Global_SystemsBus_NPowerCon;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->NTorqueSplitSpeedSelector_bh = *rty_Global_SystemsBus_NTorqueSp;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->BAccumulatorFanOn_p3 = *rty_Global_SystemsBus_BAccumula;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->BErrorReset_ey = *rty_Global_SystemsBus_BErrorRes;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->BReadyToDriveButton_gb = *rty_Global_SystemsBus_BReadyToD;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->NModeNumberDisplay5_c0 = *rty_Global_SystemsBus_NModeNumb;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->NModeNumberDisplay6_ot = *rty_Global_SystemsBus_NModeNu_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->TMotorMax_ba = *rty_Global_SystemsBus_TMotorMax;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->BInvQuitInvOnFL_lw = *rty_Global_InverterSignalsBu_gy;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->TInvMax_mh = *rty_Global_SystemsBus_TInvMax;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->PActual_myv = *rty_Global_SystemsBus_PActual;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->rSOC_doj = *rty_Global_SystemsBus_rSOC;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->rSOE_ch = *rty_Global_SystemsBus_rSOE;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->BEncoderErrorRear_pi = *rty_Global_SystemsBus_BEncoderE;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->BEncoderErrorFront_iu = *rty_Global_SystemsBus_BEncode_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->rCoolingFansDuty_iv = *rty_Global_SystemsBus_rCoolingF;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->rCoolingPumpsDuty_nn = *rty_Global_SystemsBus_rCoolingP;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->BAccumulatorFanDuty_kx = *rty_Global_SystemsBus_BAccumu_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->BInvLVOn_ae = *rty_Global_SystemsBus_BInvLVOn;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->BInvDCOnRL_jrweci = *rty_Global_InverterSignalsBus_g;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->BInvSysReadyFL_pu = *rty_Global_InverterSignalsBus_m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->rThrottlePedal1_gt = *rty_Global_SystemsBus_rThrott_g;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->rThrottlePedal2_mq = *rty_Global_SystemsBus_rThrot_gm;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->NCarState_hou = *rty_Global_StateflowBus_NCarSta;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->BReadyToDriveBuzzer_i1 = *rty_Global_StateflowBus_BReadyT;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->BReadyToDrive_cd = *rty_Global_StateflowBus_BRead_i;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->NBMSState_jbd = *rty_Global_StateflowBus_NBMSSta;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->NInvState_dos = *rty_Global_StateflowBus_NInvSta;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->BHVOn_ev = *rty_Global_StateflowBus_BHVOn;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->BInvOnRL_os = *rty_Global_StateflowBus_BInvOnR;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->BInvOnRR_bz = *rty_Global_StateflowBus_BInvO_j;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->BInvWarnFL_lo = *rty_Global_InverterSignalsBu_pd;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->BInvOnFL_ay = *rty_Global_StateflowBus_BInvOnF;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->BInvOnFR_gi = *rty_Global_StateflowBus_BInvO_p;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->BInvDCOnRL_jr = *rty_Global_StateflowBus_BInvDCO;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->BInvDCOnRR_fc = *rty_Global_StateflowBus_BInvD_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->BInvDCOnFL_ak = *rty_Global_StateflowBus_BInvD_n;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->BInvDCOnFR_az = *rty_Global_StateflowBus_BInv_no;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->BInvEnableRL_it = *rty_Global_StateflowBus_BInvEna;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->BInvEnableRR_er = *rty_Global_StateflowBus_BInvE_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->BInvEnableFL_hu = *rty_Global_StateflowBus_BInvE_o;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->BInvEnableFR_gu = *rty_Global_StateflowBus_BInvE_j;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->MMotorMeasuredFL_am = *rty_Global_InverterSignalsBus_i;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->BInvErrorResetRL_jk = *rty_Global_StateflowBus_BInvErr;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->BInvErrorResetRR_af = *rty_Global_StateflowBus_BInvE_g;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->BInvErrorResetFL_iu = *rty_Global_StateflowBus_BInv_gg;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->BInvErrorResetFR_am = *rty_Global_StateflowBus_BInvE_m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->MTargetTorqueRL_m4 = *rty_Global_StateflowBus_MTarget;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->MTargetTorqueRR_oo = *rty_Global_StateflowBus_MTarg_a;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->MTargetTorqueFL_jm = *rty_Global_StateflowBus_MTarg_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->MTargetTorqueFR_n4 = *rty_Global_StateflowBus_MTarg_g;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->MTorqueLimitNegativeRL_aq = *rty_Global_StateflowBus_MTorque;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->MTorqueLimitNegativeRR_ns = *rty_Global_StateflowBus_MTorq_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->NInvDTCFL_jy = *rty_Global_InverterSignalsBu_pr;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->MTorqueLimitNegativeFL_ds = *rty_Global_StateflowBus_MTorq_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->MTorqueLimitNegativeFR_fq = *rty_Global_StateflowBus_MTorq_g;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->MTorqueLimitPositiveRL_pz = *rty_Global_StateflowBus_MTor_gn;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->MTorqueLimitPositiveRR_d5 = *rty_Global_StateflowBus_MTorq_m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->MTorqueLimitPositiveFL_d2 = *rty_Global_StateflowBus_MTorq_i;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->MTorqueLimitPositiveFR_hv = *rty_Global_StateflowBus_MTor_if;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->BDischargeAllowed_hc = *rty_Global_LimitationsBus_BDisc;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->rInvTemperatureDerate_ofs = *rty_Global_LimitationsBus_rInvT;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->rInvTemperatureDerateFR_ob = *rty_Global_LimitationsBus_rIn_a;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->rInvTemperatureDerateFL_jv = *rty_Global_LimitationsBus_rIn_c;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->TMotorFL_d4 = *rty_Global_InverterSignalsBu_pe;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->rInvTemperatureDerateRR_d3 = *rty_Global_LimitationsBus_rIn_f;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->rInvTemperatureDerateRL_ds = *rty_Global_LimitationsBus_rIn_m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->rMotorTemperatureDerate_gig = *rty_Global_LimitationsBus_rMoto;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->rMotorTemperatureDerateFR_di = *rty_Global_LimitationsBus_rMo_g;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->rMotorTemperatureDerateFL_ji = *rty_Global_LimitationsBus_rMo_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->rMotorTemperatureDerateRR_aa = *rty_Global_LimitationsBus_rMo_f;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->rMotorTemperatureDerateRL_el = *rty_Global_LimitationsBus_rMo_e;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->rTSTemperatureDerateFR_el = *rty_Global_LimitationsBus_rTSTe;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->rTSTemperatureDerateFL_nv = *rty_Global_LimitationsBus_rTS_f;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->rTSTemperatureDerateRR_bs = *rty_Global_LimitationsBus_rTS_j;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->VDCInvFL_cu = *rty_Global_InverterSignalsBu_o3;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->rTSTemperatureDerateRL_ks = *rty_Global_LimitationsBus_rTS_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->rHighCellTemperatureDischarg_dp = *rty_Global_LimitationsBus_rHigh;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->rHighCellTemperatureRegenDer_ol = *rty_Global_LimitationsBus_rHi_o;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->rLowCellVoltageDischargeDera_gk = *rty_Global_LimitationsBus_rLowC;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->rSOCDischargeDerate_bf = *rty_Global_LimitationsBus_rSOCD;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->rSOCRegenDerate_ct = *rty_Global_LimitationsBus_rSOCR;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->rSpeedRegenDerate_nsg = *rty_Global_LimitationsBus_rSpee;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->rDischargeDerate_k2m = *rty_Global_LimitationsBus_rDisc;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->rRegenDerate_lmp = *rty_Global_LimitationsBus_rRege;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->MDriverDischargeRequested_lcu = *rty_Global_TorqueControlBus_MDr;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->TInvFL_di = *rty_Global_InverterSignalsBu_e4;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->MDriverRegenRequested_jiv = *rty_Global_TorqueControlBus_M_f;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->MDischargeLimited_cj = *rty_Global_TorqueControlBus_MDi;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->MRegenLimited_id = *rty_Global_TorqueControlBus_MRe;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->PPowerControllerRequested_jd = *rty_Global_TorqueControlBus_PPo;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->MPowerControllerRequested_ja = *rty_Global_TorqueControlBus_MPo;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->PPowerControllerProportional_kq = *rty_Global_TorqueControlBus_P_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->PPowerControllerIntegralTerm_db = *rty_Global_TorqueControlBus_P_j;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->PDischargeLimited_id = *rty_Global_TorqueControlBus_PDi;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->MTotalRequested_iu5 = *rty_Global_TorqueControlBus_MTo;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->MTotalEMSRequested_mo = *rty_Global_TorqueControlBus_M_m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->nMotorRR_my = *rty_Global_InverterSignalsBu_mc;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->rSOCTargetError_c0 = *rty_Global_TorqueControlBus_rSO;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->rSOETargetError_aj = *rty_Global_TorqueControlBus_r_j;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->nYawRateErrorActual_is = *rty_Global_TorqueControlBus_nYa;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->BTorqueVectoringOK_f4 = *rty_Global_TorqueControlBus_BTo;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->MTorqueVectoringFL_bm = *rty_Global_TorqueControlBus_M_i;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->MTorqueVectoringFR_bf = *rty_Global_TorqueControlBus_M_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->MTorqueVectoringRL_m4 = *rty_Global_TorqueControlBus_M_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->MTorqueVectoringRR_f3 = *rty_Global_TorqueControlBus__mr;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->rSplitRear_kp = *rty_Global_TorqueControlBus_rSp;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->MTorqueDistributionFL_dc = *rty_Global_TorqueControlBus__mk;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->BInvDCOnRR_fchgb2 = *rty_Global_InverterSignalsBus_j;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->MTorqueDistributionFR_js = *rty_Global_TorqueControlBus_M_n;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->MTorqueDistributionRL_no = *rty_Global_TorqueControlBus_M_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->MTorqueDistributionRR_od = *rty_Global_TorqueControlBus_M_a;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->rSlipRatioOptimal_kz = *rty_Global_TorqueControlBus_rSl;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->NTractionControlMultiplierFL_cg = *rty_Global_TorqueControlBus_NTr;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->NTractionControlMultiplierFR_pp = *rty_Global_TorqueControlBus_N_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->NTractionControlMultiplierRL_pd = *rty_Global_TorqueControlBus_N_j;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->NTractionControlMultiplierRR_gd = *rty_Global_TorqueControlBus_N_m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->NABSMultiplierFL_i3 = *rty_Global_TorqueControlBus_NAB;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->NABSMultiplierFR_i0 = *rty_Global_TorqueControlBus_N_c;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->BInvErrorRR_gp = *rty_Global_InverterSignalsBu_po;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->NABSMultiplierRL_bb = *rty_Global_TorqueControlBus_N_p;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->NABSMultiplierRR_p0 = *rty_Global_TorqueControlBus__jd;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->rSlipRatioFLActual_jp = *rty_Global_TorqueControlBus__ja;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->rSlipRatioFRActual_lb = *rty_Global_TorqueControlBus_r_e;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->rSlipRatioRLActual_ot = *rty_Global_TorqueControlBus_r_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->rSlipRatioRRActual_f4 = *rty_Global_TorqueControlBus_r_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->MTractionControlFLTotal_aq = *rty_Global_TorqueControlBus_MTr;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->MTractionControlFRTotal_fg = *rty_Global_TorqueControlBus__ku;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->MTractionControlRLTotal_fb = *rty_Global_TorqueControlBus__ae;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->MTractionControlRRTotal_f1 = *rty_Global_TorqueControlBus_M_j;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->BInvErrorRL_h5 = *rty_Global_InverterSignalsBus_c;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->BInvOnRR_bzdzxt = *rty_Global_InverterSignalsBu_m3;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->MTractionControlFLFinal_ic = *rty_Global_TorqueControlBus__ms;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->MTractionControlFRFinal_b5 = *rty_Global_TorqueControlBus_M_c;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->MTractionControlRLFinal_he = *rty_Global_TorqueControlBus__lr;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->MTractionControlRRFinal_f1 = *rty_Global_TorqueControlBus__cz;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->MSpinningModelFL_ni = *rty_Global_TorqueControlBus_MSp;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->MSpinningModelFR_bd = *rty_Global_TorqueControlBus__i4;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->MSpinningModelRL_af = *rty_Global_TorqueControlBus__be;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->MSpinningModelRR_fm = *rty_Global_TorqueControlBus__k3;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->MFLFinal_pt = *rty_Global_TorqueControlBus_MFL;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->MFRFinal_gw = *rty_Global_TorqueControlBus_MFR;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->BInvDCQuitInvOnRR_lk = *rty_Global_InverterSignalsBu_p2;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->MRLFinal_ai = *rty_Global_TorqueControlBus_MRL;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->MRRFinal_a2 = *rty_Global_TorqueControlBus_MRR;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->MTotalFinal_k2 = *rty_Global_TorqueControlBus_M_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->BInvQuitInvOnRR_mj = *rty_Global_InverterSignalsBu_i3;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->BInvSysReadyRR_cu = *rty_Global_InverterSignalsB_ka1;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->BInvWarnRR_il = *rty_Global_InverterSignalsBu_hs;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->MMotorMeasuredRR_mx = *rty_Global_InverterSignalsBus_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->NInvDTCRR_j2 = *rty_Global_InverterSignalsBu_ng;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->TMotorRR_am = *rty_Global_InverterSignalsB_gye;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->VDCInvRR_nt = *rty_Global_InverterSignalsBu_go;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->TInvRR_ju = *rty_Global_InverterSignalsBu_ep;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->BInvOnRL_oszezh = *rty_Global_InverterSignalsBus_e;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->nMotorFR_fh = *rty_Global_InverterSignalsBu_kf;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->BInvDCOnFR_az50kz = *rty_Global_InverterSignalsBu_bn;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->BInvErrorFR_gu = *rty_Global_InverterSignalsBu_c4;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->BInvOnFR_gifo4l = *rty_Global_InverterSignalsBus_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->BInvDCQuitInvOnFR_m0 = *rty_Global_InverterSignalsBu_p4;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->BInvQuitInvOnFR_gb = *rty_Global_InverterSignalsBu_py;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->BInvSysReadyFR_im = *rty_Global_InverterSignalsBu_en;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->BInvWarnFR_mx = *rty_Global_InverterSignalsBu_px;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->MMotorMeasuredFR_pi = *rty_Global_InverterSignalsBu_mk;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->NInvDTCFR_jf = *rty_Global_InverterSignalsBu_nk;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->BInvDCQuitInvOnRL_gn = *rty_Global_InverterSignalsBus_n;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->TMotorFR_c0 = *rty_Global_InverterSignalsBu_fp;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->VDCInvFR_mv = *rty_Global_InverterSignalsBu_df;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->TInvFR_fo = *rty_Global_InverterSignalsBu_mw;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->vWheelRL_hm = *rty_Global_WheelSpeedsBus_vWhee;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->vWheelRR_ap = *rty_Global_WheelSpeedsBus_vWh_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->vWheelFL_n1 = *rty_Global_WheelSpeedsBus_vW_h2;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->vWheelFR_ol = *rty_Global_WheelSpeedsBus_vW_hs;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->pBrakeF_ax = *rty_Global_SensorSignalsBus_pBr;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->pBrakeR_px = *rty_Global_SensorSignalsBus_p_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->VDamperPotentiometerFL_on = *rty_Global_SensorSignalsBus_VDa;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->BInvQuitInvOnRL_dc = *rty_Global_InverterSignalsBus_f;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->VDamperPotentiometerFR_ju = *rty_Global_SensorSignalsBus_V_i;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->NDisplayNumberDDU7_nz = *rty_Global_SensorSignalsBus_NDi;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->VSteeringAngle_bk = *rty_Global_SensorSignalsBus_VSt;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->VThrottlePedal1_bm = *rty_Global_SensorSignalsBus_VTh;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->VThrottlePedal2_ag = *rty_Global_SensorSignalsBus_V_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->BSteeringWheelButton1_i0 = *rty_Global_SensorSignalsBus_BSt;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->BSteeringWheelButton2_lk = *rty_Global_SensorSignalsBus_B_j;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->BSteeringWheelButton3_ej = *rty_Global_SensorSignalsBus_B_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->BSteeringWheelButton4_oz = *rty_Global_SensorSignalsBus_B_e;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->BSteeringWheelButton5_o3 = *rty_Global_SensorSignalsBus__le;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->BInvSysReadyRL_mu = *rty_Global_InverterSignalsBus_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->BSteeringWheelButton6_nd = *rty_Global_SensorSignalsBus_B_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->BSteeringWheelButton7_id = *rty_Global_SensorSignalsBus__hc;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->BSteeringWheelButton8_nz = *rty_Global_SensorSignalsBus__hl;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->VRegenPaddle1_bo = *rty_Global_SensorSignalsBus_VRe;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->VRegenPaddle2_aj = *rty_Global_SensorSignalsBus_V_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->C1P01_Status_m2 = *rty_Global_SensorSignalsBus_C1P;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->C1P02_Status_a2 = *rty_Global_SensorSignalsBus_C_a;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->C1P03_Status_iv = *rty_Global_SensorSignalsBus_C_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->C1P04_Status_aq = *rty_Global_SensorSignalsBus_C_i;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->C1P07_Status_gm = *rty_Global_SensorSignalsBus_C_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->BInvWarnRL_it = *rty_Global_InverterSignalsBus_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->C1P11_Status_l1 = *rty_Global_SensorSignalsBus__ir;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->C1P12_Status_hy = *rty_Global_SensorSignalsBus__bx;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->C1P13_Status_cx = *rty_Global_SensorSignalsBus_C_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->C1P25_Status_jt = *rty_Global_SensorSignalsBus_C_g;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->C1P26_Status_gp = *rty_Global_SensorSignalsBus__i1;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->C1P28_Status_fw = *rty_Global_SensorSignalsBus_C_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->C1P30_Status_jv = *rty_Global_SensorSignalsBus__bl;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->C1P31_Status_is = *rty_Global_SensorSignalsBus_C_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->C1P33_Status_jx = *rty_Global_SensorSignalsBus__go;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->C1P34_Status_bl = *rty_Global_SensorSignalsBus_C_f;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->MMotorMeasuredRL_ij = *rty_Global_InverterSignalsBu_kw;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->C1P36_Status_gb = *rty_Global_SensorSignalsBus__as;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->C1P37_Status_ah = *rty_Global_SensorSignalsBus__gz;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->C1P38_Status_mr = *rty_Global_SensorSignalsBus_C_c;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->C2P01_Status_bd = *rty_Global_SensorSignalsBus_C2P;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->C2P02_Status_nz = *rty_Global_SensorSignalsBus_C_e;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->C2P03_Status_mb = *rty_Global_SensorSignalsBus__lr;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->C2P04_Status_nw = *rty_Global_SensorSignalsBus__l2;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->C2P05_Status_my = *rty_Global_SensorSignalsBus__ft;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->C2P13_Status_je = *rty_Global_SensorSignalsBus__es;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch1' */
  localB->C2P25_Status_oc = *rty_Global_SensorSignalsBus__c0;

  /* ModelReference generated from: '<Root>/STATEFLOW' */
  STATEFLOW(&localB->nMotorRL_dy, &localB->BInvErrorRL_h5,
            &localB->BInvDCQuitInvOnRL_gn, &localB->BInvQuitInvOnRL_dc,
            &localB->BInvSysReadyRL_mu, &localB->NInvDTCRL_jc,
            &localB->VDCInvRL_ob, &localB->BInvErrorFL_ls,
            &localB->BInvDCQuitInvOnFL_l5, &localB->BInvQuitInvOnFL_lw,
            &localB->BInvSysReadyFL_pu, &localB->NInvDTCFL_jy,
            &localB->BInvErrorRR_gp, &localB->BInvDCQuitInvOnRR_lk,
            &localB->BInvQuitInvOnRR_mj, &localB->BInvSysReadyRR_cu,
            &localB->NInvDTCRR_j2, &localB->BInvErrorFR_gu,
            &localB->BInvDCQuitInvOnFR_m0, &localB->BInvQuitInvOnFR_gb,
            &localB->BInvSysReadyFR_im, &localB->NInvDTCFR_jf,
            &localB->pBrakeF_ax, &localB->pBrakeR_px, &localB->VCellAverage_fr,
            &localB->VDCAccumulator_gb, &localB->RCellAverage_fq,
            &localB->BBalancingActive_nf, &localB->BBMSP0A0C_in,
            &localB->BBMSP0A0E_na, &localB->BBMSP0A10_gs, &localB->BBMSP0A80_a0,
            &localB->BBMSP0AC0_ml, &localB->BBMSP0AFA_bz,
            &localB->rThrottlePedal_dx, &localB->BErrorReset_ey,
            &localB->BReadyToDriveButton_gb, rty_Global_StateflowBus_NCarSta,
            rty_Global_StateflowBus_BReadyT, rty_Global_StateflowBus_BRead_i,
            rty_Global_StateflowBus_NBMSSta, rty_Global_StateflowBus_NInvSta,
            rty_Global_StateflowBus_BHVOn, rty_Global_StateflowBus_BInvOnR,
            rty_Global_StateflowBus_BInvO_j, rty_Global_StateflowBus_BInvOnF,
            rty_Global_StateflowBus_BInvO_p, rty_Global_StateflowBus_BInvDCO,
            rty_Global_StateflowBus_BInvD_h, rty_Global_StateflowBus_BInvD_n,
            rty_Global_StateflowBus_BInv_no, rty_Global_StateflowBus_BInvEna,
            rty_Global_StateflowBus_BInvE_h, rty_Global_StateflowBus_BInvE_o,
            rty_Global_StateflowBus_BInvE_j, rty_Global_StateflowBus_BInvErr,
            rty_Global_StateflowBus_BInvE_g, rty_Global_StateflowBus_BInv_gg,
            rty_Global_StateflowBus_BInvE_m, rty_Global_StateflowBus_MTarget,
            rty_Global_StateflowBus_MTarg_a, rty_Global_StateflowBus_MTarg_l,
            rty_Global_StateflowBus_MTarg_g, rty_Global_StateflowBus_MTorque,
            rty_Global_StateflowBus_MTorq_h, rty_Global_StateflowBus_MTorq_l,
            rty_Global_StateflowBus_MTorq_g, rty_Global_StateflowBus_MTor_gn,
            rty_Global_StateflowBus_MTorq_m, rty_Global_StateflowBus_MTorq_i,
            rty_Global_StateflowBus_MTor_if,
            &(localDW->STATEFLOW_InstanceData.rtdw));

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->nMotorRL_d = *rty_Global_InverterSignalsBus_I;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->NInvDTCRL_j = *rty_Global_InverterSignalsBu_ka;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->C2P26_Status_g = *rty_Global_SensorSignalsBus__gy;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->C2P27_Status_m = *rty_Global_SensorSignalsBus__lp;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->C2P28_Status_i = *rty_Global_SensorSignalsBus__bp;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->C2P29_Status_i = *rty_Global_SensorSignalsBus_i12;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->C2P30_Status_i = *rty_Global_SensorSignalsBus__aq;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->C2P31_Status_e = *rty_Global_SensorSignalsBus_C_o;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->C2P33_Status_j = *rty_Global_SensorSignalsBus__iq;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->C1P16_Digital_f = *rty_Global_SensorSignalsBus__ex;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->C1P17_Digital_h = *rty_Global_SensorSignalsBus__de;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->C2P17_Digital_d = *rty_Global_SensorSignalsBus__do;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->TMotorRL_m = *rty_Global_InverterSignalsB_kaa;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->C2P18_Digital_o = *rty_Global_SensorSignalsBus__lj;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->C2P35_Status_d = *rty_Global_SensorSignalsBus__kg;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->C2P36_Status_f = *rty_Global_SensorSignalsBus_C_n;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->C2P37_Status_n = *rty_Global_SensorSignalsBus__ho;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->C2P38_Status_c = *rty_Global_SensorSignalsBus__gk;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->ILVSystem_i = *rty_Global_SensorSignalsBus_ILV;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->TLVSystem_a = *rty_Global_SensorSignalsBus_TLV;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->VLVSystem_c = *rty_Global_SensorSignalsBus_VLV;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->VDamperPotentiometerRL_g = *rty_Global_SensorSignalsBus__ik;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->VDamperPotentiometerRR_p = *rty_Global_SensorSignalsBus__iu;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->VDCInvRL_o = *rty_Global_InverterSignalsBu_el;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->vLongitudinalOXTSIMU_f = *rty_Global_GPSIMUSignalsBus_vLo;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->gLateralOXTSIMU_o = *rty_Global_GPSIMUSignalsBus_gLa;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->gLongitudinalOXTSIMU_i = *rty_Global_GPSIMUSignalsBus_gLo;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->nYawRateOXTSIMU_f = *rty_Global_GPSIMUSignalsBus_nYa;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->VCellMax_j = *rty_Global_BMSSignalsBus_VCellM;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->VCellDelta_c = *rty_Global_BMSSignalsBus_VCellD;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->VCellMin_o = *rty_Global_BMSSignalsBus_VCel_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->VCellAverage_f = *rty_Global_BMSSignalsBus_VCellA;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->TCellMax_n = *rty_Global_BMSSignalsBus_TCellM;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->NBMSDLC_m = *rty_Global_BMSSignalsBus_NBMSDL;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->TInvRL_j = *rty_Global_InverterSignalsBu_cj;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->TCellMin_e = *rty_Global_BMSSignalsBus_TCel_c;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->IBMSHallEffect_b = *rty_Global_BMSSignalsBus_IBMSHa;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->VDCAccumulator_g = *rty_Global_BMSSignalsBus_VDCAcc;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->RCellAverage_f = *rty_Global_BMSSignalsBus_RCellA;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->BBalancingActive_n = *rty_Global_BMSSignalsBus_BBalan;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->BBMSP0A0C_i = *rty_Global_BMSSignalsBus_BBMSP0;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->BBMSP0A0E_n = *rty_Global_BMSSignalsBus_BBMS_c;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->BBMSP0A10_g = *rty_Global_BMSSignalsBus_BBMS_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->BBMSP0A80_a = *rty_Global_BMSSignalsBus_BBMS_m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->BBMSP0AC0_m = *rty_Global_BMSSignalsBus_BBMS_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->nMotorFL_k = *rty_Global_InverterSignalsBu_ez;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->BBMSP0AFA_b = *rty_Global_BMSSignalsBus_BBM_kd;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->IIVTS_o = *rty_Global_BMSSignalsBus_IIVTS;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->rThrottlePedal_d = *rty_Global_SystemsBus_rThrottle;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->BThrottleError_gx = *rty_Global_SystemsBus_BThrottle;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->tThrottleError_m = *rty_Global_SystemsBus_tThrottle;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->BBrakeError_jn = *rty_Global_SystemsBus_BBrakeErr;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->tBrakeError_o = *rty_Global_SystemsBus_tBrakeErr;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->BBrakeOn_p = *rty_Global_SystemsBus_BBrakeOn;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->pBrakeMax_d = *rty_Global_SystemsBus_pBrakeMax;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->BPedalOverlap_eg = *rty_Global_SystemsBus_BPedalOve;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->BInvDCOnFL_akajd = *rty_Global_InverterSignalsBus_o;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->tPedalOverlap_p = *rty_Global_SystemsBus_tPedalOve;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->BAppsOK_oe = *rty_Global_SystemsBus_BAppsOK;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->tAppsTimer_k = *rty_Global_SystemsBus_tAppsTime;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->rSteeringAngle_hi = *rty_Global_SystemsBus_rSteering;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->aSteeringAngle_p = *rty_Global_SystemsBus_aSteering;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->rRegenPaddle_ge = *rty_Global_SystemsBus_rRegenPad;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->BRegenOn_c = *rty_Global_SystemsBus_BRegenOn;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->BBrakeLight_gj = *rty_Global_SystemsBus_BBrakeLig;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->xDamperFL_e = *rty_Global_SystemsBus_xDamperFL;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->xDamperFR_f = *rty_Global_SystemsBus_xDamperFR;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->BInvErrorFL_l = *rty_Global_InverterSignalsBus_p;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->xDamperRL_d = *rty_Global_SystemsBus_xDamperRL;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->xDamperRR_j = *rty_Global_SystemsBus_xDamperRR;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->BDamperErrorFL_c = *rty_Global_SystemsBus_BDamperEr;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->BDamperErrorFR_h = *rty_Global_SystemsBus_BDamper_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->BDamperErrorRL_n = *rty_Global_SystemsBus_BDamper_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->BDamperErrorRR_k = *rty_Global_SystemsBus_BDamper_i;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->vChassis_ey = *rty_Global_SystemsBus_vChassis;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->sChassis_l = *rty_Global_SystemsBus_sChassis;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->sEMS1000m_b = *rty_Global_SystemsBus_sEMS1000m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->BEMS1000mPoint_n = *rty_Global_SystemsBus_BEMS1000m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->BInvOnFL_aycnr = *rty_Global_InverterSignalsBus_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->BEMS995mPoint_f = *rty_Global_SystemsBus_BEMS995mP;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->BTorqueVectoringActivated_j = *rty_Global_SystemsBus_BTorqueVe;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->NThrottleMap_c = *rty_Global_SystemsBus_NThrottle;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->PDischarge_b = *rty_Global_SystemsBus_PDischarg;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->BEMSActivated_e = *rty_Global_SystemsBus_BEMSActiv;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->PRegen_c = *rty_Global_SystemsBus_PRegen;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->rTorqueSplit_l = *rty_Global_SystemsBus_rTorqueSp;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->PEngineBraking_i = *rty_Global_SystemsBus_PEngineBr;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->BSpinningModelActivated_m = *rty_Global_SystemsBus_BSpinning;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->NTractionControlKpSelector_j = *rty_Global_SystemsBus_NTraction;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->BInvDCQuitInvOnFL_l = *rty_Global_InverterSignalsBu_dm;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->BTractionControlActivated_j = *rty_Global_SystemsBus_BTraction;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->rTorqueVectoringMultiplier_l = *rty_Global_SystemsBus_rTorqueVe;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->NPowerControllerKpSelector_i = *rty_Global_SystemsBus_NPowerCon;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->NTorqueSplitSpeedSelector_b = *rty_Global_SystemsBus_NTorqueSp;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->BAccumulatorFanOn_p = *rty_Global_SystemsBus_BAccumula;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->BErrorReset_e = *rty_Global_SystemsBus_BErrorRes;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->BReadyToDriveButton_g = *rty_Global_SystemsBus_BReadyToD;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->NModeNumberDisplay5_c = *rty_Global_SystemsBus_NModeNumb;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->NModeNumberDisplay6_o = *rty_Global_SystemsBus_NModeNu_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->TMotorMax_b = *rty_Global_SystemsBus_TMotorMax;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->BInvQuitInvOnFL_l = *rty_Global_InverterSignalsBu_gy;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->TInvMax_m = *rty_Global_SystemsBus_TInvMax;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->PActual_my = *rty_Global_SystemsBus_PActual;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->rSOC_do = *rty_Global_SystemsBus_rSOC;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->rSOE_c = *rty_Global_SystemsBus_rSOE;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->BEncoderErrorRear_p = *rty_Global_SystemsBus_BEncoderE;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->BEncoderErrorFront_i = *rty_Global_SystemsBus_BEncode_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->rCoolingFansDuty_i = *rty_Global_SystemsBus_rCoolingF;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->rCoolingPumpsDuty_n = *rty_Global_SystemsBus_rCoolingP;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->BAccumulatorFanDuty_k = *rty_Global_SystemsBus_BAccumu_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->BInvLVOn_a = *rty_Global_SystemsBus_BInvLVOn;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->BInvDCOnRL_jrwec = *rty_Global_InverterSignalsBus_g;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->BInvSysReadyFL_p = *rty_Global_InverterSignalsBus_m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->rThrottlePedal1_g = *rty_Global_SystemsBus_rThrott_g;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->rThrottlePedal2_m = *rty_Global_SystemsBus_rThrot_gm;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->NCarState_ho = *rty_Global_StateflowBus_NCarSta;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->BReadyToDriveBuzzer_i = *rty_Global_StateflowBus_BReadyT;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->BReadyToDrive_c = *rty_Global_StateflowBus_BRead_i;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->NBMSState_jb = *rty_Global_StateflowBus_NBMSSta;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->NInvState_do = *rty_Global_StateflowBus_NInvSta;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->BHVOn_e = *rty_Global_StateflowBus_BHVOn;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->BInvOnRL_o = *rty_Global_StateflowBus_BInvOnR;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->BInvOnRR_b = *rty_Global_StateflowBus_BInvO_j;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->BInvWarnFL_l = *rty_Global_InverterSignalsBu_pd;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->BInvOnFL_a = *rty_Global_StateflowBus_BInvOnF;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->BInvOnFR_g = *rty_Global_StateflowBus_BInvO_p;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->BInvDCOnRL_j = *rty_Global_StateflowBus_BInvDCO;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->BInvDCOnRR_f = *rty_Global_StateflowBus_BInvD_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->BInvDCOnFL_a = *rty_Global_StateflowBus_BInvD_n;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->BInvDCOnFR_a = *rty_Global_StateflowBus_BInv_no;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->BInvEnableRL_i = *rty_Global_StateflowBus_BInvEna;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->BInvEnableRR_e = *rty_Global_StateflowBus_BInvE_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->BInvEnableFL_h = *rty_Global_StateflowBus_BInvE_o;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->BInvEnableFR_g = *rty_Global_StateflowBus_BInvE_j;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->MMotorMeasuredFL_a = *rty_Global_InverterSignalsBus_i;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->BInvErrorResetRL_j = *rty_Global_StateflowBus_BInvErr;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->BInvErrorResetRR_a = *rty_Global_StateflowBus_BInvE_g;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->BInvErrorResetFL_i = *rty_Global_StateflowBus_BInv_gg;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->BInvErrorResetFR_a = *rty_Global_StateflowBus_BInvE_m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->MTargetTorqueRL_m = *rty_Global_StateflowBus_MTarget;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->MTargetTorqueRR_o = *rty_Global_StateflowBus_MTarg_a;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->MTargetTorqueFL_j = *rty_Global_StateflowBus_MTarg_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->MTargetTorqueFR_n = *rty_Global_StateflowBus_MTarg_g;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->MTorqueLimitNegativeRL_a = *rty_Global_StateflowBus_MTorque;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->MTorqueLimitNegativeRR_n = *rty_Global_StateflowBus_MTorq_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->NInvDTCFL_j = *rty_Global_InverterSignalsBu_pr;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->MTorqueLimitNegativeFL_d = *rty_Global_StateflowBus_MTorq_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->MTorqueLimitNegativeFR_f = *rty_Global_StateflowBus_MTorq_g;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->MTorqueLimitPositiveRL_p = *rty_Global_StateflowBus_MTor_gn;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->MTorqueLimitPositiveRR_d = *rty_Global_StateflowBus_MTorq_m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->MTorqueLimitPositiveFL_d = *rty_Global_StateflowBus_MTorq_i;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->MTorqueLimitPositiveFR_h = *rty_Global_StateflowBus_MTor_if;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->BDischargeAllowed_h = *rty_Global_LimitationsBus_BDisc;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->rInvTemperatureDerate_of = *rty_Global_LimitationsBus_rInvT;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->rInvTemperatureDerateFR_o = *rty_Global_LimitationsBus_rIn_a;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->rInvTemperatureDerateFL_j = *rty_Global_LimitationsBus_rIn_c;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->TMotorFL_d = *rty_Global_InverterSignalsBu_pe;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->rInvTemperatureDerateRR_d = *rty_Global_LimitationsBus_rIn_f;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->rInvTemperatureDerateRL_d = *rty_Global_LimitationsBus_rIn_m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->rMotorTemperatureDerate_gi = *rty_Global_LimitationsBus_rMoto;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->rMotorTemperatureDerateFR_d = *rty_Global_LimitationsBus_rMo_g;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->rMotorTemperatureDerateFL_j = *rty_Global_LimitationsBus_rMo_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->rMotorTemperatureDerateRR_a = *rty_Global_LimitationsBus_rMo_f;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->rMotorTemperatureDerateRL_e = *rty_Global_LimitationsBus_rMo_e;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->rTSTemperatureDerateFR_e = *rty_Global_LimitationsBus_rTSTe;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->rTSTemperatureDerateFL_n = *rty_Global_LimitationsBus_rTS_f;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->rTSTemperatureDerateRR_b = *rty_Global_LimitationsBus_rTS_j;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->VDCInvFL_c = *rty_Global_InverterSignalsBu_o3;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->rTSTemperatureDerateRL_k = *rty_Global_LimitationsBus_rTS_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->rHighCellTemperatureDischarge_d = *rty_Global_LimitationsBus_rHigh;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->rHighCellTemperatureRegenDera_o = *rty_Global_LimitationsBus_rHi_o;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->rLowCellVoltageDischargeDerat_g = *rty_Global_LimitationsBus_rLowC;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->rSOCDischargeDerate_b = *rty_Global_LimitationsBus_rSOCD;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->rSOCRegenDerate_c = *rty_Global_LimitationsBus_rSOCR;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->rSpeedRegenDerate_ns = *rty_Global_LimitationsBus_rSpee;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->rDischargeDerate_k2 = *rty_Global_LimitationsBus_rDisc;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->rRegenDerate_lm = *rty_Global_LimitationsBus_rRege;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->MDriverDischargeRequested_lc = *rty_Global_TorqueControlBus_MDr;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->TInvFL_d = *rty_Global_InverterSignalsBu_e4;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->MDriverRegenRequested_ji = *rty_Global_TorqueControlBus_M_f;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->MDischargeLimited_c = *rty_Global_TorqueControlBus_MDi;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->MRegenLimited_i = *rty_Global_TorqueControlBus_MRe;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->PPowerControllerRequested_j = *rty_Global_TorqueControlBus_PPo;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->MPowerControllerRequested_j = *rty_Global_TorqueControlBus_MPo;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->PPowerControllerProportionalT_k = *rty_Global_TorqueControlBus_P_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->PPowerControllerIntegralTerm_d = *rty_Global_TorqueControlBus_P_j;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->PDischargeLimited_i = *rty_Global_TorqueControlBus_PDi;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->MTotalRequested_iu = *rty_Global_TorqueControlBus_MTo;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->MTotalEMSRequested_m = *rty_Global_TorqueControlBus_M_m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->nMotorRR_m = *rty_Global_InverterSignalsBu_mc;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->rSOCTargetError_c = *rty_Global_TorqueControlBus_rSO;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->rSOETargetError_a = *rty_Global_TorqueControlBus_r_j;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->nYawRateErrorActual_i = *rty_Global_TorqueControlBus_nYa;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->BTorqueVectoringOK_f = *rty_Global_TorqueControlBus_BTo;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->MTorqueVectoringFL_b = *rty_Global_TorqueControlBus_M_i;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->MTorqueVectoringFR_b = *rty_Global_TorqueControlBus_M_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->MTorqueVectoringRL_m = *rty_Global_TorqueControlBus_M_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->MTorqueVectoringRR_f = *rty_Global_TorqueControlBus__mr;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->rSplitRear_k = *rty_Global_TorqueControlBus_rSp;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->MTorqueDistributionFL_d = *rty_Global_TorqueControlBus__mk;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->BInvDCOnRR_fchgb = *rty_Global_InverterSignalsBus_j;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->MTorqueDistributionFR_j = *rty_Global_TorqueControlBus_M_n;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->MTorqueDistributionRL_n = *rty_Global_TorqueControlBus_M_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->MTorqueDistributionRR_o = *rty_Global_TorqueControlBus_M_a;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->rSlipRatioOptimal_k = *rty_Global_TorqueControlBus_rSl;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->NTractionControlMultiplierFL_c = *rty_Global_TorqueControlBus_NTr;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->NTractionControlMultiplierFR_p = *rty_Global_TorqueControlBus_N_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->NTractionControlMultiplierRL_p = *rty_Global_TorqueControlBus_N_j;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->NTractionControlMultiplierRR_g = *rty_Global_TorqueControlBus_N_m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->NABSMultiplierFL_i = *rty_Global_TorqueControlBus_NAB;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->NABSMultiplierFR_i = *rty_Global_TorqueControlBus_N_c;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->BInvErrorRR_g = *rty_Global_InverterSignalsBu_po;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->NABSMultiplierRL_b = *rty_Global_TorqueControlBus_N_p;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->NABSMultiplierRR_p = *rty_Global_TorqueControlBus__jd;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->rSlipRatioFLActual_j = *rty_Global_TorqueControlBus__ja;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->rSlipRatioFRActual_l = *rty_Global_TorqueControlBus_r_e;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->rSlipRatioRLActual_o = *rty_Global_TorqueControlBus_r_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->rSlipRatioRRActual_f = *rty_Global_TorqueControlBus_r_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->MTractionControlFLTotal_a = *rty_Global_TorqueControlBus_MTr;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->MTractionControlFRTotal_f = *rty_Global_TorqueControlBus__ku;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->MTractionControlRLTotal_f = *rty_Global_TorqueControlBus__ae;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->MTractionControlRRTotal_f = *rty_Global_TorqueControlBus_M_j;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->BInvErrorRL_h = *rty_Global_InverterSignalsBus_c;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->BInvOnRR_bzdzx = *rty_Global_InverterSignalsBu_m3;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->MTractionControlFLFinal_i = *rty_Global_TorqueControlBus__ms;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->MTractionControlFRFinal_b = *rty_Global_TorqueControlBus_M_c;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->MTractionControlRLFinal_h = *rty_Global_TorqueControlBus__lr;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->MTractionControlRRFinal_f = *rty_Global_TorqueControlBus__cz;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->MSpinningModelFL_n = *rty_Global_TorqueControlBus_MSp;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->MSpinningModelFR_b = *rty_Global_TorqueControlBus__i4;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->MSpinningModelRL_a = *rty_Global_TorqueControlBus__be;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->MSpinningModelRR_f = *rty_Global_TorqueControlBus__k3;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->MFLFinal_p = *rty_Global_TorqueControlBus_MFL;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->MFRFinal_g = *rty_Global_TorqueControlBus_MFR;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->BInvDCQuitInvOnRR_l = *rty_Global_InverterSignalsBu_p2;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->MRLFinal_a = *rty_Global_TorqueControlBus_MRL;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->MRRFinal_a = *rty_Global_TorqueControlBus_MRR;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->MTotalFinal_k = *rty_Global_TorqueControlBus_M_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->BInvQuitInvOnRR_m = *rty_Global_InverterSignalsBu_i3;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->BInvSysReadyRR_c = *rty_Global_InverterSignalsB_ka1;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->BInvWarnRR_i = *rty_Global_InverterSignalsBu_hs;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->MMotorMeasuredRR_m = *rty_Global_InverterSignalsBus_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->NInvDTCRR_j = *rty_Global_InverterSignalsBu_ng;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->TMotorRR_a = *rty_Global_InverterSignalsB_gye;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->VDCInvRR_n = *rty_Global_InverterSignalsBu_go;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->TInvRR_j = *rty_Global_InverterSignalsBu_ep;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->BInvOnRL_oszez = *rty_Global_InverterSignalsBus_e;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->nMotorFR_f = *rty_Global_InverterSignalsBu_kf;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->BInvDCOnFR_az50k = *rty_Global_InverterSignalsBu_bn;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->BInvErrorFR_g = *rty_Global_InverterSignalsBu_c4;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->BInvOnFR_gifo4 = *rty_Global_InverterSignalsBus_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->BInvDCQuitInvOnFR_m = *rty_Global_InverterSignalsBu_p4;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->BInvQuitInvOnFR_g = *rty_Global_InverterSignalsBu_py;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->BInvSysReadyFR_i = *rty_Global_InverterSignalsBu_en;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->BInvWarnFR_m = *rty_Global_InverterSignalsBu_px;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->MMotorMeasuredFR_p = *rty_Global_InverterSignalsBu_mk;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->NInvDTCFR_j = *rty_Global_InverterSignalsBu_nk;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->BInvDCQuitInvOnRL_g = *rty_Global_InverterSignalsBus_n;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->TMotorFR_c = *rty_Global_InverterSignalsBu_fp;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->VDCInvFR_m = *rty_Global_InverterSignalsBu_df;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->TInvFR_f = *rty_Global_InverterSignalsBu_mw;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->vWheelRL_h = *rty_Global_WheelSpeedsBus_vWhee;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->vWheelRR_a = *rty_Global_WheelSpeedsBus_vWh_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->vWheelFL_n = *rty_Global_WheelSpeedsBus_vW_h2;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->vWheelFR_o = *rty_Global_WheelSpeedsBus_vW_hs;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->pBrakeF_a = *rty_Global_SensorSignalsBus_pBr;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->pBrakeR_p = *rty_Global_SensorSignalsBus_p_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->VDamperPotentiometerFL_o = *rty_Global_SensorSignalsBus_VDa;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->BInvQuitInvOnRL_d = *rty_Global_InverterSignalsBus_f;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->VDamperPotentiometerFR_j = *rty_Global_SensorSignalsBus_V_i;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->NDisplayNumberDDU7_n = *rty_Global_SensorSignalsBus_NDi;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->VSteeringAngle_b = *rty_Global_SensorSignalsBus_VSt;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->VThrottlePedal1_b = *rty_Global_SensorSignalsBus_VTh;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->VThrottlePedal2_a = *rty_Global_SensorSignalsBus_V_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->BSteeringWheelButton1_i = *rty_Global_SensorSignalsBus_BSt;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->BSteeringWheelButton2_l = *rty_Global_SensorSignalsBus_B_j;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->BSteeringWheelButton3_e = *rty_Global_SensorSignalsBus_B_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->BSteeringWheelButton4_o = *rty_Global_SensorSignalsBus_B_e;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->BSteeringWheelButton5_o = *rty_Global_SensorSignalsBus__le;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->BInvSysReadyRL_m = *rty_Global_InverterSignalsBus_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->BSteeringWheelButton6_n = *rty_Global_SensorSignalsBus_B_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->BSteeringWheelButton7_i = *rty_Global_SensorSignalsBus__hc;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->BSteeringWheelButton8_n = *rty_Global_SensorSignalsBus__hl;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->VRegenPaddle1_b = *rty_Global_SensorSignalsBus_VRe;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->VRegenPaddle2_a = *rty_Global_SensorSignalsBus_V_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->C1P01_Status_m = *rty_Global_SensorSignalsBus_C1P;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->C1P02_Status_a = *rty_Global_SensorSignalsBus_C_a;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->C1P03_Status_i = *rty_Global_SensorSignalsBus_C_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->C1P04_Status_a = *rty_Global_SensorSignalsBus_C_i;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->C1P07_Status_g = *rty_Global_SensorSignalsBus_C_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->BInvWarnRL_i = *rty_Global_InverterSignalsBus_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->C1P11_Status_l = *rty_Global_SensorSignalsBus__ir;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->C1P12_Status_h = *rty_Global_SensorSignalsBus__bx;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->C1P13_Status_c = *rty_Global_SensorSignalsBus_C_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->C1P25_Status_j = *rty_Global_SensorSignalsBus_C_g;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->C1P26_Status_g = *rty_Global_SensorSignalsBus__i1;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->C1P28_Status_f = *rty_Global_SensorSignalsBus_C_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->C1P30_Status_j = *rty_Global_SensorSignalsBus__bl;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->C1P31_Status_i = *rty_Global_SensorSignalsBus_C_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->C1P33_Status_j = *rty_Global_SensorSignalsBus__go;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->C1P34_Status_b = *rty_Global_SensorSignalsBus_C_f;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->MMotorMeasuredRL_i = *rty_Global_InverterSignalsBu_kw;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->C1P36_Status_g = *rty_Global_SensorSignalsBus__as;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->C1P37_Status_a = *rty_Global_SensorSignalsBus__gz;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->C1P38_Status_m = *rty_Global_SensorSignalsBus_C_c;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->C2P01_Status_b = *rty_Global_SensorSignalsBus_C2P;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->C2P02_Status_n = *rty_Global_SensorSignalsBus_C_e;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->C2P03_Status_m = *rty_Global_SensorSignalsBus__lr;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->C2P04_Status_n = *rty_Global_SensorSignalsBus__l2;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->C2P05_Status_m = *rty_Global_SensorSignalsBus__ft;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->C2P13_Status_j = *rty_Global_SensorSignalsBus__es;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch2' */
  localB->C2P25_Status_o = *rty_Global_SensorSignalsBus__c0;

  /* ModelReference generated from: '<Root>/LIMITATIONS' */
  LIMITATIONS(&localB->nMotorRL_d, &localB->TMotorRL_m, &localB->TInvRL_j,
              &localB->nMotorFL_k, &localB->TMotorFL_d, &localB->TInvFL_d,
              &localB->nMotorRR_m, &localB->TMotorRR_a, &localB->TInvRR_j,
              &localB->nMotorFR_f, &localB->TMotorFR_c, &localB->TInvFR_f,
              &localB->VCellMin_o, &localB->TCellMax_n,
              &localB->VDCAccumulator_g, &localB->IIVTS_o,
              &localB->BThrottleError_gx, &localB->BBrakeError_jn,
              &localB->BBrakeOn_p, &localB->BAppsOK_oe, &localB->vChassis_ey,
              &localB->BEMSActivated_e, &localB->TMotorMax_b, &localB->TInvMax_m,
              &localB->BReadyToDrive_c, rty_Global_LimitationsBus_BDisc,
              rty_Global_LimitationsBus_rInvT, rty_Global_LimitationsBus_rIn_a,
              rty_Global_LimitationsBus_rIn_c, rty_Global_LimitationsBus_rIn_f,
              rty_Global_LimitationsBus_rIn_m, rty_Global_LimitationsBus_rMoto,
              rty_Global_LimitationsBus_rMo_g, rty_Global_LimitationsBus_rMo_h,
              rty_Global_LimitationsBus_rMo_f, rty_Global_LimitationsBus_rMo_e,
              rty_Global_LimitationsBus_rTSTe, rty_Global_LimitationsBus_rTS_f,
              rty_Global_LimitationsBus_rTS_j, rty_Global_LimitationsBus_rTS_d,
              rty_Global_LimitationsBus_rHigh, rty_Global_LimitationsBus_rHi_o,
              rty_Global_LimitationsBus_rLowC, rty_Global_LimitationsBus_rSOCD,
              rty_Global_LimitationsBus_rSOCR, rty_Global_LimitationsBus_rSpee,
              rty_Global_LimitationsBus_rDisc, rty_Global_LimitationsBus_rRege);

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->nMotorRL = *rty_Global_InverterSignalsBus_I;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->NInvDTCRL = *rty_Global_InverterSignalsBu_ka;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->C2P26_Status = *rty_Global_SensorSignalsBus__gy;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->C2P27_Status = *rty_Global_SensorSignalsBus__lp;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->C2P28_Status = *rty_Global_SensorSignalsBus__bp;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->C2P29_Status = *rty_Global_SensorSignalsBus_i12;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->C2P30_Status = *rty_Global_SensorSignalsBus__aq;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->C2P31_Status = *rty_Global_SensorSignalsBus_C_o;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->C2P33_Status = *rty_Global_SensorSignalsBus__iq;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->C1P16_Digital = *rty_Global_SensorSignalsBus__ex;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->C1P17_Digital = *rty_Global_SensorSignalsBus__de;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->C2P17_Digital = *rty_Global_SensorSignalsBus__do;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->TMotorRL = *rty_Global_InverterSignalsB_kaa;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->C2P18_Digital = *rty_Global_SensorSignalsBus__lj;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->C2P35_Status = *rty_Global_SensorSignalsBus__kg;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->C2P36_Status = *rty_Global_SensorSignalsBus_C_n;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->C2P37_Status = *rty_Global_SensorSignalsBus__ho;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->C2P38_Status = *rty_Global_SensorSignalsBus__gk;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->ILVSystem = *rty_Global_SensorSignalsBus_ILV;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->TLVSystem = *rty_Global_SensorSignalsBus_TLV;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->VLVSystem = *rty_Global_SensorSignalsBus_VLV;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->VDamperPotentiometerRL = *rty_Global_SensorSignalsBus__ik;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->VDamperPotentiometerRR = *rty_Global_SensorSignalsBus__iu;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->VDCInvRL = *rty_Global_InverterSignalsBu_el;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->vLongitudinalOXTSIMU = *rty_Global_GPSIMUSignalsBus_vLo;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->gLateralOXTSIMU = *rty_Global_GPSIMUSignalsBus_gLa;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->gLongitudinalOXTSIMU = *rty_Global_GPSIMUSignalsBus_gLo;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->nYawRateOXTSIMU = *rty_Global_GPSIMUSignalsBus_nYa;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->VCellMax = *rty_Global_BMSSignalsBus_VCellM;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->VCellDelta = *rty_Global_BMSSignalsBus_VCellD;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->VCellMin = *rty_Global_BMSSignalsBus_VCel_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->VCellAverage = *rty_Global_BMSSignalsBus_VCellA;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->TCellMax = *rty_Global_BMSSignalsBus_TCellM;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->NBMSDLC = *rty_Global_BMSSignalsBus_NBMSDL;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->TInvRL = *rty_Global_InverterSignalsBu_cj;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->TCellMin = *rty_Global_BMSSignalsBus_TCel_c;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->IBMSHallEffect = *rty_Global_BMSSignalsBus_IBMSHa;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->VDCAccumulator = *rty_Global_BMSSignalsBus_VDCAcc;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->RCellAverage = *rty_Global_BMSSignalsBus_RCellA;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->BBalancingActive = *rty_Global_BMSSignalsBus_BBalan;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->BBMSP0A0C = *rty_Global_BMSSignalsBus_BBMSP0;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->BBMSP0A0E = *rty_Global_BMSSignalsBus_BBMS_c;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->BBMSP0A10 = *rty_Global_BMSSignalsBus_BBMS_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->BBMSP0A80 = *rty_Global_BMSSignalsBus_BBMS_m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->BBMSP0AC0 = *rty_Global_BMSSignalsBus_BBMS_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->nMotorFL = *rty_Global_InverterSignalsBu_ez;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->BBMSP0AFA = *rty_Global_BMSSignalsBus_BBM_kd;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->IIVTS = *rty_Global_BMSSignalsBus_IIVTS;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->rThrottlePedal = *rty_Global_SystemsBus_rThrottle;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->BThrottleError_g = *rty_Global_SystemsBus_BThrottle;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->tThrottleError = *rty_Global_SystemsBus_tThrottle;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->BBrakeError_j = *rty_Global_SystemsBus_BBrakeErr;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->tBrakeError = *rty_Global_SystemsBus_tBrakeErr;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->BBrakeOn = *rty_Global_SystemsBus_BBrakeOn;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->pBrakeMax = *rty_Global_SystemsBus_pBrakeMax;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->BPedalOverlap_e = *rty_Global_SystemsBus_BPedalOve;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->BInvDCOnFL_akaj = *rty_Global_InverterSignalsBus_o;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->tPedalOverlap = *rty_Global_SystemsBus_tPedalOve;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->BAppsOK_o = *rty_Global_SystemsBus_BAppsOK;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->tAppsTimer = *rty_Global_SystemsBus_tAppsTime;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->rSteeringAngle_h = *rty_Global_SystemsBus_rSteering;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->aSteeringAngle = *rty_Global_SystemsBus_aSteering;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->rRegenPaddle_g = *rty_Global_SystemsBus_rRegenPad;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->BRegenOn = *rty_Global_SystemsBus_BRegenOn;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->BBrakeLight_g = *rty_Global_SystemsBus_BBrakeLig;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->xDamperFL = *rty_Global_SystemsBus_xDamperFL;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->xDamperFR = *rty_Global_SystemsBus_xDamperFR;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->BInvErrorFL = *rty_Global_InverterSignalsBus_p;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->xDamperRL = *rty_Global_SystemsBus_xDamperRL;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->xDamperRR = *rty_Global_SystemsBus_xDamperRR;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->BDamperErrorFL = *rty_Global_SystemsBus_BDamperEr;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->BDamperErrorFR = *rty_Global_SystemsBus_BDamper_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->BDamperErrorRL = *rty_Global_SystemsBus_BDamper_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->BDamperErrorRR = *rty_Global_SystemsBus_BDamper_i;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->vChassis_e = *rty_Global_SystemsBus_vChassis;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->sChassis = *rty_Global_SystemsBus_sChassis;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->sEMS1000m = *rty_Global_SystemsBus_sEMS1000m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->BEMS1000mPoint = *rty_Global_SystemsBus_BEMS1000m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->BInvOnFL_aycn = *rty_Global_InverterSignalsBus_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->BEMS995mPoint = *rty_Global_SystemsBus_BEMS995mP;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->BTorqueVectoringActivated = *rty_Global_SystemsBus_BTorqueVe;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->NThrottleMap = *rty_Global_SystemsBus_NThrottle;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->PDischarge = *rty_Global_SystemsBus_PDischarg;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->BEMSActivated = *rty_Global_SystemsBus_BEMSActiv;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->PRegen = *rty_Global_SystemsBus_PRegen;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->rTorqueSplit = *rty_Global_SystemsBus_rTorqueSp;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->PEngineBraking = *rty_Global_SystemsBus_PEngineBr;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->BSpinningModelActivated = *rty_Global_SystemsBus_BSpinning;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->NTractionControlKpSelector = *rty_Global_SystemsBus_NTraction;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->BInvDCQuitInvOnFL = *rty_Global_InverterSignalsBu_dm;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->BTractionControlActivated = *rty_Global_SystemsBus_BTraction;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->rTorqueVectoringMultiplier = *rty_Global_SystemsBus_rTorqueVe;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->NPowerControllerKpSelector = *rty_Global_SystemsBus_NPowerCon;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->NTorqueSplitSpeedSelector = *rty_Global_SystemsBus_NTorqueSp;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->BAccumulatorFanOn = *rty_Global_SystemsBus_BAccumula;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->BErrorReset = *rty_Global_SystemsBus_BErrorRes;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->BReadyToDriveButton = *rty_Global_SystemsBus_BReadyToD;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->NModeNumberDisplay5 = *rty_Global_SystemsBus_NModeNumb;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->NModeNumberDisplay6 = *rty_Global_SystemsBus_NModeNu_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->TMotorMax = *rty_Global_SystemsBus_TMotorMax;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->BInvQuitInvOnFL = *rty_Global_InverterSignalsBu_gy;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->TInvMax = *rty_Global_SystemsBus_TInvMax;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->PActual_m = *rty_Global_SystemsBus_PActual;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->rSOC_d = *rty_Global_SystemsBus_rSOC;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->rSOE = *rty_Global_SystemsBus_rSOE;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->BEncoderErrorRear = *rty_Global_SystemsBus_BEncoderE;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->BEncoderErrorFront = *rty_Global_SystemsBus_BEncode_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->rCoolingFansDuty = *rty_Global_SystemsBus_rCoolingF;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->rCoolingPumpsDuty = *rty_Global_SystemsBus_rCoolingP;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->BAccumulatorFanDuty = *rty_Global_SystemsBus_BAccumu_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->BInvLVOn = *rty_Global_SystemsBus_BInvLVOn;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->BInvDCOnRL_jrwe = *rty_Global_InverterSignalsBus_g;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->BInvSysReadyFL = *rty_Global_InverterSignalsBus_m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->rThrottlePedal1 = *rty_Global_SystemsBus_rThrott_g;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->rThrottlePedal2 = *rty_Global_SystemsBus_rThrot_gm;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->NCarState_h = *rty_Global_StateflowBus_NCarSta;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->BReadyToDriveBuzzer = *rty_Global_StateflowBus_BReadyT;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->BReadyToDrive = *rty_Global_StateflowBus_BRead_i;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->NBMSState_j = *rty_Global_StateflowBus_NBMSSta;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->NInvState_d = *rty_Global_StateflowBus_NInvSta;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->BHVOn = *rty_Global_StateflowBus_BHVOn;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->BInvOnRL = *rty_Global_StateflowBus_BInvOnR;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->BInvOnRR = *rty_Global_StateflowBus_BInvO_j;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->BInvWarnFL = *rty_Global_InverterSignalsBu_pd;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->BInvOnFL = *rty_Global_StateflowBus_BInvOnF;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->BInvOnFR = *rty_Global_StateflowBus_BInvO_p;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->BInvDCOnRL = *rty_Global_StateflowBus_BInvDCO;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->BInvDCOnRR = *rty_Global_StateflowBus_BInvD_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->BInvDCOnFL = *rty_Global_StateflowBus_BInvD_n;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->BInvDCOnFR = *rty_Global_StateflowBus_BInv_no;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->BInvEnableRL = *rty_Global_StateflowBus_BInvEna;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->BInvEnableRR = *rty_Global_StateflowBus_BInvE_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->BInvEnableFL = *rty_Global_StateflowBus_BInvE_o;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->BInvEnableFR = *rty_Global_StateflowBus_BInvE_j;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->MMotorMeasuredFL = *rty_Global_InverterSignalsBus_i;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->BInvErrorResetRL = *rty_Global_StateflowBus_BInvErr;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->BInvErrorResetRR = *rty_Global_StateflowBus_BInvE_g;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->BInvErrorResetFL = *rty_Global_StateflowBus_BInv_gg;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->BInvErrorResetFR = *rty_Global_StateflowBus_BInvE_m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->MTargetTorqueRL = *rty_Global_StateflowBus_MTarget;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->MTargetTorqueRR = *rty_Global_StateflowBus_MTarg_a;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->MTargetTorqueFL = *rty_Global_StateflowBus_MTarg_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->MTargetTorqueFR = *rty_Global_StateflowBus_MTarg_g;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->MTorqueLimitNegativeRL = *rty_Global_StateflowBus_MTorque;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->MTorqueLimitNegativeRR = *rty_Global_StateflowBus_MTorq_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->NInvDTCFL = *rty_Global_InverterSignalsBu_pr;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->MTorqueLimitNegativeFL = *rty_Global_StateflowBus_MTorq_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->MTorqueLimitNegativeFR = *rty_Global_StateflowBus_MTorq_g;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->MTorqueLimitPositiveRL = *rty_Global_StateflowBus_MTor_gn;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->MTorqueLimitPositiveRR = *rty_Global_StateflowBus_MTorq_m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->MTorqueLimitPositiveFL = *rty_Global_StateflowBus_MTorq_i;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->MTorqueLimitPositiveFR = *rty_Global_StateflowBus_MTor_if;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->BDischargeAllowed = *rty_Global_LimitationsBus_BDisc;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->rInvTemperatureDerate_o = *rty_Global_LimitationsBus_rInvT;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->rInvTemperatureDerateFR = *rty_Global_LimitationsBus_rIn_a;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->rInvTemperatureDerateFL = *rty_Global_LimitationsBus_rIn_c;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->TMotorFL = *rty_Global_InverterSignalsBu_pe;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->rInvTemperatureDerateRR = *rty_Global_LimitationsBus_rIn_f;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->rInvTemperatureDerateRL = *rty_Global_LimitationsBus_rIn_m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->rMotorTemperatureDerate_g = *rty_Global_LimitationsBus_rMoto;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->rMotorTemperatureDerateFR = *rty_Global_LimitationsBus_rMo_g;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->rMotorTemperatureDerateFL = *rty_Global_LimitationsBus_rMo_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->rMotorTemperatureDerateRR = *rty_Global_LimitationsBus_rMo_f;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->rMotorTemperatureDerateRL = *rty_Global_LimitationsBus_rMo_e;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->rTSTemperatureDerateFR = *rty_Global_LimitationsBus_rTSTe;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->rTSTemperatureDerateFL = *rty_Global_LimitationsBus_rTS_f;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->rTSTemperatureDerateRR = *rty_Global_LimitationsBus_rTS_j;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->VDCInvFL = *rty_Global_InverterSignalsBu_o3;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->rTSTemperatureDerateRL = *rty_Global_LimitationsBus_rTS_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->rHighCellTemperatureDischargeDe = *rty_Global_LimitationsBus_rHigh;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->rHighCellTemperatureRegenDerate = *rty_Global_LimitationsBus_rHi_o;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->rLowCellVoltageDischargeDerate = *rty_Global_LimitationsBus_rLowC;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->rSOCDischargeDerate = *rty_Global_LimitationsBus_rSOCD;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->rSOCRegenDerate = *rty_Global_LimitationsBus_rSOCR;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->rSpeedRegenDerate_n = *rty_Global_LimitationsBus_rSpee;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->rDischargeDerate_k = *rty_Global_LimitationsBus_rDisc;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->rRegenDerate_l = *rty_Global_LimitationsBus_rRege;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->MDriverDischargeRequested_l = *rty_Global_TorqueControlBus_MDr;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->TInvFL = *rty_Global_InverterSignalsBu_e4;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->MDriverRegenRequested_j = *rty_Global_TorqueControlBus_M_f;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->MDischargeLimited = *rty_Global_TorqueControlBus_MDi;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->MRegenLimited = *rty_Global_TorqueControlBus_MRe;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->PPowerControllerRequested = *rty_Global_TorqueControlBus_PPo;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->MPowerControllerRequested = *rty_Global_TorqueControlBus_MPo;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->PPowerControllerProportionalTer = *rty_Global_TorqueControlBus_P_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->PPowerControllerIntegralTerm = *rty_Global_TorqueControlBus_P_j;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->PDischargeLimited = *rty_Global_TorqueControlBus_PDi;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->MTotalRequested_i = *rty_Global_TorqueControlBus_MTo;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->MTotalEMSRequested = *rty_Global_TorqueControlBus_M_m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->nMotorRR = *rty_Global_InverterSignalsBu_mc;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->rSOCTargetError = *rty_Global_TorqueControlBus_rSO;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->rSOETargetError = *rty_Global_TorqueControlBus_r_j;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->nYawRateErrorActual = *rty_Global_TorqueControlBus_nYa;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->BTorqueVectoringOK = *rty_Global_TorqueControlBus_BTo;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->MTorqueVectoringFL = *rty_Global_TorqueControlBus_M_i;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->MTorqueVectoringFR = *rty_Global_TorqueControlBus_M_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->MTorqueVectoringRL = *rty_Global_TorqueControlBus_M_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->MTorqueVectoringRR = *rty_Global_TorqueControlBus__mr;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->rSplitRear = *rty_Global_TorqueControlBus_rSp;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->MTorqueDistributionFL = *rty_Global_TorqueControlBus__mk;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->BInvDCOnRR_fchg = *rty_Global_InverterSignalsBus_j;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->MTorqueDistributionFR = *rty_Global_TorqueControlBus_M_n;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->MTorqueDistributionRL = *rty_Global_TorqueControlBus_M_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->MTorqueDistributionRR = *rty_Global_TorqueControlBus_M_a;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->rSlipRatioOptimal = *rty_Global_TorqueControlBus_rSl;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->NTractionControlMultiplierFL = *rty_Global_TorqueControlBus_NTr;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->NTractionControlMultiplierFR = *rty_Global_TorqueControlBus_N_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->NTractionControlMultiplierRL = *rty_Global_TorqueControlBus_N_j;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->NTractionControlMultiplierRR = *rty_Global_TorqueControlBus_N_m;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->NABSMultiplierFL = *rty_Global_TorqueControlBus_NAB;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->NABSMultiplierFR = *rty_Global_TorqueControlBus_N_c;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->BInvErrorRR = *rty_Global_InverterSignalsBu_po;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->NABSMultiplierRL = *rty_Global_TorqueControlBus_N_p;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->NABSMultiplierRR = *rty_Global_TorqueControlBus__jd;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->rSlipRatioFLActual = *rty_Global_TorqueControlBus__ja;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->rSlipRatioFRActual = *rty_Global_TorqueControlBus_r_e;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->rSlipRatioRLActual = *rty_Global_TorqueControlBus_r_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->rSlipRatioRRActual = *rty_Global_TorqueControlBus_r_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->MTractionControlFLTotal = *rty_Global_TorqueControlBus_MTr;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->MTractionControlFRTotal = *rty_Global_TorqueControlBus__ku;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->MTractionControlRLTotal = *rty_Global_TorqueControlBus__ae;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->MTractionControlRRTotal = *rty_Global_TorqueControlBus_M_j;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->BInvErrorRL = *rty_Global_InverterSignalsBus_c;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->BInvOnRR_bzdz = *rty_Global_InverterSignalsBu_m3;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->MTractionControlFLFinal = *rty_Global_TorqueControlBus__ms;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->MTractionControlFRFinal = *rty_Global_TorqueControlBus_M_c;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->MTractionControlRLFinal = *rty_Global_TorqueControlBus__lr;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->MTractionControlRRFinal = *rty_Global_TorqueControlBus__cz;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->MSpinningModelFL = *rty_Global_TorqueControlBus_MSp;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->MSpinningModelFR = *rty_Global_TorqueControlBus__i4;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->MSpinningModelRL = *rty_Global_TorqueControlBus__be;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->MSpinningModelRR = *rty_Global_TorqueControlBus__k3;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->MFLFinal = *rty_Global_TorqueControlBus_MFL;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->MFRFinal = *rty_Global_TorqueControlBus_MFR;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->BInvDCQuitInvOnRR = *rty_Global_InverterSignalsBu_p2;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->MRLFinal = *rty_Global_TorqueControlBus_MRL;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->MRRFinal = *rty_Global_TorqueControlBus_MRR;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->MTotalFinal = *rty_Global_TorqueControlBus_M_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->BInvQuitInvOnRR = *rty_Global_InverterSignalsBu_i3;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->BInvSysReadyRR = *rty_Global_InverterSignalsB_ka1;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->BInvWarnRR = *rty_Global_InverterSignalsBu_hs;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->MMotorMeasuredRR = *rty_Global_InverterSignalsBus_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->NInvDTCRR = *rty_Global_InverterSignalsBu_ng;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->TMotorRR = *rty_Global_InverterSignalsB_gye;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->VDCInvRR = *rty_Global_InverterSignalsBu_go;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->TInvRR = *rty_Global_InverterSignalsBu_ep;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->BInvOnRL_osze = *rty_Global_InverterSignalsBus_e;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->nMotorFR = *rty_Global_InverterSignalsBu_kf;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->BInvDCOnFR_az50 = *rty_Global_InverterSignalsBu_bn;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->BInvErrorFR = *rty_Global_InverterSignalsBu_c4;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->BInvOnFR_gifo = *rty_Global_InverterSignalsBus_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->BInvDCQuitInvOnFR = *rty_Global_InverterSignalsBu_p4;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->BInvQuitInvOnFR = *rty_Global_InverterSignalsBu_py;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->BInvSysReadyFR = *rty_Global_InverterSignalsBu_en;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->BInvWarnFR = *rty_Global_InverterSignalsBu_px;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->MMotorMeasuredFR = *rty_Global_InverterSignalsBu_mk;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->NInvDTCFR = *rty_Global_InverterSignalsBu_nk;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->BInvDCQuitInvOnRL = *rty_Global_InverterSignalsBus_n;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->TMotorFR = *rty_Global_InverterSignalsBu_fp;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->VDCInvFR = *rty_Global_InverterSignalsBu_df;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->TInvFR = *rty_Global_InverterSignalsBu_mw;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->vWheelRL = *rty_Global_WheelSpeedsBus_vWhee;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->vWheelRR = *rty_Global_WheelSpeedsBus_vWh_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->vWheelFL = *rty_Global_WheelSpeedsBus_vW_h2;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->vWheelFR = *rty_Global_WheelSpeedsBus_vW_hs;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->pBrakeF = *rty_Global_SensorSignalsBus_pBr;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->pBrakeR = *rty_Global_SensorSignalsBus_p_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->VDamperPotentiometerFL = *rty_Global_SensorSignalsBus_VDa;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->BInvQuitInvOnRL = *rty_Global_InverterSignalsBus_f;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->VDamperPotentiometerFR = *rty_Global_SensorSignalsBus_V_i;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->NDisplayNumberDDU7 = *rty_Global_SensorSignalsBus_NDi;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->VSteeringAngle = *rty_Global_SensorSignalsBus_VSt;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->VThrottlePedal1 = *rty_Global_SensorSignalsBus_VTh;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->VThrottlePedal2 = *rty_Global_SensorSignalsBus_V_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->BSteeringWheelButton1 = *rty_Global_SensorSignalsBus_BSt;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->BSteeringWheelButton2 = *rty_Global_SensorSignalsBus_B_j;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->BSteeringWheelButton3 = *rty_Global_SensorSignalsBus_B_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->BSteeringWheelButton4 = *rty_Global_SensorSignalsBus_B_e;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->BSteeringWheelButton5 = *rty_Global_SensorSignalsBus__le;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->BInvSysReadyRL = *rty_Global_InverterSignalsBus_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->BSteeringWheelButton6 = *rty_Global_SensorSignalsBus_B_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->BSteeringWheelButton7 = *rty_Global_SensorSignalsBus__hc;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->BSteeringWheelButton8 = *rty_Global_SensorSignalsBus__hl;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->VRegenPaddle1 = *rty_Global_SensorSignalsBus_VRe;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->VRegenPaddle2 = *rty_Global_SensorSignalsBus_V_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->C1P01_Status = *rty_Global_SensorSignalsBus_C1P;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->C1P02_Status = *rty_Global_SensorSignalsBus_C_a;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->C1P03_Status = *rty_Global_SensorSignalsBus_C_k;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->C1P04_Status = *rty_Global_SensorSignalsBus_C_i;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->C1P07_Status = *rty_Global_SensorSignalsBus_C_b;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->BInvWarnRL = *rty_Global_InverterSignalsBus_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->C1P11_Status = *rty_Global_SensorSignalsBus__ir;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->C1P12_Status = *rty_Global_SensorSignalsBus__bx;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->C1P13_Status = *rty_Global_SensorSignalsBus_C_d;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->C1P25_Status = *rty_Global_SensorSignalsBus_C_g;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->C1P26_Status = *rty_Global_SensorSignalsBus__i1;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->C1P28_Status = *rty_Global_SensorSignalsBus_C_h;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->C1P30_Status = *rty_Global_SensorSignalsBus__bl;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->C1P31_Status = *rty_Global_SensorSignalsBus_C_l;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->C1P33_Status = *rty_Global_SensorSignalsBus__go;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->C1P34_Status = *rty_Global_SensorSignalsBus_C_f;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->MMotorMeasuredRL = *rty_Global_InverterSignalsBu_kw;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->C1P36_Status = *rty_Global_SensorSignalsBus__as;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->C1P37_Status = *rty_Global_SensorSignalsBus__gz;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->C1P38_Status = *rty_Global_SensorSignalsBus_C_c;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->C2P01_Status = *rty_Global_SensorSignalsBus_C2P;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->C2P02_Status = *rty_Global_SensorSignalsBus_C_e;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->C2P03_Status = *rty_Global_SensorSignalsBus__lr;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->C2P04_Status = *rty_Global_SensorSignalsBus__l2;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->C2P05_Status = *rty_Global_SensorSignalsBus__ft;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->C2P13_Status = *rty_Global_SensorSignalsBus__es;

  /* SignalConversion generated from: '<Root>/Function-Call Feedback Latch3' */
  localB->C2P25_Status = *rty_Global_SensorSignalsBus__c0;

  /* ModelReference generated from: '<Root>/TORQUECONTROL' */
  TORQUECONTROL(&localB->nMotorRL, &localB->VDCInvRL, &localB->nMotorFL,
                &localB->nMotorRR, &localB->nMotorFR, &localB->vWheelRL,
                &localB->vWheelRR, &localB->vWheelFL, &localB->vWheelFR,
                &localB->gLongitudinalOXTSIMU, &localB->nYawRateOXTSIMU,
                &localB->IIVTS, &localB->rThrottlePedal, &localB->pBrakeMax,
                &localB->rSteeringAngle_h, &localB->aSteeringAngle,
                &localB->rRegenPaddle_g, &localB->vChassis_e,
                &localB->BEMS1000mPoint, &localB->BEMS995mPoint,
                &localB->BTorqueVectoringActivated, &localB->NThrottleMap,
                &localB->PDischarge, &localB->BEMSActivated, &localB->PRegen,
                &localB->PEngineBraking, &localB->BSpinningModelActivated,
                &localB->NTractionControlKpSelector,
                &localB->BTractionControlActivated,
                &localB->rTorqueVectoringMultiplier,
                &localB->NPowerControllerKpSelector, &localB->PActual_m,
                &localB->rSOC_d, &localB->rSOE, &localB->BEncoderErrorRear,
                &localB->BEncoderErrorFront, &localB->BReadyToDrive,
                &localB->rTSTemperatureDerateFR, &localB->rTSTemperatureDerateFL,
                &localB->rTSTemperatureDerateRR, &localB->rTSTemperatureDerateRL,
                &localB->rDischargeDerate_k, &localB->rRegenDerate_l,
                rty_Global_TorqueControlBus_MDr, rty_Global_TorqueControlBus_M_f,
                rty_Global_TorqueControlBus_MDi, rty_Global_TorqueControlBus_MRe,
                rty_Global_TorqueControlBus_PPo, rty_Global_TorqueControlBus_MPo,
                rty_Global_TorqueControlBus_P_l, rty_Global_TorqueControlBus_P_j,
                rty_Global_TorqueControlBus_PDi, rty_Global_TorqueControlBus_MTo,
                rty_Global_TorqueControlBus_M_m, rty_Global_TorqueControlBus_rSO,
                rty_Global_TorqueControlBus_r_j, rty_Global_TorqueControlBus_nYa,
                rty_Global_TorqueControlBus_BTo, rty_Global_TorqueControlBus_M_i,
                rty_Global_TorqueControlBus_M_b, rty_Global_TorqueControlBus_M_l,
                rty_Global_TorqueControlBus__mr, rty_Global_TorqueControlBus_rSp,
                rty_Global_TorqueControlBus__mk, rty_Global_TorqueControlBus_M_n,
                rty_Global_TorqueControlBus_M_k, rty_Global_TorqueControlBus_M_a,
                rty_Global_TorqueControlBus_rSl, rty_Global_TorqueControlBus_NTr,
                rty_Global_TorqueControlBus_N_d, rty_Global_TorqueControlBus_N_j,
                rty_Global_TorqueControlBus_N_m, rty_Global_TorqueControlBus_NAB,
                rty_Global_TorqueControlBus_N_c, rty_Global_TorqueControlBus_N_p,
                rty_Global_TorqueControlBus__jd, rty_Global_TorqueControlBus__ja,
                rty_Global_TorqueControlBus_r_e, rty_Global_TorqueControlBus_r_d,
                rty_Global_TorqueControlBus_r_k, rty_Global_TorqueControlBus_MTr,
                rty_Global_TorqueControlBus__ku, rty_Global_TorqueControlBus__ae,
                rty_Global_TorqueControlBus_M_j, rty_Global_TorqueControlBus__ms,
                rty_Global_TorqueControlBus_M_c, rty_Global_TorqueControlBus__lr,
                rty_Global_TorqueControlBus__cz, rty_Global_TorqueControlBus_MSp,
                rty_Global_TorqueControlBus__i4, rty_Global_TorqueControlBus__be,
                rty_Global_TorqueControlBus__k3, rty_Global_TorqueControlBus_MFL,
                rty_Global_TorqueControlBus_MFR, rty_Global_TorqueControlBus_MRL,
                rty_Global_TorqueControlBus_MRR, rty_Global_TorqueControlBus_M_d,
                &(localDW->TORQUECONTROL_InstanceData.rtdw));

  /* End of Outputs for S-Function (fcgen): '<Root>/Function-Call Generator1' */
}

/* Model initialize function */
void MASTER_initialize(const char_T **rt_errorStatus, RT_MODEL_MASTER_T *const
  MASTER_M, DW_MASTER_f_T *localDW)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(MASTER_M, rt_errorStatus);

  /* Model Initialize function for ModelReference Block: '<Root>/INPUT' */
  INPUT_initialize(rtmGetErrorStatusPointer(MASTER_M),
                   &(localDW->INPUT_InstanceData.rtm),
                   &(localDW->INPUT_InstanceData.rtdw));

  /* Model Initialize function for ModelReference Block: '<Root>/LIMITATIONS' */
  LIMITATIONS_initialize(rtmGetErrorStatusPointer(MASTER_M),
    &(localDW->LIMITATIONS_InstanceData.rtm),
    &(localDW->LIMITATIONS_InstanceData.rtdw));

  /* Model Initialize function for ModelReference Block: '<Root>/STATEFLOW' */
  STATEFLOW_initialize(rtmGetErrorStatusPointer(MASTER_M),
                       &(localDW->STATEFLOW_InstanceData.rtm),
                       &(localDW->STATEFLOW_InstanceData.rtdw));

  /* Model Initialize function for ModelReference Block: '<Root>/SYSTEMS' */
  SYSTEMS_initialize(rtmGetErrorStatusPointer(MASTER_M),
                     &(localDW->SYSTEMS_InstanceData.rtm),
                     &(localDW->SYSTEMS_InstanceData.rtb),
                     &(localDW->SYSTEMS_InstanceData.rtdw));

  /* Model Initialize function for ModelReference Block: '<Root>/TORQUECONTROL' */
  TORQUECONTROL_initialize(rtmGetErrorStatusPointer(MASTER_M),
    &(localDW->TORQUECONTROL_InstanceData.rtm),
    &(localDW->TORQUECONTROL_InstanceData.rtdw));

  /* user code (Initialize function Body) */
  LL_TIM_EnableCounter(TIM2);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
