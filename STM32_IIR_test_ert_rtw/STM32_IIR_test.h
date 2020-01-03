/*
 * File: STM32_IIR_test.h
 *
 * Code generated for Simulink model 'STM32_IIR_test'.
 *
 * Model version                  : 1.9
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Fri Dec 20 12:35:43 2019
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_STM32_IIR_test_h_
#define RTW_HEADER_STM32_IIR_test_h_
#include <math.h>
#include <stddef.h>
#include <string.h>
#ifndef STM32_IIR_test_COMMON_INCLUDES_
# define STM32_IIR_test_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "stm32f769i_discovery_audio.h"
#include "wm8994.h"
#endif                                 /* STM32_IIR_test_COMMON_INCLUDES_ */

#include "STM32_IIR_test_types.h"
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
  real_T DiscreteFilter[12];           /* '<Root>/Discrete Filter' */
  real_T Gain[12];                     /* '<Root>/Gain' */
  int16_T MatrixConcatenate[24];       /* '<Root>/Matrix Concatenate' */
  int16_T AudioInput[24];              /* '<Root>/Audio Input' */
} B_STM32_IIR_test_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  stm32f769idiscovery_AudioInpu_T obj; /* '<Root>/Audio Input' */
  stm32f769idiscovery_AudioOutp_T obj_b;/* '<Root>/Audio Output' */
  real_T DiscreteFilter_states[20];    /* '<Root>/Discrete Filter' */
  real_T DiscreteFilter_denStates[20]; /* '<Root>/Discrete Filter' */
} DW_STM32_IIR_test_T;

/* Parameters (default storage) */
struct P_STM32_IIR_test_T_ {
  real_T DiscreteFilter_NumCoef[21];   /* Expression: [0.00001  0.00017  0.00163  0.00975  0.04145  0.13264  0.33160  0.66320  1.07769  1.43692  1.58062  1.43692  1.07769  0.66320  0.33160  0.13264  0.04145  0.00975  0.00163  0.00017  0.00001  ]

                                        * Referenced by: '<Root>/Discrete Filter'
                                        */
  real_T DiscreteFilter_DenCoef[21];   /* Expression: [1.00000  -0.00000  2.71935  0.00000  2.95450  0.00000  1.66340  0.00000  0.52726  0.00000  0.09589  0.00000  0.00979  0.00000  0.00053  0.00000  0.00001  0.00000  0.00000  0.00000  0.00000  ]

                                        * Referenced by: '<Root>/Discrete Filter'
                                        */
  real_T DiscreteFilter_InitialStates; /* Expression: 0
                                        * Referenced by: '<Root>/Discrete Filter'
                                        */
  real_T DiscreteFilter_InitialDenominat;/* Expression: 0
                                          * Referenced by: '<Root>/Discrete Filter'
                                          */
  real_T Gain1_Gain;                   /* Expression: 32768
                                        * Referenced by: '<Root>/Gain1'
                                        */
  int16_T Gain_Gain;                   /* Computed Parameter: Gain_Gain
                                        * Referenced by: '<Root>/Gain'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_STM32_IIR_test_T {
  const char_T *errorStatus;
};

/* Block parameters (default storage) */
extern P_STM32_IIR_test_T STM32_IIR_test_P;

/* Block signals (default storage) */
extern B_STM32_IIR_test_T STM32_IIR_test_B;

/* Block states (default storage) */
extern DW_STM32_IIR_test_T STM32_IIR_test_DW;

/* Model entry point functions */
extern void STM32_IIR_test_initialize(void);
extern void STM32_IIR_test_step(void);
extern void STM32_IIR_test_terminate(void);

/* Real-time Model object */
extern RT_MODEL_STM32_IIR_test_T *const STM32_IIR_test_M;

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
 * '<Root>' : 'STM32_IIR_test'
 */
#endif                                 /* RTW_HEADER_STM32_IIR_test_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
