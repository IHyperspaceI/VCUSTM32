/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: InverterInputs.c
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

#include "InverterInputs.h"
#include "rtwtypes.h"
#include "InverterInputs_private.h"

/* Output and update for referenced model: 'InverterInputs' */
void InverterInputs(const real_T *rtu_CAN1_2Bus_InverterFL_nMotor, const
                    boolean_T *rtu_CAN1_2Bus_InverterFL_BInvDC, const boolean_T *
                    rtu_CAN1_2Bus_InverterFL_BInvEr, const boolean_T
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
                    *rtu_CAN1_2Bus_InverterRR_TInvRR, real_T
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
                    *rty_InverterSignals_Inverter_mw)
{
  /* SignalConversion generated from: '<Root>/InverterSignals' */
  *rty_InverterSignals_InverterRLS = *rtu_CAN1_2Bus_InverterRL_nMotor;

  /* SignalConversion generated from: '<Root>/InverterSignals' */
  *rty_InverterSignals_Inverter_ka = *rtu_CAN1_2Bus_InverterRL_NInvDT;

  /* SignalConversion generated from: '<Root>/InverterSignals' */
  *rty_InverterSignals_Inverte_kaa = *rtu_CAN1_2Bus_InverterRL_TMotor;

  /* SignalConversion generated from: '<Root>/InverterSignals' */
  *rty_InverterSignals_Inverter_el = *rtu_CAN1_2Bus_InverterRL_VDCInv;

  /* SignalConversion generated from: '<Root>/InverterSignals' */
  *rty_InverterSignals_Inverter_cj = *rtu_CAN1_2Bus_InverterRL_TInvRL;

  /* SignalConversion generated from: '<Root>/InverterSignals' */
  *rty_InverterSignals_InverterFLS = *rtu_CAN1_2Bus_InverterFL_nMotor;

  /* SignalConversion generated from: '<Root>/InverterSignals' */
  *rty_InverterSignals_InverterF_o = *rtu_CAN1_2Bus_InverterFL_BInvDC;

  /* SignalConversion generated from: '<Root>/InverterSignals' */
  *rty_InverterSignals_InverterF_p = *rtu_CAN1_2Bus_InverterFL_BInvEr;

  /* SignalConversion generated from: '<Root>/InverterSignals' */
  *rty_InverterSignals_InverterF_d = *rtu_CAN1_2Bus_InverterFL_BInvOn;

  /* SignalConversion generated from: '<Root>/InverterSignals' */
  *rty_InverterSignals_Inverter_dm = *rtu_CAN1_2Bus_InverterFL_BInvQu;

  /* SignalConversion generated from: '<Root>/InverterSignals' */
  *rty_InverterSignals_InverterF_g = *rtu_CAN1_2Bus_InverterFL_BQuitI;

  /* SignalConversion generated from: '<Root>/InverterSignals' */
  *rty_InverterSignals_InverterR_g = *rtu_CAN1_2Bus_InverterRL_BInvDC;

  /* SignalConversion generated from: '<Root>/InverterSignals' */
  *rty_InverterSignals_InverterF_m = *rtu_CAN1_2Bus_InverterFL_BInvSy;

  /* SignalConversion generated from: '<Root>/InverterSignals' */
  *rty_InverterSignals_Inverter_pd = *rtu_CAN1_2Bus_InverterFL_BInvWa;

  /* SignalConversion generated from: '<Root>/InverterSignals' */
  *rty_InverterSignals_InverterF_i = *rtu_CAN1_2Bus_InverterFL_MMotor;

  /* SignalConversion generated from: '<Root>/InverterSignals' */
  *rty_InverterSignals_Inverter_pr = *rtu_CAN1_2Bus_InverterFL_NInvDT;

  /* SignalConversion generated from: '<Root>/InverterSignals' */
  *rty_InverterSignals_Inverter_pe = *rtu_CAN1_2Bus_InverterFL_TMotor;

  /* SignalConversion generated from: '<Root>/InverterSignals' */
  *rty_InverterSignals_Inverter_o3 = *rtu_CAN1_2Bus_InverterFL_VDCInv;

  /* SignalConversion generated from: '<Root>/InverterSignals' */
  *rty_InverterSignals_InverterF_e = *rtu_CAN1_2Bus_InverterFL_TInvFL;

  /* SignalConversion generated from: '<Root>/InverterSignals' */
  *rty_InverterSignals_InverterRRS = *rtu_CAN1_2Bus_InverterRR_nMotor;

  /* SignalConversion generated from: '<Root>/InverterSignals' */
  *rty_InverterSignals_InverterR_j = *rtu_CAN1_2Bus_InverterRR_BInvDC;

  /* SignalConversion generated from: '<Root>/InverterSignals' */
  *rty_InverterSignals_InverterR_p = *rtu_CAN1_2Bus_InverterRR_BInvEr;

  /* SignalConversion generated from: '<Root>/InverterSignals' */
  *rty_InverterSignals_InverterR_c = *rtu_CAN1_2Bus_InverterRL_BInvEr;

  /* SignalConversion generated from: '<Root>/InverterSignals' */
  *rty_InverterSignals_InverterR_m = *rtu_CAN1_2Bus_InverterRR_BInvOn;

  /* SignalConversion generated from: '<Root>/InverterSignals' */
  *rty_InverterSignals_Inverter_p2 = *rtu_CAN1_2Bus_InverterRR_BInvQu;

  /* SignalConversion generated from: '<Root>/InverterSignals' */
  *rty_InverterSignals_InverterR_i = *rtu_CAN1_2Bus_InverterRR_BQuitI;

  /* SignalConversion generated from: '<Root>/InverterSignals' */
  *rty_InverterSignals_Inverte_ka1 = *rtu_CAN1_2Bus_InverterRR_BInvSy;

  /* SignalConversion generated from: '<Root>/InverterSignals' */
  *rty_InverterSignals_Inverter_hs = *rtu_CAN1_2Bus_InverterRR_BInvWa;

  /* SignalConversion generated from: '<Root>/InverterSignals' */
  *rty_InverterSignals_InverterR_b = *rtu_CAN1_2Bus_InverterRR_MMotor;

  /* SignalConversion generated from: '<Root>/InverterSignals' */
  *rty_InverterSignals_Inverter_ng = *rtu_CAN1_2Bus_InverterRR_NInvDT;

  /* SignalConversion generated from: '<Root>/InverterSignals' */
  *rty_InverterSignals_Inverter_gy = *rtu_CAN1_2Bus_InverterRR_TMotor;

  /* SignalConversion generated from: '<Root>/InverterSignals' */
  *rty_InverterSignals_Inverter_go = *rtu_CAN1_2Bus_InverterRR_VDCInv;

  /* SignalConversion generated from: '<Root>/InverterSignals' */
  *rty_InverterSignals_Inverter_ep = *rtu_CAN1_2Bus_InverterRR_TInvRR;

  /* SignalConversion generated from: '<Root>/InverterSignals' */
  *rty_InverterSignals_InverterR_e = *rtu_CAN1_2Bus_InverterRL_BInvOn;

  /* SignalConversion generated from: '<Root>/InverterSignals' */
  *rty_InverterSignals_InverterFRS = *rtu_CAN1_2Bus_InverterFR_nMotor;

  /* SignalConversion generated from: '<Root>/InverterSignals' */
  *rty_InverterSignals_InverterF_b = *rtu_CAN1_2Bus_InverterFR_BInvDC;

  /* SignalConversion generated from: '<Root>/InverterSignals' */
  *rty_InverterSignals_InverterF_c = *rtu_CAN1_2Bus_InverterFR_BInvEr;

  /* SignalConversion generated from: '<Root>/InverterSignals' */
  *rty_InverterSignals_InverterF_l = *rtu_CAN1_2Bus_InverterFR_BInvOn;

  /* SignalConversion generated from: '<Root>/InverterSignals' */
  *rty_InverterSignals_Inverter_p4 = *rtu_CAN1_2Bus_InverterFR_BInvQu;

  /* SignalConversion generated from: '<Root>/InverterSignals' */
  *rty_InverterSignals_Inverter_py = *rtu_CAN1_2Bus_InverterFR_BQuitI;

  /* SignalConversion generated from: '<Root>/InverterSignals' */
  *rty_InverterSignals_Inverter_en = *rtu_CAN1_2Bus_InverterFR_BInvSy;

  /* SignalConversion generated from: '<Root>/InverterSignals' */
  *rty_InverterSignals_Inverter_px = *rtu_CAN1_2Bus_InverterFR_BInvWa;

  /* SignalConversion generated from: '<Root>/InverterSignals' */
  *rty_InverterSignals_Inverter_mk = *rtu_CAN1_2Bus_InverterFR_MMotor;

  /* SignalConversion generated from: '<Root>/InverterSignals' */
  *rty_InverterSignals_InverterF_n = *rtu_CAN1_2Bus_InverterFR_NInvDT;

  /* SignalConversion generated from: '<Root>/InverterSignals' */
  *rty_InverterSignals_InverterR_n = *rtu_CAN1_2Bus_InverterRL_BInvQu;

  /* SignalConversion generated from: '<Root>/InverterSignals' */
  *rty_InverterSignals_InverterF_f = *rtu_CAN1_2Bus_InverterFR_TMotor;

  /* SignalConversion generated from: '<Root>/InverterSignals' */
  *rty_InverterSignals_Inverter_df = *rtu_CAN1_2Bus_InverterFR_VDCInv;

  /* SignalConversion generated from: '<Root>/InverterSignals' */
  *rty_InverterSignals_Inverter_mw = *rtu_CAN1_2Bus_InverterFR_TInvFR;

  /* SignalConversion generated from: '<Root>/InverterSignals' */
  *rty_InverterSignals_InverterR_f = *rtu_CAN1_2Bus_InverterRL_BQuitI;

  /* SignalConversion generated from: '<Root>/InverterSignals' */
  *rty_InverterSignals_InverterR_k = *rtu_CAN1_2Bus_InverterRL_BInvSy;

  /* SignalConversion generated from: '<Root>/InverterSignals' */
  *rty_InverterSignals_InverterR_h = *rtu_CAN1_2Bus_InverterRL_BInvWa;

  /* SignalConversion generated from: '<Root>/InverterSignals' */
  *rty_InverterSignals_Inverter_kw = *rtu_CAN1_2Bus_InverterRL_MMotor;
}

/* Model initialize function */
void InverterInputs_initialize(const char_T **rt_errorStatus,
  RT_MODEL_InverterInputs_T *const InverterInputs_M)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(InverterInputs_M, rt_errorStatus);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
