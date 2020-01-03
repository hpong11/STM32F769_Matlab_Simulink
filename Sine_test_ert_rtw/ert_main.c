/*
 * File: ert_main.c
 *
 * Code generated for Simulink model 'Sine_test'.
 *
 * Model version                  : 1.5
 * Simulink Coder version         : 8.14 (R2018a) 06-Feb-2018
 * C/C++ source code generated on : Mon Sep 10 14:17:17 2018
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Sine_test.h"
#include "rtwtypes.h"
#include <ext_work.h>
#include <ext_svr.h>
#include <ext_share.h>
#include <updown.h>

volatile int IsrOverrun = 0;
static boolean_T OverrunFlag = 0;
void rt_OneStep(void)
{
  /* Check for overrun. Protect OverrunFlag against preemption */
  if (OverrunFlag++) {
    IsrOverrun = 1;
    OverrunFlag--;
    return;
  }

  __enable_irq();
  Sine_test_step();

  /* Get model outputs here */
  __disable_irq();
  OverrunFlag--;
  rtExtModeCheckEndTrigger();
}

volatile boolean_T stopRequested = false;
int main(void)
{
  volatile boolean_T runModel = true;
  float modelBaseRate = 0.128;
  float systemClock = 216;

#ifndef USE_RTX
#if defined(MW_MULTI_TASKING_MODE) && (MW_MULTI_TASKING_MODE == 1)

  MW_ASM (" SVC #1");

#endif

  __disable_irq();

#endif

  ;
  stm32f7xx_init_board();
  rtmSetErrorStatus(Sine_test_M, 0);

  /* initialize external mode */
  rtParseArgsForExtMode(0, NULL);
  Sine_test_initialize();
  __enable_irq();

  /* External mode */
  rtSetTFinalForExtMode(&rtmGetTFinal(Sine_test_M));
  rtExtModeCheckInit(1);

  {
    boolean_T rtmStopReq = false;
    rtExtModeWaitForStartPkt(Sine_test_M->extModeInfo, 1, &rtmStopReq);
    if (rtmStopReq) {
      rtmSetStopRequested(Sine_test_M, true);
    }
  }

  rtERTExtModeStartMsg();
  __disable_irq();
  ARMCM_SysTick_Config(modelBaseRate);
  runModel =
    (rtmGetErrorStatus(Sine_test_M) == (NULL)) && !rtmGetStopRequested
    (Sine_test_M);
  __enable_irq();
  __enable_irq();
  while (runModel) {
    /* External mode */
    {
      boolean_T rtmStopReq = false;
      rtExtModeOneStep(Sine_test_M->extModeInfo, 1, &rtmStopReq);
      if (rtmStopReq) {
        rtmSetStopRequested(Sine_test_M, true);
      }
    }

    stopRequested = !(
                      (rtmGetErrorStatus(Sine_test_M) == (NULL)) &&
                      !rtmGetStopRequested(Sine_test_M));
    runModel = !(stopRequested);
  }

  rtExtModeShutdown(1);

#ifndef USE_RTX

  (void)systemClock;

#endif

  ;

  /* Disable rt_OneStep() here */

  /* Terminate model */
  Sine_test_terminate();
  __disable_irq();
  return 0;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
