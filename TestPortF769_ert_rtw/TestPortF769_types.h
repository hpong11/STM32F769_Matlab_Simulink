/*
 * File: TestPortF769_types.h
 *
 * Code generated for Simulink model 'TestPortF769'.
 *
 * Model version                  : 1.8
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Mon Dec  9 11:36:21 2019
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_TestPortF769_types_h_
#define RTW_HEADER_TestPortF769_types_h_
#include "rtwtypes.h"

/* Custom Type definition for MATLABSystem: '<Root>/Digital Write1' */
#include "MW_SVD.h"
#ifndef typedef_mbed_DigitalWrite_TestPortF76_T
#define typedef_mbed_DigitalWrite_TestPortF76_T

typedef struct {
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  MW_Handle_Type MW_DIGITALIO_HANDLE;
} mbed_DigitalWrite_TestPortF76_T;

#endif                                 /*typedef_mbed_DigitalWrite_TestPortF76_T*/

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
typedef struct P_TestPortF769_T_ P_TestPortF769_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_TestPortF769_T RT_MODEL_TestPortF769_T;

#endif                                 /* RTW_HEADER_TestPortF769_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
