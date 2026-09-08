/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: NCarState.c
 *
 * Code generated for Simulink model 'NCarState'.
 *
 * Model version                  : 13.3
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Tue Sep  8 11:39:09 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "NCarState.h"
#include "rtwtypes.h"
#include "NCarState_private.h"

/* Named constants for Chart: '<Root>/NCarState System' */
#define NCarState_IN_BMS_Status_OK     ((uint8_T)1U)
#define NCarState_IN_Car_Idle_1        ((uint8_T)2U)
#define NCarState_IN_Car_ON            ((uint8_T)3U)
#define NCarState_IN_Inv_HV_OK         ((uint8_T)4U)
#define NCarState_IN_Inv_LV_OK         ((uint8_T)5U)
#define NCarState_IN_NO_ACTIVE_CHILD   ((uint8_T)0U)
#define NCarState_IN_RTD1              ((uint8_T)1U)
#define NCarState_IN_RTD_Sound         ((uint8_T)2U)
#define NCarState_IN_Ready_To_Drive    ((uint8_T)6U)
#define NCarState_IN_Status_Check1     ((uint8_T)7U)

/* Output and update for referenced model: 'NCarState' */
void NCarState(const boolean_T *rtu_BErrorReset, const real_T
               *rtu_rThrottlePedal, const real_T *rtu_pBrakeF, const real_T
               *rtu_pBrakeR, const real_T *rtu_VDCInvRL, const real_T
               *rtu_nMotorRL, const real_T *rtu_NBMSState, const real_T
               *rtu_NInvState, const boolean_T *rtu_BReadyToDriveButton, const
               boolean_T *rtu_BBrakeError, real_T *rty_NCarState, boolean_T
               *rty_BReadyToDriveBuzzer, boolean_T *rty_BReadyToDrive,
               B_NCarState_c_T *localB, DW_NCarState_f_T *localDW)
{
  /* Chart: '<Root>/NCarState System' */
  if (localDW->temporalCounter_i1 < 8191) {
    localDW->temporalCounter_i1++;
  }

  if (localDW->is_active_c1_NCarState == 0) {
    localDW->is_active_c1_NCarState = 1U;
    localDW->temporalCounter_i1 = 0U;
    localDW->is_c1_NCarState = NCarState_IN_Car_Idle_1;
    *rty_NCarState = 0.0;
    localB->BReadyToDrive = 0.0;
  } else {
    switch (localDW->is_c1_NCarState) {
     case NCarState_IN_BMS_Status_OK:
      *rty_NCarState = 2.0;
      localB->BReadyToDrive = 0.0;
      if (*rtu_NInvState == 3.0) {
        localDW->is_c1_NCarState = NCarState_IN_Inv_LV_OK;
        *rty_NCarState = 3.0;
      }
      break;

     case NCarState_IN_Car_Idle_1:
      *rty_NCarState = 0.0;
      localB->BReadyToDrive = 0.0;
      if (localDW->temporalCounter_i1 >= 7000) {
        localDW->temporalCounter_i1 = 0U;
        localDW->is_c1_NCarState = NCarState_IN_Status_Check1;
        *rty_NCarState = 1.0;
      }
      break;

     case NCarState_IN_Car_ON:
      *rty_NCarState = 92.0;
      if (*rtu_VDCInvRL < 60.0) {
        localDW->is_c1_NCarState = NCarState_IN_BMS_Status_OK;
        *rty_NCarState = 2.0;
        localB->BReadyToDrive = 0.0;
      } else {
        localB->BReadyToDrive = 1.0;
      }
      break;

     case NCarState_IN_Inv_HV_OK:
      *rty_NCarState = 4.0;
      if (((*rtu_BErrorReset) && (*rtu_nMotorRL < 500.0)) || (*rtu_VDCInvRL <
           60.0)) {
        localDW->is_c1_NCarState = NCarState_IN_BMS_Status_OK;
        *rty_NCarState = 2.0;
        localB->BReadyToDrive = 0.0;
      } else if ((*rtu_NInvState == 92.0) && (*rtu_rThrottlePedal <= 5.0) &&
                 (*rtu_BReadyToDriveButton) && (*rtu_pBrakeF >= 3.0) &&
                 (*rtu_pBrakeR >= 3.0) && ((real_T)*rtu_BBrakeError <= 0.5)) {
        localDW->is_c1_NCarState = NCarState_IN_Ready_To_Drive;
        localDW->temporalCounter_i1 = 0U;
        localDW->is_Ready_To_Drive = NCarState_IN_RTD_Sound;
        *rty_NCarState = 5.0;
        localB->BReadyToDriveBuzzer = 1.0;
      }
      break;

     case NCarState_IN_Inv_LV_OK:
      *rty_NCarState = 3.0;
      localB->BReadyToDrive = 0.0;
      if (*rtu_NInvState == 92.0) {
        localDW->is_c1_NCarState = NCarState_IN_Inv_HV_OK;
        *rty_NCarState = 4.0;
      }
      break;

     case NCarState_IN_Ready_To_Drive:
      if (*rtu_VDCInvRL < 60.0) {
        localDW->is_Ready_To_Drive = NCarState_IN_NO_ACTIVE_CHILD;
        localDW->is_c1_NCarState = NCarState_IN_BMS_Status_OK;
        *rty_NCarState = 2.0;
        localB->BReadyToDrive = 0.0;
      } else if (localDW->is_Ready_To_Drive == NCarState_IN_RTD1) {
        *rty_NCarState = 6.0;
        localB->BReadyToDriveBuzzer = 0.0;
        if (*rtu_rThrottlePedal <= 5.0) {
          localDW->is_Ready_To_Drive = NCarState_IN_NO_ACTIVE_CHILD;
          localDW->is_c1_NCarState = NCarState_IN_Car_ON;
          *rty_NCarState = 92.0;
          localB->BReadyToDrive = 1.0;
        }
      } else {
        /* case IN_RTD_Sound: */
        *rty_NCarState = 5.0;
        localB->BReadyToDriveBuzzer = 1.0;
        if (localDW->temporalCounter_i1 >= 1500) {
          localDW->is_Ready_To_Drive = NCarState_IN_RTD1;
          *rty_NCarState = 6.0;
          localB->BReadyToDriveBuzzer = 0.0;
        }
      }
      break;

     default:
      /* case IN_Status_Check1: */
      *rty_NCarState = 1.0;
      if ((localDW->temporalCounter_i1 >= 500) && (*rtu_NBMSState == 92.0)) {
        localDW->is_c1_NCarState = NCarState_IN_BMS_Status_OK;
        *rty_NCarState = 2.0;
        localB->BReadyToDrive = 0.0;
      }
      break;
    }
  }

  /* End of Chart: '<Root>/NCarState System' */

  /* DataTypeConversion: '<Root>/Data Type Conversion' */
  *rty_BReadyToDriveBuzzer = (localB->BReadyToDriveBuzzer != 0.0);

  /* DataTypeConversion: '<Root>/Data Type Conversion1' */
  *rty_BReadyToDrive = (localB->BReadyToDrive != 0.0);
}

/* Model initialize function */
void NCarState_initialize(const char_T **rt_errorStatus, RT_MODEL_NCarState_T *
  const NCarState_M)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(NCarState_M, rt_errorStatus);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
