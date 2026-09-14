/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: ENV_data.c
 *
 * Code generated for Simulink model 'ENV'.
 *
 * Model version                  : 13.231
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Mon Sep 14 14:14:10 2026
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
  0.0,                                 /* '<Root>/Gain' */
  true                                 /* '<S35>/Constant' */
};

/* Constant parameters (default storage) */
const ConstP_ENV_T ENV_ConstP = {
  /* Pooled Parameter (Expression: uint8([0x90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0]))
   * Referenced by:
   *   '<S2>/Read RX Buffer start at RXB0SIDH1'
   *   '<S2>/Read RX Buffer start at RXB0SIDH3'
   *   '<S2>/Read RX Buffer start at RXB0SIDH4'
   *   '<S2>/Read RX Buffer start at RXB0SIDH5'
   *   '<S2>/Read RX Buffer start at RXB0SIDH6'
   *   '<S2>/Read RX Buffer start at RXB0SIDH7'
   *   '<S3>/Read RX Buffer start at RXB0SIDH1'
   *   '<S3>/Read RX Buffer start at RXB0SIDH3'
   *   '<S3>/Read RX Buffer start at RXB0SIDH4'
   *   '<S3>/Read RX Buffer start at RXB0SIDH5'
   *   '<S3>/Read RX Buffer start at RXB0SIDH6'
   *   '<S3>/Read RX Buffer start at RXB0SIDH7'
   */
  { 144U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U },

  /* Expression: 0xc0
   * Referenced by: '<S36>/Enter Configuration Mode'
   */
  192U,

  /* Expression: [0x02, 0x2A, 0xC0]
   * Referenced by: '<S36>/CNF1'
   */
  { 2U, 42U, 192U },

  /* Expression: [0x02, 0x29, 0x99]
   * Referenced by: '<S36>/CNF2'
   */
  { 2U, 41U, 153U },

  /* Expression: [0x02, 0x28, 0x02]
   * Referenced by: '<S36>/CNF3'
   */
  { 2U, 40U, 2U },

  /* Expression: [0x05, 0x2B, 0xFF, 0x01]
   * Referenced by: '<S36>/CANINTE'
   */
  { 5U, 43U, 255U, 1U },

  /* Expression: [0x02, 0x60, 0x60]
   * Referenced by: '<S36>/Set acceptance filters'
   */
  { 2U, 96U, 96U },

  /* Expression: [0x05, 0x2C, 0xFF, 0x00]
   * Referenced by: '<S36>/Clear flags'
   */
  { 5U, 44U, 255U, 0U },

  /* Expression: [0x02, 0x0F, 0x00]
   * Referenced by: '<S36>/ 000: normal mode, 0: don't abort pending transmit buffers, 0: one-shot disabled, 0: CLKOUT disabled, 00: sysclk//1 | 0000 0000 | 0x00'
   */
  { 2U, 15U, 0U }
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
