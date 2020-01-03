/*
 * File: ex_fircmsis_tut_private.h
 *
 * Code generated for Simulink model 'ex_fircmsis_tut'.
 *
 * Model version                  : 1.21
 * Simulink Coder version         : 8.13 (R2017b) 24-Jul-2017
 * C/C++ source code generated on : Tue Aug 21 12:11:09 2018
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_ex_fircmsis_tut_private_h_
#define RTW_HEADER_ex_fircmsis_tut_private_h_
#include "rtwtypes.h"

extern void RandSrc_GZ_R(real32_T y[], const real32_T mean[], int32_T meanLen,
  const real32_T xstd[], int32_T xstdLen, uint32_T state[], int32_T nChans,
  int32_T nSamps);
extern void RandSrcInitState_GZ(const uint32_T seed[], uint32_T state[], int32_T
  nChans);

#endif                                 /* RTW_HEADER_ex_fircmsis_tut_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
