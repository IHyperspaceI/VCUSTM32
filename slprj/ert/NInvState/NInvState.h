/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: NInvState.h
 *
 * Code generated for Simulink model 'NInvState'.
 *
 * Model version                  : 13.5
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Tue Jun  2 18:45:44 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef NInvState_h_
#define NInvState_h_
#ifndef NInvState_COMMON_INCLUDES_
#define NInvState_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                                 /* NInvState_COMMON_INCLUDES_ */

#include "NInvState_types.h"

/* user code (top of header file) */
#include "stm32h7xx_ll_tim.h"

/* Block signals for model 'NInvState' */
typedef struct {
  real_T NInvState_l;                  /* '<Root>/NInverterState System' */
  real_T BHVOn;                        /* '<Root>/NInverterState System' */
  real_T BInvOnRL;                     /* '<Root>/NInverterState System' */
  real_T BInvOnRR;                     /* '<Root>/NInverterState System' */
  real_T BInvOnFL;                     /* '<Root>/NInverterState System' */
  real_T BInvOnFR;                     /* '<Root>/NInverterState System' */
  real_T BInvDCOnRL;                   /* '<Root>/NInverterState System' */
  real_T BInvDCOnRR;                   /* '<Root>/NInverterState System' */
  real_T BInvDCOnFL;                   /* '<Root>/NInverterState System' */
  real_T BInvDCOnFR;                   /* '<Root>/NInverterState System' */
  real_T BInvEnableRL;                 /* '<Root>/NInverterState System' */
  real_T BInvEnableRR;                 /* '<Root>/NInverterState System' */
  real_T BInvEnableFL;                 /* '<Root>/NInverterState System' */
  real_T BInvEnableFR;                 /* '<Root>/NInverterState System' */
  real_T BInvErrorResetRL;             /* '<Root>/NInverterState System' */
  real_T BInvErrorResetRR;             /* '<Root>/NInverterState System' */
  real_T BInvErrorResetFL;             /* '<Root>/NInverterState System' */
  real_T BInvErrorResetFR;             /* '<Root>/NInverterState System' */
  real_T MTargetTorqueRL;              /* '<Root>/NInverterState System' */
  real_T MTargetTorqueRR;              /* '<Root>/NInverterState System' */
  real_T MTargetTorqueFL;              /* '<Root>/NInverterState System' */
  real_T MTargetTorqueFR;              /* '<Root>/NInverterState System' */
  real_T MTorqueLimitNegativeRL;       /* '<Root>/NInverterState System' */
  real_T MTorqueLimitNegativeRR;       /* '<Root>/NInverterState System' */
  real_T MTorqueLimitNegativeFL;       /* '<Root>/NInverterState System' */
  real_T MTorqueLimitNegativeFR;       /* '<Root>/NInverterState System' */
  real_T MTorqueLimitPositiveRL;       /* '<Root>/NInverterState System' */
  real_T MTorqueLimitPositiveRR;       /* '<Root>/NInverterState System' */
  real_T MTorqueLimitPositiveFL;       /* '<Root>/NInverterState System' */
  real_T MTorqueLimitPositiveFR;       /* '<Root>/NInverterState System' */
} B_NInvState_c_T;

/* Block states (default storage) for model 'NInvState' */
typedef struct {
  int32_T sfEvent;                     /* '<Root>/NInverterState System' */
  uint16_T temporalCounter_i1;         /* '<Root>/NInverterState System' */
  uint8_T is_active_c4_NInvState;      /* '<Root>/NInverterState System' */
  uint8_T is_c4_NInvState;             /* '<Root>/NInverterState System' */
  uint8_T is_Encoder_Reset_FL;         /* '<Root>/NInverterState System' */
  uint8_T is_Encoder_Error_FL;         /* '<Root>/NInverterState System' */
  uint8_T is_Inverter_HV_Checks2;      /* '<Root>/NInverterState System' */
  uint8_T is_Encoder_Reset_FR;         /* '<Root>/NInverterState System' */
  uint8_T is_Encoder_Error_FR;         /* '<Root>/NInverterState System' */
  uint8_T is_Inverter_HV_Checks3;      /* '<Root>/NInverterState System' */
  uint8_T is_Encoder_Reset_RL;         /* '<Root>/NInverterState System' */
  uint8_T is_Encoder_Error_RL;         /* '<Root>/NInverterState System' */
  uint8_T is_Inverter_HV_Checks3_e;    /* '<Root>/NInverterState System' */
  uint8_T is_Encoder_Reset_RR;         /* '<Root>/NInverterState System' */
  uint8_T is_Encoder_Error_RR;         /* '<Root>/NInverterState System' */
  uint8_T is_Inverter_HV_CheckRR;      /* '<Root>/NInverterState System' */
  uint8_T is_Inv_Error_Checks;         /* '<Root>/NInverterState System' */
  uint8_T is_Inverter_HV_Checks;       /* '<Root>/NInverterState System' */
  uint8_T is_Inverter_HV_CheckFR;      /* '<Root>/NInverterState System' */
  uint8_T is_Inverter_HV_CheckRR_m;    /* '<Root>/NInverterState System' */
  uint8_T is_Inverter_HV_ChecksFL;     /* '<Root>/NInverterState System' */
  uint8_T is_Inverter_HV_ChecksRL;     /* '<Root>/NInverterState System' */
} DW_NInvState_f_T;

/* Real-time Model Data Structure */
struct tag_RTM_NInvState_T {
  const char_T **errorStatus;
};

typedef struct {
  B_NInvState_c_T rtb;
  DW_NInvState_f_T rtdw;
  RT_MODEL_NInvState_T rtm;
} MdlrefDW_NInvState_T;

/* Model reference registration function */
extern void NInvState_initialize(const char_T **rt_errorStatus,
  RT_MODEL_NInvState_T *const NInvState_M);
extern void NInvState_Init(DW_NInvState_f_T *localDW);
extern void NInvState(const boolean_T *rtu_BErrorReset, const real_T
                      *rtu_VDCInvRL, const real_T *rtu_nMotorRL, const boolean_T
                      *rtu_BInvErrorRL, const boolean_T *rtu_BInvErrorRR, const
                      boolean_T *rtu_BInvErrorFL, const boolean_T
                      *rtu_BInvErrorFR, const real_T *rtu_NInvDTCRL, const
                      real_T *rtu_NInvDTCRR, const real_T *rtu_NInvDTCFL, const
                      real_T *rtu_NInvDTCFR, const boolean_T *rtu_BInvSysReadyRL,
                      const boolean_T *rtu_BInvSysReadyRR, const boolean_T
                      *rtu_BInvSysReadyFL, const boolean_T *rtu_BInvSysReadyFR,
                      const boolean_T *rtu_BInvQuitInvOnRL, const boolean_T
                      *rtu_BInvQuitInvOnRR, const boolean_T *rtu_BInvQuitInvOnFL,
                      const boolean_T *rtu_BInvQuitInvOnFR, const boolean_T
                      *rtu_BInvDCQuitInvOnRL, const boolean_T
                      *rtu_BInvDCQuitInvOnRR, const boolean_T
                      *rtu_BInvDCQuitInvOnFL, const boolean_T
                      *rtu_BInvDCQuitInvOnFR, const real_T *rtu_VDCAccumulator,
                      real_T *rty_NInvState, real_T *rty_BHVOn, real_T
                      *rty_BInvOnRL, real_T *rty_BInvOnRR, real_T *rty_BInvOnFL,
                      real_T *rty_BInvOnFR, real_T *rty_BInvDCOnRL, real_T
                      *rty_BInvDCOnRR, real_T *rty_BInvDCOnFL, real_T
                      *rty_BInvDCOnFR, real_T *rty_BInvEnableRL, real_T
                      *rty_BInvEnableRR, real_T *rty_BInvEnableFL, real_T
                      *rty_BInvEnableFR, real_T *rty_BInvErrorResetRL, real_T
                      *rty_BInvErrorResetRR, real_T *rty_BInvErrorResetFL,
                      real_T *rty_BInvErrorResetFR, real_T *rty_MTargetTorqueRL,
                      real_T *rty_MTargetTorqueRR, real_T *rty_MTargetTorqueFL,
                      real_T *rty_MTargetTorqueFR, real_T
                      *rty_MTorqueLimitNegativeRL, real_T
                      *rty_MTorqueLimitNegativeRR, real_T
                      *rty_MTorqueLimitNegativeFL, real_T
                      *rty_MTorqueLimitNegativeFR, real_T
                      *rty_MTorqueLimitPositiveRL, real_T
                      *rty_MTorqueLimitPositiveRR, real_T
                      *rty_MTorqueLimitPositiveFL, real_T
                      *rty_MTorqueLimitPositiveFR, B_NInvState_c_T *localB,
                      DW_NInvState_f_T *localDW);

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
 * '<Root>' : 'NInvState'
 * '<S1>'   : 'NInvState/NInverterState System'
 */
#endif                                 /* NInvState_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
