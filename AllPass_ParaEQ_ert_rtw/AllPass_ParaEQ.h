/*
 * File: AllPass_ParaEQ.h
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

#ifndef RTW_HEADER_AllPass_ParaEQ_h_
#define RTW_HEADER_AllPass_ParaEQ_h_
#include <math.h>
#include <string.h>
#include <float.h>
#include <stddef.h>
#ifndef AllPass_ParaEQ_COMMON_INCLUDES_
# define AllPass_ParaEQ_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "ext_work.h"
#include "stm32f769i_discovery_audio.h"
#include "wm8994.h"
#endif                                 /* AllPass_ParaEQ_COMMON_INCLUDES_ */

#include "AllPass_ParaEQ_types.h"

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
  real_T ypeak[4096];                  /* '<Root>/MATLAB Function' */
  real_T Gain[4096];                   /* '<Root>/Gain' */
  int16_T MatrixConcatenate[8192];     /* '<Root>/Matrix Concatenate' */
  real_T wn[15];
  real_T Bw[5];
  real_T alphaBi[5];                   /* '<S2>/Tune Parameter' */
  real_T betaBi[5];                    /* '<S2>/Tune Parameter' */
  real_T dv0[5];
} B_AllPass_ParaEQ_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  stm32f769idiscovery_AudioOutp_T obj; /* '<Root>/Audio Output' */
  stm32f769idiscovery_AudioInpu_T obj_p;/* '<Root>/Audio Input' */
  real_T Memory1_PreviousInput[10];    /* '<Root>/Memory1' */
} DW_AllPass_ParaEQ_T;

/* Parameters (default storage) */
struct P_AllPass_ParaEQ_T_ {
  real_T Gain_Gain;                    /* Expression: 1/32768
                                        * Referenced by: '<Root>/Gain'
                                        */
  real_T Fs_Value;                     /* Expression: 44100
                                        * Referenced by: '<S2>/Fs'
                                        */
  real_T Gdb1_Value;                   /* Expression: 0
                                        * Referenced by: '<S2>/Gdb1'
                                        */
  real_T Gdb2_Value;                   /* Expression: 5
                                        * Referenced by: '<S2>/Gdb2'
                                        */
  real_T Gdb3_Value;                   /* Expression: -5
                                        * Referenced by: '<S2>/Gdb3'
                                        */
  real_T Gdb4_Value;                   /* Expression: 10
                                        * Referenced by: '<S2>/Gdb4'
                                        */
  real_T Gdb5_Value;                   /* Expression: -3
                                        * Referenced by: '<S2>/Gdb5'
                                        */
  real_T Q1_Value;                     /* Expression: 1
                                        * Referenced by: '<S2>/Q1'
                                        */
  real_T Q2_Value;                     /* Expression: 1
                                        * Referenced by: '<S2>/Q2'
                                        */
  real_T Q3_Value;                     /* Expression: 2
                                        * Referenced by: '<S2>/Q3'
                                        */
  real_T Q4_Value;                     /* Expression: 5
                                        * Referenced by: '<S2>/Q4'
                                        */
  real_T Q5_Value;                     /* Expression: 10
                                        * Referenced by: '<S2>/Q5'
                                        */
  real_T Fc1_Value;                    /* Expression: 1000
                                        * Referenced by: '<S2>/Fc1'
                                        */
  real_T Fc2_Value;                    /* Expression: 200
                                        * Referenced by: '<S2>/Fc2'
                                        */
  real_T Fc3_Value;                    /* Expression: 500
                                        * Referenced by: '<S2>/Fc3'
                                        */
  real_T Fc4_Value;                    /* Expression: 1000
                                        * Referenced by: '<S2>/Fc4'
                                        */
  real_T Fc5_Value;                    /* Expression: 5000
                                        * Referenced by: '<S2>/Fc5'
                                        */
  real_T Memory1_InitialCondition[10]; /* Expression: [0 0;0 0;0 0;0 0;0 0]
                                        * Referenced by: '<Root>/Memory1'
                                        */
  int16_T Gain1_Gain;                  /* Computed Parameter: Gain1_Gain
                                        * Referenced by: '<Root>/Gain1'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_AllPass_ParaEQ_T {
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
extern P_AllPass_ParaEQ_T AllPass_ParaEQ_P;

/* Block signals (default storage) */
extern B_AllPass_ParaEQ_T AllPass_ParaEQ_B;

/* Block states (default storage) */
extern DW_AllPass_ParaEQ_T AllPass_ParaEQ_DW;

/* Model entry point functions */
extern void AllPass_ParaEQ_initialize(void);
extern void AllPass_ParaEQ_step(void);
extern void AllPass_ParaEQ_terminate(void);

/* Real-time Model object */
extern RT_MODEL_AllPass_ParaEQ_T *const AllPass_ParaEQ_M;

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
 * '<Root>' : 'AllPass_ParaEQ'
 * '<S1>'   : 'AllPass_ParaEQ/MATLAB Function'
 * '<S2>'   : 'AllPass_ParaEQ/Subsystem'
 * '<S3>'   : 'AllPass_ParaEQ/Subsystem/Tune Parameter'
 */
#endif                                 /* RTW_HEADER_AllPass_ParaEQ_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
