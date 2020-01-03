/*
 * File: Test.c
 *
 * Code generated for Simulink model 'Test'.
 *
 * Model version                  : 1.10
 * Simulink Coder version         : 8.14 (R2018a) 06-Feb-2018
 * C/C++ source code generated on : Tue Oct  9 17:01:55 2018
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Test.h"
#include "Test_private.h"
#define Test_Volume                    (65.0)

/* Block signals (default storage) */
B_Test_T Test_B;

/* Block states (default storage) */
DW_Test_T Test_DW;

/* Real-time model */
RT_MODEL_Test_T Test_M_;
RT_MODEL_Test_T *const Test_M = &Test_M_;

/* Forward declaration for local functions */
static void SystemProp_matlabCodegenSetAn_m(stm32f769idiscovery_AudioInpu_T *obj,
  boolean_T value);
static void Test_SystemCore_release_m(const stm32f769idiscovery_AudioInpu_T *obj);
static void Test_SystemCore_delete_m(const stm32f769idiscovery_AudioInpu_T *obj);
static void matlabCodegenHandle_matlabCod_m(stm32f769idiscovery_AudioInpu_T *obj);
static void SystemProp_matlabCodegenSetAnyP(stm32f769idiscovery_AudioOutp_T *obj,
  boolean_T value);
static void Test_SystemCore_release(const stm32f769idiscovery_AudioOutp_T *obj);
static void Test_SystemCore_delete(const stm32f769idiscovery_AudioOutp_T *obj);
static void matlabCodegenHandle_matlabCodeg(stm32f769idiscovery_AudioOutp_T *obj);
static void SystemProp_matlabCodegenSetAn_m(stm32f769idiscovery_AudioInpu_T *obj,
  boolean_T value)
{
  obj->matlabCodegenIsDeleted = value;
}

static void Test_SystemCore_release_m(const stm32f769idiscovery_AudioInpu_T *obj)
{
  if ((obj->isInitialized == 1) && obj->isSetupComplete) {
    BSP_AUDIO_IN_Stop();
  }
}

static void Test_SystemCore_delete_m(const stm32f769idiscovery_AudioInpu_T *obj)
{
  Test_SystemCore_release_m(obj);
}

static void matlabCodegenHandle_matlabCod_m(stm32f769idiscovery_AudioInpu_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    SystemProp_matlabCodegenSetAn_m(obj, true);
    Test_SystemCore_delete_m(obj);
  }
}

static void SystemProp_matlabCodegenSetAnyP(stm32f769idiscovery_AudioOutp_T *obj,
  boolean_T value)
{
  obj->matlabCodegenIsDeleted = value;
}

static void Test_SystemCore_release(const stm32f769idiscovery_AudioOutp_T *obj)
{
  uint32_T ShutDownConst;
  if ((obj->isInitialized == 1) && obj->isSetupComplete) {
    ShutDownConst = CODEC_PDWN_SW;
    BSP_AUDIO_OUT_Stop(ShutDownConst);
  }
}

static void Test_SystemCore_delete(const stm32f769idiscovery_AudioOutp_T *obj)
{
  Test_SystemCore_release(obj);
}

static void matlabCodegenHandle_matlabCodeg(stm32f769idiscovery_AudioOutp_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    SystemProp_matlabCodegenSetAnyP(obj, true);
    Test_SystemCore_delete(obj);
  }
}

/* Model step function */
void Test_step(void)
{
  real_T numAccum;
  int32_T i;
  int32_T j;
  int32_T num;
  int32_T den;
  int32_T io;
  int32_T io_0;
  int32_T io_1;

  /* MATLABSystem: '<Root>/Audio Input' */
  for (io = 0; io < 2; io++) {
    for (io_0 = 0; io_0 < 12; io_0++) {
      Test_B.AudioInput[io_0 + 12 * io] = Test_DW.obj.OutputBuffer[(io_0 << 1) +
        io];
    }
  }

  /* End of MATLABSystem: '<Root>/Audio Input' */
  for (io = 0; io < 12; io++) {
    /* Selector: '<Root>/Selector' */
    Test_B.MatrixConcatenate[12 + io] = Test_B.AudioInput[12 + io];

    /* Gain: '<Root>/Gain' incorporates:
     *  Selector: '<Root>/Selector1'
     */
    Test_B.Gain[io] = (real_T)Test_P.Gain_Gain * 1.862645149230957E-9 * (real_T)
      Test_B.AudioInput[io];
  }

  /* DiscreteFilter: '<Root>/Discrete Filter' */
  io = 0;

  /* DiscreteFilter: '<Root>/Discrete Filter1' */
  io_0 = 0;

  /* DiscreteFilter: '<Root>/Discrete Filter2' */
  io_1 = 0;
  for (i = 0; i < 12; i++) {
    /* DiscreteFilter: '<Root>/Discrete Filter' */
    num = 1;
    den = 1;
    numAccum = Test_P.DiscreteFilter_NumCoef[0] * Test_B.Gain[io];
    for (j = 0; j < 20; j++) {
      numAccum += Test_P.DiscreteFilter_NumCoef[num] *
        Test_DW.DiscreteFilter_states[j];
      num++;
    }

    for (j = 0; j < 20; j++) {
      numAccum -= Test_P.DiscreteFilter_DenCoef[den] *
        Test_DW.DiscreteFilter_denStates[j];
      den++;
    }

    Test_B.DiscreteFilter[io] = numAccum;
    for (j = 0; j < 19; j++) {
      Test_DW.DiscreteFilter_states[19 - j] = Test_DW.DiscreteFilter_states[18 -
        j];
      Test_DW.DiscreteFilter_denStates[19 - j] =
        Test_DW.DiscreteFilter_denStates[18 - j];
    }

    Test_DW.DiscreteFilter_states[0] = Test_B.Gain[io];
    Test_DW.DiscreteFilter_denStates[0] = Test_B.DiscreteFilter[io];
    io++;

    /* DiscreteFilter: '<Root>/Discrete Filter1' */
    num = 1;
    den = 1;
    numAccum = Test_P.DiscreteFilter1_NumCoef[0] * Test_B.Gain[io_0];
    for (j = 0; j < 20; j++) {
      numAccum += Test_P.DiscreteFilter1_NumCoef[num] *
        Test_DW.DiscreteFilter1_states[j];
      num++;
    }

    for (j = 0; j < 20; j++) {
      numAccum -= Test_P.DiscreteFilter1_DenCoef[den] *
        Test_DW.DiscreteFilter1_denStates[j];
      den++;
    }

    Test_B.DiscreteFilter1[io_0] = numAccum;
    for (j = 0; j < 19; j++) {
      Test_DW.DiscreteFilter1_states[19 - j] = Test_DW.DiscreteFilter1_states[18
        - j];
      Test_DW.DiscreteFilter1_denStates[19 - j] =
        Test_DW.DiscreteFilter1_denStates[18 - j];
    }

    Test_DW.DiscreteFilter1_states[0] = Test_B.Gain[io_0];
    Test_DW.DiscreteFilter1_denStates[0] = Test_B.DiscreteFilter1[io_0];
    io_0++;

    /* DiscreteFilter: '<Root>/Discrete Filter2' */
    num = 1;
    den = 1;
    numAccum = Test_P.DiscreteFilter2_NumCoef[0] * Test_B.Gain[io_1];
    for (j = 0; j < 20; j++) {
      numAccum += Test_P.DiscreteFilter2_NumCoef[num] *
        Test_DW.DiscreteFilter2_states[j];
      num++;
    }

    for (j = 0; j < 20; j++) {
      numAccum -= Test_P.DiscreteFilter2_DenCoef[den] *
        Test_DW.DiscreteFilter2_denStates[j];
      den++;
    }

    Test_B.DiscreteFilter2[io_1] = numAccum;
    for (j = 0; j < 19; j++) {
      Test_DW.DiscreteFilter2_states[19 - j] = Test_DW.DiscreteFilter2_states[18
        - j];
      Test_DW.DiscreteFilter2_denStates[19 - j] =
        Test_DW.DiscreteFilter2_denStates[18 - j];
    }

    Test_DW.DiscreteFilter2_states[0] = Test_B.Gain[io_1];
    Test_DW.DiscreteFilter2_denStates[0] = Test_B.DiscreteFilter2[io_1];
    io_1++;
  }

  for (i = 0; i < 12; i++) {
    /* DataTypeConversion: '<Root>/Data Type Conversion' incorporates:
     *  Gain: '<Root>/Gain1'
     *  Gain: '<Root>/Gain2'
     *  Gain: '<Root>/Gain3'
     *  Gain: '<Root>/Gain4'
     *  Sum: '<Root>/Add'
     */
    numAccum = floor(((Test_P.Gain2_Gain * Test_B.DiscreteFilter[i] +
                       Test_P.Gain3_Gain * Test_B.DiscreteFilter1[i]) +
                      Test_P.Gain4_Gain * Test_B.DiscreteFilter2[i]) *
                     Test_P.Gain1_Gain);
    if (rtIsNaN(numAccum) || rtIsInf(numAccum)) {
      numAccum = 0.0;
    } else {
      numAccum = fmod(numAccum, 65536.0);
    }

    Test_B.MatrixConcatenate[i] = (int16_T)(numAccum < 0.0 ? (int32_T)(int16_T)
      -(int16_T)(uint16_T)-numAccum : (int32_T)(int16_T)(uint16_T)numAccum);

    /* End of DataTypeConversion: '<Root>/Data Type Conversion' */

    /* MATLABSystem: '<Root>/Audio Output' */
    Test_DW.obj_b.CopyBuffer[i << 1] = Test_B.MatrixConcatenate[i];
    Test_DW.obj_b.CopyBuffer[1 + (i << 1)] = Test_B.MatrixConcatenate[i + 12];
  }
}

/* Model initialize function */
void Test_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize error status */
  rtmSetErrorStatus(Test_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&Test_DW, 0,
                sizeof(DW_Test_T));

  {
    uint16_T InputDeviceConst;
    uint32_T slotnameConst;
    int32_T i;

    /* Start for MATLABSystem: '<Root>/Audio Input' */
    Test_DW.obj.matlabCodegenIsDeleted = true;
    Test_DW.obj.isInitialized = 0;
    Test_DW.obj.matlabCodegenIsDeleted = false;
    Test_DW.obj.isSetupComplete = false;
    Test_DW.obj.isInitialized = 1;
    InputDeviceConst = INPUT_DEVICE_ANALOG_MIC;
    BSP_AUDIO_IN_InitEx(InputDeviceConst, 48000U, 16U, 2U);
    MW_BSP_AUDIO_IN_Record(Test_DW.obj.OutputBuffer, 48U);
    Test_DW.obj.isSetupComplete = true;

    /* Start for MATLABSystem: '<Root>/Audio Output' */
    Test_DW.obj_b.matlabCodegenIsDeleted = true;
    Test_DW.obj_b.isInitialized = 0;
    Test_DW.obj_b.matlabCodegenIsDeleted = false;
    Test_DW.obj_b.isSetupComplete = false;
    Test_DW.obj_b.isInitialized = 1;
    InputDeviceConst = OUTPUT_DEVICE_HEADPHONE;
    slotnameConst = CODEC_AUDIOFRAME_SLOT_02;
    BSP_AUDIO_OUT_Init(InputDeviceConst, (uint8_T)Test_Volume, 48000U);
    BSP_AUDIO_OUT_SetAudioFrameSlot((uint32_T)slotnameConst);
    MW_BSP_AUDIO_OUT_Play(Test_DW.obj_b.CopyBuffer, 96U);
    Test_DW.obj_b.isSetupComplete = true;
    for (i = 0; i < 20; i++) {
      /* InitializeConditions for DiscreteFilter: '<Root>/Discrete Filter' */
      Test_DW.DiscreteFilter_states[i] = Test_P.DiscreteFilter_InitialStates;
      Test_DW.DiscreteFilter_denStates[i] =
        Test_P.DiscreteFilter_InitialDenominat;

      /* InitializeConditions for DiscreteFilter: '<Root>/Discrete Filter1' */
      Test_DW.DiscreteFilter1_states[i] = Test_P.DiscreteFilter1_InitialStates;
      Test_DW.DiscreteFilter1_denStates[i] =
        Test_P.DiscreteFilter1_InitialDenomina;

      /* InitializeConditions for DiscreteFilter: '<Root>/Discrete Filter2' */
      Test_DW.DiscreteFilter2_states[i] = Test_P.DiscreteFilter2_InitialStates;
      Test_DW.DiscreteFilter2_denStates[i] =
        Test_P.DiscreteFilter2_InitialDenomina;
    }
  }
}

/* Model terminate function */
void Test_terminate(void)
{
  /* Terminate for MATLABSystem: '<Root>/Audio Input' */
  matlabCodegenHandle_matlabCod_m(&Test_DW.obj);

  /* Terminate for MATLABSystem: '<Root>/Audio Output' */
  matlabCodegenHandle_matlabCodeg(&Test_DW.obj_b);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
