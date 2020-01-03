/*
 * File: AllPass_ParaEQ.c
 *
 * Code generated for Simulink model 'AllPass_ParaEQ'.
 *
 * Model version                  : 1.76
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Thu Dec 19 11:53:02 2019
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "AllPass_ParaEQ.h"
#include "AllPass_ParaEQ_private.h"

/* Block signals (default storage) */
B_AllPass_ParaEQ_T AllPass_ParaEQ_B;

/* Block states (default storage) */
DW_AllPass_ParaEQ_T AllPass_ParaEQ_DW;

/* Real-time model */
RT_MODEL_AllPass_ParaEQ_T AllPass_ParaEQ_M_;
RT_MODEL_AllPass_ParaEQ_T *const AllPass_ParaEQ_M = &AllPass_ParaEQ_M_;

/* Forward declaration for local functions */
static void AllPass_Pa_SystemCore_release_h(const
  stm32f769idiscovery_AudioInpu_T *obj);
static void AllPass_Par_SystemCore_delete_h(const
  stm32f769idiscovery_AudioInpu_T *obj);
static void matlabCodegenHandle_matlabCod_h(stm32f769idiscovery_AudioInpu_T *obj);
static void AllPass_Para_SystemCore_release(const
  stm32f769idiscovery_AudioOutp_T *obj);
static void AllPass_ParaE_SystemCore_delete(const
  stm32f769idiscovery_AudioOutp_T *obj);
static void matlabCodegenHandle_matlabCodeg(stm32f769idiscovery_AudioOutp_T *obj);
real_T rt_powd_snf(real_T u0, real_T u1)
{
  real_T y;
  real_T tmp;
  real_T tmp_0;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = (rtNaN);
  } else {
    tmp = fabs(u0);
    tmp_0 = fabs(u1);
    if (rtIsInf(u1)) {
      if (tmp == 1.0) {
        y = 1.0;
      } else if (tmp > 1.0) {
        if (u1 > 0.0) {
          y = (rtInf);
        } else {
          y = 0.0;
        }
      } else if (u1 > 0.0) {
        y = 0.0;
      } else {
        y = (rtInf);
      }
    } else if (tmp_0 == 0.0) {
      y = 1.0;
    } else if (tmp_0 == 1.0) {
      if (u1 > 0.0) {
        y = u0;
      } else {
        y = 1.0 / u0;
      }
    } else if (u1 == 2.0) {
      y = u0 * u0;
    } else if ((u1 == 0.5) && (u0 >= 0.0)) {
      y = sqrt(u0);
    } else if ((u0 < 0.0) && (u1 > floor(u1))) {
      y = (rtNaN);
    } else {
      y = pow(u0, u1);
    }
  }

  return y;
}

static void AllPass_Pa_SystemCore_release_h(const
  stm32f769idiscovery_AudioInpu_T *obj)
{
  if ((obj->isInitialized == 1) && obj->isSetupComplete) {
    BSP_AUDIO_IN_Stop();
  }
}

static void AllPass_Par_SystemCore_delete_h(const
  stm32f769idiscovery_AudioInpu_T *obj)
{
  AllPass_Pa_SystemCore_release_h(obj);
}

static void matlabCodegenHandle_matlabCod_h(stm32f769idiscovery_AudioInpu_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    AllPass_Par_SystemCore_delete_h(obj);
  }
}

static void AllPass_Para_SystemCore_release(const
  stm32f769idiscovery_AudioOutp_T *obj)
{
  uint32_T ShutDownConst;
  if ((obj->isInitialized == 1) && obj->isSetupComplete) {
    ShutDownConst = CODEC_PDWN_SW;
    BSP_AUDIO_OUT_Stop(ShutDownConst);
  }
}

static void AllPass_ParaE_SystemCore_delete(const
  stm32f769idiscovery_AudioOutp_T *obj)
{
  AllPass_Para_SystemCore_release(obj);
}

static void matlabCodegenHandle_matlabCodeg(stm32f769idiscovery_AudioOutp_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    AllPass_ParaE_SystemCore_delete(obj);
  }
}

/* Model step function */
void AllPass_ParaEQ_step(void)
{
  int32_T i;
  real_T Bw;
  real_T x;
  real_T rtb_alphaBi_tmp;
  int32_T i_0;

  /* Gain: '<Root>/Gain' incorporates:
   *  MATLABSystem: '<Root>/Audio Input'
   *  Selector: '<Root>/Selector'
   */
  for (i = 0; i < 4096; i++) {
    AllPass_ParaEQ_B.Gain[i] = (real_T)AllPass_ParaEQ_DW.obj_p.OutputBuffer[i <<
      1] * AllPass_ParaEQ_P.Gain_Gain;
  }

  /* End of Gain: '<Root>/Gain' */

  /* MATLAB Function: '<S2>/Tune Parameter' incorporates:
   *  Constant: '<S2>/Fc1'
   *  Constant: '<S2>/Fc2'
   *  Constant: '<S2>/Fc3'
   *  Constant: '<S2>/Fc4'
   *  Constant: '<S2>/Fc5'
   *  Constant: '<S2>/Fs'
   *  Constant: '<S2>/Gdb1'
   *  Constant: '<S2>/Gdb2'
   *  Constant: '<S2>/Gdb3'
   *  Constant: '<S2>/Gdb4'
   *  Constant: '<S2>/Gdb5'
   *  Constant: '<S2>/Q1'
   *  Constant: '<S2>/Q2'
   *  Constant: '<S2>/Q3'
   *  Constant: '<S2>/Q4'
   *  Constant: '<S2>/Q5'
   *  MATLAB Function: '<Root>/MATLAB Function'
   */
  AllPass_ParaEQ_B.Bw[0] = AllPass_ParaEQ_P.Gdb1_Value / 20.0;
  AllPass_ParaEQ_B.Bw[1] = AllPass_ParaEQ_P.Gdb2_Value / 20.0;
  AllPass_ParaEQ_B.Bw[2] = AllPass_ParaEQ_P.Gdb3_Value / 20.0;
  AllPass_ParaEQ_B.Bw[3] = AllPass_ParaEQ_P.Gdb4_Value / 20.0;
  AllPass_ParaEQ_B.Bw[4] = AllPass_ParaEQ_P.Gdb5_Value / 20.0;
  AllPass_ParaEQ_B.betaBi[0] = 6.2831853071795862 * AllPass_ParaEQ_P.Fc1_Value /
    AllPass_ParaEQ_P.Fs_Value;
  AllPass_ParaEQ_B.betaBi[1] = 6.2831853071795862 * AllPass_ParaEQ_P.Fc2_Value /
    AllPass_ParaEQ_P.Fs_Value;
  AllPass_ParaEQ_B.betaBi[2] = 6.2831853071795862 * AllPass_ParaEQ_P.Fc3_Value /
    AllPass_ParaEQ_P.Fs_Value;
  AllPass_ParaEQ_B.betaBi[3] = 6.2831853071795862 * AllPass_ParaEQ_P.Fc4_Value /
    AllPass_ParaEQ_P.Fs_Value;
  AllPass_ParaEQ_B.betaBi[4] = 6.2831853071795862 * AllPass_ParaEQ_P.Fc5_Value /
    AllPass_ParaEQ_P.Fs_Value;
  AllPass_ParaEQ_B.dv0[0] = AllPass_ParaEQ_P.Q1_Value;
  AllPass_ParaEQ_B.dv0[1] = AllPass_ParaEQ_P.Q2_Value;
  AllPass_ParaEQ_B.dv0[2] = AllPass_ParaEQ_P.Q3_Value;
  AllPass_ParaEQ_B.dv0[3] = AllPass_ParaEQ_P.Q4_Value;
  AllPass_ParaEQ_B.dv0[4] = AllPass_ParaEQ_P.Q5_Value;
  for (i = 0; i < 5; i++) {
    Bw = AllPass_ParaEQ_B.betaBi[i] / AllPass_ParaEQ_B.dv0[i];
    rtb_alphaBi_tmp = sqrt(rt_powd_snf(10.0, AllPass_ParaEQ_B.Bw[i]));
    x = tan(Bw / 2.0);
    Bw /= 2.0;
    Bw = tan(Bw);
    rtb_alphaBi_tmp = (rtb_alphaBi_tmp - x) / (rtb_alphaBi_tmp + Bw);

    /* MATLAB Function: '<Root>/MATLAB Function' */
    AllPass_ParaEQ_B.wn[i] = 0.0;
    AllPass_ParaEQ_B.alphaBi[i] = rtb_alphaBi_tmp;
    AllPass_ParaEQ_B.Bw[i] = Bw;
    AllPass_ParaEQ_B.betaBi[i] = -(1.0 + rtb_alphaBi_tmp) * cos
      (AllPass_ParaEQ_B.betaBi[i]);
  }

  /* End of MATLAB Function: '<S2>/Tune Parameter' */

  /* MATLAB Function: '<Root>/MATLAB Function' incorporates:
   *  Memory: '<Root>/Memory1'
   */
  memcpy(&AllPass_ParaEQ_B.wn[5], &AllPass_ParaEQ_DW.Memory1_PreviousInput[0],
         10U * sizeof(real_T));
  for (i = 0; i < 4096; i++) {
    AllPass_ParaEQ_B.wn[0] = (AllPass_ParaEQ_B.Gain[i] - AllPass_ParaEQ_B.wn[5] *
      AllPass_ParaEQ_B.betaBi[0]) - AllPass_ParaEQ_B.wn[10] *
      AllPass_ParaEQ_B.alphaBi[0];
    AllPass_ParaEQ_B.ypeak[i] = AllPass_ParaEQ_B.Gain[i] / 2.0;
  }

  AllPass_ParaEQ_B.wn[10] = AllPass_ParaEQ_B.wn[5];
  AllPass_ParaEQ_B.wn[5] = AllPass_ParaEQ_B.wn[0];
  for (i = 0; i < 4096; i++) {
    /* Gain: '<Root>/Gain1' */
    Bw = floor((real_T)AllPass_ParaEQ_P.Gain1_Gain * AllPass_ParaEQ_B.ypeak[i]);
    if (rtIsNaN(Bw) || rtIsInf(Bw)) {
      Bw = 0.0;
    } else {
      Bw = fmod(Bw, 65536.0);
    }

    AllPass_ParaEQ_B.MatrixConcatenate[i] = (int16_T)(Bw < 0.0 ? (int32_T)
      (int16_T)-(int16_T)(uint16_T)-Bw : (int32_T)(int16_T)(uint16_T)Bw);

    /* End of Gain: '<Root>/Gain1' */

    /* SignalConversion: '<Root>/ConcatBufferAtMatrix ConcatenateIn2' */
    AllPass_ParaEQ_B.MatrixConcatenate[i + 4096] = 0;
  }

  /* MATLABSystem: '<Root>/Audio Output' */
  for (i = 0; i < 8192; i++) {
    i_0 = i << 1;
    AllPass_ParaEQ_DW.obj.CopyBuffer[i_0] = AllPass_ParaEQ_B.MatrixConcatenate[i];
    AllPass_ParaEQ_DW.obj.CopyBuffer[1 + i_0] =
      AllPass_ParaEQ_B.MatrixConcatenate[i];
  }

  /* End of MATLABSystem: '<Root>/Audio Output' */

  /* Update for Memory: '<Root>/Memory1' incorporates:
   *  MATLAB Function: '<Root>/MATLAB Function'
   */
  for (i = 0; i < 2; i++) {
    for (i_0 = 0; i_0 < 5; i_0++) {
      AllPass_ParaEQ_DW.Memory1_PreviousInput[i_0 + 5 * i] =
        AllPass_ParaEQ_B.wn[5 * i + i_0];
    }
  }

  /* End of Update for Memory: '<Root>/Memory1' */

  /* External mode */
  rtExtModeUploadCheckTrigger(1);

  {                                    /* Sample time: [0.09287981859410431s, 0.0s] */
    rtExtModeUpload(0, (real_T)AllPass_ParaEQ_M->Timing.taskTime0);
  }

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.09287981859410431s, 0.0s] */
    if ((rtmGetTFinal(AllPass_ParaEQ_M)!=-1) &&
        !((rtmGetTFinal(AllPass_ParaEQ_M)-AllPass_ParaEQ_M->Timing.taskTime0) >
          AllPass_ParaEQ_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(AllPass_ParaEQ_M, "Simulation finished");
    }

    if (rtmGetStopRequested(AllPass_ParaEQ_M)) {
      rtmSetErrorStatus(AllPass_ParaEQ_M, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  AllPass_ParaEQ_M->Timing.taskTime0 =
    (++AllPass_ParaEQ_M->Timing.clockTick0) * AllPass_ParaEQ_M->Timing.stepSize0;
}

/* Model initialize function */
void AllPass_ParaEQ_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)AllPass_ParaEQ_M, 0,
                sizeof(RT_MODEL_AllPass_ParaEQ_T));
  rtmSetTFinal(AllPass_ParaEQ_M, -1);
  AllPass_ParaEQ_M->Timing.stepSize0 = 0.09287981859410431;

  /* External mode info */
  AllPass_ParaEQ_M->Sizes.checksums[0] = (953736726U);
  AllPass_ParaEQ_M->Sizes.checksums[1] = (1279275174U);
  AllPass_ParaEQ_M->Sizes.checksums[2] = (149476069U);
  AllPass_ParaEQ_M->Sizes.checksums[3] = (45649752U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[5];
    AllPass_ParaEQ_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    systemRan[2] = &rtAlwaysEnabled;
    systemRan[3] = &rtAlwaysEnabled;
    systemRan[4] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(AllPass_ParaEQ_M->extModeInfo,
      &AllPass_ParaEQ_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(AllPass_ParaEQ_M->extModeInfo,
                        AllPass_ParaEQ_M->Sizes.checksums);
    rteiSetTPtr(AllPass_ParaEQ_M->extModeInfo, rtmGetTPtr(AllPass_ParaEQ_M));
  }

  /* states (dwork) */
  (void) memset((void *)&AllPass_ParaEQ_DW, 0,
                sizeof(DW_AllPass_ParaEQ_T));

  {
    uint16_T InputDeviceConst;
    uint32_T slotnameConst;

    /* Start for MATLABSystem: '<Root>/Audio Input' */
    AllPass_ParaEQ_DW.obj_p.matlabCodegenIsDeleted = true;
    AllPass_ParaEQ_DW.obj_p.isInitialized = 0;
    AllPass_ParaEQ_DW.obj_p.matlabCodegenIsDeleted = false;
    AllPass_ParaEQ_DW.obj_p.isSetupComplete = false;
    AllPass_ParaEQ_DW.obj_p.isInitialized = 1;
    InputDeviceConst = INPUT_DEVICE_ANALOG_MIC;
    BSP_AUDIO_IN_InitEx(InputDeviceConst, 44100U, 16U, 2U);
    MW_BSP_AUDIO_IN_Record(AllPass_ParaEQ_DW.obj_p.OutputBuffer, 16384U);
    AllPass_ParaEQ_DW.obj_p.isSetupComplete = true;

    /* Start for MATLABSystem: '<Root>/Audio Output' */
    AllPass_ParaEQ_DW.obj.matlabCodegenIsDeleted = true;
    AllPass_ParaEQ_DW.obj.isInitialized = 0;
    AllPass_ParaEQ_DW.obj.matlabCodegenIsDeleted = false;
    AllPass_ParaEQ_DW.obj.isSetupComplete = false;
    AllPass_ParaEQ_DW.obj.isInitialized = 1;
    InputDeviceConst = OUTPUT_DEVICE_HEADPHONE;
    slotnameConst = CODEC_AUDIOFRAME_SLOT_02;
    BSP_AUDIO_OUT_Init(InputDeviceConst, 64, 44100U);
    BSP_AUDIO_OUT_SetAudioFrameSlot((uint32_T)slotnameConst);
    MW_BSP_AUDIO_OUT_Play(AllPass_ParaEQ_DW.obj.CopyBuffer, 65536U);
    AllPass_ParaEQ_DW.obj.isSetupComplete = true;

    /* InitializeConditions for Memory: '<Root>/Memory1' */
    memcpy(&AllPass_ParaEQ_DW.Memory1_PreviousInput[0],
           &AllPass_ParaEQ_P.Memory1_InitialCondition[0], 10U * sizeof(real_T));
  }
}

/* Model terminate function */
void AllPass_ParaEQ_terminate(void)
{
  /* Terminate for MATLABSystem: '<Root>/Audio Input' */
  matlabCodegenHandle_matlabCod_h(&AllPass_ParaEQ_DW.obj_p);

  /* Terminate for MATLABSystem: '<Root>/Audio Output' */
  matlabCodegenHandle_matlabCodeg(&AllPass_ParaEQ_DW.obj);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
