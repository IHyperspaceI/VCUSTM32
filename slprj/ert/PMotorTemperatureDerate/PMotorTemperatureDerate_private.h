/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: PMotorTemperatureDerate_private.h
 *
 * Code generated for Simulink model 'PMotorTemperatureDerate'.
 *
 * Model version                  : 13.2
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Thu Jul 30 16:40:16 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef PMotorTemperatureDerate_private_h_
#define PMotorTemperatureDerate_private_h_
#include "rtwtypes.h"
#include "PMotorTemperatureDerate_types.h"

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

extern const real_T rtCP_pooled_eql5oZX1EWb7[13];
extern const real_T rtCP_pooled_8JwyjLeMO6Rz[13];

#define rtCP_PMotorTemperatureDerateMap rtCP_pooled_eql5oZX1EWb7 /* Expression: [100,100,70.2,62.4,54.6,46.8,39,31.2,23.4,15.6,7.8,0,0]
                                                                  * Referenced by: '<Root>/PMotorTemperatureDerate Map'
                                                                  */
#define rtCP_PMotorTemperatureDerateM_c rtCP_pooled_8JwyjLeMO6Rz /* Expression: [0,100,105,110,115,120,125,130,135,140,145,150,200]
                                                                  * Referenced by: '<Root>/PMotorTemperatureDerate Map'
                                                                  */
#endif                                 /* PMotorTemperatureDerate_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
