/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: ENV_private.h
 *
 * Code generated for Simulink model 'ENV'.
 *
 * Model version                  : 13.227
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Mon Sep 14 13:12:00 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef ENV_private_h_
#define ENV_private_h_
#include "rtwtypes.h"
#include "ENV_types.h"
#include "ENV.h"

extern void ENV_MATLABFunction1(const uint8_T rtu_RxBytes[15], CANMessage
  *rty_Message);
extern void ENV_SPIControllerTransfer1_Init(DW_SPIControllerTransfer1_ENV_T
  *localDW);
extern void ENV_SPIControllerTransfer1(const uint8_T rtu_0[15],
  B_SPIControllerTransfer1_ENV_T *localB, DW_SPIControllerTransfer1_ENV_T
  *localDW);
extern void ENV_MATLABFunction(uint32_T rtu_ID, uint8_T rtu_Length, const
  uint8_T rtu_Data[8], uint8_T rtu_RTS, uint16_T rtu_period, uint16_T rtu_offset,
  boolean_T rtu_MCPInitialized, uint8_T *rty_WriteInstruction, uint8_T
  rty_CANVector[13], uint8_T *rty_RTSByte, DW_MATLABFunction_ENV_T *localDW);
extern void ENV_SPIControllerTransfer_Init(DW_SPIControllerTransfer_ENV_T
  *localDW);
extern void ENV_SPIControllerTransfer(const uint8_T rtu_0[15],
  DW_SPIControllerTransfer_ENV_T *localDW);
extern void E_SPIControllerTransfer1_i_Init(DW_SPIControllerTransfer1_E_f_T
  *localDW);
extern void ENV_SPIControllerTransfer1_p(uint8_T rtu_0,
  DW_SPIControllerTransfer1_E_f_T *localDW);
extern void E_SPIControllerTransfer1_h_Init(DW_SPIControllerTransfer1_fw_T
  *localDW);
extern void ENV_SPIControllerTransfer1_pn(const uint8_T rtu_0[3],
  DW_SPIControllerTransfer1_fw_T *localDW);
extern void ENV_SPIControllerTransfer5_Init(DW_SPIControllerTransfer5_ENV_T
  *localDW);
extern void ENV_SPIControllerTransfer5(const uint8_T rtu_0[4],
  DW_SPIControllerTransfer5_ENV_T *localDW);
extern void ENV_SPIControllerTransfer1_Term(DW_SPIControllerTransfer1_ENV_T
  *localDW);
extern void ENV_SPIControllerTransfer_Term(DW_SPIControllerTransfer_ENV_T
  *localDW);
extern void E_SPIControllerTransfer1_c_Term(DW_SPIControllerTransfer1_E_f_T
  *localDW);
extern void E_SPIControllerTransfer1_d_Term(DW_SPIControllerTransfer1_fw_T
  *localDW);
extern void ENV_SPIControllerTransfer5_Term(DW_SPIControllerTransfer5_ENV_T
  *localDW);

#endif                                 /* ENV_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
