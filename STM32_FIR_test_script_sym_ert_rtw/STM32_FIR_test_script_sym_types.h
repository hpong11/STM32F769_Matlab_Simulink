/*
 * File: STM32_FIR_test_script_sym_types.h
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

#ifndef RTW_HEADER_STM32_FIR_test_script_sym_types_h_
#define RTW_HEADER_STM32_FIR_test_script_sym_types_h_
#include "rtwtypes.h"
#ifndef typedef_stm32f769idiscovery_AudioOutp_T
#define typedef_stm32f769idiscovery_AudioOutp_T

typedef struct {
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  int16_T CopyBuffer[24];
} stm32f769idiscovery_AudioOutp_T;

#endif                                 /*typedef_stm32f769idiscovery_AudioOutp_T*/

#ifndef typedef_stm32f769idiscovery_AudioInpu_T
#define typedef_stm32f769idiscovery_AudioInpu_T

typedef struct {
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  int16_T OutputBuffer[24];
} stm32f769idiscovery_AudioInpu_T;

#endif                                 /*typedef_stm32f769idiscovery_AudioInpu_T*/

/* Parameters (default storage) */
typedef struct P_STM32_FIR_test_script_sym_T_ P_STM32_FIR_test_script_sym_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_STM32_FIR_test_script_T RT_MODEL_STM32_FIR_test_scrip_T;

#endif                                 /* RTW_HEADER_STM32_FIR_test_script_sym_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
