/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: SteeringWheel.h
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

#ifndef SteeringWheel_h_
#define SteeringWheel_h_
#ifndef SteeringWheel_COMMON_INCLUDES_
#define SteeringWheel_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                                 /* SteeringWheel_COMMON_INCLUDES_ */

#include "SteeringWheel_types.h"

/* Block signals for model 'SteeringWheel' */
typedef struct {
  real_T rTVMultiplierOW;              /* '<S7>/rTVMultiplier' */
  real_T PRegenMaxOW;                  /* '<S7>/PRegenMax' */
  real_T PEngineBraking;               /* '<S7>/PEngineBraking' */
  real_T NThrottleMapOW;               /* '<S7>/NThrottleMap' */
  real_T PDischargeMaxOW;              /* '<S7>/NThrottleMap' */
  real_T rTorqueSplitOW;               /* '<S7>/NThrottleMap' */
  real_T NTCKdSelector;                /* '<S7>/NTCKdSelector ' */
  real_T NPCKpSelector;                /* '<S7>/NPCKpSelector ' */
  real_T BTVOnOW;                      /* '<S7>/BTVOn' */
  real_T BTCOnOW;                      /* '<S7>/BTCOn' */
  real_T BEMSOnOW;                     /* '<S7>/BEMSOn' */
  real_T BDrivetrainCoolingOW;         /* '<S7>/BDrivetrainCoolingOn' */
  boolean_T BSteeringWheelButton3;     /* '<S26>/BSteeringWheelButton3  ' */
  boolean_T BSteeringWheelButton4;     /* '<S26>/BSteeringWheelButton4  ' */
  boolean_T BSteeringWheelButton3_m;   /* '<S25>/BSteeringWheelButton3  ' */
  boolean_T BSteeringWheelButton4_i;   /* '<S25>/BSteeringWheelButton4  ' */
  boolean_T BSteeringWheelButton3_mj;  /* '<S23>/BSteeringWheelButton3  ' */
  boolean_T BSteeringWheelButton4_i2;  /* '<S23>/BSteeringWheelButton4  ' */
  boolean_T BSteeringWheelButton3_mjg; /* '<S24>/BSteeringWheelButton3  ' */
  boolean_T BSteeringWheelButton4_i2w; /* '<S24>/BSteeringWheelButton4  ' */
  boolean_T BSteeringWheelButton3_mjgx;/* '<S22>/BSteeringWheelButton3  ' */
  boolean_T BSteeringWheelButton4_i2wy;/* '<S22>/BSteeringWheelButton4  ' */
  boolean_T BSteeringWheelButton3_mjgxg;/* '<S34>/BSteeringWheelButton3  ' */
  boolean_T BSteeringWheelButton4_i2wy1;/* '<S34>/BSteeringWheelButton4  ' */
  boolean_T BSteeringWheelButton3_mjgxg0;/* '<S33>/BSteeringWheelButton3  ' */
  boolean_T BSteeringWheelButton4_i2wy1e;/* '<S33>/BSteeringWheelButton4  ' */
  boolean_T BSteeringWheelButton3_mjgxg0o;/* '<S32>/BSteeringWheelButton3  ' */
  boolean_T BSteeringWheelButton4_i2wy1eq;/* '<S32>/BSteeringWheelButton4  ' */
  boolean_T BSteeringWheelButton3_mjgxg0ou;/* '<S30>/BSteeringWheelButton3  ' */
  boolean_T BSteeringWheelButton4_i2wy1eqo;/* '<S30>/BSteeringWheelButton4  ' */
  boolean_T BSteeringWheelButton3_mjgxg0ouw;/* '<S29>/BSteeringWheelButton3  ' */
  boolean_T BSteeringWheelButton4_i2wy1eqoz;/* '<S29>/BSteeringWheelButton4  ' */
  boolean_T BSteeringWheelButton_mjgxg0ouwr;/* '<S28>/BSteeringWheelButton3  ' */
  boolean_T BSteeringWheelButton_i2wy1eqoz1;/* '<S28>/BSteeringWheelButton4  ' */
  boolean_T BSteeringWheelButto_mjgxg0ouwr0;/* '<S27>/BSteeringWheelButton3  ' */
  boolean_T BSteeringWheelButto_i2wy1eqoz13;/* '<S27>/BSteeringWheelButton4  ' */
  boolean_T BSteeringWheelButt_mjgxg0ouwr0d;/* '<S20>/BSteeringWheelButton3  ' */
  boolean_T BSteeringWheelButt_i2wy1eqoz13d;/* '<S20>/BSteeringWheelButton4  ' */
  boolean_T BSteeringWheelBut_mjgxg0ouwr0d2;/* '<S21>/BSteeringWheelButton3  ' */
  boolean_T BSteeringWheelBut_i2wy1eqoz13di;/* '<S21>/BSteeringWheelButton4  ' */
} B_SteeringWheel_c_T;

/* Block states (default storage) for model 'SteeringWheel' */
typedef struct {
  real_T DelayInput1_DSTATE;           /* '<S11>/Delay Input1' */
  real_T DelayInput1_DSTATE_b;         /* '<S12>/Delay Input1' */
  real_T old;                          /* '<S6>/Incremental' */
  int32_T sfEvent;                     /* '<Root>/NEventModeRotary System' */
  uint16_T temporalCounter_i1;         /* '<S7>/rTVMultiplier' */
  uint16_T temporalCounter_i1_j;       /* '<S7>/rGrip' */
  uint16_T temporalCounter_i1_h;       /* '<S7>/rEngineBrakingSplitOW ' */
  uint16_T temporalCounter_i1_l;       /* '<S7>/PRegenMax' */
  uint16_T temporalCounter_i1_m;       /* '<S7>/PEngineBraking' */
  uint16_T temporalCounter_i1_e;       /* '<S7>/NThrottleMap' */
  uint16_T temporalCounter_i1_p;       /* '<S7>/NTCKdSelector ' */
  uint16_T temporalCounter_i1_e2;      /* '<S7>/NPCKpSelector ' */
  uint16_T temporalCounter_i1_mn;      /* '<S7>/EOffset' */
  uint16_T temporalCounter_i1_o;       /* '<S7>/BTVOn' */
  uint16_T temporalCounter_i1_eg;      /* '<S7>/BTCOn' */
  uint16_T temporalCounter_i1_g;       /* '<S7>/BSpinningModeOn' */
  uint16_T temporalCounter_i1_k;       /* '<S7>/BEMSOn' */
  uint16_T temporalCounter_i1_b;       /* '<S7>/BDrivetrainCoolingOn' */
  uint16_T temporalCounter_i1_ke;      /* '<Root>/NEventModeRotary System' */
  uint8_T is_active_c10_SteeringWheel; /* '<S7>/rTVMultiplier' */
  uint8_T is_c10_SteeringWheel;        /* '<S7>/rTVMultiplier' */
  uint8_T is_active_c20_SteeringWheel; /* '<S7>/rGrip' */
  uint8_T is_c20_SteeringWheel;        /* '<S7>/rGrip' */
  uint8_T is_active_c7_SteeringWheel;  /* '<S7>/rEngineBrakingSplitOW ' */
  uint8_T is_c7_SteeringWheel;         /* '<S7>/rEngineBrakingSplitOW ' */
  uint8_T is_active_c4_SteeringWheel;  /* '<S7>/PRegenMax' */
  uint8_T is_c4_SteeringWheel;         /* '<S7>/PRegenMax' */
  uint8_T is_active_c2_SteeringWheel;  /* '<S7>/PEngineBraking' */
  uint8_T is_c2_SteeringWheel;         /* '<S7>/PEngineBraking' */
  uint8_T is_active_c24_SteeringWheel; /* '<S7>/NThrottleMap' */
  uint8_T is_c24_SteeringWheel;        /* '<S7>/NThrottleMap' */
  uint8_T is_active_c5_SteeringWheel;  /* '<S7>/NTCKdSelector ' */
  uint8_T is_c5_SteeringWheel;         /* '<S7>/NTCKdSelector ' */
  uint8_T is_active_c6_SteeringWheel;  /* '<S7>/NPCKpSelector ' */
  uint8_T is_c6_SteeringWheel;         /* '<S7>/NPCKpSelector ' */
  uint8_T is_active_c1_SteeringWheel;  /* '<S7>/EOffset' */
  uint8_T is_c1_SteeringWheel;         /* '<S7>/EOffset' */
  uint8_T is_active_c8_SteeringWheel;  /* '<S7>/BTVOn' */
  uint8_T is_c8_SteeringWheel;         /* '<S7>/BTVOn' */
  uint8_T is_active_c9_SteeringWheel;  /* '<S7>/BTCOn' */
  uint8_T is_c9_SteeringWheel;         /* '<S7>/BTCOn' */
  uint8_T is_active_c30_SteeringWheel; /* '<S7>/BSpinningModeOn' */
  uint8_T is_c30_SteeringWheel;        /* '<S7>/BSpinningModeOn' */
  uint8_T is_active_c23_SteeringWheel; /* '<S7>/BEMSOn' */
  uint8_T is_c23_SteeringWheel;        /* '<S7>/BEMSOn' */
  uint8_T is_active_c13_SteeringWheel; /* '<S7>/BDrivetrainCoolingOn' */
  uint8_T is_c13_SteeringWheel;        /* '<S7>/BDrivetrainCoolingOn' */
  uint8_T is_active_c27_SteeringWheel; /* '<S6>/Incremental' */
  uint8_T is_c27_SteeringWheel;        /* '<S6>/Incremental' */
  uint8_T is_active_c28_SteeringWheel; /* '<Root>/NEventModeRotary System' */
  uint8_T is_c28_SteeringWheel;        /* '<Root>/NEventModeRotary System' */
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
extern void SteeringWhe_IfActionSubsystem10(const boolean_T
  *rtu_BSteeringWheelButton3, const boolean_T *rtu_BSteeringWheelButton4,
  boolean_T *rty_BSteeringWheelButton3, boolean_T *rty_BSteeringWheelButton4);
extern void SteeringWheel_Init(real_T *rty_MRegenMax, real_T
  *rty_PEngineBrakingEM, real_T *rty_rEngineBrakingSplitEM, DW_SteeringWheel_f_T
  *localDW);
extern void SteeringWheel(const real_T *rtu_NEventModeRotary, const real_T
  *rtu_NParameterRotary, const boolean_T *rtu_BSteeringWheelButton3, const
  boolean_T *rtu_BSteeringWheelButton4, const real_T *rtu_NPageSelectRotary,
  const boolean_T *rtu_BSteeringWheelButton2, const boolean_T
  *rtu_BSteeringWheelButton1, const real_T *rtu_NCarState, boolean_T
  *rty_BPageUp, boolean_T *rty_BPageDown, boolean_T *rty_BInvLVOn, boolean_T
  *rty_BCalibrationOn, boolean_T *rty_BDataMark, boolean_T
  *rty_BReadyToDriveButton, boolean_T *rty_BErrorReset, boolean_T *rty_BTVOn,
  boolean_T *rty_BTCOn, boolean_T *rty_BDrivetrainCoolingOn, boolean_T
  *rty_BEMSOn, boolean_T *rty_BSpinningModeOn, real_T *rty_NThrottleMap, real_T *
  rty_PDischargeMax, real_T *rty_rTorqueSplit, real_T *rty_PRegenMax, real_T
  *rty_rTVMultiplier, real_T *rty_PEngineBraking, real_T
  *rty_rEngineBrakingSplit, real_T *rty_rGrip, real_T *rty_EOffset, real_T
  *rty_NTCKdSelector, real_T *rty_MRegenMax, real_T *rty_NEventMode, real_T
  *rty_NPCKpSelector, real_T *rty_BTVOnEM, real_T *rty_BTCOnEM, real_T
  *rty_BDrivetrainCoolingOnEM, real_T *rty_BEMSOnEM, real_T
  *rty_BSpinningModeOnEM, real_T *rty_NThrottleMapEM, real_T
  *rty_PDischargeMaxEM, real_T *rty_rTorqueSplitEM, real_T *rty_PRegenMaxEM,
  real_T *rty_rTVMultiplierEM, real_T *rty_PEngineBrakingEM, real_T
  *rty_rEngineBrakingSplitEM, real_T *rty_BTVOnOW, real_T *rty_BTCOnOW, real_T
  *rty_BDrivetrainCoolingOnOW, real_T *rty_BEMSOnOW, real_T
  *rty_BSpinningModeOnOW, real_T *rty_NThrottleMapOW, real_T
  *rty_PDischargeMaxOW, real_T *rty_rTorqueSplitOW, real_T *rty_PRegenMaxOW,
  real_T *rty_rTVMultiplierOW, real_T *rty_PEngineBrakingOW, real_T
  *rty_rEngineBrakingSplitOW, B_SteeringWheel_c_T *localB, DW_SteeringWheel_f_T *
  localDW);

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S7>/Data Type Conversion26' : Unused code path elimination
 * Block '<S7>/Data Type Conversion27' : Unused code path elimination
 */

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
 * '<S1>'   : 'SteeringWheel/BCalibrationOn System'
 * '<S2>'   : 'SteeringWheel/BInvLVOn System'
 * '<S3>'   : 'SteeringWheel/BReadyToDriveButton System'
 * '<S4>'   : 'SteeringWheel/EM vs OW'
 * '<S5>'   : 'SteeringWheel/NEventModeRotary System'
 * '<S6>'   : 'SteeringWheel/NPageSelectorRotary System'
 * '<S7>'   : 'SteeringWheel/Overwrite System'
 * '<S8>'   : 'SteeringWheel/BReadyToDriveButton System/If Action Subsystem'
 * '<S9>'   : 'SteeringWheel/BReadyToDriveButton System/If Action Subsystem1'
 * '<S10>'  : 'SteeringWheel/EM vs OW/Compare To Constant2'
 * '<S11>'  : 'SteeringWheel/NPageSelectorRotary System/Detect Decrease'
 * '<S12>'  : 'SteeringWheel/NPageSelectorRotary System/Detect Increase'
 * '<S13>'  : 'SteeringWheel/NPageSelectorRotary System/Incremental'
 * '<S14>'  : 'SteeringWheel/Overwrite System/BDrivetrainCoolingOn'
 * '<S15>'  : 'SteeringWheel/Overwrite System/BEMSOn'
 * '<S16>'  : 'SteeringWheel/Overwrite System/BSpinningModeOn'
 * '<S17>'  : 'SteeringWheel/Overwrite System/BTCOn'
 * '<S18>'  : 'SteeringWheel/Overwrite System/BTVOn'
 * '<S19>'  : 'SteeringWheel/Overwrite System/EOffset'
 * '<S20>'  : 'SteeringWheel/Overwrite System/If Action Subsystem1'
 * '<S21>'  : 'SteeringWheel/Overwrite System/If Action Subsystem10'
 * '<S22>'  : 'SteeringWheel/Overwrite System/If Action Subsystem11'
 * '<S23>'  : 'SteeringWheel/Overwrite System/If Action Subsystem12'
 * '<S24>'  : 'SteeringWheel/Overwrite System/If Action Subsystem13'
 * '<S25>'  : 'SteeringWheel/Overwrite System/If Action Subsystem14'
 * '<S26>'  : 'SteeringWheel/Overwrite System/If Action Subsystem15'
 * '<S27>'  : 'SteeringWheel/Overwrite System/If Action Subsystem2'
 * '<S28>'  : 'SteeringWheel/Overwrite System/If Action Subsystem3'
 * '<S29>'  : 'SteeringWheel/Overwrite System/If Action Subsystem4'
 * '<S30>'  : 'SteeringWheel/Overwrite System/If Action Subsystem5'
 * '<S31>'  : 'SteeringWheel/Overwrite System/If Action Subsystem6'
 * '<S32>'  : 'SteeringWheel/Overwrite System/If Action Subsystem7'
 * '<S33>'  : 'SteeringWheel/Overwrite System/If Action Subsystem8'
 * '<S34>'  : 'SteeringWheel/Overwrite System/If Action Subsystem9'
 * '<S35>'  : 'SteeringWheel/Overwrite System/NPCKpSelector '
 * '<S36>'  : 'SteeringWheel/Overwrite System/NTCKdSelector '
 * '<S37>'  : 'SteeringWheel/Overwrite System/NThrottleMap'
 * '<S38>'  : 'SteeringWheel/Overwrite System/PEngineBraking'
 * '<S39>'  : 'SteeringWheel/Overwrite System/PRegenMax'
 * '<S40>'  : 'SteeringWheel/Overwrite System/rEngineBrakingSplitOW '
 * '<S41>'  : 'SteeringWheel/Overwrite System/rGrip'
 * '<S42>'  : 'SteeringWheel/Overwrite System/rTVMultiplier'
 */
#endif                                 /* SteeringWheel_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
