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
 * C/C++ source code generated on : Tue Jun  2 18:49:30 2026
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
#include "MDriverDischargeRequested.h"
#include "MLimited.h"
#include "SpinningMode.h"
#include "PowerController.h"
#include "MTotalRequested.h"
#include "EMS.h"
#include "TorqueVectoring.h"
#include "TorqueDistribution.h"
#include "TractionControl.h"
#include "MFinal.h"

/* user code (top of header file) */
#include "stm32h7xx_ll_tim.h"

/* Block states (default storage) for model 'TORQUECONTROL' */
typedef struct {
  MdlrefDW_MDriverRegenRequeste_T Model_InstanceData;/* '<S1>/Model' */
  MdlrefDW_MDriverDischargeRequ_T Model2_InstanceData;/* '<S1>/Model2' */
  MdlrefDW_MLimited_T Model1_InstanceData;/* '<S1>/Model1' */
  MdlrefDW_SpinningMode_T Model9_InstanceData;/* '<S1>/Model9' */
  MdlrefDW_PowerController_T Model3_InstanceData;/* '<S1>/Model3' */
  MdlrefDW_MTotalRequested_T Model4_InstanceData;/* '<S1>/Model4' */
  MdlrefDW_EMS_T Model5_InstanceData;  /* '<S1>/Model5' */
  MdlrefDW_TorqueVectoring_T Model6_InstanceData;/* '<S1>/Model6' */
  MdlrefDW_TorqueDistribution_T Model7_InstanceData;/* '<S1>/Model7' */
  MdlrefDW_TractionControl_T Model8_InstanceData;/* '<S1>/Model8' */
  MdlrefDW_MFinal_T Model10_InstanceData;/* '<S1>/Model10' */
} DW_TORQUECONTROL_f_T;

/* Real-time Model Data Structure */
struct tag_RTM_TORQUECONTROL_T {
  const char_T **errorStatus;
};

typedef struct {
  DW_TORQUECONTROL_f_T rtdw;
  RT_MODEL_TORQUECONTROL_T rtm;
} MdlrefDW_TORQUECONTROL_T;

/* Model reference registration function */
extern void TORQUECONTROL_initialize(const char_T **rt_errorStatus,
  RT_MODEL_TORQUECONTROL_T *const TORQUECONTROL_M, DW_TORQUECONTROL_f_T *localDW);
extern void TORQUECONTROL_Init(DW_TORQUECONTROL_f_T *localDW);
extern void TORQUECONTROL(const real_T *rtu_Global_InverterSignalsBus_I, const
  real_T *rtu_Global_InverterSignalsBus_g, const real_T
  *rtu_Global_InverterSignalsBus_c, const real_T
  *rtu_Global_InverterSignalsBus_e, const real_T
  *rtu_Global_InverterSignalsBus_n, const real_T
  *rtu_Global_WheelSpeedsBus_vWhee, const real_T
  *rtu_Global_WheelSpeedsBus_vWh_k, const real_T
  *rtu_Global_WheelSpeedsBus_vWh_h, const real_T
  *rtu_Global_WheelSpeedsBus_vW_kw, const real_T
  *rtu_Global_GPSIMUSignalsBus_gLo, const real_T
  *rtu_Global_GPSIMUSignalsBus_nYa, const real_T *rtu_Global_BMSSignalsBus_IIVTS,
  const real_T *rtu_Global_SystemsBus_rThrottle, const real_T
  *rtu_Global_SystemsBus_pBrakeMax, const real_T
  *rtu_Global_SystemsBus_rSteering, const real_T
  *rtu_Global_SystemsBus_aSteering, const real_T
  *rtu_Global_SystemsBus_rRegenPad, const real_T *rtu_Global_SystemsBus_vChassis,
  const boolean_T *rtu_Global_SystemsBus_BEMS1000m, const boolean_T
  *rtu_Global_SystemsBus_BEMS995mP, const boolean_T
  *rtu_Global_SystemsBus_BTorqueVe, const real_T
  *rtu_Global_SystemsBus_NThrottle, const real_T
  *rtu_Global_SystemsBus_PDischarg, const boolean_T
  *rtu_Global_SystemsBus_BEMSActiv, const real_T *rtu_Global_SystemsBus_PRegen,
  const real_T *rtu_Global_SystemsBus_PEngineBr, const boolean_T
  *rtu_Global_SystemsBus_BSpinning, const real_T
  *rtu_Global_SystemsBus_NTraction, const boolean_T
  *rtu_Global_SystemsBus_BTraction, const real_T
  *rtu_Global_SystemsBus_rTorqueVe, const real_T
  *rtu_Global_SystemsBus_NPowerCon, const real_T *rtu_Global_SystemsBus_PActual,
  const real_T *rtu_Global_SystemsBus_rSOC, const real_T
  *rtu_Global_SystemsBus_rSOE, const boolean_T *rtu_Global_SystemsBus_BEncoderE,
  const boolean_T *rtu_Global_SystemsBus_BEncode_n, const boolean_T
  *rtu_Global_StateflowBus_BReadyT, const real_T
  *rtu_Global_LimitationsBus_rTSTe, const real_T
  *rtu_Global_LimitationsBus_rTS_e, const real_T
  *rtu_Global_LimitationsBus_rTS_k, const real_T
  *rtu_Global_LimitationsBus_rTS_b, const real_T
  *rtu_Global_LimitationsBus_rDisc, const real_T
  *rtu_Global_LimitationsBus_rRege, real_T *rty_TorqueControl_MDriverDischa,
  real_T *rty_TorqueControl_MDriverRegenR, real_T
  *rty_TorqueControl_MDischargeLim, real_T *rty_TorqueControl_MRegenLimited,
  real_T *rty_TorqueControl_PPowerControl, real_T
  *rty_TorqueControl_MPowerControl, real_T *rty_TorqueControl_PPowerContr_k,
  real_T *rty_TorqueControl_PPowerContr_h, real_T
  *rty_TorqueControl_PDischargeLim, real_T *rty_TorqueControl_MTotalRequest,
  real_T *rty_TorqueControl_MTotalEMSRequ, real_T
  *rty_TorqueControl_rSOCTargetErr, real_T *rty_TorqueControl_rSOETargetErr,
  real_T *rty_TorqueControl_nYawRateError, boolean_T
  *rty_TorqueControl_BTorqueVector, real_T *rty_TorqueControl_MTorqueVector,
  real_T *rty_TorqueControl_MTorqueVect_d, real_T
  *rty_TorqueControl_MTorqueVec_dm, real_T *rty_TorqueControl_MTorqueVect_g,
  real_T *rty_TorqueControl_rSplitRear, real_T *rty_TorqueControl_MTorqueDistri,
  real_T *rty_TorqueControl_MTorqueDist_i, real_T
  *rty_TorqueControl_MTorqueDist_p, real_T *rty_TorqueControl_MTorqueDis_pe,
  real_T *rty_TorqueControl_rSlipRatioOpt, real_T
  *rty_TorqueControl_NTractionCont, real_T *rty_TorqueControl_NTractionCo_m,
  real_T *rty_TorqueControl_NTractionCo_j, real_T
  *rty_TorqueControl_NTractionCo_p, real_T *rty_TorqueControl_NABSMultiplie,
  real_T *rty_TorqueControl_NABSMultipl_p, real_T
  *rty_TorqueControl_NABSMultipl_i, real_T *rty_TorqueControl_NABSMultipl_k,
  real_T *rty_TorqueControl_rSlipRatioFLA, real_T
  *rty_TorqueControl_rSlipRatioFRA, real_T *rty_TorqueControl_rSlipRatioRLA,
  real_T *rty_TorqueControl_rSlipRatioRRA, real_T
  *rty_TorqueControl_MTractionCont, real_T *rty_TorqueControl_MTractionCo_e,
  real_T *rty_TorqueControl_MTractionCo_k, real_T
  *rty_TorqueControl_MTractionCo_b, real_T *rty_TorqueControl_MTractionCo_c,
  real_T *rty_TorqueControl_MTractionCo_l, real_T
  *rty_TorqueControl_MTractionCo_p, real_T *rty_TorqueControl_MTractionC_py,
  real_T *rty_TorqueControl_MSpinningMode, real_T
  *rty_TorqueControl_MSpinningMo_p, real_T *rty_TorqueControl_MSpinningMo_m,
  real_T *rty_TorqueControl_MSpinningMo_n, real_T *rty_TorqueControl_MFLFinal,
  real_T *rty_TorqueControl_MFRFinal, real_T *rty_TorqueControl_MRLFinal, real_T
  *rty_TorqueControl_MRRFinal, real_T *rty_TorqueControl_MTotalFinal,
  DW_TORQUECONTROL_f_T *localDW);

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
