/*
 * File: DirectII_Pong_types.h
 *
 * Code generated for Simulink model 'DirectII_Pong'.
 *
 * Model version                  : 1.65
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Thu Dec 19 13:04:03 2019
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_DirectII_Pong_types_h_
#define RTW_HEADER_DirectII_Pong_types_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#ifndef typedef_stm32f769idiscovery_AudioOutp_T
#define typedef_stm32f769idiscovery_AudioOutp_T

typedef struct {
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  int16_T CopyBuffer[8192];
} stm32f769idiscovery_AudioOutp_T;

#endif                                 /*typedef_stm32f769idiscovery_AudioOutp_T*/

#ifndef typedef_stm32f769idiscovery_AudioInpu_T
#define typedef_stm32f769idiscovery_AudioInpu_T

typedef struct {
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  int16_T OutputBuffer[8192];
} stm32f769idiscovery_AudioInpu_T;

#endif                                 /*typedef_stm32f769idiscovery_AudioInpu_T*/

/* Parameters (default storage) */
typedef struct P_DirectII_Pong_T_ P_DirectII_Pong_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_DirectII_Pong_T RT_MODEL_DirectII_Pong_T;

#endif                                 /* RTW_HEADER_DirectII_Pong_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
