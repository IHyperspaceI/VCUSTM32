/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: vChassis.c
 *
 * Code generated for Simulink model 'vChassis'.
 *
 * Model version                  : 13.3
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Tue Sep  8 11:42:14 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "vChassis.h"
#include "rtwtypes.h"
#include <math.h>
#include "maximum_xTpTd9Be.h"
#include "rt_nonfinite.h"
#include "vChassis_private.h"

/* Output and update for referenced model: 'vChassis' */
void vChassis(const real_T *rtu_vWheelFL, const real_T *rtu_vWheelFR, const
              real_T *rtu_vWheelRL, const real_T *rtu_vWheelRR, const real_T
              *rtu_gLateralIMU, const real_T *rtu_gLongitudinalIMU, const real_T
              *rtu_aSteeringAngle, real_T *rty_vChassis, real_T *rty_sChassis,
              DW_vChassis_f_T *localDW)
{
  real_T BOOL[4];
  real_T BOOL_0;
  real_T R_i;
  real_T w_avg;
  int32_T denom;
  int32_T idx;
  boolean_T exitg1;

  /* MATLAB Function: '<Root>/MATLAB Function' */
  BOOL[0] = 1.0;
  BOOL[1] = 1.0;
  BOOL[2] = 1.0;
  BOOL[3] = 1.0;
  R_i = fabs(*rtu_aSteeringAngle);
  if (R_i < 3.0) {
    if (*rtu_gLongitudinalIMU >= 0.0) {
      w_avg = (*rtu_vWheelRL + *rtu_vWheelRR) / 2.0;
      if (fabs(w_avg) < 0.65) {
        BOOL[0] = *rtu_vWheelFL;
        BOOL[1] = *rtu_vWheelFR;
        BOOL[2] = *rtu_vWheelRL;
        BOOL[3] = *rtu_vWheelRR;
        w_avg = maximum_xTpTd9Be(BOOL);
      } else {
        if (fabs((w_avg - *rtu_vWheelRL) / w_avg) > 0.1) {
          BOOL[2] = 0.0;
        }

        if (fabs((w_avg - *rtu_vWheelRR) / w_avg) > 0.1) {
          BOOL[3] = 0.0;
        }

        denom = (int32_T)BOOL[2] + (int32_T)BOOL[3];
        if (denom > 0) {
          w_avg = (*rtu_vWheelRL * BOOL[2] + *rtu_vWheelRR * BOOL[3]) / (real_T)
            denom;
        } else {
          BOOL[0] = *rtu_vWheelFL;
          BOOL[1] = *rtu_vWheelFR;
          BOOL[2] = *rtu_vWheelRL;
          BOOL[3] = *rtu_vWheelRR;
          if (!rtIsNaN(*rtu_vWheelFL)) {
            idx = 1;
          } else {
            idx = 0;
            denom = 2;
            exitg1 = false;
            while ((!exitg1) && (denom < 5)) {
              if (!rtIsNaN(BOOL[denom - 1])) {
                idx = denom;
                exitg1 = true;
              } else {
                denom++;
              }
            }
          }

          if (idx == 0) {
            w_avg = *rtu_vWheelFL;
          } else {
            w_avg = BOOL[idx - 1];
            for (denom = idx + 1; denom < 5; denom++) {
              BOOL_0 = BOOL[denom - 1];
              if (w_avg > BOOL_0) {
                w_avg = BOOL_0;
              }
            }
          }
        }
      }
    } else {
      w_avg = (*rtu_vWheelFL + *rtu_vWheelFR) / 2.0;
      if (fabs(w_avg) < 0.65) {
        BOOL[0] = *rtu_vWheelFL;
        BOOL[1] = *rtu_vWheelFR;
        BOOL[2] = *rtu_vWheelRL;
        BOOL[3] = *rtu_vWheelRR;
        w_avg = maximum_xTpTd9Be(BOOL);
      } else {
        if (fabs((w_avg - *rtu_vWheelFL) / w_avg) > 0.1) {
          BOOL[0] = 0.0;
        }

        if (fabs((w_avg - *rtu_vWheelFR) / w_avg) > 0.1) {
          BOOL[1] = 0.0;
        }

        denom = (int32_T)BOOL[0] + (int32_T)BOOL[1];
        if (denom > 0) {
          w_avg = (*rtu_vWheelFL * BOOL[0] + *rtu_vWheelFR * BOOL[1]) / (real_T)
            denom;
        } else {
          BOOL[0] = *rtu_vWheelFL;
          BOOL[1] = *rtu_vWheelFR;
          BOOL[2] = *rtu_vWheelRL;
          BOOL[3] = *rtu_vWheelRR;
          w_avg = maximum_xTpTd9Be(BOOL);
        }
      }
    }
  } else if (*rtu_aSteeringAngle > 0.0) {
    if (*rtu_gLongitudinalIMU == 0.0) {
      w_avg = (*rtu_vWheelFR + *rtu_vWheelRR) / 2.0;
    } else if (*rtu_gLongitudinalIMU > 0.0) {
      w_avg = fmin(*rtu_vWheelFR, *rtu_vWheelRR);
    } else {
      w_avg = fmax(*rtu_vWheelFR, *rtu_vWheelRR);
    }
  } else if (*rtu_gLongitudinalIMU == 0.0) {
    w_avg = (*rtu_vWheelFL + *rtu_vWheelRL) / 2.0;
  } else if (*rtu_gLongitudinalIMU > 0.0) {
    w_avg = fmin(*rtu_vWheelFL, *rtu_vWheelRL);
  } else {
    w_avg = fmax(*rtu_vWheelFL, *rtu_vWheelRL);
  }

  if (R_i > 3.0) {
    R_i = fabs(*rtu_gLateralIMU);
    if (R_i > 1.0E-6) {
      R_i = w_avg * w_avg / R_i;
      w_avg *= (R_i - 0.615) / R_i;
    }
  }

  /* End of MATLAB Function: '<Root>/MATLAB Function' */

  /* RateLimiter: '<Root>/Rate Limiter' */
  R_i = w_avg - localDW->PrevY;
  if (R_i > 4.316) {
    w_avg = localDW->PrevY + 4.316;
  } else if (R_i < -4.316) {
    w_avg = localDW->PrevY - 4.316;
  }

  localDW->PrevY = w_avg;

  /* End of RateLimiter: '<Root>/Rate Limiter' */

  /* Switch: '<Root>/Switch' incorporates:
   *  Constant: '<Root>/Constant'
   */
  if (*rtu_vWheelRL > 0.5) {
    *rty_vChassis = w_avg;
  } else {
    *rty_vChassis = 0.0;
  }

  /* End of Switch: '<Root>/Switch' */

  /* Sum: '<S2>/Add' incorporates:
   *  Constant: '<S2>/Constant5'
   *  Memory: '<S2>/Memory'
   *  Product: '<S2>/Multiply'
   */
  *rty_sChassis = *rty_vChassis * 0.001 + localDW->Memory_PreviousInput;

  /* Update for Memory: '<S2>/Memory' */
  localDW->Memory_PreviousInput = *rty_sChassis;
}

/* Model initialize function */
void vChassis_initialize(const char_T **rt_errorStatus, RT_MODEL_vChassis_T *
  const vChassis_M)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(vChassis_M, rt_errorStatus);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
