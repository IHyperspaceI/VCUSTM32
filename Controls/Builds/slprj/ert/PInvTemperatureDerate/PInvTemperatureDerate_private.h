/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: PInvTemperatureDerate_private.h
 *
 * Code generated for Simulink model 'PInvTemperatureDerate'.
 *
 * Model version                  : 13.3
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Tue Sep  8 11:38:22 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef PInvTemperatureDerate_private_h_
#define PInvTemperatureDerate_private_h_
#include "rtwtypes.h"
#include "PInvTemperatureDerate_types.h"

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
extern const real_T rtCP_pooled_zFhHmn6r8zcr[13];

#define rtCP_PInvTemperatureDerateMap_t rtCP_pooled_eql5oZX1EWb7 /* Expression: [100,100,70.2,62.4,54.6,46.8,39,31.2,23.4,15.6,7.8,0,0]
                                                                  * Referenced by: '<Root>/PInvTemperatureDerate Map'
                                                                  */
#define rtCP_PInvTemperatureDerateMap_b rtCP_pooled_zFhHmn6r8zcr /* Expression: [0,115,116,117,118,119,120,121,122,123,124,125,150]
                                                                  * Referenced by: '<Root>/PInvTemperatureDerate Map'
                                                                  */
#endif                                 /* PInvTemperatureDerate_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
