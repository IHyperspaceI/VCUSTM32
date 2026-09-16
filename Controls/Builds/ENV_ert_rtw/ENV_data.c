/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: ENV_data.c
 *
 * Code generated for Simulink model 'ENV'.
 *
 * Model version                  : 13.281
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Wed Sep 16 16:45:04 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ENV.h"

/* Invariant block signals (default storage) */
const ConstB_ENV_T ENV_ConstB = {
  {
    0U,
    8U,
    0U,
    0U,
    105U,
    0.0,

    { 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
  },                                   /* '<S1>/CAN Pack1' */

  {
    0U,
    8U,
    0U,
    0U,
    5U,
    0.0,

    { 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
  },                                   /* '<S1>/CAN Pack2' */

  {
    0U,
    6U,
    0U,
    0U,
    66U,
    0.0,

    { 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
  },                                   /* '<S1>/CAN Pack3' */

  {
    0U,
    8U,
    0U,
    0U,
    105U,
    0.0,

    { 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
  },                                   /* '<S2>/CAN Pack1' */

  {
    0U,
    8U,
    0U,
    0U,
    5U,
    0.0,

    { 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
  },                                   /* '<S2>/CAN Pack2' */

  {
    0U,
    6U,
    0U,
    0U,
    66U,
    0.0,

    { 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
  },                                   /* '<S2>/CAN Pack3' */
  0.0,                                 /* '<Root>/Gain' */

  /* Start of '<S18>/Initialize' */
  {
    true                               /* '<S69>/Constant' */
  }
  ,

  /* End of '<S18>/Initialize' */

  /* Start of '<S17>/Initialize' */
  {
    true                               /* '<S66>/Constant' */
  }
  /* End of '<S17>/Initialize' */
};

/* Constant parameters (default storage) */
const ConstP_ENV_T ENV_ConstP = {
  /* Pooled Parameter (Expression: uint8([0x90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0]))
   * Referenced by:
   *   '<S3>/Read RX Buffer start at RXB0SIDH1'
   *   '<S3>/Read RX Buffer start at RXB0SIDH2'
   *   '<S3>/Read RX Buffer start at RXB0SIDH3'
   *   '<S3>/Read RX Buffer start at RXB0SIDH4'
   *   '<S3>/Read RX Buffer start at RXB0SIDH5'
   *   '<S3>/Read RX Buffer start at RXB0SIDH6'
   *   '<S3>/Read RX Buffer start at RXB0SIDH7'
   *   '<S3>/Read RX Buffer start at RXB0SIDH8'
   *   '<S4>/Read RX Buffer start at RXB0SIDH1'
   *   '<S4>/Read RX Buffer start at RXB0SIDH2'
   *   '<S4>/Read RX Buffer start at RXB0SIDH3'
   *   '<S4>/Read RX Buffer start at RXB0SIDH4'
   *   '<S4>/Read RX Buffer start at RXB0SIDH5'
   *   '<S4>/Read RX Buffer start at RXB0SIDH6'
   *   '<S4>/Read RX Buffer start at RXB0SIDH7'
   *   '<S4>/Read RX Buffer start at RXB0SIDH8'
   *   '<S5>/Read RX Buffer start at RXB0SIDH7'
   *   '<S6>/Read RX Buffer start at RXB0SIDH7'
   */
  { 144U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U },

  /* Pooled Parameter (Expression: 0xc0)
   * Referenced by:
   *   '<S61>/Enter Configuration Mode'
   *   '<S64>/Enter Configuration Mode'
   *   '<S67>/Enter Configuration Mode'
   *   '<S70>/Enter Configuration Mode'
   */
  192U,

  /* Pooled Parameter (Expression: [0x02, 0x2A, 0xC0])
   * Referenced by:
   *   '<S61>/CNF1'
   *   '<S64>/CNF1'
   *   '<S67>/CNF1'
   *   '<S70>/CNF1'
   */
  { 2U, 42U, 192U },

  /* Pooled Parameter (Expression: [0x02, 0x29, 0x99])
   * Referenced by:
   *   '<S61>/CNF2'
   *   '<S64>/CNF2'
   *   '<S67>/CNF2'
   *   '<S70>/CNF2'
   */
  { 2U, 41U, 153U },

  /* Pooled Parameter (Expression: [0x02, 0x28, 0x02])
   * Referenced by:
   *   '<S61>/CNF3'
   *   '<S64>/CNF3'
   *   '<S67>/CNF3'
   *   '<S70>/CNF3'
   */
  { 2U, 40U, 2U },

  /* Pooled Parameter (Expression: [0x05, 0x2B, 0xFF, 0x01])
   * Referenced by:
   *   '<S61>/CANINTE'
   *   '<S64>/CANINTE'
   *   '<S67>/CANINTE'
   *   '<S70>/CANINTE'
   */
  { 5U, 43U, 255U, 1U },

  /* Pooled Parameter (Expression: [0x02, 0x60, 0x60])
   * Referenced by:
   *   '<S61>/Set acceptance filters'
   *   '<S64>/Set acceptance filters'
   *   '<S67>/Set acceptance filters'
   *   '<S70>/Set acceptance filters'
   */
  { 2U, 96U, 96U },

  /* Pooled Parameter (Expression: [0x05, 0x2C, 0xFF, 0x00])
   * Referenced by:
   *   '<S61>/Clear flags'
   *   '<S64>/Clear flags'
   *   '<S67>/Clear flags'
   *   '<S70>/Clear flags'
   */
  { 5U, 44U, 255U, 0U },

  /* Pooled Parameter (Expression: [0x02, 0x0F, 0x00])
   * Referenced by:
   *   '<S61>/ 000: normal mode, 0: don't abort pending transmit buffers, 0: one-shot disabled, 0: CLKOUT disabled, 00: sysclk//1 | 0000 0000 | 0x00'
   *   '<S64>/ 000: normal mode, 0: don't abort pending transmit buffers, 0: one-shot disabled, 0: CLKOUT disabled, 00: sysclk//1 | 0000 0000 | 0x00'
   *   '<S67>/ 000: normal mode, 0: don't abort pending transmit buffers, 0: one-shot disabled, 0: CLKOUT disabled, 00: sysclk//1 | 0000 0000 | 0x00'
   *   '<S70>/ 000: normal mode, 0: don't abort pending transmit buffers, 0: one-shot disabled, 0: CLKOUT disabled, 00: sysclk//1 | 0000 0000 | 0x00'
   */
  { 2U, 15U, 0U }
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
