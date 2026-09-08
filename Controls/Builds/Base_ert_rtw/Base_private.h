/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Base_private.h
 *
 * Code generated for Simulink model 'Base'.
 *
 * Model version                  : 1.12
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Tue Sep  8 12:44:55 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef Base_private_h_
#define Base_private_h_
#include "rtwtypes.h"
#include "Base.h"
#include "Base_types.h"

extern const real_T rtCP_pooled_oJf4t6dn1pFT;
extern const uint8_T rtCP_pooled_yCbAAq7Pz6OL[14];
extern const uint8_T rtCP_pooled_qgAVZgCOrDx4;
extern const uint8_T rtCP_pooled_ziqf4zSBE92z[3];
extern const uint8_T rtCP_pooled_y4Kr4KWnMTsu[3];
extern const uint8_T rtCP_pooled_XWN4BOOyufWt[3];
extern const uint8_T rtCP_pooled_WU5r3exPv8pT[4];
extern const uint8_T rtCP_pooled_LKZL4geijjqd[3];
extern const uint8_T rtCP_pooled_UhgniisqnUuf[4];
extern const uint8_T rtCP_pooled_ZmLSXu11N0PS[3];
extern const uint8_T rtCP_pooled_fMA2uB5q1AMU;

#define rtCP_Constant2_Value           rtCP_pooled_oJf4t6dn1pFT  /* Expression: 69
                                                                  * Referenced by: '<Root>/Constant2'
                                                                  */
#define rtCP_ReadRXBufferstartatRXB0SID rtCP_pooled_yCbAAq7Pz6OL /* Expression: uint8([0x90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0])
                                                                  * Referenced by: '<S1>/Read RX Buffer start at RXB0SIDH6'
                                                                  */
#define rtCP_EnterConfigurationMode_Val rtCP_pooled_qgAVZgCOrDx4 /* Expression: 0xc0
                                                                  * Referenced by: '<S22>/Enter Configuration Mode'
                                                                  */
#define rtCP_CNF1_Value                rtCP_pooled_ziqf4zSBE92z  /* Expression: [0x02, 0x2A, 0xC0]
                                                                  * Referenced by: '<S22>/CNF1'
                                                                  */
#define rtCP_CNF2_Value                rtCP_pooled_y4Kr4KWnMTsu  /* Expression: [0x02, 0x29, 0x99]
                                                                  * Referenced by: '<S22>/CNF2'
                                                                  */
#define rtCP_CNF3_Value                rtCP_pooled_XWN4BOOyufWt  /* Expression: [0x02, 0x28, 0x02]
                                                                  * Referenced by: '<S22>/CNF3'
                                                                  */
#define rtCP_CANINTE_Value             rtCP_pooled_WU5r3exPv8pT  /* Expression: [0x05, 0x2B, 0xFF, 0x01]
                                                                  * Referenced by: '<S22>/CANINTE'
                                                                  */
#define rtCP_Setacceptancefilters_Value rtCP_pooled_LKZL4geijjqd /* Expression: [0x02, 0x60, 0x60]
                                                                  * Referenced by: '<S22>/Set acceptance filters'
                                                                  */
#define rtCP_Clearflags_Value          rtCP_pooled_UhgniisqnUuf  /* Expression: [0x05, 0x2C, 0xFF, 0x00]
                                                                  * Referenced by: '<S22>/Clear flags'
                                                                  */
#define rtCP_u00normalmode0dontabortpen rtCP_pooled_ZmLSXu11N0PS /* Expression: [0x02, 0x0F, 0x00]
                                                                  * Referenced by: '<S22>/ 000: normal mode, 0: don't abort pending transmit buffers, 0: one-shot disabled, 0: CLKOUT disabled, 00: sysclk//1 | 0000 0000 | 0x00'
                                                                  */
#define rtCP_RTS3_Value_l              rtCP_pooled_fMA2uB5q1AMU  /* Expression: 0x81
                                                                  * Referenced by: '<Root>/RTS3'
                                                                  */

extern void Base_MATLABFunction(uint32_T rtu_ID, uint8_T rtu_Length, const
  uint8_T rtu_Data[8], uint8_T rtu_RTS, uint16_T rtu_period, uint16_T rtu_offset,
  real_T rtu_MCPInitialized, uint8_T *rty_WriteInstruction, uint8_T
  rty_CANVector[13], uint8_T *rty_RTSByte, DW_MATLABFunction_Base_T *localDW);
extern void Base_SPIControllerTransfer_Init(DW_SPIControllerTransfer_Base_T
  *localDW);
extern void Base_SPIControllerTransfer(const uint8_T rtu_0[15],
  DW_SPIControllerTransfer_Base_T *localDW);
extern void Bas_SPIControllerTransfer1_Init(DW_SPIControllerTransfer1_Bas_T
  *localDW);
extern void Base_SPIControllerTransfer1(const uint8_T rtu_0[3],
  DW_SPIControllerTransfer1_Bas_T *localDW);
extern void Bas_SPIControllerTransfer5_Init(DW_SPIControllerTransfer5_Bas_T
  *localDW);
extern void Base_SPIControllerTransfer5(const uint8_T rtu_0[4],
  DW_SPIControllerTransfer5_Bas_T *localDW);
extern void Base_SPIControllerTransfer_Term(DW_SPIControllerTransfer_Base_T
  *localDW);
extern void Bas_SPIControllerTransfer1_Term(DW_SPIControllerTransfer1_Bas_T
  *localDW);
extern void Bas_SPIControllerTransfer5_Term(DW_SPIControllerTransfer5_Bas_T
  *localDW);

#endif                                 /* Base_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
