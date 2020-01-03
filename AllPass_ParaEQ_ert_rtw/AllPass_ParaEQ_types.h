/*
 * File: AllPass_ParaEQ_types.h
 *
 * Code generated for Simulink model 'AllPass_ParaEQ'.
 *
 * Model version                  : 1.76
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Thu Dec 19 11:53:02 2019
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_AllPass_ParaEQ_types_h_
#define RTW_HEADER_AllPass_ParaEQ_types_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#ifndef typedef_stm32f769idiscovery_AudioOutp_T
#define typedef_stm32f769idiscovery_AudioOutp_T

typedef struct {
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  int16_T CopyBuffer[16384];
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
typedef struct P_AllPass_ParaEQ_T_ P_AllPass_ParaEQ_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_AllPass_ParaEQ_T RT_MODEL_AllPass_ParaEQ_T;

#endif                                 /* RTW_HEADER_AllPass_ParaEQ_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
