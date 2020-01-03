/*
 * File: AnalogBilinearParaEq_types.h
 *
 * Code generated for Simulink model 'AnalogBilinearParaEq'.
 *
 * Model version                  : 1.13
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Fri Jan  3 15:45:31 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_AnalogBilinearParaEq_types_h_
#define RTW_HEADER_AnalogBilinearParaEq_types_h_
#include "rtwtypes.h"
#ifndef typedef_stm32f769idiscovery_AudioOutp_T
#define typedef_stm32f769idiscovery_AudioOutp_T

typedef struct {
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  int16_T CopyBuffer[200];
} stm32f769idiscovery_AudioOutp_T;

#endif                                 /*typedef_stm32f769idiscovery_AudioOutp_T*/

#ifndef typedef_stm32f769idiscovery_AudioInpu_T
#define typedef_stm32f769idiscovery_AudioInpu_T

typedef struct {
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  int16_T OutputBuffer[200];
} stm32f769idiscovery_AudioInpu_T;

#endif                                 /*typedef_stm32f769idiscovery_AudioInpu_T*/

/* Parameters (default storage) */
typedef struct P_AnalogBilinearParaEq_T_ P_AnalogBilinearParaEq_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_AnalogBilinearParaEq_T RT_MODEL_AnalogBilinearParaEq_T;

#endif                                 /* RTW_HEADER_AnalogBilinearParaEq_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
