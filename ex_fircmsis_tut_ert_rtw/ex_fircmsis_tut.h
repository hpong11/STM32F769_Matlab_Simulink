/*
 * File: ex_fircmsis_tut.h
 *
 * Code generated for Simulink model 'ex_fircmsis_tut'.
 *
 * Model version                  : 1.21
 * Simulink Coder version         : 8.13 (R2017b) 24-Jul-2017
 * C/C++ source code generated on : Tue Aug 21 12:11:09 2018
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_ex_fircmsis_tut_h_
#define RTW_HEADER_ex_fircmsis_tut_h_
#include <math.h>
#include <stddef.h>
#include <string.h>
#ifndef ex_fircmsis_tut_COMMON_INCLUDES_
# define ex_fircmsis_tut_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* ex_fircmsis_tut_COMMON_INCLUDES_ */

#include "ex_fircmsis_tut_types.h"
#include "MW_target_hardware_resources.h"
#include "arm_math.h"
#include "mw_cmsis.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block signals (auto storage) */
typedef struct {
  real32_T MatrixConcatenate[150];     /* '<Root>/Matrix Concatenate' */
  real32_T RandomSource[75];           /* '<Root>/Random Source' */
  real32_T SineWave[75];               /* '<Root>/Sine Wave' */
  real32_T SineWave1[75];              /* '<Root>/Sine Wave1' */
} B_ex_fircmsis_tut_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  arm_fir_instance_f32 S;              /* synthesized block */
  real32_T SineWave_AccFreqNorm;       /* '<Root>/Sine Wave' */
  real32_T SineWave1_AccFreqNorm;      /* '<Root>/Sine Wave1' */
  real32_T pState[138];                /* synthesized block */
  real32_T qCoeff[64];                 /* synthesized block */
  uint32_T RandomSource_STATE_DWORK[2];/* '<Root>/Random Source' */
} DW_ex_fircmsis_tut_T;

/* Parameters (auto storage) */
struct P_ex_fircmsis_tut_T_ {
  real32_T SineWave_Amplitude;         /* Mask Parameter: SineWave_Amplitude
                                        * Referenced by: '<Root>/Sine Wave'
                                        */
  real32_T SineWave1_Amplitude;        /* Mask Parameter: SineWave1_Amplitude
                                        * Referenced by: '<Root>/Sine Wave1'
                                        */
  real32_T SineWave_Frequency;         /* Mask Parameter: SineWave_Frequency
                                        * Referenced by: '<Root>/Sine Wave'
                                        */
  real32_T SineWave1_Frequency;        /* Mask Parameter: SineWave1_Frequency
                                        * Referenced by: '<Root>/Sine Wave1'
                                        */
  real32_T RandomSource_MeanVal;       /* Mask Parameter: RandomSource_MeanVal
                                        * Referenced by: '<Root>/Random Source'
                                        */
  real32_T SineWave_Phase;             /* Mask Parameter: SineWave_Phase
                                        * Referenced by: '<Root>/Sine Wave'
                                        */
  real32_T SineWave1_Phase;            /* Mask Parameter: SineWave1_Phase
                                        * Referenced by: '<Root>/Sine Wave1'
                                        */
  uint32_T RandomSource_rawSeed;       /* Mask Parameter: RandomSource_rawSeed
                                        * Referenced by: '<Root>/Random Source'
                                        */
  real32_T RandomSource_VarianceRTP;   /* Computed Parameter: RandomSource_VarianceRTP
                                        * Referenced by: '<Root>/Random Source'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_ex_fircmsis_tut_T {
  const char_T *errorStatus;
};

/* Block parameters (auto storage) */
extern P_ex_fircmsis_tut_T ex_fircmsis_tut_P;

/* Block signals (auto storage) */
extern B_ex_fircmsis_tut_T ex_fircmsis_tut_B;

/* Block states (auto storage) */
extern DW_ex_fircmsis_tut_T ex_fircmsis_tut_DW;

/* Model entry point functions */
extern void ex_fircmsis_tut_initialize(void);
extern void ex_fircmsis_tut_step(void);
extern void ex_fircmsis_tut_terminate(void);

/* Real-time Model object */
extern RT_MODEL_ex_fircmsis_tut_T *const ex_fircmsis_tut_M;

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
 * '<Root>' : 'ex_fircmsis_tut'
 * '<S1>'   : 'ex_fircmsis_tut/FIR'
 */
#endif                                 /* RTW_HEADER_ex_fircmsis_tut_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
