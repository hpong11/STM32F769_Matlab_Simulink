/*
 * File: Sine_test.c
 *
 * Code generated for Simulink model 'Sine_test'.
 *
 * Model version                  : 1.5
 * Simulink Coder version         : 8.14 (R2018a) 06-Feb-2018
 * C/C++ source code generated on : Mon Sep 10 14:17:17 2018
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Sine_test.h"
#include "Sine_test_private.h"
#include "Sine_test_dt.h"
#define Sine_test_Volume               (65.0)

/* Block signals (default storage) */
B_Sine_test_T Sine_test_B;

/* Block states (default storage) */
DW_Sine_test_T Sine_test_DW;

/* Real-time model */
RT_MODEL_Sine_test_T Sine_test_M_;
RT_MODEL_Sine_test_T *const Sine_test_M = &Sine_test_M_;

/* Forward declaration for local functions */
static void SystemProp_matlabCodegenSetAn_p(stm32f769idiscovery_AudioInpu_T *obj,
  boolean_T value);
static void Sine_test_SystemCore_release_p(const stm32f769idiscovery_AudioInpu_T
  *obj);
static void Sine_test_SystemCore_delete_p(const stm32f769idiscovery_AudioInpu_T *
  obj);
static void matlabCodegenHandle_matlabCod_p(stm32f769idiscovery_AudioInpu_T *obj);
static void SystemProp_matlabCodegenSetAnyP(stm32f769idiscovery_AudioOutp_T *obj,
  boolean_T value);
static void Sine_test_SystemCore_release(const stm32f769idiscovery_AudioOutp_T
  *obj);
static void Sine_test_SystemCore_delete(const stm32f769idiscovery_AudioOutp_T
  *obj);
static void matlabCodegenHandle_matlabCodeg(stm32f769idiscovery_AudioOutp_T *obj);
static void SystemProp_matlabCodegenSetAn_p(stm32f769idiscovery_AudioInpu_T *obj,
  boolean_T value)
{
  obj->matlabCodegenIsDeleted = value;
}

static void Sine_test_SystemCore_release_p(const stm32f769idiscovery_AudioInpu_T
  *obj)
{
  if ((obj->isInitialized == 1) && obj->isSetupComplete) {
    BSP_AUDIO_IN_Stop();
  }
}

static void Sine_test_SystemCore_delete_p(const stm32f769idiscovery_AudioInpu_T *
  obj)
{
  Sine_test_SystemCore_release_p(obj);
}

static void matlabCodegenHandle_matlabCod_p(stm32f769idiscovery_AudioInpu_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    SystemProp_matlabCodegenSetAn_p(obj, true);
    Sine_test_SystemCore_delete_p(obj);
  }
}

static void SystemProp_matlabCodegenSetAnyP(stm32f769idiscovery_AudioOutp_T *obj,
  boolean_T value)
{
  obj->matlabCodegenIsDeleted = value;
}

static void Sine_test_SystemCore_release(const stm32f769idiscovery_AudioOutp_T
  *obj)
{
  uint32_T ShutDownConst;
  if ((obj->isInitialized == 1) && obj->isSetupComplete) {
    ShutDownConst = CODEC_PDWN_SW;
    BSP_AUDIO_OUT_Stop(ShutDownConst);
  }
}

static void Sine_test_SystemCore_delete(const stm32f769idiscovery_AudioOutp_T
  *obj)
{
  Sine_test_SystemCore_release(obj);
}

static void matlabCodegenHandle_matlabCodeg(stm32f769idiscovery_AudioOutp_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    SystemProp_matlabCodegenSetAnyP(obj, true);
    Sine_test_SystemCore_delete(obj);
  }
}

/* Model step function */
void Sine_test_step(void)
{
  real32_T updateVal;
  int32_T i;
  int32_T j;
  real32_T rtb_SineWave;

  /* MATLABSystem: '<Root>/Audio Input' */
  for (j = 0; j < 2; j++) {
    for (i = 0; i < 1024; i++) {
      Sine_test_B.AudioInput[i + (j << 10)] = Sine_test_DW.obj.OutputBuffer[(i <<
        1) + j];
    }
  }

  /* End of MATLABSystem: '<Root>/Audio Input' */

  /* S-Function (sdspsine2): '<Root>/Sine Wave' */
  updateVal = Sine_test_P.SineWave_Frequency * 0.000785398181F;
  for (j = 0; j < 1024; j++) {
    /* SignalConversion: '<Root>/ConcatBufferAtMatrix ConcatenateIn1' incorporates:
     *  Selector: '<Root>/Selector'
     */
    Sine_test_B.MatrixConcatenate[j] = Sine_test_B.AudioInput[j];

    /* S-Function (sdspsine2): '<Root>/Sine Wave' */
    rtb_SineWave = Sine_test_P.SineWave_Amplitude * arm_sin_f32
      (Sine_test_DW.SineWave_AccFreqNorm);

    /* Update accumulated normalized freq value
       for next sample.  Keep in range [0 2*pi) */
    Sine_test_DW.SineWave_AccFreqNorm += updateVal;
    if (Sine_test_DW.SineWave_AccFreqNorm >= 6.28318548F) {
      Sine_test_DW.SineWave_AccFreqNorm -= 6.28318548F;
    } else {
      if (Sine_test_DW.SineWave_AccFreqNorm < 0.0F) {
        Sine_test_DW.SineWave_AccFreqNorm += 6.28318548F;
      }
    }

    /* DataTypeConversion: '<Root>/Data Type Conversion' */
    rtb_SineWave = (real32_T)floor(rtb_SineWave);
    if (rtIsNaNF(rtb_SineWave) || rtIsInfF(rtb_SineWave)) {
      rtb_SineWave = 0.0F;
    } else {
      rtb_SineWave = (real32_T)fmod(rtb_SineWave, 65536.0);
    }

    Sine_test_B.MatrixConcatenate[j + 1024] = (int16_T)(rtb_SineWave < 0.0F ?
      (int32_T)(int16_T)-(int16_T)(uint16_T)-rtb_SineWave : (int32_T)(int16_T)
      (uint16_T)rtb_SineWave);

    /* End of DataTypeConversion: '<Root>/Data Type Conversion' */
  }

  /* MinMax: '<Root>/MinMax' incorporates:
   *  Selector: '<Root>/Selector'
   */
  Sine_test_B.MinMax = Sine_test_B.AudioInput[0];
  for (j = 0; j < 1023; j++) {
    if (!(Sine_test_B.MinMax > Sine_test_B.AudioInput[j + 1])) {
      Sine_test_B.MinMax = Sine_test_B.AudioInput[j + 1];
    }
  }

  /* End of MinMax: '<Root>/MinMax' */

  /* MinMax: '<Root>/MinMax1' incorporates:
   *  Selector: '<Root>/Selector'
   */
  Sine_test_B.MinMax1 = Sine_test_B.AudioInput[0];
  for (j = 0; j < 1023; j++) {
    if (!(Sine_test_B.MinMax1 < Sine_test_B.AudioInput[j + 1])) {
      Sine_test_B.MinMax1 = Sine_test_B.AudioInput[j + 1];
    }
  }

  /* End of MinMax: '<Root>/MinMax1' */

  /* MATLABSystem: '<Root>/Audio Output' */
  for (j = 0; j < 1024; j++) {
    Sine_test_DW.obj_b.CopyBuffer[j << 1] = Sine_test_B.MatrixConcatenate[j];
    Sine_test_DW.obj_b.CopyBuffer[1 + (j << 1)] =
      Sine_test_B.MatrixConcatenate[j + 1024];
  }

  /* End of MATLABSystem: '<Root>/Audio Output' */

  /* External mode */
  rtExtModeUploadCheckTrigger(1);

  {                                    /* Sample time: [0.128s, 0.0s] */
    rtExtModeUpload(0, Sine_test_M->Timing.taskTime0);
  }

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.128s, 0.0s] */
    if ((rtmGetTFinal(Sine_test_M)!=-1) &&
        !((rtmGetTFinal(Sine_test_M)-Sine_test_M->Timing.taskTime0) >
          Sine_test_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(Sine_test_M, "Simulation finished");
    }

    if (rtmGetStopRequested(Sine_test_M)) {
      rtmSetErrorStatus(Sine_test_M, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  Sine_test_M->Timing.taskTime0 =
    (++Sine_test_M->Timing.clockTick0) * Sine_test_M->Timing.stepSize0;
}

/* Model initialize function */
void Sine_test_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)Sine_test_M, 0,
                sizeof(RT_MODEL_Sine_test_T));
  rtmSetTFinal(Sine_test_M, 0.896);
  Sine_test_M->Timing.stepSize0 = 0.128;

  /* External mode info */
  Sine_test_M->Sizes.checksums[0] = (3734289547U);
  Sine_test_M->Sizes.checksums[1] = (4195515484U);
  Sine_test_M->Sizes.checksums[2] = (2852046616U);
  Sine_test_M->Sizes.checksums[3] = (1026165058U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[3];
    Sine_test_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    systemRan[2] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(Sine_test_M->extModeInfo,
      &Sine_test_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(Sine_test_M->extModeInfo, Sine_test_M->Sizes.checksums);
    rteiSetTPtr(Sine_test_M->extModeInfo, rtmGetTPtr(Sine_test_M));
  }

  /* block I/O */
  (void) memset(((void *) &Sine_test_B), 0,
                sizeof(B_Sine_test_T));

  /* states (dwork) */
  (void) memset((void *)&Sine_test_DW, 0,
                sizeof(DW_Sine_test_T));

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    Sine_test_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 16;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.BTransTable = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.PTransTable = &rtPTransTable;
  }

  {
    uint16_T InputDeviceConst;
    uint32_T slotnameConst;

    /* Start for MATLABSystem: '<Root>/Audio Input' */
    Sine_test_DW.obj.matlabCodegenIsDeleted = true;
    Sine_test_DW.obj.isInitialized = 0;
    Sine_test_DW.obj.matlabCodegenIsDeleted = false;
    Sine_test_DW.obj.isSetupComplete = false;
    Sine_test_DW.obj.isInitialized = 1;
    InputDeviceConst = INPUT_DEVICE_ANALOG_MIC;
    BSP_AUDIO_IN_InitEx(InputDeviceConst, 8000U, 16U, 2U);
    MW_BSP_AUDIO_IN_Record(Sine_test_DW.obj.OutputBuffer, 4096U);
    Sine_test_DW.obj.isSetupComplete = true;

    /* Start for S-Function (sdspsine2): '<Root>/Sine Wave' */
    /* Trigonometric mode: compute accumulated
       normalized trig fcn argument for each channel */
    /* Keep normalized value in range [0 2*pi) */
    Sine_test_DW.SineWave_AccFreqNorm = (real32_T)fmod
      (Sine_test_P.SineWave_Phase, 6.2831854820251465);
    if (Sine_test_DW.SineWave_AccFreqNorm < 0.0F) {
      Sine_test_DW.SineWave_AccFreqNorm += 6.28318548F;
    }

    /* End of Start for S-Function (sdspsine2): '<Root>/Sine Wave' */

    /* Start for MATLABSystem: '<Root>/Audio Output' */
    Sine_test_DW.obj_b.matlabCodegenIsDeleted = true;
    Sine_test_DW.obj_b.isInitialized = 0;
    Sine_test_DW.obj_b.matlabCodegenIsDeleted = false;
    Sine_test_DW.obj_b.isSetupComplete = false;
    Sine_test_DW.obj_b.isInitialized = 1;
    InputDeviceConst = OUTPUT_DEVICE_HEADPHONE;
    slotnameConst = CODEC_AUDIOFRAME_SLOT_02;
    BSP_AUDIO_OUT_Init(InputDeviceConst, (uint8_T)Sine_test_Volume, 8000U);
    BSP_AUDIO_OUT_SetAudioFrameSlot((uint32_T)slotnameConst);
    MW_BSP_AUDIO_OUT_Play(Sine_test_DW.obj_b.CopyBuffer, 8192U);
    Sine_test_DW.obj_b.isSetupComplete = true;

    /* InitializeConditions for S-Function (sdspsine2): '<Root>/Sine Wave' */
    /* This code only executes when block is re-enabled in an
       enabled subsystem when the enabled subsystem states on
       re-enabling are set to 'Reset' */
    /* Reset to time zero on re-enable */
    /* Trigonometric mode: compute accumulated
       normalized trig fcn argument for each channel */
    /* Keep normalized value in range [0 2*pi) */
    Sine_test_DW.SineWave_AccFreqNorm = (real32_T)fmod
      (Sine_test_P.SineWave_Phase, 6.2831854820251465);
    if (Sine_test_DW.SineWave_AccFreqNorm < 0.0F) {
      Sine_test_DW.SineWave_AccFreqNorm += 6.28318548F;
    }

    /* End of InitializeConditions for S-Function (sdspsine2): '<Root>/Sine Wave' */
  }
}

/* Model terminate function */
void Sine_test_terminate(void)
{
  /* Terminate for MATLABSystem: '<Root>/Audio Input' */
  matlabCodegenHandle_matlabCod_p(&Sine_test_DW.obj);

  /* Terminate for MATLABSystem: '<Root>/Audio Output' */
  matlabCodegenHandle_matlabCodeg(&Sine_test_DW.obj_b);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
