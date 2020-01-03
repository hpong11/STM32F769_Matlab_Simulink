/*
 * File: TestPortF769.h
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

#ifndef RTW_HEADER_TestPortF769_h_
#define RTW_HEADER_TestPortF769_h_
#include <stddef.h>
#include <string.h>
#ifndef TestPortF769_COMMON_INCLUDES_
# define TestPortF769_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "MW_MbedPinInterface.h"
#include "MW_digitalIO.h"
#include "stm32f769i_discovery_audio.h"
#endif                                 /* TestPortF769_COMMON_INCLUDES_ */

#include "TestPortF769_types.h"
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
  stm32f769idiscovery_AudioInpu_T obj; /* '<Root>/Audio Input' */
  mbed_DigitalWrite_TestPortF76_T obj_g;/* '<Root>/Digital Write1' */
  mbed_DigitalWrite_TestPortF76_T obj_p;/* '<Root>/Digital Write' */
  real_T Memory_PreviousInput;         /* '<Root>/Memory' */
} DW_TestPortF769_T;

/* Parameters (default storage) */
struct P_TestPortF769_T_ {
  real_T Memory_InitialCondition;      /* Expression: 0
                                        * Referenced by: '<Root>/Memory'
                                        */
  real_T Memory1_InitialCondition;     /* Expression: 0
                                        * Referenced by: '<Root>/Memory1'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_TestPortF769_T {
  const char_T *errorStatus;
};

/* Block parameters (default storage) */
extern P_TestPortF769_T TestPortF769_P;

/* Block states (default storage) */
extern DW_TestPortF769_T TestPortF769_DW;

/* Model entry point functions */
extern void TestPortF769_initialize(void);
extern void TestPortF769_step(void);
extern void TestPortF769_terminate(void);

/* Real-time Model object */
extern RT_MODEL_TestPortF769_T *const TestPortF769_M;

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
 * '<Root>' : 'TestPortF769'
 * '<S1>'   : 'TestPortF769/MATLAB Function'
 * '<S2>'   : 'TestPortF769/MATLAB Function1'
 */
#endif                                 /* RTW_HEADER_TestPortF769_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
