/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: ENV.c
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

#include "ENV.h"
#include "rtwtypes.h"
#include "ENV_types.h"
#include "ENV_private.h"
#include "mw_stm32_spi_ll.h"

/* Block signals (default storage) */
B_ENV_T ENV_B;

/* Block states (default storage) */
DW_ENV_T ENV_DW;

/* External outputs (root outports fed by signals with default storage) */
ExtY_ENV_T ENV_Y;

/* Real-time model */
static RT_MODEL_ENV_T ENV_M_;
RT_MODEL_ENV_T *const ENV_M = &ENV_M_;

/*
 * Output and update for atomic system:
 *    '<S1>/MATLAB Function'
 *    '<S1>/MATLAB Function1'
 *    '<S1>/MATLAB Function2'
 *    '<S1>/MATLAB Function4'
 */
void ENV_MATLABFunction(uint32_T rtu_ID, uint8_T rtu_Length, const uint8_T
  rtu_Data[8], uint8_T rtu_RTS, uint16_T rtu_period, uint16_T rtu_offset,
  boolean_T rtu_MCPInitialized, uint8_T *rty_WriteInstruction, uint8_T
  rty_CANVector[13], uint8_T *rty_RTSByte, DW_MATLABFunction_ENV_T *localDW)
{
  int32_T i;
  if (rtu_MCPInitialized) {
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

      *rty_RTSByte = 3U;
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

  /* Start for MATLABSystem: '<S1>/SPI Controller Transfer' */
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

  /* MATLABSystem: '<S1>/SPI Controller Transfer' */
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

  /* End of MATLABSystem: '<S1>/SPI Controller Transfer' */
}

/* Termination for atomic system: */
void ENV_SPIControllerTransfer_Term(DW_SPIControllerTransfer_ENV_T *localDW)
{
  /* Terminate for MATLABSystem: '<S1>/SPI Controller Transfer' */
  if (!localDW->obj.matlabCodegenIsDeleted) {
    localDW->obj.matlabCodegenIsDeleted = true;
    if ((localDW->obj.isInitialized == 1) && localDW->obj.isSetupComplete) {
      uint32_T SPIPinsLoc;
      SPIPinsLoc = MW_UNDEFINED_VALUE;
      MW_SPI_Close(localDW->obj.MW_SPI_HANDLE, SPIPinsLoc, SPIPinsLoc,
                   SPIPinsLoc, 1U);
    }
  }

  /* End of Terminate for MATLABSystem: '<S1>/SPI Controller Transfer' */
}

/* System initialize for atomic system: */
void ENV_SPIControllerTransfer1_Init(DW_SPIControllerTransfer1_ENV_T *localDW)
{
  STM32_SPI_ModuleStruct_T b;

  /* Start for MATLABSystem: '<S1>/SPI Controller Transfer1' */
  localDW->obj.matlabCodegenIsDeleted = false;
  localDW->objisempty = true;
  localDW->obj.isInitialized = 1;
  b.PeripheralPtr = SPI1;
  localDW->obj.MW_SPI_HANDLE = SPI_STM32_Init(&b);
  MW_STM32_SPI_SetFormat(localDW->obj.MW_SPI_HANDLE, 0U, 1792U, MW_SPI_MODE_2);
  localDW->obj.isSetupComplete = true;
}

/* Output and update for atomic system: */
void ENV_SPIControllerTransfer1(uint8_T rtu_0, DW_SPIControllerTransfer1_ENV_T
  *localDW)
{
  uint8_T rdDataRaw;

  /* MATLABSystem: '<S1>/SPI Controller Transfer1' */
  rdDataRaw = MW_STM32_SPI_SetFormat(localDW->obj.MW_SPI_HANDLE, 0U, 1792U,
    MW_SPI_MODE_2);
  if (rdDataRaw == 0) {
    GPIO_TypeDef * portNameLoc;
    portNameLoc = GPIOA;
    LL_GPIO_ResetOutputPin(portNameLoc, 2U);
    MW_SPI_MasterWriteRead_Databits(localDW->obj.MW_SPI_HANDLE, &rtu_0,
      &rdDataRaw, 0, 1U, 0, 1U);
    LL_GPIO_SetOutputPin(portNameLoc, 2U);
  }

  /* End of MATLABSystem: '<S1>/SPI Controller Transfer1' */
}

/* Termination for atomic system: */
void ENV_SPIControllerTransfer1_Term(DW_SPIControllerTransfer1_ENV_T *localDW)
{
  /* Terminate for MATLABSystem: '<S1>/SPI Controller Transfer1' */
  if (!localDW->obj.matlabCodegenIsDeleted) {
    localDW->obj.matlabCodegenIsDeleted = true;
    if ((localDW->obj.isInitialized == 1) && localDW->obj.isSetupComplete) {
      uint32_T SPIPinsLoc;
      SPIPinsLoc = MW_UNDEFINED_VALUE;
      MW_SPI_Close(localDW->obj.MW_SPI_HANDLE, SPIPinsLoc, SPIPinsLoc,
                   SPIPinsLoc, 1U);
    }
  }

  /* End of Terminate for MATLABSystem: '<S1>/SPI Controller Transfer1' */
}

/*
 * Output and update for atomic system:
 *    '<S2>/MATLAB Function1'
 *    '<S2>/MATLAB Function2'
 *    '<S2>/MATLAB Function3'
 *    '<S2>/MATLAB Function4'
 *    '<S2>/MATLAB Function5'
 *    '<S2>/MATLAB Function6'
 *    '<S2>/MATLAB Function7'
 *    '<S2>/MATLAB Function8'
 *    '<S3>/MATLAB Function1'
 *    '<S3>/MATLAB Function2'
 *    ...
 */
void ENV_MATLABFunction1(const uint8_T rtu_RxBytes[15], CANMessage *rty_Message)
{
  int32_T i;
  rty_Message->ID = (uint32_T)rtu_RxBytes[2] << 3 | (uint32_T)rtu_RxBytes[3] >>
    5;
  rty_Message->Extended = false;
  rty_Message->Remote = false;
  rty_Message->Error = false;
  rty_Message->Length = rtu_RxBytes[6] & 15U;
  for (i = 0; i < 8; i++) {
    rty_Message->Data[i] = rtu_RxBytes[i + 7];
  }
}

/* System initialize for atomic system: */
void E_SPIControllerTransfer1_i_Init(DW_SPIControllerTransfer1_E_f_T *localDW)
{
  STM32_SPI_ModuleStruct_T b;

  /* Start for MATLABSystem: '<S2>/SPI Controller Transfer1' */
  localDW->obj.matlabCodegenIsDeleted = false;
  localDW->objisempty = true;
  localDW->obj.isInitialized = 1;
  b.PeripheralPtr = SPI1;
  localDW->obj.MW_SPI_HANDLE = SPI_STM32_Init(&b);
  MW_STM32_SPI_SetFormat(localDW->obj.MW_SPI_HANDLE, 0U, 1792U, MW_SPI_MODE_2);
  localDW->obj.isSetupComplete = true;
}

/* Output and update for atomic system: */
void ENV_SPIControllerTransfer1_p(const uint8_T rtu_0[15],
  B_SPIControllerTransfer1_EN_c_T *localB, DW_SPIControllerTransfer1_E_f_T
  *localDW)
{
  uint8_T status;

  /* MATLABSystem: '<S2>/SPI Controller Transfer1' */
  status = MW_STM32_SPI_SetFormat(localDW->obj.MW_SPI_HANDLE, 0U, 1792U,
    MW_SPI_MODE_2);
  if (status == 0) {
    GPIO_TypeDef * portNameLoc;
    portNameLoc = GPIOB;
    LL_GPIO_ResetOutputPin(portNameLoc, 2U);
    MW_SPI_MasterWriteRead_Databits(localDW->obj.MW_SPI_HANDLE, &rtu_0[0],
      &localB->SPIControllerTransfer1[0], 0, 15U, 1, 10U);
    LL_GPIO_SetOutputPin(portNameLoc, 2U);
  }

  /* End of MATLABSystem: '<S2>/SPI Controller Transfer1' */
}

/* Termination for atomic system: */
void E_SPIControllerTransfer1_c_Term(DW_SPIControllerTransfer1_E_f_T *localDW)
{
  /* Terminate for MATLABSystem: '<S2>/SPI Controller Transfer1' */
  if (!localDW->obj.matlabCodegenIsDeleted) {
    localDW->obj.matlabCodegenIsDeleted = true;
    if ((localDW->obj.isInitialized == 1) && localDW->obj.isSetupComplete) {
      uint32_T SPIPinsLoc;
      SPIPinsLoc = MW_UNDEFINED_VALUE;
      MW_SPI_Close(localDW->obj.MW_SPI_HANDLE, SPIPinsLoc, SPIPinsLoc,
                   SPIPinsLoc, 1U);
    }
  }

  /* End of Terminate for MATLABSystem: '<S2>/SPI Controller Transfer1' */
}

/* System initialize for atomic system: */
void E_SPIControllerTransfer1_h_Init(DW_SPIControllerTransfer1_fw_T *localDW)
{
  STM32_SPI_ModuleStruct_T b;

  /* Start for MATLABSystem: '<S3>/SPI Controller Transfer1' */
  localDW->obj.matlabCodegenIsDeleted = false;
  localDW->objisempty = true;
  localDW->obj.isInitialized = 1;
  b.PeripheralPtr = SPI1;
  localDW->obj.MW_SPI_HANDLE = SPI_STM32_Init(&b);
  MW_STM32_SPI_SetFormat(localDW->obj.MW_SPI_HANDLE, 0U, 1792U, MW_SPI_MODE_2);
  localDW->obj.isSetupComplete = true;
}

/* Output and update for atomic system: */
void ENV_SPIControllerTransfer1_pn(const uint8_T rtu_0[15],
  B_SPIControllerTransfer1_E_ca_T *localB, DW_SPIControllerTransfer1_fw_T
  *localDW)
{
  uint8_T status;

  /* MATLABSystem: '<S3>/SPI Controller Transfer1' */
  status = MW_STM32_SPI_SetFormat(localDW->obj.MW_SPI_HANDLE, 0U, 1792U,
    MW_SPI_MODE_2);
  if (status == 0) {
    GPIO_TypeDef * portNameLoc;
    portNameLoc = GPIOC;
    LL_GPIO_ResetOutputPin(portNameLoc, 1024U);
    MW_SPI_MasterWriteRead_Databits(localDW->obj.MW_SPI_HANDLE, &rtu_0[0],
      &localB->SPIControllerTransfer1[0], 0, 15U, 1, 10U);
    LL_GPIO_SetOutputPin(portNameLoc, 1024U);
  }

  /* End of MATLABSystem: '<S3>/SPI Controller Transfer1' */
}

/* Termination for atomic system: */
void E_SPIControllerTransfer1_d_Term(DW_SPIControllerTransfer1_fw_T *localDW)
{
  /* Terminate for MATLABSystem: '<S3>/SPI Controller Transfer1' */
  if (!localDW->obj.matlabCodegenIsDeleted) {
    localDW->obj.matlabCodegenIsDeleted = true;
    if ((localDW->obj.isInitialized == 1) && localDW->obj.isSetupComplete) {
      uint32_T SPIPinsLoc;
      SPIPinsLoc = MW_UNDEFINED_VALUE;
      MW_SPI_Close(localDW->obj.MW_SPI_HANDLE, SPIPinsLoc, SPIPinsLoc,
                   SPIPinsLoc, 10U);
    }
  }

  /* End of Terminate for MATLABSystem: '<S3>/SPI Controller Transfer1' */
}

/* System initialize for atomic system: */
void E_SPIControllerTransfer1_n_Init(DW_SPIControllerTransfer1_fwu_T *localDW)
{
  STM32_SPI_ModuleStruct_T b;

  /* Start for MATLABSystem: '<S55>/SPI Controller Transfer1' */
  localDW->obj.matlabCodegenIsDeleted = false;
  localDW->objisempty = true;
  localDW->obj.isInitialized = 1;
  b.PeripheralPtr = SPI1;
  localDW->obj.MW_SPI_HANDLE = SPI_STM32_Init(&b);
  MW_STM32_SPI_SetFormat(localDW->obj.MW_SPI_HANDLE, 0U, 1792U, MW_SPI_MODE_2);
  localDW->obj.isSetupComplete = true;
}

/* Output and update for atomic system: */
void ENV_SPIControllerTransfer1_pna(const uint8_T rtu_0[3],
  DW_SPIControllerTransfer1_fwu_T *localDW)
{
  uint8_T tmp[3];
  uint8_T status;

  /* MATLABSystem: '<S55>/SPI Controller Transfer1' */
  status = MW_STM32_SPI_SetFormat(localDW->obj.MW_SPI_HANDLE, 0U, 1792U,
    MW_SPI_MODE_2);
  if (status == 0) {
    GPIO_TypeDef * portNameLoc;
    portNameLoc = GPIOB;
    LL_GPIO_ResetOutputPin(portNameLoc, 2U);
    MW_SPI_MasterWriteRead_Databits(localDW->obj.MW_SPI_HANDLE, &rtu_0[0], &tmp
      [0], 0, 3U, 1, 10U);
    LL_GPIO_SetOutputPin(portNameLoc, 2U);
  }

  /* End of MATLABSystem: '<S55>/SPI Controller Transfer1' */
}

/* Termination for atomic system: */
void E_SPIControllerTransfer1_e_Term(DW_SPIControllerTransfer1_fwu_T *localDW)
{
  /* Terminate for MATLABSystem: '<S55>/SPI Controller Transfer1' */
  if (!localDW->obj.matlabCodegenIsDeleted) {
    localDW->obj.matlabCodegenIsDeleted = true;
    if ((localDW->obj.isInitialized == 1) && localDW->obj.isSetupComplete) {
      uint32_T SPIPinsLoc;
      SPIPinsLoc = MW_UNDEFINED_VALUE;
      MW_SPI_Close(localDW->obj.MW_SPI_HANDLE, SPIPinsLoc, SPIPinsLoc,
                   SPIPinsLoc, 1U);
    }
  }

  /* End of Terminate for MATLABSystem: '<S55>/SPI Controller Transfer1' */
}

/* System initialize for atomic system: */
void ENV_SPIControllerTransfer4_Init(DW_SPIControllerTransfer4_ENV_T *localDW)
{
  STM32_SPI_ModuleStruct_T b;

  /* Start for MATLABSystem: '<S55>/SPI Controller Transfer4' */
  localDW->obj.matlabCodegenIsDeleted = false;
  localDW->objisempty = true;
  localDW->obj.isInitialized = 1;
  b.PeripheralPtr = SPI1;
  localDW->obj.MW_SPI_HANDLE = SPI_STM32_Init(&b);
  MW_STM32_SPI_SetFormat(localDW->obj.MW_SPI_HANDLE, 0U, 1792U, MW_SPI_MODE_2);
  localDW->obj.isSetupComplete = true;
}

/* Output and update for atomic system: */
void ENV_SPIControllerTransfer4(const uint8_T rtu_0[4],
  DW_SPIControllerTransfer4_ENV_T *localDW)
{
  uint8_T tmp[4];
  uint8_T status;

  /* MATLABSystem: '<S55>/SPI Controller Transfer4' */
  status = MW_STM32_SPI_SetFormat(localDW->obj.MW_SPI_HANDLE, 0U, 1792U,
    MW_SPI_MODE_2);
  if (status == 0) {
    GPIO_TypeDef * portNameLoc;
    portNameLoc = GPIOB;
    LL_GPIO_ResetOutputPin(portNameLoc, 2U);
    MW_SPI_MasterWriteRead_Databits(localDW->obj.MW_SPI_HANDLE, &rtu_0[0], &tmp
      [0], 0, 4U, 1, 10U);
    LL_GPIO_SetOutputPin(portNameLoc, 2U);
  }

  /* End of MATLABSystem: '<S55>/SPI Controller Transfer4' */
}

/* Termination for atomic system: */
void ENV_SPIControllerTransfer4_Term(DW_SPIControllerTransfer4_ENV_T *localDW)
{
  /* Terminate for MATLABSystem: '<S55>/SPI Controller Transfer4' */
  if (!localDW->obj.matlabCodegenIsDeleted) {
    localDW->obj.matlabCodegenIsDeleted = true;
    if ((localDW->obj.isInitialized == 1) && localDW->obj.isSetupComplete) {
      uint32_T SPIPinsLoc;
      SPIPinsLoc = MW_UNDEFINED_VALUE;
      MW_SPI_Close(localDW->obj.MW_SPI_HANDLE, SPIPinsLoc, SPIPinsLoc,
                   SPIPinsLoc, 1U);
    }
  }

  /* End of Terminate for MATLABSystem: '<S55>/SPI Controller Transfer4' */
}

/* System initialize for atomic system: */
void E_SPIControllerTransfer1_j_Init(DW_SPIControllerTransfer_fwu4_T *localDW)
{
  STM32_SPI_ModuleStruct_T b;

  /* Start for MATLABSystem: '<S57>/SPI Controller Transfer1' */
  localDW->obj.matlabCodegenIsDeleted = false;
  localDW->objisempty = true;
  localDW->obj.isInitialized = 1;
  b.PeripheralPtr = SPI1;
  localDW->obj.MW_SPI_HANDLE = SPI_STM32_Init(&b);
  MW_STM32_SPI_SetFormat(localDW->obj.MW_SPI_HANDLE, 0U, 1792U, MW_SPI_MODE_2);
  localDW->obj.isSetupComplete = true;
}

/* Output and update for atomic system: */
void ENV_SPIControllerTransfer1_pnae(const uint8_T rtu_0[3],
  DW_SPIControllerTransfer_fwu4_T *localDW)
{
  uint8_T tmp[3];
  uint8_T status;

  /* MATLABSystem: '<S57>/SPI Controller Transfer1' */
  status = MW_STM32_SPI_SetFormat(localDW->obj.MW_SPI_HANDLE, 0U, 1792U,
    MW_SPI_MODE_2);
  if (status == 0) {
    GPIO_TypeDef * portNameLoc;
    portNameLoc = GPIOC;
    LL_GPIO_ResetOutputPin(portNameLoc, 1024U);
    MW_SPI_MasterWriteRead_Databits(localDW->obj.MW_SPI_HANDLE, &rtu_0[0], &tmp
      [0], 0, 3U, 1, 10U);
    LL_GPIO_SetOutputPin(portNameLoc, 1024U);
  }

  /* End of MATLABSystem: '<S57>/SPI Controller Transfer1' */
}

/* Termination for atomic system: */
void E_SPIControllerTransfer1_k_Term(DW_SPIControllerTransfer_fwu4_T *localDW)
{
  /* Terminate for MATLABSystem: '<S57>/SPI Controller Transfer1' */
  if (!localDW->obj.matlabCodegenIsDeleted) {
    localDW->obj.matlabCodegenIsDeleted = true;
    if ((localDW->obj.isInitialized == 1) && localDW->obj.isSetupComplete) {
      uint32_T SPIPinsLoc;
      SPIPinsLoc = MW_UNDEFINED_VALUE;
      MW_SPI_Close(localDW->obj.MW_SPI_HANDLE, SPIPinsLoc, SPIPinsLoc,
                   SPIPinsLoc, 10U);
    }
  }

  /* End of Terminate for MATLABSystem: '<S57>/SPI Controller Transfer1' */
}

/* System initialize for atomic system: */
void E_SPIControllerTransfer4_g_Init(DW_SPIControllerTransfer4_E_f_T *localDW)
{
  STM32_SPI_ModuleStruct_T b;

  /* Start for MATLABSystem: '<S57>/SPI Controller Transfer4' */
  localDW->obj.matlabCodegenIsDeleted = false;
  localDW->objisempty = true;
  localDW->obj.isInitialized = 1;
  b.PeripheralPtr = SPI1;
  localDW->obj.MW_SPI_HANDLE = SPI_STM32_Init(&b);
  MW_STM32_SPI_SetFormat(localDW->obj.MW_SPI_HANDLE, 0U, 1792U, MW_SPI_MODE_2);
  localDW->obj.isSetupComplete = true;
}

/* Output and update for atomic system: */
void ENV_SPIControllerTransfer4_p(const uint8_T rtu_0[4],
  DW_SPIControllerTransfer4_E_f_T *localDW)
{
  uint8_T tmp[4];
  uint8_T status;

  /* MATLABSystem: '<S57>/SPI Controller Transfer4' */
  status = MW_STM32_SPI_SetFormat(localDW->obj.MW_SPI_HANDLE, 0U, 1792U,
    MW_SPI_MODE_2);
  if (status == 0) {
    GPIO_TypeDef * portNameLoc;
    portNameLoc = GPIOC;
    LL_GPIO_ResetOutputPin(portNameLoc, 1024U);
    MW_SPI_MasterWriteRead_Databits(localDW->obj.MW_SPI_HANDLE, &rtu_0[0], &tmp
      [0], 0, 4U, 1, 10U);
    LL_GPIO_SetOutputPin(portNameLoc, 1024U);
  }

  /* End of MATLABSystem: '<S57>/SPI Controller Transfer4' */
}

/* Termination for atomic system: */
void E_SPIControllerTransfer4_e_Term(DW_SPIControllerTransfer4_E_f_T *localDW)
{
  /* Terminate for MATLABSystem: '<S57>/SPI Controller Transfer4' */
  if (!localDW->obj.matlabCodegenIsDeleted) {
    localDW->obj.matlabCodegenIsDeleted = true;
    if ((localDW->obj.isInitialized == 1) && localDW->obj.isSetupComplete) {
      uint32_T SPIPinsLoc;
      SPIPinsLoc = MW_UNDEFINED_VALUE;
      MW_SPI_Close(localDW->obj.MW_SPI_HANDLE, SPIPinsLoc, SPIPinsLoc,
                   SPIPinsLoc, 10U);
    }
  }

  /* End of Terminate for MATLABSystem: '<S57>/SPI Controller Transfer4' */
}

/* System initialize for atomic system: */
void E_SPIControllerTransfer1_k_Init(DW_SPIControllerTransfe_fwu4s_T *localDW)
{
  STM32_SPI_ModuleStruct_T b;

  /* Start for MATLABSystem: '<S60>/SPI Controller Transfer1' */
  localDW->obj.matlabCodegenIsDeleted = false;
  localDW->objisempty = true;
  localDW->obj.isInitialized = 1;
  b.PeripheralPtr = SPI1;
  localDW->obj.MW_SPI_HANDLE = SPI_STM32_Init(&b);
  MW_STM32_SPI_SetFormat(localDW->obj.MW_SPI_HANDLE, 0U, 1792U, MW_SPI_MODE_2);
  localDW->obj.isSetupComplete = true;
}

/* Output and update for atomic system: */
void EN_SPIControllerTransfer1_pnaev(const uint8_T rtu_0[3],
  DW_SPIControllerTransfe_fwu4s_T *localDW)
{
  uint8_T tmp[3];
  uint8_T status;

  /* MATLABSystem: '<S60>/SPI Controller Transfer1' */
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

  /* End of MATLABSystem: '<S60>/SPI Controller Transfer1' */
}

/* Termination for atomic system: */
void E_SPIControllerTransfer1_l_Term(DW_SPIControllerTransfe_fwu4s_T *localDW)
{
  /* Terminate for MATLABSystem: '<S60>/SPI Controller Transfer1' */
  if (!localDW->obj.matlabCodegenIsDeleted) {
    localDW->obj.matlabCodegenIsDeleted = true;
    if ((localDW->obj.isInitialized == 1) && localDW->obj.isSetupComplete) {
      uint32_T SPIPinsLoc;
      SPIPinsLoc = MW_UNDEFINED_VALUE;
      MW_SPI_Close(localDW->obj.MW_SPI_HANDLE, SPIPinsLoc, SPIPinsLoc,
                   SPIPinsLoc, 1U);
    }
  }

  /* End of Terminate for MATLABSystem: '<S60>/SPI Controller Transfer1' */
}

/* System initialize for atomic system: */
void ENV_SPIControllerTransfer5_Init(DW_SPIControllerTransfer5_ENV_T *localDW)
{
  STM32_SPI_ModuleStruct_T b;

  /* Start for MATLABSystem: '<S60>/SPI Controller Transfer5' */
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

  /* MATLABSystem: '<S60>/SPI Controller Transfer5' */
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

  /* End of MATLABSystem: '<S60>/SPI Controller Transfer5' */
}

/* Termination for atomic system: */
void ENV_SPIControllerTransfer5_Term(DW_SPIControllerTransfer5_ENV_T *localDW)
{
  /* Terminate for MATLABSystem: '<S60>/SPI Controller Transfer5' */
  if (!localDW->obj.matlabCodegenIsDeleted) {
    localDW->obj.matlabCodegenIsDeleted = true;
    if ((localDW->obj.isInitialized == 1) && localDW->obj.isSetupComplete) {
      uint32_T SPIPinsLoc;
      SPIPinsLoc = MW_UNDEFINED_VALUE;
      MW_SPI_Close(localDW->obj.MW_SPI_HANDLE, SPIPinsLoc, SPIPinsLoc,
                   SPIPinsLoc, 1U);
    }
  }

  /* End of Terminate for MATLABSystem: '<S60>/SPI Controller Transfer5' */
}

/* System initialize for atomic system: */
void SPIControllerTransfer1_na_Init(DW_SPIControllerTransf_fwu4sl_T *localDW)
{
  STM32_SPI_ModuleStruct_T b;

  /* Start for MATLABSystem: '<S62>/SPI Controller Transfer1' */
  localDW->obj.matlabCodegenIsDeleted = false;
  localDW->objisempty = true;
  localDW->obj.isInitialized = 1;
  b.PeripheralPtr = SPI1;
  localDW->obj.MW_SPI_HANDLE = SPI_STM32_Init(&b);
  MW_STM32_SPI_SetFormat(localDW->obj.MW_SPI_HANDLE, 0U, 1792U, MW_SPI_MODE_2);
  localDW->obj.isSetupComplete = true;
}

/* Output and update for atomic system: */
void E_SPIControllerTransfer1_pnaevv(const uint8_T rtu_0[3],
  DW_SPIControllerTransf_fwu4sl_T *localDW)
{
  uint8_T tmp[3];
  uint8_T status;

  /* MATLABSystem: '<S62>/SPI Controller Transfer1' */
  status = MW_STM32_SPI_SetFormat(localDW->obj.MW_SPI_HANDLE, 0U, 1792U,
    MW_SPI_MODE_2);
  if (status == 0) {
    GPIO_TypeDef * portNameLoc;
    portNameLoc = GPIOC;
    LL_GPIO_ResetOutputPin(portNameLoc, 32U);
    MW_SPI_MasterWriteRead_Databits(localDW->obj.MW_SPI_HANDLE, &rtu_0[0], &tmp
      [0], 0, 3U, 1, 10U);
    LL_GPIO_SetOutputPin(portNameLoc, 32U);
  }

  /* End of MATLABSystem: '<S62>/SPI Controller Transfer1' */
}

/* Termination for atomic system: */
void E_SPIControllerTransfer1_b_Term(DW_SPIControllerTransf_fwu4sl_T *localDW)
{
  /* Terminate for MATLABSystem: '<S62>/SPI Controller Transfer1' */
  if (!localDW->obj.matlabCodegenIsDeleted) {
    localDW->obj.matlabCodegenIsDeleted = true;
    if ((localDW->obj.isInitialized == 1) && localDW->obj.isSetupComplete) {
      uint32_T SPIPinsLoc;
      SPIPinsLoc = MW_UNDEFINED_VALUE;
      MW_SPI_Close(localDW->obj.MW_SPI_HANDLE, SPIPinsLoc, SPIPinsLoc,
                   SPIPinsLoc, 5U);
    }
  }

  /* End of Terminate for MATLABSystem: '<S62>/SPI Controller Transfer1' */
}

/* System initialize for atomic system: */
void E_SPIControllerTransfer4_e_Init(DW_SPIControllerTransfer4_fw_T *localDW)
{
  STM32_SPI_ModuleStruct_T b;

  /* Start for MATLABSystem: '<S62>/SPI Controller Transfer4' */
  localDW->obj.matlabCodegenIsDeleted = false;
  localDW->objisempty = true;
  localDW->obj.isInitialized = 1;
  b.PeripheralPtr = SPI1;
  localDW->obj.MW_SPI_HANDLE = SPI_STM32_Init(&b);
  MW_STM32_SPI_SetFormat(localDW->obj.MW_SPI_HANDLE, 0U, 1792U, MW_SPI_MODE_2);
  localDW->obj.isSetupComplete = true;
}

/* Output and update for atomic system: */
void ENV_SPIControllerTransfer4_pn(const uint8_T rtu_0[4],
  DW_SPIControllerTransfer4_fw_T *localDW)
{
  uint8_T tmp[4];
  uint8_T status;

  /* MATLABSystem: '<S62>/SPI Controller Transfer4' */
  status = MW_STM32_SPI_SetFormat(localDW->obj.MW_SPI_HANDLE, 0U, 1792U,
    MW_SPI_MODE_2);
  if (status == 0) {
    GPIO_TypeDef * portNameLoc;
    portNameLoc = GPIOC;
    LL_GPIO_ResetOutputPin(portNameLoc, 32U);
    MW_SPI_MasterWriteRead_Databits(localDW->obj.MW_SPI_HANDLE, &rtu_0[0], &tmp
      [0], 0, 4U, 1, 10U);
    LL_GPIO_SetOutputPin(portNameLoc, 32U);
  }

  /* End of MATLABSystem: '<S62>/SPI Controller Transfer4' */
}

/* Termination for atomic system: */
void E_SPIControllerTransfer4_o_Term(DW_SPIControllerTransfer4_fw_T *localDW)
{
  /* Terminate for MATLABSystem: '<S62>/SPI Controller Transfer4' */
  if (!localDW->obj.matlabCodegenIsDeleted) {
    localDW->obj.matlabCodegenIsDeleted = true;
    if ((localDW->obj.isInitialized == 1) && localDW->obj.isSetupComplete) {
      uint32_T SPIPinsLoc;
      SPIPinsLoc = MW_UNDEFINED_VALUE;
      MW_SPI_Close(localDW->obj.MW_SPI_HANDLE, SPIPinsLoc, SPIPinsLoc,
                   SPIPinsLoc, 5U);
    }
  }

  /* End of Terminate for MATLABSystem: '<S62>/SPI Controller Transfer4' */
}

/* Model step function */
void ENV_step(void)
{
  GPIO_TypeDef * portNameLoc;
  CANMessage rtb_Message_i;
  real_T rtb_UnitDelay1_m;
  real_T rtb_UnitDelay2_o;
  real_T rtb_UnitDelay4;
  int32_T c;
  uint32_T pinReadLoc;
  uint8_T rtb_VectorConcatenate[15];
  uint8_T rtb_VectorConcatenate1[15];
  uint8_T rtb_VectorConcatenate2[15];
  uint8_T rtb_VectorConcatenate3[15];
  uint8_T rtb_RTSByte;
  uint8_T rtb_RTSByte_eh;
  uint8_T rtb_RTSByte_g;
  uint8_T status;
  boolean_T rtb_NOT1;

  /* Outputs for Enabled SubSystem: '<S16>/Initialize' incorporates:
   *  EnablePort: '<S59>/Enable'
   */
  /* UnitDelay: '<S16>/Unit Delay5' */
  if (ENV_DW.UnitDelay5_DSTATE > 0.0) {
    /* SignalConversion generated from: '<S59>/MCPInitialized' */
    ENV_B.OutportBufferForMCPInitialized = ENV_ConstB.Constant;
  }

  /* End of UnitDelay: '<S16>/Unit Delay5' */
  /* End of Outputs for SubSystem: '<S16>/Initialize' */

  /* MATLAB Function: '<S1>/MATLAB Function' incorporates:
   *  Constant: '<S1>/Offset'
   *  Constant: '<S1>/Period'
   *  Constant: '<S1>/RTS'
   */
  ENV_MATLABFunction(ENV_ConstB.CANPack1.ID, ENV_ConstB.CANPack1.Length,
                     ENV_ConstB.CANPack1.Data, 129, 5, 0,
                     ENV_B.OutportBufferForMCPInitialized,
                     &rtb_VectorConcatenate[0], &rtb_VectorConcatenate[2],
                     &rtb_RTSByte_g, &ENV_DW.sf_MATLABFunction);

  /* Constant: '<S1>/TX Buffer 0' */
  rtb_VectorConcatenate[1] = 49U;
  ENV_SPIControllerTransfer(rtb_VectorConcatenate, &ENV_DW.SPIControllerTransfer);

  /* MATLAB Function: '<S1>/MATLAB Function1' incorporates:
   *  Constant: '<S1>/Offset1'
   *  Constant: '<S1>/Period1'
   *  Constant: '<S1>/RTS1'
   */
  ENV_MATLABFunction(ENV_ConstB.CANPack2.ID, ENV_ConstB.CANPack2.Length,
                     ENV_ConstB.CANPack2.Data, 129, 5, 2,
                     ENV_B.OutportBufferForMCPInitialized,
                     &rtb_VectorConcatenate1[0], &rtb_VectorConcatenate1[2],
                     &rtb_RTSByte_eh, &ENV_DW.sf_MATLABFunction1);

  /* Constant: '<S1>/TX Buffer 1' */
  rtb_VectorConcatenate1[1] = 49U;
  ENV_SPIControllerTransfer(rtb_VectorConcatenate1,
    &ENV_DW.SPIControllerTransfer2);

  /* MATLAB Function: '<S1>/MATLAB Function2' incorporates:
   *  Constant: '<S1>/Offset2'
   *  Constant: '<S1>/Period2'
   *  Constant: '<S1>/RTS2'
   */
  ENV_MATLABFunction(ENV_ConstB.CANPack3.ID, ENV_ConstB.CANPack3.Length,
                     ENV_ConstB.CANPack3.Data, 129, 5, 4,
                     ENV_B.OutportBufferForMCPInitialized,
                     &rtb_VectorConcatenate2[0], &rtb_VectorConcatenate2[2],
                     &rtb_RTSByte, &ENV_DW.sf_MATLABFunction2);

  /* Constant: '<S1>/TX Buffer 2' */
  rtb_VectorConcatenate2[1] = 49U;
  ENV_SPIControllerTransfer(rtb_VectorConcatenate2,
    &ENV_DW.SPIControllerTransfer4);

  /* MATLABSystem: '<S49>/Digital Port Read' */
  pinReadLoc = LL_GPIO_ReadInputPort(GPIOB);

  /* Outputs for Enabled SubSystem: '<Root>/CAN1 RX' incorporates:
   *  EnablePort: '<S2>/Enable'
   */
  /* Logic: '<Root>/NOT3' incorporates:
   *  Constant: '<S2>/Read RX Buffer start at RXB0SIDH1'
   *  Constant: '<S2>/Read RX Buffer start at RXB0SIDH2'
   *  Constant: '<S2>/Read RX Buffer start at RXB0SIDH3'
   *  Constant: '<S2>/Read RX Buffer start at RXB0SIDH4'
   *  Constant: '<S2>/Read RX Buffer start at RXB0SIDH5'
   *  Constant: '<S2>/Read RX Buffer start at RXB0SIDH6'
   *  Constant: '<S2>/Read RX Buffer start at RXB0SIDH7'
   *  Constant: '<S2>/Read RX Buffer start at RXB0SIDH8'
   *  MATLABSystem: '<S49>/Digital Port Read'
   * */
  if ((pinReadLoc & 4U) == 0U) {
    ENV_SPIControllerTransfer1_p(ENV_ConstP.pooled6,
      &ENV_B.SPIControllerTransfer8, &ENV_DW.SPIControllerTransfer8);

    /* MATLAB Function: '<S2>/MATLAB Function8' incorporates:
     *  Constant: '<S2>/Read RX Buffer start at RXB0SIDH8'
     */
    ENV_MATLABFunction1(ENV_B.SPIControllerTransfer8.SPIControllerTransfer1,
                        &ENV_B.Message_hw);
    ENV_SPIControllerTransfer1_p(ENV_ConstP.pooled6,
      &ENV_B.SPIControllerTransfer1_p, &ENV_DW.SPIControllerTransfer1_p);

    /* MATLAB Function: '<S2>/MATLAB Function1' incorporates:
     *  Constant: '<S2>/Read RX Buffer start at RXB0SIDH1'
     */
    ENV_MATLABFunction1(ENV_B.SPIControllerTransfer1_p.SPIControllerTransfer1,
                        &rtb_Message_i);
    ENV_SPIControllerTransfer1_p(ENV_ConstP.pooled6,
      &ENV_B.SPIControllerTransfer2_p, &ENV_DW.SPIControllerTransfer2_p);

    /* MATLAB Function: '<S2>/MATLAB Function2' incorporates:
     *  Constant: '<S2>/Read RX Buffer start at RXB0SIDH2'
     */
    ENV_MATLABFunction1(ENV_B.SPIControllerTransfer2_p.SPIControllerTransfer1,
                        &rtb_Message_i);
    ENV_SPIControllerTransfer1_p(ENV_ConstP.pooled6,
      &ENV_B.SPIControllerTransfer3_p, &ENV_DW.SPIControllerTransfer3_p);

    /* MATLAB Function: '<S2>/MATLAB Function3' incorporates:
     *  Constant: '<S2>/Read RX Buffer start at RXB0SIDH3'
     */
    ENV_MATLABFunction1(ENV_B.SPIControllerTransfer3_p.SPIControllerTransfer1,
                        &rtb_Message_i);
    ENV_SPIControllerTransfer1_p(ENV_ConstP.pooled6,
      &ENV_B.SPIControllerTransfer4_p, &ENV_DW.SPIControllerTransfer4_p);

    /* MATLAB Function: '<S2>/MATLAB Function4' incorporates:
     *  Constant: '<S2>/Read RX Buffer start at RXB0SIDH4'
     */
    ENV_MATLABFunction1(ENV_B.SPIControllerTransfer4_p.SPIControllerTransfer1,
                        &rtb_Message_i);
    ENV_SPIControllerTransfer1_p(ENV_ConstP.pooled6,
      &ENV_B.SPIControllerTransfer5_p, &ENV_DW.SPIControllerTransfer5_p);

    /* MATLAB Function: '<S2>/MATLAB Function5' incorporates:
     *  Constant: '<S2>/Read RX Buffer start at RXB0SIDH5'
     */
    ENV_MATLABFunction1(ENV_B.SPIControllerTransfer5_p.SPIControllerTransfer1,
                        &rtb_Message_i);
    ENV_SPIControllerTransfer1_p(ENV_ConstP.pooled6,
      &ENV_B.SPIControllerTransfer6_p, &ENV_DW.SPIControllerTransfer6_p);

    /* MATLAB Function: '<S2>/MATLAB Function6' incorporates:
     *  Constant: '<S2>/Read RX Buffer start at RXB0SIDH6'
     */
    ENV_MATLABFunction1(ENV_B.SPIControllerTransfer6_p.SPIControllerTransfer1,
                        &rtb_Message_i);
    ENV_SPIControllerTransfer1_p(ENV_ConstP.pooled6,
      &ENV_B.SPIControllerTransfer7_p, &ENV_DW.SPIControllerTransfer7_p);

    /* MATLAB Function: '<S2>/MATLAB Function7' incorporates:
     *  Constant: '<S2>/Read RX Buffer start at RXB0SIDH7'
     */
    ENV_MATLABFunction1(ENV_B.SPIControllerTransfer7_p.SPIControllerTransfer1,
                        &rtb_Message_i);
  }

  /* End of Logic: '<Root>/NOT3' */
  /* End of Outputs for SubSystem: '<Root>/CAN1 RX' */

  /* DataTypeConversion: '<Root>/Data Type Conversion6' */
  ENV_B.DataTypeConversion6 = ENV_B.Message_hw.ID;

  /* MATLABSystem: '<S47>/Digital Port Read' */
  pinReadLoc = LL_GPIO_ReadInputPort(GPIOC);

  /* Outputs for Enabled SubSystem: '<Root>/CAN2 RX' incorporates:
   *  EnablePort: '<S3>/Enable'
   */
  /* Logic: '<Root>/NOT2' incorporates:
   *  Constant: '<S3>/Read RX Buffer start at RXB0SIDH1'
   *  Constant: '<S3>/Read RX Buffer start at RXB0SIDH2'
   *  Constant: '<S3>/Read RX Buffer start at RXB0SIDH3'
   *  Constant: '<S3>/Read RX Buffer start at RXB0SIDH4'
   *  Constant: '<S3>/Read RX Buffer start at RXB0SIDH5'
   *  Constant: '<S3>/Read RX Buffer start at RXB0SIDH6'
   *  Constant: '<S3>/Read RX Buffer start at RXB0SIDH7'
   *  Constant: '<S3>/Read RX Buffer start at RXB0SIDH8'
   *  MATLABSystem: '<S47>/Digital Port Read'
   * */
  if ((pinReadLoc & 4096U) == 0U) {
    ENV_SPIControllerTransfer1_pn(ENV_ConstP.pooled6,
      &ENV_B.SPIControllerTransfer8_p, &ENV_DW.SPIControllerTransfer8_p);

    /* MATLAB Function: '<S3>/MATLAB Function8' incorporates:
     *  Constant: '<S3>/Read RX Buffer start at RXB0SIDH8'
     */
    ENV_MATLABFunction1(ENV_B.SPIControllerTransfer8_p.SPIControllerTransfer1,
                        &ENV_B.Message_o);
    ENV_SPIControllerTransfer1_pn(ENV_ConstP.pooled6,
      &ENV_B.SPIControllerTransfer1_pn, &ENV_DW.SPIControllerTransfer1_pn);

    /* MATLAB Function: '<S3>/MATLAB Function1' incorporates:
     *  Constant: '<S3>/Read RX Buffer start at RXB0SIDH1'
     */
    ENV_MATLABFunction1(ENV_B.SPIControllerTransfer1_pn.SPIControllerTransfer1,
                        &rtb_Message_i);
    ENV_SPIControllerTransfer1_pn(ENV_ConstP.pooled6,
      &ENV_B.SPIControllerTransfer2_pn, &ENV_DW.SPIControllerTransfer2_pn);

    /* MATLAB Function: '<S3>/MATLAB Function2' incorporates:
     *  Constant: '<S3>/Read RX Buffer start at RXB0SIDH2'
     */
    ENV_MATLABFunction1(ENV_B.SPIControllerTransfer2_pn.SPIControllerTransfer1,
                        &rtb_Message_i);
    ENV_SPIControllerTransfer1_pn(ENV_ConstP.pooled6,
      &ENV_B.SPIControllerTransfer3_pn, &ENV_DW.SPIControllerTransfer3_pn);

    /* MATLAB Function: '<S3>/MATLAB Function3' incorporates:
     *  Constant: '<S3>/Read RX Buffer start at RXB0SIDH3'
     */
    ENV_MATLABFunction1(ENV_B.SPIControllerTransfer3_pn.SPIControllerTransfer1,
                        &rtb_Message_i);
    ENV_SPIControllerTransfer1_pn(ENV_ConstP.pooled6,
      &ENV_B.SPIControllerTransfer4_pn, &ENV_DW.SPIControllerTransfer4_pn);

    /* MATLAB Function: '<S3>/MATLAB Function4' incorporates:
     *  Constant: '<S3>/Read RX Buffer start at RXB0SIDH4'
     */
    ENV_MATLABFunction1(ENV_B.SPIControllerTransfer4_pn.SPIControllerTransfer1,
                        &rtb_Message_i);
    ENV_SPIControllerTransfer1_pn(ENV_ConstP.pooled6,
      &ENV_B.SPIControllerTransfer5_pn, &ENV_DW.SPIControllerTransfer5_pn);

    /* MATLAB Function: '<S3>/MATLAB Function5' incorporates:
     *  Constant: '<S3>/Read RX Buffer start at RXB0SIDH5'
     */
    ENV_MATLABFunction1(ENV_B.SPIControllerTransfer5_pn.SPIControllerTransfer1,
                        &rtb_Message_i);
    ENV_SPIControllerTransfer1_pn(ENV_ConstP.pooled6,
      &ENV_B.SPIControllerTransfer6_pn, &ENV_DW.SPIControllerTransfer6_pn);

    /* MATLAB Function: '<S3>/MATLAB Function6' incorporates:
     *  Constant: '<S3>/Read RX Buffer start at RXB0SIDH6'
     */
    ENV_MATLABFunction1(ENV_B.SPIControllerTransfer6_pn.SPIControllerTransfer1,
                        &rtb_Message_i);
    ENV_SPIControllerTransfer1_pn(ENV_ConstP.pooled6,
      &ENV_B.SPIControllerTransfer7_pn, &ENV_DW.SPIControllerTransfer7_pn);

    /* MATLAB Function: '<S3>/MATLAB Function7' incorporates:
     *  Constant: '<S3>/Read RX Buffer start at RXB0SIDH7'
     */
    ENV_MATLABFunction1(ENV_B.SPIControllerTransfer7_pn.SPIControllerTransfer1,
                        &rtb_Message_i);
  }

  /* End of Logic: '<Root>/NOT2' */
  /* End of Outputs for SubSystem: '<Root>/CAN2 RX' */

  /* DataTypeConversion: '<Root>/Data Type Conversion4' */
  ENV_B.DataTypeConversion4 = ENV_B.Message_o.ID;

  /* MATLABSystem: '<S43>/Digital Port Read' */
  pinReadLoc = LL_GPIO_ReadInputPort(GPIOA);

  /* Outputs for Enabled SubSystem: '<Root>/CAN3 RX' incorporates:
   *  EnablePort: '<S4>/Enable'
   */
  /* Logic: '<Root>/NOT4' incorporates:
   *  MATLABSystem: '<S43>/Digital Port Read'
   * */
  if ((pinReadLoc & 4U) == 0U) {
    /* MATLABSystem: '<S4>/SPI Controller Transfer7' incorporates:
     *  Constant: '<S4>/Read RX Buffer start at RXB0SIDH7'
     */
    status = MW_STM32_SPI_SetFormat(ENV_DW.obj_gf.MW_SPI_HANDLE, 0U, 1792U,
      MW_SPI_MODE_2);
    if (status == 0) {
      portNameLoc = GPIOA;
      LL_GPIO_ResetOutputPin(portNameLoc, 2U);
      MW_SPI_MasterWriteRead_Databits(ENV_DW.obj_gf.MW_SPI_HANDLE,
        &ENV_ConstP.pooled6[0], &rtb_VectorConcatenate[0], 0, 15U, 1, 10U);
      LL_GPIO_SetOutputPin(portNameLoc, 2U);
    }

    /* MATLAB Function: '<S4>/MATLAB Function7' incorporates:
     *  MATLABSystem: '<S4>/SPI Controller Transfer7'
     */
    ENV_MATLABFunction1(rtb_VectorConcatenate, &ENV_B.Message_h);
  }

  /* End of Logic: '<Root>/NOT4' */
  /* End of Outputs for SubSystem: '<Root>/CAN3 RX' */

  /* DataTypeConversion: '<Root>/Data Type Conversion' */
  ENV_B.DataTypeConversion = ENV_B.Message_h.ID;

  /* MATLABSystem: '<S45>/Digital Port Read' */
  pinReadLoc = LL_GPIO_ReadInputPort(GPIOC);

  /* Logic: '<Root>/NOT1' incorporates:
   *  MATLABSystem: '<S45>/Digital Port Read'
   * */
  rtb_NOT1 = ((pinReadLoc & 16U) == 0U);

  /* Outputs for Enabled SubSystem: '<Root>/CAN4 RX' incorporates:
   *  EnablePort: '<S5>/Enable'
   */
  if (rtb_NOT1) {
    /* MATLABSystem: '<S5>/SPI Controller Transfer7' incorporates:
     *  Constant: '<S5>/Read RX Buffer start at RXB0SIDH7'
     */
    status = MW_STM32_SPI_SetFormat(ENV_DW.obj_g.MW_SPI_HANDLE, 0U, 1792U,
      MW_SPI_MODE_2);
    if (status == 0) {
      portNameLoc = GPIOC;
      LL_GPIO_ResetOutputPin(portNameLoc, 32U);
      MW_SPI_MasterWriteRead_Databits(ENV_DW.obj_g.MW_SPI_HANDLE,
        &ENV_ConstP.pooled6[0], &rtb_VectorConcatenate[0], 0, 15U, 1, 10U);
      LL_GPIO_SetOutputPin(portNameLoc, 32U);
    }

    /* MATLAB Function: '<S5>/MATLAB Function7' incorporates:
     *  MATLABSystem: '<S5>/SPI Controller Transfer7'
     */
    ENV_MATLABFunction1(rtb_VectorConcatenate, &ENV_B.Message);
  }

  /* End of Outputs for SubSystem: '<Root>/CAN4 RX' */

  /* DataTypeConversion: '<Root>/Data Type Conversion2' */
  ENV_B.DataTypeConversion2 = ENV_B.Message.ID;

  /* S-Function (scanpack): '<S1>/CAN Pack4' */
  /* S-Function (scanpack): '<S1>/CAN Pack4' */
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
        real_T result = ENV_B.DataTypeConversion6;

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
        real_T result = ENV_B.DataTypeConversion4;

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
        real_T result = ENV_B.DataTypeConversion2;

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

  /* MATLAB Function: '<S1>/MATLAB Function4' incorporates:
   *  Constant: '<S1>/Offset3'
   *  Constant: '<S1>/Period3'
   *  Constant: '<S1>/RTS3'
   */
  ENV_MATLABFunction(ENV_B.CANPack4.ID, ENV_B.CANPack4.Length,
                     ENV_B.CANPack4.Data, 129, 5, 3,
                     ENV_B.OutportBufferForMCPInitialized,
                     &rtb_VectorConcatenate3[0], &rtb_VectorConcatenate3[2],
                     &status, &ENV_DW.sf_MATLABFunction4);

  /* Constant: '<S1>/TX Buffer 3' */
  rtb_VectorConcatenate3[1] = 49U;
  ENV_SPIControllerTransfer(rtb_VectorConcatenate3,
    &ENV_DW.SPIControllerTransfer6);
  ENV_SPIControllerTransfer1(rtb_RTSByte_g, &ENV_DW.SPIControllerTransfer1);
  ENV_SPIControllerTransfer1(rtb_RTSByte_eh, &ENV_DW.SPIControllerTransfer3);
  ENV_SPIControllerTransfer1(rtb_RTSByte, &ENV_DW.SPIControllerTransfer5);
  ENV_SPIControllerTransfer1(status, &ENV_DW.SPIControllerTransfer7);

  /* MATLABSystem: '<S53>/Digital Port Write' */
  portNameLoc = GPIOB;
  if (rtb_NOT1) {
    c = 32;
  } else {
    c = 0;
  }

  LL_GPIO_SetOutputPin(portNameLoc, (uint32_T)c);
  LL_GPIO_ResetOutputPin(portNameLoc, ~(uint32_T)c & 32U);

  /* End of MATLABSystem: '<S53>/Digital Port Write' */

  /* UnitDelay: '<S16>/Unit Delay4' */
  rtb_UnitDelay4 = ENV_DW.UnitDelay4_DSTATE;

  /* Outputs for Enabled SubSystem: '<S16>/MCPInit' incorporates:
   *  EnablePort: '<S60>/Enable'
   */
  /* RelationalOperator: '<S58>/FixPt Relational Operator' incorporates:
   *  Constant: '<S60>/ 000: normal mode, 0: don't abort pending transmit buffers, 0: one-shot disabled, 0: CLKOUT disabled, 00: sysclk//1 | 0000 0000 | 0x00'
   *  Constant: '<S60>/CANINTE'
   *  Constant: '<S60>/CNF1'
   *  Constant: '<S60>/CNF2'
   *  Constant: '<S60>/CNF3'
   *  Constant: '<S60>/Clear flags'
   *  Constant: '<S60>/Set acceptance filters'
   *  UnitDelay: '<S16>/Unit Delay4'
   *  UnitDelay: '<S58>/Delay Input1'
   *
   * Block description for '<S58>/Delay Input1':
   *
   *  Store in Global RAM
   */
  if (ENV_DW.UnitDelay4_DSTATE > ENV_DW.DelayInput1_DSTATE) {
    /* MATLABSystem: '<S60>/SPI Controller Transfer' incorporates:
     *  Constant: '<S60>/Enter Configuration Mode'
     */
    status = MW_STM32_SPI_SetFormat(ENV_DW.obj_l.MW_SPI_HANDLE, 0U, 1792U,
      MW_SPI_MODE_2);
    if (status == 0) {
      portNameLoc = GPIOA;
      LL_GPIO_ResetOutputPin(portNameLoc, 2U);
      MW_SPI_MasterWriteRead_Databits(ENV_DW.obj_l.MW_SPI_HANDLE,
        &ENV_ConstP.pooled7, &rtb_RTSByte_g, 0, 1U, 1, 10U);
      LL_GPIO_SetOutputPin(portNameLoc, 2U);
    }

    /* End of MATLABSystem: '<S60>/SPI Controller Transfer' */
    EN_SPIControllerTransfer1_pnaev(ENV_ConstP.pooled8,
      &ENV_DW.SPIControllerTransfer1_pnaev);
    EN_SPIControllerTransfer1_pnaev(ENV_ConstP.pooled9,
      &ENV_DW.SPIControllerTransfer2_pnaev);
    EN_SPIControllerTransfer1_pnaev(ENV_ConstP.pooled10,
      &ENV_DW.SPIControllerTransfer3_pnaev);
    ENV_SPIControllerTransfer5(ENV_ConstP.pooled11,
      &ENV_DW.SPIControllerTransfer5_pnaev);
    EN_SPIControllerTransfer1_pnaev(ENV_ConstP.pooled12,
      &ENV_DW.SPIControllerTransfer6_pnaev);
    ENV_SPIControllerTransfer5(ENV_ConstP.pooled13,
      &ENV_DW.SPIControllerTransfer7_pnaevvf);
    EN_SPIControllerTransfer1_pnaev(ENV_ConstP.pooled14,
      &ENV_DW.SPIControllerTransfer4_pnaev);
  }

  /* End of RelationalOperator: '<S58>/FixPt Relational Operator' */
  /* End of Outputs for SubSystem: '<S16>/MCPInit' */

  /* Update for UnitDelay: '<S16>/Unit Delay4' incorporates:
   *  UnitDelay: '<S16>/Unit Delay3'
   */
  ENV_DW.UnitDelay4_DSTATE = ENV_DW.UnitDelay3_DSTATE;

  /* Step: '<S16>/Step1' incorporates:
   *  UnitDelay: '<S16>/Unit Delay3'
   */
  rtb_NOT1 = !(((ENV_M->Timing.clockTick0) * 0.001) < 1.0);
  ENV_DW.UnitDelay3_DSTATE = rtb_NOT1;

  /* MATLABSystem: '<S51>/Digital Port Write' incorporates:
   *  Constant: '<S6>/Constant'
   *  RelationalOperator: '<S6>/Compare'
   *  UnitDelay: '<S7>/Output'
   */
  portNameLoc = GPIOB;
  if (ENV_DW.Output_DSTATE >= 125) {
    c = 16;
  } else {
    c = 0;
  }

  LL_GPIO_SetOutputPin(portNameLoc, (uint32_T)c);
  LL_GPIO_ResetOutputPin(portNameLoc, ~(uint32_T)c & 16U);

  /* End of MATLABSystem: '<S51>/Digital Port Write' */

  /* Switch: '<S41>/FixPt Switch' incorporates:
   *  Constant: '<S40>/FixPt Constant'
   *  Constant: '<S41>/Constant'
   *  Sum: '<S40>/FixPt Sum1'
   *  UnitDelay: '<S7>/Output'
   */
  if ((uint8_T)(ENV_DW.Output_DSTATE + 1) > 250) {
    ENV_DW.Output_DSTATE = 0U;
  } else {
    ENV_DW.Output_DSTATE++;
  }

  /* End of Switch: '<S41>/FixPt Switch' */

  /* Outputs for Enabled SubSystem: '<S14>/MCPInit' incorporates:
   *  EnablePort: '<S55>/Enable'
   */
  /* RelationalOperator: '<S54>/FixPt Relational Operator' incorporates:
   *  Constant: '<S55>/ 000: normal mode, 0: don't abort pending transmit buffers, 0: one-shot disabled, 0: CLKOUT disabled, 00: sysclk//1 | 0000 0000 | 0x00'
   *  Constant: '<S55>/CANINTE'
   *  Constant: '<S55>/CNF1'
   *  Constant: '<S55>/CNF2'
   *  Constant: '<S55>/CNF3'
   *  Constant: '<S55>/Clear flags'
   *  Constant: '<S55>/Set acceptance filters'
   *  UnitDelay: '<S54>/Delay Input1'
   *
   * Block description for '<S54>/Delay Input1':
   *
   *  Store in Global RAM
   */
  if ((real_T)rtb_NOT1 > ENV_DW.DelayInput1_DSTATE_a) {
    /* MATLABSystem: '<S55>/SPI Controller Transfer' incorporates:
     *  Constant: '<S55>/Enter Configuration Mode'
     */
    status = MW_STM32_SPI_SetFormat(ENV_DW.obj_o.MW_SPI_HANDLE, 0U, 1792U,
      MW_SPI_MODE_2);
    if (status == 0) {
      portNameLoc = GPIOB;
      LL_GPIO_ResetOutputPin(portNameLoc, 2U);
      MW_SPI_MasterWriteRead_Databits(ENV_DW.obj_o.MW_SPI_HANDLE,
        &ENV_ConstP.pooled7, &rtb_RTSByte_g, 0, 1U, 1, 10U);
      LL_GPIO_SetOutputPin(portNameLoc, 2U);
    }

    /* End of MATLABSystem: '<S55>/SPI Controller Transfer' */
    ENV_SPIControllerTransfer1_pna(ENV_ConstP.pooled8,
      &ENV_DW.SPIControllerTransfer1_pna);
    ENV_SPIControllerTransfer1_pna(ENV_ConstP.pooled9,
      &ENV_DW.SPIControllerTransfer2_pna);
    ENV_SPIControllerTransfer1_pna(ENV_ConstP.pooled10,
      &ENV_DW.SPIControllerTransfer3_pna);
    ENV_SPIControllerTransfer4(ENV_ConstP.pooled11,
      &ENV_DW.SPIControllerTransfer4_pna);
    ENV_SPIControllerTransfer1_pna(ENV_ConstP.pooled12,
      &ENV_DW.SPIControllerTransfer5_pna);
    ENV_SPIControllerTransfer4(ENV_ConstP.pooled13,
      &ENV_DW.SPIControllerTransfer6_pna);
    ENV_SPIControllerTransfer1_pna(ENV_ConstP.pooled14,
      &ENV_DW.SPIControllerTransfer7_pnaev);
  }

  /* End of RelationalOperator: '<S54>/FixPt Relational Operator' */
  /* End of Outputs for SubSystem: '<S14>/MCPInit' */

  /* UnitDelay: '<S15>/Unit Delay1' */
  rtb_UnitDelay1_m = ENV_DW.UnitDelay1_DSTATE_e;

  /* Outputs for Enabled SubSystem: '<S15>/MCPInit' incorporates:
   *  EnablePort: '<S57>/Enable'
   */
  /* RelationalOperator: '<S56>/FixPt Relational Operator' incorporates:
   *  Constant: '<S57>/ 000: normal mode, 0: don't abort pending transmit buffers, 0: one-shot disabled, 0: CLKOUT disabled, 00: sysclk//1 | 0000 0000 | 0x00'
   *  Constant: '<S57>/CANINTE'
   *  Constant: '<S57>/CNF1'
   *  Constant: '<S57>/CNF2'
   *  Constant: '<S57>/CNF3'
   *  Constant: '<S57>/Clear flags'
   *  Constant: '<S57>/Set acceptance filters'
   *  UnitDelay: '<S15>/Unit Delay1'
   *  UnitDelay: '<S56>/Delay Input1'
   *
   * Block description for '<S56>/Delay Input1':
   *
   *  Store in Global RAM
   */
  if (ENV_DW.UnitDelay1_DSTATE_e > ENV_DW.DelayInput1_DSTATE_o) {
    /* MATLABSystem: '<S57>/SPI Controller Transfer' incorporates:
     *  Constant: '<S57>/Enter Configuration Mode'
     */
    status = MW_STM32_SPI_SetFormat(ENV_DW.obj_p.MW_SPI_HANDLE, 0U, 1792U,
      MW_SPI_MODE_2);
    if (status == 0) {
      portNameLoc = GPIOC;
      LL_GPIO_ResetOutputPin(portNameLoc, 1024U);
      MW_SPI_MasterWriteRead_Databits(ENV_DW.obj_p.MW_SPI_HANDLE,
        &ENV_ConstP.pooled7, &rtb_RTSByte_g, 0, 1U, 1, 10U);
      LL_GPIO_SetOutputPin(portNameLoc, 1024U);
    }

    /* End of MATLABSystem: '<S57>/SPI Controller Transfer' */
    ENV_SPIControllerTransfer1_pnae(ENV_ConstP.pooled8,
      &ENV_DW.SPIControllerTransfer1_pnae);
    ENV_SPIControllerTransfer1_pnae(ENV_ConstP.pooled9,
      &ENV_DW.SPIControllerTransfer2_pnae);
    ENV_SPIControllerTransfer1_pnae(ENV_ConstP.pooled10,
      &ENV_DW.SPIControllerTransfer3_pnae);
    ENV_SPIControllerTransfer4_p(ENV_ConstP.pooled11,
      &ENV_DW.SPIControllerTransfer4_pnae);
    ENV_SPIControllerTransfer1_pnae(ENV_ConstP.pooled12,
      &ENV_DW.SPIControllerTransfer5_pnae);
    ENV_SPIControllerTransfer4_p(ENV_ConstP.pooled13,
      &ENV_DW.SPIControllerTransfer6_pnae);
    ENV_SPIControllerTransfer1_pnae(ENV_ConstP.pooled14,
      &ENV_DW.SPIControllerTransfer7_pnaevv);
  }

  /* End of RelationalOperator: '<S56>/FixPt Relational Operator' */
  /* End of Outputs for SubSystem: '<S15>/MCPInit' */

  /* UnitDelay: '<S17>/Unit Delay2' */
  rtb_UnitDelay2_o = ENV_DW.UnitDelay2_DSTATE_f;

  /* Outputs for Enabled SubSystem: '<S17>/MCPInit' incorporates:
   *  EnablePort: '<S62>/Enable'
   */
  /* RelationalOperator: '<S61>/FixPt Relational Operator' incorporates:
   *  Constant: '<S62>/ 000: normal mode, 0: don't abort pending transmit buffers, 0: one-shot disabled, 0: CLKOUT disabled, 00: sysclk//1 | 0000 0000 | 0x00'
   *  Constant: '<S62>/CANINTE'
   *  Constant: '<S62>/CNF1'
   *  Constant: '<S62>/CNF2'
   *  Constant: '<S62>/CNF3'
   *  Constant: '<S62>/Clear flags'
   *  Constant: '<S62>/Set acceptance filters'
   *  UnitDelay: '<S17>/Unit Delay2'
   *  UnitDelay: '<S61>/Delay Input1'
   *
   * Block description for '<S61>/Delay Input1':
   *
   *  Store in Global RAM
   */
  if (ENV_DW.UnitDelay2_DSTATE_f > ENV_DW.DelayInput1_DSTATE_e) {
    /* MATLABSystem: '<S62>/SPI Controller Transfer' incorporates:
     *  Constant: '<S62>/Enter Configuration Mode'
     */
    status = MW_STM32_SPI_SetFormat(ENV_DW.obj.MW_SPI_HANDLE, 0U, 1792U,
      MW_SPI_MODE_2);
    if (status == 0) {
      portNameLoc = GPIOC;
      LL_GPIO_ResetOutputPin(portNameLoc, 32U);
      MW_SPI_MasterWriteRead_Databits(ENV_DW.obj.MW_SPI_HANDLE,
        &ENV_ConstP.pooled7, &rtb_RTSByte_g, 0, 1U, 1, 10U);
      LL_GPIO_SetOutputPin(portNameLoc, 32U);
    }

    /* End of MATLABSystem: '<S62>/SPI Controller Transfer' */
    E_SPIControllerTransfer1_pnaevv(ENV_ConstP.pooled8,
      &ENV_DW.SPIControllerTransfer1_pnaevv);
    E_SPIControllerTransfer1_pnaevv(ENV_ConstP.pooled9,
      &ENV_DW.SPIControllerTransfer2_pnaevv);
    E_SPIControllerTransfer1_pnaevv(ENV_ConstP.pooled10,
      &ENV_DW.SPIControllerTransfer3_pnaevv);
    ENV_SPIControllerTransfer4_pn(ENV_ConstP.pooled11,
      &ENV_DW.SPIControllerTransfer4_pnaevv);
    E_SPIControllerTransfer1_pnaevv(ENV_ConstP.pooled12,
      &ENV_DW.SPIControllerTransfer5_pnaevv);
    ENV_SPIControllerTransfer4_pn(ENV_ConstP.pooled13,
      &ENV_DW.SPIControllerTransfer6_pnaevv);
    E_SPIControllerTransfer1_pnaevv(ENV_ConstP.pooled14,
      &ENV_DW.SPIControllerTransfer7_pnaevvfp);
  }

  /* End of RelationalOperator: '<S61>/FixPt Relational Operator' */
  /* End of Outputs for SubSystem: '<S17>/MCPInit' */

  /* Update for UnitDelay: '<S16>/Unit Delay5' incorporates:
   *  UnitDelay: '<S16>/Unit Delay2'
   */
  ENV_DW.UnitDelay5_DSTATE = ENV_DW.UnitDelay2_DSTATE;

  /* Update for UnitDelay: '<S16>/Unit Delay2' incorporates:
   *  UnitDelay: '<S16>/Unit Delay1'
   */
  ENV_DW.UnitDelay2_DSTATE = ENV_DW.UnitDelay1_DSTATE;

  /* Update for UnitDelay: '<S16>/Unit Delay1' */
  ENV_DW.UnitDelay1_DSTATE = rtb_NOT1;

  /* Update for UnitDelay: '<S58>/Delay Input1'
   *
   * Block description for '<S58>/Delay Input1':
   *
   *  Store in Global RAM
   */
  ENV_DW.DelayInput1_DSTATE = rtb_UnitDelay4;

  /* Update for UnitDelay: '<S54>/Delay Input1'
   *
   * Block description for '<S54>/Delay Input1':
   *
   *  Store in Global RAM
   */
  ENV_DW.DelayInput1_DSTATE_a = rtb_NOT1;

  /* Update for UnitDelay: '<S15>/Unit Delay1' */
  ENV_DW.UnitDelay1_DSTATE_e = rtb_NOT1;

  /* Update for UnitDelay: '<S56>/Delay Input1'
   *
   * Block description for '<S56>/Delay Input1':
   *
   *  Store in Global RAM
   */
  ENV_DW.DelayInput1_DSTATE_o = rtb_UnitDelay1_m;

  /* Update for UnitDelay: '<S17>/Unit Delay2' incorporates:
   *  UnitDelay: '<S17>/Unit Delay1'
   */
  ENV_DW.UnitDelay2_DSTATE_f = ENV_DW.UnitDelay1_DSTATE_h;

  /* Update for UnitDelay: '<S61>/Delay Input1'
   *
   * Block description for '<S61>/Delay Input1':
   *
   *  Store in Global RAM
   */
  ENV_DW.DelayInput1_DSTATE_e = rtb_UnitDelay2_o;

  /* Update for UnitDelay: '<S17>/Unit Delay1' incorporates:
   *  UnitDelay: '<S17>/Unit Delay3'
   */
  ENV_DW.UnitDelay1_DSTATE_h = ENV_DW.UnitDelay3_DSTATE_k;

  /* Update for UnitDelay: '<S17>/Unit Delay3' */
  ENV_DW.UnitDelay3_DSTATE_k = rtb_NOT1;

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
    STM32_SPI_ModuleStruct_T b_3;
    STM32_SPI_ModuleStruct_T b_4;

    /* SystemInitialize for Enabled SubSystem: '<S16>/Initialize' */
    /* SystemInitialize for SignalConversion generated from: '<S59>/MCPInitialized' */
    ENV_B.OutportBufferForMCPInitialized = ENV_ConstB.Constant;

    /* End of SystemInitialize for SubSystem: '<S16>/Initialize' */

    /* SystemInitialize for Enabled SubSystem: '<Root>/CAN1 RX' */
    E_SPIControllerTransfer1_i_Init(&ENV_DW.SPIControllerTransfer8);
    E_SPIControllerTransfer1_i_Init(&ENV_DW.SPIControllerTransfer1_p);
    E_SPIControllerTransfer1_i_Init(&ENV_DW.SPIControllerTransfer2_p);
    E_SPIControllerTransfer1_i_Init(&ENV_DW.SPIControllerTransfer3_p);
    E_SPIControllerTransfer1_i_Init(&ENV_DW.SPIControllerTransfer4_p);
    E_SPIControllerTransfer1_i_Init(&ENV_DW.SPIControllerTransfer5_p);
    E_SPIControllerTransfer1_i_Init(&ENV_DW.SPIControllerTransfer6_p);
    E_SPIControllerTransfer1_i_Init(&ENV_DW.SPIControllerTransfer7_p);

    /* End of SystemInitialize for SubSystem: '<Root>/CAN1 RX' */

    /* SystemInitialize for Enabled SubSystem: '<Root>/CAN2 RX' */
    E_SPIControllerTransfer1_h_Init(&ENV_DW.SPIControllerTransfer8_p);
    E_SPIControllerTransfer1_h_Init(&ENV_DW.SPIControllerTransfer1_pn);
    E_SPIControllerTransfer1_h_Init(&ENV_DW.SPIControllerTransfer2_pn);
    E_SPIControllerTransfer1_h_Init(&ENV_DW.SPIControllerTransfer3_pn);
    E_SPIControllerTransfer1_h_Init(&ENV_DW.SPIControllerTransfer4_pn);
    E_SPIControllerTransfer1_h_Init(&ENV_DW.SPIControllerTransfer5_pn);
    E_SPIControllerTransfer1_h_Init(&ENV_DW.SPIControllerTransfer6_pn);
    E_SPIControllerTransfer1_h_Init(&ENV_DW.SPIControllerTransfer7_pn);

    /* End of SystemInitialize for SubSystem: '<Root>/CAN2 RX' */

    /* SystemInitialize for Enabled SubSystem: '<Root>/CAN3 RX' */
    /* Start for MATLABSystem: '<S4>/SPI Controller Transfer7' */
    ENV_DW.obj_gf.matlabCodegenIsDeleted = false;
    ENV_DW.obj_gf.isInitialized = 1;
    b.PeripheralPtr = SPI1;
    ENV_DW.obj_gf.MW_SPI_HANDLE = SPI_STM32_Init(&b);
    MW_STM32_SPI_SetFormat(ENV_DW.obj_gf.MW_SPI_HANDLE, 0U, 1792U, MW_SPI_MODE_2);
    ENV_DW.obj_gf.isSetupComplete = true;

    /* End of SystemInitialize for SubSystem: '<Root>/CAN3 RX' */

    /* SystemInitialize for Enabled SubSystem: '<Root>/CAN4 RX' */
    /* Start for MATLABSystem: '<S5>/SPI Controller Transfer7' */
    ENV_DW.obj_g.matlabCodegenIsDeleted = false;
    ENV_DW.obj_g.isInitialized = 1;
    b_0.PeripheralPtr = SPI1;
    ENV_DW.obj_g.MW_SPI_HANDLE = SPI_STM32_Init(&b_0);
    MW_STM32_SPI_SetFormat(ENV_DW.obj_g.MW_SPI_HANDLE, 0U, 1792U, MW_SPI_MODE_2);
    ENV_DW.obj_g.isSetupComplete = true;

    /* End of SystemInitialize for SubSystem: '<Root>/CAN4 RX' */

    /* SystemInitialize for Enabled SubSystem: '<S16>/MCPInit' */
    /* Start for MATLABSystem: '<S60>/SPI Controller Transfer' */
    ENV_DW.obj_l.matlabCodegenIsDeleted = false;
    ENV_DW.obj_l.isInitialized = 1;
    b_1.PeripheralPtr = SPI1;
    ENV_DW.obj_l.MW_SPI_HANDLE = SPI_STM32_Init(&b_1);
    MW_STM32_SPI_SetFormat(ENV_DW.obj_l.MW_SPI_HANDLE, 0U, 1792U, MW_SPI_MODE_2);
    ENV_DW.obj_l.isSetupComplete = true;
    E_SPIControllerTransfer1_k_Init(&ENV_DW.SPIControllerTransfer1_pnaev);
    E_SPIControllerTransfer1_k_Init(&ENV_DW.SPIControllerTransfer2_pnaev);
    E_SPIControllerTransfer1_k_Init(&ENV_DW.SPIControllerTransfer3_pnaev);
    ENV_SPIControllerTransfer5_Init(&ENV_DW.SPIControllerTransfer5_pnaev);
    E_SPIControllerTransfer1_k_Init(&ENV_DW.SPIControllerTransfer6_pnaev);
    ENV_SPIControllerTransfer5_Init(&ENV_DW.SPIControllerTransfer7_pnaevvf);
    E_SPIControllerTransfer1_k_Init(&ENV_DW.SPIControllerTransfer4_pnaev);

    /* End of SystemInitialize for SubSystem: '<S16>/MCPInit' */

    /* SystemInitialize for Enabled SubSystem: '<S14>/MCPInit' */
    /* Start for MATLABSystem: '<S55>/SPI Controller Transfer' */
    ENV_DW.obj_o.matlabCodegenIsDeleted = false;
    ENV_DW.obj_o.isInitialized = 1;
    b_2.PeripheralPtr = SPI1;
    ENV_DW.obj_o.MW_SPI_HANDLE = SPI_STM32_Init(&b_2);
    MW_STM32_SPI_SetFormat(ENV_DW.obj_o.MW_SPI_HANDLE, 0U, 1792U, MW_SPI_MODE_2);
    ENV_DW.obj_o.isSetupComplete = true;
    E_SPIControllerTransfer1_n_Init(&ENV_DW.SPIControllerTransfer1_pna);
    E_SPIControllerTransfer1_n_Init(&ENV_DW.SPIControllerTransfer2_pna);
    E_SPIControllerTransfer1_n_Init(&ENV_DW.SPIControllerTransfer3_pna);
    ENV_SPIControllerTransfer4_Init(&ENV_DW.SPIControllerTransfer4_pna);
    E_SPIControllerTransfer1_n_Init(&ENV_DW.SPIControllerTransfer5_pna);
    ENV_SPIControllerTransfer4_Init(&ENV_DW.SPIControllerTransfer6_pna);
    E_SPIControllerTransfer1_n_Init(&ENV_DW.SPIControllerTransfer7_pnaev);

    /* End of SystemInitialize for SubSystem: '<S14>/MCPInit' */

    /* SystemInitialize for Enabled SubSystem: '<S15>/MCPInit' */
    /* Start for MATLABSystem: '<S57>/SPI Controller Transfer' */
    ENV_DW.obj_p.matlabCodegenIsDeleted = false;
    ENV_DW.obj_p.isInitialized = 1;
    b_3.PeripheralPtr = SPI1;
    ENV_DW.obj_p.MW_SPI_HANDLE = SPI_STM32_Init(&b_3);
    MW_STM32_SPI_SetFormat(ENV_DW.obj_p.MW_SPI_HANDLE, 0U, 1792U, MW_SPI_MODE_2);
    ENV_DW.obj_p.isSetupComplete = true;
    E_SPIControllerTransfer1_j_Init(&ENV_DW.SPIControllerTransfer1_pnae);
    E_SPIControllerTransfer1_j_Init(&ENV_DW.SPIControllerTransfer2_pnae);
    E_SPIControllerTransfer1_j_Init(&ENV_DW.SPIControllerTransfer3_pnae);
    E_SPIControllerTransfer4_g_Init(&ENV_DW.SPIControllerTransfer4_pnae);
    E_SPIControllerTransfer1_j_Init(&ENV_DW.SPIControllerTransfer5_pnae);
    E_SPIControllerTransfer4_g_Init(&ENV_DW.SPIControllerTransfer6_pnae);
    E_SPIControllerTransfer1_j_Init(&ENV_DW.SPIControllerTransfer7_pnaevv);

    /* End of SystemInitialize for SubSystem: '<S15>/MCPInit' */

    /* SystemInitialize for Enabled SubSystem: '<S17>/MCPInit' */
    /* Start for MATLABSystem: '<S62>/SPI Controller Transfer' */
    ENV_DW.obj.matlabCodegenIsDeleted = false;
    ENV_DW.obj.isInitialized = 1;
    b_4.PeripheralPtr = SPI1;
    ENV_DW.obj.MW_SPI_HANDLE = SPI_STM32_Init(&b_4);
    MW_STM32_SPI_SetFormat(ENV_DW.obj.MW_SPI_HANDLE, 0U, 1792U, MW_SPI_MODE_2);
    ENV_DW.obj.isSetupComplete = true;
    SPIControllerTransfer1_na_Init(&ENV_DW.SPIControllerTransfer1_pnaevv);
    SPIControllerTransfer1_na_Init(&ENV_DW.SPIControllerTransfer2_pnaevv);
    SPIControllerTransfer1_na_Init(&ENV_DW.SPIControllerTransfer3_pnaevv);
    E_SPIControllerTransfer4_e_Init(&ENV_DW.SPIControllerTransfer4_pnaevv);
    SPIControllerTransfer1_na_Init(&ENV_DW.SPIControllerTransfer5_pnaevv);
    E_SPIControllerTransfer4_e_Init(&ENV_DW.SPIControllerTransfer6_pnaevv);
    SPIControllerTransfer1_na_Init(&ENV_DW.SPIControllerTransfer7_pnaevvfp);

    /* End of SystemInitialize for SubSystem: '<S17>/MCPInit' */
    ENV_SPIControllerTransfer_Init(&ENV_DW.SPIControllerTransfer);
    ENV_SPIControllerTransfer_Init(&ENV_DW.SPIControllerTransfer2);
    ENV_SPIControllerTransfer_Init(&ENV_DW.SPIControllerTransfer4);
    ENV_SPIControllerTransfer_Init(&ENV_DW.SPIControllerTransfer6);
    ENV_SPIControllerTransfer1_Init(&ENV_DW.SPIControllerTransfer1);
    ENV_SPIControllerTransfer1_Init(&ENV_DW.SPIControllerTransfer3);
    ENV_SPIControllerTransfer1_Init(&ENV_DW.SPIControllerTransfer5);
    ENV_SPIControllerTransfer1_Init(&ENV_DW.SPIControllerTransfer7);

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
  }

  /* user code (Initialize function Body) */
  LL_TIM_EnableCounter(TIM2);
}

/* Model terminate function */
void ENV_terminate(void)
{
  uint32_T SPIPinsLoc;
  ENV_SPIControllerTransfer_Term(&ENV_DW.SPIControllerTransfer);
  ENV_SPIControllerTransfer_Term(&ENV_DW.SPIControllerTransfer2);
  ENV_SPIControllerTransfer_Term(&ENV_DW.SPIControllerTransfer4);

  /* Terminate for Enabled SubSystem: '<Root>/CAN1 RX' */
  E_SPIControllerTransfer1_c_Term(&ENV_DW.SPIControllerTransfer8);
  E_SPIControllerTransfer1_c_Term(&ENV_DW.SPIControllerTransfer1_p);
  E_SPIControllerTransfer1_c_Term(&ENV_DW.SPIControllerTransfer2_p);
  E_SPIControllerTransfer1_c_Term(&ENV_DW.SPIControllerTransfer3_p);
  E_SPIControllerTransfer1_c_Term(&ENV_DW.SPIControllerTransfer4_p);
  E_SPIControllerTransfer1_c_Term(&ENV_DW.SPIControllerTransfer5_p);
  E_SPIControllerTransfer1_c_Term(&ENV_DW.SPIControllerTransfer6_p);
  E_SPIControllerTransfer1_c_Term(&ENV_DW.SPIControllerTransfer7_p);

  /* End of Terminate for SubSystem: '<Root>/CAN1 RX' */

  /* Terminate for Enabled SubSystem: '<Root>/CAN2 RX' */
  E_SPIControllerTransfer1_d_Term(&ENV_DW.SPIControllerTransfer8_p);
  E_SPIControllerTransfer1_d_Term(&ENV_DW.SPIControllerTransfer1_pn);
  E_SPIControllerTransfer1_d_Term(&ENV_DW.SPIControllerTransfer2_pn);
  E_SPIControllerTransfer1_d_Term(&ENV_DW.SPIControllerTransfer3_pn);
  E_SPIControllerTransfer1_d_Term(&ENV_DW.SPIControllerTransfer4_pn);
  E_SPIControllerTransfer1_d_Term(&ENV_DW.SPIControllerTransfer5_pn);
  E_SPIControllerTransfer1_d_Term(&ENV_DW.SPIControllerTransfer6_pn);
  E_SPIControllerTransfer1_d_Term(&ENV_DW.SPIControllerTransfer7_pn);

  /* End of Terminate for SubSystem: '<Root>/CAN2 RX' */

  /* Terminate for Enabled SubSystem: '<Root>/CAN3 RX' */
  /* Terminate for MATLABSystem: '<S4>/SPI Controller Transfer7' */
  if (!ENV_DW.obj_gf.matlabCodegenIsDeleted) {
    ENV_DW.obj_gf.matlabCodegenIsDeleted = true;
    if ((ENV_DW.obj_gf.isInitialized == 1) && ENV_DW.obj_gf.isSetupComplete) {
      SPIPinsLoc = MW_UNDEFINED_VALUE;
      MW_SPI_Close(ENV_DW.obj_gf.MW_SPI_HANDLE, SPIPinsLoc, SPIPinsLoc,
                   SPIPinsLoc, 1U);
    }
  }

  /* End of Terminate for MATLABSystem: '<S4>/SPI Controller Transfer7' */
  /* End of Terminate for SubSystem: '<Root>/CAN3 RX' */

  /* Terminate for Enabled SubSystem: '<Root>/CAN4 RX' */
  /* Terminate for MATLABSystem: '<S5>/SPI Controller Transfer7' */
  if (!ENV_DW.obj_g.matlabCodegenIsDeleted) {
    ENV_DW.obj_g.matlabCodegenIsDeleted = true;
    if ((ENV_DW.obj_g.isInitialized == 1) && ENV_DW.obj_g.isSetupComplete) {
      SPIPinsLoc = MW_UNDEFINED_VALUE;
      MW_SPI_Close(ENV_DW.obj_g.MW_SPI_HANDLE, SPIPinsLoc, SPIPinsLoc,
                   SPIPinsLoc, 5U);
    }
  }

  /* End of Terminate for MATLABSystem: '<S5>/SPI Controller Transfer7' */
  /* End of Terminate for SubSystem: '<Root>/CAN4 RX' */
  ENV_SPIControllerTransfer_Term(&ENV_DW.SPIControllerTransfer6);
  ENV_SPIControllerTransfer1_Term(&ENV_DW.SPIControllerTransfer1);
  ENV_SPIControllerTransfer1_Term(&ENV_DW.SPIControllerTransfer3);
  ENV_SPIControllerTransfer1_Term(&ENV_DW.SPIControllerTransfer5);
  ENV_SPIControllerTransfer1_Term(&ENV_DW.SPIControllerTransfer7);

  /* Terminate for Enabled SubSystem: '<S16>/MCPInit' */
  /* Terminate for MATLABSystem: '<S60>/SPI Controller Transfer' */
  if (!ENV_DW.obj_l.matlabCodegenIsDeleted) {
    ENV_DW.obj_l.matlabCodegenIsDeleted = true;
    if ((ENV_DW.obj_l.isInitialized == 1) && ENV_DW.obj_l.isSetupComplete) {
      SPIPinsLoc = MW_UNDEFINED_VALUE;
      MW_SPI_Close(ENV_DW.obj_l.MW_SPI_HANDLE, SPIPinsLoc, SPIPinsLoc,
                   SPIPinsLoc, 1U);
    }
  }

  /* End of Terminate for MATLABSystem: '<S60>/SPI Controller Transfer' */
  E_SPIControllerTransfer1_l_Term(&ENV_DW.SPIControllerTransfer1_pnaev);
  E_SPIControllerTransfer1_l_Term(&ENV_DW.SPIControllerTransfer2_pnaev);
  E_SPIControllerTransfer1_l_Term(&ENV_DW.SPIControllerTransfer3_pnaev);
  ENV_SPIControllerTransfer5_Term(&ENV_DW.SPIControllerTransfer5_pnaev);
  E_SPIControllerTransfer1_l_Term(&ENV_DW.SPIControllerTransfer6_pnaev);
  ENV_SPIControllerTransfer5_Term(&ENV_DW.SPIControllerTransfer7_pnaevvf);
  E_SPIControllerTransfer1_l_Term(&ENV_DW.SPIControllerTransfer4_pnaev);

  /* End of Terminate for SubSystem: '<S16>/MCPInit' */

  /* Terminate for Enabled SubSystem: '<S14>/MCPInit' */
  /* Terminate for MATLABSystem: '<S55>/SPI Controller Transfer' */
  if (!ENV_DW.obj_o.matlabCodegenIsDeleted) {
    ENV_DW.obj_o.matlabCodegenIsDeleted = true;
    if ((ENV_DW.obj_o.isInitialized == 1) && ENV_DW.obj_o.isSetupComplete) {
      SPIPinsLoc = MW_UNDEFINED_VALUE;
      MW_SPI_Close(ENV_DW.obj_o.MW_SPI_HANDLE, SPIPinsLoc, SPIPinsLoc,
                   SPIPinsLoc, 1U);
    }
  }

  /* End of Terminate for MATLABSystem: '<S55>/SPI Controller Transfer' */
  E_SPIControllerTransfer1_e_Term(&ENV_DW.SPIControllerTransfer1_pna);
  E_SPIControllerTransfer1_e_Term(&ENV_DW.SPIControllerTransfer2_pna);
  E_SPIControllerTransfer1_e_Term(&ENV_DW.SPIControllerTransfer3_pna);
  ENV_SPIControllerTransfer4_Term(&ENV_DW.SPIControllerTransfer4_pna);
  E_SPIControllerTransfer1_e_Term(&ENV_DW.SPIControllerTransfer5_pna);
  ENV_SPIControllerTransfer4_Term(&ENV_DW.SPIControllerTransfer6_pna);
  E_SPIControllerTransfer1_e_Term(&ENV_DW.SPIControllerTransfer7_pnaev);

  /* End of Terminate for SubSystem: '<S14>/MCPInit' */

  /* Terminate for Enabled SubSystem: '<S15>/MCPInit' */
  /* Terminate for MATLABSystem: '<S57>/SPI Controller Transfer' */
  if (!ENV_DW.obj_p.matlabCodegenIsDeleted) {
    ENV_DW.obj_p.matlabCodegenIsDeleted = true;
    if ((ENV_DW.obj_p.isInitialized == 1) && ENV_DW.obj_p.isSetupComplete) {
      SPIPinsLoc = MW_UNDEFINED_VALUE;
      MW_SPI_Close(ENV_DW.obj_p.MW_SPI_HANDLE, SPIPinsLoc, SPIPinsLoc,
                   SPIPinsLoc, 10U);
    }
  }

  /* End of Terminate for MATLABSystem: '<S57>/SPI Controller Transfer' */
  E_SPIControllerTransfer1_k_Term(&ENV_DW.SPIControllerTransfer1_pnae);
  E_SPIControllerTransfer1_k_Term(&ENV_DW.SPIControllerTransfer2_pnae);
  E_SPIControllerTransfer1_k_Term(&ENV_DW.SPIControllerTransfer3_pnae);
  E_SPIControllerTransfer4_e_Term(&ENV_DW.SPIControllerTransfer4_pnae);
  E_SPIControllerTransfer1_k_Term(&ENV_DW.SPIControllerTransfer5_pnae);
  E_SPIControllerTransfer4_e_Term(&ENV_DW.SPIControllerTransfer6_pnae);
  E_SPIControllerTransfer1_k_Term(&ENV_DW.SPIControllerTransfer7_pnaevv);

  /* End of Terminate for SubSystem: '<S15>/MCPInit' */

  /* Terminate for Enabled SubSystem: '<S17>/MCPInit' */
  /* Terminate for MATLABSystem: '<S62>/SPI Controller Transfer' */
  if (!ENV_DW.obj.matlabCodegenIsDeleted) {
    ENV_DW.obj.matlabCodegenIsDeleted = true;
    if ((ENV_DW.obj.isInitialized == 1) && ENV_DW.obj.isSetupComplete) {
      SPIPinsLoc = MW_UNDEFINED_VALUE;
      MW_SPI_Close(ENV_DW.obj.MW_SPI_HANDLE, SPIPinsLoc, SPIPinsLoc, SPIPinsLoc,
                   5U);
    }
  }

  /* End of Terminate for MATLABSystem: '<S62>/SPI Controller Transfer' */
  E_SPIControllerTransfer1_b_Term(&ENV_DW.SPIControllerTransfer1_pnaevv);
  E_SPIControllerTransfer1_b_Term(&ENV_DW.SPIControllerTransfer2_pnaevv);
  E_SPIControllerTransfer1_b_Term(&ENV_DW.SPIControllerTransfer3_pnaevv);
  E_SPIControllerTransfer4_o_Term(&ENV_DW.SPIControllerTransfer4_pnaevv);
  E_SPIControllerTransfer1_b_Term(&ENV_DW.SPIControllerTransfer5_pnaevv);
  E_SPIControllerTransfer4_o_Term(&ENV_DW.SPIControllerTransfer6_pnaevv);
  E_SPIControllerTransfer1_b_Term(&ENV_DW.SPIControllerTransfer7_pnaevvfp);

  /* End of Terminate for SubSystem: '<S17>/MCPInit' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
