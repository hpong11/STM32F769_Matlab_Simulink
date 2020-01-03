/*
 * File: STM32_FIR_wrap.h
 *
 * Code generated for Simulink model 'STM32_FIR_wrap'.
 *
 * Model version                  : 1.29
 * Simulink Coder version         : 8.14 (R2018a) 06-Feb-2018
 * C/C++ source code generated on : Wed Aug 29 14:16:44 2018
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_STM32_FIR_wrap_h_
#define RTW_HEADER_STM32_FIR_wrap_h_
#include <math.h>
#include <string.h>
#include <stddef.h>
#ifndef STM32_FIR_wrap_COMMON_INCLUDES_
# define STM32_FIR_wrap_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "stm32f769i_discovery_audio.h"
#include "wm8994.h"
#endif                                 /* STM32_FIR_wrap_COMMON_INCLUDES_ */

#include "STM32_FIR_wrap_types.h"
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
  real_T xm[13];
  real_T y[12];                        /* '<Root>/MATLAB Function' */
} B_STM32_FIR_wrap_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  stm32f769idiscovery_AudioInpu_T obj; /* '<Root>/Audio Input' */
  stm32f769idiscovery_AudioOutp_T obj_b;/* '<Root>/Audio Output' */
  real_T Memory_PreviousInput[62];     /* '<Root>/Memory' */
} DW_STM32_FIR_wrap_T;

/* Parameters (default storage) */
struct P_STM32_FIR_wrap_T_ {
  real_T Memory_InitialCondition[62];  /* Expression: [ 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ;]

                                        * Referenced by: '<Root>/Memory'
                                        */
  real_T Constant_Value;               /* Expression: 0.344576516755256
                                        * Referenced by: '<Root>/Constant'
                                        */
  real_T Memory1_InitialCondition;     /* Expression: 0
                                        * Referenced by: '<Root>/Memory1'
                                        */
  real_T Gain1_Gain;                   /* Expression: 32768
                                        * Referenced by: '<Root>/Gain1'
                                        */
  int16_T Gain_Gain;                   /* Computed Parameter: Gain_Gain
                                        * Referenced by: '<Root>/Gain'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_STM32_FIR_wrap_T {
  const char_T *errorStatus;
};

/* Block parameters (default storage) */
extern P_STM32_FIR_wrap_T STM32_FIR_wrap_P;

/* Block signals (default storage) */
extern B_STM32_FIR_wrap_T STM32_FIR_wrap_B;

/* Block states (default storage) */
extern DW_STM32_FIR_wrap_T STM32_FIR_wrap_DW;

/* Model entry point functions */
extern void STM32_FIR_wrap_initialize(void);
extern void STM32_FIR_wrap_step(void);
extern void STM32_FIR_wrap_terminate(void);

/* Real-time Model object */
extern RT_MODEL_STM32_FIR_wrap_T *const STM32_FIR_wrap_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Scope' : Unused code path elimination
 */

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
 * '<Root>' : 'STM32_FIR_wrap'
 * '<S1>'   : 'STM32_FIR_wrap/MATLAB Function'
 */
#endif                                 /* RTW_HEADER_STM32_FIR_wrap_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
