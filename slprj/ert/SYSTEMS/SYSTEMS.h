/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: SYSTEMS.h
 *
 * Code generated for Simulink model 'SYSTEMS'.
 *
 * Model version                  : 13.5
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Wed Jun  3 14:57:49 2026
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
#include "rThrottle.h"
#include "BThrottleError.h"
#include "SteeringWheel.h"
#include "TractiveSystemTemperatures.h"
#include "PActual.h"
#include "rSOC.h"
#include "BBrakeError.h"
#include "vChassis.h"
#include "BBrakeLight.h"
#include "BEncoderError.h"
#include "CoolingPWM.h"
#include "xDamper.h"
#include "BDamperError.h"
#include "BPedalOverlap.h"
#include "BAppsOK.h"
#include "rSteeringAngle.h"
#include "rRegenPaddle.h"

/* user code (top of header file) */
#include "stm32h7xx_ll_tim.h"

/* Block signals for model 'SYSTEMS' */
typedef struct {
  real_T Model16_o1;                   /* '<S1>/Model16' */
  real_T Model16_o2;                   /* '<S1>/Model16' */
} B_SYSTEMS_c_T;

/* Block states (default storage) for model 'SYSTEMS' */
typedef struct {
  MdlrefDW_rThrottle_T Model_InstanceData;/* '<S1>/Model' */
  MdlrefDW_BThrottleError_T Model1_InstanceData;/* '<S1>/Model1' */
  MdlrefDW_SteeringWheel_T Model10_InstanceData;/* '<S1>/Model10' */
  MdlrefDW_TractiveSystemTemper_T Model11_InstanceData;/* '<S1>/Model11' */
  MdlrefDW_PActual_T Model12_InstanceData;/* '<S1>/Model12' */
  MdlrefDW_rSOC_T Model13_InstanceData;/* '<S1>/Model13' */
  MdlrefDW_BBrakeError_T Model2_InstanceData;/* '<S1>/Model2' */
  MdlrefDW_vChassis_T Model9_InstanceData;/* '<S1>/Model9' */
  MdlrefDW_BBrakeLight_T Model14_InstanceData;/* '<S1>/Model14' */
  MdlrefDW_BEncoderError_T Model15_InstanceData;/* '<S1>/Model15' */
  MdlrefDW_CoolingPWM_T Model16_InstanceData;/* '<S1>/Model16' */
  MdlrefDW_xDamper_T Model3_InstanceData;/* '<S1>/Model3' */
  MdlrefDW_BDamperError_T Model4_InstanceData;/* '<S1>/Model4' */
  MdlrefDW_BPedalOverlap_T Model5_InstanceData;/* '<S1>/Model5' */
  MdlrefDW_BAppsOK_T Model6_InstanceData;/* '<S1>/Model6' */
  MdlrefDW_rSteeringAngle_T Model7_InstanceData;/* '<S1>/Model7' */
  MdlrefDW_rRegenPaddle_T Model8_InstanceData;/* '<S1>/Model8' */
} DW_SYSTEMS_f_T;

/* Real-time Model Data Structure */
struct tag_RTM_SYSTEMS_T {
  const char_T **errorStatus;
};

typedef struct {
  B_SYSTEMS_c_T rtb;
  DW_SYSTEMS_f_T rtdw;
  RT_MODEL_SYSTEMS_T rtm;
} MdlrefDW_SYSTEMS_T;

/* Model reference registration function */
extern void SYSTEMS_initialize(const char_T **rt_errorStatus, RT_MODEL_SYSTEMS_T
  *const SYSTEMS_M, B_SYSTEMS_c_T *localB, DW_SYSTEMS_f_T *localDW);
extern void SYSTEMS_Init(DW_SYSTEMS_f_T *localDW);
extern void SYSTEMS(const real_T *rtu_Global_InverterSignalsBus_I, const real_T *
                    rtu_Global_InverterSignalsBus_g, const real_T
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
                    *rtu_Global_BMSSignalsBus_IIVTS, real_T
                    *rty_Systems_rThrottlePedal, boolean_T
                    *rty_Systems_BThrottleError, real_T
                    *rty_Systems_tThrottleError, boolean_T
                    *rty_Systems_BBrakeError, real_T *rty_Systems_tBrakeError,
                    boolean_T *rty_Systems_BBrakeOn, real_T
                    *rty_Systems_pBrakeMax, boolean_T *rty_Systems_BPedalOverlap,
                    real_T *rty_Systems_tPedalOverlap, boolean_T
                    *rty_Systems_BAppsOK, real_T *rty_Systems_tAppsTimer, real_T
                    *rty_Systems_rSteeringAngle, real_T
                    *rty_Systems_aSteeringAngle, real_T
                    *rty_Systems_rRegenPaddle, boolean_T *rty_Systems_BRegenOn,
                    boolean_T *rty_Systems_BBrakeLight, real_T
                    *rty_Systems_xDamperFL, real_T *rty_Systems_xDamperFR,
                    real_T *rty_Systems_xDamperRL, real_T *rty_Systems_xDamperRR,
                    boolean_T *rty_Systems_BDamperErrorFL, boolean_T
                    *rty_Systems_BDamperErrorFR, boolean_T
                    *rty_Systems_BDamperErrorRL, boolean_T
                    *rty_Systems_BDamperErrorRR, real_T *rty_Systems_vChassis,
                    real_T *rty_Systems_sChassis, real_T *rty_Systems_sEMS1000m,
                    boolean_T *rty_Systems_BEMS1000mPoint, boolean_T
                    *rty_Systems_BEMS995mPoint, boolean_T
                    *rty_Systems_BTorqueVectoringAct, real_T
                    *rty_Systems_NThrottleMap, real_T *rty_Systems_PDischarge,
                    boolean_T *rty_Systems_BEMSActivated, real_T
                    *rty_Systems_PRegen, real_T *rty_Systems_rTorqueSplit,
                    real_T *rty_Systems_PEngineBraking, boolean_T
                    *rty_Systems_BSpinningModelActiv, real_T
                    *rty_Systems_NTractionControlKpS, boolean_T
                    *rty_Systems_BTractionControlAct, real_T
                    *rty_Systems_rTorqueVectoringMul, real_T
                    *rty_Systems_NPowerControllerKpS, real_T
                    *rty_Systems_NTorqueSplitSpeedSe, boolean_T
                    *rty_Systems_BAccumulatorFanOn, boolean_T
                    *rty_Systems_BErrorReset, boolean_T
                    *rty_Systems_BReadyToDriveButton, real_T
                    *rty_Systems_NModeNumberDisplay5, real_T
                    *rty_Systems_NModeNumberDisplay6, real_T
                    *rty_Systems_TMotorMax, real_T *rty_Systems_TInvMax, real_T *
                    rty_Systems_PActual, real_T *rty_Systems_rSOC, real_T
                    *rty_Systems_rSOE, boolean_T *rty_Systems_BEncoderErrorRear,
                    boolean_T *rty_Systems_BEncoderErrorFront, real_T
                    *rty_Systems_rCoolingFansDuty, real_T
                    *rty_Systems_rCoolingPumpsDuty, boolean_T
                    *rty_Systems_BAccumulatorFanDuty, boolean_T
                    *rty_Systems_BInvLVOn, real_T *rty_Systems_rThrottlePedal1,
                    real_T *rty_Systems_rThrottlePedal2, B_SYSTEMS_c_T *localB,
                    DW_SYSTEMS_f_T *localDW);

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
