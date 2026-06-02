/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: rHighCellTemperatureDerate_private.h
 *
 * Code generated for Simulink model 'rHighCellTemperatureDerate'.
 *
 * Model version                  : 13.6
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Tue Jun  2 18:44:40 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef rHighCellTemperatureDerate_private_h_
#define rHighCellTemperatureDerate_private_h_
#include "rtwtypes.h"
#include "rHighCellTemperatureDerate_types.h"

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

extern const real_T rtCP_pooled_FQx00dt0DNNW[7];
extern const real_T rtCP_pooled_R4HULQq0o3sd[7];

#define rtCP_rLowCellVoltageDischargeDe rtCP_pooled_FQx00dt0DNNW /* Expression: [1,1,0.9,0.8,0.2,0,0]
                                                                  * Referenced by: '<Root>/rLowCellVoltageDischargeDerate Map'
                                                                  */
#define rtCP_rLowCellVoltageDischarge_j rtCP_pooled_R4HULQq0o3sd /* Expression: [0,50,55,56,58,61,80]
                                                                  * Referenced by: '<Root>/rLowCellVoltageDischargeDerate Map'
                                                                  */
#define rtCP_rLowCellVoltageDischarge_m rtCP_pooled_FQx00dt0DNNW /* Expression: [1,1,0.9,0.8,0.2,0,0]
                                                                  * Referenced by: '<Root>/rLowCellVoltageDischargeDerate Map2'
                                                                  */
#define rtCP_rLowCellVoltageDischarge_n rtCP_pooled_R4HULQq0o3sd /* Expression: [0,50,55,56,58,61,80]
                                                                  * Referenced by: '<Root>/rLowCellVoltageDischargeDerate Map2'
                                                                  */
#endif                               /* rHighCellTemperatureDerate_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
