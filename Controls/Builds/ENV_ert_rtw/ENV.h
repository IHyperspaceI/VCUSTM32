/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: ENV.h
 *
 * Code generated for Simulink model 'ENV'.
 *
 * Model version                  : 13.275
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Wed Sep 16 15:56:24 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef ENV_h_
#define ENV_h_
#ifndef ENV_COMMON_INCLUDES_
#define ENV_COMMON_INCLUDES_
#include <math.h>
#include "rtwtypes.h"
#include "math.h"
#include "MW_SPI.h"
#include "mw_stm32_spi_ll.h"
#include "main.h"
#endif                                 /* ENV_COMMON_INCLUDES_ */

#include "ENV_types.h"
#include <stddef.h>
#include "MW_target_hardware_resources.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* user code (top of header file) */
#include "stm32h7xx_ll_tim.h"

/* Block states (default storage) for system '<S1>/MATLAB Function' */
typedef struct {
  uint16_T count;                      /* '<S1>/MATLAB Function' */
} DW_MATLABFunction_ENV_T;

/* Block states (default storage) for system '<S1>/SPI Controller Transfer' */
typedef struct {
  stm32cube_blocks_SPIControlle_T obj; /* '<S1>/SPI Controller Transfer' */
  boolean_T objisempty;                /* '<S1>/SPI Controller Transfer' */
} DW_SPIControllerTransfer_ENV_T;

/* Block states (default storage) for system '<S1>/SPI Controller Transfer1' */
typedef struct {
  stm32cube_blocks_SPIControlle_T obj; /* '<S1>/SPI Controller Transfer1' */
  boolean_T objisempty;                /* '<S1>/SPI Controller Transfer1' */
} DW_SPIControllerTransfer1_ENV_T;

/* Block signals for system '<S2>/SPI Controller Transfer1' */
typedef struct {
  uint8_T SPIControllerTransfer1[15];  /* '<S2>/SPI Controller Transfer1' */
} B_SPIControllerTransfer1_EN_c_T;

/* Block states (default storage) for system '<S2>/SPI Controller Transfer1' */
typedef struct {
  stm32cube_blocks_SPIControlle_T obj; /* '<S2>/SPI Controller Transfer1' */
  boolean_T objisempty;                /* '<S2>/SPI Controller Transfer1' */
} DW_SPIControllerTransfer1_E_f_T;

/* Block signals for system '<S3>/SPI Controller Transfer1' */
typedef struct {
  uint8_T SPIControllerTransfer1[15];  /* '<S3>/SPI Controller Transfer1' */
} B_SPIControllerTransfer1_E_ca_T;

/* Block states (default storage) for system '<S3>/SPI Controller Transfer1' */
typedef struct {
  stm32cube_blocks_SPIControlle_T obj; /* '<S3>/SPI Controller Transfer1' */
  boolean_T objisempty;                /* '<S3>/SPI Controller Transfer1' */
} DW_SPIControllerTransfer1_fw_T;

/* Block states (default storage) for system '<S55>/SPI Controller Transfer1' */
typedef struct {
  stm32cube_blocks_SPIControlle_T obj; /* '<S55>/SPI Controller Transfer1' */
  boolean_T objisempty;                /* '<S55>/SPI Controller Transfer1' */
} DW_SPIControllerTransfer1_fwu_T;

/* Block states (default storage) for system '<S55>/SPI Controller Transfer4' */
typedef struct {
  stm32cube_blocks_SPIControlle_T obj; /* '<S55>/SPI Controller Transfer4' */
  boolean_T objisempty;                /* '<S55>/SPI Controller Transfer4' */
} DW_SPIControllerTransfer4_ENV_T;

/* Block states (default storage) for system '<S57>/SPI Controller Transfer1' */
typedef struct {
  stm32cube_blocks_SPIControlle_T obj; /* '<S57>/SPI Controller Transfer1' */
  boolean_T objisempty;                /* '<S57>/SPI Controller Transfer1' */
} DW_SPIControllerTransfer_fwu4_T;

/* Block states (default storage) for system '<S57>/SPI Controller Transfer4' */
typedef struct {
  stm32cube_blocks_SPIControlle_T obj; /* '<S57>/SPI Controller Transfer4' */
  boolean_T objisempty;                /* '<S57>/SPI Controller Transfer4' */
} DW_SPIControllerTransfer4_E_f_T;

/* Block states (default storage) for system '<S60>/SPI Controller Transfer1' */
typedef struct {
  stm32cube_blocks_SPIControlle_T obj; /* '<S60>/SPI Controller Transfer1' */
  boolean_T objisempty;                /* '<S60>/SPI Controller Transfer1' */
} DW_SPIControllerTransfe_fwu4s_T;

/* Block states (default storage) for system '<S60>/SPI Controller Transfer5' */
typedef struct {
  stm32cube_blocks_SPIControlle_T obj; /* '<S60>/SPI Controller Transfer5' */
  boolean_T objisempty;                /* '<S60>/SPI Controller Transfer5' */
} DW_SPIControllerTransfer5_ENV_T;

/* Block states (default storage) for system '<S62>/SPI Controller Transfer1' */
typedef struct {
  stm32cube_blocks_SPIControlle_T obj; /* '<S62>/SPI Controller Transfer1' */
  boolean_T objisempty;                /* '<S62>/SPI Controller Transfer1' */
} DW_SPIControllerTransf_fwu4sl_T;

/* Block states (default storage) for system '<S62>/SPI Controller Transfer4' */
typedef struct {
  stm32cube_blocks_SPIControlle_T obj; /* '<S62>/SPI Controller Transfer4' */
  boolean_T objisempty;                /* '<S62>/SPI Controller Transfer4' */
} DW_SPIControllerTransfer4_fw_T;

/* Block signals (default storage) */
typedef struct {
  CAN_MESSAGE_BUS CANPack4;            /* '<S1>/CAN Pack4' */
  CANMessage Message;                  /* '<S5>/MATLAB Function7' */
  CANMessage Message_h;                /* '<S4>/MATLAB Function7' */
  CANMessage Message_o;                /* '<S3>/MATLAB Function8' */
  CANMessage Message_hw;               /* '<S2>/MATLAB Function8' */
  real_T DataTypeConversion6;          /* '<Root>/Data Type Conversion6' */
  real_T DataTypeConversion4;          /* '<Root>/Data Type Conversion4' */
  real_T DataTypeConversion;           /* '<Root>/Data Type Conversion' */
  real_T DataTypeConversion2;          /* '<Root>/Data Type Conversion2' */
  boolean_T OutportBufferForMCPInitialized;/* '<S59>/Constant' */
  B_SPIControllerTransfer1_E_ca_T SPIControllerTransfer8_p;/* '<S3>/SPI Controller Transfer1' */
  B_SPIControllerTransfer1_E_ca_T SPIControllerTransfer7_pn;/* '<S3>/SPI Controller Transfer1' */
  B_SPIControllerTransfer1_E_ca_T SPIControllerTransfer6_pn;/* '<S3>/SPI Controller Transfer1' */
  B_SPIControllerTransfer1_E_ca_T SPIControllerTransfer5_pn;/* '<S3>/SPI Controller Transfer1' */
  B_SPIControllerTransfer1_E_ca_T SPIControllerTransfer4_pn;/* '<S3>/SPI Controller Transfer1' */
  B_SPIControllerTransfer1_E_ca_T SPIControllerTransfer3_pn;/* '<S3>/SPI Controller Transfer1' */
  B_SPIControllerTransfer1_E_ca_T SPIControllerTransfer2_pn;/* '<S3>/SPI Controller Transfer1' */
  B_SPIControllerTransfer1_E_ca_T SPIControllerTransfer1_pn;/* '<S3>/SPI Controller Transfer1' */
  B_SPIControllerTransfer1_EN_c_T SPIControllerTransfer8;/* '<S2>/SPI Controller Transfer1' */
  B_SPIControllerTransfer1_EN_c_T SPIControllerTransfer7_p;/* '<S2>/SPI Controller Transfer1' */
  B_SPIControllerTransfer1_EN_c_T SPIControllerTransfer6_p;/* '<S2>/SPI Controller Transfer1' */
  B_SPIControllerTransfer1_EN_c_T SPIControllerTransfer5_p;/* '<S2>/SPI Controller Transfer1' */
  B_SPIControllerTransfer1_EN_c_T SPIControllerTransfer4_p;/* '<S2>/SPI Controller Transfer1' */
  B_SPIControllerTransfer1_EN_c_T SPIControllerTransfer3_p;/* '<S2>/SPI Controller Transfer1' */
  B_SPIControllerTransfer1_EN_c_T SPIControllerTransfer2_p;/* '<S2>/SPI Controller Transfer1' */
  B_SPIControllerTransfer1_EN_c_T SPIControllerTransfer1_p;/* '<S2>/SPI Controller Transfer1' */
} B_ENV_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  stm32cube_blocks_SPIControlle_T obj; /* '<S62>/SPI Controller Transfer' */
  stm32cube_blocks_SPIControlle_T obj_l;/* '<S60>/SPI Controller Transfer' */
  stm32cube_blocks_SPIControlle_T obj_p;/* '<S57>/SPI Controller Transfer' */
  stm32cube_blocks_SPIControlle_T obj_o;/* '<S55>/SPI Controller Transfer' */
  stm32cube_blocks_SPIControlle_T obj_g;/* '<S5>/SPI Controller Transfer7' */
  stm32cube_blocks_SPIControlle_T obj_gf;/* '<S4>/SPI Controller Transfer7' */
  real_T UnitDelay5_DSTATE;            /* '<S16>/Unit Delay5' */
  real_T UnitDelay2_DSTATE;            /* '<S16>/Unit Delay2' */
  real_T UnitDelay1_DSTATE;            /* '<S16>/Unit Delay1' */
  real_T UnitDelay4_DSTATE;            /* '<S16>/Unit Delay4' */
  real_T DelayInput1_DSTATE;           /* '<S58>/Delay Input1' */
  real_T UnitDelay3_DSTATE;            /* '<S16>/Unit Delay3' */
  real_T DelayInput1_DSTATE_a;         /* '<S54>/Delay Input1' */
  real_T UnitDelay1_DSTATE_e;          /* '<S15>/Unit Delay1' */
  real_T DelayInput1_DSTATE_o;         /* '<S56>/Delay Input1' */
  real_T UnitDelay2_DSTATE_f;          /* '<S17>/Unit Delay2' */
  real_T DelayInput1_DSTATE_e;         /* '<S61>/Delay Input1' */
  real_T UnitDelay1_DSTATE_h;          /* '<S17>/Unit Delay1' */
  real_T UnitDelay3_DSTATE_k;          /* '<S17>/Unit Delay3' */
  int_T CANPack1_ModeSignalID;         /* '<S1>/CAN Pack1' */
  int_T CANPack2_ModeSignalID;         /* '<S1>/CAN Pack2' */
  int_T CANPack3_ModeSignalID;         /* '<S1>/CAN Pack3' */
  int_T CANPack4_ModeSignalID;         /* '<S1>/CAN Pack4' */
  uint8_T Output_DSTATE;               /* '<S7>/Output' */
  DW_SPIControllerTransf_fwu4sl_T SPIControllerTransfer7_pnaevvfp;/* '<S62>/SPI Controller Transfer1' */
  DW_SPIControllerTransfer4_fw_T SPIControllerTransfer6_pnaevv;/* '<S62>/SPI Controller Transfer4' */
  DW_SPIControllerTransf_fwu4sl_T SPIControllerTransfer5_pnaevv;/* '<S62>/SPI Controller Transfer1' */
  DW_SPIControllerTransfer4_fw_T SPIControllerTransfer4_pnaevv;/* '<S62>/SPI Controller Transfer4' */
  DW_SPIControllerTransf_fwu4sl_T SPIControllerTransfer3_pnaevv;/* '<S62>/SPI Controller Transfer1' */
  DW_SPIControllerTransf_fwu4sl_T SPIControllerTransfer2_pnaevv;/* '<S62>/SPI Controller Transfer1' */
  DW_SPIControllerTransf_fwu4sl_T SPIControllerTransfer1_pnaevv;/* '<S62>/SPI Controller Transfer1' */
  DW_SPIControllerTransfer5_ENV_T SPIControllerTransfer7_pnaevvf;/* '<S60>/SPI Controller Transfer5' */
  DW_SPIControllerTransfe_fwu4s_T SPIControllerTransfer6_pnaev;/* '<S60>/SPI Controller Transfer1' */
  DW_SPIControllerTransfer5_ENV_T SPIControllerTransfer5_pnaev;/* '<S60>/SPI Controller Transfer5' */
  DW_SPIControllerTransfe_fwu4s_T SPIControllerTransfer4_pnaev;/* '<S60>/SPI Controller Transfer1' */
  DW_SPIControllerTransfe_fwu4s_T SPIControllerTransfer3_pnaev;/* '<S60>/SPI Controller Transfer1' */
  DW_SPIControllerTransfe_fwu4s_T SPIControllerTransfer2_pnaev;/* '<S60>/SPI Controller Transfer1' */
  DW_SPIControllerTransfe_fwu4s_T SPIControllerTransfer1_pnaev;/* '<S60>/SPI Controller Transfer1' */
  DW_SPIControllerTransfer_fwu4_T SPIControllerTransfer7_pnaevv;/* '<S57>/SPI Controller Transfer1' */
  DW_SPIControllerTransfer4_E_f_T SPIControllerTransfer6_pnae;/* '<S57>/SPI Controller Transfer4' */
  DW_SPIControllerTransfer_fwu4_T SPIControllerTransfer5_pnae;/* '<S57>/SPI Controller Transfer1' */
  DW_SPIControllerTransfer4_E_f_T SPIControllerTransfer4_pnae;/* '<S57>/SPI Controller Transfer4' */
  DW_SPIControllerTransfer_fwu4_T SPIControllerTransfer3_pnae;/* '<S57>/SPI Controller Transfer1' */
  DW_SPIControllerTransfer_fwu4_T SPIControllerTransfer2_pnae;/* '<S57>/SPI Controller Transfer1' */
  DW_SPIControllerTransfer_fwu4_T SPIControllerTransfer1_pnae;/* '<S57>/SPI Controller Transfer1' */
  DW_SPIControllerTransfer1_fwu_T SPIControllerTransfer7_pnaev;/* '<S55>/SPI Controller Transfer1' */
  DW_SPIControllerTransfer4_ENV_T SPIControllerTransfer6_pna;/* '<S55>/SPI Controller Transfer4' */
  DW_SPIControllerTransfer1_fwu_T SPIControllerTransfer5_pna;/* '<S55>/SPI Controller Transfer1' */
  DW_SPIControllerTransfer4_ENV_T SPIControllerTransfer4_pna;/* '<S55>/SPI Controller Transfer4' */
  DW_SPIControllerTransfer1_fwu_T SPIControllerTransfer3_pna;/* '<S55>/SPI Controller Transfer1' */
  DW_SPIControllerTransfer1_fwu_T SPIControllerTransfer2_pna;/* '<S55>/SPI Controller Transfer1' */
  DW_SPIControllerTransfer1_fwu_T SPIControllerTransfer1_pna;/* '<S55>/SPI Controller Transfer1' */
  DW_SPIControllerTransfer1_fw_T SPIControllerTransfer8_p;/* '<S3>/SPI Controller Transfer1' */
  DW_SPIControllerTransfer1_fw_T SPIControllerTransfer7_pn;/* '<S3>/SPI Controller Transfer1' */
  DW_SPIControllerTransfer1_fw_T SPIControllerTransfer6_pn;/* '<S3>/SPI Controller Transfer1' */
  DW_SPIControllerTransfer1_fw_T SPIControllerTransfer5_pn;/* '<S3>/SPI Controller Transfer1' */
  DW_SPIControllerTransfer1_fw_T SPIControllerTransfer4_pn;/* '<S3>/SPI Controller Transfer1' */
  DW_SPIControllerTransfer1_fw_T SPIControllerTransfer3_pn;/* '<S3>/SPI Controller Transfer1' */
  DW_SPIControllerTransfer1_fw_T SPIControllerTransfer2_pn;/* '<S3>/SPI Controller Transfer1' */
  DW_SPIControllerTransfer1_fw_T SPIControllerTransfer1_pn;/* '<S3>/SPI Controller Transfer1' */
  DW_SPIControllerTransfer1_E_f_T SPIControllerTransfer8;/* '<S2>/SPI Controller Transfer1' */
  DW_SPIControllerTransfer1_E_f_T SPIControllerTransfer7_p;/* '<S2>/SPI Controller Transfer1' */
  DW_SPIControllerTransfer1_E_f_T SPIControllerTransfer6_p;/* '<S2>/SPI Controller Transfer1' */
  DW_SPIControllerTransfer1_E_f_T SPIControllerTransfer5_p;/* '<S2>/SPI Controller Transfer1' */
  DW_SPIControllerTransfer1_E_f_T SPIControllerTransfer4_p;/* '<S2>/SPI Controller Transfer1' */
  DW_SPIControllerTransfer1_E_f_T SPIControllerTransfer3_p;/* '<S2>/SPI Controller Transfer1' */
  DW_SPIControllerTransfer1_E_f_T SPIControllerTransfer2_p;/* '<S2>/SPI Controller Transfer1' */
  DW_SPIControllerTransfer1_E_f_T SPIControllerTransfer1_p;/* '<S2>/SPI Controller Transfer1' */
  DW_SPIControllerTransfer1_ENV_T SPIControllerTransfer7;/* '<S1>/SPI Controller Transfer1' */
  DW_SPIControllerTransfer_ENV_T SPIControllerTransfer6;/* '<S1>/SPI Controller Transfer' */
  DW_SPIControllerTransfer1_ENV_T SPIControllerTransfer5;/* '<S1>/SPI Controller Transfer1' */
  DW_SPIControllerTransfer_ENV_T SPIControllerTransfer4;/* '<S1>/SPI Controller Transfer' */
  DW_SPIControllerTransfer1_ENV_T SPIControllerTransfer3;/* '<S1>/SPI Controller Transfer1' */
  DW_SPIControllerTransfer_ENV_T SPIControllerTransfer2;/* '<S1>/SPI Controller Transfer' */
  DW_SPIControllerTransfer1_ENV_T SPIControllerTransfer1;/* '<S1>/SPI Controller Transfer1' */
  DW_SPIControllerTransfer_ENV_T SPIControllerTransfer;/* '<S1>/SPI Controller Transfer' */
  DW_MATLABFunction_ENV_T sf_MATLABFunction4;/* '<S1>/MATLAB Function4' */
  DW_MATLABFunction_ENV_T sf_MATLABFunction2;/* '<S1>/MATLAB Function2' */
  DW_MATLABFunction_ENV_T sf_MATLABFunction1;/* '<S1>/MATLAB Function1' */
  DW_MATLABFunction_ENV_T sf_MATLABFunction;/* '<S1>/MATLAB Function' */
} DW_ENV_T;

/* Invariant block signals (default storage) */
typedef struct {
  const CAN_MESSAGE_BUS CANPack1;      /* '<S1>/CAN Pack1' */
  const CAN_MESSAGE_BUS CANPack2;      /* '<S1>/CAN Pack2' */
  const CAN_MESSAGE_BUS CANPack3;      /* '<S1>/CAN Pack3' */
  const real_T Gain;                   /* '<Root>/Gain' */
  const boolean_T Constant;            /* '<S59>/Constant' */
} ConstB_ENV_T;

/* Constant parameters (default storage) */
typedef struct {
  /* Pooled Parameter (Expression: uint8([0x90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0]))
   * Referenced by:
   *   '<S2>/Read RX Buffer start at RXB0SIDH1'
   *   '<S2>/Read RX Buffer start at RXB0SIDH2'
   *   '<S2>/Read RX Buffer start at RXB0SIDH3'
   *   '<S2>/Read RX Buffer start at RXB0SIDH4'
   *   '<S2>/Read RX Buffer start at RXB0SIDH5'
   *   '<S2>/Read RX Buffer start at RXB0SIDH6'
   *   '<S2>/Read RX Buffer start at RXB0SIDH7'
   *   '<S2>/Read RX Buffer start at RXB0SIDH8'
   *   '<S3>/Read RX Buffer start at RXB0SIDH1'
   *   '<S3>/Read RX Buffer start at RXB0SIDH2'
   *   '<S3>/Read RX Buffer start at RXB0SIDH3'
   *   '<S3>/Read RX Buffer start at RXB0SIDH4'
   *   '<S3>/Read RX Buffer start at RXB0SIDH5'
   *   '<S3>/Read RX Buffer start at RXB0SIDH6'
   *   '<S3>/Read RX Buffer start at RXB0SIDH7'
   *   '<S3>/Read RX Buffer start at RXB0SIDH8'
   *   '<S4>/Read RX Buffer start at RXB0SIDH7'
   *   '<S5>/Read RX Buffer start at RXB0SIDH7'
   */
  uint8_T pooled6[15];

  /* Pooled Parameter (Expression: 0xc0)
   * Referenced by:
   *   '<S55>/Enter Configuration Mode'
   *   '<S57>/Enter Configuration Mode'
   *   '<S60>/Enter Configuration Mode'
   *   '<S62>/Enter Configuration Mode'
   */
  uint8_T pooled7;

  /* Pooled Parameter (Expression: [0x02, 0x2A, 0xC0])
   * Referenced by:
   *   '<S55>/CNF1'
   *   '<S57>/CNF1'
   *   '<S60>/CNF1'
   *   '<S62>/CNF1'
   */
  uint8_T pooled8[3];

  /* Pooled Parameter (Expression: [0x02, 0x29, 0x99])
   * Referenced by:
   *   '<S55>/CNF2'
   *   '<S57>/CNF2'
   *   '<S60>/CNF2'
   *   '<S62>/CNF2'
   */
  uint8_T pooled9[3];

  /* Pooled Parameter (Expression: [0x02, 0x28, 0x02])
   * Referenced by:
   *   '<S55>/CNF3'
   *   '<S57>/CNF3'
   *   '<S60>/CNF3'
   *   '<S62>/CNF3'
   */
  uint8_T pooled10[3];

  /* Pooled Parameter (Expression: [0x05, 0x2B, 0xFF, 0x01])
   * Referenced by:
   *   '<S55>/CANINTE'
   *   '<S57>/CANINTE'
   *   '<S60>/CANINTE'
   *   '<S62>/CANINTE'
   */
  uint8_T pooled11[4];

  /* Pooled Parameter (Expression: [0x02, 0x60, 0x60])
   * Referenced by:
   *   '<S55>/Set acceptance filters'
   *   '<S57>/Set acceptance filters'
   *   '<S60>/Set acceptance filters'
   *   '<S62>/Set acceptance filters'
   */
  uint8_T pooled12[3];

  /* Pooled Parameter (Expression: [0x05, 0x2C, 0xFF, 0x00])
   * Referenced by:
   *   '<S55>/Clear flags'
   *   '<S57>/Clear flags'
   *   '<S60>/Clear flags'
   *   '<S62>/Clear flags'
   */
  uint8_T pooled13[4];

  /* Pooled Parameter (Expression: [0x02, 0x0F, 0x00])
   * Referenced by:
   *   '<S55>/ 000: normal mode, 0: don't abort pending transmit buffers, 0: one-shot disabled, 0: CLKOUT disabled, 00: sysclk//1 | 0000 0000 | 0x00'
   *   '<S57>/ 000: normal mode, 0: don't abort pending transmit buffers, 0: one-shot disabled, 0: CLKOUT disabled, 00: sysclk//1 | 0000 0000 | 0x00'
   *   '<S60>/ 000: normal mode, 0: don't abort pending transmit buffers, 0: one-shot disabled, 0: CLKOUT disabled, 00: sysclk//1 | 0000 0000 | 0x00'
   *   '<S62>/ 000: normal mode, 0: don't abort pending transmit buffers, 0: one-shot disabled, 0: CLKOUT disabled, 00: sysclk//1 | 0000 0000 | 0x00'
   */
  uint8_T pooled14[3];
} ConstP_ENV_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T MTotalFinal;                  /* '<Root>/MTotalFinal' */
  real_T PActual;                      /* '<Root>/PActual' */
  real_T rSpeedRegenDerateRR;          /* '<Root>/rSpeedRegenDerateRR' */
  real_T PDischargeMax;                /* '<Root>/PDischargeMax' */
  real_T rThrottlePedal;               /* '<Root>/rThrottlePedal' */
  real_T rThrottlePedal1;              /* '<Root>/rThrottlePedal1' */
  real_T aSteeringAngle;               /* '<Root>/aSteeringAngle' */
  real_T pBrakeF;                      /* '<Root>/pBrakeF' */
  real_T pBrakeR;                      /* '<Root>/pBrakeR' */
  real_T BBMSP0A80Out;                 /* '<Root>/BBMSP0A80Out' */
  real_T BBMSP0AC0Out;                 /* '<Root>/BBMSP0AC0Out' */
  real_T BBMSP0AFAOut;                 /* '<Root>/BBMSP0AFAOut' */
  real_T BBMSP0A0COut;                 /* '<Root>/BBMSP0A0COut' */
  real_T BBMSP0A0EOut;                 /* '<Root>/BBMSP0A0EOut' */
  real_T BBMSP0A10Out;                 /* '<Root>/BBMSP0A10Out' */
  real_T BTVOK;                        /* '<Root>/BTVOK' */
  real_T NInvDTCRROut;                 /* '<Root>/NInvDTCRROut' */
  real_T NInvDTCRLOut;                 /* '<Root>/NInvDTCRLOut' */
  real_T NInvDTCFROut;                 /* '<Root>/NInvDTCFROut' */
  real_T NInvDTCFLOut;                 /* '<Root>/NInvDTCFLOut' */
  real_T IIVTSOut;                     /* '<Root>/IIVTSOut' */
  real_T MFRFinal;                     /* '<Root>/MFRFinal' */
  real_T MFLFinal;                     /* '<Root>/MFLFinal' */
  real_T MRLFinal;                     /* '<Root>/MRLFinal' */
  real_T MRRFinal;                     /* '<Root>/MRRFinal' */
  real_T rRegenPaddle;                 /* '<Root>/rRegenPaddle' */
  real_T vChassis;                     /* '<Root>/vChassis' */
  real_T pBrakeMax;                    /* '<Root>/pBrakeMax' */
  real_T vWheelRL;                     /* '<Root>/vWheelRL' */
  real_T vWheelRR;                     /* '<Root>/vWheelRR' */
  real_T vWheelFL;                     /* '<Root>/vWheelFL' */
  real_T vWheelFR;                     /* '<Root>/vWheelFR' */
  real_T BThrottleError;               /* '<Root>/BThrottleError' */
  real_T tThrottleError;               /* '<Root>/tThrottleError' */
  real_T BBrakeError;                  /* '<Root>/BBrakeError' */
  real_T tBrakeError;                  /* '<Root>/tBrakeError' */
  real_T BBrakeOn;                     /* '<Root>/BBrakeOn' */
  real_T BPedalOverlap;                /* '<Root>/BPedalOverlap' */
  real_T BAppsOK;                      /* '<Root>/BAppsOK' */
  real_T BRegenOn;                     /* '<Root>/BRegenOn' */
  real_T BTVOn;                        /* '<Root>/BTVOn' */
  real_T rSOE;                         /* '<Root>/rSOE' */
  real_T sChassis;                     /* '<Root>/sChassis' */
  real_T rSOC;                         /* '<Root>/rSOC' */
  real_T rTVMultiplier;                /* '<Root>/rTVMultiplier' */
  real_T PEngineBraking;               /* '<Root>/PEngineBraking' */
  real_T NInvState;                    /* '<Root>/NInvState' */
  real_T rGrip;                        /* '<Root>/rGrip' */
  real_T rSlipRatioFRActual;           /* '<Root>/rSlipRatioFRActual' */
  real_T rSlipRatioRLActual;           /* '<Root>/rSlipRatioRLActual' */
  real_T rSlipRatioRRActual;           /* '<Root>/rSlipRatioRRActual' */
  real_T NTractionControlMultiplierRR;
                                     /* '<Root>/NTractionControlMultiplierRR' */
  real_T NABSMultiplierRR;             /* '<Root>/NABSMultiplierRR' */
  real_T NTractionControlMultiplierRL;
                                     /* '<Root>/NTractionControlMultiplierRL' */
  real_T NABSMultiplierRL;             /* '<Root>/NABSMultiplierRL' */
  real_T NThrottleMap;                 /* '<Root>/NThrottleMap' */
  real_T BReadyToDrive;                /* '<Root>/BReadyToDrive' */
  real_T NABSMultiplierFL;             /* '<Root>/NABSMultiplierFL' */
  real_T NABSMultiplierFR;             /* '<Root>/NABSMultiplierFR' */
  real_T BBalancingOnOut;              /* '<Root>/BBalancingOnOut' */
  real_T MTorqueVectoringFL;           /* '<Root>/MTorqueVectoringFL' */
  real_T MTorqueVectoringFR;           /* '<Root>/MTorqueVectoringFR' */
  real_T MTorqueVectoringRL;           /* '<Root>/MTorqueVectoringRL' */
  real_T MTorqueVectoringRR;           /* '<Root>/MTorqueVectoringRR' */
  real_T NTractionControlMultiplierFL;
                                     /* '<Root>/NTractionControlMultiplierFL' */
  real_T NTractionControlMultiplierFR;
                                     /* '<Root>/NTractionControlMultiplierFR' */
  real_T MDischargeLimited;            /* '<Root>/MDischargeLimited' */
  real_T MDriverRegenRequested;        /* '<Root>/MDriverRegenRequested' */
  real_T rSlipRatioOptimal;            /* '<Root>/rSlipRatioOptimal' */
  real_T NCarState;                    /* '<Root>/NCarState' */
  real_T MTorqueDistributionFL;        /* '<Root>/MTorqueDistributionFL' */
  real_T MTorqueDistributionFR;        /* '<Root>/MTorqueDistributionFR' */
  real_T MTorqueDistributionRL;        /* '<Root>/MTorqueDistributionRL' */
  real_T MTorqueDistributionRR;        /* '<Root>/MTorqueDistributionRR' */
  real_T nMotorRLOut;                  /* '<Root>/nMotorRLOut' */
  real_T nMotorFLOut;                  /* '<Root>/nMotorFLOut' */
  real_T nMotorRROut;                  /* '<Root>/nMotorRROut' */
  real_T nMotorFROut;                  /* '<Root>/nMotorFROut' */
  real_T BDischargeAllowed;            /* '<Root>/BDischargeAllowed' */
  real_T TMotorRLOut;                  /* '<Root>/TMotorRLOut' */
  real_T TInvRLOut;                    /* '<Root>/TInvRLOut' */
  real_T TMotorFLOut;                  /* '<Root>/TMotorFLOut' */
  real_T TInvFLOut;                    /* '<Root>/TInvFLOut' */
  real_T TMotorRROut;                  /* '<Root>/TMotorRROut' */
  real_T TInvRROut;                    /* '<Root>/TInvRROut' */
  real_T TMotorFROut;                  /* '<Root>/TMotorFROut' */
  real_T TInvFROut;                    /* '<Root>/TInvFROut' */
  real_T TInvMax;                      /* '<Root>/TInvMax' */
  real_T TMotorMax;                    /* '<Root>/TMotorMax' */
  real_T TCellMaxOut;                  /* '<Root>/TCellMaxOut' */
  real_T IBMSHallEffectOut;            /* '<Root>/IBMSHallEffectOut' */
  real_T VDCInvRLOut;                  /* '<Root>/VDCInvRLOut' */
  real_T BEMSOn;                       /* '<Root>/BEMSOn' */
  real_T BTCOn;                        /* '<Root>/BTCOn' */
  real_T VCellMinOut;                  /* '<Root>/VCellMinOut' */
  real_T VCellMaxOut;                  /* '<Root>/VCellMaxOut' */
  real_T TCellMinOut;                  /* '<Root>/TCellMinOut' */
  real_T nYawRateErrorActual;          /* '<Root>/nYawRateErrorActual' */
  real_T tPedalOverlap;                /* '<Root>/tPedalOverlap' */
  real_T tAppsTimer;                   /* '<Root>/tAppsTimer' */
  real_T rSplitRear;                   /* '<Root>/rSplitRear' */
  real_T PRegenLimit;                  /* '<Root>/PRegenLimit' */
  real_T PRegenRequested;              /* '<Root>/PRegenRequested' */
  real_T BIMUOk;                       /* '<Root>/BIMUOk' */
  real_T EOffset;                      /* '<Root>/EOffset' */
  real_T PEnergyMeter;                 /* '<Root>/PEnergyMeter' */
  real_T NBMSState;                    /* '<Root>/NBMSState' */
  real_T BOverpower;                   /* '<Root>/BOverpower' */
  real_T BPCComplete;                  /* '<Root>/BPCComplete' */
  real_T BEMSDriverSignal1;            /* '<Root>/BEMSDriverSignal1' */
  real_T BEMSDriverSignal2;            /* '<Root>/BEMSDriverSignal2' */
  real_T BEMSDriverSignal3;            /* '<Root>/BEMSDriverSignal3' */
  real_T BPageUp;                      /* '<Root>/BPageUp' */
  real_T BPageDown;                    /* '<Root>/BPageDown' */
  real_T MRegenMax;                    /* '<Root>/MRegenMax' */
  real_T NSectorLap;                   /* '<Root>/NSectorLap' */
  real_T MPCRegenRequested;            /* '<Root>/MPCRegenRequested' */
  real_T MPCDischargeRequested;        /* '<Root>/MPCDischargeRequested' */
  real_T PPCIntegralTermDischarge;     /* '<Root>/PPCIntegralTermDischarge' */
  real_T PPCIntegralTermRegen;         /* '<Root>/PPCIntegralTermRegen' */
  real_T NSectorGlobal;                /* '<Root>/NSectorGlobal' */
  real_T PPCProportionalTermDischarge;
                                     /* '<Root>/PPCProportionalTermDischarge' */
  real_T PPCProportionalTermRegen;     /* '<Root>/PPCProportionalTermRegen' */
  real_T BDataMark;                    /* '<Root>/BDataMark' */
  real_T xDamperFL;                    /* '<Root>/xDamperFL' */
  real_T xDamperFR;                    /* '<Root>/xDamperFR' */
  real_T xDamperRR;                    /* '<Root>/xDamperRR' */
  real_T xDamperRL;                    /* '<Root>/xDamperRL' */
  real_T BErrorReset;                  /* '<Root>/BErrorReset' */
  real_T BDrivetrainCoolingOn;         /* '<Root>/BDrivetrainCoolingOn' */
  real_T PPCRegenRequested;            /* '<Root>/PPCRegenRequested' */
  real_T PDischargeLimit;              /* '<Root>/PDischargeLimit' */
  real_T PRegenDerate;                 /* '<Root>/PRegenDerate' */
  real_T PHighCellVoltageRegenDerate; /* '<Root>/PHighCellVoltageRegenDerate' */
  real_T PHighCellTemperatureDerate;   /* '<Root>/PHighCellTemperatureDerate' */
  real_T PDischargeDerate;             /* '<Root>/PDischargeDerate' */
  real_T PMotorTemperatureDerate;      /* '<Root>/PMotorTemperatureDerate' */
  real_T PMotorTemperatureDerateFL;    /* '<Root>/PMotorTemperatureDerateFL' */
  real_T PMotorTemperatureDerateFR;    /* '<Root>/PMotorTemperatureDerateFR' */
  real_T PMotorTemperatureDerateRL;    /* '<Root>/PMotorTemperatureDerateRL' */
  real_T PMotorTemperatureDerateRR;    /* '<Root>/PMotorTemperatureDerateRR' */
  real_T PLowCellVoltageDischargeDerate;
                                   /* '<Root>/PLowCellVoltageDischargeDerate' */
  real_T PInvTemperatureDerate;        /* '<Root>/PInvTemperatureDerate' */
  real_T PInvTemperatureDerateFL;      /* '<Root>/PInvTemperatureDerateFL' */
  real_T PInvTemperatureDerateFR;      /* '<Root>/PInvTemperatureDerateFR' */
  real_T PInvTemperatureDerateRR;      /* '<Root>/PInvTemperatureDerateRR' */
  real_T PInvTemperatureDerateRL;      /* '<Root>/PInvTemperatureDerateRL' */
  real_T aCamberGainSteerFL;           /* '<Root>/aCamberGainSteerFL' */
  real_T aCamberGainSteerFR;           /* '<Root>/aCamberGainSteerFR' */
  real_T PPCDischargeRequested;        /* '<Root>/PPCDischargeRequested' */
  real_T rSlipRatioFLActual;           /* '<Root>/rSlipRatioFLActual' */
  real_T FLongitudinalLoadTransfer;    /* '<Root>/FLongitudinalLoadTransfer' */
  real_T FTyreVerticalFL;              /* '<Root>/FTyreVerticalFL' */
  real_T FTyreVerticalFR;              /* '<Root>/FTyreVerticalFR' */
  real_T FTyreVerticalRL;              /* '<Root>/FTyreVerticalRL' */
  real_T FTyreVerticalRR;              /* '<Root>/FTyreVerticalRR' */
  real_T BCalibrationOn;               /* '<Root>/BCalibrationOn' */
  real_T FTotalDownforce;              /* '<Root>/FTotalDownforce' */
  real_T aSlipAngleFL;                 /* '<Root>/aSlipAngleFL' */
  real_T aSlipAngleFR;                 /* '<Root>/aSlipAngleFR' */
  real_T aCamberFL;                    /* '<Root>/aCamberFL' */
  real_T aCamberFR;                    /* '<Root>/aCamberFR' */
  real_T aCamberRL;                    /* '<Root>/aCamberRL' */
  real_T aCamberRR;                    /* '<Root>/aCamberRR' */
  real_T aRollAngle;                   /* '<Root>/aRollAngle' */
  real_T xHeaveTravelR;                /* '<Root>/xHeaveTravelR' */
  real_T xHeaveTravelF;                /* '<Root>/xHeaveTravelF' */
  real_T rSpeedRegenDerateFR;          /* '<Root>/rSpeedRegenDerateFR' */
  real_T rSpeedRegenDerateRL;          /* '<Root>/rSpeedRegenDerateRL' */
  real_T rSpeedRegenDerateFL;          /* '<Root>/rSpeedRegenDerateFL' */
  real_T PTSTemperatureDerateFL;       /* '<Root>/PTSTemperatureDerateFL' */
  real_T PTSTemperatureDerateFR;       /* '<Root>/PTSTemperatureDerateFR' */
  real_T PTSTemperatureDerateRL;       /* '<Root>/PTSTemperatureDerateRL' */
  real_T PTSTemperatureDerateRR;       /* '<Root>/PTSTemperatureDerateRR' */
  real_T PSOCDischargeDerate;          /* '<Root>/PSOCDischargeDerate' */
  real_T PSOCRegenDerate;              /* '<Root>/PSOCRegenDerate' */
  real_T aSlipAngleRL;                 /* '<Root>/aSlipAngleRL' */
  real_T aSlipAngleRR;                 /* '<Root>/aSlipAngleRR' */
  real_T BSpeedDerateOn;               /* '<Root>/BSpeedDerateOn' */
  real_T VDCAccumulatorOut;            /* '<Root>/VDCAccumulatorOut' */
  real_T MTractionControlRRTotal;      /* '<Root>/MTractionControlRRTotal' */
  real_T MTractionControlRLTotal;      /* '<Root>/MTractionControlRLTotal' */
  real_T MTractionControlFRTotal;      /* '<Root>/MTractionControlFRTotal' */
  real_T MTractionControlFLTotal;      /* '<Root>/MTractionControlFLTotal' */
  real_T BSpinningModeOn;              /* '<Root>/BSpinningModeOn' */
  real_T PRegenMax;                    /* '<Root>/PRegenMax' */
  real_T rEngineBrakingSplit;          /* '<Root>/rEngineBrakingSplit' */
  real_T NLap;                         /* '<Root>/NLap' */
  real_T sSector;                      /* '<Root>/sSector' */
  real_T EBudget;                      /* '<Root>/EBudget' */
  real_T ERemaining;                   /* '<Root>/ERemaining' */
  real_T ESector;                      /* '<Root>/ESector' */
  real_T FTotalLateralLoadTransfer;    /* '<Root>/FTotalLateralLoadTransfer' */
  real_T BAccuFanOn;                   /* '<Root>/BAccuFanOn' */
  real_T BMotorRBHFanOn;               /* '<Root>/BMotorRBHFanOn' */
  real_T BInverterFanOn;               /* '<Root>/BInverterFanOn' */
  real_T BReadyToDriveBuzzer;          /* '<Root>/BReadyToDriveBuzzer' */
  real_T BBrakeLight;                  /* '<Root>/BBrakeLight' */
  real_T BInvLVOn;                     /* '<Root>/BInvLVOn' */
  real_T tIMUError;                    /* '<Root>/tIMUError' */
  real_T MDriverDischargeRequested;    /* '<Root>/MDriverDischargeRequested' */
  real_T MRegenLimited;                /* '<Root>/MRegenLimited' */
  real_T MTotalRequested;              /* '<Root>/MTotalRequested' */
  real_T BxDamperFLOk;                 /* '<Root>/BxDamperFLOk' */
  real_T BxDamperFROk;                 /* '<Root>/BxDamperFROk' */
  real_T BxDamperRLOk;                 /* '<Root>/BxDamperRLOk' */
  real_T BxDamperRROk;                 /* '<Root>/BxDamperRROk' */
  real_T BIMUError;                    /* '<Root>/BIMUError' */
  real_T PDischargeLimited;            /* '<Root>/PDischargeLimited' */
  real_T aCamberGainRollF;             /* '<Root>/aCamberGainRollF' */
  real_T aCamberGainRollR;             /* '<Root>/aCamberGainRollR' */
  real_T aCamberGainHeaveF;            /* '<Root>/aCamberGainHeaveF' */
  real_T aCamberGainHeaveR;            /* '<Root>/aCamberGainHeaveR' */
  real_T BInverterErrorRear;           /* '<Root>/BInverterErrorRear' */
  real_T BInverterErrorFront;          /* '<Root>/BInverterErrorFront' */
  real_T ETotalRequested;              /* '<Root>/ETotalRequested' */
  real_T ESector1Remaining;            /* '<Root>/ESector1Remaining' */
  real_T ESector2Remaining;            /* '<Root>/ESector2Remaining' */
  real_T ESector3Remaining;            /* '<Root>/ESector3Remaining' */
  real_T ESector4Remaining;            /* '<Root>/ESector4Remaining' */
  real_T NSector9Remaining;            /* '<Root>/NSector9Remaining' */
  real_T NSector10Remaining;           /* '<Root>/NSector10Remaining' */
  real_T NSector11Remaining;           /* '<Root>/NSector11Remaining' */
  real_T NSector12Remaining;           /* '<Root>/NSector12Remaining' */
  real_T ESector5Remaining;            /* '<Root>/ESector5Remaining' */
  real_T ESector6Remaining;            /* '<Root>/ESector6Remaining' */
  real_T ESector7Remaining;            /* '<Root>/ESector7Remaining' */
  real_T ESector9Remaining;            /* '<Root>/ESector9Remaining' */
  real_T ESector10Remaining;           /* '<Root>/ESector10Remaining' */
  real_T ESector11Remaining;           /* '<Root>/ESector11Remaining' */
  real_T ESector12Remaining;           /* '<Root>/ESector12Remaining' */
  real_T NSector1Remaining;            /* '<Root>/NSector1Remaining' */
  real_T NSector2Remaining;            /* '<Root>/NSector2Remaining' */
  real_T NSector3Remaining;            /* '<Root>/NSector3Remaining' */
  real_T NSector4Remaining;            /* '<Root>/NSector4Remaining' */
  real_T NSector5Remaining;            /* '<Root>/NSector5Remaining' */
  real_T NSector6Remaining;            /* '<Root>/NSector6Remaining' */
  real_T NSector7Remaining;            /* '<Root>/NSector7Remaining' */
  real_T NSector8Remaining;            /* '<Root>/NSector8Remaining' */
  real_T ESector8Remaining;            /* '<Root>/ESector8Remaining' */
  real_T NThrottleMapEM;               /* '<Root>/NThrottleMapEM' */
  real_T NThrottleMapOW;               /* '<Root>/NThrottleMapOW' */
  real_T rTorqueSplit;                 /* '<Root>/rTorqueSplit' */
  real_T rTorqueSplitOW;               /* '<Root>/rTorqueSplitOW' */
  real_T PRegenMaxEM;                  /* '<Root>/PRegenMaxEM' */
  real_T PRegenMaxOW;                  /* '<Root>/PRegenMaxOW' */
  real_T rTVMultiplierEM;              /* '<Root>/rTVMultiplierEM' */
  real_T rTVMultiplierOW;              /* '<Root>/rTVMultiplierOW' */
  real_T rEngineBrakingSplitEM;        /* '<Root>/rEngineBrakingSplitEM' */
  real_T rEngineBrakingSplitOW;        /* '<Root>/rEngineBrakingSplitOW' */
  real_T PDischargeMaxEM;              /* '<Root>/PDischargeMaxEM' */
  real_T PDischargeMaxOW;              /* '<Root>/PDischargeMaxOW' */
  real_T PEngineBrakingEM;             /* '<Root>/PEngineBrakingEM' */
  real_T PEngineBrakingOW;             /* '<Root>/PEngineBrakingOW' */
  real_T NTCKdSelector;                /* '<Root>/NTCKdSelector' */
  real_T NPCKpSelector;                /* '<Root>/NPCKpSelector' */
  real_T rTorqueSplitEM;               /* '<Root>/rTorqueSplitEM' */
  real_T BTVOnEM;                      /* '<Root>/BTVOnEM' */
  real_T BTVOnOW;                      /* '<Root>/BTVOnOW' */
  real_T BDrivetrainCoolingOnEM;       /* '<Root>/BDrivetrainCoolingOnEM' */
  real_T BDrivetrainCoolingOnOW;       /* '<Root>/BDrivetrainCoolingOnOW' */
  real_T BTCOnEM;                      /* '<Root>/BTCOnEM' */
  real_T BTCOnOW;                      /* '<Root>/BTCOnOW' */
  real_T BEMSOnEM;                     /* '<Root>/BEMSOnEM' */
  real_T BEMSOnOW;                     /* '<Root>/BEMSOnOW' */
  real_T BSpinningModeOnEM;            /* '<Root>/BSpinningModeOnEM' */
  real_T BSpinningModeOnOW;            /* '<Root>/BSpinningModeOnOW' */
  real_T NEventMode;                   /* '<Root>/NEventMode' */
  real_T BInvErrorResetRLCAN3;         /* '<Root>/BInvErrorResetRLCAN3' */
  real_T BInvErrorResetFLCAN3;         /* '<Root>/BInvErrorResetFLCAN3' */
  real_T BInvErrorResetFRCAN3;         /* '<Root>/BInvErrorResetFRCAN3' */
  real_T BInvErrorResetRRCAN3;         /* '<Root>/BInvErrorResetRRCAN3' */
  real_T BQuitInvOnFLCAN3;             /* '<Root>/BQuitInvOnFLCAN3' */
  real_T BQuitInvOnFRCAN3;             /* '<Root>/BQuitInvOnFRCAN3' */
  real_T BQuitInvOnRRCAN3;             /* '<Root>/BQuitInvOnRRCAN3' */
  real_T BQuitInvOnRLCAN3;             /* '<Root>/BQuitInvOnRLCAN3' */
} ExtY_ENV_T;

/* Real-time Model Data Structure */
struct tag_RTM_ENV_T {
  const char_T * volatile errorStatus;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick0;
  } Timing;
};

/* Block signals (default storage) */
extern B_ENV_T ENV_B;

/* Block states (default storage) */
extern DW_ENV_T ENV_DW;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_ENV_T ENV_Y;
extern const ConstB_ENV_T ENV_ConstB;  /* constant block i/o */

/* Constant parameters (default storage) */
extern const ConstP_ENV_T ENV_ConstP;

/* Model entry point functions */
extern void ENV_initialize(void);
extern void ENV_step(void);
extern void ENV_terminate(void);

/* Real-time Model object */
extern RT_MODEL_ENV_T *const ENV_M;
extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S2>/CAN Unpack1' : Unused code path elimination
 * Block '<S2>/CAN Unpack2' : Unused code path elimination
 * Block '<S2>/CAN Unpack3' : Unused code path elimination
 * Block '<S2>/CAN Unpack4' : Unused code path elimination
 * Block '<S2>/CAN Unpack5' : Unused code path elimination
 * Block '<S2>/CAN Unpack6' : Unused code path elimination
 * Block '<S2>/CAN Unpack7' : Unused code path elimination
 * Block '<S2>/CAN Unpack8' : Unused code path elimination
 * Block '<S3>/CAN Unpack1' : Unused code path elimination
 * Block '<S3>/CAN Unpack2' : Unused code path elimination
 * Block '<S3>/CAN Unpack3' : Unused code path elimination
 * Block '<S3>/CAN Unpack4' : Unused code path elimination
 * Block '<S3>/CAN Unpack5' : Unused code path elimination
 * Block '<S3>/CAN Unpack6' : Unused code path elimination
 * Block '<S3>/CAN Unpack7' : Unused code path elimination
 * Block '<S3>/CAN Unpack8' : Unused code path elimination
 * Block '<S4>/CAN Unpack7' : Unused code path elimination
 * Block '<S5>/CAN Unpack7' : Unused code path elimination
 * Block '<Root>/Constant1' : Unused code path elimination
 * Block '<S7>/Data Type Propagation' : Unused code path elimination
 * Block '<S40>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S41>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<Root>/Data Type Conversion1' : Unused code path elimination
 * Block '<Root>/Data Type Conversion3' : Unused code path elimination
 * Block '<Root>/Data Type Conversion5' : Unused code path elimination
 * Block '<Root>/Data Type Conversion7' : Unused code path elimination
 * Block '<S14>/Step2' : Unused code path elimination
 * Block '<S14>/Unit Delay' : Unused code path elimination
 * Block '<S15>/Step2' : Unused code path elimination
 * Block '<S15>/Unit Delay' : Unused code path elimination
 * Block '<S15>/Unit Delay2' : Unused code path elimination
 * Block '<S17>/Step2' : Unused code path elimination
 * Block '<S17>/Unit Delay4' : Unused code path elimination
 * Block '<S17>/Unit Delay5' : Unused code path elimination
 * Block '<S17>/Unit Delay6' : Unused code path elimination
 * Block '<S17>/Unit Delay7' : Unused code path elimination
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'ENV'
 * '<S1>'   : 'ENV/CAN Tx2'
 * '<S2>'   : 'ENV/CAN1 RX'
 * '<S3>'   : 'ENV/CAN2 RX'
 * '<S4>'   : 'ENV/CAN3 RX'
 * '<S5>'   : 'ENV/CAN4 RX'
 * '<S6>'   : 'ENV/Compare To Constant'
 * '<S7>'   : 'ENV/Counter Limited'
 * '<S8>'   : 'ENV/Digital Port Read1'
 * '<S9>'   : 'ENV/Digital Port Read2'
 * '<S10>'  : 'ENV/Digital Port Read3'
 * '<S11>'  : 'ENV/Digital Port Read4'
 * '<S12>'  : 'ENV/Digital Port Write'
 * '<S13>'  : 'ENV/Digital Port Write1'
 * '<S14>'  : 'ENV/Initialize CAN1'
 * '<S15>'  : 'ENV/Initialize CAN2'
 * '<S16>'  : 'ENV/Initialize CAN3'
 * '<S17>'  : 'ENV/Initialize CAN4'
 * '<S18>'  : 'ENV/CAN Tx2/MATLAB Function'
 * '<S19>'  : 'ENV/CAN Tx2/MATLAB Function1'
 * '<S20>'  : 'ENV/CAN Tx2/MATLAB Function2'
 * '<S21>'  : 'ENV/CAN Tx2/MATLAB Function4'
 * '<S22>'  : 'ENV/CAN1 RX/MATLAB Function1'
 * '<S23>'  : 'ENV/CAN1 RX/MATLAB Function2'
 * '<S24>'  : 'ENV/CAN1 RX/MATLAB Function3'
 * '<S25>'  : 'ENV/CAN1 RX/MATLAB Function4'
 * '<S26>'  : 'ENV/CAN1 RX/MATLAB Function5'
 * '<S27>'  : 'ENV/CAN1 RX/MATLAB Function6'
 * '<S28>'  : 'ENV/CAN1 RX/MATLAB Function7'
 * '<S29>'  : 'ENV/CAN1 RX/MATLAB Function8'
 * '<S30>'  : 'ENV/CAN2 RX/MATLAB Function1'
 * '<S31>'  : 'ENV/CAN2 RX/MATLAB Function2'
 * '<S32>'  : 'ENV/CAN2 RX/MATLAB Function3'
 * '<S33>'  : 'ENV/CAN2 RX/MATLAB Function4'
 * '<S34>'  : 'ENV/CAN2 RX/MATLAB Function5'
 * '<S35>'  : 'ENV/CAN2 RX/MATLAB Function6'
 * '<S36>'  : 'ENV/CAN2 RX/MATLAB Function7'
 * '<S37>'  : 'ENV/CAN2 RX/MATLAB Function8'
 * '<S38>'  : 'ENV/CAN3 RX/MATLAB Function7'
 * '<S39>'  : 'ENV/CAN4 RX/MATLAB Function7'
 * '<S40>'  : 'ENV/Counter Limited/Increment Real World'
 * '<S41>'  : 'ENV/Counter Limited/Wrap To Zero'
 * '<S42>'  : 'ENV/Digital Port Read1/ECSoC'
 * '<S43>'  : 'ENV/Digital Port Read1/ECSoC/ECSimCodegen'
 * '<S44>'  : 'ENV/Digital Port Read2/ECSoC'
 * '<S45>'  : 'ENV/Digital Port Read2/ECSoC/ECSimCodegen'
 * '<S46>'  : 'ENV/Digital Port Read3/ECSoC'
 * '<S47>'  : 'ENV/Digital Port Read3/ECSoC/ECSimCodegen'
 * '<S48>'  : 'ENV/Digital Port Read4/ECSoC'
 * '<S49>'  : 'ENV/Digital Port Read4/ECSoC/ECSimCodegen'
 * '<S50>'  : 'ENV/Digital Port Write/ECSoC'
 * '<S51>'  : 'ENV/Digital Port Write/ECSoC/ECSimCodegen'
 * '<S52>'  : 'ENV/Digital Port Write1/ECSoC'
 * '<S53>'  : 'ENV/Digital Port Write1/ECSoC/ECSimCodegen'
 * '<S54>'  : 'ENV/Initialize CAN1/Detect Increase'
 * '<S55>'  : 'ENV/Initialize CAN1/MCPInit'
 * '<S56>'  : 'ENV/Initialize CAN2/Detect Increase'
 * '<S57>'  : 'ENV/Initialize CAN2/MCPInit'
 * '<S58>'  : 'ENV/Initialize CAN3/Detect Increase'
 * '<S59>'  : 'ENV/Initialize CAN3/Initialize'
 * '<S60>'  : 'ENV/Initialize CAN3/MCPInit'
 * '<S61>'  : 'ENV/Initialize CAN4/Detect Increase'
 * '<S62>'  : 'ENV/Initialize CAN4/MCPInit'
 */
#endif                                 /* ENV_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
