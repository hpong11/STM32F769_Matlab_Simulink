/*
 * File: STM32_FIR_test.h
 *
 * Code generated for Simulink model 'STM32_FIR_test'.
 *
 * Model version                  : 1.12
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Fri Dec 20 12:37:18 2019
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_STM32_FIR_test_h_
#define RTW_HEADER_STM32_FIR_test_h_
#include <math.h>
#include <stddef.h>
#include <string.h>
#ifndef STM32_FIR_test_COMMON_INCLUDES_
# define STM32_FIR_test_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "stm32f769i_discovery_audio.h"
#include "wm8994.h"
#endif                                 /* STM32_FIR_test_COMMON_INCLUDES_ */

#include "STM32_FIR_test_types.h"
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
  real_T Gain1[12];                    /* '<Root>/Gain1' */
  real_T Gain[12];                     /* '<Root>/Gain' */
  int16_T MatrixConcatenate[24];       /* '<Root>/Matrix Concatenate' */
  int16_T AudioInput[24];              /* '<Root>/Audio Input' */
} B_STM32_FIR_test_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  stm32f769idiscovery_AudioInpu_T obj; /* '<Root>/Audio Input' */
  stm32f769idiscovery_AudioOutp_T obj_b;/* '<Root>/Audio Output' */
  real_T DiscreteFIRFilter_states[90]; /* '<Root>/Discrete FIR Filter' */
  int32_T DiscreteFIRFilter_circBuf;   /* '<Root>/Discrete FIR Filter' */
} DW_STM32_FIR_test_T;

/* Parameters (default storage) */
struct P_STM32_FIR_test_T_ {
  real_T DiscreteFIRFilter_InitialStates;/* Expression: 0
                                          * Referenced by: '<Root>/Discrete FIR Filter'
                                          */
  real_T DiscreteFIRFilter_Coefficients[91];/* Expression: [0.000000000000000  0.000344388332301  0.000593781079195  0.000648041027613  0.000445668976708  -0.000000000000000  -0.000573654534002  -0.001064568443825  -0.001224479966645  -0.000870953124588  0.000000000000000  0.001148822871272  0.002126699151061  0.002425469036834  0.001703899084196  -0.000000000000000  -0.002179402971244  -0.003968908143450  -0.004453648220912  -0.003080112368334  0.000000000000000  0.003828695228993  0.006885204038667  0.007639273122291  0.005231059848285  -0.000000000000000  -0.006403053722797  -0.011454177756395  -0.012664369033126  -0.008658641008984  0.000000000000000  0.010637147907124  0.019139130184696  0.021353552466227  0.014789178607870  -0.000000000000000  -0.018931847758297  -0.035139742851732  -0.040852871530627  -0.029894735913956  0.000000000000000  0.045867128566198  0.099735326139990  0.150445557587165  0.186587855688577  0.199678576807297  0.186587855688577  0.150445557587165  0.099735326139990  0.045867128566198  0.000000000000000  -0.029894735913956  -0.040852871530627  -0.035139742851732  -0.018931847758297  -0.000000000000000  0.014789178607870  0.021353552466227  0.019139130184696  0.010637147907124  0.000000000000000  -0.008658641008984  -0.012664369033126  -0.011454177756395  -0.006403053722797  -0.000000000000000  0.005231059848285  0.007639273122291  0.006885204038667  0.003828695228993  0.000000000000000  -0.003080112368334  -0.004453648220912  -0.003968908143450  -0.002179402971244  -0.000000000000000  0.001703899084196  0.002425469036834  0.002126699151061  0.001148822871272  0.000000000000000  -0.000870953124588  -0.001224479966645  -0.001064568443825  -0.000573654534002  -0.000000000000000  0.000445668976708  0.000648041027613  0.000593781079195  0.000344388332301  0.000000000000000  ]

                                             * Referenced by: '<Root>/Discrete FIR Filter'
                                             */
  real_T Gain1_Gain;                   /* Expression: 32768
                                        * Referenced by: '<Root>/Gain1'
                                        */
  int16_T Gain_Gain;                   /* Computed Parameter: Gain_Gain
                                        * Referenced by: '<Root>/Gain'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_STM32_FIR_test_T {
  const char_T *errorStatus;
};

/* Block parameters (default storage) */
extern P_STM32_FIR_test_T STM32_FIR_test_P;

/* Block signals (default storage) */
extern B_STM32_FIR_test_T STM32_FIR_test_B;

/* Block states (default storage) */
extern DW_STM32_FIR_test_T STM32_FIR_test_DW;

/* Model entry point functions */
extern void STM32_FIR_test_initialize(void);
extern void STM32_FIR_test_step(void);
extern void STM32_FIR_test_terminate(void);

/* Real-time Model object */
extern RT_MODEL_STM32_FIR_test_T *const STM32_FIR_test_M;

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
 * '<Root>' : 'STM32_FIR_test'
 */
#endif                                 /* RTW_HEADER_STM32_FIR_test_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
