/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: rSOCDerate_private.h
 *
 * Code generated for Simulink model 'rSOCDerate'.
 *
 * Model version                  : 13.6
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Wed Jun  3 14:53:32 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef rSOCDerate_private_h_
#define rSOCDerate_private_h_
#include "rtwtypes.h"
#include "rSOCDerate_types.h"

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
extern const real_T rtCP_pooled_PkLKLB9PEux2[6];
extern const real_T rtCP_pooled_ftsEXaqFysgl[6];
extern const real_T rtCP_pooled_p9PJSg49It68[6];

#define rtCP_rSOCDischargeDerateMap_tab rtCP_pooled_EPzuC2kh6gfk /* Expression: [0,0,0.1,0.5,1,1]
                                                                  * Referenced by: '<Root>/rSOCDischargeDerate Map'
                                                                  */
#define rtCP_rSOCDischargeDerateMap_bp0 rtCP_pooled_PkLKLB9PEux2 /* Expression: [380,390,392,395,396,600]
                                                                  * Referenced by: '<Root>/rSOCDischargeDerate Map'
                                                                  */
#define rtCP_rSOCRegenDerateMap_tableDa rtCP_pooled_ftsEXaqFysgl /* Expression: [1,1,0.8,0.5,0,0]
                                                                  * Referenced by: '<Root>/rSOCRegenDerate Map '
                                                                  */
#define rtCP_rSOCRegenDerateMap_bp01Dat rtCP_pooled_p9PJSg49It68 /* Expression: [0,535,540,542,544,600]
                                                                  * Referenced by: '<Root>/rSOCRegenDerate Map '
                                                                  */
#endif                                 /* rSOCDerate_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
