/*
 * File: TestPortF769.c
 *
 * Code generated for Simulink model 'TestPortF769'.
 *
 * Model version                  : 1.8
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Mon Dec  9 11:36:21 2019
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "TestPortF769.h"
#include "TestPortF769_private.h"

/* Block states (default storage) */
DW_TestPortF769_T TestPortF769_DW;

/* Real-time model */
RT_MODEL_TestPortF769_T TestPortF769_M_;
RT_MODEL_TestPortF769_T *const TestPortF769_M = &TestPortF769_M_;

/* Forward declaration for local functions */
static void TestPortF_SystemCore_release_mv(const
  stm32f769idiscovery_AudioInpu_T *obj);
static void TestPortF7_SystemCore_delete_mv(const
  stm32f769idiscovery_AudioInpu_T *obj);
static void matlabCodegenHandle_matlabCo_mv(stm32f769idiscovery_AudioInpu_T *obj);
static void TestPortF769_SystemCore_release(const
  mbed_DigitalWrite_TestPortF76_T *obj);
static void TestPortF769_SystemCore_delete(const mbed_DigitalWrite_TestPortF76_T
  *obj);
static void matlabCodegenHandle_matlabCodeg(mbed_DigitalWrite_TestPortF76_T *obj);
static void TestPortF_SystemCore_release_mv(const
  stm32f769idiscovery_AudioInpu_T *obj)
{
  if ((obj->isInitialized == 1) && obj->isSetupComplete) {
    BSP_AUDIO_IN_Stop();
  }
}

static void TestPortF7_SystemCore_delete_mv(const
  stm32f769idiscovery_AudioInpu_T *obj)
{
  TestPortF_SystemCore_release_mv(obj);
}

static void matlabCodegenHandle_matlabCo_mv(stm32f769idiscovery_AudioInpu_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    TestPortF7_SystemCore_delete_mv(obj);
  }
}

static void TestPortF769_SystemCore_release(const
  mbed_DigitalWrite_TestPortF76_T *obj)
{
  if ((obj->isInitialized == 1) && obj->isSetupComplete) {
    MW_digitalIO_close(obj->MW_DIGITALIO_HANDLE);
  }
}

static void TestPortF769_SystemCore_delete(const mbed_DigitalWrite_TestPortF76_T
  *obj)
{
  TestPortF769_SystemCore_release(obj);
}

static void matlabCodegenHandle_matlabCodeg(mbed_DigitalWrite_TestPortF76_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    TestPortF769_SystemCore_delete(obj);
  }
}

/* Model step function */
void TestPortF769_step(void)
{
  int32_T rtb_y_f;

  /* MATLAB Function: '<Root>/MATLAB Function' incorporates:
   *  Memory: '<Root>/Memory'
   */
  rtb_y_f = !(TestPortF769_DW.Memory_PreviousInput == 1.0);

  /* MATLABSystem: '<Root>/Digital Write1' incorporates:
   *  MATLAB Function: '<Root>/MATLAB Function1'
   */
  MW_digitalIO_write(TestPortF769_DW.obj_g.MW_DIGITALIO_HANDLE, false);

  /* MATLABSystem: '<Root>/Digital Write' */
  MW_digitalIO_write(TestPortF769_DW.obj_p.MW_DIGITALIO_HANDLE, rtb_y_f != 0);

  /* Update for Memory: '<Root>/Memory' */
  TestPortF769_DW.Memory_PreviousInput = rtb_y_f;
}

/* Model initialize function */
void TestPortF769_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(TestPortF769_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&TestPortF769_DW, 0,
                sizeof(DW_TestPortF769_T));

  {
    uint16_T InputDeviceConst;
    mbed_DigitalWrite_TestPortF76_T *obj;
    uint32_T pinname;

    /* Start for MATLABSystem: '<Root>/Audio Input' */
    TestPortF769_DW.obj.matlabCodegenIsDeleted = true;
    TestPortF769_DW.obj.isInitialized = 0;
    TestPortF769_DW.obj.matlabCodegenIsDeleted = false;
    TestPortF769_DW.obj.isSetupComplete = false;
    TestPortF769_DW.obj.isInitialized = 1;
    InputDeviceConst = INPUT_DEVICE_ANALOG_MIC;
    BSP_AUDIO_IN_InitEx(InputDeviceConst, 16000U, 16U, 2U);
    MW_BSP_AUDIO_IN_Record(TestPortF769_DW.obj.OutputBuffer, 400U);
    TestPortF769_DW.obj.isSetupComplete = true;

    /* Start for MATLABSystem: '<Root>/Digital Write1' */
    TestPortF769_DW.obj_g.matlabCodegenIsDeleted = true;
    TestPortF769_DW.obj_g.isInitialized = 0;
    TestPortF769_DW.obj_g.matlabCodegenIsDeleted = false;
    obj = &TestPortF769_DW.obj_g;
    TestPortF769_DW.obj_g.isSetupComplete = false;
    TestPortF769_DW.obj_g.isInitialized = 1;
    pinname = D8;
    obj->MW_DIGITALIO_HANDLE = MW_digitalIO_open(pinname, 1);
    TestPortF769_DW.obj_g.isSetupComplete = true;

    /* Start for MATLABSystem: '<Root>/Digital Write' */
    TestPortF769_DW.obj_p.matlabCodegenIsDeleted = true;
    TestPortF769_DW.obj_p.isInitialized = 0;
    TestPortF769_DW.obj_p.matlabCodegenIsDeleted = false;
    obj = &TestPortF769_DW.obj_p;
    TestPortF769_DW.obj_p.isSetupComplete = false;
    TestPortF769_DW.obj_p.isInitialized = 1;
    pinname = D7;
    obj->MW_DIGITALIO_HANDLE = MW_digitalIO_open(pinname, 1);
    TestPortF769_DW.obj_p.isSetupComplete = true;

    /* InitializeConditions for Memory: '<Root>/Memory' */
    TestPortF769_DW.Memory_PreviousInput =
      TestPortF769_P.Memory_InitialCondition;
  }
}

/* Model terminate function */
void TestPortF769_terminate(void)
{
  /* Terminate for MATLABSystem: '<Root>/Audio Input' */
  matlabCodegenHandle_matlabCo_mv(&TestPortF769_DW.obj);

  /* Terminate for MATLABSystem: '<Root>/Digital Write1' */
  matlabCodegenHandle_matlabCodeg(&TestPortF769_DW.obj_g);

  /* Terminate for MATLABSystem: '<Root>/Digital Write' */
  matlabCodegenHandle_matlabCodeg(&TestPortF769_DW.obj_p);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
