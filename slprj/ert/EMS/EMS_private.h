/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: EMS_private.h
 *
 * Code generated for Simulink model 'EMS'.
 *
 * Model version                  : 13.5
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Tue Jun  2 18:47:33 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef EMS_private_h_
#define EMS_private_h_
#include "rtwtypes.h"
#include "EMS_types.h"

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

extern const real_T rtCP_pooled_eiREPpcKMTt4[21];
extern const real_T rtCP_pooled_euypgOKMDH3z[21];
extern const real_T rtCP_pooled_dGpVjUver0qT[2];
extern const real_T rtCP_pooled_uihbNoKi8Jq4[2];
extern const real_T rtCP_pooled_VLCm2iznoy3k[21];

#define rtCP_uDLookupTable_tableData   rtCP_pooled_eiREPpcKMTt4  /* Expression: [583.09
                                                                    583.09
                                                                    583.09
                                                                    583.09
                                                                    583.09
                                                                    583.09
                                                                    583.09
                                                                    583.09
                                                                    509.86
                                                                    509.86
                                                                    509.86
                                                                    509.8639456
                                                                    509.8639456
                                                                    509.8639456
                                                                    509.8639456
                                                                    509.8639456
                                                                    509.8639456
                                                                    509.8639456
                                                                    509.8639456
                                                                    509.8639456
                                                                    509.8639456]
                                                                  * Referenced by: '<S12>/1-D Lookup Table'
                                                                  */
#define rtCP_uDLookupTable_bp01Data    rtCP_pooled_euypgOKMDH3z  /* Expression: [0.00
                                                                    1.37
                                                                    2.73
                                                                    4.10
                                                                    5.47
                                                                    6.84
                                                                    8.20
                                                                    9.57
                                                                    10.94
                                                                    12.30
                                                                    13.67
                                                                    15.04
                                                                    16.40
                                                                    17.77
                                                                    19.14
                                                                    20.51
                                                                    21.87
                                                                    23.24
                                                                    24.61
                                                                    25.97
                                                                    27.34]
                                                                  * Referenced by: '<S12>/1-D Lookup Table'
                                                                  */
#define rtCP_uDLookupTable1_tableData  rtCP_pooled_dGpVjUver0qT  /* Expression: [0 3.8]
                                                                  * Referenced by: '<S12>/1-D Lookup Table1'
                                                                  */
#define rtCP_uDLookupTable1_bp01Data   rtCP_pooled_uihbNoKi8Jq4  /* Expression: [0 5]
                                                                  * Referenced by: '<S12>/1-D Lookup Table1'
                                                                  */
#define rtCP_uDLookupTable_tableData_m rtCP_pooled_VLCm2iznoy3k  /* Expression: [583.09
                                                                    583.09
                                                                    583.09
                                                                    583.09
                                                                    583.09
                                                                    583.09
                                                                    583.09
                                                                    583.09
                                                                    583.09
                                                                    583.09
                                                                    583.09
                                                                    523.483965
                                                                    463.877551
                                                                    463.877551
                                                                    463.877551
                                                                    463.877551
                                                                    463.877551
                                                                    463.877551
                                                                    463.877551
                                                                    463.877551
                                                                    463.877551]
                                                                  * Referenced by: '<S8>/1-D Lookup Table'
                                                                  */
#define rtCP_uDLookupTable_bp01Data_b  rtCP_pooled_euypgOKMDH3z  /* Expression: [0.00
                                                                    1.37
                                                                    2.73
                                                                    4.10
                                                                    5.47
                                                                    6.84
                                                                    8.20
                                                                    9.57
                                                                    10.94
                                                                    12.30
                                                                    13.67
                                                                    15.04
                                                                    16.40
                                                                    17.77
                                                                    19.14
                                                                    20.51
                                                                    21.87
                                                                    23.24
                                                                    24.61
                                                                    25.97
                                                                    27.34]
                                                                  * Referenced by: '<S8>/1-D Lookup Table'
                                                                  */
#define rtCP_uDLookupTable1_tableData_j rtCP_pooled_dGpVjUver0qT /* Expression: [0 3.8]
                                                                  * Referenced by: '<S8>/1-D Lookup Table1'
                                                                  */
#define rtCP_uDLookupTable1_bp01Data_f rtCP_pooled_uihbNoKi8Jq4  /* Expression: [0 5]
                                                                  * Referenced by: '<S8>/1-D Lookup Table1'
                                                                  */
#endif                                 /* EMS_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
