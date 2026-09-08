/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: INPUT.h
 *
 * Code generated for Simulink model 'INPUT'.
 *
 * Model version                  : 13.5
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Tue Sep  8 13:23:29 2026
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
#include "WheelSpeedInputs.h"
#include "InverterInputs.h"
#include "SensorInputs.h"
#include "GPSIMUInputs.h"
#include "BMSInputs.h"

/* Block states (default storage) for model 'INPUT' */
typedef struct {
  MdlrefDW_WheelSpeedInputs_T Model_InstanceData;/* '<Root>/Model' */
  MdlrefDW_InverterInputs_T Model1_InstanceData;/* '<Root>/Model1' */
  MdlrefDW_SensorInputs_T Model3_InstanceData;/* '<Root>/Model3' */
  MdlrefDW_GPSIMUInputs_T Model4_InstanceData;/* '<Root>/Model4' */
  MdlrefDW_BMSInputs_T Model2_InstanceData;/* '<Root>/Model2' */
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
extern void INPUT(const real_T *rtu_CAN1_2Bus_InverterFL_nMotor, const boolean_T
                  *rtu_CAN1_2Bus_InverterFL_BInvDC, const boolean_T
                  *rtu_CAN1_2Bus_InverterFL_BInvEr, const boolean_T
                  *rtu_CAN1_2Bus_InverterFL_BInvOn, const boolean_T
                  *rtu_CAN1_2Bus_InverterFL_BInvQu, const boolean_T
                  *rtu_CAN1_2Bus_InverterFL_BQuitI, const boolean_T
                  *rtu_CAN1_2Bus_InverterFL_BInvSy, const boolean_T
                  *rtu_CAN1_2Bus_InverterFL_BInvWa, const real_T
                  *rtu_CAN1_2Bus_InverterFL_MMotor, const real_T
                  *rtu_CAN1_2Bus_InverterFL_NInvDT, const real_T
                  *rtu_CAN1_2Bus_InverterFL_TMotor, const real_T
                  *rtu_CAN1_2Bus_InverterFL_VDCInv, const real_T
                  *rtu_CAN1_2Bus_InverterFL_TInvFL, const real_T
                  *rtu_CAN1_2Bus_InverterFR_nMotor, const boolean_T
                  *rtu_CAN1_2Bus_InverterFR_BInvDC, const boolean_T
                  *rtu_CAN1_2Bus_InverterFR_BInvEr, const boolean_T
                  *rtu_CAN1_2Bus_InverterFR_BInvOn, const boolean_T
                  *rtu_CAN1_2Bus_InverterFR_BInvQu, const boolean_T
                  *rtu_CAN1_2Bus_InverterFR_BQuitI, const boolean_T
                  *rtu_CAN1_2Bus_InverterFR_BInvSy, const boolean_T
                  *rtu_CAN1_2Bus_InverterFR_BInvWa, const real_T
                  *rtu_CAN1_2Bus_InverterFR_MMotor, const real_T
                  *rtu_CAN1_2Bus_InverterFR_NInvDT, const real_T
                  *rtu_CAN1_2Bus_InverterFR_TMotor, const real_T
                  *rtu_CAN1_2Bus_InverterFR_VDCInv, const real_T
                  *rtu_CAN1_2Bus_InverterFR_TInvFR, const real_T
                  *rtu_CAN1_2Bus_InverterRL_nMotor, const boolean_T
                  *rtu_CAN1_2Bus_InverterRL_BInvDC, const boolean_T
                  *rtu_CAN1_2Bus_InverterRL_BInvEr, const boolean_T
                  *rtu_CAN1_2Bus_InverterRL_BInvOn, const boolean_T
                  *rtu_CAN1_2Bus_InverterRL_BInvQu, const boolean_T
                  *rtu_CAN1_2Bus_InverterRL_BQuitI, const boolean_T
                  *rtu_CAN1_2Bus_InverterRL_BInvSy, const boolean_T
                  *rtu_CAN1_2Bus_InverterRL_BInvWa, const real_T
                  *rtu_CAN1_2Bus_InverterRL_MMotor, const real_T
                  *rtu_CAN1_2Bus_InverterRL_NInvDT, const real_T
                  *rtu_CAN1_2Bus_InverterRL_TMotor, const real_T
                  *rtu_CAN1_2Bus_InverterRL_VDCInv, const real_T
                  *rtu_CAN1_2Bus_InverterRL_TInvRL, const real_T
                  *rtu_CAN1_2Bus_InverterRR_nMotor, const boolean_T
                  *rtu_CAN1_2Bus_InverterRR_BInvDC, const boolean_T
                  *rtu_CAN1_2Bus_InverterRR_BInvEr, const boolean_T
                  *rtu_CAN1_2Bus_InverterRR_BInvOn, const boolean_T
                  *rtu_CAN1_2Bus_InverterRR_BInvQu, const boolean_T
                  *rtu_CAN1_2Bus_InverterRR_BQuitI, const boolean_T
                  *rtu_CAN1_2Bus_InverterRR_BInvSy, const boolean_T
                  *rtu_CAN1_2Bus_InverterRR_BInvWa, const real_T
                  *rtu_CAN1_2Bus_InverterRR_MMotor, const real_T
                  *rtu_CAN1_2Bus_InverterRR_NInvDT, const real_T
                  *rtu_CAN1_2Bus_InverterRR_TMotor, const real_T
                  *rtu_CAN1_2Bus_InverterRR_VDCInv, const real_T
                  *rtu_CAN1_2Bus_InverterRR_TInvRR, const boolean_T
                  *rtu_CAN3Bus_STW_BSteeringWheelB, const boolean_T
                  *rtu_CAN3Bus_STW_BSteeringWhee_h, const boolean_T
                  *rtu_CAN3Bus_STW_BSteeringWhe_h2, const boolean_T
                  *rtu_CAN3Bus_STW_BSteeringWhe_hs, const real_T
                  *rtu_CAN3Bus_STW_NPageSelectRota, const real_T
                  *rtu_CAN3Bus_STW_NParameterRotar, const real_T
                  *rtu_CAN3Bus_STW_NEventModeRotar, const real_T
                  *rtu_CAN3Bus_STW_VRegenPaddle1, const real_T
                  *rtu_CAN3Bus_STW_VRegenPaddle2, const real_T
                  *rtu_CAN3Bus_DDU7_NDisplayNumber, const real_T
                  *rtu_CAN3Bus_DDU7_VSteeringAngle, const real_T
                  *rtu_CAN3Bus_DDU7_VThrottlePedal, const real_T
                  *rtu_CAN3Bus_DDU7_VThrottlePed_d, const real_T
                  *rtu_CAN3Bus_DDU7_VBrakeF, const real_T
                  *rtu_CAN3Bus_DDU7_VBrakeR, const real_T
                  *rtu_CAN3Bus_DDU7_VDamperPotenti, const real_T
                  *rtu_CAN3Bus_DDU7_VDamperPoten_l, const real_T
                  *rtu_CAN3Bus_IMU_vLateralIMU, const real_T
                  *rtu_CAN3Bus_IMU_gVerticalIMU, const real_T
                  *rtu_CAN3Bus_IMU_vLongitudinalIM, const real_T
                  *rtu_CAN3Bus_IMU_gLateralIMU, const real_T
                  *rtu_CAN3Bus_IMU_gLongitudinalIM, const real_T
                  *rtu_CAN3Bus_IMU_nYawRateIMU, const real_T *rtu_BMS_IIVTS,
                  const real_T *rtu_BMS_IBMSHallEffect, const real_T
                  *rtu_BMS_VDCAccumulator, const real_T *rtu_BMS_TCellMin, const
                  real_T *rtu_BMS_VCellAverage, const real_T *rtu_BMS_VCellMax,
                  const real_T *rtu_BMS_TCellMax, const real_T *rtu_BMS_IBMSDLC,
                  const real_T *rtu_BMS_VCellMin, const real_T
                  *rtu_BMS_RCellAverage, const boolean_T *rtu_BMS_BBalancingOn,
                  const boolean_T *rtu_BMS_BBMSP0A0C, const boolean_T
                  *rtu_BMS_BBMSP0A0E, const boolean_T *rtu_BMS_BBMSP0A10, const
                  boolean_T *rtu_BMS_BBMSP0A80, const boolean_T
                  *rtu_BMS_BBMSP0AC0, const boolean_T *rtu_BMS_BBMSP0AFA, real_T
                  *rty_InverterSignals_InverterRLS, boolean_T
                  *rty_InverterSignals_InverterR_g, boolean_T
                  *rty_InverterSignals_InverterR_c, boolean_T
                  *rty_InverterSignals_InverterR_e, boolean_T
                  *rty_InverterSignals_InverterR_n, boolean_T
                  *rty_InverterSignals_InverterR_f, boolean_T
                  *rty_InverterSignals_InverterR_k, boolean_T
                  *rty_InverterSignals_InverterR_h, real_T
                  *rty_InverterSignals_Inverter_kw, real_T
                  *rty_InverterSignals_Inverter_ka, real_T
                  *rty_InverterSignals_Inverte_kaa, real_T
                  *rty_InverterSignals_Inverter_el, real_T
                  *rty_InverterSignals_Inverter_cj, real_T
                  *rty_InverterSignals_InverterFLS, boolean_T
                  *rty_InverterSignals_InverterF_o, boolean_T
                  *rty_InverterSignals_InverterF_p, boolean_T
                  *rty_InverterSignals_InverterF_d, boolean_T
                  *rty_InverterSignals_Inverter_dm, boolean_T
                  *rty_InverterSignals_InverterF_g, boolean_T
                  *rty_InverterSignals_InverterF_m, boolean_T
                  *rty_InverterSignals_Inverter_pd, real_T
                  *rty_InverterSignals_InverterF_i, real_T
                  *rty_InverterSignals_Inverter_pr, real_T
                  *rty_InverterSignals_Inverter_pe, real_T
                  *rty_InverterSignals_Inverter_o3, real_T
                  *rty_InverterSignals_InverterF_e, real_T
                  *rty_InverterSignals_InverterRRS, boolean_T
                  *rty_InverterSignals_InverterR_j, boolean_T
                  *rty_InverterSignals_InverterR_p, boolean_T
                  *rty_InverterSignals_InverterR_m, boolean_T
                  *rty_InverterSignals_Inverter_p2, boolean_T
                  *rty_InverterSignals_InverterR_i, boolean_T
                  *rty_InverterSignals_Inverte_ka1, boolean_T
                  *rty_InverterSignals_Inverter_hs, real_T
                  *rty_InverterSignals_InverterR_b, real_T
                  *rty_InverterSignals_Inverter_ng, real_T
                  *rty_InverterSignals_Inverter_gy, real_T
                  *rty_InverterSignals_Inverter_go, real_T
                  *rty_InverterSignals_Inverter_ep, real_T
                  *rty_InverterSignals_InverterFRS, boolean_T
                  *rty_InverterSignals_InverterF_b, boolean_T
                  *rty_InverterSignals_InverterF_c, boolean_T
                  *rty_InverterSignals_InverterF_l, boolean_T
                  *rty_InverterSignals_Inverter_p4, boolean_T
                  *rty_InverterSignals_Inverter_py, boolean_T
                  *rty_InverterSignals_Inverter_en, boolean_T
                  *rty_InverterSignals_Inverter_px, real_T
                  *rty_InverterSignals_Inverter_mk, real_T
                  *rty_InverterSignals_InverterF_n, real_T
                  *rty_InverterSignals_InverterF_f, real_T
                  *rty_InverterSignals_Inverter_df, real_T
                  *rty_InverterSignals_Inverter_mw, real_T
                  *rty_WheelSpeeds_vWheelRL, real_T *rty_WheelSpeeds_vWheelRR,
                  real_T *rty_WheelSpeeds_vWheelFL, real_T
                  *rty_WheelSpeeds_vWheelFR, real_T
                  *rty_SensorSignals_VDamperPotent, real_T
                  *rty_SensorSignals_VDamperPote_h, real_T
                  *rty_SensorSignals_NDisplayNumbe, real_T
                  *rty_SensorSignals_VSteeringAngl, real_T
                  *rty_SensorSignals_VThrottlePeda, real_T
                  *rty_SensorSignals_VThrottlePe_a, boolean_T
                  *rty_SensorSignals_BSteeringWhee, boolean_T
                  *rty_SensorSignals_BSteeringWh_b, boolean_T
                  *rty_SensorSignals_BSteeringWh_d, boolean_T
                  *rty_SensorSignals_BSteeringWh_j, real_T
                  *rty_SensorSignals_NPageSelectRo, real_T
                  *rty_SensorSignals_NParameterRot, real_T
                  *rty_SensorSignals_NEventModeRot, real_T
                  *rty_SensorSignals_VRegenPaddle1, real_T
                  *rty_SensorSignals_VRegenPaddle2, real_T
                  *rty_SensorSignals_VBrakeF, real_T *rty_SensorSignals_VBrakeR,
                  real_T *rty_GPSIMUSignals_vLateralIMU, real_T
                  *rty_GPSIMUSignals_gVerticalIMU, real_T
                  *rty_GPSIMUSignals_vLongitudinal, real_T
                  *rty_GPSIMUSignals_gLateralIMU, real_T
                  *rty_GPSIMUSignals_gLongitudinal, real_T
                  *rty_GPSIMUSignals_nYawRateIMU, real_T
                  *rty_BMSSignalsBus_VCellMax, real_T
                  *rty_BMSSignalsBus_VCellDelta, real_T
                  *rty_BMSSignalsBus_VCellMin, real_T
                  *rty_BMSSignalsBus_VCellAverage, real_T
                  *rty_BMSSignalsBus_TCellMax, real_T *rty_BMSSignalsBus_IBMSDLC,
                  real_T *rty_BMSSignalsBus_TCellMin, real_T
                  *rty_BMSSignalsBus_IBMSHallEffec, real_T
                  *rty_BMSSignalsBus_VDCAccumulato, real_T
                  *rty_BMSSignalsBus_RCellAverage, boolean_T
                  *rty_BMSSignalsBus_BBalancingOn, boolean_T
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
