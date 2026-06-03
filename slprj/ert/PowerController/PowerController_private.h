/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: PowerController_private.h
 *
 * Code generated for Simulink model 'PowerController'.
 *
 * Model version                  : 13.5
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Wed Jun  3 14:56:36 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef PowerController_private_h_
#define PowerController_private_h_
#include "rtwtypes.h"
#include "PowerController_types.h"

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

extern const real_T rtCP_pooled_kPUfe3TDItfY[4];
extern const real_T rtCP_pooled_8VdSeWPy7TNZ[4];
extern const real_T rtCP_pooled_6EMcyLCpTk2K[4];
extern const real_T rtCP_pooled_SOZ9bzOKUvMw[4];

#define rtCP_uDLookupTable_tableData   rtCP_pooled_kPUfe3TDItfY  /* Expression: [0.5,0.5,0.1,0.1]
                                                                  * Referenced by: '<S2>/1-D Lookup Table'
                                                                  */
#define rtCP_uDLookupTable_bp01Data    rtCP_pooled_8VdSeWPy7TNZ  /* Expression: [0,23.9,24,40]
                                                                  * Referenced by: '<S2>/1-D Lookup Table'
                                                                  */
#define rtCP_uDLookupTable1_tableData  rtCP_pooled_6EMcyLCpTk2K  /* Expression: [0.67,0.67,0.13,0.13]
                                                                  * Referenced by: '<S2>/1-D Lookup Table1'
                                                                  */
#define rtCP_uDLookupTable1_bp01Data   rtCP_pooled_8VdSeWPy7TNZ  /* Expression: [0,23.9,24,40]
                                                                  * Referenced by: '<S2>/1-D Lookup Table1'
                                                                  */
#define rtCP_uDLookupTable2_tableData  rtCP_pooled_SOZ9bzOKUvMw  /* Expression: [0.5,0.5,0.01,0.01]
                                                                  * Referenced by: '<S2>/1-D Lookup Table2'
                                                                  */
#define rtCP_uDLookupTable2_bp01Data   rtCP_pooled_8VdSeWPy7TNZ  /* Expression: [0,23.9,24,40]
                                                                  * Referenced by: '<S2>/1-D Lookup Table2'
                                                                  */
#endif                                 /* PowerController_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
