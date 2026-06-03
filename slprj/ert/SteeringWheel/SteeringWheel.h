/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: SteeringWheel.h
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

#ifndef SteeringWheel_h_
#define SteeringWheel_h_
#ifndef SteeringWheel_COMMON_INCLUDES_
#define SteeringWheel_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                                 /* SteeringWheel_COMMON_INCLUDES_ */

#include "SteeringWheel_types.h"

/* user code (top of header file) */
#include "stm32h7xx_ll_tim.h"

/* Block signals for model 'SteeringWheel' */
typedef struct {
  real_T NModeNumberDisplay6;          /* '<S5>/NModeNumberDisplay6 System' */
  real_T NModeNumberDisplay5;          /* '<S5>/NModeNumberDisplay5 System' */
  real_T rTorqueVectoringMultiplier;
                                  /* '<S4>/rTorqueVectoringMultiplier System' */
  real_T NTractionControlKpSelector;
                                  /* '<S4>/NTractionControlKpSelector System' */
  real_T NTorqueSplitSpeedSelector;/* '<S4>/NTorqueSplitSpeedSelector System' */
  real_T NPowerControllerKpSelector;
                                  /* '<S4>/NPowerControllerKpSelector System' */
  real_T BTractionControlActivated;/* '<S4>/BTractionControlActivated System' */
  real_T BAccumulatorFanOn;            /* '<S4>/BAccumulatorFanOn System' */
  real_T rTorqueSplit;                 /* '<S3>/rTorqueSplit System' */
  real_T PRegen;                       /* '<S3>/PRegen System' */
  real_T PEngineBraking;               /* '<S3>/PEngineBrakingPower System' */
  real_T NThrottleMap;                 /* '<S3>/NThrottleMap System' */
  real_T PDischarge;                   /* '<S3>/NThrottleMap System' */
  real_T BSpinningModelActivated;    /* '<S3>/BSpinningModelActivated System' */
  real_T BEMSActivated;                /* '<S3>/BEMSActivated System' */
  real_T BTorqueVectoringActivated;/* '<S2>/BTorqueVectoringActivated Syatem' */
  boolean_T BSteeringWheelButton4;     /* '<S32>/BSteeringWheelButton4 ' */
  boolean_T BSteeringWheelButton6;     /* '<S32>/BSteeringWheelButton6 ' */
  boolean_T BSteeringWheelButton4_b;   /* '<S33>/BSteeringWheelButton4 ' */
  boolean_T BSteeringWheelButton6_b;   /* '<S33>/BSteeringWheelButton6 ' */
  boolean_T BSteeringWheelButton2;     /* '<S27>/BSteeringWheelButton2  ' */
  boolean_T BSteeringWheelButton5;     /* '<S27>/BSteeringWheelButton5  ' */
  boolean_T BSteeringWheelButton2_o;   /* '<S26>/BSteeringWheelButton2  ' */
  boolean_T BSteeringWheelButton5_m;   /* '<S26>/BSteeringWheelButton5  ' */
  boolean_T BSteeringWheelButton2_ol;  /* '<S25>/BSteeringWheelButton2  ' */
  boolean_T BSteeringWheelButton5_mj;  /* '<S25>/BSteeringWheelButton5  ' */
  boolean_T BSteeringWheelButton2_olx; /* '<S24>/BSteeringWheelButton2  ' */
  boolean_T BSteeringWheelButton5_mjt; /* '<S24>/BSteeringWheelButton5  ' */
  boolean_T BSteeringWheelButton2_olxt;/* '<S23>/BSteeringWheelButton2  ' */
  boolean_T BSteeringWheelButton5_mjtb;/* '<S23>/BSteeringWheelButton5  ' */
  boolean_T BSteeringWheelButton2_olxto;/* '<S22>/BSteeringWheelButton2  ' */
  boolean_T BSteeringWheelButton5_mjtbw;/* '<S22>/BSteeringWheelButton5  ' */
  boolean_T BSteeringWheelButton2_olxto1;/* '<S15>/BSteeringWheelButton2  ' */
  boolean_T BSteeringWheelButton5_mjtbww;/* '<S15>/BSteeringWheelButton5  ' */
  boolean_T BSteeringWheelButton2_olxto1z;/* '<S14>/BSteeringWheelButton2  ' */
  boolean_T BSteeringWheelButton5_mjtbwwh;/* '<S14>/BSteeringWheelButton5  ' */
  boolean_T BSteeringWheelButton2_olxto1zi;/* '<S13>/BSteeringWheelButton2  ' */
  boolean_T BSteeringWheelButton5_mjtbwwh3;/* '<S13>/BSteeringWheelButton5  ' */
  boolean_T BSteeringWheelButton2_olxto1zi0;/* '<S12>/BSteeringWheelButton2  ' */
  boolean_T BSteeringWheelButton5_mjtbwwh3k;/* '<S12>/BSteeringWheelButton5  ' */
  boolean_T BSteeringWheelButton_olxto1zi0t;/* '<S11>/BSteeringWheelButton2  ' */
  boolean_T BSteeringWheelButton_mjtbwwh3kp;/* '<S11>/BSteeringWheelButton5  ' */
  boolean_T BSteeringWheelButto_olxto1zi0th;/* '<S10>/BSteeringWheelButton2  ' */
  boolean_T BSteeringWheelButto_mjtbwwh3kp5;/* '<S10>/BSteeringWheelButton5  ' */
  boolean_T BSteeringWheelButton2_b;   /* '<S7>/BSteeringWheelButton2 ' */
  boolean_T BSteeringWheelButton5_j;   /* '<S7>/BSteeringWheelButton5 ' */
} B_SteeringWheel_c_T;

/* Block states (default storage) for model 'SteeringWheel' */
typedef struct {
  int32_T sfEvent;                     /* '<S5>/NModeNumberDisplay6 System' */
  int32_T sfEvent_a;                   /* '<S5>/NModeNumberDisplay5 System' */
  uint16_T temporalCounter_i1;         /* '<S5>/NModeNumberDisplay6 System' */
  uint16_T temporalCounter_i1_a;       /* '<S5>/NModeNumberDisplay5 System' */
  uint16_T temporalCounter_i1_p;  /* '<S4>/rTorqueVectoringMultiplier System' */
  uint16_T temporalCounter_i1_h;  /* '<S4>/NTractionControlKpSelector System' */
  uint16_T temporalCounter_i1_k;   /* '<S4>/NTorqueSplitSpeedSelector System' */
  uint16_T temporalCounter_i1_l;  /* '<S4>/NPowerControllerKpSelector System' */
  uint16_T temporalCounter_i1_o;   /* '<S4>/BTractionControlActivated System' */
  uint16_T temporalCounter_i1_aa;      /* '<S4>/BAccumulatorFanOn System' */
  uint16_T temporalCounter_i1_d;       /* '<S3>/rTorqueSplit System' */
  uint16_T temporalCounter_i1_g;       /* '<S3>/PRegen System' */
  uint16_T temporalCounter_i1_d4;      /* '<S3>/PEngineBrakingPower System' */
  uint16_T temporalCounter_i1_ap;      /* '<S3>/NThrottleMap System' */
  uint16_T temporalCounter_i1_c;     /* '<S3>/BSpinningModelActivated System' */
  uint16_T temporalCounter_i1_f;       /* '<S3>/BEMSActivated System' */
  uint16_T temporalCounter_i1_kb;  /* '<S2>/BTorqueVectoringActivated Syatem' */
  uint8_T is_active_c14_SteeringWheel; /* '<S5>/NModeNumberDisplay6 System' */
  uint8_T is_c14_SteeringWheel;        /* '<S5>/NModeNumberDisplay6 System' */
  uint8_T is_active_c4_SteeringWheel;  /* '<S5>/NModeNumberDisplay5 System' */
  uint8_T is_c4_SteeringWheel;         /* '<S5>/NModeNumberDisplay5 System' */
  uint8_T is_active_c16_SteeringWheel;
                                  /* '<S4>/rTorqueVectoringMultiplier System' */
  uint8_T is_c16_SteeringWheel;   /* '<S4>/rTorqueVectoringMultiplier System' */
  uint8_T is_active_c21_SteeringWheel;
                                  /* '<S4>/NTractionControlKpSelector System' */
  uint8_T is_c21_SteeringWheel;   /* '<S4>/NTractionControlKpSelector System' */
  uint8_T is_active_c17_SteeringWheel;
                                   /* '<S4>/NTorqueSplitSpeedSelector System' */
  uint8_T is_c17_SteeringWheel;    /* '<S4>/NTorqueSplitSpeedSelector System' */
  uint8_T is_active_c18_SteeringWheel;
                                  /* '<S4>/NPowerControllerKpSelector System' */
  uint8_T is_c18_SteeringWheel;   /* '<S4>/NPowerControllerKpSelector System' */
  uint8_T is_active_c19_SteeringWheel;
                                   /* '<S4>/BTractionControlActivated System' */
  uint8_T is_c19_SteeringWheel;    /* '<S4>/BTractionControlActivated System' */
  uint8_T is_active_c15_SteeringWheel; /* '<S4>/BAccumulatorFanOn System' */
  uint8_T is_c15_SteeringWheel;        /* '<S4>/BAccumulatorFanOn System' */
  uint8_T is_active_c5_SteeringWheel;  /* '<S3>/rTorqueSplit System' */
  uint8_T is_c5_SteeringWheel;         /* '<S3>/rTorqueSplit System' */
  uint8_T is_active_c10_SteeringWheel; /* '<S3>/PRegen System' */
  uint8_T is_c10_SteeringWheel;        /* '<S3>/PRegen System' */
  uint8_T is_active_c3_SteeringWheel;  /* '<S3>/PEngineBrakingPower System' */
  uint8_T is_c3_SteeringWheel;         /* '<S3>/PEngineBrakingPower System' */
  uint8_T is_active_c12_SteeringWheel; /* '<S3>/NThrottleMap System' */
  uint8_T is_c12_SteeringWheel;        /* '<S3>/NThrottleMap System' */
  uint8_T is_active_c11_SteeringWheel;
                                     /* '<S3>/BSpinningModelActivated System' */
  uint8_T is_c11_SteeringWheel;      /* '<S3>/BSpinningModelActivated System' */
  uint8_T is_active_c1_SteeringWheel;  /* '<S3>/BEMSActivated System' */
  uint8_T is_c1_SteeringWheel;         /* '<S3>/BEMSActivated System' */
  uint8_T is_active_c32_SteeringWheel;
                                   /* '<S2>/BTorqueVectoringActivated Syatem' */
  uint8_T is_c32_SteeringWheel;    /* '<S2>/BTorqueVectoringActivated Syatem' */
} DW_SteeringWheel_f_T;

/* Real-time Model Data Structure */
struct tag_RTM_SteeringWheel_T {
  const char_T **errorStatus;
};

typedef struct {
  B_SteeringWheel_c_T rtb;
  DW_SteeringWheel_f_T rtdw;
  RT_MODEL_SteeringWheel_T rtm;
} MdlrefDW_SteeringWheel_T;

/* Model reference registration function */
extern void SteeringWheel_initialize(const char_T **rt_errorStatus,
  RT_MODEL_SteeringWheel_T *const SteeringWheel_M);
extern void SteeringWheel_IfActionSubsystem(const boolean_T
  *rtu_BSteeringWheelButton2, const boolean_T *rtu_BSteeringWheelButton5,
  boolean_T *rty_BSteeringWheelButton2, boolean_T *rty_BSteeringWheelButton5);
extern void SteeringWhee_IfActionSubsystem3(boolean_T rtu_BSteeringWheelButton4,
  const boolean_T *rtu_BSteeringWheelButton6, boolean_T
  *rty_BSteeringWheelButton4, boolean_T *rty_BSteeringWheelButton6);
extern void SteeringWheel_Init(DW_SteeringWheel_f_T *localDW);
extern void SteeringWheel(const boolean_T *rtu_BSteeringWheelButton7, const
  real_T *rtu_NDisplayNumberDDU7, const boolean_T *rtu_BSteeringWheelButton2,
  const boolean_T *rtu_BSteeringWheelButton5, const boolean_T
  *rtu_BSteeringWheelButton4, const boolean_T *rtu_BSteeringWheelButton6,
  boolean_T *rty_BTorqueVectoringActivated, real_T *rty_NThrottleMap, real_T
  *rty_PDischarge, boolean_T *rty_BEMSActivated, real_T *rty_PRegen, real_T
  *rty_rTorqueSplit, real_T *rty_PEngineBraking, boolean_T
  *rty_BSpinningModelActivated, real_T *rty_NTractionControlKpSelector,
  boolean_T *rty_BTractionControlActivated, real_T
  *rty_rTorqueVectoringMultiplier, real_T *rty_NPowerControllerKpSelector,
  real_T *rty_NTorqueSplitSpeedSelector, boolean_T *rty_BAccumulatorFanOn,
  boolean_T *rty_BErrorReset, boolean_T *rty_BReadyToDriveButton, real_T
  *rty_NModeNumberDisplay5, real_T *rty_NModeNumberDisplay6, boolean_T
  *rty_BInvLVOn, B_SteeringWheel_c_T *localB, DW_SteeringWheel_f_T *localDW);

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
 * '<Root>' : 'SteeringWheel'
 * '<S1>'   : 'SteeringWheel/BInvLVOn System'
 * '<S2>'   : 'SteeringWheel/DDU7 Display Number 1 System'
 * '<S3>'   : 'SteeringWheel/DDU7 Display Number 5 System'
 * '<S4>'   : 'SteeringWheel/DDU7 Display Number 6 System'
 * '<S5>'   : 'SteeringWheel/NModeNumber System'
 * '<S6>'   : 'SteeringWheel/DDU7 Display Number 1 System/BTorqueVectoringActivated Syatem'
 * '<S7>'   : 'SteeringWheel/DDU7 Display Number 1 System/If Action Subsystem3'
 * '<S8>'   : 'SteeringWheel/DDU7 Display Number 5 System/BEMSActivated System'
 * '<S9>'   : 'SteeringWheel/DDU7 Display Number 5 System/BSpinningModelActivated System'
 * '<S10>'  : 'SteeringWheel/DDU7 Display Number 5 System/If Action Subsystem'
 * '<S11>'  : 'SteeringWheel/DDU7 Display Number 5 System/If Action Subsystem1'
 * '<S12>'  : 'SteeringWheel/DDU7 Display Number 5 System/If Action Subsystem2'
 * '<S13>'  : 'SteeringWheel/DDU7 Display Number 5 System/If Action Subsystem3'
 * '<S14>'  : 'SteeringWheel/DDU7 Display Number 5 System/If Action Subsystem6'
 * '<S15>'  : 'SteeringWheel/DDU7 Display Number 5 System/If Action Subsystem7'
 * '<S16>'  : 'SteeringWheel/DDU7 Display Number 5 System/NThrottleMap System'
 * '<S17>'  : 'SteeringWheel/DDU7 Display Number 5 System/PEngineBrakingPower System'
 * '<S18>'  : 'SteeringWheel/DDU7 Display Number 5 System/PRegen System'
 * '<S19>'  : 'SteeringWheel/DDU7 Display Number 5 System/rTorqueSplit System'
 * '<S20>'  : 'SteeringWheel/DDU7 Display Number 6 System/BAccumulatorFanOn System'
 * '<S21>'  : 'SteeringWheel/DDU7 Display Number 6 System/BTractionControlActivated System'
 * '<S22>'  : 'SteeringWheel/DDU7 Display Number 6 System/If Action Subsystem10'
 * '<S23>'  : 'SteeringWheel/DDU7 Display Number 6 System/If Action Subsystem11'
 * '<S24>'  : 'SteeringWheel/DDU7 Display Number 6 System/If Action Subsystem12'
 * '<S25>'  : 'SteeringWheel/DDU7 Display Number 6 System/If Action Subsystem13'
 * '<S26>'  : 'SteeringWheel/DDU7 Display Number 6 System/If Action Subsystem14'
 * '<S27>'  : 'SteeringWheel/DDU7 Display Number 6 System/If Action Subsystem15'
 * '<S28>'  : 'SteeringWheel/DDU7 Display Number 6 System/NPowerControllerKpSelector System'
 * '<S29>'  : 'SteeringWheel/DDU7 Display Number 6 System/NTorqueSplitSpeedSelector System'
 * '<S30>'  : 'SteeringWheel/DDU7 Display Number 6 System/NTractionControlKpSelector System'
 * '<S31>'  : 'SteeringWheel/DDU7 Display Number 6 System/rTorqueVectoringMultiplier System'
 * '<S32>'  : 'SteeringWheel/NModeNumber System/If Action Subsystem1'
 * '<S33>'  : 'SteeringWheel/NModeNumber System/If Action Subsystem3'
 * '<S34>'  : 'SteeringWheel/NModeNumber System/NModeNumberDisplay5 System'
 * '<S35>'  : 'SteeringWheel/NModeNumber System/NModeNumberDisplay6 System'
 */
#endif                                 /* SteeringWheel_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
