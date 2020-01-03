/*
 * File: STM32_FIR_test_script.c
 *
 * Code generated for Simulink model 'STM32_FIR_test_script'.
 *
 * Model version                  : 1.22
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Fri Dec 20 12:39:13 2019
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "STM32_FIR_test_script.h"
#include "STM32_FIR_test_script_private.h"

/* Block signals (default storage) */
B_STM32_FIR_test_script_T STM32_FIR_test_script_B;

/* Block states (default storage) */
DW_STM32_FIR_test_script_T STM32_FIR_test_script_DW;

/* Real-time model */
RT_MODEL_STM32_FIR_test_scrip_T STM32_FIR_test_script_M_;
RT_MODEL_STM32_FIR_test_scrip_T *const STM32_FIR_test_script_M =
  &STM32_FIR_test_script_M_;

/* Forward declaration for local functions */
static void STM32_FIR__SystemCore_release_p(const
  stm32f769idiscovery_AudioInpu_T *obj);
static void STM32_FIR_t_SystemCore_delete_p(const
  stm32f769idiscovery_AudioInpu_T *obj);
static void matlabCodegenHandle_matlabCod_p(stm32f769idiscovery_AudioInpu_T *obj);
static void STM32_FIR_te_SystemCore_release(const
  stm32f769idiscovery_AudioOutp_T *obj);
static void STM32_FIR_tes_SystemCore_delete(const
  stm32f769idiscovery_AudioOutp_T *obj);
static void matlabCodegenHandle_matlabCodeg(stm32f769idiscovery_AudioOutp_T *obj);
static void STM32_FIR__SystemCore_release_p(const
  stm32f769idiscovery_AudioInpu_T *obj)
{
  if ((obj->isInitialized == 1) && obj->isSetupComplete) {
    BSP_AUDIO_IN_Stop();
  }
}

static void STM32_FIR_t_SystemCore_delete_p(const
  stm32f769idiscovery_AudioInpu_T *obj)
{
  STM32_FIR__SystemCore_release_p(obj);
}

static void matlabCodegenHandle_matlabCod_p(stm32f769idiscovery_AudioInpu_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    STM32_FIR_t_SystemCore_delete_p(obj);
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
void STM32_FIR_test_script_step(void)
{
  int32_T nn;
  static const real_T b[91] = { 0.0, 0.000344388332301, 0.000593781079195,
    0.000648041027613, 0.000445668976708, -0.0, -0.000573654534002,
    -0.001064568443825, -0.001224479966645, -0.000870953124588, 0.0,
    0.001148822871272, 0.002126699151061, 0.002425469036834, 0.001703899084196,
    -0.0, -0.002179402971244, -0.00396890814345, -0.004453648220912,
    -0.003080112368334, 0.0, 0.003828695228993, 0.006885204038667,
    0.007639273122291, 0.005231059848285, -0.0, -0.006403053722797,
    -0.011454177756395, -0.012664369033126, -0.008658641008984, 0.0,
    0.010637147907124, 0.019139130184696, 0.021353552466227, 0.01478917860787,
    -0.0, -0.018931847758297, -0.035139742851732, -0.040852871530627,
    -0.029894735913956, 0.0, 0.045867128566198, 0.09973532613999,
    0.150445557587165, 0.186587855688577, 0.199678576807297, 0.186587855688577,
    0.150445557587165, 0.09973532613999, 0.045867128566198, 0.0,
    -0.029894735913956, -0.040852871530627, -0.035139742851732,
    -0.018931847758297, -0.0, 0.01478917860787, 0.021353552466227,
    0.019139130184696, 0.010637147907124, 0.0, -0.008658641008984,
    -0.012664369033126, -0.011454177756395, -0.006403053722797, -0.0,
    0.005231059848285, 0.007639273122291, 0.006885204038667, 0.003828695228993,
    0.0, -0.003080112368334, -0.004453648220912, -0.00396890814345,
    -0.002179402971244, -0.0, 0.001703899084196, 0.002425469036834,
    0.002126699151061, 0.001148822871272, 0.0, -0.000870953124588,
    -0.001224479966645, -0.001064568443825, -0.000573654534002, -0.0,
    0.000445668976708, 0.000648041027613, 0.000593781079195, 0.000344388332301,
    0.0 };

  int16_T rtb_AudioInput[24];
  int32_T n;
  real_T rtb_Gain;

  /* MATLABSystem: '<Root>/Audio Input' */
  for (nn = 0; nn < 2; nn++) {
    for (n = 0; n < 12; n++) {
      rtb_AudioInput[n + 12 * nn] = STM32_FIR_test_script_DW.obj.OutputBuffer[(n
        << 1) + nn];
    }
  }

  /* End of MATLABSystem: '<Root>/Audio Input' */
  for (n = 0; n < 12; n++) {
    /* Gain: '<Root>/Gain' incorporates:
     *  Selector: '<Root>/Selector1'
     */
    rtb_Gain = (real_T)STM32_FIR_test_script_P.Gain_Gain * 1.862645149230957E-9 *
      (real_T)rtb_AudioInput[n];

    /* MATLAB Function: '<Root>/MATLAB Function' */
    STM32_FIR_test_script_B.y[n] = 1.0;
    STM32_FIR_test_script_B.y[n] = 0.0 * rtb_Gain;
    for (nn = 0; nn < 90; nn++) {
      STM32_FIR_test_script_B.y[n] += b[nn + 1] *
        STM32_FIR_test_script_DW.Memory_PreviousInput[nn];
    }

    for (nn = 0; nn < 89; nn++) {
      STM32_FIR_test_script_DW.Memory_PreviousInput[89 - nn] =
        STM32_FIR_test_script_DW.Memory_PreviousInput[88 - nn];
    }

    STM32_FIR_test_script_DW.Memory_PreviousInput[0] = rtb_Gain;

    /* End of MATLAB Function: '<Root>/MATLAB Function' */

    /* DataTypeConversion: '<Root>/Data Type Conversion' incorporates:
     *  Gain: '<Root>/Gain1'
     */
    rtb_Gain = floor(STM32_FIR_test_script_P.Gain1_Gain *
                     STM32_FIR_test_script_B.y[n]);
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
    STM32_FIR_test_script_DW.obj_b.CopyBuffer[nn] = rtb_AudioInput[n];
    STM32_FIR_test_script_DW.obj_b.CopyBuffer[1 + nn] = rtb_AudioInput[n + 12];
  }
}

/* Model initialize function */
void STM32_FIR_test_script_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize error status */
  rtmSetErrorStatus(STM32_FIR_test_script_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&STM32_FIR_test_script_DW, 0,
                sizeof(DW_STM32_FIR_test_script_T));

  {
    uint16_T InputDeviceConst;
    uint32_T slotnameConst;

    /* Start for MATLABSystem: '<Root>/Audio Input' */
    STM32_FIR_test_script_DW.obj.matlabCodegenIsDeleted = true;
    STM32_FIR_test_script_DW.obj.isInitialized = 0;
    STM32_FIR_test_script_DW.obj.matlabCodegenIsDeleted = false;
    STM32_FIR_test_script_DW.obj.isSetupComplete = false;
    STM32_FIR_test_script_DW.obj.isInitialized = 1;
    InputDeviceConst = INPUT_DEVICE_ANALOG_MIC;
    BSP_AUDIO_IN_InitEx(InputDeviceConst, 48000U, 16U, 2U);
    MW_BSP_AUDIO_IN_Record(STM32_FIR_test_script_DW.obj.OutputBuffer, 48U);
    STM32_FIR_test_script_DW.obj.isSetupComplete = true;

    /* Start for MATLABSystem: '<Root>/Audio Output' */
    STM32_FIR_test_script_DW.obj_b.matlabCodegenIsDeleted = true;
    STM32_FIR_test_script_DW.obj_b.isInitialized = 0;
    STM32_FIR_test_script_DW.obj_b.matlabCodegenIsDeleted = false;
    STM32_FIR_test_script_DW.obj_b.isSetupComplete = false;
    STM32_FIR_test_script_DW.obj_b.isInitialized = 1;
    InputDeviceConst = OUTPUT_DEVICE_HEADPHONE;
    slotnameConst = CODEC_AUDIOFRAME_SLOT_02;
    BSP_AUDIO_OUT_Init(InputDeviceConst, 65, 48000U);
    BSP_AUDIO_OUT_SetAudioFrameSlot((uint32_T)slotnameConst);
    MW_BSP_AUDIO_OUT_Play(STM32_FIR_test_script_DW.obj_b.CopyBuffer, 96U);
    STM32_FIR_test_script_DW.obj_b.isSetupComplete = true;

    /* InitializeConditions for Memory: '<Root>/Memory' */
    memcpy(&STM32_FIR_test_script_DW.Memory_PreviousInput[0],
           &STM32_FIR_test_script_P.Memory_InitialCondition[0], 90U * sizeof
           (real_T));
  }
}

/* Model terminate function */
void STM32_FIR_test_script_terminate(void)
{
  /* Terminate for MATLABSystem: '<Root>/Audio Input' */
  matlabCodegenHandle_matlabCod_p(&STM32_FIR_test_script_DW.obj);

  /* Terminate for MATLABSystem: '<Root>/Audio Output' */
  matlabCodegenHandle_matlabCodeg(&STM32_FIR_test_script_DW.obj_b);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
