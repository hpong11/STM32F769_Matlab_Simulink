/*
 * File: STM32_IIR_test.c
 *
 * Code generated for Simulink model 'STM32_IIR_test'.
 *
 * Model version                  : 1.9
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Fri Dec 20 12:35:43 2019
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "STM32_IIR_test.h"
#include "STM32_IIR_test_private.h"

/* Block signals (default storage) */
B_STM32_IIR_test_T STM32_IIR_test_B;

/* Block states (default storage) */
DW_STM32_IIR_test_T STM32_IIR_test_DW;

/* Real-time model */
RT_MODEL_STM32_IIR_test_T STM32_IIR_test_M_;
RT_MODEL_STM32_IIR_test_T *const STM32_IIR_test_M = &STM32_IIR_test_M_;

/* Forward declaration for local functions */
static void STM32_IIR__SystemCore_release_a(const
  stm32f769idiscovery_AudioInpu_T *obj);
static void STM32_IIR_t_SystemCore_delete_a(const
  stm32f769idiscovery_AudioInpu_T *obj);
static void matlabCodegenHandle_matlabCod_a(stm32f769idiscovery_AudioInpu_T *obj);
static void STM32_IIR_te_SystemCore_release(const
  stm32f769idiscovery_AudioOutp_T *obj);
static void STM32_IIR_tes_SystemCore_delete(const
  stm32f769idiscovery_AudioOutp_T *obj);
static void matlabCodegenHandle_matlabCodeg(stm32f769idiscovery_AudioOutp_T *obj);
static void STM32_IIR__SystemCore_release_a(const
  stm32f769idiscovery_AudioInpu_T *obj)
{
  if ((obj->isInitialized == 1) && obj->isSetupComplete) {
    BSP_AUDIO_IN_Stop();
  }
}

static void STM32_IIR_t_SystemCore_delete_a(const
  stm32f769idiscovery_AudioInpu_T *obj)
{
  STM32_IIR__SystemCore_release_a(obj);
}

static void matlabCodegenHandle_matlabCod_a(stm32f769idiscovery_AudioInpu_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    STM32_IIR_t_SystemCore_delete_a(obj);
  }
}

static void STM32_IIR_te_SystemCore_release(const
  stm32f769idiscovery_AudioOutp_T *obj)
{
  uint32_T ShutDownConst;
  if ((obj->isInitialized == 1) && obj->isSetupComplete) {
    ShutDownConst = CODEC_PDWN_SW;
    BSP_AUDIO_OUT_Stop(ShutDownConst);
  }
}

static void STM32_IIR_tes_SystemCore_delete(const
  stm32f769idiscovery_AudioOutp_T *obj)
{
  STM32_IIR_te_SystemCore_release(obj);
}

static void matlabCodegenHandle_matlabCodeg(stm32f769idiscovery_AudioOutp_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    STM32_IIR_tes_SystemCore_delete(obj);
  }
}

/* Model step function */
void STM32_IIR_test_step(void)
{
  real_T numAccum;
  int32_T i;
  int32_T j;
  int32_T num;
  int32_T den;
  int32_T io;

  /* MATLABSystem: '<Root>/Audio Input' */
  for (io = 0; io < 2; io++) {
    for (i = 0; i < 12; i++) {
      STM32_IIR_test_B.AudioInput[i + 12 * io] =
        STM32_IIR_test_DW.obj.OutputBuffer[(i << 1) + io];
    }
  }

  /* End of MATLABSystem: '<Root>/Audio Input' */
  for (io = 0; io < 12; io++) {
    /* Selector: '<Root>/Selector' */
    STM32_IIR_test_B.MatrixConcatenate[12 + io] = STM32_IIR_test_B.AudioInput[12
      + io];

    /* Gain: '<Root>/Gain' incorporates:
     *  Selector: '<Root>/Selector1'
     */
    STM32_IIR_test_B.Gain[io] = (real_T)STM32_IIR_test_P.Gain_Gain *
      1.862645149230957E-9 * (real_T)STM32_IIR_test_B.AudioInput[io];
  }

  /* DiscreteFilter: '<Root>/Discrete Filter' */
  io = 0;
  for (i = 0; i < 12; i++) {
    num = 1;
    den = 1;
    numAccum = STM32_IIR_test_P.DiscreteFilter_NumCoef[0] *
      STM32_IIR_test_B.Gain[io];
    for (j = 0; j < 20; j++) {
      numAccum += STM32_IIR_test_P.DiscreteFilter_NumCoef[num] *
        STM32_IIR_test_DW.DiscreteFilter_states[j];
      num++;
    }

    for (j = 0; j < 20; j++) {
      numAccum -= STM32_IIR_test_P.DiscreteFilter_DenCoef[den] *
        STM32_IIR_test_DW.DiscreteFilter_denStates[j];
      den++;
    }

    STM32_IIR_test_B.DiscreteFilter[io] = numAccum;
    for (j = 0; j < 19; j++) {
      STM32_IIR_test_DW.DiscreteFilter_states[19 - j] =
        STM32_IIR_test_DW.DiscreteFilter_states[18 - j];
      STM32_IIR_test_DW.DiscreteFilter_denStates[19 - j] =
        STM32_IIR_test_DW.DiscreteFilter_denStates[18 - j];
    }

    STM32_IIR_test_DW.DiscreteFilter_states[0] = STM32_IIR_test_B.Gain[io];
    STM32_IIR_test_DW.DiscreteFilter_denStates[0] =
      STM32_IIR_test_B.DiscreteFilter[io];
    io++;
  }

  /* End of DiscreteFilter: '<Root>/Discrete Filter' */
  for (i = 0; i < 12; i++) {
    /* DataTypeConversion: '<Root>/Data Type Conversion' incorporates:
     *  Gain: '<Root>/Gain1'
     */
    numAccum = floor(STM32_IIR_test_P.Gain1_Gain *
                     STM32_IIR_test_B.DiscreteFilter[i]);
    if (rtIsNaN(numAccum) || rtIsInf(numAccum)) {
      numAccum = 0.0;
    } else {
      numAccum = fmod(numAccum, 65536.0);
    }

    STM32_IIR_test_B.MatrixConcatenate[i] = (int16_T)(numAccum < 0.0 ? (int32_T)
      (int16_T)-(int16_T)(uint16_T)-numAccum : (int32_T)(int16_T)(uint16_T)
      numAccum);

    /* End of DataTypeConversion: '<Root>/Data Type Conversion' */

    /* MATLABSystem: '<Root>/Audio Output' */
    io = i << 1;
    STM32_IIR_test_DW.obj_b.CopyBuffer[io] =
      STM32_IIR_test_B.MatrixConcatenate[i];
    STM32_IIR_test_DW.obj_b.CopyBuffer[1 + io] =
      STM32_IIR_test_B.MatrixConcatenate[i + 12];
  }
}

/* Model initialize function */
void STM32_IIR_test_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize error status */
  rtmSetErrorStatus(STM32_IIR_test_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&STM32_IIR_test_DW, 0,
                sizeof(DW_STM32_IIR_test_T));

  {
    uint16_T InputDeviceConst;
    uint32_T slotnameConst;
    int32_T i;

    /* Start for MATLABSystem: '<Root>/Audio Input' */
    STM32_IIR_test_DW.obj.matlabCodegenIsDeleted = true;
    STM32_IIR_test_DW.obj.isInitialized = 0;
    STM32_IIR_test_DW.obj.matlabCodegenIsDeleted = false;
    STM32_IIR_test_DW.obj.isSetupComplete = false;
    STM32_IIR_test_DW.obj.isInitialized = 1;
    InputDeviceConst = INPUT_DEVICE_ANALOG_MIC;
    BSP_AUDIO_IN_InitEx(InputDeviceConst, 48000U, 16U, 2U);
    MW_BSP_AUDIO_IN_Record(STM32_IIR_test_DW.obj.OutputBuffer, 48U);
    STM32_IIR_test_DW.obj.isSetupComplete = true;

    /* Start for MATLABSystem: '<Root>/Audio Output' */
    STM32_IIR_test_DW.obj_b.matlabCodegenIsDeleted = true;
    STM32_IIR_test_DW.obj_b.isInitialized = 0;
    STM32_IIR_test_DW.obj_b.matlabCodegenIsDeleted = false;
    STM32_IIR_test_DW.obj_b.isSetupComplete = false;
    STM32_IIR_test_DW.obj_b.isInitialized = 1;
    InputDeviceConst = OUTPUT_DEVICE_HEADPHONE;
    slotnameConst = CODEC_AUDIOFRAME_SLOT_02;
    BSP_AUDIO_OUT_Init(InputDeviceConst, 65, 48000U);
    BSP_AUDIO_OUT_SetAudioFrameSlot((uint32_T)slotnameConst);
    MW_BSP_AUDIO_OUT_Play(STM32_IIR_test_DW.obj_b.CopyBuffer, 96U);
    STM32_IIR_test_DW.obj_b.isSetupComplete = true;

    /* InitializeConditions for DiscreteFilter: '<Root>/Discrete Filter' */
    for (i = 0; i < 20; i++) {
      STM32_IIR_test_DW.DiscreteFilter_states[i] =
        STM32_IIR_test_P.DiscreteFilter_InitialStates;
      STM32_IIR_test_DW.DiscreteFilter_denStates[i] =
        STM32_IIR_test_P.DiscreteFilter_InitialDenominat;
    }

    /* End of InitializeConditions for DiscreteFilter: '<Root>/Discrete Filter' */
  }
}

/* Model terminate function */
void STM32_IIR_test_terminate(void)
{
  /* Terminate for MATLABSystem: '<Root>/Audio Input' */
  matlabCodegenHandle_matlabCod_a(&STM32_IIR_test_DW.obj);

  /* Terminate for MATLABSystem: '<Root>/Audio Output' */
  matlabCodegenHandle_matlabCodeg(&STM32_IIR_test_DW.obj_b);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
