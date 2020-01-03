/*
 * File: untitled2.h
 *
 * Code generated for Simulink model 'untitled2'.
 *
 * Model version                  : 1.4
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Wed Apr 24 16:57:27 2019
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_untitled2_h_
#define RTW_HEADER_untitled2_h_
#include <stddef.h>
#include <string.h>
#ifndef untitled2_COMMON_INCLUDES_
# define untitled2_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "MW_MbedPinInterface.h"
#include "MW_digitalIO.h"
#endif                                 /* untitled2_COMMON_INCLUDES_ */

#include "untitled2_types.h"
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
  mbed_DigitalWrite_untitled2_T obj;   /* '<Root>/Digital Write3' */
} DW_untitled2_T;

/* Parameters (default storage) */
struct P_untitled2_T_ {
  real_T Constant_Value;               /* Expression: 1
                                        * Referenced by: '<Root>/Constant'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_untitled2_T {
  const char_T *errorStatus;
};

/* Block parameters (default storage) */
extern P_untitled2_T untitled2_P;

/* Block states (default storage) */
extern DW_untitled2_T untitled2_DW;

/* Model entry point functions */
extern void untitled2_initialize(void);
extern void untitled2_step(void);
extern void untitled2_terminate(void);

/* Real-time Model object */
extern RT_MODEL_untitled2_T *const untitled2_M;

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
 * '<Root>' : 'untitled2'
 */
#endif                                 /* RTW_HEADER_untitled2_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
