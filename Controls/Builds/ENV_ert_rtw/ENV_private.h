/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: ENV_private.h
 *
 * Code generated for Simulink model 'ENV'.
 *
 * Model version                  : 1.41
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Tue Sep  8 17:11:11 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef ENV_private_h_
#define ENV_private_h_
#include "rtwtypes.h"
#include "ENV.h"
#include "ENV_types.h"

extern void ENV_SPIControllerTransfer1_Init(DW_SPIControllerTransfer1_ENV_T
  *localDW);
extern void ENV_SPIControllerTransfer1(const uint8_T rtu_0[3],
  DW_SPIControllerTransfer1_ENV_T *localDW);
extern void ENV_SPIControllerTransfer5_Init(DW_SPIControllerTransfer5_ENV_T
  *localDW);
extern void ENV_SPIControllerTransfer5(const uint8_T rtu_0[4],
  DW_SPIControllerTransfer5_ENV_T *localDW);
extern void ENV_SPIControllerTransfer1_Term(DW_SPIControllerTransfer1_ENV_T
  *localDW);
extern void ENV_SPIControllerTransfer5_Term(DW_SPIControllerTransfer5_ENV_T
  *localDW);

#endif                                 /* ENV_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
