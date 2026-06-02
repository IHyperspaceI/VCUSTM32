/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: rLowCellVoltageDerate_private.h
 *
 * Code generated for Simulink model 'rLowCellVoltageDerate'.
 *
 * Model version                  : 13.6
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Tue Jun  2 18:44:53 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef rLowCellVoltageDerate_private_h_
#define rLowCellVoltageDerate_private_h_
#include "rtwtypes.h"
#include "rLowCellVoltageDerate_types.h"

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

extern const real_T rtCP_pooled_EPzuC2kh6gfk[6];
extern const real_T rtCP_pooled_drJTH85flLfO[6];

#define rtCP_rLowCellVoltageDischargeDe rtCP_pooled_EPzuC2kh6gfk /* Expression: [0,0,0.1,0.5,1,1]
                                                                  * Referenced by: '<Root>/rLowCellVoltageDischargeDerate Map'
                                                                  */
#define rtCP_rLowCellVoltageDischarge_n rtCP_pooled_drJTH85flLfO /* Expression: [0,3,3.05,3.1,3.15,5]
                                                                  * Referenced by: '<Root>/rLowCellVoltageDischargeDerate Map'
                                                                  */
#endif                                 /* rLowCellVoltageDerate_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
