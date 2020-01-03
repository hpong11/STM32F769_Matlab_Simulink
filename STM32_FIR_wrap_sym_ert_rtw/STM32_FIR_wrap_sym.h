/*
 * File: STM32_FIR_wrap_sym.h
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

#ifndef RTW_HEADER_STM32_FIR_wrap_sym_h_
#define RTW_HEADER_STM32_FIR_wrap_sym_h_
#include <math.h>
#include <string.h>
#include <float.h>
#include <stddef.h>
#ifndef STM32_FIR_wrap_sym_COMMON_INCLUDES_
# define STM32_FIR_wrap_sym_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "dt_info.h"
#include "ext_work.h"
#include "stm32f769i_discovery_audio.h"
#include "wm8994.h"
#include "MW_MbedPinInterface.h"
#include "MW_digitalIO.h"
#endif                                 /* STM32_FIR_wrap_sym_COMMON_INCLUDES_ */

#include "STM32_FIR_wrap_sym_types.h"

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
  real_T xm[13];
  real_T Gain[12];                     /* '<Root>/Gain' */
  real_T y_d[12];                      /* '<Root>/Hight Pass' */
  real_T y[12];                        /* '<Root>/Low_Pass' */
  int16_T MatrixConcatenate[24];       /* '<Root>/Matrix Concatenate' */
  int16_T AudioInput[24];              /* '<Root>/Audio Input' */
} B_STM32_FIR_wrap_sym_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  stm32f769idiscovery_AudioInpu_T obj; /* '<Root>/Audio Input' */
  stm32f769idiscovery_AudioOutp_T obj_b;/* '<Root>/Audio Output' */
  mbed_DigitalWrite_STM32_FIR_w_T obj_p;/* '<Root>/Digital Write1' */
  real_T Memory_PreviousInput[102];    /* '<Root>/Memory' */
  real_T Memory1_PreviousInput[102];   /* '<Root>/Memory1' */
} DW_STM32_FIR_wrap_sym_T;

/* Parameters (default storage) */
struct P_STM32_FIR_wrap_sym_T_ {
  real_T Constant3_Value;              /* Expression: 0
                                        * Referenced by: '<Root>/Constant3'
                                        */
  real_T Memory_InitialCondition[102]; /* Expression: [ 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ;]

                                        * Referenced by: '<Root>/Memory'
                                        */
  real_T Mode_Value;                   /* Expression: 0
                                        * Referenced by: '<Root>/Mode'
                                        */
  real_T CenterFrequency_Value;        /* Expression: 0.5
                                        * Referenced by: '<Root>/Center Frequency'
                                        */
  real_T BandWidth_Value;              /* Expression: 0.3
                                        * Referenced by: '<Root>/Band Width'
                                        */
  real_T Memory1_InitialCondition[102];/* Expression: [ 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ;]

                                        * Referenced by: '<Root>/Memory1'
                                        */
  real_T Gain1_Gain;                   /* Expression: 32700
                                        * Referenced by: '<Root>/Gain1'
                                        */
  int16_T Gain_Gain;                   /* Computed Parameter: Gain_Gain
                                        * Referenced by: '<Root>/Gain'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_STM32_FIR_wrap_sym_T {
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
extern P_STM32_FIR_wrap_sym_T STM32_FIR_wrap_sym_P;

/* Block signals (default storage) */
extern B_STM32_FIR_wrap_sym_T STM32_FIR_wrap_sym_B;

/* Block states (default storage) */
extern DW_STM32_FIR_wrap_sym_T STM32_FIR_wrap_sym_DW;

/* Model entry point functions */
extern void STM32_FIR_wrap_sym_initialize(void);
extern void STM32_FIR_wrap_sym_step(void);
extern void STM32_FIR_wrap_sym_terminate(void);

/* Real-time Model object */
extern RT_MODEL_STM32_FIR_wrap_sym_T *const STM32_FIR_wrap_sym_M;

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
 * '<Root>' : 'STM32_FIR_wrap_sym'
 * '<S1>'   : 'STM32_FIR_wrap_sym/Hight Pass'
 * '<S2>'   : 'STM32_FIR_wrap_sym/Low_Pass'
 * '<S3>'   : 'STM32_FIR_wrap_sym/MATLAB Function2'
 * '<S4>'   : 'STM32_FIR_wrap_sym/Subsystem'
 */
#endif                                 /* RTW_HEADER_STM32_FIR_wrap_sym_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
