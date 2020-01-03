/*
 * File: Test_switch.c
 *
 * Code generated for Simulink model 'Test_switch'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Wed Apr 24 17:25:51 2019
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Test_switch.h"
#include "Test_switch_private.h"

/* Block signals (default storage) */
B_Test_switch_T Test_switch_B;

/* Block states (default storage) */
DW_Test_switch_T Test_switch_DW;

/* Real-time model */
RT_MODEL_Test_switch_T Test_switch_M_;
RT_MODEL_Test_switch_T *const Test_switch_M = &Test_switch_M_;

/* Forward declaration for local functions */
static void Test_switch_SystemCore_release(const mbed_DigitalWrite_Test_switch_T
  *obj);
static void Test_switch_SystemCore_delete(const mbed_DigitalWrite_Test_switch_T *
  obj);
static void matlabCodegenHandle_matlabCodeg(mbed_DigitalWrite_Test_switch_T *obj);
static void Test_switc_SystemCore_release_d(const mbed_DigitalRead_Test_switch_T
  *obj);
static void Test_switch_SystemCore_delete_d(const mbed_DigitalRead_Test_switch_T
  *obj);
static void matlabCodegenHandle_matlabCod_d(mbed_DigitalRead_Test_switch_T *obj);
static void Test_switch_SystemCore_release(const mbed_DigitalWrite_Test_switch_T
  *obj)
{
  if ((obj->isInitialized == 1) && obj->isSetupComplete) {
    MW_digitalIO_close(obj->MW_DIGITALIO_HANDLE);
  }
}

static void Test_switch_SystemCore_delete(const mbed_DigitalWrite_Test_switch_T *
  obj)
{
  Test_switch_SystemCore_release(obj);
}

static void matlabCodegenHandle_matlabCodeg(mbed_DigitalWrite_Test_switch_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    Test_switch_SystemCore_delete(obj);
  }
}

static void Test_switc_SystemCore_release_d(const mbed_DigitalRead_Test_switch_T
  *obj)
{
  if ((obj->isInitialized == 1) && obj->isSetupComplete) {
    MW_digitalIO_close(obj->MW_DIGITALIO_HANDLE);
  }
}

static void Test_switch_SystemCore_delete_d(const mbed_DigitalRead_Test_switch_T
  *obj)
{
  Test_switc_SystemCore_release_d(obj);
}

static void matlabCodegenHandle_matlabCod_d(mbed_DigitalRead_Test_switch_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    Test_switch_SystemCore_delete_d(obj);
  }
}

/* Model step function */
void Test_switch_step(void)
{
  /* Constant: '<Root>/Constant' */
  Test_switch_B.Constant = Test_switch_P.Constant_Value;

  /* MATLABSystem: '<Root>/Digital Write' */
  MW_digitalIO_write(Test_switch_DW.obj_p.MW_DIGITALIO_HANDLE,
                     Test_switch_B.Constant != 0.0);

  /* MATLABSystem: '<Root>/Digital Read' */
  if (Test_switch_DW.obj.SampleTime != Test_switch_P.DigitalRead_SampleTime) {
    Test_switch_DW.obj.SampleTime = Test_switch_P.DigitalRead_SampleTime;
  }

  Test_switch_B.DigitalRead = MW_digitalIO_read
    (Test_switch_DW.obj.MW_DIGITALIO_HANDLE);

  /* End of MATLABSystem: '<Root>/Digital Read' */

  /* MATLABSystem: '<Root>/Digital Write1' */
  MW_digitalIO_write(Test_switch_DW.obj_j.MW_DIGITALIO_HANDLE,
                     Test_switch_B.DigitalRead);

  /* External mode */
  rtExtModeUploadCheckTrigger(1);

  {                                    /* Sample time: [0.1s, 0.0s] */
    rtExtModeUpload(0, (real_T)Test_switch_M->Timing.taskTime0);
  }

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.1s, 0.0s] */
    if ((rtmGetTFinal(Test_switch_M)!=-1) &&
        !((rtmGetTFinal(Test_switch_M)-Test_switch_M->Timing.taskTime0) >
          Test_switch_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(Test_switch_M, "Simulation finished");
    }

    if (rtmGetStopRequested(Test_switch_M)) {
      rtmSetErrorStatus(Test_switch_M, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  Test_switch_M->Timing.taskTime0 =
    (++Test_switch_M->Timing.clockTick0) * Test_switch_M->Timing.stepSize0;
}

/* Model initialize function */
void Test_switch_initialize(void)
{
  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)Test_switch_M, 0,
                sizeof(RT_MODEL_Test_switch_T));
  rtmSetTFinal(Test_switch_M, -1);
  Test_switch_M->Timing.stepSize0 = 0.1;

  /* External mode info */
  Test_switch_M->Sizes.checksums[0] = (1966189376U);
  Test_switch_M->Sizes.checksums[1] = (2258523139U);
  Test_switch_M->Sizes.checksums[2] = (3548844984U);
  Test_switch_M->Sizes.checksums[3] = (2386756406U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[4];
    Test_switch_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    systemRan[2] = &rtAlwaysEnabled;
    systemRan[3] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(Test_switch_M->extModeInfo,
      &Test_switch_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(Test_switch_M->extModeInfo,
                        Test_switch_M->Sizes.checksums);
    rteiSetTPtr(Test_switch_M->extModeInfo, rtmGetTPtr(Test_switch_M));
  }

  /* block I/O */
  (void) memset(((void *) &Test_switch_B), 0,
                sizeof(B_Test_switch_T));

  /* states (dwork) */
  (void) memset((void *)&Test_switch_DW, 0,
                sizeof(DW_Test_switch_T));

  {
    mbed_DigitalWrite_Test_switch_T *obj;
    uint32_T pinname;
    mbed_DigitalRead_Test_switch_T *obj_0;

    /* Start for MATLABSystem: '<Root>/Digital Write' */
    Test_switch_DW.obj_p.matlabCodegenIsDeleted = true;
    Test_switch_DW.obj_p.isInitialized = 0;
    Test_switch_DW.obj_p.matlabCodegenIsDeleted = false;
    obj = &Test_switch_DW.obj_p;
    Test_switch_DW.obj_p.isSetupComplete = false;
    Test_switch_DW.obj_p.isInitialized = 1;
    pinname = PA_12;
    obj->MW_DIGITALIO_HANDLE = MW_digitalIO_open(pinname, 1);
    Test_switch_DW.obj_p.isSetupComplete = true;

    /* Start for MATLABSystem: '<Root>/Digital Read' */
    Test_switch_DW.obj.matlabCodegenIsDeleted = true;
    Test_switch_DW.obj.isInitialized = 0;
    Test_switch_DW.obj.matlabCodegenIsDeleted = false;
    Test_switch_DW.obj.SampleTime = Test_switch_P.DigitalRead_SampleTime;
    obj_0 = &Test_switch_DW.obj;
    Test_switch_DW.obj.isSetupComplete = false;
    Test_switch_DW.obj.isInitialized = 1;
    pinname = PA_0;
    obj_0->MW_DIGITALIO_HANDLE = MW_digitalIO_open(pinname, 0);
    Test_switch_DW.obj.isSetupComplete = true;

    /* Start for MATLABSystem: '<Root>/Digital Write1' */
    Test_switch_DW.obj_j.matlabCodegenIsDeleted = true;
    Test_switch_DW.obj_j.isInitialized = 0;
    Test_switch_DW.obj_j.matlabCodegenIsDeleted = false;
    obj = &Test_switch_DW.obj_j;
    Test_switch_DW.obj_j.isSetupComplete = false;
    Test_switch_DW.obj_j.isInitialized = 1;
    pinname = PJ_13;
    obj->MW_DIGITALIO_HANDLE = MW_digitalIO_open(pinname, 1);
    Test_switch_DW.obj_j.isSetupComplete = true;
  }
}

/* Model terminate function */
void Test_switch_terminate(void)
{
  /* Terminate for MATLABSystem: '<Root>/Digital Write' */
  matlabCodegenHandle_matlabCodeg(&Test_switch_DW.obj_p);

  /* Terminate for MATLABSystem: '<Root>/Digital Read' */
  matlabCodegenHandle_matlabCod_d(&Test_switch_DW.obj);

  /* Terminate for MATLABSystem: '<Root>/Digital Write1' */
  matlabCodegenHandle_matlabCodeg(&Test_switch_DW.obj_j);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
