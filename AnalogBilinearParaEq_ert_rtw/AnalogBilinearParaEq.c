/*
 * File: AnalogBilinearParaEq.c
 *
 * Code generated for Simulink model 'AnalogBilinearParaEq'.
 *
 * Model version                  : 1.13
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Fri Jan  3 15:45:31 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "AnalogBilinearParaEq.h"
#include "AnalogBilinearParaEq_private.h"

/* Block signals (default storage) */
B_AnalogBilinearParaEq_T AnalogBilinearParaEq_B;

/* Block states (default storage) */
DW_AnalogBilinearParaEq_T AnalogBilinearParaEq_DW;

/* Real-time model */
RT_MODEL_AnalogBilinearParaEq_T AnalogBilinearParaEq_M_;
RT_MODEL_AnalogBilinearParaEq_T *const AnalogBilinearParaEq_M =
  &AnalogBilinearParaEq_M_;

/* Forward declaration for local functions */
static void AnalogBili_SystemCore_release_c(const
  stm32f769idiscovery_AudioInpu_T *obj);
static void AnalogBilin_SystemCore_delete_c(const
  stm32f769idiscovery_AudioInpu_T *obj);
static void matlabCodegenHandle_matlabCod_c(stm32f769idiscovery_AudioInpu_T *obj);
static void AnalogBiline_SystemCore_release(const
  stm32f769idiscovery_AudioOutp_T *obj);
static void AnalogBilinea_SystemCore_delete(const
  stm32f769idiscovery_AudioOutp_T *obj);
static void matlabCodegenHandle_matlabCodeg(stm32f769idiscovery_AudioOutp_T *obj);
static void AnalogBili_SystemCore_release_c(const
  stm32f769idiscovery_AudioInpu_T *obj)
{
  if ((obj->isInitialized == 1) && obj->isSetupComplete) {
    BSP_AUDIO_IN_Stop();
  }
}

static void AnalogBilin_SystemCore_delete_c(const
  stm32f769idiscovery_AudioInpu_T *obj)
{
  AnalogBili_SystemCore_release_c(obj);
}

static void matlabCodegenHandle_matlabCod_c(stm32f769idiscovery_AudioInpu_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    AnalogBilin_SystemCore_delete_c(obj);
  }
}

static void AnalogBiline_SystemCore_release(const
  stm32f769idiscovery_AudioOutp_T *obj)
{
  uint32_T ShutDownConst;
  if ((obj->isInitialized == 1) && obj->isSetupComplete) {
    ShutDownConst = CODEC_PDWN_SW;
    BSP_AUDIO_OUT_Stop(ShutDownConst);
  }
}

static void AnalogBilinea_SystemCore_delete(const
  stm32f769idiscovery_AudioOutp_T *obj)
{
  AnalogBiline_SystemCore_release(obj);
}

static void matlabCodegenHandle_matlabCodeg(stm32f769idiscovery_AudioOutp_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    AnalogBilinea_SystemCore_delete(obj);
  }
}

/* Model step function */
void AnalogBilinearParaEq_step(void)
{
  real_T denAccum;
  int32_T i;
  int16_T rtb_Gain1;
  real_T rtb_Low;
  real_T rtb_Peak1;
  real_T rtb_Peak2;
  real_T rtb_Peak3;
  int32_T tmp;
  for (i = 0; i < 100; i++) {
    /* DiscreteFilter: '<Root>/Low' incorporates:
     *  Constant: '<Root>/Constant1'
     *  Constant: '<Root>/Constant2'
     *  Gain: '<Root>/Gain'
     *  MATLABSystem: '<Root>/Audio Input'
     *  Selector: '<Root>/Selector1'
     */
    denAccum = ((real_T)AnalogBilinearParaEq_P.Gain_Gain * 1.862645149230957E-9 *
                (real_T)AnalogBilinearParaEq_DW.obj.OutputBuffer[i << 1] -
                AnalogBilinearParaEq_P.Constant2_Value[1] *
                AnalogBilinearParaEq_DW.Low_states[0]) -
      AnalogBilinearParaEq_P.Constant2_Value[2] *
      AnalogBilinearParaEq_DW.Low_states[1];
    rtb_Low = (AnalogBilinearParaEq_P.Constant1_Value[0] * denAccum +
               AnalogBilinearParaEq_P.Constant1_Value[1] *
               AnalogBilinearParaEq_DW.Low_states[0]) +
      AnalogBilinearParaEq_P.Constant1_Value[2] *
      AnalogBilinearParaEq_DW.Low_states[1];
    AnalogBilinearParaEq_DW.Low_states[1] = AnalogBilinearParaEq_DW.Low_states[0];
    AnalogBilinearParaEq_DW.Low_states[0] = denAccum;

    /* DiscreteFilter: '<Root>/Peak1' incorporates:
     *  Constant: '<Root>/Constant3'
     *  Constant: '<Root>/Constant4'
     */
    denAccum = (rtb_Low - AnalogBilinearParaEq_P.Constant4_Value[1] *
                AnalogBilinearParaEq_DW.Peak1_states[0]) -
      AnalogBilinearParaEq_P.Constant4_Value[2] *
      AnalogBilinearParaEq_DW.Peak1_states[1];
    rtb_Peak1 = (AnalogBilinearParaEq_P.Constant3_Value[0] * denAccum +
                 AnalogBilinearParaEq_P.Constant3_Value[1] *
                 AnalogBilinearParaEq_DW.Peak1_states[0]) +
      AnalogBilinearParaEq_P.Constant3_Value[2] *
      AnalogBilinearParaEq_DW.Peak1_states[1];
    AnalogBilinearParaEq_DW.Peak1_states[1] =
      AnalogBilinearParaEq_DW.Peak1_states[0];
    AnalogBilinearParaEq_DW.Peak1_states[0] = denAccum;

    /* DiscreteFilter: '<Root>/Peak2' incorporates:
     *  Constant: '<Root>/Constant5'
     *  Constant: '<Root>/Constant6'
     */
    denAccum = (rtb_Peak1 - AnalogBilinearParaEq_P.Constant6_Value[1] *
                AnalogBilinearParaEq_DW.Peak2_states[0]) -
      AnalogBilinearParaEq_P.Constant6_Value[2] *
      AnalogBilinearParaEq_DW.Peak2_states[1];
    rtb_Peak2 = (AnalogBilinearParaEq_P.Constant5_Value[0] * denAccum +
                 AnalogBilinearParaEq_P.Constant5_Value[1] *
                 AnalogBilinearParaEq_DW.Peak2_states[0]) +
      AnalogBilinearParaEq_P.Constant5_Value[2] *
      AnalogBilinearParaEq_DW.Peak2_states[1];
    AnalogBilinearParaEq_DW.Peak2_states[1] =
      AnalogBilinearParaEq_DW.Peak2_states[0];
    AnalogBilinearParaEq_DW.Peak2_states[0] = denAccum;

    /* DiscreteFilter: '<Root>/Peak3' incorporates:
     *  Constant: '<Root>/Constant7'
     *  Constant: '<Root>/Constant8'
     */
    denAccum = (rtb_Peak2 - AnalogBilinearParaEq_P.Constant8_Value[1] *
                AnalogBilinearParaEq_DW.Peak3_states[0]) -
      AnalogBilinearParaEq_P.Constant8_Value[2] *
      AnalogBilinearParaEq_DW.Peak3_states[1];
    rtb_Peak3 = (AnalogBilinearParaEq_P.Constant7_Value[0] * denAccum +
                 AnalogBilinearParaEq_P.Constant7_Value[1] *
                 AnalogBilinearParaEq_DW.Peak3_states[0]) +
      AnalogBilinearParaEq_P.Constant7_Value[2] *
      AnalogBilinearParaEq_DW.Peak3_states[1];
    AnalogBilinearParaEq_DW.Peak3_states[1] =
      AnalogBilinearParaEq_DW.Peak3_states[0];
    AnalogBilinearParaEq_DW.Peak3_states[0] = denAccum;

    /* DiscreteFilter: '<Root>/Hight' incorporates:
     *  Constant: '<Root>/Constant10'
     *  Constant: '<Root>/Constant9'
     */
    denAccum = (rtb_Peak3 - AnalogBilinearParaEq_P.Constant10_Value[1] *
                AnalogBilinearParaEq_DW.Hight_states[0]) -
      AnalogBilinearParaEq_P.Constant10_Value[2] *
      AnalogBilinearParaEq_DW.Hight_states[1];
    AnalogBilinearParaEq_B.Hight[i] = (AnalogBilinearParaEq_P.Constant9_Value[0]
      * denAccum + AnalogBilinearParaEq_P.Constant9_Value[1] *
      AnalogBilinearParaEq_DW.Hight_states[0]) +
      AnalogBilinearParaEq_P.Constant9_Value[2] *
      AnalogBilinearParaEq_DW.Hight_states[1];
    AnalogBilinearParaEq_DW.Hight_states[1] =
      AnalogBilinearParaEq_DW.Hight_states[0];
    AnalogBilinearParaEq_DW.Hight_states[0] = denAccum;

    /* DiscreteFilter: '<Root>/Low' */
    AnalogBilinearParaEq_B.Low[i] = rtb_Low;

    /* DiscreteFilter: '<Root>/Peak1' */
    AnalogBilinearParaEq_B.Peak1[i] = rtb_Peak1;

    /* DiscreteFilter: '<Root>/Peak2' */
    AnalogBilinearParaEq_B.Peak2[i] = rtb_Peak2;

    /* DiscreteFilter: '<Root>/Peak3' */
    AnalogBilinearParaEq_B.Peak3[i] = rtb_Peak3;
  }

  /* MultiPortSwitch: '<Root>/Multiport Switch' incorporates:
   *  Constant: '<Root>/Constant'
   */
  switch ((int32_T)AnalogBilinearParaEq_P.Constant_Value) {
   case 1:
    memcpy(&AnalogBilinearParaEq_B.Hight[0], &AnalogBilinearParaEq_B.Low[0],
           100U * sizeof(real_T));
    break;

   case 2:
    memcpy(&AnalogBilinearParaEq_B.Hight[0], &AnalogBilinearParaEq_B.Peak1[0],
           100U * sizeof(real_T));
    break;

   case 3:
    memcpy(&AnalogBilinearParaEq_B.Hight[0], &AnalogBilinearParaEq_B.Peak2[0],
           100U * sizeof(real_T));
    break;

   case 4:
    memcpy(&AnalogBilinearParaEq_B.Hight[0], &AnalogBilinearParaEq_B.Peak3[0],
           100U * sizeof(real_T));
    break;
  }

  /* End of MultiPortSwitch: '<Root>/Multiport Switch' */
  for (i = 0; i < 100; i++) {
    /* Gain: '<Root>/Gain1' */
    denAccum = floor(AnalogBilinearParaEq_P.Gain1_Gain *
                     AnalogBilinearParaEq_B.Hight[i]);
    if (rtIsNaN(denAccum) || rtIsInf(denAccum)) {
      denAccum = 0.0;
    } else {
      denAccum = fmod(denAccum, 65536.0);
    }

    rtb_Gain1 = (int16_T)(denAccum < 0.0 ? (int32_T)(int16_T)-(int16_T)(uint16_T)
                          -denAccum : (int32_T)(int16_T)(uint16_T)denAccum);

    /* End of Gain: '<Root>/Gain1' */

    /* SignalConversion: '<Root>/ConcatBufferAtMatrix ConcatenateIn1' */
    AnalogBilinearParaEq_B.MatrixConcatenate[i] = rtb_Gain1;

    /* SignalConversion: '<Root>/ConcatBufferAtMatrix ConcatenateIn2' */
    AnalogBilinearParaEq_B.MatrixConcatenate[i + 100] = rtb_Gain1;

    /* MATLABSystem: '<Root>/Audio Output' */
    tmp = i << 1;
    AnalogBilinearParaEq_DW.obj_b.CopyBuffer[tmp] =
      AnalogBilinearParaEq_B.MatrixConcatenate[i];
    AnalogBilinearParaEq_DW.obj_b.CopyBuffer[1 + tmp] =
      AnalogBilinearParaEq_B.MatrixConcatenate[i + 100];
  }
}

/* Model initialize function */
void AnalogBilinearParaEq_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize error status */
  rtmSetErrorStatus(AnalogBilinearParaEq_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&AnalogBilinearParaEq_DW, 0,
                sizeof(DW_AnalogBilinearParaEq_T));

  {
    uint16_T InputDeviceConst;
    uint32_T slotnameConst;

    /* Start for MATLABSystem: '<Root>/Audio Input' */
    AnalogBilinearParaEq_DW.obj.matlabCodegenIsDeleted = true;
    AnalogBilinearParaEq_DW.obj.isInitialized = 0;
    AnalogBilinearParaEq_DW.obj.matlabCodegenIsDeleted = false;
    AnalogBilinearParaEq_DW.obj.isSetupComplete = false;
    AnalogBilinearParaEq_DW.obj.isInitialized = 1;
    InputDeviceConst = INPUT_DEVICE_ANALOG_MIC;
    BSP_AUDIO_IN_InitEx(InputDeviceConst, 44100U, 16U, 2U);
    MW_BSP_AUDIO_IN_Record(AnalogBilinearParaEq_DW.obj.OutputBuffer, 400U);
    AnalogBilinearParaEq_DW.obj.isSetupComplete = true;

    /* Start for MATLABSystem: '<Root>/Audio Output' */
    AnalogBilinearParaEq_DW.obj_b.matlabCodegenIsDeleted = true;
    AnalogBilinearParaEq_DW.obj_b.isInitialized = 0;
    AnalogBilinearParaEq_DW.obj_b.matlabCodegenIsDeleted = false;
    AnalogBilinearParaEq_DW.obj_b.isSetupComplete = false;
    AnalogBilinearParaEq_DW.obj_b.isInitialized = 1;
    InputDeviceConst = OUTPUT_DEVICE_HEADPHONE;
    slotnameConst = CODEC_AUDIOFRAME_SLOT_02;
    BSP_AUDIO_OUT_Init(InputDeviceConst, 63, 44100U);
    BSP_AUDIO_OUT_SetAudioFrameSlot((uint32_T)slotnameConst);
    MW_BSP_AUDIO_OUT_Play(AnalogBilinearParaEq_DW.obj_b.CopyBuffer, 800U);
    AnalogBilinearParaEq_DW.obj_b.isSetupComplete = true;

    /* InitializeConditions for DiscreteFilter: '<Root>/Low' */
    AnalogBilinearParaEq_DW.Low_states[0] =
      AnalogBilinearParaEq_P.Low_InitialStates;

    /* InitializeConditions for DiscreteFilter: '<Root>/Peak1' */
    AnalogBilinearParaEq_DW.Peak1_states[0] =
      AnalogBilinearParaEq_P.Peak1_InitialStates;

    /* InitializeConditions for DiscreteFilter: '<Root>/Peak2' */
    AnalogBilinearParaEq_DW.Peak2_states[0] =
      AnalogBilinearParaEq_P.Peak2_InitialStates;

    /* InitializeConditions for DiscreteFilter: '<Root>/Peak3' */
    AnalogBilinearParaEq_DW.Peak3_states[0] =
      AnalogBilinearParaEq_P.Peak3_InitialStates;

    /* InitializeConditions for DiscreteFilter: '<Root>/Hight' */
    AnalogBilinearParaEq_DW.Hight_states[0] =
      AnalogBilinearParaEq_P.Hight_InitialStates;

    /* InitializeConditions for DiscreteFilter: '<Root>/Low' */
    AnalogBilinearParaEq_DW.Low_states[1] =
      AnalogBilinearParaEq_P.Low_InitialStates;

    /* InitializeConditions for DiscreteFilter: '<Root>/Peak1' */
    AnalogBilinearParaEq_DW.Peak1_states[1] =
      AnalogBilinearParaEq_P.Peak1_InitialStates;

    /* InitializeConditions for DiscreteFilter: '<Root>/Peak2' */
    AnalogBilinearParaEq_DW.Peak2_states[1] =
      AnalogBilinearParaEq_P.Peak2_InitialStates;

    /* InitializeConditions for DiscreteFilter: '<Root>/Peak3' */
    AnalogBilinearParaEq_DW.Peak3_states[1] =
      AnalogBilinearParaEq_P.Peak3_InitialStates;

    /* InitializeConditions for DiscreteFilter: '<Root>/Hight' */
    AnalogBilinearParaEq_DW.Hight_states[1] =
      AnalogBilinearParaEq_P.Hight_InitialStates;
  }
}

/* Model terminate function */
void AnalogBilinearParaEq_terminate(void)
{
  /* Terminate for MATLABSystem: '<Root>/Audio Input' */
  matlabCodegenHandle_matlabCod_c(&AnalogBilinearParaEq_DW.obj);

  /* Terminate for MATLABSystem: '<Root>/Audio Output' */
  matlabCodegenHandle_matlabCodeg(&AnalogBilinearParaEq_DW.obj_b);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
