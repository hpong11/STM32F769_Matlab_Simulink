/*
 * File: Test_switch_types.h
 *
 * Code generated for Simulink model 'Test_switch'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Wed Apr 24 17:25:51 2019
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Test_switch_types_h_
#define RTW_HEADER_Test_switch_types_h_
#include "rtwtypes.h"
#include "multiword_types.h"

/* Custom Type definition for MATLABSystem: '<Root>/Digital Write' */
#include "MW_SVD.h"
#ifndef typedef_mbed_DigitalWrite_Test_switch_T
#define typedef_mbed_DigitalWrite_Test_switch_T

typedef struct {
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  MW_Handle_Type MW_DIGITALIO_HANDLE;
} mbed_DigitalWrite_Test_switch_T;

#endif                                 /*typedef_mbed_DigitalWrite_Test_switch_T*/

#ifndef typedef_mbed_DigitalRead_Test_switch_T
#define typedef_mbed_DigitalRead_Test_switch_T

typedef struct {
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  MW_Handle_Type MW_DIGITALIO_HANDLE;
  real_T SampleTime;
} mbed_DigitalRead_Test_switch_T;

#endif                                 /*typedef_mbed_DigitalRead_Test_switch_T*/

/* Parameters (default storage) */
typedef struct P_Test_switch_T_ P_Test_switch_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_Test_switch_T RT_MODEL_Test_switch_T;

#endif                                 /* RTW_HEADER_Test_switch_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
