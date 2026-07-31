/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: MASTER.c
 *
 * Code generated for Simulink model 'MASTER'.
 *
 * Model version                  : 13.6
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Fri Jul 31 17:40:44 2026
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
void MASTER_Init(real_T *rty_Global_Systems_MRegenMax, real_T
                 *rty_Global_Systems_rEngineBra_b, real_T
                 *rty_Global_Systems_PEngineBra_a, DW_MASTER_f_T *localDW)
{
  /* SystemInitialize for ModelReference generated from: '<Root>/STATEFLOW' */
  STATEFLOW_Init(&(localDW->STATEFLOW_InstanceData.rtdw));

  /* SystemInitialize for ModelReference generated from: '<Root>/SYSTEMS' */
  SYSTEMS_Init(rty_Global_Systems_MRegenMax, rty_Global_Systems_rEngineBra_b,
               rty_Global_Systems_PEngineBra_a,
               &(localDW->SYSTEMS_InstanceData.rtdw));

  /* SystemInitialize for ModelReference generated from: '<Root>/TORQUECONTROL' */
  TORQUECONTROL_Init(&(localDW->TORQUECONTROL_InstanceData.rtdw));
}

/* Output and update for referenced model: 'MASTER' */
void MASTER(const real_T *rtu_CAN1_2_InverterFL_nMotorFL, const boolean_T
            *rtu_CAN1_2_InverterFL_BInvDCOnF, const boolean_T
            *rtu_CAN1_2_InverterFL_BInvError, const boolean_T
            *rtu_CAN1_2_InverterFL_BInvOnFLI, const boolean_T
            *rtu_CAN1_2_InverterFL_BInvQuitD, const boolean_T
            *rtu_CAN1_2_InverterFL_BQuitInvO, const boolean_T
            *rtu_CAN1_2_InverterFL_BInvSysRe, const boolean_T
            *rtu_CAN1_2_InverterFL_BInvWarnF, const real_T
            *rtu_CAN1_2_InverterFL_MMotorMea, const real_T
            *rtu_CAN1_2_InverterFL_NInvDTCFL, const real_T
            *rtu_CAN1_2_InverterFL_TMotorFL, const real_T
            *rtu_CAN1_2_InverterFL_VDCInvFL, const real_T
            *rtu_CAN1_2_InverterFL_TInvFL, const real_T
            *rtu_CAN1_2_InverterFR_nMotorFR, const boolean_T
            *rtu_CAN1_2_InverterFR_BInvDCOnF, const boolean_T
            *rtu_CAN1_2_InverterFR_BInvError, const boolean_T
            *rtu_CAN1_2_InverterFR_BInvOnFRI, const boolean_T
            *rtu_CAN1_2_InverterFR_BInvQuitD, const boolean_T
            *rtu_CAN1_2_InverterFR_BQuitInvO, const boolean_T
            *rtu_CAN1_2_InverterFR_BInvSysRe, const boolean_T
            *rtu_CAN1_2_InverterFR_BInvWarnF, const real_T
            *rtu_CAN1_2_InverterFR_MMotorMea, const real_T
            *rtu_CAN1_2_InverterFR_NInvDTCFR, const real_T
            *rtu_CAN1_2_InverterFR_TMotorFR, const real_T
            *rtu_CAN1_2_InverterFR_VDCInvFR, const real_T
            *rtu_CAN1_2_InverterFR_TInvFR, const real_T
            *rtu_CAN1_2_InverterRL_nMotorRL, const boolean_T
            *rtu_CAN1_2_InverterRL_BInvDCOnR, const boolean_T
            *rtu_CAN1_2_InverterRL_BInvError, const boolean_T
            *rtu_CAN1_2_InverterRL_BInvOnRLI, const boolean_T
            *rtu_CAN1_2_InverterRL_BInvQuitD, const boolean_T
            *rtu_CAN1_2_InverterRL_BQuitInvO, const boolean_T
            *rtu_CAN1_2_InverterRL_BInvSysRe, const boolean_T
            *rtu_CAN1_2_InverterRL_BInvWarnR, const real_T
            *rtu_CAN1_2_InverterRL_MMotorMea, const real_T
            *rtu_CAN1_2_InverterRL_NInvDTCRL, const real_T
            *rtu_CAN1_2_InverterRL_TMotorRL, const real_T
            *rtu_CAN1_2_InverterRL_VDCInvRL, const real_T
            *rtu_CAN1_2_InverterRL_TInvRL, const real_T
            *rtu_CAN1_2_InverterRR_nMotorRR, const boolean_T
            *rtu_CAN1_2_InverterRR_BInvDCOnR, const boolean_T
            *rtu_CAN1_2_InverterRR_BInvError, const boolean_T
            *rtu_CAN1_2_InverterRR_BInvOnRRI, const boolean_T
            *rtu_CAN1_2_InverterRR_BInvQuitD, const boolean_T
            *rtu_CAN1_2_InverterRR_BQuitInvO, const boolean_T
            *rtu_CAN1_2_InverterRR_BInvSysRe, const boolean_T
            *rtu_CAN1_2_InverterRR_BInvWarnR, const real_T
            *rtu_CAN1_2_InverterRR_MMotorMea, const real_T
            *rtu_CAN1_2_InverterRR_NInvDTCRR, const real_T
            *rtu_CAN1_2_InverterRR_TMotorRR, const real_T
            *rtu_CAN1_2_InverterRR_VDCInvRR, const real_T
            *rtu_CAN1_2_InverterRR_TInvRR, const boolean_T
            *rtu_CAN3_STW_BSteeringWheelButt, const boolean_T
            *rtu_CAN3_STW_BSteeringWheelBu_h, const boolean_T
            *rtu_CAN3_STW_BSteeringWheelB_h2, const boolean_T
            *rtu_CAN3_STW_BSteeringWheelB_hs, const real_T
            *rtu_CAN3_STW_NPageSelectRotary, const real_T
            *rtu_CAN3_STW_NParameterRotary, const real_T
            *rtu_CAN3_STW_NEventModeRotary, const real_T
            *rtu_CAN3_STW_VRegenPaddle1, const real_T
            *rtu_CAN3_STW_VRegenPaddle2, const real_T
            *rtu_CAN3_DDU7_NDisplayNumberDDU, const real_T
            *rtu_CAN3_DDU7_VSteeringAngle, const real_T
            *rtu_CAN3_DDU7_VThrottlePedal1, const real_T
            *rtu_CAN3_DDU7_VThrottlePedal2, const real_T *rtu_CAN3_DDU7_VBrakeF,
            const real_T *rtu_CAN3_DDU7_VBrakeR, const real_T
            *rtu_CAN3_DDU7_VDamperPotentiome, const real_T
            *rtu_CAN3_DDU7_VDamperPotentio_l, const real_T
            *rtu_CAN3_IMU_vLateralIMU, const real_T *rtu_CAN3_IMU_gVerticalIMU,
            const real_T *rtu_CAN3_IMU_vLongitudinalIMU, const real_T
            *rtu_CAN3_IMU_gLateralIMU, const real_T
            *rtu_CAN3_IMU_gLongitudinalIMU, const real_T
            *rtu_CAN3_IMU_nYawRateIMU, const real_T *rtu_BMSCAN_IIVTS, const
            real_T *rtu_BMSCAN_IBMSHallEffect, const real_T
            *rtu_BMSCAN_VDCAccumulator, const real_T *rtu_BMSCAN_TCellMin, const
            real_T *rtu_BMSCAN_VCellAverage, const real_T *rtu_BMSCAN_VCellMax,
            const real_T *rtu_BMSCAN_TCellMax, const real_T *rtu_BMSCAN_IBMSDLC,
            const real_T *rtu_BMSCAN_VCellMin, const real_T
            *rtu_BMSCAN_RCellAverage, const boolean_T *rtu_BMSCAN_BBalancingOn,
            const boolean_T *rtu_BMSCAN_BBMSP0A0C, const boolean_T
            *rtu_BMSCAN_BBMSP0A0E, const boolean_T *rtu_BMSCAN_BBMSP0A10, const
            boolean_T *rtu_BMSCAN_BBMSP0A80, const boolean_T
            *rtu_BMSCAN_BBMSP0AC0, const boolean_T *rtu_BMSCAN_BBMSP0AFA, real_T
            *rty_Global_InverterSignals_Inve, boolean_T
            *rty_Global_InverterSignals_In_g, boolean_T
            *rty_Global_InverterSignals_In_c, boolean_T
            *rty_Global_InverterSignals_In_e, boolean_T
            *rty_Global_InverterSignals_In_n, boolean_T
            *rty_Global_InverterSignals_In_f, boolean_T
            *rty_Global_InverterSignals_In_k, boolean_T
            *rty_Global_InverterSignals_In_h, real_T
            *rty_Global_InverterSignals_I_kw, real_T
            *rty_Global_InverterSignals_I_ka, real_T
            *rty_Global_InverterSignals__kaa, real_T
            *rty_Global_InverterSignals_I_el, real_T
            *rty_Global_InverterSignals_I_cj, real_T
            *rty_Global_InverterSignals_I_ez, boolean_T
            *rty_Global_InverterSignals_In_o, boolean_T
            *rty_Global_InverterSignals_In_p, boolean_T
            *rty_Global_InverterSignals_In_d, boolean_T
            *rty_Global_InverterSignals_I_dm, boolean_T
            *rty_Global_InverterSignals_I_gy, boolean_T
            *rty_Global_InverterSignals_In_m, boolean_T
            *rty_Global_InverterSignals_I_pd, real_T
            *rty_Global_InverterSignals_In_i, real_T
            *rty_Global_InverterSignals_I_pr, real_T
            *rty_Global_InverterSignals_I_pe, real_T
            *rty_Global_InverterSignals_I_o3, real_T
            *rty_Global_InverterSignals_I_e4, real_T
            *rty_Global_InverterSignals_I_mc, boolean_T
            *rty_Global_InverterSignals_In_j, boolean_T
            *rty_Global_InverterSignals_I_po, boolean_T
            *rty_Global_InverterSignals_I_m3, boolean_T
            *rty_Global_InverterSignals_I_p2, boolean_T
            *rty_Global_InverterSignals_I_i3, boolean_T
            *rty_Global_InverterSignals__ka1, boolean_T
            *rty_Global_InverterSignals_I_hs, real_T
            *rty_Global_InverterSignals_In_b, real_T
            *rty_Global_InverterSignals_I_ng, real_T
            *rty_Global_InverterSignals__gye, real_T
            *rty_Global_InverterSignals_I_go, real_T
            *rty_Global_InverterSignals_I_ep, real_T
            *rty_Global_InverterSignals_I_kf, boolean_T
            *rty_Global_InverterSignals_I_bn, boolean_T
            *rty_Global_InverterSignals_I_c4, boolean_T
            *rty_Global_InverterSignals_In_l, boolean_T
            *rty_Global_InverterSignals_I_p4, boolean_T
            *rty_Global_InverterSignals_I_py, boolean_T
            *rty_Global_InverterSignals_I_en, boolean_T
            *rty_Global_InverterSignals_I_px, real_T
            *rty_Global_InverterSignals_I_mk, real_T
            *rty_Global_InverterSignals_I_nk, real_T
            *rty_Global_InverterSignals_I_fp, real_T
            *rty_Global_InverterSignals_I_df, real_T
            *rty_Global_InverterSignals_I_mw, real_T
            *rty_Global_WheelSpeeds_vWheelRL, real_T
            *rty_Global_WheelSpeeds_vWheelRR, real_T
            *rty_Global_WheelSpeeds_vWheelFL, real_T
            *rty_Global_WheelSpeeds_vWheelFR, real_T
            *rty_Global_SensorSignals_VDampe, real_T
            *rty_Global_SensorSignals_VDam_h, real_T
            *rty_Global_SensorSignals_NDispl, real_T
            *rty_Global_SensorSignals_VSteer, real_T
            *rty_Global_SensorSignals_VThrot, real_T
            *rty_Global_SensorSignals_VThr_a, boolean_T
            *rty_Global_SensorSignals_BSteer, boolean_T
            *rty_Global_SensorSignals_BSte_b, boolean_T
            *rty_Global_SensorSignals_BSte_d, boolean_T
            *rty_Global_SensorSignals_BSte_j, real_T
            *rty_Global_SensorSignals_NPageS, real_T
            *rty_Global_SensorSignals_NParam, real_T
            *rty_Global_SensorSignals_NEvent, real_T
            *rty_Global_SensorSignals_VRegen, real_T
            *rty_Global_SensorSignals_VReg_h, real_T
            *rty_Global_SensorSignals_VBrake, real_T
            *rty_Global_SensorSignals_VBra_e, real_T
            *rty_Global_GPSIMUSignals_vLater, real_T
            *rty_Global_GPSIMUSignals_gVerti, real_T
            *rty_Global_GPSIMUSignals_vLongi, real_T
            *rty_Global_GPSIMUSignals_gLater, real_T
            *rty_Global_GPSIMUSignals_gLongi, real_T
            *rty_Global_GPSIMUSignals_nYawRa, real_T
            *rty_Global_BMSSignals_VCellMax, real_T
            *rty_Global_BMSSignals_VCellDelt, real_T
            *rty_Global_BMSSignals_VCellMin, real_T
            *rty_Global_BMSSignals_VCellAver, real_T
            *rty_Global_BMSSignals_TCellMax, real_T
            *rty_Global_BMSSignals_IBMSDLC, real_T
            *rty_Global_BMSSignals_TCellMin, real_T
            *rty_Global_BMSSignals_IBMSHallE, real_T
            *rty_Global_BMSSignals_VDCAccumu, real_T
            *rty_Global_BMSSignals_RCellAver, boolean_T
            *rty_Global_BMSSignals_BBalancin, boolean_T
            *rty_Global_BMSSignals_BBMSP0A0C, boolean_T
            *rty_Global_BMSSignals_BBMSP0A0E, boolean_T
            *rty_Global_BMSSignals_BBMSP0A10, boolean_T
            *rty_Global_BMSSignals_BBMSP0A80, boolean_T
            *rty_Global_BMSSignals_BBMSP0AC0, boolean_T
            *rty_Global_BMSSignals_BBMSP0AFA, real_T
            *rty_Global_BMSSignals_IIVTS, real_T
            *rty_Global_Systems_rThrottlePed, real_T
            *rty_Global_Systems_rThrottleP_c, boolean_T
            *rty_Global_Systems_BThrottleErr, real_T
            *rty_Global_Systems_tThrottleErr, real_T *rty_Global_Systems_pBrakeF,
            real_T *rty_Global_Systems_pBrakeR, boolean_T
            *rty_Global_Systems_BBrakeError, real_T
            *rty_Global_Systems_tBrakeError, boolean_T
            *rty_Global_Systems_BBrakeOn, real_T *rty_Global_Systems_pBrakeMax,
            boolean_T *rty_Global_Systems_BBrakeLight, boolean_T
            *rty_Global_Systems_BPedalOverla, real_T
            *rty_Global_Systems_tPedalOverla, boolean_T
            *rty_Global_Systems_BAppsOK, real_T *rty_Global_Systems_tAppsTimer,
            real_T *rty_Global_Systems_rSteeringAng, real_T
            *rty_Global_Systems_aSteeringAng, real_T
            *rty_Global_Systems_rRegenPaddle, boolean_T
            *rty_Global_Systems_BRegenOn, real_T *rty_Global_Systems_xDamperFL,
            real_T *rty_Global_Systems_xDamperFR, real_T
            *rty_Global_Systems_xDamperRL, real_T *rty_Global_Systems_xDamperRR,
            boolean_T *rty_Global_Systems_BxDamperFLOk, boolean_T
            *rty_Global_Systems_BxDamperFROk, boolean_T
            *rty_Global_Systems_BxDamperRLOk, boolean_T
            *rty_Global_Systems_BxDamperRROk, boolean_T
            *rty_Global_Systems_BInverterErr, boolean_T
            *rty_Global_Systems_BInverterE_d, boolean_T
            *rty_Global_Systems_BIMUOK, boolean_T *rty_Global_Systems_BIMUError,
            real_T *rty_Global_Systems_vChassis, real_T
            *rty_Global_Systems_sChassis, boolean_T *rty_Global_Systems_BPageUp,
            boolean_T *rty_Global_Systems_BPageDown, boolean_T
            *rty_Global_Systems_BInvLVOn, boolean_T
            *rty_Global_Systems_BCalibration, boolean_T
            *rty_Global_Systems_BReadyToDriv, boolean_T
            *rty_Global_Systems_BErrorReset, boolean_T *rty_Global_Systems_BTVOn,
            boolean_T *rty_Global_Systems_BTCOn, boolean_T
            *rty_Global_Systems_BDrivetrainC, boolean_T
            *rty_Global_Systems_BEMSOn, boolean_T
            *rty_Global_Systems_BSpinningMod, real_T
            *rty_Global_Systems_NThrottleMap, real_T
            *rty_Global_Systems_PDischargeMa, real_T
            *rty_Global_Systems_rTorqueSplit, real_T
            *rty_Global_Systems_PRegenMax, real_T
            *rty_Global_Systems_rTVMultiplie, real_T
            *rty_Global_Systems_PEngineBraki, real_T
            *rty_Global_Systems_rEngineBraki, boolean_T
            *rty_Global_Systems_BDataMark, real_T *rty_Global_Systems_rGrip,
            real_T *rty_Global_Systems_EOffset, real_T
            *rty_Global_Systems_NTCKdSelecto, real_T
            *rty_Global_Systems_MRegenMax, real_T *rty_Global_Systems_NEventMode,
            real_T *rty_Global_Systems_NPCKpSelecto, real_T
            *rty_Global_Systems_TMotorMax, real_T *rty_Global_Systems_TInvMax,
            boolean_T *rty_Global_Systems_BAccuFanOn, boolean_T
            *rty_Global_Systems_BMotorRBHFan, boolean_T
            *rty_Global_Systems_BInverterFan, boolean_T
            *rty_Global_Systems_BPCComplete, real_T *rty_Global_Systems_PActual,
            real_T *rty_Global_Systems_rSOC, real_T *rty_Global_Systems_rSOE,
            real_T *rty_Global_Systems_PEnergyMeter, boolean_T
            *rty_Global_Systems_BOverpower, real_T *rty_Global_Systems_tIMUError,
            real_T *rty_Global_Systems_BTVOnEM, real_T
            *rty_Global_Systems_BTCOnEM, real_T *rty_Global_Systems_BDrivetrai_b,
            real_T *rty_Global_Systems_BEMSOnEM, real_T
            *rty_Global_Systems_BSpinningM_j, real_T
            *rty_Global_Systems_rTVMultipl_l, real_T
            *rty_Global_Systems_rEngineBra_b, real_T
            *rty_Global_Systems_NThrottleM_a, real_T
            *rty_Global_Systems_PDischarge_j, real_T
            *rty_Global_Systems_rTorqueSpl_n, real_T
            *rty_Global_Systems_PRegenMaxEM, real_T
            *rty_Global_Systems_PEngineBra_a, real_T *rty_Global_Systems_BTVOnOW,
            real_T *rty_Global_Systems_BTCOnOW, real_T
            *rty_Global_Systems_BDrivetrai_p, real_T
            *rty_Global_Systems_BEMSOnOW, real_T
            *rty_Global_Systems_BSpinningM_k, real_T
            *rty_Global_Systems_rTVMultipl_h, real_T
            *rty_Global_Systems_rEngineBra_e, real_T
            *rty_Global_Systems_NThrottleM_g, real_T
            *rty_Global_Systems_PDischarge_d, real_T
            *rty_Global_Systems_rTorqueSpl_a, real_T
            *rty_Global_Systems_PRegenMaxOW, real_T
            *rty_Global_Systems_PEngineBra_i, real_T
            *rty_Global_Systems_MMotorMaxFL, real_T
            *rty_Global_Systems_MMotorMaxFR, real_T
            *rty_Global_Systems_MMotorMaxRL, real_T
            *rty_Global_Systems_MMotorMaxRR, real_T
            *rty_Global_Stateflow_NCarState, boolean_T
            *rty_Global_Stateflow_BReadyToDr, boolean_T
            *rty_Global_Stateflow_BReadyTo_k, real_T
            *rty_Global_Stateflow_NBMSState, real_T
            *rty_Global_Stateflow_NInvState, real_T *rty_Global_Stateflow_BHVOn,
            real_T *rty_Global_Stateflow_BInvOnRLOu, real_T
            *rty_Global_Stateflow_BInvOnRROu, real_T
            *rty_Global_Stateflow_BInvOnFLOu, real_T
            *rty_Global_Stateflow_BInvOnFROu, real_T
            *rty_Global_Stateflow_BInvDCOnRL, real_T
            *rty_Global_Stateflow_BInvDCOnRR, real_T
            *rty_Global_Stateflow_BInvDCOnFL, real_T
            *rty_Global_Stateflow_BInvDCOnFR, real_T
            *rty_Global_Stateflow_BInvEnable, real_T
            *rty_Global_Stateflow_BInvEnab_p, real_T
            *rty_Global_Stateflow_BInvEnab_o, real_T
            *rty_Global_Stateflow_BInvEnab_h, real_T
            *rty_Global_Stateflow_BInvErrorR, real_T
            *rty_Global_Stateflow_BInvErro_n, real_T
            *rty_Global_Stateflow_BInvErro_c, real_T
            *rty_Global_Stateflow_BInvErro_h, real_T
            *rty_Global_Stateflow_MTargetTor, real_T
            *rty_Global_Stateflow_MTargetT_j, real_T
            *rty_Global_Stateflow_MTargetT_l, real_T
            *rty_Global_Stateflow_MTargetT_g, real_T
            *rty_Global_Stateflow_MTorqueLim, real_T
            *rty_Global_Stateflow_MTorqueL_m, real_T
            *rty_Global_Stateflow_MTorqueL_h, real_T
            *rty_Global_Stateflow_MTorqueL_a, real_T
            *rty_Global_Stateflow_MTorqueL_l, real_T
            *rty_Global_Stateflow_MTorqueL_g, real_T
            *rty_Global_Stateflow_MTorque_lx, real_T
            *rty_Global_Stateflow_MTorque_h0, boolean_T
            *rty_Global_Limitations_BDischar, real_T
            *rty_Global_Limitations_PInvTemp, real_T
            *rty_Global_Limitations_PInvTe_g, real_T
            *rty_Global_Limitations_PInvTe_m, real_T
            *rty_Global_Limitations_PInvTe_i, real_T
            *rty_Global_Limitations_PInvT_if, real_T
            *rty_Global_Limitations_PMotorTe, real_T
            *rty_Global_Limitations_PMotor_i, real_T
            *rty_Global_Limitations_PMotor_a, real_T
            *rty_Global_Limitations_PMotor_c, real_T
            *rty_Global_Limitations_PMotor_f, real_T
            *rty_Global_Limitations_PTSTempe, real_T
            *rty_Global_Limitations_PTSTem_d, real_T
            *rty_Global_Limitations_PTSTem_g, real_T
            *rty_Global_Limitations_PTSTem_h, real_T
            *rty_Global_Limitations_PHighCel, real_T
            *rty_Global_Limitations_PLowCell, real_T
            *rty_Global_Limitations_PHighC_n, real_T
            *rty_Global_Limitations_PSOCDisc, real_T
            *rty_Global_Limitations_PSOCRege, real_T
            *rty_Global_Limitations_rSpeedRe, real_T
            *rty_Global_Limitations_rSpeed_h, real_T
            *rty_Global_Limitations_rSpeed_o, real_T
            *rty_Global_Limitations_rSpee_hw, boolean_T
            *rty_Global_Limitations_BSpeedDe, real_T
            *rty_Global_Limitations_PDischar, real_T
            *rty_Global_Limitations_PRegenDe, real_T
            *rty_Global_TorqueControl_MDrive, real_T
            *rty_Global_TorqueControl_PRegen, real_T
            *rty_Global_TorqueControl_MDri_d, real_T
            *rty_Global_TorqueControl_PDisch, real_T
            *rty_Global_TorqueControl_PPCInt, real_T
            *rty_Global_TorqueControl_PPCPro, real_T
            *rty_Global_TorqueControl_MPCDis, real_T
            *rty_Global_TorqueControl_PReg_h, real_T
            *rty_Global_TorqueControl_PPCI_l, real_T
            *rty_Global_TorqueControl_PPCP_j, real_T
            *rty_Global_TorqueControl_MPCReg, real_T
            *rty_Global_TorqueControl_PPCDis, real_T
            *rty_Global_TorqueControl_PPCReg, real_T
            *rty_Global_TorqueControl_MDisch, real_T
            *rty_Global_TorqueControl_MRegen, real_T
            *rty_Global_TorqueControl_MTotal, boolean_T
            *rty_Global_TorqueControl_BEMSDr, boolean_T
            *rty_Global_TorqueControl_BEMS_i, boolean_T
            *rty_Global_TorqueControl_BEMS_b, real_T
            *rty_Global_TorqueControl_NLap, real_T
            *rty_Global_TorqueControl_NSecto, real_T
            *rty_Global_TorqueControl_NSec_f, real_T
            *rty_Global_TorqueControl_ESecto, real_T
            *rty_Global_TorqueControl_ERemai, real_T
            *rty_Global_TorqueControl_EBudge, real_T
            *rty_Global_TorqueControl_sSecto, real_T
            *rty_Global_TorqueControl_rSlipR, real_T
            *rty_Global_TorqueControl_rSli_i, real_T
            *rty_Global_TorqueControl_rSli_d, real_T
            *rty_Global_TorqueControl_rSli_j, real_T
            *rty_Global_TorqueControl_FLongi, real_T
            *rty_Global_TorqueControl_FTyreV, real_T
            *rty_Global_TorqueControl_FTyr_c, real_T
            *rty_Global_TorqueControl_FTyr_p, real_T
            *rty_Global_TorqueControl_FTyr_j, real_T
            *rty_Global_TorqueControl_aSlipA, real_T
            *rty_Global_TorqueControl_aSli_e, real_T
            *rty_Global_TorqueControl_aSli_d, real_T
            *rty_Global_TorqueControl_aSli_k, real_T
            *rty_Global_TorqueControl_aCambe, real_T
            *rty_Global_TorqueControl_aCam_k, real_T
            *rty_Global_TorqueControl_aCam_a, real_T
            *rty_Global_TorqueControl_aCam_j, real_T
            *rty_Global_TorqueControl_FTotal, real_T
            *rty_Global_TorqueControl_FLater, real_T
            *rty_Global_TorqueControl_FLat_l, real_T
            *rty_Global_TorqueControl_FTot_c, real_T
            *rty_Global_TorqueControl_FDownf, real_T
            *rty_Global_TorqueControl_FDow_i, real_T
            *rty_Global_TorqueControl_aCam_b, real_T
            *rty_Global_TorqueControl_aCa_k3, real_T
            *rty_Global_TorqueControl_xHeave, real_T
            *rty_Global_TorqueControl_xHea_i, real_T
            *rty_Global_TorqueControl_aCam_e, real_T
            *rty_Global_TorqueControl_aCam_p, real_T
            *rty_Global_TorqueControl_aRollA, real_T
            *rty_Global_TorqueControl_nYawRa, boolean_T
            *rty_Global_TorqueControl_BTVOK, real_T
            *rty_Global_TorqueControl_MTorqu, real_T
            *rty_Global_TorqueControl_MTor_h, real_T
            *rty_Global_TorqueControl_MTor_k, real_T
            *rty_Global_TorqueControl_MTo_kw, real_T
            *rty_Global_TorqueControl_rSplit, real_T
            *rty_Global_TorqueControl_MTor_n, real_T
            *rty_Global_TorqueControl_MTor_j, real_T
            *rty_Global_TorqueControl_MTo_nk, real_T
            *rty_Global_TorqueControl_MTor_g, real_T
            *rty_Global_TorqueControl_rSli_o, real_T
            *rty_Global_TorqueControl_NTract, real_T
            *rty_Global_TorqueControl_NTra_p, real_T
            *rty_Global_TorqueControl_NTra_g, real_T
            *rty_Global_TorqueControl_NTr_go, real_T
            *rty_Global_TorqueControl_NABSMu, real_T
            *rty_Global_TorqueControl_NABS_l, real_T
            *rty_Global_TorqueControl_NABS_c, real_T
            *rty_Global_TorqueControl_NABS_n, real_T
            *rty_Global_TorqueControl_NSec_a, real_T
            *rty_Global_TorqueControl_NSec_b, real_T
            *rty_Global_TorqueControl_NSec_e, real_T
            *rty_Global_TorqueControl_NSec_d, real_T
            *rty_Global_TorqueControl_NSe_fh, real_T
            *rty_Global_TorqueControl_NSec_k, real_T
            *rty_Global_TorqueControl_NSe_ku, real_T
            *rty_Global_TorqueControl_NSec_m, real_T
            *rty_Global_TorqueControl_NSe_fb, real_T
            *rty_Global_TorqueControl_NSec_i, real_T
            *rty_Global_TorqueControl_NSec_n, real_T
            *rty_Global_TorqueControl_NSe_i3, real_T
            *rty_Global_TorqueControl_ETotal, real_T
            *rty_Global_TorqueControl_ESec_h, real_T
            *rty_Global_TorqueControl_ESec_i, real_T
            *rty_Global_TorqueControl_ESec_d, real_T
            *rty_Global_TorqueControl_MTract, real_T
            *rty_Global_TorqueControl_MTra_o, real_T
            *rty_Global_TorqueControl_MTra_n, real_T
            *rty_Global_TorqueControl_MTra_f, real_T
            *rty_Global_TorqueControl_ESe_dn, real_T
            *rty_Global_TorqueControl_ESe_im, real_T
            *rty_Global_TorqueControl_ESec_c, real_T
            *rty_Global_TorqueControl_ESec_n, real_T
            *rty_Global_TorqueControl_ESec_j, real_T
            *rty_Global_TorqueControl_ESec_e, real_T
            *rty_Global_TorqueControl_ESec_a, real_T
            *rty_Global_TorqueControl_ESec_l, real_T
            *rty_Global_TorqueControl_ESec_m, real_T
            *rty_Global_TorqueControl_MFLFin, real_T
            *rty_Global_TorqueControl_MFRFin, real_T
            *rty_Global_TorqueControl_MRLFin, real_T
            *rty_Global_TorqueControl_MRRFin, real_T
            *rty_Global_TorqueControl_MTot_i, real_T
            *rty_Global_TorqueControl_PDis_f, B_MASTER_c_T *localB,
            DW_MASTER_f_T *localDW)
{
  /* ModelReference generated from: '<Root>/INPUT' */
  INPUT(rtu_CAN1_2_InverterFL_nMotorFL, rtu_CAN1_2_InverterFL_BInvDCOnF,
        rtu_CAN1_2_InverterFL_BInvError, rtu_CAN1_2_InverterFL_BInvOnFLI,
        rtu_CAN1_2_InverterFL_BInvQuitD, rtu_CAN1_2_InverterFL_BQuitInvO,
        rtu_CAN1_2_InverterFL_BInvSysRe, rtu_CAN1_2_InverterFL_BInvWarnF,
        rtu_CAN1_2_InverterFL_MMotorMea, rtu_CAN1_2_InverterFL_NInvDTCFL,
        rtu_CAN1_2_InverterFL_TMotorFL, rtu_CAN1_2_InverterFL_VDCInvFL,
        rtu_CAN1_2_InverterFL_TInvFL, rtu_CAN1_2_InverterFR_nMotorFR,
        rtu_CAN1_2_InverterFR_BInvDCOnF, rtu_CAN1_2_InverterFR_BInvError,
        rtu_CAN1_2_InverterFR_BInvOnFRI, rtu_CAN1_2_InverterFR_BInvQuitD,
        rtu_CAN1_2_InverterFR_BQuitInvO, rtu_CAN1_2_InverterFR_BInvSysRe,
        rtu_CAN1_2_InverterFR_BInvWarnF, rtu_CAN1_2_InverterFR_MMotorMea,
        rtu_CAN1_2_InverterFR_NInvDTCFR, rtu_CAN1_2_InverterFR_TMotorFR,
        rtu_CAN1_2_InverterFR_VDCInvFR, rtu_CAN1_2_InverterFR_TInvFR,
        rtu_CAN1_2_InverterRL_nMotorRL, rtu_CAN1_2_InverterRL_BInvDCOnR,
        rtu_CAN1_2_InverterRL_BInvError, rtu_CAN1_2_InverterRL_BInvOnRLI,
        rtu_CAN1_2_InverterRL_BInvQuitD, rtu_CAN1_2_InverterRL_BQuitInvO,
        rtu_CAN1_2_InverterRL_BInvSysRe, rtu_CAN1_2_InverterRL_BInvWarnR,
        rtu_CAN1_2_InverterRL_MMotorMea, rtu_CAN1_2_InverterRL_NInvDTCRL,
        rtu_CAN1_2_InverterRL_TMotorRL, rtu_CAN1_2_InverterRL_VDCInvRL,
        rtu_CAN1_2_InverterRL_TInvRL, rtu_CAN1_2_InverterRR_nMotorRR,
        rtu_CAN1_2_InverterRR_BInvDCOnR, rtu_CAN1_2_InverterRR_BInvError,
        rtu_CAN1_2_InverterRR_BInvOnRRI, rtu_CAN1_2_InverterRR_BInvQuitD,
        rtu_CAN1_2_InverterRR_BQuitInvO, rtu_CAN1_2_InverterRR_BInvSysRe,
        rtu_CAN1_2_InverterRR_BInvWarnR, rtu_CAN1_2_InverterRR_MMotorMea,
        rtu_CAN1_2_InverterRR_NInvDTCRR, rtu_CAN1_2_InverterRR_TMotorRR,
        rtu_CAN1_2_InverterRR_VDCInvRR, rtu_CAN1_2_InverterRR_TInvRR,
        rtu_CAN3_STW_BSteeringWheelButt, rtu_CAN3_STW_BSteeringWheelBu_h,
        rtu_CAN3_STW_BSteeringWheelB_h2, rtu_CAN3_STW_BSteeringWheelB_hs,
        rtu_CAN3_STW_NPageSelectRotary, rtu_CAN3_STW_NParameterRotary,
        rtu_CAN3_STW_NEventModeRotary, rtu_CAN3_STW_VRegenPaddle1,
        rtu_CAN3_STW_VRegenPaddle2, rtu_CAN3_DDU7_NDisplayNumberDDU,
        rtu_CAN3_DDU7_VSteeringAngle, rtu_CAN3_DDU7_VThrottlePedal1,
        rtu_CAN3_DDU7_VThrottlePedal2, rtu_CAN3_DDU7_VBrakeF,
        rtu_CAN3_DDU7_VBrakeR, rtu_CAN3_DDU7_VDamperPotentiome,
        rtu_CAN3_DDU7_VDamperPotentio_l, rtu_CAN3_IMU_vLateralIMU,
        rtu_CAN3_IMU_gVerticalIMU, rtu_CAN3_IMU_vLongitudinalIMU,
        rtu_CAN3_IMU_gLateralIMU, rtu_CAN3_IMU_gLongitudinalIMU,
        rtu_CAN3_IMU_nYawRateIMU, rtu_BMSCAN_IIVTS, rtu_BMSCAN_IBMSHallEffect,
        rtu_BMSCAN_VDCAccumulator, rtu_BMSCAN_TCellMin, rtu_BMSCAN_VCellAverage,
        rtu_BMSCAN_VCellMax, rtu_BMSCAN_TCellMax, rtu_BMSCAN_IBMSDLC,
        rtu_BMSCAN_VCellMin, rtu_BMSCAN_RCellAverage, rtu_BMSCAN_BBalancingOn,
        rtu_BMSCAN_BBMSP0A0C, rtu_BMSCAN_BBMSP0A0E, rtu_BMSCAN_BBMSP0A10,
        rtu_BMSCAN_BBMSP0A80, rtu_BMSCAN_BBMSP0AC0, rtu_BMSCAN_BBMSP0AFA,
        rty_Global_InverterSignals_Inve, rty_Global_InverterSignals_In_g,
        rty_Global_InverterSignals_In_c, rty_Global_InverterSignals_In_e,
        rty_Global_InverterSignals_In_n, rty_Global_InverterSignals_In_f,
        rty_Global_InverterSignals_In_k, rty_Global_InverterSignals_In_h,
        rty_Global_InverterSignals_I_kw, rty_Global_InverterSignals_I_ka,
        rty_Global_InverterSignals__kaa, rty_Global_InverterSignals_I_el,
        rty_Global_InverterSignals_I_cj, rty_Global_InverterSignals_I_ez,
        rty_Global_InverterSignals_In_o, rty_Global_InverterSignals_In_p,
        rty_Global_InverterSignals_In_d, rty_Global_InverterSignals_I_dm,
        rty_Global_InverterSignals_I_gy, rty_Global_InverterSignals_In_m,
        rty_Global_InverterSignals_I_pd, rty_Global_InverterSignals_In_i,
        rty_Global_InverterSignals_I_pr, rty_Global_InverterSignals_I_pe,
        rty_Global_InverterSignals_I_o3, rty_Global_InverterSignals_I_e4,
        rty_Global_InverterSignals_I_mc, rty_Global_InverterSignals_In_j,
        rty_Global_InverterSignals_I_po, rty_Global_InverterSignals_I_m3,
        rty_Global_InverterSignals_I_p2, rty_Global_InverterSignals_I_i3,
        rty_Global_InverterSignals__ka1, rty_Global_InverterSignals_I_hs,
        rty_Global_InverterSignals_In_b, rty_Global_InverterSignals_I_ng,
        rty_Global_InverterSignals__gye, rty_Global_InverterSignals_I_go,
        rty_Global_InverterSignals_I_ep, rty_Global_InverterSignals_I_kf,
        rty_Global_InverterSignals_I_bn, rty_Global_InverterSignals_I_c4,
        rty_Global_InverterSignals_In_l, rty_Global_InverterSignals_I_p4,
        rty_Global_InverterSignals_I_py, rty_Global_InverterSignals_I_en,
        rty_Global_InverterSignals_I_px, rty_Global_InverterSignals_I_mk,
        rty_Global_InverterSignals_I_nk, rty_Global_InverterSignals_I_fp,
        rty_Global_InverterSignals_I_df, rty_Global_InverterSignals_I_mw,
        rty_Global_WheelSpeeds_vWheelRL, rty_Global_WheelSpeeds_vWheelRR,
        rty_Global_WheelSpeeds_vWheelFL, rty_Global_WheelSpeeds_vWheelFR,
        rty_Global_SensorSignals_VDampe, rty_Global_SensorSignals_VDam_h,
        rty_Global_SensorSignals_NDispl, rty_Global_SensorSignals_VSteer,
        rty_Global_SensorSignals_VThrot, rty_Global_SensorSignals_VThr_a,
        rty_Global_SensorSignals_BSteer, rty_Global_SensorSignals_BSte_b,
        rty_Global_SensorSignals_BSte_d, rty_Global_SensorSignals_BSte_j,
        rty_Global_SensorSignals_NPageS, rty_Global_SensorSignals_NParam,
        rty_Global_SensorSignals_NEvent, rty_Global_SensorSignals_VRegen,
        rty_Global_SensorSignals_VReg_h, rty_Global_SensorSignals_VBrake,
        rty_Global_SensorSignals_VBra_e, rty_Global_GPSIMUSignals_vLater,
        rty_Global_GPSIMUSignals_gVerti, rty_Global_GPSIMUSignals_vLongi,
        rty_Global_GPSIMUSignals_gLater, rty_Global_GPSIMUSignals_gLongi,
        rty_Global_GPSIMUSignals_nYawRa, rty_Global_BMSSignals_VCellMax,
        rty_Global_BMSSignals_VCellDelt, rty_Global_BMSSignals_VCellMin,
        rty_Global_BMSSignals_VCellAver, rty_Global_BMSSignals_TCellMax,
        rty_Global_BMSSignals_IBMSDLC, rty_Global_BMSSignals_TCellMin,
        rty_Global_BMSSignals_IBMSHallE, rty_Global_BMSSignals_VDCAccumu,
        rty_Global_BMSSignals_RCellAver, rty_Global_BMSSignals_BBalancin,
        rty_Global_BMSSignals_BBMSP0A0C, rty_Global_BMSSignals_BBMSP0A0E,
        rty_Global_BMSSignals_BBMSP0A10, rty_Global_BMSSignals_BBMSP0A80,
        rty_Global_BMSSignals_BBMSP0AC0, rty_Global_BMSSignals_BBMSP0AFA,
        rty_Global_BMSSignals_IIVTS);

  /* ModelReference generated from: '<Root>/LIMITATIONS' incorporates:
   *  UnitDelay generated from: '<Root>/Unit Delay1'
   */
  LIMITATIONS(&localDW->UnitDelay1_1_DSTATE, &localDW->UnitDelay1_11_DSTATE,
              &localDW->UnitDelay1_13_DSTATE, &localDW->UnitDelay1_14_DSTATE,
              &localDW->UnitDelay1_24_DSTATE, &localDW->UnitDelay1_26_DSTATE,
              &localDW->UnitDelay1_27_DSTATE, &localDW->UnitDelay1_37_DSTATE,
              &localDW->UnitDelay1_39_DSTATE, &localDW->UnitDelay1_40_DSTATE,
              &localDW->UnitDelay1_50_DSTATE, &localDW->UnitDelay1_52_DSTATE,
              &localDW->UnitDelay1_53_DSTATE, &localDW->UnitDelay1_54_DSTATE,
              &localDW->UnitDelay1_55_DSTATE, &localDW->UnitDelay1_56_DSTATE,
              &localDW->UnitDelay1_80_DSTATE, &localDW->UnitDelay1_82_DSTATE,
              &localDW->UnitDelay1_84_DSTATE, &localDW->UnitDelay1_88_DSTATE,
              &localDW->UnitDelay1_97_DSTATE, &localDW->UnitDelay1_100_DSTATE,
              &localDW->UnitDelay1_104_DSTATE, &localDW->UnitDelay1_106_DSTATE,
              &localDW->UnitDelay1_111_DSTATE, &localDW->UnitDelay1_116_DSTATE,
              &localDW->UnitDelay1_156_DSTATE, &localDW->UnitDelay1_157_DSTATE,
              &localDW->UnitDelay1_198_DSTATE, rty_Global_Limitations_BDischar,
              rty_Global_Limitations_PInvTemp, rty_Global_Limitations_PInvTe_g,
              rty_Global_Limitations_PInvTe_m, rty_Global_Limitations_PInvTe_i,
              rty_Global_Limitations_PInvT_if, rty_Global_Limitations_PMotorTe,
              rty_Global_Limitations_PMotor_i, rty_Global_Limitations_PMotor_a,
              rty_Global_Limitations_PMotor_c, rty_Global_Limitations_PMotor_f,
              rty_Global_Limitations_PTSTempe, rty_Global_Limitations_PTSTem_d,
              rty_Global_Limitations_PTSTem_g, rty_Global_Limitations_PTSTem_h,
              rty_Global_Limitations_PHighCel, rty_Global_Limitations_PLowCell,
              rty_Global_Limitations_PHighC_n, rty_Global_Limitations_PSOCDisc,
              rty_Global_Limitations_PSOCRege, rty_Global_Limitations_rSpeedRe,
              rty_Global_Limitations_rSpeed_h, rty_Global_Limitations_rSpeed_o,
              rty_Global_Limitations_rSpee_hw, rty_Global_Limitations_BSpeedDe,
              rty_Global_Limitations_PDischar, rty_Global_Limitations_PRegenDe);

  /* ModelReference generated from: '<Root>/STATEFLOW' incorporates:
   *  UnitDelay generated from: '<Root>/Unit Delay2'
   */
  STATEFLOW(&localDW->UnitDelay2_1_DSTATE, &localDW->UnitDelay2_3_DSTATE,
            &localDW->UnitDelay2_5_DSTATE, &localDW->UnitDelay2_6_DSTATE,
            &localDW->UnitDelay2_7_DSTATE, &localDW->UnitDelay2_10_DSTATE,
            &localDW->UnitDelay2_12_DSTATE, &localDW->UnitDelay2_14_DSTATE,
            &localDW->UnitDelay2_16_DSTATE, &localDW->UnitDelay2_18_DSTATE,
            &localDW->UnitDelay2_19_DSTATE, &localDW->UnitDelay2_20_DSTATE,
            &localDW->UnitDelay2_23_DSTATE, &localDW->UnitDelay2_27_DSTATE,
            &localDW->UnitDelay2_29_DSTATE, &localDW->UnitDelay2_31_DSTATE,
            &localDW->UnitDelay2_32_DSTATE, &localDW->UnitDelay2_33_DSTATE,
            &localDW->UnitDelay2_36_DSTATE, &localDW->UnitDelay2_40_DSTATE,
            &localDW->UnitDelay2_42_DSTATE, &localDW->UnitDelay2_44_DSTATE,
            &localDW->UnitDelay2_45_DSTATE, &localDW->UnitDelay2_46_DSTATE,
            &localDW->UnitDelay2_49_DSTATE, &localDW->UnitDelay2_82_DSTATE,
            &localDW->UnitDelay2_88_DSTATE, &localDW->UnitDelay2_89_DSTATE,
            &localDW->UnitDelay2_90_DSTATE, &localDW->UnitDelay2_91_DSTATE,
            &localDW->UnitDelay2_92_DSTATE, &localDW->UnitDelay2_93_DSTATE,
            &localDW->UnitDelay2_94_DSTATE, &localDW->UnitDelay2_95_DSTATE,
            &localDW->UnitDelay2_96_DSTATE, &localDW->UnitDelay2_99_DSTATE,
            &localDW->UnitDelay2_102_DSTATE, &localDW->UnitDelay2_103_DSTATE,
            &localDW->UnitDelay2_104_DSTATE, &localDW->UnitDelay2_135_DSTATE,
            &localDW->UnitDelay2_136_DSTATE, rty_Global_Stateflow_NCarState,
            rty_Global_Stateflow_BReadyToDr, rty_Global_Stateflow_BReadyTo_k,
            rty_Global_Stateflow_NBMSState, rty_Global_Stateflow_NInvState,
            rty_Global_Stateflow_BHVOn, rty_Global_Stateflow_BInvOnRLOu,
            rty_Global_Stateflow_BInvOnRROu, rty_Global_Stateflow_BInvOnFLOu,
            rty_Global_Stateflow_BInvOnFROu, rty_Global_Stateflow_BInvDCOnRL,
            rty_Global_Stateflow_BInvDCOnRR, rty_Global_Stateflow_BInvDCOnFL,
            rty_Global_Stateflow_BInvDCOnFR, rty_Global_Stateflow_BInvEnable,
            rty_Global_Stateflow_BInvEnab_p, rty_Global_Stateflow_BInvEnab_o,
            rty_Global_Stateflow_BInvEnab_h, rty_Global_Stateflow_BInvErrorR,
            rty_Global_Stateflow_BInvErro_n, rty_Global_Stateflow_BInvErro_c,
            rty_Global_Stateflow_BInvErro_h, rty_Global_Stateflow_MTargetTor,
            rty_Global_Stateflow_MTargetT_j, rty_Global_Stateflow_MTargetT_l,
            rty_Global_Stateflow_MTargetT_g, rty_Global_Stateflow_MTorqueLim,
            rty_Global_Stateflow_MTorqueL_m, rty_Global_Stateflow_MTorqueL_h,
            rty_Global_Stateflow_MTorqueL_a, rty_Global_Stateflow_MTorqueL_l,
            rty_Global_Stateflow_MTorqueL_g, rty_Global_Stateflow_MTorque_lx,
            rty_Global_Stateflow_MTorque_h0,
            &(localDW->STATEFLOW_InstanceData.rtdw));

  /* ModelReference generated from: '<Root>/SYSTEMS' incorporates:
   *  UnitDelay generated from: '<Root>/Unit Delay3'
   */
  SYSTEMS(&localDW->UnitDelay3_1_DSTATE, &localDW->UnitDelay3_10_DSTATE,
          &localDW->UnitDelay3_11_DSTATE, &localDW->UnitDelay3_12_DSTATE,
          &localDW->UnitDelay3_13_DSTATE, &localDW->UnitDelay3_14_DSTATE,
          &localDW->UnitDelay3_23_DSTATE, &localDW->UnitDelay3_24_DSTATE,
          &localDW->UnitDelay3_26_DSTATE, &localDW->UnitDelay3_27_DSTATE,
          &localDW->UnitDelay3_36_DSTATE, &localDW->UnitDelay3_37_DSTATE,
          &localDW->UnitDelay3_39_DSTATE, &localDW->UnitDelay3_40_DSTATE,
          &localDW->UnitDelay3_49_DSTATE, &localDW->UnitDelay3_50_DSTATE,
          &localDW->UnitDelay3_52_DSTATE, &localDW->UnitDelay3_53_DSTATE,
          &localDW->UnitDelay3_54_DSTATE, &localDW->UnitDelay3_55_DSTATE,
          &localDW->UnitDelay3_56_DSTATE, &localDW->UnitDelay3_57_DSTATE,
          &localDW->UnitDelay3_58_DSTATE, &localDW->UnitDelay3_60_DSTATE,
          &localDW->UnitDelay3_61_DSTATE, &localDW->UnitDelay3_62_DSTATE,
          &localDW->UnitDelay3_63_DSTATE, &localDW->UnitDelay3_64_DSTATE,
          &localDW->UnitDelay3_65_DSTATE, &localDW->UnitDelay3_66_DSTATE,
          &localDW->UnitDelay3_67_DSTATE, &localDW->UnitDelay3_68_DSTATE,
          &localDW->UnitDelay3_69_DSTATE, &localDW->UnitDelay3_70_DSTATE,
          &localDW->UnitDelay3_71_DSTATE, &localDW->UnitDelay3_72_DSTATE,
          &localDW->UnitDelay3_73_DSTATE, &localDW->UnitDelay3_75_DSTATE,
          &localDW->UnitDelay3_77_DSTATE, &localDW->UnitDelay3_78_DSTATE,
          &localDW->UnitDelay3_79_DSTATE, &localDW->UnitDelay3_82_DSTATE,
          &localDW->UnitDelay3_84_DSTATE, &localDW->UnitDelay3_88_DSTATE,
          &localDW->UnitDelay3_97_DSTATE, &localDW->UnitDelay3_196_DSTATE,
          rty_Global_Systems_rThrottlePed, rty_Global_Systems_rThrottleP_c,
          rty_Global_Systems_BThrottleErr, rty_Global_Systems_tThrottleErr,
          rty_Global_Systems_pBrakeF, rty_Global_Systems_pBrakeR,
          rty_Global_Systems_BBrakeError, rty_Global_Systems_tBrakeError,
          rty_Global_Systems_BBrakeOn, rty_Global_Systems_pBrakeMax,
          rty_Global_Systems_BBrakeLight, rty_Global_Systems_BPedalOverla,
          rty_Global_Systems_tPedalOverla, rty_Global_Systems_BAppsOK,
          rty_Global_Systems_tAppsTimer, rty_Global_Systems_rSteeringAng,
          rty_Global_Systems_aSteeringAng, rty_Global_Systems_rRegenPaddle,
          rty_Global_Systems_BRegenOn, rty_Global_Systems_xDamperFL,
          rty_Global_Systems_xDamperFR, rty_Global_Systems_xDamperRL,
          rty_Global_Systems_xDamperRR, rty_Global_Systems_BxDamperFLOk,
          rty_Global_Systems_BxDamperFROk, rty_Global_Systems_BxDamperRLOk,
          rty_Global_Systems_BxDamperRROk, rty_Global_Systems_BInverterErr,
          rty_Global_Systems_BInverterE_d, rty_Global_Systems_BIMUOK,
          rty_Global_Systems_BIMUError, rty_Global_Systems_vChassis,
          rty_Global_Systems_sChassis, rty_Global_Systems_BPageUp,
          rty_Global_Systems_BPageDown, rty_Global_Systems_BInvLVOn,
          rty_Global_Systems_BCalibration, rty_Global_Systems_BReadyToDriv,
          rty_Global_Systems_BErrorReset, rty_Global_Systems_BTVOn,
          rty_Global_Systems_BTCOn, rty_Global_Systems_BDrivetrainC,
          rty_Global_Systems_BEMSOn, rty_Global_Systems_BSpinningMod,
          rty_Global_Systems_NThrottleMap, rty_Global_Systems_PDischargeMa,
          rty_Global_Systems_rTorqueSplit, rty_Global_Systems_PRegenMax,
          rty_Global_Systems_rTVMultiplie, rty_Global_Systems_PEngineBraki,
          rty_Global_Systems_rEngineBraki, rty_Global_Systems_BDataMark,
          rty_Global_Systems_rGrip, rty_Global_Systems_EOffset,
          rty_Global_Systems_NTCKdSelecto, rty_Global_Systems_MRegenMax,
          rty_Global_Systems_NEventMode, rty_Global_Systems_NPCKpSelecto,
          rty_Global_Systems_TMotorMax, rty_Global_Systems_TInvMax,
          rty_Global_Systems_BAccuFanOn, rty_Global_Systems_BMotorRBHFan,
          rty_Global_Systems_BInverterFan, rty_Global_Systems_BPCComplete,
          rty_Global_Systems_PActual, rty_Global_Systems_rSOC,
          rty_Global_Systems_rSOE, rty_Global_Systems_PEnergyMeter,
          rty_Global_Systems_BOverpower, rty_Global_Systems_tIMUError,
          rty_Global_Systems_BTVOnEM, rty_Global_Systems_BTCOnEM,
          rty_Global_Systems_BDrivetrai_b, rty_Global_Systems_BEMSOnEM,
          rty_Global_Systems_BSpinningM_j, rty_Global_Systems_rTVMultipl_l,
          rty_Global_Systems_rEngineBra_b, rty_Global_Systems_NThrottleM_a,
          rty_Global_Systems_PDischarge_j, rty_Global_Systems_rTorqueSpl_n,
          rty_Global_Systems_PRegenMaxEM, rty_Global_Systems_PEngineBra_a,
          rty_Global_Systems_BTVOnOW, rty_Global_Systems_BTCOnOW,
          rty_Global_Systems_BDrivetrai_p, rty_Global_Systems_BEMSOnOW,
          rty_Global_Systems_BSpinningM_k, rty_Global_Systems_rTVMultipl_h,
          rty_Global_Systems_rEngineBra_e, rty_Global_Systems_NThrottleM_g,
          rty_Global_Systems_PDischarge_d, rty_Global_Systems_rTorqueSpl_a,
          rty_Global_Systems_PRegenMaxOW, rty_Global_Systems_PEngineBra_i,
          rty_Global_Systems_MMotorMaxFL, rty_Global_Systems_MMotorMaxFR,
          rty_Global_Systems_MMotorMaxRL, rty_Global_Systems_MMotorMaxRR,
          &(localDW->SYSTEMS_InstanceData.rtdw));

  /* ModelReference generated from: '<Root>/TORQUECONTROL' incorporates:
   *  UnitDelay generated from: '<Root>/Unit Delay'
   */
  TORQUECONTROL(&localDW->UnitDelay_1_DSTATE, &localDW->UnitDelay_12_DSTATE,
                &localDW->UnitDelay_14_DSTATE, &localDW->UnitDelay_27_DSTATE,
                &localDW->UnitDelay_40_DSTATE, &localDW->UnitDelay_53_DSTATE,
                &localDW->UnitDelay_54_DSTATE, &localDW->UnitDelay_55_DSTATE,
                &localDW->UnitDelay_56_DSTATE, &localDW->UnitDelay_74_DSTATE,
                &localDW->UnitDelay_77_DSTATE, &localDW->UnitDelay_78_DSTATE,
                &localDW->UnitDelay_79_DSTATE, &localDW->UnitDelay_97_DSTATE,
                &localDW->UnitDelay_99_DSTATE, &localDW->UnitDelay_107_DSTATE,
                &localDW->UnitDelay_113_DSTATE, &localDW->UnitDelay_114_DSTATE,
                &localDW->UnitDelay_115_DSTATE, &localDW->UnitDelay_129_DSTATE,
                &localDW->UnitDelay_130_DSTATE, &localDW->UnitDelay_137_DSTATE,
                &localDW->UnitDelay_138_DSTATE, &localDW->UnitDelay_140_DSTATE,
                &localDW->UnitDelay_141_DSTATE, &localDW->UnitDelay_142_DSTATE,
                &localDW->UnitDelay_143_DSTATE, &localDW->UnitDelay_144_DSTATE,
                &localDW->UnitDelay_145_DSTATE, &localDW->UnitDelay_146_DSTATE,
                &localDW->UnitDelay_147_DSTATE, &localDW->UnitDelay_148_DSTATE,
                &localDW->UnitDelay_150_DSTATE, &localDW->UnitDelay_151_DSTATE,
                &localDW->UnitDelay_152_DSTATE, &localDW->UnitDelay_153_DSTATE,
                &localDW->UnitDelay_155_DSTATE, &localDW->UnitDelay_162_DSTATE,
                &localDW->UnitDelay_164_DSTATE, &localDW->UnitDelay_192_DSTATE,
                &localDW->UnitDelay_193_DSTATE, &localDW->UnitDelay_194_DSTATE,
                &localDW->UnitDelay_195_DSTATE, &localDW->UnitDelay_198_DSTATE,
                &localDW->UnitDelay_230_DSTATE, &localDW->UnitDelay_241_DSTATE,
                &localDW->UnitDelay_242_DSTATE, &localDW->UnitDelay_243_DSTATE,
                &localDW->UnitDelay_244_DSTATE, &localDW->UnitDelay_250_DSTATE,
                &localDW->UnitDelay_251_DSTATE, &localDW->UnitDelay_252_DSTATE,
                &localDW->UnitDelay_253_DSTATE, &localDW->UnitDelay_255_DSTATE,
                &localDW->UnitDelay_256_DSTATE, rty_Global_TorqueControl_MDrive,
                rty_Global_TorqueControl_PRegen, rty_Global_TorqueControl_MDri_d,
                rty_Global_TorqueControl_PDisch, rty_Global_TorqueControl_PPCInt,
                rty_Global_TorqueControl_PPCPro, rty_Global_TorqueControl_MPCDis,
                rty_Global_TorqueControl_PReg_h, rty_Global_TorqueControl_PPCI_l,
                rty_Global_TorqueControl_PPCP_j, rty_Global_TorqueControl_MPCReg,
                rty_Global_TorqueControl_PPCDis, rty_Global_TorqueControl_PPCReg,
                rty_Global_TorqueControl_MDisch, rty_Global_TorqueControl_MRegen,
                rty_Global_TorqueControl_MTotal, rty_Global_TorqueControl_BEMSDr,
                rty_Global_TorqueControl_BEMS_i, rty_Global_TorqueControl_BEMS_b,
                rty_Global_TorqueControl_NLap, rty_Global_TorqueControl_NSecto,
                rty_Global_TorqueControl_NSec_f, rty_Global_TorqueControl_ESecto,
                rty_Global_TorqueControl_ERemai, rty_Global_TorqueControl_EBudge,
                rty_Global_TorqueControl_sSecto, rty_Global_TorqueControl_rSlipR,
                rty_Global_TorqueControl_rSli_i, rty_Global_TorqueControl_rSli_d,
                rty_Global_TorqueControl_rSli_j, rty_Global_TorqueControl_FLongi,
                rty_Global_TorqueControl_FTyreV, rty_Global_TorqueControl_FTyr_c,
                rty_Global_TorqueControl_FTyr_p, rty_Global_TorqueControl_FTyr_j,
                rty_Global_TorqueControl_aSlipA, rty_Global_TorqueControl_aSli_e,
                rty_Global_TorqueControl_aSli_d, rty_Global_TorqueControl_aSli_k,
                rty_Global_TorqueControl_aCambe, rty_Global_TorqueControl_aCam_k,
                rty_Global_TorqueControl_aCam_a, rty_Global_TorqueControl_aCam_j,
                rty_Global_TorqueControl_FTotal, rty_Global_TorqueControl_FLater,
                rty_Global_TorqueControl_FLat_l, rty_Global_TorqueControl_FTot_c,
                rty_Global_TorqueControl_FDownf, rty_Global_TorqueControl_FDow_i,
                rty_Global_TorqueControl_aCam_b, rty_Global_TorqueControl_aCa_k3,
                rty_Global_TorqueControl_xHeave, rty_Global_TorqueControl_xHea_i,
                rty_Global_TorqueControl_aCam_e, rty_Global_TorqueControl_aCam_p,
                rty_Global_TorqueControl_aRollA, rty_Global_TorqueControl_nYawRa,
                rty_Global_TorqueControl_BTVOK, rty_Global_TorqueControl_MTorqu,
                rty_Global_TorqueControl_MTor_h, rty_Global_TorqueControl_MTor_k,
                rty_Global_TorqueControl_MTo_kw, rty_Global_TorqueControl_rSplit,
                rty_Global_TorqueControl_MTor_n, rty_Global_TorqueControl_MTor_j,
                rty_Global_TorqueControl_MTo_nk, rty_Global_TorqueControl_MTor_g,
                rty_Global_TorqueControl_rSli_o, rty_Global_TorqueControl_NTract,
                rty_Global_TorqueControl_NTra_p, rty_Global_TorqueControl_NTra_g,
                rty_Global_TorqueControl_NTr_go, rty_Global_TorqueControl_NABSMu,
                rty_Global_TorqueControl_NABS_l, rty_Global_TorqueControl_NABS_c,
                rty_Global_TorqueControl_NABS_n, rty_Global_TorqueControl_NSec_a,
                rty_Global_TorqueControl_NSec_b, rty_Global_TorqueControl_NSec_e,
                rty_Global_TorqueControl_NSec_d, rty_Global_TorqueControl_NSe_fh,
                rty_Global_TorqueControl_NSec_k, rty_Global_TorqueControl_NSe_ku,
                rty_Global_TorqueControl_NSec_m, rty_Global_TorqueControl_NSe_fb,
                rty_Global_TorqueControl_NSec_i, rty_Global_TorqueControl_NSec_n,
                rty_Global_TorqueControl_NSe_i3, rty_Global_TorqueControl_ETotal,
                rty_Global_TorqueControl_ESec_h, rty_Global_TorqueControl_ESec_i,
                rty_Global_TorqueControl_ESec_d, rty_Global_TorqueControl_MTract,
                rty_Global_TorqueControl_MTra_o, rty_Global_TorqueControl_MTra_n,
                rty_Global_TorqueControl_MTra_f, rty_Global_TorqueControl_ESe_dn,
                rty_Global_TorqueControl_ESe_im, rty_Global_TorqueControl_ESec_c,
                rty_Global_TorqueControl_ESec_n, rty_Global_TorqueControl_ESec_j,
                rty_Global_TorqueControl_ESec_e, rty_Global_TorqueControl_ESec_a,
                rty_Global_TorqueControl_ESec_l, rty_Global_TorqueControl_ESec_m,
                rty_Global_TorqueControl_MFLFin, rty_Global_TorqueControl_MFRFin,
                rty_Global_TorqueControl_MRLFin, rty_Global_TorqueControl_MRRFin,
                rty_Global_TorqueControl_MTot_i, rty_Global_TorqueControl_PDis_f,
                &(localDW->TORQUECONTROL_InstanceData.rtdw));

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_10_DSTATE = *rty_Global_InverterSignals_I_ka;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_100_DSTATE = *rty_Global_Systems_BThrottleErr;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_101_DSTATE = *rty_Global_Systems_tThrottleErr;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_102_DSTATE = *rty_Global_Systems_pBrakeF;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_103_DSTATE = *rty_Global_Systems_pBrakeR;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_104_DSTATE = *rty_Global_Systems_BBrakeError;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_105_DSTATE = *rty_Global_Systems_tBrakeError;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_106_DSTATE = *rty_Global_Systems_BBrakeOn;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_108_DSTATE = *rty_Global_Systems_BBrakeLight;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_109_DSTATE = *rty_Global_Systems_BPedalOverla;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_11_DSTATE = *rty_Global_InverterSignals__kaa;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_110_DSTATE = *rty_Global_Systems_tPedalOverla;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_111_DSTATE = *rty_Global_Systems_BAppsOK;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_112_DSTATE = *rty_Global_Systems_tAppsTimer;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_116_DSTATE = *rty_Global_Systems_BRegenOn;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_117_DSTATE = *rty_Global_Systems_xDamperFL;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_118_DSTATE = *rty_Global_Systems_xDamperFR;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_119_DSTATE = *rty_Global_Systems_xDamperRL;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_120_DSTATE = *rty_Global_Systems_xDamperRR;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_121_DSTATE = *rty_Global_Systems_BxDamperFLOk;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_122_DSTATE = *rty_Global_Systems_BxDamperFROk;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_123_DSTATE = *rty_Global_Systems_BxDamperRLOk;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_124_DSTATE = *rty_Global_Systems_BxDamperRROk;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_127_DSTATE = *rty_Global_Systems_BIMUOK;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_128_DSTATE = *rty_Global_Systems_BIMUError;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_13_DSTATE = *rty_Global_InverterSignals_I_cj;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_131_DSTATE = *rty_Global_Systems_BPageUp;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_132_DSTATE = *rty_Global_Systems_BPageDown;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_133_DSTATE = *rty_Global_Systems_BInvLVOn;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_134_DSTATE = *rty_Global_Systems_BCalibration;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_135_DSTATE = *rty_Global_Systems_BReadyToDriv;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_136_DSTATE = *rty_Global_Systems_BErrorReset;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_139_DSTATE = *rty_Global_Systems_BDrivetrainC;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_149_DSTATE = *rty_Global_Systems_BDataMark;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_15_DSTATE = *rty_Global_InverterSignals_In_o;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_154_DSTATE = *rty_Global_Systems_NEventMode;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_156_DSTATE = *rty_Global_Systems_TMotorMax;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_157_DSTATE = *rty_Global_Systems_TInvMax;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_158_DSTATE = *rty_Global_Systems_BAccuFanOn;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_159_DSTATE = *rty_Global_Systems_BMotorRBHFan;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_16_DSTATE = *rty_Global_InverterSignals_In_p;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_160_DSTATE = *rty_Global_Systems_BInverterFan;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_161_DSTATE = *rty_Global_Systems_BPCComplete;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_163_DSTATE = *rty_Global_Systems_rSOC;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_165_DSTATE = *rty_Global_Systems_PEnergyMeter;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_166_DSTATE = *rty_Global_Systems_BOverpower;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_167_DSTATE = *rty_Global_Systems_tIMUError;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_168_DSTATE = *rty_Global_Systems_BTVOnEM;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_169_DSTATE = *rty_Global_Systems_BTCOnEM;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_17_DSTATE = *rty_Global_InverterSignals_In_d;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_170_DSTATE = *rty_Global_Systems_BDrivetrai_b;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_171_DSTATE = *rty_Global_Systems_BEMSOnEM;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_172_DSTATE = *rty_Global_Systems_BSpinningM_j;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_173_DSTATE = *rty_Global_Systems_rTVMultipl_l;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_174_DSTATE = *rty_Global_Systems_rEngineBra_b;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_175_DSTATE = *rty_Global_Systems_NThrottleM_a;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_176_DSTATE = *rty_Global_Systems_PDischarge_j;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_177_DSTATE = *rty_Global_Systems_rTorqueSpl_n;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_178_DSTATE = *rty_Global_Systems_PRegenMaxEM;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_179_DSTATE = *rty_Global_Systems_PEngineBra_a;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_18_DSTATE = *rty_Global_InverterSignals_I_dm;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_180_DSTATE = *rty_Global_Systems_BTVOnOW;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_181_DSTATE = *rty_Global_Systems_BTCOnOW;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_182_DSTATE = *rty_Global_Systems_BDrivetrai_p;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_183_DSTATE = *rty_Global_Systems_BEMSOnOW;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_184_DSTATE = *rty_Global_Systems_BSpinningM_k;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_185_DSTATE = *rty_Global_Systems_rTVMultipl_h;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_186_DSTATE = *rty_Global_Systems_rEngineBra_e;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_187_DSTATE = *rty_Global_Systems_NThrottleM_g;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_188_DSTATE = *rty_Global_Systems_PDischarge_d;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_189_DSTATE = *rty_Global_Systems_rTorqueSpl_a;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_19_DSTATE = *rty_Global_InverterSignals_I_gy;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_190_DSTATE = *rty_Global_Systems_PRegenMaxOW;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_191_DSTATE = *rty_Global_Systems_PEngineBra_i;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_196_DSTATE = *rty_Global_Stateflow_NCarState;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_197_DSTATE = *rty_Global_Stateflow_BReadyToDr;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_199_DSTATE = *rty_Global_Stateflow_NBMSState;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_2_DSTATE = *rty_Global_InverterSignals_In_g;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_20_DSTATE = *rty_Global_InverterSignals_In_m;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_200_DSTATE = *rty_Global_Stateflow_NInvState;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_201_DSTATE = *rty_Global_Stateflow_BHVOn;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_202_DSTATE = *rty_Global_Stateflow_BInvOnRLOu;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_203_DSTATE = *rty_Global_Stateflow_BInvOnRROu;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_204_DSTATE = *rty_Global_Stateflow_BInvOnFLOu;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_205_DSTATE = *rty_Global_Stateflow_BInvOnFROu;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_206_DSTATE = *rty_Global_Stateflow_BInvDCOnRL;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_207_DSTATE = *rty_Global_Stateflow_BInvDCOnRR;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_208_DSTATE = *rty_Global_Stateflow_BInvDCOnFL;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_209_DSTATE = *rty_Global_Stateflow_BInvDCOnFR;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_21_DSTATE = *rty_Global_InverterSignals_I_pd;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_210_DSTATE = *rty_Global_Stateflow_BInvEnable;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_211_DSTATE = *rty_Global_Stateflow_BInvEnab_p;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_212_DSTATE = *rty_Global_Stateflow_BInvEnab_o;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_213_DSTATE = *rty_Global_Stateflow_BInvEnab_h;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_214_DSTATE = *rty_Global_Stateflow_BInvErrorR;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_215_DSTATE = *rty_Global_Stateflow_BInvErro_n;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_216_DSTATE = *rty_Global_Stateflow_BInvErro_c;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_217_DSTATE = *rty_Global_Stateflow_BInvErro_h;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_218_DSTATE = *rty_Global_Stateflow_MTargetTor;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_219_DSTATE = *rty_Global_Stateflow_MTargetT_j;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_22_DSTATE = *rty_Global_InverterSignals_In_i;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_220_DSTATE = *rty_Global_Stateflow_MTargetT_l;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_221_DSTATE = *rty_Global_Stateflow_MTargetT_g;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_222_DSTATE = *rty_Global_Stateflow_MTorqueLim;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_223_DSTATE = *rty_Global_Stateflow_MTorqueL_m;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_224_DSTATE = *rty_Global_Stateflow_MTorqueL_h;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_225_DSTATE = *rty_Global_Stateflow_MTorqueL_a;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_226_DSTATE = *rty_Global_Stateflow_MTorqueL_l;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_227_DSTATE = *rty_Global_Stateflow_MTorqueL_g;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_228_DSTATE = *rty_Global_Stateflow_MTorque_lx;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_229_DSTATE = *rty_Global_Stateflow_MTorque_h0;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_23_DSTATE = *rty_Global_InverterSignals_I_pr;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_231_DSTATE = *rty_Global_Limitations_PInvTemp;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_232_DSTATE = *rty_Global_Limitations_PInvTe_g;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_233_DSTATE = *rty_Global_Limitations_PInvTe_m;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_234_DSTATE = *rty_Global_Limitations_PInvTe_i;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_235_DSTATE = *rty_Global_Limitations_PInvT_if;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_236_DSTATE = *rty_Global_Limitations_PMotorTe;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_237_DSTATE = *rty_Global_Limitations_PMotor_i;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_238_DSTATE = *rty_Global_Limitations_PMotor_a;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_239_DSTATE = *rty_Global_Limitations_PMotor_c;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_24_DSTATE = *rty_Global_InverterSignals_I_pe;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_240_DSTATE = *rty_Global_Limitations_PMotor_f;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_245_DSTATE = *rty_Global_Limitations_PHighCel;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_246_DSTATE = *rty_Global_Limitations_PLowCell;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_247_DSTATE = *rty_Global_Limitations_PHighC_n;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_248_DSTATE = *rty_Global_Limitations_PSOCDisc;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_249_DSTATE = *rty_Global_Limitations_PSOCRege;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_25_DSTATE = *rty_Global_InverterSignals_I_o3;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_254_DSTATE = *rty_Global_Limitations_BSpeedDe;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_257_DSTATE = *rty_Global_TorqueControl_MDrive;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_258_DSTATE = *rty_Global_TorqueControl_PRegen;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_259_DSTATE = *rty_Global_TorqueControl_MDri_d;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_26_DSTATE = *rty_Global_InverterSignals_I_e4;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_260_DSTATE = *rty_Global_TorqueControl_PDisch;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_261_DSTATE = *rty_Global_TorqueControl_PPCInt;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_262_DSTATE = *rty_Global_TorqueControl_PPCPro;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_263_DSTATE = *rty_Global_TorqueControl_MPCDis;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_264_DSTATE = *rty_Global_TorqueControl_PReg_h;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_265_DSTATE = *rty_Global_TorqueControl_PPCI_l;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_266_DSTATE = *rty_Global_TorqueControl_PPCP_j;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_267_DSTATE = *rty_Global_TorqueControl_MPCReg;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_268_DSTATE = *rty_Global_TorqueControl_PPCDis;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_269_DSTATE = *rty_Global_TorqueControl_PPCReg;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_270_DSTATE = *rty_Global_TorqueControl_MDisch;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_271_DSTATE = *rty_Global_TorqueControl_MRegen;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_272_DSTATE = *rty_Global_TorqueControl_MTotal;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_273_DSTATE = *rty_Global_TorqueControl_BEMSDr;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_274_DSTATE = *rty_Global_TorqueControl_BEMS_i;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_275_DSTATE = *rty_Global_TorqueControl_BEMS_b;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_276_DSTATE = *rty_Global_TorqueControl_NLap;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_277_DSTATE = *rty_Global_TorqueControl_NSecto;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_278_DSTATE = *rty_Global_TorqueControl_NSec_f;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_279_DSTATE = *rty_Global_TorqueControl_ESecto;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_28_DSTATE = *rty_Global_InverterSignals_In_j;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_280_DSTATE = *rty_Global_TorqueControl_ERemai;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_281_DSTATE = *rty_Global_TorqueControl_EBudge;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_282_DSTATE = *rty_Global_TorqueControl_sSecto;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_283_DSTATE = *rty_Global_TorqueControl_rSlipR;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_284_DSTATE = *rty_Global_TorqueControl_rSli_i;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_285_DSTATE = *rty_Global_TorqueControl_rSli_d;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_286_DSTATE = *rty_Global_TorqueControl_rSli_j;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_287_DSTATE = *rty_Global_TorqueControl_FLongi;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_288_DSTATE = *rty_Global_TorqueControl_FTyreV;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_289_DSTATE = *rty_Global_TorqueControl_FTyr_c;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_29_DSTATE = *rty_Global_InverterSignals_I_po;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_290_DSTATE = *rty_Global_TorqueControl_FTyr_p;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_291_DSTATE = *rty_Global_TorqueControl_FTyr_j;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_292_DSTATE = *rty_Global_TorqueControl_aSlipA;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_293_DSTATE = *rty_Global_TorqueControl_aSli_e;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_294_DSTATE = *rty_Global_TorqueControl_aSli_d;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_295_DSTATE = *rty_Global_TorqueControl_aSli_k;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_296_DSTATE = *rty_Global_TorqueControl_aCambe;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_297_DSTATE = *rty_Global_TorqueControl_aCam_k;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_298_DSTATE = *rty_Global_TorqueControl_aCam_a;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_299_DSTATE = *rty_Global_TorqueControl_aCam_j;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_3_DSTATE = *rty_Global_InverterSignals_In_c;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_30_DSTATE = *rty_Global_InverterSignals_I_m3;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_300_DSTATE = *rty_Global_TorqueControl_FTotal;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_301_DSTATE = *rty_Global_TorqueControl_FLater;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_302_DSTATE = *rty_Global_TorqueControl_FLat_l;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_303_DSTATE = *rty_Global_TorqueControl_FTot_c;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_304_DSTATE = *rty_Global_TorqueControl_FDownf;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_305_DSTATE = *rty_Global_TorqueControl_FDow_i;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_306_DSTATE = *rty_Global_TorqueControl_aCam_b;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_307_DSTATE = *rty_Global_TorqueControl_aCa_k3;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_308_DSTATE = localB->aCamberGainRollF_n;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_309_DSTATE = localB->aCamberGainRollR_j;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_31_DSTATE = *rty_Global_InverterSignals_I_p2;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_310_DSTATE = *rty_Global_TorqueControl_xHeave;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_311_DSTATE = *rty_Global_TorqueControl_xHea_i;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_312_DSTATE = *rty_Global_TorqueControl_aCam_e;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_313_DSTATE = *rty_Global_TorqueControl_aCam_p;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_314_DSTATE = *rty_Global_TorqueControl_aRollA;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_315_DSTATE = *rty_Global_TorqueControl_nYawRa;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_316_DSTATE = *rty_Global_TorqueControl_BTVOK;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_317_DSTATE = *rty_Global_TorqueControl_MTorqu;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_318_DSTATE = *rty_Global_TorqueControl_MTor_h;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_319_DSTATE = *rty_Global_TorqueControl_MTor_k;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_32_DSTATE = *rty_Global_InverterSignals_I_i3;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_320_DSTATE = *rty_Global_TorqueControl_MTo_kw;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_321_DSTATE = *rty_Global_TorqueControl_rSplit;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_322_DSTATE = *rty_Global_TorqueControl_MTor_n;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_323_DSTATE = *rty_Global_TorqueControl_MTor_j;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_324_DSTATE = *rty_Global_TorqueControl_MTo_nk;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_325_DSTATE = *rty_Global_TorqueControl_MTor_g;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_326_DSTATE = *rty_Global_TorqueControl_rSli_o;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_327_DSTATE = *rty_Global_TorqueControl_NTract;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_328_DSTATE = *rty_Global_TorqueControl_NTra_p;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_329_DSTATE = *rty_Global_TorqueControl_NTra_g;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_33_DSTATE = *rty_Global_InverterSignals__ka1;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_330_DSTATE = *rty_Global_TorqueControl_NTr_go;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_331_DSTATE = *rty_Global_TorqueControl_NABSMu;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_332_DSTATE = *rty_Global_TorqueControl_NABS_l;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_333_DSTATE = *rty_Global_TorqueControl_NABS_c;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_334_DSTATE = *rty_Global_TorqueControl_NABS_n;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_335_DSTATE = *rty_Global_TorqueControl_NSec_a;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_336_DSTATE = *rty_Global_TorqueControl_NSec_b;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_337_DSTATE = *rty_Global_TorqueControl_NSec_e;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_338_DSTATE = *rty_Global_TorqueControl_NSec_d;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_339_DSTATE = *rty_Global_TorqueControl_NSe_fh;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_34_DSTATE = *rty_Global_InverterSignals_I_hs;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_340_DSTATE = *rty_Global_TorqueControl_NSec_k;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_341_DSTATE = *rty_Global_TorqueControl_NSe_ku;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_342_DSTATE = *rty_Global_TorqueControl_NSec_m;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_343_DSTATE = *rty_Global_TorqueControl_NSe_fb;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_344_DSTATE = *rty_Global_TorqueControl_NSec_i;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_345_DSTATE = *rty_Global_TorqueControl_NSec_n;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_346_DSTATE = *rty_Global_TorqueControl_NSe_i3;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_347_DSTATE = *rty_Global_TorqueControl_ETotal;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_348_DSTATE = *rty_Global_TorqueControl_ESec_h;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_349_DSTATE = *rty_Global_TorqueControl_ESec_i;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_35_DSTATE = *rty_Global_InverterSignals_In_b;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_350_DSTATE = *rty_Global_TorqueControl_ESec_d;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_351_DSTATE = *rty_Global_TorqueControl_MTract;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_352_DSTATE = *rty_Global_TorqueControl_MTra_o;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_353_DSTATE = *rty_Global_TorqueControl_MTra_n;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_354_DSTATE = *rty_Global_TorqueControl_MTra_f;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_355_DSTATE = *rty_Global_TorqueControl_ESe_dn;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_356_DSTATE = *rty_Global_TorqueControl_ESe_im;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_357_DSTATE = *rty_Global_TorqueControl_ESec_c;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_358_DSTATE = *rty_Global_TorqueControl_ESec_n;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_359_DSTATE = *rty_Global_TorqueControl_ESec_j;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_36_DSTATE = *rty_Global_InverterSignals_I_ng;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_360_DSTATE = *rty_Global_TorqueControl_ESec_e;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_361_DSTATE = *rty_Global_TorqueControl_ESec_a;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_362_DSTATE = *rty_Global_TorqueControl_ESec_l;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_363_DSTATE = *rty_Global_TorqueControl_ESec_m;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_364_DSTATE = *rty_Global_TorqueControl_MFLFin;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_365_DSTATE = *rty_Global_TorqueControl_MFRFin;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_366_DSTATE = *rty_Global_TorqueControl_MRLFin;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_367_DSTATE = *rty_Global_TorqueControl_MRRFin;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_368_DSTATE = *rty_Global_TorqueControl_MTot_i;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_369_DSTATE = *rty_Global_TorqueControl_PDis_f;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_37_DSTATE = *rty_Global_InverterSignals__gye;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_38_DSTATE = *rty_Global_InverterSignals_I_go;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_39_DSTATE = *rty_Global_InverterSignals_I_ep;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_4_DSTATE = *rty_Global_InverterSignals_In_e;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_41_DSTATE = *rty_Global_InverterSignals_I_bn;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_42_DSTATE = *rty_Global_InverterSignals_I_c4;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_43_DSTATE = *rty_Global_InverterSignals_In_l;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_44_DSTATE = *rty_Global_InverterSignals_I_p4;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_45_DSTATE = *rty_Global_InverterSignals_I_py;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_46_DSTATE = *rty_Global_InverterSignals_I_en;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_47_DSTATE = *rty_Global_InverterSignals_I_px;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_48_DSTATE = *rty_Global_InverterSignals_I_mk;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_49_DSTATE = *rty_Global_InverterSignals_I_nk;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_5_DSTATE = *rty_Global_InverterSignals_In_n;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_50_DSTATE = *rty_Global_InverterSignals_I_fp;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_51_DSTATE = *rty_Global_InverterSignals_I_df;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_52_DSTATE = *rty_Global_InverterSignals_I_mw;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_57_DSTATE = *rty_Global_SensorSignals_VDampe;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_58_DSTATE = *rty_Global_SensorSignals_VDam_h;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_59_DSTATE = *rty_Global_SensorSignals_NDispl;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_6_DSTATE = *rty_Global_InverterSignals_In_f;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_60_DSTATE = *rty_Global_SensorSignals_VSteer;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_61_DSTATE = *rty_Global_SensorSignals_VThrot;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_62_DSTATE = *rty_Global_SensorSignals_VThr_a;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_63_DSTATE = *rty_Global_SensorSignals_BSteer;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_64_DSTATE = *rty_Global_SensorSignals_BSte_b;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_65_DSTATE = *rty_Global_SensorSignals_BSte_d;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_66_DSTATE = *rty_Global_SensorSignals_BSte_j;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_67_DSTATE = *rty_Global_SensorSignals_NPageS;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_68_DSTATE = *rty_Global_SensorSignals_NParam;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_69_DSTATE = *rty_Global_SensorSignals_NEvent;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_7_DSTATE = *rty_Global_InverterSignals_In_k;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_70_DSTATE = *rty_Global_SensorSignals_VRegen;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_71_DSTATE = *rty_Global_SensorSignals_VReg_h;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_72_DSTATE = *rty_Global_SensorSignals_VBrake;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_73_DSTATE = *rty_Global_SensorSignals_VBra_e;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_75_DSTATE = *rty_Global_GPSIMUSignals_gVerti;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_76_DSTATE = *rty_Global_GPSIMUSignals_vLongi;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_8_DSTATE = *rty_Global_InverterSignals_In_h;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_80_DSTATE = *rty_Global_BMSSignals_VCellMax;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_81_DSTATE = *rty_Global_BMSSignals_VCellDelt;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_82_DSTATE = *rty_Global_BMSSignals_VCellMin;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_83_DSTATE = *rty_Global_BMSSignals_VCellAver;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_84_DSTATE = *rty_Global_BMSSignals_TCellMax;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_85_DSTATE = *rty_Global_BMSSignals_IBMSDLC;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_86_DSTATE = *rty_Global_BMSSignals_TCellMin;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_87_DSTATE = *rty_Global_BMSSignals_IBMSHallE;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_88_DSTATE = *rty_Global_BMSSignals_VDCAccumu;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_89_DSTATE = *rty_Global_BMSSignals_RCellAver;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_9_DSTATE = *rty_Global_InverterSignals_I_kw;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_90_DSTATE = *rty_Global_BMSSignals_BBalancin;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_91_DSTATE = *rty_Global_BMSSignals_BBMSP0A0C;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_92_DSTATE = *rty_Global_BMSSignals_BBMSP0A0E;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_93_DSTATE = *rty_Global_BMSSignals_BBMSP0A10;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_94_DSTATE = *rty_Global_BMSSignals_BBMSP0A80;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_95_DSTATE = *rty_Global_BMSSignals_BBMSP0AC0;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_96_DSTATE = *rty_Global_BMSSignals_BBMSP0AFA;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_98_DSTATE = *rty_Global_Systems_rThrottlePed;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_10_DSTATE = *rty_Global_InverterSignals_I_ka;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_101_DSTATE = *rty_Global_Systems_tThrottleErr;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_102_DSTATE = *rty_Global_Systems_pBrakeF;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_103_DSTATE = *rty_Global_Systems_pBrakeR;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_105_DSTATE = *rty_Global_Systems_tBrakeError;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_107_DSTATE = *rty_Global_Systems_pBrakeMax;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_108_DSTATE = *rty_Global_Systems_BBrakeLight;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_109_DSTATE = *rty_Global_Systems_BPedalOverla;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_110_DSTATE = *rty_Global_Systems_tPedalOverla;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_112_DSTATE = *rty_Global_Systems_tAppsTimer;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_113_DSTATE = *rty_Global_Systems_rSteeringAng;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_114_DSTATE = *rty_Global_Systems_aSteeringAng;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_115_DSTATE = *rty_Global_Systems_rRegenPaddle;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_117_DSTATE = *rty_Global_Systems_xDamperFL;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_118_DSTATE = *rty_Global_Systems_xDamperFR;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_119_DSTATE = *rty_Global_Systems_xDamperRL;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_12_DSTATE = *rty_Global_InverterSignals_I_el;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_120_DSTATE = *rty_Global_Systems_xDamperRR;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_121_DSTATE = *rty_Global_Systems_BxDamperFLOk;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_122_DSTATE = *rty_Global_Systems_BxDamperFROk;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_123_DSTATE = *rty_Global_Systems_BxDamperRLOk;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_124_DSTATE = *rty_Global_Systems_BxDamperRROk;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_125_DSTATE = *rty_Global_Systems_BInverterErr;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_126_DSTATE = *rty_Global_Systems_BInverterE_d;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_127_DSTATE = *rty_Global_Systems_BIMUOK;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_128_DSTATE = *rty_Global_Systems_BIMUError;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_129_DSTATE = *rty_Global_Systems_vChassis;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_130_DSTATE = *rty_Global_Systems_sChassis;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_131_DSTATE = *rty_Global_Systems_BPageUp;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_132_DSTATE = *rty_Global_Systems_BPageDown;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_133_DSTATE = *rty_Global_Systems_BInvLVOn;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_134_DSTATE = *rty_Global_Systems_BCalibration;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_135_DSTATE = *rty_Global_Systems_BReadyToDriv;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_136_DSTATE = *rty_Global_Systems_BErrorReset;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_137_DSTATE = *rty_Global_Systems_BTVOn;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_138_DSTATE = *rty_Global_Systems_BTCOn;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_139_DSTATE = *rty_Global_Systems_BDrivetrainC;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_140_DSTATE = *rty_Global_Systems_BEMSOn;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_141_DSTATE = *rty_Global_Systems_BSpinningMod;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_142_DSTATE = *rty_Global_Systems_NThrottleMap;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_143_DSTATE = *rty_Global_Systems_PDischargeMa;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_144_DSTATE = *rty_Global_Systems_rTorqueSplit;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_145_DSTATE = *rty_Global_Systems_PRegenMax;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_146_DSTATE = *rty_Global_Systems_rTVMultiplie;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_147_DSTATE = *rty_Global_Systems_PEngineBraki;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_148_DSTATE = *rty_Global_Systems_rEngineBraki;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_149_DSTATE = *rty_Global_Systems_BDataMark;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_15_DSTATE = *rty_Global_InverterSignals_In_o;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_150_DSTATE = *rty_Global_Systems_rGrip;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_151_DSTATE = *rty_Global_Systems_EOffset;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_152_DSTATE = *rty_Global_Systems_NTCKdSelecto;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_153_DSTATE = *rty_Global_Systems_MRegenMax;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_154_DSTATE = *rty_Global_Systems_NEventMode;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_155_DSTATE = *rty_Global_Systems_NPCKpSelecto;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_158_DSTATE = *rty_Global_Systems_BAccuFanOn;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_159_DSTATE = *rty_Global_Systems_BMotorRBHFan;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_16_DSTATE = *rty_Global_InverterSignals_In_p;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_160_DSTATE = *rty_Global_Systems_BInverterFan;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_161_DSTATE = *rty_Global_Systems_BPCComplete;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_162_DSTATE = *rty_Global_Systems_PActual;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_163_DSTATE = *rty_Global_Systems_rSOC;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_164_DSTATE = *rty_Global_Systems_rSOE;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_165_DSTATE = *rty_Global_Systems_PEnergyMeter;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_166_DSTATE = *rty_Global_Systems_BOverpower;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_167_DSTATE = *rty_Global_Systems_tIMUError;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_168_DSTATE = *rty_Global_Systems_BTVOnEM;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_169_DSTATE = *rty_Global_Systems_BTCOnEM;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_17_DSTATE = *rty_Global_InverterSignals_In_d;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_170_DSTATE = *rty_Global_Systems_BDrivetrai_b;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_171_DSTATE = *rty_Global_Systems_BEMSOnEM;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_172_DSTATE = *rty_Global_Systems_BSpinningM_j;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_173_DSTATE = *rty_Global_Systems_rTVMultipl_l;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_174_DSTATE = *rty_Global_Systems_rEngineBra_b;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_175_DSTATE = *rty_Global_Systems_NThrottleM_a;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_176_DSTATE = *rty_Global_Systems_PDischarge_j;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_177_DSTATE = *rty_Global_Systems_rTorqueSpl_n;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_178_DSTATE = *rty_Global_Systems_PRegenMaxEM;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_179_DSTATE = *rty_Global_Systems_PEngineBra_a;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_18_DSTATE = *rty_Global_InverterSignals_I_dm;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_180_DSTATE = *rty_Global_Systems_BTVOnOW;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_181_DSTATE = *rty_Global_Systems_BTCOnOW;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_182_DSTATE = *rty_Global_Systems_BDrivetrai_p;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_183_DSTATE = *rty_Global_Systems_BEMSOnOW;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_184_DSTATE = *rty_Global_Systems_BSpinningM_k;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_185_DSTATE = *rty_Global_Systems_rTVMultipl_h;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_186_DSTATE = *rty_Global_Systems_rEngineBra_e;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_187_DSTATE = *rty_Global_Systems_NThrottleM_g;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_188_DSTATE = *rty_Global_Systems_PDischarge_d;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_189_DSTATE = *rty_Global_Systems_rTorqueSpl_a;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_19_DSTATE = *rty_Global_InverterSignals_I_gy;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_190_DSTATE = *rty_Global_Systems_PRegenMaxOW;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_191_DSTATE = *rty_Global_Systems_PEngineBra_i;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_192_DSTATE = *rty_Global_Systems_MMotorMaxFL;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_193_DSTATE = *rty_Global_Systems_MMotorMaxFR;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_194_DSTATE = *rty_Global_Systems_MMotorMaxRL;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_195_DSTATE = *rty_Global_Systems_MMotorMaxRR;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_196_DSTATE = *rty_Global_Stateflow_NCarState;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_197_DSTATE = *rty_Global_Stateflow_BReadyToDr;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_199_DSTATE = *rty_Global_Stateflow_NBMSState;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_2_DSTATE = *rty_Global_InverterSignals_In_g;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_20_DSTATE = *rty_Global_InverterSignals_In_m;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_200_DSTATE = *rty_Global_Stateflow_NInvState;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_201_DSTATE = *rty_Global_Stateflow_BHVOn;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_202_DSTATE = *rty_Global_Stateflow_BInvOnRLOu;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_203_DSTATE = *rty_Global_Stateflow_BInvOnRROu;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_204_DSTATE = *rty_Global_Stateflow_BInvOnFLOu;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_205_DSTATE = *rty_Global_Stateflow_BInvOnFROu;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_206_DSTATE = *rty_Global_Stateflow_BInvDCOnRL;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_207_DSTATE = *rty_Global_Stateflow_BInvDCOnRR;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_208_DSTATE = *rty_Global_Stateflow_BInvDCOnFL;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_209_DSTATE = *rty_Global_Stateflow_BInvDCOnFR;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_21_DSTATE = *rty_Global_InverterSignals_I_pd;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_210_DSTATE = *rty_Global_Stateflow_BInvEnable;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_211_DSTATE = *rty_Global_Stateflow_BInvEnab_p;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_212_DSTATE = *rty_Global_Stateflow_BInvEnab_o;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_213_DSTATE = *rty_Global_Stateflow_BInvEnab_h;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_214_DSTATE = *rty_Global_Stateflow_BInvErrorR;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_215_DSTATE = *rty_Global_Stateflow_BInvErro_n;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_216_DSTATE = *rty_Global_Stateflow_BInvErro_c;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_217_DSTATE = *rty_Global_Stateflow_BInvErro_h;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_218_DSTATE = *rty_Global_Stateflow_MTargetTor;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_219_DSTATE = *rty_Global_Stateflow_MTargetT_j;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_22_DSTATE = *rty_Global_InverterSignals_In_i;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_220_DSTATE = *rty_Global_Stateflow_MTargetT_l;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_221_DSTATE = *rty_Global_Stateflow_MTargetT_g;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_222_DSTATE = *rty_Global_Stateflow_MTorqueLim;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_223_DSTATE = *rty_Global_Stateflow_MTorqueL_m;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_224_DSTATE = *rty_Global_Stateflow_MTorqueL_h;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_225_DSTATE = *rty_Global_Stateflow_MTorqueL_a;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_226_DSTATE = *rty_Global_Stateflow_MTorqueL_l;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_227_DSTATE = *rty_Global_Stateflow_MTorqueL_g;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_228_DSTATE = *rty_Global_Stateflow_MTorque_lx;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_229_DSTATE = *rty_Global_Stateflow_MTorque_h0;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_23_DSTATE = *rty_Global_InverterSignals_I_pr;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_230_DSTATE = *rty_Global_Limitations_BDischar;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_231_DSTATE = *rty_Global_Limitations_PInvTemp;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_232_DSTATE = *rty_Global_Limitations_PInvTe_g;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_233_DSTATE = *rty_Global_Limitations_PInvTe_m;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_234_DSTATE = *rty_Global_Limitations_PInvTe_i;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_235_DSTATE = *rty_Global_Limitations_PInvT_if;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_236_DSTATE = *rty_Global_Limitations_PMotorTe;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_237_DSTATE = *rty_Global_Limitations_PMotor_i;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_238_DSTATE = *rty_Global_Limitations_PMotor_a;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_239_DSTATE = *rty_Global_Limitations_PMotor_c;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_240_DSTATE = *rty_Global_Limitations_PMotor_f;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_241_DSTATE = *rty_Global_Limitations_PTSTempe;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_242_DSTATE = *rty_Global_Limitations_PTSTem_d;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_243_DSTATE = *rty_Global_Limitations_PTSTem_g;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_244_DSTATE = *rty_Global_Limitations_PTSTem_h;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_245_DSTATE = *rty_Global_Limitations_PHighCel;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_246_DSTATE = *rty_Global_Limitations_PLowCell;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_247_DSTATE = *rty_Global_Limitations_PHighC_n;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_248_DSTATE = *rty_Global_Limitations_PSOCDisc;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_249_DSTATE = *rty_Global_Limitations_PSOCRege;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_25_DSTATE = *rty_Global_InverterSignals_I_o3;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_250_DSTATE = *rty_Global_Limitations_rSpeedRe;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_251_DSTATE = *rty_Global_Limitations_rSpeed_h;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_252_DSTATE = *rty_Global_Limitations_rSpeed_o;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_253_DSTATE = *rty_Global_Limitations_rSpee_hw;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_254_DSTATE = *rty_Global_Limitations_BSpeedDe;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_255_DSTATE = *rty_Global_Limitations_PDischar;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_256_DSTATE = *rty_Global_Limitations_PRegenDe;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_257_DSTATE = *rty_Global_TorqueControl_MDrive;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_258_DSTATE = *rty_Global_TorqueControl_PRegen;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_259_DSTATE = *rty_Global_TorqueControl_MDri_d;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_260_DSTATE = *rty_Global_TorqueControl_PDisch;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_261_DSTATE = *rty_Global_TorqueControl_PPCInt;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_262_DSTATE = *rty_Global_TorqueControl_PPCPro;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_263_DSTATE = *rty_Global_TorqueControl_MPCDis;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_264_DSTATE = *rty_Global_TorqueControl_PReg_h;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_265_DSTATE = *rty_Global_TorqueControl_PPCI_l;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_266_DSTATE = *rty_Global_TorqueControl_PPCP_j;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_267_DSTATE = *rty_Global_TorqueControl_MPCReg;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_268_DSTATE = *rty_Global_TorqueControl_PPCDis;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_269_DSTATE = *rty_Global_TorqueControl_PPCReg;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_270_DSTATE = *rty_Global_TorqueControl_MDisch;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_271_DSTATE = *rty_Global_TorqueControl_MRegen;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_272_DSTATE = *rty_Global_TorqueControl_MTotal;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_273_DSTATE = *rty_Global_TorqueControl_BEMSDr;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_274_DSTATE = *rty_Global_TorqueControl_BEMS_i;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_275_DSTATE = *rty_Global_TorqueControl_BEMS_b;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_276_DSTATE = *rty_Global_TorqueControl_NLap;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_277_DSTATE = *rty_Global_TorqueControl_NSecto;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_278_DSTATE = *rty_Global_TorqueControl_NSec_f;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_279_DSTATE = *rty_Global_TorqueControl_ESecto;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_28_DSTATE = *rty_Global_InverterSignals_In_j;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_280_DSTATE = *rty_Global_TorqueControl_ERemai;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_281_DSTATE = *rty_Global_TorqueControl_EBudge;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_282_DSTATE = *rty_Global_TorqueControl_sSecto;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_283_DSTATE = *rty_Global_TorqueControl_rSlipR;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_284_DSTATE = *rty_Global_TorqueControl_rSli_i;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_285_DSTATE = *rty_Global_TorqueControl_rSli_d;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_286_DSTATE = *rty_Global_TorqueControl_rSli_j;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_287_DSTATE = *rty_Global_TorqueControl_FLongi;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_288_DSTATE = *rty_Global_TorqueControl_FTyreV;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_289_DSTATE = *rty_Global_TorqueControl_FTyr_c;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_29_DSTATE = *rty_Global_InverterSignals_I_po;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_290_DSTATE = *rty_Global_TorqueControl_FTyr_p;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_291_DSTATE = *rty_Global_TorqueControl_FTyr_j;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_292_DSTATE = *rty_Global_TorqueControl_aSlipA;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_293_DSTATE = *rty_Global_TorqueControl_aSli_e;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_294_DSTATE = *rty_Global_TorqueControl_aSli_d;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_295_DSTATE = *rty_Global_TorqueControl_aSli_k;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_296_DSTATE = *rty_Global_TorqueControl_aCambe;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_297_DSTATE = *rty_Global_TorqueControl_aCam_k;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_298_DSTATE = *rty_Global_TorqueControl_aCam_a;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_299_DSTATE = *rty_Global_TorqueControl_aCam_j;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_3_DSTATE = *rty_Global_InverterSignals_In_c;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_30_DSTATE = *rty_Global_InverterSignals_I_m3;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_300_DSTATE = *rty_Global_TorqueControl_FTotal;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_301_DSTATE = *rty_Global_TorqueControl_FLater;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_302_DSTATE = *rty_Global_TorqueControl_FLat_l;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_303_DSTATE = *rty_Global_TorqueControl_FTot_c;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_304_DSTATE = *rty_Global_TorqueControl_FDownf;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_305_DSTATE = *rty_Global_TorqueControl_FDow_i;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_306_DSTATE = *rty_Global_TorqueControl_aCam_b;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_307_DSTATE = *rty_Global_TorqueControl_aCa_k3;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_308_DSTATE = localB->aCamberGainRollF_n;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_309_DSTATE = localB->aCamberGainRollR_j;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_31_DSTATE = *rty_Global_InverterSignals_I_p2;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_310_DSTATE = *rty_Global_TorqueControl_xHeave;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_311_DSTATE = *rty_Global_TorqueControl_xHea_i;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_312_DSTATE = *rty_Global_TorqueControl_aCam_e;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_313_DSTATE = *rty_Global_TorqueControl_aCam_p;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_314_DSTATE = *rty_Global_TorqueControl_aRollA;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_315_DSTATE = *rty_Global_TorqueControl_nYawRa;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_316_DSTATE = *rty_Global_TorqueControl_BTVOK;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_317_DSTATE = *rty_Global_TorqueControl_MTorqu;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_318_DSTATE = *rty_Global_TorqueControl_MTor_h;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_319_DSTATE = *rty_Global_TorqueControl_MTor_k;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_32_DSTATE = *rty_Global_InverterSignals_I_i3;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_320_DSTATE = *rty_Global_TorqueControl_MTo_kw;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_321_DSTATE = *rty_Global_TorqueControl_rSplit;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_322_DSTATE = *rty_Global_TorqueControl_MTor_n;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_323_DSTATE = *rty_Global_TorqueControl_MTor_j;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_324_DSTATE = *rty_Global_TorqueControl_MTo_nk;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_325_DSTATE = *rty_Global_TorqueControl_MTor_g;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_326_DSTATE = *rty_Global_TorqueControl_rSli_o;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_327_DSTATE = *rty_Global_TorqueControl_NTract;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_328_DSTATE = *rty_Global_TorqueControl_NTra_p;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_329_DSTATE = *rty_Global_TorqueControl_NTra_g;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_33_DSTATE = *rty_Global_InverterSignals__ka1;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_330_DSTATE = *rty_Global_TorqueControl_NTr_go;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_331_DSTATE = *rty_Global_TorqueControl_NABSMu;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_332_DSTATE = *rty_Global_TorqueControl_NABS_l;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_333_DSTATE = *rty_Global_TorqueControl_NABS_c;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_334_DSTATE = *rty_Global_TorqueControl_NABS_n;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_335_DSTATE = *rty_Global_TorqueControl_NSec_a;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_336_DSTATE = *rty_Global_TorqueControl_NSec_b;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_337_DSTATE = *rty_Global_TorqueControl_NSec_e;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_338_DSTATE = *rty_Global_TorqueControl_NSec_d;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_339_DSTATE = *rty_Global_TorqueControl_NSe_fh;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_34_DSTATE = *rty_Global_InverterSignals_I_hs;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_340_DSTATE = *rty_Global_TorqueControl_NSec_k;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_341_DSTATE = *rty_Global_TorqueControl_NSe_ku;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_342_DSTATE = *rty_Global_TorqueControl_NSec_m;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_343_DSTATE = *rty_Global_TorqueControl_NSe_fb;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_344_DSTATE = *rty_Global_TorqueControl_NSec_i;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_345_DSTATE = *rty_Global_TorqueControl_NSec_n;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_346_DSTATE = *rty_Global_TorqueControl_NSe_i3;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_347_DSTATE = *rty_Global_TorqueControl_ETotal;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_348_DSTATE = *rty_Global_TorqueControl_ESec_h;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_349_DSTATE = *rty_Global_TorqueControl_ESec_i;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_35_DSTATE = *rty_Global_InverterSignals_In_b;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_350_DSTATE = *rty_Global_TorqueControl_ESec_d;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_351_DSTATE = *rty_Global_TorqueControl_MTract;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_352_DSTATE = *rty_Global_TorqueControl_MTra_o;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_353_DSTATE = *rty_Global_TorqueControl_MTra_n;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_354_DSTATE = *rty_Global_TorqueControl_MTra_f;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_355_DSTATE = *rty_Global_TorqueControl_ESe_dn;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_356_DSTATE = *rty_Global_TorqueControl_ESe_im;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_357_DSTATE = *rty_Global_TorqueControl_ESec_c;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_358_DSTATE = *rty_Global_TorqueControl_ESec_n;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_359_DSTATE = *rty_Global_TorqueControl_ESec_j;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_36_DSTATE = *rty_Global_InverterSignals_I_ng;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_360_DSTATE = *rty_Global_TorqueControl_ESec_e;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_361_DSTATE = *rty_Global_TorqueControl_ESec_a;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_362_DSTATE = *rty_Global_TorqueControl_ESec_l;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_363_DSTATE = *rty_Global_TorqueControl_ESec_m;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_364_DSTATE = *rty_Global_TorqueControl_MFLFin;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_365_DSTATE = *rty_Global_TorqueControl_MFRFin;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_366_DSTATE = *rty_Global_TorqueControl_MRLFin;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_367_DSTATE = *rty_Global_TorqueControl_MRRFin;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_368_DSTATE = *rty_Global_TorqueControl_MTot_i;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_369_DSTATE = *rty_Global_TorqueControl_PDis_f;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_38_DSTATE = *rty_Global_InverterSignals_I_go;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_4_DSTATE = *rty_Global_InverterSignals_In_e;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_41_DSTATE = *rty_Global_InverterSignals_I_bn;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_42_DSTATE = *rty_Global_InverterSignals_I_c4;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_43_DSTATE = *rty_Global_InverterSignals_In_l;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_44_DSTATE = *rty_Global_InverterSignals_I_p4;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_45_DSTATE = *rty_Global_InverterSignals_I_py;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_46_DSTATE = *rty_Global_InverterSignals_I_en;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_47_DSTATE = *rty_Global_InverterSignals_I_px;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_48_DSTATE = *rty_Global_InverterSignals_I_mk;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_49_DSTATE = *rty_Global_InverterSignals_I_nk;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_5_DSTATE = *rty_Global_InverterSignals_In_n;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_51_DSTATE = *rty_Global_InverterSignals_I_df;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_57_DSTATE = *rty_Global_SensorSignals_VDampe;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_58_DSTATE = *rty_Global_SensorSignals_VDam_h;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_59_DSTATE = *rty_Global_SensorSignals_NDispl;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_6_DSTATE = *rty_Global_InverterSignals_In_f;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_60_DSTATE = *rty_Global_SensorSignals_VSteer;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_61_DSTATE = *rty_Global_SensorSignals_VThrot;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_62_DSTATE = *rty_Global_SensorSignals_VThr_a;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_63_DSTATE = *rty_Global_SensorSignals_BSteer;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_64_DSTATE = *rty_Global_SensorSignals_BSte_b;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_65_DSTATE = *rty_Global_SensorSignals_BSte_d;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_66_DSTATE = *rty_Global_SensorSignals_BSte_j;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_67_DSTATE = *rty_Global_SensorSignals_NPageS;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_68_DSTATE = *rty_Global_SensorSignals_NParam;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_69_DSTATE = *rty_Global_SensorSignals_NEvent;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_7_DSTATE = *rty_Global_InverterSignals_In_k;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_70_DSTATE = *rty_Global_SensorSignals_VRegen;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_71_DSTATE = *rty_Global_SensorSignals_VReg_h;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_72_DSTATE = *rty_Global_SensorSignals_VBrake;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_73_DSTATE = *rty_Global_SensorSignals_VBra_e;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_74_DSTATE = *rty_Global_GPSIMUSignals_vLater;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_75_DSTATE = *rty_Global_GPSIMUSignals_gVerti;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_76_DSTATE = *rty_Global_GPSIMUSignals_vLongi;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_77_DSTATE = *rty_Global_GPSIMUSignals_gLater;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_78_DSTATE = *rty_Global_GPSIMUSignals_gLongi;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_79_DSTATE = *rty_Global_GPSIMUSignals_nYawRa;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_8_DSTATE = *rty_Global_InverterSignals_In_h;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_81_DSTATE = *rty_Global_BMSSignals_VCellDelt;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_83_DSTATE = *rty_Global_BMSSignals_VCellAver;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_85_DSTATE = *rty_Global_BMSSignals_IBMSDLC;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_86_DSTATE = *rty_Global_BMSSignals_TCellMin;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_87_DSTATE = *rty_Global_BMSSignals_IBMSHallE;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_89_DSTATE = *rty_Global_BMSSignals_RCellAver;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_9_DSTATE = *rty_Global_InverterSignals_I_kw;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_90_DSTATE = *rty_Global_BMSSignals_BBalancin;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_91_DSTATE = *rty_Global_BMSSignals_BBMSP0A0C;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_92_DSTATE = *rty_Global_BMSSignals_BBMSP0A0E;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_93_DSTATE = *rty_Global_BMSSignals_BBMSP0A10;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_94_DSTATE = *rty_Global_BMSSignals_BBMSP0A80;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_95_DSTATE = *rty_Global_BMSSignals_BBMSP0AC0;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_96_DSTATE = *rty_Global_BMSSignals_BBMSP0AFA;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_98_DSTATE = *rty_Global_Systems_rThrottlePed;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_99_DSTATE = *rty_Global_Systems_rThrottleP_c;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_100_DSTATE = *rty_Global_Systems_BThrottleErr;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_101_DSTATE = *rty_Global_Systems_tThrottleErr;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_105_DSTATE = *rty_Global_Systems_tBrakeError;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_106_DSTATE = *rty_Global_Systems_BBrakeOn;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_107_DSTATE = *rty_Global_Systems_pBrakeMax;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_108_DSTATE = *rty_Global_Systems_BBrakeLight;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_109_DSTATE = *rty_Global_Systems_BPedalOverla;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_11_DSTATE = *rty_Global_InverterSignals__kaa;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_110_DSTATE = *rty_Global_Systems_tPedalOverla;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_111_DSTATE = *rty_Global_Systems_BAppsOK;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_112_DSTATE = *rty_Global_Systems_tAppsTimer;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_113_DSTATE = *rty_Global_Systems_rSteeringAng;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_114_DSTATE = *rty_Global_Systems_aSteeringAng;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_115_DSTATE = *rty_Global_Systems_rRegenPaddle;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_116_DSTATE = *rty_Global_Systems_BRegenOn;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_117_DSTATE = *rty_Global_Systems_xDamperFL;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_118_DSTATE = *rty_Global_Systems_xDamperFR;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_119_DSTATE = *rty_Global_Systems_xDamperRL;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_120_DSTATE = *rty_Global_Systems_xDamperRR;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_121_DSTATE = *rty_Global_Systems_BxDamperFLOk;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_122_DSTATE = *rty_Global_Systems_BxDamperFROk;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_123_DSTATE = *rty_Global_Systems_BxDamperRLOk;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_124_DSTATE = *rty_Global_Systems_BxDamperRROk;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_125_DSTATE = *rty_Global_Systems_BInverterErr;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_126_DSTATE = *rty_Global_Systems_BInverterE_d;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_127_DSTATE = *rty_Global_Systems_BIMUOK;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_128_DSTATE = *rty_Global_Systems_BIMUError;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_129_DSTATE = *rty_Global_Systems_vChassis;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_13_DSTATE = *rty_Global_InverterSignals_I_cj;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_130_DSTATE = *rty_Global_Systems_sChassis;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_131_DSTATE = *rty_Global_Systems_BPageUp;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_132_DSTATE = *rty_Global_Systems_BPageDown;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_133_DSTATE = *rty_Global_Systems_BInvLVOn;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_134_DSTATE = *rty_Global_Systems_BCalibration;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_137_DSTATE = *rty_Global_Systems_BTVOn;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_138_DSTATE = *rty_Global_Systems_BTCOn;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_139_DSTATE = *rty_Global_Systems_BDrivetrainC;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_140_DSTATE = *rty_Global_Systems_BEMSOn;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_141_DSTATE = *rty_Global_Systems_BSpinningMod;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_142_DSTATE = *rty_Global_Systems_NThrottleMap;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_143_DSTATE = *rty_Global_Systems_PDischargeMa;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_144_DSTATE = *rty_Global_Systems_rTorqueSplit;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_145_DSTATE = *rty_Global_Systems_PRegenMax;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_146_DSTATE = *rty_Global_Systems_rTVMultiplie;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_147_DSTATE = *rty_Global_Systems_PEngineBraki;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_148_DSTATE = *rty_Global_Systems_rEngineBraki;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_149_DSTATE = *rty_Global_Systems_BDataMark;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_15_DSTATE = *rty_Global_InverterSignals_In_o;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_150_DSTATE = *rty_Global_Systems_rGrip;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_151_DSTATE = *rty_Global_Systems_EOffset;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_152_DSTATE = *rty_Global_Systems_NTCKdSelecto;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_153_DSTATE = *rty_Global_Systems_MRegenMax;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_154_DSTATE = *rty_Global_Systems_NEventMode;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_155_DSTATE = *rty_Global_Systems_NPCKpSelecto;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_156_DSTATE = *rty_Global_Systems_TMotorMax;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_157_DSTATE = *rty_Global_Systems_TInvMax;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_158_DSTATE = *rty_Global_Systems_BAccuFanOn;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_159_DSTATE = *rty_Global_Systems_BMotorRBHFan;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_160_DSTATE = *rty_Global_Systems_BInverterFan;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_161_DSTATE = *rty_Global_Systems_BPCComplete;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_162_DSTATE = *rty_Global_Systems_PActual;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_163_DSTATE = *rty_Global_Systems_rSOC;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_164_DSTATE = *rty_Global_Systems_rSOE;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_165_DSTATE = *rty_Global_Systems_PEnergyMeter;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_166_DSTATE = *rty_Global_Systems_BOverpower;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_167_DSTATE = *rty_Global_Systems_tIMUError;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_168_DSTATE = *rty_Global_Systems_BTVOnEM;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_169_DSTATE = *rty_Global_Systems_BTCOnEM;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_17_DSTATE = *rty_Global_InverterSignals_In_d;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_170_DSTATE = *rty_Global_Systems_BDrivetrai_b;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_171_DSTATE = *rty_Global_Systems_BEMSOnEM;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_172_DSTATE = *rty_Global_Systems_BSpinningM_j;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_173_DSTATE = *rty_Global_Systems_rTVMultipl_l;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_174_DSTATE = *rty_Global_Systems_rEngineBra_b;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_175_DSTATE = *rty_Global_Systems_NThrottleM_a;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_176_DSTATE = *rty_Global_Systems_PDischarge_j;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_177_DSTATE = *rty_Global_Systems_rTorqueSpl_n;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_178_DSTATE = *rty_Global_Systems_PRegenMaxEM;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_179_DSTATE = *rty_Global_Systems_PEngineBra_a;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_180_DSTATE = *rty_Global_Systems_BTVOnOW;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_181_DSTATE = *rty_Global_Systems_BTCOnOW;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_182_DSTATE = *rty_Global_Systems_BDrivetrai_p;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_183_DSTATE = *rty_Global_Systems_BEMSOnOW;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_184_DSTATE = *rty_Global_Systems_BSpinningM_k;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_185_DSTATE = *rty_Global_Systems_rTVMultipl_h;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_186_DSTATE = *rty_Global_Systems_rEngineBra_e;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_187_DSTATE = *rty_Global_Systems_NThrottleM_g;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_188_DSTATE = *rty_Global_Systems_PDischarge_d;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_189_DSTATE = *rty_Global_Systems_rTorqueSpl_a;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_190_DSTATE = *rty_Global_Systems_PRegenMaxOW;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_191_DSTATE = *rty_Global_Systems_PEngineBra_i;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_192_DSTATE = *rty_Global_Systems_MMotorMaxFL;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_193_DSTATE = *rty_Global_Systems_MMotorMaxFR;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_194_DSTATE = *rty_Global_Systems_MMotorMaxRL;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_195_DSTATE = *rty_Global_Systems_MMotorMaxRR;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_196_DSTATE = *rty_Global_Stateflow_NCarState;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_197_DSTATE = *rty_Global_Stateflow_BReadyToDr;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_198_DSTATE = *rty_Global_Stateflow_BReadyTo_k;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_199_DSTATE = *rty_Global_Stateflow_NBMSState;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_2_DSTATE = *rty_Global_InverterSignals_In_g;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_200_DSTATE = *rty_Global_Stateflow_NInvState;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_201_DSTATE = *rty_Global_Stateflow_BHVOn;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_202_DSTATE = *rty_Global_Stateflow_BInvOnRLOu;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_203_DSTATE = *rty_Global_Stateflow_BInvOnRROu;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_204_DSTATE = *rty_Global_Stateflow_BInvOnFLOu;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_205_DSTATE = *rty_Global_Stateflow_BInvOnFROu;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_206_DSTATE = *rty_Global_Stateflow_BInvDCOnRL;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_207_DSTATE = *rty_Global_Stateflow_BInvDCOnRR;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_208_DSTATE = *rty_Global_Stateflow_BInvDCOnFL;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_209_DSTATE = *rty_Global_Stateflow_BInvDCOnFR;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_21_DSTATE = *rty_Global_InverterSignals_I_pd;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_210_DSTATE = *rty_Global_Stateflow_BInvEnable;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_211_DSTATE = *rty_Global_Stateflow_BInvEnab_p;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_212_DSTATE = *rty_Global_Stateflow_BInvEnab_o;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_213_DSTATE = *rty_Global_Stateflow_BInvEnab_h;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_214_DSTATE = *rty_Global_Stateflow_BInvErrorR;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_215_DSTATE = *rty_Global_Stateflow_BInvErro_n;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_216_DSTATE = *rty_Global_Stateflow_BInvErro_c;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_217_DSTATE = *rty_Global_Stateflow_BInvErro_h;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_218_DSTATE = *rty_Global_Stateflow_MTargetTor;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_219_DSTATE = *rty_Global_Stateflow_MTargetT_j;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_22_DSTATE = *rty_Global_InverterSignals_In_i;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_220_DSTATE = *rty_Global_Stateflow_MTargetT_l;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_221_DSTATE = *rty_Global_Stateflow_MTargetT_g;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_222_DSTATE = *rty_Global_Stateflow_MTorqueLim;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_223_DSTATE = *rty_Global_Stateflow_MTorqueL_m;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_224_DSTATE = *rty_Global_Stateflow_MTorqueL_h;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_225_DSTATE = *rty_Global_Stateflow_MTorqueL_a;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_226_DSTATE = *rty_Global_Stateflow_MTorqueL_l;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_227_DSTATE = *rty_Global_Stateflow_MTorqueL_g;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_228_DSTATE = *rty_Global_Stateflow_MTorque_lx;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_229_DSTATE = *rty_Global_Stateflow_MTorque_h0;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_230_DSTATE = *rty_Global_Limitations_BDischar;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_231_DSTATE = *rty_Global_Limitations_PInvTemp;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_232_DSTATE = *rty_Global_Limitations_PInvTe_g;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_233_DSTATE = *rty_Global_Limitations_PInvTe_m;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_234_DSTATE = *rty_Global_Limitations_PInvTe_i;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_235_DSTATE = *rty_Global_Limitations_PInvT_if;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_236_DSTATE = *rty_Global_Limitations_PMotorTe;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_237_DSTATE = *rty_Global_Limitations_PMotor_i;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_238_DSTATE = *rty_Global_Limitations_PMotor_a;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_239_DSTATE = *rty_Global_Limitations_PMotor_c;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_24_DSTATE = *rty_Global_InverterSignals_I_pe;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_240_DSTATE = *rty_Global_Limitations_PMotor_f;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_241_DSTATE = *rty_Global_Limitations_PTSTempe;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_242_DSTATE = *rty_Global_Limitations_PTSTem_d;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_243_DSTATE = *rty_Global_Limitations_PTSTem_g;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_244_DSTATE = *rty_Global_Limitations_PTSTem_h;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_245_DSTATE = *rty_Global_Limitations_PHighCel;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_246_DSTATE = *rty_Global_Limitations_PLowCell;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_247_DSTATE = *rty_Global_Limitations_PHighC_n;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_248_DSTATE = *rty_Global_Limitations_PSOCDisc;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_249_DSTATE = *rty_Global_Limitations_PSOCRege;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_25_DSTATE = *rty_Global_InverterSignals_I_o3;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_250_DSTATE = *rty_Global_Limitations_rSpeedRe;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_251_DSTATE = *rty_Global_Limitations_rSpeed_h;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_252_DSTATE = *rty_Global_Limitations_rSpeed_o;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_253_DSTATE = *rty_Global_Limitations_rSpee_hw;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_254_DSTATE = *rty_Global_Limitations_BSpeedDe;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_255_DSTATE = *rty_Global_Limitations_PDischar;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_256_DSTATE = *rty_Global_Limitations_PRegenDe;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_257_DSTATE = *rty_Global_TorqueControl_MDrive;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_258_DSTATE = *rty_Global_TorqueControl_PRegen;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_259_DSTATE = *rty_Global_TorqueControl_MDri_d;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_26_DSTATE = *rty_Global_InverterSignals_I_e4;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_260_DSTATE = *rty_Global_TorqueControl_PDisch;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_261_DSTATE = *rty_Global_TorqueControl_PPCInt;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_262_DSTATE = *rty_Global_TorqueControl_PPCPro;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_263_DSTATE = *rty_Global_TorqueControl_MPCDis;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_264_DSTATE = *rty_Global_TorqueControl_PReg_h;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_265_DSTATE = *rty_Global_TorqueControl_PPCI_l;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_266_DSTATE = *rty_Global_TorqueControl_PPCP_j;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_267_DSTATE = *rty_Global_TorqueControl_MPCReg;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_268_DSTATE = *rty_Global_TorqueControl_PPCDis;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_269_DSTATE = *rty_Global_TorqueControl_PPCReg;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_270_DSTATE = *rty_Global_TorqueControl_MDisch;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_271_DSTATE = *rty_Global_TorqueControl_MRegen;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_272_DSTATE = *rty_Global_TorqueControl_MTotal;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_273_DSTATE = *rty_Global_TorqueControl_BEMSDr;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_274_DSTATE = *rty_Global_TorqueControl_BEMS_i;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_275_DSTATE = *rty_Global_TorqueControl_BEMS_b;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_276_DSTATE = *rty_Global_TorqueControl_NLap;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_277_DSTATE = *rty_Global_TorqueControl_NSecto;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_278_DSTATE = *rty_Global_TorqueControl_NSec_f;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_279_DSTATE = *rty_Global_TorqueControl_ESecto;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_28_DSTATE = *rty_Global_InverterSignals_In_j;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_280_DSTATE = *rty_Global_TorqueControl_ERemai;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_281_DSTATE = *rty_Global_TorqueControl_EBudge;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_282_DSTATE = *rty_Global_TorqueControl_sSecto;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_283_DSTATE = *rty_Global_TorqueControl_rSlipR;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_284_DSTATE = *rty_Global_TorqueControl_rSli_i;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_285_DSTATE = *rty_Global_TorqueControl_rSli_d;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_286_DSTATE = *rty_Global_TorqueControl_rSli_j;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_287_DSTATE = *rty_Global_TorqueControl_FLongi;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_288_DSTATE = *rty_Global_TorqueControl_FTyreV;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_289_DSTATE = *rty_Global_TorqueControl_FTyr_c;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_290_DSTATE = *rty_Global_TorqueControl_FTyr_p;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_291_DSTATE = *rty_Global_TorqueControl_FTyr_j;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_292_DSTATE = *rty_Global_TorqueControl_aSlipA;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_293_DSTATE = *rty_Global_TorqueControl_aSli_e;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_294_DSTATE = *rty_Global_TorqueControl_aSli_d;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_295_DSTATE = *rty_Global_TorqueControl_aSli_k;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_296_DSTATE = *rty_Global_TorqueControl_aCambe;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_297_DSTATE = *rty_Global_TorqueControl_aCam_k;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_298_DSTATE = *rty_Global_TorqueControl_aCam_a;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_299_DSTATE = *rty_Global_TorqueControl_aCam_j;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_30_DSTATE = *rty_Global_InverterSignals_I_m3;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_300_DSTATE = *rty_Global_TorqueControl_FTotal;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_301_DSTATE = *rty_Global_TorqueControl_FLater;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_302_DSTATE = *rty_Global_TorqueControl_FLat_l;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_303_DSTATE = *rty_Global_TorqueControl_FTot_c;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_304_DSTATE = *rty_Global_TorqueControl_FDownf;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_305_DSTATE = *rty_Global_TorqueControl_FDow_i;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_306_DSTATE = *rty_Global_TorqueControl_aCam_b;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_307_DSTATE = *rty_Global_TorqueControl_aCa_k3;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_308_DSTATE = localB->aCamberGainRollF_n;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_309_DSTATE = localB->aCamberGainRollR_j;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_310_DSTATE = *rty_Global_TorqueControl_xHeave;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_311_DSTATE = *rty_Global_TorqueControl_xHea_i;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_312_DSTATE = *rty_Global_TorqueControl_aCam_e;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_313_DSTATE = *rty_Global_TorqueControl_aCam_p;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_314_DSTATE = *rty_Global_TorqueControl_aRollA;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_315_DSTATE = *rty_Global_TorqueControl_nYawRa;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_316_DSTATE = *rty_Global_TorqueControl_BTVOK;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_317_DSTATE = *rty_Global_TorqueControl_MTorqu;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_318_DSTATE = *rty_Global_TorqueControl_MTor_h;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_319_DSTATE = *rty_Global_TorqueControl_MTor_k;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_320_DSTATE = *rty_Global_TorqueControl_MTo_kw;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_321_DSTATE = *rty_Global_TorqueControl_rSplit;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_322_DSTATE = *rty_Global_TorqueControl_MTor_n;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_323_DSTATE = *rty_Global_TorqueControl_MTor_j;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_324_DSTATE = *rty_Global_TorqueControl_MTo_nk;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_325_DSTATE = *rty_Global_TorqueControl_MTor_g;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_326_DSTATE = *rty_Global_TorqueControl_rSli_o;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_327_DSTATE = *rty_Global_TorqueControl_NTract;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_328_DSTATE = *rty_Global_TorqueControl_NTra_p;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_329_DSTATE = *rty_Global_TorqueControl_NTra_g;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_330_DSTATE = *rty_Global_TorqueControl_NTr_go;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_331_DSTATE = *rty_Global_TorqueControl_NABSMu;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_332_DSTATE = *rty_Global_TorqueControl_NABS_l;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_333_DSTATE = *rty_Global_TorqueControl_NABS_c;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_334_DSTATE = *rty_Global_TorqueControl_NABS_n;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_335_DSTATE = *rty_Global_TorqueControl_NSec_a;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_336_DSTATE = *rty_Global_TorqueControl_NSec_b;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_337_DSTATE = *rty_Global_TorqueControl_NSec_e;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_338_DSTATE = *rty_Global_TorqueControl_NSec_d;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_339_DSTATE = *rty_Global_TorqueControl_NSe_fh;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_34_DSTATE = *rty_Global_InverterSignals_I_hs;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_340_DSTATE = *rty_Global_TorqueControl_NSec_k;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_341_DSTATE = *rty_Global_TorqueControl_NSe_ku;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_342_DSTATE = *rty_Global_TorqueControl_NSec_m;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_343_DSTATE = *rty_Global_TorqueControl_NSe_fb;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_344_DSTATE = *rty_Global_TorqueControl_NSec_i;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_345_DSTATE = *rty_Global_TorqueControl_NSec_n;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_346_DSTATE = *rty_Global_TorqueControl_NSe_i3;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_347_DSTATE = *rty_Global_TorqueControl_ETotal;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_348_DSTATE = *rty_Global_TorqueControl_ESec_h;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_349_DSTATE = *rty_Global_TorqueControl_ESec_i;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_35_DSTATE = *rty_Global_InverterSignals_In_b;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_350_DSTATE = *rty_Global_TorqueControl_ESec_d;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_351_DSTATE = *rty_Global_TorqueControl_MTract;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_352_DSTATE = *rty_Global_TorqueControl_MTra_o;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_353_DSTATE = *rty_Global_TorqueControl_MTra_n;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_354_DSTATE = *rty_Global_TorqueControl_MTra_f;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_355_DSTATE = *rty_Global_TorqueControl_ESe_dn;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_356_DSTATE = *rty_Global_TorqueControl_ESe_im;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_357_DSTATE = *rty_Global_TorqueControl_ESec_c;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_358_DSTATE = *rty_Global_TorqueControl_ESec_n;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_359_DSTATE = *rty_Global_TorqueControl_ESec_j;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_360_DSTATE = *rty_Global_TorqueControl_ESec_e;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_361_DSTATE = *rty_Global_TorqueControl_ESec_a;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_362_DSTATE = *rty_Global_TorqueControl_ESec_l;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_363_DSTATE = *rty_Global_TorqueControl_ESec_m;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_364_DSTATE = *rty_Global_TorqueControl_MFLFin;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_365_DSTATE = *rty_Global_TorqueControl_MFRFin;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_366_DSTATE = *rty_Global_TorqueControl_MRLFin;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_367_DSTATE = *rty_Global_TorqueControl_MRRFin;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_368_DSTATE = *rty_Global_TorqueControl_MTot_i;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_369_DSTATE = *rty_Global_TorqueControl_PDis_f;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_37_DSTATE = *rty_Global_InverterSignals__gye;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_38_DSTATE = *rty_Global_InverterSignals_I_go;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_39_DSTATE = *rty_Global_InverterSignals_I_ep;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_4_DSTATE = *rty_Global_InverterSignals_In_e;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_41_DSTATE = *rty_Global_InverterSignals_I_bn;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_43_DSTATE = *rty_Global_InverterSignals_In_l;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_47_DSTATE = *rty_Global_InverterSignals_I_px;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_48_DSTATE = *rty_Global_InverterSignals_I_mk;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_50_DSTATE = *rty_Global_InverterSignals_I_fp;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_51_DSTATE = *rty_Global_InverterSignals_I_df;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_52_DSTATE = *rty_Global_InverterSignals_I_mw;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_53_DSTATE = *rty_Global_WheelSpeeds_vWheelRL;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_54_DSTATE = *rty_Global_WheelSpeeds_vWheelRR;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_55_DSTATE = *rty_Global_WheelSpeeds_vWheelFL;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_56_DSTATE = *rty_Global_WheelSpeeds_vWheelFR;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_57_DSTATE = *rty_Global_SensorSignals_VDampe;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_58_DSTATE = *rty_Global_SensorSignals_VDam_h;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_59_DSTATE = *rty_Global_SensorSignals_NDispl;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_60_DSTATE = *rty_Global_SensorSignals_VSteer;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_61_DSTATE = *rty_Global_SensorSignals_VThrot;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_62_DSTATE = *rty_Global_SensorSignals_VThr_a;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_63_DSTATE = *rty_Global_SensorSignals_BSteer;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_64_DSTATE = *rty_Global_SensorSignals_BSte_b;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_65_DSTATE = *rty_Global_SensorSignals_BSte_d;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_66_DSTATE = *rty_Global_SensorSignals_BSte_j;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_67_DSTATE = *rty_Global_SensorSignals_NPageS;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_68_DSTATE = *rty_Global_SensorSignals_NParam;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_69_DSTATE = *rty_Global_SensorSignals_NEvent;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_70_DSTATE = *rty_Global_SensorSignals_VRegen;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_71_DSTATE = *rty_Global_SensorSignals_VReg_h;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_72_DSTATE = *rty_Global_SensorSignals_VBrake;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_73_DSTATE = *rty_Global_SensorSignals_VBra_e;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_74_DSTATE = *rty_Global_GPSIMUSignals_vLater;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_75_DSTATE = *rty_Global_GPSIMUSignals_gVerti;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_76_DSTATE = *rty_Global_GPSIMUSignals_vLongi;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_77_DSTATE = *rty_Global_GPSIMUSignals_gLater;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_78_DSTATE = *rty_Global_GPSIMUSignals_gLongi;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_79_DSTATE = *rty_Global_GPSIMUSignals_nYawRa;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_8_DSTATE = *rty_Global_InverterSignals_In_h;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_80_DSTATE = *rty_Global_BMSSignals_VCellMax;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_81_DSTATE = *rty_Global_BMSSignals_VCellDelt;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_83_DSTATE = *rty_Global_BMSSignals_VCellAver;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_84_DSTATE = *rty_Global_BMSSignals_TCellMax;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_85_DSTATE = *rty_Global_BMSSignals_IBMSDLC;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_86_DSTATE = *rty_Global_BMSSignals_TCellMin;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_87_DSTATE = *rty_Global_BMSSignals_IBMSHallE;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_9_DSTATE = *rty_Global_InverterSignals_I_kw;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_97_DSTATE = *rty_Global_BMSSignals_IIVTS;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_98_DSTATE = *rty_Global_Systems_rThrottlePed;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_100_DSTATE = *rty_Global_Systems_BThrottleErr;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_101_DSTATE = *rty_Global_Systems_tThrottleErr;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_102_DSTATE = *rty_Global_Systems_pBrakeF;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_103_DSTATE = *rty_Global_Systems_pBrakeR;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_104_DSTATE = *rty_Global_Systems_BBrakeError;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_105_DSTATE = *rty_Global_Systems_tBrakeError;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_106_DSTATE = *rty_Global_Systems_BBrakeOn;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_107_DSTATE = *rty_Global_Systems_pBrakeMax;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_108_DSTATE = *rty_Global_Systems_BBrakeLight;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_109_DSTATE = *rty_Global_Systems_BPedalOverla;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_110_DSTATE = *rty_Global_Systems_tPedalOverla;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_111_DSTATE = *rty_Global_Systems_BAppsOK;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_112_DSTATE = *rty_Global_Systems_tAppsTimer;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_113_DSTATE = *rty_Global_Systems_rSteeringAng;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_114_DSTATE = *rty_Global_Systems_aSteeringAng;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_115_DSTATE = *rty_Global_Systems_rRegenPaddle;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_116_DSTATE = *rty_Global_Systems_BRegenOn;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_117_DSTATE = *rty_Global_Systems_xDamperFL;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_118_DSTATE = *rty_Global_Systems_xDamperFR;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_119_DSTATE = *rty_Global_Systems_xDamperRL;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_120_DSTATE = *rty_Global_Systems_xDamperRR;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_121_DSTATE = *rty_Global_Systems_BxDamperFLOk;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_122_DSTATE = *rty_Global_Systems_BxDamperFROk;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_123_DSTATE = *rty_Global_Systems_BxDamperRLOk;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_124_DSTATE = *rty_Global_Systems_BxDamperRROk;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_125_DSTATE = *rty_Global_Systems_BInverterErr;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_126_DSTATE = *rty_Global_Systems_BInverterE_d;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_127_DSTATE = *rty_Global_Systems_BIMUOK;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_128_DSTATE = *rty_Global_Systems_BIMUError;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_129_DSTATE = *rty_Global_Systems_vChassis;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_130_DSTATE = *rty_Global_Systems_sChassis;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_131_DSTATE = *rty_Global_Systems_BPageUp;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_132_DSTATE = *rty_Global_Systems_BPageDown;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_133_DSTATE = *rty_Global_Systems_BInvLVOn;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_134_DSTATE = *rty_Global_Systems_BCalibration;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_135_DSTATE = *rty_Global_Systems_BReadyToDriv;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_136_DSTATE = *rty_Global_Systems_BErrorReset;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_137_DSTATE = *rty_Global_Systems_BTVOn;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_138_DSTATE = *rty_Global_Systems_BTCOn;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_139_DSTATE = *rty_Global_Systems_BDrivetrainC;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_140_DSTATE = *rty_Global_Systems_BEMSOn;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_141_DSTATE = *rty_Global_Systems_BSpinningMod;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_142_DSTATE = *rty_Global_Systems_NThrottleMap;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_143_DSTATE = *rty_Global_Systems_PDischargeMa;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_144_DSTATE = *rty_Global_Systems_rTorqueSplit;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_145_DSTATE = *rty_Global_Systems_PRegenMax;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_146_DSTATE = *rty_Global_Systems_rTVMultiplie;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_147_DSTATE = *rty_Global_Systems_PEngineBraki;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_148_DSTATE = *rty_Global_Systems_rEngineBraki;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_149_DSTATE = *rty_Global_Systems_BDataMark;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_15_DSTATE = *rty_Global_InverterSignals_In_o;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_150_DSTATE = *rty_Global_Systems_rGrip;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_151_DSTATE = *rty_Global_Systems_EOffset;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_152_DSTATE = *rty_Global_Systems_NTCKdSelecto;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_153_DSTATE = *rty_Global_Systems_MRegenMax;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_154_DSTATE = *rty_Global_Systems_NEventMode;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_155_DSTATE = *rty_Global_Systems_NPCKpSelecto;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_156_DSTATE = *rty_Global_Systems_TMotorMax;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_157_DSTATE = *rty_Global_Systems_TInvMax;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_158_DSTATE = *rty_Global_Systems_BAccuFanOn;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_159_DSTATE = *rty_Global_Systems_BMotorRBHFan;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_16_DSTATE = *rty_Global_InverterSignals_In_p;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_160_DSTATE = *rty_Global_Systems_BInverterFan;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_161_DSTATE = *rty_Global_Systems_BPCComplete;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_162_DSTATE = *rty_Global_Systems_PActual;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_163_DSTATE = *rty_Global_Systems_rSOC;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_164_DSTATE = *rty_Global_Systems_rSOE;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_165_DSTATE = *rty_Global_Systems_PEnergyMeter;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_166_DSTATE = *rty_Global_Systems_BOverpower;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_167_DSTATE = *rty_Global_Systems_tIMUError;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_168_DSTATE = *rty_Global_Systems_BTVOnEM;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_169_DSTATE = *rty_Global_Systems_BTCOnEM;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_17_DSTATE = *rty_Global_InverterSignals_In_d;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_170_DSTATE = *rty_Global_Systems_BDrivetrai_b;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_171_DSTATE = *rty_Global_Systems_BEMSOnEM;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_172_DSTATE = *rty_Global_Systems_BSpinningM_j;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_173_DSTATE = *rty_Global_Systems_rTVMultipl_l;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_174_DSTATE = *rty_Global_Systems_rEngineBra_b;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_175_DSTATE = *rty_Global_Systems_NThrottleM_a;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_176_DSTATE = *rty_Global_Systems_PDischarge_j;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_177_DSTATE = *rty_Global_Systems_rTorqueSpl_n;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_178_DSTATE = *rty_Global_Systems_PRegenMaxEM;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_179_DSTATE = *rty_Global_Systems_PEngineBra_a;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_18_DSTATE = *rty_Global_InverterSignals_I_dm;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_180_DSTATE = *rty_Global_Systems_BTVOnOW;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_181_DSTATE = *rty_Global_Systems_BTCOnOW;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_182_DSTATE = *rty_Global_Systems_BDrivetrai_p;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_183_DSTATE = *rty_Global_Systems_BEMSOnOW;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_184_DSTATE = *rty_Global_Systems_BSpinningM_k;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_185_DSTATE = *rty_Global_Systems_rTVMultipl_h;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_186_DSTATE = *rty_Global_Systems_rEngineBra_e;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_187_DSTATE = *rty_Global_Systems_NThrottleM_g;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_188_DSTATE = *rty_Global_Systems_PDischarge_d;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_189_DSTATE = *rty_Global_Systems_rTorqueSpl_a;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_19_DSTATE = *rty_Global_InverterSignals_I_gy;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_190_DSTATE = *rty_Global_Systems_PRegenMaxOW;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_191_DSTATE = *rty_Global_Systems_PEngineBra_i;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_192_DSTATE = *rty_Global_Systems_MMotorMaxFL;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_193_DSTATE = *rty_Global_Systems_MMotorMaxFR;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_194_DSTATE = *rty_Global_Systems_MMotorMaxRL;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_195_DSTATE = *rty_Global_Systems_MMotorMaxRR;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_197_DSTATE = *rty_Global_Stateflow_BReadyToDr;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_198_DSTATE = *rty_Global_Stateflow_BReadyTo_k;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_199_DSTATE = *rty_Global_Stateflow_NBMSState;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_2_DSTATE = *rty_Global_InverterSignals_In_g;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_20_DSTATE = *rty_Global_InverterSignals_In_m;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_200_DSTATE = *rty_Global_Stateflow_NInvState;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_201_DSTATE = *rty_Global_Stateflow_BHVOn;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_202_DSTATE = *rty_Global_Stateflow_BInvOnRLOu;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_203_DSTATE = *rty_Global_Stateflow_BInvOnRROu;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_204_DSTATE = *rty_Global_Stateflow_BInvOnFLOu;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_205_DSTATE = *rty_Global_Stateflow_BInvOnFROu;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_206_DSTATE = *rty_Global_Stateflow_BInvDCOnRL;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_207_DSTATE = *rty_Global_Stateflow_BInvDCOnRR;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_208_DSTATE = *rty_Global_Stateflow_BInvDCOnFL;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_209_DSTATE = *rty_Global_Stateflow_BInvDCOnFR;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_21_DSTATE = *rty_Global_InverterSignals_I_pd;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_210_DSTATE = *rty_Global_Stateflow_BInvEnable;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_211_DSTATE = *rty_Global_Stateflow_BInvEnab_p;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_212_DSTATE = *rty_Global_Stateflow_BInvEnab_o;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_213_DSTATE = *rty_Global_Stateflow_BInvEnab_h;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_214_DSTATE = *rty_Global_Stateflow_BInvErrorR;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_215_DSTATE = *rty_Global_Stateflow_BInvErro_n;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_216_DSTATE = *rty_Global_Stateflow_BInvErro_c;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_217_DSTATE = *rty_Global_Stateflow_BInvErro_h;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_218_DSTATE = *rty_Global_Stateflow_MTargetTor;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_219_DSTATE = *rty_Global_Stateflow_MTargetT_j;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_22_DSTATE = *rty_Global_InverterSignals_In_i;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_220_DSTATE = *rty_Global_Stateflow_MTargetT_l;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_221_DSTATE = *rty_Global_Stateflow_MTargetT_g;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_222_DSTATE = *rty_Global_Stateflow_MTorqueLim;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_223_DSTATE = *rty_Global_Stateflow_MTorqueL_m;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_224_DSTATE = *rty_Global_Stateflow_MTorqueL_h;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_225_DSTATE = *rty_Global_Stateflow_MTorqueL_a;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_226_DSTATE = *rty_Global_Stateflow_MTorqueL_l;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_227_DSTATE = *rty_Global_Stateflow_MTorqueL_g;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_228_DSTATE = *rty_Global_Stateflow_MTorque_lx;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_229_DSTATE = *rty_Global_Stateflow_MTorque_h0;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_230_DSTATE = *rty_Global_Limitations_BDischar;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_231_DSTATE = *rty_Global_Limitations_PInvTemp;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_232_DSTATE = *rty_Global_Limitations_PInvTe_g;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_233_DSTATE = *rty_Global_Limitations_PInvTe_m;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_234_DSTATE = *rty_Global_Limitations_PInvTe_i;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_235_DSTATE = *rty_Global_Limitations_PInvT_if;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_236_DSTATE = *rty_Global_Limitations_PMotorTe;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_237_DSTATE = *rty_Global_Limitations_PMotor_i;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_238_DSTATE = *rty_Global_Limitations_PMotor_a;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_239_DSTATE = *rty_Global_Limitations_PMotor_c;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_240_DSTATE = *rty_Global_Limitations_PMotor_f;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_241_DSTATE = *rty_Global_Limitations_PTSTempe;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_242_DSTATE = *rty_Global_Limitations_PTSTem_d;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_243_DSTATE = *rty_Global_Limitations_PTSTem_g;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_244_DSTATE = *rty_Global_Limitations_PTSTem_h;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_245_DSTATE = *rty_Global_Limitations_PHighCel;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_246_DSTATE = *rty_Global_Limitations_PLowCell;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_247_DSTATE = *rty_Global_Limitations_PHighC_n;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_248_DSTATE = *rty_Global_Limitations_PSOCDisc;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_249_DSTATE = *rty_Global_Limitations_PSOCRege;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_25_DSTATE = *rty_Global_InverterSignals_I_o3;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_250_DSTATE = *rty_Global_Limitations_rSpeedRe;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_251_DSTATE = *rty_Global_Limitations_rSpeed_h;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_252_DSTATE = *rty_Global_Limitations_rSpeed_o;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_253_DSTATE = *rty_Global_Limitations_rSpee_hw;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_254_DSTATE = *rty_Global_Limitations_BSpeedDe;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_255_DSTATE = *rty_Global_Limitations_PDischar;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_256_DSTATE = *rty_Global_Limitations_PRegenDe;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_257_DSTATE = *rty_Global_TorqueControl_MDrive;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_258_DSTATE = *rty_Global_TorqueControl_PRegen;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_259_DSTATE = *rty_Global_TorqueControl_MDri_d;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_260_DSTATE = *rty_Global_TorqueControl_PDisch;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_261_DSTATE = *rty_Global_TorqueControl_PPCInt;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_262_DSTATE = *rty_Global_TorqueControl_PPCPro;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_263_DSTATE = *rty_Global_TorqueControl_MPCDis;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_264_DSTATE = *rty_Global_TorqueControl_PReg_h;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_265_DSTATE = *rty_Global_TorqueControl_PPCI_l;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_266_DSTATE = *rty_Global_TorqueControl_PPCP_j;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_267_DSTATE = *rty_Global_TorqueControl_MPCReg;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_268_DSTATE = *rty_Global_TorqueControl_PPCDis;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_269_DSTATE = *rty_Global_TorqueControl_PPCReg;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_270_DSTATE = *rty_Global_TorqueControl_MDisch;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_271_DSTATE = *rty_Global_TorqueControl_MRegen;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_272_DSTATE = *rty_Global_TorqueControl_MTotal;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_273_DSTATE = *rty_Global_TorqueControl_BEMSDr;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_274_DSTATE = *rty_Global_TorqueControl_BEMS_i;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_275_DSTATE = *rty_Global_TorqueControl_BEMS_b;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_276_DSTATE = *rty_Global_TorqueControl_NLap;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_277_DSTATE = *rty_Global_TorqueControl_NSecto;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_278_DSTATE = *rty_Global_TorqueControl_NSec_f;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_279_DSTATE = *rty_Global_TorqueControl_ESecto;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_28_DSTATE = *rty_Global_InverterSignals_In_j;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_280_DSTATE = *rty_Global_TorqueControl_ERemai;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_281_DSTATE = *rty_Global_TorqueControl_EBudge;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_282_DSTATE = *rty_Global_TorqueControl_sSecto;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_283_DSTATE = *rty_Global_TorqueControl_rSlipR;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_284_DSTATE = *rty_Global_TorqueControl_rSli_i;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_285_DSTATE = *rty_Global_TorqueControl_rSli_d;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_286_DSTATE = *rty_Global_TorqueControl_rSli_j;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_287_DSTATE = *rty_Global_TorqueControl_FLongi;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_288_DSTATE = *rty_Global_TorqueControl_FTyreV;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_289_DSTATE = *rty_Global_TorqueControl_FTyr_c;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_29_DSTATE = *rty_Global_InverterSignals_I_po;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_290_DSTATE = *rty_Global_TorqueControl_FTyr_p;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_291_DSTATE = *rty_Global_TorqueControl_FTyr_j;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_292_DSTATE = *rty_Global_TorqueControl_aSlipA;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_293_DSTATE = *rty_Global_TorqueControl_aSli_e;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_294_DSTATE = *rty_Global_TorqueControl_aSli_d;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_295_DSTATE = *rty_Global_TorqueControl_aSli_k;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_296_DSTATE = *rty_Global_TorqueControl_aCambe;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_297_DSTATE = *rty_Global_TorqueControl_aCam_k;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_298_DSTATE = *rty_Global_TorqueControl_aCam_a;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_299_DSTATE = *rty_Global_TorqueControl_aCam_j;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_3_DSTATE = *rty_Global_InverterSignals_In_c;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_30_DSTATE = *rty_Global_InverterSignals_I_m3;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_300_DSTATE = *rty_Global_TorqueControl_FTotal;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_301_DSTATE = *rty_Global_TorqueControl_FLater;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_302_DSTATE = *rty_Global_TorqueControl_FLat_l;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_303_DSTATE = *rty_Global_TorqueControl_FTot_c;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_304_DSTATE = *rty_Global_TorqueControl_FDownf;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_305_DSTATE = *rty_Global_TorqueControl_FDow_i;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_306_DSTATE = *rty_Global_TorqueControl_aCam_b;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_307_DSTATE = *rty_Global_TorqueControl_aCa_k3;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_308_DSTATE = localB->aCamberGainRollF_n;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_309_DSTATE = localB->aCamberGainRollR_j;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_31_DSTATE = *rty_Global_InverterSignals_I_p2;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_310_DSTATE = *rty_Global_TorqueControl_xHeave;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_311_DSTATE = *rty_Global_TorqueControl_xHea_i;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_312_DSTATE = *rty_Global_TorqueControl_aCam_e;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_313_DSTATE = *rty_Global_TorqueControl_aCam_p;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_314_DSTATE = *rty_Global_TorqueControl_aRollA;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_315_DSTATE = *rty_Global_TorqueControl_nYawRa;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_316_DSTATE = *rty_Global_TorqueControl_BTVOK;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_317_DSTATE = *rty_Global_TorqueControl_MTorqu;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_318_DSTATE = *rty_Global_TorqueControl_MTor_h;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_319_DSTATE = *rty_Global_TorqueControl_MTor_k;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_32_DSTATE = *rty_Global_InverterSignals_I_i3;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_320_DSTATE = *rty_Global_TorqueControl_MTo_kw;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_321_DSTATE = *rty_Global_TorqueControl_rSplit;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_322_DSTATE = *rty_Global_TorqueControl_MTor_n;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_323_DSTATE = *rty_Global_TorqueControl_MTor_j;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_324_DSTATE = *rty_Global_TorqueControl_MTo_nk;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_325_DSTATE = *rty_Global_TorqueControl_MTor_g;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_326_DSTATE = *rty_Global_TorqueControl_rSli_o;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_327_DSTATE = *rty_Global_TorqueControl_NTract;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_328_DSTATE = *rty_Global_TorqueControl_NTra_p;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_329_DSTATE = *rty_Global_TorqueControl_NTra_g;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_33_DSTATE = *rty_Global_InverterSignals__ka1;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_330_DSTATE = *rty_Global_TorqueControl_NTr_go;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_331_DSTATE = *rty_Global_TorqueControl_NABSMu;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_332_DSTATE = *rty_Global_TorqueControl_NABS_l;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_333_DSTATE = *rty_Global_TorqueControl_NABS_c;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_334_DSTATE = *rty_Global_TorqueControl_NABS_n;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_335_DSTATE = *rty_Global_TorqueControl_NSec_a;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_336_DSTATE = *rty_Global_TorqueControl_NSec_b;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_337_DSTATE = *rty_Global_TorqueControl_NSec_e;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_338_DSTATE = *rty_Global_TorqueControl_NSec_d;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_339_DSTATE = *rty_Global_TorqueControl_NSe_fh;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_34_DSTATE = *rty_Global_InverterSignals_I_hs;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_340_DSTATE = *rty_Global_TorqueControl_NSec_k;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_341_DSTATE = *rty_Global_TorqueControl_NSe_ku;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_342_DSTATE = *rty_Global_TorqueControl_NSec_m;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_343_DSTATE = *rty_Global_TorqueControl_NSe_fb;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_344_DSTATE = *rty_Global_TorqueControl_NSec_i;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_345_DSTATE = *rty_Global_TorqueControl_NSec_n;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_346_DSTATE = *rty_Global_TorqueControl_NSe_i3;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_347_DSTATE = *rty_Global_TorqueControl_ETotal;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_348_DSTATE = *rty_Global_TorqueControl_ESec_h;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_349_DSTATE = *rty_Global_TorqueControl_ESec_i;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_35_DSTATE = *rty_Global_InverterSignals_In_b;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_350_DSTATE = *rty_Global_TorqueControl_ESec_d;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_351_DSTATE = *rty_Global_TorqueControl_MTract;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_352_DSTATE = *rty_Global_TorqueControl_MTra_o;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_353_DSTATE = *rty_Global_TorqueControl_MTra_n;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_354_DSTATE = *rty_Global_TorqueControl_MTra_f;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_355_DSTATE = *rty_Global_TorqueControl_ESe_dn;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_356_DSTATE = *rty_Global_TorqueControl_ESe_im;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_357_DSTATE = *rty_Global_TorqueControl_ESec_c;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_358_DSTATE = *rty_Global_TorqueControl_ESec_n;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_359_DSTATE = *rty_Global_TorqueControl_ESec_j;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_360_DSTATE = *rty_Global_TorqueControl_ESec_e;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_361_DSTATE = *rty_Global_TorqueControl_ESec_a;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_362_DSTATE = *rty_Global_TorqueControl_ESec_l;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_363_DSTATE = *rty_Global_TorqueControl_ESec_m;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_364_DSTATE = *rty_Global_TorqueControl_MFLFin;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_365_DSTATE = *rty_Global_TorqueControl_MFRFin;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_366_DSTATE = *rty_Global_TorqueControl_MRLFin;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_367_DSTATE = *rty_Global_TorqueControl_MRRFin;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_368_DSTATE = *rty_Global_TorqueControl_MTot_i;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_369_DSTATE = *rty_Global_TorqueControl_PDis_f;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_38_DSTATE = *rty_Global_InverterSignals_I_go;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_4_DSTATE = *rty_Global_InverterSignals_In_e;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_41_DSTATE = *rty_Global_InverterSignals_I_bn;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_42_DSTATE = *rty_Global_InverterSignals_I_c4;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_43_DSTATE = *rty_Global_InverterSignals_In_l;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_44_DSTATE = *rty_Global_InverterSignals_I_p4;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_45_DSTATE = *rty_Global_InverterSignals_I_py;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_46_DSTATE = *rty_Global_InverterSignals_I_en;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_47_DSTATE = *rty_Global_InverterSignals_I_px;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_48_DSTATE = *rty_Global_InverterSignals_I_mk;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_5_DSTATE = *rty_Global_InverterSignals_In_n;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_51_DSTATE = *rty_Global_InverterSignals_I_df;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_59_DSTATE = *rty_Global_SensorSignals_NDispl;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_6_DSTATE = *rty_Global_InverterSignals_In_f;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_7_DSTATE = *rty_Global_InverterSignals_In_k;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_74_DSTATE = *rty_Global_GPSIMUSignals_vLater;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_76_DSTATE = *rty_Global_GPSIMUSignals_vLongi;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_8_DSTATE = *rty_Global_InverterSignals_In_h;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_80_DSTATE = *rty_Global_BMSSignals_VCellMax;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_81_DSTATE = *rty_Global_BMSSignals_VCellDelt;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_83_DSTATE = *rty_Global_BMSSignals_VCellAver;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_85_DSTATE = *rty_Global_BMSSignals_IBMSDLC;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_86_DSTATE = *rty_Global_BMSSignals_TCellMin;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_87_DSTATE = *rty_Global_BMSSignals_IBMSHallE;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_89_DSTATE = *rty_Global_BMSSignals_RCellAver;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_9_DSTATE = *rty_Global_InverterSignals_I_kw;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_90_DSTATE = *rty_Global_BMSSignals_BBalancin;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_91_DSTATE = *rty_Global_BMSSignals_BBMSP0A0C;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_92_DSTATE = *rty_Global_BMSSignals_BBMSP0A0E;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_93_DSTATE = *rty_Global_BMSSignals_BBMSP0A10;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_94_DSTATE = *rty_Global_BMSSignals_BBMSP0A80;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_95_DSTATE = *rty_Global_BMSSignals_BBMSP0AC0;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_96_DSTATE = *rty_Global_BMSSignals_BBMSP0AFA;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_98_DSTATE = *rty_Global_Systems_rThrottlePed;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_99_DSTATE = *rty_Global_Systems_rThrottleP_c;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_1_DSTATE = *rty_Global_InverterSignals_Inve;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_11_DSTATE = *rty_Global_InverterSignals__kaa;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_13_DSTATE = *rty_Global_InverterSignals_I_cj;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_14_DSTATE = *rty_Global_InverterSignals_I_ez;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_24_DSTATE = *rty_Global_InverterSignals_I_pe;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_26_DSTATE = *rty_Global_InverterSignals_I_e4;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_27_DSTATE = *rty_Global_InverterSignals_I_mc;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_37_DSTATE = *rty_Global_InverterSignals__gye;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_39_DSTATE = *rty_Global_InverterSignals_I_ep;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_40_DSTATE = *rty_Global_InverterSignals_I_kf;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_50_DSTATE = *rty_Global_InverterSignals_I_fp;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_52_DSTATE = *rty_Global_InverterSignals_I_mw;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_53_DSTATE = *rty_Global_WheelSpeeds_vWheelRL;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_54_DSTATE = *rty_Global_WheelSpeeds_vWheelRR;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_55_DSTATE = *rty_Global_WheelSpeeds_vWheelFL;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_56_DSTATE = *rty_Global_WheelSpeeds_vWheelFR;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_80_DSTATE = *rty_Global_BMSSignals_VCellMax;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_82_DSTATE = *rty_Global_BMSSignals_VCellMin;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_84_DSTATE = *rty_Global_BMSSignals_TCellMax;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_88_DSTATE = *rty_Global_BMSSignals_VDCAccumu;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_97_DSTATE = *rty_Global_BMSSignals_IIVTS;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_100_DSTATE = *rty_Global_Systems_BThrottleErr;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_104_DSTATE = *rty_Global_Systems_BBrakeError;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_106_DSTATE = *rty_Global_Systems_BBrakeOn;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_111_DSTATE = *rty_Global_Systems_BAppsOK;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_116_DSTATE = *rty_Global_Systems_BRegenOn;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_156_DSTATE = *rty_Global_Systems_TMotorMax;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_157_DSTATE = *rty_Global_Systems_TInvMax;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay1' */
  localDW->UnitDelay1_198_DSTATE = *rty_Global_Stateflow_BReadyTo_k;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_1_DSTATE = *rty_Global_InverterSignals_Inve;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_3_DSTATE = *rty_Global_InverterSignals_In_c;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_5_DSTATE = *rty_Global_InverterSignals_In_n;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_6_DSTATE = *rty_Global_InverterSignals_In_f;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_7_DSTATE = *rty_Global_InverterSignals_In_k;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_10_DSTATE = *rty_Global_InverterSignals_I_ka;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_12_DSTATE = *rty_Global_InverterSignals_I_el;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_14_DSTATE = *rty_Global_InverterSignals_I_ez;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_16_DSTATE = *rty_Global_InverterSignals_In_p;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_18_DSTATE = *rty_Global_InverterSignals_I_dm;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_19_DSTATE = *rty_Global_InverterSignals_I_gy;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_20_DSTATE = *rty_Global_InverterSignals_In_m;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_23_DSTATE = *rty_Global_InverterSignals_I_pr;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_27_DSTATE = *rty_Global_InverterSignals_I_mc;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_29_DSTATE = *rty_Global_InverterSignals_I_po;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_31_DSTATE = *rty_Global_InverterSignals_I_p2;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_32_DSTATE = *rty_Global_InverterSignals_I_i3;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_33_DSTATE = *rty_Global_InverterSignals__ka1;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_36_DSTATE = *rty_Global_InverterSignals_I_ng;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_40_DSTATE = *rty_Global_InverterSignals_I_kf;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_42_DSTATE = *rty_Global_InverterSignals_I_c4;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_44_DSTATE = *rty_Global_InverterSignals_I_p4;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_45_DSTATE = *rty_Global_InverterSignals_I_py;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_46_DSTATE = *rty_Global_InverterSignals_I_en;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_49_DSTATE = *rty_Global_InverterSignals_I_nk;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_82_DSTATE = *rty_Global_BMSSignals_VCellMin;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_88_DSTATE = *rty_Global_BMSSignals_VDCAccumu;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_89_DSTATE = *rty_Global_BMSSignals_RCellAver;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_90_DSTATE = *rty_Global_BMSSignals_BBalancin;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_91_DSTATE = *rty_Global_BMSSignals_BBMSP0A0C;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_92_DSTATE = *rty_Global_BMSSignals_BBMSP0A0E;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_93_DSTATE = *rty_Global_BMSSignals_BBMSP0A10;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_94_DSTATE = *rty_Global_BMSSignals_BBMSP0A80;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_95_DSTATE = *rty_Global_BMSSignals_BBMSP0AC0;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_96_DSTATE = *rty_Global_BMSSignals_BBMSP0AFA;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_99_DSTATE = *rty_Global_Systems_rThrottleP_c;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_102_DSTATE = *rty_Global_Systems_pBrakeF;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_103_DSTATE = *rty_Global_Systems_pBrakeR;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_104_DSTATE = *rty_Global_Systems_BBrakeError;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_135_DSTATE = *rty_Global_Systems_BReadyToDriv;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay2' */
  localDW->UnitDelay2_136_DSTATE = *rty_Global_Systems_BErrorReset;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_1_DSTATE = *rty_Global_InverterSignals_Inve;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_10_DSTATE = *rty_Global_InverterSignals_I_ka;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_11_DSTATE = *rty_Global_InverterSignals__kaa;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_12_DSTATE = *rty_Global_InverterSignals_I_el;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_13_DSTATE = *rty_Global_InverterSignals_I_cj;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_14_DSTATE = *rty_Global_InverterSignals_I_ez;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_23_DSTATE = *rty_Global_InverterSignals_I_pr;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_24_DSTATE = *rty_Global_InverterSignals_I_pe;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_26_DSTATE = *rty_Global_InverterSignals_I_e4;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_27_DSTATE = *rty_Global_InverterSignals_I_mc;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_36_DSTATE = *rty_Global_InverterSignals_I_ng;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_37_DSTATE = *rty_Global_InverterSignals__gye;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_39_DSTATE = *rty_Global_InverterSignals_I_ep;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_40_DSTATE = *rty_Global_InverterSignals_I_kf;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_49_DSTATE = *rty_Global_InverterSignals_I_nk;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_50_DSTATE = *rty_Global_InverterSignals_I_fp;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_52_DSTATE = *rty_Global_InverterSignals_I_mw;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_53_DSTATE = *rty_Global_WheelSpeeds_vWheelRL;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_54_DSTATE = *rty_Global_WheelSpeeds_vWheelRR;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_55_DSTATE = *rty_Global_WheelSpeeds_vWheelFL;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_56_DSTATE = *rty_Global_WheelSpeeds_vWheelFR;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_57_DSTATE = *rty_Global_SensorSignals_VDampe;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_58_DSTATE = *rty_Global_SensorSignals_VDam_h;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_60_DSTATE = *rty_Global_SensorSignals_VSteer;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_61_DSTATE = *rty_Global_SensorSignals_VThrot;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_62_DSTATE = *rty_Global_SensorSignals_VThr_a;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_63_DSTATE = *rty_Global_SensorSignals_BSteer;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_64_DSTATE = *rty_Global_SensorSignals_BSte_b;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_65_DSTATE = *rty_Global_SensorSignals_BSte_d;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_66_DSTATE = *rty_Global_SensorSignals_BSte_j;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_67_DSTATE = *rty_Global_SensorSignals_NPageS;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_68_DSTATE = *rty_Global_SensorSignals_NParam;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_69_DSTATE = *rty_Global_SensorSignals_NEvent;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_70_DSTATE = *rty_Global_SensorSignals_VRegen;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_71_DSTATE = *rty_Global_SensorSignals_VReg_h;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_72_DSTATE = *rty_Global_SensorSignals_VBrake;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_73_DSTATE = *rty_Global_SensorSignals_VBra_e;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_75_DSTATE = *rty_Global_GPSIMUSignals_gVerti;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_77_DSTATE = *rty_Global_GPSIMUSignals_gLater;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_78_DSTATE = *rty_Global_GPSIMUSignals_gLongi;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_79_DSTATE = *rty_Global_GPSIMUSignals_nYawRa;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_82_DSTATE = *rty_Global_BMSSignals_VCellMin;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_84_DSTATE = *rty_Global_BMSSignals_TCellMax;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_88_DSTATE = *rty_Global_BMSSignals_VDCAccumu;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_97_DSTATE = *rty_Global_BMSSignals_IIVTS;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay3' */
  localDW->UnitDelay3_196_DSTATE = *rty_Global_Stateflow_NCarState;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_1_DSTATE = *rty_Global_InverterSignals_Inve;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_12_DSTATE = *rty_Global_InverterSignals_I_el;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_14_DSTATE = *rty_Global_InverterSignals_I_ez;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_27_DSTATE = *rty_Global_InverterSignals_I_mc;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_40_DSTATE = *rty_Global_InverterSignals_I_kf;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_53_DSTATE = *rty_Global_WheelSpeeds_vWheelRL;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_54_DSTATE = *rty_Global_WheelSpeeds_vWheelRR;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_55_DSTATE = *rty_Global_WheelSpeeds_vWheelFL;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_56_DSTATE = *rty_Global_WheelSpeeds_vWheelFR;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_74_DSTATE = *rty_Global_GPSIMUSignals_vLater;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_77_DSTATE = *rty_Global_GPSIMUSignals_gLater;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_78_DSTATE = *rty_Global_GPSIMUSignals_gLongi;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_79_DSTATE = *rty_Global_GPSIMUSignals_nYawRa;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_97_DSTATE = *rty_Global_BMSSignals_IIVTS;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_99_DSTATE = *rty_Global_Systems_rThrottleP_c;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_107_DSTATE = *rty_Global_Systems_pBrakeMax;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_113_DSTATE = *rty_Global_Systems_rSteeringAng;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_114_DSTATE = *rty_Global_Systems_aSteeringAng;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_115_DSTATE = *rty_Global_Systems_rRegenPaddle;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_125_DSTATE = *rty_Global_Systems_BInverterErr;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_126_DSTATE = *rty_Global_Systems_BInverterE_d;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_129_DSTATE = *rty_Global_Systems_vChassis;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_130_DSTATE = *rty_Global_Systems_sChassis;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_137_DSTATE = *rty_Global_Systems_BTVOn;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_138_DSTATE = *rty_Global_Systems_BTCOn;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_140_DSTATE = *rty_Global_Systems_BEMSOn;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_141_DSTATE = *rty_Global_Systems_BSpinningMod;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_142_DSTATE = *rty_Global_Systems_NThrottleMap;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_143_DSTATE = *rty_Global_Systems_PDischargeMa;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_144_DSTATE = *rty_Global_Systems_rTorqueSplit;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_145_DSTATE = *rty_Global_Systems_PRegenMax;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_146_DSTATE = *rty_Global_Systems_rTVMultiplie;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_147_DSTATE = *rty_Global_Systems_PEngineBraki;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_148_DSTATE = *rty_Global_Systems_rEngineBraki;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_150_DSTATE = *rty_Global_Systems_rGrip;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_151_DSTATE = *rty_Global_Systems_EOffset;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_152_DSTATE = *rty_Global_Systems_NTCKdSelecto;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_153_DSTATE = *rty_Global_Systems_MRegenMax;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_155_DSTATE = *rty_Global_Systems_NPCKpSelecto;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_162_DSTATE = *rty_Global_Systems_PActual;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_164_DSTATE = *rty_Global_Systems_rSOE;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_192_DSTATE = *rty_Global_Systems_MMotorMaxFL;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_193_DSTATE = *rty_Global_Systems_MMotorMaxFR;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_194_DSTATE = *rty_Global_Systems_MMotorMaxRL;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_195_DSTATE = *rty_Global_Systems_MMotorMaxRR;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_198_DSTATE = *rty_Global_Stateflow_BReadyTo_k;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_230_DSTATE = *rty_Global_Limitations_BDischar;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_241_DSTATE = *rty_Global_Limitations_PTSTempe;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_242_DSTATE = *rty_Global_Limitations_PTSTem_d;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_243_DSTATE = *rty_Global_Limitations_PTSTem_g;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_244_DSTATE = *rty_Global_Limitations_PTSTem_h;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_250_DSTATE = *rty_Global_Limitations_rSpeedRe;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_251_DSTATE = *rty_Global_Limitations_rSpeed_h;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_252_DSTATE = *rty_Global_Limitations_rSpeed_o;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_253_DSTATE = *rty_Global_Limitations_rSpee_hw;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_255_DSTATE = *rty_Global_Limitations_PDischar;

  /* Update for UnitDelay generated from: '<Root>/Unit Delay' */
  localDW->UnitDelay_256_DSTATE = *rty_Global_Limitations_PRegenDe;
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
