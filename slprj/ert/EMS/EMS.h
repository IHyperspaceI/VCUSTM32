/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: EMS.h
 *
 * Code generated for Simulink model 'EMS'.
 *
 * Model version                  : 13.2
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Fri Jul 31 17:35:18 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef EMS_h_
#define EMS_h_
#ifndef EMS_COMMON_INCLUDES_
#define EMS_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                                 /* EMS_COMMON_INCLUDES_ */

#include "EMS_types.h"

/* user code (top of header file) */
#include "stm32h7xx_ll_tim.h"

/* Block signals for model 'EMS' */
typedef struct {
  real_T NLap;                         /* '<S5>/Sector Counter' */
  real_T NSectorGlobal;                /* '<S5>/Sector Counter' */
  real_T NSectorLap;                   /* '<S5>/Sector Counter' */
  real_T sSector;                      /* '<S5>/Sector Counter' */
} B_EMS_c_T;

/* Block states (default storage) for model 'EMS' */
typedef struct {
  real_T DelayInput1_DSTATE;           /* '<S32>/Delay Input1' */
  real_T DelayInput1_DSTATE_b;         /* '<S31>/Delay Input1' */
  real_T Memory_PreviousInput;         /* '<S6>/Memory' */
  real_T Memory1_PreviousInput;        /* '<S6>/Memory1' */
  real_T Memory2_PreviousInput;        /* '<S6>/Memory2' */
  real_T Memory3_PreviousInput;        /* '<S6>/Memory3' */
  real_T Memory4_PreviousInput;        /* '<S6>/Memory4' */
  real_T Memory5_PreviousInput;        /* '<S6>/Memory5' */
  real_T Memory6_PreviousInput;        /* '<S6>/Memory6' */
  real_T Memory7_PreviousInput;        /* '<S6>/Memory7' */
  real_T Memory8_PreviousInput;        /* '<S6>/Memory8' */
  real_T Memory9_PreviousInput;        /* '<S6>/Memory9' */
  real_T Memory10_PreviousInput;       /* '<S6>/Memory10' */
  real_T Memory11_PreviousInput;       /* '<S6>/Memory11' */
  real_T Memory_PreviousInput_g;       /* '<S3>/Memory' */
  real_T Memory_PreviousInput_c;       /* '<S4>/Memory' */
  boolean_T DelayInput1_DSTATE_bl;     /* '<S19>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_h;      /* '<S22>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_m;      /* '<S21>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_md;     /* '<S30>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_l;      /* '<S29>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_d;      /* '<S28>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_o;      /* '<S27>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_j;      /* '<S26>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_c;      /* '<S25>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_e;      /* '<S24>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_dv;     /* '<S23>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_ew;     /* '<S20>/Delay Input1' */
  uint8_T is_active_c2_EMS;            /* '<S5>/Sector Counter' */
  uint8_T is_c2_EMS;                   /* '<S5>/Sector Counter' */
} DW_EMS_f_T;

/* Real-time Model Data Structure */
struct tag_RTM_EMS_T {
  const char_T **errorStatus;
};

typedef struct {
  B_EMS_c_T rtb;
  DW_EMS_f_T rtdw;
  RT_MODEL_EMS_T rtm;
} MdlrefDW_EMS_T;

/* Model reference registration function */
extern void EMS_initialize(const char_T **rt_errorStatus, RT_MODEL_EMS_T *const
  EMS_M);
extern void EMS_Init(DW_EMS_f_T *localDW);
extern void EMS(const real_T *rtu_rThrottlePedal, const real_T *rtu_pBrakeMax,
                const real_T *rtu_PActual, const boolean_T *rtu_BEMSOn, const
                real_T *rtu_rRegenPaddle, const real_T *rtu_sChassis, const
                real_T *rtu_EOffset, const real_T *rtu_rSOE, boolean_T
                *rty_BEMSDriverSignal1, boolean_T *rty_BEMSDriverSignal2,
                boolean_T *rty_BEMSDriverSignal3, real_T *rty_NLap, real_T
                *rty_NSectorGlobal, real_T *rty_NSectorLap, real_T *rty_ESector,
                real_T *rty_ERemaining, real_T *rty_EBudget, real_T *rty_sSector,
                real_T *rty_NSector1Remaining, real_T *rty_NSector2Remaining,
                real_T *rty_NSector3Remaining, real_T *rty_NSector4Remaining,
                real_T *rty_NSector5Remaining, real_T *rty_NSector6Remaining,
                real_T *rty_NSector7Remaining, real_T *rty_NSector8Remaining,
                real_T *rty_NSector9Remaining, real_T *rty_NSector10Remaining,
                real_T *rty_NSector11Remaining, real_T *rty_NSector12Remaining,
                real_T *rty_ETotalRequested, real_T *rty_ESector1Remaining,
                real_T *rty_ESector2Remaining, real_T *rty_ESector3Remaining,
                real_T *rty_ESector4Remaining, real_T *rty_ESector5Remaining,
                real_T *rty_ESector6Remaining, real_T *rty_ESector7Remaining,
                real_T *rty_ESector8Remaining, real_T *rty_ESector9Remaining,
                real_T *rty_ESector10Remaining, real_T *rty_ESector11Remaining,
                real_T *rty_ESector12Remaining, B_EMS_c_T *localB, DW_EMS_f_T
                *localDW);

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
 * '<Root>' : 'EMS'
 * '<S1>'   : 'EMS/DriverSignalSystem'
 * '<S2>'   : 'EMS/EBudgetSystem'
 * '<S3>'   : 'EMS/ERemainingSystem'
 * '<S4>'   : 'EMS/ESectorSystem'
 * '<S5>'   : 'EMS/SectorCounterSystem'
 * '<S6>'   : 'EMS/EBudgetSystem/Subsystem'
 * '<S7>'   : 'EMS/EBudgetSystem/Subsystem/Compare To Constant'
 * '<S8>'   : 'EMS/EBudgetSystem/Subsystem/Compare To Constant1'
 * '<S9>'   : 'EMS/EBudgetSystem/Subsystem/Compare To Constant10'
 * '<S10>'  : 'EMS/EBudgetSystem/Subsystem/Compare To Constant11'
 * '<S11>'  : 'EMS/EBudgetSystem/Subsystem/Compare To Constant2'
 * '<S12>'  : 'EMS/EBudgetSystem/Subsystem/Compare To Constant3'
 * '<S13>'  : 'EMS/EBudgetSystem/Subsystem/Compare To Constant4'
 * '<S14>'  : 'EMS/EBudgetSystem/Subsystem/Compare To Constant5'
 * '<S15>'  : 'EMS/EBudgetSystem/Subsystem/Compare To Constant6'
 * '<S16>'  : 'EMS/EBudgetSystem/Subsystem/Compare To Constant7'
 * '<S17>'  : 'EMS/EBudgetSystem/Subsystem/Compare To Constant8'
 * '<S18>'  : 'EMS/EBudgetSystem/Subsystem/Compare To Constant9'
 * '<S19>'  : 'EMS/EBudgetSystem/Subsystem/Detect Increase'
 * '<S20>'  : 'EMS/EBudgetSystem/Subsystem/Detect Increase1'
 * '<S21>'  : 'EMS/EBudgetSystem/Subsystem/Detect Increase10'
 * '<S22>'  : 'EMS/EBudgetSystem/Subsystem/Detect Increase11'
 * '<S23>'  : 'EMS/EBudgetSystem/Subsystem/Detect Increase2'
 * '<S24>'  : 'EMS/EBudgetSystem/Subsystem/Detect Increase3'
 * '<S25>'  : 'EMS/EBudgetSystem/Subsystem/Detect Increase4'
 * '<S26>'  : 'EMS/EBudgetSystem/Subsystem/Detect Increase5'
 * '<S27>'  : 'EMS/EBudgetSystem/Subsystem/Detect Increase6'
 * '<S28>'  : 'EMS/EBudgetSystem/Subsystem/Detect Increase7'
 * '<S29>'  : 'EMS/EBudgetSystem/Subsystem/Detect Increase8'
 * '<S30>'  : 'EMS/EBudgetSystem/Subsystem/Detect Increase9'
 * '<S31>'  : 'EMS/ERemainingSystem/Detect Change1'
 * '<S32>'  : 'EMS/ESectorSystem/Detect Change'
 * '<S33>'  : 'EMS/SectorCounterSystem/Sector Counter'
 */
#endif                                 /* EMS_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
