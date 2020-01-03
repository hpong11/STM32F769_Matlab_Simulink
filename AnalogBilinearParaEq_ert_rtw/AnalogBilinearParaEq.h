/*
 * File: AnalogBilinearParaEq.h
 *
 * Code generated for Simulink model 'AnalogBilinearParaEq'.
 *
 * Model version                  : 1.13
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Fri Jan  3 15:45:31 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_AnalogBilinearParaEq_h_
#define RTW_HEADER_AnalogBilinearParaEq_h_
#include <math.h>
#include <string.h>
#include <stddef.h>
#ifndef AnalogBilinearParaEq_COMMON_INCLUDES_
# define AnalogBilinearParaEq_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "stm32f769i_discovery_audio.h"
#include "wm8994.h"
#endif                                 /* AnalogBilinearParaEq_COMMON_INCLUDES_ */

#include "AnalogBilinearParaEq_types.h"
#include "MW_target_hardware_resources.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block signals (default storage) */
typedef struct {
  real_T Hight[100];                   /* '<Root>/Hight' */
  real_T Peak3[100];                   /* '<Root>/Peak3' */
  real_T Peak2[100];                   /* '<Root>/Peak2' */
  real_T Peak1[100];                   /* '<Root>/Peak1' */
  real_T Low[100];                     /* '<Root>/Low' */
  int16_T MatrixConcatenate[200];      /* '<Root>/Matrix Concatenate' */
} B_AnalogBilinearParaEq_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  stm32f769idiscovery_AudioInpu_T obj; /* '<Root>/Audio Input' */
  stm32f769idiscovery_AudioOutp_T obj_b;/* '<Root>/Audio Output' */
  real_T Low_states[2];                /* '<Root>/Low' */
  real_T Peak1_states[2];              /* '<Root>/Peak1' */
  real_T Peak2_states[2];              /* '<Root>/Peak2' */
  real_T Peak3_states[2];              /* '<Root>/Peak3' */
  real_T Hight_states[2];              /* '<Root>/Hight' */
} DW_AnalogBilinearParaEq_T;

/* Parameters (default storage) */
struct P_AnalogBilinearParaEq_T_ {
  real_T Constant1_Value[3];           /* Expression: BAnalog(1,:)
                                        * Referenced by: '<Root>/Constant1'
                                        */
  real_T Constant2_Value[3];           /* Expression: AAnalog(1,:)
                                        * Referenced by: '<Root>/Constant2'
                                        */
  real_T Low_InitialStates;            /* Expression: 1
                                        * Referenced by: '<Root>/Low'
                                        */
  real_T Constant_Value;               /* Expression: 5
                                        * Referenced by: '<Root>/Constant'
                                        */
  real_T Constant3_Value[3];           /* Expression: BAnalog(2,:)
                                        * Referenced by: '<Root>/Constant3'
                                        */
  real_T Constant4_Value[3];           /* Expression: AAnalog(2,:)
                                        * Referenced by: '<Root>/Constant4'
                                        */
  real_T Peak1_InitialStates;          /* Expression: 1
                                        * Referenced by: '<Root>/Peak1'
                                        */
  real_T Constant5_Value[3];           /* Expression: BAnalog(3,:)
                                        * Referenced by: '<Root>/Constant5'
                                        */
  real_T Constant6_Value[3];           /* Expression: AAnalog(3,:)
                                        * Referenced by: '<Root>/Constant6'
                                        */
  real_T Peak2_InitialStates;          /* Expression: 1
                                        * Referenced by: '<Root>/Peak2'
                                        */
  real_T Constant7_Value[3];           /* Expression: BAnalog(4,:)
                                        * Referenced by: '<Root>/Constant7'
                                        */
  real_T Constant8_Value[3];           /* Expression: AAnalog(4,:)
                                        * Referenced by: '<Root>/Constant8'
                                        */
  real_T Peak3_InitialStates;          /* Expression: 1
                                        * Referenced by: '<Root>/Peak3'
                                        */
  real_T Constant9_Value[3];           /* Expression: BAnalog(5,:)
                                        * Referenced by: '<Root>/Constant9'
                                        */
  real_T Constant10_Value[3];          /* Expression: AAnalog(5,:)
                                        * Referenced by: '<Root>/Constant10'
                                        */
  real_T Hight_InitialStates;          /* Expression: 1
                                        * Referenced by: '<Root>/Hight'
                                        */
  real_T Gain1_Gain;                   /* Expression: 32768
                                        * Referenced by: '<Root>/Gain1'
                                        */
  int16_T Gain_Gain;                   /* Computed Parameter: Gain_Gain
                                        * Referenced by: '<Root>/Gain'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_AnalogBilinearParaEq_T {
  const char_T *errorStatus;
};

/* Block parameters (default storage) */
extern P_AnalogBilinearParaEq_T AnalogBilinearParaEq_P;

/* Block signals (default storage) */
extern B_AnalogBilinearParaEq_T AnalogBilinearParaEq_B;

/* Block states (default storage) */
extern DW_AnalogBilinearParaEq_T AnalogBilinearParaEq_DW;

/* Model entry point functions */
extern void AnalogBilinearParaEq_initialize(void);
extern void AnalogBilinearParaEq_step(void);
extern void AnalogBilinearParaEq_terminate(void);

/* Real-time Model object */
extern RT_MODEL_AnalogBilinearParaEq_T *const AnalogBilinearParaEq_M;

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
 * '<Root>' : 'AnalogBilinearParaEq'
 */
#endif                                 /* RTW_HEADER_AnalogBilinearParaEq_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
