/*
 * File: STM32_FIR_test_script_sym.h
 *
 * Code generated for Simulink model 'STM32_FIR_test_script_sym'.
 *
 * Model version                  : 1.24
 * Simulink Coder version         : 8.14 (R2018a) 06-Feb-2018
 * C/C++ source code generated on : Sun Aug 26 23:33:23 2018
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_STM32_FIR_test_script_sym_h_
#define RTW_HEADER_STM32_FIR_test_script_sym_h_
#include <math.h>
#include <string.h>
#include <stddef.h>
#ifndef STM32_FIR_test_script_sym_COMMON_INCLUDES_
# define STM32_FIR_test_script_sym_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "stm32f769i_discovery_audio.h"
#include "wm8994.h"
#endif                                 /* STM32_FIR_test_script_sym_COMMON_INCLUDES_ */

#include "STM32_FIR_test_script_sym_types.h"
#include "MW_target_hardware_resources.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block signals (default storage) */
typedef struct {
  real_T y[12];
  int16_T MatrixConcatenate[24];       /* '<Root>/Matrix Concatenate' */
} B_STM32_FIR_test_script_sym_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  stm32f769idiscovery_AudioInpu_T obj; /* '<Root>/Audio Input' */
  stm32f769idiscovery_AudioOutp_T obj_b;/* '<Root>/Audio Output' */
  real_T Memory_PreviousInput[90];     /* '<Root>/Memory' */
} DW_STM32_FIR_test_script_sym_T;

/* Parameters (default storage) */
struct P_STM32_FIR_test_script_sym_T_ {
  real_T Memory_InitialCondition[90];  /* Expression: [0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  ]

                                        * Referenced by: '<Root>/Memory'
                                        */
  int16_T Gain_Gain;                   /* Computed Parameter: Gain_Gain
                                        * Referenced by: '<Root>/Gain'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_STM32_FIR_test_script_T {
  const char_T *errorStatus;
};

/* Block parameters (default storage) */
extern P_STM32_FIR_test_script_sym_T STM32_FIR_test_script_sym_P;

/* Block signals (default storage) */
extern B_STM32_FIR_test_script_sym_T STM32_FIR_test_script_sym_B;

/* Block states (default storage) */
extern DW_STM32_FIR_test_script_sym_T STM32_FIR_test_script_sym_DW;

/* Model entry point functions */
extern void STM32_FIR_test_script_sym_initialize(void);
extern void STM32_FIR_test_script_sym_step(void);
extern void STM32_FIR_test_script_sym_terminate(void);

/* Real-time Model object */
extern RT_MODEL_STM32_FIR_test_scrip_T *const STM32_FIR_test_script_sym_M;

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
 * '<Root>' : 'STM32_FIR_test_script_sym'
 * '<S1>'   : 'STM32_FIR_test_script_sym/MATLAB Function'
 */
#endif                                 /* RTW_HEADER_STM32_FIR_test_script_sym_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
