/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: InverterSignals.h
 *
 * Code generated for Simulink model 'InverterSignals'.
 *
 * Model version                  : 13.9
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Tue Jun  2 18:43:57 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef InverterSignals_h_
#define InverterSignals_h_
#ifndef InverterSignals_COMMON_INCLUDES_
#define InverterSignals_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                                 /* InverterSignals_COMMON_INCLUDES_ */

#include "InverterSignals_types.h"

/* user code (top of header file) */
#include "stm32h7xx_ll_tim.h"

/* Real-time Model Data Structure */
struct tag_RTM_InverterSignals_T {
  const char_T **errorStatus;
};

typedef struct {
  RT_MODEL_InverterSignals_T rtm;
} MdlrefDW_InverterSignals_T;

/* Model reference registration function */
extern void InverterSignals_initialize(const char_T **rt_errorStatus,
  RT_MODEL_InverterSignals_T *const InverterSignals_M);
extern void InverterSignals(const real_T *rtu_InverterCAN_InverterFLCANBu, const
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
  *rtu_InverterCAN_InverterRRCA_mw, real_T *rty_InverterSignalsBus_Inverter,
  boolean_T *rty_InverterSignalsBus_Invert_g, boolean_T
  *rty_InverterSignalsBus_Invert_c, boolean_T *rty_InverterSignalsBus_Invert_e,
  boolean_T *rty_InverterSignalsBus_Invert_n, boolean_T
  *rty_InverterSignalsBus_Invert_f, boolean_T *rty_InverterSignalsBus_Invert_k,
  boolean_T *rty_InverterSignalsBus_Invert_h, real_T
  *rty_InverterSignalsBus_Inver_kw, real_T *rty_InverterSignalsBus_Inver_ka,
  real_T *rty_InverterSignalsBus_Inve_kaa, real_T
  *rty_InverterSignalsBus_Inver_el, real_T *rty_InverterSignalsBus_Inver_cj,
  real_T *rty_InverterSignalsBus_Inver_ez, boolean_T
  *rty_InverterSignalsBus_Invert_o, boolean_T *rty_InverterSignalsBus_Invert_p,
  boolean_T *rty_InverterSignalsBus_Invert_d, boolean_T
  *rty_InverterSignalsBus_Inver_dm, boolean_T *rty_InverterSignalsBus_Inver_gy,
  boolean_T *rty_InverterSignalsBus_Invert_m, boolean_T
  *rty_InverterSignalsBus_Inver_pd, real_T *rty_InverterSignalsBus_Invert_i,
  real_T *rty_InverterSignalsBus_Inver_pr, real_T
  *rty_InverterSignalsBus_Inver_pe, real_T *rty_InverterSignalsBus_Inver_o3,
  real_T *rty_InverterSignalsBus_Inver_e4, real_T
  *rty_InverterSignalsBus_Inver_mc, boolean_T *rty_InverterSignalsBus_Invert_j,
  boolean_T *rty_InverterSignalsBus_Inver_po, boolean_T
  *rty_InverterSignalsBus_Inver_m3, boolean_T *rty_InverterSignalsBus_Inver_p2,
  boolean_T *rty_InverterSignalsBus_Inver_i3, boolean_T
  *rty_InverterSignalsBus_Inve_ka1, boolean_T *rty_InverterSignalsBus_Inver_hs,
  real_T *rty_InverterSignalsBus_Invert_b, real_T
  *rty_InverterSignalsBus_Inver_ng, real_T *rty_InverterSignalsBus_Inve_gye,
  real_T *rty_InverterSignalsBus_Inver_go, real_T
  *rty_InverterSignalsBus_Inver_ep, real_T *rty_InverterSignalsBus_Inver_kf,
  boolean_T *rty_InverterSignalsBus_Inver_bn, boolean_T
  *rty_InverterSignalsBus_Inver_c4, boolean_T *rty_InverterSignalsBus_Invert_l,
  boolean_T *rty_InverterSignalsBus_Inver_p4, boolean_T
  *rty_InverterSignalsBus_Inver_py, boolean_T *rty_InverterSignalsBus_Inver_en,
  boolean_T *rty_InverterSignalsBus_Inver_px, real_T
  *rty_InverterSignalsBus_Inver_mk, real_T *rty_InverterSignalsBus_Inver_nk,
  real_T *rty_InverterSignalsBus_Inver_fp, real_T
  *rty_InverterSignalsBus_Inver_df, real_T *rty_InverterSignalsBus_Inver_mw);

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
 * '<Root>' : 'InverterSignals'
 * '<S1>'   : 'InverterSignals/InverterFLSignals System'
 * '<S2>'   : 'InverterSignals/InverterFRSignals System'
 * '<S3>'   : 'InverterSignals/InverterRLSignals System'
 * '<S4>'   : 'InverterSignals/InverterRRSignals System'
 */
#endif                                 /* InverterSignals_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
