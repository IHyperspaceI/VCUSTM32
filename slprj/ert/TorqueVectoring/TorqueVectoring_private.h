/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: TorqueVectoring_private.h
 *
 * Code generated for Simulink model 'TorqueVectoring'.
 *
 * Model version                  : 13.2
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Thu Jul 30 16:46:45 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef TorqueVectoring_private_h_
#define TorqueVectoring_private_h_
#include "rtwtypes.h"
#include "TorqueVectoring.h"
#include "TorqueVectoring_types.h"

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

extern const real_T rtCP_pooled_QEFq6yxjffEu[7];
extern const real_T rtCP_pooled_J0wnjRbRYuIC[7];

#define rtCP_CornerBias_tableData      rtCP_pooled_QEFq6yxjffEu  /* Expression: [1.1,1.1,1.05,1,0.95,0.9,0.9]
                                                                  * Referenced by: '<S28>/Corner Bias'
                                                                  */
#define rtCP_CornerBias_bp01Data       rtCP_pooled_J0wnjRbRYuIC  /* Expression: [0,5,10,15,20,25,30]
                                                                  * Referenced by: '<S28>/Corner Bias'
                                                                  */

/* Invariant block signals (default storage) */
extern const ConstB_TorqueVectoring_h_T TorqueVectoring_ConstB;

#endif                                 /* TorqueVectoring_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
