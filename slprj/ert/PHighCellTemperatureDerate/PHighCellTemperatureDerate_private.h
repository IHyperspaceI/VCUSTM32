/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: PHighCellTemperatureDerate_private.h
 *
 * Code generated for Simulink model 'PHighCellTemperatureDerate'.
 *
 * Model version                  : 13.2
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Fri Jul 31 17:28:30 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef PHighCellTemperatureDerate_private_h_
#define PHighCellTemperatureDerate_private_h_
#include "rtwtypes.h"
#include "PHighCellTemperatureDerate_types.h"

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

extern const real_T rtCP_pooled_KK2D1KRhOG3e[7];
extern const real_T rtCP_pooled_R4HULQq0o3sd[7];

#define rtCP_PHighCellTemperatureDischa rtCP_pooled_KK2D1KRhOG3e /* Expression: [100,100,70.2,62.4,15.6,0,0]
                                                                  * Referenced by: '<Root>/PHighCellTemperatureDischargeDerate Map'
                                                                  */
#define rtCP_PHighCellTemperatureDisc_p rtCP_pooled_R4HULQq0o3sd /* Expression: [0,50,55,56,58,61,80]
                                                                  * Referenced by: '<Root>/PHighCellTemperatureDischargeDerate Map'
                                                                  */
#endif                               /* PHighCellTemperatureDerate_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
