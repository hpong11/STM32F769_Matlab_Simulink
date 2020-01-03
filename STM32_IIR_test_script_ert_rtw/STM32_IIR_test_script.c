/*
 * File: STM32_IIR_test_script.c
 *
 * Code generated for Simulink model 'STM32_IIR_test_script'.
 *
 * Model version                  : 1.20
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Tue Dec 24 15:51:35 2019
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "STM32_IIR_test_script.h"
#include "STM32_IIR_test_script_private.h"

/* Block signals (default storage) */
B_STM32_IIR_test_script_T STM32_IIR_test_script_B;

/* Block states (default storage) */
DW_STM32_IIR_test_script_T STM32_IIR_test_script_DW;

/* Real-time model */
RT_MODEL_STM32_IIR_test_scrip_T STM32_IIR_test_script_M_;
RT_MODEL_STM32_IIR_test_scrip_T *const STM32_IIR_test_script_M =
  &STM32_IIR_test_script_M_;

/* Forward declaration for local functions */
static void STM32_IIR__SystemCore_release_m(const
  stm32f769idiscovery_AudioInpu_T *obj);
static void STM32_IIR_t_SystemCore_delete_m(const
  stm32f769idiscovery_AudioInpu_T *obj);
static void matlabCodegenHandle_matlabCod_m(stm32f769idiscovery_AudioInpu_T *obj);
static void STM32_IIR_te_SystemCore_release(const
  stm32f769idiscovery_AudioOutp_T *obj);
static void STM32_IIR_tes_SystemCore_delete(const
  stm32f769idiscovery_AudioOutp_T *obj);
static void matlabCodegenHandle_matlabCodeg(stm32f769idiscovery_AudioOutp_T *obj);
static void STM32_IIR__SystemCore_release_m(const
  stm32f769idiscovery_AudioInpu_T *obj)
{
  if ((obj->isInitialized == 1) && obj->isSetupComplete) {
    BSP_AUDIO_IN_Stop();
  }
}

static void STM32_IIR_t_SystemCore_delete_m(const
  stm32f769idiscovery_AudioInpu_T *obj)
{
  STM32_IIR__SystemCore_release_m(obj);
}

static void matlabCodegenHandle_matlabCod_m(stm32f769idiscovery_AudioInpu_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    STM32_IIR_t_SystemCore_delete_m(obj);
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
void STM32_IIR_test_script_step(void)
{
  int32_T nn;
  static const real_T b[27] = { 9.9E-16, 2.5742E-14, 3.2178E-13, 2.574243E-12,
    1.4801897E-11, 6.5128345E-11, 2.27949209E-10, 6.51283454E-10, 1.546798204E-9,
    3.093596408E-9, 5.259113893E-9, 7.649620208E-9, 9.56202526E-9,
    1.0297565665E-8, 9.56202526E-9, 7.649620208E-9, 5.259113893E-9,
    3.093596408E-9, 1.546798204E-9, 6.51283454E-10, 2.27949209E-10,
    6.5128345E-11, 1.4801897E-11, 2.574243E-12, 3.2178E-13, 2.5742E-14, 9.9E-16
  };

  static const real_T c[27] = { 1.0, -15.595213999353305, 118.3362596550113,
    -581.12616199136414, 2072.7220573244658, -5713.051008179993,
    12642.818748640364, -23041.152691919291, 35198.581434592539,
    -45642.355669735633, 50690.606897819838, -48519.7392573475,
    40189.49549696863, -28872.161761595213, 17999.537219242418,
    -9727.4155270880947, 4544.62155902265, -1827.1165025471591,
    627.85285727212624, -182.6584108352294, 44.401873881118547,
    -8.8553095487816584, 1.4116635794179766, -0.17301730351807088,
    0.015311280179496215, -0.000871047933122563, 2.3926742299957E-5 };

  int16_T rtb_AudioInput[24];
  int32_T n;
  real_T rtb_Gain;

  /* MATLABSystem: '<Root>/Audio Input' */
  for (nn = 0; nn < 2; nn++) {
    for (n = 0; n < 12; n++) {
      rtb_AudioInput[n + 12 * nn] = STM32_IIR_test_script_DW.obj.OutputBuffer[(n
        << 1) + nn];
    }
  }

  /* End of MATLABSystem: '<Root>/Audio Input' */
  for (n = 0; n < 12; n++) {
    /* Gain: '<Root>/Gain' incorporates:
     *  Selector: '<Root>/Selector1'
     */
    rtb_Gain = (real_T)STM32_IIR_test_script_P.Gain_Gain * 1.862645149230957E-9 *
      (real_T)rtb_AudioInput[n];

    /* MATLAB Function: '<Root>/MATLAB Function' */
    STM32_IIR_test_script_B.y[n] = 1.0;
    STM32_IIR_test_script_B.y[n] = 9.9E-16 * rtb_Gain;
    for (nn = 0; nn < 26; nn++) {
      STM32_IIR_test_script_B.y[n] = (b[nn + 1] *
        STM32_IIR_test_script_DW.Memory_PreviousInput[nn] +
        STM32_IIR_test_script_B.y[n]) - c[nn + 1] *
        STM32_IIR_test_script_DW.Memory1_PreviousInput[nn];
    }

    for (nn = 0; nn < 25; nn++) {
      STM32_IIR_test_script_DW.Memory_PreviousInput[25 - nn] =
        STM32_IIR_test_script_DW.Memory_PreviousInput[24 - nn];
      STM32_IIR_test_script_DW.Memory1_PreviousInput[25 - nn] =
        STM32_IIR_test_script_DW.Memory1_PreviousInput[24 - nn];
    }

    STM32_IIR_test_script_DW.Memory_PreviousInput[0] = rtb_Gain;
    STM32_IIR_test_script_DW.Memory1_PreviousInput[0] =
      STM32_IIR_test_script_B.y[n];

    /* End of MATLAB Function: '<Root>/MATLAB Function' */

    /* DataTypeConversion: '<Root>/Data Type Conversion' incorporates:
     *  Gain: '<Root>/Gain1'
     */
    rtb_Gain = floor(STM32_IIR_test_script_P.Gain1_Gain *
                     STM32_IIR_test_script_B.y[n]);
    if (rtIsNaN(rtb_Gain) || rtIsInf(rtb_Gain)) {
      rtb_Gain = 0.0;
    } else {
      rtb_Gain = fmod(rtb_Gain, 65536.0);
    }

    rtb_AudioInput[n] = (int16_T)(rtb_Gain < 0.0 ? (int32_T)(int16_T)-(int16_T)
      (uint16_T)-rtb_Gain : (int32_T)(int16_T)(uint16_T)rtb_Gain);

    /* End of DataTypeConversion: '<Root>/Data Type Conversion' */

    /* MATLABSystem: '<Root>/Audio Output' */
    nn = n << 1;
    STM32_IIR_test_script_DW.obj_b.CopyBuffer[nn] = rtb_AudioInput[n];
    STM32_IIR_test_script_DW.obj_b.CopyBuffer[1 + nn] = rtb_AudioInput[n + 12];
  }
}

/* Model initialize function */
void STM32_IIR_test_script_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize error status */
  rtmSetErrorStatus(STM32_IIR_test_script_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&STM32_IIR_test_script_DW, 0,
                sizeof(DW_STM32_IIR_test_script_T));

  {
    uint16_T InputDeviceConst;
    uint32_T slotnameConst;

    /* Start for MATLABSystem: '<Root>/Audio Input' */
    STM32_IIR_test_script_DW.obj.matlabCodegenIsDeleted = true;
    STM32_IIR_test_script_DW.obj.isInitialized = 0;
    STM32_IIR_test_script_DW.obj.matlabCodegenIsDeleted = false;
    STM32_IIR_test_script_DW.obj.isSetupComplete = false;
    STM32_IIR_test_script_DW.obj.isInitialized = 1;
    InputDeviceConst = INPUT_DEVICE_ANALOG_MIC;
    BSP_AUDIO_IN_InitEx(InputDeviceConst, 48000U, 16U, 2U);
    MW_BSP_AUDIO_IN_Record(STM32_IIR_test_script_DW.obj.OutputBuffer, 48U);
    STM32_IIR_test_script_DW.obj.isSetupComplete = true;

    /* Start for MATLABSystem: '<Root>/Audio Output' */
    STM32_IIR_test_script_DW.obj_b.matlabCodegenIsDeleted = true;
    STM32_IIR_test_script_DW.obj_b.isInitialized = 0;
    STM32_IIR_test_script_DW.obj_b.matlabCodegenIsDeleted = false;
    STM32_IIR_test_script_DW.obj_b.isSetupComplete = false;
    STM32_IIR_test_script_DW.obj_b.isInitialized = 1;
    InputDeviceConst = OUTPUT_DEVICE_HEADPHONE;
    slotnameConst = CODEC_AUDIOFRAME_SLOT_02;
    BSP_AUDIO_OUT_Init(InputDeviceConst, 65, 48000U);
    BSP_AUDIO_OUT_SetAudioFrameSlot((uint32_T)slotnameConst);
    MW_BSP_AUDIO_OUT_Play(STM32_IIR_test_script_DW.obj_b.CopyBuffer, 96U);
    STM32_IIR_test_script_DW.obj_b.isSetupComplete = true;

    /* InitializeConditions for Memory: '<Root>/Memory' */
    memcpy(&STM32_IIR_test_script_DW.Memory_PreviousInput[0],
           &STM32_IIR_test_script_P.Memory_InitialCondition[0], 26U * sizeof
           (real_T));

    /* InitializeConditions for Memory: '<Root>/Memory1' */
    memcpy(&STM32_IIR_test_script_DW.Memory1_PreviousInput[0],
           &STM32_IIR_test_script_P.Memory1_InitialCondition[0], 26U * sizeof
           (real_T));
  }
}

/* Model terminate function */
void STM32_IIR_test_script_terminate(void)
{
  /* Terminate for MATLABSystem: '<Root>/Audio Input' */
  matlabCodegenHandle_matlabCod_m(&STM32_IIR_test_script_DW.obj);

  /* Terminate for MATLABSystem: '<Root>/Audio Output' */
  matlabCodegenHandle_matlabCodeg(&STM32_IIR_test_script_DW.obj_b);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
