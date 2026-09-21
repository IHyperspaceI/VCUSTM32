/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: ENV.h
 *
 * Code generated for Simulink model 'ENV'.
 *
 * Model version                  : 13.310
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Mon Sep 21 13:14:07 2026
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
#include "main.h"
#include "MW_SPI.h"
#include "mw_stm32_spi_ll.h"
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

/* Block states (default storage) for system '<S2>/MATLAB Function' */
typedef struct {
  uint16_T count;                      /* '<S2>/MATLAB Function' */
} DW_MATLABFunction_ENV_T;

/* Block states (default storage) for system '<S2>/SPI Controller Transfer' */
typedef struct {
  stm32cube_blocks_SPIControlle_T obj; /* '<S2>/SPI Controller Transfer' */
  boolean_T objisempty;                /* '<S2>/SPI Controller Transfer' */
} DW_SPIControllerTransfer_ENV_T;

/* Block states (default storage) for system '<S2>/SPI Controller Transfer1' */
typedef struct {
  stm32cube_blocks_SPIControlle_T obj; /* '<S2>/SPI Controller Transfer1' */
  boolean_T objisempty;                /* '<S2>/SPI Controller Transfer1' */
} DW_SPIControllerTransfer1_ENV_T;

/* Block states (default storage) for system '<S30>/SPI Controller Transfer1' */
typedef struct {
  stm32cube_blocks_SPIControlle_T obj; /* '<S30>/SPI Controller Transfer1' */
  boolean_T objisempty;                /* '<S30>/SPI Controller Transfer1' */
} DW_SPIControllerTransfer1_E_f_T;

/* Block states (default storage) for system '<S30>/SPI Controller Transfer5' */
typedef struct {
  stm32cube_blocks_SPIControlle_T obj; /* '<S30>/SPI Controller Transfer5' */
  boolean_T objisempty;                /* '<S30>/SPI Controller Transfer5' */
} DW_SPIControllerTransfer5_ENV_T;

/* Block states (default storage) for system '<S32>/SPI Controller Transfer1' */
typedef struct {
  stm32cube_blocks_SPIControlle_T obj; /* '<S32>/SPI Controller Transfer1' */
  boolean_T objisempty;                /* '<S32>/SPI Controller Transfer1' */
} DW_SPIControllerTransfer1_fw_T;

/* Block states (default storage) for system '<S32>/SPI Controller Transfer5' */
typedef struct {
  stm32cube_blocks_SPIControlle_T obj; /* '<S32>/SPI Controller Transfer5' */
  boolean_T objisempty;                /* '<S32>/SPI Controller Transfer5' */
} DW_SPIControllerTransfer5_E_f_T;

/* Block states (default storage) for system '<S34>/SPI Controller Transfer1' */
typedef struct {
  stm32cube_blocks_SPIControlle_T obj; /* '<S34>/SPI Controller Transfer1' */
  boolean_T objisempty;                /* '<S34>/SPI Controller Transfer1' */
} DW_SPIControllerTransfer1_fwu_T;

/* Block states (default storage) for system '<S34>/SPI Controller Transfer5' */
typedef struct {
  stm32cube_blocks_SPIControlle_T obj; /* '<S34>/SPI Controller Transfer5' */
  boolean_T objisempty;                /* '<S34>/SPI Controller Transfer5' */
} DW_SPIControllerTransfer5_fw_T;

/* Block states (default storage) for system '<S36>/SPI Controller Transfer1' */
typedef struct {
  stm32cube_blocks_SPIControlle_T obj; /* '<S36>/SPI Controller Transfer1' */
  boolean_T objisempty;                /* '<S36>/SPI Controller Transfer1' */
} DW_SPIControllerTransfer_fwu4_T;

/* Block states (default storage) for system '<S36>/SPI Controller Transfer5' */
typedef struct {
  stm32cube_blocks_SPIControlle_T obj; /* '<S36>/SPI Controller Transfer5' */
  boolean_T objisempty;                /* '<S36>/SPI Controller Transfer5' */
} DW_SPIControllerTransfer5_fwu_T;

/* Block signals (default storage) */
typedef struct {
  CAN_MESSAGE_BUS CANPack4;            /* '<S2>/CAN Pack4' */
  CANMessage Message;                  /* '<S13>/MATLAB Function7' */
} B_ENV_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  stm32cube_blocks_SPIControlle_T obj; /* '<S36>/SPI Controller Transfer' */
  stm32cube_blocks_SPIControlle_T obj_l;/* '<S34>/SPI Controller Transfer' */
  stm32cube_blocks_SPIControlle_T obj_c;/* '<S32>/SPI Controller Transfer' */
  stm32cube_blocks_SPIControlle_T obj_o;/* '<S30>/SPI Controller Transfer' */
  stm32cube_blocks_SPIControlle_T obj_lb;/* '<S13>/SPI Controller Transfer7' */
  real_T UnitDelay5_DSTATE;            /* '<S10>/Unit Delay5' */
  real_T DelayInput1_DSTATE;           /* '<S33>/Delay Input1' */
  real_T DelayInput1_DSTATE_l;         /* '<S29>/Delay Input1' */
  real_T DelayInput1_DSTATE_d;         /* '<S31>/Delay Input1' */
  real_T DelayInput1_DSTATE_a;         /* '<S35>/Delay Input1' */
  int_T CANPack1_ModeSignalID;         /* '<S2>/CAN Pack1' */
  int_T CANPack2_ModeSignalID;         /* '<S2>/CAN Pack2' */
  int_T CANPack3_ModeSignalID;         /* '<S2>/CAN Pack3' */
  int_T CANPack4_ModeSignalID;         /* '<S2>/CAN Pack4' */
  uint8_T Output_DSTATE;               /* '<S4>/Output' */
  DW_SPIControllerTransfer5_fwu_T SPIControllerTransfer7_pnaev;/* '<S36>/SPI Controller Transfer5' */
  DW_SPIControllerTransfer_fwu4_T SPIControllerTransfer6_pnae;/* '<S36>/SPI Controller Transfer1' */
  DW_SPIControllerTransfer5_fwu_T SPIControllerTransfer5_pnae;/* '<S36>/SPI Controller Transfer5' */
  DW_SPIControllerTransfer_fwu4_T SPIControllerTransfer4_pnae;/* '<S36>/SPI Controller Transfer1' */
  DW_SPIControllerTransfer_fwu4_T SPIControllerTransfer3_pnae;/* '<S36>/SPI Controller Transfer1' */
  DW_SPIControllerTransfer_fwu4_T SPIControllerTransfer2_pnae;/* '<S36>/SPI Controller Transfer1' */
  DW_SPIControllerTransfer_fwu4_T SPIControllerTransfer1_pnae;/* '<S36>/SPI Controller Transfer1' */
  DW_SPIControllerTransfer5_fw_T SPIControllerTransfer7_pnae;/* '<S34>/SPI Controller Transfer5' */
  DW_SPIControllerTransfer1_fwu_T SPIControllerTransfer6_pna;/* '<S34>/SPI Controller Transfer1' */
  DW_SPIControllerTransfer5_fw_T SPIControllerTransfer5_pna;/* '<S34>/SPI Controller Transfer5' */
  DW_SPIControllerTransfer1_fwu_T SPIControllerTransfer4_pna;/* '<S34>/SPI Controller Transfer1' */
  DW_SPIControllerTransfer1_fwu_T SPIControllerTransfer3_pna;/* '<S34>/SPI Controller Transfer1' */
  DW_SPIControllerTransfer1_fwu_T SPIControllerTransfer2_pna;/* '<S34>/SPI Controller Transfer1' */
  DW_SPIControllerTransfer1_fwu_T SPIControllerTransfer1_pna;/* '<S34>/SPI Controller Transfer1' */
  DW_SPIControllerTransfer5_E_f_T SPIControllerTransfer7_pna;/* '<S32>/SPI Controller Transfer5' */
  DW_SPIControllerTransfer1_fw_T SPIControllerTransfer6_pn;/* '<S32>/SPI Controller Transfer1' */
  DW_SPIControllerTransfer5_E_f_T SPIControllerTransfer5_pn;/* '<S32>/SPI Controller Transfer5' */
  DW_SPIControllerTransfer1_fw_T SPIControllerTransfer4_pn;/* '<S32>/SPI Controller Transfer1' */
  DW_SPIControllerTransfer1_fw_T SPIControllerTransfer3_pn;/* '<S32>/SPI Controller Transfer1' */
  DW_SPIControllerTransfer1_fw_T SPIControllerTransfer2_pn;/* '<S32>/SPI Controller Transfer1' */
  DW_SPIControllerTransfer1_fw_T SPIControllerTransfer1_pn;/* '<S32>/SPI Controller Transfer1' */
  DW_SPIControllerTransfer5_ENV_T SPIControllerTransfer7_pn;/* '<S30>/SPI Controller Transfer5' */
  DW_SPIControllerTransfer1_E_f_T SPIControllerTransfer6_p;/* '<S30>/SPI Controller Transfer1' */
  DW_SPIControllerTransfer5_ENV_T SPIControllerTransfer5_p;/* '<S30>/SPI Controller Transfer5' */
  DW_SPIControllerTransfer1_E_f_T SPIControllerTransfer4_p;/* '<S30>/SPI Controller Transfer1' */
  DW_SPIControllerTransfer1_E_f_T SPIControllerTransfer3_p;/* '<S30>/SPI Controller Transfer1' */
  DW_SPIControllerTransfer1_E_f_T SPIControllerTransfer2_p;/* '<S30>/SPI Controller Transfer1' */
  DW_SPIControllerTransfer1_E_f_T SPIControllerTransfer1_p;/* '<S30>/SPI Controller Transfer1' */
  DW_SPIControllerTransfer1_ENV_T SPIControllerTransfer7;/* '<S2>/SPI Controller Transfer1' */
  DW_SPIControllerTransfer_ENV_T SPIControllerTransfer6;/* '<S2>/SPI Controller Transfer' */
  DW_SPIControllerTransfer1_ENV_T SPIControllerTransfer5;/* '<S2>/SPI Controller Transfer1' */
  DW_SPIControllerTransfer_ENV_T SPIControllerTransfer4;/* '<S2>/SPI Controller Transfer' */
  DW_SPIControllerTransfer1_ENV_T SPIControllerTransfer3;/* '<S2>/SPI Controller Transfer1' */
  DW_SPIControllerTransfer_ENV_T SPIControllerTransfer2;/* '<S2>/SPI Controller Transfer' */
  DW_SPIControllerTransfer1_ENV_T SPIControllerTransfer1;/* '<S2>/SPI Controller Transfer1' */
  DW_SPIControllerTransfer_ENV_T SPIControllerTransfer;/* '<S2>/SPI Controller Transfer' */
  DW_MATLABFunction_ENV_T sf_MATLABFunction4;/* '<S2>/MATLAB Function4' */
  DW_MATLABFunction_ENV_T sf_MATLABFunction2;/* '<S2>/MATLAB Function2' */
  DW_MATLABFunction_ENV_T sf_MATLABFunction1;/* '<S2>/MATLAB Function1' */
  DW_MATLABFunction_ENV_T sf_MATLABFunction;/* '<S2>/MATLAB Function' */
} DW_ENV_T;

/* Invariant block signals (default storage) */
typedef struct {
  const CAN_MESSAGE_BUS CANPack1;      /* '<S2>/CAN Pack1' */
  const CAN_MESSAGE_BUS CANPack2;      /* '<S2>/CAN Pack2' */
  const CAN_MESSAGE_BUS CANPack3;      /* '<S2>/CAN Pack3' */
  const real_T Gain;                   /* '<Root>/Gain' */
} ConstB_ENV_T;

/* Constant parameters (default storage) */
typedef struct {
  /* Expression: uint8([0x90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0])
   * Referenced by: '<S13>/Read RX Buffer start at RXB0SIDH7'
   */
  uint8_T ReadRXBufferstartatRXB0SIDH7_Va[15];

  /* Pooled Parameter (Expression: 0xc0)
   * Referenced by:
   *   '<S30>/Enter Configuration Mode'
   *   '<S32>/Enter Configuration Mode'
   *   '<S34>/Enter Configuration Mode'
   *   '<S36>/Enter Configuration Mode'
   */
  uint8_T pooled4;

  /* Pooled Parameter (Expression: [0x02, 0x29, 0x99])
   * Referenced by:
   *   '<S30>/CNF2'
   *   '<S32>/CNF2'
   *   '<S34>/CNF2'
   *   '<S36>/CNF2'
   */
  uint8_T pooled6[3];

  /* Pooled Parameter (Expression: [0x02, 0x28, 0x02])
   * Referenced by:
   *   '<S30>/CNF3'
   *   '<S32>/CNF3'
   *   '<S34>/CNF3'
   *   '<S36>/CNF3'
   */
  uint8_T pooled7[3];

  /* Pooled Parameter (Expression: [0x05, 0x2B, 0xFF, 0x01])
   * Referenced by:
   *   '<S30>/CANINTE'
   *   '<S32>/CANINTE'
   *   '<S34>/CANINTE'
   *   '<S36>/CANINTE'
   */
  uint8_T pooled8[4];

  /* Pooled Parameter (Expression: [0x02, 0x60, 0x60])
   * Referenced by:
   *   '<S30>/Set acceptance filters'
   *   '<S32>/Set acceptance filters'
   *   '<S34>/Set acceptance filters'
   *   '<S36>/Set acceptance filters'
   */
  uint8_T pooled9[3];

  /* Pooled Parameter (Expression: [0x05, 0x2C, 0xFF, 0x00])
   * Referenced by:
   *   '<S30>/Clear flags'
   *   '<S32>/Clear flags'
   *   '<S34>/Clear flags'
   *   '<S36>/Clear flags'
   */
  uint8_T pooled10[4];

  /* Pooled Parameter (Expression: [0x02, 0x0F, 0x00])
   * Referenced by:
   *   '<S30>/ 000: normal mode, 0: don't abort pending transmit buffers, 0: one-shot disabled, 0: CLKOUT disabled, 00: sysclk//1 | 0000 0000 | 0x00'
   *   '<S32>/ 000: normal mode, 0: don't abort pending transmit buffers, 0: one-shot disabled, 0: CLKOUT disabled, 00: sysclk//1 | 0000 0000 | 0x00'
   *   '<S34>/ 000: normal mode, 0: don't abort pending transmit buffers, 0: one-shot disabled, 0: CLKOUT disabled, 00: sysclk//1 | 0000 0000 | 0x00'
   *   '<S36>/ 000: normal mode, 0: don't abort pending transmit buffers, 0: one-shot disabled, 0: CLKOUT disabled, 00: sysclk//1 | 0000 0000 | 0x00'
   */
  uint8_T pooled11[3];
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
 * Block '<S4>/Data Type Propagation' : Unused code path elimination
 * Block '<S21>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S22>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S8>/Cast To Boolean' : Unused code path elimination
 * Block '<S8>/Step2' : Unused code path elimination
 * Block '<S8>/Unit Delay5' : Unused code path elimination
 * Block '<S9>/Cast To Boolean' : Unused code path elimination
 * Block '<S9>/Step2' : Unused code path elimination
 * Block '<S9>/Unit Delay5' : Unused code path elimination
 * Block '<S11>/Cast To Boolean' : Unused code path elimination
 * Block '<S11>/Step2' : Unused code path elimination
 * Block '<S11>/Unit Delay5' : Unused code path elimination
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
 * '<S1>'   : 'ENV/CAN RX'
 * '<S2>'   : 'ENV/CAN Tx'
 * '<S3>'   : 'ENV/Compare To Constant'
 * '<S4>'   : 'ENV/Counter Limited'
 * '<S5>'   : 'ENV/Digital Port Read1'
 * '<S6>'   : 'ENV/Digital Port Write'
 * '<S7>'   : 'ENV/Digital Port Write1'
 * '<S8>'   : 'ENV/Initialize CAN1'
 * '<S9>'   : 'ENV/Initialize CAN2'
 * '<S10>'  : 'ENV/Initialize CAN3'
 * '<S11>'  : 'ENV/Initialize CAN4'
 * '<S12>'  : 'ENV/CAN RX/Digital Port Read5'
 * '<S13>'  : 'ENV/CAN RX/Enabled Subsystem'
 * '<S14>'  : 'ENV/CAN RX/Digital Port Read5/ECSoC'
 * '<S15>'  : 'ENV/CAN RX/Digital Port Read5/ECSoC/ECSimCodegen'
 * '<S16>'  : 'ENV/CAN RX/Enabled Subsystem/MATLAB Function7'
 * '<S17>'  : 'ENV/CAN Tx/MATLAB Function'
 * '<S18>'  : 'ENV/CAN Tx/MATLAB Function1'
 * '<S19>'  : 'ENV/CAN Tx/MATLAB Function2'
 * '<S20>'  : 'ENV/CAN Tx/MATLAB Function4'
 * '<S21>'  : 'ENV/Counter Limited/Increment Real World'
 * '<S22>'  : 'ENV/Counter Limited/Wrap To Zero'
 * '<S23>'  : 'ENV/Digital Port Read1/ECSoC'
 * '<S24>'  : 'ENV/Digital Port Read1/ECSoC/ECSimCodegen'
 * '<S25>'  : 'ENV/Digital Port Write/ECSoC'
 * '<S26>'  : 'ENV/Digital Port Write/ECSoC/ECSimCodegen'
 * '<S27>'  : 'ENV/Digital Port Write1/ECSoC'
 * '<S28>'  : 'ENV/Digital Port Write1/ECSoC/ECSimCodegen'
 * '<S29>'  : 'ENV/Initialize CAN1/Detect Increase'
 * '<S30>'  : 'ENV/Initialize CAN1/MCPInit'
 * '<S31>'  : 'ENV/Initialize CAN2/Detect Increase'
 * '<S32>'  : 'ENV/Initialize CAN2/MCPInit'
 * '<S33>'  : 'ENV/Initialize CAN3/Detect Increase'
 * '<S34>'  : 'ENV/Initialize CAN3/MCPInit'
 * '<S35>'  : 'ENV/Initialize CAN4/Detect Increase'
 * '<S36>'  : 'ENV/Initialize CAN4/MCPInit'
 */
#endif                                 /* ENV_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
