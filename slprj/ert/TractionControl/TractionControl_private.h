/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: TractionControl_private.h
 *
 * Code generated for Simulink model 'TractionControl'.
 *
 * Model version                  : 13.2
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Fri Jul 31 17:37:27 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef TractionControl_private_h_
#define TractionControl_private_h_
#include "rtwtypes.h"
#include "TractionControl.h"
#include "TractionControl_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         (*((rtm)->errorStatus))
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    (*((rtm)->errorStatus) = (val))
#endif

#ifndef rtmGetErrorStatusPointer
#define rtmGetErrorStatusPointer(rtm)  (rtm)->errorStatus
#endif

#ifndef rtmSetErrorStatusPointer
#define rtmSetErrorStatusPointer(rtm, val) ((rtm)->errorStatus = (val))
#endif

extern const real_T rtCP_pooled_jsOAKscU23YL[42];
extern const real_T rtCP_pooled_MNQomNQzvgYN[42];

#define rtCP_KpLookup_tableData        rtCP_pooled_jsOAKscU23YL  /* Expression: [0.1,0.1,0.1175,0.135,0.1525,0.17,0.1875,0.205,0.2225,0.24,0.2575,0.275,0.2925,0.31,0.3275,0.345,0.3625,0.38,0.3975,0.415,0.4325,0.45,0.4675,0.485,0.5025,0.52,0.5375,0.555,0.5725,0.59,0.6075,0.625,0.6425,0.66,0.6775,0.695,0.7125,0.73,0.7475,0.765,0.7825,0.8]
                                                                  * Referenced by: '<S21>/KpLookup'
                                                                  */
#define rtCP_KpLookup_bp01Data         rtCP_pooled_MNQomNQzvgYN  /* Expression: [0,0.1,0.11,0.12,0.13,0.14,0.15,0.16,0.17,0.18,0.19,0.2,0.21,0.22,0.23,0.24,0.25,0.26,0.27,0.28,0.29,0.3,0.31,0.32,0.33,0.34,0.35,0.36,0.37,0.38,0.39,0.4,0.41,0.42,0.43,0.44,0.45,0.46,0.47,0.48,0.49,0.5]
                                                                  * Referenced by: '<S21>/KpLookup'
                                                                  */
#define rtCP_KpLookup_tableData_g      rtCP_pooled_jsOAKscU23YL  /* Expression: [0.1,0.1,0.1175,0.135,0.1525,0.17,0.1875,0.205,0.2225,0.24,0.2575,0.275,0.2925,0.31,0.3275,0.345,0.3625,0.38,0.3975,0.415,0.4325,0.45,0.4675,0.485,0.5025,0.52,0.5375,0.555,0.5725,0.59,0.6075,0.625,0.6425,0.66,0.6775,0.695,0.7125,0.73,0.7475,0.765,0.7825,0.8]
                                                                  * Referenced by: '<S17>/KpLookup'
                                                                  */
#define rtCP_KpLookup_bp01Data_b       rtCP_pooled_MNQomNQzvgYN  /* Expression: [0,0.1,0.11,0.12,0.13,0.14,0.15,0.16,0.17,0.18,0.19,0.2,0.21,0.22,0.23,0.24,0.25,0.26,0.27,0.28,0.29,0.3,0.31,0.32,0.33,0.34,0.35,0.36,0.37,0.38,0.39,0.4,0.41,0.42,0.43,0.44,0.45,0.46,0.47,0.48,0.49,0.5]
                                                                  * Referenced by: '<S17>/KpLookup'
                                                                  */

/* Invariant block signals (default storage) */
extern const ConstB_TractionControl_h_T TractionControl_ConstB;

#endif                                 /* TractionControl_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
