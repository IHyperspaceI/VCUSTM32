/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: SYSTEMS.c
 *
 * Code generated for Simulink model 'SYSTEMS'.
 *
 * Model version                  : 13.5
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Tue Jun  2 18:49:18 2026
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
#include "BEncoderError.h"
#include "CoolingPWM.h"
#include "BBrakeError.h"
#include "xDamper.h"
#include "BDamperError.h"
#include "BPedalOverlap.h"
#include "BAppsOK.h"
#include "rSteeringAngle.h"
#include "rRegenPaddle.h"
#include "vChassis.h"

/* System initialize for referenced model: 'SYSTEMS' */
void SYSTEMS_Init(DW_SYSTEMS_f_T *localDW)
{
  /* SystemInitialize for ModelReference: '<S1>/Model10' */
  SteeringWheel_Init(&(localDW->Model10_InstanceData.rtdw));

  /* SystemInitialize for ModelReference: '<S1>/Model13' */
  rSOC_Init(&(localDW->Model13_InstanceData.rtdw));
}

/* Output and update for referenced model: 'SYSTEMS' */
void SYSTEMS(const real_T *rtu_Global_InverterSignalsBus_I, const real_T
             *rtu_Global_InverterSignalsBus_g, const real_T
             *rtu_Global_InverterSignalsBus_c, const real_T
             *rtu_Global_InverterSignalsBus_e, const real_T
             *rtu_Global_InverterSignalsBus_n, const real_T
             *rtu_Global_InverterSignalsBus_f, const real_T
             *rtu_Global_InverterSignalsBus_k, const real_T
             *rtu_Global_InverterSignalsBus_h, const real_T
             *rtu_Global_InverterSignalsBu_kw, const real_T
             *rtu_Global_InverterSignalsBu_ka, const real_T
             *rtu_Global_InverterSignalsB_kaa, const real_T
             *rtu_Global_InverterSignalsBu_el, const real_T
             *rtu_Global_InverterSignalsBu_cj, const real_T
             *rtu_Global_WheelSpeedsBus_vWhee, const real_T
             *rtu_Global_WheelSpeedsBus_vWh_o, const real_T
             *rtu_Global_SensorSignalsBus_pBr, const real_T
             *rtu_Global_SensorSignalsBus_p_d, const real_T
             *rtu_Global_SensorSignalsBus_VDa, const real_T
             *rtu_Global_SensorSignalsBus_V_g, const real_T
             *rtu_Global_SensorSignalsBus_NDi, const real_T
             *rtu_Global_SensorSignalsBus_VSt, const real_T
             *rtu_Global_SensorSignalsBus_VTh, const real_T
             *rtu_Global_SensorSignalsBus_V_p, const boolean_T
             *rtu_Global_SensorSignalsBus_BSt, const boolean_T
             *rtu_Global_SensorSignalsBus_B_o, const boolean_T
             *rtu_Global_SensorSignalsBus_B_e, const boolean_T
             *rtu_Global_SensorSignalsBus_B_m, const boolean_T
             *rtu_Global_SensorSignalsBus_B_j, const real_T
             *rtu_Global_SensorSignalsBus_VRe, const real_T
             *rtu_Global_SensorSignalsBus_V_m, const real_T
             *rtu_Global_SensorSignalsBus__p2, const real_T
             *rtu_Global_SensorSignalsBus_V_i, const real_T
             *rtu_Global_GPSIMUSignalsBus_gLo, const real_T
             *rtu_Global_BMSSignalsBus_TCellM, const real_T
             *rtu_Global_BMSSignalsBus_VDCAcc, const real_T
             *rtu_Global_BMSSignalsBus_IIVTS, real_T *rty_Systems_rThrottlePedal,
             boolean_T *rty_Systems_BThrottleError, real_T
             *rty_Systems_tThrottleError, boolean_T *rty_Systems_BBrakeError,
             real_T *rty_Systems_tBrakeError, boolean_T *rty_Systems_BBrakeOn,
             real_T *rty_Systems_pBrakeMax, boolean_T *rty_Systems_BPedalOverlap,
             real_T *rty_Systems_tPedalOverlap, boolean_T *rty_Systems_BAppsOK,
             real_T *rty_Systems_tAppsTimer, real_T *rty_Systems_rSteeringAngle,
             real_T *rty_Systems_aSteeringAngle, real_T
             *rty_Systems_rRegenPaddle, boolean_T *rty_Systems_BRegenOn,
             boolean_T *rty_Systems_BBrakeLight, real_T *rty_Systems_xDamperFL,
             real_T *rty_Systems_xDamperFR, real_T *rty_Systems_xDamperRL,
             real_T *rty_Systems_xDamperRR, boolean_T
             *rty_Systems_BDamperErrorFL, boolean_T *rty_Systems_BDamperErrorFR,
             boolean_T *rty_Systems_BDamperErrorRL, boolean_T
             *rty_Systems_BDamperErrorRR, real_T *rty_Systems_vChassis, real_T
             *rty_Systems_sChassis, real_T *rty_Systems_sEMS1000m, boolean_T
             *rty_Systems_BEMS1000mPoint, boolean_T *rty_Systems_BEMS995mPoint,
             boolean_T *rty_Systems_BTorqueVectoringAct, real_T
             *rty_Systems_NThrottleMap, real_T *rty_Systems_PDischarge,
             boolean_T *rty_Systems_BEMSActivated, real_T *rty_Systems_PRegen,
             real_T *rty_Systems_rTorqueSplit, real_T
             *rty_Systems_PEngineBraking, boolean_T
             *rty_Systems_BSpinningModelActiv, real_T
             *rty_Systems_NTractionControlKpS, boolean_T
             *rty_Systems_BTractionControlAct, real_T
             *rty_Systems_rTorqueVectoringMul, real_T
             *rty_Systems_NPowerControllerKpS, real_T
             *rty_Systems_NTorqueSplitSpeedSe, boolean_T
             *rty_Systems_BAccumulatorFanOn, boolean_T *rty_Systems_BErrorReset,
             boolean_T *rty_Systems_BReadyToDriveButton, real_T
             *rty_Systems_NModeNumberDisplay5, real_T
             *rty_Systems_NModeNumberDisplay6, real_T *rty_Systems_TMotorMax,
             real_T *rty_Systems_TInvMax, real_T *rty_Systems_PActual, real_T
             *rty_Systems_rSOC, real_T *rty_Systems_rSOE, boolean_T
             *rty_Systems_BEncoderErrorRear, boolean_T
             *rty_Systems_BEncoderErrorFront, real_T
             *rty_Systems_rCoolingFansDuty, real_T
             *rty_Systems_rCoolingPumpsDuty, boolean_T
             *rty_Systems_BAccumulatorFanDuty, boolean_T *rty_Systems_BInvLVOn,
             real_T *rty_Systems_rThrottlePedal1, real_T
             *rty_Systems_rThrottlePedal2, B_SYSTEMS_c_T *localB, DW_SYSTEMS_f_T
             *localDW)
{
  /* ModelReference: '<S1>/Model' */
  rThrottle(rtu_Global_SensorSignalsBus_VTh, rtu_Global_SensorSignalsBus_V_p,
            rty_Systems_rThrottlePedal1, rty_Systems_rThrottlePedal2,
            rty_Systems_rThrottlePedal);

  /* ModelReference: '<S1>/Model1' */
  BThrottleError(rtu_Global_SensorSignalsBus_VTh,
                 rtu_Global_SensorSignalsBus_V_p, rty_Systems_rThrottlePedal1,
                 rty_Systems_rThrottlePedal2, rty_Systems_BThrottleError,
                 rty_Systems_tThrottleError, &(localDW->Model1_InstanceData.rtdw));

  /* ModelReference: '<S1>/Model10' */
  SteeringWheel(rtu_Global_SensorSignalsBus_B_j, rtu_Global_SensorSignalsBus_NDi,
                rtu_Global_SensorSignalsBus_BSt, rtu_Global_SensorSignalsBus_B_e,
                rtu_Global_SensorSignalsBus_B_o, rtu_Global_SensorSignalsBus_B_m,
                rty_Systems_BTorqueVectoringAct, rty_Systems_NThrottleMap,
                rty_Systems_PDischarge, rty_Systems_BEMSActivated,
                rty_Systems_PRegen, rty_Systems_rTorqueSplit,
                rty_Systems_PEngineBraking, rty_Systems_BSpinningModelActiv,
                rty_Systems_NTractionControlKpS, rty_Systems_BTractionControlAct,
                rty_Systems_rTorqueVectoringMul, rty_Systems_NPowerControllerKpS,
                rty_Systems_NTorqueSplitSpeedSe, rty_Systems_BAccumulatorFanOn,
                rty_Systems_BErrorReset, rty_Systems_BReadyToDriveButton,
                rty_Systems_NModeNumberDisplay5, rty_Systems_NModeNumberDisplay6,
                rty_Systems_BInvLVOn, &(localDW->Model10_InstanceData.rtb),
                &(localDW->Model10_InstanceData.rtdw));

  /* ModelReference: '<S1>/Model11' */
  TractiveSystemTemperatures(rtu_Global_InverterSignalsBus_f,
    rtu_Global_InverterSignalsBu_el, rtu_Global_InverterSignalsBus_g,
    rtu_Global_InverterSignalsBu_kw, rtu_Global_InverterSignalsBus_k,
    rtu_Global_InverterSignalsBu_cj, rtu_Global_InverterSignalsBus_e,
    rtu_Global_InverterSignalsBu_ka, rty_Systems_TMotorMax, rty_Systems_TInvMax);

  /* ModelReference: '<S1>/Model12' */
  PActual(rtu_Global_InverterSignalsBus_c, rtu_Global_BMSSignalsBus_IIVTS,
          rty_Systems_PActual);

  /* ModelReference: '<S1>/Model13' */
  rSOC(rtu_Global_BMSSignalsBus_IIVTS, rtu_Global_BMSSignalsBus_VDCAcc,
       rty_Systems_rSOC, rty_Systems_rSOE, &(localDW->Model13_InstanceData.rtdw));

  /* ModelReference: '<S1>/Model2' */
  BBrakeError(rtu_Global_SensorSignalsBus_pBr, rtu_Global_SensorSignalsBus_p_d,
              rty_Systems_BBrakeError, rty_Systems_tBrakeError,
              rty_Systems_BBrakeOn, rty_Systems_pBrakeMax,
              &(localDW->Model2_InstanceData.rtdw));

  /* ModelReference: '<S1>/Model9' */
  vChassis(rtu_Global_WheelSpeedsBus_vWhee, rtu_Global_WheelSpeedsBus_vWh_o,
           rty_Systems_vChassis, rty_Systems_sChassis, rty_Systems_sEMS1000m,
           rty_Systems_BEMS1000mPoint, rty_Systems_BEMS995mPoint,
           &(localDW->Model9_InstanceData.rtdw));

  /* ModelReference: '<S1>/Model14' */
  BBrakeLight(rty_Systems_BBrakeOn, rtu_Global_GPSIMUSignalsBus_gLo,
              rty_Systems_vChassis, rty_Systems_BBrakeLight);

  /* ModelReference: '<S1>/Model15' */
  BEncoderError(rtu_Global_InverterSignalsBus_I, rtu_Global_InverterSignalsBus_n,
                rtu_Global_InverterSignalsBus_h, rtu_Global_InverterSignalsB_kaa,
                rty_Systems_BEncoderErrorRear, rty_Systems_BEncoderErrorFront);

  /* ModelReference: '<S1>/Model16' */
  CoolingPWM(rtu_Global_BMSSignalsBus_TCellM, rty_Systems_BAccumulatorFanOn,
             rty_Systems_BAccumulatorFanDuty);

  /* ModelReference: '<S1>/Model3' */
  xDamper(rtu_Global_SensorSignalsBus_VDa, rtu_Global_SensorSignalsBus_V_g,
          rtu_Global_SensorSignalsBus__p2, rtu_Global_SensorSignalsBus_V_i,
          rty_Systems_xDamperFL, rty_Systems_xDamperFR, rty_Systems_xDamperRL,
          rty_Systems_xDamperRR);

  /* ModelReference: '<S1>/Model4' */
  BDamperError(rtu_Global_SensorSignalsBus_VDa, rtu_Global_SensorSignalsBus_V_g,
               rtu_Global_SensorSignalsBus__p2, rtu_Global_SensorSignalsBus_V_i,
               rty_Systems_BDamperErrorFL, rty_Systems_BDamperErrorFR,
               rty_Systems_BDamperErrorRL, rty_Systems_BDamperErrorRR);

  /* ModelReference: '<S1>/Model5' */
  BPedalOverlap(rty_Systems_rThrottlePedal, rty_Systems_pBrakeMax,
                rty_Systems_BPedalOverlap, rty_Systems_tPedalOverlap,
                &(localDW->Model5_InstanceData.rtdw));

  /* ModelReference: '<S1>/Model6' */
  BAppsOK(rty_Systems_rThrottlePedal, rty_Systems_pBrakeMax, rty_Systems_BAppsOK,
          rty_Systems_tAppsTimer, &(localDW->Model6_InstanceData.rtdw));

  /* ModelReference: '<S1>/Model7' */
  rSteeringAngle(rtu_Global_SensorSignalsBus_VSt, rty_Systems_rSteeringAngle,
                 rty_Systems_aSteeringAngle);

  /* ModelReference: '<S1>/Model8' */
  rRegenPaddle(rtu_Global_SensorSignalsBus_VRe, rtu_Global_SensorSignalsBus_V_m,
               rty_Systems_rRegenPaddle, rty_Systems_BRegenOn);

  /* SignalConversion generated from: '<S1>/Model16' */
  *rty_Systems_rCoolingFansDuty = localB->Model16_o1;

  /* SignalConversion generated from: '<S1>/Model16' */
  *rty_Systems_rCoolingPumpsDuty = localB->Model16_o2;
}

/* Model initialize function */
void SYSTEMS_initialize(const char_T **rt_errorStatus, RT_MODEL_SYSTEMS_T *const
  SYSTEMS_M, B_SYSTEMS_c_T *localB, DW_SYSTEMS_f_T *localDW)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(SYSTEMS_M, rt_errorStatus);

  /* block I/O */
  {
    localB->Model16_o1 = 100.0;
    localB->Model16_o2 = 100.0;
  }

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
  BEncoderError_initialize(rtmGetErrorStatusPointer(SYSTEMS_M),
    &(localDW->Model15_InstanceData.rtm));

  /* Model Initialize function for ModelReference Block: '<S1>/Model16' */
  CoolingPWM_initialize(rtmGetErrorStatusPointer(SYSTEMS_M),
                        &(localDW->Model16_InstanceData.rtm));

  /* Model Initialize function for ModelReference Block: '<S1>/Model2' */
  BBrakeError_initialize(rtmGetErrorStatusPointer(SYSTEMS_M),
    &(localDW->Model2_InstanceData.rtm));

  /* Model Initialize function for ModelReference Block: '<S1>/Model3' */
  xDamper_initialize(rtmGetErrorStatusPointer(SYSTEMS_M),
                     &(localDW->Model3_InstanceData.rtm));

  /* Model Initialize function for ModelReference Block: '<S1>/Model4' */
  BDamperError_initialize(rtmGetErrorStatusPointer(SYSTEMS_M),
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
