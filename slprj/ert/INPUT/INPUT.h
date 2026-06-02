/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: INPUT.h
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

#ifndef INPUT_h_
#define INPUT_h_
#ifndef INPUT_COMMON_INCLUDES_
#define INPUT_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                                 /* INPUT_COMMON_INCLUDES_ */

#include "INPUT_types.h"
#include "WheelSpeeds.h"
#include "InverterSignals.h"
#include "SensorSignals.h"
#include "GPSIMUSignals.h"
#include "BMSSignals.h"

/* user code (top of header file) */
#include "stm32h7xx_ll_tim.h"

/* Block states (default storage) for model 'INPUT' */
typedef struct {
  MdlrefDW_WheelSpeeds_T Model_InstanceData;/* '<Root>/Model' */
  MdlrefDW_InverterSignals_T Model1_InstanceData;/* '<Root>/Model1' */
  MdlrefDW_SensorSignals_T Model3_InstanceData;/* '<Root>/Model3' */
  MdlrefDW_GPSIMUSignals_T Model4_InstanceData;/* '<Root>/Model4' */
  MdlrefDW_BMSSignals_T Model2_InstanceData;/* '<Root>/Model2' */
} DW_INPUT_f_T;

/* Real-time Model Data Structure */
struct tag_RTM_INPUT_T {
  const char_T **errorStatus;
};

typedef struct {
  DW_INPUT_f_T rtdw;
  RT_MODEL_INPUT_T rtm;
} MdlrefDW_INPUT_T;

/* Model reference registration function */
extern void INPUT_initialize(const char_T **rt_errorStatus, RT_MODEL_INPUT_T *
  const INPUT_M, DW_INPUT_f_T *localDW);
extern void INPUT(const real_T *rtu_InverterCAN_InverterFLCANBu, const boolean_T
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
                  *rty_InverterSignalsBus_Inver_mw, real_T
                  *rty_WheelSpeedsBus_vWheelRL, real_T
                  *rty_WheelSpeedsBus_vWheelRR, real_T
                  *rty_WheelSpeedsBus_vWheelFL, real_T
                  *rty_WheelSpeedsBus_vWheelFR, real_T
                  *rty_SensorSignalsBus_pBrakeF, real_T
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
                  *rty_GPSIMUSignalsBus_nYawRateOX, real_T
                  *rty_BMSSignalsBus_VCellMax, real_T
                  *rty_BMSSignalsBus_VCellDelta, real_T
                  *rty_BMSSignalsBus_VCellMin, real_T
                  *rty_BMSSignalsBus_VCellAverage, real_T
                  *rty_BMSSignalsBus_TCellMax, real_T *rty_BMSSignalsBus_NBMSDLC,
                  real_T *rty_BMSSignalsBus_TCellMin, real_T
                  *rty_BMSSignalsBus_IBMSHallEffec, real_T
                  *rty_BMSSignalsBus_VDCAccumulato, real_T
                  *rty_BMSSignalsBus_RCellAverage, boolean_T
                  *rty_BMSSignalsBus_BBalancingAct, boolean_T
                  *rty_BMSSignalsBus_BBMSP0A0C, boolean_T
                  *rty_BMSSignalsBus_BBMSP0A0E, boolean_T
                  *rty_BMSSignalsBus_BBMSP0A10, boolean_T
                  *rty_BMSSignalsBus_BBMSP0A80, boolean_T
                  *rty_BMSSignalsBus_BBMSP0AC0, boolean_T
                  *rty_BMSSignalsBus_BBMSP0AFA, real_T *rty_BMSSignalsBus_IIVTS);

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
 * '<Root>' : 'INPUT'
 */
#endif                                 /* INPUT_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
