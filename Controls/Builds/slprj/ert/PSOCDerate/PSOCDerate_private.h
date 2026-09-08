/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: PSOCDerate_private.h
 *
 * Code generated for Simulink model 'PSOCDerate'.
 *
 * Model version                  : 13.3
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Tue Sep  8 11:38:39 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef PSOCDerate_private_h_
#define PSOCDerate_private_h_
#include "rtwtypes.h"
#include "PSOCDerate_types.h"

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
extern const real_T rtCP_pooled_JLHDvkuEk9bn[6];
extern const real_T rtCP_pooled_lXoTi1DzhOAi[6];
extern const real_T rtCP_pooled_n4ahTdF5kV52[6];

#define rtCP_PSOCDischargeDerateMap_tab rtCP_pooled_XDhqzVCDRaWL /* Expression: [0,0,7.8,39,78,78]
                                                                  * Referenced by: '<Root>/PSOCDischargeDerate Map'
                                                                  */
#define rtCP_PSOCDischargeDerateMap_bp0 rtCP_pooled_JLHDvkuEk9bn /* Expression: [0,377,390,403,416,600]
                                                                  * Referenced by: '<Root>/PSOCDischargeDerate Map'
                                                                  */
#define rtCP_PSOCRegenDerateMap_tableDa rtCP_pooled_lXoTi1DzhOAi /* Expression: [100,100,80,50,0,0]
                                                                  * Referenced by: '<Root>/PSOCRegenDerate Map '
                                                                  */
#define rtCP_PSOCRegenDerateMap_bp01Dat rtCP_pooled_n4ahTdF5kV52 /* Expression: [0,569,574,576,578,600]
                                                                  * Referenced by: '<Root>/PSOCRegenDerate Map '
                                                                  */
#endif                                 /* PSOCDerate_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
