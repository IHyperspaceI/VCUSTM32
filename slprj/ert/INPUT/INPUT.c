/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: INPUT.c
 *
 * Code generated for Simulink model 'INPUT'.
 *
 * Model version                  : 13.4
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Thu Jul 30 16:47:09 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "INPUT.h"
#include "rtwtypes.h"
#include "INPUT_private.h"
#include "WheelSpeedInputs.h"
#include "InverterInputs.h"
#include "BMSInputs.h"
#include "SensorInputs.h"
#include "GPSIMUInputs.h"

/* Output and update for referenced model: 'INPUT' */
void INPUT(const real_T *rtu_CAN1_2Bus_InverterFL_nMotor, const boolean_T
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
           *rtu_CAN3Bus_DDU7_VBrakeF, const real_T *rtu_CAN3Bus_DDU7_VBrakeR,
           const real_T *rtu_CAN3Bus_DDU7_VDamperPotenti, const real_T
           *rtu_CAN3Bus_DDU7_VDamperPoten_l, const real_T
           *rtu_CAN3Bus_IMU_vLateralIMU, const real_T
           *rtu_CAN3Bus_IMU_gVerticalIMU, const real_T
           *rtu_CAN3Bus_IMU_vLongitudinalIM, const real_T
           *rtu_CAN3Bus_IMU_gLateralIMU, const real_T
           *rtu_CAN3Bus_IMU_gLongitudinalIM, const real_T
           *rtu_CAN3Bus_IMU_nYawRateIMU, const real_T *rtu_BMS_IIVTS, const
           real_T *rtu_BMS_IBMSHallEffect, const real_T *rtu_BMS_VDCAccumulator,
           const real_T *rtu_BMS_TCellMin, const real_T *rtu_BMS_VCellAverage,
           const real_T *rtu_BMS_VCellMax, const real_T *rtu_BMS_TCellMax, const
           real_T *rtu_BMS_IBMSDLC, const real_T *rtu_BMS_VCellMin, const real_T
           *rtu_BMS_RCellAverage, const boolean_T *rtu_BMS_BBalancingOn, const
           boolean_T *rtu_BMS_BBMSP0A0C, const boolean_T *rtu_BMS_BBMSP0A0E,
           const boolean_T *rtu_BMS_BBMSP0A10, const boolean_T
           *rtu_BMS_BBMSP0A80, const boolean_T *rtu_BMS_BBMSP0AC0, const
           boolean_T *rtu_BMS_BBMSP0AFA, real_T *rty_InverterSignals_InverterRLS,
           boolean_T *rty_InverterSignals_InverterR_g, boolean_T
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
           *rty_InverterSignals_Inverter_mw, real_T *rty_WheelSpeeds_vWheelRL,
           real_T *rty_WheelSpeeds_vWheelRR, real_T *rty_WheelSpeeds_vWheelFL,
           real_T *rty_WheelSpeeds_vWheelFR, real_T
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
           *rty_SensorSignals_VRegenPaddle2, real_T *rty_SensorSignals_VBrakeF,
           real_T *rty_SensorSignals_VBrakeR, real_T
           *rty_GPSIMUSignals_vLateralIMU, real_T
           *rty_GPSIMUSignals_gVerticalIMU, real_T
           *rty_GPSIMUSignals_vLongitudinal, real_T
           *rty_GPSIMUSignals_gLateralIMU, real_T
           *rty_GPSIMUSignals_gLongitudinal, real_T
           *rty_GPSIMUSignals_nYawRateIMU, real_T *rty_BMSSignalsBus_VCellMax,
           real_T *rty_BMSSignalsBus_VCellDelta, real_T
           *rty_BMSSignalsBus_VCellMin, real_T *rty_BMSSignalsBus_VCellAverage,
           real_T *rty_BMSSignalsBus_TCellMax, real_T *rty_BMSSignalsBus_IBMSDLC,
           real_T *rty_BMSSignalsBus_TCellMin, real_T
           *rty_BMSSignalsBus_IBMSHallEffec, real_T
           *rty_BMSSignalsBus_VDCAccumulato, real_T
           *rty_BMSSignalsBus_RCellAverage, boolean_T
           *rty_BMSSignalsBus_BBalancingOn, boolean_T
           *rty_BMSSignalsBus_BBMSP0A0C, boolean_T *rty_BMSSignalsBus_BBMSP0A0E,
           boolean_T *rty_BMSSignalsBus_BBMSP0A10, boolean_T
           *rty_BMSSignalsBus_BBMSP0A80, boolean_T *rty_BMSSignalsBus_BBMSP0AC0,
           boolean_T *rty_BMSSignalsBus_BBMSP0AFA, real_T
           *rty_BMSSignalsBus_IIVTS)
{
  /* ModelReference generated from: '<Root>/Model' */
  WheelSpeedInputs(rtu_CAN1_2Bus_InverterFL_nMotor,
                   rtu_CAN1_2Bus_InverterFR_nMotor,
                   rtu_CAN1_2Bus_InverterRL_nMotor,
                   rtu_CAN1_2Bus_InverterRR_nMotor, rty_WheelSpeeds_vWheelRL,
                   rty_WheelSpeeds_vWheelRR, rty_WheelSpeeds_vWheelFL,
                   rty_WheelSpeeds_vWheelFR);

  /* ModelReference generated from: '<Root>/Model1' */
  InverterInputs(rtu_CAN1_2Bus_InverterFL_nMotor,
                 rtu_CAN1_2Bus_InverterFL_BInvDC,
                 rtu_CAN1_2Bus_InverterFL_BInvEr,
                 rtu_CAN1_2Bus_InverterFL_BInvOn,
                 rtu_CAN1_2Bus_InverterFL_BInvQu,
                 rtu_CAN1_2Bus_InverterFL_BQuitI,
                 rtu_CAN1_2Bus_InverterFL_BInvSy,
                 rtu_CAN1_2Bus_InverterFL_BInvWa,
                 rtu_CAN1_2Bus_InverterFL_MMotor,
                 rtu_CAN1_2Bus_InverterFL_NInvDT,
                 rtu_CAN1_2Bus_InverterFL_TMotor,
                 rtu_CAN1_2Bus_InverterFL_VDCInv,
                 rtu_CAN1_2Bus_InverterFL_TInvFL,
                 rtu_CAN1_2Bus_InverterFR_nMotor,
                 rtu_CAN1_2Bus_InverterFR_BInvDC,
                 rtu_CAN1_2Bus_InverterFR_BInvEr,
                 rtu_CAN1_2Bus_InverterFR_BInvOn,
                 rtu_CAN1_2Bus_InverterFR_BInvQu,
                 rtu_CAN1_2Bus_InverterFR_BQuitI,
                 rtu_CAN1_2Bus_InverterFR_BInvSy,
                 rtu_CAN1_2Bus_InverterFR_BInvWa,
                 rtu_CAN1_2Bus_InverterFR_MMotor,
                 rtu_CAN1_2Bus_InverterFR_NInvDT,
                 rtu_CAN1_2Bus_InverterFR_TMotor,
                 rtu_CAN1_2Bus_InverterFR_VDCInv,
                 rtu_CAN1_2Bus_InverterFR_TInvFR,
                 rtu_CAN1_2Bus_InverterRL_nMotor,
                 rtu_CAN1_2Bus_InverterRL_BInvDC,
                 rtu_CAN1_2Bus_InverterRL_BInvEr,
                 rtu_CAN1_2Bus_InverterRL_BInvOn,
                 rtu_CAN1_2Bus_InverterRL_BInvQu,
                 rtu_CAN1_2Bus_InverterRL_BQuitI,
                 rtu_CAN1_2Bus_InverterRL_BInvSy,
                 rtu_CAN1_2Bus_InverterRL_BInvWa,
                 rtu_CAN1_2Bus_InverterRL_MMotor,
                 rtu_CAN1_2Bus_InverterRL_NInvDT,
                 rtu_CAN1_2Bus_InverterRL_TMotor,
                 rtu_CAN1_2Bus_InverterRL_VDCInv,
                 rtu_CAN1_2Bus_InverterRL_TInvRL,
                 rtu_CAN1_2Bus_InverterRR_nMotor,
                 rtu_CAN1_2Bus_InverterRR_BInvDC,
                 rtu_CAN1_2Bus_InverterRR_BInvEr,
                 rtu_CAN1_2Bus_InverterRR_BInvOn,
                 rtu_CAN1_2Bus_InverterRR_BInvQu,
                 rtu_CAN1_2Bus_InverterRR_BQuitI,
                 rtu_CAN1_2Bus_InverterRR_BInvSy,
                 rtu_CAN1_2Bus_InverterRR_BInvWa,
                 rtu_CAN1_2Bus_InverterRR_MMotor,
                 rtu_CAN1_2Bus_InverterRR_NInvDT,
                 rtu_CAN1_2Bus_InverterRR_TMotor,
                 rtu_CAN1_2Bus_InverterRR_VDCInv,
                 rtu_CAN1_2Bus_InverterRR_TInvRR,
                 rty_InverterSignals_InverterRLS,
                 rty_InverterSignals_InverterR_g,
                 rty_InverterSignals_InverterR_c,
                 rty_InverterSignals_InverterR_e,
                 rty_InverterSignals_InverterR_n,
                 rty_InverterSignals_InverterR_f,
                 rty_InverterSignals_InverterR_k,
                 rty_InverterSignals_InverterR_h,
                 rty_InverterSignals_Inverter_kw,
                 rty_InverterSignals_Inverter_ka,
                 rty_InverterSignals_Inverte_kaa,
                 rty_InverterSignals_Inverter_el,
                 rty_InverterSignals_Inverter_cj,
                 rty_InverterSignals_InverterFLS,
                 rty_InverterSignals_InverterF_o,
                 rty_InverterSignals_InverterF_p,
                 rty_InverterSignals_InverterF_d,
                 rty_InverterSignals_Inverter_dm,
                 rty_InverterSignals_InverterF_g,
                 rty_InverterSignals_InverterF_m,
                 rty_InverterSignals_Inverter_pd,
                 rty_InverterSignals_InverterF_i,
                 rty_InverterSignals_Inverter_pr,
                 rty_InverterSignals_Inverter_pe,
                 rty_InverterSignals_Inverter_o3,
                 rty_InverterSignals_InverterF_e,
                 rty_InverterSignals_InverterRRS,
                 rty_InverterSignals_InverterR_j,
                 rty_InverterSignals_InverterR_p,
                 rty_InverterSignals_InverterR_m,
                 rty_InverterSignals_Inverter_p2,
                 rty_InverterSignals_InverterR_i,
                 rty_InverterSignals_Inverte_ka1,
                 rty_InverterSignals_Inverter_hs,
                 rty_InverterSignals_InverterR_b,
                 rty_InverterSignals_Inverter_ng,
                 rty_InverterSignals_Inverter_gy,
                 rty_InverterSignals_Inverter_go,
                 rty_InverterSignals_Inverter_ep,
                 rty_InverterSignals_InverterFRS,
                 rty_InverterSignals_InverterF_b,
                 rty_InverterSignals_InverterF_c,
                 rty_InverterSignals_InverterF_l,
                 rty_InverterSignals_Inverter_p4,
                 rty_InverterSignals_Inverter_py,
                 rty_InverterSignals_Inverter_en,
                 rty_InverterSignals_Inverter_px,
                 rty_InverterSignals_Inverter_mk,
                 rty_InverterSignals_InverterF_n,
                 rty_InverterSignals_InverterF_f,
                 rty_InverterSignals_Inverter_df,
                 rty_InverterSignals_Inverter_mw);

  /* ModelReference generated from: '<Root>/Model3' */
  SensorInputs(rtu_CAN3Bus_STW_BSteeringWheelB, rtu_CAN3Bus_STW_BSteeringWhee_h,
               rtu_CAN3Bus_STW_BSteeringWhe_h2, rtu_CAN3Bus_STW_BSteeringWhe_hs,
               rtu_CAN3Bus_STW_NPageSelectRota, rtu_CAN3Bus_STW_NParameterRotar,
               rtu_CAN3Bus_STW_NEventModeRotar, rtu_CAN3Bus_STW_VRegenPaddle1,
               rtu_CAN3Bus_STW_VRegenPaddle2, rtu_CAN3Bus_DDU7_NDisplayNumber,
               rtu_CAN3Bus_DDU7_VSteeringAngle, rtu_CAN3Bus_DDU7_VThrottlePedal,
               rtu_CAN3Bus_DDU7_VThrottlePed_d, rtu_CAN3Bus_DDU7_VBrakeF,
               rtu_CAN3Bus_DDU7_VBrakeR, rtu_CAN3Bus_DDU7_VDamperPotenti,
               rtu_CAN3Bus_DDU7_VDamperPoten_l, rty_SensorSignals_VDamperPotent,
               rty_SensorSignals_VDamperPote_h, rty_SensorSignals_NDisplayNumbe,
               rty_SensorSignals_VSteeringAngl, rty_SensorSignals_VThrottlePeda,
               rty_SensorSignals_VThrottlePe_a, rty_SensorSignals_BSteeringWhee,
               rty_SensorSignals_BSteeringWh_b, rty_SensorSignals_BSteeringWh_d,
               rty_SensorSignals_BSteeringWh_j, rty_SensorSignals_NPageSelectRo,
               rty_SensorSignals_NParameterRot, rty_SensorSignals_NEventModeRot,
               rty_SensorSignals_VRegenPaddle1, rty_SensorSignals_VRegenPaddle2,
               rty_SensorSignals_VBrakeF, rty_SensorSignals_VBrakeR);

  /* ModelReference generated from: '<Root>/Model4' */
  GPSIMUInputs(rtu_CAN3Bus_IMU_vLateralIMU, rtu_CAN3Bus_IMU_gVerticalIMU,
               rtu_CAN3Bus_IMU_vLongitudinalIM, rtu_CAN3Bus_IMU_gLateralIMU,
               rtu_CAN3Bus_IMU_gLongitudinalIM, rtu_CAN3Bus_IMU_nYawRateIMU,
               rty_GPSIMUSignals_vLateralIMU, rty_GPSIMUSignals_gVerticalIMU,
               rty_GPSIMUSignals_vLongitudinal, rty_GPSIMUSignals_gLateralIMU,
               rty_GPSIMUSignals_gLongitudinal, rty_GPSIMUSignals_nYawRateIMU);

  /* ModelReference generated from: '<Root>/Model2' */
  BMSInputs(rtu_BMS_IIVTS, rtu_BMS_IBMSHallEffect, rtu_BMS_VDCAccumulator,
            rtu_BMS_TCellMin, rtu_BMS_VCellAverage, rtu_BMS_VCellMax,
            rtu_BMS_TCellMax, rtu_BMS_IBMSDLC, rtu_BMS_VCellMin,
            rtu_BMS_RCellAverage, rtu_BMS_BBalancingOn, rtu_BMS_BBMSP0A0C,
            rtu_BMS_BBMSP0A0E, rtu_BMS_BBMSP0A10, rtu_BMS_BBMSP0A80,
            rtu_BMS_BBMSP0AC0, rtu_BMS_BBMSP0AFA, rty_BMSSignalsBus_VCellMax,
            rty_BMSSignalsBus_VCellDelta, rty_BMSSignalsBus_VCellMin,
            rty_BMSSignalsBus_VCellAverage, rty_BMSSignalsBus_TCellMax,
            rty_BMSSignalsBus_IBMSDLC, rty_BMSSignalsBus_TCellMin,
            rty_BMSSignalsBus_IBMSHallEffec, rty_BMSSignalsBus_VDCAccumulato,
            rty_BMSSignalsBus_RCellAverage, rty_BMSSignalsBus_BBalancingOn,
            rty_BMSSignalsBus_BBMSP0A0C, rty_BMSSignalsBus_BBMSP0A0E,
            rty_BMSSignalsBus_BBMSP0A10, rty_BMSSignalsBus_BBMSP0A80,
            rty_BMSSignalsBus_BBMSP0AC0, rty_BMSSignalsBus_BBMSP0AFA,
            rty_BMSSignalsBus_IIVTS);
}

/* Model initialize function */
void INPUT_initialize(const char_T **rt_errorStatus, RT_MODEL_INPUT_T *const
                      INPUT_M, DW_INPUT_f_T *localDW)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(INPUT_M, rt_errorStatus);

  /* Model Initialize function for ModelReference Block: '<Root>/Model' */
  WheelSpeedInputs_initialize(rtmGetErrorStatusPointer(INPUT_M),
    &(localDW->Model_InstanceData.rtm));

  /* Model Initialize function for ModelReference Block: '<Root>/Model1' */
  InverterInputs_initialize(rtmGetErrorStatusPointer(INPUT_M),
    &(localDW->Model1_InstanceData.rtm));

  /* Model Initialize function for ModelReference Block: '<Root>/Model2' */
  BMSInputs_initialize(rtmGetErrorStatusPointer(INPUT_M),
                       &(localDW->Model2_InstanceData.rtm));

  /* Model Initialize function for ModelReference Block: '<Root>/Model3' */
  SensorInputs_initialize(rtmGetErrorStatusPointer(INPUT_M),
    &(localDW->Model3_InstanceData.rtm));

  /* Model Initialize function for ModelReference Block: '<Root>/Model4' */
  GPSIMUInputs_initialize(rtmGetErrorStatusPointer(INPUT_M),
    &(localDW->Model4_InstanceData.rtm));

  /* user code (Initialize function Body) */
  LL_TIM_EnableCounter(TIM2);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
