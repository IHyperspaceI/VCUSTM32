/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: SteeringWheel.c
 *
 * Code generated for Simulink model 'SteeringWheel'.
 *
 * Model version                  : 13.5
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Wed Jun  3 14:55:13 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "SteeringWheel.h"
#include "rtwtypes.h"
#include "SteeringWheel_private.h"

/* Named constants for Chart: '<S2>/BTorqueVectoringActivated Syatem' */
#define SteeringWheel_IN_Map11         ((uint8_T)1U)
#define SteeringWheel_IN_Map12         ((uint8_T)2U)

/* Named constants for Chart: '<S3>/NThrottleMap System' */
#define SteeringWheel_IN_Map10         ((uint8_T)1U)
#define SteeringWheel_IN_Map13         ((uint8_T)3U)
#define SteeringWheel_IN_Map7          ((uint8_T)4U)
#define SteeringWheel_IN_Map8          ((uint8_T)5U)
#define SteeringWheel_IN_Map9          ((uint8_T)6U)

/* Named constants for Chart: '<S3>/PEngineBrakingPower System' */
#define SteeringWheel_IN_Map11_p       ((uint8_T)2U)
#define SteeringWheel_IN_Map12_i       ((uint8_T)3U)

/* Named constants for Chart: '<S4>/BAccumulatorFanOn System' */
#define SteeringWheel_IN_Map13_c       ((uint8_T)1U)
#define SteeringWheel_IN_Map14         ((uint8_T)2U)

/* Named constants for Chart: '<S4>/NTractionControlKpSelector System' */
#define SteeringWheel_IN_Map12_j       ((uint8_T)1U)
#define SteeringWheel_IN_Map13_b       ((uint8_T)2U)
#define SteeringWheel_IN_Map7_d        ((uint8_T)3U)
#define SteeringWheel_IN_Map8_k        ((uint8_T)4U)

/* Named constants for Chart: '<S5>/NModeNumberDisplay5 System' */
#define SteeringWheel_IN_Mode10        ((uint8_T)1U)
#define SteeringWheel_IN_Mode11        ((uint8_T)2U)
#define SteeringWheel_IN_Mode12        ((uint8_T)3U)
#define SteeringWheel_IN_Mode7         ((uint8_T)4U)
#define SteeringWheel_IN_Mode8         ((uint8_T)5U)
#define SteeringWheel_IN_Mode9         ((uint8_T)6U)
#define SteeringWheel_IN_Reset         ((uint8_T)7U)
#define SteeringWheel_IN_Reset1        ((uint8_T)8U)
#define SteeringWheel_IN_Reset10       ((uint8_T)9U)
#define SteeringWheel_IN_Reset11       ((uint8_T)10U)
#define SteeringWheel_IN_Reset2        ((uint8_T)11U)
#define SteeringWheel_IN_Reset3        ((uint8_T)12U)
#define SteeringWheel_IN_Reset4        ((uint8_T)13U)
#define SteeringWheel_IN_Reset5        ((uint8_T)14U)
#define SteeringWheel_IN_Reset6        ((uint8_T)15U)
#define SteeringWheel_IN_Reset7        ((uint8_T)16U)
#define SteeringWheel_IN_Reset8        ((uint8_T)17U)
#define SteeringWheel_IN_Reset9        ((uint8_T)18U)

/* Forward declaration for local functions */
static void SteeringWheel_Mode8(B_SteeringWheel_c_T *localB,
  DW_SteeringWheel_f_T *localDW);
static void SteeringWheel_Mode9(B_SteeringWheel_c_T *localB,
  DW_SteeringWheel_f_T *localDW);
static void SteeringWheel_Mode8_p(B_SteeringWheel_c_T *localB,
  DW_SteeringWheel_f_T *localDW);
static void SteeringWheel_Mode9_k(B_SteeringWheel_c_T *localB,
  DW_SteeringWheel_f_T *localDW);

/*
 * Output and update for action system:
 *    '<S3>/If Action Subsystem'
 *    '<S3>/If Action Subsystem1'
 *    '<S3>/If Action Subsystem2'
 *    '<S3>/If Action Subsystem3'
 *    '<S3>/If Action Subsystem6'
 *    '<S3>/If Action Subsystem7'
 *    '<S4>/If Action Subsystem10'
 *    '<S4>/If Action Subsystem11'
 *    '<S4>/If Action Subsystem12'
 *    '<S4>/If Action Subsystem13'
 *    ...
 */
void SteeringWheel_IfActionSubsystem(const boolean_T *rtu_BSteeringWheelButton2,
  const boolean_T *rtu_BSteeringWheelButton5, boolean_T
  *rty_BSteeringWheelButton2, boolean_T *rty_BSteeringWheelButton5)
{
  /* SignalConversion generated from: '<S10>/BSteeringWheelButton2  ' */
  *rty_BSteeringWheelButton2 = *rtu_BSteeringWheelButton2;

  /* SignalConversion generated from: '<S10>/BSteeringWheelButton5  ' */
  *rty_BSteeringWheelButton5 = *rtu_BSteeringWheelButton5;
}

/*
 * Output and update for action system:
 *    '<S5>/If Action Subsystem3'
 *    '<S5>/If Action Subsystem1'
 */
void SteeringWhee_IfActionSubsystem3(boolean_T rtu_BSteeringWheelButton4, const
  boolean_T *rtu_BSteeringWheelButton6, boolean_T *rty_BSteeringWheelButton4,
  boolean_T *rty_BSteeringWheelButton6)
{
  /* SignalConversion generated from: '<S33>/BSteeringWheelButton4 ' */
  *rty_BSteeringWheelButton4 = rtu_BSteeringWheelButton4;

  /* SignalConversion generated from: '<S33>/BSteeringWheelButton6 ' */
  *rty_BSteeringWheelButton6 = *rtu_BSteeringWheelButton6;
}

/* Function for Chart: '<S5>/NModeNumberDisplay5 System' */
static void SteeringWheel_Mode8(B_SteeringWheel_c_T *localB,
  DW_SteeringWheel_f_T *localDW)
{
  boolean_T tmp;
  tmp = ((localDW->sfEvent_a == -1) && (localDW->temporalCounter_i1_a >= 500));
  if (tmp && localB->BSteeringWheelButton6_b) {
    localDW->temporalCounter_i1_a = 0U;
    localDW->is_c4_SteeringWheel = SteeringWheel_IN_Reset8;
  } else if (tmp && localB->BSteeringWheelButton4_b) {
    localDW->temporalCounter_i1_a = 0U;
    localDW->is_c4_SteeringWheel = SteeringWheel_IN_Reset2;
  } else {
    localB->NModeNumberDisplay5 = 3.0;
  }
}

/* Function for Chart: '<S5>/NModeNumberDisplay5 System' */
static void SteeringWheel_Mode9(B_SteeringWheel_c_T *localB,
  DW_SteeringWheel_f_T *localDW)
{
  boolean_T tmp;
  tmp = ((localDW->sfEvent_a == -1) && (localDW->temporalCounter_i1_a >= 500));
  if (tmp && localB->BSteeringWheelButton4_b) {
    localDW->temporalCounter_i1_a = 0U;
    localDW->is_c4_SteeringWheel = SteeringWheel_IN_Reset4;
  } else if (tmp && localB->BSteeringWheelButton6_b) {
    localDW->temporalCounter_i1_a = 0U;
    localDW->is_c4_SteeringWheel = SteeringWheel_IN_Reset6;
  } else {
    localB->NModeNumberDisplay5 = 5.0;
  }
}

/* Function for Chart: '<S5>/NModeNumberDisplay6 System' */
static void SteeringWheel_Mode8_p(B_SteeringWheel_c_T *localB,
  DW_SteeringWheel_f_T *localDW)
{
  boolean_T tmp;
  tmp = ((localDW->sfEvent == -1) && (localDW->temporalCounter_i1 >= 500));
  if (tmp && localB->BSteeringWheelButton6) {
    localDW->temporalCounter_i1 = 0U;
    localDW->is_c14_SteeringWheel = SteeringWheel_IN_Reset8;
  } else if (tmp && localB->BSteeringWheelButton4) {
    localDW->temporalCounter_i1 = 0U;
    localDW->is_c14_SteeringWheel = SteeringWheel_IN_Reset2;
  } else {
    localB->NModeNumberDisplay6 = 3.0;
  }
}

/* Function for Chart: '<S5>/NModeNumberDisplay6 System' */
static void SteeringWheel_Mode9_k(B_SteeringWheel_c_T *localB,
  DW_SteeringWheel_f_T *localDW)
{
  boolean_T tmp;
  tmp = ((localDW->sfEvent == -1) && (localDW->temporalCounter_i1 >= 500));
  if (tmp && localB->BSteeringWheelButton4) {
    localDW->temporalCounter_i1 = 0U;
    localDW->is_c14_SteeringWheel = SteeringWheel_IN_Reset4;
  } else if (tmp && localB->BSteeringWheelButton6) {
    localDW->temporalCounter_i1 = 0U;
    localDW->is_c14_SteeringWheel = SteeringWheel_IN_Reset6;
  } else {
    localB->NModeNumberDisplay6 = 5.0;
  }
}

/* System initialize for referenced model: 'SteeringWheel' */
void SteeringWheel_Init(DW_SteeringWheel_f_T *localDW)
{
  /* SystemInitialize for Chart: '<S5>/NModeNumberDisplay5 System' */
  localDW->sfEvent_a = -1;

  /* SystemInitialize for Chart: '<S5>/NModeNumberDisplay6 System' */
  localDW->sfEvent = -1;
}

/* Output and update for referenced model: 'SteeringWheel' */
void SteeringWheel(const boolean_T *rtu_BSteeringWheelButton7, const real_T
                   *rtu_NDisplayNumberDDU7, const boolean_T
                   *rtu_BSteeringWheelButton2, const boolean_T
                   *rtu_BSteeringWheelButton5, const boolean_T
                   *rtu_BSteeringWheelButton4, const boolean_T
                   *rtu_BSteeringWheelButton6, boolean_T
                   *rty_BTorqueVectoringActivated, real_T *rty_NThrottleMap,
                   real_T *rty_PDischarge, boolean_T *rty_BEMSActivated, real_T *
                   rty_PRegen, real_T *rty_rTorqueSplit, real_T
                   *rty_PEngineBraking, boolean_T *rty_BSpinningModelActivated,
                   real_T *rty_NTractionControlKpSelector, boolean_T
                   *rty_BTractionControlActivated, real_T
                   *rty_rTorqueVectoringMultiplier, real_T
                   *rty_NPowerControllerKpSelector, real_T
                   *rty_NTorqueSplitSpeedSelector, boolean_T
                   *rty_BAccumulatorFanOn, boolean_T *rty_BErrorReset, boolean_T
                   *rty_BReadyToDriveButton, real_T *rty_NModeNumberDisplay5,
                   real_T *rty_NModeNumberDisplay6, boolean_T *rty_BInvLVOn,
                   B_SteeringWheel_c_T *localB, DW_SteeringWheel_f_T *localDW)
{
  /* Logic: '<S1>/AND' */
  *rty_BInvLVOn = ((!*rtu_BSteeringWheelButton2) || (!*rtu_BSteeringWheelButton5));

  /* SignalConversion generated from: '<Root>/BSteeringWheelButton4' */
  *rty_BReadyToDriveButton = *rtu_BSteeringWheelButton4;

  /* If: '<S5>/If' */
  if (*rtu_NDisplayNumberDDU7 == 5.0) {
    /* Outputs for IfAction SubSystem: '<S5>/If Action Subsystem3' incorporates:
     *  ActionPort: '<S33>/Action Port'
     */
    SteeringWhee_IfActionSubsystem3(*rty_BReadyToDriveButton,
      rtu_BSteeringWheelButton6, &localB->BSteeringWheelButton4_b,
      &localB->BSteeringWheelButton6_b);

    /* End of Outputs for SubSystem: '<S5>/If Action Subsystem3' */
  } else if (*rtu_NDisplayNumberDDU7 == 6.0) {
    /* Outputs for IfAction SubSystem: '<S5>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S32>/Action Port'
     */
    SteeringWhee_IfActionSubsystem3(*rty_BReadyToDriveButton,
      rtu_BSteeringWheelButton6, &localB->BSteeringWheelButton4,
      &localB->BSteeringWheelButton6);

    /* End of Outputs for SubSystem: '<S5>/If Action Subsystem1' */
  }

  /* End of If: '<S5>/If' */

  /* Chart: '<S5>/NModeNumberDisplay5 System' */
  localDW->sfEvent_a = -1;
  if (localDW->temporalCounter_i1_a < 511) {
    localDW->temporalCounter_i1_a++;
  }

  if (localDW->is_active_c4_SteeringWheel == 0) {
    localDW->is_active_c4_SteeringWheel = 1U;
    localDW->temporalCounter_i1_a = 0U;
    localDW->is_c4_SteeringWheel = SteeringWheel_IN_Mode12;
    localB->NModeNumberDisplay5 = 1.0;
  } else {
    switch (localDW->is_c4_SteeringWheel) {
     case SteeringWheel_IN_Mode10:
      if ((localDW->temporalCounter_i1_a >= 500) &&
          localB->BSteeringWheelButton6_b) {
        localDW->temporalCounter_i1_a = 0U;
        localDW->is_c4_SteeringWheel = SteeringWheel_IN_Reset5;
      } else if ((localDW->temporalCounter_i1_a >= 500) &&
                 localB->BSteeringWheelButton4_b) {
        localDW->temporalCounter_i1_a = 0U;
        localDW->is_c4_SteeringWheel = SteeringWheel_IN_Reset10;
      } else {
        localB->NModeNumberDisplay5 = 6.0;
      }
      break;

     case SteeringWheel_IN_Mode11:
      if ((localDW->temporalCounter_i1_a >= 500) &&
          localB->BSteeringWheelButton4_b) {
        localDW->temporalCounter_i1_a = 0U;
        localDW->is_c4_SteeringWheel = SteeringWheel_IN_Reset3;
      } else if ((localDW->temporalCounter_i1_a >= 500) &&
                 localB->BSteeringWheelButton6_b) {
        localDW->temporalCounter_i1_a = 0U;
        localDW->is_c4_SteeringWheel = SteeringWheel_IN_Reset7;
      } else {
        localB->NModeNumberDisplay5 = 4.0;
      }
      break;

     case SteeringWheel_IN_Mode12:
      if ((localDW->temporalCounter_i1_a >= 500) &&
          localB->BSteeringWheelButton4_b) {
        localDW->temporalCounter_i1_a = 0U;
        localDW->is_c4_SteeringWheel = SteeringWheel_IN_Reset;
      } else if ((localDW->temporalCounter_i1_a >= 500) &&
                 localB->BSteeringWheelButton6_b) {
        localDW->temporalCounter_i1_a = 0U;
        localDW->is_c4_SteeringWheel = SteeringWheel_IN_Reset11;
      }
      break;

     case SteeringWheel_IN_Mode7:
      if ((localDW->temporalCounter_i1_a >= 500) &&
          localB->BSteeringWheelButton6_b) {
        localDW->temporalCounter_i1_a = 0U;
        localDW->is_c4_SteeringWheel = SteeringWheel_IN_Reset9;
      } else if ((localDW->temporalCounter_i1_a >= 500) &&
                 localB->BSteeringWheelButton4_b) {
        localDW->temporalCounter_i1_a = 0U;
        localDW->is_c4_SteeringWheel = SteeringWheel_IN_Reset1;
      } else {
        localB->NModeNumberDisplay5 = 2.0;
      }
      break;

     case SteeringWheel_IN_Mode8:
      SteeringWheel_Mode8(localB, localDW);
      break;

     case SteeringWheel_IN_Mode9:
      SteeringWheel_Mode9(localB, localDW);
      break;

     case SteeringWheel_IN_Reset:
      if (localDW->temporalCounter_i1_a >= 50) {
        localDW->temporalCounter_i1_a = 0U;
        localDW->is_c4_SteeringWheel = SteeringWheel_IN_Mode7;
        localB->NModeNumberDisplay5 = 2.0;
      }
      break;

     case SteeringWheel_IN_Reset1:
      if (localDW->temporalCounter_i1_a >= 50) {
        localDW->temporalCounter_i1_a = 0U;
        localDW->is_c4_SteeringWheel = SteeringWheel_IN_Mode8;
        localB->NModeNumberDisplay5 = 3.0;
      }
      break;

     case SteeringWheel_IN_Reset10:
      if (localDW->temporalCounter_i1_a >= 50) {
        localDW->temporalCounter_i1_a = 0U;
        localDW->is_c4_SteeringWheel = SteeringWheel_IN_Mode12;
        localB->NModeNumberDisplay5 = 1.0;
      }
      break;

     case SteeringWheel_IN_Reset11:
      if (localDW->temporalCounter_i1_a >= 50) {
        localDW->temporalCounter_i1_a = 0U;
        localDW->is_c4_SteeringWheel = SteeringWheel_IN_Mode10;
        localB->NModeNumberDisplay5 = 6.0;
      }
      break;

     case SteeringWheel_IN_Reset2:
      if (localDW->temporalCounter_i1_a >= 50) {
        localDW->temporalCounter_i1_a = 0U;
        localDW->is_c4_SteeringWheel = SteeringWheel_IN_Mode11;
        localB->NModeNumberDisplay5 = 4.0;
      }
      break;

     case SteeringWheel_IN_Reset3:
      if (localDW->temporalCounter_i1_a >= 50) {
        localDW->temporalCounter_i1_a = 0U;
        localDW->is_c4_SteeringWheel = SteeringWheel_IN_Mode9;
        localB->NModeNumberDisplay5 = 5.0;
      }
      break;

     case SteeringWheel_IN_Reset4:
      if (localDW->temporalCounter_i1_a >= 50) {
        localDW->temporalCounter_i1_a = 0U;
        localDW->is_c4_SteeringWheel = SteeringWheel_IN_Mode10;
        localB->NModeNumberDisplay5 = 6.0;
      }
      break;

     case SteeringWheel_IN_Reset5:
      if (localDW->temporalCounter_i1_a >= 50) {
        localDW->temporalCounter_i1_a = 0U;
        localDW->is_c4_SteeringWheel = SteeringWheel_IN_Mode9;
        localB->NModeNumberDisplay5 = 5.0;
      }
      break;

     case SteeringWheel_IN_Reset6:
      if (localDW->temporalCounter_i1_a >= 50) {
        localDW->temporalCounter_i1_a = 0U;
        localDW->is_c4_SteeringWheel = SteeringWheel_IN_Mode11;
        localB->NModeNumberDisplay5 = 4.0;
      }
      break;

     case SteeringWheel_IN_Reset7:
      if (localDW->temporalCounter_i1_a >= 50) {
        localDW->temporalCounter_i1_a = 0U;
        localDW->is_c4_SteeringWheel = SteeringWheel_IN_Mode8;
        localB->NModeNumberDisplay5 = 3.0;
      }
      break;

     case SteeringWheel_IN_Reset8:
      if (localDW->temporalCounter_i1_a >= 50) {
        localDW->temporalCounter_i1_a = 0U;
        localDW->is_c4_SteeringWheel = SteeringWheel_IN_Mode7;
        localB->NModeNumberDisplay5 = 2.0;
      }
      break;

     default:
      /* case IN_Reset9: */
      if (localDW->temporalCounter_i1_a >= 50) {
        localDW->temporalCounter_i1_a = 0U;
        localDW->is_c4_SteeringWheel = SteeringWheel_IN_Mode12;
        localB->NModeNumberDisplay5 = 1.0;
      }
      break;
    }
  }

  /* End of Chart: '<S5>/NModeNumberDisplay5 System' */

  /* DataTypeConversion: '<S5>/Data Type Conversion1' */
  *rty_NModeNumberDisplay5 = localB->NModeNumberDisplay5;

  /* If: '<S3>/If' */
  if ((*rty_NModeNumberDisplay5 == 1.0) && (*rtu_NDisplayNumberDDU7 == 5.0)) {
    /* Outputs for IfAction SubSystem: '<S3>/If Action Subsystem' incorporates:
     *  ActionPort: '<S10>/Action Port'
     */
    SteeringWheel_IfActionSubsystem(rtu_BSteeringWheelButton2,
      rtu_BSteeringWheelButton5, &localB->BSteeringWheelButto_olxto1zi0th,
      &localB->BSteeringWheelButto_mjtbwwh3kp5);

    /* End of Outputs for SubSystem: '<S3>/If Action Subsystem' */
  } else if ((*rty_NModeNumberDisplay5 == 2.0) && (*rtu_NDisplayNumberDDU7 ==
              5.0)) {
    /* Outputs for IfAction SubSystem: '<S3>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S11>/Action Port'
     */
    SteeringWheel_IfActionSubsystem(rtu_BSteeringWheelButton2,
      rtu_BSteeringWheelButton5, &localB->BSteeringWheelButton_olxto1zi0t,
      &localB->BSteeringWheelButton_mjtbwwh3kp);

    /* End of Outputs for SubSystem: '<S3>/If Action Subsystem1' */
  } else if ((*rty_NModeNumberDisplay5 == 3.0) && (*rtu_NDisplayNumberDDU7 ==
              5.0)) {
    /* Outputs for IfAction SubSystem: '<S3>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S12>/Action Port'
     */
    SteeringWheel_IfActionSubsystem(rtu_BSteeringWheelButton2,
      rtu_BSteeringWheelButton5, &localB->BSteeringWheelButton2_olxto1zi0,
      &localB->BSteeringWheelButton5_mjtbwwh3k);

    /* End of Outputs for SubSystem: '<S3>/If Action Subsystem2' */
  } else if ((*rty_NModeNumberDisplay5 == 4.0) && (*rtu_NDisplayNumberDDU7 ==
              5.0)) {
    /* Outputs for IfAction SubSystem: '<S3>/If Action Subsystem3' incorporates:
     *  ActionPort: '<S13>/Action Port'
     */
    SteeringWheel_IfActionSubsystem(rtu_BSteeringWheelButton2,
      rtu_BSteeringWheelButton5, &localB->BSteeringWheelButton2_olxto1zi,
      &localB->BSteeringWheelButton5_mjtbwwh3);

    /* End of Outputs for SubSystem: '<S3>/If Action Subsystem3' */
  } else if ((*rty_NModeNumberDisplay5 == 5.0) && (*rtu_NDisplayNumberDDU7 ==
              5.0)) {
    /* Outputs for IfAction SubSystem: '<S3>/If Action Subsystem6' incorporates:
     *  ActionPort: '<S14>/Action Port'
     */
    SteeringWheel_IfActionSubsystem(rtu_BSteeringWheelButton2,
      rtu_BSteeringWheelButton5, &localB->BSteeringWheelButton2_olxto1z,
      &localB->BSteeringWheelButton5_mjtbwwh);

    /* End of Outputs for SubSystem: '<S3>/If Action Subsystem6' */
  } else if ((*rty_NModeNumberDisplay5 == 6.0) && (*rtu_NDisplayNumberDDU7 ==
              5.0)) {
    /* Outputs for IfAction SubSystem: '<S3>/If Action Subsystem7' incorporates:
     *  ActionPort: '<S15>/Action Port'
     */
    SteeringWheel_IfActionSubsystem(rtu_BSteeringWheelButton2,
      rtu_BSteeringWheelButton5, &localB->BSteeringWheelButton2_olxto1,
      &localB->BSteeringWheelButton5_mjtbww);

    /* End of Outputs for SubSystem: '<S3>/If Action Subsystem7' */
  }

  /* End of If: '<S3>/If' */

  /* Chart: '<S3>/BEMSActivated System' */
  if (localDW->temporalCounter_i1_f < 511) {
    localDW->temporalCounter_i1_f++;
  }

  if (localDW->is_active_c1_SteeringWheel == 0) {
    localDW->is_active_c1_SteeringWheel = 1U;
    localDW->temporalCounter_i1_f = 0U;
    localDW->is_c1_SteeringWheel = SteeringWheel_IN_Map11;
    localB->BEMSActivated = 0.0;
  } else if (localDW->is_c1_SteeringWheel == SteeringWheel_IN_Map11) {
    if (((localDW->temporalCounter_i1_f >= 500) &&
         localB->BSteeringWheelButton_olxto1zi0t) ||
        ((localDW->temporalCounter_i1_f >= 500) &&
         localB->BSteeringWheelButton_mjtbwwh3kp)) {
      localDW->temporalCounter_i1_f = 0U;
      localDW->is_c1_SteeringWheel = SteeringWheel_IN_Map12;
      localB->BEMSActivated = 1.0;
    } else {
      localB->BEMSActivated = 0.0;
    }

    /* case IN_Map12: */
  } else if (((localDW->temporalCounter_i1_f >= 500) &&
              localB->BSteeringWheelButton_mjtbwwh3kp) ||
             ((localDW->temporalCounter_i1_f >= 500) &&
              localB->BSteeringWheelButton_olxto1zi0t)) {
    localDW->temporalCounter_i1_f = 0U;
    localDW->is_c1_SteeringWheel = SteeringWheel_IN_Map11;
    localB->BEMSActivated = 0.0;
  }

  /* End of Chart: '<S3>/BEMSActivated System' */

  /* DataTypeConversion: '<S3>/Data Type Conversion5' */
  *rty_BEMSActivated = (localB->BEMSActivated != 0.0);

  /* Chart: '<S3>/BSpinningModelActivated System' */
  if (localDW->temporalCounter_i1_c < 511) {
    localDW->temporalCounter_i1_c++;
  }

  if (localDW->is_active_c11_SteeringWheel == 0) {
    localDW->is_active_c11_SteeringWheel = 1U;
    localDW->temporalCounter_i1_c = 0U;
    localDW->is_c11_SteeringWheel = SteeringWheel_IN_Map11;
    localB->BSpinningModelActivated = 0.0;
  } else if (localDW->is_c11_SteeringWheel == SteeringWheel_IN_Map11) {
    if (((localDW->temporalCounter_i1_c >= 500) &&
         localB->BSteeringWheelButton2_olxto1) ||
        ((localDW->temporalCounter_i1_c >= 500) &&
         localB->BSteeringWheelButton5_mjtbww)) {
      localDW->temporalCounter_i1_c = 0U;
      localDW->is_c11_SteeringWheel = SteeringWheel_IN_Map12;
      localB->BSpinningModelActivated = 1.0;
    } else {
      localB->BSpinningModelActivated = 0.0;
    }

    /* case IN_Map12: */
  } else if (((localDW->temporalCounter_i1_c >= 500) &&
              localB->BSteeringWheelButton5_mjtbww) ||
             ((localDW->temporalCounter_i1_c >= 500) &&
              localB->BSteeringWheelButton2_olxto1)) {
    localDW->temporalCounter_i1_c = 0U;
    localDW->is_c11_SteeringWheel = SteeringWheel_IN_Map11;
    localB->BSpinningModelActivated = 0.0;
  }

  /* End of Chart: '<S3>/BSpinningModelActivated System' */

  /* DataTypeConversion: '<S3>/Data Type Conversion1' */
  *rty_BSpinningModelActivated = (localB->BSpinningModelActivated != 0.0);

  /* Chart: '<S3>/PEngineBrakingPower System' */
  if (localDW->temporalCounter_i1_d4 < 511) {
    localDW->temporalCounter_i1_d4++;
  }

  if (localDW->is_active_c3_SteeringWheel == 0) {
    localDW->is_active_c3_SteeringWheel = 1U;
    localDW->temporalCounter_i1_d4 = 0U;
    localDW->is_c3_SteeringWheel = SteeringWheel_IN_Map11_p;
    localB->PEngineBraking = 10.0;
  } else {
    switch (localDW->is_c3_SteeringWheel) {
     case SteeringWheel_IN_Map10:
      if ((localDW->temporalCounter_i1_d4 >= 500) &&
          localB->BSteeringWheelButton5_mjtbwwh) {
        localDW->temporalCounter_i1_d4 = 0U;
        localDW->is_c3_SteeringWheel = SteeringWheel_IN_Map9;
        localB->PEngineBraking = 6.0;
      } else if ((localDW->temporalCounter_i1_d4 >= 500) &&
                 localB->BSteeringWheelButton2_olxto1z) {
        localDW->temporalCounter_i1_d4 = 0U;
        localDW->is_c3_SteeringWheel = SteeringWheel_IN_Map11_p;
        localB->PEngineBraking = 10.0;
      } else {
        localB->PEngineBraking = 8.0;
      }
      break;

     case SteeringWheel_IN_Map11_p:
      if ((localDW->temporalCounter_i1_d4 >= 500) &&
          localB->BSteeringWheelButton5_mjtbwwh) {
        localDW->temporalCounter_i1_d4 = 0U;
        localDW->is_c3_SteeringWheel = SteeringWheel_IN_Map10;
        localB->PEngineBraking = 8.0;
      } else if ((localDW->temporalCounter_i1_d4 >= 500) &&
                 localB->BSteeringWheelButton2_olxto1z) {
        localDW->temporalCounter_i1_d4 = 0U;
        localDW->is_c3_SteeringWheel = SteeringWheel_IN_Map12_i;
        localB->PEngineBraking = 14.0;
      } else {
        localB->PEngineBraking = 10.0;
      }
      break;

     case SteeringWheel_IN_Map12_i:
      if ((localDW->temporalCounter_i1_d4 >= 500) &&
          localB->BSteeringWheelButton2_olxto1z) {
        localDW->temporalCounter_i1_d4 = 0U;
        localDW->is_c3_SteeringWheel = SteeringWheel_IN_Map7;
        localB->PEngineBraking = 0.0;
      } else if ((localDW->temporalCounter_i1_d4 >= 500) &&
                 localB->BSteeringWheelButton5_mjtbwwh) {
        localDW->temporalCounter_i1_d4 = 0U;
        localDW->is_c3_SteeringWheel = SteeringWheel_IN_Map11_p;
        localB->PEngineBraking = 10.0;
      }
      break;

     case SteeringWheel_IN_Map7:
      if ((localDW->temporalCounter_i1_d4 >= 500) &&
          localB->BSteeringWheelButton5_mjtbwwh) {
        localDW->temporalCounter_i1_d4 = 0U;
        localDW->is_c3_SteeringWheel = SteeringWheel_IN_Map12_i;
        localB->PEngineBraking = 14.0;
      } else if ((localDW->temporalCounter_i1_d4 >= 500) &&
                 localB->BSteeringWheelButton2_olxto1z) {
        localDW->temporalCounter_i1_d4 = 0U;
        localDW->is_c3_SteeringWheel = SteeringWheel_IN_Map8;
        localB->PEngineBraking = 4.0;
      } else {
        localB->PEngineBraking = 0.0;
      }
      break;

     case SteeringWheel_IN_Map8:
      if ((localDW->temporalCounter_i1_d4 >= 500) &&
          localB->BSteeringWheelButton5_mjtbwwh) {
        localDW->temporalCounter_i1_d4 = 0U;
        localDW->is_c3_SteeringWheel = SteeringWheel_IN_Map7;
        localB->PEngineBraking = 0.0;
      } else if ((localDW->temporalCounter_i1_d4 >= 500) &&
                 localB->BSteeringWheelButton2_olxto1z) {
        localDW->temporalCounter_i1_d4 = 0U;
        localDW->is_c3_SteeringWheel = SteeringWheel_IN_Map9;
        localB->PEngineBraking = 6.0;
      } else {
        localB->PEngineBraking = 4.0;
      }
      break;

     default:
      /* case IN_Map9: */
      if ((localDW->temporalCounter_i1_d4 >= 500) &&
          localB->BSteeringWheelButton5_mjtbwwh) {
        localDW->temporalCounter_i1_d4 = 0U;
        localDW->is_c3_SteeringWheel = SteeringWheel_IN_Map8;
        localB->PEngineBraking = 4.0;
      } else if ((localDW->temporalCounter_i1_d4 >= 500) &&
                 localB->BSteeringWheelButton2_olxto1z) {
        localDW->temporalCounter_i1_d4 = 0U;
        localDW->is_c3_SteeringWheel = SteeringWheel_IN_Map10;
        localB->PEngineBraking = 8.0;
      } else {
        localB->PEngineBraking = 6.0;
      }
      break;
    }
  }

  /* End of Chart: '<S3>/PEngineBrakingPower System' */

  /* DataTypeConversion: '<S3>/Data Type Conversion' */
  *rty_PEngineBraking = localB->PEngineBraking;

  /* Chart: '<S3>/PRegen System' */
  if (localDW->temporalCounter_i1_g < 511) {
    localDW->temporalCounter_i1_g++;
  }

  if (localDW->is_active_c10_SteeringWheel == 0) {
    localDW->is_active_c10_SteeringWheel = 1U;
    localDW->temporalCounter_i1_g = 0U;
    localDW->is_c10_SteeringWheel = SteeringWheel_IN_Map12_i;
    localB->PRegen = 10.0;
  } else {
    switch (localDW->is_c10_SteeringWheel) {
     case SteeringWheel_IN_Map10:
      if ((localDW->temporalCounter_i1_g >= 500) &&
          localB->BSteeringWheelButton5_mjtbwwh3k) {
        localDW->temporalCounter_i1_g = 0U;
        localDW->is_c10_SteeringWheel = SteeringWheel_IN_Map9;
        localB->PRegen = 30.0;
      } else if ((localDW->temporalCounter_i1_g >= 500) &&
                 localB->BSteeringWheelButton2_olxto1zi0) {
        localDW->temporalCounter_i1_g = 0U;
        localDW->is_c10_SteeringWheel = SteeringWheel_IN_Map11_p;
        localB->PRegen = 0.0;
      } else {
        localB->PRegen = 40.0;
      }
      break;

     case SteeringWheel_IN_Map11_p:
      if ((localDW->temporalCounter_i1_g >= 500) &&
          localB->BSteeringWheelButton5_mjtbwwh3k) {
        localDW->temporalCounter_i1_g = 0U;
        localDW->is_c10_SteeringWheel = SteeringWheel_IN_Map10;
        localB->PRegen = 40.0;
      } else if ((localDW->temporalCounter_i1_g >= 500) &&
                 localB->BSteeringWheelButton2_olxto1zi0) {
        localDW->temporalCounter_i1_g = 0U;
        localDW->is_c10_SteeringWheel = SteeringWheel_IN_Map12_i;
        localB->PRegen = 10.0;
      } else {
        localB->PRegen = 0.0;
      }
      break;

     case SteeringWheel_IN_Map12_i:
      if ((localDW->temporalCounter_i1_g >= 500) &&
          localB->BSteeringWheelButton2_olxto1zi0) {
        localDW->temporalCounter_i1_g = 0U;
        localDW->is_c10_SteeringWheel = SteeringWheel_IN_Map7;
        localB->PRegen = 15.0;
      } else if ((localDW->temporalCounter_i1_g >= 500) &&
                 localB->BSteeringWheelButton5_mjtbwwh3k) {
        localDW->temporalCounter_i1_g = 0U;
        localDW->is_c10_SteeringWheel = SteeringWheel_IN_Map11_p;
        localB->PRegen = 0.0;
      }
      break;

     case SteeringWheel_IN_Map7:
      if ((localDW->temporalCounter_i1_g >= 500) &&
          localB->BSteeringWheelButton5_mjtbwwh3k) {
        localDW->temporalCounter_i1_g = 0U;
        localDW->is_c10_SteeringWheel = SteeringWheel_IN_Map12_i;
        localB->PRegen = 10.0;
      } else if ((localDW->temporalCounter_i1_g >= 500) &&
                 localB->BSteeringWheelButton2_olxto1zi0) {
        localDW->temporalCounter_i1_g = 0U;
        localDW->is_c10_SteeringWheel = SteeringWheel_IN_Map8;
        localB->PRegen = 20.0;
      } else {
        localB->PRegen = 15.0;
      }
      break;

     case SteeringWheel_IN_Map8:
      if ((localDW->temporalCounter_i1_g >= 500) &&
          localB->BSteeringWheelButton5_mjtbwwh3k) {
        localDW->temporalCounter_i1_g = 0U;
        localDW->is_c10_SteeringWheel = SteeringWheel_IN_Map7;
        localB->PRegen = 15.0;
      } else if ((localDW->temporalCounter_i1_g >= 500) &&
                 localB->BSteeringWheelButton2_olxto1zi0) {
        localDW->temporalCounter_i1_g = 0U;
        localDW->is_c10_SteeringWheel = SteeringWheel_IN_Map9;
        localB->PRegen = 30.0;
      } else {
        localB->PRegen = 20.0;
      }
      break;

     default:
      /* case IN_Map9: */
      if ((localDW->temporalCounter_i1_g >= 500) &&
          localB->BSteeringWheelButton5_mjtbwwh3k) {
        localDW->temporalCounter_i1_g = 0U;
        localDW->is_c10_SteeringWheel = SteeringWheel_IN_Map8;
        localB->PRegen = 20.0;
      } else if ((localDW->temporalCounter_i1_g >= 500) &&
                 localB->BSteeringWheelButton2_olxto1zi0) {
        localDW->temporalCounter_i1_g = 0U;
        localDW->is_c10_SteeringWheel = SteeringWheel_IN_Map10;
        localB->PRegen = 40.0;
      } else {
        localB->PRegen = 30.0;
      }
      break;
    }
  }

  /* End of Chart: '<S3>/PRegen System' */

  /* DataTypeConversion: '<S3>/Data Type Conversion2' */
  *rty_PRegen = localB->PRegen;

  /* Chart: '<S3>/rTorqueSplit System' */
  if (localDW->temporalCounter_i1_d < 511) {
    localDW->temporalCounter_i1_d++;
  }

  if (localDW->is_active_c5_SteeringWheel == 0) {
    localDW->is_active_c5_SteeringWheel = 1U;
    localDW->temporalCounter_i1_d = 0U;
    localDW->is_c5_SteeringWheel = SteeringWheel_IN_Map8;
    localB->rTorqueSplit = 0.7;
  } else {
    switch (localDW->is_c5_SteeringWheel) {
     case SteeringWheel_IN_Map10:
      if ((localDW->temporalCounter_i1_d >= 500) &&
          localB->BSteeringWheelButton5_mjtbwwh3) {
        localDW->temporalCounter_i1_d = 0U;
        localDW->is_c5_SteeringWheel = SteeringWheel_IN_Map9;
        localB->rTorqueSplit = 0.8;
      } else if ((localDW->temporalCounter_i1_d >= 500) &&
                 localB->BSteeringWheelButton2_olxto1zi) {
        localDW->temporalCounter_i1_d = 0U;
        localDW->is_c5_SteeringWheel = SteeringWheel_IN_Map11_p;
        localB->rTorqueSplit = 1.0;
      } else {
        localB->rTorqueSplit = 0.9;
      }
      break;

     case SteeringWheel_IN_Map11_p:
      if ((localDW->temporalCounter_i1_d >= 500) &&
          localB->BSteeringWheelButton5_mjtbwwh3) {
        localDW->temporalCounter_i1_d = 0U;
        localDW->is_c5_SteeringWheel = SteeringWheel_IN_Map10;
        localB->rTorqueSplit = 0.9;
      } else if ((localDW->temporalCounter_i1_d >= 500) &&
                 localB->BSteeringWheelButton2_olxto1zi) {
        localDW->temporalCounter_i1_d = 0U;
        localDW->is_c5_SteeringWheel = SteeringWheel_IN_Map12_i;
        localB->rTorqueSplit = 0.5;
      } else {
        localB->rTorqueSplit = 1.0;
      }
      break;

     case SteeringWheel_IN_Map12_i:
      if ((localDW->temporalCounter_i1_d >= 500) &&
          localB->BSteeringWheelButton2_olxto1zi) {
        localDW->temporalCounter_i1_d = 0U;
        localDW->is_c5_SteeringWheel = SteeringWheel_IN_Map7;
        localB->rTorqueSplit = 0.6;
      } else if ((localDW->temporalCounter_i1_d >= 500) &&
                 localB->BSteeringWheelButton5_mjtbwwh3) {
        localDW->temporalCounter_i1_d = 0U;
        localDW->is_c5_SteeringWheel = SteeringWheel_IN_Map11_p;
        localB->rTorqueSplit = 1.0;
      }
      break;

     case SteeringWheel_IN_Map7:
      if ((localDW->temporalCounter_i1_d >= 500) &&
          localB->BSteeringWheelButton5_mjtbwwh3) {
        localDW->temporalCounter_i1_d = 0U;
        localDW->is_c5_SteeringWheel = SteeringWheel_IN_Map12_i;
        localB->rTorqueSplit = 0.5;
      } else if ((localDW->temporalCounter_i1_d >= 500) &&
                 localB->BSteeringWheelButton2_olxto1zi) {
        localDW->temporalCounter_i1_d = 0U;
        localDW->is_c5_SteeringWheel = SteeringWheel_IN_Map8;
        localB->rTorqueSplit = 0.7;
      } else {
        localB->rTorqueSplit = 0.6;
      }
      break;

     case SteeringWheel_IN_Map8:
      if ((localDW->temporalCounter_i1_d >= 500) &&
          localB->BSteeringWheelButton5_mjtbwwh3) {
        localDW->temporalCounter_i1_d = 0U;
        localDW->is_c5_SteeringWheel = SteeringWheel_IN_Map7;
        localB->rTorqueSplit = 0.6;
      } else if ((localDW->temporalCounter_i1_d >= 500) &&
                 localB->BSteeringWheelButton2_olxto1zi) {
        localDW->temporalCounter_i1_d = 0U;
        localDW->is_c5_SteeringWheel = SteeringWheel_IN_Map9;
        localB->rTorqueSplit = 0.8;
      } else {
        localB->rTorqueSplit = 0.7;
      }
      break;

     default:
      /* case IN_Map9: */
      if ((localDW->temporalCounter_i1_d >= 500) &&
          localB->BSteeringWheelButton5_mjtbwwh3) {
        localDW->temporalCounter_i1_d = 0U;
        localDW->is_c5_SteeringWheel = SteeringWheel_IN_Map8;
        localB->rTorqueSplit = 0.7;
      } else if ((localDW->temporalCounter_i1_d >= 500) &&
                 localB->BSteeringWheelButton2_olxto1zi) {
        localDW->temporalCounter_i1_d = 0U;
        localDW->is_c5_SteeringWheel = SteeringWheel_IN_Map10;
        localB->rTorqueSplit = 0.9;
      } else {
        localB->rTorqueSplit = 0.8;
      }
      break;
    }
  }

  /* End of Chart: '<S3>/rTorqueSplit System' */

  /* DataTypeConversion: '<S3>/Data Type Conversion3' */
  *rty_rTorqueSplit = localB->rTorqueSplit;

  /* Chart: '<S3>/NThrottleMap System' */
  if (localDW->temporalCounter_i1_ap < 511) {
    localDW->temporalCounter_i1_ap++;
  }

  if (localDW->is_active_c12_SteeringWheel == 0) {
    localDW->is_active_c12_SteeringWheel = 1U;
    localDW->temporalCounter_i1_ap = 0U;
    localDW->is_c12_SteeringWheel = SteeringWheel_IN_Map12;
    localB->NThrottleMap = 1.0;
    localB->PDischarge = 30.0;
  } else {
    switch (localDW->is_c12_SteeringWheel) {
     case SteeringWheel_IN_Map10:
      if ((localDW->temporalCounter_i1_ap >= 500) &&
          localB->BSteeringWheelButto_mjtbwwh3kp5) {
        localDW->temporalCounter_i1_ap = 0U;
        localDW->is_c12_SteeringWheel = SteeringWheel_IN_Map9;
        localB->NThrottleMap = 4.0;
        localB->PDischarge = 40.0;
      } else if ((localDW->temporalCounter_i1_ap >= 500) &&
                 localB->BSteeringWheelButto_olxto1zi0th) {
        localDW->temporalCounter_i1_ap = 0U;
        localDW->is_c12_SteeringWheel = SteeringWheel_IN_Map13;
        localB->NThrottleMap = 6.0;
        localB->PDischarge = 58.0;
      } else {
        localB->NThrottleMap = 5.0;
        localB->PDischarge = 77.0;
      }
      break;

     case SteeringWheel_IN_Map12:
      if ((localDW->temporalCounter_i1_ap >= 500) &&
          localB->BSteeringWheelButto_mjtbwwh3kp5) {
        localDW->temporalCounter_i1_ap = 0U;
        localDW->is_c12_SteeringWheel = SteeringWheel_IN_Map13;
        localB->NThrottleMap = 6.0;
        localB->PDischarge = 58.0;
      } else if ((localDW->temporalCounter_i1_ap >= 500) &&
                 localB->BSteeringWheelButto_olxto1zi0th) {
        localDW->temporalCounter_i1_ap = 0U;
        localDW->is_c12_SteeringWheel = SteeringWheel_IN_Map7;
        localB->NThrottleMap = 2.0;
        localB->PDischarge = 45.0;
      }
      break;

     case SteeringWheel_IN_Map13:
      if ((localDW->temporalCounter_i1_ap >= 500) &&
          localB->BSteeringWheelButto_mjtbwwh3kp5) {
        localDW->temporalCounter_i1_ap = 0U;
        localDW->is_c12_SteeringWheel = SteeringWheel_IN_Map10;
        localB->NThrottleMap = 5.0;
        localB->PDischarge = 77.0;
      } else if ((localDW->temporalCounter_i1_ap >= 500) &&
                 localB->BSteeringWheelButto_olxto1zi0th) {
        localDW->temporalCounter_i1_ap = 0U;
        localDW->is_c12_SteeringWheel = SteeringWheel_IN_Map12;
        localB->NThrottleMap = 1.0;
        localB->PDischarge = 30.0;
      } else {
        localB->NThrottleMap = 6.0;
        localB->PDischarge = 58.0;
      }
      break;

     case SteeringWheel_IN_Map7:
      if ((localDW->temporalCounter_i1_ap >= 500) &&
          localB->BSteeringWheelButto_mjtbwwh3kp5) {
        localDW->temporalCounter_i1_ap = 0U;
        localDW->is_c12_SteeringWheel = SteeringWheel_IN_Map12;
        localB->NThrottleMap = 1.0;
        localB->PDischarge = 30.0;
      } else if ((localDW->temporalCounter_i1_ap >= 500) &&
                 localB->BSteeringWheelButto_olxto1zi0th) {
        localDW->temporalCounter_i1_ap = 0U;
        localDW->is_c12_SteeringWheel = SteeringWheel_IN_Map8;
        localB->NThrottleMap = 3.0;
        localB->PDischarge = 77.0;
      } else {
        localB->NThrottleMap = 2.0;
        localB->PDischarge = 45.0;
      }
      break;

     case SteeringWheel_IN_Map8:
      if ((localDW->temporalCounter_i1_ap >= 500) &&
          localB->BSteeringWheelButto_mjtbwwh3kp5) {
        localDW->temporalCounter_i1_ap = 0U;
        localDW->is_c12_SteeringWheel = SteeringWheel_IN_Map7;
        localB->NThrottleMap = 2.0;
        localB->PDischarge = 45.0;
      } else if ((localDW->temporalCounter_i1_ap >= 500) &&
                 localB->BSteeringWheelButto_olxto1zi0th) {
        localDW->temporalCounter_i1_ap = 0U;
        localDW->is_c12_SteeringWheel = SteeringWheel_IN_Map9;
        localB->NThrottleMap = 4.0;
        localB->PDischarge = 40.0;
      } else {
        localB->NThrottleMap = 3.0;
        localB->PDischarge = 77.0;
      }
      break;

     default:
      /* case IN_Map9: */
      if ((localDW->temporalCounter_i1_ap >= 500) &&
          localB->BSteeringWheelButto_mjtbwwh3kp5) {
        localDW->temporalCounter_i1_ap = 0U;
        localDW->is_c12_SteeringWheel = SteeringWheel_IN_Map8;
        localB->NThrottleMap = 3.0;
        localB->PDischarge = 77.0;
      } else if ((localDW->temporalCounter_i1_ap >= 500) &&
                 localB->BSteeringWheelButto_olxto1zi0th) {
        localDW->temporalCounter_i1_ap = 0U;
        localDW->is_c12_SteeringWheel = SteeringWheel_IN_Map10;
        localB->NThrottleMap = 5.0;
        localB->PDischarge = 77.0;
      } else {
        localB->NThrottleMap = 4.0;
        localB->PDischarge = 40.0;
      }
      break;
    }
  }

  /* End of Chart: '<S3>/NThrottleMap System' */

  /* DataTypeConversion: '<S3>/Data Type Conversion4' */
  *rty_PDischarge = localB->PDischarge;

  /* DataTypeConversion: '<S3>/Data Type Conversion6' */
  *rty_NThrottleMap = localB->NThrottleMap;

  /* Chart: '<S5>/NModeNumberDisplay6 System' */
  localDW->sfEvent = -1;
  if (localDW->temporalCounter_i1 < 511) {
    localDW->temporalCounter_i1++;
  }

  if (localDW->is_active_c14_SteeringWheel == 0) {
    localDW->is_active_c14_SteeringWheel = 1U;
    localDW->temporalCounter_i1 = 0U;
    localDW->is_c14_SteeringWheel = SteeringWheel_IN_Mode12;
    localB->NModeNumberDisplay6 = 1.0;
  } else {
    switch (localDW->is_c14_SteeringWheel) {
     case SteeringWheel_IN_Mode10:
      if ((localDW->temporalCounter_i1 >= 500) && localB->BSteeringWheelButton6)
      {
        localDW->temporalCounter_i1 = 0U;
        localDW->is_c14_SteeringWheel = SteeringWheel_IN_Reset5;
      } else if ((localDW->temporalCounter_i1 >= 500) &&
                 localB->BSteeringWheelButton4) {
        localDW->temporalCounter_i1 = 0U;
        localDW->is_c14_SteeringWheel = SteeringWheel_IN_Reset10;
      } else {
        localB->NModeNumberDisplay6 = 6.0;
      }
      break;

     case SteeringWheel_IN_Mode11:
      if ((localDW->temporalCounter_i1 >= 500) && localB->BSteeringWheelButton4)
      {
        localDW->temporalCounter_i1 = 0U;
        localDW->is_c14_SteeringWheel = SteeringWheel_IN_Reset3;
      } else if ((localDW->temporalCounter_i1 >= 500) &&
                 localB->BSteeringWheelButton6) {
        localDW->temporalCounter_i1 = 0U;
        localDW->is_c14_SteeringWheel = SteeringWheel_IN_Reset7;
      } else {
        localB->NModeNumberDisplay6 = 4.0;
      }
      break;

     case SteeringWheel_IN_Mode12:
      if ((localDW->temporalCounter_i1 >= 500) && localB->BSteeringWheelButton4)
      {
        localDW->temporalCounter_i1 = 0U;
        localDW->is_c14_SteeringWheel = SteeringWheel_IN_Reset;
      } else if ((localDW->temporalCounter_i1 >= 500) &&
                 localB->BSteeringWheelButton6) {
        localDW->temporalCounter_i1 = 0U;
        localDW->is_c14_SteeringWheel = SteeringWheel_IN_Reset11;
      }
      break;

     case SteeringWheel_IN_Mode7:
      if ((localDW->temporalCounter_i1 >= 500) && localB->BSteeringWheelButton6)
      {
        localDW->temporalCounter_i1 = 0U;
        localDW->is_c14_SteeringWheel = SteeringWheel_IN_Reset9;
      } else if ((localDW->temporalCounter_i1 >= 500) &&
                 localB->BSteeringWheelButton4) {
        localDW->temporalCounter_i1 = 0U;
        localDW->is_c14_SteeringWheel = SteeringWheel_IN_Reset1;
      } else {
        localB->NModeNumberDisplay6 = 2.0;
      }
      break;

     case SteeringWheel_IN_Mode8:
      SteeringWheel_Mode8_p(localB, localDW);
      break;

     case SteeringWheel_IN_Mode9:
      SteeringWheel_Mode9_k(localB, localDW);
      break;

     case SteeringWheel_IN_Reset:
      if (localDW->temporalCounter_i1 >= 50) {
        localDW->temporalCounter_i1 = 0U;
        localDW->is_c14_SteeringWheel = SteeringWheel_IN_Mode7;
        localB->NModeNumberDisplay6 = 2.0;
      }
      break;

     case SteeringWheel_IN_Reset1:
      if (localDW->temporalCounter_i1 >= 50) {
        localDW->temporalCounter_i1 = 0U;
        localDW->is_c14_SteeringWheel = SteeringWheel_IN_Mode8;
        localB->NModeNumberDisplay6 = 3.0;
      }
      break;

     case SteeringWheel_IN_Reset10:
      if (localDW->temporalCounter_i1 >= 50) {
        localDW->temporalCounter_i1 = 0U;
        localDW->is_c14_SteeringWheel = SteeringWheel_IN_Mode12;
        localB->NModeNumberDisplay6 = 1.0;
      }
      break;

     case SteeringWheel_IN_Reset11:
      if (localDW->temporalCounter_i1 >= 50) {
        localDW->temporalCounter_i1 = 0U;
        localDW->is_c14_SteeringWheel = SteeringWheel_IN_Mode10;
        localB->NModeNumberDisplay6 = 6.0;
      }
      break;

     case SteeringWheel_IN_Reset2:
      if (localDW->temporalCounter_i1 >= 50) {
        localDW->temporalCounter_i1 = 0U;
        localDW->is_c14_SteeringWheel = SteeringWheel_IN_Mode11;
        localB->NModeNumberDisplay6 = 4.0;
      }
      break;

     case SteeringWheel_IN_Reset3:
      if (localDW->temporalCounter_i1 >= 50) {
        localDW->temporalCounter_i1 = 0U;
        localDW->is_c14_SteeringWheel = SteeringWheel_IN_Mode9;
        localB->NModeNumberDisplay6 = 5.0;
      }
      break;

     case SteeringWheel_IN_Reset4:
      if (localDW->temporalCounter_i1 >= 50) {
        localDW->temporalCounter_i1 = 0U;
        localDW->is_c14_SteeringWheel = SteeringWheel_IN_Mode10;
        localB->NModeNumberDisplay6 = 6.0;
      }
      break;

     case SteeringWheel_IN_Reset5:
      if (localDW->temporalCounter_i1 >= 50) {
        localDW->temporalCounter_i1 = 0U;
        localDW->is_c14_SteeringWheel = SteeringWheel_IN_Mode9;
        localB->NModeNumberDisplay6 = 5.0;
      }
      break;

     case SteeringWheel_IN_Reset6:
      if (localDW->temporalCounter_i1 >= 50) {
        localDW->temporalCounter_i1 = 0U;
        localDW->is_c14_SteeringWheel = SteeringWheel_IN_Mode11;
        localB->NModeNumberDisplay6 = 4.0;
      }
      break;

     case SteeringWheel_IN_Reset7:
      if (localDW->temporalCounter_i1 >= 50) {
        localDW->temporalCounter_i1 = 0U;
        localDW->is_c14_SteeringWheel = SteeringWheel_IN_Mode8;
        localB->NModeNumberDisplay6 = 3.0;
      }
      break;

     case SteeringWheel_IN_Reset8:
      if (localDW->temporalCounter_i1 >= 50) {
        localDW->temporalCounter_i1 = 0U;
        localDW->is_c14_SteeringWheel = SteeringWheel_IN_Mode7;
        localB->NModeNumberDisplay6 = 2.0;
      }
      break;

     default:
      /* case IN_Reset9: */
      if (localDW->temporalCounter_i1 >= 50) {
        localDW->temporalCounter_i1 = 0U;
        localDW->is_c14_SteeringWheel = SteeringWheel_IN_Mode12;
        localB->NModeNumberDisplay6 = 1.0;
      }
      break;
    }
  }

  /* End of Chart: '<S5>/NModeNumberDisplay6 System' */

  /* DataTypeConversion: '<S5>/Data Type Conversion' */
  *rty_NModeNumberDisplay6 = localB->NModeNumberDisplay6;

  /* If: '<S4>/If' */
  if ((*rty_NModeNumberDisplay6 == 1.0) && (*rtu_NDisplayNumberDDU7 == 6.0)) {
    /* Outputs for IfAction SubSystem: '<S4>/If Action Subsystem10' incorporates:
     *  ActionPort: '<S22>/Action Port'
     */
    SteeringWheel_IfActionSubsystem(rtu_BSteeringWheelButton2,
      rtu_BSteeringWheelButton5, &localB->BSteeringWheelButton2_olxto,
      &localB->BSteeringWheelButton5_mjtbw);

    /* End of Outputs for SubSystem: '<S4>/If Action Subsystem10' */
  } else if ((*rty_NModeNumberDisplay6 == 2.0) && (*rtu_NDisplayNumberDDU7 ==
              6.0)) {
    /* Outputs for IfAction SubSystem: '<S4>/If Action Subsystem11' incorporates:
     *  ActionPort: '<S23>/Action Port'
     */
    SteeringWheel_IfActionSubsystem(rtu_BSteeringWheelButton2,
      rtu_BSteeringWheelButton5, &localB->BSteeringWheelButton2_olxt,
      &localB->BSteeringWheelButton5_mjtb);

    /* End of Outputs for SubSystem: '<S4>/If Action Subsystem11' */
  } else if ((*rty_NModeNumberDisplay6 == 3.0) && (*rtu_NDisplayNumberDDU7 ==
              6.0)) {
    /* Outputs for IfAction SubSystem: '<S4>/If Action Subsystem12' incorporates:
     *  ActionPort: '<S24>/Action Port'
     */
    SteeringWheel_IfActionSubsystem(rtu_BSteeringWheelButton2,
      rtu_BSteeringWheelButton5, &localB->BSteeringWheelButton2_olx,
      &localB->BSteeringWheelButton5_mjt);

    /* End of Outputs for SubSystem: '<S4>/If Action Subsystem12' */
  } else if ((*rty_NModeNumberDisplay6 == 4.0) && (*rtu_NDisplayNumberDDU7 ==
              6.0)) {
    /* Outputs for IfAction SubSystem: '<S4>/If Action Subsystem13' incorporates:
     *  ActionPort: '<S25>/Action Port'
     */
    SteeringWheel_IfActionSubsystem(rtu_BSteeringWheelButton2,
      rtu_BSteeringWheelButton5, &localB->BSteeringWheelButton2_ol,
      &localB->BSteeringWheelButton5_mj);

    /* End of Outputs for SubSystem: '<S4>/If Action Subsystem13' */
  } else if ((*rty_NModeNumberDisplay6 == 5.0) && (*rtu_NDisplayNumberDDU7 ==
              6.0)) {
    /* Outputs for IfAction SubSystem: '<S4>/If Action Subsystem14' incorporates:
     *  ActionPort: '<S26>/Action Port'
     */
    SteeringWheel_IfActionSubsystem(rtu_BSteeringWheelButton2,
      rtu_BSteeringWheelButton5, &localB->BSteeringWheelButton2_o,
      &localB->BSteeringWheelButton5_m);

    /* End of Outputs for SubSystem: '<S4>/If Action Subsystem14' */
  } else if ((*rty_NModeNumberDisplay6 == 6.0) && (*rtu_NDisplayNumberDDU7 ==
              6.0)) {
    /* Outputs for IfAction SubSystem: '<S4>/If Action Subsystem15' incorporates:
     *  ActionPort: '<S27>/Action Port'
     */
    SteeringWheel_IfActionSubsystem(rtu_BSteeringWheelButton2,
      rtu_BSteeringWheelButton5, &localB->BSteeringWheelButton2,
      &localB->BSteeringWheelButton5);

    /* End of Outputs for SubSystem: '<S4>/If Action Subsystem15' */
  }

  /* End of If: '<S4>/If' */

  /* Chart: '<S4>/BAccumulatorFanOn System' */
  if (localDW->temporalCounter_i1_aa < 511) {
    localDW->temporalCounter_i1_aa++;
  }

  if (localDW->is_active_c15_SteeringWheel == 0) {
    localDW->is_active_c15_SteeringWheel = 1U;
    localDW->temporalCounter_i1_aa = 0U;
    localDW->is_c15_SteeringWheel = SteeringWheel_IN_Map13_c;
    localB->BAccumulatorFanOn = 0.0;
  } else if (localDW->is_c15_SteeringWheel == SteeringWheel_IN_Map13_c) {
    if (((localDW->temporalCounter_i1_aa >= 500) &&
         localB->BSteeringWheelButton5) || ((localDW->temporalCounter_i1_aa >=
          500) && localB->BSteeringWheelButton2)) {
      localDW->temporalCounter_i1_aa = 0U;
      localDW->is_c15_SteeringWheel = SteeringWheel_IN_Map14;
      localB->BAccumulatorFanOn = 1.0;
    }

    /* case IN_Map14: */
  } else if (((localDW->temporalCounter_i1_aa >= 500) &&
              localB->BSteeringWheelButton2) || ((localDW->temporalCounter_i1_aa
    >= 500) && localB->BSteeringWheelButton5)) {
    localDW->temporalCounter_i1_aa = 0U;
    localDW->is_c15_SteeringWheel = SteeringWheel_IN_Map13_c;
    localB->BAccumulatorFanOn = 0.0;
  } else {
    localB->BAccumulatorFanOn = 1.0;
  }

  /* End of Chart: '<S4>/BAccumulatorFanOn System' */

  /* DataTypeConversion: '<S4>/Data Type Conversion2' */
  *rty_BAccumulatorFanOn = (localB->BAccumulatorFanOn != 0.0);

  /* Chart: '<S4>/BTractionControlActivated System' */
  if (localDW->temporalCounter_i1_o < 511) {
    localDW->temporalCounter_i1_o++;
  }

  if (localDW->is_active_c19_SteeringWheel == 0) {
    localDW->is_active_c19_SteeringWheel = 1U;
    localDW->temporalCounter_i1_o = 0U;
    localDW->is_c19_SteeringWheel = SteeringWheel_IN_Map11;
    localB->BTractionControlActivated = 0.0;
  } else if (localDW->is_c19_SteeringWheel == SteeringWheel_IN_Map11) {
    if (((localDW->temporalCounter_i1_o >= 500) &&
         localB->BSteeringWheelButton2_olxt) || ((localDW->temporalCounter_i1_o >=
          500) && localB->BSteeringWheelButton5_mjtb)) {
      localDW->temporalCounter_i1_o = 0U;
      localDW->is_c19_SteeringWheel = SteeringWheel_IN_Map12;
      localB->BTractionControlActivated = 1.0;
    } else {
      localB->BTractionControlActivated = 0.0;
    }

    /* case IN_Map12: */
  } else if (((localDW->temporalCounter_i1_o >= 500) &&
              localB->BSteeringWheelButton5_mjtb) ||
             ((localDW->temporalCounter_i1_o >= 500) &&
              localB->BSteeringWheelButton2_olxt)) {
    localDW->temporalCounter_i1_o = 0U;
    localDW->is_c19_SteeringWheel = SteeringWheel_IN_Map11;
    localB->BTractionControlActivated = 0.0;
  }

  /* End of Chart: '<S4>/BTractionControlActivated System' */

  /* DataTypeConversion: '<S4>/Data Type Conversion1' */
  *rty_BTractionControlActivated = (localB->BTractionControlActivated != 0.0);

  /* Chart: '<S4>/NTorqueSplitSpeedSelector System' */
  if (localDW->temporalCounter_i1_k < 511) {
    localDW->temporalCounter_i1_k++;
  }

  if (localDW->is_active_c17_SteeringWheel == 0) {
    localDW->is_active_c17_SteeringWheel = 1U;
    localDW->temporalCounter_i1_k = 0U;
    localDW->is_c17_SteeringWheel = SteeringWheel_IN_Map11;
    localB->NTorqueSplitSpeedSelector = 2.0;
  } else if (localDW->is_c17_SteeringWheel == SteeringWheel_IN_Map11) {
    if (((localDW->temporalCounter_i1_k >= 500) &&
         localB->BSteeringWheelButton2_o) || ((localDW->temporalCounter_i1_k >=
          500) && localB->BSteeringWheelButton5_m)) {
      localDW->temporalCounter_i1_k = 0U;
      localDW->is_c17_SteeringWheel = SteeringWheel_IN_Map12;
      localB->NTorqueSplitSpeedSelector = 1.0;
    } else {
      localB->NTorqueSplitSpeedSelector = 2.0;
    }

    /* case IN_Map12: */
  } else if (((localDW->temporalCounter_i1_k >= 500) &&
              localB->BSteeringWheelButton5_m) ||
             ((localDW->temporalCounter_i1_k >= 500) &&
              localB->BSteeringWheelButton2_o)) {
    localDW->temporalCounter_i1_k = 0U;
    localDW->is_c17_SteeringWheel = SteeringWheel_IN_Map11;
    localB->NTorqueSplitSpeedSelector = 2.0;
  }

  /* End of Chart: '<S4>/NTorqueSplitSpeedSelector System' */

  /* DataTypeConversion: '<S4>/Data Type Conversion3' */
  *rty_NTorqueSplitSpeedSelector = localB->NTorqueSplitSpeedSelector;

  /* Chart: '<S4>/NPowerControllerKpSelector System' */
  if (localDW->temporalCounter_i1_l < 511) {
    localDW->temporalCounter_i1_l++;
  }

  if (localDW->is_active_c18_SteeringWheel == 0) {
    localDW->is_active_c18_SteeringWheel = 1U;
    localDW->temporalCounter_i1_l = 0U;
    localDW->is_c18_SteeringWheel = SteeringWheel_IN_Map8;
    localB->NPowerControllerKpSelector = 3.0;
  } else {
    switch (localDW->is_c18_SteeringWheel) {
     case SteeringWheel_IN_Map10:
      if ((localDW->temporalCounter_i1_l >= 500) &&
          localB->BSteeringWheelButton5_mj) {
        localDW->temporalCounter_i1_l = 0U;
        localDW->is_c18_SteeringWheel = SteeringWheel_IN_Map9;
        localB->NPowerControllerKpSelector = 4.0;
      } else if ((localDW->temporalCounter_i1_l >= 500) &&
                 localB->BSteeringWheelButton2_ol) {
        localDW->temporalCounter_i1_l = 0U;
        localDW->is_c18_SteeringWheel = SteeringWheel_IN_Map11_p;
        localB->NPowerControllerKpSelector = 6.0;
      } else {
        localB->NPowerControllerKpSelector = 5.0;
      }
      break;

     case SteeringWheel_IN_Map11_p:
      if ((localDW->temporalCounter_i1_l >= 500) &&
          localB->BSteeringWheelButton5_mj) {
        localDW->temporalCounter_i1_l = 0U;
        localDW->is_c18_SteeringWheel = SteeringWheel_IN_Map10;
        localB->NPowerControllerKpSelector = 5.0;
      } else if ((localDW->temporalCounter_i1_l >= 500) &&
                 localB->BSteeringWheelButton2_ol) {
        localDW->temporalCounter_i1_l = 0U;
        localDW->is_c18_SteeringWheel = SteeringWheel_IN_Map12_i;
        localB->NPowerControllerKpSelector = 1.0;
      } else {
        localB->NPowerControllerKpSelector = 6.0;
      }
      break;

     case SteeringWheel_IN_Map12_i:
      if ((localDW->temporalCounter_i1_l >= 500) &&
          localB->BSteeringWheelButton2_ol) {
        localDW->temporalCounter_i1_l = 0U;
        localDW->is_c18_SteeringWheel = SteeringWheel_IN_Map7;
        localB->NPowerControllerKpSelector = 2.0;
      } else if ((localDW->temporalCounter_i1_l >= 500) &&
                 localB->BSteeringWheelButton5_mj) {
        localDW->temporalCounter_i1_l = 0U;
        localDW->is_c18_SteeringWheel = SteeringWheel_IN_Map11_p;
        localB->NPowerControllerKpSelector = 6.0;
      }
      break;

     case SteeringWheel_IN_Map7:
      if ((localDW->temporalCounter_i1_l >= 500) &&
          localB->BSteeringWheelButton5_mj) {
        localDW->temporalCounter_i1_l = 0U;
        localDW->is_c18_SteeringWheel = SteeringWheel_IN_Map12_i;
        localB->NPowerControllerKpSelector = 1.0;
      } else if ((localDW->temporalCounter_i1_l >= 500) &&
                 localB->BSteeringWheelButton2_ol) {
        localDW->temporalCounter_i1_l = 0U;
        localDW->is_c18_SteeringWheel = SteeringWheel_IN_Map8;
        localB->NPowerControllerKpSelector = 3.0;
      } else {
        localB->NPowerControllerKpSelector = 2.0;
      }
      break;

     case SteeringWheel_IN_Map8:
      if ((localDW->temporalCounter_i1_l >= 500) &&
          localB->BSteeringWheelButton5_mj) {
        localDW->temporalCounter_i1_l = 0U;
        localDW->is_c18_SteeringWheel = SteeringWheel_IN_Map7;
        localB->NPowerControllerKpSelector = 2.0;
      } else if ((localDW->temporalCounter_i1_l >= 500) &&
                 localB->BSteeringWheelButton2_ol) {
        localDW->temporalCounter_i1_l = 0U;
        localDW->is_c18_SteeringWheel = SteeringWheel_IN_Map9;
        localB->NPowerControllerKpSelector = 4.0;
      } else {
        localB->NPowerControllerKpSelector = 3.0;
      }
      break;

     default:
      /* case IN_Map9: */
      if ((localDW->temporalCounter_i1_l >= 500) &&
          localB->BSteeringWheelButton5_mj) {
        localDW->temporalCounter_i1_l = 0U;
        localDW->is_c18_SteeringWheel = SteeringWheel_IN_Map8;
        localB->NPowerControllerKpSelector = 3.0;
      } else if ((localDW->temporalCounter_i1_l >= 500) &&
                 localB->BSteeringWheelButton2_ol) {
        localDW->temporalCounter_i1_l = 0U;
        localDW->is_c18_SteeringWheel = SteeringWheel_IN_Map10;
        localB->NPowerControllerKpSelector = 5.0;
      } else {
        localB->NPowerControllerKpSelector = 4.0;
      }
      break;
    }
  }

  /* End of Chart: '<S4>/NPowerControllerKpSelector System' */

  /* DataTypeConversion: '<S4>/Data Type Conversion4' */
  *rty_NPowerControllerKpSelector = localB->NPowerControllerKpSelector;

  /* Chart: '<S4>/rTorqueVectoringMultiplier System' */
  if (localDW->temporalCounter_i1_p < 511) {
    localDW->temporalCounter_i1_p++;
  }

  if (localDW->is_active_c16_SteeringWheel == 0) {
    localDW->is_active_c16_SteeringWheel = 1U;
    localDW->temporalCounter_i1_p = 0U;
    localDW->is_c16_SteeringWheel = SteeringWheel_IN_Map8;
    localB->rTorqueVectoringMultiplier = 0.5;
  } else {
    switch (localDW->is_c16_SteeringWheel) {
     case SteeringWheel_IN_Map10:
      if ((localDW->temporalCounter_i1_p >= 500) &&
          localB->BSteeringWheelButton5_mjt) {
        localDW->temporalCounter_i1_p = 0U;
        localDW->is_c16_SteeringWheel = SteeringWheel_IN_Map9;
        localB->rTorqueVectoringMultiplier = 0.7;
      } else if ((localDW->temporalCounter_i1_p >= 500) &&
                 localB->BSteeringWheelButton2_olx) {
        localDW->temporalCounter_i1_p = 0U;
        localDW->is_c16_SteeringWheel = SteeringWheel_IN_Map11_p;
        localB->rTorqueVectoringMultiplier = 1.0;
      } else {
        localB->rTorqueVectoringMultiplier = 0.85;
      }
      break;

     case SteeringWheel_IN_Map11_p:
      if ((localDW->temporalCounter_i1_p >= 500) &&
          localB->BSteeringWheelButton5_mjt) {
        localDW->temporalCounter_i1_p = 0U;
        localDW->is_c16_SteeringWheel = SteeringWheel_IN_Map10;
        localB->rTorqueVectoringMultiplier = 0.85;
      } else if ((localDW->temporalCounter_i1_p >= 500) &&
                 localB->BSteeringWheelButton2_olx) {
        localDW->temporalCounter_i1_p = 0U;
        localDW->is_c16_SteeringWheel = SteeringWheel_IN_Map12_i;
        localB->rTorqueVectoringMultiplier = 0.1;
      } else {
        localB->rTorqueVectoringMultiplier = 1.0;
      }
      break;

     case SteeringWheel_IN_Map12_i:
      if ((localDW->temporalCounter_i1_p >= 500) &&
          localB->BSteeringWheelButton2_olx) {
        localDW->temporalCounter_i1_p = 0U;
        localDW->is_c16_SteeringWheel = SteeringWheel_IN_Map7;
        localB->rTorqueVectoringMultiplier = 0.3;
      } else if ((localDW->temporalCounter_i1_p >= 500) &&
                 localB->BSteeringWheelButton5_mjt) {
        localDW->temporalCounter_i1_p = 0U;
        localDW->is_c16_SteeringWheel = SteeringWheel_IN_Map11_p;
        localB->rTorqueVectoringMultiplier = 1.0;
      }
      break;

     case SteeringWheel_IN_Map7:
      if ((localDW->temporalCounter_i1_p >= 500) &&
          localB->BSteeringWheelButton5_mjt) {
        localDW->temporalCounter_i1_p = 0U;
        localDW->is_c16_SteeringWheel = SteeringWheel_IN_Map12_i;
        localB->rTorqueVectoringMultiplier = 0.1;
      } else if ((localDW->temporalCounter_i1_p >= 500) &&
                 localB->BSteeringWheelButton2_olx) {
        localDW->temporalCounter_i1_p = 0U;
        localDW->is_c16_SteeringWheel = SteeringWheel_IN_Map8;
        localB->rTorqueVectoringMultiplier = 0.5;
      } else {
        localB->rTorqueVectoringMultiplier = 0.3;
      }
      break;

     case SteeringWheel_IN_Map8:
      if ((localDW->temporalCounter_i1_p >= 500) &&
          localB->BSteeringWheelButton5_mjt) {
        localDW->temporalCounter_i1_p = 0U;
        localDW->is_c16_SteeringWheel = SteeringWheel_IN_Map7;
        localB->rTorqueVectoringMultiplier = 0.3;
      } else if ((localDW->temporalCounter_i1_p >= 500) &&
                 localB->BSteeringWheelButton2_olx) {
        localDW->temporalCounter_i1_p = 0U;
        localDW->is_c16_SteeringWheel = SteeringWheel_IN_Map9;
        localB->rTorqueVectoringMultiplier = 0.7;
      } else {
        localB->rTorqueVectoringMultiplier = 0.5;
      }
      break;

     default:
      /* case IN_Map9: */
      if ((localDW->temporalCounter_i1_p >= 500) &&
          localB->BSteeringWheelButton5_mjt) {
        localDW->temporalCounter_i1_p = 0U;
        localDW->is_c16_SteeringWheel = SteeringWheel_IN_Map8;
        localB->rTorqueVectoringMultiplier = 0.5;
      } else if ((localDW->temporalCounter_i1_p >= 500) &&
                 localB->BSteeringWheelButton2_olx) {
        localDW->temporalCounter_i1_p = 0U;
        localDW->is_c16_SteeringWheel = SteeringWheel_IN_Map10;
        localB->rTorqueVectoringMultiplier = 0.85;
      } else {
        localB->rTorqueVectoringMultiplier = 0.7;
      }
      break;
    }
  }

  /* End of Chart: '<S4>/rTorqueVectoringMultiplier System' */

  /* DataTypeConversion: '<S4>/Data Type Conversion5' */
  *rty_rTorqueVectoringMultiplier = localB->rTorqueVectoringMultiplier;

  /* Chart: '<S4>/NTractionControlKpSelector System' */
  if (localDW->temporalCounter_i1_h < 511) {
    localDW->temporalCounter_i1_h++;
  }

  if (localDW->is_active_c21_SteeringWheel == 0) {
    localDW->is_active_c21_SteeringWheel = 1U;
    localDW->temporalCounter_i1_h = 0U;
    localDW->is_c21_SteeringWheel = SteeringWheel_IN_Map7_d;
    localB->NTractionControlKpSelector = 2.0;
  } else {
    switch (localDW->is_c21_SteeringWheel) {
     case SteeringWheel_IN_Map12_j:
      if ((localDW->temporalCounter_i1_h >= 500) &&
          localB->BSteeringWheelButton5_mjtbw) {
        localDW->temporalCounter_i1_h = 0U;
        localDW->is_c21_SteeringWheel = SteeringWheel_IN_Map13_b;
        localB->NTractionControlKpSelector = 4.0;
      } else if ((localDW->temporalCounter_i1_h >= 500) &&
                 localB->BSteeringWheelButton2_olxto) {
        localDW->temporalCounter_i1_h = 0U;
        localDW->is_c21_SteeringWheel = SteeringWheel_IN_Map7_d;
        localB->NTractionControlKpSelector = 2.0;
      }
      break;

     case SteeringWheel_IN_Map13_b:
      if ((localDW->temporalCounter_i1_h >= 500) &&
          localB->BSteeringWheelButton2_olxto) {
        localDW->temporalCounter_i1_h = 0U;
        localDW->is_c21_SteeringWheel = SteeringWheel_IN_Map12_j;
        localB->NTractionControlKpSelector = 1.0;
      } else if ((localDW->temporalCounter_i1_h >= 500) &&
                 localB->BSteeringWheelButton5_mjtbw) {
        localDW->temporalCounter_i1_h = 0U;
        localDW->is_c21_SteeringWheel = SteeringWheel_IN_Map8_k;
        localB->NTractionControlKpSelector = 3.0;
      } else {
        localB->NTractionControlKpSelector = 4.0;
      }
      break;

     case SteeringWheel_IN_Map7_d:
      if ((localDW->temporalCounter_i1_h >= 500) &&
          localB->BSteeringWheelButton5_mjtbw) {
        localDW->temporalCounter_i1_h = 0U;
        localDW->is_c21_SteeringWheel = SteeringWheel_IN_Map12_j;
        localB->NTractionControlKpSelector = 1.0;
      } else if ((localDW->temporalCounter_i1_h >= 500) &&
                 localB->BSteeringWheelButton2_olxto) {
        localDW->temporalCounter_i1_h = 0U;
        localDW->is_c21_SteeringWheel = SteeringWheel_IN_Map8_k;
        localB->NTractionControlKpSelector = 3.0;
      } else {
        localB->NTractionControlKpSelector = 2.0;
      }
      break;

     default:
      /* case IN_Map8: */
      if ((localDW->temporalCounter_i1_h >= 500) &&
          localB->BSteeringWheelButton5_mjtbw) {
        localDW->temporalCounter_i1_h = 0U;
        localDW->is_c21_SteeringWheel = SteeringWheel_IN_Map7_d;
        localB->NTractionControlKpSelector = 2.0;
      } else if ((localDW->temporalCounter_i1_h >= 500) &&
                 localB->BSteeringWheelButton2_olxto) {
        localDW->temporalCounter_i1_h = 0U;
        localDW->is_c21_SteeringWheel = SteeringWheel_IN_Map13_b;
        localB->NTractionControlKpSelector = 4.0;
      } else {
        localB->NTractionControlKpSelector = 3.0;
      }
      break;
    }
  }

  /* End of Chart: '<S4>/NTractionControlKpSelector System' */

  /* DataTypeConversion: '<S4>/Data Type Conversion6' */
  *rty_NTractionControlKpSelector = localB->NTractionControlKpSelector;

  /* If: '<S2>/If1' */
  if (*rtu_NDisplayNumberDDU7 == 3.0) {
    /* Outputs for IfAction SubSystem: '<S2>/If Action Subsystem3' incorporates:
     *  ActionPort: '<S7>/Action Port'
     */
    /* SignalConversion generated from: '<S7>/BSteeringWheelButton2 ' */
    localB->BSteeringWheelButton2_b = *rtu_BSteeringWheelButton2;

    /* SignalConversion generated from: '<S7>/BSteeringWheelButton5 ' */
    localB->BSteeringWheelButton5_j = *rtu_BSteeringWheelButton5;

    /* End of Outputs for SubSystem: '<S2>/If Action Subsystem3' */
  }

  /* End of If: '<S2>/If1' */

  /* Chart: '<S2>/BTorqueVectoringActivated Syatem' */
  if (localDW->temporalCounter_i1_kb < 511) {
    localDW->temporalCounter_i1_kb++;
  }

  if (localDW->is_active_c32_SteeringWheel == 0) {
    localDW->is_active_c32_SteeringWheel = 1U;
    localDW->temporalCounter_i1_kb = 0U;
    localDW->is_c32_SteeringWheel = SteeringWheel_IN_Map11;
    localB->BTorqueVectoringActivated = 0.0;
  } else if (localDW->is_c32_SteeringWheel == SteeringWheel_IN_Map11) {
    if ((localDW->temporalCounter_i1_kb >= 500) &&
        localB->BSteeringWheelButton2_b) {
      localDW->temporalCounter_i1_kb = 0U;
      localDW->is_c32_SteeringWheel = SteeringWheel_IN_Map12;
      localB->BTorqueVectoringActivated = 1.0;
    } else {
      localB->BTorqueVectoringActivated = 0.0;
    }

    /* case IN_Map12: */
  } else if ((localDW->temporalCounter_i1_kb >= 500) &&
             localB->BSteeringWheelButton5_j) {
    localDW->temporalCounter_i1_kb = 0U;
    localDW->is_c32_SteeringWheel = SteeringWheel_IN_Map11;
    localB->BTorqueVectoringActivated = 0.0;
  }

  /* End of Chart: '<S2>/BTorqueVectoringActivated Syatem' */

  /* DataTypeConversion: '<S2>/Data Type Conversion5' */
  *rty_BTorqueVectoringActivated = (localB->BTorqueVectoringActivated != 0.0);

  /* SignalConversion generated from: '<Root>/BSteeringWheelButton7' */
  *rty_BErrorReset = *rtu_BSteeringWheelButton7;
}

/* Model initialize function */
void SteeringWheel_initialize(const char_T **rt_errorStatus,
  RT_MODEL_SteeringWheel_T *const SteeringWheel_M)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(SteeringWheel_M, rt_errorStatus);

  /* user code (Initialize function Body) */
  LL_TIM_EnableCounter(TIM2);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
