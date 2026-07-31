/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: SYSTEMS.c
 *
 * Code generated for Simulink model 'SYSTEMS'.
 *
 * Model version                  : 13.6
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Fri Jul 31 17:38:35 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "SYSTEMS.h"
#include "rtwtypes.h"
#include "SYSTEMS_private.h"
#include "rThrottle.h"
#include "BThrottleError.h"
#include "SteeringWheel.h"
#include "TractiveSystemTemperatures.h"
#include "PActual.h"
#include "rSOC.h"
#include "BBrakeLight.h"
#include "BPCComplete.h"
#include "BDrivetrainCoolingOn.h"
#include "pBrake.h"
#include "BIMUOk.h"
#include "BDamperOk.h"
#include "BBrakeError.h"
#include "BInverterError.h"
#include "MMotorMax.h"
#include "xDamper.h"
#include "PEnergyMeter.h"
#include "BPedalOverlap.h"
#include "BAppsOK.h"
#include "rSteeringAngle.h"
#include "rRegenPaddle.h"
#include "vChassis.h"

const real_T SYSTEMS_RGND = 0.0;       /* real_T ground */

/* System initialize for referenced model: 'SYSTEMS' */
void SYSTEMS_Init(real_T *rty_Systems_MRegenMax, real_T
                  *rty_Systems_rEngineBrakingSpl_k, real_T
                  *rty_Systems_PEngineBrakingEM, DW_SYSTEMS_f_T *localDW)
{
  /* SystemInitialize for ModelReference: '<S1>/Model10' */
  SteeringWheel_Init(rty_Systems_MRegenMax, rty_Systems_PEngineBrakingEM,
                     rty_Systems_rEngineBrakingSpl_k,
                     &(localDW->Model10_InstanceData.rtdw));

  /* SystemInitialize for ModelReference: '<S1>/Model13' */
  rSOC_Init(&(localDW->Model13_InstanceData.rtdw));

  /* SystemInitialize for ModelReference: '<S1>/Model17' */
  pBrake_Init(&(localDW->Model17_InstanceData.rtdw));

  /* SystemInitialize for ModelReference: '<S1>/Model7' */
  rSteeringAngle_Init(&(localDW->Model7_InstanceData.rtdw));

  /* SystemInitialize for ModelReference: '<S1>/Model3' */
  xDamper_Init(&(localDW->Model3_InstanceData.rtdw));

  /* SystemInitialize for ModelReference: '<S1>/Model8' */
  rRegenPaddle_Init(&(localDW->Model8_InstanceData.rtdw));
}

/* Output and update for referenced model: 'SYSTEMS' */
void SYSTEMS(const real_T *rtu_Global_InverterSignals_Inve, const real_T
             *rtu_Global_InverterSignals_In_g, const real_T
             *rtu_Global_InverterSignals_In_c, const real_T
             *rtu_Global_InverterSignals_In_e, const real_T
             *rtu_Global_InverterSignals_In_n, const real_T
             *rtu_Global_InverterSignals_In_f, const real_T
             *rtu_Global_InverterSignals_In_k, const real_T
             *rtu_Global_InverterSignals_In_h, const real_T
             *rtu_Global_InverterSignals_I_kw, const real_T
             *rtu_Global_InverterSignals_I_ka, const real_T
             *rtu_Global_InverterSignals__kaa, const real_T
             *rtu_Global_InverterSignals_I_el, const real_T
             *rtu_Global_InverterSignals_I_cj, const real_T
             *rtu_Global_InverterSignals_I_ez, const real_T
             *rtu_Global_InverterSignals_In_o, const real_T
             *rtu_Global_InverterSignals_In_p, const real_T
             *rtu_Global_InverterSignals_In_d, const real_T
             *rtu_Global_WheelSpeeds_vWheelRL, const real_T
             *rtu_Global_WheelSpeeds_vWheelRR, const real_T
             *rtu_Global_WheelSpeeds_vWheelFL, const real_T
             *rtu_Global_WheelSpeeds_vWheelFR, const real_T
             *rtu_Global_SensorSignals_VDampe, const real_T
             *rtu_Global_SensorSignals_VDam_p, const real_T
             *rtu_Global_SensorSignals_VSteer, const real_T
             *rtu_Global_SensorSignals_VThrot, const real_T
             *rtu_Global_SensorSignals_VThr_e, const boolean_T
             *rtu_Global_SensorSignals_BSteer, const boolean_T
             *rtu_Global_SensorSignals_BSte_j, const boolean_T
             *rtu_Global_SensorSignals_BSte_p, const boolean_T
             *rtu_Global_SensorSignals_BSte_m, const real_T
             *rtu_Global_SensorSignals_NPageS, const real_T
             *rtu_Global_SensorSignals_NParam, const real_T
             *rtu_Global_SensorSignals_NEvent, const real_T
             *rtu_Global_SensorSignals_VRegen, const real_T
             *rtu_Global_SensorSignals_VReg_b, const real_T
             *rtu_Global_SensorSignals_VBrake, const real_T
             *rtu_Global_SensorSignals_VBra_g, const real_T
             *rtu_Global_GPSIMUSignals_gVerti, const real_T
             *rtu_Global_GPSIMUSignals_gLater, const real_T
             *rtu_Global_GPSIMUSignals_gLongi, const real_T
             *rtu_Global_GPSIMUSignals_nYawRa, const real_T
             *rtu_Global_BMSSignals_VCellMin, const real_T
             *rtu_Global_BMSSignals_TCellMax, const real_T
             *rtu_Global_BMSSignals_VDCAccumu, const real_T
             *rtu_Global_BMSSignals_IIVTS, const real_T
             *rtu_Global_Stateflow_NCarState, real_T
             *rty_Systems_rThrottlePedal1, real_T *rty_Systems_rThrottlePedal,
             boolean_T *rty_Systems_BThrottleError, real_T
             *rty_Systems_tThrottleError, real_T *rty_Systems_pBrakeF, real_T
             *rty_Systems_pBrakeR, boolean_T *rty_Systems_BBrakeError, real_T
             *rty_Systems_tBrakeError, boolean_T *rty_Systems_BBrakeOn, real_T
             *rty_Systems_pBrakeMax, boolean_T *rty_Systems_BBrakeLight,
             boolean_T *rty_Systems_BPedalOverlap, real_T
             *rty_Systems_tPedalOverlap, boolean_T *rty_Systems_BAppsOK, real_T *
             rty_Systems_tAppsTimer, real_T *rty_Systems_rSteeringAngle, real_T *
             rty_Systems_aSteeringAngle, real_T *rty_Systems_rRegenPaddle,
             boolean_T *rty_Systems_BRegenOn, real_T *rty_Systems_xDamperFL,
             real_T *rty_Systems_xDamperFR, real_T *rty_Systems_xDamperRL,
             real_T *rty_Systems_xDamperRR, boolean_T *rty_Systems_BxDamperFLOk,
             boolean_T *rty_Systems_BxDamperFROk, boolean_T
             *rty_Systems_BxDamperRLOk, boolean_T *rty_Systems_BxDamperRROk,
             boolean_T *rty_Systems_BInverterErrorRear, boolean_T
             *rty_Systems_BInverterErrorFront, boolean_T *rty_Systems_BIMUOK,
             boolean_T *rty_Systems_BIMUError, real_T *rty_Systems_vChassis,
             real_T *rty_Systems_sChassis, boolean_T *rty_Systems_BPageUp,
             boolean_T *rty_Systems_BPageDown, boolean_T *rty_Systems_BInvLVOn,
             boolean_T *rty_Systems_BCalibrationOn, boolean_T
             *rty_Systems_BReadyToDriveButton, boolean_T
             *rty_Systems_BErrorReset, boolean_T *rty_Systems_BTVOn, boolean_T
             *rty_Systems_BTCOn, boolean_T *rty_Systems_BDrivetrainCoolingO,
             boolean_T *rty_Systems_BEMSOn, boolean_T
             *rty_Systems_BSpinningModeOn, real_T *rty_Systems_NThrottleMap,
             real_T *rty_Systems_PDischargeMax, real_T *rty_Systems_rTorqueSplit,
             real_T *rty_Systems_PRegenMax, real_T *rty_Systems_rTVMultiplier,
             real_T *rty_Systems_PEngineBraking, real_T
             *rty_Systems_rEngineBrakingSplit, boolean_T *rty_Systems_BDataMark,
             real_T *rty_Systems_rGrip, real_T *rty_Systems_EOffset, real_T
             *rty_Systems_NTCKdSelector, real_T *rty_Systems_MRegenMax, real_T
             *rty_Systems_NEventMode, real_T *rty_Systems_NPCKpSelector, real_T *
             rty_Systems_TMotorMax, real_T *rty_Systems_TInvMax, boolean_T
             *rty_Systems_BAccuFanOn, boolean_T *rty_Systems_BMotorRBHFanOn,
             boolean_T *rty_Systems_BInverterFanOn, boolean_T
             *rty_Systems_BPCComplete, real_T *rty_Systems_PActual, real_T
             *rty_Systems_rSOC, real_T *rty_Systems_rSOE, real_T
             *rty_Systems_PEnergyMeter, boolean_T *rty_Systems_BOverpower,
             real_T *rty_Systems_tIMUError, real_T *rty_Systems_BTVOnEM, real_T *
             rty_Systems_BTCOnEM, real_T *rty_Systems_BDrivetrainCoolin_e,
             real_T *rty_Systems_BEMSOnEM, real_T *rty_Systems_BSpinningModeOnEM,
             real_T *rty_Systems_rTVMultiplierEM, real_T
             *rty_Systems_rEngineBrakingSpl_k, real_T
             *rty_Systems_NThrottleMapEM, real_T *rty_Systems_PDischargeMaxEM,
             real_T *rty_Systems_rTorqueSplitEM, real_T *rty_Systems_PRegenMaxEM,
             real_T *rty_Systems_PEngineBrakingEM, real_T *rty_Systems_BTVOnOW,
             real_T *rty_Systems_BTCOnOW, real_T
             *rty_Systems_BDrivetrainCoolin_h, real_T *rty_Systems_BEMSOnOW,
             real_T *rty_Systems_BSpinningModeOnOW, real_T
             *rty_Systems_rTVMultiplierOW, real_T
             *rty_Systems_rEngineBrakingSpl_f, real_T
             *rty_Systems_NThrottleMapOW, real_T *rty_Systems_PDischargeMaxOW,
             real_T *rty_Systems_rTorqueSplitOW, real_T *rty_Systems_PRegenMaxOW,
             real_T *rty_Systems_PEngineBrakingOW, real_T
             *rty_Systems_MMotorMaxFL, real_T *rty_Systems_MMotorMaxFR, real_T
             *rty_Systems_MMotorMaxRL, real_T *rty_Systems_MMotorMaxRR,
             DW_SYSTEMS_f_T *localDW)
{
  /* local block i/o variables */
  real_T rtb_Model_o2;
  boolean_T rtb_Model19_o5;

  /* ModelReference: '<S1>/Model10' */
  SteeringWheel(rtu_Global_SensorSignals_NEvent, rtu_Global_SensorSignals_NParam,
                rtu_Global_SensorSignals_BSte_p, rtu_Global_SensorSignals_BSte_m,
                rtu_Global_SensorSignals_NPageS, rtu_Global_SensorSignals_BSte_j,
                rtu_Global_SensorSignals_BSteer, rtu_Global_Stateflow_NCarState,
                rty_Systems_BPageUp, rty_Systems_BPageDown, rty_Systems_BInvLVOn,
                rty_Systems_BCalibrationOn, rty_Systems_BDataMark,
                rty_Systems_BReadyToDriveButton, rty_Systems_BErrorReset,
                rty_Systems_BTVOn, rty_Systems_BTCOn,
                rty_Systems_BDrivetrainCoolingO, rty_Systems_BEMSOn,
                rty_Systems_BSpinningModeOn, rty_Systems_NThrottleMap,
                rty_Systems_PDischargeMax, rty_Systems_rTorqueSplit,
                rty_Systems_PRegenMax, rty_Systems_rTVMultiplier,
                rty_Systems_PEngineBraking, rty_Systems_rEngineBrakingSplit,
                rty_Systems_rGrip, rty_Systems_EOffset,
                rty_Systems_NTCKdSelector, rty_Systems_MRegenMax,
                rty_Systems_NEventMode, rty_Systems_NPCKpSelector,
                rty_Systems_BTVOnEM, rty_Systems_BTCOnEM,
                rty_Systems_BDrivetrainCoolin_e, rty_Systems_BEMSOnEM,
                rty_Systems_BSpinningModeOnEM, rty_Systems_rTVMultiplierEM,
                rty_Systems_PDischargeMaxEM, rty_Systems_NThrottleMapEM,
                rty_Systems_PRegenMaxEM, rty_Systems_rTorqueSplitEM,
                rty_Systems_PEngineBrakingEM, rty_Systems_rEngineBrakingSpl_k,
                rty_Systems_BTVOnOW, rty_Systems_BTCOnOW,
                rty_Systems_BDrivetrainCoolin_h, rty_Systems_BEMSOnOW,
                rty_Systems_BSpinningModeOnOW, rty_Systems_NThrottleMapOW,
                rty_Systems_PDischargeMaxOW, rty_Systems_rTorqueSplitOW,
                rty_Systems_PRegenMaxOW, rty_Systems_rTVMultiplierOW,
                rty_Systems_PEngineBrakingOW, rty_Systems_rEngineBrakingSpl_f,
                &(localDW->Model10_InstanceData.rtb),
                &(localDW->Model10_InstanceData.rtdw));

  /* ModelReference: '<S1>/Model' */
  rThrottle(rtu_Global_SensorSignals_VThrot, rtu_Global_SensorSignals_VThr_e,
            rty_Systems_BCalibrationOn, rty_Systems_rThrottlePedal1,
            &rtb_Model_o2, rty_Systems_rThrottlePedal,
            &(localDW->Model_InstanceData.rtdw));

  /* ModelReference: '<S1>/Model1' */
  BThrottleError(rtu_Global_SensorSignals_VThrot,
                 rtu_Global_SensorSignals_VThr_e, rty_Systems_rThrottlePedal1,
                 &rtb_Model_o2, rty_Systems_BThrottleError,
                 rty_Systems_tThrottleError, &(localDW->Model1_InstanceData.rtdw));

  /* ModelReference: '<S1>/Model11' */
  TractiveSystemTemperatures(rtu_Global_InverterSignals_In_h,
    rtu_Global_InverterSignals_In_p, rtu_Global_InverterSignals_In_c,
    rtu_Global_InverterSignals_I_el, rtu_Global_InverterSignals_I_kw,
    rtu_Global_InverterSignals_In_d, rtu_Global_InverterSignals_In_n,
    rtu_Global_InverterSignals_I_cj, rty_Systems_TMotorMax, rty_Systems_TInvMax);

  /* ModelReference: '<S1>/Model12' */
  PActual(rtu_Global_InverterSignals_In_e, rtu_Global_BMSSignals_IIVTS,
          rty_Systems_PActual);

  /* ModelReference: '<S1>/Model13' */
  rSOC(rtu_Global_BMSSignals_IIVTS, rtu_Global_BMSSignals_VDCAccumu,
       rtu_Global_BMSSignals_VCellMin, rty_Systems_rSOC, rty_Systems_rSOE,
       &(localDW->Model13_InstanceData.rtdw));

  /* ModelReference: '<S1>/Model17' */
  pBrake(rtu_Global_SensorSignals_VBrake, rty_Systems_BCalibrationOn,
         rtu_Global_SensorSignals_VBra_g, rty_Systems_pBrakeF,
         rty_Systems_pBrakeR, &(localDW->Model17_InstanceData.rtdw));

  /* ModelReference: '<S1>/Model2' */
  BBrakeError(rty_Systems_pBrakeF, rty_Systems_pBrakeR,
              rtu_Global_SensorSignals_VBrake, rtu_Global_SensorSignals_VBra_g,
              rty_Systems_BBrakeError, rty_Systems_tBrakeError,
              rty_Systems_BBrakeOn, rty_Systems_pBrakeMax,
              &(localDW->Model2_InstanceData.rtdw));

  /* ModelReference: '<S1>/Model7' */
  rSteeringAngle(rtu_Global_SensorSignals_VSteer, rty_Systems_BCalibrationOn,
                 rty_Systems_rSteeringAngle, rty_Systems_aSteeringAngle,
                 &(localDW->Model7_InstanceData.rtdw));

  /* ModelReference: '<S1>/Model9' */
  vChassis(rtu_Global_WheelSpeeds_vWheelFL, rtu_Global_WheelSpeeds_vWheelFR,
           rtu_Global_WheelSpeeds_vWheelRL, rtu_Global_WheelSpeeds_vWheelRR,
           rtu_Global_GPSIMUSignals_gLater, rtu_Global_GPSIMUSignals_gLongi,
           rty_Systems_aSteeringAngle, rty_Systems_vChassis,
           rty_Systems_sChassis, &(localDW->Model9_InstanceData.rtdw));

  /* ModelReference: '<S1>/Model14' */
  BBrakeLight(rty_Systems_BBrakeOn, rtu_Global_GPSIMUSignals_gLongi,
              rty_Systems_vChassis, rty_Systems_BBrakeLight);

  /* ModelReference: '<S1>/Model15' */
  BPCComplete(rtu_Global_InverterSignals_In_e, rtu_Global_BMSSignals_VDCAccumu,
              rty_Systems_BPCComplete);

  /* ModelReference: '<S1>/Model16' */
  BDrivetrainCoolingOn(rtu_Global_BMSSignals_TCellMax, rty_Systems_TMotorMax,
                       rty_Systems_BDrivetrainCoolingO, rty_Systems_TInvMax,
                       rty_Systems_BAccuFanOn, rty_Systems_BMotorRBHFanOn,
                       rty_Systems_BInverterFanOn);

  /* ModelReference: '<S1>/Model18' */
  BIMUOk(rtu_Global_GPSIMUSignals_gLongi, rtu_Global_GPSIMUSignals_gLater,
         rtu_Global_GPSIMUSignals_nYawRa, rtu_Global_GPSIMUSignals_gVerti,
         rty_Systems_BIMUError, rty_Systems_BIMUOK, rty_Systems_tIMUError,
         &(localDW->Model18_InstanceData.rtdw));

  /* ModelReference: '<S1>/Model19' */
  BDamperOk(rtu_Global_SensorSignals_VDampe, rtu_Global_SensorSignals_VDam_p, ((
              const real_T*) &SYSTEMS_RGND), ((const real_T*) &SYSTEMS_RGND),
            rty_Systems_BxDamperFLOk, rty_Systems_BxDamperFROk,
            rty_Systems_BxDamperRLOk, rty_Systems_BxDamperRROk, &rtb_Model19_o5);

  /* ModelReference: '<S1>/Model20' */
  BInverterError(rtu_Global_InverterSignals_In_k,
                 rtu_Global_InverterSignals_In_o,
                 rtu_Global_InverterSignals_In_g,
                 rtu_Global_InverterSignals__kaa, rty_Systems_BInverterErrorRear,
                 rty_Systems_BInverterErrorFront);

  /* ModelReference: '<S1>/Model21' */
  MMotorMax(rtu_Global_InverterSignals_In_f, rtu_Global_InverterSignals_I_ez,
            rtu_Global_InverterSignals_Inve, rtu_Global_InverterSignals_I_ka,
            rty_Systems_MMotorMaxFL, rty_Systems_MMotorMaxFR,
            rty_Systems_MMotorMaxRL, rty_Systems_MMotorMaxRR);

  /* ModelReference: '<S1>/Model3' */
  xDamper(rtu_Global_SensorSignals_VDampe, rtu_Global_SensorSignals_VDam_p, ((
            const real_T*) &SYSTEMS_RGND), ((const real_T*) &SYSTEMS_RGND),
          rty_Systems_BCalibrationOn, rty_Systems_xDamperFL,
          rty_Systems_xDamperFR, rty_Systems_xDamperRL, rty_Systems_xDamperRR,
          &(localDW->Model3_InstanceData.rtdw));

  /* ModelReference: '<S1>/Model4' */
  PEnergyMeter(rtu_Global_BMSSignals_VDCAccumu, rtu_Global_BMSSignals_IIVTS,
               rty_Systems_PEnergyMeter, rty_Systems_BOverpower,
               &(localDW->Model4_InstanceData.rtdw));

  /* ModelReference: '<S1>/Model5' */
  BPedalOverlap(rty_Systems_rThrottlePedal, rty_Systems_pBrakeMax,
                rty_Systems_BPedalOverlap, rty_Systems_tPedalOverlap,
                &(localDW->Model5_InstanceData.rtdw));

  /* ModelReference: '<S1>/Model6' */
  BAppsOK(rty_Systems_rThrottlePedal, rty_Systems_pBrakeMax, rty_Systems_BAppsOK,
          rty_Systems_tAppsTimer, &(localDW->Model6_InstanceData.rtdw));

  /* ModelReference: '<S1>/Model8' */
  rRegenPaddle(rtu_Global_SensorSignals_VRegen, rtu_Global_SensorSignals_VReg_b,
               rty_Systems_BCalibrationOn, rty_Systems_rRegenPaddle,
               rty_Systems_BRegenOn, &(localDW->Model8_InstanceData.rtdw));
}

/* Model initialize function */
void SYSTEMS_initialize(const char_T **rt_errorStatus, RT_MODEL_SYSTEMS_T *const
  SYSTEMS_M, DW_SYSTEMS_f_T *localDW)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(SYSTEMS_M, rt_errorStatus);

  /* Model Initialize function for ModelReference Block: '<S1>/Model' */
  rThrottle_initialize(rtmGetErrorStatusPointer(SYSTEMS_M),
                       &(localDW->Model_InstanceData.rtm));

  /* Model Initialize function for ModelReference Block: '<S1>/Model1' */
  BThrottleError_initialize(rtmGetErrorStatusPointer(SYSTEMS_M),
    &(localDW->Model1_InstanceData.rtm));

  /* Model Initialize function for ModelReference Block: '<S1>/Model10' */
  SteeringWheel_initialize(rtmGetErrorStatusPointer(SYSTEMS_M),
    &(localDW->Model10_InstanceData.rtm));

  /* Model Initialize function for ModelReference Block: '<S1>/Model11' */
  TractiveSystemTemper_initialize(rtmGetErrorStatusPointer(SYSTEMS_M),
    &(localDW->Model11_InstanceData.rtm));

  /* Model Initialize function for ModelReference Block: '<S1>/Model12' */
  PActual_initialize(rtmGetErrorStatusPointer(SYSTEMS_M),
                     &(localDW->Model12_InstanceData.rtm));

  /* Model Initialize function for ModelReference Block: '<S1>/Model13' */
  rSOC_initialize(rtmGetErrorStatusPointer(SYSTEMS_M),
                  &(localDW->Model13_InstanceData.rtm));

  /* Model Initialize function for ModelReference Block: '<S1>/Model14' */
  BBrakeLight_initialize(rtmGetErrorStatusPointer(SYSTEMS_M),
    &(localDW->Model14_InstanceData.rtm));

  /* Model Initialize function for ModelReference Block: '<S1>/Model15' */
  BPCComplete_initialize(rtmGetErrorStatusPointer(SYSTEMS_M),
    &(localDW->Model15_InstanceData.rtm));

  /* Model Initialize function for ModelReference Block: '<S1>/Model16' */
  BDrivetrainCoolingOn_initialize(rtmGetErrorStatusPointer(SYSTEMS_M),
    &(localDW->Model16_InstanceData.rtm));

  /* Model Initialize function for ModelReference Block: '<S1>/Model17' */
  pBrake_initialize(rtmGetErrorStatusPointer(SYSTEMS_M),
                    &(localDW->Model17_InstanceData.rtm));

  /* Model Initialize function for ModelReference Block: '<S1>/Model18' */
  BIMUOk_initialize(rtmGetErrorStatusPointer(SYSTEMS_M),
                    &(localDW->Model18_InstanceData.rtm));

  /* Model Initialize function for ModelReference Block: '<S1>/Model19' */
  BDamperOk_initialize(rtmGetErrorStatusPointer(SYSTEMS_M),
                       &(localDW->Model19_InstanceData.rtm));

  /* Model Initialize function for ModelReference Block: '<S1>/Model2' */
  BBrakeError_initialize(rtmGetErrorStatusPointer(SYSTEMS_M),
    &(localDW->Model2_InstanceData.rtm));

  /* Model Initialize function for ModelReference Block: '<S1>/Model20' */
  BInverterError_initialize(rtmGetErrorStatusPointer(SYSTEMS_M),
    &(localDW->Model20_InstanceData.rtm));

  /* Model Initialize function for ModelReference Block: '<S1>/Model21' */
  MMotorMax_initialize(rtmGetErrorStatusPointer(SYSTEMS_M),
                       &(localDW->Model21_InstanceData.rtm));

  /* Model Initialize function for ModelReference Block: '<S1>/Model3' */
  xDamper_initialize(rtmGetErrorStatusPointer(SYSTEMS_M),
                     &(localDW->Model3_InstanceData.rtm));

  /* Model Initialize function for ModelReference Block: '<S1>/Model4' */
  PEnergyMeter_initialize(rtmGetErrorStatusPointer(SYSTEMS_M),
    &(localDW->Model4_InstanceData.rtm));

  /* Model Initialize function for ModelReference Block: '<S1>/Model5' */
  BPedalOverlap_initialize(rtmGetErrorStatusPointer(SYSTEMS_M),
    &(localDW->Model5_InstanceData.rtm));

  /* Model Initialize function for ModelReference Block: '<S1>/Model6' */
  BAppsOK_initialize(rtmGetErrorStatusPointer(SYSTEMS_M),
                     &(localDW->Model6_InstanceData.rtm));

  /* Model Initialize function for ModelReference Block: '<S1>/Model7' */
  rSteeringAngle_initialize(rtmGetErrorStatusPointer(SYSTEMS_M),
    &(localDW->Model7_InstanceData.rtm));

  /* Model Initialize function for ModelReference Block: '<S1>/Model8' */
  rRegenPaddle_initialize(rtmGetErrorStatusPointer(SYSTEMS_M),
    &(localDW->Model8_InstanceData.rtm));

  /* Model Initialize function for ModelReference Block: '<S1>/Model9' */
  vChassis_initialize(rtmGetErrorStatusPointer(SYSTEMS_M),
                      &(localDW->Model9_InstanceData.rtm));

  /* user code (Initialize function Body) */
  LL_TIM_EnableCounter(TIM2);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
