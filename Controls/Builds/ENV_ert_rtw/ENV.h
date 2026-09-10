/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: ENV.h
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
#include "can_message.h"
#include "MW_target_hardware_resources.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<S25>/SPI Controller Transfer1' */
typedef struct {
  stm32cube_blocks_SPIControlle_T obj; /* '<S25>/SPI Controller Transfer1' */
  boolean_T objisempty;                /* '<S25>/SPI Controller Transfer1' */
} DW_SPIControllerTransfer1_ENV_T;

/* Block states (default storage) for system '<S25>/SPI Controller Transfer5' */
typedef struct {
  stm32cube_blocks_SPIControlle_T obj; /* '<S25>/SPI Controller Transfer5' */
  boolean_T objisempty;                /* '<S25>/SPI Controller Transfer5' */
} DW_SPIControllerTransfer5_ENV_T;

/* Block signals (default storage) */
typedef struct {
  CAN_MESSAGE_def Message;             /* '<S1>/MATLAB Function' */
  CAN_MESSAGE_BUS CANPack4;            /* '<S2>/CAN Pack4' */
  real_T DataTypeConversion;           /* '<Root>/Data Type Conversion' */
  real_T CANUnpack_o1;                 /* '<S1>/CAN Unpack' */
  real_T CANUnpack_o2;                 /* '<S1>/CAN Unpack' */
  real_T CANUnpack_o3;                 /* '<S1>/CAN Unpack' */
  real_T CANUnpack_o4;                 /* '<S1>/CAN Unpack' */
  real_T Length;
  uint16_T Output;                     /* '<S6>/Output' */
  boolean_T DataTypeConversion_d;      /* '<S1>/Data Type Conversion' */
} B_ENV_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  stm32cube_blocks_SPIControlle_T obj; /* '<S25>/SPI Controller Transfer' */
  stm32cube_blocks_SPIControlle_T obj_n;/* '<S2>/SPI Controller Transfer7' */
  stm32cube_blocks_SPIControlle_T obj_h;/* '<S2>/SPI Controller Transfer6' */
  stm32cube_blocks_SPIControlle_T obj_p;/* '<S1>/SPI Controller Transfer' */
  real_T UnitDelay_DSTATE;             /* '<S10>/Unit Delay' */
  real_T DelayInput1_DSTATE;           /* '<S23>/Delay Input1' */
  int_T CANPack4_ModeSignalID;         /* '<S2>/CAN Pack4' */
  int_T CANUnpack_ModeSignalID;        /* '<S1>/CAN Unpack' */
  int_T CANUnpack_StatusPortID;        /* '<S1>/CAN Unpack' */
  uint16_T Output_DSTATE;              /* '<S6>/Output' */
  uint16_T count;                      /* '<S2>/MATLAB Function4' */
  DW_SPIControllerTransfer5_ENV_T SPIControllerTransfer7_p;/* '<S25>/SPI Controller Transfer5' */
  DW_SPIControllerTransfer1_ENV_T SPIControllerTransfer6_p;/* '<S25>/SPI Controller Transfer1' */
  DW_SPIControllerTransfer5_ENV_T SPIControllerTransfer5;/* '<S25>/SPI Controller Transfer5' */
  DW_SPIControllerTransfer1_ENV_T SPIControllerTransfer4;/* '<S25>/SPI Controller Transfer1' */
  DW_SPIControllerTransfer1_ENV_T SPIControllerTransfer3;/* '<S25>/SPI Controller Transfer1' */
  DW_SPIControllerTransfer1_ENV_T SPIControllerTransfer2;/* '<S25>/SPI Controller Transfer1' */
  DW_SPIControllerTransfer1_ENV_T SPIControllerTransfer1;/* '<S25>/SPI Controller Transfer1' */
} DW_ENV_T;

/* Constant parameters (default storage) */
typedef struct {
  /* Expression: uint8([0x90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0])
   * Referenced by: '<S1>/Read RX Buffer start at RXB0SIDH'
   */
  uint8_T ReadRXBufferstartatRXB0SIDH_Val[15];

  /* Expression: 0xc0
   * Referenced by: '<S25>/Enter Configuration Mode'
   */
  uint8_T EnterConfigurationMode_Value;

  /* Expression: [0x02, 0x2A, 0xC0]
   * Referenced by: '<S25>/CNF1'
   */
  uint8_T CNF1_Value[3];

  /* Expression: [0x02, 0x29, 0x99]
   * Referenced by: '<S25>/CNF2'
   */
  uint8_T CNF2_Value[3];

  /* Expression: [0x02, 0x28, 0x02]
   * Referenced by: '<S25>/CNF3'
   */
  uint8_T CNF3_Value[3];

  /* Expression: [0x05, 0x2B, 0xFF, 0x01]
   * Referenced by: '<S25>/CANINTE'
   */
  uint8_T CANINTE_Value[4];

  /* Expression: [0x02, 0x60, 0x60]
   * Referenced by: '<S25>/Set acceptance filters'
   */
  uint8_T Setacceptancefilters_Value[3];

  /* Expression: [0x05, 0x2C, 0xFF, 0x00]
   * Referenced by: '<S25>/Clear flags'
   */
  uint8_T Clearflags_Value[4];

  /* Expression: [0x02, 0x0F, 0x00]
   * Referenced by: '<S25>/ 000: normal mode, 0: don't abort pending transmit buffers, 0: one-shot disabled, 0: CLKOUT disabled, 00: sysclk//1 | 0000 0000 | 0x00'
   */
  uint8_T u00normalmode0dontabortpendingt[3];
} ConstP_ENV_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T nMotorRL;                     /* '<Root>/nMotorRL' */
  real_T BInvDCOnRLIn;                 /* '<Root>/BInvDCOnRLIn' */
  real_T BInvErrorRL;                  /* '<Root>/BInvErrorRL' */
  real_T BInvOnRLIn;                   /* '<Root>/BInvOnRLIn' */
  real_T BInvQuitDcOnRL;               /* '<Root>/BInvQuitDcOnRL' */
  real_T BQuitInvOnRL;                 /* '<Root>/BQuitInvOnRL' */
  real_T BInvSysReadyRL;               /* '<Root>/BInvSysReadyRL' */
  real_T BInvWarnRL;                   /* '<Root>/BInvWarnRL' */
  real_T MMotorMeasuredRL;             /* '<Root>/MMotorMeasuredRL' */
  real_T NInvDTCRL;                    /* '<Root>/NInvDTCRL' */
  real_T TMotorRL;                     /* '<Root>/TMotorRL' */
  real_T VDCInvRL;                     /* '<Root>/VDCInvRL' */
  real_T TInvRL;                       /* '<Root>/TInvRL' */
  real_T nMotorRR;                     /* '<Root>/nMotorRR' */
  real_T BInvDCOnRRIn;                 /* '<Root>/BInvDCOnRRIn' */
  real_T BInvErrorRR;                  /* '<Root>/BInvErrorRR' */
  real_T BInvOnRRIn;                   /* '<Root>/BInvOnRRIn' */
  real_T BInvQuitDcOnRR;               /* '<Root>/BInvQuitDcOnRR' */
  real_T BQuitInvOnRR;                 /* '<Root>/BQuitInvOnRR' */
  real_T BInvSysReadyRR;               /* '<Root>/BInvSysReadyRR' */
  real_T BInvWarnRR;                   /* '<Root>/BInvWarnRR' */
  real_T MMotorMeasuredRR;             /* '<Root>/MMotorMeasuredRR' */
  real_T NInvDTCRR;                    /* '<Root>/NInvDTCRR' */
  real_T TMotorRR;                     /* '<Root>/TMotorRR' */
  real_T VDCInvRR;                     /* '<Root>/VDCInvRR' */
  real_T TInvRR;                       /* '<Root>/TInvRR' */
  real_T nMotorFL;                     /* '<Root>/nMotorFL' */
  real_T BInvDCOnFLIn;                 /* '<Root>/BInvDCOnFLIn' */
  real_T BInvErrorFL;                  /* '<Root>/BInvErrorFL' */
  real_T BInvOnFLIn;                   /* '<Root>/BInvOnFLIn' */
  real_T BInvQuitDcOnFL;               /* '<Root>/BInvQuitDcOnFL' */
  real_T BQuitInvOnFL;                 /* '<Root>/BQuitInvOnFL' */
  real_T BInvSysReadyFL;               /* '<Root>/BInvSysReadyFL' */
  real_T BInvWarnFL;                   /* '<Root>/BInvWarnFL' */
  real_T MMotorMeasuredFL;             /* '<Root>/MMotorMeasuredFL' */
  real_T NInvDTCFL;                    /* '<Root>/NInvDTCFL' */
  real_T TMotorFL;                     /* '<Root>/TMotorFL' */
  real_T VDCInvFL;                     /* '<Root>/VDCInvFL' */
  real_T TInvFL;                       /* '<Root>/TInvFL' */
  real_T nMotorFR;                     /* '<Root>/nMotorFR' */
  real_T BInvDCOnFRIn;                 /* '<Root>/BInvDCOnFRIn' */
  real_T BInvErrorFR;                  /* '<Root>/BInvErrorFR' */
  real_T BInvOnFRIn;                   /* '<Root>/BInvOnFRIn' */
  real_T BInvQuitDcOnFR;               /* '<Root>/BInvQuitDcOnFR' */
  real_T BQuitInvOnFR;                 /* '<Root>/BQuitInvOnFR' */
  real_T BInvSysReadyFR;               /* '<Root>/BInvSysReadyFR' */
  real_T BInvWarnFR;                   /* '<Root>/BInvWarnFR' */
  real_T MMotorMeasuredFR;             /* '<Root>/MMotorMeasuredFR' */
  real_T NInvDTCFR;                    /* '<Root>/NInvDTCFR' */
  real_T TMotorFR;                     /* '<Root>/TMotorFR' */
  real_T VDCInvFR;                     /* '<Root>/VDCInvFR' */
  real_T TInvFR;                       /* '<Root>/TInvFR' */
  real_T IIVTS;                        /* '<Root>/IIVTS' */
  real_T IBMSHallEffect;               /* '<Root>/IBMSHallEffect' */
  real_T VDCAccumulator;               /* '<Root>/VDCAccumulator' */
  real_T TCellMin;                     /* '<Root>/TCellMin' */
  real_T VCellAverage;                 /* '<Root>/VCellAverage' */
  real_T VCellMax;                     /* '<Root>/VCellMax' */
  real_T TCellMax;                     /* '<Root>/TCellMax' */
  real_T IBMSDCL;                      /* '<Root>/IBMSDCL' */
  real_T VCellMin;                     /* '<Root>/VCellMin' */
  real_T RCellAverage;                 /* '<Root>/RCellAverage' */
  real_T BBalancingOn;                 /* '<Root>/BBalancingOn' */
  boolean_T BBMSP0A0C;                 /* '<Root>/BBMSP0A0C' */
  real_T BBMSP0A0E;                    /* '<Root>/BBMSP0A0E' */
  real_T BBMSP0A10;                    /* '<Root>/BBMSP0A10' */
  real_T BBMSP0A80;                    /* '<Root>/BBMSP0A80' */
  real_T BBMSP0AC0;                    /* '<Root>/BBMSP0AC0' */
  real_T BBMSP0AFA;                    /* '<Root>/BBMSP0AFA' */
} ExtU_ENV_T;

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
  real_T BInvDCOnRLOut;                /* '<Root>/BInvDCOnRLOut' */
  real_T BInvEnableRL;                 /* '<Root>/BInvEnableRL' */
  real_T BInvErrorResetRL;             /* '<Root>/BInvErrorResetRL' */
  real_T BInvOnRLOut;                  /* '<Root>/BInvOnRLOut' */
  real_T MTorqueLimitNegativeRL;       /* '<Root>/MTorqueLimitNegativeRL' */
  real_T MTorqueLimitPositiveRL;       /* '<Root>/MTorqueLimitPositiveRL' */
  real_T MInvRLFinal;                  /* '<Root>/MInvRLFinal' */
  real_T BInvDCOnFLOut;                /* '<Root>/BInvDCOnFLOut' */
  real_T BInvEnableFL;                 /* '<Root>/BInvEnableFL' */
  real_T BInvErrorResetFL;             /* '<Root>/BInvErrorResetFL' */
  real_T BInvOnFLOut;                  /* '<Root>/BInvOnFLOut' */
  real_T MTorqueLimitNegativeFL;       /* '<Root>/MTorqueLimitNegativeFL' */
  real_T MTorqueLimitPositiveFL;       /* '<Root>/MTorqueLimitPositiveFL' */
  real_T MInvFLFinal;                  /* '<Root>/MInvFLFinal' */
  real_T BInvDCOnRROut;                /* '<Root>/BInvDCOnRROut' */
  real_T BInvEnableRR;                 /* '<Root>/BInvEnableRR' */
  real_T BInvErrorResetRR;             /* '<Root>/BInvErrorResetRR' */
  real_T BInvOnRROut;                  /* '<Root>/BInvOnRROut' */
  real_T MTorqueLimitNegativeRR;       /* '<Root>/MTorqueLimitNegativeRR' */
  real_T MTorqueLimitPositiveRR;       /* '<Root>/MTorqueLimitPositiveRR' */
  real_T MInvRRFinal;                  /* '<Root>/MInvRRFinal' */
  real_T BInvDCOnFROut;                /* '<Root>/BInvDCOnFROut' */
  real_T BInvEnableFR;                 /* '<Root>/BInvEnableFR' */
  real_T BInvErrorResetFR;             /* '<Root>/BInvErrorResetFR' */
  real_T BInvOnFROut;                  /* '<Root>/BInvOnFROut' */
  real_T MTorqueLimitNegativeFR;       /* '<Root>/MTorqueLimitNegativeFR' */
  real_T MTorqueLimitPositiveFR;       /* '<Root>/MTorqueLimitPositiveFR' */
  real_T MInvFRFinal;                  /* '<Root>/MInvFRFinal' */
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

extern CAN_DATATYPE CAN_DATATYPE_GROUND;

/* Block signals (default storage) */
extern B_ENV_T ENV_B;

/* Block states (default storage) */
extern DW_ENV_T ENV_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_ENV_T ENV_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_ENV_T ENV_Y;

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
 * Block '<S1>/Data Type Conversion1' : Unused code path elimination
 * Block '<S1>/Data Type Conversion2' : Unused code path elimination
 * Block '<S1>/Data Type Conversion3' : Unused code path elimination
 * Block '<S3>/Compare' : Unused code path elimination
 * Block '<S3>/Constant' : Unused code path elimination
 * Block '<Root>/Constant3' : Unused code path elimination
 * Block '<S5>/Data Type Propagation' : Unused code path elimination
 * Block '<S13>/FixPt Constant' : Unused code path elimination
 * Block '<S13>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S13>/FixPt Sum1' : Unused code path elimination
 * Block '<S5>/Output' : Unused code path elimination
 * Block '<S14>/Constant' : Unused code path elimination
 * Block '<S14>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S14>/FixPt Switch' : Unused code path elimination
 * Block '<S6>/Data Type Propagation' : Unused code path elimination
 * Block '<S15>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S16>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<Root>/NOT' : Unused code path elimination
 * Block '<Root>/NOT4' : Unused code path elimination
 * Block '<S24>/Constant' : Unused code path elimination
 * Block '<Root>/Unit Delay' : Unused code path elimination
 * Block '<Root>/Data Type Conversion1' : Eliminate redundant data type conversion
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
 * '<S1>'   : 'ENV/CAN Rx1'
 * '<S2>'   : 'ENV/CAN Tx20'
 * '<S3>'   : 'ENV/Compare To Constant'
 * '<S4>'   : 'ENV/Compare To Constant1'
 * '<S5>'   : 'ENV/Counter Limited'
 * '<S6>'   : 'ENV/Counter Limited1'
 * '<S7>'   : 'ENV/Digital Port Read3'
 * '<S8>'   : 'ENV/Digital Port Write2'
 * '<S9>'   : 'ENV/Digital Port Write3'
 * '<S10>'  : 'ENV/Subsystem'
 * '<S11>'  : 'ENV/CAN Rx1/MATLAB Function'
 * '<S12>'  : 'ENV/CAN Tx20/MATLAB Function4'
 * '<S13>'  : 'ENV/Counter Limited/Increment Real World'
 * '<S14>'  : 'ENV/Counter Limited/Wrap To Zero'
 * '<S15>'  : 'ENV/Counter Limited1/Increment Real World'
 * '<S16>'  : 'ENV/Counter Limited1/Wrap To Zero'
 * '<S17>'  : 'ENV/Digital Port Read3/ECSoC'
 * '<S18>'  : 'ENV/Digital Port Read3/ECSoC/ECSimCodegen'
 * '<S19>'  : 'ENV/Digital Port Write2/ECSoC'
 * '<S20>'  : 'ENV/Digital Port Write2/ECSoC/ECSimCodegen'
 * '<S21>'  : 'ENV/Digital Port Write3/ECSoC'
 * '<S22>'  : 'ENV/Digital Port Write3/ECSoC/ECSimCodegen'
 * '<S23>'  : 'ENV/Subsystem/Detect Increase'
 * '<S24>'  : 'ENV/Subsystem/Initialize'
 * '<S25>'  : 'ENV/Subsystem/MCPInit1'
 */
#endif                                 /* ENV_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
