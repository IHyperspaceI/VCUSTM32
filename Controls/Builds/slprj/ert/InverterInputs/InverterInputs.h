/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: InverterInputs.h
 *
 * Code generated for Simulink model 'InverterInputs'.
 *
 * Model version                  : 13.3
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Tue Sep  8 11:37:34 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef InverterInputs_h_
#define InverterInputs_h_
#ifndef InverterInputs_COMMON_INCLUDES_
#define InverterInputs_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                                 /* InverterInputs_COMMON_INCLUDES_ */

#include "InverterInputs_types.h"

/* Real-time Model Data Structure */
struct tag_RTM_InverterInputs_T {
  const char_T **errorStatus;
};

typedef struct {
  RT_MODEL_InverterInputs_T rtm;
} MdlrefDW_InverterInputs_T;

/* Model reference registration function */
extern void InverterInputs_initialize(const char_T **rt_errorStatus,
  RT_MODEL_InverterInputs_T *const InverterInputs_M);
extern void InverterInputs(const real_T *rtu_CAN1_2Bus_InverterFL_nMotor, const
  boolean_T *rtu_CAN1_2Bus_InverterFL_BInvDC, const boolean_T
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
  *rtu_CAN1_2Bus_InverterRR_TInvRR, real_T *rty_InverterSignals_InverterRLS,
  boolean_T *rty_InverterSignals_InverterR_g, boolean_T
  *rty_InverterSignals_InverterR_c, boolean_T *rty_InverterSignals_InverterR_e,
  boolean_T *rty_InverterSignals_InverterR_n, boolean_T
  *rty_InverterSignals_InverterR_f, boolean_T *rty_InverterSignals_InverterR_k,
  boolean_T *rty_InverterSignals_InverterR_h, real_T
  *rty_InverterSignals_Inverter_kw, real_T *rty_InverterSignals_Inverter_ka,
  real_T *rty_InverterSignals_Inverte_kaa, real_T
  *rty_InverterSignals_Inverter_el, real_T *rty_InverterSignals_Inverter_cj,
  real_T *rty_InverterSignals_InverterFLS, boolean_T
  *rty_InverterSignals_InverterF_o, boolean_T *rty_InverterSignals_InverterF_p,
  boolean_T *rty_InverterSignals_InverterF_d, boolean_T
  *rty_InverterSignals_Inverter_dm, boolean_T *rty_InverterSignals_InverterF_g,
  boolean_T *rty_InverterSignals_InverterF_m, boolean_T
  *rty_InverterSignals_Inverter_pd, real_T *rty_InverterSignals_InverterF_i,
  real_T *rty_InverterSignals_Inverter_pr, real_T
  *rty_InverterSignals_Inverter_pe, real_T *rty_InverterSignals_Inverter_o3,
  real_T *rty_InverterSignals_InverterF_e, real_T
  *rty_InverterSignals_InverterRRS, boolean_T *rty_InverterSignals_InverterR_j,
  boolean_T *rty_InverterSignals_InverterR_p, boolean_T
  *rty_InverterSignals_InverterR_m, boolean_T *rty_InverterSignals_Inverter_p2,
  boolean_T *rty_InverterSignals_InverterR_i, boolean_T
  *rty_InverterSignals_Inverte_ka1, boolean_T *rty_InverterSignals_Inverter_hs,
  real_T *rty_InverterSignals_InverterR_b, real_T
  *rty_InverterSignals_Inverter_ng, real_T *rty_InverterSignals_Inverter_gy,
  real_T *rty_InverterSignals_Inverter_go, real_T
  *rty_InverterSignals_Inverter_ep, real_T *rty_InverterSignals_InverterFRS,
  boolean_T *rty_InverterSignals_InverterF_b, boolean_T
  *rty_InverterSignals_InverterF_c, boolean_T *rty_InverterSignals_InverterF_l,
  boolean_T *rty_InverterSignals_Inverter_p4, boolean_T
  *rty_InverterSignals_Inverter_py, boolean_T *rty_InverterSignals_Inverter_en,
  boolean_T *rty_InverterSignals_Inverter_px, real_T
  *rty_InverterSignals_Inverter_mk, real_T *rty_InverterSignals_InverterF_n,
  real_T *rty_InverterSignals_InverterF_f, real_T
  *rty_InverterSignals_Inverter_df, real_T *rty_InverterSignals_Inverter_mw);

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
 * '<Root>' : 'InverterInputs'
 * '<S1>'   : 'InverterInputs/InverterFLSignals System'
 * '<S2>'   : 'InverterInputs/InverterFRSignals System'
 * '<S3>'   : 'InverterInputs/InverterRLSignals System'
 * '<S4>'   : 'InverterInputs/InverterRRSignals System'
 */
#endif                                 /* InverterInputs_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
