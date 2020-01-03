/*
 * File: LED_test.h
 *
 * Code generated for Simulink model 'LED_test'.
 *
 * Model version                  : 1.19
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Wed Apr 24 16:59:02 2019
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_LED_test_h_
#define RTW_HEADER_LED_test_h_
#include <stddef.h>
#include <string.h>
#ifndef LED_test_COMMON_INCLUDES_
# define LED_test_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "MW_MbedPinInterface.h"
#include "MW_digitalIO.h"
#endif                                 /* LED_test_COMMON_INCLUDES_ */

#include "LED_test_types.h"
#include "MW_target_hardware_resources.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  mbed_DigitalWrite_LED_test_T obj;    /* '<Root>/Digital Write' */
} DW_LED_test_T;

/* Parameters (default storage) */
struct P_LED_test_T_ {
  boolean_T Constant_Value;            /* Computed Parameter: Constant_Value
                                        * Referenced by: '<Root>/Constant'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_LED_test_T {
  const char_T *errorStatus;
};

/* Block parameters (default storage) */
extern P_LED_test_T LED_test_P;

/* Block states (default storage) */
extern DW_LED_test_T LED_test_DW;

/* Model entry point functions */
extern void LED_test_initialize(void);
extern void LED_test_step(void);
extern void LED_test_terminate(void);

/* Real-time Model object */
extern RT_MODEL_LED_test_T *const LED_test_M;

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
 * '<Root>' : 'LED_test'
 */
#endif                                 /* RTW_HEADER_LED_test_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
