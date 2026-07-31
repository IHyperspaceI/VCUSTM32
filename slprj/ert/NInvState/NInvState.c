/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: NInvState.c
 *
 * Code generated for Simulink model 'NInvState'.
 *
 * Model version                  : 13.2
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Fri Jul 31 17:30:09 2026
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

/* Named constants for Chart: '<Root>/NInvState System' */
#define NInvSt_IN_Inverter_HV_CheckRR_o ((uint8_T)4U)
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
#define NInvState_IN_Inv_OK_d          ((uint8_T)2U)
#define NInvState_IN_Inv_State_Idle    ((uint8_T)7U)
#define NInvState_IN_Inverter_DCOFF    ((uint8_T)8U)
#define NInvState_IN_Inverter_HV_Checks ((uint8_T)9U)
#define NInvState_IN_Inverter_IN       ((uint8_T)4U)
#define NInvState_IN_Inverter_ON       ((uint8_T)5U)
#define NInvState_IN_NO_ACTIVE_CHILD   ((uint8_T)0U)
#define NInvState_IN_PBX_SENSORS_ini   ((uint8_T)3U)
#define NInvState_IN_START_UP          ((uint8_T)6U)
#define NInvState_IN_TorqueReq_Ready   ((uint8_T)7U)

/* Forward declaration for local functions */
static void NInvState_Encoder_Reset_FL(const boolean_T *rtu_BInvErrorFL, const
  boolean_T *rtu_BInvSysReadyFL, const boolean_T *rtu_BQuitInvOnFL, const
  boolean_T *rtu_BInvQuitDcOnFL, real_T *rty_NInvState, real_T *rty_BHVOn,
  real_T *rty_BInvOnFLOut, real_T *rty_BInvDCOnFLOut, real_T *rty_BInvEnableFL,
  real_T *rty_BInvErrorResetFL, real_T *rty_MTargetTorqueFL, real_T
  *rty_MTorqueLimitNegativeFL, real_T *rty_MTorqueLimitPositiveFL,
  DW_NInvState_f_T *localDW);
static void NInvState_Encoder_Reset_FR(const boolean_T *rtu_BInvErrorFR, const
  boolean_T *rtu_BInvSysReadyFR, const boolean_T *rtu_BQuitInvOnFR, const
  boolean_T *rtu_BInvQuitDcOnFR, real_T *rty_NInvState, real_T *rty_BHVOn,
  real_T *rty_BInvOnFROut, real_T *rty_BInvDCOnFROut, real_T *rty_BInvEnableFR,
  real_T *rty_BInvErrorResetFR, real_T *rty_MTargetTorqueFR, real_T
  *rty_MTorqueLimitNegativeFR, real_T *rty_MTorqueLimitPositiveFR,
  DW_NInvState_f_T *localDW);
static void NInvState_Encoder_Reset_RL(const boolean_T *rtu_BInvErrorRL, const
  boolean_T *rtu_BInvSysReadyRL, const boolean_T *rtu_BQuitInvOnRL, const
  boolean_T *rtu_BInvQuitDcOnRL, real_T *rty_NInvState, real_T *rty_BHVOn,
  real_T *rty_BInvOnRLOut, real_T *rty_BInvDCOnRLOut, real_T *rty_BInvEnableRL,
  real_T *rty_BInvErrorResetRL, real_T *rty_MTargetTorqueRL, real_T
  *rty_MTorqueLimitNegativeRL, real_T *rty_MTorqueLimitPositiveRL,
  DW_NInvState_f_T *localDW);
static void NInvState_Encoder_Reset_RR(const boolean_T *rtu_BInvErrorRR, const
  boolean_T *rtu_BInvSysReadyRR, const boolean_T *rtu_BQuitInvOnRR, const
  boolean_T *rtu_BInvQuitDcOnRR, real_T *rty_NInvState, real_T *rty_BHVOn,
  real_T *rty_BInvOnRROut, real_T *rty_BInvDCOnRROut, real_T *rty_BInvEnableRR,
  real_T *rty_BInvErrorResetRR, real_T *rty_MTargetTorqueRR, real_T
  *rty_MTorqueLimitNegativeRR, real_T *rty_MTorqueLimitPositiveRR,
  DW_NInvState_f_T *localDW);
static void exit_internal_Inverter_HV_Check(real_T *rty_NInvState, real_T
  *rty_BHVOn, DW_NInvState_f_T *localDW);
static void NInvState_Inverter_HV_CheckFR(const boolean_T *rtu_BInvErrorFR,
  const boolean_T *rtu_BQuitInvOnFR, const boolean_T *rtu_BInvQuitDcOnFR, real_T
  *rty_NInvState, real_T *rty_BHVOn, real_T *rty_BInvOnFROut, real_T
  *rty_BInvDCOnRROut, real_T *rty_BInvDCOnFROut, real_T *rty_BInvEnableFR,
  real_T *rty_BInvErrorResetFR, real_T *rty_MTargetTorqueFR, real_T
  *rty_MTorqueLimitNegativeFR, real_T *rty_MTorqueLimitPositiveFR,
  DW_NInvState_f_T *localDW);
static void NInvState_Inverter_HV_CheckRR(const boolean_T *rtu_BInvErrorRR,
  const boolean_T *rtu_BQuitInvOnRR, const boolean_T *rtu_BInvQuitDcOnRR, real_T
  *rty_NInvState, real_T *rty_BHVOn, real_T *rty_BInvOnRROut, real_T
  *rty_BInvDCOnRROut, real_T *rty_BInvDCOnFLOut, real_T *rty_BInvEnableRR,
  real_T *rty_BInvErrorResetRR, real_T *rty_MTargetTorqueRR, real_T
  *rty_MTorqueLimitNegativeRR, real_T *rty_MTorqueLimitPositiveRR,
  DW_NInvState_f_T *localDW);
static void NInvState_Inverter_HV_ChecksFL(const boolean_T *rtu_BInvErrorFL,
  const boolean_T *rtu_BQuitInvOnFL, const boolean_T *rtu_BInvQuitDcOnFL, real_T
  *rty_NInvState, real_T *rty_BHVOn, real_T *rty_BInvOnFLOut, real_T
  *rty_BInvDCOnRLOut, real_T *rty_BInvDCOnFLOut, real_T *rty_BInvEnableFL,
  real_T *rty_BInvErrorResetFL, real_T *rty_MTargetTorqueFL, real_T
  *rty_MTorqueLimitNegativeFL, real_T *rty_MTorqueLimitPositiveFL,
  DW_NInvState_f_T *localDW);
static void NInvState_Inverter_HV_Checks(const boolean_T *rtu_BErrorReset, const
  boolean_T *rtu_BInvErrorRL, const boolean_T *rtu_BInvErrorRR, const boolean_T *
  rtu_BInvErrorFL, const boolean_T *rtu_BInvErrorFR, const boolean_T
  *rtu_BQuitInvOnRL, const boolean_T *rtu_BQuitInvOnRR, const boolean_T
  *rtu_BQuitInvOnFL, const boolean_T *rtu_BQuitInvOnFR, const boolean_T
  *rtu_BInvQuitDcOnRL, const boolean_T *rtu_BInvQuitDcOnRR, const boolean_T
  *rtu_BInvQuitDcOnFL, const boolean_T *rtu_BInvQuitDcOnFR, real_T
  *rty_NInvState, real_T *rty_BHVOn, real_T *rty_BInvOnRLOut, real_T
  *rty_BInvOnRROut, real_T *rty_BInvOnFLOut, real_T *rty_BInvOnFROut, real_T
  *rty_BInvDCOnRLOut, real_T *rty_BInvDCOnRROut, real_T *rty_BInvDCOnFLOut,
  real_T *rty_BInvDCOnFROut, real_T *rty_BInvEnableRL, real_T *rty_BInvEnableRR,
  real_T *rty_BInvEnableFL, real_T *rty_BInvEnableFR, real_T
  *rty_BInvErrorResetRL, real_T *rty_BInvErrorResetRR, real_T
  *rty_BInvErrorResetFL, real_T *rty_BInvErrorResetFR, real_T
  *rty_MTargetTorqueRL, real_T *rty_MTargetTorqueRR, real_T *rty_MTargetTorqueFL,
  real_T *rty_MTargetTorqueFR, real_T *rty_MTorqueLimitNegativeRL, real_T
  *rty_MTorqueLimitNegativeRR, real_T *rty_MTorqueLimitNegativeFL, real_T
  *rty_MTorqueLimitNegativeFR, real_T *rty_MTorqueLimitPositiveRL, real_T
  *rty_MTorqueLimitPositiveRR, real_T *rty_MTorqueLimitPositiveFL, real_T
  *rty_MTorqueLimitPositiveFR, DW_NInvState_f_T *localDW);

/* Function for Chart: '<Root>/NInvState System' */
static void NInvState_Encoder_Reset_FL(const boolean_T *rtu_BInvErrorFL, const
  boolean_T *rtu_BInvSysReadyFL, const boolean_T *rtu_BQuitInvOnFL, const
  boolean_T *rtu_BInvQuitDcOnFL, real_T *rty_NInvState, real_T *rty_BHVOn,
  real_T *rty_BInvOnFLOut, real_T *rty_BInvDCOnFLOut, real_T *rty_BInvEnableFL,
  real_T *rty_BInvErrorResetFL, real_T *rty_MTargetTorqueFL, real_T
  *rty_MTorqueLimitNegativeFL, real_T *rty_MTorqueLimitPositiveFL,
  DW_NInvState_f_T *localDW)
{
  /* Chart: '<Root>/NInvState System' */
  if (*rty_NInvState == 36.0) {
    if (localDW->is_Encoder_Reset_FL == NInvStat_IN_Inverter_HV_Checks2) {
      localDW->is_Inverter_HV_Checks2 = NInvState_IN_NO_ACTIVE_CHILD;
      *rty_BHVOn = 1.0;
      localDW->is_Encoder_Reset_FL = NInvState_IN_NO_ACTIVE_CHILD;
    } else {
      localDW->is_Encoder_Error_FL = NInvState_IN_NO_ACTIVE_CHILD;
      localDW->is_Encoder_Reset_FL = NInvState_IN_NO_ACTIVE_CHILD;
    }

    localDW->is_c4_NInvState = NInvState_IN_Inv_OK;
    *rty_NInvState = 92.0;
  } else {
    switch (localDW->is_Encoder_Reset_FL) {
     case NInvState_IN_Encoder_Error_FL:
      switch (localDW->is_Encoder_Error_FL) {
       case NInvState_IN_Error_On:
        if ((localDW->sfEvent == NInvState_CALL_EVENT) &&
            (localDW->temporalCounter_i1 >= 100) && (!*rtu_BInvErrorFL)) {
          localDW->is_Encoder_Error_FL = NInvState_IN_Error_off;
          *rty_BInvErrorResetFL = 0.0;
        }
        break;

       case NInvState_IN_Error_off:
        if (*rtu_BInvSysReadyFL) {
          localDW->is_Encoder_Error_FL = NInvState_IN_NO_ACTIVE_CHILD;
          localDW->is_Encoder_Reset_FL = NInvStat_IN_Inverter_HV_Checks2;
          localDW->is_Inverter_HV_Checks2 = NInvState_IN_Inverter_IN;
          *rty_NInvState = 32.0;
          *rty_BInvDCOnFLOut = 1.0;
        } else if (*rtu_BInvErrorFL) {
          localDW->temporalCounter_i1 = 0U;
          localDW->is_Encoder_Error_FL = NInvState_IN_PBX_SENSORS_ini;
          *rty_BInvErrorResetFL = 0.0;
        }
        break;

       default:
        /* case IN_PBX_SENSORS_ini: */
        if ((localDW->sfEvent == NInvState_CALL_EVENT) &&
            (localDW->temporalCounter_i1 >= 50)) {
          localDW->temporalCounter_i1 = 0U;
          localDW->is_Encoder_Error_FL = NInvState_IN_Error_On;
          *rty_BInvErrorResetFL = 1.0;
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
        *rty_MTorqueLimitNegativeFL = 0.0;
        *rty_MTorqueLimitPositiveFL = 0.0;
        if ((localDW->sfEvent == NInvState_CALL_EVENT) &&
            (localDW->temporalCounter_i1 >= 500)) {
          localDW->temporalCounter_i1 = 0U;
          localDW->is_Inverter_HV_Checks2 = NInvState_IN_Inv_Error_Reset;
          *rty_BInvErrorResetFL = 1.0;
          *rty_BInvDCOnFLOut = 0.0;
          *rty_BInvEnableFL = 0.0;
          *rty_BInvOnFLOut = 0.0;
        }
        break;

       case NInvState_IN_Inv_Error_Check_2:
        if ((localDW->sfEvent == NInvState_CALL_EVENT) &&
            (localDW->temporalCounter_i1 >= 500)) {
          if (!*rtu_BInvErrorFL) {
            localDW->is_Inverter_HV_Checks2 = NInvState_IN_Inverter_IN;
            *rty_NInvState = 32.0;
            *rty_BInvDCOnFLOut = 1.0;
          } else {
            localDW->temporalCounter_i1 = 0U;
            localDW->is_Inverter_HV_Checks2 = NInvState_IN_Inv_Error_Check_1;
            *rty_MTorqueLimitNegativeFL = 0.0;
            *rty_MTorqueLimitPositiveFL = 0.0;
          }
        } else {
          *rty_BInvErrorResetFL = 0.0;
        }
        break;

       case NInvState_IN_Inv_Error_Reset:
        *rty_BInvDCOnFLOut = 0.0;
        *rty_BInvEnableFL = 0.0;
        *rty_BInvOnFLOut = 0.0;
        if ((localDW->sfEvent == NInvState_CALL_EVENT) &&
            (localDW->temporalCounter_i1 >= 500)) {
          localDW->temporalCounter_i1 = 0U;
          localDW->is_Inverter_HV_Checks2 = NInvState_IN_Inv_Error_Check_2;
          *rty_BInvErrorResetFL = 0.0;
        }
        break;

       case NInvState_IN_Inverter_IN:
        *rty_BInvDCOnFLOut = 1.0;
        if (*rtu_BInvQuitDcOnFL) {
          localDW->temporalCounter_i1 = 0U;
          localDW->is_Inverter_HV_Checks2 = NInvState_IN_START_UP;
          *rty_NInvState = 33.0;
          *rty_MTargetTorqueFL = 0.0;
          *rty_MTorqueLimitNegativeFL = 0.0;
          *rty_MTorqueLimitPositiveFL = 0.0;
          *rty_BInvEnableFL = 1.0;
        }
        break;

       case NInvState_IN_Inverter_ON:
        *rty_BInvOnFLOut = 1.0;
        if (*rtu_BQuitInvOnFL) {
          localDW->is_Inverter_HV_Checks2 = NInvState_IN_TorqueReq_Ready;
          *rty_NInvState = 35.0;
          *rty_MTorqueLimitNegativeFL = -204.1;
          *rty_MTorqueLimitPositiveFL = 214.2;
        } else if (*rtu_BInvErrorFL) {
          localDW->temporalCounter_i1 = 0U;
          localDW->is_Inverter_HV_Checks2 = NInvState_IN_Inv_Error_Check_1;
          *rty_MTorqueLimitNegativeFL = 0.0;
          *rty_MTorqueLimitPositiveFL = 0.0;
        }
        break;

       case NInvState_IN_START_UP:
        *rty_MTargetTorqueFL = 0.0;
        *rty_MTorqueLimitNegativeFL = 0.0;
        *rty_MTorqueLimitPositiveFL = 0.0;
        *rty_BInvEnableFL = 1.0;
        if ((localDW->sfEvent == NInvState_CALL_EVENT) &&
            (localDW->temporalCounter_i1 >= 100)) {
          localDW->is_Inverter_HV_Checks2 = NInvState_IN_Inverter_ON;
          *rty_NInvState = 34.0;
          *rty_BInvOnFLOut = 1.0;
        }
        break;

       default:
        /* case IN_TorqueReq_Ready: */
        *rty_MTorqueLimitNegativeFL = -204.1;
        *rty_MTorqueLimitPositiveFL = 214.2;
        if (*rtu_BInvErrorFL) {
          localDW->temporalCounter_i1 = 0U;
          localDW->is_Inverter_HV_Checks2 = NInvState_IN_Inv_Error_Check_1;
          *rty_MTorqueLimitNegativeFL = 0.0;
          *rty_MTorqueLimitPositiveFL = 0.0;
        } else {
          localDW->is_Inverter_HV_Checks2 = NInvState_IN_NO_ACTIVE_CHILD;
          *rty_BHVOn = 1.0;
          localDW->is_Encoder_Reset_FL = NInvState_IN_Encoder_OK;
          *rty_NInvState = 36.0;
        }
        break;
      }
      break;
    }
  }

  /* End of Chart: '<Root>/NInvState System' */
}

/* Function for Chart: '<Root>/NInvState System' */
static void NInvState_Encoder_Reset_FR(const boolean_T *rtu_BInvErrorFR, const
  boolean_T *rtu_BInvSysReadyFR, const boolean_T *rtu_BQuitInvOnFR, const
  boolean_T *rtu_BInvQuitDcOnFR, real_T *rty_NInvState, real_T *rty_BHVOn,
  real_T *rty_BInvOnFROut, real_T *rty_BInvDCOnFROut, real_T *rty_BInvEnableFR,
  real_T *rty_BInvErrorResetFR, real_T *rty_MTargetTorqueFR, real_T
  *rty_MTorqueLimitNegativeFR, real_T *rty_MTorqueLimitPositiveFR,
  DW_NInvState_f_T *localDW)
{
  /* Chart: '<Root>/NInvState System' */
  if (*rty_NInvState == 41.0) {
    if (localDW->is_Encoder_Reset_FR == NInvStat_IN_Inverter_HV_Checks3) {
      localDW->is_Inverter_HV_Checks3 = NInvState_IN_NO_ACTIVE_CHILD;
      *rty_BHVOn = 1.0;
      localDW->is_Encoder_Reset_FR = NInvState_IN_NO_ACTIVE_CHILD;
    } else {
      localDW->is_Encoder_Error_FR = NInvState_IN_NO_ACTIVE_CHILD;
      localDW->is_Encoder_Reset_FR = NInvState_IN_NO_ACTIVE_CHILD;
    }

    localDW->is_c4_NInvState = NInvState_IN_Inv_OK;
    *rty_NInvState = 92.0;
  } else {
    switch (localDW->is_Encoder_Reset_FR) {
     case NInvState_IN_Encoder_Error_FR:
      switch (localDW->is_Encoder_Error_FR) {
       case NInvState_IN_Error_On:
        if ((localDW->sfEvent == NInvState_CALL_EVENT) &&
            (localDW->temporalCounter_i1 >= 100) && (!*rtu_BInvErrorFR)) {
          localDW->is_Encoder_Error_FR = NInvState_IN_Error_off;
          *rty_BInvErrorResetFR = 0.0;
        }
        break;

       case NInvState_IN_Error_off:
        if (*rtu_BInvSysReadyFR) {
          localDW->is_Encoder_Error_FR = NInvState_IN_NO_ACTIVE_CHILD;
          localDW->is_Encoder_Reset_FR = NInvStat_IN_Inverter_HV_Checks3;
          localDW->is_Inverter_HV_Checks3 = NInvState_IN_Inverter_IN;
          *rty_NInvState = 37.0;
          *rty_BInvDCOnFROut = 1.0;
        } else if (*rtu_BInvErrorFR) {
          localDW->temporalCounter_i1 = 0U;
          localDW->is_Encoder_Error_FR = NInvState_IN_PBX_SENSORS_ini;
          *rty_BInvErrorResetFR = 0.0;
        }
        break;

       default:
        /* case IN_PBX_SENSORS_ini: */
        if ((localDW->sfEvent == NInvState_CALL_EVENT) &&
            (localDW->temporalCounter_i1 >= 50)) {
          localDW->temporalCounter_i1 = 0U;
          localDW->is_Encoder_Error_FR = NInvState_IN_Error_On;
          *rty_BInvErrorResetFR = 1.0;
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
        *rty_MTorqueLimitNegativeFR = 0.0;
        *rty_MTorqueLimitPositiveFR = 0.0;
        if ((localDW->sfEvent == NInvState_CALL_EVENT) &&
            (localDW->temporalCounter_i1 >= 500)) {
          localDW->temporalCounter_i1 = 0U;
          localDW->is_Inverter_HV_Checks3 = NInvState_IN_Inv_Error_Reset;
          *rty_BInvErrorResetFR = 1.0;
          *rty_BInvDCOnFROut = 0.0;
          *rty_BInvEnableFR = 0.0;
          *rty_BInvOnFROut = 0.0;
        }
        break;

       case NInvState_IN_Inv_Error_Check_2:
        if ((localDW->sfEvent == NInvState_CALL_EVENT) &&
            (localDW->temporalCounter_i1 >= 500)) {
          if (!*rtu_BInvErrorFR) {
            localDW->is_Inverter_HV_Checks3 = NInvState_IN_Inverter_IN;
            *rty_NInvState = 37.0;
            *rty_BInvDCOnFROut = 1.0;
          } else {
            localDW->temporalCounter_i1 = 0U;
            localDW->is_Inverter_HV_Checks3 = NInvState_IN_Inv_Error_Check_1;
            *rty_MTorqueLimitNegativeFR = 0.0;
            *rty_MTorqueLimitPositiveFR = 0.0;
          }
        } else {
          *rty_BInvErrorResetFR = 0.0;
        }
        break;

       case NInvState_IN_Inv_Error_Reset:
        *rty_BInvDCOnFROut = 0.0;
        *rty_BInvEnableFR = 0.0;
        *rty_BInvOnFROut = 0.0;
        if ((localDW->sfEvent == NInvState_CALL_EVENT) &&
            (localDW->temporalCounter_i1 >= 500)) {
          localDW->temporalCounter_i1 = 0U;
          localDW->is_Inverter_HV_Checks3 = NInvState_IN_Inv_Error_Check_2;
          *rty_BInvErrorResetFR = 0.0;
        }
        break;

       case NInvState_IN_Inverter_IN:
        *rty_BInvDCOnFROut = 1.0;
        if (*rtu_BInvQuitDcOnFR) {
          localDW->temporalCounter_i1 = 0U;
          localDW->is_Inverter_HV_Checks3 = NInvState_IN_START_UP;
          *rty_NInvState = 38.0;
          *rty_MTargetTorqueFR = 0.0;
          *rty_MTorqueLimitNegativeFR = 0.0;
          *rty_MTorqueLimitPositiveFR = 0.0;
          *rty_BInvEnableFR = 1.0;
        }
        break;

       case NInvState_IN_Inverter_ON:
        *rty_BInvOnFROut = 1.0;
        if (*rtu_BQuitInvOnFR) {
          localDW->is_Inverter_HV_Checks3 = NInvState_IN_TorqueReq_Ready;
          *rty_NInvState = 40.0;
          *rty_MTorqueLimitNegativeFR = -204.1;
          *rty_MTorqueLimitPositiveFR = 214.2;
        } else if (*rtu_BInvErrorFR) {
          localDW->temporalCounter_i1 = 0U;
          localDW->is_Inverter_HV_Checks3 = NInvState_IN_Inv_Error_Check_1;
          *rty_MTorqueLimitNegativeFR = 0.0;
          *rty_MTorqueLimitPositiveFR = 0.0;
        }
        break;

       case NInvState_IN_START_UP:
        *rty_MTargetTorqueFR = 0.0;
        *rty_MTorqueLimitNegativeFR = 0.0;
        *rty_MTorqueLimitPositiveFR = 0.0;
        *rty_BInvEnableFR = 1.0;
        if ((localDW->sfEvent == NInvState_CALL_EVENT) &&
            (localDW->temporalCounter_i1 >= 100)) {
          localDW->is_Inverter_HV_Checks3 = NInvState_IN_Inverter_ON;
          *rty_NInvState = 39.0;
          *rty_BInvOnFROut = 1.0;
        }
        break;

       default:
        /* case IN_TorqueReq_Ready: */
        *rty_MTorqueLimitNegativeFR = -204.1;
        *rty_MTorqueLimitPositiveFR = 214.2;
        if (*rtu_BInvErrorFR) {
          localDW->temporalCounter_i1 = 0U;
          localDW->is_Inverter_HV_Checks3 = NInvState_IN_Inv_Error_Check_1;
          *rty_MTorqueLimitNegativeFR = 0.0;
          *rty_MTorqueLimitPositiveFR = 0.0;
        } else {
          localDW->is_Inverter_HV_Checks3 = NInvState_IN_NO_ACTIVE_CHILD;
          *rty_BHVOn = 1.0;
          localDW->is_Encoder_Reset_FR = NInvState_IN_Encoder_OK;
          *rty_NInvState = 41.0;
        }
        break;
      }
      break;
    }
  }

  /* End of Chart: '<Root>/NInvState System' */
}

/* Function for Chart: '<Root>/NInvState System' */
static void NInvState_Encoder_Reset_RL(const boolean_T *rtu_BInvErrorRL, const
  boolean_T *rtu_BInvSysReadyRL, const boolean_T *rtu_BQuitInvOnRL, const
  boolean_T *rtu_BInvQuitDcOnRL, real_T *rty_NInvState, real_T *rty_BHVOn,
  real_T *rty_BInvOnRLOut, real_T *rty_BInvDCOnRLOut, real_T *rty_BInvEnableRL,
  real_T *rty_BInvErrorResetRL, real_T *rty_MTargetTorqueRL, real_T
  *rty_MTorqueLimitNegativeRL, real_T *rty_MTorqueLimitPositiveRL,
  DW_NInvState_f_T *localDW)
{
  /* Chart: '<Root>/NInvState System' */
  if (*rty_NInvState == 26.0) {
    if (localDW->is_Encoder_Reset_RL == NInvStat_IN_Inverter_HV_Checks3) {
      localDW->is_Inverter_HV_Checks3_j = NInvState_IN_NO_ACTIVE_CHILD;
      *rty_BHVOn = 1.0;
      localDW->is_Encoder_Reset_RL = NInvState_IN_NO_ACTIVE_CHILD;
    } else {
      localDW->is_Encoder_Error_RL = NInvState_IN_NO_ACTIVE_CHILD;
      localDW->is_Encoder_Reset_RL = NInvState_IN_NO_ACTIVE_CHILD;
    }

    localDW->is_c4_NInvState = NInvState_IN_Inv_OK;
    *rty_NInvState = 92.0;
  } else {
    switch (localDW->is_Encoder_Reset_RL) {
     case NInvState_IN_Encoder_Error_RL:
      switch (localDW->is_Encoder_Error_RL) {
       case NInvState_IN_Error_On:
        if ((localDW->sfEvent == NInvState_CALL_EVENT) &&
            (localDW->temporalCounter_i1 >= 100) && (!*rtu_BInvErrorRL)) {
          localDW->is_Encoder_Error_RL = NInvState_IN_Error_off;
          *rty_BInvErrorResetRL = 0.0;
        }
        break;

       case NInvState_IN_Error_off:
        if (*rtu_BInvSysReadyRL) {
          localDW->is_Encoder_Error_RL = NInvState_IN_NO_ACTIVE_CHILD;
          localDW->is_Encoder_Reset_RL = NInvStat_IN_Inverter_HV_Checks3;
          localDW->is_Inverter_HV_Checks3_j = NInvState_IN_Inverter_IN;
          *rty_NInvState = 22.0;
          *rty_BInvDCOnRLOut = 1.0;
        } else if (*rtu_BInvErrorRL) {
          localDW->temporalCounter_i1 = 0U;
          localDW->is_Encoder_Error_RL = NInvState_IN_PBX_SENSORS_ini;
          *rty_BInvErrorResetRL = 0.0;
        }
        break;

       default:
        /* case IN_PBX_SENSORS_ini: */
        if ((localDW->sfEvent == NInvState_CALL_EVENT) &&
            (localDW->temporalCounter_i1 >= 50)) {
          localDW->temporalCounter_i1 = 0U;
          localDW->is_Encoder_Error_RL = NInvState_IN_Error_On;
          *rty_BInvErrorResetRL = 1.0;
        }
        break;
      }
      break;

     case NInvState_IN_Encoder_OK:
      break;

     default:
      /* case IN_Inverter_HV_Checks3: */
      switch (localDW->is_Inverter_HV_Checks3_j) {
       case NInvState_IN_Inv_Error_Check_1:
        *rty_MTorqueLimitNegativeRL = 0.0;
        *rty_MTorqueLimitPositiveRL = 0.0;
        if ((localDW->sfEvent == NInvState_CALL_EVENT) &&
            (localDW->temporalCounter_i1 >= 500)) {
          localDW->temporalCounter_i1 = 0U;
          localDW->is_Inverter_HV_Checks3_j = NInvState_IN_Inv_Error_Reset;
          *rty_BInvErrorResetRL = 1.0;
          *rty_BInvDCOnRLOut = 0.0;
          *rty_BInvEnableRL = 0.0;
          *rty_BInvOnRLOut = 0.0;
        }
        break;

       case NInvState_IN_Inv_Error_Check_2:
        if ((localDW->sfEvent == NInvState_CALL_EVENT) &&
            (localDW->temporalCounter_i1 >= 500)) {
          if (!*rtu_BInvErrorRL) {
            localDW->is_Inverter_HV_Checks3_j = NInvState_IN_Inverter_IN;
            *rty_NInvState = 22.0;
            *rty_BInvDCOnRLOut = 1.0;
          } else {
            localDW->temporalCounter_i1 = 0U;
            localDW->is_Inverter_HV_Checks3_j = NInvState_IN_Inv_Error_Check_1;
            *rty_NInvState = 0.0;
            *rty_MTorqueLimitNegativeRL = 0.0;
            *rty_MTorqueLimitPositiveRL = 0.0;
          }
        } else {
          *rty_BInvErrorResetRL = 0.0;
        }
        break;

       case NInvState_IN_Inv_Error_Reset:
        *rty_BInvDCOnRLOut = 0.0;
        *rty_BInvEnableRL = 0.0;
        *rty_BInvOnRLOut = 0.0;
        if ((localDW->sfEvent == NInvState_CALL_EVENT) &&
            (localDW->temporalCounter_i1 >= 500)) {
          localDW->temporalCounter_i1 = 0U;
          localDW->is_Inverter_HV_Checks3_j = NInvState_IN_Inv_Error_Check_2;
          *rty_BInvErrorResetRL = 0.0;
        }
        break;

       case NInvState_IN_Inverter_IN:
        *rty_BInvDCOnRLOut = 1.0;
        if (*rtu_BInvQuitDcOnRL) {
          localDW->temporalCounter_i1 = 0U;
          localDW->is_Inverter_HV_Checks3_j = NInvState_IN_START_UP;
          *rty_NInvState = 23.0;
          *rty_MTargetTorqueRL = 0.0;
          *rty_MTorqueLimitNegativeRL = 0.0;
          *rty_MTorqueLimitPositiveRL = 0.0;
          *rty_BInvEnableRL = 1.0;
        }
        break;

       case NInvState_IN_Inverter_ON:
        *rty_BInvOnRLOut = 1.0;
        if (*rtu_BQuitInvOnRL) {
          localDW->is_Inverter_HV_Checks3_j = NInvState_IN_TorqueReq_Ready;
          *rty_NInvState = 25.0;
          *rty_MTorqueLimitNegativeRL = -204.1;
          *rty_MTorqueLimitPositiveRL = 214.2;
        } else if (*rtu_BInvErrorRL) {
          localDW->temporalCounter_i1 = 0U;
          localDW->is_Inverter_HV_Checks3_j = NInvState_IN_Inv_Error_Check_1;
          *rty_NInvState = 0.0;
          *rty_MTorqueLimitNegativeRL = 0.0;
          *rty_MTorqueLimitPositiveRL = 0.0;
        }
        break;

       case NInvState_IN_START_UP:
        *rty_MTargetTorqueRL = 0.0;
        *rty_MTorqueLimitNegativeRL = 0.0;
        *rty_MTorqueLimitPositiveRL = 0.0;
        *rty_BInvEnableRL = 1.0;
        if ((localDW->sfEvent == NInvState_CALL_EVENT) &&
            (localDW->temporalCounter_i1 >= 100)) {
          localDW->is_Inverter_HV_Checks3_j = NInvState_IN_Inverter_ON;
          *rty_NInvState = 24.0;
          *rty_BInvOnRLOut = 1.0;
        }
        break;

       default:
        /* case IN_TorqueReq_Ready: */
        *rty_MTorqueLimitNegativeRL = -204.1;
        *rty_MTorqueLimitPositiveRL = 214.2;
        if (*rtu_BInvErrorRL) {
          localDW->temporalCounter_i1 = 0U;
          localDW->is_Inverter_HV_Checks3_j = NInvState_IN_Inv_Error_Check_1;
          *rty_NInvState = 0.0;
          *rty_MTorqueLimitNegativeRL = 0.0;
          *rty_MTorqueLimitPositiveRL = 0.0;
        } else {
          localDW->is_Inverter_HV_Checks3_j = NInvState_IN_NO_ACTIVE_CHILD;
          *rty_BHVOn = 1.0;
          localDW->is_Encoder_Reset_RL = NInvState_IN_Encoder_OK;
          *rty_NInvState = 26.0;
        }
        break;
      }
      break;
    }
  }

  /* End of Chart: '<Root>/NInvState System' */
}

/* Function for Chart: '<Root>/NInvState System' */
static void NInvState_Encoder_Reset_RR(const boolean_T *rtu_BInvErrorRR, const
  boolean_T *rtu_BInvSysReadyRR, const boolean_T *rtu_BQuitInvOnRR, const
  boolean_T *rtu_BInvQuitDcOnRR, real_T *rty_NInvState, real_T *rty_BHVOn,
  real_T *rty_BInvOnRROut, real_T *rty_BInvDCOnRROut, real_T *rty_BInvEnableRR,
  real_T *rty_BInvErrorResetRR, real_T *rty_MTargetTorqueRR, real_T
  *rty_MTorqueLimitNegativeRR, real_T *rty_MTorqueLimitPositiveRR,
  DW_NInvState_f_T *localDW)
{
  /* Chart: '<Root>/NInvState System' */
  if (*rty_NInvState == 31.0) {
    if (localDW->is_Encoder_Reset_RR == NInvStat_IN_Inverter_HV_CheckRR) {
      localDW->is_Inverter_HV_CheckRR = NInvState_IN_NO_ACTIVE_CHILD;
      *rty_BHVOn = 1.0;
      localDW->is_Encoder_Reset_RR = NInvState_IN_NO_ACTIVE_CHILD;
    } else {
      localDW->is_Encoder_Error_RR = NInvState_IN_NO_ACTIVE_CHILD;
      localDW->is_Encoder_Reset_RR = NInvState_IN_NO_ACTIVE_CHILD;
    }

    localDW->is_c4_NInvState = NInvState_IN_Inv_OK;
    *rty_NInvState = 92.0;
  } else {
    switch (localDW->is_Encoder_Reset_RR) {
     case NInvState_IN_Encoder_Error_RR:
      switch (localDW->is_Encoder_Error_RR) {
       case NInvState_IN_Error_On:
        if ((localDW->sfEvent == NInvState_CALL_EVENT) &&
            (localDW->temporalCounter_i1 >= 100) && (!*rtu_BInvErrorRR)) {
          localDW->is_Encoder_Error_RR = NInvState_IN_Error_off;
          *rty_BInvErrorResetRR = 0.0;
        }
        break;

       case NInvState_IN_Error_off:
        if (*rtu_BInvSysReadyRR) {
          localDW->is_Encoder_Error_RR = NInvState_IN_NO_ACTIVE_CHILD;
          localDW->is_Encoder_Reset_RR = NInvStat_IN_Inverter_HV_CheckRR;
          localDW->is_Inverter_HV_CheckRR = NInvState_IN_Inverter_IN;
          *rty_NInvState = 27.0;
          *rty_BInvDCOnRROut = 1.0;
        } else if (*rtu_BInvErrorRR) {
          localDW->temporalCounter_i1 = 0U;
          localDW->is_Encoder_Error_RR = NInvState_IN_PBX_SENSORS_ini;
          *rty_BInvErrorResetRR = 0.0;
        }
        break;

       default:
        /* case IN_PBX_SENSORS_ini: */
        if ((localDW->sfEvent == NInvState_CALL_EVENT) &&
            (localDW->temporalCounter_i1 >= 50)) {
          localDW->temporalCounter_i1 = 0U;
          localDW->is_Encoder_Error_RR = NInvState_IN_Error_On;
          *rty_BInvErrorResetRR = 1.0;
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
        *rty_MTorqueLimitNegativeRR = 0.0;
        *rty_MTorqueLimitPositiveRR = 0.0;
        if ((localDW->sfEvent == NInvState_CALL_EVENT) &&
            (localDW->temporalCounter_i1 >= 500)) {
          localDW->temporalCounter_i1 = 0U;
          localDW->is_Inverter_HV_CheckRR = NInvState_IN_Inv_Error_Reset;
          *rty_BInvErrorResetRR = 1.0;
          *rty_BInvDCOnRROut = 0.0;
          *rty_BInvEnableRR = 0.0;
          *rty_BInvOnRROut = 0.0;
        }
        break;

       case NInvState_IN_Inv_Error_Check_2:
        if ((localDW->sfEvent == NInvState_CALL_EVENT) &&
            (localDW->temporalCounter_i1 >= 500)) {
          if (!*rtu_BInvErrorRR) {
            localDW->is_Inverter_HV_CheckRR = NInvState_IN_Inverter_IN;
            *rty_NInvState = 27.0;
            *rty_BInvDCOnRROut = 1.0;
          } else {
            localDW->temporalCounter_i1 = 0U;
            localDW->is_Inverter_HV_CheckRR = NInvState_IN_Inv_Error_Check_1;
            *rty_MTorqueLimitNegativeRR = 0.0;
            *rty_MTorqueLimitPositiveRR = 0.0;
          }
        } else {
          *rty_BInvErrorResetRR = 0.0;
        }
        break;

       case NInvState_IN_Inv_Error_Reset:
        *rty_BInvDCOnRROut = 0.0;
        *rty_BInvEnableRR = 0.0;
        *rty_BInvOnRROut = 0.0;
        if ((localDW->sfEvent == NInvState_CALL_EVENT) &&
            (localDW->temporalCounter_i1 >= 500)) {
          localDW->temporalCounter_i1 = 0U;
          localDW->is_Inverter_HV_CheckRR = NInvState_IN_Inv_Error_Check_2;
          *rty_BInvErrorResetRR = 0.0;
        }
        break;

       case NInvState_IN_Inverter_IN:
        *rty_BInvDCOnRROut = 1.0;
        if (*rtu_BInvQuitDcOnRR) {
          localDW->temporalCounter_i1 = 0U;
          localDW->is_Inverter_HV_CheckRR = NInvState_IN_START_UP;
          *rty_NInvState = 28.0;
          *rty_MTargetTorqueRR = 0.0;
          *rty_MTorqueLimitNegativeRR = 0.0;
          *rty_MTorqueLimitPositiveRR = 0.0;
          *rty_BInvEnableRR = 1.0;
        }
        break;

       case NInvState_IN_Inverter_ON:
        *rty_BInvOnRROut = 1.0;
        if (*rtu_BQuitInvOnRR) {
          localDW->is_Inverter_HV_CheckRR = NInvState_IN_TorqueReq_Ready;
          *rty_NInvState = 30.0;
          *rty_MTorqueLimitNegativeRR = -204.1;
          *rty_MTorqueLimitPositiveRR = 214.2;
        } else if (*rtu_BInvErrorRR) {
          localDW->temporalCounter_i1 = 0U;
          localDW->is_Inverter_HV_CheckRR = NInvState_IN_Inv_Error_Check_1;
          *rty_MTorqueLimitNegativeRR = 0.0;
          *rty_MTorqueLimitPositiveRR = 0.0;
        }
        break;

       case NInvState_IN_START_UP:
        *rty_MTargetTorqueRR = 0.0;
        *rty_MTorqueLimitNegativeRR = 0.0;
        *rty_MTorqueLimitPositiveRR = 0.0;
        *rty_BInvEnableRR = 1.0;
        if ((localDW->sfEvent == NInvState_CALL_EVENT) &&
            (localDW->temporalCounter_i1 >= 100)) {
          localDW->is_Inverter_HV_CheckRR = NInvState_IN_Inverter_ON;
          *rty_NInvState = 29.0;
          *rty_BInvOnRROut = 1.0;
        }
        break;

       default:
        /* case IN_TorqueReq_Ready: */
        *rty_MTorqueLimitNegativeRR = -204.1;
        *rty_MTorqueLimitPositiveRR = 214.2;
        if (*rtu_BInvErrorRR) {
          localDW->temporalCounter_i1 = 0U;
          localDW->is_Inverter_HV_CheckRR = NInvState_IN_Inv_Error_Check_1;
          *rty_MTorqueLimitNegativeRR = 0.0;
          *rty_MTorqueLimitPositiveRR = 0.0;
        } else {
          localDW->is_Inverter_HV_CheckRR = NInvState_IN_NO_ACTIVE_CHILD;
          *rty_BHVOn = 1.0;
          localDW->is_Encoder_Reset_RR = NInvState_IN_Encoder_OK;
          *rty_NInvState = 31.0;
        }
        break;
      }
      break;
    }
  }

  /* End of Chart: '<Root>/NInvState System' */
}

/* Function for Chart: '<Root>/NInvState System' */
static void exit_internal_Inverter_HV_Check(real_T *rty_NInvState, real_T
  *rty_BHVOn, DW_NInvState_f_T *localDW)
{
  switch (localDW->is_Inverter_HV_Checks) {
   case NInvStat_IN_Inverter_HV_CheckFR:
    localDW->is_Inverter_HV_CheckFR = NInvState_IN_NO_ACTIVE_CHILD;
    *rty_BHVOn = 1.0;
    *rty_NInvState = 4.0;
    localDW->is_Inverter_HV_Checks = NInvState_IN_NO_ACTIVE_CHILD;
    break;

   case NInvSt_IN_Inverter_HV_CheckRR_o:
    localDW->is_Inverter_HV_CheckRR_e = NInvState_IN_NO_ACTIVE_CHILD;
    *rty_BHVOn = 1.0;
    localDW->is_Inverter_HV_Checks = NInvState_IN_NO_ACTIVE_CHILD;
    break;

   case NInvSta_IN_Inverter_HV_ChecksFL:
    localDW->is_Inverter_HV_ChecksFL = NInvState_IN_NO_ACTIVE_CHILD;
    *rty_BHVOn = 1.0;
    localDW->is_Inverter_HV_Checks = NInvState_IN_NO_ACTIVE_CHILD;
    break;

   case NInvSta_IN_Inverter_HV_ChecksRL:
    localDW->is_Inverter_HV_ChecksRL = NInvState_IN_NO_ACTIVE_CHILD;
    *rty_BHVOn = 1.0;
    localDW->is_Inverter_HV_Checks = NInvState_IN_NO_ACTIVE_CHILD;
    break;

   default:
    localDW->is_Inverter_HV_Checks = NInvState_IN_NO_ACTIVE_CHILD;
    break;
  }
}

/* Function for Chart: '<Root>/NInvState System' */
static void NInvState_Inverter_HV_CheckFR(const boolean_T *rtu_BInvErrorFR,
  const boolean_T *rtu_BQuitInvOnFR, const boolean_T *rtu_BInvQuitDcOnFR, real_T
  *rty_NInvState, real_T *rty_BHVOn, real_T *rty_BInvOnFROut, real_T
  *rty_BInvDCOnRROut, real_T *rty_BInvDCOnFROut, real_T *rty_BInvEnableFR,
  real_T *rty_BInvErrorResetFR, real_T *rty_MTargetTorqueFR, real_T
  *rty_MTorqueLimitNegativeFR, real_T *rty_MTorqueLimitPositiveFR,
  DW_NInvState_f_T *localDW)
{
  switch (localDW->is_Inverter_HV_CheckFR) {
   case NInvState_IN_Inv_Error_Check_1:
    *rty_MTorqueLimitNegativeFR = 0.0;
    *rty_MTorqueLimitPositiveFR = 0.0;
    if ((localDW->sfEvent == NInvState_CALL_EVENT) &&
        (localDW->temporalCounter_i1 >= 500)) {
      localDW->temporalCounter_i1 = 0U;
      localDW->is_Inverter_HV_CheckFR = NInvState_IN_Inv_Error_Reset;
      *rty_BInvErrorResetFR = 1.0;
      *rty_BInvDCOnFROut = 0.0;
      *rty_BInvEnableFR = 0.0;
      *rty_BInvOnFROut = 0.0;
    }
    break;

   case NInvState_IN_Inv_Error_Check_2:
    if ((localDW->sfEvent == NInvState_CALL_EVENT) &&
        (localDW->temporalCounter_i1 >= 500)) {
      if (!*rtu_BInvErrorFR) {
        localDW->temporalCounter_i1 = 0U;
        localDW->is_Inverter_HV_CheckFR = NInvState_IN_Inverter_IN;
        *rty_NInvState = 5.0;
        *rty_BInvDCOnFROut = 1.0;
      } else {
        localDW->temporalCounter_i1 = 0U;
        localDW->is_Inverter_HV_CheckFR = NInvState_IN_Inv_Error_Check_1;
        *rty_MTorqueLimitNegativeFR = 0.0;
        *rty_MTorqueLimitPositiveFR = 0.0;
      }
    } else {
      *rty_BInvErrorResetFR = 0.0;
    }
    break;

   case NInvState_IN_Inv_Error_Reset:
    *rty_BInvDCOnFROut = 0.0;
    *rty_BInvEnableFR = 0.0;
    *rty_BInvOnFROut = 0.0;
    if ((localDW->sfEvent == NInvState_CALL_EVENT) &&
        (localDW->temporalCounter_i1 >= 500)) {
      localDW->temporalCounter_i1 = 0U;
      localDW->is_Inverter_HV_CheckFR = NInvState_IN_Inv_Error_Check_2;
      *rty_BInvErrorResetFR = 0.0;
    }
    break;

   case NInvState_IN_Inverter_IN:
    *rty_BInvDCOnFROut = 1.0;
    if (*rtu_BInvQuitDcOnFR) {
      localDW->temporalCounter_i1 = 0U;
      localDW->is_Inverter_HV_CheckFR = NInvState_IN_START_UP;
      *rty_NInvState = 6.0;
      *rty_MTargetTorqueFR = 0.0;
      *rty_MTorqueLimitNegativeFR = 0.0;
      *rty_MTorqueLimitPositiveFR = 0.0;
      *rty_BInvEnableFR = 1.0;
    } else if ((localDW->sfEvent == NInvState_CALL_EVENT) &&
               (localDW->temporalCounter_i1 >= 500) && (*rtu_BInvErrorFR)) {
      localDW->temporalCounter_i1 = 0U;
      localDW->is_Inverter_HV_CheckFR = NInvState_IN_Inv_Error_Reset;
      *rty_BInvErrorResetFR = 1.0;
      *rty_BInvDCOnFROut = 0.0;
      *rty_BInvEnableFR = 0.0;
      *rty_BInvOnFROut = 0.0;
    }
    break;

   case NInvState_IN_Inverter_ON:
    *rty_BInvOnFROut = 1.0;
    if (*rtu_BQuitInvOnFR) {
      localDW->temporalCounter_i1 = 0U;
      localDW->is_Inverter_HV_CheckFR = NInvState_IN_TorqueReq_Ready;
      *rty_NInvState = 8.0;
      *rty_MTorqueLimitNegativeFR = -204.1;
      *rty_MTorqueLimitPositiveFR = 214.2;
    } else if (*rtu_BInvErrorFR) {
      localDW->temporalCounter_i1 = 0U;
      localDW->is_Inverter_HV_CheckFR = NInvState_IN_Inv_Error_Check_1;
      *rty_MTorqueLimitNegativeFR = 0.0;
      *rty_MTorqueLimitPositiveFR = 0.0;
    }
    break;

   case NInvState_IN_START_UP:
    *rty_MTargetTorqueFR = 0.0;
    *rty_MTorqueLimitNegativeFR = 0.0;
    *rty_MTorqueLimitPositiveFR = 0.0;
    *rty_BInvEnableFR = 1.0;
    if ((localDW->sfEvent == NInvState_CALL_EVENT) &&
        (localDW->temporalCounter_i1 >= 100)) {
      localDW->is_Inverter_HV_CheckFR = NInvState_IN_Inverter_ON;
      *rty_NInvState = 7.0;
      *rty_BInvOnFROut = 1.0;
    }
    break;

   default:
    /* case IN_TorqueReq_Ready: */
    *rty_MTorqueLimitNegativeFR = -204.1;
    *rty_MTorqueLimitPositiveFR = 214.2;
    if ((localDW->sfEvent == NInvState_CALL_EVENT) &&
        (localDW->temporalCounter_i1 >= 500) && (!*rtu_BInvErrorFR)) {
      localDW->is_Inverter_HV_CheckFR = NInvState_IN_NO_ACTIVE_CHILD;
      *rty_BHVOn = 1.0;
      localDW->is_Inverter_HV_Checks = NInvSt_IN_Inverter_HV_CheckRR_o;
      localDW->temporalCounter_i1 = 0U;
      localDW->is_Inverter_HV_CheckRR_e = NInvState_IN_Inverter_IN;
      *rty_NInvState = 9.0;
      *rty_BInvDCOnRROut = 1.0;
    } else if (*rtu_BInvErrorFR) {
      localDW->temporalCounter_i1 = 0U;
      localDW->is_Inverter_HV_CheckFR = NInvState_IN_Inv_Error_Check_1;
      *rty_MTorqueLimitNegativeFR = 0.0;
      *rty_MTorqueLimitPositiveFR = 0.0;
    }
    break;
  }
}

/* Function for Chart: '<Root>/NInvState System' */
static void NInvState_Inverter_HV_CheckRR(const boolean_T *rtu_BInvErrorRR,
  const boolean_T *rtu_BQuitInvOnRR, const boolean_T *rtu_BInvQuitDcOnRR, real_T
  *rty_NInvState, real_T *rty_BHVOn, real_T *rty_BInvOnRROut, real_T
  *rty_BInvDCOnRROut, real_T *rty_BInvDCOnFLOut, real_T *rty_BInvEnableRR,
  real_T *rty_BInvErrorResetRR, real_T *rty_MTargetTorqueRR, real_T
  *rty_MTorqueLimitNegativeRR, real_T *rty_MTorqueLimitPositiveRR,
  DW_NInvState_f_T *localDW)
{
  switch (localDW->is_Inverter_HV_CheckRR_e) {
   case NInvState_IN_Inv_Error_Check_1:
    *rty_MTorqueLimitNegativeRR = 0.0;
    *rty_MTorqueLimitPositiveRR = 0.0;
    if ((localDW->sfEvent == NInvState_CALL_EVENT) &&
        (localDW->temporalCounter_i1 >= 500)) {
      localDW->temporalCounter_i1 = 0U;
      localDW->is_Inverter_HV_CheckRR_e = NInvState_IN_Inv_Error_Reset;
      *rty_BInvErrorResetRR = 1.0;
      *rty_BInvDCOnRROut = 0.0;
      *rty_BInvEnableRR = 0.0;
      *rty_BInvOnRROut = 0.0;
    }
    break;

   case NInvState_IN_Inv_Error_Check_2:
    if ((localDW->sfEvent == NInvState_CALL_EVENT) &&
        (localDW->temporalCounter_i1 >= 500)) {
      if (!*rtu_BInvErrorRR) {
        localDW->temporalCounter_i1 = 0U;
        localDW->is_Inverter_HV_CheckRR_e = NInvState_IN_Inverter_IN;
        *rty_NInvState = 9.0;
        *rty_BInvDCOnRROut = 1.0;
      } else {
        localDW->temporalCounter_i1 = 0U;
        localDW->is_Inverter_HV_CheckRR_e = NInvState_IN_Inv_Error_Check_1;
        *rty_MTorqueLimitNegativeRR = 0.0;
        *rty_MTorqueLimitPositiveRR = 0.0;
      }
    } else {
      *rty_BInvErrorResetRR = 0.0;
    }
    break;

   case NInvState_IN_Inv_Error_Reset:
    *rty_BInvDCOnRROut = 0.0;
    *rty_BInvEnableRR = 0.0;
    *rty_BInvOnRROut = 0.0;
    if ((localDW->sfEvent == NInvState_CALL_EVENT) &&
        (localDW->temporalCounter_i1 >= 500)) {
      localDW->temporalCounter_i1 = 0U;
      localDW->is_Inverter_HV_CheckRR_e = NInvState_IN_Inv_Error_Check_2;
      *rty_BInvErrorResetRR = 0.0;
    }
    break;

   case NInvState_IN_Inverter_IN:
    *rty_BInvDCOnRROut = 1.0;
    if (*rtu_BInvQuitDcOnRR) {
      localDW->temporalCounter_i1 = 0U;
      localDW->is_Inverter_HV_CheckRR_e = NInvState_IN_START_UP;
      *rty_NInvState = 10.0;
      *rty_MTargetTorqueRR = 0.0;
      *rty_MTorqueLimitNegativeRR = 0.0;
      *rty_MTorqueLimitPositiveRR = 0.0;
      *rty_BInvEnableRR = 1.0;
    } else if ((localDW->sfEvent == NInvState_CALL_EVENT) &&
               (localDW->temporalCounter_i1 >= 500) && (*rtu_BInvErrorRR)) {
      localDW->temporalCounter_i1 = 0U;
      localDW->is_Inverter_HV_CheckRR_e = NInvState_IN_Inv_Error_Reset;
      *rty_BInvErrorResetRR = 1.0;
      *rty_BInvDCOnRROut = 0.0;
      *rty_BInvEnableRR = 0.0;
      *rty_BInvOnRROut = 0.0;
    }
    break;

   case NInvState_IN_Inverter_ON:
    *rty_BInvOnRROut = 1.0;
    if (*rtu_BQuitInvOnRR) {
      localDW->temporalCounter_i1 = 0U;
      localDW->is_Inverter_HV_CheckRR_e = NInvState_IN_TorqueReq_Ready;
      *rty_NInvState = 12.0;
      *rty_MTorqueLimitNegativeRR = -204.1;
      *rty_MTorqueLimitPositiveRR = 214.2;
    } else if (*rtu_BInvErrorRR) {
      localDW->temporalCounter_i1 = 0U;
      localDW->is_Inverter_HV_CheckRR_e = NInvState_IN_Inv_Error_Check_1;
      *rty_MTorqueLimitNegativeRR = 0.0;
      *rty_MTorqueLimitPositiveRR = 0.0;
    }
    break;

   case NInvState_IN_START_UP:
    *rty_MTargetTorqueRR = 0.0;
    *rty_MTorqueLimitNegativeRR = 0.0;
    *rty_MTorqueLimitPositiveRR = 0.0;
    *rty_BInvEnableRR = 1.0;
    if ((localDW->sfEvent == NInvState_CALL_EVENT) &&
        (localDW->temporalCounter_i1 >= 100)) {
      localDW->is_Inverter_HV_CheckRR_e = NInvState_IN_Inverter_ON;
      *rty_NInvState = 11.0;
      *rty_BInvOnRROut = 1.0;
    }
    break;

   default:
    /* case IN_TorqueReq_Ready: */
    *rty_MTorqueLimitNegativeRR = -204.1;
    *rty_MTorqueLimitPositiveRR = 214.2;
    if ((localDW->sfEvent == NInvState_CALL_EVENT) &&
        (localDW->temporalCounter_i1 >= 500) && (!*rtu_BInvErrorRR)) {
      localDW->is_Inverter_HV_CheckRR_e = NInvState_IN_NO_ACTIVE_CHILD;
      *rty_BHVOn = 1.0;
      localDW->is_Inverter_HV_Checks = NInvSta_IN_Inverter_HV_ChecksFL;
      localDW->temporalCounter_i1 = 0U;
      localDW->is_Inverter_HV_ChecksFL = NInvState_IN_Inverter_IN;
      *rty_NInvState = 13.0;
      *rty_BInvDCOnFLOut = 1.0;
    } else if (*rtu_BInvErrorRR) {
      localDW->temporalCounter_i1 = 0U;
      localDW->is_Inverter_HV_CheckRR_e = NInvState_IN_Inv_Error_Check_1;
      *rty_MTorqueLimitNegativeRR = 0.0;
      *rty_MTorqueLimitPositiveRR = 0.0;
    }
    break;
  }
}

/* Function for Chart: '<Root>/NInvState System' */
static void NInvState_Inverter_HV_ChecksFL(const boolean_T *rtu_BInvErrorFL,
  const boolean_T *rtu_BQuitInvOnFL, const boolean_T *rtu_BInvQuitDcOnFL, real_T
  *rty_NInvState, real_T *rty_BHVOn, real_T *rty_BInvOnFLOut, real_T
  *rty_BInvDCOnRLOut, real_T *rty_BInvDCOnFLOut, real_T *rty_BInvEnableFL,
  real_T *rty_BInvErrorResetFL, real_T *rty_MTargetTorqueFL, real_T
  *rty_MTorqueLimitNegativeFL, real_T *rty_MTorqueLimitPositiveFL,
  DW_NInvState_f_T *localDW)
{
  switch (localDW->is_Inverter_HV_ChecksFL) {
   case NInvState_IN_Inv_Error_Check_1:
    *rty_MTorqueLimitNegativeFL = 0.0;
    *rty_MTorqueLimitPositiveFL = 0.0;
    if ((localDW->sfEvent == NInvState_CALL_EVENT) &&
        (localDW->temporalCounter_i1 >= 500)) {
      localDW->temporalCounter_i1 = 0U;
      localDW->is_Inverter_HV_ChecksFL = NInvState_IN_Inv_Error_Reset;
      *rty_BInvErrorResetFL = 1.0;
      *rty_BInvDCOnFLOut = 0.0;
      *rty_BInvEnableFL = 0.0;
      *rty_BInvOnFLOut = 0.0;
    }
    break;

   case NInvState_IN_Inv_Error_Check_2:
    if ((localDW->sfEvent == NInvState_CALL_EVENT) &&
        (localDW->temporalCounter_i1 >= 500)) {
      if (!*rtu_BInvErrorFL) {
        localDW->temporalCounter_i1 = 0U;
        localDW->is_Inverter_HV_ChecksFL = NInvState_IN_Inverter_IN;
        *rty_NInvState = 13.0;
        *rty_BInvDCOnFLOut = 1.0;
      } else {
        localDW->temporalCounter_i1 = 0U;
        localDW->is_Inverter_HV_ChecksFL = NInvState_IN_Inv_Error_Check_1;
        *rty_MTorqueLimitNegativeFL = 0.0;
        *rty_MTorqueLimitPositiveFL = 0.0;
      }
    } else {
      *rty_BInvErrorResetFL = 0.0;
    }
    break;

   case NInvState_IN_Inv_Error_Reset:
    *rty_BInvDCOnFLOut = 0.0;
    *rty_BInvEnableFL = 0.0;
    *rty_BInvOnFLOut = 0.0;
    if ((localDW->sfEvent == NInvState_CALL_EVENT) &&
        (localDW->temporalCounter_i1 >= 500)) {
      localDW->temporalCounter_i1 = 0U;
      localDW->is_Inverter_HV_ChecksFL = NInvState_IN_Inv_Error_Check_2;
      *rty_BInvErrorResetFL = 0.0;
    }
    break;

   case NInvState_IN_Inverter_IN:
    *rty_BInvDCOnFLOut = 1.0;
    if (*rtu_BInvQuitDcOnFL) {
      localDW->temporalCounter_i1 = 0U;
      localDW->is_Inverter_HV_ChecksFL = NInvState_IN_START_UP;
      *rty_NInvState = 14.0;
      *rty_MTargetTorqueFL = 0.0;
      *rty_MTorqueLimitNegativeFL = 0.0;
      *rty_MTorqueLimitPositiveFL = 0.0;
      *rty_BInvEnableFL = 1.0;
    } else if ((localDW->sfEvent == NInvState_CALL_EVENT) &&
               (localDW->temporalCounter_i1 >= 500) && (*rtu_BInvErrorFL)) {
      localDW->temporalCounter_i1 = 0U;
      localDW->is_Inverter_HV_ChecksFL = NInvState_IN_Inv_Error_Reset;
      *rty_BInvErrorResetFL = 1.0;
      *rty_BInvDCOnFLOut = 0.0;
      *rty_BInvEnableFL = 0.0;
      *rty_BInvOnFLOut = 0.0;
    }
    break;

   case NInvState_IN_Inverter_ON:
    *rty_BInvOnFLOut = 1.0;
    if (*rtu_BQuitInvOnFL) {
      localDW->temporalCounter_i1 = 0U;
      localDW->is_Inverter_HV_ChecksFL = NInvState_IN_TorqueReq_Ready;
      *rty_NInvState = 16.0;
      *rty_MTorqueLimitNegativeFL = -204.1;
      *rty_MTorqueLimitPositiveFL = 214.2;
    } else if (*rtu_BInvErrorFL) {
      localDW->temporalCounter_i1 = 0U;
      localDW->is_Inverter_HV_ChecksFL = NInvState_IN_Inv_Error_Check_1;
      *rty_MTorqueLimitNegativeFL = 0.0;
      *rty_MTorqueLimitPositiveFL = 0.0;
    }
    break;

   case NInvState_IN_START_UP:
    *rty_MTargetTorqueFL = 0.0;
    *rty_MTorqueLimitNegativeFL = 0.0;
    *rty_MTorqueLimitPositiveFL = 0.0;
    *rty_BInvEnableFL = 1.0;
    if ((localDW->sfEvent == NInvState_CALL_EVENT) &&
        (localDW->temporalCounter_i1 >= 100)) {
      localDW->is_Inverter_HV_ChecksFL = NInvState_IN_Inverter_ON;
      *rty_NInvState = 15.0;
      *rty_BInvOnFLOut = 1.0;
    }
    break;

   default:
    /* case IN_TorqueReq_Ready: */
    *rty_MTorqueLimitNegativeFL = -204.1;
    *rty_MTorqueLimitPositiveFL = 214.2;
    if ((localDW->sfEvent == NInvState_CALL_EVENT) &&
        (localDW->temporalCounter_i1 >= 500) && (!*rtu_BInvErrorFL)) {
      localDW->is_Inverter_HV_ChecksFL = NInvState_IN_NO_ACTIVE_CHILD;
      *rty_BHVOn = 1.0;
      localDW->is_Inverter_HV_Checks = NInvSta_IN_Inverter_HV_ChecksRL;
      localDW->temporalCounter_i1 = 0U;
      localDW->is_Inverter_HV_ChecksRL = NInvState_IN_Inverter_IN;
      *rty_NInvState = 17.0;
      *rty_BInvDCOnRLOut = 1.0;
    } else if (*rtu_BInvErrorFL) {
      localDW->temporalCounter_i1 = 0U;
      localDW->is_Inverter_HV_ChecksFL = NInvState_IN_Inv_Error_Check_1;
      *rty_MTorqueLimitNegativeFL = 0.0;
      *rty_MTorqueLimitPositiveFL = 0.0;
    }
    break;
  }
}

/* Function for Chart: '<Root>/NInvState System' */
static void NInvState_Inverter_HV_Checks(const boolean_T *rtu_BErrorReset, const
  boolean_T *rtu_BInvErrorRL, const boolean_T *rtu_BInvErrorRR, const boolean_T *
  rtu_BInvErrorFL, const boolean_T *rtu_BInvErrorFR, const boolean_T
  *rtu_BQuitInvOnRL, const boolean_T *rtu_BQuitInvOnRR, const boolean_T
  *rtu_BQuitInvOnFL, const boolean_T *rtu_BQuitInvOnFR, const boolean_T
  *rtu_BInvQuitDcOnRL, const boolean_T *rtu_BInvQuitDcOnRR, const boolean_T
  *rtu_BInvQuitDcOnFL, const boolean_T *rtu_BInvQuitDcOnFR, real_T
  *rty_NInvState, real_T *rty_BHVOn, real_T *rty_BInvOnRLOut, real_T
  *rty_BInvOnRROut, real_T *rty_BInvOnFLOut, real_T *rty_BInvOnFROut, real_T
  *rty_BInvDCOnRLOut, real_T *rty_BInvDCOnRROut, real_T *rty_BInvDCOnFLOut,
  real_T *rty_BInvDCOnFROut, real_T *rty_BInvEnableRL, real_T *rty_BInvEnableRR,
  real_T *rty_BInvEnableFL, real_T *rty_BInvEnableFR, real_T
  *rty_BInvErrorResetRL, real_T *rty_BInvErrorResetRR, real_T
  *rty_BInvErrorResetFL, real_T *rty_BInvErrorResetFR, real_T
  *rty_MTargetTorqueRL, real_T *rty_MTargetTorqueRR, real_T *rty_MTargetTorqueFL,
  real_T *rty_MTargetTorqueFR, real_T *rty_MTorqueLimitNegativeRL, real_T
  *rty_MTorqueLimitNegativeRR, real_T *rty_MTorqueLimitNegativeFL, real_T
  *rty_MTorqueLimitNegativeFR, real_T *rty_MTorqueLimitPositiveRL, real_T
  *rty_MTorqueLimitPositiveRR, real_T *rty_MTorqueLimitPositiveFL, real_T
  *rty_MTorqueLimitPositiveFR, DW_NInvState_f_T *localDW)
{
  /* Chart: '<Root>/NInvState System' */
  if (*rtu_BErrorReset) {
    exit_internal_Inverter_HV_Check(rty_NInvState, rty_BHVOn, localDW);
    localDW->is_c4_NInvState = NInvState_IN_Inv_Error_Checks;
    localDW->temporalCounter_i1 = 0U;
    localDW->is_Inv_Error_Checks = NInvState_IN_Inv_LV_Check;
    *rty_NInvState = 1.0;
    *rty_BInvErrorResetRR = 0.0;
    *rty_BInvErrorResetRL = 0.0;
    *rty_BInvErrorResetFR = 0.0;
    *rty_BInvErrorResetFL = 0.0;
  } else if (*rty_NInvState == 21.0) {
    exit_internal_Inverter_HV_Check(rty_NInvState, rty_BHVOn, localDW);
    localDW->is_c4_NInvState = NInvState_IN_Inv_OK;
    *rty_NInvState = 92.0;
  } else {
    switch (localDW->is_Inverter_HV_Checks) {
     case NInvState_IN_Inv_HV_Check:
      if (*rty_NInvState == 3.0) {
        localDW->is_Inverter_HV_Checks = NInvStat_IN_Inverter_HV_CheckFR;
        localDW->temporalCounter_i1 = 0U;
        localDW->is_Inverter_HV_CheckFR = NInvState_IN_Inverter_IN;
        *rty_NInvState = 5.0;
        *rty_BInvDCOnFROut = 1.0;
      }
      break;

     case NInvState_IN_Inv_OK_d:
      break;

     case NInvStat_IN_Inverter_HV_CheckFR:
      NInvState_Inverter_HV_CheckFR(rtu_BInvErrorFR, rtu_BQuitInvOnFR,
        rtu_BInvQuitDcOnFR, rty_NInvState, rty_BHVOn, rty_BInvOnFROut,
        rty_BInvDCOnRROut, rty_BInvDCOnFROut, rty_BInvEnableFR,
        rty_BInvErrorResetFR, rty_MTargetTorqueFR, rty_MTorqueLimitNegativeFR,
        rty_MTorqueLimitPositiveFR, localDW);
      break;

     case NInvSt_IN_Inverter_HV_CheckRR_o:
      NInvState_Inverter_HV_CheckRR(rtu_BInvErrorRR, rtu_BQuitInvOnRR,
        rtu_BInvQuitDcOnRR, rty_NInvState, rty_BHVOn, rty_BInvOnRROut,
        rty_BInvDCOnRROut, rty_BInvDCOnFLOut, rty_BInvEnableRR,
        rty_BInvErrorResetRR, rty_MTargetTorqueRR, rty_MTorqueLimitNegativeRR,
        rty_MTorqueLimitPositiveRR, localDW);
      break;

     case NInvSta_IN_Inverter_HV_ChecksFL:
      NInvState_Inverter_HV_ChecksFL(rtu_BInvErrorFL, rtu_BQuitInvOnFL,
        rtu_BInvQuitDcOnFL, rty_NInvState, rty_BHVOn, rty_BInvOnFLOut,
        rty_BInvDCOnRLOut, rty_BInvDCOnFLOut, rty_BInvEnableFL,
        rty_BInvErrorResetFL, rty_MTargetTorqueFL, rty_MTorqueLimitNegativeFL,
        rty_MTorqueLimitPositiveFL, localDW);
      break;

     default:
      /* case IN_Inverter_HV_ChecksRL: */
      switch (localDW->is_Inverter_HV_ChecksRL) {
       case NInvState_IN_Inv_Error_Check_1:
        *rty_MTorqueLimitNegativeRL = 0.0;
        *rty_MTorqueLimitPositiveRL = 0.0;
        if ((localDW->sfEvent == NInvState_CALL_EVENT) &&
            (localDW->temporalCounter_i1 >= 500)) {
          localDW->temporalCounter_i1 = 0U;
          localDW->is_Inverter_HV_ChecksRL = NInvState_IN_Inv_Error_Reset;
          *rty_BInvErrorResetRL = 1.0;
          *rty_BInvDCOnRLOut = 0.0;
          *rty_BInvEnableRL = 0.0;
          *rty_BInvOnRLOut = 0.0;
        }
        break;

       case NInvState_IN_Inv_Error_Check_2:
        if ((localDW->sfEvent == NInvState_CALL_EVENT) &&
            (localDW->temporalCounter_i1 >= 500)) {
          if (!*rtu_BInvErrorRL) {
            localDW->temporalCounter_i1 = 0U;
            localDW->is_Inverter_HV_ChecksRL = NInvState_IN_Inverter_IN;
            *rty_NInvState = 17.0;
            *rty_BInvDCOnRLOut = 1.0;
          } else {
            localDW->temporalCounter_i1 = 0U;
            localDW->is_Inverter_HV_ChecksRL = NInvState_IN_Inv_Error_Check_1;
            *rty_MTorqueLimitNegativeRL = 0.0;
            *rty_MTorqueLimitPositiveRL = 0.0;
          }
        } else {
          *rty_BInvErrorResetRL = 0.0;
        }
        break;

       case NInvState_IN_Inv_Error_Reset:
        *rty_BInvDCOnRLOut = 0.0;
        *rty_BInvEnableRL = 0.0;
        *rty_BInvOnRLOut = 0.0;
        if ((localDW->sfEvent == NInvState_CALL_EVENT) &&
            (localDW->temporalCounter_i1 >= 500)) {
          localDW->temporalCounter_i1 = 0U;
          localDW->is_Inverter_HV_ChecksRL = NInvState_IN_Inv_Error_Check_2;
          *rty_BInvErrorResetRL = 0.0;
        }
        break;

       case NInvState_IN_Inverter_IN:
        *rty_BInvDCOnRLOut = 1.0;
        if (*rtu_BInvQuitDcOnRL) {
          localDW->temporalCounter_i1 = 0U;
          localDW->is_Inverter_HV_ChecksRL = NInvState_IN_START_UP;
          *rty_NInvState = 18.0;
          *rty_MTargetTorqueRL = 0.0;
          *rty_MTorqueLimitNegativeRL = 0.0;
          *rty_MTorqueLimitPositiveRL = 0.0;
          *rty_BInvEnableRL = 1.0;
        } else if ((localDW->sfEvent == NInvState_CALL_EVENT) &&
                   (localDW->temporalCounter_i1 >= 500) && (*rtu_BInvErrorRL)) {
          localDW->temporalCounter_i1 = 0U;
          localDW->is_Inverter_HV_ChecksRL = NInvState_IN_Inv_Error_Reset;
          *rty_BInvErrorResetRL = 1.0;
          *rty_BInvDCOnRLOut = 0.0;
          *rty_BInvEnableRL = 0.0;
          *rty_BInvOnRLOut = 0.0;
        }
        break;

       case NInvState_IN_Inverter_ON:
        *rty_BInvOnRLOut = 1.0;
        if (*rtu_BQuitInvOnRL) {
          localDW->is_Inverter_HV_ChecksRL = NInvState_IN_TorqueReq_Ready;
          *rty_NInvState = 20.0;
          *rty_MTorqueLimitNegativeRL = -204.1;
          *rty_MTorqueLimitPositiveRL = 214.2;
        } else if (*rtu_BInvErrorRL) {
          localDW->temporalCounter_i1 = 0U;
          localDW->is_Inverter_HV_ChecksRL = NInvState_IN_Inv_Error_Check_1;
          *rty_MTorqueLimitNegativeRL = 0.0;
          *rty_MTorqueLimitPositiveRL = 0.0;
        }
        break;

       case NInvState_IN_START_UP:
        *rty_MTargetTorqueRL = 0.0;
        *rty_MTorqueLimitNegativeRL = 0.0;
        *rty_MTorqueLimitPositiveRL = 0.0;
        *rty_BInvEnableRL = 1.0;
        if ((localDW->sfEvent == NInvState_CALL_EVENT) &&
            (localDW->temporalCounter_i1 >= 100)) {
          localDW->is_Inverter_HV_ChecksRL = NInvState_IN_Inverter_ON;
          *rty_NInvState = 19.0;
          *rty_BInvOnRLOut = 1.0;
        }
        break;

       default:
        /* case IN_TorqueReq_Ready: */
        *rty_MTorqueLimitNegativeRL = -204.1;
        *rty_MTorqueLimitPositiveRL = 214.2;
        if (*rtu_BInvErrorRL) {
          localDW->temporalCounter_i1 = 0U;
          localDW->is_Inverter_HV_ChecksRL = NInvState_IN_Inv_Error_Check_1;
          *rty_MTorqueLimitNegativeRL = 0.0;
          *rty_MTorqueLimitPositiveRL = 0.0;
        } else {
          localDW->is_Inverter_HV_ChecksRL = NInvState_IN_NO_ACTIVE_CHILD;
          *rty_BHVOn = 1.0;
          localDW->is_Inverter_HV_Checks = NInvState_IN_Inv_OK_d;
          *rty_NInvState = 21.0;
        }
        break;
      }
      break;
    }
  }

  /* End of Chart: '<Root>/NInvState System' */
}

/* System initialize for referenced model: 'NInvState' */
void NInvState_Init(DW_NInvState_f_T *localDW)
{
  /* SystemInitialize for Chart: '<Root>/NInvState System' */
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
               *rtu_BInvSysReadyFR, const boolean_T *rtu_BQuitInvOnRL, const
               boolean_T *rtu_BQuitInvOnRR, const boolean_T *rtu_BQuitInvOnFL,
               const boolean_T *rtu_BQuitInvOnFR, const boolean_T
               *rtu_BInvQuitDcOnRL, const boolean_T *rtu_BInvQuitDcOnRR, const
               boolean_T *rtu_BInvQuitDcOnFL, const boolean_T
               *rtu_BInvQuitDcOnFR, const real_T *rtu_VDCAccumulator, const
               real_T *rtu_nMotorRR, const real_T *rtu_nMotorFR, const real_T
               *rtu_nMotorFL, real_T *rty_NInvState, real_T *rty_BHVOn, real_T
               *rty_BInvOnRLOut, real_T *rty_BInvOnRROut, real_T
               *rty_BInvOnFLOut, real_T *rty_BInvOnFROut, real_T
               *rty_BInvDCOnRLOut, real_T *rty_BInvDCOnRROut, real_T
               *rty_BInvDCOnFLOut, real_T *rty_BInvDCOnFROut, real_T
               *rty_BInvEnableRL, real_T *rty_BInvEnableRR, real_T
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
               DW_NInvState_f_T *localDW)
{
  /* Chart: '<Root>/NInvState System' incorporates:
   *  Sum: '<Root>/Subtract'
   */
  localDW->sfEvent = NInvState_CALL_EVENT;
  if (localDW->temporalCounter_i1 < 4095) {
    localDW->temporalCounter_i1++;
  }

  if (localDW->is_active_c4_NInvState == 0) {
    localDW->is_active_c4_NInvState = 1U;
    localDW->temporalCounter_i1 = 0U;
    localDW->is_c4_NInvState = NInvState_IN_Inv_State_Idle;
    *rty_NInvState = 0.0;
  } else {
    switch (localDW->is_c4_NInvState) {
     case NInvState_IN_Encoder_Reset_FL:
      NInvState_Encoder_Reset_FL(rtu_BInvErrorFL, rtu_BInvSysReadyFL,
        rtu_BQuitInvOnFL, rtu_BInvQuitDcOnFL, rty_NInvState, rty_BHVOn,
        rty_BInvOnFLOut, rty_BInvDCOnFLOut, rty_BInvEnableFL,
        rty_BInvErrorResetFL, rty_MTargetTorqueFL, rty_MTorqueLimitNegativeFL,
        rty_MTorqueLimitPositiveFL, localDW);
      break;

     case NInvState_IN_Encoder_Reset_FR:
      NInvState_Encoder_Reset_FR(rtu_BInvErrorFR, rtu_BInvSysReadyFR,
        rtu_BQuitInvOnFR, rtu_BInvQuitDcOnFR, rty_NInvState, rty_BHVOn,
        rty_BInvOnFROut, rty_BInvDCOnFROut, rty_BInvEnableFR,
        rty_BInvErrorResetFR, rty_MTargetTorqueFR, rty_MTorqueLimitNegativeFR,
        rty_MTorqueLimitPositiveFR, localDW);
      break;

     case NInvState_IN_Encoder_Reset_RL:
      NInvState_Encoder_Reset_RL(rtu_BInvErrorRL, rtu_BInvSysReadyRL,
        rtu_BQuitInvOnRL, rtu_BInvQuitDcOnRL, rty_NInvState, rty_BHVOn,
        rty_BInvOnRLOut, rty_BInvDCOnRLOut, rty_BInvEnableRL,
        rty_BInvErrorResetRL, rty_MTargetTorqueRL, rty_MTorqueLimitNegativeRL,
        rty_MTorqueLimitPositiveRL, localDW);
      break;

     case NInvState_IN_Encoder_Reset_RR:
      NInvState_Encoder_Reset_RR(rtu_BInvErrorRR, rtu_BInvSysReadyRR,
        rtu_BQuitInvOnRR, rtu_BInvQuitDcOnRR, rty_NInvState, rty_BHVOn,
        rty_BInvOnRROut, rty_BInvDCOnRROut, rty_BInvEnableRR,
        rty_BInvErrorResetRR, rty_MTargetTorqueRR, rty_MTorqueLimitNegativeRR,
        rty_MTorqueLimitPositiveRR, localDW);
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
            *rty_BInvErrorResetRR = 1.0;
            *rty_BInvErrorResetRL = 1.0;
            *rty_BInvErrorResetFR = 1.0;
            *rty_BInvErrorResetFL = 1.0;
          }
          break;

         case NInvState_IN_Inv_LV_Check1:
          if ((localDW->temporalCounter_i1 >= 100) && (!*rtu_BInvErrorFL) &&
              (!*rtu_BInvErrorFR) && (!*rtu_BInvErrorRR) && (!*rtu_BInvErrorRL))
          {
            localDW->is_Inv_Error_Checks = NInvState_IN_Inv_LV_Check2;
            *rty_NInvState = 2.0;
            *rty_BInvErrorResetRR = 0.0;
            *rty_BInvErrorResetRL = 0.0;
            *rty_BInvErrorResetFR = 0.0;
            *rty_BInvErrorResetFL = 0.0;
          }
          break;

         case NInvState_IN_Inv_LV_Check2:
          if ((*rtu_BInvErrorRR) || (*rtu_BInvErrorRL) || (*rtu_BInvErrorFR) ||
              (*rtu_BInvErrorFL)) {
            localDW->temporalCounter_i1 = 0U;
            localDW->is_Inv_Error_Checks = NInvState_IN_Inv_LV_Check;
            *rty_NInvState = 1.0;
            *rty_BInvErrorResetRR = 0.0;
            *rty_BInvErrorResetRL = 0.0;
            *rty_BInvErrorResetFR = 0.0;
            *rty_BInvErrorResetFL = 0.0;
          } else if ((!*rtu_BInvErrorRR) && (!*rtu_BInvErrorRL) &&
                     (!*rtu_BInvErrorFR) && (!*rtu_BInvErrorFL) &&
                     (*rtu_BInvSysReadyRL) && (*rtu_BInvSysReadyRR) &&
                     (*rtu_BInvSysReadyFL) && (*rtu_BInvSysReadyFR)) {
            localDW->is_Inv_Error_Checks = NInvState_IN_Inv_LV_OK;
            *rty_NInvState = 3.0;
          }
          break;

         default:
          /* case IN_Inv_LV_OK: */
          if ((*rtu_BErrorReset) && (*rtu_nMotorRL < 500.0)) {
            localDW->temporalCounter_i1 = 0U;
            localDW->is_Inv_Error_Checks = NInvState_IN_Inv_LV_Check;
            *rty_NInvState = 1.0;
            *rty_BInvErrorResetRR = 0.0;
            *rty_BInvErrorResetRL = 0.0;
            *rty_BInvErrorResetFR = 0.0;
            *rty_BInvErrorResetFL = 0.0;
          }
          break;
        }
      }
      break;

     case NInvState_IN_Inv_OK:
      if (*rtu_VDCInvRL < 400.0) {
        localDW->is_c4_NInvState = NInvState_IN_Inverter_DCOFF;
        *rty_BInvDCOnFLOut = 0.0;
        *rty_BInvDCOnFROut = 0.0;
        *rty_BInvDCOnRLOut = 0.0;
        *rty_BInvDCOnRROut = 0.0;
      } else if (*rtu_BErrorReset) {
        localDW->is_c4_NInvState = NInvState_IN_Inv_Error_Checks;
        localDW->temporalCounter_i1 = 0U;
        localDW->is_Inv_Error_Checks = NInvState_IN_Inv_LV_Check;
        *rty_NInvState = 1.0;
        *rty_BInvErrorResetRR = 0.0;
        *rty_BInvErrorResetRL = 0.0;
        *rty_BInvErrorResetFR = 0.0;
        *rty_BInvErrorResetFL = 0.0;
      } else if ((*rtu_NInvDTCFR != 0.0) && (*rtu_NInvDTCRL != 2359.0) &&
                 (*rtu_NInvDTCFR != 1049.0) && (*rtu_nMotorFR < 5000.0)) {
        localDW->is_c4_NInvState = NInvState_IN_Encoder_Reset_FR;
        localDW->is_Encoder_Reset_FR = NInvState_IN_Encoder_Error_FR;
        *rty_NInvState = 404.0;
        localDW->temporalCounter_i1 = 0U;
        localDW->is_Encoder_Error_FR = NInvState_IN_PBX_SENSORS_ini;
        *rty_BInvErrorResetFR = 0.0;
      } else if ((*rtu_NInvDTCRL != 0.0) && (*rtu_NInvDTCRL != 2359.0) &&
                 (*rtu_NInvDTCRL != 1049.0) && (*rtu_nMotorRL < 5000.0)) {
        localDW->is_c4_NInvState = NInvState_IN_Encoder_Reset_RL;
        localDW->is_Encoder_Reset_RL = NInvState_IN_Encoder_Error_RL;
        *rty_NInvState = 404.0;
        localDW->temporalCounter_i1 = 0U;
        localDW->is_Encoder_Error_RL = NInvState_IN_PBX_SENSORS_ini;
        *rty_BInvErrorResetRL = 0.0;
      } else if ((*rtu_NInvDTCFL != 0.0) && (*rtu_NInvDTCRL != 2359.0) &&
                 (*rtu_NInvDTCFL != 1049.0) && (*rtu_nMotorFL < 5000.0)) {
        localDW->is_c4_NInvState = NInvState_IN_Encoder_Reset_FL;
        localDW->is_Encoder_Reset_FL = NInvState_IN_Encoder_Error_FL;
        *rty_NInvState = 404.0;
        localDW->temporalCounter_i1 = 0U;
        localDW->is_Encoder_Error_FL = NInvState_IN_PBX_SENSORS_ini;
        *rty_BInvErrorResetFL = 0.0;
      } else if ((*rtu_NInvDTCRR != 0.0) && (*rtu_NInvDTCRL != 2359.0) &&
                 (*rtu_NInvDTCRR != 1049.0) && (*rtu_nMotorRR < 5000.0)) {
        localDW->is_c4_NInvState = NInvState_IN_Encoder_Reset_RR;
        localDW->is_Encoder_Reset_RR = NInvState_IN_Encoder_Error_RR;
        *rty_NInvState = 404.0;
        localDW->temporalCounter_i1 = 0U;
        localDW->is_Encoder_Error_RR = NInvState_IN_PBX_SENSORS_ini;
        *rty_BInvErrorResetRR = 0.0;
      }
      break;

     case NInvState_IN_Inv_State_Idle:
      if (localDW->temporalCounter_i1 >= 4000) {
        localDW->is_c4_NInvState = NInvState_IN_Inv_Error_Checks;
        localDW->temporalCounter_i1 = 0U;
        localDW->is_Inv_Error_Checks = NInvState_IN_Inv_LV_Check;
        *rty_NInvState = 1.0;
        *rty_BInvErrorResetRR = 0.0;
        *rty_BInvErrorResetRL = 0.0;
        *rty_BInvErrorResetFR = 0.0;
        *rty_BInvErrorResetFL = 0.0;
      }
      break;

     case NInvState_IN_Inverter_DCOFF:
      *rty_BInvDCOnFLOut = 0.0;
      *rty_BInvDCOnFROut = 0.0;
      *rty_BInvDCOnRLOut = 0.0;
      *rty_BInvDCOnRROut = 0.0;
      if (*rtu_VDCInvRL < 60.0) {
        localDW->temporalCounter_i1 = 0U;
        localDW->is_c4_NInvState = NInvState_IN_Inv_State_Idle;
        *rty_NInvState = 0.0;
      }
      break;

     default:
      /* case IN_Inverter_HV_Checks: */
      NInvState_Inverter_HV_Checks(rtu_BErrorReset, rtu_BInvErrorRL,
        rtu_BInvErrorRR, rtu_BInvErrorFL, rtu_BInvErrorFR, rtu_BQuitInvOnRL,
        rtu_BQuitInvOnRR, rtu_BQuitInvOnFL, rtu_BQuitInvOnFR, rtu_BInvQuitDcOnRL,
        rtu_BInvQuitDcOnRR, rtu_BInvQuitDcOnFL, rtu_BInvQuitDcOnFR,
        rty_NInvState, rty_BHVOn, rty_BInvOnRLOut, rty_BInvOnRROut,
        rty_BInvOnFLOut, rty_BInvOnFROut, rty_BInvDCOnRLOut, rty_BInvDCOnRROut,
        rty_BInvDCOnFLOut, rty_BInvDCOnFROut, rty_BInvEnableRL, rty_BInvEnableRR,
        rty_BInvEnableFL, rty_BInvEnableFR, rty_BInvErrorResetRL,
        rty_BInvErrorResetRR, rty_BInvErrorResetFL, rty_BInvErrorResetFR,
        rty_MTargetTorqueRL, rty_MTargetTorqueRR, rty_MTargetTorqueFL,
        rty_MTargetTorqueFR, rty_MTorqueLimitNegativeRL,
        rty_MTorqueLimitNegativeRR, rty_MTorqueLimitNegativeFL,
        rty_MTorqueLimitNegativeFR, rty_MTorqueLimitPositiveRL,
        rty_MTorqueLimitPositiveRR, rty_MTorqueLimitPositiveFL,
        rty_MTorqueLimitPositiveFR, localDW);
      break;
    }
  }

  /* End of Chart: '<Root>/NInvState System' */
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
