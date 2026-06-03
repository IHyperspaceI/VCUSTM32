/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: rMotorTemperatureDerate_private.h
 *
 * Code generated for Simulink model 'rMotorTemperatureDerate'.
 *
 * Model version                  : 13.6
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Wed Jun  3 14:53:21 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef rMotorTemperatureDerate_private_h_
#define rMotorTemperatureDerate_private_h_
#include "rtwtypes.h"
#include "rMotorTemperatureDerate_types.h"

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

extern const real_T rtCP_pooled_nsmzr30kGeSt[7];
extern const real_T rtCP_pooled_PtEcnl1JlBfv[7];

#define rtCP_rMotorTemperatureDerateMap rtCP_pooled_nsmzr30kGeSt /* Expression: [1,1,0.8,0.5,0.2,0,0]
                                                                  * Referenced by: '<Root>/rMotorTemperatureDerate Map'
                                                                  */
#define rtCP_rMotorTemperatureDerateM_b rtCP_pooled_PtEcnl1JlBfv /* Expression: [0,100,120,126,128,130,150]
                                                                  * Referenced by: '<Root>/rMotorTemperatureDerate Map'
                                                                  */
#endif                                 /* rMotorTemperatureDerate_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
