/*
 * File: STM32_FIR_wrap_sym.c
 *
 * Code generated for Simulink model 'STM32_FIR_wrap_sym'.
 *
 * Model version                  : 1.54
 * Simulink Coder version         : 8.14 (R2018a) 06-Feb-2018
 * C/C++ source code generated on : Wed Oct  3 14:36:18 2018
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "STM32_FIR_wrap_sym.h"
#include "STM32_FIR_wrap_sym_private.h"
#include "STM32_FIR_wrap_sym_dt.h"
#define STM32_FIR_wrap_sym_Volume      (64.0)

/* Block signals (default storage) */
B_STM32_FIR_wrap_sym_T STM32_FIR_wrap_sym_B;

/* Block states (default storage) */
DW_STM32_FIR_wrap_sym_T STM32_FIR_wrap_sym_DW;

/* Real-time model */
RT_MODEL_STM32_FIR_wrap_sym_T STM32_FIR_wrap_sym_M_;
RT_MODEL_STM32_FIR_wrap_sym_T *const STM32_FIR_wrap_sym_M =
  &STM32_FIR_wrap_sym_M_;

/* Forward declaration for local functions */
static void SystemProp_matlabCodegenSetA_ms(stm32f769idiscovery_AudioInpu_T *obj,
  boolean_T value);
static void STM32_FIR_SystemCore_release_ms(const
  stm32f769idiscovery_AudioInpu_T *obj);
static void STM32_FIR__SystemCore_delete_ms(const
  stm32f769idiscovery_AudioInpu_T *obj);
static void matlabCodegenHandle_matlabCo_ms(stm32f769idiscovery_AudioInpu_T *obj);
static void SystemProp_matlabCodegenSetAn_m(mbed_DigitalWrite_STM32_FIR_w_T *obj,
  boolean_T value);
static void STM32_FIR__SystemCore_release_m(const
  mbed_DigitalWrite_STM32_FIR_w_T *obj);
static void STM32_FIR_w_SystemCore_delete_m(const
  mbed_DigitalWrite_STM32_FIR_w_T *obj);
static void matlabCodegenHandle_matlabCod_m(mbed_DigitalWrite_STM32_FIR_w_T *obj);
static void SystemProp_matlabCodegenSetAnyP(stm32f769idiscovery_AudioOutp_T *obj,
  boolean_T value);
static void STM32_FIR_wr_SystemCore_release(const
  stm32f769idiscovery_AudioOutp_T *obj);
static void STM32_FIR_wra_SystemCore_delete(const
  stm32f769idiscovery_AudioOutp_T *obj);
static void matlabCodegenHandle_matlabCodeg(stm32f769idiscovery_AudioOutp_T *obj);
static void SystemProp_matlabCodegenSetA_ms(stm32f769idiscovery_AudioInpu_T *obj,
  boolean_T value)
{
  /* Start for MATLABSystem: '<Root>/Audio Input' */
  obj->matlabCodegenIsDeleted = value;
}

static void STM32_FIR_SystemCore_release_ms(const
  stm32f769idiscovery_AudioInpu_T *obj)
{
  /* Start for MATLABSystem: '<Root>/Audio Input' */
  if ((obj->isInitialized == 1) && obj->isSetupComplete) {
    BSP_AUDIO_IN_Stop();
  }

  /* End of Start for MATLABSystem: '<Root>/Audio Input' */
}

static void STM32_FIR__SystemCore_delete_ms(const
  stm32f769idiscovery_AudioInpu_T *obj)
{
  /* Start for MATLABSystem: '<Root>/Audio Input' */
  STM32_FIR_SystemCore_release_ms(obj);
}

static void matlabCodegenHandle_matlabCo_ms(stm32f769idiscovery_AudioInpu_T *obj)
{
  /* Start for MATLABSystem: '<Root>/Audio Input' */
  if (!obj->matlabCodegenIsDeleted) {
    SystemProp_matlabCodegenSetA_ms(obj, true);
    STM32_FIR__SystemCore_delete_ms(obj);
  }

  /* End of Start for MATLABSystem: '<Root>/Audio Input' */
}

static void SystemProp_matlabCodegenSetAn_m(mbed_DigitalWrite_STM32_FIR_w_T *obj,
  boolean_T value)
{
  /* Start for MATLABSystem: '<Root>/Digital Write1' */
  obj->matlabCodegenIsDeleted = value;
}

static void STM32_FIR__SystemCore_release_m(const
  mbed_DigitalWrite_STM32_FIR_w_T *obj)
{
  /* Start for MATLABSystem: '<Root>/Digital Write1' */
  if ((obj->isInitialized == 1) && obj->isSetupComplete) {
    MW_digitalIO_close(obj->MW_DIGITALIO_HANDLE);
  }

  /* End of Start for MATLABSystem: '<Root>/Digital Write1' */
}

static void STM32_FIR_w_SystemCore_delete_m(const
  mbed_DigitalWrite_STM32_FIR_w_T *obj)
{
  /* Start for MATLABSystem: '<Root>/Digital Write1' */
  STM32_FIR__SystemCore_release_m(obj);
}

static void matlabCodegenHandle_matlabCod_m(mbed_DigitalWrite_STM32_FIR_w_T *obj)
{
  /* Start for MATLABSystem: '<Root>/Digital Write1' */
  if (!obj->matlabCodegenIsDeleted) {
    SystemProp_matlabCodegenSetAn_m(obj, true);
    STM32_FIR_w_SystemCore_delete_m(obj);
  }

  /* End of Start for MATLABSystem: '<Root>/Digital Write1' */
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
void STM32_FIR_wrap_sym_step(void)
{
  real_T fc1;
  real_T fc2;
  int32_T nn;
  static const real_T b[51] = { 0.00101759, -0.0, -0.00130589, 0.0, 0.00207303,
    -0.0, -0.00342558, 0.0, 0.00549051, -0.0, -0.00843441, 0.0, 0.0125026, -0.0,
    -0.01810261, 0.0, 0.02600015, -0.0, -0.0378515, 0.0, 0.05801218, -0.0,
    -0.10257517, 0.0, 0.31684426, 0.49950965, 0.31684426, 0.0, -0.10257517, -0.0,
    0.05801218, 0.0, -0.0378515, -0.0, 0.02600015, 0.0, -0.01810261, -0.0,
    0.0125026, 0.0, -0.00843441, -0.0, 0.00549051, 0.0, -0.00342558, -0.0,
    0.00207303, 0.0, -0.00130589, -0.0, 0.00101759 };

  static const real_T b_0[51] = { -0.00101759, -0.0, 0.00130589, -0.0,
    -0.00207303, -0.0, 0.00342558, -0.0, -0.00549051, -0.0, 0.00843441, -0.0,
    -0.0125026, -0.0, 0.01810261, -0.0, -0.02600015, -0.0, 0.0378515, -0.0,
    -0.05801218, -0.0, 0.10257517, -0.0, -0.31684426, 0.49950965, -0.31684426,
    -0.0, 0.10257517, -0.0, -0.05801218, -0.0, 0.0378515, -0.0, -0.02600015,
    -0.0, 0.01810261, -0.0, -0.0125026, -0.0, 0.00843441, -0.0, -0.00549051,
    -0.0, 0.00342558, -0.0, -0.00207303, -0.0, 0.00130589, -0.0, -0.00101759 };

  int32_T i;
  boolean_T tmp;
  real_T rtb_Gain;

  /* MATLAB Function: '<Root>/MATLAB Function2' incorporates:
   *  Constant: '<Root>/Band Width'
   *  Constant: '<Root>/Center Frequency'
   *  Constant: '<Root>/Mode'
   */
  fc1 = 0.0;
  fc2 = 0.0;
  if (STM32_FIR_wrap_sym_P.Mode_Value == 0.0) {
    fc1 = STM32_FIR_wrap_sym_P.CenterFrequency_Value -
      STM32_FIR_wrap_sym_P.BandWidth_Value / 2.0;
    fc2 = STM32_FIR_wrap_sym_P.BandWidth_Value / 2.0 +
      STM32_FIR_wrap_sym_P.CenterFrequency_Value;
  } else {
    if (STM32_FIR_wrap_sym_P.Mode_Value == 1.0) {
      fc1 = STM32_FIR_wrap_sym_P.BandWidth_Value / 2.0 +
        STM32_FIR_wrap_sym_P.CenterFrequency_Value;
      fc2 = STM32_FIR_wrap_sym_P.CenterFrequency_Value -
        STM32_FIR_wrap_sym_P.BandWidth_Value / 2.0;
    }
  }

  fc1 = sin((0.5 - fc1) * 3.1415926535897931 / 2.0) / sin((0.5 + fc1) *
    3.1415926535897931 / 2.0);
  fc2 = sin((0.5 - fc2) * 3.1415926535897931 / 2.0) / sin((0.5 + fc2) *
    3.1415926535897931 / 2.0);

  /* End of MATLAB Function: '<Root>/MATLAB Function2' */

  /* MATLABSystem: '<Root>/Audio Input' */
  for (i = 0; i < 2; i++) {
    for (nn = 0; nn < 12; nn++) {
      STM32_FIR_wrap_sym_B.AudioInput[nn + 12 * i] =
        STM32_FIR_wrap_sym_DW.obj.OutputBuffer[(nn << 1) + i];
    }
  }

  /* End of MATLABSystem: '<Root>/Audio Input' */

  /* MATLAB Function: '<Root>/Low_Pass' incorporates:
   *  Memory: '<Root>/Memory'
   */
  STM32_FIR_wrap_sym_B.xm[0] = STM32_FIR_wrap_sym_DW.Memory_PreviousInput[50];
  for (i = 0; i < 12; i++) {
    /* Gain: '<Root>/Gain' incorporates:
     *  Selector: '<Root>/Selector1'
     */
    rtb_Gain = (real_T)STM32_FIR_wrap_sym_P.Gain_Gain * 1.862645149230957E-9 *
      (real_T)STM32_FIR_wrap_sym_B.AudioInput[i];

    /* MATLAB Function: '<Root>/Low_Pass' */
    STM32_FIR_wrap_sym_B.y[i] = 1.0;
    STM32_FIR_wrap_sym_B.xm[i + 1] = rtb_Gain;
    STM32_FIR_wrap_sym_DW.Memory_PreviousInput[51] =
      STM32_FIR_wrap_sym_DW.Memory_PreviousInput[0];
    STM32_FIR_wrap_sym_DW.Memory_PreviousInput[0] =
      (STM32_FIR_wrap_sym_DW.Memory_PreviousInput[51] -
       STM32_FIR_wrap_sym_B.xm[i + 1]) * fc1 + STM32_FIR_wrap_sym_B.xm[i];
    for (nn = 0; nn < 49; nn++) {
      STM32_FIR_wrap_sym_DW.Memory_PreviousInput[nn + 52] =
        STM32_FIR_wrap_sym_DW.Memory_PreviousInput[nn + 1];
      STM32_FIR_wrap_sym_DW.Memory_PreviousInput[nn + 1] =
        (STM32_FIR_wrap_sym_DW.Memory_PreviousInput[nn + 52] -
         STM32_FIR_wrap_sym_DW.Memory_PreviousInput[nn]) * fc1 +
        STM32_FIR_wrap_sym_DW.Memory_PreviousInput[51 + nn];
    }

    STM32_FIR_wrap_sym_B.y[i] = (STM32_FIR_wrap_sym_B.xm[i + 1] +
      STM32_FIR_wrap_sym_DW.Memory_PreviousInput[49]) * 0.00101759 + 0.49950965 *
      STM32_FIR_wrap_sym_DW.Memory_PreviousInput[24];
    for (nn = 0; nn < 24; nn++) {
      STM32_FIR_wrap_sym_B.y[i] += (STM32_FIR_wrap_sym_DW.Memory_PreviousInput
        [48 - nn] + STM32_FIR_wrap_sym_DW.Memory_PreviousInput[nn]) * b[nn + 1];
    }

    /* MATLAB Function: '<Root>/Hight Pass' */
    STM32_FIR_wrap_sym_B.y_d[i] = 1.0;

    /* Gain: '<Root>/Gain' */
    STM32_FIR_wrap_sym_B.Gain[i] = rtb_Gain;
  }

  /* MATLAB Function: '<Root>/Low_Pass' */
  STM32_FIR_wrap_sym_DW.Memory_PreviousInput[50] = STM32_FIR_wrap_sym_B.xm[12];

  /* Switch: '<Root>/Switch' incorporates:
   *  Constant: '<Root>/Mode'
   */
  tmp = (STM32_FIR_wrap_sym_P.Mode_Value != 0.0);

  /* MATLAB Function: '<Root>/Hight Pass' incorporates:
   *  Memory: '<Root>/Memory1'
   */
  STM32_FIR_wrap_sym_B.xm[0] = STM32_FIR_wrap_sym_DW.Memory1_PreviousInput[50];
  for (i = 0; i < 12; i++) {
    /* Switch: '<Root>/Switch' */
    if (tmp) {
      STM32_FIR_wrap_sym_B.xm[i + 1] = STM32_FIR_wrap_sym_B.y[i];
    } else {
      STM32_FIR_wrap_sym_B.xm[i + 1] = STM32_FIR_wrap_sym_B.Gain[i];
    }

    STM32_FIR_wrap_sym_DW.Memory1_PreviousInput[51] =
      STM32_FIR_wrap_sym_DW.Memory1_PreviousInput[0];
    STM32_FIR_wrap_sym_DW.Memory1_PreviousInput[0] =
      (STM32_FIR_wrap_sym_DW.Memory1_PreviousInput[51] -
       STM32_FIR_wrap_sym_B.xm[i + 1]) * fc2 + STM32_FIR_wrap_sym_B.xm[i];
    for (nn = 0; nn < 49; nn++) {
      STM32_FIR_wrap_sym_DW.Memory1_PreviousInput[nn + 52] =
        STM32_FIR_wrap_sym_DW.Memory1_PreviousInput[nn + 1];
      STM32_FIR_wrap_sym_DW.Memory1_PreviousInput[nn + 1] =
        (STM32_FIR_wrap_sym_DW.Memory1_PreviousInput[nn + 52] -
         STM32_FIR_wrap_sym_DW.Memory1_PreviousInput[nn]) * fc2 +
        STM32_FIR_wrap_sym_DW.Memory1_PreviousInput[51 + nn];
    }

    STM32_FIR_wrap_sym_B.y_d[i] = (STM32_FIR_wrap_sym_B.xm[i + 1] +
      STM32_FIR_wrap_sym_DW.Memory1_PreviousInput[49]) * -0.00101759 +
      0.49950965 * STM32_FIR_wrap_sym_DW.Memory1_PreviousInput[24];
    for (nn = 0; nn < 24; nn++) {
      STM32_FIR_wrap_sym_B.y_d[i] +=
        (STM32_FIR_wrap_sym_DW.Memory1_PreviousInput[48 - nn] +
         STM32_FIR_wrap_sym_DW.Memory1_PreviousInput[nn]) * b_0[nn + 1];
    }
  }

  STM32_FIR_wrap_sym_DW.Memory1_PreviousInput[50] = STM32_FIR_wrap_sym_B.xm[12];
  for (i = 0; i < 12; i++) {
    /* Switch: '<Root>/Switch1' incorporates:
     *  Constant: '<Root>/Constant3'
     *  Constant: '<Root>/Mode'
     */
    if (STM32_FIR_wrap_sym_P.Mode_Value != 0.0) {
      fc1 = STM32_FIR_wrap_sym_P.Constant3_Value;
    } else {
      fc1 = STM32_FIR_wrap_sym_B.y[i];
    }

    /* End of Switch: '<Root>/Switch1' */

    /* DataTypeConversion: '<Root>/Data Type Conversion' incorporates:
     *  Gain: '<Root>/Gain1'
     *  Sum: '<Root>/Sum'
     */
    fc1 = floor((fc1 + STM32_FIR_wrap_sym_B.y_d[i]) *
                STM32_FIR_wrap_sym_P.Gain1_Gain);
    if (rtIsNaN(fc1) || rtIsInf(fc1)) {
      fc1 = 0.0;
    } else {
      fc1 = fmod(fc1, 65536.0);
    }

    STM32_FIR_wrap_sym_B.MatrixConcatenate[i] = (int16_T)(fc1 < 0.0 ? (int32_T)
      (int16_T)-(int16_T)(uint16_T)-fc1 : (int32_T)(int16_T)(uint16_T)fc1);

    /* End of DataTypeConversion: '<Root>/Data Type Conversion' */

    /* SignalConversion: '<Root>/ConcatBufferAtMatrix ConcatenateIn2' incorporates:
     *  Selector: '<Root>/Selector1'
     */
    STM32_FIR_wrap_sym_B.MatrixConcatenate[12 + i] =
      STM32_FIR_wrap_sym_B.AudioInput[i];
  }

  /* Start for MATLABSystem: '<Root>/Digital Write1' incorporates:
   *  Constant: '<Root>/Mode'
   */
  MW_digitalIO_write(STM32_FIR_wrap_sym_DW.obj_p.MW_DIGITALIO_HANDLE,
                     STM32_FIR_wrap_sym_P.Mode_Value != 0.0);
  for (i = 0; i < 12; i++) {
    /* Start for MATLABSystem: '<Root>/Audio Output' */
    STM32_FIR_wrap_sym_DW.obj_b.CopyBuffer[i << 1] =
      STM32_FIR_wrap_sym_B.MatrixConcatenate[i];
    STM32_FIR_wrap_sym_DW.obj_b.CopyBuffer[1 + (i << 1)] =
      STM32_FIR_wrap_sym_B.MatrixConcatenate[i + 12];
  }

  /* External mode */
  rtExtModeUploadCheckTrigger(1);

  {                                    /* Sample time: [0.00075s, 0.0s] */
    rtExtModeUpload(0, STM32_FIR_wrap_sym_M->Timing.taskTime0);
  }

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.00075s, 0.0s] */
    if ((rtmGetTFinal(STM32_FIR_wrap_sym_M)!=-1) &&
        !((rtmGetTFinal(STM32_FIR_wrap_sym_M)-
           STM32_FIR_wrap_sym_M->Timing.taskTime0) >
          STM32_FIR_wrap_sym_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(STM32_FIR_wrap_sym_M, "Simulation finished");
    }

    if (rtmGetStopRequested(STM32_FIR_wrap_sym_M)) {
      rtmSetErrorStatus(STM32_FIR_wrap_sym_M, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  STM32_FIR_wrap_sym_M->Timing.taskTime0 =
    (++STM32_FIR_wrap_sym_M->Timing.clockTick0) *
    STM32_FIR_wrap_sym_M->Timing.stepSize0;
}

/* Model initialize function */
void STM32_FIR_wrap_sym_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)STM32_FIR_wrap_sym_M, 0,
                sizeof(RT_MODEL_STM32_FIR_wrap_sym_T));
  rtmSetTFinal(STM32_FIR_wrap_sym_M, -1);
  STM32_FIR_wrap_sym_M->Timing.stepSize0 = 0.00075;

  /* External mode info */
  STM32_FIR_wrap_sym_M->Sizes.checksums[0] = (1785926099U);
  STM32_FIR_wrap_sym_M->Sizes.checksums[1] = (1444285939U);
  STM32_FIR_wrap_sym_M->Sizes.checksums[2] = (4121759996U);
  STM32_FIR_wrap_sym_M->Sizes.checksums[3] = (3537553784U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[8];
    STM32_FIR_wrap_sym_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    systemRan[2] = &rtAlwaysEnabled;
    systemRan[3] = &rtAlwaysEnabled;
    systemRan[4] = &rtAlwaysEnabled;
    systemRan[5] = &rtAlwaysEnabled;
    systemRan[6] = &rtAlwaysEnabled;
    systemRan[7] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(STM32_FIR_wrap_sym_M->extModeInfo,
      &STM32_FIR_wrap_sym_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(STM32_FIR_wrap_sym_M->extModeInfo,
                        STM32_FIR_wrap_sym_M->Sizes.checksums);
    rteiSetTPtr(STM32_FIR_wrap_sym_M->extModeInfo, rtmGetTPtr
                (STM32_FIR_wrap_sym_M));
  }

  /* states (dwork) */
  (void) memset((void *)&STM32_FIR_wrap_sym_DW, 0,
                sizeof(DW_STM32_FIR_wrap_sym_T));

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    STM32_FIR_wrap_sym_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 18;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.BTransTable = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.PTransTable = &rtPTransTable;
  }

  {
    uint16_T InputDeviceConst;
    mbed_DigitalWrite_STM32_FIR_w_T *obj;
    uint32_T pinname;

    /* Start for MATLABSystem: '<Root>/Audio Input' */
    STM32_FIR_wrap_sym_DW.obj.matlabCodegenIsDeleted = true;
    STM32_FIR_wrap_sym_DW.obj.isInitialized = 0;
    STM32_FIR_wrap_sym_DW.obj.matlabCodegenIsDeleted = false;
    STM32_FIR_wrap_sym_DW.obj.isSetupComplete = false;
    STM32_FIR_wrap_sym_DW.obj.isInitialized = 1;
    InputDeviceConst = INPUT_DEVICE_ANALOG_MIC;
    BSP_AUDIO_IN_InitEx(InputDeviceConst, 16000U, 16U, 2U);
    MW_BSP_AUDIO_IN_Record(STM32_FIR_wrap_sym_DW.obj.OutputBuffer, 48U);
    STM32_FIR_wrap_sym_DW.obj.isSetupComplete = true;

    /* Start for MATLABSystem: '<Root>/Digital Write1' */
    STM32_FIR_wrap_sym_DW.obj_p.matlabCodegenIsDeleted = true;
    STM32_FIR_wrap_sym_DW.obj_p.isInitialized = 0;
    STM32_FIR_wrap_sym_DW.obj_p.matlabCodegenIsDeleted = false;
    obj = &STM32_FIR_wrap_sym_DW.obj_p;
    STM32_FIR_wrap_sym_DW.obj_p.isSetupComplete = false;
    STM32_FIR_wrap_sym_DW.obj_p.isInitialized = 1;
    pinname = PJ_13;
    obj->MW_DIGITALIO_HANDLE = MW_digitalIO_open(pinname, 1);
    STM32_FIR_wrap_sym_DW.obj_p.isSetupComplete = true;

    /* Start for MATLABSystem: '<Root>/Audio Output' */
    STM32_FIR_wrap_sym_DW.obj_b.matlabCodegenIsDeleted = true;
    STM32_FIR_wrap_sym_DW.obj_b.isInitialized = 0;
    STM32_FIR_wrap_sym_DW.obj_b.matlabCodegenIsDeleted = false;
    STM32_FIR_wrap_sym_DW.obj_b.isSetupComplete = false;
    STM32_FIR_wrap_sym_DW.obj_b.isInitialized = 1;
    InputDeviceConst = OUTPUT_DEVICE_HEADPHONE;
    pinname = CODEC_AUDIOFRAME_SLOT_02;
    BSP_AUDIO_OUT_Init(InputDeviceConst, (uint8_T)STM32_FIR_wrap_sym_Volume,
                       16000U);
    BSP_AUDIO_OUT_SetAudioFrameSlot((uint32_T)pinname);
    MW_BSP_AUDIO_OUT_Play(STM32_FIR_wrap_sym_DW.obj_b.CopyBuffer, 96U);
    STM32_FIR_wrap_sym_DW.obj_b.isSetupComplete = true;

    /* InitializeConditions for Memory: '<Root>/Memory' */
    memcpy(&STM32_FIR_wrap_sym_DW.Memory_PreviousInput[0],
           &STM32_FIR_wrap_sym_P.Memory_InitialCondition[0], 102U * sizeof
           (real_T));

    /* InitializeConditions for Memory: '<Root>/Memory1' */
    memcpy(&STM32_FIR_wrap_sym_DW.Memory1_PreviousInput[0],
           &STM32_FIR_wrap_sym_P.Memory1_InitialCondition[0], 102U * sizeof
           (real_T));
  }
}

/* Model terminate function */
void STM32_FIR_wrap_sym_terminate(void)
{
  /* Terminate for MATLABSystem: '<Root>/Audio Input' */
  matlabCodegenHandle_matlabCo_ms(&STM32_FIR_wrap_sym_DW.obj);

  /* Terminate for MATLABSystem: '<Root>/Digital Write1' */
  matlabCodegenHandle_matlabCod_m(&STM32_FIR_wrap_sym_DW.obj_p);

  /* Terminate for MATLABSystem: '<Root>/Audio Output' */
  matlabCodegenHandle_matlabCodeg(&STM32_FIR_wrap_sym_DW.obj_b);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
