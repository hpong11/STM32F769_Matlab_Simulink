/*
 * File: STM32_FIR_wrap_sym_data.c
 *
 * Code generated for Simulink model 'STM32_FIR_wrap_sym'.
 *
 * Model version                  : 1.54
 * Simulink Coder version         : 8.14 (R2018a) 06-Feb-2018
 * C/C++ source code generated on : Wed Oct  3 14:36:18 2018
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "STM32_FIR_wrap_sym.h"
#include "STM32_FIR_wrap_sym_private.h"

/* Block parameters (default storage) */
P_STM32_FIR_wrap_sym_T STM32_FIR_wrap_sym_P = {
  /* Expression: 0
   * Referenced by: '<Root>/Constant3'
   */
  0.0,

  /* Expression: [ 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ;]

   * Referenced by: '<Root>/Memory'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  /* Expression: 0
   * Referenced by: '<Root>/Mode'
   */
  0.0,

  /* Expression: 0.5
   * Referenced by: '<Root>/Center Frequency'
   */
  0.5,

  /* Expression: 0.3
   * Referenced by: '<Root>/Band Width'
   */
  0.3,

  /* Expression: [ 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ; 0 0 ;]

   * Referenced by: '<Root>/Memory1'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  /* Expression: 32700
   * Referenced by: '<Root>/Gain1'
   */
  32700.0,

  /* Computed Parameter: Gain_Gain
   * Referenced by: '<Root>/Gain'
   */
  16384
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
