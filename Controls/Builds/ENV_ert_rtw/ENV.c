/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: ENV.c
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

#include "ENV.h"
#include "rtwtypes.h"
#include "ENV_private.h"
#include "mw_stm32_spi_ll.h"

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

/* System initialize for atomic system: */
void ENV_SPIControllerTransfer1_Init(DW_SPIControllerTransfer1_ENV_T *localDW)
{
  STM32_SPI_ModuleStruct_T b;

  /* Start for MATLABSystem: '<S25>/SPI Controller Transfer1' */
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

  /* MATLABSystem: '<S25>/SPI Controller Transfer1' */
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

  /* End of MATLABSystem: '<S25>/SPI Controller Transfer1' */
}

/* Termination for atomic system: */
void ENV_SPIControllerTransfer1_Term(DW_SPIControllerTransfer1_ENV_T *localDW)
{
  /* Terminate for MATLABSystem: '<S25>/SPI Controller Transfer1' */
  if (!localDW->obj.matlabCodegenIsDeleted) {
    localDW->obj.matlabCodegenIsDeleted = true;
    if ((localDW->obj.isInitialized == 1) && localDW->obj.isSetupComplete) {
      uint32_T SPIPinsLoc;
      SPIPinsLoc = MW_UNDEFINED_VALUE;
      MW_SPI_Close(localDW->obj.MW_SPI_HANDLE, SPIPinsLoc, SPIPinsLoc,
                   SPIPinsLoc, 1U);
    }
  }

  /* End of Terminate for MATLABSystem: '<S25>/SPI Controller Transfer1' */
}

/* System initialize for atomic system: */
void ENV_SPIControllerTransfer5_Init(DW_SPIControllerTransfer5_ENV_T *localDW)
{
  STM32_SPI_ModuleStruct_T b;

  /* Start for MATLABSystem: '<S25>/SPI Controller Transfer5' */
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

  /* MATLABSystem: '<S25>/SPI Controller Transfer5' */
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

  /* End of MATLABSystem: '<S25>/SPI Controller Transfer5' */
}

/* Termination for atomic system: */
void ENV_SPIControllerTransfer5_Term(DW_SPIControllerTransfer5_ENV_T *localDW)
{
  /* Terminate for MATLABSystem: '<S25>/SPI Controller Transfer5' */
  if (!localDW->obj.matlabCodegenIsDeleted) {
    localDW->obj.matlabCodegenIsDeleted = true;
    if ((localDW->obj.isInitialized == 1) && localDW->obj.isSetupComplete) {
      uint32_T SPIPinsLoc;
      SPIPinsLoc = MW_UNDEFINED_VALUE;
      MW_SPI_Close(localDW->obj.MW_SPI_HANDLE, SPIPinsLoc, SPIPinsLoc,
                   SPIPinsLoc, 1U);
    }
  }

  /* End of Terminate for MATLABSystem: '<S25>/SPI Controller Transfer5' */
}

/* Model step function */
void ENV_step(void)
{
  GPIO_TypeDef * portNameLoc;
  int32_T i;
  uint32_T pinReadLoc;
  uint8_T rtb_SPIControllerTransfer_c_0[15];
  uint8_T rtb_VectorConcatenate3[15];
  uint8_T rtb_RTSByte;
  uint8_T status;
  boolean_T rtb_NOT1;

  /* MATLABSystem: '<S18>/Digital Port Read' */
  pinReadLoc = LL_GPIO_ReadInputPort(GPIOA);

  /* Logic: '<Root>/NOT1' incorporates:
   *  MATLABSystem: '<S18>/Digital Port Read'
   * */
  rtb_NOT1 = ((pinReadLoc & 4U) == 0U);

  /* Outputs for Enabled SubSystem: '<Root>/CAN Rx1' incorporates:
   *  EnablePort: '<S1>/Enable'
   */
  if (rtb_NOT1) {
    /* MATLABSystem: '<S1>/SPI Controller Transfer' incorporates:
     *  Constant: '<S1>/Read RX Buffer start at RXB0SIDH'
     */
    status = MW_STM32_SPI_SetFormat(ENV_DW.obj_p.MW_SPI_HANDLE, 0U, 1792U,
      MW_SPI_MODE_2);
    if (status == 0) {
      portNameLoc = GPIOA;
      LL_GPIO_ResetOutputPin(portNameLoc, 2U);
      MW_SPI_MasterWriteRead_Databits(ENV_DW.obj_p.MW_SPI_HANDLE,
        &ENV_ConstP.ReadRXBufferstartatRXB0SIDH_Val[0],
        &rtb_SPIControllerTransfer_c_0[0], 0, 15U, 1, 10U);
      LL_GPIO_SetOutputPin(portNameLoc, 2U);
    }

    /* MATLAB Function: '<S1>/MATLAB Function' incorporates:
     *  MATLABSystem: '<S1>/SPI Controller Transfer'
     */
    ENV_B.Message.ID = (uint32_T)rtb_SPIControllerTransfer_c_0[2] << 3 |
      (uint32_T)rtb_SPIControllerTransfer_c_0[3] >> 5;
    ENV_B.Message.Extended = false;
    ENV_B.Message.Remote = false;
    ENV_B.Message.Error = false;
    ENV_B.Message.Length = rtb_SPIControllerTransfer_c_0[6] & 15U;
    for (i = 0; i < 8; i++) {
      ENV_B.Message.Data[i] = rtb_SPIControllerTransfer_c_0[i + 7];
    }

    /* End of MATLAB Function: '<S1>/MATLAB Function' */

    /* S-Function (scanunpack): '<S1>/CAN Unpack' */
    {
      /* S-Function (scanunpack): '<S1>/CAN Unpack' */
      if ((8 == ENV_B.Message.Length) && (ENV_B.Message.ID != INVALID_CAN_ID) )
      {
        if ((5 == ENV_B.Message.ID) && (0U == ENV_B.Message.Extended) ) {
          {
            /* --------------- START Unpacking signal 0 ------------------
             *  startBit                = 0
             *  length                  = 16
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 5.04E-5
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real_T outValue = 0;

              {
                uint16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);

                  {
                    tempValue = tempValue | (uint16_T)(ENV_B.Message.Data[0]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                      (ENV_B.Message.Data[1]) << 8);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real_T) (unpackedValue);
              }

              {
                real_T result = (real_T) outValue;
                result = result * 5.04E-5;
                ENV_B.CANUnpack_o1 = result;
              }
            }

            /* --------------- START Unpacking signal 1 ------------------
             *  startBit                = 16
             *  length                  = 16
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 5.04E-5
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real_T outValue = 0;

              {
                uint16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);

                  {
                    tempValue = tempValue | (uint16_T)(ENV_B.Message.Data[2]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                      (ENV_B.Message.Data[3]) << 8);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real_T) (unpackedValue);
              }

              {
                real_T result = (real_T) outValue;
                result = result * 5.04E-5;
                ENV_B.CANUnpack_o2 = result;
              }
            }

            /* --------------- START Unpacking signal 2 ------------------
             *  startBit                = 32
             *  length                  = 16
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 5.04E-5
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real_T outValue = 0;

              {
                uint16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);

                  {
                    tempValue = tempValue | (uint16_T)(ENV_B.Message.Data[4]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                      (ENV_B.Message.Data[5]) << 8);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real_T) (unpackedValue);
              }

              {
                real_T result = (real_T) outValue;
                result = result * 5.04E-5;
                ENV_B.CANUnpack_o3 = result;
              }
            }

            /* --------------- START Unpacking signal 3 ------------------
             *  startBit                = 48
             *  length                  = 16
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 5.04E-5
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real_T outValue = 0;

              {
                uint16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);

                  {
                    tempValue = tempValue | (uint16_T)(ENV_B.Message.Data[6]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                      (ENV_B.Message.Data[7]) << 8);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real_T) (unpackedValue);
              }

              {
                real_T result = (real_T) outValue;
                result = result * 5.04E-5;
                ENV_B.CANUnpack_o4 = result;
              }
            }
          }
        }
      }
    }

    /* DataTypeConversion: '<S1>/Data Type Conversion' */
    ENV_B.DataTypeConversion_d = (ENV_B.CANUnpack_o1 != 0.0);

    /* SignalConversion generated from: '<S1>/Length' */
    ENV_B.Length = ENV_B.Message.Length;
  }

  /* End of Outputs for SubSystem: '<Root>/CAN Rx1' */

  /* DataTypeConversion: '<Root>/Data Type Conversion' */
  ENV_B.DataTypeConversion = ENV_B.Message.ID;

  /* UnitDelay: '<S6>/Output' */
  ENV_B.Output = ENV_DW.Output_DSTATE;

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
      real_T outValue = 0;

      {
        real_T result = ENV_B.DataTypeConversion;

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
      uint32_T packingValue = 0;

      {
        uint32_T result = (uint32_T) (ENV_B.DataTypeConversion_d);

        /* no scaling required */
        packingValue = result;
      }

      {
        int16_T packedValue;
        int32_T scaledValue;
        scaledValue = (int32_T) packingValue;
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
      uint32_T packingValue = 0;

      {
        uint32_T result = (uint32_T) (ENV_B.Output);

        /* no scaling required */
        packingValue = result;
      }

      {
        int16_T packedValue;
        int32_T scaledValue;
        scaledValue = (int32_T) packingValue;
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
   *  UnitDelay: '<S10>/Unit Delay'
   */
  if (ENV_DW.UnitDelay_DSTATE != 0.0) {
    if (ENV_DW.count == 3) {
      pinReadLoc = ENV_B.CANPack4.ID;
      if (ENV_B.CANPack4.ID > 65535U) {
        pinReadLoc = 65535U;
      }

      for (i = 0; i < 13; i++) {
        rtb_VectorConcatenate3[i + 2] = 0U;
      }

      i = (uint16_T)pinReadLoc >> 3;
      if (i > 255) {
        i = 255;
      }

      rtb_VectorConcatenate3[2] = (uint8_T)i;
      rtb_VectorConcatenate3[3] = (uint8_T)((int32_T)((uint16_T)pinReadLoc & 7U)
        << 5);
      rtb_VectorConcatenate3[4] = 0U;
      rtb_VectorConcatenate3[5] = 0U;
      rtb_VectorConcatenate3[6] = (uint8_T)(ENV_B.CANPack4.Length & 15);
      for (i = 0; i < 8; i++) {
        rtb_VectorConcatenate3[i + 7] = ENV_B.CANPack4.Data[i];
      }

      rtb_RTSByte = 129U;
      rtb_VectorConcatenate3[0] = 2U;
    } else {
      for (i = 0; i < 13; i++) {
        rtb_VectorConcatenate3[i + 2] = 0U;
      }

      rtb_RTSByte = 129U;
      rtb_VectorConcatenate3[0] = 3U;
    }

    pinReadLoc = ENV_DW.count + 1U;
    if (ENV_DW.count + 1U > 65535U) {
      pinReadLoc = 65535U;
    }

    ENV_DW.count = (uint16_T)pinReadLoc;
    if (ENV_DW.count >= 500) {
      ENV_DW.count = 0U;
    }
  } else {
    for (i = 0; i < 13; i++) {
      rtb_VectorConcatenate3[i + 2] = 0U;
    }

    rtb_RTSByte = 3U;
    rtb_VectorConcatenate3[0] = 3U;
  }

  /* End of MATLAB Function: '<S2>/MATLAB Function4' */

  /* Constant: '<S2>/TX Buffer 3' */
  rtb_VectorConcatenate3[1] = 49U;

  /* MATLABSystem: '<S2>/SPI Controller Transfer6' incorporates:
   *  Concatenate: '<S2>/Vector Concatenate3'
   */
  status = MW_STM32_SPI_SetFormat(ENV_DW.obj_h.MW_SPI_HANDLE, 0U, 1792U,
    MW_SPI_MODE_2);
  if (status == 0) {
    portNameLoc = GPIOA;
    LL_GPIO_ResetOutputPin(portNameLoc, 2U);
    MW_SPI_MasterWriteRead_Databits(ENV_DW.obj_h.MW_SPI_HANDLE,
      &rtb_VectorConcatenate3[0], &rtb_SPIControllerTransfer_c_0[0], 0, 15U, 0,
      1U);
    LL_GPIO_SetOutputPin(portNameLoc, 2U);
  }

  /* End of MATLABSystem: '<S2>/SPI Controller Transfer6' */

  /* MATLABSystem: '<S2>/SPI Controller Transfer7' */
  status = MW_STM32_SPI_SetFormat(ENV_DW.obj_n.MW_SPI_HANDLE, 0U, 1792U,
    MW_SPI_MODE_2);
  if (status == 0) {
    portNameLoc = GPIOA;
    LL_GPIO_ResetOutputPin(portNameLoc, 2U);
    MW_SPI_MasterWriteRead_Databits(ENV_DW.obj_n.MW_SPI_HANDLE, &rtb_RTSByte,
      &status, 0, 1U, 0, 1U);
    LL_GPIO_SetOutputPin(portNameLoc, 2U);
  }

  /* End of MATLABSystem: '<S2>/SPI Controller Transfer7' */

  /* Switch: '<S16>/FixPt Switch' incorporates:
   *  Constant: '<S15>/FixPt Constant'
   *  Constant: '<S16>/Constant'
   *  Sum: '<S15>/FixPt Sum1'
   *  UnitDelay: '<S6>/Output'
   */
  if ((uint16_T)(ENV_B.Output + 1) > 10000) {
    ENV_DW.Output_DSTATE = 0U;
  } else {
    ENV_DW.Output_DSTATE = (uint16_T)(ENV_B.Output + 1);
  }

  /* End of Switch: '<S16>/FixPt Switch' */

  /* MATLABSystem: '<S22>/Digital Port Write' incorporates:
   *  Constant: '<S4>/Constant'
   *  RelationalOperator: '<S4>/Compare'
   */
  portNameLoc = GPIOB;
  if (ENV_B.DataTypeConversion == 5.0) {
    i = 32;
  } else {
    i = 0;
  }

  LL_GPIO_SetOutputPin(portNameLoc, (uint32_T)i);
  LL_GPIO_ResetOutputPin(portNameLoc, ~(uint32_T)i & 32U);

  /* End of MATLABSystem: '<S22>/Digital Port Write' */

  /* MATLABSystem: '<S20>/Digital Port Write' */
  portNameLoc = GPIOB;
  if (rtb_NOT1) {
    i = 16;
  } else {
    i = 0;
  }

  LL_GPIO_SetOutputPin(portNameLoc, (uint32_T)i);
  LL_GPIO_ResetOutputPin(portNameLoc, ~(uint32_T)i & 16U);

  /* End of MATLABSystem: '<S20>/Digital Port Write' */

  /* Step: '<S10>/Step2' incorporates:
   *  UnitDelay: '<S10>/Unit Delay'
   */
  rtb_NOT1 = !(((ENV_M->Timing.clockTick0) * 0.001) < 1.0);
  ENV_DW.UnitDelay_DSTATE = rtb_NOT1;

  /* Outputs for Enabled SubSystem: '<S10>/MCPInit1' incorporates:
   *  EnablePort: '<S25>/Enable'
   */
  /* RelationalOperator: '<S23>/FixPt Relational Operator' incorporates:
   *  Constant: '<S25>/ 000: normal mode, 0: don't abort pending transmit buffers, 0: one-shot disabled, 0: CLKOUT disabled, 00: sysclk//1 | 0000 0000 | 0x00'
   *  Constant: '<S25>/CANINTE'
   *  Constant: '<S25>/CNF1'
   *  Constant: '<S25>/CNF2'
   *  Constant: '<S25>/CNF3'
   *  Constant: '<S25>/Clear flags'
   *  Constant: '<S25>/Set acceptance filters'
   *  UnitDelay: '<S23>/Delay Input1'
   *
   * Block description for '<S23>/Delay Input1':
   *
   *  Store in Global RAM
   */
  if ((real_T)rtb_NOT1 > ENV_DW.DelayInput1_DSTATE) {
    /* MATLABSystem: '<S25>/SPI Controller Transfer' incorporates:
     *  Constant: '<S25>/Enter Configuration Mode'
     */
    status = MW_STM32_SPI_SetFormat(ENV_DW.obj.MW_SPI_HANDLE, 0U, 1792U,
      MW_SPI_MODE_2);
    if (status == 0) {
      portNameLoc = GPIOA;
      LL_GPIO_ResetOutputPin(portNameLoc, 2U);
      MW_SPI_MasterWriteRead_Databits(ENV_DW.obj.MW_SPI_HANDLE,
        &ENV_ConstP.EnterConfigurationMode_Value, &status, 0, 1U, 1, 10U);
      LL_GPIO_SetOutputPin(portNameLoc, 2U);
    }

    /* End of MATLABSystem: '<S25>/SPI Controller Transfer' */
    ENV_SPIControllerTransfer1(ENV_ConstP.CNF1_Value,
      &ENV_DW.SPIControllerTransfer1);
    ENV_SPIControllerTransfer1(ENV_ConstP.CNF2_Value,
      &ENV_DW.SPIControllerTransfer2);
    ENV_SPIControllerTransfer1(ENV_ConstP.CNF3_Value,
      &ENV_DW.SPIControllerTransfer3);
    ENV_SPIControllerTransfer5(ENV_ConstP.CANINTE_Value,
      &ENV_DW.SPIControllerTransfer5);
    ENV_SPIControllerTransfer1(ENV_ConstP.Setacceptancefilters_Value,
      &ENV_DW.SPIControllerTransfer6_p);
    ENV_SPIControllerTransfer5(ENV_ConstP.Clearflags_Value,
      &ENV_DW.SPIControllerTransfer7_p);
    ENV_SPIControllerTransfer1(ENV_ConstP.u00normalmode0dontabortpendingt,
      &ENV_DW.SPIControllerTransfer4);
  }

  /* End of RelationalOperator: '<S23>/FixPt Relational Operator' */
  /* End of Outputs for SubSystem: '<S10>/MCPInit1' */

  /* Update for UnitDelay: '<S23>/Delay Input1'
   *
   * Block description for '<S23>/Delay Input1':
   *
   *  Store in Global RAM
   */
  ENV_DW.DelayInput1_DSTATE = rtb_NOT1;

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
  {
    STM32_SPI_ModuleStruct_T b;
    STM32_SPI_ModuleStruct_T b_0;
    STM32_SPI_ModuleStruct_T b_1;
    STM32_SPI_ModuleStruct_T b_2;

    /* SystemInitialize for Enabled SubSystem: '<Root>/CAN Rx1' */
    /* Start for S-Function (scanunpack): '<S1>/CAN Unpack' */

    /*-----------S-Function Block: <S1>/CAN Unpack -----------------*/

    /* Start for MATLABSystem: '<S1>/SPI Controller Transfer' */
    ENV_DW.obj_p.matlabCodegenIsDeleted = false;
    ENV_DW.obj_p.isInitialized = 1;
    b_2.PeripheralPtr = SPI1;
    ENV_DW.obj_p.MW_SPI_HANDLE = SPI_STM32_Init(&b_2);
    MW_STM32_SPI_SetFormat(ENV_DW.obj_p.MW_SPI_HANDLE, 0U, 1792U, MW_SPI_MODE_2);
    ENV_DW.obj_p.isSetupComplete = true;

    /* End of SystemInitialize for SubSystem: '<Root>/CAN Rx1' */

    /* SystemInitialize for Enabled SubSystem: '<S10>/MCPInit1' */
    /* Start for MATLABSystem: '<S25>/SPI Controller Transfer' */
    ENV_DW.obj.matlabCodegenIsDeleted = false;
    ENV_DW.obj.isInitialized = 1;
    b.PeripheralPtr = SPI1;
    ENV_DW.obj.MW_SPI_HANDLE = SPI_STM32_Init(&b);
    MW_STM32_SPI_SetFormat(ENV_DW.obj.MW_SPI_HANDLE, 0U, 1792U, MW_SPI_MODE_2);
    ENV_DW.obj.isSetupComplete = true;
    ENV_SPIControllerTransfer1_Init(&ENV_DW.SPIControllerTransfer1);
    ENV_SPIControllerTransfer1_Init(&ENV_DW.SPIControllerTransfer2);
    ENV_SPIControllerTransfer1_Init(&ENV_DW.SPIControllerTransfer3);
    ENV_SPIControllerTransfer5_Init(&ENV_DW.SPIControllerTransfer5);
    ENV_SPIControllerTransfer1_Init(&ENV_DW.SPIControllerTransfer6_p);
    ENV_SPIControllerTransfer5_Init(&ENV_DW.SPIControllerTransfer7_p);
    ENV_SPIControllerTransfer1_Init(&ENV_DW.SPIControllerTransfer4);

    /* End of SystemInitialize for SubSystem: '<S10>/MCPInit1' */

    /* Start for MATLABSystem: '<S2>/SPI Controller Transfer6' */
    ENV_DW.obj_h.matlabCodegenIsDeleted = false;
    ENV_DW.obj_h.isInitialized = 1;
    b_0.PeripheralPtr = SPI1;
    ENV_DW.obj_h.MW_SPI_HANDLE = SPI_STM32_Init(&b_0);
    MW_STM32_SPI_SetFormat(ENV_DW.obj_h.MW_SPI_HANDLE, 0U, 1792U, MW_SPI_MODE_2);
    ENV_DW.obj_h.isSetupComplete = true;

    /* Start for MATLABSystem: '<S2>/SPI Controller Transfer7' */
    ENV_DW.obj_n.matlabCodegenIsDeleted = false;
    ENV_DW.obj_n.isInitialized = 1;
    b_1.PeripheralPtr = SPI1;
    ENV_DW.obj_n.MW_SPI_HANDLE = SPI_STM32_Init(&b_1);
    MW_STM32_SPI_SetFormat(ENV_DW.obj_n.MW_SPI_HANDLE, 0U, 1792U, MW_SPI_MODE_2);
    ENV_DW.obj_n.isSetupComplete = true;

    /* ConstCode for Outport: '<Root>/MTotalFinal' */
    ENV_Y.MTotalFinal = 0.0;

    /* ConstCode for Outport: '<Root>/PActual' */
    ENV_Y.PActual = 0.0;

    /* ConstCode for Outport: '<Root>/rSpeedRegenDerateRR' */
    ENV_Y.rSpeedRegenDerateRR = 0.0;

    /* ConstCode for Outport: '<Root>/PDischargeMax' */
    ENV_Y.PDischargeMax = 0.0;

    /* ConstCode for Outport: '<Root>/rThrottlePedal' */
    ENV_Y.rThrottlePedal = 0.0;

    /* ConstCode for Outport: '<Root>/rThrottlePedal1' */
    ENV_Y.rThrottlePedal1 = 0.0;

    /* ConstCode for Outport: '<Root>/aSteeringAngle' */
    ENV_Y.aSteeringAngle = 0.0;

    /* ConstCode for Outport: '<Root>/pBrakeF' */
    ENV_Y.pBrakeF = 0.0;

    /* ConstCode for Outport: '<Root>/pBrakeR' */
    ENV_Y.pBrakeR = 0.0;

    /* ConstCode for Outport: '<Root>/BBMSP0A80Out' */
    ENV_Y.BBMSP0A80Out = 0.0;

    /* ConstCode for Outport: '<Root>/BBMSP0AC0Out' */
    ENV_Y.BBMSP0AC0Out = 0.0;

    /* ConstCode for Outport: '<Root>/BBMSP0AFAOut' */
    ENV_Y.BBMSP0AFAOut = 0.0;

    /* ConstCode for Outport: '<Root>/BBMSP0A0COut' */
    ENV_Y.BBMSP0A0COut = 0.0;

    /* ConstCode for Outport: '<Root>/BBMSP0A0EOut' */
    ENV_Y.BBMSP0A0EOut = 0.0;

    /* ConstCode for Outport: '<Root>/BBMSP0A10Out' */
    ENV_Y.BBMSP0A10Out = 0.0;

    /* ConstCode for Outport: '<Root>/BTVOK' */
    ENV_Y.BTVOK = 0.0;

    /* ConstCode for Outport: '<Root>/NInvDTCRROut' */
    ENV_Y.NInvDTCRROut = 0.0;

    /* ConstCode for Outport: '<Root>/NInvDTCRLOut' */
    ENV_Y.NInvDTCRLOut = 0.0;

    /* ConstCode for Outport: '<Root>/NInvDTCFROut' */
    ENV_Y.NInvDTCFROut = 0.0;

    /* ConstCode for Outport: '<Root>/NInvDTCFLOut' */
    ENV_Y.NInvDTCFLOut = 0.0;

    /* ConstCode for Outport: '<Root>/IIVTSOut' */
    ENV_Y.IIVTSOut = 0.0;

    /* ConstCode for Outport: '<Root>/MFRFinal' */
    ENV_Y.MFRFinal = 0.0;

    /* ConstCode for Outport: '<Root>/MFLFinal' */
    ENV_Y.MFLFinal = 0.0;

    /* ConstCode for Outport: '<Root>/MRLFinal' */
    ENV_Y.MRLFinal = 0.0;

    /* ConstCode for Outport: '<Root>/MRRFinal' */
    ENV_Y.MRRFinal = 0.0;

    /* ConstCode for Outport: '<Root>/rRegenPaddle' */
    ENV_Y.rRegenPaddle = 0.0;

    /* ConstCode for Outport: '<Root>/vChassis' */
    ENV_Y.vChassis = 0.0;

    /* ConstCode for Outport: '<Root>/pBrakeMax' */
    ENV_Y.pBrakeMax = 0.0;

    /* ConstCode for Outport: '<Root>/vWheelRL' */
    ENV_Y.vWheelRL = 0.0;

    /* ConstCode for Outport: '<Root>/vWheelRR' */
    ENV_Y.vWheelRR = 0.0;

    /* ConstCode for Outport: '<Root>/vWheelFL' */
    ENV_Y.vWheelFL = 0.0;

    /* ConstCode for Outport: '<Root>/vWheelFR' */
    ENV_Y.vWheelFR = 0.0;

    /* ConstCode for Outport: '<Root>/BThrottleError' */
    ENV_Y.BThrottleError = 0.0;

    /* ConstCode for Outport: '<Root>/tThrottleError' */
    ENV_Y.tThrottleError = 0.0;

    /* ConstCode for Outport: '<Root>/BBrakeError' */
    ENV_Y.BBrakeError = 0.0;

    /* ConstCode for Outport: '<Root>/tBrakeError' */
    ENV_Y.tBrakeError = 0.0;

    /* ConstCode for Outport: '<Root>/BBrakeOn' */
    ENV_Y.BBrakeOn = 0.0;

    /* ConstCode for Outport: '<Root>/BPedalOverlap' */
    ENV_Y.BPedalOverlap = 0.0;

    /* ConstCode for Outport: '<Root>/BAppsOK' */
    ENV_Y.BAppsOK = 0.0;

    /* ConstCode for Outport: '<Root>/BRegenOn' */
    ENV_Y.BRegenOn = 0.0;

    /* ConstCode for Outport: '<Root>/BTVOn' */
    ENV_Y.BTVOn = 0.0;

    /* ConstCode for Outport: '<Root>/rSOE' */
    ENV_Y.rSOE = 0.0;

    /* ConstCode for Outport: '<Root>/sChassis' */
    ENV_Y.sChassis = 0.0;

    /* ConstCode for Outport: '<Root>/rSOC' */
    ENV_Y.rSOC = 0.0;

    /* ConstCode for Outport: '<Root>/rTVMultiplier' */
    ENV_Y.rTVMultiplier = 0.0;

    /* ConstCode for Outport: '<Root>/PEngineBraking' */
    ENV_Y.PEngineBraking = 0.0;

    /* ConstCode for Outport: '<Root>/NInvState' */
    ENV_Y.NInvState = 0.0;

    /* ConstCode for Outport: '<Root>/rGrip' */
    ENV_Y.rGrip = 0.0;

    /* ConstCode for Outport: '<Root>/rSlipRatioFRActual' */
    ENV_Y.rSlipRatioFRActual = 0.0;

    /* ConstCode for Outport: '<Root>/rSlipRatioRLActual' */
    ENV_Y.rSlipRatioRLActual = 0.0;

    /* ConstCode for Outport: '<Root>/rSlipRatioRRActual' */
    ENV_Y.rSlipRatioRRActual = 0.0;

    /* ConstCode for Outport: '<Root>/NTractionControlMultiplierRR' */
    ENV_Y.NTractionControlMultiplierRR = 0.0;

    /* ConstCode for Outport: '<Root>/NABSMultiplierRR' */
    ENV_Y.NABSMultiplierRR = 0.0;

    /* ConstCode for Outport: '<Root>/NTractionControlMultiplierRL' */
    ENV_Y.NTractionControlMultiplierRL = 0.0;

    /* ConstCode for Outport: '<Root>/NABSMultiplierRL' */
    ENV_Y.NABSMultiplierRL = 0.0;

    /* ConstCode for Outport: '<Root>/NThrottleMap' */
    ENV_Y.NThrottleMap = 0.0;

    /* ConstCode for Outport: '<Root>/BReadyToDrive' */
    ENV_Y.BReadyToDrive = 0.0;

    /* ConstCode for Outport: '<Root>/NABSMultiplierFL' */
    ENV_Y.NABSMultiplierFL = 0.0;

    /* ConstCode for Outport: '<Root>/NABSMultiplierFR' */
    ENV_Y.NABSMultiplierFR = 0.0;

    /* ConstCode for Outport: '<Root>/BBalancingOnOut' */
    ENV_Y.BBalancingOnOut = 0.0;

    /* ConstCode for Outport: '<Root>/MTorqueVectoringFL' */
    ENV_Y.MTorqueVectoringFL = 0.0;

    /* ConstCode for Outport: '<Root>/MTorqueVectoringFR' */
    ENV_Y.MTorqueVectoringFR = 0.0;

    /* ConstCode for Outport: '<Root>/MTorqueVectoringRL' */
    ENV_Y.MTorqueVectoringRL = 0.0;

    /* ConstCode for Outport: '<Root>/MTorqueVectoringRR' */
    ENV_Y.MTorqueVectoringRR = 0.0;

    /* ConstCode for Outport: '<Root>/NTractionControlMultiplierFL' */
    ENV_Y.NTractionControlMultiplierFL = 0.0;

    /* ConstCode for Outport: '<Root>/NTractionControlMultiplierFR' */
    ENV_Y.NTractionControlMultiplierFR = 0.0;

    /* ConstCode for Outport: '<Root>/MDischargeLimited' */
    ENV_Y.MDischargeLimited = 0.0;

    /* ConstCode for Outport: '<Root>/MDriverRegenRequested' */
    ENV_Y.MDriverRegenRequested = 0.0;

    /* ConstCode for Outport: '<Root>/rSlipRatioOptimal' */
    ENV_Y.rSlipRatioOptimal = 0.0;

    /* ConstCode for Outport: '<Root>/NCarState' */
    ENV_Y.NCarState = 0.0;

    /* ConstCode for Outport: '<Root>/MTorqueDistributionFL' */
    ENV_Y.MTorqueDistributionFL = 0.0;

    /* ConstCode for Outport: '<Root>/MTorqueDistributionFR' */
    ENV_Y.MTorqueDistributionFR = 0.0;

    /* ConstCode for Outport: '<Root>/MTorqueDistributionRL' */
    ENV_Y.MTorqueDistributionRL = 0.0;

    /* ConstCode for Outport: '<Root>/MTorqueDistributionRR' */
    ENV_Y.MTorqueDistributionRR = 0.0;

    /* ConstCode for Outport: '<Root>/nMotorRLOut' */
    ENV_Y.nMotorRLOut = 0.0;

    /* ConstCode for Outport: '<Root>/nMotorFLOut' */
    ENV_Y.nMotorFLOut = 0.0;

    /* ConstCode for Outport: '<Root>/nMotorRROut' */
    ENV_Y.nMotorRROut = 0.0;

    /* ConstCode for Outport: '<Root>/nMotorFROut' */
    ENV_Y.nMotorFROut = 0.0;

    /* ConstCode for Outport: '<Root>/BDischargeAllowed' */
    ENV_Y.BDischargeAllowed = 0.0;

    /* ConstCode for Outport: '<Root>/TMotorRLOut' */
    ENV_Y.TMotorRLOut = 0.0;

    /* ConstCode for Outport: '<Root>/TInvRLOut' */
    ENV_Y.TInvRLOut = 0.0;

    /* ConstCode for Outport: '<Root>/TMotorFLOut' */
    ENV_Y.TMotorFLOut = 0.0;

    /* ConstCode for Outport: '<Root>/TInvFLOut' */
    ENV_Y.TInvFLOut = 0.0;

    /* ConstCode for Outport: '<Root>/TMotorRROut' */
    ENV_Y.TMotorRROut = 0.0;

    /* ConstCode for Outport: '<Root>/TInvRROut' */
    ENV_Y.TInvRROut = 0.0;

    /* ConstCode for Outport: '<Root>/TMotorFROut' */
    ENV_Y.TMotorFROut = 0.0;

    /* ConstCode for Outport: '<Root>/TInvFROut' */
    ENV_Y.TInvFROut = 0.0;

    /* ConstCode for Outport: '<Root>/TInvMax' */
    ENV_Y.TInvMax = 0.0;

    /* ConstCode for Outport: '<Root>/TMotorMax' */
    ENV_Y.TMotorMax = 0.0;

    /* ConstCode for Outport: '<Root>/TCellMaxOut' */
    ENV_Y.TCellMaxOut = 0.0;

    /* ConstCode for Outport: '<Root>/IBMSHallEffectOut' */
    ENV_Y.IBMSHallEffectOut = 0.0;

    /* ConstCode for Outport: '<Root>/VDCInvRLOut' */
    ENV_Y.VDCInvRLOut = 0.0;

    /* ConstCode for Outport: '<Root>/BEMSOn' */
    ENV_Y.BEMSOn = 0.0;

    /* ConstCode for Outport: '<Root>/BTCOn' */
    ENV_Y.BTCOn = 0.0;

    /* ConstCode for Outport: '<Root>/VCellMinOut' */
    ENV_Y.VCellMinOut = 0.0;

    /* ConstCode for Outport: '<Root>/VCellMaxOut' */
    ENV_Y.VCellMaxOut = 0.0;

    /* ConstCode for Outport: '<Root>/TCellMinOut' */
    ENV_Y.TCellMinOut = 0.0;

    /* ConstCode for Outport: '<Root>/nYawRateErrorActual' */
    ENV_Y.nYawRateErrorActual = 0.0;

    /* ConstCode for Outport: '<Root>/tPedalOverlap' */
    ENV_Y.tPedalOverlap = 0.0;

    /* ConstCode for Outport: '<Root>/tAppsTimer' */
    ENV_Y.tAppsTimer = 0.0;

    /* ConstCode for Outport: '<Root>/rSplitRear' */
    ENV_Y.rSplitRear = 0.0;

    /* ConstCode for Outport: '<Root>/PRegenLimit' */
    ENV_Y.PRegenLimit = 0.0;

    /* ConstCode for Outport: '<Root>/PRegenRequested' */
    ENV_Y.PRegenRequested = 0.0;

    /* ConstCode for Outport: '<Root>/BIMUOk' */
    ENV_Y.BIMUOk = 0.0;

    /* ConstCode for Outport: '<Root>/EOffset' */
    ENV_Y.EOffset = 0.0;

    /* ConstCode for Outport: '<Root>/PEnergyMeter' */
    ENV_Y.PEnergyMeter = 0.0;

    /* ConstCode for Outport: '<Root>/NBMSState' */
    ENV_Y.NBMSState = 0.0;

    /* ConstCode for Outport: '<Root>/BOverpower' */
    ENV_Y.BOverpower = 0.0;

    /* ConstCode for Outport: '<Root>/BPCComplete' */
    ENV_Y.BPCComplete = 0.0;

    /* ConstCode for Outport: '<Root>/BEMSDriverSignal1' */
    ENV_Y.BEMSDriverSignal1 = 0.0;

    /* ConstCode for Outport: '<Root>/BEMSDriverSignal2' */
    ENV_Y.BEMSDriverSignal2 = 0.0;

    /* ConstCode for Outport: '<Root>/BEMSDriverSignal3' */
    ENV_Y.BEMSDriverSignal3 = 0.0;

    /* ConstCode for Outport: '<Root>/BPageUp' */
    ENV_Y.BPageUp = 0.0;

    /* ConstCode for Outport: '<Root>/BPageDown' */
    ENV_Y.BPageDown = 0.0;

    /* ConstCode for Outport: '<Root>/MRegenMax' */
    ENV_Y.MRegenMax = 0.0;

    /* ConstCode for Outport: '<Root>/NSectorLap' */
    ENV_Y.NSectorLap = 0.0;

    /* ConstCode for Outport: '<Root>/MPCRegenRequested' */
    ENV_Y.MPCRegenRequested = 0.0;

    /* ConstCode for Outport: '<Root>/MPCDischargeRequested' */
    ENV_Y.MPCDischargeRequested = 0.0;

    /* ConstCode for Outport: '<Root>/PPCIntegralTermDischarge' */
    ENV_Y.PPCIntegralTermDischarge = 0.0;

    /* ConstCode for Outport: '<Root>/PPCIntegralTermRegen' */
    ENV_Y.PPCIntegralTermRegen = 0.0;

    /* ConstCode for Outport: '<Root>/NSectorGlobal' */
    ENV_Y.NSectorGlobal = 0.0;

    /* ConstCode for Outport: '<Root>/PPCProportionalTermDischarge' */
    ENV_Y.PPCProportionalTermDischarge = 0.0;

    /* ConstCode for Outport: '<Root>/PPCProportionalTermRegen' */
    ENV_Y.PPCProportionalTermRegen = 0.0;

    /* ConstCode for Outport: '<Root>/BDataMark' */
    ENV_Y.BDataMark = 0.0;

    /* ConstCode for Outport: '<Root>/xDamperFL' */
    ENV_Y.xDamperFL = 0.0;

    /* ConstCode for Outport: '<Root>/xDamperFR' */
    ENV_Y.xDamperFR = 0.0;

    /* ConstCode for Outport: '<Root>/xDamperRR' */
    ENV_Y.xDamperRR = 0.0;

    /* ConstCode for Outport: '<Root>/xDamperRL' */
    ENV_Y.xDamperRL = 0.0;

    /* ConstCode for Outport: '<Root>/BErrorReset' */
    ENV_Y.BErrorReset = 0.0;

    /* ConstCode for Outport: '<Root>/BDrivetrainCoolingOn' */
    ENV_Y.BDrivetrainCoolingOn = 0.0;

    /* ConstCode for Outport: '<Root>/PPCRegenRequested' */
    ENV_Y.PPCRegenRequested = 0.0;

    /* ConstCode for Outport: '<Root>/PDischargeLimit' */
    ENV_Y.PDischargeLimit = 0.0;

    /* ConstCode for Outport: '<Root>/PRegenDerate' */
    ENV_Y.PRegenDerate = 0.0;

    /* ConstCode for Outport: '<Root>/PHighCellVoltageRegenDerate' */
    ENV_Y.PHighCellVoltageRegenDerate = 0.0;

    /* ConstCode for Outport: '<Root>/PHighCellTemperatureDerate' */
    ENV_Y.PHighCellTemperatureDerate = 0.0;

    /* ConstCode for Outport: '<Root>/PDischargeDerate' */
    ENV_Y.PDischargeDerate = 0.0;

    /* ConstCode for Outport: '<Root>/PMotorTemperatureDerate' */
    ENV_Y.PMotorTemperatureDerate = 0.0;

    /* ConstCode for Outport: '<Root>/PMotorTemperatureDerateFL' */
    ENV_Y.PMotorTemperatureDerateFL = 0.0;

    /* ConstCode for Outport: '<Root>/PMotorTemperatureDerateFR' */
    ENV_Y.PMotorTemperatureDerateFR = 0.0;

    /* ConstCode for Outport: '<Root>/PMotorTemperatureDerateRL' */
    ENV_Y.PMotorTemperatureDerateRL = 0.0;

    /* ConstCode for Outport: '<Root>/PMotorTemperatureDerateRR' */
    ENV_Y.PMotorTemperatureDerateRR = 0.0;

    /* ConstCode for Outport: '<Root>/PLowCellVoltageDischargeDerate' */
    ENV_Y.PLowCellVoltageDischargeDerate = 0.0;

    /* ConstCode for Outport: '<Root>/PInvTemperatureDerate' */
    ENV_Y.PInvTemperatureDerate = 0.0;

    /* ConstCode for Outport: '<Root>/PInvTemperatureDerateFL' */
    ENV_Y.PInvTemperatureDerateFL = 0.0;

    /* ConstCode for Outport: '<Root>/PInvTemperatureDerateFR' */
    ENV_Y.PInvTemperatureDerateFR = 0.0;

    /* ConstCode for Outport: '<Root>/PInvTemperatureDerateRR' */
    ENV_Y.PInvTemperatureDerateRR = 0.0;

    /* ConstCode for Outport: '<Root>/PInvTemperatureDerateRL' */
    ENV_Y.PInvTemperatureDerateRL = 0.0;

    /* ConstCode for Outport: '<Root>/aCamberGainSteerFL' */
    ENV_Y.aCamberGainSteerFL = 0.0;

    /* ConstCode for Outport: '<Root>/aCamberGainSteerFR' */
    ENV_Y.aCamberGainSteerFR = 0.0;

    /* ConstCode for Outport: '<Root>/PPCDischargeRequested' */
    ENV_Y.PPCDischargeRequested = 0.0;

    /* ConstCode for Outport: '<Root>/rSlipRatioFLActual' */
    ENV_Y.rSlipRatioFLActual = 0.0;

    /* ConstCode for Outport: '<Root>/FLongitudinalLoadTransfer' */
    ENV_Y.FLongitudinalLoadTransfer = 0.0;

    /* ConstCode for Outport: '<Root>/FTyreVerticalFL' */
    ENV_Y.FTyreVerticalFL = 0.0;

    /* ConstCode for Outport: '<Root>/FTyreVerticalFR' */
    ENV_Y.FTyreVerticalFR = 0.0;

    /* ConstCode for Outport: '<Root>/FTyreVerticalRL' */
    ENV_Y.FTyreVerticalRL = 0.0;

    /* ConstCode for Outport: '<Root>/FTyreVerticalRR' */
    ENV_Y.FTyreVerticalRR = 0.0;

    /* ConstCode for Outport: '<Root>/BCalibrationOn' */
    ENV_Y.BCalibrationOn = 0.0;

    /* ConstCode for Outport: '<Root>/FTotalDownforce' */
    ENV_Y.FTotalDownforce = 0.0;

    /* ConstCode for Outport: '<Root>/aSlipAngleFL' */
    ENV_Y.aSlipAngleFL = 0.0;

    /* ConstCode for Outport: '<Root>/aSlipAngleFR' */
    ENV_Y.aSlipAngleFR = 0.0;

    /* ConstCode for Outport: '<Root>/aCamberFL' */
    ENV_Y.aCamberFL = 0.0;

    /* ConstCode for Outport: '<Root>/aCamberFR' */
    ENV_Y.aCamberFR = 0.0;

    /* ConstCode for Outport: '<Root>/aCamberRL' */
    ENV_Y.aCamberRL = 0.0;

    /* ConstCode for Outport: '<Root>/aCamberRR' */
    ENV_Y.aCamberRR = 0.0;

    /* ConstCode for Outport: '<Root>/aRollAngle' */
    ENV_Y.aRollAngle = 0.0;

    /* ConstCode for Outport: '<Root>/xHeaveTravelR' */
    ENV_Y.xHeaveTravelR = 0.0;

    /* ConstCode for Outport: '<Root>/xHeaveTravelF' */
    ENV_Y.xHeaveTravelF = 0.0;

    /* ConstCode for Outport: '<Root>/rSpeedRegenDerateFR' */
    ENV_Y.rSpeedRegenDerateFR = 0.0;

    /* ConstCode for Outport: '<Root>/rSpeedRegenDerateRL' */
    ENV_Y.rSpeedRegenDerateRL = 0.0;

    /* ConstCode for Outport: '<Root>/rSpeedRegenDerateFL' */
    ENV_Y.rSpeedRegenDerateFL = 0.0;

    /* ConstCode for Outport: '<Root>/PTSTemperatureDerateFL' */
    ENV_Y.PTSTemperatureDerateFL = 0.0;

    /* ConstCode for Outport: '<Root>/PTSTemperatureDerateFR' */
    ENV_Y.PTSTemperatureDerateFR = 0.0;

    /* ConstCode for Outport: '<Root>/PTSTemperatureDerateRL' */
    ENV_Y.PTSTemperatureDerateRL = 0.0;

    /* ConstCode for Outport: '<Root>/PTSTemperatureDerateRR' */
    ENV_Y.PTSTemperatureDerateRR = 0.0;

    /* ConstCode for Outport: '<Root>/PSOCDischargeDerate' */
    ENV_Y.PSOCDischargeDerate = 0.0;

    /* ConstCode for Outport: '<Root>/PSOCRegenDerate' */
    ENV_Y.PSOCRegenDerate = 0.0;

    /* ConstCode for Outport: '<Root>/aSlipAngleRL' */
    ENV_Y.aSlipAngleRL = 0.0;

    /* ConstCode for Outport: '<Root>/aSlipAngleRR' */
    ENV_Y.aSlipAngleRR = 0.0;

    /* ConstCode for Outport: '<Root>/BSpeedDerateOn' */
    ENV_Y.BSpeedDerateOn = 0.0;

    /* ConstCode for Outport: '<Root>/VDCAccumulatorOut' */
    ENV_Y.VDCAccumulatorOut = 0.0;

    /* ConstCode for Outport: '<Root>/MTractionControlRRTotal' */
    ENV_Y.MTractionControlRRTotal = 0.0;

    /* ConstCode for Outport: '<Root>/MTractionControlRLTotal' */
    ENV_Y.MTractionControlRLTotal = 0.0;

    /* ConstCode for Outport: '<Root>/MTractionControlFRTotal' */
    ENV_Y.MTractionControlFRTotal = 0.0;

    /* ConstCode for Outport: '<Root>/MTractionControlFLTotal' */
    ENV_Y.MTractionControlFLTotal = 0.0;

    /* ConstCode for Outport: '<Root>/BSpinningModeOn' */
    ENV_Y.BSpinningModeOn = 0.0;

    /* ConstCode for Outport: '<Root>/PRegenMax' */
    ENV_Y.PRegenMax = 0.0;

    /* ConstCode for Outport: '<Root>/rEngineBrakingSplit' */
    ENV_Y.rEngineBrakingSplit = 0.0;

    /* ConstCode for Outport: '<Root>/NLap' */
    ENV_Y.NLap = 0.0;

    /* ConstCode for Outport: '<Root>/sSector' */
    ENV_Y.sSector = 0.0;

    /* ConstCode for Outport: '<Root>/EBudget' */
    ENV_Y.EBudget = 0.0;

    /* ConstCode for Outport: '<Root>/ERemaining' */
    ENV_Y.ERemaining = 0.0;

    /* ConstCode for Outport: '<Root>/ESector' */
    ENV_Y.ESector = 0.0;

    /* ConstCode for Outport: '<Root>/FTotalLateralLoadTransfer' */
    ENV_Y.FTotalLateralLoadTransfer = 0.0;

    /* ConstCode for Outport: '<Root>/BAccuFanOn' */
    ENV_Y.BAccuFanOn = 0.0;

    /* ConstCode for Outport: '<Root>/BMotorRBHFanOn' */
    ENV_Y.BMotorRBHFanOn = 0.0;

    /* ConstCode for Outport: '<Root>/BInverterFanOn' */
    ENV_Y.BInverterFanOn = 0.0;

    /* ConstCode for Outport: '<Root>/BReadyToDriveBuzzer' */
    ENV_Y.BReadyToDriveBuzzer = 0.0;

    /* ConstCode for Outport: '<Root>/BBrakeLight' */
    ENV_Y.BBrakeLight = 0.0;

    /* ConstCode for Outport: '<Root>/BInvLVOn' */
    ENV_Y.BInvLVOn = 0.0;

    /* ConstCode for Outport: '<Root>/tIMUError' */
    ENV_Y.tIMUError = 0.0;

    /* ConstCode for Outport: '<Root>/MDriverDischargeRequested' */
    ENV_Y.MDriverDischargeRequested = 0.0;

    /* ConstCode for Outport: '<Root>/MRegenLimited' */
    ENV_Y.MRegenLimited = 0.0;

    /* ConstCode for Outport: '<Root>/MTotalRequested' */
    ENV_Y.MTotalRequested = 0.0;

    /* ConstCode for Outport: '<Root>/BxDamperFLOk' */
    ENV_Y.BxDamperFLOk = 0.0;

    /* ConstCode for Outport: '<Root>/BxDamperFROk' */
    ENV_Y.BxDamperFROk = 0.0;

    /* ConstCode for Outport: '<Root>/BxDamperRLOk' */
    ENV_Y.BxDamperRLOk = 0.0;

    /* ConstCode for Outport: '<Root>/BxDamperRROk' */
    ENV_Y.BxDamperRROk = 0.0;

    /* ConstCode for Outport: '<Root>/BIMUError' */
    ENV_Y.BIMUError = 0.0;

    /* ConstCode for Outport: '<Root>/PDischargeLimited' */
    ENV_Y.PDischargeLimited = 0.0;

    /* ConstCode for Outport: '<Root>/aCamberGainRollF' */
    ENV_Y.aCamberGainRollF = 0.0;

    /* ConstCode for Outport: '<Root>/aCamberGainRollR' */
    ENV_Y.aCamberGainRollR = 0.0;

    /* ConstCode for Outport: '<Root>/aCamberGainHeaveF' */
    ENV_Y.aCamberGainHeaveF = 0.0;

    /* ConstCode for Outport: '<Root>/aCamberGainHeaveR' */
    ENV_Y.aCamberGainHeaveR = 0.0;

    /* ConstCode for Outport: '<Root>/BInverterErrorRear' */
    ENV_Y.BInverterErrorRear = 0.0;

    /* ConstCode for Outport: '<Root>/BInverterErrorFront' */
    ENV_Y.BInverterErrorFront = 0.0;

    /* ConstCode for Outport: '<Root>/ETotalRequested' */
    ENV_Y.ETotalRequested = 0.0;

    /* ConstCode for Outport: '<Root>/ESector1Remaining' */
    ENV_Y.ESector1Remaining = 0.0;

    /* ConstCode for Outport: '<Root>/ESector2Remaining' */
    ENV_Y.ESector2Remaining = 0.0;

    /* ConstCode for Outport: '<Root>/ESector3Remaining' */
    ENV_Y.ESector3Remaining = 0.0;

    /* ConstCode for Outport: '<Root>/ESector4Remaining' */
    ENV_Y.ESector4Remaining = 0.0;

    /* ConstCode for Outport: '<Root>/NSector9Remaining' */
    ENV_Y.NSector9Remaining = 0.0;

    /* ConstCode for Outport: '<Root>/NSector10Remaining' */
    ENV_Y.NSector10Remaining = 0.0;

    /* ConstCode for Outport: '<Root>/NSector11Remaining' */
    ENV_Y.NSector11Remaining = 0.0;

    /* ConstCode for Outport: '<Root>/NSector12Remaining' */
    ENV_Y.NSector12Remaining = 0.0;

    /* ConstCode for Outport: '<Root>/ESector5Remaining' */
    ENV_Y.ESector5Remaining = 0.0;

    /* ConstCode for Outport: '<Root>/ESector6Remaining' */
    ENV_Y.ESector6Remaining = 0.0;

    /* ConstCode for Outport: '<Root>/ESector7Remaining' */
    ENV_Y.ESector7Remaining = 0.0;

    /* ConstCode for Outport: '<Root>/ESector9Remaining' */
    ENV_Y.ESector9Remaining = 0.0;

    /* ConstCode for Outport: '<Root>/ESector10Remaining' */
    ENV_Y.ESector10Remaining = 0.0;

    /* ConstCode for Outport: '<Root>/ESector11Remaining' */
    ENV_Y.ESector11Remaining = 0.0;

    /* ConstCode for Outport: '<Root>/ESector12Remaining' */
    ENV_Y.ESector12Remaining = 0.0;

    /* ConstCode for Outport: '<Root>/NSector1Remaining' */
    ENV_Y.NSector1Remaining = 0.0;

    /* ConstCode for Outport: '<Root>/NSector2Remaining' */
    ENV_Y.NSector2Remaining = 0.0;

    /* ConstCode for Outport: '<Root>/NSector3Remaining' */
    ENV_Y.NSector3Remaining = 0.0;

    /* ConstCode for Outport: '<Root>/NSector4Remaining' */
    ENV_Y.NSector4Remaining = 0.0;

    /* ConstCode for Outport: '<Root>/NSector5Remaining' */
    ENV_Y.NSector5Remaining = 0.0;

    /* ConstCode for Outport: '<Root>/NSector6Remaining' */
    ENV_Y.NSector6Remaining = 0.0;

    /* ConstCode for Outport: '<Root>/NSector7Remaining' */
    ENV_Y.NSector7Remaining = 0.0;

    /* ConstCode for Outport: '<Root>/NSector8Remaining' */
    ENV_Y.NSector8Remaining = 0.0;

    /* ConstCode for Outport: '<Root>/ESector8Remaining' */
    ENV_Y.ESector8Remaining = 0.0;

    /* ConstCode for Outport: '<Root>/NThrottleMapEM' */
    ENV_Y.NThrottleMapEM = 0.0;

    /* ConstCode for Outport: '<Root>/NThrottleMapOW' */
    ENV_Y.NThrottleMapOW = 0.0;

    /* ConstCode for Outport: '<Root>/rTorqueSplit' */
    ENV_Y.rTorqueSplit = 0.0;

    /* ConstCode for Outport: '<Root>/rTorqueSplitOW' */
    ENV_Y.rTorqueSplitOW = 0.0;

    /* ConstCode for Outport: '<Root>/PRegenMaxEM' */
    ENV_Y.PRegenMaxEM = 0.0;

    /* ConstCode for Outport: '<Root>/PRegenMaxOW' */
    ENV_Y.PRegenMaxOW = 0.0;

    /* ConstCode for Outport: '<Root>/rTVMultiplierEM' */
    ENV_Y.rTVMultiplierEM = 0.0;

    /* ConstCode for Outport: '<Root>/rTVMultiplierOW' */
    ENV_Y.rTVMultiplierOW = 0.0;

    /* ConstCode for Outport: '<Root>/rEngineBrakingSplitEM' */
    ENV_Y.rEngineBrakingSplitEM = 0.0;

    /* ConstCode for Outport: '<Root>/rEngineBrakingSplitOW' */
    ENV_Y.rEngineBrakingSplitOW = 0.0;

    /* ConstCode for Outport: '<Root>/PDischargeMaxEM' */
    ENV_Y.PDischargeMaxEM = 0.0;

    /* ConstCode for Outport: '<Root>/PDischargeMaxOW' */
    ENV_Y.PDischargeMaxOW = 0.0;

    /* ConstCode for Outport: '<Root>/PEngineBrakingEM' */
    ENV_Y.PEngineBrakingEM = 0.0;

    /* ConstCode for Outport: '<Root>/PEngineBrakingOW' */
    ENV_Y.PEngineBrakingOW = 0.0;

    /* ConstCode for Outport: '<Root>/NTCKdSelector' */
    ENV_Y.NTCKdSelector = 0.0;

    /* ConstCode for Outport: '<Root>/NPCKpSelector' */
    ENV_Y.NPCKpSelector = 0.0;

    /* ConstCode for Outport: '<Root>/rTorqueSplitEM' */
    ENV_Y.rTorqueSplitEM = 0.0;

    /* ConstCode for Outport: '<Root>/BTVOnEM' */
    ENV_Y.BTVOnEM = 0.0;

    /* ConstCode for Outport: '<Root>/BTVOnOW' */
    ENV_Y.BTVOnOW = 0.0;

    /* ConstCode for Outport: '<Root>/BDrivetrainCoolingOnEM' */
    ENV_Y.BDrivetrainCoolingOnEM = 0.0;

    /* ConstCode for Outport: '<Root>/BDrivetrainCoolingOnOW' */
    ENV_Y.BDrivetrainCoolingOnOW = 0.0;

    /* ConstCode for Outport: '<Root>/BTCOnEM' */
    ENV_Y.BTCOnEM = 0.0;

    /* ConstCode for Outport: '<Root>/BTCOnOW' */
    ENV_Y.BTCOnOW = 0.0;

    /* ConstCode for Outport: '<Root>/BEMSOnEM' */
    ENV_Y.BEMSOnEM = 0.0;

    /* ConstCode for Outport: '<Root>/BEMSOnOW' */
    ENV_Y.BEMSOnOW = 0.0;

    /* ConstCode for Outport: '<Root>/BSpinningModeOnEM' */
    ENV_Y.BSpinningModeOnEM = 0.0;

    /* ConstCode for Outport: '<Root>/BSpinningModeOnOW' */
    ENV_Y.BSpinningModeOnOW = 0.0;

    /* ConstCode for Outport: '<Root>/NEventMode' */
    ENV_Y.NEventMode = 0.0;

    /* ConstCode for Outport: '<Root>/BInvErrorResetRLCAN3' */
    ENV_Y.BInvErrorResetRLCAN3 = 0.0;

    /* ConstCode for Outport: '<Root>/BInvErrorResetFLCAN3' */
    ENV_Y.BInvErrorResetFLCAN3 = 0.0;

    /* ConstCode for Outport: '<Root>/BInvErrorResetFRCAN3' */
    ENV_Y.BInvErrorResetFRCAN3 = 0.0;

    /* ConstCode for Outport: '<Root>/BInvErrorResetRRCAN3' */
    ENV_Y.BInvErrorResetRRCAN3 = 0.0;

    /* ConstCode for Outport: '<Root>/BQuitInvOnFLCAN3' */
    ENV_Y.BQuitInvOnFLCAN3 = 0.0;

    /* ConstCode for Outport: '<Root>/BQuitInvOnFRCAN3' */
    ENV_Y.BQuitInvOnFRCAN3 = 0.0;

    /* ConstCode for Outport: '<Root>/BQuitInvOnRRCAN3' */
    ENV_Y.BQuitInvOnRRCAN3 = 0.0;

    /* ConstCode for Outport: '<Root>/BQuitInvOnRLCAN3' */
    ENV_Y.BQuitInvOnRLCAN3 = 0.0;

    /* ConstCode for Outport: '<Root>/BInvDCOnRLOut' */
    ENV_Y.BInvDCOnRLOut = 0.0;

    /* ConstCode for Outport: '<Root>/BInvEnableRL' */
    ENV_Y.BInvEnableRL = 0.0;

    /* ConstCode for Outport: '<Root>/BInvErrorResetRL' */
    ENV_Y.BInvErrorResetRL = 0.0;

    /* ConstCode for Outport: '<Root>/BInvOnRLOut' */
    ENV_Y.BInvOnRLOut = 0.0;

    /* ConstCode for Outport: '<Root>/MTorqueLimitNegativeRL' */
    ENV_Y.MTorqueLimitNegativeRL = 0.0;

    /* ConstCode for Outport: '<Root>/MTorqueLimitPositiveRL' */
    ENV_Y.MTorqueLimitPositiveRL = 0.0;

    /* ConstCode for Outport: '<Root>/MInvRLFinal' */
    ENV_Y.MInvRLFinal = 0.0;

    /* ConstCode for Outport: '<Root>/BInvDCOnFLOut' */
    ENV_Y.BInvDCOnFLOut = 0.0;

    /* ConstCode for Outport: '<Root>/BInvEnableFL' */
    ENV_Y.BInvEnableFL = 0.0;

    /* ConstCode for Outport: '<Root>/BInvErrorResetFL' */
    ENV_Y.BInvErrorResetFL = 0.0;

    /* ConstCode for Outport: '<Root>/BInvOnFLOut' */
    ENV_Y.BInvOnFLOut = 0.0;

    /* ConstCode for Outport: '<Root>/MTorqueLimitNegativeFL' */
    ENV_Y.MTorqueLimitNegativeFL = 0.0;

    /* ConstCode for Outport: '<Root>/MTorqueLimitPositiveFL' */
    ENV_Y.MTorqueLimitPositiveFL = 0.0;

    /* ConstCode for Outport: '<Root>/MInvFLFinal' */
    ENV_Y.MInvFLFinal = 0.0;

    /* ConstCode for Outport: '<Root>/BInvDCOnRROut' */
    ENV_Y.BInvDCOnRROut = 0.0;

    /* ConstCode for Outport: '<Root>/BInvEnableRR' */
    ENV_Y.BInvEnableRR = 0.0;

    /* ConstCode for Outport: '<Root>/BInvErrorResetRR' */
    ENV_Y.BInvErrorResetRR = 0.0;

    /* ConstCode for Outport: '<Root>/BInvOnRROut' */
    ENV_Y.BInvOnRROut = 0.0;

    /* ConstCode for Outport: '<Root>/MTorqueLimitNegativeRR' */
    ENV_Y.MTorqueLimitNegativeRR = 0.0;

    /* ConstCode for Outport: '<Root>/MTorqueLimitPositiveRR' */
    ENV_Y.MTorqueLimitPositiveRR = 0.0;

    /* ConstCode for Outport: '<Root>/MInvRRFinal' */
    ENV_Y.MInvRRFinal = 0.0;

    /* ConstCode for Outport: '<Root>/BInvDCOnFROut' */
    ENV_Y.BInvDCOnFROut = 0.0;

    /* ConstCode for Outport: '<Root>/BInvEnableFR' */
    ENV_Y.BInvEnableFR = 0.0;

    /* ConstCode for Outport: '<Root>/BInvErrorResetFR' */
    ENV_Y.BInvErrorResetFR = 0.0;

    /* ConstCode for Outport: '<Root>/BInvOnFROut' */
    ENV_Y.BInvOnFROut = 0.0;

    /* ConstCode for Outport: '<Root>/MTorqueLimitNegativeFR' */
    ENV_Y.MTorqueLimitNegativeFR = 0.0;

    /* ConstCode for Outport: '<Root>/MTorqueLimitPositiveFR' */
    ENV_Y.MTorqueLimitPositiveFR = 0.0;

    /* ConstCode for Outport: '<Root>/MInvFRFinal' */
    ENV_Y.MInvFRFinal = 0.0;
  }
}

/* Model terminate function */
void ENV_terminate(void)
{
  uint32_T SPIPinsLoc;

  /* Terminate for Enabled SubSystem: '<Root>/CAN Rx1' */
  /* Terminate for MATLABSystem: '<S1>/SPI Controller Transfer' */
  if (!ENV_DW.obj_p.matlabCodegenIsDeleted) {
    ENV_DW.obj_p.matlabCodegenIsDeleted = true;
    if ((ENV_DW.obj_p.isInitialized == 1) && ENV_DW.obj_p.isSetupComplete) {
      SPIPinsLoc = MW_UNDEFINED_VALUE;
      MW_SPI_Close(ENV_DW.obj_p.MW_SPI_HANDLE, SPIPinsLoc, SPIPinsLoc,
                   SPIPinsLoc, 1U);
    }
  }

  /* End of Terminate for MATLABSystem: '<S1>/SPI Controller Transfer' */
  /* End of Terminate for SubSystem: '<Root>/CAN Rx1' */

  /* Terminate for MATLABSystem: '<S2>/SPI Controller Transfer6' */
  if (!ENV_DW.obj_h.matlabCodegenIsDeleted) {
    ENV_DW.obj_h.matlabCodegenIsDeleted = true;
    if ((ENV_DW.obj_h.isInitialized == 1) && ENV_DW.obj_h.isSetupComplete) {
      SPIPinsLoc = MW_UNDEFINED_VALUE;
      MW_SPI_Close(ENV_DW.obj_h.MW_SPI_HANDLE, SPIPinsLoc, SPIPinsLoc,
                   SPIPinsLoc, 1U);
    }
  }

  /* End of Terminate for MATLABSystem: '<S2>/SPI Controller Transfer6' */

  /* Terminate for MATLABSystem: '<S2>/SPI Controller Transfer7' */
  if (!ENV_DW.obj_n.matlabCodegenIsDeleted) {
    ENV_DW.obj_n.matlabCodegenIsDeleted = true;
    if ((ENV_DW.obj_n.isInitialized == 1) && ENV_DW.obj_n.isSetupComplete) {
      SPIPinsLoc = MW_UNDEFINED_VALUE;
      MW_SPI_Close(ENV_DW.obj_n.MW_SPI_HANDLE, SPIPinsLoc, SPIPinsLoc,
                   SPIPinsLoc, 1U);
    }
  }

  /* End of Terminate for MATLABSystem: '<S2>/SPI Controller Transfer7' */

  /* Terminate for Enabled SubSystem: '<S10>/MCPInit1' */
  /* Terminate for MATLABSystem: '<S25>/SPI Controller Transfer' */
  if (!ENV_DW.obj.matlabCodegenIsDeleted) {
    ENV_DW.obj.matlabCodegenIsDeleted = true;
    if ((ENV_DW.obj.isInitialized == 1) && ENV_DW.obj.isSetupComplete) {
      SPIPinsLoc = MW_UNDEFINED_VALUE;
      MW_SPI_Close(ENV_DW.obj.MW_SPI_HANDLE, SPIPinsLoc, SPIPinsLoc, SPIPinsLoc,
                   1U);
    }
  }

  /* End of Terminate for MATLABSystem: '<S25>/SPI Controller Transfer' */
  ENV_SPIControllerTransfer1_Term(&ENV_DW.SPIControllerTransfer1);
  ENV_SPIControllerTransfer1_Term(&ENV_DW.SPIControllerTransfer2);
  ENV_SPIControllerTransfer1_Term(&ENV_DW.SPIControllerTransfer3);
  ENV_SPIControllerTransfer5_Term(&ENV_DW.SPIControllerTransfer5);
  ENV_SPIControllerTransfer1_Term(&ENV_DW.SPIControllerTransfer6_p);
  ENV_SPIControllerTransfer5_Term(&ENV_DW.SPIControllerTransfer7_p);
  ENV_SPIControllerTransfer1_Term(&ENV_DW.SPIControllerTransfer4);

  /* End of Terminate for SubSystem: '<S10>/MCPInit1' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
