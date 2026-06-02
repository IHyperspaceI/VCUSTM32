/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: rInvTemperatureDerate_private.h
 *
 * Code generated for Simulink model 'rInvTemperatureDerate'.
 *
 * Model version                  : 13.6
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Tue Jun  2 18:44:47 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef rInvTemperatureDerate_private_h_
#define rInvTemperatureDerate_private_h_
#include "rtwtypes.h"
#include "rInvTemperatureDerate_types.h"

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

extern const real_T rtCP_pooled_v9Cwz8z6MFtl[7];
extern const real_T rtCP_pooled_E3yCxkw6vbU4[7];

#define rtCP_rInvTemperatureDerateMap_t rtCP_pooled_v9Cwz8z6MFtl /* Expression: [1,1,0.9,0.7,0.4,0,0]
                                                                  * Referenced by: '<Root>/rInvTemperatureDerate Map'
                                                                  */
#define rtCP_rInvTemperatureDerateMap_b rtCP_pooled_E3yCxkw6vbU4 /* Expression: [0,50,54,56,58,60,100]
                                                                  * Referenced by: '<Root>/rInvTemperatureDerate Map'
                                                                  */
#endif                                 /* rInvTemperatureDerate_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
