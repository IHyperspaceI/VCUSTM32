/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: NInvState.c
 *
 * Code generated for Simulink model 'NInvState'.
 *
 * Model version                  : 13.5
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Wed Jun  3 14:54:07 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "NInvState.h"
#include "rtwtypes.h"
#include <math.h>
#include "NInvState_private.h"

/* Named constants for Chart: '<Root>/NInverterState System' */
#define NInvSt_IN_Inverter_HV_CheckRR_j ((uint8_T)4U)
#define NInvSta_IN_Inverter_HV_ChecksFL ((uint8_T)5U)
#define NInvSta_IN_Inverter_HV_ChecksRL ((uint8_T)6U)
#define NInvStat_IN_Inverter_HV_CheckFR ((uint8_T)3U)
#define NInvStat_IN_Inverter_HV_CheckRR ((uint8_T)3U)
#define NInvStat_IN_Inverter_HV_Checks2 ((uint8_T)3U)
#define NInvStat_IN_Inverter_HV_Checks3 ((uint8_T)3U)
#define NInvState_CALL_EVENT           (-1)
#define NInvState_IN_Encoder_Error_FL  ((uint8_T)1U)
#define NInvState_IN_Encoder_Error_FR  ((uint8_T)1U)
#define NInvState_IN_Encoder_Error_RL  ((uint8_T)1U)
#define NInvState_IN_Encoder_Error_RR  ((uint8_T)1U)
#define NInvState_IN_Encoder_OK        ((uint8_T)2U)
#define NInvState_IN_Encoder_Reset_FL  ((uint8_T)1U)
#define NInvState_IN_Encoder_Reset_FR  ((uint8_T)2U)
#define NInvState_IN_Encoder_Reset_RL  ((uint8_T)3U)
#define NInvState_IN_Encoder_Reset_RR  ((uint8_T)4U)
#define NInvState_IN_Error_On          ((uint8_T)1U)
#define NInvState_IN_Error_off         ((uint8_T)2U)
#define NInvState_IN_Inv_Error_Check_1 ((uint8_T)1U)
#define NInvState_IN_Inv_Error_Check_2 ((uint8_T)2U)
#define NInvState_IN_Inv_Error_Checks  ((uint8_T)5U)
#define NInvState_IN_Inv_Error_Reset   ((uint8_T)3U)
#define NInvState_IN_Inv_HV_Check      ((uint8_T)1U)
#define NInvState_IN_Inv_LV_Check      ((uint8_T)1U)
#define NInvState_IN_Inv_LV_Check1     ((uint8_T)2U)
#define NInvState_IN_Inv_LV_Check2     ((uint8_T)3U)
#define NInvState_IN_Inv_LV_OK         ((uint8_T)4U)
#define NInvState_IN_Inv_OK            ((uint8_T)6U)
#define NInvState_IN_Inv_OK_l          ((uint8_T)2U)
#define NInvState_IN_Inv_State_Idle    ((uint8_T)7U)
#define NInvState_IN_Inverter_HV_Checks ((uint8_T)8U)
#define NInvState_IN_Inverter_IN       ((uint8_T)4U)
#define NInvState_IN_Inverter_ON       ((uint8_T)5U)
#define NInvState_IN_NO_ACTIVE_CHILD   ((uint8_T)0U)
#define NInvState_IN_PBX_SENSORS_ini   ((uint8_T)3U)
#define NInvState_IN_START_UP          ((uint8_T)6U)
#define NInvState_IN_TorqueReq_Ready   ((uint8_T)7U)

/* Forward declaration for local functions */
static void NInvState_Encoder_Reset_FL(const boolean_T *rtu_BInvErrorFL, const
  boolean_T *rtu_BInvSysReadyFL, const boolean_T *rtu_BInvQuitInvOnFL, const
  boolean_T *rtu_BInvDCQuitInvOnFL, B_NInvState_c_T *localB, DW_NInvState_f_T
  *localDW);
static void NInvState_Encoder_Reset_FR(const boolean_T *rtu_BInvErrorFR, const
  boolean_T *rtu_BInvSysReadyFR, const boolean_T *rtu_BInvQuitInvOnFR, const
  boolean_T *rtu_BInvDCQuitInvOnFR, B_NInvState_c_T *localB, DW_NInvState_f_T
  *localDW);
static void NInvState_Encoder_Reset_RL(const boolean_T *rtu_BInvErrorRL, const
  boolean_T *rtu_BInvSysReadyRL, const boolean_T *rtu_BInvQuitInvOnRL, const
  boolean_T *rtu_BInvDCQuitInvOnRL, B_NInvState_c_T *localB, DW_NInvState_f_T
  *localDW);
static void NInvState_Encoder_Reset_RR(const boolean_T *rtu_BInvErrorRR, const
  boolean_T *rtu_BInvSysReadyRR, const boolean_T *rtu_BInvQuitInvOnRR, const
  boolean_T *rtu_BInvDCQuitInvOnRR, B_NInvState_c_T *localB, DW_NInvState_f_T
  *localDW);
static void exit_internal_Inverter_HV_Check(B_NInvState_c_T *localB,
  DW_NInvState_f_T *localDW);
static void NInvState_Inverter_HV_CheckFR(const boolean_T *rtu_BInvErrorFR,
  const boolean_T *rtu_BInvQuitInvOnFR, const boolean_T *rtu_BInvDCQuitInvOnFR,
  B_NInvState_c_T *localB, DW_NInvState_f_T *localDW);
static void NInvState_Inverter_HV_ChecksFL(const boolean_T *rtu_BInvErrorFL,
  const boolean_T *rtu_BInvQuitInvOnFL, const boolean_T *rtu_BInvDCQuitInvOnFL,
  B_NInvState_c_T *localB, DW_NInvState_f_T *localDW);
static void NInvState_Inverter_HV_Checks(const boolean_T *rtu_BErrorReset, const
  boolean_T *rtu_BInvErrorRL, const boolean_T *rtu_BInvErrorRR, const boolean_T *
  rtu_BInvErrorFL, const boolean_T *rtu_BInvErrorFR, const boolean_T
  *rtu_BInvQuitInvOnRL, const boolean_T *rtu_BInvQuitInvOnRR, const boolean_T
  *rtu_BInvQuitInvOnFL, const boolean_T *rtu_BInvQuitInvOnFR, const boolean_T
  *rtu_BInvDCQuitInvOnRL, const boolean_T *rtu_BInvDCQuitInvOnRR, const
  boolean_T *rtu_BInvDCQuitInvOnFL, const boolean_T *rtu_BInvDCQuitInvOnFR,
  B_NInvState_c_T *localB, DW_NInvState_f_T *localDW);

/* Function for Chart: '<Root>/NInverterState System' */
static void NInvState_Encoder_Reset_FL(const boolean_T *rtu_BInvErrorFL, const
  boolean_T *rtu_BInvSysReadyFL, const boolean_T *rtu_BInvQuitInvOnFL, const
  boolean_T *rtu_BInvDCQuitInvOnFL, B_NInvState_c_T *localB, DW_NInvState_f_T
  *localDW)
{
  if (localB->NInvState_l == 36.0) {
    if (localDW->is_Encoder_Reset_FL == NInvStat_IN_Inverter_HV_Checks2) {
      localDW->is_Inverter_HV_Checks2 = NInvState_IN_NO_ACTIVE_CHILD;
      localB->BHVOn = 1.0;
      localDW->is_Encoder_Reset_FL = NInvState_IN_NO_ACTIVE_CHILD;
    } else {
      localDW->is_Encoder_Error_FL = NInvState_IN_NO_ACTIVE_CHILD;
      localDW->is_Encoder_Reset_FL = NInvState_IN_NO_ACTIVE_CHILD;
    }

    localDW->is_c4_NInvState = NInvState_IN_Inv_OK;
    localB->NInvState_l = 92.0;
  } else {
    boolean_T guard1;
    guard1 = false;
    switch (localDW->is_Encoder_Reset_FL) {
     case NInvState_IN_Encoder_Error_FL:
      switch (localDW->is_Encoder_Error_FL) {
       case NInvState_IN_Error_On:
        /* Chart: '<Root>/NInverterState System' */
        if ((localDW->sfEvent == NInvState_CALL_EVENT) &&
            (localDW->temporalCounter_i1 >= 100) && (!*rtu_BInvErrorFL)) {
          localDW->is_Encoder_Error_FL = NInvState_IN_Error_off;
          localB->BInvErrorResetFL = 0.0;
        }
        break;

       case NInvState_IN_Error_off:
        /* Chart: '<Root>/NInverterState System' */
        if (*rtu_BInvSysReadyFL) {
          localDW->is_Encoder_Error_FL = NInvState_IN_NO_ACTIVE_CHILD;
          localDW->is_Encoder_Reset_FL = NInvStat_IN_Inverter_HV_Checks2;
          localDW->is_Inverter_HV_Checks2 = NInvState_IN_Inverter_IN;
          localB->NInvState_l = 32.0;
          localB->BInvDCOnFL = 1.0;
        } else if (*rtu_BInvErrorFL) {
          localDW->temporalCounter_i1 = 0U;
          localDW->is_Encoder_Error_FL = NInvState_IN_PBX_SENSORS_ini;
          localB->BInvErrorResetFL = 0.0;
        }
        break;

       default:
        /* case IN_PBX_SENSORS_ini: */
        if ((localDW->sfEvent == NInvState_CALL_EVENT) &&
            (localDW->temporalCounter_i1 >= 50)) {
          localDW->temporalCounter_i1 = 0U;
          localDW->is_Encoder_Error_FL = NInvState_IN_Error_On;
          localB->BInvErrorResetFL = 1.0;
        }
        break;
      }
      break;

     case NInvState_IN_Encoder_OK:
      break;

     default:
      /* case IN_Inverter_HV_Checks2: */
      switch (localDW->is_Inverter_HV_Checks2) {
       case NInvState_IN_Inv_Error_Check_1:
        localB->MTorqueLimitNegativeFL = 0.0;
        localB->MTorqueLimitPositiveFL = 0.0;
        if ((localDW->sfEvent == NInvState_CALL_EVENT) &&
            (localDW->temporalCounter_i1 >= 500)) {
          localDW->temporalCounter_i1 = 0U;
          localDW->is_Inverter_HV_Checks2 = NInvState_IN_Inv_Error_Reset;
          localB->NInvState_l = 0.0;
          localB->BInvErrorResetFL = 1.0;
          localB->BInvDCOnFL = 0.0;
          localB->BInvEnableFL = 0.0;
          localB->BInvOnFL = 0.0;
        }
        break;

       case NInvState_IN_Inv_Error_Check_2:
        if ((localDW->sfEvent == NInvState_CALL_EVENT) &&
            (localDW->temporalCounter_i1 >= 500)) {
          if (!*rtu_BInvErrorFL) {
            localDW->is_Inverter_HV_Checks2 = NInvState_IN_Inverter_IN;
            localB->NInvState_l = 32.0;
            localB->BInvDCOnFL = 1.0;
          } else if (*rtu_BInvErrorFL) {
            localDW->temporalCounter_i1 = 0U;
            localDW->is_Inverter_HV_Checks2 = NInvState_IN_Inv_Error_Check_1;
            localB->NInvState_l = 0.0;
            localB->MTorqueLimitNegativeFL = 0.0;
            localB->MTorqueLimitPositiveFL = 0.0;
          } else {
            guard1 = true;
          }
        } else {
          guard1 = true;
        }
        break;

       case NInvState_IN_Inv_Error_Reset:
        localB->BInvDCOnFL = 0.0;
        localB->BInvEnableFL = 0.0;
        localB->BInvOnFL = 0.0;
        if ((localDW->sfEvent == NInvState_CALL_EVENT) &&
            (localDW->temporalCounter_i1 >= 500)) {
          localDW->temporalCounter_i1 = 0U;
          localDW->is_Inverter_HV_Checks2 = NInvState_IN_Inv_Error_Check_2;
          localB->BInvErrorResetFL = 0.0;
          localB->NInvState_l = 0.0;
        }
        break;

       case NInvState_IN_Inverter_IN:
        localB->BInvDCOnFL = 1.0;

        /* Chart: '<Root>/NInverterState System' */
        if (*rtu_BInvDCQuitInvOnFL) {
          localDW->temporalCounter_i1 = 0U;
          localDW->is_Inverter_HV_Checks2 = NInvState_IN_START_UP;
          localB->NInvState_l = 33.0;
          localB->MTargetTorqueFL = 0.0;
          localB->MTorqueLimitNegativeFL = 0.0;
          localB->MTorqueLimitPositiveFL = 0.0;
          localB->BInvOnFL = 1.0;
        }
        break;

       case NInvState_IN_Inverter_ON:
        localB->BInvEnableFL = 1.0;

        /* Chart: '<Root>/NInverterState System' */
        if (*rtu_BInvQuitInvOnFL) {
          localDW->is_Inverter_HV_Checks2 = NInvState_IN_TorqueReq_Ready;
          localB->NInvState_l = 35.0;
          localB->MTorqueLimitNegativeFL = -100.0;
          localB->MTorqueLimitPositiveFL = 204.8;
        } else if (*rtu_BInvErrorFL) {
          localDW->temporalCounter_i1 = 0U;
          localDW->is_Inverter_HV_Checks2 = NInvState_IN_Inv_Error_Check_1;
          localB->NInvState_l = 0.0;
          localB->MTorqueLimitNegativeFL = 0.0;
          localB->MTorqueLimitPositiveFL = 0.0;
        }
        break;

       case NInvState_IN_START_UP:
        localB->MTargetTorqueFL = 0.0;
        localB->MTorqueLimitNegativeFL = 0.0;
        localB->MTorqueLimitPositiveFL = 0.0;
        localB->BInvOnFL = 1.0;
        if ((localDW->sfEvent == NInvState_CALL_EVENT) &&
            (localDW->temporalCounter_i1 >= 100)) {
          localDW->is_Inverter_HV_Checks2 = NInvState_IN_Inverter_ON;
          localB->NInvState_l = 34.0;
          localB->BInvEnableFL = 1.0;
        }
        break;

       default:
        /* case IN_TorqueReq_Ready: */
        localB->MTorqueLimitNegativeFL = -100.0;
        localB->MTorqueLimitPositiveFL = 204.8;

        /* Chart: '<Root>/NInverterState System' */
        if (*rtu_BInvErrorFL) {
          localDW->temporalCounter_i1 = 0U;
          localDW->is_Inverter_HV_Checks2 = NInvState_IN_Inv_Error_Check_1;
          localB->NInvState_l = 0.0;
          localB->MTorqueLimitNegativeFL = 0.0;
          localB->MTorqueLimitPositiveFL = 0.0;
        } else {
          localDW->is_Inverter_HV_Checks2 = NInvState_IN_NO_ACTIVE_CHILD;
          localB->BHVOn = 1.0;
          localDW->is_Encoder_Reset_FL = NInvState_IN_Encoder_OK;
          localB->NInvState_l = 36.0;
        }
        break;
      }
      break;
    }

    if (guard1) {
      localB->BInvErrorResetFL = 0.0;
      localB->NInvState_l = 0.0;
    }
  }
}

/* Function for Chart: '<Root>/NInverterState System' */
static void NInvState_Encoder_Reset_FR(const boolean_T *rtu_BInvErrorFR, const
  boolean_T *rtu_BInvSysReadyFR, const boolean_T *rtu_BInvQuitInvOnFR, const
  boolean_T *rtu_BInvDCQuitInvOnFR, B_NInvState_c_T *localB, DW_NInvState_f_T
  *localDW)
{
  if (localB->NInvState_l == 41.0) {
    if (localDW->is_Encoder_Reset_FR == NInvStat_IN_Inverter_HV_Checks3) {
      localDW->is_Inverter_HV_Checks3 = NInvState_IN_NO_ACTIVE_CHILD;
      localB->BHVOn = 1.0;
      localDW->is_Encoder_Reset_FR = NInvState_IN_NO_ACTIVE_CHILD;
    } else {
      localDW->is_Encoder_Error_FR = NInvState_IN_NO_ACTIVE_CHILD;
      localDW->is_Encoder_Reset_FR = NInvState_IN_NO_ACTIVE_CHILD;
    }

    localDW->is_c4_NInvState = NInvState_IN_Inv_OK;
    localB->NInvState_l = 92.0;
  } else {
    boolean_T guard1;
    guard1 = false;
    switch (localDW->is_Encoder_Reset_FR) {
     case NInvState_IN_Encoder_Error_FR:
      switch (localDW->is_Encoder_Error_FR) {
       case NInvState_IN_Error_On:
        /* Chart: '<Root>/NInverterState System' */
        if ((localDW->sfEvent == NInvState_CALL_EVENT) &&
            (localDW->temporalCounter_i1 >= 100) && (!*rtu_BInvErrorFR)) {
          localDW->is_Encoder_Error_FR = NInvState_IN_Error_off;
          localB->BInvErrorResetFR = 0.0;
        }
        break;

       case NInvState_IN_Error_off:
        /* Chart: '<Root>/NInverterState System' */
        if (*rtu_BInvSysReadyFR) {
          localDW->is_Encoder_Error_FR = NInvState_IN_NO_ACTIVE_CHILD;
          localDW->is_Encoder_Reset_FR = NInvStat_IN_Inverter_HV_Checks3;
          localDW->is_Inverter_HV_Checks3 = NInvState_IN_Inverter_IN;
          localB->NInvState_l = 37.0;
          localB->BInvDCOnFR = 1.0;
        } else if (*rtu_BInvErrorFR) {
          localDW->temporalCounter_i1 = 0U;
          localDW->is_Encoder_Error_FR = NInvState_IN_PBX_SENSORS_ini;
          localB->BInvErrorResetFR = 0.0;
        }
        break;

       default:
        /* case IN_PBX_SENSORS_ini: */
        if ((localDW->sfEvent == NInvState_CALL_EVENT) &&
            (localDW->temporalCounter_i1 >= 50)) {
          localDW->temporalCounter_i1 = 0U;
          localDW->is_Encoder_Error_FR = NInvState_IN_Error_On;
          localB->BInvErrorResetFR = 1.0;
        }
        break;
      }
      break;

     case NInvState_IN_Encoder_OK:
      break;

     default:
      /* case IN_Inverter_HV_Checks3: */
      switch (localDW->is_Inverter_HV_Checks3) {
       case NInvState_IN_Inv_Error_Check_1:
        localB->MTorqueLimitNegativeFR = 0.0;
        localB->MTorqueLimitPositiveFR = 0.0;
        if ((localDW->sfEvent == NInvState_CALL_EVENT) &&
            (localDW->temporalCounter_i1 >= 500)) {
          localDW->temporalCounter_i1 = 0U;
          localDW->is_Inverter_HV_Checks3 = NInvState_IN_Inv_Error_Reset;
          localB->NInvState_l = 0.0;
          localB->BInvErrorResetFR = 1.0;
          localB->BInvDCOnFR = 0.0;
          localB->BInvEnableFR = 0.0;
          localB->BInvOnFR = 0.0;
        }
        break;

       case NInvState_IN_Inv_Error_Check_2:
        if ((localDW->sfEvent == NInvState_CALL_EVENT) &&
            (localDW->temporalCounter_i1 >= 500)) {
          if (!*rtu_BInvErrorFR) {
            localDW->is_Inverter_HV_Checks3 = NInvState_IN_Inverter_IN;
            localB->NInvState_l = 37.0;
            localB->BInvDCOnFR = 1.0;
          } else if (*rtu_BInvErrorFR) {
            localDW->temporalCounter_i1 = 0U;
            localDW->is_Inverter_HV_Checks3 = NInvState_IN_Inv_Error_Check_1;
            localB->NInvState_l = 0.0;
            localB->MTorqueLimitNegativeFR = 0.0;
            localB->MTorqueLimitPositiveFR = 0.0;
          } else {
            guard1 = true;
          }
        } else {
          guard1 = true;
        }
        break;

       case NInvState_IN_Inv_Error_Reset:
        localB->BInvDCOnFR = 0.0;
        localB->BInvEnableFR = 0.0;
        localB->BInvOnFR = 0.0;
        if ((localDW->sfEvent == NInvState_CALL_EVENT) &&
            (localDW->temporalCounter_i1 >= 500)) {
          localDW->temporalCounter_i1 = 0U;
          localDW->is_Inverter_HV_Checks3 = NInvState_IN_Inv_Error_Check_2;
          localB->BInvErrorResetFR = 0.0;
          localB->NInvState_l = 0.0;
        }
        break;

       case NInvState_IN_Inverter_IN:
        localB->BInvDCOnFR = 1.0;

        /* Chart: '<Root>/NInverterState System' */
        if (*rtu_BInvDCQuitInvOnFR) {
          localDW->temporalCounter_i1 = 0U;
          localDW->is_Inverter_HV_Checks3 = NInvState_IN_START_UP;
          localB->NInvState_l = 38.0;
          localB->MTargetTorqueFR = 0.0;
          localB->MTorqueLimitNegativeFR = 0.0;
          localB->MTorqueLimitPositiveFR = 0.0;
          localB->BInvOnFR = 1.0;
        }
        break;

       case NInvState_IN_Inverter_ON:
        localB->BInvEnableFR = 1.0;

        /* Chart: '<Root>/NInverterState System' */
        if (*rtu_BInvQuitInvOnFR) {
          localDW->is_Inverter_HV_Checks3 = NInvState_IN_TorqueReq_Ready;
          localB->NInvState_l = 40.0;
          localB->MTorqueLimitNegativeFR = -100.0;
          localB->MTorqueLimitPositiveFR = 204.8;
        } else if (*rtu_BInvErrorFR) {
          localDW->temporalCounter_i1 = 0U;
          localDW->is_Inverter_HV_Checks3 = NInvState_IN_Inv_Error_Check_1;
          localB->NInvState_l = 0.0;
          localB->MTorqueLimitNegativeFR = 0.0;
          localB->MTorqueLimitPositiveFR = 0.0;
        }
        break;

       case NInvState_IN_START_UP:
        localB->MTargetTorqueFR = 0.0;
        localB->MTorqueLimitNegativeFR = 0.0;
        localB->MTorqueLimitPositiveFR = 0.0;
        localB->BInvOnFR = 1.0;
        if ((localDW->sfEvent == NInvState_CALL_EVENT) &&
            (localDW->temporalCounter_i1 >= 100)) {
          localDW->is_Inverter_HV_Checks3 = NInvState_IN_Inverter_ON;
          localB->NInvState_l = 39.0;
          localB->BInvEnableFR = 1.0;
        }
        break;

       default:
        /* case IN_TorqueReq_Ready: */
        localB->MTorqueLimitNegativeFR = -100.0;
        localB->MTorqueLimitPositiveFR = 204.8;

        /* Chart: '<Root>/NInverterState System' */
        if (*rtu_BInvErrorFR) {
          localDW->temporalCounter_i1 = 0U;
          localDW->is_Inverter_HV_Checks3 = NInvState_IN_Inv_Error_Check_1;
          localB->NInvState_l = 0.0;
          localB->MTorqueLimitNegativeFR = 0.0;
          localB->MTorqueLimitPositiveFR = 0.0;
        } else {
          localDW->is_Inverter_HV_Checks3 = NInvState_IN_NO_ACTIVE_CHILD;
          localB->BHVOn = 1.0;
          localDW->is_Encoder_Reset_FR = NInvState_IN_Encoder_OK;
          localB->NInvState_l = 41.0;
        }
        break;
      }
      break;
    }

    if (guard1) {
      localB->BInvErrorResetFR = 0.0;
      localB->NInvState_l = 0.0;
    }
  }
}

/* Function for Chart: '<Root>/NInverterState System' */
static void NInvState_Encoder_Reset_RL(const boolean_T *rtu_BInvErrorRL, const
  boolean_T *rtu_BInvSysReadyRL, const boolean_T *rtu_BInvQuitInvOnRL, const
  boolean_T *rtu_BInvDCQuitInvOnRL, B_NInvState_c_T *localB, DW_NInvState_f_T
  *localDW)
{
  if (localB->NInvState_l == 26.0) {
    if (localDW->is_Encoder_Reset_RL == NInvStat_IN_Inverter_HV_Checks3) {
      localDW->is_Inverter_HV_Checks3_e = NInvState_IN_NO_ACTIVE_CHILD;
      localB->BHVOn = 1.0;
      localDW->is_Encoder_Reset_RL = NInvState_IN_NO_ACTIVE_CHILD;
    } else {
      localDW->is_Encoder_Error_RL = NInvState_IN_NO_ACTIVE_CHILD;
      localDW->is_Encoder_Reset_RL = NInvState_IN_NO_ACTIVE_CHILD;
    }

    localDW->is_c4_NInvState = NInvState_IN_Inv_OK;
    localB->NInvState_l = 92.0;
  } else {
    boolean_T guard1;
    guard1 = false;
    switch (localDW->is_Encoder_Reset_RL) {
     case NInvState_IN_Encoder_Error_RL:
      switch (localDW->is_Encoder_Error_RL) {
       case NInvState_IN_Error_On:
        /* Chart: '<Root>/NInverterState System' */
        if ((localDW->sfEvent == NInvState_CALL_EVENT) &&
            (localDW->temporalCounter_i1 >= 100) && (!*rtu_BInvErrorRL)) {
          localDW->is_Encoder_Error_RL = NInvState_IN_Error_off;
          localB->BInvErrorResetRL = 0.0;
        }
        break;

       case NInvState_IN_Error_off:
        /* Chart: '<Root>/NInverterState System' */
        if (*rtu_BInvSysReadyRL) {
          localDW->is_Encoder_Error_RL = NInvState_IN_NO_ACTIVE_CHILD;
          localDW->is_Encoder_Reset_RL = NInvStat_IN_Inverter_HV_Checks3;
          localDW->is_Inverter_HV_Checks3_e = NInvState_IN_Inverter_IN;
          localB->NInvState_l = 22.0;
          localB->BInvDCOnRL = 1.0;
        } else if (*rtu_BInvErrorRL) {
          localDW->temporalCounter_i1 = 0U;
          localDW->is_Encoder_Error_RL = NInvState_IN_PBX_SENSORS_ini;
          localB->BInvErrorResetRL = 0.0;
        }
        break;

       default:
        /* case IN_PBX_SENSORS_ini: */
        if ((localDW->sfEvent == NInvState_CALL_EVENT) &&
            (localDW->temporalCounter_i1 >= 50)) {
          localDW->temporalCounter_i1 = 0U;
          localDW->is_Encoder_Error_RL = NInvState_IN_Error_On;
          localB->BInvErrorResetRL = 1.0;
        }
        break;
      }
      break;

     case NInvState_IN_Encoder_OK:
      break;

     default:
      /* case IN_Inverter_HV_Checks3: */
      switch (localDW->is_Inverter_HV_Checks3_e) {
       case NInvState_IN_Inv_Error_Check_1:
        localB->MTorqueLimitNegativeRL = 0.0;
        localB->MTorqueLimitPositiveRL = 0.0;
        if ((localDW->sfEvent == NInvState_CALL_EVENT) &&
            (localDW->temporalCounter_i1 >= 500)) {
          localDW->temporalCounter_i1 = 0U;
          localDW->is_Inverter_HV_Checks3_e = NInvState_IN_Inv_Error_Reset;
          localB->NInvState_l = 0.0;
          localB->BInvErrorResetRL = 1.0;
          localB->BInvDCOnRL = 0.0;
          localB->BInvEnableRL = 0.0;
          localB->BInvOnRL = 0.0;
        }
        break;

       case NInvState_IN_Inv_Error_Check_2:
        if ((localDW->sfEvent == NInvState_CALL_EVENT) &&
            (localDW->temporalCounter_i1 >= 500)) {
          if (!*rtu_BInvErrorRL) {
            localDW->is_Inverter_HV_Checks3_e = NInvState_IN_Inverter_IN;
            localB->NInvState_l = 22.0;
            localB->BInvDCOnRL = 1.0;
          } else if (*rtu_BInvErrorRL) {
            localDW->temporalCounter_i1 = 0U;
            localDW->is_Inverter_HV_Checks3_e = NInvState_IN_Inv_Error_Check_1;
            localB->NInvState_l = 0.0;
            localB->MTorqueLimitNegativeRL = 0.0;
            localB->MTorqueLimitPositiveRL = 0.0;
          } else {
            guard1 = true;
          }
        } else {
          guard1 = true;
        }
        break;

       case NInvState_IN_Inv_Error_Reset:
        localB->BInvDCOnRL = 0.0;
        localB->BInvEnableRL = 0.0;
        localB->BInvOnRL = 0.0;
        if ((localDW->sfEvent == NInvState_CALL_EVENT) &&
            (localDW->temporalCounter_i1 >= 500)) {
          localDW->temporalCounter_i1 = 0U;
          localDW->is_Inverter_HV_Checks3_e = NInvState_IN_Inv_Error_Check_2;
          localB->BInvErrorResetRL = 0.0;
          localB->NInvState_l = 0.0;
        }
        break;

       case NInvState_IN_Inverter_IN:
        localB->BInvDCOnRL = 1.0;

        /* Chart: '<Root>/NInverterState System' */
        if (*rtu_BInvDCQuitInvOnRL) {
          localDW->temporalCounter_i1 = 0U;
          localDW->is_Inverter_HV_Checks3_e = NInvState_IN_START_UP;
          localB->NInvState_l = 23.0;
          localB->MTargetTorqueRL = 0.0;
          localB->MTorqueLimitNegativeRL = 0.0;
          localB->MTorqueLimitPositiveRL = 0.0;
          localB->BInvOnRL = 1.0;
        }
        break;

       case NInvState_IN_Inverter_ON:
        localB->BInvEnableRL = 1.0;

        /* Chart: '<Root>/NInverterState System' */
        if (*rtu_BInvQuitInvOnRL) {
          localDW->is_Inverter_HV_Checks3_e = NInvState_IN_TorqueReq_Ready;
          localB->NInvState_l = 25.0;
          localB->MTorqueLimitNegativeRL = -100.0;
          localB->MTorqueLimitPositiveRL = 204.8;
        } else if (*rtu_BInvErrorRL) {
          localDW->temporalCounter_i1 = 0U;
          localDW->is_Inverter_HV_Checks3_e = NInvState_IN_Inv_Error_Check_1;
          localB->NInvState_l = 0.0;
          localB->MTorqueLimitNegativeRL = 0.0;
          localB->MTorqueLimitPositiveRL = 0.0;
        }
        break;

       case NInvState_IN_START_UP:
        localB->MTargetTorqueRL = 0.0;
        localB->MTorqueLimitNegativeRL = 0.0;
        localB->MTorqueLimitPositiveRL = 0.0;
        localB->BInvOnRL = 1.0;
        if ((localDW->sfEvent == NInvState_CALL_EVENT) &&
            (localDW->temporalCounter_i1 >= 100)) {
          localDW->is_Inverter_HV_Checks3_e = NInvState_IN_Inverter_ON;
          localB->NInvState_l = 24.0;
          localB->BInvEnableRL = 1.0;
        }
        break;

       default:
        /* case IN_TorqueReq_Ready: */
        localB->MTorqueLimitNegativeRL = -100.0;
        localB->MTorqueLimitPositiveRL = 204.8;

        /* Chart: '<Root>/NInverterState System' */
        if (*rtu_BInvErrorRL) {
          localDW->temporalCounter_i1 = 0U;
          localDW->is_Inverter_HV_Checks3_e = NInvState_IN_Inv_Error_Check_1;
          localB->NInvState_l = 0.0;
          localB->MTorqueLimitNegativeRL = 0.0;
          localB->MTorqueLimitPositiveRL = 0.0;
        } else {
          localDW->is_Inverter_HV_Checks3_e = NInvState_IN_NO_ACTIVE_CHILD;
          localB->BHVOn = 1.0;
          localDW->is_Encoder_Reset_RL = NInvState_IN_Encoder_OK;
          localB->NInvState_l = 26.0;
        }
        break;
      }
      break;
    }

    if (guard1) {
      localB->BInvErrorResetRL = 0.0;
      localB->NInvState_l = 0.0;
    }
  }
}

/* Function for Chart: '<Root>/NInverterState System' */
static void NInvState_Encoder_Reset_RR(const boolean_T *rtu_BInvErrorRR, const
  boolean_T *rtu_BInvSysReadyRR, const boolean_T *rtu_BInvQuitInvOnRR, const
  boolean_T *rtu_BInvDCQuitInvOnRR, B_NInvState_c_T *localB, DW_NInvState_f_T
  *localDW)
{
  if (localB->NInvState_l == 31.0) {
    if (localDW->is_Encoder_Reset_RR == NInvStat_IN_Inverter_HV_CheckRR) {
      localDW->is_Inverter_HV_CheckRR = NInvState_IN_NO_ACTIVE_CHILD;
      localB->BHVOn = 1.0;
      localDW->is_Encoder_Reset_RR = NInvState_IN_NO_ACTIVE_CHILD;
    } else {
      localDW->is_Encoder_Error_RR = NInvState_IN_NO_ACTIVE_CHILD;
      localDW->is_Encoder_Reset_RR = NInvState_IN_NO_ACTIVE_CHILD;
    }

    localDW->is_c4_NInvState = NInvState_IN_Inv_OK;
    localB->NInvState_l = 92.0;
  } else {
    boolean_T guard1;
    guard1 = false;
    switch (localDW->is_Encoder_Reset_RR) {
     case NInvState_IN_Encoder_Error_RR:
      switch (localDW->is_Encoder_Error_RR) {
       case NInvState_IN_Error_On:
        /* Chart: '<Root>/NInverterState System' */
        if ((localDW->sfEvent == NInvState_CALL_EVENT) &&
            (localDW->temporalCounter_i1 >= 100) && (!*rtu_BInvErrorRR)) {
          localDW->is_Encoder_Error_RR = NInvState_IN_Error_off;
          localB->BInvErrorResetRR = 0.0;
        }
        break;

       case NInvState_IN_Error_off:
        /* Chart: '<Root>/NInverterState System' */
        if (*rtu_BInvSysReadyRR) {
          localDW->is_Encoder_Error_RR = NInvState_IN_NO_ACTIVE_CHILD;
          localDW->is_Encoder_Reset_RR = NInvStat_IN_Inverter_HV_CheckRR;
          localDW->is_Inverter_HV_CheckRR = NInvState_IN_Inverter_IN;
          localB->NInvState_l = 27.0;
          localB->BInvDCOnRR = 1.0;
        } else if (*rtu_BInvErrorRR) {
          localDW->temporalCounter_i1 = 0U;
          localDW->is_Encoder_Error_RR = NInvState_IN_PBX_SENSORS_ini;
          localB->BInvErrorResetRR = 0.0;
        }
        break;

       default:
        /* case IN_PBX_SENSORS_ini: */
        if ((localDW->sfEvent == NInvState_CALL_EVENT) &&
            (localDW->temporalCounter_i1 >= 50)) {
          localDW->temporalCounter_i1 = 0U;
          localDW->is_Encoder_Error_RR = NInvState_IN_Error_On;
          localB->BInvErrorResetRR = 1.0;
        }
        break;
      }
      break;

     case NInvState_IN_Encoder_OK:
      break;

     default:
      /* case IN_Inverter_HV_CheckRR: */
      switch (localDW->is_Inverter_HV_CheckRR) {
       case NInvState_IN_Inv_Error_Check_1:
        localB->MTorqueLimitNegativeRR = 0.0;
        localB->MTorqueLimitPositiveRR = 0.0;
        if ((localDW->sfEvent == NInvState_CALL_EVENT) &&
            (localDW->temporalCounter_i1 >= 500)) {
          localDW->temporalCounter_i1 = 0U;
          localDW->is_Inverter_HV_CheckRR = NInvState_IN_Inv_Error_Reset;
          localB->NInvState_l = 0.0;
          localB->BInvErrorResetRR = 1.0;
          localB->BInvDCOnRR = 0.0;
          localB->BInvEnableRR = 0.0;
          localB->BInvOnRR = 0.0;
        }
        break;

       case NInvState_IN_Inv_Error_Check_2:
        if ((localDW->sfEvent == NInvState_CALL_EVENT) &&
            (localDW->temporalCounter_i1 >= 500)) {
          if (!*rtu_BInvErrorRR) {
            localDW->is_Inverter_HV_CheckRR = NInvState_IN_Inverter_IN;
            localB->NInvState_l = 27.0;
            localB->BInvDCOnRR = 1.0;
          } else if (*rtu_BInvErrorRR) {
            localDW->temporalCounter_i1 = 0U;
            localDW->is_Inverter_HV_CheckRR = NInvState_IN_Inv_Error_Check_1;
            localB->NInvState_l = 0.0;
            localB->MTorqueLimitNegativeRR = 0.0;
            localB->MTorqueLimitPositiveRR = 0.0;
          } else {
            guard1 = true;
          }
        } else {
          guard1 = true;
        }
        break;

       case NInvState_IN_Inv_Error_Reset:
        localB->BInvDCOnRR = 0.0;
        localB->BInvEnableRR = 0.0;
        localB->BInvOnRR = 0.0;
        if ((localDW->sfEvent == NInvState_CALL_EVENT) &&
            (localDW->temporalCounter_i1 >= 500)) {
          localDW->temporalCounter_i1 = 0U;
          localDW->is_Inverter_HV_CheckRR = NInvState_IN_Inv_Error_Check_2;
          localB->BInvErrorResetRR = 0.0;
          localB->NInvState_l = 0.0;
        }
        break;

       case NInvState_IN_Inverter_IN:
        localB->BInvDCOnRR = 1.0;

        /* Chart: '<Root>/NInverterState System' */
        if (*rtu_BInvDCQuitInvOnRR) {
          localDW->temporalCounter_i1 = 0U;
          localDW->is_Inverter_HV_CheckRR = NInvState_IN_START_UP;
          localB->NInvState_l = 28.0;
          localB->MTargetTorqueRR = 0.0;
          localB->MTorqueLimitNegativeRR = 0.0;
          localB->MTorqueLimitPositiveRR = 0.0;
          localB->BInvOnRR = 1.0;
        }
        break;

       case NInvState_IN_Inverter_ON:
        localB->BInvEnableRR = 1.0;

        /* Chart: '<Root>/NInverterState System' */
        if (*rtu_BInvQuitInvOnRR) {
          localDW->is_Inverter_HV_CheckRR = NInvState_IN_TorqueReq_Ready;
          localB->NInvState_l = 30.0;
          localB->MTorqueLimitNegativeRR = -100.0;
          localB->MTorqueLimitPositiveRR = 204.8;
        } else if (*rtu_BInvErrorRR) {
          localDW->temporalCounter_i1 = 0U;
          localDW->is_Inverter_HV_CheckRR = NInvState_IN_Inv_Error_Check_1;
          localB->NInvState_l = 0.0;
          localB->MTorqueLimitNegativeRR = 0.0;
          localB->MTorqueLimitPositiveRR = 0.0;
        }
        break;

       case NInvState_IN_START_UP:
        localB->MTargetTorqueRR = 0.0;
        localB->MTorqueLimitNegativeRR = 0.0;
        localB->MTorqueLimitPositiveRR = 0.0;
        localB->BInvOnRR = 1.0;
        if ((localDW->sfEvent == NInvState_CALL_EVENT) &&
            (localDW->temporalCounter_i1 >= 100)) {
          localDW->is_Inverter_HV_CheckRR = NInvState_IN_Inverter_ON;
          localB->NInvState_l = 29.0;
          localB->BInvEnableRR = 1.0;
        }
        break;

       default:
        /* case IN_TorqueReq_Ready: */
        localB->MTorqueLimitNegativeRR = -100.0;
        localB->MTorqueLimitPositiveRR = 204.8;

        /* Chart: '<Root>/NInverterState System' */
        if (*rtu_BInvErrorRR) {
          localDW->temporalCounter_i1 = 0U;
          localDW->is_Inverter_HV_CheckRR = NInvState_IN_Inv_Error_Check_1;
          localB->NInvState_l = 0.0;
          localB->MTorqueLimitNegativeRR = 0.0;
          localB->MTorqueLimitPositiveRR = 0.0;
        } else {
          localDW->is_Inverter_HV_CheckRR = NInvState_IN_NO_ACTIVE_CHILD;
          localB->BHVOn = 1.0;
          localDW->is_Encoder_Reset_RR = NInvState_IN_Encoder_OK;
          localB->NInvState_l = 31.0;
        }
        break;
      }
      break;
    }

    if (guard1) {
      localB->BInvErrorResetRR = 0.0;
      localB->NInvState_l = 0.0;
    }
  }
}

/* Function for Chart: '<Root>/NInverterState System' */
static void exit_internal_Inverter_HV_Check(B_NInvState_c_T *localB,
  DW_NInvState_f_T *localDW)
{
  switch (localDW->is_Inverter_HV_Checks) {
   case NInvStat_IN_Inverter_HV_CheckFR:
    localDW->is_Inverter_HV_CheckFR = NInvState_IN_NO_ACTIVE_CHILD;
    localB->BHVOn = 1.0;
    localB->NInvState_l = 4.0;
    localDW->is_Inverter_HV_Checks = NInvState_IN_NO_ACTIVE_CHILD;
    break;

   case NInvSt_IN_Inverter_HV_CheckRR_j:
    localDW->is_Inverter_HV_CheckRR_m = NInvState_IN_NO_ACTIVE_CHILD;
    localB->BHVOn = 1.0;
    localDW->is_Inverter_HV_Checks = NInvState_IN_NO_ACTIVE_CHILD;
    break;

   case NInvSta_IN_Inverter_HV_ChecksFL:
    localDW->is_Inverter_HV_ChecksFL = NInvState_IN_NO_ACTIVE_CHILD;
    localB->BHVOn = 1.0;
    localDW->is_Inverter_HV_Checks = NInvState_IN_NO_ACTIVE_CHILD;
    break;

   case NInvSta_IN_Inverter_HV_ChecksRL:
    localDW->is_Inverter_HV_ChecksRL = NInvState_IN_NO_ACTIVE_CHILD;
    localB->BHVOn = 1.0;
    localDW->is_Inverter_HV_Checks = NInvState_IN_NO_ACTIVE_CHILD;
    break;

   default:
    localDW->is_Inverter_HV_Checks = NInvState_IN_NO_ACTIVE_CHILD;
    break;
  }
}

/* Function for Chart: '<Root>/NInverterState System' */
static void NInvState_Inverter_HV_CheckFR(const boolean_T *rtu_BInvErrorFR,
  const boolean_T *rtu_BInvQuitInvOnFR, const boolean_T *rtu_BInvDCQuitInvOnFR,
  B_NInvState_c_T *localB, DW_NInvState_f_T *localDW)
{
  boolean_T guard1;
  guard1 = false;
  switch (localDW->is_Inverter_HV_CheckFR) {
   case NInvState_IN_Inv_Error_Check_1:
    localB->MTorqueLimitNegativeFR = 0.0;
    localB->MTorqueLimitPositiveFR = 0.0;
    if ((localDW->sfEvent == NInvState_CALL_EVENT) &&
        (localDW->temporalCounter_i1 >= 500)) {
      localDW->temporalCounter_i1 = 0U;
      localDW->is_Inverter_HV_CheckFR = NInvState_IN_Inv_Error_Reset;
      localB->NInvState_l = 0.0;
      localB->BInvErrorResetFR = 1.0;
      localB->BInvDCOnFR = 0.0;
      localB->BInvEnableFR = 0.0;
      localB->BInvOnFR = 0.0;
    }
    break;

   case NInvState_IN_Inv_Error_Check_2:
    if ((localDW->sfEvent == NInvState_CALL_EVENT) &&
        (localDW->temporalCounter_i1 >= 500)) {
      if (!*rtu_BInvErrorFR) {
        localDW->is_Inverter_HV_CheckFR = NInvState_IN_Inverter_IN;
        localB->NInvState_l = 5.0;
        localB->BInvDCOnFR = 1.0;
      } else if (*rtu_BInvErrorFR) {
        localDW->temporalCounter_i1 = 0U;
        localDW->is_Inverter_HV_CheckFR = NInvState_IN_Inv_Error_Check_1;
        localB->NInvState_l = 0.0;
        localB->MTorqueLimitNegativeFR = 0.0;
        localB->MTorqueLimitPositiveFR = 0.0;
      } else {
        guard1 = true;
      }
    } else {
      guard1 = true;
    }
    break;

   case NInvState_IN_Inv_Error_Reset:
    localB->BInvDCOnFR = 0.0;
    localB->BInvEnableFR = 0.0;
    localB->BInvOnFR = 0.0;
    if ((localDW->sfEvent == NInvState_CALL_EVENT) &&
        (localDW->temporalCounter_i1 >= 500)) {
      localDW->temporalCounter_i1 = 0U;
      localDW->is_Inverter_HV_CheckFR = NInvState_IN_Inv_Error_Check_2;
      localB->BInvErrorResetFR = 0.0;
      localB->NInvState_l = 0.0;
    }
    break;

   case NInvState_IN_Inverter_IN:
    localB->BInvDCOnFR = 1.0;
    if (*rtu_BInvDCQuitInvOnFR) {
      localDW->temporalCounter_i1 = 0U;
      localDW->is_Inverter_HV_CheckFR = NInvState_IN_START_UP;
      localB->NInvState_l = 6.0;
      localB->MTargetTorqueFR = 0.0;
      localB->MTorqueLimitNegativeFR = 0.0;
      localB->MTorqueLimitPositiveFR = 0.0;
      localB->BInvOnFR = 1.0;
    }
    break;

   case NInvState_IN_Inverter_ON:
    localB->BInvEnableFR = 1.0;
    if (*rtu_BInvQuitInvOnFR) {
      localDW->temporalCounter_i1 = 0U;
      localDW->is_Inverter_HV_CheckFR = NInvState_IN_TorqueReq_Ready;
      localB->NInvState_l = 8.0;
      localB->MTorqueLimitNegativeFR = -100.0;
      localB->MTorqueLimitPositiveFR = 204.8;
    } else if (*rtu_BInvErrorFR) {
      localDW->temporalCounter_i1 = 0U;
      localDW->is_Inverter_HV_CheckFR = NInvState_IN_Inv_Error_Check_1;
      localB->NInvState_l = 0.0;
      localB->MTorqueLimitNegativeFR = 0.0;
      localB->MTorqueLimitPositiveFR = 0.0;
    }
    break;

   case NInvState_IN_START_UP:
    localB->MTargetTorqueFR = 0.0;
    localB->MTorqueLimitNegativeFR = 0.0;
    localB->MTorqueLimitPositiveFR = 0.0;
    localB->BInvOnFR = 1.0;
    if ((localDW->sfEvent == NInvState_CALL_EVENT) &&
        (localDW->temporalCounter_i1 >= 100)) {
      localDW->is_Inverter_HV_CheckFR = NInvState_IN_Inverter_ON;
      localB->NInvState_l = 7.0;
      localB->BInvEnableFR = 1.0;
    }
    break;

   default:
    /* case IN_TorqueReq_Ready: */
    localB->MTorqueLimitNegativeFR = -100.0;
    localB->MTorqueLimitPositiveFR = 204.8;
    if ((localDW->sfEvent == NInvState_CALL_EVENT) &&
        (localDW->temporalCounter_i1 >= 500) && (!*rtu_BInvErrorFR)) {
      localDW->is_Inverter_HV_CheckFR = NInvState_IN_NO_ACTIVE_CHILD;
      localB->BHVOn = 1.0;
      localDW->is_Inverter_HV_Checks = NInvSt_IN_Inverter_HV_CheckRR_j;
      localDW->is_Inverter_HV_CheckRR_m = NInvState_IN_Inverter_IN;
      localB->NInvState_l = 9.0;
      localB->BInvDCOnRR = 1.0;
    } else if (*rtu_BInvErrorFR) {
      localDW->temporalCounter_i1 = 0U;
      localDW->is_Inverter_HV_CheckFR = NInvState_IN_Inv_Error_Check_1;
      localB->NInvState_l = 0.0;
      localB->MTorqueLimitNegativeFR = 0.0;
      localB->MTorqueLimitPositiveFR = 0.0;
    }
    break;
  }

  if (guard1) {
    localB->BInvErrorResetFR = 0.0;
    localB->NInvState_l = 0.0;
  }
}

/* Function for Chart: '<Root>/NInverterState System' */
static void NInvState_Inverter_HV_ChecksFL(const boolean_T *rtu_BInvErrorFL,
  const boolean_T *rtu_BInvQuitInvOnFL, const boolean_T *rtu_BInvDCQuitInvOnFL,
  B_NInvState_c_T *localB, DW_NInvState_f_T *localDW)
{
  switch (localDW->is_Inverter_HV_ChecksFL) {
   case NInvState_IN_Inv_Error_Check_1:
    localB->MTorqueLimitNegativeFL = 0.0;
    localB->MTorqueLimitPositiveFL = 0.0;
    if ((localDW->sfEvent == NInvState_CALL_EVENT) &&
        (localDW->temporalCounter_i1 >= 500)) {
      localDW->temporalCounter_i1 = 0U;
      localDW->is_Inverter_HV_ChecksFL = NInvState_IN_Inv_Error_Reset;
      localB->BInvErrorResetFL = 1.0;
      localB->BInvDCOnFL = 0.0;
      localB->BInvEnableFL = 0.0;
      localB->BInvOnFL = 0.0;
    }
    break;

   case NInvState_IN_Inv_Error_Check_2:
    if ((localDW->sfEvent == NInvState_CALL_EVENT) &&
        (localDW->temporalCounter_i1 >= 500)) {
      if (!*rtu_BInvErrorFL) {
        localDW->is_Inverter_HV_ChecksFL = NInvState_IN_Inverter_IN;
        localB->NInvState_l = 13.0;
        localB->BInvDCOnFL = 1.0;
      } else {
        localDW->temporalCounter_i1 = 0U;
        localDW->is_Inverter_HV_ChecksFL = NInvState_IN_Inv_Error_Check_1;
        localB->MTorqueLimitNegativeFL = 0.0;
        localB->MTorqueLimitPositiveFL = 0.0;
      }
    } else {
      localB->BInvErrorResetFL = 0.0;
    }
    break;

   case NInvState_IN_Inv_Error_Reset:
    localB->BInvDCOnFL = 0.0;
    localB->BInvEnableFL = 0.0;
    localB->BInvOnFL = 0.0;
    if ((localDW->sfEvent == NInvState_CALL_EVENT) &&
        (localDW->temporalCounter_i1 >= 500)) {
      localDW->temporalCounter_i1 = 0U;
      localDW->is_Inverter_HV_ChecksFL = NInvState_IN_Inv_Error_Check_2;
      localB->BInvErrorResetFL = 0.0;
    }
    break;

   case NInvState_IN_Inverter_IN:
    localB->BInvDCOnFL = 1.0;
    if (*rtu_BInvDCQuitInvOnFL) {
      localDW->temporalCounter_i1 = 0U;
      localDW->is_Inverter_HV_ChecksFL = NInvState_IN_START_UP;
      localB->NInvState_l = 14.0;
      localB->MTargetTorqueFL = 0.0;
      localB->MTorqueLimitNegativeFL = 0.0;
      localB->MTorqueLimitPositiveFL = 0.0;
      localB->BInvOnFL = 1.0;
    }
    break;

   case NInvState_IN_Inverter_ON:
    localB->BInvEnableFL = 1.0;
    if (*rtu_BInvQuitInvOnFL) {
      localDW->temporalCounter_i1 = 0U;
      localDW->is_Inverter_HV_ChecksFL = NInvState_IN_TorqueReq_Ready;
      localB->NInvState_l = 16.0;
      localB->MTorqueLimitNegativeFL = -100.0;
      localB->MTorqueLimitPositiveFL = 204.8;
    } else if (*rtu_BInvErrorFL) {
      localDW->temporalCounter_i1 = 0U;
      localDW->is_Inverter_HV_ChecksFL = NInvState_IN_Inv_Error_Check_1;
      localB->MTorqueLimitNegativeFL = 0.0;
      localB->MTorqueLimitPositiveFL = 0.0;
    }
    break;

   case NInvState_IN_START_UP:
    localB->MTargetTorqueFL = 0.0;
    localB->MTorqueLimitNegativeFL = 0.0;
    localB->MTorqueLimitPositiveFL = 0.0;
    localB->BInvOnFL = 1.0;
    if ((localDW->sfEvent == NInvState_CALL_EVENT) &&
        (localDW->temporalCounter_i1 >= 100)) {
      localDW->is_Inverter_HV_ChecksFL = NInvState_IN_Inverter_ON;
      localB->NInvState_l = 15.0;
      localB->BInvEnableFL = 1.0;
    }
    break;

   default:
    /* case IN_TorqueReq_Ready: */
    localB->MTorqueLimitNegativeFL = -100.0;
    localB->MTorqueLimitPositiveFL = 204.8;
    if ((localDW->sfEvent == NInvState_CALL_EVENT) &&
        (localDW->temporalCounter_i1 >= 500) && (!*rtu_BInvErrorFL)) {
      localDW->is_Inverter_HV_ChecksFL = NInvState_IN_NO_ACTIVE_CHILD;
      localB->BHVOn = 1.0;
      localDW->is_Inverter_HV_Checks = NInvSta_IN_Inverter_HV_ChecksRL;
      localDW->is_Inverter_HV_ChecksRL = NInvState_IN_Inverter_IN;
      localB->NInvState_l = 17.0;
      localB->BInvDCOnRL = 1.0;
    } else if (*rtu_BInvErrorFL) {
      localDW->temporalCounter_i1 = 0U;
      localDW->is_Inverter_HV_ChecksFL = NInvState_IN_Inv_Error_Check_1;
      localB->MTorqueLimitNegativeFL = 0.0;
      localB->MTorqueLimitPositiveFL = 0.0;
    }
    break;
  }
}

/* Function for Chart: '<Root>/NInverterState System' */
static void NInvState_Inverter_HV_Checks(const boolean_T *rtu_BErrorReset, const
  boolean_T *rtu_BInvErrorRL, const boolean_T *rtu_BInvErrorRR, const boolean_T *
  rtu_BInvErrorFL, const boolean_T *rtu_BInvErrorFR, const boolean_T
  *rtu_BInvQuitInvOnRL, const boolean_T *rtu_BInvQuitInvOnRR, const boolean_T
  *rtu_BInvQuitInvOnFL, const boolean_T *rtu_BInvQuitInvOnFR, const boolean_T
  *rtu_BInvDCQuitInvOnRL, const boolean_T *rtu_BInvDCQuitInvOnRR, const
  boolean_T *rtu_BInvDCQuitInvOnFL, const boolean_T *rtu_BInvDCQuitInvOnFR,
  B_NInvState_c_T *localB, DW_NInvState_f_T *localDW)
{
  /* Chart: '<Root>/NInverterState System' */
  if (*rtu_BErrorReset) {
    exit_internal_Inverter_HV_Check(localB, localDW);
    localDW->is_c4_NInvState = NInvState_IN_Inv_Error_Checks;
    localDW->temporalCounter_i1 = 0U;
    localDW->is_Inv_Error_Checks = NInvState_IN_Inv_LV_Check;
    localB->NInvState_l = 1.0;
    localB->BInvErrorResetRR = 0.0;
    localB->BInvErrorResetRL = 0.0;
    localB->BInvErrorResetFR = 0.0;
    localB->BInvErrorResetFL = 0.0;
  } else if (localB->NInvState_l == 21.0) {
    exit_internal_Inverter_HV_Check(localB, localDW);
    localDW->is_c4_NInvState = NInvState_IN_Inv_OK;
    localB->NInvState_l = 92.0;
  } else {
    switch (localDW->is_Inverter_HV_Checks) {
     case NInvState_IN_Inv_HV_Check:
      if (localB->NInvState_l == 3.0) {
        localDW->is_Inverter_HV_Checks = NInvStat_IN_Inverter_HV_CheckFR;
        localDW->is_Inverter_HV_CheckFR = NInvState_IN_Inverter_IN;
        localB->NInvState_l = 5.0;
        localB->BInvDCOnFR = 1.0;
      }
      break;

     case NInvState_IN_Inv_OK_l:
      break;

     case NInvStat_IN_Inverter_HV_CheckFR:
      NInvState_Inverter_HV_CheckFR(rtu_BInvErrorFR, rtu_BInvQuitInvOnFR,
        rtu_BInvDCQuitInvOnFR, localB, localDW);
      break;

     case NInvSt_IN_Inverter_HV_CheckRR_j:
      switch (localDW->is_Inverter_HV_CheckRR_m) {
       case NInvState_IN_Inv_Error_Check_1:
        localB->MTorqueLimitNegativeRR = 0.0;
        localB->MTorqueLimitPositiveRR = 0.0;
        if ((localDW->sfEvent == NInvState_CALL_EVENT) &&
            (localDW->temporalCounter_i1 >= 500)) {
          localDW->temporalCounter_i1 = 0U;
          localDW->is_Inverter_HV_CheckRR_m = NInvState_IN_Inv_Error_Reset;
          localB->BInvErrorResetRR = 1.0;
          localB->BInvDCOnRR = 0.0;
          localB->BInvEnableRR = 0.0;
          localB->BInvOnRR = 0.0;
        }
        break;

       case NInvState_IN_Inv_Error_Check_2:
        if ((localDW->sfEvent == NInvState_CALL_EVENT) &&
            (localDW->temporalCounter_i1 >= 500)) {
          if (!*rtu_BInvErrorRR) {
            localDW->is_Inverter_HV_CheckRR_m = NInvState_IN_Inverter_IN;
            localB->NInvState_l = 9.0;
            localB->BInvDCOnRR = 1.0;
          } else {
            localDW->temporalCounter_i1 = 0U;
            localDW->is_Inverter_HV_CheckRR_m = NInvState_IN_Inv_Error_Check_1;
            localB->MTorqueLimitNegativeRR = 0.0;
            localB->MTorqueLimitPositiveRR = 0.0;
          }
        } else {
          localB->BInvErrorResetRR = 0.0;
        }
        break;

       case NInvState_IN_Inv_Error_Reset:
        localB->BInvDCOnRR = 0.0;
        localB->BInvEnableRR = 0.0;
        localB->BInvOnRR = 0.0;
        if ((localDW->sfEvent == NInvState_CALL_EVENT) &&
            (localDW->temporalCounter_i1 >= 500)) {
          localDW->temporalCounter_i1 = 0U;
          localDW->is_Inverter_HV_CheckRR_m = NInvState_IN_Inv_Error_Check_2;
          localB->BInvErrorResetRR = 0.0;
        }
        break;

       case NInvState_IN_Inverter_IN:
        localB->BInvDCOnRR = 1.0;
        if (*rtu_BInvDCQuitInvOnRR) {
          localDW->temporalCounter_i1 = 0U;
          localDW->is_Inverter_HV_CheckRR_m = NInvState_IN_START_UP;
          localB->NInvState_l = 10.0;
          localB->MTargetTorqueRR = 0.0;
          localB->MTorqueLimitNegativeRR = 0.0;
          localB->MTorqueLimitPositiveRR = 0.0;
          localB->BInvOnRR = 1.0;
        }
        break;

       case NInvState_IN_Inverter_ON:
        localB->BInvEnableRR = 1.0;
        if (*rtu_BInvQuitInvOnRR) {
          localDW->temporalCounter_i1 = 0U;
          localDW->is_Inverter_HV_CheckRR_m = NInvState_IN_TorqueReq_Ready;
          localB->NInvState_l = 12.0;
          localB->MTorqueLimitNegativeRR = -100.0;
          localB->MTorqueLimitPositiveRR = 204.8;
        } else if (*rtu_BInvErrorRR) {
          localDW->temporalCounter_i1 = 0U;
          localDW->is_Inverter_HV_CheckRR_m = NInvState_IN_Inv_Error_Check_1;
          localB->MTorqueLimitNegativeRR = 0.0;
          localB->MTorqueLimitPositiveRR = 0.0;
        }
        break;

       case NInvState_IN_START_UP:
        localB->MTargetTorqueRR = 0.0;
        localB->MTorqueLimitNegativeRR = 0.0;
        localB->MTorqueLimitPositiveRR = 0.0;
        localB->BInvOnRR = 1.0;
        if ((localDW->sfEvent == NInvState_CALL_EVENT) &&
            (localDW->temporalCounter_i1 >= 100)) {
          localDW->is_Inverter_HV_CheckRR_m = NInvState_IN_Inverter_ON;
          localB->NInvState_l = 11.0;
          localB->BInvEnableRR = 1.0;
        }
        break;

       default:
        /* case IN_TorqueReq_Ready: */
        localB->MTorqueLimitNegativeRR = -100.0;
        localB->MTorqueLimitPositiveRR = 204.8;
        if ((localDW->sfEvent == NInvState_CALL_EVENT) &&
            (localDW->temporalCounter_i1 >= 500) && (!*rtu_BInvErrorRR)) {
          localDW->is_Inverter_HV_CheckRR_m = NInvState_IN_NO_ACTIVE_CHILD;
          localB->BHVOn = 1.0;
          localDW->is_Inverter_HV_Checks = NInvSta_IN_Inverter_HV_ChecksFL;
          localDW->is_Inverter_HV_ChecksFL = NInvState_IN_Inverter_IN;
          localB->NInvState_l = 13.0;
          localB->BInvDCOnFL = 1.0;
        } else if (*rtu_BInvErrorRR) {
          localDW->temporalCounter_i1 = 0U;
          localDW->is_Inverter_HV_CheckRR_m = NInvState_IN_Inv_Error_Check_1;
          localB->MTorqueLimitNegativeRR = 0.0;
          localB->MTorqueLimitPositiveRR = 0.0;
        }
        break;
      }
      break;

     case NInvSta_IN_Inverter_HV_ChecksFL:
      NInvState_Inverter_HV_ChecksFL(rtu_BInvErrorFL, rtu_BInvQuitInvOnFL,
        rtu_BInvDCQuitInvOnFL, localB, localDW);
      break;

     default:
      /* case IN_Inverter_HV_ChecksRL: */
      switch (localDW->is_Inverter_HV_ChecksRL) {
       case NInvState_IN_Inv_Error_Check_1:
        localB->MTorqueLimitNegativeRL = 0.0;
        localB->MTorqueLimitPositiveRL = 0.0;
        if ((localDW->sfEvent == NInvState_CALL_EVENT) &&
            (localDW->temporalCounter_i1 >= 500)) {
          localDW->temporalCounter_i1 = 0U;
          localDW->is_Inverter_HV_ChecksRL = NInvState_IN_Inv_Error_Reset;
          localB->BInvErrorResetRL = 1.0;
          localB->BInvDCOnRL = 0.0;
          localB->BInvEnableRL = 0.0;
          localB->BInvOnRL = 0.0;
        }
        break;

       case NInvState_IN_Inv_Error_Check_2:
        if ((localDW->sfEvent == NInvState_CALL_EVENT) &&
            (localDW->temporalCounter_i1 >= 500)) {
          if (!*rtu_BInvErrorRL) {
            localDW->is_Inverter_HV_ChecksRL = NInvState_IN_Inverter_IN;
            localB->NInvState_l = 17.0;
            localB->BInvDCOnRL = 1.0;
          } else {
            localDW->temporalCounter_i1 = 0U;
            localDW->is_Inverter_HV_ChecksRL = NInvState_IN_Inv_Error_Check_1;
            localB->MTorqueLimitNegativeRL = 0.0;
            localB->MTorqueLimitPositiveRL = 0.0;
          }
        } else {
          localB->BInvErrorResetRL = 0.0;
        }
        break;

       case NInvState_IN_Inv_Error_Reset:
        localB->BInvDCOnRL = 0.0;
        localB->BInvEnableRL = 0.0;
        localB->BInvOnRL = 0.0;
        if ((localDW->sfEvent == NInvState_CALL_EVENT) &&
            (localDW->temporalCounter_i1 >= 500)) {
          localDW->temporalCounter_i1 = 0U;
          localDW->is_Inverter_HV_ChecksRL = NInvState_IN_Inv_Error_Check_2;
          localB->BInvErrorResetRL = 0.0;
        }
        break;

       case NInvState_IN_Inverter_IN:
        localB->BInvDCOnRL = 1.0;
        if (*rtu_BInvDCQuitInvOnRL) {
          localDW->temporalCounter_i1 = 0U;
          localDW->is_Inverter_HV_ChecksRL = NInvState_IN_START_UP;
          localB->NInvState_l = 18.0;
          localB->MTargetTorqueRL = 0.0;
          localB->MTorqueLimitNegativeRL = 0.0;
          localB->MTorqueLimitPositiveRL = 0.0;
          localB->BInvOnRL = 1.0;
        }
        break;

       case NInvState_IN_Inverter_ON:
        localB->BInvEnableRL = 1.0;
        if (*rtu_BInvQuitInvOnRL) {
          localDW->is_Inverter_HV_ChecksRL = NInvState_IN_TorqueReq_Ready;
          localB->NInvState_l = 20.0;
          localB->MTorqueLimitNegativeRL = -100.0;
          localB->MTorqueLimitPositiveRL = 204.8;
        } else if (*rtu_BInvErrorRL) {
          localDW->temporalCounter_i1 = 0U;
          localDW->is_Inverter_HV_ChecksRL = NInvState_IN_Inv_Error_Check_1;
          localB->MTorqueLimitNegativeRL = 0.0;
          localB->MTorqueLimitPositiveRL = 0.0;
        }
        break;

       case NInvState_IN_START_UP:
        localB->MTargetTorqueRL = 0.0;
        localB->MTorqueLimitNegativeRL = 0.0;
        localB->MTorqueLimitPositiveRL = 0.0;
        localB->BInvOnRL = 1.0;
        if ((localDW->sfEvent == NInvState_CALL_EVENT) &&
            (localDW->temporalCounter_i1 >= 100)) {
          localDW->is_Inverter_HV_ChecksRL = NInvState_IN_Inverter_ON;
          localB->NInvState_l = 19.0;
          localB->BInvEnableRL = 1.0;
        }
        break;

       default:
        /* case IN_TorqueReq_Ready: */
        localB->MTorqueLimitNegativeRL = -100.0;
        localB->MTorqueLimitPositiveRL = 204.8;
        if (*rtu_BInvErrorRL) {
          localDW->temporalCounter_i1 = 0U;
          localDW->is_Inverter_HV_ChecksRL = NInvState_IN_Inv_Error_Check_1;
          localB->MTorqueLimitNegativeRL = 0.0;
          localB->MTorqueLimitPositiveRL = 0.0;
        } else {
          localDW->is_Inverter_HV_ChecksRL = NInvState_IN_NO_ACTIVE_CHILD;
          localB->BHVOn = 1.0;
          localDW->is_Inverter_HV_Checks = NInvState_IN_Inv_OK_l;
          localB->NInvState_l = 21.0;
        }
        break;
      }
      break;
    }
  }

  /* End of Chart: '<Root>/NInverterState System' */
}

/* System initialize for referenced model: 'NInvState' */
void NInvState_Init(DW_NInvState_f_T *localDW)
{
  /* SystemInitialize for Chart: '<Root>/NInverterState System' */
  localDW->sfEvent = NInvState_CALL_EVENT;
}

/* Output and update for referenced model: 'NInvState' */
void NInvState(const boolean_T *rtu_BErrorReset, const real_T *rtu_VDCInvRL,
               const real_T *rtu_nMotorRL, const boolean_T *rtu_BInvErrorRL,
               const boolean_T *rtu_BInvErrorRR, const boolean_T
               *rtu_BInvErrorFL, const boolean_T *rtu_BInvErrorFR, const real_T *
               rtu_NInvDTCRL, const real_T *rtu_NInvDTCRR, const real_T
               *rtu_NInvDTCFL, const real_T *rtu_NInvDTCFR, const boolean_T
               *rtu_BInvSysReadyRL, const boolean_T *rtu_BInvSysReadyRR, const
               boolean_T *rtu_BInvSysReadyFL, const boolean_T
               *rtu_BInvSysReadyFR, const boolean_T *rtu_BInvQuitInvOnRL, const
               boolean_T *rtu_BInvQuitInvOnRR, const boolean_T
               *rtu_BInvQuitInvOnFL, const boolean_T *rtu_BInvQuitInvOnFR, const
               boolean_T *rtu_BInvDCQuitInvOnRL, const boolean_T
               *rtu_BInvDCQuitInvOnRR, const boolean_T *rtu_BInvDCQuitInvOnFL,
               const boolean_T *rtu_BInvDCQuitInvOnFR, const real_T
               *rtu_VDCAccumulator, real_T *rty_NInvState, real_T *rty_BHVOn,
               real_T *rty_BInvOnRL, real_T *rty_BInvOnRR, real_T *rty_BInvOnFL,
               real_T *rty_BInvOnFR, real_T *rty_BInvDCOnRL, real_T
               *rty_BInvDCOnRR, real_T *rty_BInvDCOnFL, real_T *rty_BInvDCOnFR,
               real_T *rty_BInvEnableRL, real_T *rty_BInvEnableRR, real_T
               *rty_BInvEnableFL, real_T *rty_BInvEnableFR, real_T
               *rty_BInvErrorResetRL, real_T *rty_BInvErrorResetRR, real_T
               *rty_BInvErrorResetFL, real_T *rty_BInvErrorResetFR, real_T
               *rty_MTargetTorqueRL, real_T *rty_MTargetTorqueRR, real_T
               *rty_MTargetTorqueFL, real_T *rty_MTargetTorqueFR, real_T
               *rty_MTorqueLimitNegativeRL, real_T *rty_MTorqueLimitNegativeRR,
               real_T *rty_MTorqueLimitNegativeFL, real_T
               *rty_MTorqueLimitNegativeFR, real_T *rty_MTorqueLimitPositiveRL,
               real_T *rty_MTorqueLimitPositiveRR, real_T
               *rty_MTorqueLimitPositiveFL, real_T *rty_MTorqueLimitPositiveFR,
               B_NInvState_c_T *localB, DW_NInvState_f_T *localDW)
{
  /* Chart: '<Root>/NInverterState System' incorporates:
   *  Sum: '<Root>/Subtract'
   */
  localDW->sfEvent = NInvState_CALL_EVENT;
  if (localDW->temporalCounter_i1 < 8191) {
    localDW->temporalCounter_i1++;
  }

  if (localDW->is_active_c4_NInvState == 0) {
    localDW->is_active_c4_NInvState = 1U;
    localDW->temporalCounter_i1 = 0U;
    localDW->is_c4_NInvState = NInvState_IN_Inv_State_Idle;
    localB->NInvState_l = 0.0;
  } else {
    switch (localDW->is_c4_NInvState) {
     case NInvState_IN_Encoder_Reset_FL:
      NInvState_Encoder_Reset_FL(rtu_BInvErrorFL, rtu_BInvSysReadyFL,
        rtu_BInvQuitInvOnFL, rtu_BInvDCQuitInvOnFL, localB, localDW);
      break;

     case NInvState_IN_Encoder_Reset_FR:
      NInvState_Encoder_Reset_FR(rtu_BInvErrorFR, rtu_BInvSysReadyFR,
        rtu_BInvQuitInvOnFR, rtu_BInvDCQuitInvOnFR, localB, localDW);
      break;

     case NInvState_IN_Encoder_Reset_RL:
      NInvState_Encoder_Reset_RL(rtu_BInvErrorRL, rtu_BInvSysReadyRL,
        rtu_BInvQuitInvOnRL, rtu_BInvDCQuitInvOnRL, localB, localDW);
      break;

     case NInvState_IN_Encoder_Reset_RR:
      NInvState_Encoder_Reset_RR(rtu_BInvErrorRR, rtu_BInvSysReadyRR,
        rtu_BInvQuitInvOnRR, rtu_BInvDCQuitInvOnRR, localB, localDW);
      break;

     case NInvState_IN_Inv_Error_Checks:
      if ((*rtu_VDCInvRL > 60.0) && (fabs(*rtu_VDCInvRL - *rtu_VDCAccumulator) <
           10.0)) {
        localDW->is_Inv_Error_Checks = NInvState_IN_NO_ACTIVE_CHILD;
        localDW->is_c4_NInvState = NInvState_IN_Inverter_HV_Checks;
        localDW->is_Inverter_HV_Checks = NInvState_IN_Inv_HV_Check;
      } else {
        switch (localDW->is_Inv_Error_Checks) {
         case NInvState_IN_Inv_LV_Check:
          if (localDW->temporalCounter_i1 >= 100) {
            localDW->temporalCounter_i1 = 0U;
            localDW->is_Inv_Error_Checks = NInvState_IN_Inv_LV_Check1;
            localB->BInvErrorResetRR = 1.0;
            localB->BInvErrorResetRL = 1.0;
            localB->BInvErrorResetFR = 1.0;
            localB->BInvErrorResetFL = 1.0;
          }
          break;

         case NInvState_IN_Inv_LV_Check1:
          if ((localDW->temporalCounter_i1 >= 100) && (!*rtu_BInvErrorFL) &&
              (!*rtu_BInvErrorFR) && (!*rtu_BInvErrorRR) && (!*rtu_BInvErrorRL))
          {
            localDW->is_Inv_Error_Checks = NInvState_IN_Inv_LV_Check2;
            localB->NInvState_l = 2.0;
            localB->BInvErrorResetRR = 0.0;
            localB->BInvErrorResetRL = 0.0;
            localB->BInvErrorResetFR = 0.0;
            localB->BInvErrorResetFL = 0.0;
          }
          break;

         case NInvState_IN_Inv_LV_Check2:
          if ((*rtu_BInvErrorRR) && (*rtu_BInvErrorRL) && (*rtu_BInvErrorFR) &&
              (*rtu_BInvErrorFL)) {
            localDW->temporalCounter_i1 = 0U;
            localDW->is_Inv_Error_Checks = NInvState_IN_Inv_LV_Check;
            localB->NInvState_l = 1.0;
            localB->BInvErrorResetRR = 0.0;
            localB->BInvErrorResetRL = 0.0;
            localB->BInvErrorResetFR = 0.0;
            localB->BInvErrorResetFL = 0.0;
          } else if ((!*rtu_BInvErrorRR) && (!*rtu_BInvErrorRL) &&
                     (!*rtu_BInvErrorFR) && (!*rtu_BInvErrorFL) &&
                     (*rtu_BInvSysReadyRL) && (*rtu_BInvSysReadyRR) &&
                     (*rtu_BInvSysReadyFL) && (*rtu_BInvSysReadyFR)) {
            localDW->is_Inv_Error_Checks = NInvState_IN_Inv_LV_OK;
            localB->NInvState_l = 3.0;
          }
          break;

         default:
          /* case IN_Inv_LV_OK: */
          if ((*rtu_BErrorReset) && (*rtu_nMotorRL < 500.0)) {
            localDW->temporalCounter_i1 = 0U;
            localDW->is_Inv_Error_Checks = NInvState_IN_Inv_LV_Check;
            localB->NInvState_l = 1.0;
            localB->BInvErrorResetRR = 0.0;
            localB->BInvErrorResetRL = 0.0;
            localB->BInvErrorResetFR = 0.0;
            localB->BInvErrorResetFL = 0.0;
          }
          break;
        }
      }
      break;

     case NInvState_IN_Inv_OK:
      if (*rtu_BErrorReset) {
        localDW->is_c4_NInvState = NInvState_IN_Inv_Error_Checks;
        localDW->temporalCounter_i1 = 0U;
        localDW->is_Inv_Error_Checks = NInvState_IN_Inv_LV_Check;
        localB->NInvState_l = 1.0;
        localB->BInvErrorResetRR = 0.0;
        localB->BInvErrorResetRL = 0.0;
        localB->BInvErrorResetFR = 0.0;
        localB->BInvErrorResetFL = 0.0;
      } else if ((*rtu_NInvDTCFR != 0.0) && (*rtu_NInvDTCFR != 1049.0)) {
        localDW->is_c4_NInvState = NInvState_IN_Encoder_Reset_FR;
        localDW->is_Encoder_Reset_FR = NInvState_IN_Encoder_Error_FR;
        localB->NInvState_l = 404.0;
        localDW->temporalCounter_i1 = 0U;
        localDW->is_Encoder_Error_FR = NInvState_IN_PBX_SENSORS_ini;
        localB->BInvErrorResetFR = 0.0;
      } else if ((*rtu_NInvDTCRL != 0.0) && (*rtu_NInvDTCRL != 1049.0)) {
        localDW->is_c4_NInvState = NInvState_IN_Encoder_Reset_RL;
        localDW->is_Encoder_Reset_RL = NInvState_IN_Encoder_Error_RL;
        localB->NInvState_l = 404.0;
        localDW->temporalCounter_i1 = 0U;
        localDW->is_Encoder_Error_RL = NInvState_IN_PBX_SENSORS_ini;
        localB->BInvErrorResetRL = 0.0;
      } else if ((*rtu_NInvDTCFL != 0.0) && (*rtu_NInvDTCFL != 1049.0)) {
        localDW->is_c4_NInvState = NInvState_IN_Encoder_Reset_FL;
        localDW->is_Encoder_Reset_FL = NInvState_IN_Encoder_Error_FL;
        localB->NInvState_l = 404.0;
        localDW->temporalCounter_i1 = 0U;
        localDW->is_Encoder_Error_FL = NInvState_IN_PBX_SENSORS_ini;
        localB->BInvErrorResetFL = 0.0;
      } else if ((*rtu_NInvDTCRR != 0.0) && (*rtu_NInvDTCRR != 1049.0)) {
        localDW->is_c4_NInvState = NInvState_IN_Encoder_Reset_RR;
        localDW->is_Encoder_Reset_RR = NInvState_IN_Encoder_Error_RR;
        localB->NInvState_l = 404.0;
        localDW->temporalCounter_i1 = 0U;
        localDW->is_Encoder_Error_RR = NInvState_IN_PBX_SENSORS_ini;
        localB->BInvErrorResetRR = 0.0;
      } else if (*rtu_VDCInvRL < 60.0) {
        localDW->temporalCounter_i1 = 0U;
        localDW->is_c4_NInvState = NInvState_IN_Inv_State_Idle;
        localB->NInvState_l = 0.0;
      }
      break;

     case NInvState_IN_Inv_State_Idle:
      if (localDW->temporalCounter_i1 >= 7000) {
        localDW->is_c4_NInvState = NInvState_IN_Inv_Error_Checks;
        localDW->temporalCounter_i1 = 0U;
        localDW->is_Inv_Error_Checks = NInvState_IN_Inv_LV_Check;
        localB->NInvState_l = 1.0;
        localB->BInvErrorResetRR = 0.0;
        localB->BInvErrorResetRL = 0.0;
        localB->BInvErrorResetFR = 0.0;
        localB->BInvErrorResetFL = 0.0;
      }
      break;

     default:
      /* case IN_Inverter_HV_Checks: */
      NInvState_Inverter_HV_Checks(rtu_BErrorReset, rtu_BInvErrorRL,
        rtu_BInvErrorRR, rtu_BInvErrorFL, rtu_BInvErrorFR, rtu_BInvQuitInvOnRL,
        rtu_BInvQuitInvOnRR, rtu_BInvQuitInvOnFL, rtu_BInvQuitInvOnFR,
        rtu_BInvDCQuitInvOnRL, rtu_BInvDCQuitInvOnRR, rtu_BInvDCQuitInvOnFL,
        rtu_BInvDCQuitInvOnFR, localB, localDW);
      break;
    }
  }

  /* End of Chart: '<Root>/NInverterState System' */

  /* DataTypeConversion: '<Root>/Data Type Conversion' */
  *rty_NInvState = localB->NInvState_l;

  /* DataTypeConversion: '<Root>/Data Type Conversion1' */
  *rty_BHVOn = localB->BHVOn;

  /* DataTypeConversion: '<Root>/Data Type Conversion10' */
  *rty_BInvEnableRL = localB->BInvEnableRL;

  /* DataTypeConversion: '<Root>/Data Type Conversion11' */
  *rty_BInvEnableRR = localB->BInvEnableRR;

  /* DataTypeConversion: '<Root>/Data Type Conversion12' */
  *rty_BInvEnableFL = localB->BInvEnableFL;

  /* DataTypeConversion: '<Root>/Data Type Conversion13' */
  *rty_BInvEnableFR = localB->BInvEnableFR;

  /* DataTypeConversion: '<Root>/Data Type Conversion14' */
  *rty_BInvErrorResetRL = localB->BInvErrorResetRL;

  /* DataTypeConversion: '<Root>/Data Type Conversion15' */
  *rty_BInvErrorResetRR = localB->BInvErrorResetRR;

  /* DataTypeConversion: '<Root>/Data Type Conversion16' */
  *rty_BInvErrorResetFL = localB->BInvErrorResetFL;

  /* DataTypeConversion: '<Root>/Data Type Conversion17' */
  *rty_BInvErrorResetFR = localB->BInvErrorResetFR;

  /* DataTypeConversion: '<Root>/Data Type Conversion18' */
  *rty_MTargetTorqueRL = localB->MTargetTorqueRL;

  /* DataTypeConversion: '<Root>/Data Type Conversion19' */
  *rty_MTargetTorqueRR = localB->MTargetTorqueRR;

  /* DataTypeConversion: '<Root>/Data Type Conversion2' */
  *rty_BInvOnRL = localB->BInvOnRL;

  /* DataTypeConversion: '<Root>/Data Type Conversion20' */
  *rty_MTargetTorqueFL = localB->MTargetTorqueFL;

  /* DataTypeConversion: '<Root>/Data Type Conversion21' */
  *rty_MTargetTorqueFR = localB->MTargetTorqueFR;

  /* DataTypeConversion: '<Root>/Data Type Conversion22' */
  *rty_MTorqueLimitNegativeRL = localB->MTorqueLimitNegativeRL;

  /* DataTypeConversion: '<Root>/Data Type Conversion23' */
  *rty_MTorqueLimitNegativeRR = localB->MTorqueLimitNegativeRR;

  /* DataTypeConversion: '<Root>/Data Type Conversion24' */
  *rty_MTorqueLimitNegativeFL = localB->MTorqueLimitNegativeFL;

  /* DataTypeConversion: '<Root>/Data Type Conversion25' */
  *rty_MTorqueLimitNegativeFR = localB->MTorqueLimitNegativeFR;

  /* DataTypeConversion: '<Root>/Data Type Conversion26' */
  *rty_MTorqueLimitPositiveRL = localB->MTorqueLimitPositiveRL;

  /* DataTypeConversion: '<Root>/Data Type Conversion27' */
  *rty_MTorqueLimitPositiveRR = localB->MTorqueLimitPositiveRR;

  /* DataTypeConversion: '<Root>/Data Type Conversion28' */
  *rty_MTorqueLimitPositiveFL = localB->MTorqueLimitPositiveFL;

  /* DataTypeConversion: '<Root>/Data Type Conversion29' */
  *rty_MTorqueLimitPositiveFR = localB->MTorqueLimitPositiveFR;

  /* DataTypeConversion: '<Root>/Data Type Conversion3' */
  *rty_BInvOnRR = localB->BInvOnRR;

  /* DataTypeConversion: '<Root>/Data Type Conversion4' */
  *rty_BInvOnFL = localB->BInvOnFL;

  /* DataTypeConversion: '<Root>/Data Type Conversion5' */
  *rty_BInvOnFR = localB->BInvOnFR;

  /* DataTypeConversion: '<Root>/Data Type Conversion6' */
  *rty_BInvDCOnRL = localB->BInvDCOnRL;

  /* DataTypeConversion: '<Root>/Data Type Conversion7' */
  *rty_BInvDCOnRR = localB->BInvDCOnRR;

  /* DataTypeConversion: '<Root>/Data Type Conversion8' */
  *rty_BInvDCOnFL = localB->BInvDCOnFL;

  /* DataTypeConversion: '<Root>/Data Type Conversion9' */
  *rty_BInvDCOnFR = localB->BInvDCOnFR;
}

/* Model initialize function */
void NInvState_initialize(const char_T **rt_errorStatus, RT_MODEL_NInvState_T *
  const NInvState_M)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(NInvState_M, rt_errorStatus);

  /* user code (Initialize function Body) */
  LL_TIM_EnableCounter(TIM2);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
