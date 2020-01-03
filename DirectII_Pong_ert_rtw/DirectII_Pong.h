/*
 * File: DirectII_Pong.h
 *
 * Code generated for Simulink model 'DirectII_Pong'.
 *
 * Model version                  : 1.65
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Thu Dec 19 13:04:03 2019
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_DirectII_Pong_h_
#define RTW_HEADER_DirectII_Pong_h_
#include <math.h>
#include <string.h>
#include <float.h>
#include <stddef.h>
#ifndef DirectII_Pong_COMMON_INCLUDES_
# define DirectII_Pong_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "ext_work.h"
#include "stm32f769i_discovery_audio.h"
#include "wm8994.h"
#endif                                 /* DirectII_Pong_COMMON_INCLUDES_ */

#include "DirectII_Pong_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "MW_target_hardware_resources.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetFinalTime
# define rtmGetFinalTime(rtm)          ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetRTWExtModeInfo
# define rtmGetRTWExtModeInfo(rtm)     ((rtm)->extModeInfo)
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  ((rtm)->Timing.taskTime0)
#endif

#ifndef rtmGetTFinal
# define rtmGetTFinal(rtm)             ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTPtr
# define rtmGetTPtr(rtm)               (&(rtm)->Timing.taskTime0)
#endif

/* Block signals (default storage) */
typedef struct {
  real_T Gain[4096];                   /* '<Root>/Gain' */
  real_T ybs[4096];                    /* '<Root>/MATLAB Function' */
  real_T ybp[4096];                    /* '<Root>/MATLAB Function' */
  real_T yhp[4096];                    /* '<Root>/MATLAB Function' */
  real_T ylp[4096];                    /* '<Root>/MATLAB Function' */
  int16_T MatrixConcatenate[16384];    /* '<Root>/Matrix Concatenate' */
  int16_T Gain1[4096];                 /* '<Root>/Gain1' */
  int16_T Gain2[4096];                 /* '<Root>/Gain2' */
  int16_T Gain4[4096];                 /* '<Root>/Gain4' */
  int16_T Gain3[4096];                 /* '<Root>/Gain3' */
  real_T wn[12];
  real_T Tune_Para[8];                 /* '<S2>/Tune Parameter' */
  real_T d1[4];
  real_T d2[4];
  real_T Glp[4];
  real_T Ghp[4];
} B_DirectII_Pong_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  stm32f769idiscovery_AudioInpu_T obj; /* '<Root>/Audio Input' */
  stm32f769idiscovery_AudioOutp_T obj_g;/* '<Root>/Audio Output' */
  real_T Memory1_PreviousInput[8];     /* '<Root>/Memory1' */
  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedFor_;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedFo_p;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedFo_m;   /* synthesized block */

  struct {
    void *AQHandles;
    void *SlioLTF;
  } HiddenToAsyncQueue_InsertedF_mz;   /* synthesized block */
} DW_DirectII_Pong_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  int16_T Out1[4096];                  /* '<Root>/Out1' */
  int16_T Out2[4096];                  /* '<Root>/Out2' */
  int16_T Out3[4096];                  /* '<Root>/Out3' */
  int16_T Out4[4096];                  /* '<Root>/Out4' */
} ExtY_DirectII_Pong_T;

/* Parameters (default storage) */
struct P_DirectII_Pong_T_ {
  real_T Gain_Gain;                    /* Expression: 1/32000
                                        * Referenced by: '<Root>/Gain'
                                        */
  real_T AlphaLP_Value;                /* Expression: 0.5
                                        * Referenced by: '<S2>/Alpha LP'
                                        */
  real_T BetaLP_Value;                 /* Expression: 0.5
                                        * Referenced by: '<S2>/Beta LP'
                                        */
  real_T AlphaHP_Value;                /* Expression: 0.5
                                        * Referenced by: '<S2>/Alpha HP'
                                        */
  real_T BetaHP_Value;                 /* Expression: 0.2
                                        * Referenced by: '<S2>/Beta HP'
                                        */
  real_T AlphaBP_Value;                /* Expression: 0.5232919254658385
                                        * Referenced by: '<S2>/Alpha BP'
                                        */
  real_T BetaBP_Value;                 /* Expression: 0.2492401215805471
                                        * Referenced by: '<S2>/Beta BP'
                                        */
  real_T AlphaBS_Value;                /* Expression: 0.99
                                        * Referenced by: '<S2>/Alpha BS'
                                        */
  real_T BetaBS_Value;                 /* Expression: 0.5
                                        * Referenced by: '<S2>/Beta BS'
                                        */
  real_T Memory1_InitialCondition[8];  /* Expression: [0 0;0 0;0 0;0 0]
                                        * Referenced by: '<Root>/Memory1'
                                        */
  int16_T Gain1_Gain;                  /* Computed Parameter: Gain1_Gain
                                        * Referenced by: '<Root>/Gain1'
                                        */
  int16_T Gain2_Gain;                  /* Computed Parameter: Gain2_Gain
                                        * Referenced by: '<Root>/Gain2'
                                        */
  int16_T Gain4_Gain;                  /* Computed Parameter: Gain4_Gain
                                        * Referenced by: '<Root>/Gain4'
                                        */
  int16_T Gain3_Gain;                  /* Computed Parameter: Gain3_Gain
                                        * Referenced by: '<Root>/Gain3'
                                        */
  int8_T selector_Value;               /* Computed Parameter: selector_Value
                                        * Referenced by: '<Root>/selector'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_DirectII_Pong_T {
  const char_T *errorStatus;
  RTWExtModeInfo *extModeInfo;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T checksums[4];
  } Sizes;

  /*
   * SpecialInfo:
   * The following substructure contains special information
   * related to other components that are dependent on RTW.
   */
  struct {
    const void *mappingInfo;
  } SpecialInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T taskTime0;
    uint32_T clockTick0;
    time_T stepSize0;
    time_T tFinal;
    boolean_T stopRequestedFlag;
  } Timing;
};

/* Block parameters (default storage) */
extern P_DirectII_Pong_T DirectII_Pong_P;

/* Block signals (default storage) */
extern B_DirectII_Pong_T DirectII_Pong_B;

/* Block states (default storage) */
extern DW_DirectII_Pong_T DirectII_Pong_DW;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_DirectII_Pong_T DirectII_Pong_Y;

/* Model entry point functions */
extern void DirectII_Pong_initialize(void);
extern void DirectII_Pong_step(void);
extern void DirectII_Pong_terminate(void);

/* Real-time Model object */
extern RT_MODEL_DirectII_Pong_T *const DirectII_Pong_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'DirectII_Pong'
 * '<S1>'   : 'DirectII_Pong/MATLAB Function'
 * '<S2>'   : 'DirectII_Pong/Subsystem'
 * '<S3>'   : 'DirectII_Pong/Subsystem/Tune Parameter'
 */
#endif                                 /* RTW_HEADER_DirectII_Pong_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
