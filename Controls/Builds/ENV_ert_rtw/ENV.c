/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: ENV.c
 *
 * Code generated for Simulink model 'ENV'.
 *
 * Model version                  : 1.12
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Tue Sep  8 13:43:28 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ENV.h"
#include "rtwtypes.h"
#include "ENV_private.h"
#include "mw_stm32_spi_ll.h"
#include "MASTER.h"

/* Block signals (default storage) */
B_ENV_T ENV_B;

/* Block states (default storage) */
DW_ENV_T ENV_DW;

/* External inputs (root inport signals with default storage) */
ExtU_ENV_T ENV_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_ENV_T ENV_Y;

/* Real-time model */
static RT_MODEL_ENV_T ENV_M_;
RT_MODEL_ENV_T *const ENV_M = &ENV_M_;

/*
 * Output and update for atomic system:
 *    '<S2>/MATLAB Function'
 *    '<S2>/MATLAB Function4'
 */
void ENV_MATLABFunction(uint32_T rtu_ID, uint8_T rtu_Length, const uint8_T
  rtu_Data[8], uint8_T rtu_RTS, uint16_T rtu_period, uint16_T rtu_offset, real_T
  rtu_MCPInitialized, uint8_T *rty_WriteInstruction, uint8_T rty_CANVector[13],
  uint8_T *rty_RTSByte, DW_MATLABFunction_ENV_T *localDW)
{
  int32_T i;
  if (rtu_MCPInitialized != 0.0) {
    uint32_T tmp;
    if (localDW->count == rtu_offset) {
      tmp = rtu_ID;
      if (rtu_ID > 65535U) {
        tmp = 65535U;
      }

      for (i = 0; i < 13; i++) {
        rty_CANVector[i] = 0U;
      }

      i = (uint16_T)tmp >> 3;
      if (i > 255) {
        i = 255;
      }

      rty_CANVector[0] = (uint8_T)i;
      rty_CANVector[1] = (uint8_T)((int32_T)((uint16_T)tmp & 7U) << 5);
      rty_CANVector[2] = 0U;
      rty_CANVector[3] = 0U;
      rty_CANVector[4] = (uint8_T)(rtu_Length & 15);
      for (i = 0; i < 8; i++) {
        rty_CANVector[i + 5] = rtu_Data[i];
      }

      *rty_RTSByte = rtu_RTS;
      *rty_WriteInstruction = 2U;
    } else {
      for (i = 0; i < 13; i++) {
        rty_CANVector[i] = 0U;
      }

      *rty_RTSByte = rtu_RTS;
      *rty_WriteInstruction = 3U;
    }

    tmp = localDW->count + 1U;
    if (localDW->count + 1U > 65535U) {
      tmp = 65535U;
    }

    localDW->count = (uint16_T)tmp;
    if (localDW->count >= rtu_period) {
      localDW->count = 0U;
    }
  } else {
    for (i = 0; i < 13; i++) {
      rty_CANVector[i] = 0U;
    }

    *rty_RTSByte = 3U;
    *rty_WriteInstruction = 3U;
  }
}

/* System initialize for atomic system: */
void ENV_SPIControllerTransfer_Init(DW_SPIControllerTransfer_ENV_T *localDW)
{
  STM32_SPI_ModuleStruct_T b;

  /* Start for MATLABSystem: '<S2>/SPI Controller Transfer' */
  localDW->obj.matlabCodegenIsDeleted = false;
  localDW->objisempty = true;
  localDW->obj.isInitialized = 1;
  b.PeripheralPtr = SPI1;
  localDW->obj.MW_SPI_HANDLE = SPI_STM32_Init(&b);
  MW_STM32_SPI_SetFormat(localDW->obj.MW_SPI_HANDLE, 0U, 1792U, MW_SPI_MODE_2);
  localDW->obj.isSetupComplete = true;
}

/* Output and update for atomic system: */
void ENV_SPIControllerTransfer(const uint8_T rtu_0[15],
  DW_SPIControllerTransfer_ENV_T *localDW)
{
  uint8_T tmp[15];
  uint8_T status;

  /* MATLABSystem: '<S2>/SPI Controller Transfer' */
  status = MW_STM32_SPI_SetFormat(localDW->obj.MW_SPI_HANDLE, 0U, 1792U,
    MW_SPI_MODE_2);
  if (status == 0) {
    GPIO_TypeDef * portNameLoc;
    portNameLoc = GPIOA;
    LL_GPIO_ResetOutputPin(portNameLoc, 2U);
    MW_SPI_MasterWriteRead_Databits(localDW->obj.MW_SPI_HANDLE, &rtu_0[0], &tmp
      [0], 0, 15U, 0, 1U);
    LL_GPIO_SetOutputPin(portNameLoc, 2U);
  }

  /* End of MATLABSystem: '<S2>/SPI Controller Transfer' */
}

/* Termination for atomic system: */
void ENV_SPIControllerTransfer_Term(DW_SPIControllerTransfer_ENV_T *localDW)
{
  /* Terminate for MATLABSystem: '<S2>/SPI Controller Transfer' */
  if (!localDW->obj.matlabCodegenIsDeleted) {
    localDW->obj.matlabCodegenIsDeleted = true;
    if ((localDW->obj.isInitialized == 1) && localDW->obj.isSetupComplete) {
      uint32_T SPIPinsLoc;
      SPIPinsLoc = MW_UNDEFINED_VALUE;
      MW_SPI_Close(localDW->obj.MW_SPI_HANDLE, SPIPinsLoc, SPIPinsLoc,
                   SPIPinsLoc, 1U);
    }
  }

  /* End of Terminate for MATLABSystem: '<S2>/SPI Controller Transfer' */
}

/* System initialize for atomic system: */
void ENV_SPIControllerTransfer1_Init(DW_SPIControllerTransfer1_ENV_T *localDW)
{
  STM32_SPI_ModuleStruct_T b;

  /* Start for MATLABSystem: '<S22>/SPI Controller Transfer1' */
  localDW->obj.matlabCodegenIsDeleted = false;
  localDW->objisempty = true;
  localDW->obj.isInitialized = 1;
  b.PeripheralPtr = SPI1;
  localDW->obj.MW_SPI_HANDLE = SPI_STM32_Init(&b);
  MW_STM32_SPI_SetFormat(localDW->obj.MW_SPI_HANDLE, 0U, 1792U, MW_SPI_MODE_2);
  localDW->obj.isSetupComplete = true;
}

/* Output and update for atomic system: */
void ENV_SPIControllerTransfer1(const uint8_T rtu_0[3],
  DW_SPIControllerTransfer1_ENV_T *localDW)
{
  uint8_T tmp[3];
  uint8_T status;

  /* MATLABSystem: '<S22>/SPI Controller Transfer1' */
  status = MW_STM32_SPI_SetFormat(localDW->obj.MW_SPI_HANDLE, 0U, 1792U,
    MW_SPI_MODE_2);
  if (status == 0) {
    GPIO_TypeDef * portNameLoc;
    portNameLoc = GPIOA;
    LL_GPIO_ResetOutputPin(portNameLoc, 2U);
    MW_SPI_MasterWriteRead_Databits(localDW->obj.MW_SPI_HANDLE, &rtu_0[0], &tmp
      [0], 0, 3U, 1, 10U);
    LL_GPIO_SetOutputPin(portNameLoc, 2U);
  }

  /* End of MATLABSystem: '<S22>/SPI Controller Transfer1' */
}

/* Termination for atomic system: */
void ENV_SPIControllerTransfer1_Term(DW_SPIControllerTransfer1_ENV_T *localDW)
{
  /* Terminate for MATLABSystem: '<S22>/SPI Controller Transfer1' */
  if (!localDW->obj.matlabCodegenIsDeleted) {
    localDW->obj.matlabCodegenIsDeleted = true;
    if ((localDW->obj.isInitialized == 1) && localDW->obj.isSetupComplete) {
      uint32_T SPIPinsLoc;
      SPIPinsLoc = MW_UNDEFINED_VALUE;
      MW_SPI_Close(localDW->obj.MW_SPI_HANDLE, SPIPinsLoc, SPIPinsLoc,
                   SPIPinsLoc, 1U);
    }
  }

  /* End of Terminate for MATLABSystem: '<S22>/SPI Controller Transfer1' */
}

/* System initialize for atomic system: */
void ENV_SPIControllerTransfer5_Init(DW_SPIControllerTransfer5_ENV_T *localDW)
{
  STM32_SPI_ModuleStruct_T b;

  /* Start for MATLABSystem: '<S22>/SPI Controller Transfer5' */
  localDW->obj.matlabCodegenIsDeleted = false;
  localDW->objisempty = true;
  localDW->obj.isInitialized = 1;
  b.PeripheralPtr = SPI1;
  localDW->obj.MW_SPI_HANDLE = SPI_STM32_Init(&b);
  MW_STM32_SPI_SetFormat(localDW->obj.MW_SPI_HANDLE, 0U, 1792U, MW_SPI_MODE_2);
  localDW->obj.isSetupComplete = true;
}

/* Output and update for atomic system: */
void ENV_SPIControllerTransfer5(const uint8_T rtu_0[4],
  DW_SPIControllerTransfer5_ENV_T *localDW)
{
  uint8_T tmp[4];
  uint8_T status;

  /* MATLABSystem: '<S22>/SPI Controller Transfer5' */
  status = MW_STM32_SPI_SetFormat(localDW->obj.MW_SPI_HANDLE, 0U, 1792U,
    MW_SPI_MODE_2);
  if (status == 0) {
    GPIO_TypeDef * portNameLoc;
    portNameLoc = GPIOA;
    LL_GPIO_ResetOutputPin(portNameLoc, 2U);
    MW_SPI_MasterWriteRead_Databits(localDW->obj.MW_SPI_HANDLE, &rtu_0[0], &tmp
      [0], 0, 4U, 1, 10U);
    LL_GPIO_SetOutputPin(portNameLoc, 2U);
  }

  /* End of MATLABSystem: '<S22>/SPI Controller Transfer5' */
}

/* Termination for atomic system: */
void ENV_SPIControllerTransfer5_Term(DW_SPIControllerTransfer5_ENV_T *localDW)
{
  /* Terminate for MATLABSystem: '<S22>/SPI Controller Transfer5' */
  if (!localDW->obj.matlabCodegenIsDeleted) {
    localDW->obj.matlabCodegenIsDeleted = true;
    if ((localDW->obj.isInitialized == 1) && localDW->obj.isSetupComplete) {
      uint32_T SPIPinsLoc;
      SPIPinsLoc = MW_UNDEFINED_VALUE;
      MW_SPI_Close(localDW->obj.MW_SPI_HANDLE, SPIPinsLoc, SPIPinsLoc,
                   SPIPinsLoc, 1U);
    }
  }

  /* End of Terminate for MATLABSystem: '<S22>/SPI Controller Transfer5' */
}

/* Model step function */
void ENV_step(void)
{
  /* local block i/o variables */
  real_T rtb_MMotorMeasuredRL;
  real_T rtb_MMotorMeasuredFL;
  real_T rtb_VDCInvFL;
  real_T rtb_MMotorMeasuredRR;
  real_T rtb_VDCInvRR;
  real_T rtb_MMotorMeasuredFR;
  real_T rtb_VDCInvFR;
  real_T rtb_VDamperPotentiometerFL;
  real_T rtb_VDamperPotentiometerFR;
  real_T rtb_NDisplayNumberDDU7;
  real_T rtb_VSteeringAngle;
  real_T rtb_VThrottlePedal1;
  real_T rtb_VThrottlePedal2;
  real_T rtb_NPageSelectRotary;
  real_T rtb_NParameterRotary;
  real_T rtb_NEventModeRotary;
  real_T rtb_VRegenPaddle1;
  real_T rtb_VRegenPaddle2;
  real_T rtb_VBrakeF;
  real_T rtb_VBrakeR;
  real_T rtb_vLateralIMU;
  real_T rtb_gVerticalIMU;
  real_T rtb_vLongitudinalIMU;
  real_T rtb_gLateralIMU;
  real_T rtb_gLongitudinalIMU;
  real_T rtb_nYawRateIMU;
  real_T rtb_VCellDelta;
  real_T rtb_VCellAverage;
  real_T rtb_IBMSDLC;
  real_T rtb_RCellAverage;
  real_T rtb_rSteeringAngle;
  real_T rtb_MMotorMaxFL;
  real_T rtb_MMotorMaxFR;
  real_T rtb_MMotorMaxRL;
  real_T rtb_MMotorMaxRR;
  real_T rtb_FLateralLoadTransferF;
  real_T rtb_FLateralLoadTransferR;
  real_T rtb_FDownforceF;
  real_T rtb_FDownforceR;
  boolean_T rtb_BInvDCOnRLIn;
  boolean_T rtb_BInvErrorRL;
  boolean_T rtb_BInvOnRLIn;
  boolean_T rtb_BInvQuitDcOnRL;
  boolean_T rtb_BInvSysReadyRL;
  boolean_T rtb_BInvWarnRL;
  boolean_T rtb_BInvDCOnFLIn;
  boolean_T rtb_BInvErrorFL;
  boolean_T rtb_BInvOnFLIn;
  boolean_T rtb_BInvQuitDcOnFL;
  boolean_T rtb_BInvSysReadyFL;
  boolean_T rtb_BInvWarnFL;
  boolean_T rtb_BInvDCOnRRIn;
  boolean_T rtb_BInvErrorRR;
  boolean_T rtb_BInvOnRRIn;
  boolean_T rtb_BInvQuitDcOnRR;
  boolean_T rtb_BInvSysReadyRR;
  boolean_T rtb_BInvWarnRR;
  boolean_T rtb_BInvDCOnFRIn;
  boolean_T rtb_BInvErrorFR;
  boolean_T rtb_BInvOnFRIn;
  boolean_T rtb_BInvQuitDcOnFR;
  boolean_T rtb_BInvSysReadyFR;
  boolean_T rtb_BInvWarnFR;
  boolean_T rtb_BSteeringWheelButton1;
  boolean_T rtb_BSteeringWheelButton2;
  boolean_T rtb_BSteeringWheelButton3;
  boolean_T rtb_BSteeringWheelButton4;
  GPIO_TypeDef * portNameLoc;
  int32_T i;
  uint32_T pinReadLoc;
  uint8_T rtb_VectorConcatenate[15];
  uint8_T rtb_VectorConcatenate3[15];
  uint8_T rtb_SPIControllerTransfer5_0[14];
  uint8_T status;
  boolean_T rtb_NOT4;

  /* MATLABSystem: '<S15>/Digital Port Read' */
  pinReadLoc = LL_GPIO_ReadInputPort(GPIOA);

  /* Logic: '<Root>/NOT4' incorporates:
   *  MATLABSystem: '<S15>/Digital Port Read'
   * */
  rtb_NOT4 = ((pinReadLoc & 4U) == 0U);

  /* Outputs for Enabled SubSystem: '<Root>/CAN Rx' incorporates:
   *  EnablePort: '<S1>/Enable'
   */
  if (rtb_NOT4) {
    /* MATLABSystem: '<S1>/SPI Controller Transfer5' incorporates:
     *  Constant: '<S1>/Read RX Buffer start at RXB0SIDH6'
     */
    status = MW_STM32_SPI_SetFormat(ENV_DW.obj_pl.MW_SPI_HANDLE, 0U, 1792U,
      MW_SPI_MODE_2);
    if (status == 0) {
      portNameLoc = GPIOA;
      LL_GPIO_ResetOutputPin(portNameLoc, 2U);
      MW_SPI_MasterWriteRead_Databits(ENV_DW.obj_pl.MW_SPI_HANDLE,
        &rtCP_ReadRXBufferstartatRXB0SID[0], &rtb_SPIControllerTransfer5_0[0], 0,
        14U, 1, 10U);
      LL_GPIO_SetOutputPin(portNameLoc, 2U);
    }

    /* MATLAB Function: '<S1>/MATLAB Function7' incorporates:
     *  MATLABSystem: '<S1>/SPI Controller Transfer5'
     */
    ENV_B.Message.ID = (uint32_T)rtb_SPIControllerTransfer5_0[1] << 3 |
      (uint32_T)rtb_SPIControllerTransfer5_0[2] >> 5;
    ENV_B.Message.Extended = false;
    ENV_B.Message.Remote = false;
    ENV_B.Message.Error = false;
    ENV_B.Message.Length = rtb_SPIControllerTransfer5_0[5] & 15U;
    for (i = 0; i < 8; i++) {
      ENV_B.Message.Data[i] = rtb_SPIControllerTransfer5_0[i + 6];
    }

    /* End of MATLAB Function: '<S1>/MATLAB Function7' */

    /* S-Function (scanunpack): '<S1>/CAN Unpack5' */
    {
      /* S-Function (scanunpack): '<S1>/CAN Unpack5' */
      if ((6 == ENV_B.Message.Length) && (ENV_B.Message.ID != INVALID_CAN_ID) )
      {
        if ((507 == ENV_B.Message.ID) && (0U == ENV_B.Message.Extended) ) {
          {
            /* --------------- START Unpacking signal 0 ------------------
             *  startBit                = 0
             *  length                  = 1
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              uint8_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)
                      (ENV_B.Message.Data[0]) & (uint8_T)(0x1U));
                  }

                  unpackedValue = tempValue;
                }

                outValue = (boolean_T) (unpackedValue);
              }

              {
                boolean_T result = (boolean_T) outValue;
                ENV_B.CANUnpack5_o1 = result;
              }
            }

            /* --------------- START Unpacking signal 1 ------------------
             *  startBit                = 1
             *  length                  = 1
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              uint8_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (ENV_B.Message.Data[0]) & (uint8_T)(0x2U)) >> 1);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (boolean_T) (unpackedValue);
              }

              {
                boolean_T result = (boolean_T) outValue;
                ENV_B.CANUnpack5_o2 = result;
              }
            }

            /* --------------- START Unpacking signal 2 ------------------
             *  startBit                = 2
             *  length                  = 1
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              uint8_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (ENV_B.Message.Data[0]) & (uint8_T)(0x4U)) >> 2);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (boolean_T) (unpackedValue);
              }

              {
                boolean_T result = (boolean_T) outValue;
                ENV_B.CANUnpack5_o3 = result;
              }
            }

            /* --------------- START Unpacking signal 3 ------------------
             *  startBit                = 3
             *  length                  = 1
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              uint8_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (ENV_B.Message.Data[0]) & (uint8_T)(0x8U)) >> 3);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (boolean_T) (unpackedValue);
              }

              {
                boolean_T result = (boolean_T) outValue;
                ENV_B.CANUnpack5_o4 = result;
              }
            }

            /* --------------- START Unpacking signal 4 ------------------
             *  startBit                = 20
             *  length                  = 8
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 1.0
             * -----------------------------------------------------------------------*/
            {
              real_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (ENV_B.Message.Data[2]) & (uint8_T)(0xF0U)) >> 4);
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (ENV_B.Message.Data[3]) & (uint8_T)(0xFU)) << 4);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real_T) (unpackedValue);
              }

              {
                real_T result = (real_T) outValue;
                result = result + 1.0;
                ENV_B.CANUnpack5_o5 = result;
              }
            }

            /* --------------- START Unpacking signal 5 ------------------
             *  startBit                = 4
             *  length                  = 8
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 1.0
             * -----------------------------------------------------------------------*/
            {
              real_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (ENV_B.Message.Data[0]) & (uint8_T)(0xF0U)) >> 4);
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (ENV_B.Message.Data[1]) & (uint8_T)(0xFU)) << 4);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real_T) (unpackedValue);
              }

              {
                real_T result = (real_T) outValue;
                result = result + 1.0;
                ENV_B.CANUnpack5_o6 = result;
              }
            }

            /* --------------- START Unpacking signal 6 ------------------
             *  startBit                = 12
             *  length                  = 8
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 1.0
             * -----------------------------------------------------------------------*/
            {
              real_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (ENV_B.Message.Data[1]) & (uint8_T)(0xF0U)) >> 4);
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (ENV_B.Message.Data[2]) & (uint8_T)(0xFU)) << 4);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real_T) (unpackedValue);
              }

              {
                real_T result = (real_T) outValue;
                result = result + 1.0;
                ENV_B.CANUnpack5_o7 = result;
              }
            }

            /* --------------- START Unpacking signal 7 ------------------
             *  startBit                = 28
             *  length                  = 8
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 0.0129
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (ENV_B.Message.Data[3]) & (uint8_T)(0xF0U)) >> 4);
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (ENV_B.Message.Data[4]) & (uint8_T)(0xFU)) << 4);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real_T) (unpackedValue);
              }

              {
                real_T result = (real_T) outValue;
                result = result * 0.0129;
                ENV_B.CANUnpack5_o8 = result;
              }
            }

            /* --------------- START Unpacking signal 8 ------------------
             *  startBit                = 36
             *  length                  = 8
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 0.0129
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (ENV_B.Message.Data[4]) & (uint8_T)(0xF0U)) >> 4);
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (ENV_B.Message.Data[5]) & (uint8_T)(0xFU)) << 4);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real_T) (unpackedValue);
              }

              {
                real_T result = (real_T) outValue;
                result = result * 0.0129;
                ENV_B.CANUnpack5_o9 = result;
              }
            }
          }
        }
      }
    }

    /* SignalConversion generated from: '<S1>/Length' */
    ENV_B.Length = ENV_B.Message.Length;

    /* SignalConversion generated from: '<S1>/VSteeringAngle' */
    ENV_B.OutportBufferForVSteeringAngle = 0.0;

    /* SignalConversion generated from: '<S1>/VThrottlePedal1' */
    ENV_B.OutportBufferForVThrottlePedal1 = 0.0;

    /* SignalConversion generated from: '<S1>/VThrottlePedal2' */
    ENV_B.OutportBufferForVThrottlePedal2 = 0.0;

    /* SignalConversion generated from: '<S1>/VBrakeF' */
    ENV_B.OutportBufferForVBrakeF = 0.0;

    /* SignalConversion generated from: '<S1>/VBrakeR' */
    ENV_B.OutportBufferForVBrakeR = 0.0;

    /* SignalConversion generated from: '<S1>/VDamperPotentiometerFR' */
    ENV_B.OutportBufferForVDamperPotentio = 0.0;

    /* SignalConversion generated from: '<S1>/VDamperPotentiometerFL' */
    ENV_B.OutportBufferForVDamperPotent_p = 0.0;

    /* SignalConversion generated from: '<S1>/vLateralIMU' */
    ENV_B.OutportBufferForvLateralIMU = 0.0;

    /* SignalConversion generated from: '<S1>/gVerticalIMU' */
    ENV_B.OutportBufferForgVerticalIMU = 0.0;

    /* SignalConversion generated from: '<S1>/vLongitudinalIMU' */
    ENV_B.OutportBufferForvLongitudinalIM = 0.0;

    /* SignalConversion generated from: '<S1>/gLateralIMU' */
    ENV_B.OutportBufferForgLateralIMU = 0.0;

    /* SignalConversion generated from: '<S1>/gLongitudingalIMU' */
    ENV_B.OutportBufferForgLongitudingalI = 0.0;

    /* SignalConversion generated from: '<S1>/nYawRateIMU' */
    ENV_B.OutportBufferFornYawRateIMU = 0.0;
  }

  /* End of Outputs for SubSystem: '<Root>/CAN Rx' */

  /* ModelReference generated from: '<Root>/Model' incorporates:
   *  Constant: '<Root>/Constant2'
   *  Inport: '<Root>/BBMSP0A0C'
   *  Inport: '<Root>/BBMSP0A0E'
   *  Inport: '<Root>/BBMSP0A10'
   *  Inport: '<Root>/BBMSP0A80'
   *  Inport: '<Root>/BBMSP0AC0'
   *  Inport: '<Root>/BBMSP0AFA'
   *  Inport: '<Root>/BBalancingOn'
   *  Inport: '<Root>/BInvDCOnFLIn'
   *  Inport: '<Root>/BInvDCOnFRIn'
   *  Inport: '<Root>/BInvDCOnRLIn'
   *  Inport: '<Root>/BInvDCOnRRIn'
   *  Inport: '<Root>/BInvErrorFL'
   *  Inport: '<Root>/BInvErrorFR'
   *  Inport: '<Root>/BInvErrorRL'
   *  Inport: '<Root>/BInvErrorRR'
   *  Inport: '<Root>/BInvOnFLIn'
   *  Inport: '<Root>/BInvOnFRIn'
   *  Inport: '<Root>/BInvOnRLIn'
   *  Inport: '<Root>/BInvOnRRIn'
   *  Inport: '<Root>/BInvQuitDcOnFL'
   *  Inport: '<Root>/BInvQuitDcOnFR'
   *  Inport: '<Root>/BInvQuitDcOnRL'
   *  Inport: '<Root>/BInvQuitDcOnRR'
   *  Inport: '<Root>/BInvSysReadyFL'
   *  Inport: '<Root>/BInvSysReadyFR'
   *  Inport: '<Root>/BInvSysReadyRL'
   *  Inport: '<Root>/BInvSysReadyRR'
   *  Inport: '<Root>/BInvWarnFL'
   *  Inport: '<Root>/BInvWarnFR'
   *  Inport: '<Root>/BInvWarnRL'
   *  Inport: '<Root>/BInvWarnRR'
   *  Inport: '<Root>/BQuitInvOnFL'
   *  Inport: '<Root>/BQuitInvOnFR'
   *  Inport: '<Root>/BQuitInvOnRL'
   *  Inport: '<Root>/BQuitInvOnRR'
   *  Inport: '<Root>/IBMSDCL'
   *  Inport: '<Root>/IBMSHallEffect'
   *  Inport: '<Root>/IIVTS'
   *  Inport: '<Root>/MMotorMeasuredFL'
   *  Inport: '<Root>/MMotorMeasuredFR'
   *  Inport: '<Root>/MMotorMeasuredRL'
   *  Inport: '<Root>/MMotorMeasuredRR'
   *  Inport: '<Root>/NInvDTCFL'
   *  Inport: '<Root>/NInvDTCFR'
   *  Inport: '<Root>/NInvDTCRL'
   *  Inport: '<Root>/NInvDTCRR'
   *  Inport: '<Root>/RCellAverage'
   *  Inport: '<Root>/TCellMax'
   *  Inport: '<Root>/TCellMin'
   *  Inport: '<Root>/TInvFL'
   *  Inport: '<Root>/TInvFR'
   *  Inport: '<Root>/TInvRL'
   *  Inport: '<Root>/TInvRR'
   *  Inport: '<Root>/TMotorFL'
   *  Inport: '<Root>/TMotorFR'
   *  Inport: '<Root>/TMotorRL'
   *  Inport: '<Root>/TMotorRR'
   *  Inport: '<Root>/VCellAverage'
   *  Inport: '<Root>/VCellMax'
   *  Inport: '<Root>/VCellMin'
   *  Inport: '<Root>/VDCAccumulator'
   *  Inport: '<Root>/VDCInvFL'
   *  Inport: '<Root>/VDCInvFR'
   *  Inport: '<Root>/VDCInvRL'
   *  Inport: '<Root>/VDCInvRR'
   *  Inport: '<Root>/nMotorFL'
   *  Inport: '<Root>/nMotorFR'
   *  Inport: '<Root>/nMotorRL'
   *  Inport: '<Root>/nMotorRR'
   *  Outport: '<Root>/BAccuFanOn'
   *  Outport: '<Root>/BAppsOK'
   *  Outport: '<Root>/BBMSP0A0COut'
   *  Outport: '<Root>/BBMSP0A0EOut'
   *  Outport: '<Root>/BBMSP0A10Out'
   *  Outport: '<Root>/BBMSP0A80Out'
   *  Outport: '<Root>/BBMSP0AC0Out'
   *  Outport: '<Root>/BBMSP0AFAOut'
   *  Outport: '<Root>/BBalancingOnOut'
   *  Outport: '<Root>/BBrakeError'
   *  Outport: '<Root>/BBrakeLight'
   *  Outport: '<Root>/BBrakeOn'
   *  Outport: '<Root>/BCalibrationOn'
   *  Outport: '<Root>/BDataMark'
   *  Outport: '<Root>/BDischargeAllowed'
   *  Outport: '<Root>/BDrivetrainCoolingOn'
   *  Outport: '<Root>/BDrivetrainCoolingOnEM'
   *  Outport: '<Root>/BDrivetrainCoolingOnOW'
   *  Outport: '<Root>/BEMSDriverSignal1'
   *  Outport: '<Root>/BEMSDriverSignal2'
   *  Outport: '<Root>/BEMSDriverSignal3'
   *  Outport: '<Root>/BEMSOn'
   *  Outport: '<Root>/BEMSOnEM'
   *  Outport: '<Root>/BEMSOnOW'
   *  Outport: '<Root>/BErrorReset'
   *  Outport: '<Root>/BIMUError'
   *  Outport: '<Root>/BIMUOk'
   *  Outport: '<Root>/BInvDCOnFLOut'
   *  Outport: '<Root>/BInvDCOnFROut'
   *  Outport: '<Root>/BInvDCOnRLOut'
   *  Outport: '<Root>/BInvDCOnRROut'
   *  Outport: '<Root>/BInvEnableFL'
   *  Outport: '<Root>/BInvEnableFR'
   *  Outport: '<Root>/BInvEnableRL'
   *  Outport: '<Root>/BInvEnableRR'
   *  Outport: '<Root>/BInvErrorResetFL'
   *  Outport: '<Root>/BInvErrorResetFR'
   *  Outport: '<Root>/BInvErrorResetRL'
   *  Outport: '<Root>/BInvErrorResetRR'
   *  Outport: '<Root>/BInvLVOn'
   *  Outport: '<Root>/BInvOnFLOut'
   *  Outport: '<Root>/BInvOnFROut'
   *  Outport: '<Root>/BInvOnRLOut'
   *  Outport: '<Root>/BInvOnRROut'
   *  Outport: '<Root>/BInverterErrorFront'
   *  Outport: '<Root>/BInverterErrorRear'
   *  Outport: '<Root>/BInverterFanOn'
   *  Outport: '<Root>/BMotorRBHFanOn'
   *  Outport: '<Root>/BOverpower'
   *  Outport: '<Root>/BPCComplete'
   *  Outport: '<Root>/BPageDown'
   *  Outport: '<Root>/BPageUp'
   *  Outport: '<Root>/BPedalOverlap'
   *  Outport: '<Root>/BQuitInvOnFLCAN3'
   *  Outport: '<Root>/BQuitInvOnFRCAN3'
   *  Outport: '<Root>/BQuitInvOnRLCAN3'
   *  Outport: '<Root>/BQuitInvOnRRCAN3'
   *  Outport: '<Root>/BReadyToDrive'
   *  Outport: '<Root>/BReadyToDriveBuzzer'
   *  Outport: '<Root>/BRegenOn'
   *  Outport: '<Root>/BSpeedDerateOn'
   *  Outport: '<Root>/BSpinningModeOn'
   *  Outport: '<Root>/BSpinningModeOnEM'
   *  Outport: '<Root>/BSpinningModeOnOW'
   *  Outport: '<Root>/BTCOn'
   *  Outport: '<Root>/BTCOnEM'
   *  Outport: '<Root>/BTCOnOW'
   *  Outport: '<Root>/BTVOK'
   *  Outport: '<Root>/BTVOn'
   *  Outport: '<Root>/BTVOnEM'
   *  Outport: '<Root>/BTVOnOW'
   *  Outport: '<Root>/BThrottleError'
   *  Outport: '<Root>/BxDamperFLOk'
   *  Outport: '<Root>/BxDamperFROk'
   *  Outport: '<Root>/BxDamperRLOk'
   *  Outport: '<Root>/BxDamperRROk'
   *  Outport: '<Root>/EBudget'
   *  Outport: '<Root>/EOffset'
   *  Outport: '<Root>/ERemaining'
   *  Outport: '<Root>/ESector'
   *  Outport: '<Root>/ESector10Remaining'
   *  Outport: '<Root>/ESector11Remaining'
   *  Outport: '<Root>/ESector12Remaining'
   *  Outport: '<Root>/ESector1Remaining'
   *  Outport: '<Root>/ESector2Remaining'
   *  Outport: '<Root>/ESector3Remaining'
   *  Outport: '<Root>/ESector4Remaining'
   *  Outport: '<Root>/ESector5Remaining'
   *  Outport: '<Root>/ESector6Remaining'
   *  Outport: '<Root>/ESector7Remaining'
   *  Outport: '<Root>/ESector8Remaining'
   *  Outport: '<Root>/ESector9Remaining'
   *  Outport: '<Root>/ETotalRequested'
   *  Outport: '<Root>/FLongitudinalLoadTransfer'
   *  Outport: '<Root>/FTotalDownforce'
   *  Outport: '<Root>/FTotalLateralLoadTransfer'
   *  Outport: '<Root>/FTyreVerticalFL'
   *  Outport: '<Root>/FTyreVerticalFR'
   *  Outport: '<Root>/FTyreVerticalRL'
   *  Outport: '<Root>/FTyreVerticalRR'
   *  Outport: '<Root>/IBMSHallEffectOut'
   *  Outport: '<Root>/IIVTSOut'
   *  Outport: '<Root>/MDischargeLimited'
   *  Outport: '<Root>/MDriverDischargeRequested'
   *  Outport: '<Root>/MDriverRegenRequested'
   *  Outport: '<Root>/MFLFinal'
   *  Outport: '<Root>/MFRFinal'
   *  Outport: '<Root>/MInvRLFinal'
   *  Outport: '<Root>/MInvRRFinal'
   *  Outport: '<Root>/MPCDischargeRequested'
   *  Outport: '<Root>/MPCRegenRequested'
   *  Outport: '<Root>/MRegenLimited'
   *  Outport: '<Root>/MRegenMax'
   *  Outport: '<Root>/MTorqueDistributionFL'
   *  Outport: '<Root>/MTorqueDistributionFR'
   *  Outport: '<Root>/MTorqueDistributionRL'
   *  Outport: '<Root>/MTorqueDistributionRR'
   *  Outport: '<Root>/MTorqueLimitNegativeFL'
   *  Outport: '<Root>/MTorqueLimitNegativeFR'
   *  Outport: '<Root>/MTorqueLimitNegativeRL'
   *  Outport: '<Root>/MTorqueLimitNegativeRR'
   *  Outport: '<Root>/MTorqueLimitPositiveFL'
   *  Outport: '<Root>/MTorqueLimitPositiveFR'
   *  Outport: '<Root>/MTorqueLimitPositiveRL'
   *  Outport: '<Root>/MTorqueLimitPositiveRR'
   *  Outport: '<Root>/MTorqueVectoringFL'
   *  Outport: '<Root>/MTorqueVectoringFR'
   *  Outport: '<Root>/MTorqueVectoringRL'
   *  Outport: '<Root>/MTorqueVectoringRR'
   *  Outport: '<Root>/MTotalFinal'
   *  Outport: '<Root>/MTotalRequested'
   *  Outport: '<Root>/MTractionControlFLTotal'
   *  Outport: '<Root>/MTractionControlFRTotal'
   *  Outport: '<Root>/MTractionControlRLTotal'
   *  Outport: '<Root>/MTractionControlRRTotal'
   *  Outport: '<Root>/NABSMultiplierFL'
   *  Outport: '<Root>/NABSMultiplierFR'
   *  Outport: '<Root>/NABSMultiplierRL'
   *  Outport: '<Root>/NABSMultiplierRR'
   *  Outport: '<Root>/NBMSState'
   *  Outport: '<Root>/NCarState'
   *  Outport: '<Root>/NEventMode'
   *  Outport: '<Root>/NInvDTCFLOut'
   *  Outport: '<Root>/NInvDTCFROut'
   *  Outport: '<Root>/NInvDTCRLOut'
   *  Outport: '<Root>/NInvDTCRROut'
   *  Outport: '<Root>/NInvState'
   *  Outport: '<Root>/NLap'
   *  Outport: '<Root>/NPCKpSelector'
   *  Outport: '<Root>/NSector10Remaining'
   *  Outport: '<Root>/NSector11Remaining'
   *  Outport: '<Root>/NSector12Remaining'
   *  Outport: '<Root>/NSector1Remaining'
   *  Outport: '<Root>/NSector2Remaining'
   *  Outport: '<Root>/NSector3Remaining'
   *  Outport: '<Root>/NSector4Remaining'
   *  Outport: '<Root>/NSector5Remaining'
   *  Outport: '<Root>/NSector6Remaining'
   *  Outport: '<Root>/NSector7Remaining'
   *  Outport: '<Root>/NSector8Remaining'
   *  Outport: '<Root>/NSector9Remaining'
   *  Outport: '<Root>/NSectorGlobal'
   *  Outport: '<Root>/NSectorLap'
   *  Outport: '<Root>/NTCKdSelector'
   *  Outport: '<Root>/NThrottleMap'
   *  Outport: '<Root>/NThrottleMapEM'
   *  Outport: '<Root>/NThrottleMapOW'
   *  Outport: '<Root>/NTractionControlMultiplierFL'
   *  Outport: '<Root>/NTractionControlMultiplierFR'
   *  Outport: '<Root>/NTractionControlMultiplierRL'
   *  Outport: '<Root>/NTractionControlMultiplierRR'
   *  Outport: '<Root>/PActual'
   *  Outport: '<Root>/PDischargeDerate'
   *  Outport: '<Root>/PDischargeLimit'
   *  Outport: '<Root>/PDischargeLimited'
   *  Outport: '<Root>/PDischargeMax'
   *  Outport: '<Root>/PDischargeMaxEM'
   *  Outport: '<Root>/PDischargeMaxOW'
   *  Outport: '<Root>/PEnergyMeter'
   *  Outport: '<Root>/PEngineBraking'
   *  Outport: '<Root>/PEngineBrakingEM'
   *  Outport: '<Root>/PEngineBrakingOW'
   *  Outport: '<Root>/PHighCellTemperatureDerate'
   *  Outport: '<Root>/PHighCellVoltageRegenDerate'
   *  Outport: '<Root>/PInvTemperatureDerate'
   *  Outport: '<Root>/PInvTemperatureDerateFL'
   *  Outport: '<Root>/PInvTemperatureDerateFR'
   *  Outport: '<Root>/PInvTemperatureDerateRL'
   *  Outport: '<Root>/PInvTemperatureDerateRR'
   *  Outport: '<Root>/PLowCellVoltageDischargeDerate'
   *  Outport: '<Root>/PMotorTemperatureDerate'
   *  Outport: '<Root>/PMotorTemperatureDerateFL'
   *  Outport: '<Root>/PMotorTemperatureDerateFR'
   *  Outport: '<Root>/PMotorTemperatureDerateRL'
   *  Outport: '<Root>/PMotorTemperatureDerateRR'
   *  Outport: '<Root>/PPCDischargeRequested'
   *  Outport: '<Root>/PPCIntegralTermDischarge'
   *  Outport: '<Root>/PPCIntegralTermRegen'
   *  Outport: '<Root>/PPCProportionalTermDischarge'
   *  Outport: '<Root>/PPCProportionalTermRegen'
   *  Outport: '<Root>/PPCRegenRequested'
   *  Outport: '<Root>/PRegenDerate'
   *  Outport: '<Root>/PRegenLimit'
   *  Outport: '<Root>/PRegenMax'
   *  Outport: '<Root>/PRegenMaxEM'
   *  Outport: '<Root>/PRegenMaxOW'
   *  Outport: '<Root>/PRegenRequested'
   *  Outport: '<Root>/PSOCDischargeDerate'
   *  Outport: '<Root>/PSOCRegenDerate'
   *  Outport: '<Root>/PTSTemperatureDerateFL'
   *  Outport: '<Root>/PTSTemperatureDerateFR'
   *  Outport: '<Root>/PTSTemperatureDerateRL'
   *  Outport: '<Root>/PTSTemperatureDerateRR'
   *  Outport: '<Root>/TCellMaxOut'
   *  Outport: '<Root>/TCellMinOut'
   *  Outport: '<Root>/TInvFLOut'
   *  Outport: '<Root>/TInvFROut'
   *  Outport: '<Root>/TInvMax'
   *  Outport: '<Root>/TInvRLOut'
   *  Outport: '<Root>/TInvRROut'
   *  Outport: '<Root>/TMotorFLOut'
   *  Outport: '<Root>/TMotorFROut'
   *  Outport: '<Root>/TMotorMax'
   *  Outport: '<Root>/TMotorRLOut'
   *  Outport: '<Root>/TMotorRROut'
   *  Outport: '<Root>/VCellMaxOut'
   *  Outport: '<Root>/VCellMinOut'
   *  Outport: '<Root>/VDCAccumulatorOut'
   *  Outport: '<Root>/VDCInvRLOut'
   *  Outport: '<Root>/aCamberFL'
   *  Outport: '<Root>/aCamberFR'
   *  Outport: '<Root>/aCamberGainHeaveF'
   *  Outport: '<Root>/aCamberGainHeaveR'
   *  Outport: '<Root>/aCamberGainSteerFL'
   *  Outport: '<Root>/aCamberGainSteerFR'
   *  Outport: '<Root>/aCamberRL'
   *  Outport: '<Root>/aCamberRR'
   *  Outport: '<Root>/aRollAngle'
   *  Outport: '<Root>/aSlipAngleFL'
   *  Outport: '<Root>/aSlipAngleFR'
   *  Outport: '<Root>/aSlipAngleRL'
   *  Outport: '<Root>/aSlipAngleRR'
   *  Outport: '<Root>/aSteeringAngle'
   *  Outport: '<Root>/nMotorFLOut'
   *  Outport: '<Root>/nMotorFROut'
   *  Outport: '<Root>/nMotorRLOut'
   *  Outport: '<Root>/nMotorRROut'
   *  Outport: '<Root>/nYawRateErrorActual'
   *  Outport: '<Root>/pBrakeF'
   *  Outport: '<Root>/pBrakeMax'
   *  Outport: '<Root>/pBrakeR'
   *  Outport: '<Root>/rEngineBrakingSplit'
   *  Outport: '<Root>/rEngineBrakingSplitEM'
   *  Outport: '<Root>/rEngineBrakingSplitOW'
   *  Outport: '<Root>/rGrip'
   *  Outport: '<Root>/rRegenPaddle'
   *  Outport: '<Root>/rSOC'
   *  Outport: '<Root>/rSOE'
   *  Outport: '<Root>/rSlipRatioFLActual'
   *  Outport: '<Root>/rSlipRatioFRActual'
   *  Outport: '<Root>/rSlipRatioOptimal'
   *  Outport: '<Root>/rSlipRatioRLActual'
   *  Outport: '<Root>/rSlipRatioRRActual'
   *  Outport: '<Root>/rSpeedRegenDerateFL'
   *  Outport: '<Root>/rSpeedRegenDerateFR'
   *  Outport: '<Root>/rSpeedRegenDerateRL'
   *  Outport: '<Root>/rSpeedRegenDerateRR'
   *  Outport: '<Root>/rSplitRear'
   *  Outport: '<Root>/rTVMultiplier'
   *  Outport: '<Root>/rTVMultiplierEM'
   *  Outport: '<Root>/rTVMultiplierOW'
   *  Outport: '<Root>/rThrottlePedal'
   *  Outport: '<Root>/rThrottlePedal1'
   *  Outport: '<Root>/rTorqueSplit'
   *  Outport: '<Root>/rTorqueSplitEM'
   *  Outport: '<Root>/rTorqueSplitOW'
   *  Outport: '<Root>/sChassis'
   *  Outport: '<Root>/sSector'
   *  Outport: '<Root>/tAppsTimer'
   *  Outport: '<Root>/tBrakeError'
   *  Outport: '<Root>/tIMUError'
   *  Outport: '<Root>/tPedalOverlap'
   *  Outport: '<Root>/tThrottleError'
   *  Outport: '<Root>/vChassis'
   *  Outport: '<Root>/vWheelFL'
   *  Outport: '<Root>/vWheelFR'
   *  Outport: '<Root>/vWheelRL'
   *  Outport: '<Root>/vWheelRR'
   *  Outport: '<Root>/xDamperFL'
   *  Outport: '<Root>/xDamperFR'
   *  Outport: '<Root>/xDamperRL'
   *  Outport: '<Root>/xDamperRR'
   *  Outport: '<Root>/xHeaveTravelF'
   *  Outport: '<Root>/xHeaveTravelR'
   */
  MASTER(&ENV_U.nMotorFL, &ENV_U.BInvDCOnFLIn, &ENV_U.BInvErrorFL,
         &ENV_U.BInvOnFLIn, &ENV_U.BInvQuitDcOnFL, &ENV_U.BQuitInvOnFL,
         &ENV_U.BInvSysReadyFL, &ENV_U.BInvWarnFL, &ENV_U.MMotorMeasuredFL,
         &ENV_U.NInvDTCFL, &ENV_U.TMotorFL, &ENV_U.VDCInvFL, &ENV_U.TInvFL,
         &ENV_U.nMotorFR, &ENV_U.BInvDCOnFRIn, &ENV_U.BInvErrorFR,
         &ENV_U.BInvOnFRIn, &ENV_U.BInvQuitDcOnFR, &ENV_U.BQuitInvOnFR,
         &ENV_U.BInvSysReadyFR, &ENV_U.BInvWarnFR, &ENV_U.MMotorMeasuredFR,
         &ENV_U.NInvDTCFR, &ENV_U.TMotorFR, &ENV_U.VDCInvFR, &ENV_U.TInvFR,
         &ENV_U.nMotorRL, &ENV_U.BInvDCOnRLIn, &ENV_U.BInvErrorRL,
         &ENV_U.BInvOnRLIn, &ENV_U.BInvQuitDcOnRL, &ENV_U.BQuitInvOnRL,
         &ENV_U.BInvSysReadyRL, &ENV_U.BInvWarnRL, &ENV_U.MMotorMeasuredRL,
         &ENV_U.NInvDTCRL, &ENV_U.TMotorRL, &ENV_U.VDCInvRL, &ENV_U.TInvRL,
         &ENV_U.nMotorRR, &ENV_U.BInvDCOnRRIn, &ENV_U.BInvErrorRR,
         &ENV_U.BInvOnRRIn, &ENV_U.BInvQuitDcOnRR, &ENV_U.BQuitInvOnRR,
         &ENV_U.BInvSysReadyRR, &ENV_U.BInvWarnRR, &ENV_U.MMotorMeasuredRR,
         &ENV_U.NInvDTCRR, &ENV_U.TMotorRR, &ENV_U.VDCInvRR, &ENV_U.TInvRR,
         &ENV_B.CANUnpack5_o1, &ENV_B.CANUnpack5_o2, &ENV_B.CANUnpack5_o3,
         &ENV_B.CANUnpack5_o4, &ENV_B.CANUnpack5_o6, &ENV_B.CANUnpack5_o7,
         &ENV_B.CANUnpack5_o5, &ENV_B.CANUnpack5_o8, &ENV_B.CANUnpack5_o9,
         &rtCP_Constant2_Value, &ENV_B.OutportBufferForVSteeringAngle,
         &ENV_B.OutportBufferForVThrottlePedal1,
         &ENV_B.OutportBufferForVThrottlePedal2, &ENV_B.OutportBufferForVBrakeF,
         &ENV_B.OutportBufferForVBrakeR, &ENV_B.OutportBufferForVDamperPotentio,
         &ENV_B.OutportBufferForVDamperPotent_p,
         &ENV_B.OutportBufferForvLateralIMU, &ENV_B.OutportBufferForgVerticalIMU,
         &ENV_B.OutportBufferForvLongitudinalIM,
         &ENV_B.OutportBufferForgLateralIMU,
         &ENV_B.OutportBufferForgLongitudingalI,
         &ENV_B.OutportBufferFornYawRateIMU, &ENV_U.IIVTS, &ENV_U.IBMSHallEffect,
         &ENV_U.VDCAccumulator, &ENV_U.TCellMin, &ENV_U.VCellAverage,
         &ENV_U.VCellMax, &ENV_U.TCellMax, &ENV_U.IBMSDCL, &ENV_U.VCellMin,
         &ENV_U.RCellAverage, &ENV_U.BBalancingOn, &ENV_U.BBMSP0A0C,
         &ENV_U.BBMSP0A0E, &ENV_U.BBMSP0A10, &ENV_U.BBMSP0A80, &ENV_U.BBMSP0AC0,
         &ENV_U.BBMSP0AFA, &ENV_Y.nMotorRLOut, &rtb_BInvDCOnRLIn,
         &rtb_BInvErrorRL, &rtb_BInvOnRLIn, &rtb_BInvQuitDcOnRL,
         &ENV_Y.BQuitInvOnRLCAN3, &rtb_BInvSysReadyRL, &rtb_BInvWarnRL,
         &rtb_MMotorMeasuredRL, &ENV_Y.NInvDTCRLOut, &ENV_Y.TMotorRLOut,
         &ENV_Y.VDCInvRLOut, &ENV_Y.TInvRLOut, &ENV_Y.nMotorFLOut,
         &rtb_BInvDCOnFLIn, &rtb_BInvErrorFL, &rtb_BInvOnFLIn,
         &rtb_BInvQuitDcOnFL, &ENV_Y.BQuitInvOnFLCAN3, &rtb_BInvSysReadyFL,
         &rtb_BInvWarnFL, &rtb_MMotorMeasuredFL, &ENV_Y.NInvDTCFLOut,
         &ENV_Y.TMotorFLOut, &rtb_VDCInvFL, &ENV_Y.TInvFLOut, &ENV_Y.nMotorRROut,
         &rtb_BInvDCOnRRIn, &rtb_BInvErrorRR, &rtb_BInvOnRRIn,
         &rtb_BInvQuitDcOnRR, &ENV_Y.BQuitInvOnRRCAN3, &rtb_BInvSysReadyRR,
         &rtb_BInvWarnRR, &rtb_MMotorMeasuredRR, &ENV_Y.NInvDTCRROut,
         &ENV_Y.TMotorRROut, &rtb_VDCInvRR, &ENV_Y.TInvRROut, &ENV_Y.nMotorFROut,
         &rtb_BInvDCOnFRIn, &rtb_BInvErrorFR, &rtb_BInvOnFRIn,
         &rtb_BInvQuitDcOnFR, &ENV_Y.BQuitInvOnFRCAN3, &rtb_BInvSysReadyFR,
         &rtb_BInvWarnFR, &rtb_MMotorMeasuredFR, &ENV_Y.NInvDTCFROut,
         &ENV_Y.TMotorFROut, &rtb_VDCInvFR, &ENV_Y.TInvFROut, &ENV_Y.vWheelRL,
         &ENV_Y.vWheelRR, &ENV_Y.vWheelFL, &ENV_Y.vWheelFR,
         &rtb_VDamperPotentiometerFL, &rtb_VDamperPotentiometerFR,
         &rtb_NDisplayNumberDDU7, &rtb_VSteeringAngle, &rtb_VThrottlePedal1,
         &rtb_VThrottlePedal2, &rtb_BSteeringWheelButton1,
         &rtb_BSteeringWheelButton2, &rtb_BSteeringWheelButton3,
         &rtb_BSteeringWheelButton4, &rtb_NPageSelectRotary,
         &rtb_NParameterRotary, &rtb_NEventModeRotary, &rtb_VRegenPaddle1,
         &rtb_VRegenPaddle2, &rtb_VBrakeF, &rtb_VBrakeR, &rtb_vLateralIMU,
         &rtb_gVerticalIMU, &rtb_vLongitudinalIMU, &rtb_gLateralIMU,
         &rtb_gLongitudinalIMU, &rtb_nYawRateIMU, &ENV_Y.VCellMaxOut,
         &rtb_VCellDelta, &ENV_Y.VCellMinOut, &rtb_VCellAverage,
         &ENV_Y.TCellMaxOut, &rtb_IBMSDLC, &ENV_Y.TCellMinOut,
         &ENV_Y.IBMSHallEffectOut, &ENV_Y.VDCAccumulatorOut, &rtb_RCellAverage,
         &ENV_Y.BBalancingOnOut, &ENV_Y.BBMSP0A0COut, &ENV_Y.BBMSP0A0EOut,
         &ENV_Y.BBMSP0A10Out, &ENV_Y.BBMSP0A80Out, &ENV_Y.BBMSP0AC0Out,
         &ENV_Y.BBMSP0AFAOut, &ENV_Y.IIVTSOut, &ENV_Y.rThrottlePedal1,
         &ENV_Y.rThrottlePedal, &ENV_Y.BThrottleError_g, &ENV_Y.tThrottleError,
         &ENV_Y.pBrakeF, &ENV_Y.pBrakeR, &ENV_Y.BBrakeError_i,
         &ENV_Y.tBrakeError, &ENV_Y.BBrakeOn, &ENV_Y.pBrakeMax,
         &ENV_Y.BBrakeLight_e, &ENV_Y.BPedalOverlap_m, &ENV_Y.tPedalOverlap,
         &ENV_Y.BAppsOK_h, &ENV_Y.tAppsTimer, &rtb_rSteeringAngle,
         &ENV_Y.aSteeringAngle, &ENV_Y.rRegenPaddle_d, &ENV_Y.BRegenOn,
         &ENV_Y.xDamperFL, &ENV_Y.xDamperFR, &ENV_Y.xDamperRL, &ENV_Y.xDamperRR,
         &ENV_Y.BxDamperFLOk, &ENV_Y.BxDamperFROk, &ENV_Y.BxDamperRLOk,
         &ENV_Y.BxDamperRROk, &ENV_Y.BInverterErrorRear,
         &ENV_Y.BInverterErrorFront, &ENV_Y.BIMUOk_l, &ENV_Y.BIMUError,
         &ENV_Y.vChassis_c, &ENV_Y.sChassis, &ENV_Y.BPageUp, &ENV_Y.BPageDown,
         &ENV_Y.BInvLVOn, &ENV_Y.BCalibrationOn, &ENV_B.BReadyToDriveButton,
         &ENV_Y.BErrorReset, &ENV_Y.BTVOn, &ENV_Y.BTCOn,
         &ENV_Y.BDrivetrainCoolingOn_o, &ENV_Y.BEMSOn, &ENV_Y.BSpinningModeOn,
         &ENV_Y.NThrottleMap, &ENV_Y.PDischargeMax, &ENV_Y.rTorqueSplit,
         &ENV_Y.PRegenMax, &ENV_Y.rTVMultiplier, &ENV_Y.PEngineBraking,
         &ENV_Y.rEngineBrakingSplit, &ENV_Y.BDataMark, &ENV_Y.rGrip,
         &ENV_Y.EOffset, &ENV_Y.NTCKdSelector, &ENV_Y.MRegenMax,
         &ENV_Y.NEventMode, &ENV_Y.NPCKpSelector, &ENV_Y.TMotorMax,
         &ENV_Y.TInvMax, &ENV_Y.BAccuFanOn, &ENV_Y.BMotorRBHFanOn,
         &ENV_Y.BInverterFanOn, &ENV_Y.BPCComplete_d, &ENV_Y.PActual_o,
         &ENV_Y.rSOC_p, &ENV_Y.rSOE, &ENV_Y.PEnergyMeter_a, &ENV_Y.BOverpower,
         &ENV_Y.tIMUError, &ENV_Y.BTVOnEM, &ENV_Y.BTCOnEM,
         &ENV_Y.BDrivetrainCoolingOnEM, &ENV_Y.BEMSOnEM,
         &ENV_Y.BSpinningModeOnEM, &ENV_Y.rTVMultiplierEM,
         &ENV_Y.rEngineBrakingSplitEM, &ENV_Y.NThrottleMapEM,
         &ENV_Y.PDischargeMaxEM, &ENV_Y.rTorqueSplitEM, &ENV_Y.PRegenMaxEM,
         &ENV_Y.PEngineBrakingEM, &ENV_Y.BTVOnOW, &ENV_Y.BTCOnOW,
         &ENV_Y.BDrivetrainCoolingOnOW, &ENV_Y.BEMSOnOW,
         &ENV_Y.BSpinningModeOnOW, &ENV_Y.rTVMultiplierOW,
         &ENV_Y.rEngineBrakingSplitOW, &ENV_Y.NThrottleMapOW,
         &ENV_Y.PDischargeMaxOW, &ENV_Y.rTorqueSplitOW, &ENV_Y.PRegenMaxOW,
         &ENV_Y.PEngineBrakingOW, &rtb_MMotorMaxFL, &rtb_MMotorMaxFR,
         &rtb_MMotorMaxRL, &rtb_MMotorMaxRR, &ENV_Y.NCarState_m,
         &ENV_Y.BReadyToDriveBuzzer, &ENV_Y.BReadyToDrive, &ENV_Y.NBMSState_h,
         &ENV_Y.NInvState_e, &ENV_B.BHVOn, &ENV_Y.BInvOnRLOut,
         &ENV_Y.BInvOnRROut, &ENV_Y.BInvOnFLOut, &ENV_Y.BInvOnFROut,
         &ENV_Y.BInvDCOnRLOut, &ENV_Y.BInvDCOnRROut, &ENV_Y.BInvDCOnFLOut,
         &ENV_Y.BInvDCOnFROut, &ENV_Y.BInvEnableRL, &ENV_Y.BInvEnableRR,
         &ENV_Y.BInvEnableFL, &ENV_Y.BInvEnableFR, &ENV_Y.BInvErrorResetRL,
         &ENV_Y.BInvErrorResetRR, &ENV_Y.BInvErrorResetFL,
         &ENV_Y.BInvErrorResetFR, &ENV_B.MTargetTorqueRL, &ENV_B.MTargetTorqueRR,
         &ENV_B.MTargetTorqueFL, &ENV_B.MTargetTorqueFR,
         &ENV_Y.MTorqueLimitNegativeRL, &ENV_Y.MTorqueLimitNegativeRR,
         &ENV_Y.MTorqueLimitNegativeFL, &ENV_Y.MTorqueLimitNegativeFR,
         &ENV_Y.MTorqueLimitPositiveRL, &ENV_Y.MTorqueLimitPositiveRR,
         &ENV_Y.MTorqueLimitPositiveFL, &ENV_Y.MTorqueLimitPositiveFR,
         &ENV_Y.BDischargeAllowed, &ENV_Y.PInvTemperatureDerate_i,
         &ENV_Y.PInvTemperatureDerateFR, &ENV_Y.PInvTemperatureDerateFL,
         &ENV_Y.PInvTemperatureDerateRR, &ENV_Y.PInvTemperatureDerateRL,
         &ENV_Y.PMotorTemperatureDerate_a, &ENV_Y.PMotorTemperatureDerateFR,
         &ENV_Y.PMotorTemperatureDerateFL, &ENV_Y.PMotorTemperatureDerateRR,
         &ENV_Y.PMotorTemperatureDerateRL, &ENV_Y.PTSTemperatureDerateFR,
         &ENV_Y.PTSTemperatureDerateFL, &ENV_Y.PTSTemperatureDerateRR,
         &ENV_Y.PTSTemperatureDerateRL, &ENV_Y.PHighCellTemperatureDerate_j,
         &ENV_Y.PLowCellVoltageDischargeDerate,
         &ENV_Y.PHighCellVoltageRegenDerate, &ENV_Y.PSOCDischargeDerate,
         &ENV_Y.PSOCRegenDerate, &ENV_Y.rSpeedRegenDerateRR,
         &ENV_Y.rSpeedRegenDerateRL, &ENV_Y.rSpeedRegenDerateFR,
         &ENV_Y.rSpeedRegenDerateFL, &ENV_Y.BSpeedDerateOn,
         &ENV_Y.PDischargeDerate_i, &ENV_Y.PRegenDerate_j,
         &ENV_Y.MDriverDischargeRequested_e, &ENV_Y.PRegenRequested,
         &ENV_Y.MDriverRegenRequested_k, &ENV_Y.PDischargeLimit,
         &ENV_Y.PPCIntegralTermDischarge, &ENV_Y.PPCProportionalTermDischarge,
         &ENV_Y.MPCDischargeRequested, &ENV_Y.PRegenLimit,
         &ENV_Y.PPCIntegralTermRegen, &ENV_Y.PPCProportionalTermRegen,
         &ENV_Y.MPCRegenRequested, &ENV_Y.PPCDischargeRequested,
         &ENV_Y.PPCRegenRequested, &ENV_Y.MDischargeLimited,
         &ENV_Y.MRegenLimited, &ENV_Y.MTotalRequested_f,
         &ENV_Y.BEMSDriverSignal1, &ENV_Y.BEMSDriverSignal2,
         &ENV_Y.BEMSDriverSignal3, &ENV_Y.NLap, &ENV_Y.NSectorGlobal,
         &ENV_Y.NSectorLap, &ENV_Y.ESector, &ENV_Y.ERemaining, &ENV_Y.EBudget,
         &ENV_Y.sSector, &ENV_Y.rSlipRatioFLActual, &ENV_Y.rSlipRatioFRActual,
         &ENV_Y.rSlipRatioRLActual, &ENV_Y.rSlipRatioRRActual,
         &ENV_Y.FLongitudinalLoadTransfer, &ENV_Y.FTyreVerticalFL,
         &ENV_Y.FTyreVerticalFR, &ENV_Y.FTyreVerticalRL, &ENV_Y.FTyreVerticalRR,
         &ENV_Y.aSlipAngleFL, &ENV_Y.aSlipAngleFR, &ENV_Y.aSlipAngleRL,
         &ENV_Y.aSlipAngleRR, &ENV_Y.aCamberFL, &ENV_Y.aCamberFR,
         &ENV_Y.aCamberRL, &ENV_Y.aCamberRR, &ENV_Y.FTotalLateralLoadTransfer,
         &rtb_FLateralLoadTransferF, &rtb_FLateralLoadTransferR,
         &ENV_Y.FTotalDownforce, &rtb_FDownforceF, &rtb_FDownforceR,
         &ENV_Y.aCamberGainSteerFL, &ENV_Y.aCamberGainSteerFR,
         &ENV_Y.xHeaveTravelF, &ENV_Y.xHeaveTravelR, &ENV_Y.aCamberGainHeaveF,
         &ENV_Y.aCamberGainHeaveR, &ENV_Y.aRollAngle, &ENV_Y.nYawRateErrorActual,
         &ENV_Y.BTVOK, &ENV_Y.MTorqueVectoringFL, &ENV_Y.MTorqueVectoringFR,
         &ENV_Y.MTorqueVectoringRL, &ENV_Y.MTorqueVectoringRR, &ENV_Y.rSplitRear,
         &ENV_Y.MTorqueDistributionFL, &ENV_Y.MTorqueDistributionFR,
         &ENV_Y.MTorqueDistributionRL, &ENV_Y.MTorqueDistributionRR,
         &ENV_Y.rSlipRatioOptimal, &ENV_Y.NTractionControlMultiplierFL,
         &ENV_Y.NTractionControlMultiplierFR,
         &ENV_Y.NTractionControlMultiplierRL,
         &ENV_Y.NTractionControlMultiplierRR, &ENV_Y.NABSMultiplierFL,
         &ENV_Y.NABSMultiplierFR, &ENV_Y.NABSMultiplierRL,
         &ENV_Y.NABSMultiplierRR, &ENV_Y.NSector1Remaining,
         &ENV_Y.NSector2Remaining, &ENV_Y.NSector3Remaining,
         &ENV_Y.NSector4Remaining, &ENV_Y.NSector5Remaining,
         &ENV_Y.NSector6Remaining, &ENV_Y.NSector7Remaining,
         &ENV_Y.NSector8Remaining, &ENV_Y.NSector9Remaining,
         &ENV_Y.NSector10Remaining, &ENV_Y.NSector11Remaining,
         &ENV_Y.NSector12Remaining, &ENV_Y.ETotalRequested,
         &ENV_Y.ESector1Remaining, &ENV_Y.ESector2Remaining,
         &ENV_Y.ESector3Remaining, &ENV_Y.MTractionControlFLTotal,
         &ENV_Y.MTractionControlFRTotal, &ENV_Y.MTractionControlRLTotal,
         &ENV_Y.MTractionControlRRTotal, &ENV_Y.ESector4Remaining,
         &ENV_Y.ESector5Remaining, &ENV_Y.ESector6Remaining,
         &ENV_Y.ESector7Remaining, &ENV_Y.ESector8Remaining,
         &ENV_Y.ESector9Remaining, &ENV_Y.ESector10Remaining,
         &ENV_Y.ESector11Remaining, &ENV_Y.ESector12Remaining, &ENV_Y.MFLFinal,
         &ENV_Y.MFRFinal, &ENV_Y.MInvRLFinal, &ENV_Y.MInvRRFinal,
         &ENV_Y.MTotalFinal, &ENV_Y.PDischargeLimited,
         &(ENV_DW.Model_InstanceData.rtb), &(ENV_DW.Model_InstanceData.rtdw));

  /* S-Function (scanpack): '<S2>/CAN Pack1' incorporates:
   *  Constant: '<Root>/Constant3'
   */
  /* S-Function (scanpack): '<S2>/CAN Pack1' */
  ENV_B.CANPack1.ID = 514U;
  ENV_B.CANPack1.Length = 8U;
  ENV_B.CANPack1.Extended = 0U;
  ENV_B.CANPack1.Remote = 0;
  ENV_B.CANPack1.Data[0] = 0;
  ENV_B.CANPack1.Data[1] = 0;
  ENV_B.CANPack1.Data[2] = 0;
  ENV_B.CANPack1.Data[3] = 0;
  ENV_B.CANPack1.Data[4] = 0;
  ENV_B.CANPack1.Data[5] = 0;
  ENV_B.CANPack1.Data[6] = 0;
  ENV_B.CANPack1.Data[7] = 0;

  {
    /* --------------- START Packing signal 0 ------------------
     *  startBit                = 60
     *  length                  = 1
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      uint32_T packingValue = 0;

      {
        uint32_T result = (uint32_T) (ENV_B.CANUnpack5_o2);

        /* no scaling required */
        packingValue = result;
      }

      {
        uint8_T packedValue;
        if (packingValue > (boolean_T)(1)) {
          packedValue = (uint8_T) 1;
        } else if (packingValue < (boolean_T)(0)) {
          packedValue = (uint8_T) 0;
        } else {
          packedValue = (uint8_T) (packingValue);
        }

        {
          {
            ENV_B.CANPack1.Data[7] = ENV_B.CANPack1.Data[7] | (uint8_T)((uint8_T)
              ((uint8_T)(packedValue & (uint8_T)0x1U) << 4));
          }
        }
      }
    }

    /* --------------- START Packing signal 1 ------------------
     *  startBit                = 63
     *  length                  = 1
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      uint32_T packingValue = 0;

      {
        uint32_T result = (uint32_T) (ENV_B.CANUnpack5_o1);

        /* no scaling required */
        packingValue = result;
      }

      {
        uint8_T packedValue;
        if (packingValue > (boolean_T)(1)) {
          packedValue = (uint8_T) 1;
        } else if (packingValue < (boolean_T)(0)) {
          packedValue = (uint8_T) 0;
        } else {
          packedValue = (uint8_T) (packingValue);
        }

        {
          {
            ENV_B.CANPack1.Data[7] = ENV_B.CANPack1.Data[7] | (uint8_T)((uint8_T)
              ((uint8_T)(packedValue & (uint8_T)0x1U) << 7));
          }
        }
      }
    }

    /* --------------- START Packing signal 2 ------------------
     *  startBit                = 62
     *  length                  = 1
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real_T outValue = 0;

      {
        real_T result = 1.0;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        uint8_T packedValue;
        if (outValue > (real_T)(1)) {
          packedValue = (uint8_T) 1;
        } else if (outValue < (real_T)(0)) {
          packedValue = (uint8_T) 0;
        } else {
          packedValue = (uint8_T) (outValue);
        }

        {
          {
            ENV_B.CANPack1.Data[7] = ENV_B.CANPack1.Data[7] | (uint8_T)((uint8_T)
              ((uint8_T)(packedValue & (uint8_T)0x1U) << 6));
          }
        }
      }
    }

    /* --------------- START Packing signal 3 ------------------
     *  startBit                = 61
     *  length                  = 1
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      uint32_T packingValue = 0;

      {
        uint32_T result = (uint32_T) (ENV_B.CANUnpack5_o3);

        /* no scaling required */
        packingValue = result;
      }

      {
        uint8_T packedValue;
        if (packingValue > (boolean_T)(1)) {
          packedValue = (uint8_T) 1;
        } else if (packingValue < (boolean_T)(0)) {
          packedValue = (uint8_T) 0;
        } else {
          packedValue = (uint8_T) (packingValue);
        }

        {
          {
            ENV_B.CANPack1.Data[7] = ENV_B.CANPack1.Data[7] | (uint8_T)((uint8_T)
              ((uint8_T)(packedValue & (uint8_T)0x1U) << 5));
          }
        }
      }
    }

    /* --------------- START Packing signal 4 ------------------
     *  startBit                = 36
     *  length                  = 13
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = SIGNED
     *  factor                  = 0.1
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real_T outValue = 0;

      {
        real_T result = 1.0;

        /* no offset to apply */
        result = result * (1 / 0.1);

        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        int16_T packedValue;
        int32_T scaledValue;
        if (outValue > 2147483647.0) {
          scaledValue = 2147483647;
        } else if (outValue < -2147483648.0) {
          scaledValue = -2147483647 - 1;
        } else {
          scaledValue = (int32_T) outValue;
        }

        if (scaledValue > (int32_T) (4095)) {
          packedValue = 4095;
        } else if (scaledValue < (int32_T)((-(4095)-1))) {
          packedValue = (-(4095)-1);
        } else {
          packedValue = (int16_T) (scaledValue);
        }

        {
          uint16_T* tempValuePtr = (uint16_T*)&packedValue;
          uint16_T tempValue = *tempValuePtr;

          {
            ENV_B.CANPack1.Data[4] = ENV_B.CANPack1.Data[4] | (uint8_T)
              ((uint16_T)((uint16_T)(tempValue & (uint16_T)0xFU) << 4));
            ENV_B.CANPack1.Data[5] = ENV_B.CANPack1.Data[5] | (uint8_T)
              ((uint16_T)((uint16_T)(tempValue & (uint16_T)0xFF0U) >> 4));
            ENV_B.CANPack1.Data[6] = ENV_B.CANPack1.Data[6] | (uint8_T)
              ((uint16_T)((uint16_T)(tempValue & (uint16_T)0x1000U) >> 12));
          }
        }
      }
    }

    /* --------------- START Packing signal 5 ------------------
     *  startBit                = 9
     *  length                  = 9
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = SIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real_T outValue = 0;

      {
        real_T result = 1.0;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        int16_T packedValue;
        int32_T scaledValue;
        if (outValue > 2147483647.0) {
          scaledValue = 2147483647;
        } else if (outValue < -2147483648.0) {
          scaledValue = -2147483647 - 1;
        } else {
          scaledValue = (int32_T) outValue;
        }

        if (scaledValue > (int32_T) (255)) {
          packedValue = 255;
        } else if (scaledValue < (int32_T)((-(255)-1))) {
          packedValue = (-(255)-1);
        } else {
          packedValue = (int16_T) (scaledValue);
        }

        {
          uint16_T* tempValuePtr = (uint16_T*)&packedValue;
          uint16_T tempValue = *tempValuePtr;

          {
            ENV_B.CANPack1.Data[1] = ENV_B.CANPack1.Data[1] | (uint8_T)
              ((uint16_T)((uint16_T)(tempValue & (uint16_T)0x7FU) << 1));
            ENV_B.CANPack1.Data[2] = ENV_B.CANPack1.Data[2] | (uint8_T)
              ((uint16_T)((uint16_T)(tempValue & (uint16_T)0x180U) >> 7));
          }
        }
      }
    }

    /* --------------- START Packing signal 6 ------------------
     *  startBit                = 0
     *  length                  = 9
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = SIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real_T outValue = 0;

      {
        real_T result = 1.0;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        int16_T packedValue;
        int32_T scaledValue;
        if (outValue > 2147483647.0) {
          scaledValue = 2147483647;
        } else if (outValue < -2147483648.0) {
          scaledValue = -2147483647 - 1;
        } else {
          scaledValue = (int32_T) outValue;
        }

        if (scaledValue > (int32_T) (255)) {
          packedValue = 255;
        } else if (scaledValue < (int32_T)((-(255)-1))) {
          packedValue = (-(255)-1);
        } else {
          packedValue = (int16_T) (scaledValue);
        }

        {
          uint16_T* tempValuePtr = (uint16_T*)&packedValue;
          uint16_T tempValue = *tempValuePtr;

          {
            ENV_B.CANPack1.Data[0] = ENV_B.CANPack1.Data[0] | (uint8_T)
              ((uint16_T)(tempValue & (uint16_T)0xFFU));
            ENV_B.CANPack1.Data[1] = ENV_B.CANPack1.Data[1] | (uint8_T)
              ((uint16_T)((uint16_T)(tempValue & (uint16_T)0x100U) >> 8));
          }
        }
      }
    }

    /* --------------- START Packing signal 7 ------------------
     *  startBit                = 18
     *  length                  = 9
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = SIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real_T outValue = 0;

      {
        real_T result = 1.0;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        int16_T packedValue;
        int32_T scaledValue;
        if (outValue > 2147483647.0) {
          scaledValue = 2147483647;
        } else if (outValue < -2147483648.0) {
          scaledValue = -2147483647 - 1;
        } else {
          scaledValue = (int32_T) outValue;
        }

        if (scaledValue > (int32_T) (255)) {
          packedValue = 255;
        } else if (scaledValue < (int32_T)((-(255)-1))) {
          packedValue = (-(255)-1);
        } else {
          packedValue = (int16_T) (scaledValue);
        }

        {
          uint16_T* tempValuePtr = (uint16_T*)&packedValue;
          uint16_T tempValue = *tempValuePtr;

          {
            ENV_B.CANPack1.Data[2] = ENV_B.CANPack1.Data[2] | (uint8_T)
              ((uint16_T)((uint16_T)(tempValue & (uint16_T)0x3FU) << 2));
            ENV_B.CANPack1.Data[3] = ENV_B.CANPack1.Data[3] | (uint8_T)
              ((uint16_T)((uint16_T)(tempValue & (uint16_T)0x1C0U) >> 6));
          }
        }
      }
    }

    /* --------------- START Packing signal 8 ------------------
     *  startBit                = 27
     *  length                  = 9
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = SIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real_T outValue = 0;

      {
        real_T result = 1.0;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        int16_T packedValue;
        int32_T scaledValue;
        if (outValue > 2147483647.0) {
          scaledValue = 2147483647;
        } else if (outValue < -2147483648.0) {
          scaledValue = -2147483647 - 1;
        } else {
          scaledValue = (int32_T) outValue;
        }

        if (scaledValue > (int32_T) (255)) {
          packedValue = 255;
        } else if (scaledValue < (int32_T)((-(255)-1))) {
          packedValue = (-(255)-1);
        } else {
          packedValue = (int16_T) (scaledValue);
        }

        {
          uint16_T* tempValuePtr = (uint16_T*)&packedValue;
          uint16_T tempValue = *tempValuePtr;

          {
            ENV_B.CANPack1.Data[3] = ENV_B.CANPack1.Data[3] | (uint8_T)
              ((uint16_T)((uint16_T)(tempValue & (uint16_T)0x1FU) << 3));
            ENV_B.CANPack1.Data[4] = ENV_B.CANPack1.Data[4] | (uint8_T)
              ((uint16_T)((uint16_T)(tempValue & (uint16_T)0x1E0U) >> 5));
          }
        }
      }
    }

    /* --------------- START Packing signal 9 ------------------
     *  startBit                = 49
     *  length                  = 11
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = SIGNED
     *  factor                  = 0.1
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real_T outValue = 0;

      {
        real_T result = 1.0;

        /* no offset to apply */
        result = result * (1 / 0.1);

        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        int16_T packedValue;
        int32_T scaledValue;
        if (outValue > 2147483647.0) {
          scaledValue = 2147483647;
        } else if (outValue < -2147483648.0) {
          scaledValue = -2147483647 - 1;
        } else {
          scaledValue = (int32_T) outValue;
        }

        if (scaledValue > (int32_T) (1023)) {
          packedValue = 1023;
        } else if (scaledValue < (int32_T)((-(1023)-1))) {
          packedValue = (-(1023)-1);
        } else {
          packedValue = (int16_T) (scaledValue);
        }

        {
          uint16_T* tempValuePtr = (uint16_T*)&packedValue;
          uint16_T tempValue = *tempValuePtr;

          {
            ENV_B.CANPack1.Data[6] = ENV_B.CANPack1.Data[6] | (uint8_T)
              ((uint16_T)((uint16_T)(tempValue & (uint16_T)0x7FU) << 1));
            ENV_B.CANPack1.Data[7] = ENV_B.CANPack1.Data[7] | (uint8_T)
              ((uint16_T)((uint16_T)(tempValue & (uint16_T)0x780U) >> 7));
          }
        }
      }
    }
  }

  /* MATLAB Function: '<S2>/MATLAB Function' incorporates:
   *  Constant: '<S2>/Offset'
   *  Constant: '<S2>/Period'
   *  Constant: '<S2>/RTS'
   *  UnitDelay: '<S8>/Unit Delay'
   */
  ENV_MATLABFunction(ENV_B.CANPack1.ID, ENV_B.CANPack1.Length,
                     ENV_B.CANPack1.Data, 129, 100, 0, ENV_DW.UnitDelay_DSTATE,
                     &rtb_VectorConcatenate[0], &rtb_VectorConcatenate[2],
                     &status, &ENV_DW.sf_MATLABFunction);

  /* Constant: '<S2>/TX Buffer 0' */
  rtb_VectorConcatenate[1] = 49U;
  ENV_SPIControllerTransfer(rtb_VectorConcatenate, &ENV_DW.SPIControllerTransfer);

  /* S-Function (scanpack): '<S2>/CAN Pack4' */
  /* S-Function (scanpack): '<S2>/CAN Pack4' */
  ENV_B.CANPack4.ID = 0U;
  ENV_B.CANPack4.Length = 8U;
  ENV_B.CANPack4.Extended = 0U;
  ENV_B.CANPack4.Remote = 0;
  ENV_B.CANPack4.Data[0] = 0;
  ENV_B.CANPack4.Data[1] = 0;
  ENV_B.CANPack4.Data[2] = 0;
  ENV_B.CANPack4.Data[3] = 0;
  ENV_B.CANPack4.Data[4] = 0;
  ENV_B.CANPack4.Data[5] = 0;
  ENV_B.CANPack4.Data[6] = 0;
  ENV_B.CANPack4.Data[7] = 0;

  {
    /* --------------- START Packing signal 0 ------------------
     *  startBit                = 0
     *  length                  = 16
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = SIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      uint32_T packingValue = 0;

      {
        uint32_T result = (uint32_T) (ENV_B.Message.ID);

        /* no scaling required */
        packingValue = result;
      }

      {
        int16_T packedValue;
        int32_T scaledValue;
        if (packingValue > 2147483647U) {
          scaledValue = 2147483647;
        } else {
          scaledValue = (int32_T) packingValue;
        }

        if (scaledValue > (int32_T) (32767)) {
          packedValue = 32767;
        } else if (scaledValue < (int32_T)((-(32767)-1))) {
          packedValue = (-(32767)-1);
        } else {
          packedValue = (int16_T) (scaledValue);
        }

        {
          uint16_T* tempValuePtr = (uint16_T*)&packedValue;
          uint16_T tempValue = *tempValuePtr;

          {
            ENV_B.CANPack4.Data[0] = ENV_B.CANPack4.Data[0] | (uint8_T)
              ((uint16_T)(tempValue & (uint16_T)0xFFU));
            ENV_B.CANPack4.Data[1] = ENV_B.CANPack4.Data[1] | (uint8_T)
              ((uint16_T)((uint16_T)(tempValue & (uint16_T)0xFF00U) >> 8));
          }
        }
      }
    }

    /* --------------- START Packing signal 1 ------------------
     *  startBit                = 16
     *  length                  = 16
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = SIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real_T outValue = 0;

      {
        real_T result = ENV_B.Length;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        int16_T packedValue;
        int32_T scaledValue;
        if (outValue > 2147483647.0) {
          scaledValue = 2147483647;
        } else if (outValue < -2147483648.0) {
          scaledValue = -2147483647 - 1;
        } else {
          scaledValue = (int32_T) outValue;
        }

        if (scaledValue > (int32_T) (32767)) {
          packedValue = 32767;
        } else if (scaledValue < (int32_T)((-(32767)-1))) {
          packedValue = (-(32767)-1);
        } else {
          packedValue = (int16_T) (scaledValue);
        }

        {
          uint16_T* tempValuePtr = (uint16_T*)&packedValue;
          uint16_T tempValue = *tempValuePtr;

          {
            ENV_B.CANPack4.Data[2] = ENV_B.CANPack4.Data[2] | (uint8_T)
              ((uint16_T)(tempValue & (uint16_T)0xFFU));
            ENV_B.CANPack4.Data[3] = ENV_B.CANPack4.Data[3] | (uint8_T)
              ((uint16_T)((uint16_T)(tempValue & (uint16_T)0xFF00U) >> 8));
          }
        }
      }
    }

    /* --------------- START Packing signal 2 ------------------
     *  startBit                = 32
     *  length                  = 16
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = SIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real_T outValue = 0;

      {
        real_T result = 0.0;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        int16_T packedValue;
        int32_T scaledValue;
        if (outValue > 2147483647.0) {
          scaledValue = 2147483647;
        } else if (outValue < -2147483648.0) {
          scaledValue = -2147483647 - 1;
        } else {
          scaledValue = (int32_T) outValue;
        }

        if (scaledValue > (int32_T) (32767)) {
          packedValue = 32767;
        } else if (scaledValue < (int32_T)((-(32767)-1))) {
          packedValue = (-(32767)-1);
        } else {
          packedValue = (int16_T) (scaledValue);
        }

        {
          uint16_T* tempValuePtr = (uint16_T*)&packedValue;
          uint16_T tempValue = *tempValuePtr;

          {
            ENV_B.CANPack4.Data[4] = ENV_B.CANPack4.Data[4] | (uint8_T)
              ((uint16_T)(tempValue & (uint16_T)0xFFU));
            ENV_B.CANPack4.Data[5] = ENV_B.CANPack4.Data[5] | (uint8_T)
              ((uint16_T)((uint16_T)(tempValue & (uint16_T)0xFF00U) >> 8));
          }
        }
      }
    }

    /* --------------- START Packing signal 3 ------------------
     *  startBit                = 48
     *  length                  = 16
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = SIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real_T outValue = 0;

      {
        real_T result = 0.0;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        int16_T packedValue;
        int32_T scaledValue;
        if (outValue > 2147483647.0) {
          scaledValue = 2147483647;
        } else if (outValue < -2147483648.0) {
          scaledValue = -2147483647 - 1;
        } else {
          scaledValue = (int32_T) outValue;
        }

        if (scaledValue > (int32_T) (32767)) {
          packedValue = 32767;
        } else if (scaledValue < (int32_T)((-(32767)-1))) {
          packedValue = (-(32767)-1);
        } else {
          packedValue = (int16_T) (scaledValue);
        }

        {
          uint16_T* tempValuePtr = (uint16_T*)&packedValue;
          uint16_T tempValue = *tempValuePtr;

          {
            ENV_B.CANPack4.Data[6] = ENV_B.CANPack4.Data[6] | (uint8_T)
              ((uint16_T)(tempValue & (uint16_T)0xFFU));
            ENV_B.CANPack4.Data[7] = ENV_B.CANPack4.Data[7] | (uint8_T)
              ((uint16_T)((uint16_T)(tempValue & (uint16_T)0xFF00U) >> 8));
          }
        }
      }
    }
  }

  /* MATLAB Function: '<S2>/MATLAB Function4' incorporates:
   *  Constant: '<S2>/Offset3'
   *  Constant: '<S2>/Period3'
   *  Constant: '<S2>/RTS3'
   *  UnitDelay: '<S8>/Unit Delay'
   */
  ENV_MATLABFunction(ENV_B.CANPack4.ID, ENV_B.CANPack4.Length,
                     ENV_B.CANPack4.Data, 129, 5, 3, ENV_DW.UnitDelay_DSTATE,
                     &rtb_VectorConcatenate3[0], &rtb_VectorConcatenate3[2],
                     &status, &ENV_DW.sf_MATLABFunction4);

  /* Constant: '<S2>/TX Buffer 3' */
  rtb_VectorConcatenate3[1] = 49U;
  ENV_SPIControllerTransfer(rtb_VectorConcatenate3,
    &ENV_DW.SPIControllerTransfer6);

  /* Outport: '<Root>/MRLFinal' incorporates:
   *  Outport: '<Root>/MInvRLFinal'
   */
  ENV_Y.MRLFinal = ENV_Y.MInvRLFinal;

  /* Outport: '<Root>/MRRFinal' incorporates:
   *  Outport: '<Root>/MInvRRFinal'
   */
  ENV_Y.MRRFinal = ENV_Y.MInvRRFinal;

  /* Outport: '<Root>/BInvErrorResetRLCAN3' incorporates:
   *  Outport: '<Root>/BInvErrorResetRL'
   */
  ENV_Y.BInvErrorResetRLCAN3 = ENV_Y.BInvErrorResetRL;

  /* Outport: '<Root>/BInvErrorResetFLCAN3' incorporates:
   *  Outport: '<Root>/BInvErrorResetFL'
   */
  ENV_Y.BInvErrorResetFLCAN3 = ENV_Y.BInvErrorResetFL;

  /* Outport: '<Root>/BInvErrorResetFRCAN3' incorporates:
   *  Outport: '<Root>/BInvErrorResetFR'
   */
  ENV_Y.BInvErrorResetFRCAN3 = ENV_Y.BInvErrorResetFR;

  /* Outport: '<Root>/BInvErrorResetRRCAN3' incorporates:
   *  Outport: '<Root>/BInvErrorResetRR'
   */
  ENV_Y.BInvErrorResetRRCAN3 = ENV_Y.BInvErrorResetRR;

  /* Outport: '<Root>/MInvFLFinal' incorporates:
   *  Outport: '<Root>/MFLFinal'
   */
  ENV_Y.MInvFLFinal = ENV_Y.MFLFinal;

  /* Outport: '<Root>/MInvFRFinal' incorporates:
   *  Outport: '<Root>/MFRFinal'
   */
  ENV_Y.MInvFRFinal = ENV_Y.MFRFinal;

  /* MATLABSystem: '<S19>/Digital Port Write' */
  portNameLoc = GPIOB;
  if (ENV_B.CANUnpack5_o1) {
    i = 32;
  } else {
    i = 0;
  }

  LL_GPIO_SetOutputPin(portNameLoc, (uint32_T)i);
  LL_GPIO_ResetOutputPin(portNameLoc, ~(uint32_T)i & 32U);

  /* End of MATLABSystem: '<S19>/Digital Port Write' */

  /* MATLABSystem: '<S17>/Digital Port Write' */
  portNameLoc = GPIOB;
  if (rtb_NOT4) {
    i = 16;
  } else {
    i = 0;
  }

  LL_GPIO_SetOutputPin(portNameLoc, (uint32_T)i);
  LL_GPIO_ResetOutputPin(portNameLoc, ~(uint32_T)i & 16U);

  /* End of MATLABSystem: '<S17>/Digital Port Write' */

  /* MATLABSystem: '<Root>/SPI Controller Transfer1' incorporates:
   *  Constant: '<Root>/RTS3'
   */
  status = MW_STM32_SPI_SetFormat(ENV_DW.obj_p.MW_SPI_HANDLE, 0U, 1792U,
    MW_SPI_MODE_2);
  if (status == 0) {
    portNameLoc = GPIOA;
    LL_GPIO_ResetOutputPin(portNameLoc, 2U);
    MW_SPI_MasterWriteRead_Databits(ENV_DW.obj_p.MW_SPI_HANDLE,
      &rtCP_RTS3_Value_l, &status, 0, 1U, 0, 1U);
    LL_GPIO_SetOutputPin(portNameLoc, 2U);
  }

  /* End of MATLABSystem: '<Root>/SPI Controller Transfer1' */

  /* Step: '<S8>/Step2' incorporates:
   *  UnitDelay: '<S8>/Unit Delay'
   */
  rtb_NOT4 = !(((ENV_M->Timing.clockTick0) * 0.001) < 1.0);
  ENV_DW.UnitDelay_DSTATE = rtb_NOT4;

  /* Outputs for Enabled SubSystem: '<S8>/MCPInit' incorporates:
   *  EnablePort: '<S22>/Enable'
   */
  /* RelationalOperator: '<S20>/FixPt Relational Operator' incorporates:
   *  Constant: '<S22>/ 000: normal mode, 0: don't abort pending transmit buffers, 0: one-shot disabled, 0: CLKOUT disabled, 00: sysclk//1 | 0000 0000 | 0x00'
   *  Constant: '<S22>/CANINTE'
   *  Constant: '<S22>/CNF1'
   *  Constant: '<S22>/CNF2'
   *  Constant: '<S22>/CNF3'
   *  Constant: '<S22>/Clear flags'
   *  Constant: '<S22>/Set acceptance filters'
   *  UnitDelay: '<S20>/Delay Input1'
   *
   * Block description for '<S20>/Delay Input1':
   *
   *  Store in Global RAM
   */
  if ((real_T)rtb_NOT4 > ENV_DW.DelayInput1_DSTATE) {
    /* MATLABSystem: '<S22>/SPI Controller Transfer' incorporates:
     *  Constant: '<S22>/Enter Configuration Mode'
     */
    status = MW_STM32_SPI_SetFormat(ENV_DW.obj.MW_SPI_HANDLE, 0U, 1792U,
      MW_SPI_MODE_2);
    if (status == 0) {
      portNameLoc = GPIOA;
      LL_GPIO_ResetOutputPin(portNameLoc, 2U);
      MW_SPI_MasterWriteRead_Databits(ENV_DW.obj.MW_SPI_HANDLE,
        &rtCP_EnterConfigurationMode_Val, &status, 0, 1U, 1, 10U);
      LL_GPIO_SetOutputPin(portNameLoc, 2U);
    }

    /* End of MATLABSystem: '<S22>/SPI Controller Transfer' */
    ENV_SPIControllerTransfer1(rtCP_CNF1_Value, &ENV_DW.SPIControllerTransfer1_p);
    ENV_SPIControllerTransfer1(rtCP_CNF2_Value, &ENV_DW.SPIControllerTransfer2);
    ENV_SPIControllerTransfer1(rtCP_CNF3_Value, &ENV_DW.SPIControllerTransfer3);
    ENV_SPIControllerTransfer5(rtCP_CANINTE_Value,
      &ENV_DW.SPIControllerTransfer5_p);
    ENV_SPIControllerTransfer1(rtCP_Setacceptancefilters_Value,
      &ENV_DW.SPIControllerTransfer6_p);
    ENV_SPIControllerTransfer5(rtCP_Clearflags_Value,
      &ENV_DW.SPIControllerTransfer7);
    ENV_SPIControllerTransfer1(rtCP_u00normalmode0dontabortpen,
      &ENV_DW.SPIControllerTransfer4);
  }

  /* End of RelationalOperator: '<S20>/FixPt Relational Operator' */
  /* End of Outputs for SubSystem: '<S8>/MCPInit' */

  /* Update for UnitDelay: '<S20>/Delay Input1'
   *
   * Block description for '<S20>/Delay Input1':
   *
   *  Store in Global RAM
   */
  ENV_DW.DelayInput1_DSTATE = rtb_NOT4;

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The resolution of this integer timer is 0.001, which is the step size
   * of the task. Size of "clockTick0" ensures timer will not overflow during the
   * application lifespan selected.
   */
  ENV_M->Timing.clockTick0++;
}

/* Model initialize function */
void ENV_initialize(void)
{
  /* Model Initialize function for ModelReference Block: '<Root>/Model' */
  MASTER_initialize(rtmGetErrorStatusPointer(ENV_M),
                    &(ENV_DW.Model_InstanceData.rtm),
                    &(ENV_DW.Model_InstanceData.rtdw));

  {
    STM32_SPI_ModuleStruct_T b;
    STM32_SPI_ModuleStruct_T b_0;
    STM32_SPI_ModuleStruct_T b_1;

    /* SystemInitialize for Enabled SubSystem: '<Root>/CAN Rx' */
    /* Start for S-Function (scanunpack): '<S1>/CAN Unpack5' */

    /*-----------S-Function Block: <S1>/CAN Unpack5 -----------------*/

    /* Start for MATLABSystem: '<S1>/SPI Controller Transfer5' */
    ENV_DW.obj_pl.matlabCodegenIsDeleted = false;
    ENV_DW.obj_pl.isInitialized = 1;
    b_0.PeripheralPtr = SPI1;
    ENV_DW.obj_pl.MW_SPI_HANDLE = SPI_STM32_Init(&b_0);
    MW_STM32_SPI_SetFormat(ENV_DW.obj_pl.MW_SPI_HANDLE, 0U, 1792U, MW_SPI_MODE_2);
    ENV_DW.obj_pl.isSetupComplete = true;

    /* End of SystemInitialize for SubSystem: '<Root>/CAN Rx' */

    /* SystemInitialize for ModelReference generated from: '<Root>/Model' incorporates:
     *  Outport: '<Root>/MRegenMax'
     *  Outport: '<Root>/PEngineBrakingEM'
     *  Outport: '<Root>/rEngineBrakingSplitEM'
     */
    MASTER_Init(&ENV_Y.MRegenMax, &ENV_Y.rEngineBrakingSplitEM,
                &ENV_Y.PEngineBrakingEM, &(ENV_DW.Model_InstanceData.rtdw));

    /* SystemInitialize for Enabled SubSystem: '<S8>/MCPInit' */
    /* Start for MATLABSystem: '<S22>/SPI Controller Transfer' */
    ENV_DW.obj.matlabCodegenIsDeleted = false;
    ENV_DW.obj.isInitialized = 1;
    b_1.PeripheralPtr = SPI1;
    ENV_DW.obj.MW_SPI_HANDLE = SPI_STM32_Init(&b_1);
    MW_STM32_SPI_SetFormat(ENV_DW.obj.MW_SPI_HANDLE, 0U, 1792U, MW_SPI_MODE_2);
    ENV_DW.obj.isSetupComplete = true;
    ENV_SPIControllerTransfer1_Init(&ENV_DW.SPIControllerTransfer1_p);
    ENV_SPIControllerTransfer1_Init(&ENV_DW.SPIControllerTransfer2);
    ENV_SPIControllerTransfer1_Init(&ENV_DW.SPIControllerTransfer3);
    ENV_SPIControllerTransfer5_Init(&ENV_DW.SPIControllerTransfer5_p);
    ENV_SPIControllerTransfer1_Init(&ENV_DW.SPIControllerTransfer6_p);
    ENV_SPIControllerTransfer5_Init(&ENV_DW.SPIControllerTransfer7);
    ENV_SPIControllerTransfer1_Init(&ENV_DW.SPIControllerTransfer4);

    /* End of SystemInitialize for SubSystem: '<S8>/MCPInit' */
    ENV_SPIControllerTransfer_Init(&ENV_DW.SPIControllerTransfer);
    ENV_SPIControllerTransfer_Init(&ENV_DW.SPIControllerTransfer6);

    /* Start for MATLABSystem: '<Root>/SPI Controller Transfer1' */
    ENV_DW.obj_p.matlabCodegenIsDeleted = false;
    ENV_DW.obj_p.isInitialized = 1;
    b.PeripheralPtr = SPI1;
    ENV_DW.obj_p.MW_SPI_HANDLE = SPI_STM32_Init(&b);
    MW_STM32_SPI_SetFormat(ENV_DW.obj_p.MW_SPI_HANDLE, 0U, 1792U, MW_SPI_MODE_2);
    ENV_DW.obj_p.isSetupComplete = true;

    /* ConstCode for Outport: '<Root>/aCamberGainRollF' */
    ENV_Y.aCamberGainRollF = ENV_B.aCamberGainRollF;

    /* ConstCode for Outport: '<Root>/aCamberGainRollR' */
    ENV_Y.aCamberGainRollR = ENV_B.aCamberGainRollR;
  }
}

/* Model terminate function */
void ENV_terminate(void)
{
  uint32_T SPIPinsLoc;

  /* Terminate for Enabled SubSystem: '<Root>/CAN Rx' */
  /* Terminate for MATLABSystem: '<S1>/SPI Controller Transfer5' */
  if (!ENV_DW.obj_pl.matlabCodegenIsDeleted) {
    ENV_DW.obj_pl.matlabCodegenIsDeleted = true;
    if ((ENV_DW.obj_pl.isInitialized == 1) && ENV_DW.obj_pl.isSetupComplete) {
      SPIPinsLoc = MW_UNDEFINED_VALUE;
      MW_SPI_Close(ENV_DW.obj_pl.MW_SPI_HANDLE, SPIPinsLoc, SPIPinsLoc,
                   SPIPinsLoc, 1U);
    }
  }

  /* End of Terminate for MATLABSystem: '<S1>/SPI Controller Transfer5' */
  /* End of Terminate for SubSystem: '<Root>/CAN Rx' */
  ENV_SPIControllerTransfer_Term(&ENV_DW.SPIControllerTransfer);
  ENV_SPIControllerTransfer_Term(&ENV_DW.SPIControllerTransfer6);

  /* Terminate for MATLABSystem: '<Root>/SPI Controller Transfer1' */
  if (!ENV_DW.obj_p.matlabCodegenIsDeleted) {
    ENV_DW.obj_p.matlabCodegenIsDeleted = true;
    if ((ENV_DW.obj_p.isInitialized == 1) && ENV_DW.obj_p.isSetupComplete) {
      SPIPinsLoc = MW_UNDEFINED_VALUE;
      MW_SPI_Close(ENV_DW.obj_p.MW_SPI_HANDLE, SPIPinsLoc, SPIPinsLoc,
                   SPIPinsLoc, 1U);
    }
  }

  /* End of Terminate for MATLABSystem: '<Root>/SPI Controller Transfer1' */

  /* Terminate for Enabled SubSystem: '<S8>/MCPInit' */
  /* Terminate for MATLABSystem: '<S22>/SPI Controller Transfer' */
  if (!ENV_DW.obj.matlabCodegenIsDeleted) {
    ENV_DW.obj.matlabCodegenIsDeleted = true;
    if ((ENV_DW.obj.isInitialized == 1) && ENV_DW.obj.isSetupComplete) {
      SPIPinsLoc = MW_UNDEFINED_VALUE;
      MW_SPI_Close(ENV_DW.obj.MW_SPI_HANDLE, SPIPinsLoc, SPIPinsLoc, SPIPinsLoc,
                   1U);
    }
  }

  /* End of Terminate for MATLABSystem: '<S22>/SPI Controller Transfer' */
  ENV_SPIControllerTransfer1_Term(&ENV_DW.SPIControllerTransfer1_p);
  ENV_SPIControllerTransfer1_Term(&ENV_DW.SPIControllerTransfer2);
  ENV_SPIControllerTransfer1_Term(&ENV_DW.SPIControllerTransfer3);
  ENV_SPIControllerTransfer5_Term(&ENV_DW.SPIControllerTransfer5_p);
  ENV_SPIControllerTransfer1_Term(&ENV_DW.SPIControllerTransfer6_p);
  ENV_SPIControllerTransfer5_Term(&ENV_DW.SPIControllerTransfer7);
  ENV_SPIControllerTransfer1_Term(&ENV_DW.SPIControllerTransfer4);

  /* End of Terminate for SubSystem: '<S8>/MCPInit' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
