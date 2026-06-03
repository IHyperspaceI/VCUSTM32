/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: INPUT.h
 *
 * Code generated for Simulink model 'INPUT'.
 *
 * Model version                  : 13.18
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Wed Jun  3 15:29:29 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef INPUT_h_
#define INPUT_h_
#ifndef INPUT_COMMON_INCLUDES_
#define INPUT_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                                 /* INPUT_COMMON_INCLUDES_ */

#include "INPUT_types.h"
#include "InverterSignals.h"
#include "WheelSpeeds.h"
#include <stddef.h>
#include "MW_target_hardware_resources.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetErrorStatusPointer
#define rtmGetErrorStatusPointer(rtm)  ((const char_T **)(&((rtm)->errorStatus)))
#endif

/* user code (top of header file) */
#include "stm32h7xx_ll_tim.h"

/* Block states (default storage) for system '<Root>' */
typedef struct {
  MdlrefDW_InverterSignals_T Model1_InstanceData;/* '<Root>/Model1' */
  MdlrefDW_WheelSpeeds_T Model_InstanceData;/* '<Root>/Model' */
} DW_INPUT_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  CAN1_2Bus InverterCAN;               /* '<Root>/InverterCAN' */
  CAN3Bus CAN3;                        /* '<Root>/CAN3' */
  CAN4Bus BMSCAN;                      /* '<Root>/BMSCAN' */
} ExtU_INPUT_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  InverterSignalsBus InverterSignalsBus_m;/* '<Root>/InverterSignalsBus' */
  WheelSpeedsBus WheelSpeedsBus_d;     /* '<Root>/WheelSpeedsBus' */
  SensorSignalsBus SensorSignalsBus_h; /* '<Root>/SensorSignalsBus' */
  GPSIMUSignalsBus GPSIMUSignalsBus_j; /* '<Root>/GPSIMUSignalsBus' */
  BMSSignalsBus BMSSignalsBus_o;       /* '<Root>/BMSSignalsBus' */
} ExtY_INPUT_T;

/* Real-time Model Data Structure */
struct tag_RTM_INPUT_T {
  const char_T *errorStatus;
};

/* Block states (default storage) */
extern DW_INPUT_T INPUT_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_INPUT_T INPUT_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_INPUT_T INPUT_Y;

/* External data declarations for dependent source files */
extern const SensorSignalsBus INPUT_rtZSensorSignalsBus;/* SensorSignalsBus ground */
extern const GPSIMUSignalsBus INPUT_rtZGPSIMUSignalsBus;/* GPSIMUSignalsBus ground */
extern const BMSSignalsBus INPUT_rtZBMSSignalsBus;/* BMSSignalsBus ground */

/* Model entry point functions */
extern void INPUT_initialize(void);
extern void INPUT_step(void);
extern void INPUT_terminate(void);

/* Real-time Model object */
extern RT_MODEL_INPUT_T *const INPUT_M;
extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

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
 * '<Root>' : 'INPUT'
 */
#endif                                 /* INPUT_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
