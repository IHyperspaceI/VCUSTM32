/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: InverterSignals.c
 *
 * Code generated for Simulink model 'InverterSignals'.
 *
 * Model version                  : 13.9
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Wed Jun  3 14:52:34 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "InverterSignals.h"
#include "rtwtypes.h"
#include "InverterSignals_private.h"

/* Output and update for referenced model: 'InverterSignals' */
void InverterSignals(const real_T *rtu_InverterCAN_InverterFLCANBu, const
                     boolean_T *rtu_InverterCAN_InverterFLCAN_g, const boolean_T
                     *rtu_InverterCAN_InverterFLCAN_c, const boolean_T
                     *rtu_InverterCAN_InverterFLCAN_e, const boolean_T
                     *rtu_InverterCAN_InverterFLCAN_n, const boolean_T
                     *rtu_InverterCAN_InverterFLCAN_f, const boolean_T
                     *rtu_InverterCAN_InverterFLCAN_k, const boolean_T
                     *rtu_InverterCAN_InverterFLCAN_h, const real_T
                     *rtu_InverterCAN_InverterFLCA_kw, const real_T
                     *rtu_InverterCAN_InverterFLCA_ka, const real_T
                     *rtu_InverterCAN_InverterFLC_kaa, const real_T
                     *rtu_InverterCAN_InverterFLCA_el, const real_T
                     *rtu_InverterCAN_InverterFLCA_cj, const real_T
                     *rtu_InverterCAN_InverterFRCANBu, const boolean_T
                     *rtu_InverterCAN_InverterFRCAN_o, const boolean_T
                     *rtu_InverterCAN_InverterFRCAN_p, const boolean_T
                     *rtu_InverterCAN_InverterFRCAN_d, const boolean_T
                     *rtu_InverterCAN_InverterFRCA_dm, const boolean_T
                     *rtu_InverterCAN_InverterFRCAN_g, const boolean_T
                     *rtu_InverterCAN_InverterFRCAN_m, const boolean_T
                     *rtu_InverterCAN_InverterFRCA_pd, const real_T
                     *rtu_InverterCAN_InverterFRCAN_i, const real_T
                     *rtu_InverterCAN_InverterFRCA_pr, const real_T
                     *rtu_InverterCAN_InverterFRCA_pe, const real_T
                     *rtu_InverterCAN_InverterFRCA_o3, const real_T
                     *rtu_InverterCAN_InverterFRCAN_e, const real_T
                     *rtu_InverterCAN_InverterRLCANBu, const boolean_T
                     *rtu_InverterCAN_InverterRLCAN_j, const boolean_T
                     *rtu_InverterCAN_InverterRLCAN_p, const boolean_T
                     *rtu_InverterCAN_InverterRLCAN_m, const boolean_T
                     *rtu_InverterCAN_InverterRLCA_p2, const boolean_T
                     *rtu_InverterCAN_InverterRLCAN_i, const boolean_T
                     *rtu_InverterCAN_InverterRLCAN_k, const boolean_T
                     *rtu_InverterCAN_InverterRLCAN_h, const real_T
                     *rtu_InverterCAN_InverterRLCAN_b, const real_T
                     *rtu_InverterCAN_InverterRLCAN_n, const real_T
                     *rtu_InverterCAN_InverterRLCAN_g, const real_T
                     *rtu_InverterCAN_InverterRLCA_go, const real_T
                     *rtu_InverterCAN_InverterRLCAN_e, const real_T
                     *rtu_InverterCAN_InverterRRCANBu, const boolean_T
                     *rtu_InverterCAN_InverterRRCAN_b, const boolean_T
                     *rtu_InverterCAN_InverterRRCAN_c, const boolean_T
                     *rtu_InverterCAN_InverterRRCAN_l, const boolean_T
                     *rtu_InverterCAN_InverterRRCAN_p, const boolean_T
                     *rtu_InverterCAN_InverterRRCA_py, const boolean_T
                     *rtu_InverterCAN_InverterRRCAN_e, const boolean_T
                     *rtu_InverterCAN_InverterRRCA_px, const real_T
                     *rtu_InverterCAN_InverterRRCAN_m, const real_T
                     *rtu_InverterCAN_InverterRRCAN_n, const real_T
                     *rtu_InverterCAN_InverterRRCAN_f, const real_T
                     *rtu_InverterCAN_InverterRRCAN_d, const real_T
                     *rtu_InverterCAN_InverterRRCA_mw, real_T
                     *rty_InverterSignalsBus_Inverter, boolean_T
                     *rty_InverterSignalsBus_Invert_g, boolean_T
                     *rty_InverterSignalsBus_Invert_c, boolean_T
                     *rty_InverterSignalsBus_Invert_e, boolean_T
                     *rty_InverterSignalsBus_Invert_n, boolean_T
                     *rty_InverterSignalsBus_Invert_f, boolean_T
                     *rty_InverterSignalsBus_Invert_k, boolean_T
                     *rty_InverterSignalsBus_Invert_h, real_T
                     *rty_InverterSignalsBus_Inver_kw, real_T
                     *rty_InverterSignalsBus_Inver_ka, real_T
                     *rty_InverterSignalsBus_Inve_kaa, real_T
                     *rty_InverterSignalsBus_Inver_el, real_T
                     *rty_InverterSignalsBus_Inver_cj, real_T
                     *rty_InverterSignalsBus_Inver_ez, boolean_T
                     *rty_InverterSignalsBus_Invert_o, boolean_T
                     *rty_InverterSignalsBus_Invert_p, boolean_T
                     *rty_InverterSignalsBus_Invert_d, boolean_T
                     *rty_InverterSignalsBus_Inver_dm, boolean_T
                     *rty_InverterSignalsBus_Inver_gy, boolean_T
                     *rty_InverterSignalsBus_Invert_m, boolean_T
                     *rty_InverterSignalsBus_Inver_pd, real_T
                     *rty_InverterSignalsBus_Invert_i, real_T
                     *rty_InverterSignalsBus_Inver_pr, real_T
                     *rty_InverterSignalsBus_Inver_pe, real_T
                     *rty_InverterSignalsBus_Inver_o3, real_T
                     *rty_InverterSignalsBus_Inver_e4, real_T
                     *rty_InverterSignalsBus_Inver_mc, boolean_T
                     *rty_InverterSignalsBus_Invert_j, boolean_T
                     *rty_InverterSignalsBus_Inver_po, boolean_T
                     *rty_InverterSignalsBus_Inver_m3, boolean_T
                     *rty_InverterSignalsBus_Inver_p2, boolean_T
                     *rty_InverterSignalsBus_Inver_i3, boolean_T
                     *rty_InverterSignalsBus_Inve_ka1, boolean_T
                     *rty_InverterSignalsBus_Inver_hs, real_T
                     *rty_InverterSignalsBus_Invert_b, real_T
                     *rty_InverterSignalsBus_Inver_ng, real_T
                     *rty_InverterSignalsBus_Inve_gye, real_T
                     *rty_InverterSignalsBus_Inver_go, real_T
                     *rty_InverterSignalsBus_Inver_ep, real_T
                     *rty_InverterSignalsBus_Inver_kf, boolean_T
                     *rty_InverterSignalsBus_Inver_bn, boolean_T
                     *rty_InverterSignalsBus_Inver_c4, boolean_T
                     *rty_InverterSignalsBus_Invert_l, boolean_T
                     *rty_InverterSignalsBus_Inver_p4, boolean_T
                     *rty_InverterSignalsBus_Inver_py, boolean_T
                     *rty_InverterSignalsBus_Inver_en, boolean_T
                     *rty_InverterSignalsBus_Inver_px, real_T
                     *rty_InverterSignalsBus_Inver_mk, real_T
                     *rty_InverterSignalsBus_Inver_nk, real_T
                     *rty_InverterSignalsBus_Inver_fp, real_T
                     *rty_InverterSignalsBus_Inver_df, real_T
                     *rty_InverterSignalsBus_Inver_mw)
{
  /* SignalConversion generated from: '<Root>/InverterSignalsBus' */
  *rty_InverterSignalsBus_Inverter = *rtu_InverterCAN_InverterRLCANBu;

  /* SignalConversion generated from: '<Root>/InverterSignalsBus' */
  *rty_InverterSignalsBus_Inver_ka = *rtu_InverterCAN_InverterRLCAN_n;

  /* SignalConversion generated from: '<Root>/InverterSignalsBus' */
  *rty_InverterSignalsBus_Inve_kaa = *rtu_InverterCAN_InverterRLCAN_g;

  /* SignalConversion generated from: '<Root>/InverterSignalsBus' */
  *rty_InverterSignalsBus_Inver_el = *rtu_InverterCAN_InverterRLCA_go;

  /* SignalConversion generated from: '<Root>/InverterSignalsBus' */
  *rty_InverterSignalsBus_Inver_cj = *rtu_InverterCAN_InverterRLCAN_e;

  /* SignalConversion generated from: '<Root>/InverterSignalsBus' */
  *rty_InverterSignalsBus_Inver_ez = *rtu_InverterCAN_InverterFLCANBu;

  /* SignalConversion generated from: '<Root>/InverterSignalsBus' */
  *rty_InverterSignalsBus_Invert_o = *rtu_InverterCAN_InverterFLCAN_g;

  /* SignalConversion generated from: '<Root>/InverterSignalsBus' */
  *rty_InverterSignalsBus_Invert_p = *rtu_InverterCAN_InverterFLCAN_c;

  /* SignalConversion generated from: '<Root>/InverterSignalsBus' */
  *rty_InverterSignalsBus_Invert_d = *rtu_InverterCAN_InverterFLCAN_e;

  /* SignalConversion generated from: '<Root>/InverterSignalsBus' */
  *rty_InverterSignalsBus_Inver_dm = *rtu_InverterCAN_InverterFLCAN_n;

  /* SignalConversion generated from: '<Root>/InverterSignalsBus' */
  *rty_InverterSignalsBus_Inver_gy = *rtu_InverterCAN_InverterFLCAN_f;

  /* SignalConversion generated from: '<Root>/InverterSignalsBus' */
  *rty_InverterSignalsBus_Invert_g = *rtu_InverterCAN_InverterRLCAN_j;

  /* SignalConversion generated from: '<Root>/InverterSignalsBus' */
  *rty_InverterSignalsBus_Invert_m = *rtu_InverterCAN_InverterFLCAN_k;

  /* SignalConversion generated from: '<Root>/InverterSignalsBus' */
  *rty_InverterSignalsBus_Inver_pd = *rtu_InverterCAN_InverterFLCAN_h;

  /* SignalConversion generated from: '<Root>/InverterSignalsBus' */
  *rty_InverterSignalsBus_Invert_i = *rtu_InverterCAN_InverterFLCA_kw;

  /* SignalConversion generated from: '<Root>/InverterSignalsBus' */
  *rty_InverterSignalsBus_Inver_pr = *rtu_InverterCAN_InverterFLCA_ka;

  /* SignalConversion generated from: '<Root>/InverterSignalsBus' */
  *rty_InverterSignalsBus_Inver_pe = *rtu_InverterCAN_InverterFLC_kaa;

  /* SignalConversion generated from: '<Root>/InverterSignalsBus' */
  *rty_InverterSignalsBus_Inver_o3 = *rtu_InverterCAN_InverterFLCA_el;

  /* SignalConversion generated from: '<Root>/InverterSignalsBus' */
  *rty_InverterSignalsBus_Inver_e4 = *rtu_InverterCAN_InverterFLCA_cj;

  /* SignalConversion generated from: '<Root>/InverterSignalsBus' */
  *rty_InverterSignalsBus_Inver_mc = *rtu_InverterCAN_InverterRRCANBu;

  /* SignalConversion generated from: '<Root>/InverterSignalsBus' */
  *rty_InverterSignalsBus_Invert_j = *rtu_InverterCAN_InverterRRCAN_b;

  /* SignalConversion generated from: '<Root>/InverterSignalsBus' */
  *rty_InverterSignalsBus_Inver_po = *rtu_InverterCAN_InverterRRCAN_c;

  /* SignalConversion generated from: '<Root>/InverterSignalsBus' */
  *rty_InverterSignalsBus_Invert_c = *rtu_InverterCAN_InverterRLCAN_p;

  /* SignalConversion generated from: '<Root>/InverterSignalsBus' */
  *rty_InverterSignalsBus_Inver_m3 = *rtu_InverterCAN_InverterRRCAN_l;

  /* SignalConversion generated from: '<Root>/InverterSignalsBus' */
  *rty_InverterSignalsBus_Inver_p2 = *rtu_InverterCAN_InverterRRCAN_p;

  /* SignalConversion generated from: '<Root>/InverterSignalsBus' */
  *rty_InverterSignalsBus_Inver_i3 = *rtu_InverterCAN_InverterRRCA_py;

  /* SignalConversion generated from: '<Root>/InverterSignalsBus' */
  *rty_InverterSignalsBus_Inve_ka1 = *rtu_InverterCAN_InverterRRCAN_e;

  /* SignalConversion generated from: '<Root>/InverterSignalsBus' */
  *rty_InverterSignalsBus_Inver_hs = *rtu_InverterCAN_InverterRRCA_px;

  /* SignalConversion generated from: '<Root>/InverterSignalsBus' */
  *rty_InverterSignalsBus_Invert_b = *rtu_InverterCAN_InverterRRCAN_m;

  /* SignalConversion generated from: '<Root>/InverterSignalsBus' */
  *rty_InverterSignalsBus_Inver_ng = *rtu_InverterCAN_InverterRRCAN_n;

  /* SignalConversion generated from: '<Root>/InverterSignalsBus' */
  *rty_InverterSignalsBus_Inve_gye = *rtu_InverterCAN_InverterRRCAN_f;

  /* SignalConversion generated from: '<Root>/InverterSignalsBus' */
  *rty_InverterSignalsBus_Inver_go = *rtu_InverterCAN_InverterRRCAN_d;

  /* SignalConversion generated from: '<Root>/InverterSignalsBus' */
  *rty_InverterSignalsBus_Inver_ep = *rtu_InverterCAN_InverterRRCA_mw;

  /* SignalConversion generated from: '<Root>/InverterSignalsBus' */
  *rty_InverterSignalsBus_Invert_e = *rtu_InverterCAN_InverterRLCAN_m;

  /* SignalConversion generated from: '<Root>/InverterSignalsBus' */
  *rty_InverterSignalsBus_Inver_kf = *rtu_InverterCAN_InverterFRCANBu;

  /* SignalConversion generated from: '<Root>/InverterSignalsBus' */
  *rty_InverterSignalsBus_Inver_bn = *rtu_InverterCAN_InverterFRCAN_o;

  /* SignalConversion generated from: '<Root>/InverterSignalsBus' */
  *rty_InverterSignalsBus_Inver_c4 = *rtu_InverterCAN_InverterFRCAN_p;

  /* SignalConversion generated from: '<Root>/InverterSignalsBus' */
  *rty_InverterSignalsBus_Invert_l = *rtu_InverterCAN_InverterFRCAN_d;

  /* SignalConversion generated from: '<Root>/InverterSignalsBus' */
  *rty_InverterSignalsBus_Inver_p4 = *rtu_InverterCAN_InverterFRCA_dm;

  /* SignalConversion generated from: '<Root>/InverterSignalsBus' */
  *rty_InverterSignalsBus_Inver_py = *rtu_InverterCAN_InverterFRCAN_g;

  /* SignalConversion generated from: '<Root>/InverterSignalsBus' */
  *rty_InverterSignalsBus_Inver_en = *rtu_InverterCAN_InverterFRCAN_m;

  /* SignalConversion generated from: '<Root>/InverterSignalsBus' */
  *rty_InverterSignalsBus_Inver_px = *rtu_InverterCAN_InverterFRCA_pd;

  /* SignalConversion generated from: '<Root>/InverterSignalsBus' */
  *rty_InverterSignalsBus_Inver_mk = *rtu_InverterCAN_InverterFRCAN_i;

  /* SignalConversion generated from: '<Root>/InverterSignalsBus' */
  *rty_InverterSignalsBus_Inver_nk = *rtu_InverterCAN_InverterFRCA_pr;

  /* SignalConversion generated from: '<Root>/InverterSignalsBus' */
  *rty_InverterSignalsBus_Invert_n = *rtu_InverterCAN_InverterRLCA_p2;

  /* SignalConversion generated from: '<Root>/InverterSignalsBus' */
  *rty_InverterSignalsBus_Inver_fp = *rtu_InverterCAN_InverterFRCA_pe;

  /* SignalConversion generated from: '<Root>/InverterSignalsBus' */
  *rty_InverterSignalsBus_Inver_df = *rtu_InverterCAN_InverterFRCA_o3;

  /* SignalConversion generated from: '<Root>/InverterSignalsBus' */
  *rty_InverterSignalsBus_Inver_mw = *rtu_InverterCAN_InverterFRCAN_e;

  /* SignalConversion generated from: '<Root>/InverterSignalsBus' */
  *rty_InverterSignalsBus_Invert_f = *rtu_InverterCAN_InverterRLCAN_i;

  /* SignalConversion generated from: '<Root>/InverterSignalsBus' */
  *rty_InverterSignalsBus_Invert_k = *rtu_InverterCAN_InverterRLCAN_k;

  /* SignalConversion generated from: '<Root>/InverterSignalsBus' */
  *rty_InverterSignalsBus_Invert_h = *rtu_InverterCAN_InverterRLCAN_h;

  /* SignalConversion generated from: '<Root>/InverterSignalsBus' */
  *rty_InverterSignalsBus_Inver_kw = *rtu_InverterCAN_InverterRLCAN_b;
}

/* Model initialize function */
void InverterSignals_initialize(const char_T **rt_errorStatus,
  RT_MODEL_InverterSignals_T *const InverterSignals_M)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(InverterSignals_M, rt_errorStatus);

  /* user code (Initialize function Body) */
  LL_TIM_EnableCounter(TIM2);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
