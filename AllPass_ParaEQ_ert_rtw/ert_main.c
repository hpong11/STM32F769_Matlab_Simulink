/*
 * File: ert_main.c
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

#include "AllPass_ParaEQ.h"
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
  AllPass_ParaEQ_step();

  /* Get model outputs here */
  __disable_irq();
  OverrunFlag--;
  rtExtModeCheckEndTrigger();
}

volatile boolean_T stopRequested = false;
int main(void)
{
  volatile boolean_T runModel = true;
  float modelBaseRate = 0.09287981859410431;
  float systemClock = 216;

#ifndef USE_RTX
#if defined(MW_MULTI_TASKING_MODE) && (MW_MULTI_TASKING_MODE == 1)

  MW_ASM (" SVC #1");

#endif

  __disable_irq();

#endif

  ;
  stm32f7xx_init_board();
  rtmSetErrorStatus(AllPass_ParaEQ_M, 0);

  /* initialize external mode */
  rtParseArgsForExtMode(0, NULL);
  AllPass_ParaEQ_initialize();
  __enable_irq();

  /* External mode */
  rtSetTFinalForExtMode(&rtmGetTFinal(AllPass_ParaEQ_M));
  rtExtModeCheckInit(1);

  {
    boolean_T rtmStopReq = false;
    rtExtModeWaitForStartPkt(AllPass_ParaEQ_M->extModeInfo, 1, &rtmStopReq);
    if (rtmStopReq) {
      rtmSetStopRequested(AllPass_ParaEQ_M, true);
    }
  }

  rtERTExtModeStartMsg();
  __disable_irq();
  ARMCM_SysTick_Config(modelBaseRate);
  runModel =
    (rtmGetErrorStatus(AllPass_ParaEQ_M) == (NULL)) && !rtmGetStopRequested
    (AllPass_ParaEQ_M);
  __enable_irq();
  __enable_irq();
  while (runModel) {
    /* External mode */
    {
      boolean_T rtmStopReq = false;
      rtExtModeOneStep(AllPass_ParaEQ_M->extModeInfo, 1, &rtmStopReq);
      if (rtmStopReq) {
        rtmSetStopRequested(AllPass_ParaEQ_M, true);
      }
    }

    stopRequested = !(
                      (rtmGetErrorStatus(AllPass_ParaEQ_M) == (NULL)) &&
                      !rtmGetStopRequested(AllPass_ParaEQ_M));
    runModel = !(stopRequested);
    if (stopRequested) {
      SysTick->CTRL &= ~SysTick_CTRL_ENABLE_Msk;
    }

    ;
  }

  /* Disable rt_OneStep() here */

  /* Terminate model */
  AllPass_ParaEQ_terminate();
  rtExtModeShutdown(1);

#ifndef USE_RTX

  (void)systemClock;

#endif

  ;
  __disable_irq();
  return 0;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
