/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: NBMSState.c
 *
 * Code generated for Simulink model 'NBMSState'.
 *
 * Model version                  : 13.5
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Wed Jun  3 14:53:49 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "NBMSState.h"
#include "rtwtypes.h"
#include "NBMSState_private.h"

/* Named constants for Chart: '<Root>/NBMSStatus System' */
#define NBMSState_IN_BMS_OK            ((uint8_T)1U)
#define NBMSState_IN_Idle              ((uint8_T)2U)
#define NBMSState_IN_State_1           ((uint8_T)3U)
#define NBMSState_IN_State_2           ((uint8_T)4U)
#define NBMSState_IN_State_3           ((uint8_T)5U)
#define NBMSState_IN_State_4           ((uint8_T)6U)
#define NBMSState_IN_State_5           ((uint8_T)7U)
#define NBMSState_IN_State_6           ((uint8_T)8U)
#define NBMSState_IN_State_7           ((uint8_T)9U)
#define NBMSState_IN_State_8           ((uint8_T)10U)
#define NBMSState_IN_State_9           ((uint8_T)11U)

/* Forward declaration for local functions */
static real_T NBMSState_BBMSError(const boolean_T *rtu_BBMSP0A0C, const
  boolean_T *rtu_BBMAP0A0E, const boolean_T *rtu_BBMSP0A10, const boolean_T
  *rtu_BBMSP0A80, const boolean_T *rtu_BBMSP0AC0, const boolean_T *rtu_BBMSP0AFA,
  const real_T *rtu_RCellAverage, const boolean_T *rtu_BBalancingActive, const
  real_T *rtu_VCellAverage);

/* Function for Chart: '<Root>/NBMSStatus System' */
static real_T NBMSState_BBMSError(const boolean_T *rtu_BBMSP0A0C, const
  boolean_T *rtu_BBMAP0A0E, const boolean_T *rtu_BBMSP0A10, const boolean_T
  *rtu_BBMSP0A80, const boolean_T *rtu_BBMSP0AC0, const boolean_T *rtu_BBMSP0AFA,
  const real_T *rtu_RCellAverage, const boolean_T *rtu_BBalancingActive, const
  real_T *rtu_VCellAverage)
{
  real_T BMSError;
  BMSError = 0.0;

  /* Chart: '<Root>/NBMSStatus System' */
  if ((*rtu_BBalancingActive) || (*rtu_RCellAverage < 0.0) || (*rtu_VCellAverage
       < 0.0) || (*rtu_BBMSP0A0C) || (*rtu_BBMAP0A0E) || (*rtu_BBMSP0A10) ||
      (*rtu_BBMSP0A80) || (*rtu_BBMSP0AC0) || (*rtu_BBMSP0AFA)) {
    BMSError = 1.0;
  }

  /* End of Chart: '<Root>/NBMSStatus System' */
  return BMSError;
}

/* Output and update for referenced model: 'NBMSState' */
void NBMSState(const boolean_T *rtu_BBMSP0A0C, const boolean_T *rtu_BBMAP0A0E,
               const boolean_T *rtu_BBMSP0A10, const boolean_T *rtu_BBMSP0A80,
               const boolean_T *rtu_BBMSP0AC0, const boolean_T *rtu_BBMSP0AFA,
               const real_T *rtu_RCellAverage, const boolean_T
               *rtu_BBalancingActive, const real_T *rtu_VCellAverage, real_T
               *rty_NBMSState, DW_NBMSState_f_T *localDW)
{
  /* Chart: '<Root>/NBMSStatus System' */
  if (localDW->temporalCounter_i1 < 8191) {
    localDW->temporalCounter_i1++;
  }

  if (localDW->is_active_c3_NBMSState == 0) {
    localDW->is_active_c3_NBMSState = 1U;
    localDW->temporalCounter_i1 = 0U;
    localDW->is_c3_NBMSState = NBMSState_IN_Idle;

    /* DataTypeConversion: '<Root>/Data Type Conversion' */
    *rty_NBMSState = 0.0;
  } else {
    switch (localDW->is_c3_NBMSState) {
     case NBMSState_IN_BMS_OK:
      /* DataTypeConversion: '<Root>/Data Type Conversion' */
      *rty_NBMSState = 92.0;
      if (NBMSState_BBMSError(rtu_BBMSP0A0C, rtu_BBMAP0A0E, rtu_BBMSP0A10,
                              rtu_BBMSP0A80, rtu_BBMSP0AC0, rtu_BBMSP0AFA,
                              rtu_RCellAverage, rtu_BBalancingActive,
                              rtu_VCellAverage) == 1.0) {
        localDW->is_c3_NBMSState = NBMSState_IN_State_1;

        /* DataTypeConversion: '<Root>/Data Type Conversion' */
        *rty_NBMSState = 1.0;
      }
      break;

     case NBMSState_IN_Idle:
      /* DataTypeConversion: '<Root>/Data Type Conversion' */
      *rty_NBMSState = 0.0;
      if (localDW->temporalCounter_i1 >= 7000) {
        localDW->is_c3_NBMSState = NBMSState_IN_State_1;

        /* DataTypeConversion: '<Root>/Data Type Conversion' */
        *rty_NBMSState = 1.0;
      }
      break;

     case NBMSState_IN_State_1:
      /* DataTypeConversion: '<Root>/Data Type Conversion' */
      *rty_NBMSState = 1.0;
      if (NBMSState_BBMSError(rtu_BBMSP0A0C, rtu_BBMAP0A0E, rtu_BBMSP0A10,
                              rtu_BBMSP0A80, rtu_BBMSP0AC0, rtu_BBMSP0AFA,
                              rtu_RCellAverage, rtu_BBalancingActive,
                              rtu_VCellAverage) == 1.0) {
        localDW->is_c3_NBMSState = NBMSState_IN_State_1;

        /* DataTypeConversion: '<Root>/Data Type Conversion' */
        *rty_NBMSState = 1.0;
      } else if (!*rtu_BBalancingActive) {
        localDW->is_c3_NBMSState = NBMSState_IN_State_2;

        /* DataTypeConversion: '<Root>/Data Type Conversion' */
        *rty_NBMSState = 2.0;
      }
      break;

     case NBMSState_IN_State_2:
      /* DataTypeConversion: '<Root>/Data Type Conversion' */
      *rty_NBMSState = 2.0;
      if (NBMSState_BBMSError(rtu_BBMSP0A0C, rtu_BBMAP0A0E, rtu_BBMSP0A10,
                              rtu_BBMSP0A80, rtu_BBMSP0AC0, rtu_BBMSP0AFA,
                              rtu_RCellAverage, rtu_BBalancingActive,
                              rtu_VCellAverage) == 1.0) {
        localDW->is_c3_NBMSState = NBMSState_IN_State_1;

        /* DataTypeConversion: '<Root>/Data Type Conversion' */
        *rty_NBMSState = 1.0;
      } else if (*rtu_RCellAverage >= 0.0) {
        localDW->is_c3_NBMSState = NBMSState_IN_State_3;

        /* DataTypeConversion: '<Root>/Data Type Conversion' */
        *rty_NBMSState = 3.0;
      }
      break;

     case NBMSState_IN_State_3:
      /* DataTypeConversion: '<Root>/Data Type Conversion' */
      *rty_NBMSState = 3.0;
      if (NBMSState_BBMSError(rtu_BBMSP0A0C, rtu_BBMAP0A0E, rtu_BBMSP0A10,
                              rtu_BBMSP0A80, rtu_BBMSP0AC0, rtu_BBMSP0AFA,
                              rtu_RCellAverage, rtu_BBalancingActive,
                              rtu_VCellAverage) == 1.0) {
        localDW->is_c3_NBMSState = NBMSState_IN_State_1;

        /* DataTypeConversion: '<Root>/Data Type Conversion' */
        *rty_NBMSState = 1.0;
      } else if (*rtu_VCellAverage >= 0.0) {
        localDW->is_c3_NBMSState = NBMSState_IN_State_4;

        /* DataTypeConversion: '<Root>/Data Type Conversion' */
        *rty_NBMSState = 4.0;
      }
      break;

     case NBMSState_IN_State_4:
      /* DataTypeConversion: '<Root>/Data Type Conversion' */
      *rty_NBMSState = 4.0;
      if (NBMSState_BBMSError(rtu_BBMSP0A0C, rtu_BBMAP0A0E, rtu_BBMSP0A10,
                              rtu_BBMSP0A80, rtu_BBMSP0AC0, rtu_BBMSP0AFA,
                              rtu_RCellAverage, rtu_BBalancingActive,
                              rtu_VCellAverage) == 1.0) {
        localDW->is_c3_NBMSState = NBMSState_IN_State_1;

        /* DataTypeConversion: '<Root>/Data Type Conversion' */
        *rty_NBMSState = 1.0;
      } else if (!*rtu_BBMSP0A0C) {
        localDW->is_c3_NBMSState = NBMSState_IN_State_5;

        /* DataTypeConversion: '<Root>/Data Type Conversion' */
        *rty_NBMSState = 5.0;
      }
      break;

     case NBMSState_IN_State_5:
      /* DataTypeConversion: '<Root>/Data Type Conversion' */
      *rty_NBMSState = 5.0;
      if (NBMSState_BBMSError(rtu_BBMSP0A0C, rtu_BBMAP0A0E, rtu_BBMSP0A10,
                              rtu_BBMSP0A80, rtu_BBMSP0AC0, rtu_BBMSP0AFA,
                              rtu_RCellAverage, rtu_BBalancingActive,
                              rtu_VCellAverage) == 1.0) {
        localDW->is_c3_NBMSState = NBMSState_IN_State_1;

        /* DataTypeConversion: '<Root>/Data Type Conversion' */
        *rty_NBMSState = 1.0;
      } else if (!*rtu_BBMAP0A0E) {
        localDW->is_c3_NBMSState = NBMSState_IN_State_6;

        /* DataTypeConversion: '<Root>/Data Type Conversion' */
        *rty_NBMSState = 6.0;
      }
      break;

     case NBMSState_IN_State_6:
      /* DataTypeConversion: '<Root>/Data Type Conversion' */
      *rty_NBMSState = 6.0;
      if (NBMSState_BBMSError(rtu_BBMSP0A0C, rtu_BBMAP0A0E, rtu_BBMSP0A10,
                              rtu_BBMSP0A80, rtu_BBMSP0AC0, rtu_BBMSP0AFA,
                              rtu_RCellAverage, rtu_BBalancingActive,
                              rtu_VCellAverage) == 1.0) {
        localDW->is_c3_NBMSState = NBMSState_IN_State_1;

        /* DataTypeConversion: '<Root>/Data Type Conversion' */
        *rty_NBMSState = 1.0;
      } else if (!*rtu_BBMSP0A10) {
        localDW->is_c3_NBMSState = NBMSState_IN_State_7;

        /* DataTypeConversion: '<Root>/Data Type Conversion' */
        *rty_NBMSState = 7.0;
      }
      break;

     case NBMSState_IN_State_7:
      /* DataTypeConversion: '<Root>/Data Type Conversion' */
      *rty_NBMSState = 7.0;
      if (NBMSState_BBMSError(rtu_BBMSP0A0C, rtu_BBMAP0A0E, rtu_BBMSP0A10,
                              rtu_BBMSP0A80, rtu_BBMSP0AC0, rtu_BBMSP0AFA,
                              rtu_RCellAverage, rtu_BBalancingActive,
                              rtu_VCellAverage) == 1.0) {
        localDW->is_c3_NBMSState = NBMSState_IN_State_1;

        /* DataTypeConversion: '<Root>/Data Type Conversion' */
        *rty_NBMSState = 1.0;
      } else if (!*rtu_BBMSP0A80) {
        localDW->is_c3_NBMSState = NBMSState_IN_State_8;

        /* DataTypeConversion: '<Root>/Data Type Conversion' */
        *rty_NBMSState = 8.0;
      }
      break;

     case NBMSState_IN_State_8:
      /* DataTypeConversion: '<Root>/Data Type Conversion' */
      *rty_NBMSState = 8.0;
      if (NBMSState_BBMSError(rtu_BBMSP0A0C, rtu_BBMAP0A0E, rtu_BBMSP0A10,
                              rtu_BBMSP0A80, rtu_BBMSP0AC0, rtu_BBMSP0AFA,
                              rtu_RCellAverage, rtu_BBalancingActive,
                              rtu_VCellAverage) == 1.0) {
        localDW->is_c3_NBMSState = NBMSState_IN_State_1;

        /* DataTypeConversion: '<Root>/Data Type Conversion' */
        *rty_NBMSState = 1.0;
      } else if (!*rtu_BBMSP0AC0) {
        localDW->is_c3_NBMSState = NBMSState_IN_State_9;

        /* DataTypeConversion: '<Root>/Data Type Conversion' */
        *rty_NBMSState = 9.0;
      }
      break;

     default:
      /* DataTypeConversion: '<Root>/Data Type Conversion' */
      /* case IN_State_9: */
      *rty_NBMSState = 9.0;
      if (!*rtu_BBMSP0AFA) {
        localDW->is_c3_NBMSState = NBMSState_IN_BMS_OK;

        /* DataTypeConversion: '<Root>/Data Type Conversion' */
        *rty_NBMSState = 92.0;
      } else if (NBMSState_BBMSError(rtu_BBMSP0A0C, rtu_BBMAP0A0E, rtu_BBMSP0A10,
                  rtu_BBMSP0A80, rtu_BBMSP0AC0, rtu_BBMSP0AFA, rtu_RCellAverage,
                  rtu_BBalancingActive, rtu_VCellAverage) == 1.0) {
        localDW->is_c3_NBMSState = NBMSState_IN_State_1;

        /* DataTypeConversion: '<Root>/Data Type Conversion' */
        *rty_NBMSState = 1.0;
      }
      break;
    }
  }

  /* End of Chart: '<Root>/NBMSStatus System' */
}

/* Model initialize function */
void NBMSState_initialize(const char_T **rt_errorStatus, RT_MODEL_NBMSState_T *
  const NBMSState_M)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(NBMSState_M, rt_errorStatus);

  /* user code (Initialize function Body) */
  LL_TIM_EnableCounter(TIM2);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
