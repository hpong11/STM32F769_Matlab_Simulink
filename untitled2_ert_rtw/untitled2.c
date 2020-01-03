/*
 * File: untitled2.c
 *
 * Code generated for Simulink model 'untitled2'.
 *
 * Model version                  : 1.4
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Wed Apr 24 16:57:27 2019
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "untitled2.h"
#include "untitled2_private.h"

/* Block states (default storage) */
DW_untitled2_T untitled2_DW;

/* Real-time model */
RT_MODEL_untitled2_T untitled2_M_;
RT_MODEL_untitled2_T *const untitled2_M = &untitled2_M_;

/* Forward declaration for local functions */
static void untitled2_SystemCore_release(const mbed_DigitalWrite_untitled2_T
  *obj);
static void untitled2_SystemCore_delete(const mbed_DigitalWrite_untitled2_T *obj);
static void matlabCodegenHandle_matlabCodeg(mbed_DigitalWrite_untitled2_T *obj);
static void untitled2_SystemCore_release(const mbed_DigitalWrite_untitled2_T
  *obj)
{
  if ((obj->isInitialized == 1) && obj->isSetupComplete) {
    MW_digitalIO_close(obj->MW_DIGITALIO_HANDLE);
  }
}

static void untitled2_SystemCore_delete(const mbed_DigitalWrite_untitled2_T *obj)
{
  untitled2_SystemCore_release(obj);
}

static void matlabCodegenHandle_matlabCodeg(mbed_DigitalWrite_untitled2_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    untitled2_SystemCore_delete(obj);
  }
}

/* Model step function */
void untitled2_step(void)
{
  /* MATLABSystem: '<Root>/Digital Write3' incorporates:
   *  Constant: '<Root>/Constant'
   */
  MW_digitalIO_write(untitled2_DW.obj.MW_DIGITALIO_HANDLE,
                     untitled2_P.Constant_Value != 0.0);
}

/* Model initialize function */
void untitled2_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(untitled2_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&untitled2_DW, 0,
                sizeof(DW_untitled2_T));

  {
    mbed_DigitalWrite_untitled2_T *obj;
    uint32_T pinname;

    /* Start for MATLABSystem: '<Root>/Digital Write3' */
    untitled2_DW.obj.matlabCodegenIsDeleted = true;
    untitled2_DW.obj.isInitialized = 0;
    untitled2_DW.obj.matlabCodegenIsDeleted = false;
    obj = &untitled2_DW.obj;
    untitled2_DW.obj.isSetupComplete = false;
    untitled2_DW.obj.isInitialized = 1;
    pinname = PJ_13;
    obj->MW_DIGITALIO_HANDLE = MW_digitalIO_open(pinname, 1);
    untitled2_DW.obj.isSetupComplete = true;
  }
}

/* Model terminate function */
void untitled2_terminate(void)
{
  /* Terminate for MATLABSystem: '<Root>/Digital Write3' */
  matlabCodegenHandle_matlabCodeg(&untitled2_DW.obj);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
