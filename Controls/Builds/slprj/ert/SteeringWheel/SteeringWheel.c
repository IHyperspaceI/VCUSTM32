/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: SteeringWheel.c
 *
 * Code generated for Simulink model 'SteeringWheel'.
 *
 * Model version                  : 13.3
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Tue Sep  8 11:41:24 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "SteeringWheel.h"
#include "rtwtypes.h"
#include "SteeringWheel_private.h"

/* Named constants for Chart: '<Root>/NEventModeRotary System' */
#define SteeringWheel_CALL_EVENT       (-1)
#define SteeringWheel_IN_Acceleration  ((uint8_T)1U)
#define SteeringWheel_IN_Autocross     ((uint8_T)2U)
#define SteeringWheel_IN_Endurance     ((uint8_T)3U)
#define SteeringWheel_IN_Limp          ((uint8_T)4U)
#define SteeringWheel_IN_Scrut         ((uint8_T)5U)
#define SteeringWheel_IN_Shakedown     ((uint8_T)6U)
#define SteeringWheel_IN_Skidpad       ((uint8_T)7U)
#define SteeringWheel_IN_Wheelspin     ((uint8_T)8U)

/* Named constants for Chart: '<S6>/Incremental' */
#define SteeringWheel_IN_Page1         ((uint8_T)1U)
#define SteeringWheel_IN_Page10        ((uint8_T)2U)
#define SteeringWheel_IN_Page11        ((uint8_T)3U)
#define SteeringWheel_IN_Page2         ((uint8_T)4U)
#define SteeringWheel_IN_Page3         ((uint8_T)5U)
#define SteeringWheel_IN_Page4         ((uint8_T)6U)
#define SteeringWheel_IN_Page5         ((uint8_T)7U)
#define SteeringWheel_IN_Page6         ((uint8_T)8U)
#define SteeringWheel_IN_Page7         ((uint8_T)9U)
#define SteeringWheel_IN_Page8         ((uint8_T)10U)
#define SteeringWheel_IN_Page9         ((uint8_T)11U)

/* Named constants for Chart: '<S7>/BDrivetrainCoolingOn' */
#define SteeringWheel_IN_Map11         ((uint8_T)1U)
#define SteeringWheel_IN_Map12         ((uint8_T)2U)
#define SteeringWheel_IN_Map13         ((uint8_T)3U)

/* Named constants for Chart: '<S7>/BSpinningModeOn' */
#define SteeringWheel_IN_Map14         ((uint8_T)1U)
#define SteeringWheel_IN_Map15         ((uint8_T)2U)
#define SteeringWheel_IN_Map16         ((uint8_T)3U)

/* Named constants for Chart: '<S7>/EOffset' */
#define SteeringWheel_IN_a             ((uint8_T)1U)
#define SteeringWheel_IN_a1            ((uint8_T)2U)
#define SteeringWheel_IN_a2            ((uint8_T)3U)
#define SteeringWheel_IN_a3            ((uint8_T)4U)
#define SteeringWheel_IN_a5            ((uint8_T)5U)
#define SteeringWheel_IN_a6            ((uint8_T)6U)
#define SteeringWheel_IN_a7            ((uint8_T)7U)

/* Named constants for Chart: '<S7>/NPCKpSelector ' */
#define SteeringWheel_IN_Map12_k       ((uint8_T)1U)
#define SteeringWheel_IN_a1_l          ((uint8_T)3U)
#define SteeringWheel_IN_a2_p          ((uint8_T)4U)
#define SteeringWheel_IN_a3_c          ((uint8_T)5U)
#define SteeringWheel_IN_a4            ((uint8_T)6U)
#define SteeringWheel_IN_a_f           ((uint8_T)2U)

/* Named constants for Chart: '<S7>/NThrottleMap' */
#define SteeringWheel_IN_Map10         ((uint8_T)1U)
#define SteeringWheel_IN_Map14_o       ((uint8_T)4U)
#define SteeringWheel_IN_Map7          ((uint8_T)5U)
#define SteeringWheel_IN_Map8          ((uint8_T)6U)
#define SteeringWheel_IN_Map9          ((uint8_T)7U)

/* Named constants for Chart: '<S7>/PRegenMax' */
#define SteeringWheel_IN_Map11_b       ((uint8_T)2U)
#define SteeringWheel_IN_Map12_n       ((uint8_T)3U)
#define SteeringWheel_IN_Map13_d       ((uint8_T)4U)
#define SteeringWheel_IN_Map14_k       ((uint8_T)5U)
#define SteeringWheel_IN_Map15_i       ((uint8_T)6U)
#define SteeringWheel_IN_Map7_k        ((uint8_T)7U)
#define SteeringWheel_IN_Map8_j        ((uint8_T)8U)
#define SteeringWheel_IN_Map9_n        ((uint8_T)9U)

/* Named constants for Chart: '<S7>/rEngineBrakingSplitOW ' */
#define SteeringWheel_IN_a4_c          ((uint8_T)5U)

/* Named constants for Chart: '<S7>/rGrip' */
#define SteeringWheel_IN_mode2         ((uint8_T)1U)
#define SteeringWheel_IN_mode3         ((uint8_T)2U)
#define SteeringWheel_IN_mode4         ((uint8_T)3U)
#define SteeringWheel_IN_mode5         ((uint8_T)4U)

/* Named constants for Chart: '<S7>/rTVMultiplier' */
#define SteeringWheel_IN_Map1          ((uint8_T)1U)
#define SteeringWheel_IN_Map10_a       ((uint8_T)2U)
#define SteeringWheel_IN_Map11_c       ((uint8_T)3U)
#define SteeringWheel_IN_Map12_g       ((uint8_T)4U)

/* Forward declaration for local functions */
static void SteeringWhee_enter_atomic_Scrut(real_T *rty_MRegenMax, real_T
  *rty_NEventMode, real_T *rty_BTVOnEM, real_T *rty_BTCOnEM, real_T
  *rty_BDrivetrainCoolingOnEM, real_T *rty_BEMSOnEM, real_T
  *rty_BSpinningModeOnEM, real_T *rty_NThrottleMapEM, real_T
  *rty_PDischargeMaxEM, real_T *rty_rTorqueSplitEM, real_T *rty_PRegenMaxEM,
  real_T *rty_rTVMultiplierEM, real_T *rty_PEngineBrakingEM, real_T
  *rty_rEngineBrakingSplitEM);
static void Steering_enter_atomic_Wheelspin(real_T *rty_MRegenMax, real_T
  *rty_NEventMode, real_T *rty_BTVOnEM, real_T *rty_BTCOnEM, real_T
  *rty_BDrivetrainCoolingOnEM, real_T *rty_BEMSOnEM, real_T
  *rty_BSpinningModeOnEM, real_T *rty_NThrottleMapEM, real_T
  *rty_PDischargeMaxEM, real_T *rty_rTorqueSplitEM, real_T *rty_PRegenMaxEM,
  real_T *rty_rTVMultiplierEM, real_T *rty_PEngineBrakingEM, real_T
  *rty_rEngineBrakingSplitEM);
static void Steering_enter_atomic_Shakedown(real_T *rty_MRegenMax, real_T
  *rty_NEventMode, real_T *rty_BTVOnEM, real_T *rty_BTCOnEM, real_T
  *rty_BDrivetrainCoolingOnEM, real_T *rty_BEMSOnEM, real_T
  *rty_BSpinningModeOnEM, real_T *rty_NThrottleMapEM, real_T
  *rty_PDischargeMaxEM, real_T *rty_rTorqueSplitEM, real_T *rty_PRegenMaxEM,
  real_T *rty_rTVMultiplierEM, real_T *rty_PEngineBrakingEM, real_T
  *rty_rEngineBrakingSplitEM);
static void SteeringWh_enter_atomic_Skidpad(real_T *rty_MRegenMax, real_T
  *rty_NEventMode, real_T *rty_BTVOnEM, real_T *rty_BTCOnEM, real_T
  *rty_BDrivetrainCoolingOnEM, real_T *rty_BEMSOnEM, real_T
  *rty_BSpinningModeOnEM, real_T *rty_NThrottleMapEM, real_T
  *rty_PDischargeMaxEM, real_T *rty_rTorqueSplitEM, real_T *rty_PRegenMaxEM,
  real_T *rty_rTVMultiplierEM, real_T *rty_PEngineBrakingEM, real_T
  *rty_rEngineBrakingSplitEM);
static void Steering_enter_atomic_Endurance(real_T *rty_MRegenMax, real_T
  *rty_NEventMode, real_T *rty_BTVOnEM, real_T *rty_BTCOnEM, real_T
  *rty_BDrivetrainCoolingOnEM, real_T *rty_BEMSOnEM, real_T
  *rty_BSpinningModeOnEM, real_T *rty_NThrottleMapEM, real_T
  *rty_PDischargeMaxEM, real_T *rty_rTorqueSplitEM, real_T *rty_PRegenMaxEM,
  real_T *rty_rTVMultiplierEM, real_T *rty_PEngineBrakingEM, real_T
  *rty_rEngineBrakingSplitEM);
static void Steer_enter_atomic_Acceleration(real_T *rty_MRegenMax, real_T
  *rty_NEventMode, real_T *rty_BTVOnEM, real_T *rty_BTCOnEM, real_T
  *rty_BDrivetrainCoolingOnEM, real_T *rty_BEMSOnEM, real_T
  *rty_BSpinningModeOnEM, real_T *rty_NThrottleMapEM, real_T
  *rty_PDischargeMaxEM, real_T *rty_rTorqueSplitEM, real_T *rty_PRegenMaxEM,
  real_T *rty_rTVMultiplierEM, real_T *rty_PEngineBrakingEM, real_T
  *rty_rEngineBrakingSplitEM);
static void Steering_enter_atomic_Autocross(real_T *rty_MRegenMax, real_T
  *rty_NEventMode, real_T *rty_BTVOnEM, real_T *rty_BTCOnEM, real_T
  *rty_BDrivetrainCoolingOnEM, real_T *rty_BEMSOnEM, real_T
  *rty_BSpinningModeOnEM, real_T *rty_NThrottleMapEM, real_T
  *rty_PDischargeMaxEM, real_T *rty_rTorqueSplitEM, real_T *rty_PRegenMaxEM,
  real_T *rty_rTVMultiplierEM, real_T *rty_PEngineBrakingEM, real_T
  *rty_rEngineBrakingSplitEM);
static void SteeringWheel_enter_atomic_Limp(real_T *rty_MRegenMax, real_T
  *rty_NEventMode, real_T *rty_BTVOnEM, real_T *rty_BTCOnEM, real_T
  *rty_BDrivetrainCoolingOnEM, real_T *rty_BEMSOnEM, real_T
  *rty_BSpinningModeOnEM, real_T *rty_NThrottleMapEM, real_T
  *rty_PDischargeMaxEM, real_T *rty_rTorqueSplitEM, real_T *rty_PRegenMaxEM,
  real_T *rty_rTVMultiplierEM, real_T *rty_PEngineBrakingEM, real_T
  *rty_rEngineBrakingSplitEM);
static void SteeringWheel_Autocross(const real_T *rtu_NEventModeRotary, real_T
  *rty_MRegenMax, real_T *rty_NEventMode, real_T *rty_BTVOnEM, real_T
  *rty_BTCOnEM, real_T *rty_BDrivetrainCoolingOnEM, real_T *rty_BEMSOnEM, real_T
  *rty_BSpinningModeOnEM, real_T *rty_NThrottleMapEM, real_T
  *rty_PDischargeMaxEM, real_T *rty_rTorqueSplitEM, real_T *rty_PRegenMaxEM,
  real_T *rty_rTVMultiplierEM, real_T *rty_PEngineBrakingEM, real_T
  *rty_rEngineBrakingSplitEM, DW_SteeringWheel_f_T *localDW);
static void SteeringWheel_Endurance(const real_T *rtu_NEventModeRotary, real_T
  *rty_MRegenMax, real_T *rty_NEventMode, real_T *rty_BTVOnEM, real_T
  *rty_BTCOnEM, real_T *rty_BDrivetrainCoolingOnEM, real_T *rty_BEMSOnEM, real_T
  *rty_BSpinningModeOnEM, real_T *rty_NThrottleMapEM, real_T
  *rty_PDischargeMaxEM, real_T *rty_rTorqueSplitEM, real_T *rty_PRegenMaxEM,
  real_T *rty_rTVMultiplierEM, real_T *rty_PEngineBrakingEM, real_T
  *rty_rEngineBrakingSplitEM, DW_SteeringWheel_f_T *localDW);
static void SteeringWheel_Limp(const real_T *rtu_NEventModeRotary, real_T
  *rty_MRegenMax, real_T *rty_NEventMode, real_T *rty_BTVOnEM, real_T
  *rty_BTCOnEM, real_T *rty_BDrivetrainCoolingOnEM, real_T *rty_BEMSOnEM, real_T
  *rty_BSpinningModeOnEM, real_T *rty_NThrottleMapEM, real_T
  *rty_PDischargeMaxEM, real_T *rty_rTorqueSplitEM, real_T *rty_PRegenMaxEM,
  real_T *rty_rTVMultiplierEM, real_T *rty_PEngineBrakingEM, real_T
  *rty_rEngineBrakingSplitEM, DW_SteeringWheel_f_T *localDW);
static void SteeringWheel_Scrut(const real_T *rtu_NEventModeRotary, real_T
  *rty_MRegenMax, real_T *rty_NEventMode, real_T *rty_BTVOnEM, real_T
  *rty_BTCOnEM, real_T *rty_BDrivetrainCoolingOnEM, real_T *rty_BEMSOnEM, real_T
  *rty_BSpinningModeOnEM, real_T *rty_NThrottleMapEM, real_T
  *rty_PDischargeMaxEM, real_T *rty_rTorqueSplitEM, real_T *rty_PRegenMaxEM,
  real_T *rty_rTVMultiplierEM, real_T *rty_PEngineBrakingEM, real_T
  *rty_rEngineBrakingSplitEM, DW_SteeringWheel_f_T *localDW);
static void SteeringWheel_Shakedown(const real_T *rtu_NEventModeRotary, real_T
  *rty_MRegenMax, real_T *rty_NEventMode, real_T *rty_BTVOnEM, real_T
  *rty_BTCOnEM, real_T *rty_BDrivetrainCoolingOnEM, real_T *rty_BEMSOnEM, real_T
  *rty_BSpinningModeOnEM, real_T *rty_NThrottleMapEM, real_T
  *rty_PDischargeMaxEM, real_T *rty_rTorqueSplitEM, real_T *rty_PRegenMaxEM,
  real_T *rty_rTVMultiplierEM, real_T *rty_PEngineBrakingEM, real_T
  *rty_rEngineBrakingSplitEM, DW_SteeringWheel_f_T *localDW);
static void SteeringWheel_Skidpad(const real_T *rtu_NEventModeRotary, real_T
  *rty_MRegenMax, real_T *rty_NEventMode, real_T *rty_BTVOnEM, real_T
  *rty_BTCOnEM, real_T *rty_BDrivetrainCoolingOnEM, real_T *rty_BEMSOnEM, real_T
  *rty_BSpinningModeOnEM, real_T *rty_NThrottleMapEM, real_T
  *rty_PDischargeMaxEM, real_T *rty_rTorqueSplitEM, real_T *rty_PRegenMaxEM,
  real_T *rty_rTVMultiplierEM, real_T *rty_PEngineBrakingEM, real_T
  *rty_rEngineBrakingSplitEM, DW_SteeringWheel_f_T *localDW);
static void SteeringWheel_Wheelspin(const real_T *rtu_NEventModeRotary, real_T
  *rty_MRegenMax, real_T *rty_NEventMode, real_T *rty_BTVOnEM, real_T
  *rty_BTCOnEM, real_T *rty_BDrivetrainCoolingOnEM, real_T *rty_BEMSOnEM, real_T
  *rty_BSpinningModeOnEM, real_T *rty_NThrottleMapEM, real_T
  *rty_PDischargeMaxEM, real_T *rty_rTorqueSplitEM, real_T *rty_PRegenMaxEM,
  real_T *rty_rTVMultiplierEM, real_T *rty_PEngineBrakingEM, real_T
  *rty_rEngineBrakingSplitEM, DW_SteeringWheel_f_T *localDW);
static void SteeringWheel_Page9(const real_T *rtu_NPageSelectRotary,
  DW_SteeringWheel_f_T *localDW);

/*
 * Output and update for action system:
 *    '<S7>/If Action Subsystem10'
 *    '<S7>/If Action Subsystem1'
 *    '<S7>/If Action Subsystem2'
 *    '<S7>/If Action Subsystem3'
 *    '<S7>/If Action Subsystem4'
 *    '<S7>/If Action Subsystem5'
 *    '<S7>/If Action Subsystem6'
 *    '<S7>/If Action Subsystem7'
 *    '<S7>/If Action Subsystem8'
 *    '<S7>/If Action Subsystem9'
 *    ...
 */
void SteeringWhe_IfActionSubsystem10(const boolean_T *rtu_BSteeringWheelButton3,
  const boolean_T *rtu_BSteeringWheelButton4, boolean_T
  *rty_BSteeringWheelButton3, boolean_T *rty_BSteeringWheelButton4)
{
  /* SignalConversion generated from: '<S21>/BSteeringWheelButton3  ' */
  *rty_BSteeringWheelButton3 = *rtu_BSteeringWheelButton3;

  /* SignalConversion generated from: '<S21>/BSteeringWheelButton4  ' */
  *rty_BSteeringWheelButton4 = *rtu_BSteeringWheelButton4;
}

/* Function for Chart: '<Root>/NEventModeRotary System' */
static void SteeringWhee_enter_atomic_Scrut(real_T *rty_MRegenMax, real_T
  *rty_NEventMode, real_T *rty_BTVOnEM, real_T *rty_BTCOnEM, real_T
  *rty_BDrivetrainCoolingOnEM, real_T *rty_BEMSOnEM, real_T
  *rty_BSpinningModeOnEM, real_T *rty_NThrottleMapEM, real_T
  *rty_PDischargeMaxEM, real_T *rty_rTorqueSplitEM, real_T *rty_PRegenMaxEM,
  real_T *rty_rTVMultiplierEM, real_T *rty_PEngineBrakingEM, real_T
  *rty_rEngineBrakingSplitEM)
{
  *rty_BTVOnEM = 0.0;
  *rty_BTCOnEM = 0.0;
  *rty_BDrivetrainCoolingOnEM = 0.0;
  *rty_NThrottleMapEM = 1.0;
  *rty_PDischargeMaxEM = 5.0;
  *rty_rTorqueSplitEM = 0.5;
  *rty_PRegenMaxEM = 0.0;
  *rty_rTVMultiplierEM = 0.0;
  *rty_NEventMode = 1.0;
  *rty_BEMSOnEM = 0.0;
  *rty_BSpinningModeOnEM = 0.0;
  *rty_PEngineBrakingEM = 0.0;
  *rty_MRegenMax = 0.0;
  *rty_rEngineBrakingSplitEM = 1.0;
}

/* Function for Chart: '<Root>/NEventModeRotary System' */
static void Steering_enter_atomic_Wheelspin(real_T *rty_MRegenMax, real_T
  *rty_NEventMode, real_T *rty_BTVOnEM, real_T *rty_BTCOnEM, real_T
  *rty_BDrivetrainCoolingOnEM, real_T *rty_BEMSOnEM, real_T
  *rty_BSpinningModeOnEM, real_T *rty_NThrottleMapEM, real_T
  *rty_PDischargeMaxEM, real_T *rty_rTorqueSplitEM, real_T *rty_PRegenMaxEM,
  real_T *rty_rTVMultiplierEM, real_T *rty_PEngineBrakingEM, real_T
  *rty_rEngineBrakingSplitEM)
{
  *rty_BTVOnEM = 0.0;
  *rty_BTCOnEM = 0.0;
  *rty_BDrivetrainCoolingOnEM = 0.0;
  *rty_NThrottleMapEM = 1.0;
  *rty_PDischargeMaxEM = 5.0;
  *rty_rTorqueSplitEM = 0.5;
  *rty_PRegenMaxEM = 0.0;
  *rty_rTVMultiplierEM = 0.0;
  *rty_NEventMode = 2.0;
  *rty_BEMSOnEM = 0.0;
  *rty_BSpinningModeOnEM = 1.0;
  *rty_PEngineBrakingEM = 0.0;
  *rty_MRegenMax = 0.0;
  *rty_rEngineBrakingSplitEM = 1.0;
}

/* Function for Chart: '<Root>/NEventModeRotary System' */
static void Steering_enter_atomic_Shakedown(real_T *rty_MRegenMax, real_T
  *rty_NEventMode, real_T *rty_BTVOnEM, real_T *rty_BTCOnEM, real_T
  *rty_BDrivetrainCoolingOnEM, real_T *rty_BEMSOnEM, real_T
  *rty_BSpinningModeOnEM, real_T *rty_NThrottleMapEM, real_T
  *rty_PDischargeMaxEM, real_T *rty_rTorqueSplitEM, real_T *rty_PRegenMaxEM,
  real_T *rty_rTVMultiplierEM, real_T *rty_PEngineBrakingEM, real_T
  *rty_rEngineBrakingSplitEM)
{
  *rty_BTVOnEM = 0.0;
  *rty_BTCOnEM = 0.0;
  *rty_BDrivetrainCoolingOnEM = 1.0;
  *rty_NThrottleMapEM = 6.0;
  *rty_PDischargeMaxEM = 38.0;
  *rty_rTorqueSplitEM = 0.7;
  *rty_PRegenMaxEM = 20.0;
  *rty_rTVMultiplierEM = 0.0;
  *rty_NEventMode = 3.0;
  *rty_BEMSOnEM = 0.0;
  *rty_BSpinningModeOnEM = 0.0;
  *rty_PEngineBrakingEM = 6.0;
  *rty_MRegenMax = 15.0;
  *rty_rEngineBrakingSplitEM = 1.0;
}

/* Function for Chart: '<Root>/NEventModeRotary System' */
static void SteeringWh_enter_atomic_Skidpad(real_T *rty_MRegenMax, real_T
  *rty_NEventMode, real_T *rty_BTVOnEM, real_T *rty_BTCOnEM, real_T
  *rty_BDrivetrainCoolingOnEM, real_T *rty_BEMSOnEM, real_T
  *rty_BSpinningModeOnEM, real_T *rty_NThrottleMapEM, real_T
  *rty_PDischargeMaxEM, real_T *rty_rTorqueSplitEM, real_T *rty_PRegenMaxEM,
  real_T *rty_rTVMultiplierEM, real_T *rty_PEngineBrakingEM, real_T
  *rty_rEngineBrakingSplitEM)
{
  *rty_BTVOnEM = 1.0;
  *rty_BTCOnEM = 1.0;
  *rty_BDrivetrainCoolingOnEM = 1.0;
  *rty_NThrottleMapEM = 5.0;
  *rty_PDischargeMaxEM = 58.0;
  *rty_rTorqueSplitEM = 0.7;
  *rty_PRegenMaxEM = 20.0;
  *rty_rTVMultiplierEM = 0.5;
  *rty_NEventMode = 5.0;
  *rty_BEMSOnEM = 0.0;
  *rty_BSpinningModeOnEM = 0.0;
  *rty_PEngineBrakingEM = 10.0;
  *rty_MRegenMax = 60.0;
  *rty_rEngineBrakingSplitEM = 1.0;
}

/* Function for Chart: '<Root>/NEventModeRotary System' */
static void Steering_enter_atomic_Endurance(real_T *rty_MRegenMax, real_T
  *rty_NEventMode, real_T *rty_BTVOnEM, real_T *rty_BTCOnEM, real_T
  *rty_BDrivetrainCoolingOnEM, real_T *rty_BEMSOnEM, real_T
  *rty_BSpinningModeOnEM, real_T *rty_NThrottleMapEM, real_T
  *rty_PDischargeMaxEM, real_T *rty_rTorqueSplitEM, real_T *rty_PRegenMaxEM,
  real_T *rty_rTVMultiplierEM, real_T *rty_PEngineBrakingEM, real_T
  *rty_rEngineBrakingSplitEM)
{
  *rty_BTVOnEM = 1.0;
  *rty_BTCOnEM = 1.0;
  *rty_BDrivetrainCoolingOnEM = 1.0;
  *rty_NThrottleMapEM = 3.0;
  *rty_PDischargeMaxEM = 78.0;
  *rty_rTorqueSplitEM = 0.7;
  *rty_PRegenMaxEM = 100.0;
  *rty_rTVMultiplierEM = 0.5;
  *rty_NEventMode = 7.0;
  *rty_BEMSOnEM = 1.0;
  *rty_BSpinningModeOnEM = 0.0;
  *rty_PEngineBrakingEM = 14.0;
  *rty_MRegenMax = 60.0;
  *rty_rEngineBrakingSplitEM = 1.0;
}

/* Function for Chart: '<Root>/NEventModeRotary System' */
static void Steer_enter_atomic_Acceleration(real_T *rty_MRegenMax, real_T
  *rty_NEventMode, real_T *rty_BTVOnEM, real_T *rty_BTCOnEM, real_T
  *rty_BDrivetrainCoolingOnEM, real_T *rty_BEMSOnEM, real_T
  *rty_BSpinningModeOnEM, real_T *rty_NThrottleMapEM, real_T
  *rty_PDischargeMaxEM, real_T *rty_rTorqueSplitEM, real_T *rty_PRegenMaxEM,
  real_T *rty_rTVMultiplierEM, real_T *rty_PEngineBrakingEM, real_T
  *rty_rEngineBrakingSplitEM)
{
  *rty_BTVOnEM = 0.0;
  *rty_BTCOnEM = 1.0;
  *rty_BDrivetrainCoolingOnEM = 1.0;
  *rty_NThrottleMapEM = 2.0;
  *rty_PDischargeMaxEM = 78.0;
  *rty_rTorqueSplitEM = 0.8;
  *rty_PRegenMaxEM = 0.0;
  *rty_rTVMultiplierEM = 0.0;
  *rty_NEventMode = 4.0;
  *rty_BEMSOnEM = 0.0;
  *rty_BSpinningModeOnEM = 0.0;
  *rty_PEngineBrakingEM = 0.0;
  *rty_MRegenMax = 0.0;
  *rty_rEngineBrakingSplitEM = 1.0;
}

/* Function for Chart: '<Root>/NEventModeRotary System' */
static void Steering_enter_atomic_Autocross(real_T *rty_MRegenMax, real_T
  *rty_NEventMode, real_T *rty_BTVOnEM, real_T *rty_BTCOnEM, real_T
  *rty_BDrivetrainCoolingOnEM, real_T *rty_BEMSOnEM, real_T
  *rty_BSpinningModeOnEM, real_T *rty_NThrottleMapEM, real_T
  *rty_PDischargeMaxEM, real_T *rty_rTorqueSplitEM, real_T *rty_PRegenMaxEM,
  real_T *rty_rTVMultiplierEM, real_T *rty_PEngineBrakingEM, real_T
  *rty_rEngineBrakingSplitEM)
{
  *rty_BTVOnEM = 1.0;
  *rty_BTCOnEM = 1.0;
  *rty_BDrivetrainCoolingOnEM = 1.0;
  *rty_NThrottleMapEM = 3.0;
  *rty_PDischargeMaxEM = 78.0;
  *rty_rTorqueSplitEM = 0.7;
  *rty_PRegenMaxEM = 100.0;
  *rty_rTVMultiplierEM = 0.5;
  *rty_NEventMode = 6.0;
  *rty_BEMSOnEM = 0.0;
  *rty_BSpinningModeOnEM = 0.0;
  *rty_PEngineBrakingEM = 14.0;
  *rty_MRegenMax = 60.0;
  *rty_rEngineBrakingSplitEM = 1.0;
}

/* Function for Chart: '<Root>/NEventModeRotary System' */
static void SteeringWheel_enter_atomic_Limp(real_T *rty_MRegenMax, real_T
  *rty_NEventMode, real_T *rty_BTVOnEM, real_T *rty_BTCOnEM, real_T
  *rty_BDrivetrainCoolingOnEM, real_T *rty_BEMSOnEM, real_T
  *rty_BSpinningModeOnEM, real_T *rty_NThrottleMapEM, real_T
  *rty_PDischargeMaxEM, real_T *rty_rTorqueSplitEM, real_T *rty_PRegenMaxEM,
  real_T *rty_rTVMultiplierEM, real_T *rty_PEngineBrakingEM, real_T
  *rty_rEngineBrakingSplitEM)
{
  *rty_BTVOnEM = 0.0;
  *rty_BTCOnEM = 1.0;
  *rty_BDrivetrainCoolingOnEM = 1.0;
  *rty_NThrottleMapEM = 4.0;
  *rty_PDischargeMaxEM = 58.0;
  *rty_rTorqueSplitEM = 0.7;
  *rty_PRegenMaxEM = 0.0;
  *rty_rTVMultiplierEM = 0.0;
  *rty_NEventMode = 8.0;
  *rty_BEMSOnEM = 0.0;
  *rty_BSpinningModeOnEM = 0.0;
  *rty_PEngineBrakingEM = 0.0;
  *rty_MRegenMax = 60.0;
  *rty_rEngineBrakingSplitEM = 1.0;
}

/* Function for Chart: '<Root>/NEventModeRotary System' */
static void SteeringWheel_Autocross(const real_T *rtu_NEventModeRotary, real_T
  *rty_MRegenMax, real_T *rty_NEventMode, real_T *rty_BTVOnEM, real_T
  *rty_BTCOnEM, real_T *rty_BDrivetrainCoolingOnEM, real_T *rty_BEMSOnEM, real_T
  *rty_BSpinningModeOnEM, real_T *rty_NThrottleMapEM, real_T
  *rty_PDischargeMaxEM, real_T *rty_rTorqueSplitEM, real_T *rty_PRegenMaxEM,
  real_T *rty_rTVMultiplierEM, real_T *rty_PEngineBrakingEM, real_T
  *rty_rEngineBrakingSplitEM, DW_SteeringWheel_f_T *localDW)
{
  /* Chart: '<Root>/NEventModeRotary System' */
  *rty_BTVOnEM = 1.0;
  *rty_BTCOnEM = 1.0;
  *rty_BDrivetrainCoolingOnEM = 1.0;
  *rty_NThrottleMapEM = 3.0;
  *rty_PDischargeMaxEM = 78.0;
  *rty_rTorqueSplitEM = 0.7;
  *rty_PRegenMaxEM = 100.0;
  *rty_rTVMultiplierEM = 0.5;
  *rty_NEventMode = 6.0;
  *rty_BEMSOnEM = 0.0;
  *rty_BSpinningModeOnEM = 0.0;
  *rty_PEngineBrakingEM = 14.0;
  *rty_MRegenMax = 60.0;
  *rty_rEngineBrakingSplitEM = 1.0;
  if ((localDW->sfEvent == SteeringWheel_CALL_EVENT) &&
      (localDW->temporalCounter_i1_ke >= 500) && (*rtu_NEventModeRotary != 6.0))
  {
    if (*rtu_NEventModeRotary == 1.0) {
      localDW->temporalCounter_i1_ke = 0U;
      localDW->is_c28_SteeringWheel = SteeringWheel_IN_Scrut;
      SteeringWhee_enter_atomic_Scrut(rty_MRegenMax, rty_NEventMode, rty_BTVOnEM,
        rty_BTCOnEM, rty_BDrivetrainCoolingOnEM, rty_BEMSOnEM,
        rty_BSpinningModeOnEM, rty_NThrottleMapEM, rty_PDischargeMaxEM,
        rty_rTorqueSplitEM, rty_PRegenMaxEM, rty_rTVMultiplierEM,
        rty_PEngineBrakingEM, rty_rEngineBrakingSplitEM);
    } else if (*rtu_NEventModeRotary == 2.0) {
      localDW->temporalCounter_i1_ke = 0U;
      localDW->is_c28_SteeringWheel = SteeringWheel_IN_Wheelspin;
      Steering_enter_atomic_Wheelspin(rty_MRegenMax, rty_NEventMode, rty_BTVOnEM,
        rty_BTCOnEM, rty_BDrivetrainCoolingOnEM, rty_BEMSOnEM,
        rty_BSpinningModeOnEM, rty_NThrottleMapEM, rty_PDischargeMaxEM,
        rty_rTorqueSplitEM, rty_PRegenMaxEM, rty_rTVMultiplierEM,
        rty_PEngineBrakingEM, rty_rEngineBrakingSplitEM);
    } else if (*rtu_NEventModeRotary == 3.0) {
      localDW->temporalCounter_i1_ke = 0U;
      localDW->is_c28_SteeringWheel = SteeringWheel_IN_Shakedown;
      Steering_enter_atomic_Shakedown(rty_MRegenMax, rty_NEventMode, rty_BTVOnEM,
        rty_BTCOnEM, rty_BDrivetrainCoolingOnEM, rty_BEMSOnEM,
        rty_BSpinningModeOnEM, rty_NThrottleMapEM, rty_PDischargeMaxEM,
        rty_rTorqueSplitEM, rty_PRegenMaxEM, rty_rTVMultiplierEM,
        rty_PEngineBrakingEM, rty_rEngineBrakingSplitEM);
    } else if (*rtu_NEventModeRotary == 5.0) {
      localDW->temporalCounter_i1_ke = 0U;
      localDW->is_c28_SteeringWheel = SteeringWheel_IN_Skidpad;
      SteeringWh_enter_atomic_Skidpad(rty_MRegenMax, rty_NEventMode, rty_BTVOnEM,
        rty_BTCOnEM, rty_BDrivetrainCoolingOnEM, rty_BEMSOnEM,
        rty_BSpinningModeOnEM, rty_NThrottleMapEM, rty_PDischargeMaxEM,
        rty_rTorqueSplitEM, rty_PRegenMaxEM, rty_rTVMultiplierEM,
        rty_PEngineBrakingEM, rty_rEngineBrakingSplitEM);
    } else if (*rtu_NEventModeRotary == 7.0) {
      localDW->temporalCounter_i1_ke = 0U;
      localDW->is_c28_SteeringWheel = SteeringWheel_IN_Endurance;
      Steering_enter_atomic_Endurance(rty_MRegenMax, rty_NEventMode, rty_BTVOnEM,
        rty_BTCOnEM, rty_BDrivetrainCoolingOnEM, rty_BEMSOnEM,
        rty_BSpinningModeOnEM, rty_NThrottleMapEM, rty_PDischargeMaxEM,
        rty_rTorqueSplitEM, rty_PRegenMaxEM, rty_rTVMultiplierEM,
        rty_PEngineBrakingEM, rty_rEngineBrakingSplitEM);
    } else if (*rtu_NEventModeRotary == 4.0) {
      localDW->temporalCounter_i1_ke = 0U;
      localDW->is_c28_SteeringWheel = SteeringWheel_IN_Acceleration;
      Steer_enter_atomic_Acceleration(rty_MRegenMax, rty_NEventMode, rty_BTVOnEM,
        rty_BTCOnEM, rty_BDrivetrainCoolingOnEM, rty_BEMSOnEM,
        rty_BSpinningModeOnEM, rty_NThrottleMapEM, rty_PDischargeMaxEM,
        rty_rTorqueSplitEM, rty_PRegenMaxEM, rty_rTVMultiplierEM,
        rty_PEngineBrakingEM, rty_rEngineBrakingSplitEM);
    } else if (*rtu_NEventModeRotary == 6.0) {
      localDW->temporalCounter_i1_ke = 0U;
      localDW->is_c28_SteeringWheel = SteeringWheel_IN_Autocross;
      Steering_enter_atomic_Autocross(rty_MRegenMax, rty_NEventMode, rty_BTVOnEM,
        rty_BTCOnEM, rty_BDrivetrainCoolingOnEM, rty_BEMSOnEM,
        rty_BSpinningModeOnEM, rty_NThrottleMapEM, rty_PDischargeMaxEM,
        rty_rTorqueSplitEM, rty_PRegenMaxEM, rty_rTVMultiplierEM,
        rty_PEngineBrakingEM, rty_rEngineBrakingSplitEM);
    } else if (*rtu_NEventModeRotary == 8.0) {
      localDW->temporalCounter_i1_ke = 0U;
      localDW->is_c28_SteeringWheel = SteeringWheel_IN_Limp;
      SteeringWheel_enter_atomic_Limp(rty_MRegenMax, rty_NEventMode, rty_BTVOnEM,
        rty_BTCOnEM, rty_BDrivetrainCoolingOnEM, rty_BEMSOnEM,
        rty_BSpinningModeOnEM, rty_NThrottleMapEM, rty_PDischargeMaxEM,
        rty_rTorqueSplitEM, rty_PRegenMaxEM, rty_rTVMultiplierEM,
        rty_PEngineBrakingEM, rty_rEngineBrakingSplitEM);
    }
  }

  /* End of Chart: '<Root>/NEventModeRotary System' */
}

/* Function for Chart: '<Root>/NEventModeRotary System' */
static void SteeringWheel_Endurance(const real_T *rtu_NEventModeRotary, real_T
  *rty_MRegenMax, real_T *rty_NEventMode, real_T *rty_BTVOnEM, real_T
  *rty_BTCOnEM, real_T *rty_BDrivetrainCoolingOnEM, real_T *rty_BEMSOnEM, real_T
  *rty_BSpinningModeOnEM, real_T *rty_NThrottleMapEM, real_T
  *rty_PDischargeMaxEM, real_T *rty_rTorqueSplitEM, real_T *rty_PRegenMaxEM,
  real_T *rty_rTVMultiplierEM, real_T *rty_PEngineBrakingEM, real_T
  *rty_rEngineBrakingSplitEM, DW_SteeringWheel_f_T *localDW)
{
  /* Chart: '<Root>/NEventModeRotary System' */
  *rty_BTVOnEM = 1.0;
  *rty_BTCOnEM = 1.0;
  *rty_BDrivetrainCoolingOnEM = 1.0;
  *rty_NThrottleMapEM = 3.0;
  *rty_PDischargeMaxEM = 78.0;
  *rty_rTorqueSplitEM = 0.7;
  *rty_PRegenMaxEM = 100.0;
  *rty_rTVMultiplierEM = 0.5;
  *rty_NEventMode = 7.0;
  *rty_BEMSOnEM = 1.0;
  *rty_BSpinningModeOnEM = 0.0;
  *rty_PEngineBrakingEM = 14.0;
  *rty_MRegenMax = 60.0;
  *rty_rEngineBrakingSplitEM = 1.0;
  if ((localDW->sfEvent == SteeringWheel_CALL_EVENT) &&
      (localDW->temporalCounter_i1_ke >= 500) && (*rtu_NEventModeRotary != 7.0))
  {
    if (*rtu_NEventModeRotary == 1.0) {
      localDW->temporalCounter_i1_ke = 0U;
      localDW->is_c28_SteeringWheel = SteeringWheel_IN_Scrut;
      SteeringWhee_enter_atomic_Scrut(rty_MRegenMax, rty_NEventMode, rty_BTVOnEM,
        rty_BTCOnEM, rty_BDrivetrainCoolingOnEM, rty_BEMSOnEM,
        rty_BSpinningModeOnEM, rty_NThrottleMapEM, rty_PDischargeMaxEM,
        rty_rTorqueSplitEM, rty_PRegenMaxEM, rty_rTVMultiplierEM,
        rty_PEngineBrakingEM, rty_rEngineBrakingSplitEM);
    } else if (*rtu_NEventModeRotary == 2.0) {
      localDW->temporalCounter_i1_ke = 0U;
      localDW->is_c28_SteeringWheel = SteeringWheel_IN_Wheelspin;
      Steering_enter_atomic_Wheelspin(rty_MRegenMax, rty_NEventMode, rty_BTVOnEM,
        rty_BTCOnEM, rty_BDrivetrainCoolingOnEM, rty_BEMSOnEM,
        rty_BSpinningModeOnEM, rty_NThrottleMapEM, rty_PDischargeMaxEM,
        rty_rTorqueSplitEM, rty_PRegenMaxEM, rty_rTVMultiplierEM,
        rty_PEngineBrakingEM, rty_rEngineBrakingSplitEM);
    } else if (*rtu_NEventModeRotary == 3.0) {
      localDW->temporalCounter_i1_ke = 0U;
      localDW->is_c28_SteeringWheel = SteeringWheel_IN_Shakedown;
      Steering_enter_atomic_Shakedown(rty_MRegenMax, rty_NEventMode, rty_BTVOnEM,
        rty_BTCOnEM, rty_BDrivetrainCoolingOnEM, rty_BEMSOnEM,
        rty_BSpinningModeOnEM, rty_NThrottleMapEM, rty_PDischargeMaxEM,
        rty_rTorqueSplitEM, rty_PRegenMaxEM, rty_rTVMultiplierEM,
        rty_PEngineBrakingEM, rty_rEngineBrakingSplitEM);
    } else if (*rtu_NEventModeRotary == 5.0) {
      localDW->temporalCounter_i1_ke = 0U;
      localDW->is_c28_SteeringWheel = SteeringWheel_IN_Skidpad;
      SteeringWh_enter_atomic_Skidpad(rty_MRegenMax, rty_NEventMode, rty_BTVOnEM,
        rty_BTCOnEM, rty_BDrivetrainCoolingOnEM, rty_BEMSOnEM,
        rty_BSpinningModeOnEM, rty_NThrottleMapEM, rty_PDischargeMaxEM,
        rty_rTorqueSplitEM, rty_PRegenMaxEM, rty_rTVMultiplierEM,
        rty_PEngineBrakingEM, rty_rEngineBrakingSplitEM);
    } else if (*rtu_NEventModeRotary == 7.0) {
      localDW->temporalCounter_i1_ke = 0U;
      localDW->is_c28_SteeringWheel = SteeringWheel_IN_Endurance;
      Steering_enter_atomic_Endurance(rty_MRegenMax, rty_NEventMode, rty_BTVOnEM,
        rty_BTCOnEM, rty_BDrivetrainCoolingOnEM, rty_BEMSOnEM,
        rty_BSpinningModeOnEM, rty_NThrottleMapEM, rty_PDischargeMaxEM,
        rty_rTorqueSplitEM, rty_PRegenMaxEM, rty_rTVMultiplierEM,
        rty_PEngineBrakingEM, rty_rEngineBrakingSplitEM);
    } else if (*rtu_NEventModeRotary == 4.0) {
      localDW->temporalCounter_i1_ke = 0U;
      localDW->is_c28_SteeringWheel = SteeringWheel_IN_Acceleration;
      Steer_enter_atomic_Acceleration(rty_MRegenMax, rty_NEventMode, rty_BTVOnEM,
        rty_BTCOnEM, rty_BDrivetrainCoolingOnEM, rty_BEMSOnEM,
        rty_BSpinningModeOnEM, rty_NThrottleMapEM, rty_PDischargeMaxEM,
        rty_rTorqueSplitEM, rty_PRegenMaxEM, rty_rTVMultiplierEM,
        rty_PEngineBrakingEM, rty_rEngineBrakingSplitEM);
    } else if (*rtu_NEventModeRotary == 6.0) {
      localDW->temporalCounter_i1_ke = 0U;
      localDW->is_c28_SteeringWheel = SteeringWheel_IN_Autocross;
      Steering_enter_atomic_Autocross(rty_MRegenMax, rty_NEventMode, rty_BTVOnEM,
        rty_BTCOnEM, rty_BDrivetrainCoolingOnEM, rty_BEMSOnEM,
        rty_BSpinningModeOnEM, rty_NThrottleMapEM, rty_PDischargeMaxEM,
        rty_rTorqueSplitEM, rty_PRegenMaxEM, rty_rTVMultiplierEM,
        rty_PEngineBrakingEM, rty_rEngineBrakingSplitEM);
    } else if (*rtu_NEventModeRotary == 8.0) {
      localDW->temporalCounter_i1_ke = 0U;
      localDW->is_c28_SteeringWheel = SteeringWheel_IN_Limp;
      SteeringWheel_enter_atomic_Limp(rty_MRegenMax, rty_NEventMode, rty_BTVOnEM,
        rty_BTCOnEM, rty_BDrivetrainCoolingOnEM, rty_BEMSOnEM,
        rty_BSpinningModeOnEM, rty_NThrottleMapEM, rty_PDischargeMaxEM,
        rty_rTorqueSplitEM, rty_PRegenMaxEM, rty_rTVMultiplierEM,
        rty_PEngineBrakingEM, rty_rEngineBrakingSplitEM);
    }
  }

  /* End of Chart: '<Root>/NEventModeRotary System' */
}

/* Function for Chart: '<Root>/NEventModeRotary System' */
static void SteeringWheel_Limp(const real_T *rtu_NEventModeRotary, real_T
  *rty_MRegenMax, real_T *rty_NEventMode, real_T *rty_BTVOnEM, real_T
  *rty_BTCOnEM, real_T *rty_BDrivetrainCoolingOnEM, real_T *rty_BEMSOnEM, real_T
  *rty_BSpinningModeOnEM, real_T *rty_NThrottleMapEM, real_T
  *rty_PDischargeMaxEM, real_T *rty_rTorqueSplitEM, real_T *rty_PRegenMaxEM,
  real_T *rty_rTVMultiplierEM, real_T *rty_PEngineBrakingEM, real_T
  *rty_rEngineBrakingSplitEM, DW_SteeringWheel_f_T *localDW)
{
  /* Chart: '<Root>/NEventModeRotary System' */
  *rty_BTVOnEM = 0.0;
  *rty_BTCOnEM = 1.0;
  *rty_BDrivetrainCoolingOnEM = 1.0;
  *rty_NThrottleMapEM = 4.0;
  *rty_PDischargeMaxEM = 58.0;
  *rty_rTorqueSplitEM = 0.7;
  *rty_PRegenMaxEM = 0.0;
  *rty_rTVMultiplierEM = 0.0;
  *rty_NEventMode = 8.0;
  *rty_BEMSOnEM = 0.0;
  *rty_BSpinningModeOnEM = 0.0;
  *rty_PEngineBrakingEM = 0.0;
  *rty_MRegenMax = 60.0;
  *rty_rEngineBrakingSplitEM = 1.0;
  if ((localDW->sfEvent == SteeringWheel_CALL_EVENT) &&
      (localDW->temporalCounter_i1_ke >= 500) && (*rtu_NEventModeRotary != 8.0))
  {
    if (*rtu_NEventModeRotary == 1.0) {
      localDW->temporalCounter_i1_ke = 0U;
      localDW->is_c28_SteeringWheel = SteeringWheel_IN_Scrut;
      SteeringWhee_enter_atomic_Scrut(rty_MRegenMax, rty_NEventMode, rty_BTVOnEM,
        rty_BTCOnEM, rty_BDrivetrainCoolingOnEM, rty_BEMSOnEM,
        rty_BSpinningModeOnEM, rty_NThrottleMapEM, rty_PDischargeMaxEM,
        rty_rTorqueSplitEM, rty_PRegenMaxEM, rty_rTVMultiplierEM,
        rty_PEngineBrakingEM, rty_rEngineBrakingSplitEM);
    } else if (*rtu_NEventModeRotary == 2.0) {
      localDW->temporalCounter_i1_ke = 0U;
      localDW->is_c28_SteeringWheel = SteeringWheel_IN_Wheelspin;
      Steering_enter_atomic_Wheelspin(rty_MRegenMax, rty_NEventMode, rty_BTVOnEM,
        rty_BTCOnEM, rty_BDrivetrainCoolingOnEM, rty_BEMSOnEM,
        rty_BSpinningModeOnEM, rty_NThrottleMapEM, rty_PDischargeMaxEM,
        rty_rTorqueSplitEM, rty_PRegenMaxEM, rty_rTVMultiplierEM,
        rty_PEngineBrakingEM, rty_rEngineBrakingSplitEM);
    } else if (*rtu_NEventModeRotary == 3.0) {
      localDW->temporalCounter_i1_ke = 0U;
      localDW->is_c28_SteeringWheel = SteeringWheel_IN_Shakedown;
      Steering_enter_atomic_Shakedown(rty_MRegenMax, rty_NEventMode, rty_BTVOnEM,
        rty_BTCOnEM, rty_BDrivetrainCoolingOnEM, rty_BEMSOnEM,
        rty_BSpinningModeOnEM, rty_NThrottleMapEM, rty_PDischargeMaxEM,
        rty_rTorqueSplitEM, rty_PRegenMaxEM, rty_rTVMultiplierEM,
        rty_PEngineBrakingEM, rty_rEngineBrakingSplitEM);
    } else if (*rtu_NEventModeRotary == 5.0) {
      localDW->temporalCounter_i1_ke = 0U;
      localDW->is_c28_SteeringWheel = SteeringWheel_IN_Skidpad;
      SteeringWh_enter_atomic_Skidpad(rty_MRegenMax, rty_NEventMode, rty_BTVOnEM,
        rty_BTCOnEM, rty_BDrivetrainCoolingOnEM, rty_BEMSOnEM,
        rty_BSpinningModeOnEM, rty_NThrottleMapEM, rty_PDischargeMaxEM,
        rty_rTorqueSplitEM, rty_PRegenMaxEM, rty_rTVMultiplierEM,
        rty_PEngineBrakingEM, rty_rEngineBrakingSplitEM);
    } else if (*rtu_NEventModeRotary == 7.0) {
      localDW->temporalCounter_i1_ke = 0U;
      localDW->is_c28_SteeringWheel = SteeringWheel_IN_Endurance;
      Steering_enter_atomic_Endurance(rty_MRegenMax, rty_NEventMode, rty_BTVOnEM,
        rty_BTCOnEM, rty_BDrivetrainCoolingOnEM, rty_BEMSOnEM,
        rty_BSpinningModeOnEM, rty_NThrottleMapEM, rty_PDischargeMaxEM,
        rty_rTorqueSplitEM, rty_PRegenMaxEM, rty_rTVMultiplierEM,
        rty_PEngineBrakingEM, rty_rEngineBrakingSplitEM);
    } else if (*rtu_NEventModeRotary == 4.0) {
      localDW->temporalCounter_i1_ke = 0U;
      localDW->is_c28_SteeringWheel = SteeringWheel_IN_Acceleration;
      Steer_enter_atomic_Acceleration(rty_MRegenMax, rty_NEventMode, rty_BTVOnEM,
        rty_BTCOnEM, rty_BDrivetrainCoolingOnEM, rty_BEMSOnEM,
        rty_BSpinningModeOnEM, rty_NThrottleMapEM, rty_PDischargeMaxEM,
        rty_rTorqueSplitEM, rty_PRegenMaxEM, rty_rTVMultiplierEM,
        rty_PEngineBrakingEM, rty_rEngineBrakingSplitEM);
    } else if (*rtu_NEventModeRotary == 6.0) {
      localDW->temporalCounter_i1_ke = 0U;
      localDW->is_c28_SteeringWheel = SteeringWheel_IN_Autocross;
      Steering_enter_atomic_Autocross(rty_MRegenMax, rty_NEventMode, rty_BTVOnEM,
        rty_BTCOnEM, rty_BDrivetrainCoolingOnEM, rty_BEMSOnEM,
        rty_BSpinningModeOnEM, rty_NThrottleMapEM, rty_PDischargeMaxEM,
        rty_rTorqueSplitEM, rty_PRegenMaxEM, rty_rTVMultiplierEM,
        rty_PEngineBrakingEM, rty_rEngineBrakingSplitEM);
    } else if (*rtu_NEventModeRotary == 8.0) {
      localDW->temporalCounter_i1_ke = 0U;
      localDW->is_c28_SteeringWheel = SteeringWheel_IN_Limp;
      SteeringWheel_enter_atomic_Limp(rty_MRegenMax, rty_NEventMode, rty_BTVOnEM,
        rty_BTCOnEM, rty_BDrivetrainCoolingOnEM, rty_BEMSOnEM,
        rty_BSpinningModeOnEM, rty_NThrottleMapEM, rty_PDischargeMaxEM,
        rty_rTorqueSplitEM, rty_PRegenMaxEM, rty_rTVMultiplierEM,
        rty_PEngineBrakingEM, rty_rEngineBrakingSplitEM);
    }
  }

  /* End of Chart: '<Root>/NEventModeRotary System' */
}

/* Function for Chart: '<Root>/NEventModeRotary System' */
static void SteeringWheel_Scrut(const real_T *rtu_NEventModeRotary, real_T
  *rty_MRegenMax, real_T *rty_NEventMode, real_T *rty_BTVOnEM, real_T
  *rty_BTCOnEM, real_T *rty_BDrivetrainCoolingOnEM, real_T *rty_BEMSOnEM, real_T
  *rty_BSpinningModeOnEM, real_T *rty_NThrottleMapEM, real_T
  *rty_PDischargeMaxEM, real_T *rty_rTorqueSplitEM, real_T *rty_PRegenMaxEM,
  real_T *rty_rTVMultiplierEM, real_T *rty_PEngineBrakingEM, real_T
  *rty_rEngineBrakingSplitEM, DW_SteeringWheel_f_T *localDW)
{
  /* Chart: '<Root>/NEventModeRotary System' */
  *rty_BTVOnEM = 0.0;
  *rty_BTCOnEM = 0.0;
  *rty_BDrivetrainCoolingOnEM = 0.0;
  *rty_NThrottleMapEM = 1.0;
  *rty_PDischargeMaxEM = 5.0;
  *rty_rTorqueSplitEM = 0.5;
  *rty_PRegenMaxEM = 0.0;
  *rty_rTVMultiplierEM = 0.0;
  *rty_NEventMode = 1.0;
  *rty_BEMSOnEM = 0.0;
  *rty_BSpinningModeOnEM = 0.0;
  *rty_PEngineBrakingEM = 0.0;
  *rty_MRegenMax = 0.0;
  *rty_rEngineBrakingSplitEM = 1.0;
  if ((localDW->sfEvent == SteeringWheel_CALL_EVENT) &&
      (localDW->temporalCounter_i1_ke >= 500) && (*rtu_NEventModeRotary != 1.0))
  {
    if (*rtu_NEventModeRotary == 1.0) {
      localDW->temporalCounter_i1_ke = 0U;
      localDW->is_c28_SteeringWheel = SteeringWheel_IN_Scrut;
      SteeringWhee_enter_atomic_Scrut(rty_MRegenMax, rty_NEventMode, rty_BTVOnEM,
        rty_BTCOnEM, rty_BDrivetrainCoolingOnEM, rty_BEMSOnEM,
        rty_BSpinningModeOnEM, rty_NThrottleMapEM, rty_PDischargeMaxEM,
        rty_rTorqueSplitEM, rty_PRegenMaxEM, rty_rTVMultiplierEM,
        rty_PEngineBrakingEM, rty_rEngineBrakingSplitEM);
    } else if (*rtu_NEventModeRotary == 2.0) {
      localDW->temporalCounter_i1_ke = 0U;
      localDW->is_c28_SteeringWheel = SteeringWheel_IN_Wheelspin;
      Steering_enter_atomic_Wheelspin(rty_MRegenMax, rty_NEventMode, rty_BTVOnEM,
        rty_BTCOnEM, rty_BDrivetrainCoolingOnEM, rty_BEMSOnEM,
        rty_BSpinningModeOnEM, rty_NThrottleMapEM, rty_PDischargeMaxEM,
        rty_rTorqueSplitEM, rty_PRegenMaxEM, rty_rTVMultiplierEM,
        rty_PEngineBrakingEM, rty_rEngineBrakingSplitEM);
    } else if (*rtu_NEventModeRotary == 3.0) {
      localDW->temporalCounter_i1_ke = 0U;
      localDW->is_c28_SteeringWheel = SteeringWheel_IN_Shakedown;
      Steering_enter_atomic_Shakedown(rty_MRegenMax, rty_NEventMode, rty_BTVOnEM,
        rty_BTCOnEM, rty_BDrivetrainCoolingOnEM, rty_BEMSOnEM,
        rty_BSpinningModeOnEM, rty_NThrottleMapEM, rty_PDischargeMaxEM,
        rty_rTorqueSplitEM, rty_PRegenMaxEM, rty_rTVMultiplierEM,
        rty_PEngineBrakingEM, rty_rEngineBrakingSplitEM);
    } else if (*rtu_NEventModeRotary == 5.0) {
      localDW->temporalCounter_i1_ke = 0U;
      localDW->is_c28_SteeringWheel = SteeringWheel_IN_Skidpad;
      SteeringWh_enter_atomic_Skidpad(rty_MRegenMax, rty_NEventMode, rty_BTVOnEM,
        rty_BTCOnEM, rty_BDrivetrainCoolingOnEM, rty_BEMSOnEM,
        rty_BSpinningModeOnEM, rty_NThrottleMapEM, rty_PDischargeMaxEM,
        rty_rTorqueSplitEM, rty_PRegenMaxEM, rty_rTVMultiplierEM,
        rty_PEngineBrakingEM, rty_rEngineBrakingSplitEM);
    } else if (*rtu_NEventModeRotary == 7.0) {
      localDW->temporalCounter_i1_ke = 0U;
      localDW->is_c28_SteeringWheel = SteeringWheel_IN_Endurance;
      Steering_enter_atomic_Endurance(rty_MRegenMax, rty_NEventMode, rty_BTVOnEM,
        rty_BTCOnEM, rty_BDrivetrainCoolingOnEM, rty_BEMSOnEM,
        rty_BSpinningModeOnEM, rty_NThrottleMapEM, rty_PDischargeMaxEM,
        rty_rTorqueSplitEM, rty_PRegenMaxEM, rty_rTVMultiplierEM,
        rty_PEngineBrakingEM, rty_rEngineBrakingSplitEM);
    } else if (*rtu_NEventModeRotary == 4.0) {
      localDW->temporalCounter_i1_ke = 0U;
      localDW->is_c28_SteeringWheel = SteeringWheel_IN_Acceleration;
      Steer_enter_atomic_Acceleration(rty_MRegenMax, rty_NEventMode, rty_BTVOnEM,
        rty_BTCOnEM, rty_BDrivetrainCoolingOnEM, rty_BEMSOnEM,
        rty_BSpinningModeOnEM, rty_NThrottleMapEM, rty_PDischargeMaxEM,
        rty_rTorqueSplitEM, rty_PRegenMaxEM, rty_rTVMultiplierEM,
        rty_PEngineBrakingEM, rty_rEngineBrakingSplitEM);
    } else if (*rtu_NEventModeRotary == 6.0) {
      localDW->temporalCounter_i1_ke = 0U;
      localDW->is_c28_SteeringWheel = SteeringWheel_IN_Autocross;
      Steering_enter_atomic_Autocross(rty_MRegenMax, rty_NEventMode, rty_BTVOnEM,
        rty_BTCOnEM, rty_BDrivetrainCoolingOnEM, rty_BEMSOnEM,
        rty_BSpinningModeOnEM, rty_NThrottleMapEM, rty_PDischargeMaxEM,
        rty_rTorqueSplitEM, rty_PRegenMaxEM, rty_rTVMultiplierEM,
        rty_PEngineBrakingEM, rty_rEngineBrakingSplitEM);
    } else if (*rtu_NEventModeRotary == 8.0) {
      localDW->temporalCounter_i1_ke = 0U;
      localDW->is_c28_SteeringWheel = SteeringWheel_IN_Limp;
      SteeringWheel_enter_atomic_Limp(rty_MRegenMax, rty_NEventMode, rty_BTVOnEM,
        rty_BTCOnEM, rty_BDrivetrainCoolingOnEM, rty_BEMSOnEM,
        rty_BSpinningModeOnEM, rty_NThrottleMapEM, rty_PDischargeMaxEM,
        rty_rTorqueSplitEM, rty_PRegenMaxEM, rty_rTVMultiplierEM,
        rty_PEngineBrakingEM, rty_rEngineBrakingSplitEM);
    }
  }

  /* End of Chart: '<Root>/NEventModeRotary System' */
}

/* Function for Chart: '<Root>/NEventModeRotary System' */
static void SteeringWheel_Shakedown(const real_T *rtu_NEventModeRotary, real_T
  *rty_MRegenMax, real_T *rty_NEventMode, real_T *rty_BTVOnEM, real_T
  *rty_BTCOnEM, real_T *rty_BDrivetrainCoolingOnEM, real_T *rty_BEMSOnEM, real_T
  *rty_BSpinningModeOnEM, real_T *rty_NThrottleMapEM, real_T
  *rty_PDischargeMaxEM, real_T *rty_rTorqueSplitEM, real_T *rty_PRegenMaxEM,
  real_T *rty_rTVMultiplierEM, real_T *rty_PEngineBrakingEM, real_T
  *rty_rEngineBrakingSplitEM, DW_SteeringWheel_f_T *localDW)
{
  /* Chart: '<Root>/NEventModeRotary System' */
  *rty_BTVOnEM = 0.0;
  *rty_BTCOnEM = 0.0;
  *rty_BDrivetrainCoolingOnEM = 1.0;
  *rty_NThrottleMapEM = 6.0;
  *rty_PDischargeMaxEM = 38.0;
  *rty_rTorqueSplitEM = 0.7;
  *rty_PRegenMaxEM = 20.0;
  *rty_rTVMultiplierEM = 0.0;
  *rty_NEventMode = 3.0;
  *rty_BEMSOnEM = 0.0;
  *rty_BSpinningModeOnEM = 0.0;
  *rty_PEngineBrakingEM = 6.0;
  *rty_MRegenMax = 15.0;
  *rty_rEngineBrakingSplitEM = 1.0;
  if ((localDW->sfEvent == SteeringWheel_CALL_EVENT) &&
      (localDW->temporalCounter_i1_ke >= 500) && (*rtu_NEventModeRotary != 3.0))
  {
    if (*rtu_NEventModeRotary == 1.0) {
      localDW->temporalCounter_i1_ke = 0U;
      localDW->is_c28_SteeringWheel = SteeringWheel_IN_Scrut;
      SteeringWhee_enter_atomic_Scrut(rty_MRegenMax, rty_NEventMode, rty_BTVOnEM,
        rty_BTCOnEM, rty_BDrivetrainCoolingOnEM, rty_BEMSOnEM,
        rty_BSpinningModeOnEM, rty_NThrottleMapEM, rty_PDischargeMaxEM,
        rty_rTorqueSplitEM, rty_PRegenMaxEM, rty_rTVMultiplierEM,
        rty_PEngineBrakingEM, rty_rEngineBrakingSplitEM);
    } else if (*rtu_NEventModeRotary == 2.0) {
      localDW->temporalCounter_i1_ke = 0U;
      localDW->is_c28_SteeringWheel = SteeringWheel_IN_Wheelspin;
      Steering_enter_atomic_Wheelspin(rty_MRegenMax, rty_NEventMode, rty_BTVOnEM,
        rty_BTCOnEM, rty_BDrivetrainCoolingOnEM, rty_BEMSOnEM,
        rty_BSpinningModeOnEM, rty_NThrottleMapEM, rty_PDischargeMaxEM,
        rty_rTorqueSplitEM, rty_PRegenMaxEM, rty_rTVMultiplierEM,
        rty_PEngineBrakingEM, rty_rEngineBrakingSplitEM);
    } else if (*rtu_NEventModeRotary == 3.0) {
      localDW->temporalCounter_i1_ke = 0U;
      localDW->is_c28_SteeringWheel = SteeringWheel_IN_Shakedown;
      Steering_enter_atomic_Shakedown(rty_MRegenMax, rty_NEventMode, rty_BTVOnEM,
        rty_BTCOnEM, rty_BDrivetrainCoolingOnEM, rty_BEMSOnEM,
        rty_BSpinningModeOnEM, rty_NThrottleMapEM, rty_PDischargeMaxEM,
        rty_rTorqueSplitEM, rty_PRegenMaxEM, rty_rTVMultiplierEM,
        rty_PEngineBrakingEM, rty_rEngineBrakingSplitEM);
    } else if (*rtu_NEventModeRotary == 5.0) {
      localDW->temporalCounter_i1_ke = 0U;
      localDW->is_c28_SteeringWheel = SteeringWheel_IN_Skidpad;
      SteeringWh_enter_atomic_Skidpad(rty_MRegenMax, rty_NEventMode, rty_BTVOnEM,
        rty_BTCOnEM, rty_BDrivetrainCoolingOnEM, rty_BEMSOnEM,
        rty_BSpinningModeOnEM, rty_NThrottleMapEM, rty_PDischargeMaxEM,
        rty_rTorqueSplitEM, rty_PRegenMaxEM, rty_rTVMultiplierEM,
        rty_PEngineBrakingEM, rty_rEngineBrakingSplitEM);
    } else if (*rtu_NEventModeRotary == 7.0) {
      localDW->temporalCounter_i1_ke = 0U;
      localDW->is_c28_SteeringWheel = SteeringWheel_IN_Endurance;
      Steering_enter_atomic_Endurance(rty_MRegenMax, rty_NEventMode, rty_BTVOnEM,
        rty_BTCOnEM, rty_BDrivetrainCoolingOnEM, rty_BEMSOnEM,
        rty_BSpinningModeOnEM, rty_NThrottleMapEM, rty_PDischargeMaxEM,
        rty_rTorqueSplitEM, rty_PRegenMaxEM, rty_rTVMultiplierEM,
        rty_PEngineBrakingEM, rty_rEngineBrakingSplitEM);
    } else if (*rtu_NEventModeRotary == 4.0) {
      localDW->temporalCounter_i1_ke = 0U;
      localDW->is_c28_SteeringWheel = SteeringWheel_IN_Acceleration;
      Steer_enter_atomic_Acceleration(rty_MRegenMax, rty_NEventMode, rty_BTVOnEM,
        rty_BTCOnEM, rty_BDrivetrainCoolingOnEM, rty_BEMSOnEM,
        rty_BSpinningModeOnEM, rty_NThrottleMapEM, rty_PDischargeMaxEM,
        rty_rTorqueSplitEM, rty_PRegenMaxEM, rty_rTVMultiplierEM,
        rty_PEngineBrakingEM, rty_rEngineBrakingSplitEM);
    } else if (*rtu_NEventModeRotary == 6.0) {
      localDW->temporalCounter_i1_ke = 0U;
      localDW->is_c28_SteeringWheel = SteeringWheel_IN_Autocross;
      Steering_enter_atomic_Autocross(rty_MRegenMax, rty_NEventMode, rty_BTVOnEM,
        rty_BTCOnEM, rty_BDrivetrainCoolingOnEM, rty_BEMSOnEM,
        rty_BSpinningModeOnEM, rty_NThrottleMapEM, rty_PDischargeMaxEM,
        rty_rTorqueSplitEM, rty_PRegenMaxEM, rty_rTVMultiplierEM,
        rty_PEngineBrakingEM, rty_rEngineBrakingSplitEM);
    } else if (*rtu_NEventModeRotary == 8.0) {
      localDW->temporalCounter_i1_ke = 0U;
      localDW->is_c28_SteeringWheel = SteeringWheel_IN_Limp;
      SteeringWheel_enter_atomic_Limp(rty_MRegenMax, rty_NEventMode, rty_BTVOnEM,
        rty_BTCOnEM, rty_BDrivetrainCoolingOnEM, rty_BEMSOnEM,
        rty_BSpinningModeOnEM, rty_NThrottleMapEM, rty_PDischargeMaxEM,
        rty_rTorqueSplitEM, rty_PRegenMaxEM, rty_rTVMultiplierEM,
        rty_PEngineBrakingEM, rty_rEngineBrakingSplitEM);
    }
  }

  /* End of Chart: '<Root>/NEventModeRotary System' */
}

/* Function for Chart: '<Root>/NEventModeRotary System' */
static void SteeringWheel_Skidpad(const real_T *rtu_NEventModeRotary, real_T
  *rty_MRegenMax, real_T *rty_NEventMode, real_T *rty_BTVOnEM, real_T
  *rty_BTCOnEM, real_T *rty_BDrivetrainCoolingOnEM, real_T *rty_BEMSOnEM, real_T
  *rty_BSpinningModeOnEM, real_T *rty_NThrottleMapEM, real_T
  *rty_PDischargeMaxEM, real_T *rty_rTorqueSplitEM, real_T *rty_PRegenMaxEM,
  real_T *rty_rTVMultiplierEM, real_T *rty_PEngineBrakingEM, real_T
  *rty_rEngineBrakingSplitEM, DW_SteeringWheel_f_T *localDW)
{
  /* Chart: '<Root>/NEventModeRotary System' */
  *rty_BTVOnEM = 1.0;
  *rty_BTCOnEM = 1.0;
  *rty_BDrivetrainCoolingOnEM = 1.0;
  *rty_NThrottleMapEM = 5.0;
  *rty_PDischargeMaxEM = 58.0;
  *rty_rTorqueSplitEM = 0.7;
  *rty_PRegenMaxEM = 20.0;
  *rty_rTVMultiplierEM = 0.5;
  *rty_NEventMode = 5.0;
  *rty_BEMSOnEM = 0.0;
  *rty_BSpinningModeOnEM = 0.0;
  *rty_PEngineBrakingEM = 10.0;
  *rty_MRegenMax = 60.0;
  *rty_rEngineBrakingSplitEM = 1.0;
  if ((localDW->sfEvent == SteeringWheel_CALL_EVENT) &&
      (localDW->temporalCounter_i1_ke >= 500) && (*rtu_NEventModeRotary != 5.0))
  {
    if (*rtu_NEventModeRotary == 1.0) {
      localDW->temporalCounter_i1_ke = 0U;
      localDW->is_c28_SteeringWheel = SteeringWheel_IN_Scrut;
      SteeringWhee_enter_atomic_Scrut(rty_MRegenMax, rty_NEventMode, rty_BTVOnEM,
        rty_BTCOnEM, rty_BDrivetrainCoolingOnEM, rty_BEMSOnEM,
        rty_BSpinningModeOnEM, rty_NThrottleMapEM, rty_PDischargeMaxEM,
        rty_rTorqueSplitEM, rty_PRegenMaxEM, rty_rTVMultiplierEM,
        rty_PEngineBrakingEM, rty_rEngineBrakingSplitEM);
    } else if (*rtu_NEventModeRotary == 2.0) {
      localDW->temporalCounter_i1_ke = 0U;
      localDW->is_c28_SteeringWheel = SteeringWheel_IN_Wheelspin;
      Steering_enter_atomic_Wheelspin(rty_MRegenMax, rty_NEventMode, rty_BTVOnEM,
        rty_BTCOnEM, rty_BDrivetrainCoolingOnEM, rty_BEMSOnEM,
        rty_BSpinningModeOnEM, rty_NThrottleMapEM, rty_PDischargeMaxEM,
        rty_rTorqueSplitEM, rty_PRegenMaxEM, rty_rTVMultiplierEM,
        rty_PEngineBrakingEM, rty_rEngineBrakingSplitEM);
    } else if (*rtu_NEventModeRotary == 3.0) {
      localDW->temporalCounter_i1_ke = 0U;
      localDW->is_c28_SteeringWheel = SteeringWheel_IN_Shakedown;
      Steering_enter_atomic_Shakedown(rty_MRegenMax, rty_NEventMode, rty_BTVOnEM,
        rty_BTCOnEM, rty_BDrivetrainCoolingOnEM, rty_BEMSOnEM,
        rty_BSpinningModeOnEM, rty_NThrottleMapEM, rty_PDischargeMaxEM,
        rty_rTorqueSplitEM, rty_PRegenMaxEM, rty_rTVMultiplierEM,
        rty_PEngineBrakingEM, rty_rEngineBrakingSplitEM);
    } else if (*rtu_NEventModeRotary == 5.0) {
      localDW->temporalCounter_i1_ke = 0U;
      localDW->is_c28_SteeringWheel = SteeringWheel_IN_Skidpad;
      SteeringWh_enter_atomic_Skidpad(rty_MRegenMax, rty_NEventMode, rty_BTVOnEM,
        rty_BTCOnEM, rty_BDrivetrainCoolingOnEM, rty_BEMSOnEM,
        rty_BSpinningModeOnEM, rty_NThrottleMapEM, rty_PDischargeMaxEM,
        rty_rTorqueSplitEM, rty_PRegenMaxEM, rty_rTVMultiplierEM,
        rty_PEngineBrakingEM, rty_rEngineBrakingSplitEM);
    } else if (*rtu_NEventModeRotary == 7.0) {
      localDW->temporalCounter_i1_ke = 0U;
      localDW->is_c28_SteeringWheel = SteeringWheel_IN_Endurance;
      Steering_enter_atomic_Endurance(rty_MRegenMax, rty_NEventMode, rty_BTVOnEM,
        rty_BTCOnEM, rty_BDrivetrainCoolingOnEM, rty_BEMSOnEM,
        rty_BSpinningModeOnEM, rty_NThrottleMapEM, rty_PDischargeMaxEM,
        rty_rTorqueSplitEM, rty_PRegenMaxEM, rty_rTVMultiplierEM,
        rty_PEngineBrakingEM, rty_rEngineBrakingSplitEM);
    } else if (*rtu_NEventModeRotary == 4.0) {
      localDW->temporalCounter_i1_ke = 0U;
      localDW->is_c28_SteeringWheel = SteeringWheel_IN_Acceleration;
      Steer_enter_atomic_Acceleration(rty_MRegenMax, rty_NEventMode, rty_BTVOnEM,
        rty_BTCOnEM, rty_BDrivetrainCoolingOnEM, rty_BEMSOnEM,
        rty_BSpinningModeOnEM, rty_NThrottleMapEM, rty_PDischargeMaxEM,
        rty_rTorqueSplitEM, rty_PRegenMaxEM, rty_rTVMultiplierEM,
        rty_PEngineBrakingEM, rty_rEngineBrakingSplitEM);
    } else if (*rtu_NEventModeRotary == 6.0) {
      localDW->temporalCounter_i1_ke = 0U;
      localDW->is_c28_SteeringWheel = SteeringWheel_IN_Autocross;
      Steering_enter_atomic_Autocross(rty_MRegenMax, rty_NEventMode, rty_BTVOnEM,
        rty_BTCOnEM, rty_BDrivetrainCoolingOnEM, rty_BEMSOnEM,
        rty_BSpinningModeOnEM, rty_NThrottleMapEM, rty_PDischargeMaxEM,
        rty_rTorqueSplitEM, rty_PRegenMaxEM, rty_rTVMultiplierEM,
        rty_PEngineBrakingEM, rty_rEngineBrakingSplitEM);
    } else if (*rtu_NEventModeRotary == 8.0) {
      localDW->temporalCounter_i1_ke = 0U;
      localDW->is_c28_SteeringWheel = SteeringWheel_IN_Limp;
      SteeringWheel_enter_atomic_Limp(rty_MRegenMax, rty_NEventMode, rty_BTVOnEM,
        rty_BTCOnEM, rty_BDrivetrainCoolingOnEM, rty_BEMSOnEM,
        rty_BSpinningModeOnEM, rty_NThrottleMapEM, rty_PDischargeMaxEM,
        rty_rTorqueSplitEM, rty_PRegenMaxEM, rty_rTVMultiplierEM,
        rty_PEngineBrakingEM, rty_rEngineBrakingSplitEM);
    }
  }

  /* End of Chart: '<Root>/NEventModeRotary System' */
}

/* Function for Chart: '<Root>/NEventModeRotary System' */
static void SteeringWheel_Wheelspin(const real_T *rtu_NEventModeRotary, real_T
  *rty_MRegenMax, real_T *rty_NEventMode, real_T *rty_BTVOnEM, real_T
  *rty_BTCOnEM, real_T *rty_BDrivetrainCoolingOnEM, real_T *rty_BEMSOnEM, real_T
  *rty_BSpinningModeOnEM, real_T *rty_NThrottleMapEM, real_T
  *rty_PDischargeMaxEM, real_T *rty_rTorqueSplitEM, real_T *rty_PRegenMaxEM,
  real_T *rty_rTVMultiplierEM, real_T *rty_PEngineBrakingEM, real_T
  *rty_rEngineBrakingSplitEM, DW_SteeringWheel_f_T *localDW)
{
  /* Chart: '<Root>/NEventModeRotary System' */
  *rty_BTVOnEM = 0.0;
  *rty_BTCOnEM = 0.0;
  *rty_BDrivetrainCoolingOnEM = 0.0;
  *rty_NThrottleMapEM = 1.0;
  *rty_PDischargeMaxEM = 5.0;
  *rty_rTorqueSplitEM = 0.5;
  *rty_PRegenMaxEM = 0.0;
  *rty_rTVMultiplierEM = 0.0;
  *rty_NEventMode = 2.0;
  *rty_BEMSOnEM = 0.0;
  *rty_BSpinningModeOnEM = 1.0;
  *rty_PEngineBrakingEM = 0.0;
  *rty_MRegenMax = 0.0;
  *rty_rEngineBrakingSplitEM = 1.0;
  if ((localDW->sfEvent == SteeringWheel_CALL_EVENT) &&
      (localDW->temporalCounter_i1_ke >= 500) && (*rtu_NEventModeRotary != 2.0))
  {
    if (*rtu_NEventModeRotary == 1.0) {
      localDW->temporalCounter_i1_ke = 0U;
      localDW->is_c28_SteeringWheel = SteeringWheel_IN_Scrut;
      SteeringWhee_enter_atomic_Scrut(rty_MRegenMax, rty_NEventMode, rty_BTVOnEM,
        rty_BTCOnEM, rty_BDrivetrainCoolingOnEM, rty_BEMSOnEM,
        rty_BSpinningModeOnEM, rty_NThrottleMapEM, rty_PDischargeMaxEM,
        rty_rTorqueSplitEM, rty_PRegenMaxEM, rty_rTVMultiplierEM,
        rty_PEngineBrakingEM, rty_rEngineBrakingSplitEM);
    } else if (*rtu_NEventModeRotary == 2.0) {
      localDW->temporalCounter_i1_ke = 0U;
      localDW->is_c28_SteeringWheel = SteeringWheel_IN_Wheelspin;
      Steering_enter_atomic_Wheelspin(rty_MRegenMax, rty_NEventMode, rty_BTVOnEM,
        rty_BTCOnEM, rty_BDrivetrainCoolingOnEM, rty_BEMSOnEM,
        rty_BSpinningModeOnEM, rty_NThrottleMapEM, rty_PDischargeMaxEM,
        rty_rTorqueSplitEM, rty_PRegenMaxEM, rty_rTVMultiplierEM,
        rty_PEngineBrakingEM, rty_rEngineBrakingSplitEM);
    } else if (*rtu_NEventModeRotary == 3.0) {
      localDW->temporalCounter_i1_ke = 0U;
      localDW->is_c28_SteeringWheel = SteeringWheel_IN_Shakedown;
      Steering_enter_atomic_Shakedown(rty_MRegenMax, rty_NEventMode, rty_BTVOnEM,
        rty_BTCOnEM, rty_BDrivetrainCoolingOnEM, rty_BEMSOnEM,
        rty_BSpinningModeOnEM, rty_NThrottleMapEM, rty_PDischargeMaxEM,
        rty_rTorqueSplitEM, rty_PRegenMaxEM, rty_rTVMultiplierEM,
        rty_PEngineBrakingEM, rty_rEngineBrakingSplitEM);
    } else if (*rtu_NEventModeRotary == 5.0) {
      localDW->temporalCounter_i1_ke = 0U;
      localDW->is_c28_SteeringWheel = SteeringWheel_IN_Skidpad;
      SteeringWh_enter_atomic_Skidpad(rty_MRegenMax, rty_NEventMode, rty_BTVOnEM,
        rty_BTCOnEM, rty_BDrivetrainCoolingOnEM, rty_BEMSOnEM,
        rty_BSpinningModeOnEM, rty_NThrottleMapEM, rty_PDischargeMaxEM,
        rty_rTorqueSplitEM, rty_PRegenMaxEM, rty_rTVMultiplierEM,
        rty_PEngineBrakingEM, rty_rEngineBrakingSplitEM);
    } else if (*rtu_NEventModeRotary == 7.0) {
      localDW->temporalCounter_i1_ke = 0U;
      localDW->is_c28_SteeringWheel = SteeringWheel_IN_Endurance;
      Steering_enter_atomic_Endurance(rty_MRegenMax, rty_NEventMode, rty_BTVOnEM,
        rty_BTCOnEM, rty_BDrivetrainCoolingOnEM, rty_BEMSOnEM,
        rty_BSpinningModeOnEM, rty_NThrottleMapEM, rty_PDischargeMaxEM,
        rty_rTorqueSplitEM, rty_PRegenMaxEM, rty_rTVMultiplierEM,
        rty_PEngineBrakingEM, rty_rEngineBrakingSplitEM);
    } else if (*rtu_NEventModeRotary == 4.0) {
      localDW->temporalCounter_i1_ke = 0U;
      localDW->is_c28_SteeringWheel = SteeringWheel_IN_Acceleration;
      Steer_enter_atomic_Acceleration(rty_MRegenMax, rty_NEventMode, rty_BTVOnEM,
        rty_BTCOnEM, rty_BDrivetrainCoolingOnEM, rty_BEMSOnEM,
        rty_BSpinningModeOnEM, rty_NThrottleMapEM, rty_PDischargeMaxEM,
        rty_rTorqueSplitEM, rty_PRegenMaxEM, rty_rTVMultiplierEM,
        rty_PEngineBrakingEM, rty_rEngineBrakingSplitEM);
    } else if (*rtu_NEventModeRotary == 6.0) {
      localDW->temporalCounter_i1_ke = 0U;
      localDW->is_c28_SteeringWheel = SteeringWheel_IN_Autocross;
      Steering_enter_atomic_Autocross(rty_MRegenMax, rty_NEventMode, rty_BTVOnEM,
        rty_BTCOnEM, rty_BDrivetrainCoolingOnEM, rty_BEMSOnEM,
        rty_BSpinningModeOnEM, rty_NThrottleMapEM, rty_PDischargeMaxEM,
        rty_rTorqueSplitEM, rty_PRegenMaxEM, rty_rTVMultiplierEM,
        rty_PEngineBrakingEM, rty_rEngineBrakingSplitEM);
    } else if (*rtu_NEventModeRotary == 8.0) {
      localDW->temporalCounter_i1_ke = 0U;
      localDW->is_c28_SteeringWheel = SteeringWheel_IN_Limp;
      SteeringWheel_enter_atomic_Limp(rty_MRegenMax, rty_NEventMode, rty_BTVOnEM,
        rty_BTCOnEM, rty_BDrivetrainCoolingOnEM, rty_BEMSOnEM,
        rty_BSpinningModeOnEM, rty_NThrottleMapEM, rty_PDischargeMaxEM,
        rty_rTorqueSplitEM, rty_PRegenMaxEM, rty_rTVMultiplierEM,
        rty_PEngineBrakingEM, rty_rEngineBrakingSplitEM);
    }
  }

  /* End of Chart: '<Root>/NEventModeRotary System' */
}

/* Function for Chart: '<S6>/Incremental' */
static void SteeringWheel_Page9(const real_T *rtu_NPageSelectRotary,
  DW_SteeringWheel_f_T *localDW)
{
  /* Chart: '<S6>/Incremental' */
  if ((*rtu_NPageSelectRotary < localDW->old) && (*rtu_NPageSelectRotary !=
       localDW->old)) {
    localDW->is_c27_SteeringWheel = SteeringWheel_IN_Page8;
    localDW->old = *rtu_NPageSelectRotary;
  } else if ((*rtu_NPageSelectRotary > localDW->old) && (*rtu_NPageSelectRotary
              != localDW->old)) {
    localDW->is_c27_SteeringWheel = SteeringWheel_IN_Page10;
    localDW->old = *rtu_NPageSelectRotary;
  }

  /* End of Chart: '<S6>/Incremental' */
}

/* System initialize for referenced model: 'SteeringWheel' */
void SteeringWheel_Init(real_T *rty_MRegenMax, real_T *rty_PEngineBrakingEM,
  real_T *rty_rEngineBrakingSplitEM, DW_SteeringWheel_f_T *localDW)
{
  /* SystemInitialize for Chart: '<Root>/NEventModeRotary System' */
  localDW->sfEvent = SteeringWheel_CALL_EVENT;
  *rty_PEngineBrakingEM = 14.0;
  *rty_MRegenMax = 15.0;
  *rty_rEngineBrakingSplitEM = 1.0;
}

/* Output and update for referenced model: 'SteeringWheel' */
void SteeringWheel(const real_T *rtu_NEventModeRotary, const real_T
                   *rtu_NParameterRotary, const boolean_T
                   *rtu_BSteeringWheelButton3, const boolean_T
                   *rtu_BSteeringWheelButton4, const real_T
                   *rtu_NPageSelectRotary, const boolean_T
                   *rtu_BSteeringWheelButton2, const boolean_T
                   *rtu_BSteeringWheelButton1, const real_T *rtu_NCarState,
                   boolean_T *rty_BPageUp, boolean_T *rty_BPageDown, boolean_T
                   *rty_BInvLVOn, boolean_T *rty_BCalibrationOn, boolean_T
                   *rty_BDataMark, boolean_T *rty_BReadyToDriveButton, boolean_T
                   *rty_BErrorReset, boolean_T *rty_BTVOn, boolean_T *rty_BTCOn,
                   boolean_T *rty_BDrivetrainCoolingOn, boolean_T *rty_BEMSOn,
                   boolean_T *rty_BSpinningModeOn, real_T *rty_NThrottleMap,
                   real_T *rty_PDischargeMax, real_T *rty_rTorqueSplit, real_T
                   *rty_PRegenMax, real_T *rty_rTVMultiplier, real_T
                   *rty_PEngineBraking, real_T *rty_rEngineBrakingSplit, real_T *
                   rty_rGrip, real_T *rty_EOffset, real_T *rty_NTCKdSelector,
                   real_T *rty_MRegenMax, real_T *rty_NEventMode, real_T
                   *rty_NPCKpSelector, real_T *rty_BTVOnEM, real_T *rty_BTCOnEM,
                   real_T *rty_BDrivetrainCoolingOnEM, real_T *rty_BEMSOnEM,
                   real_T *rty_BSpinningModeOnEM, real_T *rty_NThrottleMapEM,
                   real_T *rty_PDischargeMaxEM, real_T *rty_rTorqueSplitEM,
                   real_T *rty_PRegenMaxEM, real_T *rty_rTVMultiplierEM, real_T *
                   rty_PEngineBrakingEM, real_T *rty_rEngineBrakingSplitEM,
                   real_T *rty_BTVOnOW, real_T *rty_BTCOnOW, real_T
                   *rty_BDrivetrainCoolingOnOW, real_T *rty_BEMSOnOW, real_T
                   *rty_BSpinningModeOnOW, real_T *rty_NThrottleMapOW, real_T
                   *rty_PDischargeMaxOW, real_T *rty_rTorqueSplitOW, real_T
                   *rty_PRegenMaxOW, real_T *rty_rTVMultiplierOW, real_T
                   *rty_PEngineBrakingOW, real_T *rty_rEngineBrakingSplitOW,
                   B_SteeringWheel_c_T *localB, DW_SteeringWheel_f_T *localDW)
{
  real_T tmp;
  boolean_T rtb_BSteeringWheelButton3;
  boolean_T rtb_BSteeringWheelButton4;

  /* If: '<S7>/If' */
  if (*rtu_NParameterRotary == 1.0) {
    /* Outputs for IfAction SubSystem: '<S7>/If Action Subsystem10' incorporates:
     *  ActionPort: '<S21>/Action Port'
     */
    SteeringWhe_IfActionSubsystem10(rtu_BSteeringWheelButton3,
      rtu_BSteeringWheelButton4, &localB->BSteeringWheelBut_mjgxg0ouwr0d2,
      &localB->BSteeringWheelBut_i2wy1eqoz13di);

    /* End of Outputs for SubSystem: '<S7>/If Action Subsystem10' */
  } else if (*rtu_NParameterRotary == 2.0) {
    /* Outputs for IfAction SubSystem: '<S7>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S20>/Action Port'
     */
    SteeringWhe_IfActionSubsystem10(rtu_BSteeringWheelButton3,
      rtu_BSteeringWheelButton4, &localB->BSteeringWheelButt_mjgxg0ouwr0d,
      &localB->BSteeringWheelButt_i2wy1eqoz13d);

    /* End of Outputs for SubSystem: '<S7>/If Action Subsystem1' */
  } else if (*rtu_NParameterRotary == 3.0) {
    /* Outputs for IfAction SubSystem: '<S7>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S27>/Action Port'
     */
    SteeringWhe_IfActionSubsystem10(rtu_BSteeringWheelButton3,
      rtu_BSteeringWheelButton4, &localB->BSteeringWheelButto_mjgxg0ouwr0,
      &localB->BSteeringWheelButto_i2wy1eqoz13);

    /* End of Outputs for SubSystem: '<S7>/If Action Subsystem2' */
  } else if (*rtu_NParameterRotary == 4.0) {
    /* Outputs for IfAction SubSystem: '<S7>/If Action Subsystem3' incorporates:
     *  ActionPort: '<S28>/Action Port'
     */
    SteeringWhe_IfActionSubsystem10(rtu_BSteeringWheelButton3,
      rtu_BSteeringWheelButton4, &localB->BSteeringWheelButton_mjgxg0ouwr,
      &localB->BSteeringWheelButton_i2wy1eqoz1);

    /* End of Outputs for SubSystem: '<S7>/If Action Subsystem3' */
  } else if (*rtu_NParameterRotary == 5.0) {
    /* Outputs for IfAction SubSystem: '<S7>/If Action Subsystem4' incorporates:
     *  ActionPort: '<S29>/Action Port'
     */
    SteeringWhe_IfActionSubsystem10(rtu_BSteeringWheelButton3,
      rtu_BSteeringWheelButton4, &localB->BSteeringWheelButton3_mjgxg0ouw,
      &localB->BSteeringWheelButton4_i2wy1eqoz);

    /* End of Outputs for SubSystem: '<S7>/If Action Subsystem4' */
  } else if (*rtu_NParameterRotary == 6.0) {
    /* Outputs for IfAction SubSystem: '<S7>/If Action Subsystem5' incorporates:
     *  ActionPort: '<S30>/Action Port'
     */
    SteeringWhe_IfActionSubsystem10(rtu_BSteeringWheelButton3,
      rtu_BSteeringWheelButton4, &localB->BSteeringWheelButton3_mjgxg0ou,
      &localB->BSteeringWheelButton4_i2wy1eqo);

    /* End of Outputs for SubSystem: '<S7>/If Action Subsystem5' */
  } else if (*rtu_NParameterRotary == 7.0) {
    /* Outputs for IfAction SubSystem: '<S7>/If Action Subsystem6' incorporates:
     *  ActionPort: '<S31>/Action Port'
     */
    SteeringWhe_IfActionSubsystem10(rtu_BSteeringWheelButton3,
      rtu_BSteeringWheelButton4, &rtb_BSteeringWheelButton3,
      &rtb_BSteeringWheelButton4);

    /* End of Outputs for SubSystem: '<S7>/If Action Subsystem6' */
  } else if (*rtu_NParameterRotary == 8.0) {
    /* Outputs for IfAction SubSystem: '<S7>/If Action Subsystem7' incorporates:
     *  ActionPort: '<S32>/Action Port'
     */
    SteeringWhe_IfActionSubsystem10(rtu_BSteeringWheelButton3,
      rtu_BSteeringWheelButton4, &localB->BSteeringWheelButton3_mjgxg0o,
      &localB->BSteeringWheelButton4_i2wy1eq);

    /* End of Outputs for SubSystem: '<S7>/If Action Subsystem7' */
  } else if (*rtu_NParameterRotary == 9.0) {
    /* Outputs for IfAction SubSystem: '<S7>/If Action Subsystem8' incorporates:
     *  ActionPort: '<S33>/Action Port'
     */
    SteeringWhe_IfActionSubsystem10(rtu_BSteeringWheelButton3,
      rtu_BSteeringWheelButton4, &localB->BSteeringWheelButton3_mjgxg0,
      &localB->BSteeringWheelButton4_i2wy1e);

    /* End of Outputs for SubSystem: '<S7>/If Action Subsystem8' */
  } else if (*rtu_NParameterRotary == 10.0) {
    /* Outputs for IfAction SubSystem: '<S7>/If Action Subsystem9' incorporates:
     *  ActionPort: '<S34>/Action Port'
     */
    SteeringWhe_IfActionSubsystem10(rtu_BSteeringWheelButton3,
      rtu_BSteeringWheelButton4, &localB->BSteeringWheelButton3_mjgxg,
      &localB->BSteeringWheelButton4_i2wy1);

    /* End of Outputs for SubSystem: '<S7>/If Action Subsystem9' */
  } else if (*rtu_NParameterRotary == 11.0) {
    /* Outputs for IfAction SubSystem: '<S7>/If Action Subsystem11' incorporates:
     *  ActionPort: '<S22>/Action Port'
     */
    SteeringWhe_IfActionSubsystem10(rtu_BSteeringWheelButton3,
      rtu_BSteeringWheelButton4, &localB->BSteeringWheelButton3_mjgx,
      &localB->BSteeringWheelButton4_i2wy);

    /* End of Outputs for SubSystem: '<S7>/If Action Subsystem11' */
  } else if (*rtu_NParameterRotary == 12.0) {
    /* Outputs for IfAction SubSystem: '<S7>/If Action Subsystem13' incorporates:
     *  ActionPort: '<S24>/Action Port'
     */
    SteeringWhe_IfActionSubsystem10(rtu_BSteeringWheelButton3,
      rtu_BSteeringWheelButton4, &localB->BSteeringWheelButton3_mjg,
      &localB->BSteeringWheelButton4_i2w);

    /* End of Outputs for SubSystem: '<S7>/If Action Subsystem13' */
  } else if (*rtu_NParameterRotary == 13.0) {
    /* Outputs for IfAction SubSystem: '<S7>/If Action Subsystem12' incorporates:
     *  ActionPort: '<S23>/Action Port'
     */
    SteeringWhe_IfActionSubsystem10(rtu_BSteeringWheelButton3,
      rtu_BSteeringWheelButton4, &localB->BSteeringWheelButton3_mj,
      &localB->BSteeringWheelButton4_i2);

    /* End of Outputs for SubSystem: '<S7>/If Action Subsystem12' */
  } else if (*rtu_NParameterRotary == 14.0) {
    /* Outputs for IfAction SubSystem: '<S7>/If Action Subsystem14' incorporates:
     *  ActionPort: '<S25>/Action Port'
     */
    SteeringWhe_IfActionSubsystem10(rtu_BSteeringWheelButton3,
      rtu_BSteeringWheelButton4, &localB->BSteeringWheelButton3_m,
      &localB->BSteeringWheelButton4_i);

    /* End of Outputs for SubSystem: '<S7>/If Action Subsystem14' */
  } else if (*rtu_NParameterRotary == 15.0) {
    /* Outputs for IfAction SubSystem: '<S7>/If Action Subsystem15' incorporates:
     *  ActionPort: '<S26>/Action Port'
     */
    SteeringWhe_IfActionSubsystem10(rtu_BSteeringWheelButton3,
      rtu_BSteeringWheelButton4, &localB->BSteeringWheelButton3,
      &localB->BSteeringWheelButton4);

    /* End of Outputs for SubSystem: '<S7>/If Action Subsystem15' */
  }

  /* End of If: '<S7>/If' */

  /* Chart: '<S7>/BTVOn' incorporates:
   *  DataTypeConversion: '<S7>/Data Type Conversion38'
   *  DataTypeConversion: '<S7>/Data Type Conversion39'
   */
  if (localDW->temporalCounter_i1_o < 511) {
    localDW->temporalCounter_i1_o++;
  }

  if (localDW->is_active_c8_SteeringWheel == 0) {
    localDW->is_active_c8_SteeringWheel = 1U;
    localDW->temporalCounter_i1_o = 0U;
    localDW->is_c8_SteeringWheel = SteeringWheel_IN_Map13;
    localB->BTVOnOW = -1.0;
  } else {
    switch (localDW->is_c8_SteeringWheel) {
     case SteeringWheel_IN_Map11:
      if ((localDW->temporalCounter_i1_o >= 500) &&
          localB->BSteeringWheelBut_i2wy1eqoz13di) {
        localDW->temporalCounter_i1_o = 0U;
        localDW->is_c8_SteeringWheel = SteeringWheel_IN_Map12;
        localB->BTVOnOW = 1.0;
      } else if ((localDW->temporalCounter_i1_o >= 500) &&
                 localB->BSteeringWheelBut_mjgxg0ouwr0d2) {
        localDW->temporalCounter_i1_o = 0U;
        localDW->is_c8_SteeringWheel = SteeringWheel_IN_Map13;
        localB->BTVOnOW = -1.0;
      } else {
        localB->BTVOnOW = 0.0;
      }
      break;

     case SteeringWheel_IN_Map12:
      if ((localDW->temporalCounter_i1_o >= 500) &&
          localB->BSteeringWheelBut_i2wy1eqoz13di) {
        localDW->temporalCounter_i1_o = 0U;
        localDW->is_c8_SteeringWheel = SteeringWheel_IN_Map13;
        localB->BTVOnOW = -1.0;
      } else if ((localDW->temporalCounter_i1_o >= 500) &&
                 localB->BSteeringWheelBut_mjgxg0ouwr0d2) {
        localDW->temporalCounter_i1_o = 0U;
        localDW->is_c8_SteeringWheel = SteeringWheel_IN_Map11;
        localB->BTVOnOW = 0.0;
      }
      break;

     default:
      /* case IN_Map13: */
      if ((localDW->temporalCounter_i1_o >= 500) &&
          localB->BSteeringWheelBut_i2wy1eqoz13di) {
        localDW->temporalCounter_i1_o = 0U;
        localDW->is_c8_SteeringWheel = SteeringWheel_IN_Map11;
        localB->BTVOnOW = 0.0;
      } else if ((localDW->temporalCounter_i1_o >= 500) &&
                 localB->BSteeringWheelBut_mjgxg0ouwr0d2) {
        localDW->temporalCounter_i1_o = 0U;
        localDW->is_c8_SteeringWheel = SteeringWheel_IN_Map12;
        localB->BTVOnOW = 1.0;
      } else {
        localB->BTVOnOW = -1.0;
      }
      break;
    }
  }

  /* End of Chart: '<S7>/BTVOn' */

  /* DataTypeConversion: '<S7>/Data Type Conversion6' */
  *rty_BTVOnOW = localB->BTVOnOW;

  /* Chart: '<S7>/BTCOn' incorporates:
   *  DataTypeConversion: '<S7>/Data Type Conversion36'
   *  DataTypeConversion: '<S7>/Data Type Conversion37'
   */
  if (localDW->temporalCounter_i1_eg < 511) {
    localDW->temporalCounter_i1_eg++;
  }

  if (localDW->is_active_c9_SteeringWheel == 0) {
    localDW->is_active_c9_SteeringWheel = 1U;
    localDW->temporalCounter_i1_eg = 0U;
    localDW->is_c9_SteeringWheel = SteeringWheel_IN_Map13;
    localB->BTCOnOW = -1.0;
  } else {
    switch (localDW->is_c9_SteeringWheel) {
     case SteeringWheel_IN_Map11:
      if ((localDW->temporalCounter_i1_eg >= 500) &&
          localB->BSteeringWheelButt_mjgxg0ouwr0d) {
        localDW->temporalCounter_i1_eg = 0U;
        localDW->is_c9_SteeringWheel = SteeringWheel_IN_Map13;
        localB->BTCOnOW = -1.0;
      } else if ((localDW->temporalCounter_i1_eg >= 500) &&
                 localB->BSteeringWheelButt_i2wy1eqoz13d) {
        localDW->temporalCounter_i1_eg = 0U;
        localDW->is_c9_SteeringWheel = SteeringWheel_IN_Map12;
        localB->BTCOnOW = 1.0;
      } else {
        localB->BTCOnOW = 0.0;
      }
      break;

     case SteeringWheel_IN_Map12:
      if ((localDW->temporalCounter_i1_eg >= 500) &&
          localB->BSteeringWheelButt_mjgxg0ouwr0d) {
        localDW->temporalCounter_i1_eg = 0U;
        localDW->is_c9_SteeringWheel = SteeringWheel_IN_Map11;
        localB->BTCOnOW = 0.0;
      } else if ((localDW->temporalCounter_i1_eg >= 500) &&
                 localB->BSteeringWheelButt_i2wy1eqoz13d) {
        localDW->temporalCounter_i1_eg = 0U;
        localDW->is_c9_SteeringWheel = SteeringWheel_IN_Map13;
        localB->BTCOnOW = -1.0;
      }
      break;

     default:
      /* case IN_Map13: */
      if ((localDW->temporalCounter_i1_eg >= 500) &&
          localB->BSteeringWheelButt_i2wy1eqoz13d) {
        localDW->temporalCounter_i1_eg = 0U;
        localDW->is_c9_SteeringWheel = SteeringWheel_IN_Map11;
        localB->BTCOnOW = 0.0;
      } else if ((localDW->temporalCounter_i1_eg >= 500) &&
                 localB->BSteeringWheelButt_mjgxg0ouwr0d) {
        localDW->temporalCounter_i1_eg = 0U;
        localDW->is_c9_SteeringWheel = SteeringWheel_IN_Map12;
        localB->BTCOnOW = 1.0;
      } else {
        localB->BTCOnOW = -1.0;
      }
      break;
    }
  }

  /* End of Chart: '<S7>/BTCOn' */

  /* DataTypeConversion: '<S7>/Data Type Conversion2' */
  *rty_BTCOnOW = localB->BTCOnOW;

  /* Chart: '<S7>/BDrivetrainCoolingOn' incorporates:
   *  DataTypeConversion: '<S7>/Data Type Conversion34'
   *  DataTypeConversion: '<S7>/Data Type Conversion35'
   */
  if (localDW->temporalCounter_i1_b < 511) {
    localDW->temporalCounter_i1_b++;
  }

  if (localDW->is_active_c13_SteeringWheel == 0) {
    localDW->is_active_c13_SteeringWheel = 1U;
    localDW->temporalCounter_i1_b = 0U;
    localDW->is_c13_SteeringWheel = SteeringWheel_IN_Map13;
    localB->BDrivetrainCoolingOW = -1.0;
  } else {
    switch (localDW->is_c13_SteeringWheel) {
     case SteeringWheel_IN_Map11:
      if ((localDW->temporalCounter_i1_b >= 500) &&
          localB->BSteeringWheelButto_i2wy1eqoz13) {
        localDW->temporalCounter_i1_b = 0U;
        localDW->is_c13_SteeringWheel = SteeringWheel_IN_Map12;
        localB->BDrivetrainCoolingOW = 1.0;
      } else if ((localDW->temporalCounter_i1_b >= 500) &&
                 localB->BSteeringWheelButto_mjgxg0ouwr0) {
        localDW->temporalCounter_i1_b = 0U;
        localDW->is_c13_SteeringWheel = SteeringWheel_IN_Map13;
        localB->BDrivetrainCoolingOW = -1.0;
      } else {
        localB->BDrivetrainCoolingOW = 0.0;
      }
      break;

     case SteeringWheel_IN_Map12:
      if ((localDW->temporalCounter_i1_b >= 500) &&
          localB->BSteeringWheelButto_mjgxg0ouwr0) {
        localDW->temporalCounter_i1_b = 0U;
        localDW->is_c13_SteeringWheel = SteeringWheel_IN_Map11;
        localB->BDrivetrainCoolingOW = 0.0;
      } else if ((localDW->temporalCounter_i1_b >= 500) &&
                 localB->BSteeringWheelButto_i2wy1eqoz13) {
        localDW->temporalCounter_i1_b = 0U;
        localDW->is_c13_SteeringWheel = SteeringWheel_IN_Map13;
        localB->BDrivetrainCoolingOW = -1.0;
      }
      break;

     default:
      /* case IN_Map13: */
      if ((localDW->temporalCounter_i1_b >= 500) &&
          localB->BSteeringWheelButto_i2wy1eqoz13) {
        localDW->temporalCounter_i1_b = 0U;
        localDW->is_c13_SteeringWheel = SteeringWheel_IN_Map11;
        localB->BDrivetrainCoolingOW = 0.0;
      } else if ((localDW->temporalCounter_i1_b >= 500) &&
                 localB->BSteeringWheelButto_mjgxg0ouwr0) {
        localDW->temporalCounter_i1_b = 0U;
        localDW->is_c13_SteeringWheel = SteeringWheel_IN_Map12;
        localB->BDrivetrainCoolingOW = 1.0;
      } else {
        localB->BDrivetrainCoolingOW = -1.0;
      }
      break;
    }
  }

  /* End of Chart: '<S7>/BDrivetrainCoolingOn' */

  /* DataTypeConversion: '<S7>/Data Type Conversion1' */
  *rty_BDrivetrainCoolingOnOW = localB->BDrivetrainCoolingOW;

  /* Chart: '<S7>/BEMSOn' incorporates:
   *  DataTypeConversion: '<S7>/Data Type Conversion32'
   *  DataTypeConversion: '<S7>/Data Type Conversion33'
   */
  if (localDW->temporalCounter_i1_k < 511) {
    localDW->temporalCounter_i1_k++;
  }

  if (localDW->is_active_c23_SteeringWheel == 0) {
    localDW->is_active_c23_SteeringWheel = 1U;
    localDW->temporalCounter_i1_k = 0U;
    localDW->is_c23_SteeringWheel = SteeringWheel_IN_Map13;
    localB->BEMSOnOW = -1.0;
  } else {
    switch (localDW->is_c23_SteeringWheel) {
     case SteeringWheel_IN_Map11:
      if ((localDW->temporalCounter_i1_k >= 500) &&
          localB->BSteeringWheelButton_i2wy1eqoz1) {
        localDW->temporalCounter_i1_k = 0U;
        localDW->is_c23_SteeringWheel = SteeringWheel_IN_Map12;
        localB->BEMSOnOW = 1.0;
      } else if ((localDW->temporalCounter_i1_k >= 500) &&
                 localB->BSteeringWheelButton_mjgxg0ouwr) {
        localDW->temporalCounter_i1_k = 0U;
        localDW->is_c23_SteeringWheel = SteeringWheel_IN_Map13;
        localB->BEMSOnOW = -1.0;
      } else {
        localB->BEMSOnOW = 0.0;
      }
      break;

     case SteeringWheel_IN_Map12:
      if ((localDW->temporalCounter_i1_k >= 500) &&
          localB->BSteeringWheelButton_mjgxg0ouwr) {
        localDW->temporalCounter_i1_k = 0U;
        localDW->is_c23_SteeringWheel = SteeringWheel_IN_Map11;
        localB->BEMSOnOW = 0.0;
      } else if ((localDW->temporalCounter_i1_k >= 500) &&
                 localB->BSteeringWheelButton_i2wy1eqoz1) {
        localDW->temporalCounter_i1_k = 0U;
        localDW->is_c23_SteeringWheel = SteeringWheel_IN_Map13;
        localB->BEMSOnOW = -1.0;
      }
      break;

     default:
      /* case IN_Map13: */
      if ((localDW->temporalCounter_i1_k >= 500) &&
          localB->BSteeringWheelButton_i2wy1eqoz1) {
        localDW->temporalCounter_i1_k = 0U;
        localDW->is_c23_SteeringWheel = SteeringWheel_IN_Map11;
        localB->BEMSOnOW = 0.0;
      } else if ((localDW->temporalCounter_i1_k >= 500) &&
                 localB->BSteeringWheelButton_mjgxg0ouwr) {
        localDW->temporalCounter_i1_k = 0U;
        localDW->is_c23_SteeringWheel = SteeringWheel_IN_Map12;
        localB->BEMSOnOW = 1.0;
      } else {
        localB->BEMSOnOW = -1.0;
      }
      break;
    }
  }

  /* End of Chart: '<S7>/BEMSOn' */

  /* DataTypeConversion: '<S7>/Data Type Conversion3' */
  *rty_BEMSOnOW = localB->BEMSOnOW;

  /* Chart: '<S7>/BSpinningModeOn' incorporates:
   *  DataTypeConversion: '<S7>/Data Type Conversion30'
   *  DataTypeConversion: '<S7>/Data Type Conversion31'
   */
  if (localDW->temporalCounter_i1_g < 511) {
    localDW->temporalCounter_i1_g++;
  }

  if (localDW->is_active_c30_SteeringWheel == 0) {
    localDW->is_active_c30_SteeringWheel = 1U;
    localDW->temporalCounter_i1_g = 0U;
    localDW->is_c30_SteeringWheel = SteeringWheel_IN_Map15;

    /* DataTypeConversion: '<S7>/Data Type Conversion12' */
    *rty_BSpinningModeOnOW = -1.0;
  } else {
    switch (localDW->is_c30_SteeringWheel) {
     case SteeringWheel_IN_Map14:
      /* DataTypeConversion: '<S7>/Data Type Conversion12' */
      *rty_BSpinningModeOnOW = 1.0;
      if ((localDW->temporalCounter_i1_g >= 500) &&
          localB->BSteeringWheelButton4_i2wy1eqoz) {
        localDW->temporalCounter_i1_g = 0U;
        localDW->is_c30_SteeringWheel = SteeringWheel_IN_Map15;

        /* DataTypeConversion: '<S7>/Data Type Conversion12' */
        *rty_BSpinningModeOnOW = -1.0;
      } else if ((localDW->temporalCounter_i1_g >= 500) &&
                 localB->BSteeringWheelButton3_mjgxg0ouw) {
        localDW->temporalCounter_i1_g = 0U;
        localDW->is_c30_SteeringWheel = SteeringWheel_IN_Map16;

        /* DataTypeConversion: '<S7>/Data Type Conversion12' */
        *rty_BSpinningModeOnOW = 0.0;
      }
      break;

     case SteeringWheel_IN_Map15:
      /* DataTypeConversion: '<S7>/Data Type Conversion12' */
      *rty_BSpinningModeOnOW = -1.0;
      if ((localDW->temporalCounter_i1_g >= 500) &&
          localB->BSteeringWheelButton4_i2wy1eqoz) {
        localDW->temporalCounter_i1_g = 0U;
        localDW->is_c30_SteeringWheel = SteeringWheel_IN_Map16;

        /* DataTypeConversion: '<S7>/Data Type Conversion12' */
        *rty_BSpinningModeOnOW = 0.0;
      } else if ((localDW->temporalCounter_i1_g >= 500) &&
                 localB->BSteeringWheelButton3_mjgxg0ouw) {
        localDW->temporalCounter_i1_g = 0U;
        localDW->is_c30_SteeringWheel = SteeringWheel_IN_Map14;

        /* DataTypeConversion: '<S7>/Data Type Conversion12' */
        *rty_BSpinningModeOnOW = 1.0;
      }
      break;

     default:
      /* DataTypeConversion: '<S7>/Data Type Conversion12' */
      /* case IN_Map16: */
      *rty_BSpinningModeOnOW = 0.0;
      if ((localDW->temporalCounter_i1_g >= 500) &&
          localB->BSteeringWheelButton3_mjgxg0ouw) {
        localDW->temporalCounter_i1_g = 0U;
        localDW->is_c30_SteeringWheel = SteeringWheel_IN_Map15;

        /* DataTypeConversion: '<S7>/Data Type Conversion12' */
        *rty_BSpinningModeOnOW = -1.0;
      } else if ((localDW->temporalCounter_i1_g >= 500) &&
                 localB->BSteeringWheelButton3_mjgxg0ouw) {
        localDW->temporalCounter_i1_g = 0U;
        localDW->is_c30_SteeringWheel = SteeringWheel_IN_Map14;

        /* DataTypeConversion: '<S7>/Data Type Conversion12' */
        *rty_BSpinningModeOnOW = 1.0;
      }
      break;
    }
  }

  /* End of Chart: '<S7>/BSpinningModeOn' */

  /* Chart: '<S7>/NThrottleMap' incorporates:
   *  DataTypeConversion: '<S7>/Data Type Conversion28'
   *  DataTypeConversion: '<S7>/Data Type Conversion29'
   */
  if (localDW->temporalCounter_i1_e < 511) {
    localDW->temporalCounter_i1_e++;
  }

  if (localDW->is_active_c24_SteeringWheel == 0) {
    localDW->is_active_c24_SteeringWheel = 1U;
    localDW->temporalCounter_i1_e = 0U;
    localDW->is_c24_SteeringWheel = SteeringWheel_IN_Map14_o;
    localB->NThrottleMapOW = -1.0;
    localB->PDischargeMaxOW = -1.0;
    localB->rTorqueSplitOW = -1.0;
  } else {
    switch (localDW->is_c24_SteeringWheel) {
     case SteeringWheel_IN_Map10:
      if ((localDW->temporalCounter_i1_e >= 500) &&
          localB->BSteeringWheelButton4_i2wy1eqo) {
        localDW->temporalCounter_i1_e = 0U;
        localDW->is_c24_SteeringWheel = SteeringWheel_IN_Map9;
        localB->NThrottleMapOW = 4.0;
        localB->PDischargeMaxOW = 58.0;
        localB->rTorqueSplitOW = 1.0;
      } else if ((localDW->temporalCounter_i1_e >= 500) &&
                 localB->BSteeringWheelButton3_mjgxg0ou) {
        localDW->temporalCounter_i1_e = 0U;
        localDW->is_c24_SteeringWheel = SteeringWheel_IN_Map13;
        localB->NThrottleMapOW = 6.0;
        localB->PDischargeMaxOW = 38.0;
        localB->rTorqueSplitOW = 0.7;
      } else {
        localB->NThrottleMapOW = 5.0;
        localB->PDischargeMaxOW = 58.0;
        localB->rTorqueSplitOW = 0.7;
      }
      break;

     case SteeringWheel_IN_Map12:
      if ((localDW->temporalCounter_i1_e >= 500) &&
          localB->BSteeringWheelButton4_i2wy1eqo) {
        localDW->temporalCounter_i1_e = 0U;
        localDW->is_c24_SteeringWheel = SteeringWheel_IN_Map14_o;
        localB->NThrottleMapOW = -1.0;
        localB->PDischargeMaxOW = -1.0;
        localB->rTorqueSplitOW = -1.0;
      } else if ((localDW->temporalCounter_i1_e >= 500) &&
                 localB->BSteeringWheelButton3_mjgxg0ou) {
        localDW->temporalCounter_i1_e = 0U;
        localDW->is_c24_SteeringWheel = SteeringWheel_IN_Map7;
        localB->NThrottleMapOW = 2.0;
        localB->PDischargeMaxOW = 78.0;
        localB->rTorqueSplitOW = 0.8;
      }
      break;

     case SteeringWheel_IN_Map13:
      if ((localDW->temporalCounter_i1_e >= 500) &&
          localB->BSteeringWheelButton4_i2wy1eqo) {
        localDW->temporalCounter_i1_e = 0U;
        localDW->is_c24_SteeringWheel = SteeringWheel_IN_Map10;
        localB->NThrottleMapOW = 5.0;
        localB->PDischargeMaxOW = 58.0;
        localB->rTorqueSplitOW = 0.7;
      } else if ((localDW->temporalCounter_i1_e >= 500) &&
                 localB->BSteeringWheelButton3_mjgxg0ou) {
        localDW->temporalCounter_i1_e = 0U;
        localDW->is_c24_SteeringWheel = SteeringWheel_IN_Map14_o;
        localB->NThrottleMapOW = -1.0;
        localB->PDischargeMaxOW = -1.0;
        localB->rTorqueSplitOW = -1.0;
      } else {
        localB->NThrottleMapOW = 6.0;
        localB->PDischargeMaxOW = 38.0;
        localB->rTorqueSplitOW = 0.7;
      }
      break;

     case SteeringWheel_IN_Map14_o:
      if ((localDW->temporalCounter_i1_e >= 500) &&
          localB->BSteeringWheelButton3_mjgxg0ou) {
        localDW->temporalCounter_i1_e = 0U;
        localDW->is_c24_SteeringWheel = SteeringWheel_IN_Map12;
        localB->NThrottleMapOW = 1.0;
        localB->PDischargeMaxOW = 5.0;
        localB->rTorqueSplitOW = 0.5;
      } else if ((localDW->temporalCounter_i1_e >= 500) &&
                 localB->BSteeringWheelButton4_i2wy1eqo) {
        localDW->temporalCounter_i1_e = 0U;
        localDW->is_c24_SteeringWheel = SteeringWheel_IN_Map13;
        localB->NThrottleMapOW = 6.0;
        localB->PDischargeMaxOW = 38.0;
        localB->rTorqueSplitOW = 0.7;
      }
      break;

     case SteeringWheel_IN_Map7:
      if ((localDW->temporalCounter_i1_e >= 500) &&
          localB->BSteeringWheelButton4_i2wy1eqo) {
        localDW->temporalCounter_i1_e = 0U;
        localDW->is_c24_SteeringWheel = SteeringWheel_IN_Map12;
        localB->NThrottleMapOW = 1.0;
        localB->PDischargeMaxOW = 5.0;
        localB->rTorqueSplitOW = 0.5;
      } else if ((localDW->temporalCounter_i1_e >= 500) &&
                 localB->BSteeringWheelButton3_mjgxg0ou) {
        localDW->temporalCounter_i1_e = 0U;
        localDW->is_c24_SteeringWheel = SteeringWheel_IN_Map8;
        localB->NThrottleMapOW = 3.0;
        localB->PDischargeMaxOW = 78.0;
        localB->rTorqueSplitOW = 0.7;
      } else {
        localB->NThrottleMapOW = 2.0;
        localB->PDischargeMaxOW = 78.0;
        localB->rTorqueSplitOW = 0.8;
      }
      break;

     case SteeringWheel_IN_Map8:
      if ((localDW->temporalCounter_i1_e >= 500) &&
          localB->BSteeringWheelButton4_i2wy1eqo) {
        localDW->temporalCounter_i1_e = 0U;
        localDW->is_c24_SteeringWheel = SteeringWheel_IN_Map7;
        localB->NThrottleMapOW = 2.0;
        localB->PDischargeMaxOW = 78.0;
        localB->rTorqueSplitOW = 0.8;
      } else if ((localDW->temporalCounter_i1_e >= 500) &&
                 localB->BSteeringWheelButton3_mjgxg0ou) {
        localDW->temporalCounter_i1_e = 0U;
        localDW->is_c24_SteeringWheel = SteeringWheel_IN_Map9;
        localB->NThrottleMapOW = 4.0;
        localB->PDischargeMaxOW = 58.0;
        localB->rTorqueSplitOW = 1.0;
      } else {
        localB->NThrottleMapOW = 3.0;
        localB->PDischargeMaxOW = 78.0;
        localB->rTorqueSplitOW = 0.7;
      }
      break;

     default:
      /* case IN_Map9: */
      if ((localDW->temporalCounter_i1_e >= 500) &&
          localB->BSteeringWheelButton4_i2wy1eqo) {
        localDW->temporalCounter_i1_e = 0U;
        localDW->is_c24_SteeringWheel = SteeringWheel_IN_Map8;
        localB->NThrottleMapOW = 3.0;
        localB->PDischargeMaxOW = 78.0;
        localB->rTorqueSplitOW = 0.7;
      } else if ((localDW->temporalCounter_i1_e >= 500) &&
                 localB->BSteeringWheelButton3_mjgxg0ou) {
        localDW->temporalCounter_i1_e = 0U;
        localDW->is_c24_SteeringWheel = SteeringWheel_IN_Map10;
        localB->NThrottleMapOW = 5.0;
        localB->PDischargeMaxOW = 58.0;
        localB->rTorqueSplitOW = 0.7;
      } else {
        localB->NThrottleMapOW = 4.0;
        localB->PDischargeMaxOW = 58.0;
        localB->rTorqueSplitOW = 1.0;
      }
      break;
    }
  }

  /* End of Chart: '<S7>/NThrottleMap' */

  /* DataTypeConversion: '<S7>/Data Type Conversion7' */
  *rty_NThrottleMapOW = localB->NThrottleMapOW;

  /* DataTypeConversion: '<S7>/Data Type Conversion14' */
  *rty_PDischargeMaxOW = localB->PDischargeMaxOW;

  /* DataTypeConversion: '<S7>/Data Type Conversion9' */
  *rty_rTorqueSplitOW = localB->rTorqueSplitOW;

  /* Chart: '<S7>/PRegenMax' incorporates:
   *  DataTypeConversion: '<S7>/Data Type Conversion24'
   *  DataTypeConversion: '<S7>/Data Type Conversion25'
   */
  if (localDW->temporalCounter_i1_l < 511) {
    localDW->temporalCounter_i1_l++;
  }

  if (localDW->is_active_c4_SteeringWheel == 0) {
    localDW->is_active_c4_SteeringWheel = 1U;
    localDW->temporalCounter_i1_l = 0U;
    localDW->is_c4_SteeringWheel = SteeringWheel_IN_Map13_d;
    localB->PRegenMaxOW = -1.0;
  } else {
    switch (localDW->is_c4_SteeringWheel) {
     case SteeringWheel_IN_Map10:
      if ((localDW->temporalCounter_i1_l >= 500) &&
          localB->BSteeringWheelButton3_mjgxg0o) {
        localDW->temporalCounter_i1_l = 0U;
        localDW->is_c4_SteeringWheel = SteeringWheel_IN_Map14_k;
        localB->PRegenMaxOW = 80.0;
      } else if ((localDW->temporalCounter_i1_l >= 500) &&
                 localB->BSteeringWheelButton4_i2wy1eq) {
        localDW->temporalCounter_i1_l = 0U;
        localDW->is_c4_SteeringWheel = SteeringWheel_IN_Map9_n;
        localB->PRegenMaxOW = 40.0;
      } else {
        localB->PRegenMaxOW = 60.0;
      }
      break;

     case SteeringWheel_IN_Map11_b:
      if ((localDW->temporalCounter_i1_l >= 500) &&
          localB->BSteeringWheelButton3_mjgxg0o) {
        localDW->temporalCounter_i1_l = 0U;
        localDW->is_c4_SteeringWheel = SteeringWheel_IN_Map13_d;
        localB->PRegenMaxOW = -1.0;
      } else if ((localDW->temporalCounter_i1_l >= 500) &&
                 localB->BSteeringWheelButton4_i2wy1eq) {
        localDW->temporalCounter_i1_l = 0U;
        localDW->is_c4_SteeringWheel = SteeringWheel_IN_Map15_i;
        localB->PRegenMaxOW = 100.0;
      } else {
        localB->PRegenMaxOW = 0.0;
      }
      break;

     case SteeringWheel_IN_Map12_n:
      if ((localDW->temporalCounter_i1_l >= 500) &&
          localB->BSteeringWheelButton3_mjgxg0o) {
        localDW->temporalCounter_i1_l = 0U;
        localDW->is_c4_SteeringWheel = SteeringWheel_IN_Map7_k;
        localB->PRegenMaxOW = 20.0;
      } else if ((localDW->temporalCounter_i1_l >= 500) &&
                 localB->BSteeringWheelButton4_i2wy1eq) {
        localDW->temporalCounter_i1_l = 0U;
        localDW->is_c4_SteeringWheel = SteeringWheel_IN_Map13_d;
        localB->PRegenMaxOW = -1.0;
      }
      break;

     case SteeringWheel_IN_Map13_d:
      if ((localDW->temporalCounter_i1_l >= 500) &&
          localB->BSteeringWheelButton3_mjgxg0o) {
        localDW->temporalCounter_i1_l = 0U;
        localDW->is_c4_SteeringWheel = SteeringWheel_IN_Map12_n;
        localB->PRegenMaxOW = 10.0;
      } else if ((localDW->temporalCounter_i1_l >= 500) &&
                 localB->BSteeringWheelButton4_i2wy1eq) {
        localDW->temporalCounter_i1_l = 0U;
        localDW->is_c4_SteeringWheel = SteeringWheel_IN_Map11_b;
        localB->PRegenMaxOW = 0.0;
      }
      break;

     case SteeringWheel_IN_Map14_k:
      if ((localDW->temporalCounter_i1_l >= 500) &&
          localB->BSteeringWheelButton3_mjgxg0o) {
        localDW->temporalCounter_i1_l = 0U;
        localDW->is_c4_SteeringWheel = SteeringWheel_IN_Map15_i;
        localB->PRegenMaxOW = 100.0;
      } else if ((localDW->temporalCounter_i1_l >= 500) &&
                 localB->BSteeringWheelButton4_i2wy1eq) {
        localDW->temporalCounter_i1_l = 0U;
        localDW->is_c4_SteeringWheel = SteeringWheel_IN_Map10;
        localB->PRegenMaxOW = 60.0;
      } else {
        localB->PRegenMaxOW = 80.0;
      }
      break;

     case SteeringWheel_IN_Map15_i:
      if ((localDW->temporalCounter_i1_l >= 500) &&
          localB->BSteeringWheelButton4_i2wy1eq) {
        localDW->temporalCounter_i1_l = 0U;
        localDW->is_c4_SteeringWheel = SteeringWheel_IN_Map14_k;
        localB->PRegenMaxOW = 80.0;
      } else if ((localDW->temporalCounter_i1_l >= 500) &&
                 localB->BSteeringWheelButton3_mjgxg0o) {
        localDW->temporalCounter_i1_l = 0U;
        localDW->is_c4_SteeringWheel = SteeringWheel_IN_Map11_b;
        localB->PRegenMaxOW = 0.0;
      } else {
        localB->PRegenMaxOW = 100.0;
      }
      break;

     case SteeringWheel_IN_Map7_k:
      if ((localDW->temporalCounter_i1_l >= 500) &&
          localB->BSteeringWheelButton4_i2wy1eq) {
        localDW->temporalCounter_i1_l = 0U;
        localDW->is_c4_SteeringWheel = SteeringWheel_IN_Map12_n;
        localB->PRegenMaxOW = 10.0;
      } else if ((localDW->temporalCounter_i1_l >= 500) &&
                 localB->BSteeringWheelButton3_mjgxg0o) {
        localDW->temporalCounter_i1_l = 0U;
        localDW->is_c4_SteeringWheel = SteeringWheel_IN_Map8_j;
        localB->PRegenMaxOW = 30.0;
      } else {
        localB->PRegenMaxOW = 20.0;
      }
      break;

     case SteeringWheel_IN_Map8_j:
      if ((localDW->temporalCounter_i1_l >= 500) &&
          localB->BSteeringWheelButton4_i2wy1eq) {
        localDW->temporalCounter_i1_l = 0U;
        localDW->is_c4_SteeringWheel = SteeringWheel_IN_Map7_k;
        localB->PRegenMaxOW = 20.0;
      } else if ((localDW->temporalCounter_i1_l >= 500) &&
                 localB->BSteeringWheelButton3_mjgxg0o) {
        localDW->temporalCounter_i1_l = 0U;
        localDW->is_c4_SteeringWheel = SteeringWheel_IN_Map9_n;
        localB->PRegenMaxOW = 40.0;
      } else {
        localB->PRegenMaxOW = 30.0;
      }
      break;

     default:
      /* case IN_Map9: */
      if ((localDW->temporalCounter_i1_l >= 500) &&
          localB->BSteeringWheelButton4_i2wy1eq) {
        localDW->temporalCounter_i1_l = 0U;
        localDW->is_c4_SteeringWheel = SteeringWheel_IN_Map8_j;
        localB->PRegenMaxOW = 30.0;
      } else if ((localDW->temporalCounter_i1_l >= 500) &&
                 localB->BSteeringWheelButton3_mjgxg0o) {
        localDW->temporalCounter_i1_l = 0U;
        localDW->is_c4_SteeringWheel = SteeringWheel_IN_Map10;
        localB->PRegenMaxOW = 60.0;
      } else {
        localB->PRegenMaxOW = 40.0;
      }
      break;
    }
  }

  /* End of Chart: '<S7>/PRegenMax' */

  /* DataTypeConversion: '<S7>/Data Type Conversion10' */
  *rty_PRegenMaxOW = localB->PRegenMaxOW;

  /* Chart: '<S7>/rTVMultiplier' incorporates:
   *  DataTypeConversion: '<S7>/Data Type Conversion13'
   *  DataTypeConversion: '<S7>/Data Type Conversion15'
   */
  if (localDW->temporalCounter_i1 < 511) {
    localDW->temporalCounter_i1++;
  }

  if (localDW->is_active_c10_SteeringWheel == 0) {
    localDW->is_active_c10_SteeringWheel = 1U;
    localDW->temporalCounter_i1 = 0U;
    localDW->is_c10_SteeringWheel = SteeringWheel_IN_Map1;
    localB->rTVMultiplierOW = -1.0;
  } else {
    switch (localDW->is_c10_SteeringWheel) {
     case SteeringWheel_IN_Map1:
      if ((localDW->temporalCounter_i1 >= 500) &&
          localB->BSteeringWheelButton3_mjgxg0) {
        localDW->temporalCounter_i1 = 0U;
        localDW->is_c10_SteeringWheel = SteeringWheel_IN_Map12_g;
        localB->rTVMultiplierOW = 0.1;
      } else if ((localDW->temporalCounter_i1 >= 500) &&
                 localB->BSteeringWheelButton4_i2wy1e) {
        localDW->temporalCounter_i1 = 0U;
        localDW->is_c10_SteeringWheel = SteeringWheel_IN_Map11_c;
        localB->rTVMultiplierOW = 1.0;
      } else {
        localB->rTVMultiplierOW = -1.0;
      }
      break;

     case SteeringWheel_IN_Map10_a:
      if ((localDW->temporalCounter_i1 >= 500) &&
          localB->BSteeringWheelButton4_i2wy1e) {
        localDW->temporalCounter_i1 = 0U;
        localDW->is_c10_SteeringWheel = SteeringWheel_IN_Map9;
        localB->rTVMultiplierOW = 0.7;
      } else if ((localDW->temporalCounter_i1 >= 500) &&
                 localB->BSteeringWheelButton3_mjgxg0) {
        localDW->temporalCounter_i1 = 0U;
        localDW->is_c10_SteeringWheel = SteeringWheel_IN_Map11_c;
        localB->rTVMultiplierOW = 1.0;
      } else {
        localB->rTVMultiplierOW = 0.0;
      }
      break;

     case SteeringWheel_IN_Map11_c:
      if ((localDW->temporalCounter_i1 >= 500) &&
          localB->BSteeringWheelButton4_i2wy1e) {
        localDW->temporalCounter_i1 = 0U;
        localDW->is_c10_SteeringWheel = SteeringWheel_IN_Map10_a;
        localB->rTVMultiplierOW = 0.0;
      } else if ((localDW->temporalCounter_i1 >= 500) &&
                 localB->BSteeringWheelButton3_mjgxg0) {
        localDW->temporalCounter_i1 = 0U;
        localDW->is_c10_SteeringWheel = SteeringWheel_IN_Map1;
        localB->rTVMultiplierOW = -1.0;
      } else {
        localB->rTVMultiplierOW = 1.0;
      }
      break;

     case SteeringWheel_IN_Map12_g:
      if ((localDW->temporalCounter_i1 >= 500) &&
          localB->BSteeringWheelButton3_mjgxg0) {
        localDW->temporalCounter_i1 = 0U;
        localDW->is_c10_SteeringWheel = SteeringWheel_IN_Map7;
        localB->rTVMultiplierOW = 0.3;
      } else if ((localDW->temporalCounter_i1 >= 500) &&
                 localB->BSteeringWheelButton4_i2wy1e) {
        localDW->temporalCounter_i1 = 0U;
        localDW->is_c10_SteeringWheel = SteeringWheel_IN_Map1;
        localB->rTVMultiplierOW = -1.0;
      }
      break;

     case SteeringWheel_IN_Map7:
      if ((localDW->temporalCounter_i1 >= 500) &&
          localB->BSteeringWheelButton4_i2wy1e) {
        localDW->temporalCounter_i1 = 0U;
        localDW->is_c10_SteeringWheel = SteeringWheel_IN_Map12_g;
        localB->rTVMultiplierOW = 0.1;
      } else if ((localDW->temporalCounter_i1 >= 500) &&
                 localB->BSteeringWheelButton3_mjgxg0) {
        localDW->temporalCounter_i1 = 0U;
        localDW->is_c10_SteeringWheel = SteeringWheel_IN_Map8;
        localB->rTVMultiplierOW = 0.5;
      } else {
        localB->rTVMultiplierOW = 0.3;
      }
      break;

     case SteeringWheel_IN_Map8:
      if ((localDW->temporalCounter_i1 >= 500) &&
          localB->BSteeringWheelButton4_i2wy1e) {
        localDW->temporalCounter_i1 = 0U;
        localDW->is_c10_SteeringWheel = SteeringWheel_IN_Map7;
        localB->rTVMultiplierOW = 0.3;
      } else if ((localDW->temporalCounter_i1 >= 500) &&
                 localB->BSteeringWheelButton3_mjgxg0) {
        localDW->temporalCounter_i1 = 0U;
        localDW->is_c10_SteeringWheel = SteeringWheel_IN_Map9;
        localB->rTVMultiplierOW = 0.7;
      } else {
        localB->rTVMultiplierOW = 0.5;
      }
      break;

     default:
      /* case IN_Map9: */
      if ((localDW->temporalCounter_i1 >= 500) &&
          localB->BSteeringWheelButton4_i2wy1e) {
        localDW->temporalCounter_i1 = 0U;
        localDW->is_c10_SteeringWheel = SteeringWheel_IN_Map8;
        localB->rTVMultiplierOW = 0.5;
      } else if ((localDW->temporalCounter_i1 >= 500) &&
                 localB->BSteeringWheelButton3_mjgxg0) {
        localDW->temporalCounter_i1 = 0U;
        localDW->is_c10_SteeringWheel = SteeringWheel_IN_Map10_a;
        localB->rTVMultiplierOW = 0.0;
      } else {
        localB->rTVMultiplierOW = 0.7;
      }
      break;
    }
  }

  /* End of Chart: '<S7>/rTVMultiplier' */

  /* DataTypeConversion: '<S7>/Data Type Conversion' */
  *rty_rTVMultiplierOW = localB->rTVMultiplierOW;

  /* Chart: '<S7>/PEngineBraking' incorporates:
   *  DataTypeConversion: '<S7>/Data Type Conversion16'
   *  DataTypeConversion: '<S7>/Data Type Conversion17'
   */
  if (localDW->temporalCounter_i1_m < 511) {
    localDW->temporalCounter_i1_m++;
  }

  if (localDW->is_active_c2_SteeringWheel == 0) {
    localDW->is_active_c2_SteeringWheel = 1U;
    localDW->temporalCounter_i1_m = 0U;
    localDW->is_c2_SteeringWheel = SteeringWheel_IN_Map12_k;
    localB->PEngineBraking = -1.0;
  } else {
    switch (localDW->is_c2_SteeringWheel) {
     case SteeringWheel_IN_Map12_k:
      if ((localDW->temporalCounter_i1_m >= 500) &&
          localB->BSteeringWheelButton3_mjgxg) {
        localDW->temporalCounter_i1_m = 0U;
        localDW->is_c2_SteeringWheel = SteeringWheel_IN_a_f;
        localB->PEngineBraking = 0.0;
      } else if ((localDW->temporalCounter_i1_m >= 500) &&
                 localB->BSteeringWheelButton4_i2wy1) {
        localDW->temporalCounter_i1_m = 0U;
        localDW->is_c2_SteeringWheel = SteeringWheel_IN_a3_c;
        localB->PEngineBraking = 14.0;
      }
      break;

     case SteeringWheel_IN_a_f:
      if ((localDW->temporalCounter_i1_m >= 500) &&
          localB->BSteeringWheelButton3_mjgxg) {
        localDW->temporalCounter_i1_m = 0U;
        localDW->is_c2_SteeringWheel = SteeringWheel_IN_a1_l;
        localB->PEngineBraking = 6.0;
      } else if ((localDW->temporalCounter_i1_m >= 500) &&
                 localB->BSteeringWheelButton4_i2wy1) {
        localDW->temporalCounter_i1_m = 0U;
        localDW->is_c2_SteeringWheel = SteeringWheel_IN_Map12_k;
        localB->PEngineBraking = -1.0;
      } else {
        localB->PEngineBraking = 0.0;
      }
      break;

     case SteeringWheel_IN_a1_l:
      if ((localDW->temporalCounter_i1_m >= 500) &&
          localB->BSteeringWheelButton3_mjgxg) {
        localDW->temporalCounter_i1_m = 0U;
        localDW->is_c2_SteeringWheel = SteeringWheel_IN_a2_p;
        localB->PEngineBraking = 10.0;
      } else if ((localDW->temporalCounter_i1_m >= 500) &&
                 localB->BSteeringWheelButton4_i2wy1) {
        localDW->temporalCounter_i1_m = 0U;
        localDW->is_c2_SteeringWheel = SteeringWheel_IN_a_f;
        localB->PEngineBraking = 0.0;
      } else {
        localB->PEngineBraking = 6.0;
      }
      break;

     case SteeringWheel_IN_a2_p:
      if ((localDW->temporalCounter_i1_m >= 500) &&
          localB->BSteeringWheelButton4_i2wy1) {
        localDW->temporalCounter_i1_m = 0U;
        localDW->is_c2_SteeringWheel = SteeringWheel_IN_a1_l;
        localB->PEngineBraking = 6.0;
      } else if ((localDW->temporalCounter_i1_m >= 500) &&
                 localB->BSteeringWheelButton3_mjgxg) {
        localDW->temporalCounter_i1_m = 0U;
        localDW->is_c2_SteeringWheel = SteeringWheel_IN_a3_c;
        localB->PEngineBraking = 14.0;
      } else {
        localB->PEngineBraking = 10.0;
      }
      break;

     default:
      /* case IN_a3: */
      if ((localDW->temporalCounter_i1_m >= 500) &&
          localB->BSteeringWheelButton4_i2wy1) {
        localDW->temporalCounter_i1_m = 0U;
        localDW->is_c2_SteeringWheel = SteeringWheel_IN_a2_p;
        localB->PEngineBraking = 10.0;
      } else if ((localDW->temporalCounter_i1_m >= 500) &&
                 localB->BSteeringWheelButton3_mjgxg) {
        localDW->temporalCounter_i1_m = 0U;
        localDW->is_c2_SteeringWheel = SteeringWheel_IN_Map12_k;
        localB->PEngineBraking = -1.0;
      } else {
        localB->PEngineBraking = 14.0;
      }
      break;
    }
  }

  /* End of Chart: '<S7>/PEngineBraking' */

  /* DataTypeConversion: '<S7>/Data Type Conversion5' */
  *rty_PEngineBrakingOW = localB->PEngineBraking;

  /* Chart: '<S7>/rEngineBrakingSplitOW ' incorporates:
   *  DataTypeConversion: '<S7>/Data Type Conversion18'
   *  DataTypeConversion: '<S7>/Data Type Conversion19'
   */
  if (localDW->temporalCounter_i1_h < 511) {
    localDW->temporalCounter_i1_h++;
  }

  if (localDW->is_active_c7_SteeringWheel == 0) {
    localDW->is_active_c7_SteeringWheel = 1U;
    localDW->temporalCounter_i1_h = 0U;
    localDW->is_c7_SteeringWheel = SteeringWheel_IN_a4_c;

    /* DataTypeConversion: '<S7>/Data Type Conversion8' */
    *rty_rEngineBrakingSplitOW = -1.0;
  } else {
    switch (localDW->is_c7_SteeringWheel) {
     case SteeringWheel_IN_a:
      if ((localDW->temporalCounter_i1_h >= 500) &&
          localB->BSteeringWheelButton3_mjgx) {
        localDW->temporalCounter_i1_h = 0U;
        localDW->is_c7_SteeringWheel = SteeringWheel_IN_a1;

        /* DataTypeConversion: '<S7>/Data Type Conversion8' */
        *rty_rEngineBrakingSplitOW = 0.3;
      } else if ((localDW->temporalCounter_i1_h >= 500) &&
                 localB->BSteeringWheelButton4_i2wy) {
        localDW->temporalCounter_i1_h = 0U;
        localDW->is_c7_SteeringWheel = SteeringWheel_IN_a4_c;

        /* DataTypeConversion: '<S7>/Data Type Conversion8' */
        *rty_rEngineBrakingSplitOW = -1.0;
      } else {
        /* DataTypeConversion: '<S7>/Data Type Conversion8' */
        *rty_rEngineBrakingSplitOW = 0.0;
      }
      break;

     case SteeringWheel_IN_a1:
      if ((localDW->temporalCounter_i1_h >= 500) &&
          localB->BSteeringWheelButton3_mjgx) {
        localDW->temporalCounter_i1_h = 0U;
        localDW->is_c7_SteeringWheel = SteeringWheel_IN_a2;

        /* DataTypeConversion: '<S7>/Data Type Conversion8' */
        *rty_rEngineBrakingSplitOW = 0.5;
      } else if ((localDW->temporalCounter_i1_h >= 500) &&
                 localB->BSteeringWheelButton4_i2wy) {
        localDW->temporalCounter_i1_h = 0U;
        localDW->is_c7_SteeringWheel = SteeringWheel_IN_a;

        /* DataTypeConversion: '<S7>/Data Type Conversion8' */
        *rty_rEngineBrakingSplitOW = 0.0;
      } else {
        /* DataTypeConversion: '<S7>/Data Type Conversion8' */
        *rty_rEngineBrakingSplitOW = 0.3;
      }
      break;

     case SteeringWheel_IN_a2:
      if ((localDW->temporalCounter_i1_h >= 500) &&
          localB->BSteeringWheelButton4_i2wy) {
        localDW->temporalCounter_i1_h = 0U;
        localDW->is_c7_SteeringWheel = SteeringWheel_IN_a1;

        /* DataTypeConversion: '<S7>/Data Type Conversion8' */
        *rty_rEngineBrakingSplitOW = 0.3;
      } else if ((localDW->temporalCounter_i1_h >= 500) &&
                 localB->BSteeringWheelButton3_mjgx) {
        localDW->temporalCounter_i1_h = 0U;
        localDW->is_c7_SteeringWheel = SteeringWheel_IN_a3;

        /* DataTypeConversion: '<S7>/Data Type Conversion8' */
        *rty_rEngineBrakingSplitOW = 1.0;
      } else {
        /* DataTypeConversion: '<S7>/Data Type Conversion8' */
        *rty_rEngineBrakingSplitOW = 0.5;
      }
      break;

     case SteeringWheel_IN_a3:
      if ((localDW->temporalCounter_i1_h >= 500) &&
          localB->BSteeringWheelButton4_i2wy) {
        localDW->temporalCounter_i1_h = 0U;
        localDW->is_c7_SteeringWheel = SteeringWheel_IN_a2;

        /* DataTypeConversion: '<S7>/Data Type Conversion8' */
        *rty_rEngineBrakingSplitOW = 0.5;
      } else if ((localDW->temporalCounter_i1_h >= 500) &&
                 localB->BSteeringWheelButton3_mjgx) {
        localDW->temporalCounter_i1_h = 0U;
        localDW->is_c7_SteeringWheel = SteeringWheel_IN_a4_c;

        /* DataTypeConversion: '<S7>/Data Type Conversion8' */
        *rty_rEngineBrakingSplitOW = -1.0;
      } else {
        /* DataTypeConversion: '<S7>/Data Type Conversion8' */
        *rty_rEngineBrakingSplitOW = 1.0;
      }
      break;

     default:
      /* case IN_a4: */
      if ((localDW->temporalCounter_i1_h >= 500) &&
          localB->BSteeringWheelButton3_mjgx) {
        localDW->temporalCounter_i1_h = 0U;
        localDW->is_c7_SteeringWheel = SteeringWheel_IN_a;

        /* DataTypeConversion: '<S7>/Data Type Conversion8' */
        *rty_rEngineBrakingSplitOW = 0.0;
      } else if ((localDW->temporalCounter_i1_h >= 500) &&
                 localB->BSteeringWheelButton4_i2wy) {
        localDW->temporalCounter_i1_h = 0U;
        localDW->is_c7_SteeringWheel = SteeringWheel_IN_a3;

        /* DataTypeConversion: '<S7>/Data Type Conversion8' */
        *rty_rEngineBrakingSplitOW = 1.0;
      } else {
        /* DataTypeConversion: '<S7>/Data Type Conversion8' */
        *rty_rEngineBrakingSplitOW = -1.0;
      }
      break;
    }
  }

  /* End of Chart: '<S7>/rEngineBrakingSplitOW ' */

  /* Chart: '<Root>/NEventModeRotary System' */
  localDW->sfEvent = SteeringWheel_CALL_EVENT;
  if (localDW->temporalCounter_i1_ke < 511) {
    localDW->temporalCounter_i1_ke++;
  }

  if (localDW->is_active_c28_SteeringWheel == 0) {
    localDW->is_active_c28_SteeringWheel = 1U;
    localDW->temporalCounter_i1_ke = 0U;
    localDW->is_c28_SteeringWheel = SteeringWheel_IN_Endurance;
    Steering_enter_atomic_Endurance(rty_MRegenMax, rty_NEventMode, rty_BTVOnEM,
      rty_BTCOnEM, rty_BDrivetrainCoolingOnEM, rty_BEMSOnEM,
      rty_BSpinningModeOnEM, rty_NThrottleMapEM, rty_PDischargeMaxEM,
      rty_rTorqueSplitEM, rty_PRegenMaxEM, rty_rTVMultiplierEM,
      rty_PEngineBrakingEM, rty_rEngineBrakingSplitEM);
  } else {
    switch (localDW->is_c28_SteeringWheel) {
     case SteeringWheel_IN_Acceleration:
      *rty_BTVOnEM = 0.0;
      *rty_BTCOnEM = 1.0;
      *rty_BDrivetrainCoolingOnEM = 1.0;
      *rty_NThrottleMapEM = 2.0;
      *rty_PDischargeMaxEM = 78.0;
      *rty_rTorqueSplitEM = 0.8;
      *rty_PRegenMaxEM = 0.0;
      *rty_rTVMultiplierEM = 0.0;
      *rty_NEventMode = 4.0;
      *rty_BEMSOnEM = 0.0;
      *rty_BSpinningModeOnEM = 0.0;
      *rty_PEngineBrakingEM = 0.0;
      *rty_MRegenMax = 0.0;
      *rty_rEngineBrakingSplitEM = 1.0;
      if ((localDW->temporalCounter_i1_ke >= 500) && (*rtu_NEventModeRotary !=
           4.0)) {
        if (*rtu_NEventModeRotary == 1.0) {
          localDW->temporalCounter_i1_ke = 0U;
          localDW->is_c28_SteeringWheel = SteeringWheel_IN_Scrut;
          SteeringWhee_enter_atomic_Scrut(rty_MRegenMax, rty_NEventMode,
            rty_BTVOnEM, rty_BTCOnEM, rty_BDrivetrainCoolingOnEM, rty_BEMSOnEM,
            rty_BSpinningModeOnEM, rty_NThrottleMapEM, rty_PDischargeMaxEM,
            rty_rTorqueSplitEM, rty_PRegenMaxEM, rty_rTVMultiplierEM,
            rty_PEngineBrakingEM, rty_rEngineBrakingSplitEM);
        } else if (*rtu_NEventModeRotary == 2.0) {
          localDW->temporalCounter_i1_ke = 0U;
          localDW->is_c28_SteeringWheel = SteeringWheel_IN_Wheelspin;
          Steering_enter_atomic_Wheelspin(rty_MRegenMax, rty_NEventMode,
            rty_BTVOnEM, rty_BTCOnEM, rty_BDrivetrainCoolingOnEM, rty_BEMSOnEM,
            rty_BSpinningModeOnEM, rty_NThrottleMapEM, rty_PDischargeMaxEM,
            rty_rTorqueSplitEM, rty_PRegenMaxEM, rty_rTVMultiplierEM,
            rty_PEngineBrakingEM, rty_rEngineBrakingSplitEM);
        } else if (*rtu_NEventModeRotary == 3.0) {
          localDW->temporalCounter_i1_ke = 0U;
          localDW->is_c28_SteeringWheel = SteeringWheel_IN_Shakedown;
          Steering_enter_atomic_Shakedown(rty_MRegenMax, rty_NEventMode,
            rty_BTVOnEM, rty_BTCOnEM, rty_BDrivetrainCoolingOnEM, rty_BEMSOnEM,
            rty_BSpinningModeOnEM, rty_NThrottleMapEM, rty_PDischargeMaxEM,
            rty_rTorqueSplitEM, rty_PRegenMaxEM, rty_rTVMultiplierEM,
            rty_PEngineBrakingEM, rty_rEngineBrakingSplitEM);
        } else if (*rtu_NEventModeRotary == 5.0) {
          localDW->temporalCounter_i1_ke = 0U;
          localDW->is_c28_SteeringWheel = SteeringWheel_IN_Skidpad;
          SteeringWh_enter_atomic_Skidpad(rty_MRegenMax, rty_NEventMode,
            rty_BTVOnEM, rty_BTCOnEM, rty_BDrivetrainCoolingOnEM, rty_BEMSOnEM,
            rty_BSpinningModeOnEM, rty_NThrottleMapEM, rty_PDischargeMaxEM,
            rty_rTorqueSplitEM, rty_PRegenMaxEM, rty_rTVMultiplierEM,
            rty_PEngineBrakingEM, rty_rEngineBrakingSplitEM);
        } else if (*rtu_NEventModeRotary == 7.0) {
          localDW->temporalCounter_i1_ke = 0U;
          localDW->is_c28_SteeringWheel = SteeringWheel_IN_Endurance;
          Steering_enter_atomic_Endurance(rty_MRegenMax, rty_NEventMode,
            rty_BTVOnEM, rty_BTCOnEM, rty_BDrivetrainCoolingOnEM, rty_BEMSOnEM,
            rty_BSpinningModeOnEM, rty_NThrottleMapEM, rty_PDischargeMaxEM,
            rty_rTorqueSplitEM, rty_PRegenMaxEM, rty_rTVMultiplierEM,
            rty_PEngineBrakingEM, rty_rEngineBrakingSplitEM);
        } else if (*rtu_NEventModeRotary == 4.0) {
          localDW->temporalCounter_i1_ke = 0U;
          localDW->is_c28_SteeringWheel = SteeringWheel_IN_Acceleration;
          Steer_enter_atomic_Acceleration(rty_MRegenMax, rty_NEventMode,
            rty_BTVOnEM, rty_BTCOnEM, rty_BDrivetrainCoolingOnEM, rty_BEMSOnEM,
            rty_BSpinningModeOnEM, rty_NThrottleMapEM, rty_PDischargeMaxEM,
            rty_rTorqueSplitEM, rty_PRegenMaxEM, rty_rTVMultiplierEM,
            rty_PEngineBrakingEM, rty_rEngineBrakingSplitEM);
        } else if (*rtu_NEventModeRotary == 6.0) {
          localDW->temporalCounter_i1_ke = 0U;
          localDW->is_c28_SteeringWheel = SteeringWheel_IN_Autocross;
          Steering_enter_atomic_Autocross(rty_MRegenMax, rty_NEventMode,
            rty_BTVOnEM, rty_BTCOnEM, rty_BDrivetrainCoolingOnEM, rty_BEMSOnEM,
            rty_BSpinningModeOnEM, rty_NThrottleMapEM, rty_PDischargeMaxEM,
            rty_rTorqueSplitEM, rty_PRegenMaxEM, rty_rTVMultiplierEM,
            rty_PEngineBrakingEM, rty_rEngineBrakingSplitEM);
        } else if (*rtu_NEventModeRotary == 8.0) {
          localDW->temporalCounter_i1_ke = 0U;
          localDW->is_c28_SteeringWheel = SteeringWheel_IN_Limp;
          SteeringWheel_enter_atomic_Limp(rty_MRegenMax, rty_NEventMode,
            rty_BTVOnEM, rty_BTCOnEM, rty_BDrivetrainCoolingOnEM, rty_BEMSOnEM,
            rty_BSpinningModeOnEM, rty_NThrottleMapEM, rty_PDischargeMaxEM,
            rty_rTorqueSplitEM, rty_PRegenMaxEM, rty_rTVMultiplierEM,
            rty_PEngineBrakingEM, rty_rEngineBrakingSplitEM);
        }
      }
      break;

     case SteeringWheel_IN_Autocross:
      SteeringWheel_Autocross(rtu_NEventModeRotary, rty_MRegenMax,
        rty_NEventMode, rty_BTVOnEM, rty_BTCOnEM, rty_BDrivetrainCoolingOnEM,
        rty_BEMSOnEM, rty_BSpinningModeOnEM, rty_NThrottleMapEM,
        rty_PDischargeMaxEM, rty_rTorqueSplitEM, rty_PRegenMaxEM,
        rty_rTVMultiplierEM, rty_PEngineBrakingEM, rty_rEngineBrakingSplitEM,
        localDW);
      break;

     case SteeringWheel_IN_Endurance:
      SteeringWheel_Endurance(rtu_NEventModeRotary, rty_MRegenMax,
        rty_NEventMode, rty_BTVOnEM, rty_BTCOnEM, rty_BDrivetrainCoolingOnEM,
        rty_BEMSOnEM, rty_BSpinningModeOnEM, rty_NThrottleMapEM,
        rty_PDischargeMaxEM, rty_rTorqueSplitEM, rty_PRegenMaxEM,
        rty_rTVMultiplierEM, rty_PEngineBrakingEM, rty_rEngineBrakingSplitEM,
        localDW);
      break;

     case SteeringWheel_IN_Limp:
      SteeringWheel_Limp(rtu_NEventModeRotary, rty_MRegenMax, rty_NEventMode,
                         rty_BTVOnEM, rty_BTCOnEM, rty_BDrivetrainCoolingOnEM,
                         rty_BEMSOnEM, rty_BSpinningModeOnEM, rty_NThrottleMapEM,
                         rty_PDischargeMaxEM, rty_rTorqueSplitEM,
                         rty_PRegenMaxEM, rty_rTVMultiplierEM,
                         rty_PEngineBrakingEM, rty_rEngineBrakingSplitEM,
                         localDW);
      break;

     case SteeringWheel_IN_Scrut:
      SteeringWheel_Scrut(rtu_NEventModeRotary, rty_MRegenMax, rty_NEventMode,
                          rty_BTVOnEM, rty_BTCOnEM, rty_BDrivetrainCoolingOnEM,
                          rty_BEMSOnEM, rty_BSpinningModeOnEM,
                          rty_NThrottleMapEM, rty_PDischargeMaxEM,
                          rty_rTorqueSplitEM, rty_PRegenMaxEM,
                          rty_rTVMultiplierEM, rty_PEngineBrakingEM,
                          rty_rEngineBrakingSplitEM, localDW);
      break;

     case SteeringWheel_IN_Shakedown:
      SteeringWheel_Shakedown(rtu_NEventModeRotary, rty_MRegenMax,
        rty_NEventMode, rty_BTVOnEM, rty_BTCOnEM, rty_BDrivetrainCoolingOnEM,
        rty_BEMSOnEM, rty_BSpinningModeOnEM, rty_NThrottleMapEM,
        rty_PDischargeMaxEM, rty_rTorqueSplitEM, rty_PRegenMaxEM,
        rty_rTVMultiplierEM, rty_PEngineBrakingEM, rty_rEngineBrakingSplitEM,
        localDW);
      break;

     case SteeringWheel_IN_Skidpad:
      SteeringWheel_Skidpad(rtu_NEventModeRotary, rty_MRegenMax, rty_NEventMode,
                            rty_BTVOnEM, rty_BTCOnEM, rty_BDrivetrainCoolingOnEM,
                            rty_BEMSOnEM, rty_BSpinningModeOnEM,
                            rty_NThrottleMapEM, rty_PDischargeMaxEM,
                            rty_rTorqueSplitEM, rty_PRegenMaxEM,
                            rty_rTVMultiplierEM, rty_PEngineBrakingEM,
                            rty_rEngineBrakingSplitEM, localDW);
      break;

     default:
      /* case IN_Wheelspin: */
      SteeringWheel_Wheelspin(rtu_NEventModeRotary, rty_MRegenMax,
        rty_NEventMode, rty_BTVOnEM, rty_BTCOnEM, rty_BDrivetrainCoolingOnEM,
        rty_BEMSOnEM, rty_BSpinningModeOnEM, rty_NThrottleMapEM,
        rty_PDischargeMaxEM, rty_rTorqueSplitEM, rty_PRegenMaxEM,
        rty_rTVMultiplierEM, rty_PEngineBrakingEM, rty_rEngineBrakingSplitEM,
        localDW);
      break;
    }
  }

  /* End of Chart: '<Root>/NEventModeRotary System' */

  /* Switch: '<S4>/Switch' incorporates:
   *  Constant: '<S10>/Constant'
   *  RelationalOperator: '<S10>/Compare'
   */
  if (*rty_BTVOnOW > -1.0) {
    tmp = *rty_BTVOnOW;
  } else {
    tmp = *rty_BTVOnEM;
  }

  /* DataTypeConversion: '<S4>/Cast To Double10' incorporates:
   *  Switch: '<S4>/Switch'
   */
  *rty_BTVOn = (tmp != 0.0);

  /* Switch: '<S4>/Switch' incorporates:
   *  Constant: '<S10>/Constant'
   *  RelationalOperator: '<S10>/Compare'
   */
  if (*rty_BTCOnOW > -1.0) {
    tmp = *rty_BTCOnOW;
  } else {
    tmp = *rty_BTCOnEM;
  }

  /* DataTypeConversion: '<S4>/Cast To Double11' incorporates:
   *  Switch: '<S4>/Switch'
   */
  *rty_BTCOn = (tmp != 0.0);

  /* Switch: '<S4>/Switch' incorporates:
   *  Constant: '<S10>/Constant'
   *  RelationalOperator: '<S10>/Compare'
   */
  if (*rty_BDrivetrainCoolingOnOW > -1.0) {
    tmp = *rty_BDrivetrainCoolingOnOW;
  } else {
    tmp = *rty_BDrivetrainCoolingOnEM;
  }

  /* DataTypeConversion: '<S4>/Cast To Double12' incorporates:
   *  Switch: '<S4>/Switch'
   */
  *rty_BDrivetrainCoolingOn = (tmp != 0.0);

  /* Switch: '<S4>/Switch' incorporates:
   *  Constant: '<S10>/Constant'
   *  RelationalOperator: '<S10>/Compare'
   */
  if (*rty_BEMSOnOW > -1.0) {
    tmp = *rty_BEMSOnOW;
  } else {
    tmp = *rty_BEMSOnEM;
  }

  /* DataTypeConversion: '<S4>/Cast To Double8' incorporates:
   *  Switch: '<S4>/Switch'
   */
  *rty_BEMSOn = (tmp != 0.0);

  /* Switch: '<S4>/Switch' incorporates:
   *  Constant: '<S10>/Constant'
   *  RelationalOperator: '<S10>/Compare'
   */
  if (*rty_BSpinningModeOnOW > -1.0) {
    tmp = *rty_BSpinningModeOnOW;
  } else {
    tmp = *rty_BSpinningModeOnEM;
  }

  /* DataTypeConversion: '<S4>/Cast To Double9' incorporates:
   *  Switch: '<S4>/Switch'
   */
  *rty_BSpinningModeOn = (tmp != 0.0);

  /* Switch: '<S4>/Switch' incorporates:
   *  Constant: '<S10>/Constant'
   *  RelationalOperator: '<S10>/Compare'
   */
  if (*rty_NThrottleMapOW > -1.0) {
    /* SignalConversion generated from: '<Root>/NThrottleMap' */
    *rty_NThrottleMap = *rty_NThrottleMapOW;
  } else {
    /* SignalConversion generated from: '<Root>/NThrottleMap' */
    *rty_NThrottleMap = *rty_NThrottleMapEM;
  }

  if (*rty_PDischargeMaxOW > -1.0) {
    /* SignalConversion generated from: '<Root>/PDischargeMax' */
    *rty_PDischargeMax = *rty_PDischargeMaxOW;
  } else {
    /* SignalConversion generated from: '<Root>/PDischargeMax' */
    *rty_PDischargeMax = *rty_PDischargeMaxEM;
  }

  if (*rty_PEngineBrakingOW > -1.0) {
    /* SignalConversion generated from: '<Root>/PEngineBraking' */
    *rty_PEngineBraking = *rty_PEngineBrakingOW;
  } else {
    /* SignalConversion generated from: '<Root>/PEngineBraking' */
    *rty_PEngineBraking = *rty_PEngineBrakingEM;
  }

  if (*rty_PRegenMaxOW > -1.0) {
    /* SignalConversion generated from: '<Root>/PRegenMax' */
    *rty_PRegenMax = *rty_PRegenMaxOW;
  } else {
    /* SignalConversion generated from: '<Root>/PRegenMax' */
    *rty_PRegenMax = *rty_PRegenMaxEM;
  }

  if (*rty_rEngineBrakingSplitOW > -1.0) {
    /* SignalConversion generated from: '<Root>/rEngineBrakingSplit' */
    *rty_rEngineBrakingSplit = *rty_rEngineBrakingSplitOW;
  } else {
    /* SignalConversion generated from: '<Root>/rEngineBrakingSplit' */
    *rty_rEngineBrakingSplit = *rty_rEngineBrakingSplitEM;
  }

  if (*rty_rTVMultiplierOW > -1.0) {
    /* SignalConversion generated from: '<Root>/rTVMultiplier' */
    *rty_rTVMultiplier = *rty_rTVMultiplierOW;
  } else {
    /* SignalConversion generated from: '<Root>/rTVMultiplier' */
    *rty_rTVMultiplier = *rty_rTVMultiplierEM;
  }

  if (*rty_rTorqueSplitOW > -1.0) {
    /* SignalConversion generated from: '<Root>/rTorqueSplit' */
    *rty_rTorqueSplit = *rty_rTorqueSplitOW;
  } else {
    /* SignalConversion generated from: '<Root>/rTorqueSplit' */
    *rty_rTorqueSplit = *rty_rTorqueSplitEM;
  }

  /* Chart: '<S7>/EOffset' incorporates:
   *  DataTypeConversion: '<S7>/Data Type Conversion22'
   *  DataTypeConversion: '<S7>/Data Type Conversion23'
   */
  if (localDW->temporalCounter_i1_mn < 511) {
    localDW->temporalCounter_i1_mn++;
  }

  if (localDW->is_active_c1_SteeringWheel == 0) {
    localDW->is_active_c1_SteeringWheel = 1U;
    localDW->temporalCounter_i1_mn = 0U;
    localDW->is_c1_SteeringWheel = SteeringWheel_IN_a;

    /* DataTypeConversion: '<S7>/Data Type Conversion11' */
    *rty_EOffset = 0.0;
  } else {
    switch (localDW->is_c1_SteeringWheel) {
     case SteeringWheel_IN_a:
      if ((localDW->temporalCounter_i1_mn >= 500) &&
          localB->BSteeringWheelButton3_mj) {
        localDW->temporalCounter_i1_mn = 0U;
        localDW->is_c1_SteeringWheel = SteeringWheel_IN_a1;

        /* DataTypeConversion: '<S7>/Data Type Conversion11' */
        *rty_EOffset = -4.5;
      } else if ((localDW->temporalCounter_i1_mn >= 500) &&
                 localB->BSteeringWheelButton4_i2) {
        localDW->temporalCounter_i1_mn = 0U;
        localDW->is_c1_SteeringWheel = SteeringWheel_IN_a7;

        /* DataTypeConversion: '<S7>/Data Type Conversion11' */
        *rty_EOffset = 4.5;
      } else {
        /* DataTypeConversion: '<S7>/Data Type Conversion11' */
        *rty_EOffset = 0.0;
      }
      break;

     case SteeringWheel_IN_a1:
      if ((localDW->temporalCounter_i1_mn >= 500) &&
          localB->BSteeringWheelButton3_mj) {
        localDW->temporalCounter_i1_mn = 0U;
        localDW->is_c1_SteeringWheel = SteeringWheel_IN_a2;

        /* DataTypeConversion: '<S7>/Data Type Conversion11' */
        *rty_EOffset = -3.0;
      } else if ((localDW->temporalCounter_i1_mn >= 500) &&
                 localB->BSteeringWheelButton4_i2) {
        localDW->temporalCounter_i1_mn = 0U;
        localDW->is_c1_SteeringWheel = SteeringWheel_IN_a;

        /* DataTypeConversion: '<S7>/Data Type Conversion11' */
        *rty_EOffset = 0.0;
      } else {
        /* DataTypeConversion: '<S7>/Data Type Conversion11' */
        *rty_EOffset = -4.5;
      }
      break;

     case SteeringWheel_IN_a2:
      if ((localDW->temporalCounter_i1_mn >= 500) &&
          localB->BSteeringWheelButton4_i2) {
        localDW->temporalCounter_i1_mn = 0U;
        localDW->is_c1_SteeringWheel = SteeringWheel_IN_a1;

        /* DataTypeConversion: '<S7>/Data Type Conversion11' */
        *rty_EOffset = -4.5;
      } else if ((localDW->temporalCounter_i1_mn >= 500) &&
                 localB->BSteeringWheelButton3_mj) {
        localDW->temporalCounter_i1_mn = 0U;
        localDW->is_c1_SteeringWheel = SteeringWheel_IN_a3;

        /* DataTypeConversion: '<S7>/Data Type Conversion11' */
        *rty_EOffset = -1.5;
      } else {
        /* DataTypeConversion: '<S7>/Data Type Conversion11' */
        *rty_EOffset = -3.0;
      }
      break;

     case SteeringWheel_IN_a3:
      if ((localDW->temporalCounter_i1_mn >= 500) &&
          localB->BSteeringWheelButton4_i2) {
        localDW->temporalCounter_i1_mn = 0U;
        localDW->is_c1_SteeringWheel = SteeringWheel_IN_a2;

        /* DataTypeConversion: '<S7>/Data Type Conversion11' */
        *rty_EOffset = -3.0;
      } else if ((localDW->temporalCounter_i1_mn >= 500) &&
                 localB->BSteeringWheelButton3_mj) {
        localDW->temporalCounter_i1_mn = 0U;
        localDW->is_c1_SteeringWheel = SteeringWheel_IN_a5;

        /* DataTypeConversion: '<S7>/Data Type Conversion11' */
        *rty_EOffset = 1.5;
      } else {
        /* DataTypeConversion: '<S7>/Data Type Conversion11' */
        *rty_EOffset = -1.5;
      }
      break;

     case SteeringWheel_IN_a5:
      if ((localDW->temporalCounter_i1_mn >= 500) &&
          localB->BSteeringWheelButton4_i2) {
        localDW->temporalCounter_i1_mn = 0U;
        localDW->is_c1_SteeringWheel = SteeringWheel_IN_a3;

        /* DataTypeConversion: '<S7>/Data Type Conversion11' */
        *rty_EOffset = -1.5;
      } else if ((localDW->temporalCounter_i1_mn >= 500) &&
                 localB->BSteeringWheelButton3_mj) {
        localDW->temporalCounter_i1_mn = 0U;
        localDW->is_c1_SteeringWheel = SteeringWheel_IN_a6;

        /* DataTypeConversion: '<S7>/Data Type Conversion11' */
        *rty_EOffset = 3.0;
      } else {
        /* DataTypeConversion: '<S7>/Data Type Conversion11' */
        *rty_EOffset = 1.5;
      }
      break;

     case SteeringWheel_IN_a6:
      if ((localDW->temporalCounter_i1_mn >= 500) &&
          localB->BSteeringWheelButton4_i2) {
        localDW->temporalCounter_i1_mn = 0U;
        localDW->is_c1_SteeringWheel = SteeringWheel_IN_a5;

        /* DataTypeConversion: '<S7>/Data Type Conversion11' */
        *rty_EOffset = 1.5;
      } else if ((localDW->temporalCounter_i1_mn >= 500) &&
                 localB->BSteeringWheelButton3_mj) {
        localDW->temporalCounter_i1_mn = 0U;
        localDW->is_c1_SteeringWheel = SteeringWheel_IN_a7;

        /* DataTypeConversion: '<S7>/Data Type Conversion11' */
        *rty_EOffset = 4.5;
      } else {
        /* DataTypeConversion: '<S7>/Data Type Conversion11' */
        *rty_EOffset = 3.0;
      }
      break;

     default:
      /* case IN_a7: */
      if ((localDW->temporalCounter_i1_mn >= 500) &&
          localB->BSteeringWheelButton3_mj) {
        localDW->temporalCounter_i1_mn = 0U;
        localDW->is_c1_SteeringWheel = SteeringWheel_IN_a;

        /* DataTypeConversion: '<S7>/Data Type Conversion11' */
        *rty_EOffset = 0.0;
      } else if ((localDW->temporalCounter_i1_mn >= 500) &&
                 localB->BSteeringWheelButton4_i2) {
        localDW->temporalCounter_i1_mn = 0U;
        localDW->is_c1_SteeringWheel = SteeringWheel_IN_a6;

        /* DataTypeConversion: '<S7>/Data Type Conversion11' */
        *rty_EOffset = 3.0;
      } else {
        /* DataTypeConversion: '<S7>/Data Type Conversion11' */
        *rty_EOffset = 4.5;
      }
      break;
    }
  }

  /* End of Chart: '<S7>/EOffset' */

  /* Chart: '<S7>/rGrip' incorporates:
   *  DataTypeConversion: '<S7>/Data Type Conversion20'
   *  DataTypeConversion: '<S7>/Data Type Conversion21'
   */
  if (localDW->temporalCounter_i1_j < 511) {
    localDW->temporalCounter_i1_j++;
  }

  if (localDW->is_active_c20_SteeringWheel == 0) {
    localDW->is_active_c20_SteeringWheel = 1U;
    localDW->temporalCounter_i1_j = 0U;
    localDW->is_c20_SteeringWheel = SteeringWheel_IN_mode3;

    /* DataTypeConversion: '<S7>/Data Type Conversion4' */
    *rty_rGrip = 0.5;
  } else {
    switch (localDW->is_c20_SteeringWheel) {
     case SteeringWheel_IN_mode2:
      if ((localDW->temporalCounter_i1_j >= 500) &&
          localB->BSteeringWheelButton3_mjg) {
        localDW->temporalCounter_i1_j = 0U;
        localDW->is_c20_SteeringWheel = SteeringWheel_IN_mode3;

        /* DataTypeConversion: '<S7>/Data Type Conversion4' */
        *rty_rGrip = 0.5;
      } else if ((localDW->temporalCounter_i1_j >= 500) &&
                 localB->BSteeringWheelButton4_i2w) {
        localDW->temporalCounter_i1_j = 0U;
        localDW->is_c20_SteeringWheel = SteeringWheel_IN_mode5;

        /* DataTypeConversion: '<S7>/Data Type Conversion4' */
        *rty_rGrip = 1.0;
      } else {
        /* DataTypeConversion: '<S7>/Data Type Conversion4' */
        *rty_rGrip = 0.25;
      }
      break;

     case SteeringWheel_IN_mode3:
      if ((localDW->temporalCounter_i1_j >= 500) &&
          localB->BSteeringWheelButton3_mjg) {
        localDW->temporalCounter_i1_j = 0U;
        localDW->is_c20_SteeringWheel = SteeringWheel_IN_mode4;

        /* DataTypeConversion: '<S7>/Data Type Conversion4' */
        *rty_rGrip = 0.75;
      } else if ((localDW->temporalCounter_i1_j >= 500) &&
                 localB->BSteeringWheelButton4_i2w) {
        localDW->temporalCounter_i1_j = 0U;
        localDW->is_c20_SteeringWheel = SteeringWheel_IN_mode2;

        /* DataTypeConversion: '<S7>/Data Type Conversion4' */
        *rty_rGrip = 0.25;
      } else {
        /* DataTypeConversion: '<S7>/Data Type Conversion4' */
        *rty_rGrip = 0.5;
      }
      break;

     case SteeringWheel_IN_mode4:
      if ((localDW->temporalCounter_i1_j >= 500) &&
          localB->BSteeringWheelButton3_mjg) {
        localDW->temporalCounter_i1_j = 0U;
        localDW->is_c20_SteeringWheel = SteeringWheel_IN_mode5;

        /* DataTypeConversion: '<S7>/Data Type Conversion4' */
        *rty_rGrip = 1.0;
      } else if ((localDW->temporalCounter_i1_j >= 500) &&
                 localB->BSteeringWheelButton4_i2w) {
        localDW->temporalCounter_i1_j = 0U;
        localDW->is_c20_SteeringWheel = SteeringWheel_IN_mode3;

        /* DataTypeConversion: '<S7>/Data Type Conversion4' */
        *rty_rGrip = 0.5;
      } else {
        /* DataTypeConversion: '<S7>/Data Type Conversion4' */
        *rty_rGrip = 0.75;
      }
      break;

     default:
      /* case IN_mode5: */
      if ((localDW->temporalCounter_i1_j >= 500) &&
          localB->BSteeringWheelButton4_i2w) {
        localDW->temporalCounter_i1_j = 0U;
        localDW->is_c20_SteeringWheel = SteeringWheel_IN_mode4;

        /* DataTypeConversion: '<S7>/Data Type Conversion4' */
        *rty_rGrip = 0.75;
      } else if ((localDW->temporalCounter_i1_j >= 500) &&
                 localB->BSteeringWheelButton3_mjg) {
        localDW->temporalCounter_i1_j = 0U;
        localDW->is_c20_SteeringWheel = SteeringWheel_IN_mode2;

        /* DataTypeConversion: '<S7>/Data Type Conversion4' */
        *rty_rGrip = 0.25;
      } else {
        /* DataTypeConversion: '<S7>/Data Type Conversion4' */
        *rty_rGrip = 1.0;
      }
      break;
    }
  }

  /* End of Chart: '<S7>/rGrip' */

  /* Chart: '<S7>/NTCKdSelector ' incorporates:
   *  DataTypeConversion: '<S7>/Data Type Conversion40'
   *  DataTypeConversion: '<S7>/Data Type Conversion41'
   */
  if (localDW->temporalCounter_i1_p < 511) {
    localDW->temporalCounter_i1_p++;
  }

  if (localDW->is_active_c5_SteeringWheel == 0) {
    localDW->is_active_c5_SteeringWheel = 1U;
    localDW->temporalCounter_i1_p = 0U;
    localDW->is_c5_SteeringWheel = SteeringWheel_IN_a3_c;
    localB->NTCKdSelector = 1.0;
  } else {
    switch (localDW->is_c5_SteeringWheel) {
     case SteeringWheel_IN_Map12_k:
      if ((localDW->temporalCounter_i1_p >= 500) &&
          localB->BSteeringWheelButton3_m) {
        localDW->temporalCounter_i1_p = 0U;
        localDW->is_c5_SteeringWheel = SteeringWheel_IN_a_f;
        localB->NTCKdSelector = 4.0;
      } else if ((localDW->temporalCounter_i1_p >= 500) &&
                 localB->BSteeringWheelButton4_i) {
        localDW->temporalCounter_i1_p = 0U;
        localDW->is_c5_SteeringWheel = SteeringWheel_IN_a3_c;
        localB->NTCKdSelector = 1.0;
      }
      break;

     case SteeringWheel_IN_a_f:
      if ((localDW->temporalCounter_i1_p >= 500) &&
          localB->BSteeringWheelButton3_m) {
        localDW->temporalCounter_i1_p = 0U;
        localDW->is_c5_SteeringWheel = SteeringWheel_IN_a1_l;
        localB->NTCKdSelector = 3.0;
      } else if ((localDW->temporalCounter_i1_p >= 500) &&
                 localB->BSteeringWheelButton4_i) {
        localDW->temporalCounter_i1_p = 0U;
        localDW->is_c5_SteeringWheel = SteeringWheel_IN_Map12_k;
        localB->NTCKdSelector = 5.0;
      } else {
        localB->NTCKdSelector = 4.0;
      }
      break;

     case SteeringWheel_IN_a1_l:
      if ((localDW->temporalCounter_i1_p >= 500) &&
          localB->BSteeringWheelButton3_m) {
        localDW->temporalCounter_i1_p = 0U;
        localDW->is_c5_SteeringWheel = SteeringWheel_IN_a2_p;
        localB->NTCKdSelector = 2.0;
      } else if ((localDW->temporalCounter_i1_p >= 500) &&
                 localB->BSteeringWheelButton4_i) {
        localDW->temporalCounter_i1_p = 0U;
        localDW->is_c5_SteeringWheel = SteeringWheel_IN_a_f;
        localB->NTCKdSelector = 4.0;
      } else {
        localB->NTCKdSelector = 3.0;
      }
      break;

     case SteeringWheel_IN_a2_p:
      if ((localDW->temporalCounter_i1_p >= 500) &&
          localB->BSteeringWheelButton4_i) {
        localDW->temporalCounter_i1_p = 0U;
        localDW->is_c5_SteeringWheel = SteeringWheel_IN_a1_l;
        localB->NTCKdSelector = 3.0;
      } else if ((localDW->temporalCounter_i1_p >= 500) &&
                 localB->BSteeringWheelButton3_m) {
        localDW->temporalCounter_i1_p = 0U;
        localDW->is_c5_SteeringWheel = SteeringWheel_IN_a3_c;
        localB->NTCKdSelector = 1.0;
      } else {
        localB->NTCKdSelector = 2.0;
      }
      break;

     default:
      /* case IN_a3: */
      if ((localDW->temporalCounter_i1_p >= 500) &&
          localB->BSteeringWheelButton4_i) {
        localDW->temporalCounter_i1_p = 0U;
        localDW->is_c5_SteeringWheel = SteeringWheel_IN_a2_p;
        localB->NTCKdSelector = 2.0;
      } else if ((localDW->temporalCounter_i1_p >= 500) &&
                 localB->BSteeringWheelButton3_m) {
        localDW->temporalCounter_i1_p = 0U;
        localDW->is_c5_SteeringWheel = SteeringWheel_IN_Map12_k;
        localB->NTCKdSelector = 5.0;
      } else {
        localB->NTCKdSelector = 1.0;
      }
      break;
    }
  }

  /* End of Chart: '<S7>/NTCKdSelector ' */

  /* DataTypeConversion: '<S7>/Data Type Conversion45' */
  *rty_NTCKdSelector = localB->NTCKdSelector;

  /* Chart: '<S7>/NPCKpSelector ' incorporates:
   *  DataTypeConversion: '<S7>/Data Type Conversion42'
   *  DataTypeConversion: '<S7>/Data Type Conversion43'
   */
  if (localDW->temporalCounter_i1_e2 < 511) {
    localDW->temporalCounter_i1_e2++;
  }

  if (localDW->is_active_c6_SteeringWheel == 0) {
    localDW->is_active_c6_SteeringWheel = 1U;
    localDW->temporalCounter_i1_e2 = 0U;
    localDW->is_c6_SteeringWheel = SteeringWheel_IN_Map12_k;
    localB->NPCKpSelector = 4.0;
  } else {
    switch (localDW->is_c6_SteeringWheel) {
     case SteeringWheel_IN_Map12_k:
      if ((localDW->temporalCounter_i1_e2 >= 500) &&
          localB->BSteeringWheelButton4) {
        localDW->temporalCounter_i1_e2 = 0U;
        localDW->is_c6_SteeringWheel = SteeringWheel_IN_a4;
        localB->NPCKpSelector = 1.0;
      } else if ((localDW->temporalCounter_i1_e2 >= 500) &&
                 localB->BSteeringWheelButton3) {
        localDW->temporalCounter_i1_e2 = 0U;
        localDW->is_c6_SteeringWheel = SteeringWheel_IN_a_f;
        localB->NPCKpSelector = 5.0;
      }
      break;

     case SteeringWheel_IN_a_f:
      if ((localDW->temporalCounter_i1_e2 >= 500) &&
          localB->BSteeringWheelButton3) {
        localDW->temporalCounter_i1_e2 = 0U;
        localDW->is_c6_SteeringWheel = SteeringWheel_IN_a1_l;
        localB->NPCKpSelector = 6.0;
      } else if ((localDW->temporalCounter_i1_e2 >= 500) &&
                 localB->BSteeringWheelButton4) {
        localDW->temporalCounter_i1_e2 = 0U;
        localDW->is_c6_SteeringWheel = SteeringWheel_IN_Map12_k;
        localB->NPCKpSelector = 4.0;
      } else {
        localB->NPCKpSelector = 5.0;
      }
      break;

     case SteeringWheel_IN_a1_l:
      if ((localDW->temporalCounter_i1_e2 >= 500) &&
          localB->BSteeringWheelButton3) {
        localDW->temporalCounter_i1_e2 = 0U;
        localDW->is_c6_SteeringWheel = SteeringWheel_IN_a2_p;
        localB->NPCKpSelector = 1.0;
      } else if ((localDW->temporalCounter_i1_e2 >= 500) &&
                 localB->BSteeringWheelButton4) {
        localDW->temporalCounter_i1_e2 = 0U;
        localDW->is_c6_SteeringWheel = SteeringWheel_IN_a_f;
        localB->NPCKpSelector = 5.0;
      } else {
        localB->NPCKpSelector = 6.0;
      }
      break;

     case SteeringWheel_IN_a2_p:
      if ((localDW->temporalCounter_i1_e2 >= 500) &&
          localB->BSteeringWheelButton4) {
        localDW->temporalCounter_i1_e2 = 0U;
        localDW->is_c6_SteeringWheel = SteeringWheel_IN_a1_l;
        localB->NPCKpSelector = 6.0;
      } else if ((localDW->temporalCounter_i1_e2 >= 500) &&
                 localB->BSteeringWheelButton3) {
        localDW->temporalCounter_i1_e2 = 0U;
        localDW->is_c6_SteeringWheel = SteeringWheel_IN_a3_c;
        localB->NPCKpSelector = 2.0;
      } else {
        localB->NPCKpSelector = 1.0;
      }
      break;

     case SteeringWheel_IN_a3_c:
      if ((localDW->temporalCounter_i1_e2 >= 500) &&
          localB->BSteeringWheelButton4) {
        localDW->temporalCounter_i1_e2 = 0U;
        localDW->is_c6_SteeringWheel = SteeringWheel_IN_a2_p;
        localB->NPCKpSelector = 1.0;
      } else if ((localDW->temporalCounter_i1_e2 >= 500) &&
                 localB->BSteeringWheelButton3) {
        localDW->temporalCounter_i1_e2 = 0U;
        localDW->is_c6_SteeringWheel = SteeringWheel_IN_a4;
        localB->NPCKpSelector = 1.0;
      } else {
        localB->NPCKpSelector = 2.0;
      }
      break;

     default:
      /* case IN_a4: */
      if ((localDW->temporalCounter_i1_e2 >= 500) &&
          localB->BSteeringWheelButton4) {
        localDW->temporalCounter_i1_e2 = 0U;
        localDW->is_c6_SteeringWheel = SteeringWheel_IN_a3_c;
        localB->NPCKpSelector = 2.0;
      } else if ((localDW->temporalCounter_i1_e2 >= 500) &&
                 localB->BSteeringWheelButton3) {
        localDW->temporalCounter_i1_e2 = 0U;
        localDW->is_c6_SteeringWheel = SteeringWheel_IN_Map12_k;
        localB->NPCKpSelector = 4.0;
      } else {
        localB->NPCKpSelector = 1.0;
      }
      break;
    }
  }

  /* End of Chart: '<S7>/NPCKpSelector ' */

  /* DataTypeConversion: '<S7>/Data Type Conversion44' */
  *rty_NPCKpSelector = localB->NPCKpSelector;

  /* RelationalOperator: '<S11>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S11>/Delay Input1'
   *
   * Block description for '<S11>/Delay Input1':
   *
   *  Store in Global RAM
   */
  *rty_BPageDown = (*rtu_NPageSelectRotary < localDW->DelayInput1_DSTATE);

  /* UnitDelay: '<S12>/Delay Input1' incorporates:
   *  UnitDelay: '<S11>/Delay Input1'
   *
   * Block description for '<S12>/Delay Input1':
   *
   *  Store in Global RAM
   *
   * Block description for '<S11>/Delay Input1':
   *
   *  Store in Global RAM
   */
  localDW->DelayInput1_DSTATE = localDW->DelayInput1_DSTATE_b;

  /* RelationalOperator: '<S12>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S11>/Delay Input1'
   *
   * Block description for '<S11>/Delay Input1':
   *
   *  Store in Global RAM
   */
  *rty_BPageUp = (*rtu_NPageSelectRotary > localDW->DelayInput1_DSTATE);

  /* Chart: '<S6>/Incremental' */
  if (localDW->is_active_c27_SteeringWheel == 0) {
    localDW->is_active_c27_SteeringWheel = 1U;
    localDW->is_c27_SteeringWheel = SteeringWheel_IN_Page1;
    localDW->old = *rtu_NPageSelectRotary;
  } else {
    switch (localDW->is_c27_SteeringWheel) {
     case SteeringWheel_IN_Page1:
      if ((*rtu_NPageSelectRotary > localDW->old) && (*rtu_NPageSelectRotary !=
           localDW->old)) {
        localDW->is_c27_SteeringWheel = SteeringWheel_IN_Page2;
        localDW->old = *rtu_NPageSelectRotary;
      }
      break;

     case SteeringWheel_IN_Page10:
      if ((*rtu_NPageSelectRotary < localDW->old) && (*rtu_NPageSelectRotary !=
           localDW->old)) {
        localDW->is_c27_SteeringWheel = SteeringWheel_IN_Page9;
        localDW->old = *rtu_NPageSelectRotary;
      } else if ((*rtu_NPageSelectRotary > localDW->old) &&
                 (*rtu_NPageSelectRotary != localDW->old)) {
        localDW->is_c27_SteeringWheel = SteeringWheel_IN_Page11;
        localDW->old = *rtu_NPageSelectRotary;
      }
      break;

     case SteeringWheel_IN_Page11:
      if ((*rtu_NPageSelectRotary < localDW->old) && (*rtu_NPageSelectRotary !=
           localDW->old)) {
        localDW->is_c27_SteeringWheel = SteeringWheel_IN_Page10;
        localDW->old = *rtu_NPageSelectRotary;
      }
      break;

     case SteeringWheel_IN_Page2:
      if ((*rtu_NPageSelectRotary < localDW->old) && (*rtu_NPageSelectRotary !=
           localDW->old)) {
        localDW->is_c27_SteeringWheel = SteeringWheel_IN_Page1;
        localDW->old = *rtu_NPageSelectRotary;
      } else if ((*rtu_NPageSelectRotary > localDW->old) &&
                 (*rtu_NPageSelectRotary != localDW->old)) {
        localDW->is_c27_SteeringWheel = SteeringWheel_IN_Page3;
        localDW->old = *rtu_NPageSelectRotary;
      }
      break;

     case SteeringWheel_IN_Page3:
      if ((*rtu_NPageSelectRotary < localDW->old) && (*rtu_NPageSelectRotary !=
           localDW->old)) {
        localDW->is_c27_SteeringWheel = SteeringWheel_IN_Page2;
        localDW->old = *rtu_NPageSelectRotary;
      } else if ((*rtu_NPageSelectRotary > localDW->old) &&
                 (*rtu_NPageSelectRotary != localDW->old)) {
        localDW->is_c27_SteeringWheel = SteeringWheel_IN_Page4;
        localDW->old = *rtu_NPageSelectRotary;
      }
      break;

     case SteeringWheel_IN_Page4:
      if ((*rtu_NPageSelectRotary > localDW->old) && (*rtu_NPageSelectRotary !=
           localDW->old)) {
        localDW->is_c27_SteeringWheel = SteeringWheel_IN_Page5;
        localDW->old = *rtu_NPageSelectRotary;
      } else if ((*rtu_NPageSelectRotary < localDW->old) &&
                 (*rtu_NPageSelectRotary != localDW->old)) {
        localDW->is_c27_SteeringWheel = SteeringWheel_IN_Page3;
        localDW->old = *rtu_NPageSelectRotary;
      }
      break;

     case SteeringWheel_IN_Page5:
      if ((*rtu_NPageSelectRotary > localDW->old) && (*rtu_NPageSelectRotary !=
           localDW->old)) {
        localDW->is_c27_SteeringWheel = SteeringWheel_IN_Page6;
        localDW->old = *rtu_NPageSelectRotary;
      } else if ((*rtu_NPageSelectRotary < localDW->old) &&
                 (*rtu_NPageSelectRotary != localDW->old)) {
        localDW->is_c27_SteeringWheel = SteeringWheel_IN_Page4;
        localDW->old = *rtu_NPageSelectRotary;
      }
      break;

     case SteeringWheel_IN_Page6:
      if ((*rtu_NPageSelectRotary > localDW->old) && (*rtu_NPageSelectRotary !=
           localDW->old)) {
        localDW->is_c27_SteeringWheel = SteeringWheel_IN_Page7;
        localDW->old = *rtu_NPageSelectRotary;
      } else if ((*rtu_NPageSelectRotary < localDW->old) &&
                 (*rtu_NPageSelectRotary != localDW->old)) {
        localDW->is_c27_SteeringWheel = SteeringWheel_IN_Page5;
        localDW->old = *rtu_NPageSelectRotary;
      }
      break;

     case SteeringWheel_IN_Page7:
      if ((*rtu_NPageSelectRotary > localDW->old) && (*rtu_NPageSelectRotary !=
           localDW->old)) {
        localDW->is_c27_SteeringWheel = SteeringWheel_IN_Page8;
        localDW->old = *rtu_NPageSelectRotary;
      } else if ((*rtu_NPageSelectRotary <= localDW->old) &&
                 (*rtu_NPageSelectRotary != localDW->old)) {
        localDW->is_c27_SteeringWheel = SteeringWheel_IN_Page6;
        localDW->old = *rtu_NPageSelectRotary;
      }
      break;

     case SteeringWheel_IN_Page8:
      if ((*rtu_NPageSelectRotary < localDW->old) && (*rtu_NPageSelectRotary !=
           localDW->old)) {
        localDW->is_c27_SteeringWheel = SteeringWheel_IN_Page7;
        localDW->old = *rtu_NPageSelectRotary;
      } else if ((*rtu_NPageSelectRotary > localDW->old) &&
                 (*rtu_NPageSelectRotary != localDW->old)) {
        localDW->is_c27_SteeringWheel = SteeringWheel_IN_Page9;
        localDW->old = *rtu_NPageSelectRotary;
      }
      break;

     default:
      /* case IN_Page9: */
      SteeringWheel_Page9(rtu_NPageSelectRotary, localDW);
      break;
    }
  }

  /* End of Chart: '<S6>/Incremental' */

  /* Logic: '<S1>/AND' */
  *rty_BCalibrationOn = ((*rtu_BSteeringWheelButton1) &&
    (*rtu_BSteeringWheelButton3));

  /* SignalConversion generated from: '<Root>/BSteeringWheelButton2' */
  *rty_BErrorReset = *rtu_BSteeringWheelButton2;

  /* Logic: '<S2>/AND1' */
  *rty_BInvLVOn = ((!*rty_BErrorReset) || (!*rtu_BSteeringWheelButton4));

  /* If: '<S3>/If' */
  if (*rtu_NCarState == 92.0) {
    /* Outputs for IfAction SubSystem: '<S3>/If Action Subsystem' incorporates:
     *  ActionPort: '<S8>/Action Port'
     */
    /* SignalConversion generated from: '<S8>/In1' */
    *rty_BDataMark = *rtu_BSteeringWheelButton1;

    /* End of Outputs for SubSystem: '<S3>/If Action Subsystem' */
  } else {
    /* Outputs for IfAction SubSystem: '<S3>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S9>/Action Port'
     */
    /* SignalConversion generated from: '<S9>/In1' */
    *rty_BReadyToDriveButton = *rtu_BSteeringWheelButton1;

    /* End of Outputs for SubSystem: '<S3>/If Action Subsystem1' */
  }

  /* End of If: '<S3>/If' */

  /* Update for UnitDelay: '<S11>/Delay Input1'
   *
   * Block description for '<S11>/Delay Input1':
   *
   *  Store in Global RAM
   */
  localDW->DelayInput1_DSTATE = *rtu_NPageSelectRotary;

  /* Update for UnitDelay: '<S12>/Delay Input1'
   *
   * Block description for '<S12>/Delay Input1':
   *
   *  Store in Global RAM
   */
  localDW->DelayInput1_DSTATE_b = *rtu_NPageSelectRotary;
}

/* Model initialize function */
void SteeringWheel_initialize(const char_T **rt_errorStatus,
  RT_MODEL_SteeringWheel_T *const SteeringWheel_M)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(SteeringWheel_M, rt_errorStatus);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
