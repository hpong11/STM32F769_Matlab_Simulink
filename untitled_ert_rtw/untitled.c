/*
 * File: untitled.c
 *
 * Code generated for Simulink model 'untitled'.
 *
 * Model version                  : 1.0
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Fri Nov 29 11:05:07 2019
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "untitled.h"
#include "untitled_private.h"

/* Block states (default storage) */
DW_untitled_T untitled_DW;

/* Real-time model */
RT_MODEL_untitled_T untitled_M_;
RT_MODEL_untitled_T *const untitled_M = &untitled_M_;

/* Forward declaration for local functions */
static void untitled_SystemCore_release(const mbed_DigitalWrite_untitled_T *obj);
static void untitled_SystemCore_delete(const mbed_DigitalWrite_untitled_T *obj);
static void matlabCodegenHandle_matlabCodeg(mbed_DigitalWrite_untitled_T *obj);
static void untitled_SystemCore_release(const mbed_DigitalWrite_untitled_T *obj)
{
  if ((obj->isInitialized == 1) && obj->isSetupComplete) {
    MW_digitalIO_close(obj->MW_DIGITALIO_HANDLE);
  }
}

static void untitled_SystemCore_delete(const mbed_DigitalWrite_untitled_T *obj)
{
  untitled_SystemCore_release(obj);
}

static void matlabCodegenHandle_matlabCodeg(mbed_DigitalWrite_untitled_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    untitled_SystemCore_delete(obj);
  }
}

/* Model step function */
void untitled_step(void)
{
  real_T rtb_PulseGenerator;

  /* DiscretePulseGenerator: '<Root>/Pulse Generator' */
  rtb_PulseGenerator = (untitled_DW.clockTickCounter <
                        untitled_P.PulseGenerator_Duty) &&
    (untitled_DW.clockTickCounter >= 0) ? untitled_P.PulseGenerator_Amp : 0.0;
  if (untitled_DW.clockTickCounter >= untitled_P.PulseGenerator_Period - 1.0) {
    untitled_DW.clockTickCounter = 0;
  } else {
    untitled_DW.clockTickCounter++;
  }

  /* End of DiscretePulseGenerator: '<Root>/Pulse Generator' */

  /* MATLABSystem: '<Root>/Digital Write' */
  MW_digitalIO_write(untitled_DW.obj.MW_DIGITALIO_HANDLE, rtb_PulseGenerator !=
                     0.0);
}

/* Model initialize function */
void untitled_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(untitled_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&untitled_DW, 0,
                sizeof(DW_untitled_T));

  {
    mbed_DigitalWrite_untitled_T *obj;
    uint32_T pinname;

    /* Start for DiscretePulseGenerator: '<Root>/Pulse Generator' */
    untitled_DW.clockTickCounter = 0;

    /* Start for MATLABSystem: '<Root>/Digital Write' */
    untitled_DW.obj.matlabCodegenIsDeleted = true;
    untitled_DW.obj.isInitialized = 0;
    untitled_DW.obj.matlabCodegenIsDeleted = false;
    obj = &untitled_DW.obj;
    untitled_DW.obj.isSetupComplete = false;
    untitled_DW.obj.isInitialized = 1;
    pinname = D7;
    obj->MW_DIGITALIO_HANDLE = MW_digitalIO_open(pinname, 1);
    untitled_DW.obj.isSetupComplete = true;
  }
}

/* Model terminate function */
void untitled_terminate(void)
{
  /* Terminate for MATLABSystem: '<Root>/Digital Write' */
  matlabCodegenHandle_matlabCodeg(&untitled_DW.obj);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
