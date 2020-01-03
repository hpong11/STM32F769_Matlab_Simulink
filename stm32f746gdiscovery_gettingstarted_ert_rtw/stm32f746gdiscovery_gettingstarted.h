/*
 * File: stm32f746gdiscovery_gettingstarted.h
 *
 * Code generated for Simulink model 'stm32f746gdiscovery_gettingstarted'.
 *
 * Model version                  : 1.25
 * Simulink Coder version         : 8.13 (R2017b) 24-Jul-2017
 * C/C++ source code generated on : Tue Aug 21 12:05:43 2018
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_stm32f746gdiscovery_gettingstarted_h_
#define RTW_HEADER_stm32f746gdiscovery_gettingstarted_h_
#include <stddef.h>
#include <string.h>
#ifndef stm32f746gdiscovery_gettingstarted_COMMON_INCLUDES_
# define stm32f746gdiscovery_gettingstarted_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "MW_MbedPinInterface.h"
#include "MW_digitalIO.h"
#endif                                 /* stm32f746gdiscovery_gettingstarted_COMMON_INCLUDES_ */

#include "stm32f746gdiscovery_gettingstarted_types.h"
#include "MW_target_hardware_resources.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#define stm32f746gdiscovery_gettingstarted_M (stm32f746gdiscovery_gettings_M)

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  int32_T clockTickCounter;            /* '<Root>/Pulse Generator' */
  mbed_DigitalWrite_stm32f746gd_T obj; /* '<Root>/Digital Write' */
  mbed_DigitalWrite_stm32f746gd_T obj_j;/* '<Root>/Digital Write1' */
  mbed_DigitalWrite_stm32f746gd_T obj_m;/* '<Root>/Digital Write2' */
} DW_stm32f746gdiscovery_gettin_T;

/* Parameters (auto storage) */
struct P_stm32f746gdiscovery_getting_T_ {
  real_T PulseGenerator_Amp;           /* Expression: 1
                                        * Referenced by: '<Root>/Pulse Generator'
                                        */
  real_T PulseGenerator_Period;        /* Computed Parameter: PulseGenerator_Period
                                        * Referenced by: '<Root>/Pulse Generator'
                                        */
  real_T PulseGenerator_Duty;          /* Computed Parameter: PulseGenerator_Duty
                                        * Referenced by: '<Root>/Pulse Generator'
                                        */
  real_T PulseGenerator_PhaseDelay;    /* Expression: 0
                                        * Referenced by: '<Root>/Pulse Generator'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_stm32f746gdiscovery_g_T {
  const char_T *errorStatus;
};

/* Block parameters (auto storage) */
extern P_stm32f746gdiscovery_getting_T stm32f746gdiscovery_gettingst_P;

/* Block states (auto storage) */
extern DW_stm32f746gdiscovery_gettin_T stm32f746gdiscovery_gettings_DW;

/* Model entry point functions */
extern void stm32f746gdiscovery_gettingstarted_initialize(void);
extern void stm32f746gdiscovery_gettingstarted_step(void);
extern void stm32f746gdiscovery_gettingstarted_terminate(void);

/* Real-time Model object */
extern RT_MODEL_stm32f746gdiscovery__T *const stm32f746gdiscovery_gettings_M;

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
 * '<Root>' : 'stm32f746gdiscovery_gettingstarted'
 */
#endif                                 /* RTW_HEADER_stm32f746gdiscovery_gettingstarted_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
