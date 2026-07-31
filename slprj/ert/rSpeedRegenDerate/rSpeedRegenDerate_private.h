/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: rSpeedRegenDerate_private.h
 *
 * Code generated for Simulink model 'rSpeedRegenDerate'.
 *
 * Model version                  : 13.2
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Fri Jul 31 17:29:18 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef rSpeedRegenDerate_private_h_
#define rSpeedRegenDerate_private_h_
#include "rtwtypes.h"
#include "rSpeedRegenDerate_types.h"

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

extern const real_T rtCP_pooled_0rQo2A8152Gc[4];
extern const real_T rtCP_pooled_EpiVe8hWBtct[4];

#define rtCP_rSpeedRegenDerateMap_table rtCP_pooled_0rQo2A8152Gc /* Expression: [0,0,1,1]
                                                                  * Referenced by: '<Root>/rSpeedRegenDerate Map'
                                                                  */
#define rtCP_rSpeedRegenDerateMap_bp01D rtCP_pooled_EpiVe8hWBtct /* Expression: [0,3.9,4,100]
                                                                  * Referenced by: '<Root>/rSpeedRegenDerate Map'
                                                                  */
#endif                                 /* rSpeedRegenDerate_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
