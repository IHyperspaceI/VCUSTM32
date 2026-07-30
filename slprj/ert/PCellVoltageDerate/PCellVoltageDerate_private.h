/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: PCellVoltageDerate_private.h
 *
 * Code generated for Simulink model 'PCellVoltageDerate'.
 *
 * Model version                  : 13.2
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Thu Jul 30 16:39:43 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef PCellVoltageDerate_private_h_
#define PCellVoltageDerate_private_h_
#include "rtwtypes.h"
#include "PCellVoltageDerate_types.h"

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

extern const real_T rtCP_pooled_XDhqzVCDRaWL[6];
extern const real_T rtCP_pooled_310VyXRVOGAM[6];
extern const real_T rtCP_pooled_C8Rk322Vydq4[7];
extern const real_T rtCP_pooled_kM1nz9HEhQcG[7];

#define rtCP_PLowCellVoltageDischargeDe rtCP_pooled_XDhqzVCDRaWL /* Expression: [0,0,7.8,39,78,78]
                                                                  * Referenced by: '<Root>/PLowCellVoltageDischargeDerate Map'
                                                                  */
#define rtCP_PLowCellVoltageDischarge_e rtCP_pooled_310VyXRVOGAM /* Expression: [0,2.9,3,3.1,3.2,5]
                                                                  * Referenced by: '<Root>/PLowCellVoltageDischargeDerate Map'
                                                                  */
#define rtCP_PHighCellVoltageRegenDerat rtCP_pooled_C8Rk322Vydq4 /* Expression: [100,100,100,80,30,0,0]
                                                                  * Referenced by: '<Root>/PHighCellVoltageRegenDerate Map'
                                                                  */
#define rtCP_PHighCellVoltageRegenDer_p rtCP_pooled_kM1nz9HEhQcG /* Expression: [2.9,3.7,3.8,4,4.2,4.4,5]
                                                                  * Referenced by: '<Root>/PHighCellVoltageRegenDerate Map'
                                                                  */
#endif                                 /* PCellVoltageDerate_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
