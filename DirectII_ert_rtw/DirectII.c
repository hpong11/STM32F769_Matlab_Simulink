/*
 * File: DirectII.c
 *
 * Code generated for Simulink model 'DirectII'.
 *
 * Model version                  : 1.60
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Mon Nov 25 12:22:06 2019
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "DirectII.h"
#include "DirectII_private.h"

/* Block signals (default storage) */
B_DirectII_T DirectII_B;

/* Block states (default storage) */
DW_DirectII_T DirectII_DW;

/* External outputs (root outports fed by signals with default storage) */
ExtY_DirectII_T DirectII_Y;

/* Real-time model */
RT_MODEL_DirectII_T DirectII_M_;
RT_MODEL_DirectII_T *const DirectII_M = &DirectII_M_;

/* Forward declaration for local functions */
static void DirectII_SystemCore_release_m(const stm32f769idiscovery_AudioInpu_T *
  obj);
static void DirectII_SystemCore_delete_m(const stm32f769idiscovery_AudioInpu_T
  *obj);
static void matlabCodegenHandle_matlabCod_m(stm32f769idiscovery_AudioInpu_T *obj);
static void DirectII_SystemCore_release(const stm32f769idiscovery_AudioOutp_T
  *obj);
static void DirectII_SystemCore_delete(const stm32f769idiscovery_AudioOutp_T
  *obj);
static void matlabCodegenHandle_matlabCodeg(stm32f769idiscovery_AudioOutp_T *obj);
static void DirectII_SystemCore_release_m(const stm32f769idiscovery_AudioInpu_T *
  obj)
{
  if ((obj->isInitialized == 1) && obj->isSetupComplete) {
    BSP_AUDIO_IN_Stop();
  }
}

static void DirectII_SystemCore_delete_m(const stm32f769idiscovery_AudioInpu_T
  *obj)
{
  DirectII_SystemCore_release_m(obj);
}

static void matlabCodegenHandle_matlabCod_m(stm32f769idiscovery_AudioInpu_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    DirectII_SystemCore_delete_m(obj);
  }
}

static void DirectII_SystemCore_release(const stm32f769idiscovery_AudioOutp_T
  *obj)
{
  uint32_T ShutDownConst;
  if ((obj->isInitialized == 1) && obj->isSetupComplete) {
    ShutDownConst = CODEC_PDWN_SW;
    BSP_AUDIO_OUT_Stop(ShutDownConst);
  }
}

static void DirectII_SystemCore_delete(const stm32f769idiscovery_AudioOutp_T
  *obj)
{
  DirectII_SystemCore_release(obj);
}

static void matlabCodegenHandle_matlabCodeg(stm32f769idiscovery_AudioOutp_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    DirectII_SystemCore_delete(obj);
  }
}

/* Model step function */
void DirectII_step(void)
{
  real_T Gbp[4];
  int32_T i;
  int32_T wn_tmp;
  int32_T wn_tmp_0;
  real_T d1_tmp;
  int16_T *rtb_MultiportSwitch_0;

  /* Gain: '<Root>/Gain' incorporates:
   *  MATLABSystem: '<Root>/Audio Input'
   *  Selector: '<Root>/Selector'
   */
  for (i = 0; i < 4096; i++) {
    DirectII_B.Gain[i] = (real_T)DirectII_DW.obj.OutputBuffer[i << 1] *
      DirectII_P.Gain_Gain;
  }

  /* End of Gain: '<Root>/Gain' */

  /* MATLAB Function: '<S2>/Tune Parameter' incorporates:
   *  Constant: '<S2>/Alpha BP'
   *  Constant: '<S2>/Alpha BS'
   *  Constant: '<S2>/Alpha HP'
   *  Constant: '<S2>/Alpha LP'
   *  Constant: '<S2>/Beta BP'
   *  Constant: '<S2>/Beta BS'
   *  Constant: '<S2>/Beta HP'
   *  Constant: '<S2>/Beta LP'
   */
  DirectII_B.Tune_Para[0] = DirectII_P.AlphaLP_Value;
  DirectII_B.Tune_Para[4] = DirectII_P.BetaLP_Value;
  DirectII_B.Tune_Para[1] = DirectII_P.AlphaHP_Value;
  DirectII_B.Tune_Para[5] = DirectII_P.BetaHP_Value;
  DirectII_B.Tune_Para[2] = DirectII_P.AlphaBP_Value;
  DirectII_B.Tune_Para[6] = DirectII_P.BetaBP_Value;
  DirectII_B.Tune_Para[3] = DirectII_P.AlphaBS_Value;
  DirectII_B.Tune_Para[7] = DirectII_P.BetaBS_Value;

  /* MATLAB Function: '<Root>/MATLAB Function' incorporates:
   *  Memory: '<Root>/Memory1'
   */
  for (i = 0; i < 12; i++) {
    DirectII_B.wn[i] = 1.0;
  }

  for (i = 0; i < 4096; i++) {
    DirectII_B.ylp[i] = 1.0;
    DirectII_B.yhp[i] = 1.0;
    DirectII_B.ybp[i] = 1.0;
    DirectII_B.ybs[i] = 1.0;
  }

  for (i = 0; i < 2; i++) {
    wn_tmp = i << 2;
    wn_tmp_0 = (1 + i) << 2;
    DirectII_B.wn[wn_tmp_0] = DirectII_DW.Memory1_PreviousInput[wn_tmp];
    DirectII_B.wn[1 + wn_tmp_0] = DirectII_DW.Memory1_PreviousInput[wn_tmp + 1];
    DirectII_B.wn[2 + wn_tmp_0] = DirectII_DW.Memory1_PreviousInput[wn_tmp + 2];
    DirectII_B.wn[3 + wn_tmp_0] = DirectII_DW.Memory1_PreviousInput[wn_tmp + 3];
  }

  for (i = 0; i < 4; i++) {
    d1_tmp = DirectII_B.Tune_Para[4 + i];
    DirectII_B.d1[i] = -(1.0 + DirectII_B.Tune_Para[i]) * d1_tmp;
    DirectII_B.d2[i] = DirectII_B.Tune_Para[i];
    DirectII_B.Glp[i] = (1.0 - d1_tmp) * 0.25 * (1.0 + DirectII_B.Tune_Para[i]);
    DirectII_B.Ghp[i] = (d1_tmp + 1.0) * 0.25 * (1.0 + DirectII_B.Tune_Para[i]);
    Gbp[i] = (1.0 - DirectII_B.Tune_Para[i]) * 0.5;
    for (wn_tmp = 0; wn_tmp < 4096; wn_tmp++) {
      DirectII_B.wn[i] = (DirectII_B.Gain[wn_tmp] - DirectII_B.wn[4 + i] *
                          DirectII_B.d1[i]) - DirectII_B.wn[8 + i] *
        DirectII_B.d2[i];
      switch (i + 1) {
       case 1:
        DirectII_B.ylp[wn_tmp] = ((DirectII_B.wn[8 + i] + DirectII_B.wn[i]) +
          DirectII_B.wn[4 + i] * 2.0) * DirectII_B.Glp[i];
        break;

       case 2:
        DirectII_B.yhp[wn_tmp] = ((DirectII_B.wn[8 + i] + DirectII_B.wn[i]) -
          DirectII_B.wn[4 + i] * 2.0) * DirectII_B.Ghp[i];
        break;

       case 4:
        DirectII_B.ybp[wn_tmp] = (DirectII_B.wn[i] - DirectII_B.wn[8 + i]) *
          Gbp[i];
        break;

       case 3:
        DirectII_B.ybs[wn_tmp] = ((DirectII_B.wn[8 + i] + DirectII_B.wn[i]) +
          DirectII_B.wn[4 + i] * 2.0) * DirectII_B.Glp[i] + ((DirectII_B.wn[8 +
          i] + DirectII_B.wn[i]) - DirectII_B.wn[4 + i] * 2.0) *
          DirectII_B.Ghp[i];
        break;
      }

      DirectII_B.wn[8 + i] = DirectII_B.wn[4 + i];
      DirectII_B.wn[4 + i] = DirectII_B.wn[i];
    }
  }

  for (i = 0; i < 4096; i++) {
    /* Gain: '<Root>/Gain1' */
    d1_tmp = floor((real_T)DirectII_P.Gain1_Gain * DirectII_B.ylp[i]);
    if (rtIsNaN(d1_tmp) || rtIsInf(d1_tmp)) {
      d1_tmp = 0.0;
    } else {
      d1_tmp = fmod(d1_tmp, 65536.0);
    }

    DirectII_B.Gain1[i] = (int16_T)(d1_tmp < 0.0 ? (int32_T)(int16_T)-(int16_T)
      (uint16_T)-d1_tmp : (int32_T)(int16_T)(uint16_T)d1_tmp);

    /* End of Gain: '<Root>/Gain1' */

    /* Outport: '<Root>/Out1' */
    DirectII_Y.Out1[i] = DirectII_B.Gain1[i];

    /* Gain: '<Root>/Gain2' */
    d1_tmp = floor((real_T)DirectII_P.Gain2_Gain * DirectII_B.yhp[i]);
    if (rtIsNaN(d1_tmp) || rtIsInf(d1_tmp)) {
      d1_tmp = 0.0;
    } else {
      d1_tmp = fmod(d1_tmp, 65536.0);
    }

    DirectII_B.Gain2[i] = (int16_T)(d1_tmp < 0.0 ? (int32_T)(int16_T)-(int16_T)
      (uint16_T)-d1_tmp : (int32_T)(int16_T)(uint16_T)d1_tmp);

    /* End of Gain: '<Root>/Gain2' */

    /* Gain: '<Root>/Gain4' */
    d1_tmp = floor((real_T)DirectII_P.Gain4_Gain * DirectII_B.ybs[i]);
    if (rtIsNaN(d1_tmp) || rtIsInf(d1_tmp)) {
      d1_tmp = 0.0;
    } else {
      d1_tmp = fmod(d1_tmp, 65536.0);
    }

    DirectII_B.Gain4[i] = (int16_T)(d1_tmp < 0.0 ? (int32_T)(int16_T)-(int16_T)
      (uint16_T)-d1_tmp : (int32_T)(int16_T)(uint16_T)d1_tmp);

    /* End of Gain: '<Root>/Gain4' */

    /* Gain: '<Root>/Gain3' */
    d1_tmp = floor((real_T)DirectII_P.Gain3_Gain * DirectII_B.ybp[i]);
    if (rtIsNaN(d1_tmp) || rtIsInf(d1_tmp)) {
      d1_tmp = 0.0;
    } else {
      d1_tmp = fmod(d1_tmp, 65536.0);
    }

    DirectII_B.Gain3[i] = (int16_T)(d1_tmp < 0.0 ? (int32_T)(int16_T)-(int16_T)
      (uint16_T)-d1_tmp : (int32_T)(int16_T)(uint16_T)d1_tmp);

    /* End of Gain: '<Root>/Gain3' */
  }

  /* MultiPortSwitch: '<Root>/Multiport Switch' incorporates:
   *  Constant: '<Root>/selector'
   */
  switch (DirectII_P.selector_Value) {
   case 1:
    rtb_MultiportSwitch_0 = &DirectII_B.Gain1[0];
    break;

   case 2:
    rtb_MultiportSwitch_0 = &DirectII_B.Gain2[0];
    break;

   case 3:
    rtb_MultiportSwitch_0 = &DirectII_B.Gain4[0];
    break;

   default:
    rtb_MultiportSwitch_0 = &DirectII_B.Gain3[0];
    break;
  }

  /* End of MultiPortSwitch: '<Root>/Multiport Switch' */
  for (i = 0; i < 4096; i++) {
    /* SignalConversion: '<Root>/ConcatBufferAtMatrix ConcatenateIn1' */
    DirectII_B.MatrixConcatenate[i] = rtb_MultiportSwitch_0[i];

    /* SignalConversion: '<Root>/ConcatBufferAtMatrix ConcatenateIn2' incorporates:
     *  SignalConversion: '<Root>/ConcatBufferAtMatrix ConcatenateIn1'
     */
    DirectII_B.MatrixConcatenate[i + 4096] = rtb_MultiportSwitch_0[i];

    /* SignalConversion: '<Root>/ConcatBufferAtMatrix ConcatenateIn3' incorporates:
     *  SignalConversion: '<Root>/ConcatBufferAtMatrix ConcatenateIn1'
     */
    DirectII_B.MatrixConcatenate[i + 8192] = rtb_MultiportSwitch_0[i];

    /* SignalConversion: '<Root>/ConcatBufferAtMatrix ConcatenateIn4' incorporates:
     *  SignalConversion: '<Root>/ConcatBufferAtMatrix ConcatenateIn1'
     */
    DirectII_B.MatrixConcatenate[i + 12288] = rtb_MultiportSwitch_0[i];

    /* Outport: '<Root>/Out4' */
    DirectII_Y.Out4[i] = DirectII_B.Gain3[i];
  }

  /* Outport: '<Root>/Out3' */
  memcpy(&DirectII_Y.Out3[0], &DirectII_B.Gain4[0], sizeof(int16_T) << 12U);

  /* Outport: '<Root>/Out2' */
  memcpy(&DirectII_Y.Out2[0], &DirectII_B.Gain2[0], sizeof(int16_T) << 12U);

  /* MATLABSystem: '<Root>/Audio Output' */
  for (i = 0; i < 4096; i++) {
    wn_tmp = i << 1;
    DirectII_DW.obj_g.CopyBuffer[wn_tmp] = DirectII_B.MatrixConcatenate[i];
    DirectII_DW.obj_g.CopyBuffer[1 + wn_tmp] = DirectII_B.MatrixConcatenate[i +
      4096];
  }

  /* End of MATLABSystem: '<Root>/Audio Output' */

  /* Update for Memory: '<Root>/Memory1' incorporates:
   *  MATLAB Function: '<Root>/MATLAB Function'
   */
  for (i = 0; i < 2; i++) {
    /* MATLAB Function: '<Root>/MATLAB Function' */
    wn_tmp = i << 2;
    DirectII_DW.Memory1_PreviousInput[wn_tmp] = DirectII_B.wn[wn_tmp];
    DirectII_DW.Memory1_PreviousInput[1 + wn_tmp] = DirectII_B.wn[wn_tmp + 1];
    DirectII_DW.Memory1_PreviousInput[2 + wn_tmp] = DirectII_B.wn[wn_tmp + 2];
    DirectII_DW.Memory1_PreviousInput[3 + wn_tmp] = DirectII_B.wn[wn_tmp + 3];
  }

  /* End of Update for Memory: '<Root>/Memory1' */

  /* External mode */
  rtExtModeUploadCheckTrigger(1);

  {                                    /* Sample time: [0.256s, 0.0s] */
    rtExtModeUpload(0, (real_T)DirectII_M->Timing.taskTime0);
  }

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.256s, 0.0s] */
    if ((rtmGetTFinal(DirectII_M)!=-1) &&
        !((rtmGetTFinal(DirectII_M)-DirectII_M->Timing.taskTime0) >
          DirectII_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(DirectII_M, "Simulation finished");
    }

    if (rtmGetStopRequested(DirectII_M)) {
      rtmSetErrorStatus(DirectII_M, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  DirectII_M->Timing.taskTime0 =
    (++DirectII_M->Timing.clockTick0) * DirectII_M->Timing.stepSize0;
}

/* Model initialize function */
void DirectII_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)DirectII_M, 0,
                sizeof(RT_MODEL_DirectII_T));
  rtmSetTFinal(DirectII_M, -1);
  DirectII_M->Timing.stepSize0 = 0.256;

  /* External mode info */
  DirectII_M->Sizes.checksums[0] = (522749943U);
  DirectII_M->Sizes.checksums[1] = (2854909419U);
  DirectII_M->Sizes.checksums[2] = (1602009915U);
  DirectII_M->Sizes.checksums[3] = (1938807674U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[5];
    DirectII_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    systemRan[2] = &rtAlwaysEnabled;
    systemRan[3] = &rtAlwaysEnabled;
    systemRan[4] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(DirectII_M->extModeInfo,
      &DirectII_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(DirectII_M->extModeInfo, DirectII_M->Sizes.checksums);
    rteiSetTPtr(DirectII_M->extModeInfo, rtmGetTPtr(DirectII_M));
  }

  /* block I/O */
  (void) memset(((void *) &DirectII_B), 0,
                sizeof(B_DirectII_T));

  /* states (dwork) */
  (void) memset((void *)&DirectII_DW, 0,
                sizeof(DW_DirectII_T));

  /* external outputs */
  (void) memset((void *)&DirectII_Y, 0,
                sizeof(ExtY_DirectII_T));

  {
    uint16_T InputDeviceConst;
    uint32_T slotnameConst;

    /* Start for MATLABSystem: '<Root>/Audio Input' */
    DirectII_DW.obj.matlabCodegenIsDeleted = true;
    DirectII_DW.obj.isInitialized = 0;
    DirectII_DW.obj.matlabCodegenIsDeleted = false;
    DirectII_DW.obj.isSetupComplete = false;
    DirectII_DW.obj.isInitialized = 1;
    InputDeviceConst = INPUT_DEVICE_ANALOG_MIC;
    BSP_AUDIO_IN_InitEx(InputDeviceConst, 16000U, 16U, 2U);
    MW_BSP_AUDIO_IN_Record(DirectII_DW.obj.OutputBuffer, 16384U);
    DirectII_DW.obj.isSetupComplete = true;

    /* Start for MATLABSystem: '<Root>/Audio Output' */
    DirectII_DW.obj_g.matlabCodegenIsDeleted = true;
    DirectII_DW.obj_g.isInitialized = 0;
    DirectII_DW.obj_g.matlabCodegenIsDeleted = false;
    DirectII_DW.obj_g.isSetupComplete = false;
    DirectII_DW.obj_g.isInitialized = 1;
    InputDeviceConst = OUTPUT_DEVICE_HEADPHONE;
    slotnameConst = CODEC_AUDIOFRAME_SLOT_02;
    BSP_AUDIO_OUT_Init(InputDeviceConst, 64, 16000U);
    BSP_AUDIO_OUT_SetAudioFrameSlot((uint32_T)slotnameConst);
    MW_BSP_AUDIO_OUT_Play(DirectII_DW.obj_g.CopyBuffer, 32768U);
    DirectII_DW.obj_g.isSetupComplete = true;

    /* InitializeConditions for Memory: '<Root>/Memory1' */
    memcpy(&DirectII_DW.Memory1_PreviousInput[0],
           &DirectII_P.Memory1_InitialCondition[0], sizeof(real_T) << 3U);
  }
}

/* Model terminate function */
void DirectII_terminate(void)
{
  /* Terminate for MATLABSystem: '<Root>/Audio Input' */
  matlabCodegenHandle_matlabCod_m(&DirectII_DW.obj);

  /* Terminate for MATLABSystem: '<Root>/Audio Output' */
  matlabCodegenHandle_matlabCodeg(&DirectII_DW.obj_g);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
