/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: EMS.c
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

#include "EMS.h"
#include "rtwtypes.h"
#include "EMS_private.h"

/* Named constants for Chart: '<S5>/Sector Counter' */
#define EMS_IN_Sector1                 ((uint8_T)1U)
#define EMS_IN_Sector10                ((uint8_T)2U)
#define EMS_IN_Sector11                ((uint8_T)3U)
#define EMS_IN_Sector12                ((uint8_T)4U)
#define EMS_IN_Sector2                 ((uint8_T)5U)
#define EMS_IN_Sector3                 ((uint8_T)6U)
#define EMS_IN_Sector4                 ((uint8_T)7U)
#define EMS_IN_Sector5                 ((uint8_T)8U)
#define EMS_IN_Sector6                 ((uint8_T)9U)
#define EMS_IN_Sector7                 ((uint8_T)10U)
#define EMS_IN_Sector8                 ((uint8_T)11U)
#define EMS_IN_Sector9                 ((uint8_T)12U)
#define EMS_IN_Start                   ((uint8_T)13U)
#define EMS_IN_Wait_                   ((uint8_T)14U)
#define EMS_IN_Wait_1                  ((uint8_T)15U)
#define EMS_IN_Wait_10                 ((uint8_T)16U)
#define EMS_IN_Wait_11                 ((uint8_T)17U)
#define EMS_IN_Wait_12                 ((uint8_T)18U)
#define EMS_IN_Wait_2                  ((uint8_T)19U)
#define EMS_IN_Wait_3                  ((uint8_T)20U)
#define EMS_IN_Wait_4                  ((uint8_T)21U)
#define EMS_IN_Wait_5                  ((uint8_T)22U)
#define EMS_IN_Wait_6                  ((uint8_T)23U)
#define EMS_IN_Wait_7                  ((uint8_T)24U)
#define EMS_IN_Wait_8                  ((uint8_T)25U)
#define EMS_IN_Wait_9                  ((uint8_T)26U)

/* Forward declaration for local functions */
static void EMS_Sector12(const real_T *rtu_pBrakeMax, const real_T
  *rtu_rRegenPaddle, const real_T *rtu_sChassis, B_EMS_c_T *localB, DW_EMS_f_T
  *localDW);
static void EMS_Wait_(const real_T *rtu_rThrottlePedal, const real_T
                      *rtu_PActual, B_EMS_c_T *localB, DW_EMS_f_T *localDW);
static void EMS_Wait_5(const real_T *rtu_rThrottlePedal, const real_T
  *rtu_PActual, B_EMS_c_T *localB, DW_EMS_f_T *localDW);
static void EMS_Wait_6(const real_T *rtu_rThrottlePedal, const real_T
  *rtu_PActual, B_EMS_c_T *localB, DW_EMS_f_T *localDW);
static void EMS_Wait_7(const real_T *rtu_rThrottlePedal, const real_T
  *rtu_PActual, B_EMS_c_T *localB, DW_EMS_f_T *localDW);
static void EMS_Wait_8(const real_T *rtu_rThrottlePedal, const real_T
  *rtu_PActual, B_EMS_c_T *localB, DW_EMS_f_T *localDW);
static void EMS_Wait_9(const real_T *rtu_rThrottlePedal, const real_T
  *rtu_PActual, B_EMS_c_T *localB, DW_EMS_f_T *localDW);

/* Function for Chart: '<S5>/Sector Counter' */
static void EMS_Sector12(const real_T *rtu_pBrakeMax, const real_T
  *rtu_rRegenPaddle, const real_T *rtu_sChassis, B_EMS_c_T *localB, DW_EMS_f_T
  *localDW)
{
  /* Chart: '<S5>/Sector Counter' */
  if (((*rtu_rRegenPaddle > 10.0) || (*rtu_pBrakeMax > 3.0)) && (*rtu_sChassis -
       localB->sSector >= 36.0)) {
    localDW->is_c2_EMS = EMS_IN_Wait_12;
    localB->sSector = *rtu_sChassis;
    localB->NLap++;
  }

  /* End of Chart: '<S5>/Sector Counter' */
}

/* Function for Chart: '<S5>/Sector Counter' */
static void EMS_Wait_(const real_T *rtu_rThrottlePedal, const real_T
                      *rtu_PActual, B_EMS_c_T *localB, DW_EMS_f_T *localDW)
{
  /* Chart: '<S5>/Sector Counter' */
  if ((*rtu_rThrottlePedal > 10.0) && (*rtu_PActual > 2.0)) {
    localDW->is_c2_EMS = EMS_IN_Sector1;
    localB->NSectorLap = 1.0;
    localB->NSectorGlobal++;
  } else {
    localB->NSectorGlobal = 1.0;
    localB->sSector = 0.0;
  }

  /* End of Chart: '<S5>/Sector Counter' */
}

/* Function for Chart: '<S5>/Sector Counter' */
static void EMS_Wait_5(const real_T *rtu_rThrottlePedal, const real_T
  *rtu_PActual, B_EMS_c_T *localB, DW_EMS_f_T *localDW)
{
  /* Chart: '<S5>/Sector Counter' */
  if ((*rtu_rThrottlePedal > 10.0) && (*rtu_PActual > 2.0)) {
    localDW->is_c2_EMS = EMS_IN_Sector6;
    localB->NSectorLap++;
    localB->NSectorGlobal++;
  }

  /* End of Chart: '<S5>/Sector Counter' */
}

/* Function for Chart: '<S5>/Sector Counter' */
static void EMS_Wait_6(const real_T *rtu_rThrottlePedal, const real_T
  *rtu_PActual, B_EMS_c_T *localB, DW_EMS_f_T *localDW)
{
  /* Chart: '<S5>/Sector Counter' */
  if ((*rtu_rThrottlePedal > 10.0) && (*rtu_PActual > 2.0)) {
    localDW->is_c2_EMS = EMS_IN_Sector7;
    localB->NSectorLap++;
    localB->NSectorGlobal++;
  }

  /* End of Chart: '<S5>/Sector Counter' */
}

/* Function for Chart: '<S5>/Sector Counter' */
static void EMS_Wait_7(const real_T *rtu_rThrottlePedal, const real_T
  *rtu_PActual, B_EMS_c_T *localB, DW_EMS_f_T *localDW)
{
  /* Chart: '<S5>/Sector Counter' */
  if ((*rtu_rThrottlePedal > 10.0) && (*rtu_PActual > 2.0)) {
    localDW->is_c2_EMS = EMS_IN_Sector8;
    localB->NSectorLap++;
    localB->NSectorGlobal++;
  }

  /* End of Chart: '<S5>/Sector Counter' */
}

/* Function for Chart: '<S5>/Sector Counter' */
static void EMS_Wait_8(const real_T *rtu_rThrottlePedal, const real_T
  *rtu_PActual, B_EMS_c_T *localB, DW_EMS_f_T *localDW)
{
  /* Chart: '<S5>/Sector Counter' */
  if ((*rtu_rThrottlePedal > 10.0) && (*rtu_PActual > 2.0)) {
    localDW->is_c2_EMS = EMS_IN_Sector9;
    localB->NSectorLap++;
    localB->NSectorGlobal++;
  }

  /* End of Chart: '<S5>/Sector Counter' */
}

/* Function for Chart: '<S5>/Sector Counter' */
static void EMS_Wait_9(const real_T *rtu_rThrottlePedal, const real_T
  *rtu_PActual, B_EMS_c_T *localB, DW_EMS_f_T *localDW)
{
  /* Chart: '<S5>/Sector Counter' */
  if ((*rtu_rThrottlePedal > 10.0) && (*rtu_PActual > 2.0)) {
    localDW->is_c2_EMS = EMS_IN_Sector10;
    localB->NSectorLap++;
    localB->NSectorGlobal++;
  }

  /* End of Chart: '<S5>/Sector Counter' */
}

/* System initialize for referenced model: 'EMS' */
void EMS_Init(DW_EMS_f_T *localDW)
{
  /* InitializeConditions for Memory: '<S6>/Memory' */
  localDW->Memory_PreviousInput = 28.0;

  /* InitializeConditions for Memory: '<S6>/Memory1' */
  localDW->Memory1_PreviousInput = 28.0;

  /* InitializeConditions for Memory: '<S6>/Memory2' */
  localDW->Memory2_PreviousInput = 28.0;

  /* InitializeConditions for Memory: '<S6>/Memory3' */
  localDW->Memory3_PreviousInput = 28.0;

  /* InitializeConditions for Memory: '<S6>/Memory4' */
  localDW->Memory4_PreviousInput = 28.0;

  /* InitializeConditions for Memory: '<S6>/Memory5' */
  localDW->Memory5_PreviousInput = 28.0;

  /* InitializeConditions for Memory: '<S6>/Memory6' */
  localDW->Memory6_PreviousInput = 28.0;

  /* InitializeConditions for Memory: '<S6>/Memory7' */
  localDW->Memory7_PreviousInput = 28.0;

  /* InitializeConditions for Memory: '<S6>/Memory8' */
  localDW->Memory8_PreviousInput = 28.0;

  /* InitializeConditions for Memory: '<S6>/Memory9' */
  localDW->Memory9_PreviousInput = 28.0;

  /* InitializeConditions for Memory: '<S6>/Memory10' */
  localDW->Memory10_PreviousInput = 28.0;

  /* InitializeConditions for Memory: '<S6>/Memory11' */
  localDW->Memory11_PreviousInput = 28.0;

  /* InitializeConditions for UnitDelay: '<S31>/Delay Input1'
   *
   * Block description for '<S31>/Delay Input1':
   *
   *  Store in Global RAM
   */
  localDW->DelayInput1_DSTATE_b = 1.0;
}

/* Output and update for referenced model: 'EMS' */
void EMS(const real_T *rtu_rThrottlePedal, const real_T *rtu_pBrakeMax, const
         real_T *rtu_PActual, const boolean_T *rtu_BEMSOn, const real_T
         *rtu_rRegenPaddle, const real_T *rtu_sChassis, const real_T
         *rtu_EOffset, const real_T *rtu_rSOE, boolean_T *rty_BEMSDriverSignal1,
         boolean_T *rty_BEMSDriverSignal2, boolean_T *rty_BEMSDriverSignal3,
         real_T *rty_NLap, real_T *rty_NSectorGlobal, real_T *rty_NSectorLap,
         real_T *rty_ESector, real_T *rty_ERemaining, real_T *rty_EBudget,
         real_T *rty_sSector, real_T *rty_NSector1Remaining, real_T
         *rty_NSector2Remaining, real_T *rty_NSector3Remaining, real_T
         *rty_NSector4Remaining, real_T *rty_NSector5Remaining, real_T
         *rty_NSector6Remaining, real_T *rty_NSector7Remaining, real_T
         *rty_NSector8Remaining, real_T *rty_NSector9Remaining, real_T
         *rty_NSector10Remaining, real_T *rty_NSector11Remaining, real_T
         *rty_NSector12Remaining, real_T *rty_ETotalRequested, real_T
         *rty_ESector1Remaining, real_T *rty_ESector2Remaining, real_T
         *rty_ESector3Remaining, real_T *rty_ESector4Remaining, real_T
         *rty_ESector5Remaining, real_T *rty_ESector6Remaining, real_T
         *rty_ESector7Remaining, real_T *rty_ESector8Remaining, real_T
         *rty_ESector9Remaining, real_T *rty_ESector10Remaining, real_T
         *rty_ESector11Remaining, real_T *rty_ESector12Remaining, B_EMS_c_T
         *localB, DW_EMS_f_T *localDW)
{
  int32_T rtb_Gain;
  int32_T rtb_Gain10;
  int32_T rtb_Gain11;
  int32_T rtb_Gain2_c;
  int32_T rtb_Gain3;
  int32_T rtb_Gain4;
  int32_T rtb_Gain5;
  int32_T rtb_Gain6;
  int32_T rtb_Gain7;
  int32_T rtb_Gain8;
  int32_T rtb_Gain9;
  boolean_T rtb_Compare;
  boolean_T rtb_Compare_bs;
  boolean_T rtb_Compare_e;
  boolean_T rtb_Compare_er;
  boolean_T rtb_Compare_gg;
  boolean_T rtb_Compare_h;
  boolean_T rtb_Compare_i;
  boolean_T rtb_Compare_j;
  boolean_T rtb_Compare_m2;
  boolean_T rtb_Compare_n;
  boolean_T rtb_Compare_o;
  boolean_T rtb_Compare_p;

  /* Chart: '<S5>/Sector Counter' */
  if (localDW->is_active_c2_EMS == 0) {
    localDW->is_active_c2_EMS = 1U;
    localDW->is_c2_EMS = EMS_IN_Start;
    localB->NLap = 0.0;
    localB->NSectorLap = 1.0;
    localB->NSectorGlobal = 0.0;
  } else {
    switch (localDW->is_c2_EMS) {
     case EMS_IN_Sector1:
      if (((*rtu_rRegenPaddle > 10.0) || (*rtu_pBrakeMax > 3.0)) &&
          (*rtu_sChassis - localB->sSector >= 77.0)) {
        localDW->is_c2_EMS = EMS_IN_Wait_1;
        localB->sSector = *rtu_sChassis;
      }
      break;

     case EMS_IN_Sector10:
      if (((*rtu_rRegenPaddle > 10.0) || (*rtu_pBrakeMax > 3.0)) &&
          (*rtu_sChassis - localB->sSector >= 40.0)) {
        localDW->is_c2_EMS = EMS_IN_Wait_10;
        localB->sSector = *rtu_sChassis;
      }
      break;

     case EMS_IN_Sector11:
      if (((*rtu_rRegenPaddle > 10.0) || (*rtu_pBrakeMax > 3.0)) &&
          (*rtu_sChassis - localB->sSector >= 29.0)) {
        localDW->is_c2_EMS = EMS_IN_Wait_11;
        localB->sSector = *rtu_sChassis;
      }
      break;

     case EMS_IN_Sector12:
      EMS_Sector12(rtu_pBrakeMax, rtu_rRegenPaddle, rtu_sChassis, localB,
                   localDW);
      break;

     case EMS_IN_Sector2:
      if (((*rtu_rRegenPaddle > 10.0) || (*rtu_pBrakeMax > 3.0)) &&
          (*rtu_sChassis - localB->sSector >= 71.0)) {
        localDW->is_c2_EMS = EMS_IN_Wait_2;
        localB->sSector = *rtu_sChassis;
      }
      break;

     case EMS_IN_Sector3:
      if (((*rtu_rRegenPaddle > 10.0) || (*rtu_pBrakeMax > 3.0)) &&
          (*rtu_sChassis - localB->sSector >= 101.0)) {
        localDW->is_c2_EMS = EMS_IN_Wait_3;
        localB->sSector = *rtu_sChassis;
      }
      break;

     case EMS_IN_Sector4:
      if (((*rtu_rRegenPaddle > 10.0) || (*rtu_pBrakeMax > 3.0)) &&
          (*rtu_sChassis - localB->sSector >= 40.0)) {
        localDW->is_c2_EMS = EMS_IN_Wait_4;
        localB->sSector = *rtu_sChassis;
      }
      break;

     case EMS_IN_Sector5:
      if (((*rtu_rRegenPaddle > 10.0) || (*rtu_pBrakeMax > 3.0)) &&
          (*rtu_sChassis - localB->sSector >= 35.0)) {
        localDW->is_c2_EMS = EMS_IN_Wait_5;
        localB->sSector = *rtu_sChassis;
      }
      break;

     case EMS_IN_Sector6:
      if (((*rtu_rRegenPaddle > 10.0) || (*rtu_pBrakeMax > 3.0)) &&
          (*rtu_sChassis - localB->sSector >= 41.0)) {
        localDW->is_c2_EMS = EMS_IN_Wait_6;
        localB->sSector = *rtu_sChassis;
      }
      break;

     case EMS_IN_Sector7:
      if (((*rtu_rRegenPaddle > 10.0) || (*rtu_pBrakeMax > 3.0)) &&
          (*rtu_sChassis - localB->sSector >= 64.0)) {
        localDW->is_c2_EMS = EMS_IN_Wait_7;
        localB->sSector = *rtu_sChassis;
      }
      break;

     case EMS_IN_Sector8:
      if (((*rtu_rRegenPaddle > 10.0) || (*rtu_pBrakeMax > 3.0)) &&
          (*rtu_sChassis - localB->sSector >= 49.0)) {
        localDW->is_c2_EMS = EMS_IN_Wait_8;
        localB->sSector = *rtu_sChassis;
      }
      break;

     case EMS_IN_Sector9:
      if (((*rtu_rRegenPaddle > 10.0) || (*rtu_pBrakeMax > 3.0)) &&
          (*rtu_sChassis - localB->sSector >= 106.0)) {
        localDW->is_c2_EMS = EMS_IN_Wait_9;
        localB->sSector = *rtu_sChassis;
      }
      break;

     case EMS_IN_Start:
      if (*rtu_BEMSOn) {
        localDW->is_c2_EMS = EMS_IN_Wait_;
        localB->NSectorGlobal = 1.0;
        localB->sSector = 0.0;
      }
      break;

     case EMS_IN_Wait_:
      EMS_Wait_(rtu_rThrottlePedal, rtu_PActual, localB, localDW);
      break;

     case EMS_IN_Wait_1:
      if ((*rtu_rThrottlePedal > 10.0) && (*rtu_PActual > 2.0)) {
        localDW->is_c2_EMS = EMS_IN_Sector2;
        localB->NSectorLap++;
        localB->NSectorGlobal++;
      }
      break;

     case EMS_IN_Wait_10:
      if ((*rtu_rThrottlePedal > 10.0) && (*rtu_PActual > 2.0)) {
        localDW->is_c2_EMS = EMS_IN_Sector11;
        localB->NSectorLap++;
        localB->NSectorGlobal++;
      }
      break;

     case EMS_IN_Wait_11:
      if ((*rtu_rThrottlePedal > 10.0) && (*rtu_PActual > 2.0)) {
        localDW->is_c2_EMS = EMS_IN_Sector12;
        localB->NSectorLap++;
        localB->NSectorGlobal++;
      }
      break;

     case EMS_IN_Wait_12:
      if ((*rtu_rThrottlePedal > 10.0) && (*rtu_PActual > 2.0)) {
        localDW->is_c2_EMS = EMS_IN_Sector1;
        localB->NSectorLap = 1.0;
        localB->NSectorGlobal++;
      }
      break;

     case EMS_IN_Wait_2:
      if ((*rtu_rThrottlePedal > 10.0) && (*rtu_PActual > 2.0)) {
        localDW->is_c2_EMS = EMS_IN_Sector3;
        localB->NSectorLap++;
        localB->NSectorGlobal++;
      }
      break;

     case EMS_IN_Wait_3:
      if ((*rtu_rThrottlePedal > 10.0) && (*rtu_PActual > 2.0)) {
        localDW->is_c2_EMS = EMS_IN_Sector4;
        localB->NSectorLap++;
        localB->NSectorGlobal++;
      }
      break;

     case EMS_IN_Wait_4:
      if ((*rtu_rThrottlePedal > 10.0) && (*rtu_PActual > 2.0)) {
        localDW->is_c2_EMS = EMS_IN_Sector5;
        localB->NSectorLap++;
        localB->NSectorGlobal++;
      }
      break;

     case EMS_IN_Wait_5:
      EMS_Wait_5(rtu_rThrottlePedal, rtu_PActual, localB, localDW);
      break;

     case EMS_IN_Wait_6:
      EMS_Wait_6(rtu_rThrottlePedal, rtu_PActual, localB, localDW);
      break;

     case EMS_IN_Wait_7:
      EMS_Wait_7(rtu_rThrottlePedal, rtu_PActual, localB, localDW);
      break;

     case EMS_IN_Wait_8:
      EMS_Wait_8(rtu_rThrottlePedal, rtu_PActual, localB, localDW);
      break;

     default:
      /* case IN_Wait_9: */
      EMS_Wait_9(rtu_rThrottlePedal, rtu_PActual, localB, localDW);
      break;
    }
  }

  /* End of Chart: '<S5>/Sector Counter' */

  /* DataTypeConversion: '<S5>/Cast To Double2' */
  *rty_NSectorLap = localB->NSectorLap;

  /* RelationalOperator: '<S7>/Compare' incorporates:
   *  Constant: '<S7>/Constant'
   */
  rtb_Compare = (*rty_NSectorLap == 1.0);

  /* RelationalOperator: '<S19>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S19>/Delay Input1'
   *
   * Block description for '<S19>/Delay Input1':
   *
   *  Store in Global RAM
   */
  localDW->DelayInput1_DSTATE_bl = ((int32_T)rtb_Compare > (int32_T)
    localDW->DelayInput1_DSTATE_bl);

  /* Gain: '<S6>/Gain' incorporates:
   *  DataTypeConversion: '<S6>/Cast To Boolean'
   *  UnitDelay: '<S19>/Delay Input1'
   *
   * Block description for '<S19>/Delay Input1':
   *
   *  Store in Global RAM
   */
  rtb_Gain = -(int32_T)localDW->DelayInput1_DSTATE_bl;

  /* Memory: '<S6>/Memory' */
  *rty_NSector1Remaining = localDW->Memory_PreviousInput;

  /* Gain: '<S6>/EBudgetInitial1' */
  *rty_ESector1Remaining = 2.0 * *rty_NSector1Remaining;

  /* Memory: '<S6>/Memory1' */
  *rty_NSector2Remaining = localDW->Memory1_PreviousInput;

  /* Gain: '<S6>/EBudgetInitial2' */
  *rty_ESector2Remaining = 2.0 * *rty_NSector2Remaining;

  /* Memory: '<S6>/Memory2' */
  *rty_NSector3Remaining = localDW->Memory2_PreviousInput;

  /* Gain: '<S6>/EBudgetInitial3' */
  *rty_ESector3Remaining = 2.0 * *rty_NSector3Remaining;

  /* Memory: '<S6>/Memory3' */
  *rty_NSector4Remaining = localDW->Memory3_PreviousInput;

  /* Gain: '<S6>/EBudgetInitial4' */
  *rty_ESector4Remaining = 2.0 * *rty_NSector4Remaining;

  /* Memory: '<S6>/Memory4' */
  *rty_NSector5Remaining = localDW->Memory4_PreviousInput;

  /* Gain: '<S6>/EBudgetInitial5' */
  *rty_ESector5Remaining = 2.0 * *rty_NSector5Remaining;

  /* Memory: '<S6>/Memory5' */
  *rty_NSector6Remaining = localDW->Memory5_PreviousInput;

  /* Gain: '<S6>/EBudgetInitial6' */
  *rty_ESector6Remaining = 2.0 * *rty_NSector6Remaining;

  /* Memory: '<S6>/Memory6' */
  *rty_NSector7Remaining = localDW->Memory6_PreviousInput;

  /* Gain: '<S6>/EBudgetInitial7' */
  *rty_ESector7Remaining = 2.0 * *rty_NSector7Remaining;

  /* Memory: '<S6>/Memory7' */
  *rty_NSector8Remaining = localDW->Memory7_PreviousInput;

  /* Gain: '<S6>/EBudgetInitial8' */
  *rty_ESector8Remaining = 2.0 * *rty_NSector8Remaining;

  /* Memory: '<S6>/Memory8' */
  *rty_NSector9Remaining = localDW->Memory8_PreviousInput;

  /* Gain: '<S6>/EBudgetInitial9' */
  *rty_ESector9Remaining = 2.0 * *rty_NSector9Remaining;

  /* Memory: '<S6>/Memory9' */
  *rty_NSector10Remaining = localDW->Memory9_PreviousInput;

  /* Gain: '<S6>/EBudgetInitial10' */
  *rty_ESector10Remaining = 2.0 * *rty_NSector10Remaining;

  /* Memory: '<S6>/Memory10' */
  *rty_NSector11Remaining = localDW->Memory10_PreviousInput;

  /* Gain: '<S6>/EBudgetInitial11' */
  *rty_ESector11Remaining = 2.0 * *rty_NSector11Remaining;

  /* Memory: '<S6>/Memory11' */
  *rty_NSector12Remaining = localDW->Memory11_PreviousInput;

  /* Gain: '<S6>/EBudgetInitial12' */
  *rty_ESector12Remaining = 2.0 * *rty_NSector12Remaining;

  /* Sum: '<S6>/Add12' */
  *rty_ETotalRequested = ((((((((((*rty_ESector1Remaining +
    *rty_ESector2Remaining) + *rty_ESector3Remaining) + *rty_ESector4Remaining)
    + *rty_ESector5Remaining) + *rty_ESector6Remaining) + *rty_ESector7Remaining)
    + *rty_ESector8Remaining) + *rty_ESector9Remaining) +
    *rty_ESector10Remaining) + *rty_ESector11Remaining) +
    *rty_ESector12Remaining;

  /* Gain: '<S4>/J to MJ' incorporates:
   *  Memory: '<S4>/Memory'
   */
  *rty_ESector = 1.0E-6 * localDW->Memory_PreviousInput_c;

  /* Sum: '<S3>/Add1' incorporates:
   *  Memory: '<S3>/Memory'
   */
  *rty_ERemaining = localDW->Memory_PreviousInput_g - *rty_ESector;

  /* MultiPortSwitch: '<S6>/Multiport Switch' incorporates:
   *  Product: '<S6>/Divide'
   *  Product: '<S6>/Divide1'
   *  Product: '<S6>/Divide10'
   *  Product: '<S6>/Divide11'
   *  Product: '<S6>/Divide12'
   *  Product: '<S6>/Divide13'
   *  Product: '<S6>/Divide14'
   *  Product: '<S6>/Divide15'
   *  Product: '<S6>/Divide16'
   *  Product: '<S6>/Divide17'
   *  Product: '<S6>/Divide18'
   *  Product: '<S6>/Divide19'
   *  Product: '<S6>/Divide2'
   *  Product: '<S6>/Divide20'
   *  Product: '<S6>/Divide21'
   *  Product: '<S6>/Divide22'
   *  Product: '<S6>/Divide23'
   *  Product: '<S6>/Divide3'
   *  Product: '<S6>/Divide4'
   *  Product: '<S6>/Divide5'
   *  Product: '<S6>/Divide6'
   *  Product: '<S6>/Divide7'
   *  Product: '<S6>/Divide8'
   *  Product: '<S6>/Divide9'
   *  Product: '<S6>/Multiply'
   *  Product: '<S6>/Multiply10'
   *  Product: '<S6>/Multiply12'
   *  Product: '<S6>/Multiply14'
   *  Product: '<S6>/Multiply16'
   *  Product: '<S6>/Multiply18'
   *  Product: '<S6>/Multiply2'
   *  Product: '<S6>/Multiply20'
   *  Product: '<S6>/Multiply22'
   *  Product: '<S6>/Multiply4'
   *  Product: '<S6>/Multiply6'
   *  Product: '<S6>/Multiply8'
   */
  switch ((int32_T)*rty_NSectorLap) {
   case 1:
    *rty_EBudget = *rty_ESector1Remaining / *rty_ETotalRequested *
      *rty_ERemaining / *rty_NSector1Remaining;
    break;

   case 2:
    *rty_EBudget = *rty_ESector2Remaining / *rty_ETotalRequested *
      *rty_ERemaining / *rty_NSector2Remaining;
    break;

   case 3:
    *rty_EBudget = *rty_ESector3Remaining / *rty_ETotalRequested *
      *rty_ERemaining / *rty_NSector3Remaining;
    break;

   case 4:
    *rty_EBudget = *rty_ESector4Remaining / *rty_ETotalRequested *
      *rty_ERemaining / *rty_NSector4Remaining;
    break;

   case 5:
    *rty_EBudget = *rty_ESector5Remaining / *rty_ETotalRequested *
      *rty_ERemaining / *rty_NSector5Remaining;
    break;

   case 6:
    *rty_EBudget = *rty_ESector6Remaining / *rty_ETotalRequested *
      *rty_ERemaining / *rty_NSector6Remaining;
    break;

   case 7:
    *rty_EBudget = *rty_ESector7Remaining / *rty_ETotalRequested *
      *rty_ERemaining / *rty_NSector7Remaining;
    break;

   case 8:
    *rty_EBudget = *rty_ESector8Remaining / *rty_ETotalRequested *
      *rty_ERemaining / *rty_NSector8Remaining;
    break;

   case 9:
    *rty_EBudget = *rty_ESector9Remaining / *rty_ETotalRequested *
      *rty_ERemaining / *rty_NSector9Remaining;
    break;

   case 10:
    *rty_EBudget = *rty_ESector10Remaining / *rty_ETotalRequested *
      *rty_ERemaining / *rty_NSector10Remaining;
    break;

   case 11:
    *rty_EBudget = *rty_ESector11Remaining / *rty_ETotalRequested *
      *rty_ERemaining / *rty_NSector11Remaining;
    break;

   default:
    *rty_EBudget = *rty_ESector12Remaining / *rty_ETotalRequested *
      *rty_ERemaining / *rty_NSector12Remaining;
    break;
  }

  /* End of MultiPortSwitch: '<S6>/Multiport Switch' */

  /* RelationalOperator: '<S1>/Relational Operator' incorporates:
   *  Gain: '<S1>/Gain'
   */
  *rty_BEMSDriverSignal3 = (*rty_ESector > 0.9 * *rty_EBudget);

  /* RelationalOperator: '<S1>/Relational Operator1' incorporates:
   *  Gain: '<S1>/Gain1'
   */
  *rty_BEMSDriverSignal2 = (*rty_ESector > 0.75 * *rty_EBudget);

  /* RelationalOperator: '<S1>/Relational Operator2' incorporates:
   *  Gain: '<S1>/Gain2'
   */
  *rty_BEMSDriverSignal1 = (*rty_ESector > 0.5 * *rty_EBudget);

  /* DataTypeConversion: '<S5>/Cast To Double1' */
  *rty_NSectorGlobal = localB->NSectorGlobal;

  /* Switch: '<S4>/Switch' incorporates:
   *  RelationalOperator: '<S32>/FixPt Relational Operator'
   *  UnitDelay: '<S32>/Delay Input1'
   *
   * Block description for '<S32>/Delay Input1':
   *
   *  Store in Global RAM
   */
  if (*rty_NSectorGlobal != localDW->DelayInput1_DSTATE) {
    /* Update for Memory: '<S4>/Memory' incorporates:
     *  Constant: '<S4>/Constant'
     */
    localDW->Memory_PreviousInput_c = 0.0;
  } else {
    /* Update for Memory: '<S4>/Memory' incorporates:
     *  Gain: '<S4>/TimeConstant'
     *  Sum: '<S4>/Add'
     */
    localDW->Memory_PreviousInput_c += 0.001 * *rtu_PActual;
  }

  /* End of Switch: '<S4>/Switch' */

  /* UnitDelay: '<S31>/Delay Input1' incorporates:
   *  UnitDelay: '<S32>/Delay Input1'
   *
   * Block description for '<S31>/Delay Input1':
   *
   *  Store in Global RAM
   *
   * Block description for '<S32>/Delay Input1':
   *
   *  Store in Global RAM
   */
  localDW->DelayInput1_DSTATE = localDW->DelayInput1_DSTATE_b;

  /* Switch: '<S3>/Switch' incorporates:
   *  RelationalOperator: '<S31>/FixPt Relational Operator'
   *  UnitDelay: '<S32>/Delay Input1'
   *
   * Block description for '<S32>/Delay Input1':
   *
   *  Store in Global RAM
   */
  if (*rty_NSectorGlobal != localDW->DelayInput1_DSTATE) {
    /* Update for Memory: '<S3>/Memory' incorporates:
     *  Gain: '<S3>/Gain'
     *  Gain: '<S3>/Gain1'
     *  Gain: '<S3>/J to MJ'
     *  Gain: '<S3>/MJ to J'
     *  Sum: '<S3>/Add'
     */
    localDW->Memory_PreviousInput_g = (0.01 * *rtu_rSOE * 2.19024E+7 + 1.0E+6 * *
      rtu_EOffset) * 1.0E-6;
  }

  /* End of Switch: '<S3>/Switch' */

  /* RelationalOperator: '<S10>/Compare' incorporates:
   *  Constant: '<S10>/Constant'
   */
  rtb_Compare_bs = (*rty_NSectorLap == 12.0);

  /* UnitDelay: '<S22>/Delay Input1' incorporates:
   *  UnitDelay: '<S19>/Delay Input1'
   *
   * Block description for '<S22>/Delay Input1':
   *
   *  Store in Global RAM
   *
   * Block description for '<S19>/Delay Input1':
   *
   *  Store in Global RAM
   */
  localDW->DelayInput1_DSTATE_bl = localDW->DelayInput1_DSTATE_h;

  /* RelationalOperator: '<S22>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S19>/Delay Input1'
   *
   * Block description for '<S19>/Delay Input1':
   *
   *  Store in Global RAM
   */
  localDW->DelayInput1_DSTATE_bl = ((int32_T)rtb_Compare_bs > (int32_T)
    localDW->DelayInput1_DSTATE_bl);

  /* DataTypeConversion: '<S6>/Cast To Boolean11' incorporates:
   *  UnitDelay: '<S19>/Delay Input1'
   *  UnitDelay: '<S32>/Delay Input1'
   *
   * Block description for '<S19>/Delay Input1':
   *
   *  Store in Global RAM
   *
   * Block description for '<S32>/Delay Input1':
   *
   *  Store in Global RAM
   */
  localDW->DelayInput1_DSTATE = localDW->DelayInput1_DSTATE_bl;

  /* Gain: '<S6>/Gain11' incorporates:
   *  UnitDelay: '<S32>/Delay Input1'
   *
   * Block description for '<S32>/Delay Input1':
   *
   *  Store in Global RAM
   */
  rtb_Gain11 = (int32_T)-localDW->DelayInput1_DSTATE;

  /* RelationalOperator: '<S9>/Compare' incorporates:
   *  Constant: '<S9>/Constant'
   */
  rtb_Compare_er = (*rty_NSectorLap == 11.0);

  /* UnitDelay: '<S21>/Delay Input1' incorporates:
   *  UnitDelay: '<S19>/Delay Input1'
   *
   * Block description for '<S21>/Delay Input1':
   *
   *  Store in Global RAM
   *
   * Block description for '<S19>/Delay Input1':
   *
   *  Store in Global RAM
   */
  localDW->DelayInput1_DSTATE_bl = localDW->DelayInput1_DSTATE_m;

  /* RelationalOperator: '<S21>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S19>/Delay Input1'
   *
   * Block description for '<S19>/Delay Input1':
   *
   *  Store in Global RAM
   */
  localDW->DelayInput1_DSTATE_bl = ((int32_T)rtb_Compare_er > (int32_T)
    localDW->DelayInput1_DSTATE_bl);

  /* DataTypeConversion: '<S6>/Cast To Boolean10' incorporates:
   *  UnitDelay: '<S19>/Delay Input1'
   *  UnitDelay: '<S32>/Delay Input1'
   *
   * Block description for '<S19>/Delay Input1':
   *
   *  Store in Global RAM
   *
   * Block description for '<S32>/Delay Input1':
   *
   *  Store in Global RAM
   */
  localDW->DelayInput1_DSTATE = localDW->DelayInput1_DSTATE_bl;

  /* Gain: '<S6>/Gain10' incorporates:
   *  UnitDelay: '<S32>/Delay Input1'
   *
   * Block description for '<S32>/Delay Input1':
   *
   *  Store in Global RAM
   */
  rtb_Gain10 = (int32_T)-localDW->DelayInput1_DSTATE;

  /* RelationalOperator: '<S18>/Compare' incorporates:
   *  Constant: '<S18>/Constant'
   */
  rtb_Compare_j = (*rty_NSectorLap == 10.0);

  /* UnitDelay: '<S30>/Delay Input1' incorporates:
   *  UnitDelay: '<S19>/Delay Input1'
   *
   * Block description for '<S30>/Delay Input1':
   *
   *  Store in Global RAM
   *
   * Block description for '<S19>/Delay Input1':
   *
   *  Store in Global RAM
   */
  localDW->DelayInput1_DSTATE_bl = localDW->DelayInput1_DSTATE_md;

  /* RelationalOperator: '<S30>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S19>/Delay Input1'
   *
   * Block description for '<S19>/Delay Input1':
   *
   *  Store in Global RAM
   */
  localDW->DelayInput1_DSTATE_bl = ((int32_T)rtb_Compare_j > (int32_T)
    localDW->DelayInput1_DSTATE_bl);

  /* DataTypeConversion: '<S6>/Cast To Boolean9' incorporates:
   *  UnitDelay: '<S19>/Delay Input1'
   *  UnitDelay: '<S32>/Delay Input1'
   *
   * Block description for '<S19>/Delay Input1':
   *
   *  Store in Global RAM
   *
   * Block description for '<S32>/Delay Input1':
   *
   *  Store in Global RAM
   */
  localDW->DelayInput1_DSTATE = localDW->DelayInput1_DSTATE_bl;

  /* Gain: '<S6>/Gain9' incorporates:
   *  UnitDelay: '<S32>/Delay Input1'
   *
   * Block description for '<S32>/Delay Input1':
   *
   *  Store in Global RAM
   */
  rtb_Gain9 = (int32_T)-localDW->DelayInput1_DSTATE;

  /* RelationalOperator: '<S17>/Compare' incorporates:
   *  Constant: '<S17>/Constant'
   */
  rtb_Compare_e = (*rty_NSectorLap == 9.0);

  /* UnitDelay: '<S29>/Delay Input1' incorporates:
   *  UnitDelay: '<S19>/Delay Input1'
   *
   * Block description for '<S29>/Delay Input1':
   *
   *  Store in Global RAM
   *
   * Block description for '<S19>/Delay Input1':
   *
   *  Store in Global RAM
   */
  localDW->DelayInput1_DSTATE_bl = localDW->DelayInput1_DSTATE_l;

  /* RelationalOperator: '<S29>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S19>/Delay Input1'
   *
   * Block description for '<S19>/Delay Input1':
   *
   *  Store in Global RAM
   */
  localDW->DelayInput1_DSTATE_bl = ((int32_T)rtb_Compare_e > (int32_T)
    localDW->DelayInput1_DSTATE_bl);

  /* DataTypeConversion: '<S6>/Cast To Boolean8' incorporates:
   *  UnitDelay: '<S19>/Delay Input1'
   *  UnitDelay: '<S32>/Delay Input1'
   *
   * Block description for '<S19>/Delay Input1':
   *
   *  Store in Global RAM
   *
   * Block description for '<S32>/Delay Input1':
   *
   *  Store in Global RAM
   */
  localDW->DelayInput1_DSTATE = localDW->DelayInput1_DSTATE_bl;

  /* Gain: '<S6>/Gain8' incorporates:
   *  UnitDelay: '<S32>/Delay Input1'
   *
   * Block description for '<S32>/Delay Input1':
   *
   *  Store in Global RAM
   */
  rtb_Gain8 = (int32_T)-localDW->DelayInput1_DSTATE;

  /* RelationalOperator: '<S16>/Compare' incorporates:
   *  Constant: '<S16>/Constant'
   */
  rtb_Compare_i = (*rty_NSectorLap == 8.0);

  /* UnitDelay: '<S28>/Delay Input1' incorporates:
   *  UnitDelay: '<S19>/Delay Input1'
   *
   * Block description for '<S28>/Delay Input1':
   *
   *  Store in Global RAM
   *
   * Block description for '<S19>/Delay Input1':
   *
   *  Store in Global RAM
   */
  localDW->DelayInput1_DSTATE_bl = localDW->DelayInput1_DSTATE_d;

  /* RelationalOperator: '<S28>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S19>/Delay Input1'
   *
   * Block description for '<S19>/Delay Input1':
   *
   *  Store in Global RAM
   */
  localDW->DelayInput1_DSTATE_bl = ((int32_T)rtb_Compare_i > (int32_T)
    localDW->DelayInput1_DSTATE_bl);

  /* DataTypeConversion: '<S6>/Cast To Boolean7' incorporates:
   *  UnitDelay: '<S19>/Delay Input1'
   *  UnitDelay: '<S32>/Delay Input1'
   *
   * Block description for '<S19>/Delay Input1':
   *
   *  Store in Global RAM
   *
   * Block description for '<S32>/Delay Input1':
   *
   *  Store in Global RAM
   */
  localDW->DelayInput1_DSTATE = localDW->DelayInput1_DSTATE_bl;

  /* Gain: '<S6>/Gain7' incorporates:
   *  UnitDelay: '<S32>/Delay Input1'
   *
   * Block description for '<S32>/Delay Input1':
   *
   *  Store in Global RAM
   */
  rtb_Gain7 = (int32_T)-localDW->DelayInput1_DSTATE;

  /* RelationalOperator: '<S15>/Compare' incorporates:
   *  Constant: '<S15>/Constant'
   */
  rtb_Compare_n = (*rty_NSectorLap == 7.0);

  /* UnitDelay: '<S27>/Delay Input1' incorporates:
   *  UnitDelay: '<S19>/Delay Input1'
   *
   * Block description for '<S27>/Delay Input1':
   *
   *  Store in Global RAM
   *
   * Block description for '<S19>/Delay Input1':
   *
   *  Store in Global RAM
   */
  localDW->DelayInput1_DSTATE_bl = localDW->DelayInput1_DSTATE_o;

  /* RelationalOperator: '<S27>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S19>/Delay Input1'
   *
   * Block description for '<S19>/Delay Input1':
   *
   *  Store in Global RAM
   */
  localDW->DelayInput1_DSTATE_bl = ((int32_T)rtb_Compare_n > (int32_T)
    localDW->DelayInput1_DSTATE_bl);

  /* DataTypeConversion: '<S6>/Cast To Boolean6' incorporates:
   *  UnitDelay: '<S19>/Delay Input1'
   *  UnitDelay: '<S32>/Delay Input1'
   *
   * Block description for '<S19>/Delay Input1':
   *
   *  Store in Global RAM
   *
   * Block description for '<S32>/Delay Input1':
   *
   *  Store in Global RAM
   */
  localDW->DelayInput1_DSTATE = localDW->DelayInput1_DSTATE_bl;

  /* Gain: '<S6>/Gain6' incorporates:
   *  UnitDelay: '<S32>/Delay Input1'
   *
   * Block description for '<S32>/Delay Input1':
   *
   *  Store in Global RAM
   */
  rtb_Gain6 = (int32_T)-localDW->DelayInput1_DSTATE;

  /* RelationalOperator: '<S14>/Compare' incorporates:
   *  Constant: '<S14>/Constant'
   */
  rtb_Compare_m2 = (*rty_NSectorLap == 6.0);

  /* UnitDelay: '<S26>/Delay Input1' incorporates:
   *  UnitDelay: '<S19>/Delay Input1'
   *
   * Block description for '<S26>/Delay Input1':
   *
   *  Store in Global RAM
   *
   * Block description for '<S19>/Delay Input1':
   *
   *  Store in Global RAM
   */
  localDW->DelayInput1_DSTATE_bl = localDW->DelayInput1_DSTATE_j;

  /* RelationalOperator: '<S26>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S19>/Delay Input1'
   *
   * Block description for '<S19>/Delay Input1':
   *
   *  Store in Global RAM
   */
  localDW->DelayInput1_DSTATE_bl = ((int32_T)rtb_Compare_m2 > (int32_T)
    localDW->DelayInput1_DSTATE_bl);

  /* DataTypeConversion: '<S6>/Cast To Boolean5' incorporates:
   *  UnitDelay: '<S19>/Delay Input1'
   *  UnitDelay: '<S32>/Delay Input1'
   *
   * Block description for '<S19>/Delay Input1':
   *
   *  Store in Global RAM
   *
   * Block description for '<S32>/Delay Input1':
   *
   *  Store in Global RAM
   */
  localDW->DelayInput1_DSTATE = localDW->DelayInput1_DSTATE_bl;

  /* Gain: '<S6>/Gain5' incorporates:
   *  UnitDelay: '<S32>/Delay Input1'
   *
   * Block description for '<S32>/Delay Input1':
   *
   *  Store in Global RAM
   */
  rtb_Gain5 = (int32_T)-localDW->DelayInput1_DSTATE;

  /* RelationalOperator: '<S13>/Compare' incorporates:
   *  Constant: '<S13>/Constant'
   */
  rtb_Compare_h = (*rty_NSectorLap == 5.0);

  /* UnitDelay: '<S25>/Delay Input1' incorporates:
   *  UnitDelay: '<S19>/Delay Input1'
   *
   * Block description for '<S25>/Delay Input1':
   *
   *  Store in Global RAM
   *
   * Block description for '<S19>/Delay Input1':
   *
   *  Store in Global RAM
   */
  localDW->DelayInput1_DSTATE_bl = localDW->DelayInput1_DSTATE_c;

  /* RelationalOperator: '<S25>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S19>/Delay Input1'
   *
   * Block description for '<S19>/Delay Input1':
   *
   *  Store in Global RAM
   */
  localDW->DelayInput1_DSTATE_bl = ((int32_T)rtb_Compare_h > (int32_T)
    localDW->DelayInput1_DSTATE_bl);

  /* DataTypeConversion: '<S6>/Cast To Boolean4' incorporates:
   *  UnitDelay: '<S19>/Delay Input1'
   *  UnitDelay: '<S32>/Delay Input1'
   *
   * Block description for '<S19>/Delay Input1':
   *
   *  Store in Global RAM
   *
   * Block description for '<S32>/Delay Input1':
   *
   *  Store in Global RAM
   */
  localDW->DelayInput1_DSTATE = localDW->DelayInput1_DSTATE_bl;

  /* Gain: '<S6>/Gain4' incorporates:
   *  UnitDelay: '<S32>/Delay Input1'
   *
   * Block description for '<S32>/Delay Input1':
   *
   *  Store in Global RAM
   */
  rtb_Gain4 = (int32_T)-localDW->DelayInput1_DSTATE;

  /* RelationalOperator: '<S12>/Compare' incorporates:
   *  Constant: '<S12>/Constant'
   */
  rtb_Compare_o = (*rty_NSectorLap == 4.0);

  /* UnitDelay: '<S24>/Delay Input1' incorporates:
   *  UnitDelay: '<S19>/Delay Input1'
   *
   * Block description for '<S24>/Delay Input1':
   *
   *  Store in Global RAM
   *
   * Block description for '<S19>/Delay Input1':
   *
   *  Store in Global RAM
   */
  localDW->DelayInput1_DSTATE_bl = localDW->DelayInput1_DSTATE_e;

  /* RelationalOperator: '<S24>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S19>/Delay Input1'
   *
   * Block description for '<S19>/Delay Input1':
   *
   *  Store in Global RAM
   */
  localDW->DelayInput1_DSTATE_bl = ((int32_T)rtb_Compare_o > (int32_T)
    localDW->DelayInput1_DSTATE_bl);

  /* DataTypeConversion: '<S6>/Cast To Boolean3' incorporates:
   *  UnitDelay: '<S19>/Delay Input1'
   *  UnitDelay: '<S32>/Delay Input1'
   *
   * Block description for '<S19>/Delay Input1':
   *
   *  Store in Global RAM
   *
   * Block description for '<S32>/Delay Input1':
   *
   *  Store in Global RAM
   */
  localDW->DelayInput1_DSTATE = localDW->DelayInput1_DSTATE_bl;

  /* Gain: '<S6>/Gain3' incorporates:
   *  UnitDelay: '<S32>/Delay Input1'
   *
   * Block description for '<S32>/Delay Input1':
   *
   *  Store in Global RAM
   */
  rtb_Gain3 = (int32_T)-localDW->DelayInput1_DSTATE;

  /* RelationalOperator: '<S11>/Compare' incorporates:
   *  Constant: '<S11>/Constant'
   */
  rtb_Compare_p = (*rty_NSectorLap == 3.0);

  /* UnitDelay: '<S23>/Delay Input1' incorporates:
   *  UnitDelay: '<S19>/Delay Input1'
   *
   * Block description for '<S23>/Delay Input1':
   *
   *  Store in Global RAM
   *
   * Block description for '<S19>/Delay Input1':
   *
   *  Store in Global RAM
   */
  localDW->DelayInput1_DSTATE_bl = localDW->DelayInput1_DSTATE_dv;

  /* RelationalOperator: '<S23>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S19>/Delay Input1'
   *
   * Block description for '<S19>/Delay Input1':
   *
   *  Store in Global RAM
   */
  localDW->DelayInput1_DSTATE_bl = ((int32_T)rtb_Compare_p > (int32_T)
    localDW->DelayInput1_DSTATE_bl);

  /* DataTypeConversion: '<S6>/Cast To Boolean2' incorporates:
   *  UnitDelay: '<S19>/Delay Input1'
   *  UnitDelay: '<S32>/Delay Input1'
   *
   * Block description for '<S19>/Delay Input1':
   *
   *  Store in Global RAM
   *
   * Block description for '<S32>/Delay Input1':
   *
   *  Store in Global RAM
   */
  localDW->DelayInput1_DSTATE = localDW->DelayInput1_DSTATE_bl;

  /* Gain: '<S6>/Gain2' incorporates:
   *  UnitDelay: '<S32>/Delay Input1'
   *
   * Block description for '<S32>/Delay Input1':
   *
   *  Store in Global RAM
   */
  rtb_Gain2_c = (int32_T)-localDW->DelayInput1_DSTATE;

  /* RelationalOperator: '<S8>/Compare' incorporates:
   *  Constant: '<S8>/Constant'
   */
  rtb_Compare_gg = (*rty_NSectorLap == 2.0);

  /* UnitDelay: '<S20>/Delay Input1' incorporates:
   *  UnitDelay: '<S19>/Delay Input1'
   *
   * Block description for '<S20>/Delay Input1':
   *
   *  Store in Global RAM
   *
   * Block description for '<S19>/Delay Input1':
   *
   *  Store in Global RAM
   */
  localDW->DelayInput1_DSTATE_bl = localDW->DelayInput1_DSTATE_ew;

  /* RelationalOperator: '<S20>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S19>/Delay Input1'
   *
   * Block description for '<S19>/Delay Input1':
   *
   *  Store in Global RAM
   */
  localDW->DelayInput1_DSTATE_bl = ((int32_T)rtb_Compare_gg > (int32_T)
    localDW->DelayInput1_DSTATE_bl);

  /* DataTypeConversion: '<S6>/Cast To Boolean1' incorporates:
   *  UnitDelay: '<S19>/Delay Input1'
   *  UnitDelay: '<S32>/Delay Input1'
   *
   * Block description for '<S19>/Delay Input1':
   *
   *  Store in Global RAM
   *
   * Block description for '<S32>/Delay Input1':
   *
   *  Store in Global RAM
   */
  localDW->DelayInput1_DSTATE = localDW->DelayInput1_DSTATE_bl;

  /* DataTypeConversion: '<S5>/Cast To Double' */
  *rty_NLap = localB->NLap;

  /* DataTypeConversion: '<S5>/Cast To Double3' */
  *rty_sSector = localB->sSector;

  /* Update for UnitDelay: '<S19>/Delay Input1'
   *
   * Block description for '<S19>/Delay Input1':
   *
   *  Store in Global RAM
   */
  localDW->DelayInput1_DSTATE_bl = rtb_Compare;

  /* Update for Memory: '<S6>/Memory' incorporates:
   *  Sum: '<S6>/Add'
   */
  localDW->Memory_PreviousInput = (real_T)rtb_Gain + *rty_NSector1Remaining;

  /* Update for Memory: '<S6>/Memory1' incorporates:
   *  Gain: '<S6>/Gain1'
   *  Sum: '<S6>/Add1'
   *  UnitDelay: '<S32>/Delay Input1'
   *
   * Block description for '<S32>/Delay Input1':
   *
   *  Store in Global RAM
   */
  localDW->Memory1_PreviousInput = -localDW->DelayInput1_DSTATE +
    *rty_NSector2Remaining;

  /* Update for Memory: '<S6>/Memory2' incorporates:
   *  Sum: '<S6>/Add2'
   */
  localDW->Memory2_PreviousInput = (real_T)rtb_Gain2_c + *rty_NSector3Remaining;

  /* Update for Memory: '<S6>/Memory3' incorporates:
   *  Sum: '<S6>/Add3'
   */
  localDW->Memory3_PreviousInput = (real_T)rtb_Gain3 + *rty_NSector4Remaining;

  /* Update for Memory: '<S6>/Memory4' incorporates:
   *  Sum: '<S6>/Add4'
   */
  localDW->Memory4_PreviousInput = (real_T)rtb_Gain4 + *rty_NSector5Remaining;

  /* Update for Memory: '<S6>/Memory5' incorporates:
   *  Sum: '<S6>/Add5'
   */
  localDW->Memory5_PreviousInput = (real_T)rtb_Gain5 + *rty_NSector6Remaining;

  /* Update for Memory: '<S6>/Memory6' incorporates:
   *  Sum: '<S6>/Add6'
   */
  localDW->Memory6_PreviousInput = (real_T)rtb_Gain6 + *rty_NSector7Remaining;

  /* Update for Memory: '<S6>/Memory7' incorporates:
   *  Sum: '<S6>/Add7'
   */
  localDW->Memory7_PreviousInput = (real_T)rtb_Gain7 + *rty_NSector8Remaining;

  /* Update for Memory: '<S6>/Memory8' incorporates:
   *  Sum: '<S6>/Add8'
   */
  localDW->Memory8_PreviousInput = (real_T)rtb_Gain8 + *rty_NSector9Remaining;

  /* Update for Memory: '<S6>/Memory9' incorporates:
   *  Sum: '<S6>/Add9'
   */
  localDW->Memory9_PreviousInput = (real_T)rtb_Gain9 + *rty_NSector10Remaining;

  /* Update for Memory: '<S6>/Memory10' incorporates:
   *  Sum: '<S6>/Add10'
   */
  localDW->Memory10_PreviousInput = (real_T)rtb_Gain10 + *rty_NSector11Remaining;

  /* Update for Memory: '<S6>/Memory11' incorporates:
   *  Sum: '<S6>/Add11'
   */
  localDW->Memory11_PreviousInput = (real_T)rtb_Gain11 + *rty_NSector12Remaining;

  /* Update for UnitDelay: '<S32>/Delay Input1'
   *
   * Block description for '<S32>/Delay Input1':
   *
   *  Store in Global RAM
   */
  localDW->DelayInput1_DSTATE = *rty_NSectorGlobal;

  /* Update for UnitDelay: '<S31>/Delay Input1'
   *
   * Block description for '<S31>/Delay Input1':
   *
   *  Store in Global RAM
   */
  localDW->DelayInput1_DSTATE_b = *rty_NSectorGlobal;

  /* Update for UnitDelay: '<S22>/Delay Input1'
   *
   * Block description for '<S22>/Delay Input1':
   *
   *  Store in Global RAM
   */
  localDW->DelayInput1_DSTATE_h = rtb_Compare_bs;

  /* Update for UnitDelay: '<S21>/Delay Input1'
   *
   * Block description for '<S21>/Delay Input1':
   *
   *  Store in Global RAM
   */
  localDW->DelayInput1_DSTATE_m = rtb_Compare_er;

  /* Update for UnitDelay: '<S30>/Delay Input1'
   *
   * Block description for '<S30>/Delay Input1':
   *
   *  Store in Global RAM
   */
  localDW->DelayInput1_DSTATE_md = rtb_Compare_j;

  /* Update for UnitDelay: '<S29>/Delay Input1'
   *
   * Block description for '<S29>/Delay Input1':
   *
   *  Store in Global RAM
   */
  localDW->DelayInput1_DSTATE_l = rtb_Compare_e;

  /* Update for UnitDelay: '<S28>/Delay Input1'
   *
   * Block description for '<S28>/Delay Input1':
   *
   *  Store in Global RAM
   */
  localDW->DelayInput1_DSTATE_d = rtb_Compare_i;

  /* Update for UnitDelay: '<S27>/Delay Input1'
   *
   * Block description for '<S27>/Delay Input1':
   *
   *  Store in Global RAM
   */
  localDW->DelayInput1_DSTATE_o = rtb_Compare_n;

  /* Update for UnitDelay: '<S26>/Delay Input1'
   *
   * Block description for '<S26>/Delay Input1':
   *
   *  Store in Global RAM
   */
  localDW->DelayInput1_DSTATE_j = rtb_Compare_m2;

  /* Update for UnitDelay: '<S25>/Delay Input1'
   *
   * Block description for '<S25>/Delay Input1':
   *
   *  Store in Global RAM
   */
  localDW->DelayInput1_DSTATE_c = rtb_Compare_h;

  /* Update for UnitDelay: '<S24>/Delay Input1'
   *
   * Block description for '<S24>/Delay Input1':
   *
   *  Store in Global RAM
   */
  localDW->DelayInput1_DSTATE_e = rtb_Compare_o;

  /* Update for UnitDelay: '<S23>/Delay Input1'
   *
   * Block description for '<S23>/Delay Input1':
   *
   *  Store in Global RAM
   */
  localDW->DelayInput1_DSTATE_dv = rtb_Compare_p;

  /* Update for UnitDelay: '<S20>/Delay Input1'
   *
   * Block description for '<S20>/Delay Input1':
   *
   *  Store in Global RAM
   */
  localDW->DelayInput1_DSTATE_ew = rtb_Compare_gg;
}

/* Model initialize function */
void EMS_initialize(const char_T **rt_errorStatus, RT_MODEL_EMS_T *const EMS_M)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(EMS_M, rt_errorStatus);

  /* user code (Initialize function Body) */
  LL_TIM_EnableCounter(TIM2);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
