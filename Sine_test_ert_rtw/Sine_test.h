/*
 * File: Sine_test.h
 *
 * Code generated for Simulink model 'Sine_test'.
 *
 * Model version                  : 1.5
 * Simulink Coder version         : 8.14 (R2018a) 06-Feb-2018
 * C/C++ source code generated on : Mon Sep 10 14:17:17 2018
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Sine_test_h_
#define RTW_HEADER_Sine_test_h_
#include <math.h>
#include <float.h>
#include <string.h>
#include <stddef.h>
#ifndef Sine_test_COMMON_INCLUDES_
# define Sine_test_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "dt_info.h"
#include "ext_work.h"
#include "stm32f769i_discovery_audio.h"
#include "wm8994.h"
#endif                                 /* Sine_test_COMMON_INCLUDES_ */

#include "Sine_test_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "MW_target_hardware_resources.h"
#include "mw_cmsis.h"
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
  int16_T MatrixConcatenate[2048];     /* '<Root>/Matrix Concatenate' */
  int16_T AudioInput[2048];            /* '<Root>/Audio Input' */
  int16_T MinMax;                      /* '<Root>/MinMax' */
  int16_T MinMax1;                     /* '<Root>/MinMax1' */
} B_Sine_test_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  stm32f769idiscovery_AudioInpu_T obj; /* '<Root>/Audio Input' */
  stm32f769idiscovery_AudioOutp_T obj_b;/* '<Root>/Audio Output' */
  real32_T SineWave_AccFreqNorm;       /* '<Root>/Sine Wave' */
} DW_Sine_test_T;

/* Parameters (default storage) */
struct P_Sine_test_T_ {
  real32_T SineWave_Amplitude;         /* Mask Parameter: SineWave_Amplitude
                                        * Referenced by: '<Root>/Sine Wave'
                                        */
  real32_T SineWave_Frequency;         /* Mask Parameter: SineWave_Frequency
                                        * Referenced by: '<Root>/Sine Wave'
                                        */
  real32_T SineWave_Phase;             /* Mask Parameter: SineWave_Phase
                                        * Referenced by: '<Root>/Sine Wave'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_Sine_test_T {
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
extern P_Sine_test_T Sine_test_P;

/* Block signals (default storage) */
extern B_Sine_test_T Sine_test_B;

/* Block states (default storage) */
extern DW_Sine_test_T Sine_test_DW;

/* Model entry point functions */
extern void Sine_test_initialize(void);
extern void Sine_test_step(void);
extern void Sine_test_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Sine_test_T *const Sine_test_M;

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
 * '<Root>' : 'Sine_test'
 */
#endif                                 /* RTW_HEADER_Sine_test_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
