/*
 * File: STM32_FIR_wrap.c
 *
 * Code generated for Simulink model 'STM32_FIR_wrap'.
 *
 * Model version                  : 1.29
 * Simulink Coder version         : 8.14 (R2018a) 06-Feb-2018
 * C/C++ source code generated on : Wed Aug 29 14:16:44 2018
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "STM32_FIR_wrap.h"
#include "STM32_FIR_wrap_private.h"
#define STM32_FIR_wrap_Volume          (65.0)

/* Block signals (default storage) */
B_STM32_FIR_wrap_T STM32_FIR_wrap_B;

/* Block states (default storage) */
DW_STM32_FIR_wrap_T STM32_FIR_wrap_DW;

/* Real-time model */
RT_MODEL_STM32_FIR_wrap_T STM32_FIR_wrap_M_;
RT_MODEL_STM32_FIR_wrap_T *const STM32_FIR_wrap_M = &STM32_FIR_wrap_M_;

/* Forward declaration for local functions */
static void SystemProp_matlabCodegenSetAn_o(stm32f769idiscovery_AudioInpu_T *obj,
  boolean_T value);
static void STM32_FIR__SystemCore_release_o(const
  stm32f769idiscovery_AudioInpu_T *obj);
static void STM32_FIR_w_SystemCore_delete_o(const
  stm32f769idiscovery_AudioInpu_T *obj);
static void matlabCodegenHandle_matlabCod_o(stm32f769idiscovery_AudioInpu_T *obj);
static void SystemProp_matlabCodegenSetAnyP(stm32f769idiscovery_AudioOutp_T *obj,
  boolean_T value);
static void STM32_FIR_wr_SystemCore_release(const
  stm32f769idiscovery_AudioOutp_T *obj);
static void STM32_FIR_wra_SystemCore_delete(const
  stm32f769idiscovery_AudioOutp_T *obj);
static void matlabCodegenHandle_matlabCodeg(stm32f769idiscovery_AudioOutp_T *obj);
static void SystemProp_matlabCodegenSetAn_o(stm32f769idiscovery_AudioInpu_T *obj,
  boolean_T value)
{
  /* Start for MATLABSystem: '<Root>/Audio Input' */
  obj->matlabCodegenIsDeleted = value;
}

static void STM32_FIR__SystemCore_release_o(const
  stm32f769idiscovery_AudioInpu_T *obj)
{
  /* Start for MATLABSystem: '<Root>/Audio Input' */
  if ((obj->isInitialized == 1) && obj->isSetupComplete) {
    BSP_AUDIO_IN_Stop();
  }

  /* End of Start for MATLABSystem: '<Root>/Audio Input' */
}

static void STM32_FIR_w_SystemCore_delete_o(const
  stm32f769idiscovery_AudioInpu_T *obj)
{
  /* Start for MATLABSystem: '<Root>/Audio Input' */
  STM32_FIR__SystemCore_release_o(obj);
}

static void matlabCodegenHandle_matlabCod_o(stm32f769idiscovery_AudioInpu_T *obj)
{
  /* Start for MATLABSystem: '<Root>/Audio Input' */
  if (!obj->matlabCodegenIsDeleted) {
    SystemProp_matlabCodegenSetAn_o(obj, true);
    STM32_FIR_w_SystemCore_delete_o(obj);
  }

  /* End of Start for MATLABSystem: '<Root>/Audio Input' */
}

static void SystemProp_matlabCodegenSetAnyP(stm32f769idiscovery_AudioOutp_T *obj,
  boolean_T value)
{
  /* Start for MATLABSystem: '<Root>/Audio Output' */
  obj->matlabCodegenIsDeleted = value;
}

static void STM32_FIR_wr_SystemCore_release(const
  stm32f769idiscovery_AudioOutp_T *obj)
{
  uint32_T ShutDownConst;

  /* Start for MATLABSystem: '<Root>/Audio Output' */
  if ((obj->isInitialized == 1) && obj->isSetupComplete) {
    ShutDownConst = CODEC_PDWN_SW;
    BSP_AUDIO_OUT_Stop(ShutDownConst);
  }

  /* End of Start for MATLABSystem: '<Root>/Audio Output' */
}

static void STM32_FIR_wra_SystemCore_delete(const
  stm32f769idiscovery_AudioOutp_T *obj)
{
  /* Start for MATLABSystem: '<Root>/Audio Output' */
  STM32_FIR_wr_SystemCore_release(obj);
}

static void matlabCodegenHandle_matlabCodeg(stm32f769idiscovery_AudioOutp_T *obj)
{
  /* Start for MATLABSystem: '<Root>/Audio Output' */
  if (!obj->matlabCodegenIsDeleted) {
    SystemProp_matlabCodegenSetAnyP(obj, true);
    STM32_FIR_wra_SystemCore_delete(obj);
  }

  /* End of Start for MATLABSystem: '<Root>/Audio Output' */
}

/* Model step function */
void STM32_FIR_wrap_step(void)
{
  int32_T nn;
  static const real_T b[31] = { 0.0, 0.00120143, 0.00278433, 0.00422732,
    0.00394276, -0.0, -0.00825678, -0.01858321, -0.02538982, -0.02123531, 0.0,
    0.03958811, 0.09188888, 0.14509908, 0.18490288, 0.19966067, 0.18490288,
    0.14509908, 0.09188888, 0.03958811, 0.0, -0.02123531, -0.02538982,
    -0.01858321, -0.00825678, -0.0, 0.00394276, 0.00422732, 0.00278433,
    0.00120143, 0.0 };

  int16_T rtb_AudioInput[24];
  int32_T n;
  real_T tmp;

  /* MATLABSystem: '<Root>/Audio Input' */
  for (n = 0; n < 2; n++) {
    for (nn = 0; nn < 12; nn++) {
      rtb_AudioInput[nn + 12 * n] = STM32_FIR_wrap_DW.obj.OutputBuffer[(nn << 1)
        + n];
    }
  }

  /* End of MATLABSystem: '<Root>/Audio Input' */

  /* MATLAB Function: '<Root>/MATLAB Function' incorporates:
   *  Constant: '<Root>/Constant'
   *  Gain: '<Root>/Gain'
   *  Memory: '<Root>/Memory'
   *  Selector: '<Root>/Selector1'
   */
  STM32_FIR_wrap_B.xm[0] = STM32_FIR_wrap_DW.Memory_PreviousInput[30];
  for (n = 0; n < 12; n++) {
    STM32_FIR_wrap_B.y[n] = 1.0;
    STM32_FIR_wrap_B.xm[n + 1] = (real_T)STM32_FIR_wrap_P.Gain_Gain *
      1.862645149230957E-9 * (real_T)rtb_AudioInput[n];
    STM32_FIR_wrap_DW.Memory_PreviousInput[31] =
      STM32_FIR_wrap_DW.Memory_PreviousInput[0];
    STM32_FIR_wrap_DW.Memory_PreviousInput[0] =
      (STM32_FIR_wrap_DW.Memory_PreviousInput[31] - STM32_FIR_wrap_B.xm[n + 1]) *
      STM32_FIR_wrap_P.Constant_Value + STM32_FIR_wrap_B.xm[n];
    STM32_FIR_wrap_B.y[n] = STM32_FIR_wrap_B.xm[n + 1] * 0.0 + 0.00120143 *
      STM32_FIR_wrap_DW.Memory_PreviousInput[0];
    for (nn = 0; nn < 29; nn++) {
      STM32_FIR_wrap_DW.Memory_PreviousInput[nn + 32] =
        STM32_FIR_wrap_DW.Memory_PreviousInput[nn + 1];
      STM32_FIR_wrap_DW.Memory_PreviousInput[nn + 1] =
        (STM32_FIR_wrap_DW.Memory_PreviousInput[nn + 32] -
         STM32_FIR_wrap_DW.Memory_PreviousInput[nn]) *
        STM32_FIR_wrap_P.Constant_Value +
        STM32_FIR_wrap_DW.Memory_PreviousInput[31 + nn];
      STM32_FIR_wrap_B.y[n] += b[nn + 2] *
        STM32_FIR_wrap_DW.Memory_PreviousInput[nn + 1];
    }
  }

  STM32_FIR_wrap_DW.Memory_PreviousInput[30] = STM32_FIR_wrap_B.xm[12];

  /* End of MATLAB Function: '<Root>/MATLAB Function' */
  for (n = 0; n < 12; n++) {
    /* DataTypeConversion: '<Root>/Data Type Conversion' incorporates:
     *  Gain: '<Root>/Gain1'
     */
    tmp = floor(STM32_FIR_wrap_P.Gain1_Gain * STM32_FIR_wrap_B.y[n]);
    if (rtIsNaN(tmp) || rtIsInf(tmp)) {
      tmp = 0.0;
    } else {
      tmp = fmod(tmp, 65536.0);
    }

    rtb_AudioInput[n] = (int16_T)(tmp < 0.0 ? (int32_T)(int16_T)-(int16_T)
      (uint16_T)-tmp : (int32_T)(int16_T)(uint16_T)tmp);

    /* End of DataTypeConversion: '<Root>/Data Type Conversion' */

    /* Start for MATLABSystem: '<Root>/Audio Output' */
    STM32_FIR_wrap_DW.obj_b.CopyBuffer[n << 1] = rtb_AudioInput[n];
    STM32_FIR_wrap_DW.obj_b.CopyBuffer[1 + (n << 1)] = rtb_AudioInput[n + 12];
  }
}

/* Model initialize function */
void STM32_FIR_wrap_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize error status */
  rtmSetErrorStatus(STM32_FIR_wrap_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&STM32_FIR_wrap_DW, 0,
                sizeof(DW_STM32_FIR_wrap_T));

  {
    uint16_T InputDeviceConst;
    uint32_T slotnameConst;

    /* Start for MATLABSystem: '<Root>/Audio Input' */
    STM32_FIR_wrap_DW.obj.matlabCodegenIsDeleted = true;
    STM32_FIR_wrap_DW.obj.isInitialized = 0;
    STM32_FIR_wrap_DW.obj.matlabCodegenIsDeleted = false;
    STM32_FIR_wrap_DW.obj.isSetupComplete = false;
    STM32_FIR_wrap_DW.obj.isInitialized = 1;
    InputDeviceConst = INPUT_DEVICE_ANALOG_MIC;
    BSP_AUDIO_IN_InitEx(InputDeviceConst, 48000U, 16U, 2U);
    MW_BSP_AUDIO_IN_Record(STM32_FIR_wrap_DW.obj.OutputBuffer, 48U);
    STM32_FIR_wrap_DW.obj.isSetupComplete = true;

    /* Start for MATLABSystem: '<Root>/Audio Output' */
    STM32_FIR_wrap_DW.obj_b.matlabCodegenIsDeleted = true;
    STM32_FIR_wrap_DW.obj_b.isInitialized = 0;
    STM32_FIR_wrap_DW.obj_b.matlabCodegenIsDeleted = false;
    STM32_FIR_wrap_DW.obj_b.isSetupComplete = false;
    STM32_FIR_wrap_DW.obj_b.isInitialized = 1;
    InputDeviceConst = OUTPUT_DEVICE_HEADPHONE;
    slotnameConst = CODEC_AUDIOFRAME_SLOT_02;
    BSP_AUDIO_OUT_Init(InputDeviceConst, (uint8_T)STM32_FIR_wrap_Volume, 48000U);
    BSP_AUDIO_OUT_SetAudioFrameSlot((uint32_T)slotnameConst);
    MW_BSP_AUDIO_OUT_Play(STM32_FIR_wrap_DW.obj_b.CopyBuffer, 96U);
    STM32_FIR_wrap_DW.obj_b.isSetupComplete = true;

    /* InitializeConditions for Memory: '<Root>/Memory' */
    memcpy(&STM32_FIR_wrap_DW.Memory_PreviousInput[0],
           &STM32_FIR_wrap_P.Memory_InitialCondition[0], 62U * sizeof(real_T));
  }
}

/* Model terminate function */
void STM32_FIR_wrap_terminate(void)
{
  /* Terminate for MATLABSystem: '<Root>/Audio Input' */
  matlabCodegenHandle_matlabCod_o(&STM32_FIR_wrap_DW.obj);

  /* Terminate for MATLABSystem: '<Root>/Audio Output' */
  matlabCodegenHandle_matlabCodeg(&STM32_FIR_wrap_DW.obj_b);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
