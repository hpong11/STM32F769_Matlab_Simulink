/*
 * File: Test_types.h
 *
 * Code generated for Simulink model 'Test'.
 *
 * Model version                  : 1.10
 * Simulink Coder version         : 8.14 (R2018a) 06-Feb-2018
 * C/C++ source code generated on : Tue Oct  9 17:01:55 2018
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Test_types_h_
#define RTW_HEADER_Test_types_h_
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
typedef struct P_Test_T_ P_Test_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_Test_T RT_MODEL_Test_T;

#endif                                 /* RTW_HEADER_Test_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
