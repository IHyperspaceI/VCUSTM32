/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: TORQUECONTROL.h
 *
 * Code generated for Simulink model 'TORQUECONTROL'.
 *
 * Model version                  : 13.5
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Tue Sep  8 11:44:52 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef TORQUECONTROL_h_
#define TORQUECONTROL_h_
#ifndef TORQUECONTROL_COMMON_INCLUDES_
#define TORQUECONTROL_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                                 /* TORQUECONTROL_COMMON_INCLUDES_ */

#include "TORQUECONTROL_types.h"
#include "MDriverRegenRequested.h"
#include "StateEstimation.h"
#include "SpinningMode.h"
#include "MDriverDischargeRequested.h"
#include "PowerController.h"
#include "MTotalRequested.h"
#include "TorqueVectoring.h"
#include "TorqueDistribution.h"
#include "TractionControl.h"
#include "MFinal.h"
#include "EMS.h"

/* Block signals for model 'TORQUECONTROL' */
typedef struct {
  real_T Model1_o26;                   /* '<S1>/Model1' */
  real_T Model1_o27;                   /* '<S1>/Model1' */
} B_TORQUECONTROL_c_T;

/* Block states (default storage) for model 'TORQUECONTROL' */
typedef struct {
  MdlrefDW_MDriverRegenRequeste_T Model_InstanceData;/* '<S1>/Model' */
  MdlrefDW_StateEstimation_T Model1_InstanceData;/* '<S1>/Model1' */
  MdlrefDW_SpinningMode_T Model9_InstanceData;/* '<S1>/Model9' */
  MdlrefDW_MDriverDischargeRequ_T Model2_InstanceData;/* '<S1>/Model2' */
  MdlrefDW_PowerController_T Model3_InstanceData;/* '<S1>/Model3' */
  MdlrefDW_MTotalRequested_T Model4_InstanceData;/* '<S1>/Model4' */
  MdlrefDW_TorqueVectoring_T Model6_InstanceData;/* '<S1>/Model6' */
  MdlrefDW_TorqueDistribution_T Model7_InstanceData;/* '<S1>/Model7' */
  MdlrefDW_TractionControl_T Model8_InstanceData;/* '<S1>/Model8' */
  MdlrefDW_MFinal_T Model10_InstanceData;/* '<S1>/Model10' */
  MdlrefDW_EMS_T Model5_InstanceData;  /* '<S1>/Model5' */
} DW_TORQUECONTROL_f_T;

/* Real-time Model Data Structure */
struct tag_RTM_TORQUECONTROL_T {
  const char_T **errorStatus;
};

typedef struct {
  B_TORQUECONTROL_c_T rtb;
  DW_TORQUECONTROL_f_T rtdw;
  RT_MODEL_TORQUECONTROL_T rtm;
} MdlrefDW_TORQUECONTROL_T;

/* Model reference registration function */
extern void TORQUECONTROL_initialize(const char_T **rt_errorStatus,
  RT_MODEL_TORQUECONTROL_T *const TORQUECONTROL_M, DW_TORQUECONTROL_f_T *localDW);
extern void TORQUECONTROL_Init(DW_TORQUECONTROL_f_T *localDW);
extern void TORQUECONTROL(const real_T *rtu_Global_InverterSignals_Inve, const
  real_T *rtu_Global_InverterSignals_In_g, const real_T
  *rtu_Global_InverterSignals_In_c, const real_T
  *rtu_Global_InverterSignals_In_e, const real_T
  *rtu_Global_InverterSignals_In_n, const real_T
  *rtu_Global_WheelSpeeds_vWheelRL, const real_T
  *rtu_Global_WheelSpeeds_vWheelRR, const real_T
  *rtu_Global_WheelSpeeds_vWheelFL, const real_T
  *rtu_Global_WheelSpeeds_vWheelFR, const real_T
  *rtu_Global_GPSIMUSignals_vLater, const real_T
  *rtu_Global_GPSIMUSignals_gLater, const real_T
  *rtu_Global_GPSIMUSignals_gLongi, const real_T
  *rtu_Global_GPSIMUSignals_nYawRa, const real_T *rtu_Global_BMSSignals_IIVTS,
  const real_T *rtu_Global_Systems_rThrottlePed, const real_T
  *rtu_Global_Systems_pBrakeMax, const real_T *rtu_Global_Systems_rSteeringAng,
  const real_T *rtu_Global_Systems_aSteeringAng, const real_T
  *rtu_Global_Systems_rRegenPaddle, const real_T *rtu_Global_Systems_vChassis,
  const real_T *rtu_Global_Systems_sChassis, const boolean_T
  *rtu_Global_Systems_BTVOn, const boolean_T *rtu_Global_Systems_BTCOn, const
  boolean_T *rtu_Global_Systems_BEMSOn, const boolean_T
  *rtu_Global_Systems_BSpinningMod, const real_T
  *rtu_Global_Systems_NThrottleMap, const real_T
  *rtu_Global_Systems_PDischargeMa, const real_T
  *rtu_Global_Systems_rTorqueSplit, const real_T *rtu_Global_Systems_PRegenMax,
  const real_T *rtu_Global_Systems_rTVMultiplie, const real_T
  *rtu_Global_Systems_PEngineBraki, const real_T
  *rtu_Global_Systems_rEngineBraki, const real_T *rtu_Global_Systems_rGrip,
  const real_T *rtu_Global_Systems_EOffset, const real_T
  *rtu_Global_Systems_NTCKdSelecto, const real_T *rtu_Global_Systems_MRegenMax,
  const real_T *rtu_Global_Systems_NPCKpSelecto, const real_T
  *rtu_Global_Systems_PActual, const real_T *rtu_Global_Systems_rSOE, const
  real_T *rtu_Global_Systems_MMotorMaxFL, const real_T
  *rtu_Global_Systems_MMotorMaxFR, const real_T *rtu_Global_Systems_MMotorMaxRL,
  const real_T *rtu_Global_Systems_MMotorMaxRR, const boolean_T
  *rtu_Global_Stateflow_BReadyToDr, const boolean_T
  *rtu_Global_Limitations_BDischar, const real_T
  *rtu_Global_Limitations_PTSTempe, const real_T
  *rtu_Global_Limitations_PTSTem_n, const real_T
  *rtu_Global_Limitations_PTSTem_f, const real_T
  *rtu_Global_Limitations_PTSTem_d, const real_T
  *rtu_Global_Limitations_rSpeedRe, const real_T
  *rtu_Global_Limitations_rSpeed_h, const real_T
  *rtu_Global_Limitations_rSpee_hz, const real_T
  *rtu_Global_Limitations_rSpee_h2, const real_T
  *rtu_Global_Limitations_PDischar, const real_T
  *rtu_Global_Limitations_PRegenDe, real_T *rty_TorqueControl_MDriverDischa,
  real_T *rty_TorqueControl_PRegenRequest, real_T
  *rty_TorqueControl_MDriverRegenR, real_T *rty_TorqueControl_PDischargeLim,
  real_T *rty_TorqueControl_PPCIntegralTe, real_T
  *rty_TorqueControl_PPCProportion, real_T *rty_TorqueControl_MPCDischargeR,
  real_T *rty_TorqueControl_PRegenLimit, real_T *rty_TorqueControl_PPCIntegral_k,
  real_T *rty_TorqueControl_PPCProporti_k, real_T
  *rty_TorqueControl_MPCRegenReque, real_T *rty_TorqueControl_PPCDischargeR,
  real_T *rty_TorqueControl_PPCRegenReque, real_T
  *rty_TorqueControl_MDischargeLim, real_T *rty_TorqueControl_MRegenLimited,
  real_T *rty_TorqueControl_MTotalRequest, boolean_T
  *rty_TorqueControl_BEMSDriverSig, boolean_T *rty_TorqueControl_BEMSDriverS_d,
  boolean_T *rty_TorqueControl_BEMSDriverS_g, real_T *rty_TorqueControl_NLap,
  real_T *rty_TorqueControl_NSectorGlobal, real_T *rty_TorqueControl_NSectorLap,
  real_T *rty_TorqueControl_ESector, real_T *rty_TorqueControl_ERemaining,
  real_T *rty_TorqueControl_EBudget, real_T *rty_TorqueControl_sSector, real_T
  *rty_TorqueControl_rSlipRatioFLA, real_T *rty_TorqueControl_rSlipRatioFRA,
  real_T *rty_TorqueControl_rSlipRatioRLA, real_T
  *rty_TorqueControl_rSlipRatioRRA, real_T *rty_TorqueControl_FLongitudinal,
  real_T *rty_TorqueControl_FTyreVertical, real_T
  *rty_TorqueControl_FTyreVertic_k, real_T *rty_TorqueControl_FTyreVertic_h,
  real_T *rty_TorqueControl_FTyreVertic_b, real_T
  *rty_TorqueControl_aSlipAngleFL, real_T *rty_TorqueControl_aSlipAngleFR,
  real_T *rty_TorqueControl_aSlipAngleRL, real_T *rty_TorqueControl_aSlipAngleRR,
  real_T *rty_TorqueControl_aCamberFL, real_T *rty_TorqueControl_aCamberFR,
  real_T *rty_TorqueControl_aCamberRL, real_T *rty_TorqueControl_aCamberRR,
  real_T *rty_TorqueControl_FTotalLateral, real_T
  *rty_TorqueControl_FLateralLoadT, real_T *rty_TorqueControl_FLateralLoa_e,
  real_T *rty_TorqueControl_FTotalDownfor, real_T *rty_TorqueControl_FDownforceF,
  real_T *rty_TorqueControl_FDownforceR, real_T *rty_TorqueControl_aCamberGainSt,
  real_T *rty_TorqueControl_aCamberGain_d, real_T
  *rty_TorqueControl_xHeaveTravelF, real_T *rty_TorqueControl_xHeaveTravelR,
  real_T *rty_TorqueControl_aCamberGainHe, real_T
  *rty_TorqueControl_aCamberGain_h, real_T *rty_TorqueControl_aRollAngle, real_T
  *rty_TorqueControl_nYawRateError, boolean_T *rty_TorqueControl_BTVOK, real_T
  *rty_TorqueControl_MTorqueVector, real_T *rty_TorqueControl_MTorqueVect_i,
  real_T *rty_TorqueControl_MTorqueVect_d, real_T
  *rty_TorqueControl_MTorqueVect_a, real_T *rty_TorqueControl_rSplitRear, real_T
  *rty_TorqueControl_MTorqueDistri, real_T *rty_TorqueControl_MTorqueDist_d,
  real_T *rty_TorqueControl_MTorqueDist_j, real_T
  *rty_TorqueControl_MTorqueDist_l, real_T *rty_TorqueControl_rSlipRatioOpt,
  real_T *rty_TorqueControl_NTractionCont, real_T
  *rty_TorqueControl_NTractionCo_h, real_T *rty_TorqueControl_NTractionC_hc,
  real_T *rty_TorqueControl_NTractionC_hl, real_T
  *rty_TorqueControl_NABSMultiplie, real_T *rty_TorqueControl_NABSMultipl_h,
  real_T *rty_TorqueControl_NABSMultipl_b, real_T
  *rty_TorqueControl_NABSMultipl_a, real_T *rty_TorqueControl_NSector1Remai,
  real_T *rty_TorqueControl_NSector2Remai, real_T
  *rty_TorqueControl_NSector3Remai, real_T *rty_TorqueControl_NSector4Remai,
  real_T *rty_TorqueControl_NSector5Remai, real_T
  *rty_TorqueControl_NSector6Remai, real_T *rty_TorqueControl_NSector7Remai,
  real_T *rty_TorqueControl_NSector8Remai, real_T
  *rty_TorqueControl_NSector9Remai, real_T *rty_TorqueControl_NSector10Rema,
  real_T *rty_TorqueControl_NSector11Rema, real_T
  *rty_TorqueControl_NSector12Rema, real_T *rty_TorqueControl_ETotalRequest,
  real_T *rty_TorqueControl_ESector1Remai, real_T
  *rty_TorqueControl_ESector2Remai, real_T *rty_TorqueControl_ESector3Remai,
  real_T *rty_TorqueControl_MTractionCont, real_T
  *rty_TorqueControl_MTractionCo_e, real_T *rty_TorqueControl_MTractionCo_l,
  real_T *rty_TorqueControl_MTractionC_l2, real_T
  *rty_TorqueControl_ESector4Remai, real_T *rty_TorqueControl_ESector5Remai,
  real_T *rty_TorqueControl_ESector6Remai, real_T
  *rty_TorqueControl_ESector7Remai, real_T *rty_TorqueControl_ESector8Remai,
  real_T *rty_TorqueControl_ESector9Remai, real_T
  *rty_TorqueControl_ESector10Rema, real_T *rty_TorqueControl_ESector11Rema,
  real_T *rty_TorqueControl_ESector12Rema, real_T *rty_TorqueControl_MFLFinal,
  real_T *rty_TorqueControl_MFRFinal, real_T *rty_TorqueControl_MRLFinal, real_T
  *rty_TorqueControl_MRRFinal, real_T *rty_TorqueControl_MTotalFinal, real_T
  *rty_TorqueControl_PDischargeL_k, DW_TORQUECONTROL_f_T *localDW);

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
 * '<Root>' : 'TORQUECONTROL'
 * '<S1>'   : 'TORQUECONTROL/TorqueControl Model '
 */
#endif                                 /* TORQUECONTROL_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
