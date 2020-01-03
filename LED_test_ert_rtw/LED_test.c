/*
 * File: LED_test.c
 *
 * Code generated for Simulink model 'LED_test'.
 *
 * Model version                  : 1.19
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Wed Apr 24 16:59:02 2019
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "LED_test.h"
#include "LED_test_private.h"

/* Block states (default storage) */
DW_LED_test_T LED_test_DW;

/* Real-time model */
RT_MODEL_LED_test_T LED_test_M_;
RT_MODEL_LED_test_T *const LED_test_M = &LED_test_M_;

/* Forward declaration for local functions */
static void LED_test_SystemCore_release(const mbed_DigitalWrite_LED_test_T *obj);
static void LED_test_SystemCore_delete(const mbed_DigitalWrite_LED_test_T *obj);
static void matlabCodegenHandle_matlabCodeg(mbed_DigitalWrite_LED_test_T *obj);
static void LED_test_SystemCore_release(const mbed_DigitalWrite_LED_test_T *obj)
{
  if ((obj->isInitialized == 1) && obj->isSetupComplete) {
    MW_digitalIO_close(obj->MW_DIGITALIO_HANDLE);
  }
}

static void LED_test_SystemCore_delete(const mbed_DigitalWrite_LED_test_T *obj)
{
  LED_test_SystemCore_release(obj);
}

static void matlabCodegenHandle_matlabCodeg(mbed_DigitalWrite_LED_test_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    LED_test_SystemCore_delete(obj);
  }
}

/* Model step function */
void LED_test_step(void)
{
  /* MATLABSystem: '<Root>/Digital Write' incorporates:
   *  Constant: '<Root>/Constant'
   */
  MW_digitalIO_write(LED_test_DW.obj.MW_DIGITALIO_HANDLE,
                     LED_test_P.Constant_Value);
}

/* Model initialize function */
void LED_test_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(LED_test_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&LED_test_DW, 0,
                sizeof(DW_LED_test_T));

  {
    mbed_DigitalWrite_LED_test_T *obj;
    uint32_T pinname;

    /* Start for MATLABSystem: '<Root>/Digital Write' */
    LED_test_DW.obj.matlabCodegenIsDeleted = true;
    LED_test_DW.obj.isInitialized = 0;
    LED_test_DW.obj.matlabCodegenIsDeleted = false;
    obj = &LED_test_DW.obj;
    LED_test_DW.obj.isSetupComplete = false;
    LED_test_DW.obj.isInitialized = 1;
    pinname = PJ_13;
    obj->MW_DIGITALIO_HANDLE = MW_digitalIO_open(pinname, 1);
    LED_test_DW.obj.isSetupComplete = true;
  }
}

/* Model terminate function */
void LED_test_terminate(void)
{
  /* Terminate for MATLABSystem: '<Root>/Digital Write' */
  matlabCodegenHandle_matlabCodeg(&LED_test_DW.obj);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
