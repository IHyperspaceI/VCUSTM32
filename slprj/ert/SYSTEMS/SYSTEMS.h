/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: SYSTEMS.h
 *
 * Code generated for Simulink model 'SYSTEMS'.
 *
 * Model version                  : 13.6
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Thu Jul 30 16:47:56 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef SYSTEMS_h_
#define SYSTEMS_h_
#ifndef SYSTEMS_COMMON_INCLUDES_
#define SYSTEMS_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                                 /* SYSTEMS_COMMON_INCLUDES_ */

#include "SYSTEMS_types.h"
#include "SteeringWheel.h"
#include "rThrottle.h"
#include "BThrottleError.h"
#include "TractiveSystemTemperatures.h"
#include "PActual.h"
#include "rSOC.h"
#include "pBrake.h"
#include "BBrakeError.h"
#include "rSteeringAngle.h"
#include "vChassis.h"
#include "BBrakeLight.h"
#include "BPCComplete.h"
#include "BDrivetrainCoolingOn.h"
#include "BIMUOk.h"
#include "BDamperOk.h"
#include "BInverterError.h"
#include "MMotorMax.h"
#include "xDamper.h"
#include "PEnergyMeter.h"
#include "BPedalOverlap.h"
#include "BAppsOK.h"
#include "rRegenPaddle.h"

/* user code (top of header file) */
#include "stm32h7xx_ll_tim.h"

/* Block states (default storage) for model 'SYSTEMS' */
typedef struct {
  MdlrefDW_SteeringWheel_T Model10_InstanceData;/* '<S1>/Model10' */
  MdlrefDW_rThrottle_T Model_InstanceData;/* '<S1>/Model' */
  MdlrefDW_BThrottleError_T Model1_InstanceData;/* '<S1>/Model1' */
  MdlrefDW_TractiveSystemTemper_T Model11_InstanceData;/* '<S1>/Model11' */
  MdlrefDW_PActual_T Model12_InstanceData;/* '<S1>/Model12' */
  MdlrefDW_rSOC_T Model13_InstanceData;/* '<S1>/Model13' */
  MdlrefDW_pBrake_T Model17_InstanceData;/* '<S1>/Model17' */
  MdlrefDW_BBrakeError_T Model2_InstanceData;/* '<S1>/Model2' */
  MdlrefDW_rSteeringAngle_T Model7_InstanceData;/* '<S1>/Model7' */
  MdlrefDW_vChassis_T Model9_InstanceData;/* '<S1>/Model9' */
  MdlrefDW_BBrakeLight_T Model14_InstanceData;/* '<S1>/Model14' */
  MdlrefDW_BPCComplete_T Model15_InstanceData;/* '<S1>/Model15' */
  MdlrefDW_BDrivetrainCoolingOn_T Model16_InstanceData;/* '<S1>/Model16' */
  MdlrefDW_BIMUOk_T Model18_InstanceData;/* '<S1>/Model18' */
  MdlrefDW_BDamperOk_T Model19_InstanceData;/* '<S1>/Model19' */
  MdlrefDW_BInverterError_T Model20_InstanceData;/* '<S1>/Model20' */
  MdlrefDW_MMotorMax_T Model21_InstanceData;/* '<S1>/Model21' */
  MdlrefDW_xDamper_T Model3_InstanceData;/* '<S1>/Model3' */
  MdlrefDW_PEnergyMeter_T Model4_InstanceData;/* '<S1>/Model4' */
  MdlrefDW_BPedalOverlap_T Model5_InstanceData;/* '<S1>/Model5' */
  MdlrefDW_BAppsOK_T Model6_InstanceData;/* '<S1>/Model6' */
  MdlrefDW_rRegenPaddle_T Model8_InstanceData;/* '<S1>/Model8' */
} DW_SYSTEMS_f_T;

/* Real-time Model Data Structure */
struct tag_RTM_SYSTEMS_T {
  const char_T **errorStatus;
};

typedef struct {
  DW_SYSTEMS_f_T rtdw;
  RT_MODEL_SYSTEMS_T rtm;
} MdlrefDW_SYSTEMS_T;

/* Model reference registration function */
extern void SYSTEMS_initialize(const char_T **rt_errorStatus, RT_MODEL_SYSTEMS_T
  *const SYSTEMS_M, DW_SYSTEMS_f_T *localDW);
extern void SYSTEMS_Init(real_T *rty_Systems_MRegenMax, real_T
  *rty_Systems_rEngineBrakingSpl_k, real_T *rty_Systems_PEngineBrakingEM,
  DW_SYSTEMS_f_T *localDW);
extern void SYSTEMS(const real_T *rtu_Global_InverterSignals_Inve, const real_T *
                    rtu_Global_InverterSignals_In_g, const real_T
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
                    *rty_Systems_rThrottlePedal1, real_T
                    *rty_Systems_rThrottlePedal, boolean_T
                    *rty_Systems_BThrottleError, real_T
                    *rty_Systems_tThrottleError, real_T *rty_Systems_pBrakeF,
                    real_T *rty_Systems_pBrakeR, boolean_T
                    *rty_Systems_BBrakeError, real_T *rty_Systems_tBrakeError,
                    boolean_T *rty_Systems_BBrakeOn, real_T
                    *rty_Systems_pBrakeMax, boolean_T *rty_Systems_BBrakeLight,
                    boolean_T *rty_Systems_BPedalOverlap, real_T
                    *rty_Systems_tPedalOverlap, boolean_T *rty_Systems_BAppsOK,
                    real_T *rty_Systems_tAppsTimer, real_T
                    *rty_Systems_rSteeringAngle, real_T
                    *rty_Systems_aSteeringAngle, real_T
                    *rty_Systems_rRegenPaddle, boolean_T *rty_Systems_BRegenOn,
                    real_T *rty_Systems_xDamperFL, real_T *rty_Systems_xDamperFR,
                    real_T *rty_Systems_xDamperRL, real_T *rty_Systems_xDamperRR,
                    boolean_T *rty_Systems_BxDamperFLOk, boolean_T
                    *rty_Systems_BxDamperFROk, boolean_T
                    *rty_Systems_BxDamperRLOk, boolean_T
                    *rty_Systems_BxDamperRROk, boolean_T
                    *rty_Systems_BInverterErrorRear, boolean_T
                    *rty_Systems_BInverterErrorFront, boolean_T
                    *rty_Systems_BIMUOK, boolean_T *rty_Systems_BIMUError,
                    real_T *rty_Systems_vChassis, real_T *rty_Systems_sChassis,
                    boolean_T *rty_Systems_BPageUp, boolean_T
                    *rty_Systems_BPageDown, boolean_T *rty_Systems_BInvLVOn,
                    boolean_T *rty_Systems_BCalibrationOn, boolean_T
                    *rty_Systems_BReadyToDriveButton, boolean_T
                    *rty_Systems_BErrorReset, boolean_T *rty_Systems_BTVOn,
                    boolean_T *rty_Systems_BTCOn, boolean_T
                    *rty_Systems_BDrivetrainCoolingO, boolean_T
                    *rty_Systems_BEMSOn, boolean_T *rty_Systems_BSpinningModeOn,
                    real_T *rty_Systems_NThrottleMap, real_T
                    *rty_Systems_PDischargeMax, real_T *rty_Systems_rTorqueSplit,
                    real_T *rty_Systems_PRegenMax, real_T
                    *rty_Systems_rTVMultiplier, real_T
                    *rty_Systems_PEngineBraking, real_T
                    *rty_Systems_rEngineBrakingSplit, boolean_T
                    *rty_Systems_BDataMark, real_T *rty_Systems_rGrip, real_T
                    *rty_Systems_EOffset, real_T *rty_Systems_NTCKdSelector,
                    real_T *rty_Systems_MRegenMax, real_T
                    *rty_Systems_NEventMode, real_T *rty_Systems_NPCKpSelector,
                    real_T *rty_Systems_TMotorMax, real_T *rty_Systems_TInvMax,
                    boolean_T *rty_Systems_BAccuFanOn, boolean_T
                    *rty_Systems_BMotorRBHFanOn, boolean_T
                    *rty_Systems_BInverterFanOn, boolean_T
                    *rty_Systems_BPCComplete, real_T *rty_Systems_PActual,
                    real_T *rty_Systems_rSOC, real_T *rty_Systems_rSOE, real_T
                    *rty_Systems_PEnergyMeter, boolean_T *rty_Systems_BOverpower,
                    real_T *rty_Systems_tIMUError, real_T *rty_Systems_BTVOnEM,
                    real_T *rty_Systems_BTCOnEM, real_T
                    *rty_Systems_BDrivetrainCoolin_e, real_T
                    *rty_Systems_BEMSOnEM, real_T *rty_Systems_BSpinningModeOnEM,
                    real_T *rty_Systems_rTVMultiplierEM, real_T
                    *rty_Systems_rEngineBrakingSpl_k, real_T
                    *rty_Systems_NThrottleMapEM, real_T
                    *rty_Systems_PDischargeMaxEM, real_T
                    *rty_Systems_rTorqueSplitEM, real_T *rty_Systems_PRegenMaxEM,
                    real_T *rty_Systems_PEngineBrakingEM, real_T
                    *rty_Systems_BTVOnOW, real_T *rty_Systems_BTCOnOW, real_T
                    *rty_Systems_BDrivetrainCoolin_h, real_T
                    *rty_Systems_BEMSOnOW, real_T *rty_Systems_BSpinningModeOnOW,
                    real_T *rty_Systems_rTVMultiplierOW, real_T
                    *rty_Systems_rEngineBrakingSpl_f, real_T
                    *rty_Systems_NThrottleMapOW, real_T
                    *rty_Systems_PDischargeMaxOW, real_T
                    *rty_Systems_rTorqueSplitOW, real_T *rty_Systems_PRegenMaxOW,
                    real_T *rty_Systems_PEngineBrakingOW, real_T
                    *rty_Systems_MMotorMaxFL, real_T *rty_Systems_MMotorMaxFR,
                    real_T *rty_Systems_MMotorMaxRL, real_T
                    *rty_Systems_MMotorMaxRR, DW_SYSTEMS_f_T *localDW);
extern const real_T SYSTEMS_RGND;      /* real_T ground */

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
 * '<Root>' : 'SYSTEMS'
 * '<S1>'   : 'SYSTEMS/Systems Model'
 */
#endif                                 /* SYSTEMS_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
