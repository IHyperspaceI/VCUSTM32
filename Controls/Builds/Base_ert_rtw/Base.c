/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Base.c
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

#include "Base.h"
#include "rtwtypes.h"
#include "Base_private.h"
#include "mw_stm32_spi_ll.h"
#include "MASTER.h"

/* Block signals (default storage) */
B_Base_T Base_B;

/* Block states (default storage) */
DW_Base_T Base_DW;

/* External inputs (root inport signals with default storage) */
ExtU_Base_T Base_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Base_T Base_Y;

/* Real-time model */
static RT_MODEL_Base_T Base_M_;
RT_MODEL_Base_T *const Base_M = &Base_M_;

/*
 * Output and update for atomic system:
 *    '<S2>/MATLAB Function'
 *    '<S2>/MATLAB Function4'
 */
void Base_MATLABFunction(uint32_T rtu_ID, uint8_T rtu_Length, const uint8_T
  rtu_Data[8], uint8_T rtu_RTS, uint16_T rtu_period, uint16_T rtu_offset, real_T
  rtu_MCPInitialized, uint8_T *rty_WriteInstruction, uint8_T rty_CANVector[13],
  uint8_T *rty_RTSByte, DW_MATLABFunction_Base_T *localDW)
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
void Base_SPIControllerTransfer_Init(DW_SPIControllerTransfer_Base_T *localDW)
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
void Base_SPIControllerTransfer(const uint8_T rtu_0[15],
  DW_SPIControllerTransfer_Base_T *localDW)
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
void Base_SPIControllerTransfer_Term(DW_SPIControllerTransfer_Base_T *localDW)
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
void Bas_SPIControllerTransfer1_Init(DW_SPIControllerTransfer1_Bas_T *localDW)
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
void Base_SPIControllerTransfer1(const uint8_T rtu_0[3],
  DW_SPIControllerTransfer1_Bas_T *localDW)
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
void Bas_SPIControllerTransfer1_Term(DW_SPIControllerTransfer1_Bas_T *localDW)
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
void Bas_SPIControllerTransfer5_Init(DW_SPIControllerTransfer5_Bas_T *localDW)
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
void Base_SPIControllerTransfer5(const uint8_T rtu_0[4],
  DW_SPIControllerTransfer5_Bas_T *localDW)
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
void Bas_SPIControllerTransfer5_Term(DW_SPIControllerTransfer5_Bas_T *localDW)
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
void Base_step(void)
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
    status = MW_STM32_SPI_SetFormat(Base_DW.obj_pl.MW_SPI_HANDLE, 0U, 1792U,
      MW_SPI_MODE_2);
    if (status == 0) {
      portNameLoc = GPIOA;
      LL_GPIO_ResetOutputPin(portNameLoc, 2U);
      MW_SPI_MasterWriteRead_Databits(Base_DW.obj_pl.MW_SPI_HANDLE,
        &rtCP_ReadRXBufferstartatRXB0SID[0], &rtb_SPIControllerTransfer5_0[0], 0,
        14U, 1, 10U);
      LL_GPIO_SetOutputPin(portNameLoc, 2U);
    }

    /* MATLAB Function: '<S1>/MATLAB Function7' incorporates:
     *  MATLABSystem: '<S1>/SPI Controller Transfer5'
     */
    Base_B.Message.ID = (uint32_T)rtb_SPIControllerTransfer5_0[1] << 3 |
      (uint32_T)rtb_SPIControllerTransfer5_0[2] >> 5;
    Base_B.Message.Extended = false;
    Base_B.Message.Remote = false;
    Base_B.Message.Error = false;
    Base_B.Message.Length = rtb_SPIControllerTransfer5_0[5] & 15U;
    for (i = 0; i < 8; i++) {
      Base_B.Message.Data[i] = rtb_SPIControllerTransfer5_0[i + 6];
    }

    /* End of MATLAB Function: '<S1>/MATLAB Function7' */

    /* S-Function (scanunpack): '<S1>/CAN Unpack5' */
    {
      /* S-Function (scanunpack): '<S1>/CAN Unpack5' */
      if ((6 == Base_B.Message.Length) && (Base_B.Message.ID != INVALID_CAN_ID) )
      {
        if ((507 == Base_B.Message.ID) && (0U == Base_B.Message.Extended) ) {
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
                      (Base_B.Message.Data[0]) & (uint8_T)(0x1U));
                  }

                  unpackedValue = tempValue;
                }

                outValue = (boolean_T) (unpackedValue);
              }

              {
                boolean_T result = (boolean_T) outValue;
                Base_B.CANUnpack5_o1 = result;
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
                      (Base_B.Message.Data[0]) & (uint8_T)(0x2U)) >> 1);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (boolean_T) (unpackedValue);
              }

              {
                boolean_T result = (boolean_T) outValue;
                Base_B.CANUnpack5_o2 = result;
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
                      (Base_B.Message.Data[0]) & (uint8_T)(0x4U)) >> 2);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (boolean_T) (unpackedValue);
              }

              {
                boolean_T result = (boolean_T) outValue;
                Base_B.CANUnpack5_o3 = result;
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
                      (Base_B.Message.Data[0]) & (uint8_T)(0x8U)) >> 3);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (boolean_T) (unpackedValue);
              }

              {
                boolean_T result = (boolean_T) outValue;
                Base_B.CANUnpack5_o4 = result;
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
                      (Base_B.Message.Data[2]) & (uint8_T)(0xF0U)) >> 4);
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (Base_B.Message.Data[3]) & (uint8_T)(0xFU)) << 4);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real_T) (unpackedValue);
              }

              {
                real_T result = (real_T) outValue;
                result = result + 1.0;
                Base_B.CANUnpack5_o5 = result;
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
                      (Base_B.Message.Data[0]) & (uint8_T)(0xF0U)) >> 4);
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (Base_B.Message.Data[1]) & (uint8_T)(0xFU)) << 4);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real_T) (unpackedValue);
              }

              {
                real_T result = (real_T) outValue;
                result = result + 1.0;
                Base_B.CANUnpack5_o6 = result;
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
                      (Base_B.Message.Data[1]) & (uint8_T)(0xF0U)) >> 4);
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (Base_B.Message.Data[2]) & (uint8_T)(0xFU)) << 4);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real_T) (unpackedValue);
              }

              {
                real_T result = (real_T) outValue;
                result = result + 1.0;
                Base_B.CANUnpack5_o7 = result;
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
                      (Base_B.Message.Data[3]) & (uint8_T)(0xF0U)) >> 4);
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (Base_B.Message.Data[4]) & (uint8_T)(0xFU)) << 4);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real_T) (unpackedValue);
              }

              {
                real_T result = (real_T) outValue;
                result = result * 0.0129;
                Base_B.CANUnpack5_o8 = result;
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
                      (Base_B.Message.Data[4]) & (uint8_T)(0xF0U)) >> 4);
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (Base_B.Message.Data[5]) & (uint8_T)(0xFU)) << 4);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real_T) (unpackedValue);
              }

              {
                real_T result = (real_T) outValue;
                result = result * 0.0129;
                Base_B.CANUnpack5_o9 = result;
              }
            }
          }
        }
      }
    }

    /* SignalConversion generated from: '<S1>/Length' */
    Base_B.Length = Base_B.Message.Length;

    /* SignalConversion generated from: '<S1>/VSteeringAngle' */
    Base_B.OutportBufferForVSteeringAngle = 0.0;

    /* SignalConversion generated from: '<S1>/VThrottlePedal1' */
    Base_B.OutportBufferForVThrottlePedal1 = 0.0;

    /* SignalConversion generated from: '<S1>/VThrottlePedal2' */
    Base_B.OutportBufferForVThrottlePedal2 = 0.0;

    /* SignalConversion generated from: '<S1>/VBrakeF' */
    Base_B.OutportBufferForVBrakeF = 0.0;

    /* SignalConversion generated from: '<S1>/VBrakeR' */
    Base_B.OutportBufferForVBrakeR = 0.0;

    /* SignalConversion generated from: '<S1>/VDamperPotentiometerFR' */
    Base_B.OutportBufferForVDamperPotentio = 0.0;

    /* SignalConversion generated from: '<S1>/VDamperPotentiometerFL' */
    Base_B.OutportBufferForVDamperPotent_p = 0.0;

    /* SignalConversion generated from: '<S1>/vLateralIMU' */
    Base_B.OutportBufferForvLateralIMU = 0.0;

    /* SignalConversion generated from: '<S1>/gVerticalIMU' */
    Base_B.OutportBufferForgVerticalIMU = 0.0;

    /* SignalConversion generated from: '<S1>/vLongitudinalIMU' */
    Base_B.OutportBufferForvLongitudinalIM = 0.0;

    /* SignalConversion generated from: '<S1>/gLateralIMU' */
    Base_B.OutportBufferForgLateralIMU = 0.0;

    /* SignalConversion generated from: '<S1>/gLongitudingalIMU' */
    Base_B.OutportBufferForgLongitudingalI = 0.0;

    /* SignalConversion generated from: '<S1>/nYawRateIMU' */
    Base_B.OutportBufferFornYawRateIMU = 0.0;
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
  MASTER(&Base_U.nMotorFL, &Base_U.BInvDCOnFLIn, &Base_U.BInvErrorFL,
         &Base_U.BInvOnFLIn, &Base_U.BInvQuitDcOnFL, &Base_U.BQuitInvOnFL,
         &Base_U.BInvSysReadyFL, &Base_U.BInvWarnFL, &Base_U.MMotorMeasuredFL,
         &Base_U.NInvDTCFL, &Base_U.TMotorFL, &Base_U.VDCInvFL, &Base_U.TInvFL,
         &Base_U.nMotorFR, &Base_U.BInvDCOnFRIn, &Base_U.BInvErrorFR,
         &Base_U.BInvOnFRIn, &Base_U.BInvQuitDcOnFR, &Base_U.BQuitInvOnFR,
         &Base_U.BInvSysReadyFR, &Base_U.BInvWarnFR, &Base_U.MMotorMeasuredFR,
         &Base_U.NInvDTCFR, &Base_U.TMotorFR, &Base_U.VDCInvFR, &Base_U.TInvFR,
         &Base_U.nMotorRL, &Base_U.BInvDCOnRLIn, &Base_U.BInvErrorRL,
         &Base_U.BInvOnRLIn, &Base_U.BInvQuitDcOnRL, &Base_U.BQuitInvOnRL,
         &Base_U.BInvSysReadyRL, &Base_U.BInvWarnRL, &Base_U.MMotorMeasuredRL,
         &Base_U.NInvDTCRL, &Base_U.TMotorRL, &Base_U.VDCInvRL, &Base_U.TInvRL,
         &Base_U.nMotorRR, &Base_U.BInvDCOnRRIn, &Base_U.BInvErrorRR,
         &Base_U.BInvOnRRIn, &Base_U.BInvQuitDcOnRR, &Base_U.BQuitInvOnRR,
         &Base_U.BInvSysReadyRR, &Base_U.BInvWarnRR, &Base_U.MMotorMeasuredRR,
         &Base_U.NInvDTCRR, &Base_U.TMotorRR, &Base_U.VDCInvRR, &Base_U.TInvRR,
         &Base_B.CANUnpack5_o1, &Base_B.CANUnpack5_o2, &Base_B.CANUnpack5_o3,
         &Base_B.CANUnpack5_o4, &Base_B.CANUnpack5_o6, &Base_B.CANUnpack5_o7,
         &Base_B.CANUnpack5_o5, &Base_B.CANUnpack5_o8, &Base_B.CANUnpack5_o9,
         &rtCP_Constant2_Value, &Base_B.OutportBufferForVSteeringAngle,
         &Base_B.OutportBufferForVThrottlePedal1,
         &Base_B.OutportBufferForVThrottlePedal2,
         &Base_B.OutportBufferForVBrakeF, &Base_B.OutportBufferForVBrakeR,
         &Base_B.OutportBufferForVDamperPotentio,
         &Base_B.OutportBufferForVDamperPotent_p,
         &Base_B.OutportBufferForvLateralIMU,
         &Base_B.OutportBufferForgVerticalIMU,
         &Base_B.OutportBufferForvLongitudinalIM,
         &Base_B.OutportBufferForgLateralIMU,
         &Base_B.OutportBufferForgLongitudingalI,
         &Base_B.OutportBufferFornYawRateIMU, &Base_U.IIVTS,
         &Base_U.IBMSHallEffect, &Base_U.VDCAccumulator, &Base_U.TCellMin,
         &Base_U.VCellAverage, &Base_U.VCellMax, &Base_U.TCellMax,
         &Base_U.IBMSDCL, &Base_U.VCellMin, &Base_U.RCellAverage,
         &Base_U.BBalancingOn, &Base_U.BBMSP0A0C, &Base_U.BBMSP0A0E,
         &Base_U.BBMSP0A10, &Base_U.BBMSP0A80, &Base_U.BBMSP0AC0,
         &Base_U.BBMSP0AFA, &Base_Y.nMotorRLOut, &rtb_BInvDCOnRLIn,
         &rtb_BInvErrorRL, &rtb_BInvOnRLIn, &rtb_BInvQuitDcOnRL,
         &Base_Y.BQuitInvOnRLCAN3, &rtb_BInvSysReadyRL, &rtb_BInvWarnRL,
         &rtb_MMotorMeasuredRL, &Base_Y.NInvDTCRLOut, &Base_Y.TMotorRLOut,
         &Base_Y.VDCInvRLOut, &Base_Y.TInvRLOut, &Base_Y.nMotorFLOut,
         &rtb_BInvDCOnFLIn, &rtb_BInvErrorFL, &rtb_BInvOnFLIn,
         &rtb_BInvQuitDcOnFL, &Base_Y.BQuitInvOnFLCAN3, &rtb_BInvSysReadyFL,
         &rtb_BInvWarnFL, &rtb_MMotorMeasuredFL, &Base_Y.NInvDTCFLOut,
         &Base_Y.TMotorFLOut, &rtb_VDCInvFL, &Base_Y.TInvFLOut,
         &Base_Y.nMotorRROut, &rtb_BInvDCOnRRIn, &rtb_BInvErrorRR,
         &rtb_BInvOnRRIn, &rtb_BInvQuitDcOnRR, &Base_Y.BQuitInvOnRRCAN3,
         &rtb_BInvSysReadyRR, &rtb_BInvWarnRR, &rtb_MMotorMeasuredRR,
         &Base_Y.NInvDTCRROut, &Base_Y.TMotorRROut, &rtb_VDCInvRR,
         &Base_Y.TInvRROut, &Base_Y.nMotorFROut, &rtb_BInvDCOnFRIn,
         &rtb_BInvErrorFR, &rtb_BInvOnFRIn, &rtb_BInvQuitDcOnFR,
         &Base_Y.BQuitInvOnFRCAN3, &rtb_BInvSysReadyFR, &rtb_BInvWarnFR,
         &rtb_MMotorMeasuredFR, &Base_Y.NInvDTCFROut, &Base_Y.TMotorFROut,
         &rtb_VDCInvFR, &Base_Y.TInvFROut, &Base_Y.vWheelRL, &Base_Y.vWheelRR,
         &Base_Y.vWheelFL, &Base_Y.vWheelFR, &rtb_VDamperPotentiometerFL,
         &rtb_VDamperPotentiometerFR, &rtb_NDisplayNumberDDU7,
         &rtb_VSteeringAngle, &rtb_VThrottlePedal1, &rtb_VThrottlePedal2,
         &rtb_BSteeringWheelButton1, &rtb_BSteeringWheelButton2,
         &rtb_BSteeringWheelButton3, &rtb_BSteeringWheelButton4,
         &rtb_NPageSelectRotary, &rtb_NParameterRotary, &rtb_NEventModeRotary,
         &rtb_VRegenPaddle1, &rtb_VRegenPaddle2, &rtb_VBrakeF, &rtb_VBrakeR,
         &rtb_vLateralIMU, &rtb_gVerticalIMU, &rtb_vLongitudinalIMU,
         &rtb_gLateralIMU, &rtb_gLongitudinalIMU, &rtb_nYawRateIMU,
         &Base_Y.VCellMaxOut, &rtb_VCellDelta, &Base_Y.VCellMinOut,
         &rtb_VCellAverage, &Base_Y.TCellMaxOut, &rtb_IBMSDLC,
         &Base_Y.TCellMinOut, &Base_Y.IBMSHallEffectOut,
         &Base_Y.VDCAccumulatorOut, &rtb_RCellAverage, &Base_Y.BBalancingOnOut,
         &Base_Y.BBMSP0A0COut, &Base_Y.BBMSP0A0EOut, &Base_Y.BBMSP0A10Out,
         &Base_Y.BBMSP0A80Out, &Base_Y.BBMSP0AC0Out, &Base_Y.BBMSP0AFAOut,
         &Base_Y.IIVTSOut, &Base_Y.rThrottlePedal1, &Base_Y.rThrottlePedal,
         &Base_Y.BThrottleError_g, &Base_Y.tThrottleError, &Base_Y.pBrakeF,
         &Base_Y.pBrakeR, &Base_Y.BBrakeError_i, &Base_Y.tBrakeError,
         &Base_Y.BBrakeOn, &Base_Y.pBrakeMax, &Base_Y.BBrakeLight_e,
         &Base_Y.BPedalOverlap_m, &Base_Y.tPedalOverlap, &Base_Y.BAppsOK_h,
         &Base_Y.tAppsTimer, &rtb_rSteeringAngle, &Base_Y.aSteeringAngle,
         &Base_Y.rRegenPaddle_d, &Base_Y.BRegenOn, &Base_Y.xDamperFL,
         &Base_Y.xDamperFR, &Base_Y.xDamperRL, &Base_Y.xDamperRR,
         &Base_Y.BxDamperFLOk, &Base_Y.BxDamperFROk, &Base_Y.BxDamperRLOk,
         &Base_Y.BxDamperRROk, &Base_Y.BInverterErrorRear,
         &Base_Y.BInverterErrorFront, &Base_Y.BIMUOk_l, &Base_Y.BIMUError,
         &Base_Y.vChassis_c, &Base_Y.sChassis, &Base_Y.BPageUp,
         &Base_Y.BPageDown, &Base_Y.BInvLVOn, &Base_Y.BCalibrationOn,
         &Base_B.BReadyToDriveButton, &Base_Y.BErrorReset, &Base_Y.BTVOn,
         &Base_Y.BTCOn, &Base_Y.BDrivetrainCoolingOn_o, &Base_Y.BEMSOn,
         &Base_Y.BSpinningModeOn, &Base_Y.NThrottleMap, &Base_Y.PDischargeMax,
         &Base_Y.rTorqueSplit, &Base_Y.PRegenMax, &Base_Y.rTVMultiplier,
         &Base_Y.PEngineBraking, &Base_Y.rEngineBrakingSplit, &Base_Y.BDataMark,
         &Base_Y.rGrip, &Base_Y.EOffset, &Base_Y.NTCKdSelector,
         &Base_Y.MRegenMax, &Base_Y.NEventMode, &Base_Y.NPCKpSelector,
         &Base_Y.TMotorMax, &Base_Y.TInvMax, &Base_Y.BAccuFanOn,
         &Base_Y.BMotorRBHFanOn, &Base_Y.BInverterFanOn, &Base_Y.BPCComplete_d,
         &Base_Y.PActual_o, &Base_Y.rSOC_p, &Base_Y.rSOE, &Base_Y.PEnergyMeter_a,
         &Base_Y.BOverpower, &Base_Y.tIMUError, &Base_Y.BTVOnEM, &Base_Y.BTCOnEM,
         &Base_Y.BDrivetrainCoolingOnEM, &Base_Y.BEMSOnEM,
         &Base_Y.BSpinningModeOnEM, &Base_Y.rTVMultiplierEM,
         &Base_Y.rEngineBrakingSplitEM, &Base_Y.NThrottleMapEM,
         &Base_Y.PDischargeMaxEM, &Base_Y.rTorqueSplitEM, &Base_Y.PRegenMaxEM,
         &Base_Y.PEngineBrakingEM, &Base_Y.BTVOnOW, &Base_Y.BTCOnOW,
         &Base_Y.BDrivetrainCoolingOnOW, &Base_Y.BEMSOnOW,
         &Base_Y.BSpinningModeOnOW, &Base_Y.rTVMultiplierOW,
         &Base_Y.rEngineBrakingSplitOW, &Base_Y.NThrottleMapOW,
         &Base_Y.PDischargeMaxOW, &Base_Y.rTorqueSplitOW, &Base_Y.PRegenMaxOW,
         &Base_Y.PEngineBrakingOW, &rtb_MMotorMaxFL, &rtb_MMotorMaxFR,
         &rtb_MMotorMaxRL, &rtb_MMotorMaxRR, &Base_Y.NCarState_m,
         &Base_Y.BReadyToDriveBuzzer, &Base_Y.BReadyToDrive, &Base_Y.NBMSState_h,
         &Base_Y.NInvState_e, &Base_B.BHVOn, &Base_Y.BInvOnRLOut,
         &Base_Y.BInvOnRROut, &Base_Y.BInvOnFLOut, &Base_Y.BInvOnFROut,
         &Base_Y.BInvDCOnRLOut, &Base_Y.BInvDCOnRROut, &Base_Y.BInvDCOnFLOut,
         &Base_Y.BInvDCOnFROut, &Base_Y.BInvEnableRL, &Base_Y.BInvEnableRR,
         &Base_Y.BInvEnableFL, &Base_Y.BInvEnableFR, &Base_Y.BInvErrorResetRL,
         &Base_Y.BInvErrorResetRR, &Base_Y.BInvErrorResetFL,
         &Base_Y.BInvErrorResetFR, &Base_B.MTargetTorqueRL,
         &Base_B.MTargetTorqueRR, &Base_B.MTargetTorqueFL,
         &Base_B.MTargetTorqueFR, &Base_Y.MTorqueLimitNegativeRL,
         &Base_Y.MTorqueLimitNegativeRR, &Base_Y.MTorqueLimitNegativeFL,
         &Base_Y.MTorqueLimitNegativeFR, &Base_Y.MTorqueLimitPositiveRL,
         &Base_Y.MTorqueLimitPositiveRR, &Base_Y.MTorqueLimitPositiveFL,
         &Base_Y.MTorqueLimitPositiveFR, &Base_Y.BDischargeAllowed,
         &Base_Y.PInvTemperatureDerate_i, &Base_Y.PInvTemperatureDerateFR,
         &Base_Y.PInvTemperatureDerateFL, &Base_Y.PInvTemperatureDerateRR,
         &Base_Y.PInvTemperatureDerateRL, &Base_Y.PMotorTemperatureDerate_a,
         &Base_Y.PMotorTemperatureDerateFR, &Base_Y.PMotorTemperatureDerateFL,
         &Base_Y.PMotorTemperatureDerateRR, &Base_Y.PMotorTemperatureDerateRL,
         &Base_Y.PTSTemperatureDerateFR, &Base_Y.PTSTemperatureDerateFL,
         &Base_Y.PTSTemperatureDerateRR, &Base_Y.PTSTemperatureDerateRL,
         &Base_Y.PHighCellTemperatureDerate_j,
         &Base_Y.PLowCellVoltageDischargeDerate,
         &Base_Y.PHighCellVoltageRegenDerate, &Base_Y.PSOCDischargeDerate,
         &Base_Y.PSOCRegenDerate, &Base_Y.rSpeedRegenDerateRR,
         &Base_Y.rSpeedRegenDerateRL, &Base_Y.rSpeedRegenDerateFR,
         &Base_Y.rSpeedRegenDerateFL, &Base_Y.BSpeedDerateOn,
         &Base_Y.PDischargeDerate_i, &Base_Y.PRegenDerate_j,
         &Base_Y.MDriverDischargeRequested_e, &Base_Y.PRegenRequested,
         &Base_Y.MDriverRegenRequested_k, &Base_Y.PDischargeLimit,
         &Base_Y.PPCIntegralTermDischarge, &Base_Y.PPCProportionalTermDischarge,
         &Base_Y.MPCDischargeRequested, &Base_Y.PRegenLimit,
         &Base_Y.PPCIntegralTermRegen, &Base_Y.PPCProportionalTermRegen,
         &Base_Y.MPCRegenRequested, &Base_Y.PPCDischargeRequested,
         &Base_Y.PPCRegenRequested, &Base_Y.MDischargeLimited,
         &Base_Y.MRegenLimited, &Base_Y.MTotalRequested_f,
         &Base_Y.BEMSDriverSignal1, &Base_Y.BEMSDriverSignal2,
         &Base_Y.BEMSDriverSignal3, &Base_Y.NLap, &Base_Y.NSectorGlobal,
         &Base_Y.NSectorLap, &Base_Y.ESector, &Base_Y.ERemaining,
         &Base_Y.EBudget, &Base_Y.sSector, &Base_Y.rSlipRatioFLActual,
         &Base_Y.rSlipRatioFRActual, &Base_Y.rSlipRatioRLActual,
         &Base_Y.rSlipRatioRRActual, &Base_Y.FLongitudinalLoadTransfer,
         &Base_Y.FTyreVerticalFL, &Base_Y.FTyreVerticalFR,
         &Base_Y.FTyreVerticalRL, &Base_Y.FTyreVerticalRR, &Base_Y.aSlipAngleFL,
         &Base_Y.aSlipAngleFR, &Base_Y.aSlipAngleRL, &Base_Y.aSlipAngleRR,
         &Base_Y.aCamberFL, &Base_Y.aCamberFR, &Base_Y.aCamberRL,
         &Base_Y.aCamberRR, &Base_Y.FTotalLateralLoadTransfer,
         &rtb_FLateralLoadTransferF, &rtb_FLateralLoadTransferR,
         &Base_Y.FTotalDownforce, &rtb_FDownforceF, &rtb_FDownforceR,
         &Base_Y.aCamberGainSteerFL, &Base_Y.aCamberGainSteerFR,
         &Base_Y.xHeaveTravelF, &Base_Y.xHeaveTravelR, &Base_Y.aCamberGainHeaveF,
         &Base_Y.aCamberGainHeaveR, &Base_Y.aRollAngle,
         &Base_Y.nYawRateErrorActual, &Base_Y.BTVOK, &Base_Y.MTorqueVectoringFL,
         &Base_Y.MTorqueVectoringFR, &Base_Y.MTorqueVectoringRL,
         &Base_Y.MTorqueVectoringRR, &Base_Y.rSplitRear,
         &Base_Y.MTorqueDistributionFL, &Base_Y.MTorqueDistributionFR,
         &Base_Y.MTorqueDistributionRL, &Base_Y.MTorqueDistributionRR,
         &Base_Y.rSlipRatioOptimal, &Base_Y.NTractionControlMultiplierFL,
         &Base_Y.NTractionControlMultiplierFR,
         &Base_Y.NTractionControlMultiplierRL,
         &Base_Y.NTractionControlMultiplierRR, &Base_Y.NABSMultiplierFL,
         &Base_Y.NABSMultiplierFR, &Base_Y.NABSMultiplierRL,
         &Base_Y.NABSMultiplierRR, &Base_Y.NSector1Remaining,
         &Base_Y.NSector2Remaining, &Base_Y.NSector3Remaining,
         &Base_Y.NSector4Remaining, &Base_Y.NSector5Remaining,
         &Base_Y.NSector6Remaining, &Base_Y.NSector7Remaining,
         &Base_Y.NSector8Remaining, &Base_Y.NSector9Remaining,
         &Base_Y.NSector10Remaining, &Base_Y.NSector11Remaining,
         &Base_Y.NSector12Remaining, &Base_Y.ETotalRequested,
         &Base_Y.ESector1Remaining, &Base_Y.ESector2Remaining,
         &Base_Y.ESector3Remaining, &Base_Y.MTractionControlFLTotal,
         &Base_Y.MTractionControlFRTotal, &Base_Y.MTractionControlRLTotal,
         &Base_Y.MTractionControlRRTotal, &Base_Y.ESector4Remaining,
         &Base_Y.ESector5Remaining, &Base_Y.ESector6Remaining,
         &Base_Y.ESector7Remaining, &Base_Y.ESector8Remaining,
         &Base_Y.ESector9Remaining, &Base_Y.ESector10Remaining,
         &Base_Y.ESector11Remaining, &Base_Y.ESector12Remaining,
         &Base_Y.MFLFinal, &Base_Y.MFRFinal, &Base_Y.MInvRLFinal,
         &Base_Y.MInvRRFinal, &Base_Y.MTotalFinal, &Base_Y.PDischargeLimited,
         &(Base_DW.Model_InstanceData.rtb), &(Base_DW.Model_InstanceData.rtdw));

  /* S-Function (scanpack): '<S2>/CAN Pack1' incorporates:
   *  Constant: '<Root>/Constant3'
   */
  /* S-Function (scanpack): '<S2>/CAN Pack1' */
  Base_B.CANPack1.ID = 514U;
  Base_B.CANPack1.Length = 8U;
  Base_B.CANPack1.Extended = 0U;
  Base_B.CANPack1.Remote = 0;
  Base_B.CANPack1.Data[0] = 0;
  Base_B.CANPack1.Data[1] = 0;
  Base_B.CANPack1.Data[2] = 0;
  Base_B.CANPack1.Data[3] = 0;
  Base_B.CANPack1.Data[4] = 0;
  Base_B.CANPack1.Data[5] = 0;
  Base_B.CANPack1.Data[6] = 0;
  Base_B.CANPack1.Data[7] = 0;

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
        uint32_T result = (uint32_T) (Base_B.CANUnpack5_o2);

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
            Base_B.CANPack1.Data[7] = Base_B.CANPack1.Data[7] | (uint8_T)
              ((uint8_T)((uint8_T)(packedValue & (uint8_T)0x1U) << 4));
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
        uint32_T result = (uint32_T) (Base_B.CANUnpack5_o1);

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
            Base_B.CANPack1.Data[7] = Base_B.CANPack1.Data[7] | (uint8_T)
              ((uint8_T)((uint8_T)(packedValue & (uint8_T)0x1U) << 7));
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
            Base_B.CANPack1.Data[7] = Base_B.CANPack1.Data[7] | (uint8_T)
              ((uint8_T)((uint8_T)(packedValue & (uint8_T)0x1U) << 6));
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
        uint32_T result = (uint32_T) (Base_B.CANUnpack5_o3);

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
            Base_B.CANPack1.Data[7] = Base_B.CANPack1.Data[7] | (uint8_T)
              ((uint8_T)((uint8_T)(packedValue & (uint8_T)0x1U) << 5));
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
            Base_B.CANPack1.Data[4] = Base_B.CANPack1.Data[4] | (uint8_T)
              ((uint16_T)((uint16_T)(tempValue & (uint16_T)0xFU) << 4));
            Base_B.CANPack1.Data[5] = Base_B.CANPack1.Data[5] | (uint8_T)
              ((uint16_T)((uint16_T)(tempValue & (uint16_T)0xFF0U) >> 4));
            Base_B.CANPack1.Data[6] = Base_B.CANPack1.Data[6] | (uint8_T)
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
            Base_B.CANPack1.Data[1] = Base_B.CANPack1.Data[1] | (uint8_T)
              ((uint16_T)((uint16_T)(tempValue & (uint16_T)0x7FU) << 1));
            Base_B.CANPack1.Data[2] = Base_B.CANPack1.Data[2] | (uint8_T)
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
            Base_B.CANPack1.Data[0] = Base_B.CANPack1.Data[0] | (uint8_T)
              ((uint16_T)(tempValue & (uint16_T)0xFFU));
            Base_B.CANPack1.Data[1] = Base_B.CANPack1.Data[1] | (uint8_T)
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
            Base_B.CANPack1.Data[2] = Base_B.CANPack1.Data[2] | (uint8_T)
              ((uint16_T)((uint16_T)(tempValue & (uint16_T)0x3FU) << 2));
            Base_B.CANPack1.Data[3] = Base_B.CANPack1.Data[3] | (uint8_T)
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
            Base_B.CANPack1.Data[3] = Base_B.CANPack1.Data[3] | (uint8_T)
              ((uint16_T)((uint16_T)(tempValue & (uint16_T)0x1FU) << 3));
            Base_B.CANPack1.Data[4] = Base_B.CANPack1.Data[4] | (uint8_T)
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
            Base_B.CANPack1.Data[6] = Base_B.CANPack1.Data[6] | (uint8_T)
              ((uint16_T)((uint16_T)(tempValue & (uint16_T)0x7FU) << 1));
            Base_B.CANPack1.Data[7] = Base_B.CANPack1.Data[7] | (uint8_T)
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
  Base_MATLABFunction(Base_B.CANPack1.ID, Base_B.CANPack1.Length,
                      Base_B.CANPack1.Data, 129, 100, 0,
                      Base_DW.UnitDelay_DSTATE, &rtb_VectorConcatenate[0],
                      &rtb_VectorConcatenate[2], &status,
                      &Base_DW.sf_MATLABFunction);

  /* Constant: '<S2>/TX Buffer 0' */
  rtb_VectorConcatenate[1] = 49U;
  Base_SPIControllerTransfer(rtb_VectorConcatenate,
    &Base_DW.SPIControllerTransfer);

  /* S-Function (scanpack): '<S2>/CAN Pack4' */
  /* S-Function (scanpack): '<S2>/CAN Pack4' */
  Base_B.CANPack4.ID = 0U;
  Base_B.CANPack4.Length = 8U;
  Base_B.CANPack4.Extended = 0U;
  Base_B.CANPack4.Remote = 0;
  Base_B.CANPack4.Data[0] = 0;
  Base_B.CANPack4.Data[1] = 0;
  Base_B.CANPack4.Data[2] = 0;
  Base_B.CANPack4.Data[3] = 0;
  Base_B.CANPack4.Data[4] = 0;
  Base_B.CANPack4.Data[5] = 0;
  Base_B.CANPack4.Data[6] = 0;
  Base_B.CANPack4.Data[7] = 0;

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
        uint32_T result = (uint32_T) (Base_B.Message.ID);

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
            Base_B.CANPack4.Data[0] = Base_B.CANPack4.Data[0] | (uint8_T)
              ((uint16_T)(tempValue & (uint16_T)0xFFU));
            Base_B.CANPack4.Data[1] = Base_B.CANPack4.Data[1] | (uint8_T)
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
        real_T result = Base_B.Length;

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
            Base_B.CANPack4.Data[2] = Base_B.CANPack4.Data[2] | (uint8_T)
              ((uint16_T)(tempValue & (uint16_T)0xFFU));
            Base_B.CANPack4.Data[3] = Base_B.CANPack4.Data[3] | (uint8_T)
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
            Base_B.CANPack4.Data[4] = Base_B.CANPack4.Data[4] | (uint8_T)
              ((uint16_T)(tempValue & (uint16_T)0xFFU));
            Base_B.CANPack4.Data[5] = Base_B.CANPack4.Data[5] | (uint8_T)
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
            Base_B.CANPack4.Data[6] = Base_B.CANPack4.Data[6] | (uint8_T)
              ((uint16_T)(tempValue & (uint16_T)0xFFU));
            Base_B.CANPack4.Data[7] = Base_B.CANPack4.Data[7] | (uint8_T)
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
  Base_MATLABFunction(Base_B.CANPack4.ID, Base_B.CANPack4.Length,
                      Base_B.CANPack4.Data, 129, 5, 3, Base_DW.UnitDelay_DSTATE,
                      &rtb_VectorConcatenate3[0], &rtb_VectorConcatenate3[2],
                      &status, &Base_DW.sf_MATLABFunction4);

  /* Constant: '<S2>/TX Buffer 3' */
  rtb_VectorConcatenate3[1] = 49U;
  Base_SPIControllerTransfer(rtb_VectorConcatenate3,
    &Base_DW.SPIControllerTransfer6);

  /* Outport: '<Root>/MRLFinal' incorporates:
   *  Outport: '<Root>/MInvRLFinal'
   */
  Base_Y.MRLFinal = Base_Y.MInvRLFinal;

  /* Outport: '<Root>/MRRFinal' incorporates:
   *  Outport: '<Root>/MInvRRFinal'
   */
  Base_Y.MRRFinal = Base_Y.MInvRRFinal;

  /* Outport: '<Root>/BInvErrorResetRLCAN3' incorporates:
   *  Outport: '<Root>/BInvErrorResetRL'
   */
  Base_Y.BInvErrorResetRLCAN3 = Base_Y.BInvErrorResetRL;

  /* Outport: '<Root>/BInvErrorResetFLCAN3' incorporates:
   *  Outport: '<Root>/BInvErrorResetFL'
   */
  Base_Y.BInvErrorResetFLCAN3 = Base_Y.BInvErrorResetFL;

  /* Outport: '<Root>/BInvErrorResetFRCAN3' incorporates:
   *  Outport: '<Root>/BInvErrorResetFR'
   */
  Base_Y.BInvErrorResetFRCAN3 = Base_Y.BInvErrorResetFR;

  /* Outport: '<Root>/BInvErrorResetRRCAN3' incorporates:
   *  Outport: '<Root>/BInvErrorResetRR'
   */
  Base_Y.BInvErrorResetRRCAN3 = Base_Y.BInvErrorResetRR;

  /* Outport: '<Root>/MInvFLFinal' incorporates:
   *  Outport: '<Root>/MFLFinal'
   */
  Base_Y.MInvFLFinal = Base_Y.MFLFinal;

  /* Outport: '<Root>/MInvFRFinal' incorporates:
   *  Outport: '<Root>/MFRFinal'
   */
  Base_Y.MInvFRFinal = Base_Y.MFRFinal;

  /* MATLABSystem: '<S19>/Digital Port Write' */
  portNameLoc = GPIOB;
  if (Base_B.CANUnpack5_o1) {
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
  status = MW_STM32_SPI_SetFormat(Base_DW.obj_p.MW_SPI_HANDLE, 0U, 1792U,
    MW_SPI_MODE_2);
  if (status == 0) {
    portNameLoc = GPIOA;
    LL_GPIO_ResetOutputPin(portNameLoc, 2U);
    MW_SPI_MasterWriteRead_Databits(Base_DW.obj_p.MW_SPI_HANDLE,
      &rtCP_RTS3_Value_l, &status, 0, 1U, 0, 1U);
    LL_GPIO_SetOutputPin(portNameLoc, 2U);
  }

  /* End of MATLABSystem: '<Root>/SPI Controller Transfer1' */

  /* Step: '<S8>/Step2' incorporates:
   *  UnitDelay: '<S8>/Unit Delay'
   */
  rtb_NOT4 = !(((Base_M->Timing.clockTick0) * 0.001) < 1.0);
  Base_DW.UnitDelay_DSTATE = rtb_NOT4;

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
  if ((real_T)rtb_NOT4 > Base_DW.DelayInput1_DSTATE) {
    /* MATLABSystem: '<S22>/SPI Controller Transfer' incorporates:
     *  Constant: '<S22>/Enter Configuration Mode'
     */
    status = MW_STM32_SPI_SetFormat(Base_DW.obj.MW_SPI_HANDLE, 0U, 1792U,
      MW_SPI_MODE_2);
    if (status == 0) {
      portNameLoc = GPIOA;
      LL_GPIO_ResetOutputPin(portNameLoc, 2U);
      MW_SPI_MasterWriteRead_Databits(Base_DW.obj.MW_SPI_HANDLE,
        &rtCP_EnterConfigurationMode_Val, &status, 0, 1U, 1, 10U);
      LL_GPIO_SetOutputPin(portNameLoc, 2U);
    }

    /* End of MATLABSystem: '<S22>/SPI Controller Transfer' */
    Base_SPIControllerTransfer1(rtCP_CNF1_Value,
      &Base_DW.SPIControllerTransfer1_p);
    Base_SPIControllerTransfer1(rtCP_CNF2_Value, &Base_DW.SPIControllerTransfer2);
    Base_SPIControllerTransfer1(rtCP_CNF3_Value, &Base_DW.SPIControllerTransfer3);
    Base_SPIControllerTransfer5(rtCP_CANINTE_Value,
      &Base_DW.SPIControllerTransfer5_p);
    Base_SPIControllerTransfer1(rtCP_Setacceptancefilters_Value,
      &Base_DW.SPIControllerTransfer6_p);
    Base_SPIControllerTransfer5(rtCP_Clearflags_Value,
      &Base_DW.SPIControllerTransfer7);
    Base_SPIControllerTransfer1(rtCP_u00normalmode0dontabortpen,
      &Base_DW.SPIControllerTransfer4);
  }

  /* End of RelationalOperator: '<S20>/FixPt Relational Operator' */
  /* End of Outputs for SubSystem: '<S8>/MCPInit' */

  /* Update for UnitDelay: '<S20>/Delay Input1'
   *
   * Block description for '<S20>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Base_DW.DelayInput1_DSTATE = rtb_NOT4;

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The resolution of this integer timer is 0.001, which is the step size
   * of the task. Size of "clockTick0" ensures timer will not overflow during the
   * application lifespan selected.
   */
  Base_M->Timing.clockTick0++;
}

/* Model initialize function */
void Base_initialize(void)
{
  /* Model Initialize function for ModelReference Block: '<Root>/Model' */
  MASTER_initialize(rtmGetErrorStatusPointer(Base_M),
                    &(Base_DW.Model_InstanceData.rtm),
                    &(Base_DW.Model_InstanceData.rtdw));

  {
    STM32_SPI_ModuleStruct_T b;
    STM32_SPI_ModuleStruct_T b_0;
    STM32_SPI_ModuleStruct_T b_1;

    /* SystemInitialize for Enabled SubSystem: '<Root>/CAN Rx' */
    /* Start for S-Function (scanunpack): '<S1>/CAN Unpack5' */

    /*-----------S-Function Block: <S1>/CAN Unpack5 -----------------*/

    /* Start for MATLABSystem: '<S1>/SPI Controller Transfer5' */
    Base_DW.obj_pl.matlabCodegenIsDeleted = false;
    Base_DW.obj_pl.isInitialized = 1;
    b_0.PeripheralPtr = SPI1;
    Base_DW.obj_pl.MW_SPI_HANDLE = SPI_STM32_Init(&b_0);
    MW_STM32_SPI_SetFormat(Base_DW.obj_pl.MW_SPI_HANDLE, 0U, 1792U,
      MW_SPI_MODE_2);
    Base_DW.obj_pl.isSetupComplete = true;

    /* End of SystemInitialize for SubSystem: '<Root>/CAN Rx' */

    /* SystemInitialize for ModelReference generated from: '<Root>/Model' incorporates:
     *  Outport: '<Root>/MRegenMax'
     *  Outport: '<Root>/PEngineBrakingEM'
     *  Outport: '<Root>/rEngineBrakingSplitEM'
     */
    MASTER_Init(&Base_Y.MRegenMax, &Base_Y.rEngineBrakingSplitEM,
                &Base_Y.PEngineBrakingEM, &(Base_DW.Model_InstanceData.rtdw));

    /* SystemInitialize for Enabled SubSystem: '<S8>/MCPInit' */
    /* Start for MATLABSystem: '<S22>/SPI Controller Transfer' */
    Base_DW.obj.matlabCodegenIsDeleted = false;
    Base_DW.obj.isInitialized = 1;
    b_1.PeripheralPtr = SPI1;
    Base_DW.obj.MW_SPI_HANDLE = SPI_STM32_Init(&b_1);
    MW_STM32_SPI_SetFormat(Base_DW.obj.MW_SPI_HANDLE, 0U, 1792U, MW_SPI_MODE_2);
    Base_DW.obj.isSetupComplete = true;
    Bas_SPIControllerTransfer1_Init(&Base_DW.SPIControllerTransfer1_p);
    Bas_SPIControllerTransfer1_Init(&Base_DW.SPIControllerTransfer2);
    Bas_SPIControllerTransfer1_Init(&Base_DW.SPIControllerTransfer3);
    Bas_SPIControllerTransfer5_Init(&Base_DW.SPIControllerTransfer5_p);
    Bas_SPIControllerTransfer1_Init(&Base_DW.SPIControllerTransfer6_p);
    Bas_SPIControllerTransfer5_Init(&Base_DW.SPIControllerTransfer7);
    Bas_SPIControllerTransfer1_Init(&Base_DW.SPIControllerTransfer4);

    /* End of SystemInitialize for SubSystem: '<S8>/MCPInit' */
    Base_SPIControllerTransfer_Init(&Base_DW.SPIControllerTransfer);
    Base_SPIControllerTransfer_Init(&Base_DW.SPIControllerTransfer6);

    /* Start for MATLABSystem: '<Root>/SPI Controller Transfer1' */
    Base_DW.obj_p.matlabCodegenIsDeleted = false;
    Base_DW.obj_p.isInitialized = 1;
    b.PeripheralPtr = SPI1;
    Base_DW.obj_p.MW_SPI_HANDLE = SPI_STM32_Init(&b);
    MW_STM32_SPI_SetFormat(Base_DW.obj_p.MW_SPI_HANDLE, 0U, 1792U, MW_SPI_MODE_2);
    Base_DW.obj_p.isSetupComplete = true;

    /* ConstCode for Outport: '<Root>/aCamberGainRollF' */
    Base_Y.aCamberGainRollF = Base_B.aCamberGainRollF;

    /* ConstCode for Outport: '<Root>/aCamberGainRollR' */
    Base_Y.aCamberGainRollR = Base_B.aCamberGainRollR;
  }
}

/* Model terminate function */
void Base_terminate(void)
{
  uint32_T SPIPinsLoc;

  /* Terminate for Enabled SubSystem: '<Root>/CAN Rx' */
  /* Terminate for MATLABSystem: '<S1>/SPI Controller Transfer5' */
  if (!Base_DW.obj_pl.matlabCodegenIsDeleted) {
    Base_DW.obj_pl.matlabCodegenIsDeleted = true;
    if ((Base_DW.obj_pl.isInitialized == 1) && Base_DW.obj_pl.isSetupComplete) {
      SPIPinsLoc = MW_UNDEFINED_VALUE;
      MW_SPI_Close(Base_DW.obj_pl.MW_SPI_HANDLE, SPIPinsLoc, SPIPinsLoc,
                   SPIPinsLoc, 1U);
    }
  }

  /* End of Terminate for MATLABSystem: '<S1>/SPI Controller Transfer5' */
  /* End of Terminate for SubSystem: '<Root>/CAN Rx' */
  Base_SPIControllerTransfer_Term(&Base_DW.SPIControllerTransfer);
  Base_SPIControllerTransfer_Term(&Base_DW.SPIControllerTransfer6);

  /* Terminate for MATLABSystem: '<Root>/SPI Controller Transfer1' */
  if (!Base_DW.obj_p.matlabCodegenIsDeleted) {
    Base_DW.obj_p.matlabCodegenIsDeleted = true;
    if ((Base_DW.obj_p.isInitialized == 1) && Base_DW.obj_p.isSetupComplete) {
      SPIPinsLoc = MW_UNDEFINED_VALUE;
      MW_SPI_Close(Base_DW.obj_p.MW_SPI_HANDLE, SPIPinsLoc, SPIPinsLoc,
                   SPIPinsLoc, 1U);
    }
  }

  /* End of Terminate for MATLABSystem: '<Root>/SPI Controller Transfer1' */

  /* Terminate for Enabled SubSystem: '<S8>/MCPInit' */
  /* Terminate for MATLABSystem: '<S22>/SPI Controller Transfer' */
  if (!Base_DW.obj.matlabCodegenIsDeleted) {
    Base_DW.obj.matlabCodegenIsDeleted = true;
    if ((Base_DW.obj.isInitialized == 1) && Base_DW.obj.isSetupComplete) {
      SPIPinsLoc = MW_UNDEFINED_VALUE;
      MW_SPI_Close(Base_DW.obj.MW_SPI_HANDLE, SPIPinsLoc, SPIPinsLoc, SPIPinsLoc,
                   1U);
    }
  }

  /* End of Terminate for MATLABSystem: '<S22>/SPI Controller Transfer' */
  Bas_SPIControllerTransfer1_Term(&Base_DW.SPIControllerTransfer1_p);
  Bas_SPIControllerTransfer1_Term(&Base_DW.SPIControllerTransfer2);
  Bas_SPIControllerTransfer1_Term(&Base_DW.SPIControllerTransfer3);
  Bas_SPIControllerTransfer5_Term(&Base_DW.SPIControllerTransfer5_p);
  Bas_SPIControllerTransfer1_Term(&Base_DW.SPIControllerTransfer6_p);
  Bas_SPIControllerTransfer5_Term(&Base_DW.SPIControllerTransfer7);
  Bas_SPIControllerTransfer1_Term(&Base_DW.SPIControllerTransfer4);

  /* End of Terminate for SubSystem: '<S8>/MCPInit' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
