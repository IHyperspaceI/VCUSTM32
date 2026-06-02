/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: SpinningMode_private.h
 *
 * Code generated for Simulink model 'SpinningMode'.
 *
 * Model version                  : 13.5
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Tue Jun  2 18:48:14 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef SpinningMode_private_h_
#define SpinningMode_private_h_
#include "rtwtypes.h"
#include "SpinningMode_types.h"

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

extern const real_T rtCP_pooled_brOisn4i3iXS[3];
extern const real_T rtCP_pooled_CLWk6wg4WJAC[3];
extern const boolean_T rtCP_pooled_kUC6nmgO8rex[16];

#define rtCP_NSpinningModelKp_tableData rtCP_pooled_brOisn4i3iXS /* Expression: [NSpinningModelKp, 0, NSpinningModelKp]
                                                                  * Referenced by: '<S15>/NSpinningModelKp'
                                                                  */
#define rtCP_NSpinningModelKp_bp01Data rtCP_pooled_CLWk6wg4WJAC  /* Expression: [-3000, 0, 3000]
                                                                  * Referenced by: '<S15>/NSpinningModelKp'
                                                                  */
#define rtCP_NSpinningModelKp_tableDa_i rtCP_pooled_brOisn4i3iXS /* Expression: [NSpinningModelKp, 0, NSpinningModelKp]
                                                                  * Referenced by: '<S19>/NSpinningModelKp'
                                                                  */
#define rtCP_NSpinningModelKp_bp01Data_ rtCP_pooled_CLWk6wg4WJAC /* Expression: [-3000, 0, 3000]
                                                                  * Referenced by: '<S19>/NSpinningModelKp'
                                                                  */
#define rtCP_NSpinningModelKp_tableDa_n rtCP_pooled_brOisn4i3iXS /* Expression: [NSpinningModelKp, 0, NSpinningModelKp]
                                                                  * Referenced by: '<S23>/NSpinningModelKp'
                                                                  */
#define rtCP_NSpinningModelKp_bp01Dat_l rtCP_pooled_CLWk6wg4WJAC /* Expression: [-3000, 0, 3000]
                                                                  * Referenced by: '<S23>/NSpinningModelKp'
                                                                  */
#define rtCP_NSpinningModelKp_tableD_nv rtCP_pooled_brOisn4i3iXS /* Expression: [NSpinningModelKp, 0, NSpinningModelKp]
                                                                  * Referenced by: '<S27>/NSpinningModelKp'
                                                                  */
#define rtCP_NSpinningModelKp_bp01Dat_i rtCP_pooled_CLWk6wg4WJAC /* Expression: [-3000, 0, 3000]
                                                                  * Referenced by: '<S27>/NSpinningModelKp'
                                                                  */
#define rtCP_Logic_table               rtCP_pooled_kUC6nmgO8rex  /* Computed Parameter: rtCP_Logic_table
                                                                  * Referenced by: '<S9>/Logic'
                                                                  */
#endif                                 /* SpinningMode_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
