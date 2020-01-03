/*
 * File: DirectII_types.h
 *
 * Code generated for Simulink model 'DirectII'.
 *
 * Model version                  : 1.60
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Mon Nov 25 12:22:06 2019
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_DirectII_types_h_
#define RTW_HEADER_DirectII_types_h_
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
typedef struct P_DirectII_T_ P_DirectII_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_DirectII_T RT_MODEL_DirectII_T;

#endif                                 /* RTW_HEADER_DirectII_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
