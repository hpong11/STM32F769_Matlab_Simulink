/*
 * File: STM32_FIR_test.c
 *
 * Code generated for Simulink model 'STM32_FIR_test'.
 *
 * Model version                  : 1.12
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Fri Dec 20 12:37:18 2019
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "STM32_FIR_test.h"
#include "STM32_FIR_test_private.h"

/* Block signals (default storage) */
B_STM32_FIR_test_T STM32_FIR_test_B;

/* Block states (default storage) */
DW_STM32_FIR_test_T STM32_FIR_test_DW;

/* Real-time model */
RT_MODEL_STM32_FIR_test_T STM32_FIR_test_M_;
RT_MODEL_STM32_FIR_test_T *const STM32_FIR_test_M = &STM32_FIR_test_M_;

/* Forward declaration for local functions */
static void STM32_FIR__SystemCore_release_n(const
  stm32f769idiscovery_AudioInpu_T *obj);
static void STM32_FIR_t_SystemCore_delete_n(const
  stm32f769idiscovery_AudioInpu_T *obj);
static void matlabCodegenHandle_matlabCod_n(stm32f769idiscovery_AudioInpu_T *obj);
static void STM32_FIR_te_SystemCore_release(const
  stm32f769idiscovery_AudioOutp_T *obj);
static void STM32_FIR_tes_SystemCore_delete(const
  stm32f769idiscovery_AudioOutp_T *obj);
static void matlabCodegenHandle_matlabCodeg(stm32f769idiscovery_AudioOutp_T *obj);
static void STM32_FIR__SystemCore_release_n(const
  stm32f769idiscovery_AudioInpu_T *obj)
{
  if ((obj->isInitialized == 1) && obj->isSetupComplete) {
    BSP_AUDIO_IN_Stop();
  }
}

static void STM32_FIR_t_SystemCore_delete_n(const
  stm32f769idiscovery_AudioInpu_T *obj)
{
  STM32_FIR__SystemCore_release_n(obj);
}

static void matlabCodegenHandle_matlabCod_n(stm32f769idiscovery_AudioInpu_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    STM32_FIR_t_SystemCore_delete_n(obj);
  }
}

static void STM32_FIR_te_SystemCore_release(const
  stm32f769idiscovery_AudioOutp_T *obj)
{
  uint32_T ShutDownConst;
  if ((obj->isInitialized == 1) && obj->isSetupComplete) {
    ShutDownConst = CODEC_PDWN_SW;
    BSP_AUDIO_OUT_Stop(ShutDownConst);
  }
}

static void STM32_FIR_tes_SystemCore_delete(const
  stm32f769idiscovery_AudioOutp_T *obj)
{
  STM32_FIR_te_SystemCore_release(obj);
}

static void matlabCodegenHandle_matlabCodeg(stm32f769idiscovery_AudioOutp_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    STM32_FIR_tes_SystemCore_delete(obj);
  }
}

/* Model step function */
void STM32_FIR_test_step(void)
{
  int32_T i;
  int32_T io;
  real_T acc;
  int32_T cff;
  int32_T dataIdx;
  int32_T j;
  real_T tapsum;

  /* MATLABSystem: '<Root>/Audio Input' */
  for (io = 0; io < 2; io++) {
    for (i = 0; i < 12; i++) {
      STM32_FIR_test_B.AudioInput[i + 12 * io] =
        STM32_FIR_test_DW.obj.OutputBuffer[(i << 1) + io];
    }
  }

  /* End of MATLABSystem: '<Root>/Audio Input' */
  for (io = 0; io < 12; io++) {
    /* Selector: '<Root>/Selector' */
    STM32_FIR_test_B.MatrixConcatenate[12 + io] = STM32_FIR_test_B.AudioInput[12
      + io];

    /* Gain: '<Root>/Gain' incorporates:
     *  Selector: '<Root>/Selector1'
     */
    STM32_FIR_test_B.Gain[io] = (real_T)STM32_FIR_test_P.Gain_Gain *
      1.862645149230957E-9 * (real_T)STM32_FIR_test_B.AudioInput[io];
  }

  /* DiscreteFir: '<Root>/Discrete FIR Filter' */
  io = 0;
  for (i = 0; i < 12; i++) {
    dataIdx = STM32_FIR_test_DW.DiscreteFIRFilter_circBuf;
    if (STM32_FIR_test_DW.DiscreteFIRFilter_circBuf + 89 >= 90) {
      dataIdx = STM32_FIR_test_DW.DiscreteFIRFilter_circBuf - 90;
    }

    acc = (STM32_FIR_test_DW.DiscreteFIRFilter_states[dataIdx + 89] +
           STM32_FIR_test_B.Gain[io]) *
      STM32_FIR_test_P.DiscreteFIRFilter_Coefficients[0];
    cff = 1;
    for (j = 0; j < 44; j++) {
      dataIdx = j + STM32_FIR_test_DW.DiscreteFIRFilter_circBuf;
      if (dataIdx >= 90) {
        dataIdx -= 90;
      }

      tapsum = STM32_FIR_test_DW.DiscreteFIRFilter_states[dataIdx];
      dataIdx = (dataIdx - ((j + 1) << 1)) + 90;
      if (dataIdx >= 90) {
        dataIdx -= 90;
      }

      tapsum += STM32_FIR_test_DW.DiscreteFIRFilter_states[dataIdx];
      acc += tapsum * STM32_FIR_test_P.DiscreteFIRFilter_Coefficients[cff];
      cff++;
    }

    dataIdx = j + STM32_FIR_test_DW.DiscreteFIRFilter_circBuf;
    if (dataIdx >= 90) {
      dataIdx -= 90;
    }

    STM32_FIR_test_B.Gain1[io] =
      STM32_FIR_test_DW.DiscreteFIRFilter_states[dataIdx] *
      STM32_FIR_test_P.DiscreteFIRFilter_Coefficients[cff] + acc;
    STM32_FIR_test_DW.DiscreteFIRFilter_circBuf--;
    if (STM32_FIR_test_DW.DiscreteFIRFilter_circBuf < 0) {
      STM32_FIR_test_DW.DiscreteFIRFilter_circBuf = 89;
    }

    STM32_FIR_test_DW.DiscreteFIRFilter_states[STM32_FIR_test_DW.DiscreteFIRFilter_circBuf]
      = STM32_FIR_test_B.Gain[io];
    io++;
  }

  /* End of DiscreteFir: '<Root>/Discrete FIR Filter' */
  for (i = 0; i < 12; i++) {
    /* Gain: '<Root>/Gain1' */
    acc = STM32_FIR_test_P.Gain1_Gain * STM32_FIR_test_B.Gain1[i];

    /* DataTypeConversion: '<Root>/Data Type Conversion' */
    tapsum = floor(acc);
    if (rtIsNaN(tapsum) || rtIsInf(tapsum)) {
      tapsum = 0.0;
    } else {
      tapsum = fmod(tapsum, 65536.0);
    }

    STM32_FIR_test_B.MatrixConcatenate[i] = (int16_T)(tapsum < 0.0 ? (int32_T)
      (int16_T)-(int16_T)(uint16_T)-tapsum : (int32_T)(int16_T)(uint16_T)tapsum);

    /* End of DataTypeConversion: '<Root>/Data Type Conversion' */

    /* MATLABSystem: '<Root>/Audio Output' */
    io = i << 1;
    STM32_FIR_test_DW.obj_b.CopyBuffer[io] =
      STM32_FIR_test_B.MatrixConcatenate[i];
    STM32_FIR_test_DW.obj_b.CopyBuffer[1 + io] =
      STM32_FIR_test_B.MatrixConcatenate[i + 12];

    /* Gain: '<Root>/Gain1' */
    STM32_FIR_test_B.Gain1[i] = acc;
  }
}

/* Model initialize function */
void STM32_FIR_test_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize error status */
  rtmSetErrorStatus(STM32_FIR_test_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&STM32_FIR_test_DW, 0,
                sizeof(DW_STM32_FIR_test_T));

  {
    uint16_T InputDeviceConst;
    uint32_T slotnameConst;
    int32_T i;

    /* Start for MATLABSystem: '<Root>/Audio Input' */
    STM32_FIR_test_DW.obj.matlabCodegenIsDeleted = true;
    STM32_FIR_test_DW.obj.isInitialized = 0;
    STM32_FIR_test_DW.obj.matlabCodegenIsDeleted = false;
    STM32_FIR_test_DW.obj.isSetupComplete = false;
    STM32_FIR_test_DW.obj.isInitialized = 1;
    InputDeviceConst = INPUT_DEVICE_ANALOG_MIC;
    BSP_AUDIO_IN_InitEx(InputDeviceConst, 48000U, 16U, 2U);
    MW_BSP_AUDIO_IN_Record(STM32_FIR_test_DW.obj.OutputBuffer, 48U);
    STM32_FIR_test_DW.obj.isSetupComplete = true;

    /* Start for MATLABSystem: '<Root>/Audio Output' */
    STM32_FIR_test_DW.obj_b.matlabCodegenIsDeleted = true;
    STM32_FIR_test_DW.obj_b.isInitialized = 0;
    STM32_FIR_test_DW.obj_b.matlabCodegenIsDeleted = false;
    STM32_FIR_test_DW.obj_b.isSetupComplete = false;
    STM32_FIR_test_DW.obj_b.isInitialized = 1;
    InputDeviceConst = OUTPUT_DEVICE_HEADPHONE;
    slotnameConst = CODEC_AUDIOFRAME_SLOT_02;
    BSP_AUDIO_OUT_Init(InputDeviceConst, 62, 48000U);
    BSP_AUDIO_OUT_SetAudioFrameSlot((uint32_T)slotnameConst);
    MW_BSP_AUDIO_OUT_Play(STM32_FIR_test_DW.obj_b.CopyBuffer, 96U);
    STM32_FIR_test_DW.obj_b.isSetupComplete = true;

    /* InitializeConditions for DiscreteFir: '<Root>/Discrete FIR Filter' */
    STM32_FIR_test_DW.DiscreteFIRFilter_circBuf = 0;
    for (i = 0; i < 90; i++) {
      STM32_FIR_test_DW.DiscreteFIRFilter_states[i] =
        STM32_FIR_test_P.DiscreteFIRFilter_InitialStates;
    }

    /* End of InitializeConditions for DiscreteFir: '<Root>/Discrete FIR Filter' */
  }
}

/* Model terminate function */
void STM32_FIR_test_terminate(void)
{
  /* Terminate for MATLABSystem: '<Root>/Audio Input' */
  matlabCodegenHandle_matlabCod_n(&STM32_FIR_test_DW.obj);

  /* Terminate for MATLABSystem: '<Root>/Audio Output' */
  matlabCodegenHandle_matlabCodeg(&STM32_FIR_test_DW.obj_b);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
