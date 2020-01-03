/*
 * File: stm32f746gdiscovery_gettingstarted.c
 *
 * Code generated for Simulink model 'stm32f746gdiscovery_gettingstarted'.
 *
 * Model version                  : 1.25
 * Simulink Coder version         : 8.13 (R2017b) 24-Jul-2017
 * C/C++ source code generated on : Tue Aug 21 12:05:43 2018
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "stm32f746gdiscovery_gettingstarted.h"
#include "stm32f746gdiscovery_gettingstarted_private.h"

/* Block states (auto storage) */
DW_stm32f746gdiscovery_gettin_T stm32f746gdiscovery_gettings_DW;

/* Real-time model */
RT_MODEL_stm32f746gdiscovery__T stm32f746gdiscovery_gettings_M_;
RT_MODEL_stm32f746gdiscovery__T *const stm32f746gdiscovery_gettings_M =
  &stm32f746gdiscovery_gettings_M_;

/* Model step function */
void stm32f746gdiscovery_gettingstarted_step(void)
{
  real_T rtb_PulseGenerator;

  /* DiscretePulseGenerator: '<Root>/Pulse Generator' */
  rtb_PulseGenerator = (stm32f746gdiscovery_gettings_DW.clockTickCounter <
                        stm32f746gdiscovery_gettingst_P.PulseGenerator_Duty) &&
    (stm32f746gdiscovery_gettings_DW.clockTickCounter >= 0) ?
    stm32f746gdiscovery_gettingst_P.PulseGenerator_Amp : 0.0;
  if (stm32f746gdiscovery_gettings_DW.clockTickCounter >=
      stm32f746gdiscovery_gettingst_P.PulseGenerator_Period - 1.0) {
    stm32f746gdiscovery_gettings_DW.clockTickCounter = 0;
  } else {
    stm32f746gdiscovery_gettings_DW.clockTickCounter++;
  }

  /* End of DiscretePulseGenerator: '<Root>/Pulse Generator' */

  /* Start for MATLABSystem: '<Root>/Digital Write' */
  MW_digitalIO_write(stm32f746gdiscovery_gettings_DW.obj.MW_DIGITALIO_HANDLE,
                     rtb_PulseGenerator != 0.0);

  /* Start for MATLABSystem: '<Root>/Digital Write1' */
  MW_digitalIO_write(stm32f746gdiscovery_gettings_DW.obj_j.MW_DIGITALIO_HANDLE,
                     rtb_PulseGenerator != 0.0);

  /* Start for MATLABSystem: '<Root>/Digital Write2' */
  MW_digitalIO_write(stm32f746gdiscovery_gettings_DW.obj_m.MW_DIGITALIO_HANDLE,
                     rtb_PulseGenerator != 0.0);
}

/* Model initialize function */
void stm32f746gdiscovery_gettingstarted_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(stm32f746gdiscovery_gettings_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&stm32f746gdiscovery_gettings_DW, 0,
                sizeof(DW_stm32f746gdiscovery_gettin_T));

  {
    mbed_DigitalWrite_stm32f746gd_T *obj;
    uint32_T pinname;

    /* Start for DiscretePulseGenerator: '<Root>/Pulse Generator' */
    stm32f746gdiscovery_gettings_DW.clockTickCounter = 0;

    /* Start for MATLABSystem: '<Root>/Digital Write' */
    stm32f746gdiscovery_gettings_DW.obj.isInitialized = 0;
    obj = &stm32f746gdiscovery_gettings_DW.obj;
    stm32f746gdiscovery_gettings_DW.obj.isInitialized = 1;
    pinname = PA_12;
    obj->MW_DIGITALIO_HANDLE = MW_digitalIO_open(pinname, 1U);

    /* Start for MATLABSystem: '<Root>/Digital Write1' */
    stm32f746gdiscovery_gettings_DW.obj_j.isInitialized = 0;
    obj = &stm32f746gdiscovery_gettings_DW.obj_j;
    stm32f746gdiscovery_gettings_DW.obj_j.isInitialized = 1;
    pinname = PJ_5;
    obj->MW_DIGITALIO_HANDLE = MW_digitalIO_open(pinname, 1U);

    /* Start for MATLABSystem: '<Root>/Digital Write2' */
    stm32f746gdiscovery_gettings_DW.obj_m.isInitialized = 0;
    obj = &stm32f746gdiscovery_gettings_DW.obj_m;
    stm32f746gdiscovery_gettings_DW.obj_m.isInitialized = 1;
    pinname = PJ_13;
    obj->MW_DIGITALIO_HANDLE = MW_digitalIO_open(pinname, 1U);
  }
}

/* Model terminate function */
void stm32f746gdiscovery_gettingstarted_terminate(void)
{
  /* Start for MATLABSystem: '<Root>/Digital Write' */
  if (stm32f746gdiscovery_gettings_DW.obj.isInitialized == 1) {
    stm32f746gdiscovery_gettings_DW.obj.isInitialized = 2;
    MW_digitalIO_close(stm32f746gdiscovery_gettings_DW.obj.MW_DIGITALIO_HANDLE);
  }

  /* End of Start for MATLABSystem: '<Root>/Digital Write' */

  /* Start for MATLABSystem: '<Root>/Digital Write1' */
  if (stm32f746gdiscovery_gettings_DW.obj_j.isInitialized == 1) {
    stm32f746gdiscovery_gettings_DW.obj_j.isInitialized = 2;
    MW_digitalIO_close(stm32f746gdiscovery_gettings_DW.obj_j.MW_DIGITALIO_HANDLE);
  }

  /* End of Start for MATLABSystem: '<Root>/Digital Write1' */

  /* Start for MATLABSystem: '<Root>/Digital Write2' */
  if (stm32f746gdiscovery_gettings_DW.obj_m.isInitialized == 1) {
    stm32f746gdiscovery_gettings_DW.obj_m.isInitialized = 2;
    MW_digitalIO_close(stm32f746gdiscovery_gettings_DW.obj_m.MW_DIGITALIO_HANDLE);
  }

  /* End of Start for MATLABSystem: '<Root>/Digital Write2' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
