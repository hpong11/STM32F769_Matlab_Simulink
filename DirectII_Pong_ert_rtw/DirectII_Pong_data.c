/*
 * File: DirectII_Pong_data.c
 *
 * Code generated for Simulink model 'DirectII_Pong'.
 *
 * Model version                  : 1.65
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Thu Dec 19 13:04:03 2019
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "DirectII_Pong.h"
#include "DirectII_Pong_private.h"

/* Block parameters (default storage) */
P_DirectII_Pong_T DirectII_Pong_P = {
  /* Expression: 1/32000
   * Referenced by: '<Root>/Gain'
   */
  3.125E-5,

  /* Expression: 0.5
   * Referenced by: '<S2>/Alpha LP'
   */
  0.5,

  /* Expression: 0.5
   * Referenced by: '<S2>/Beta LP'
   */
  0.5,

  /* Expression: 0.5
   * Referenced by: '<S2>/Alpha HP'
   */
  0.5,

  /* Expression: 0.2
   * Referenced by: '<S2>/Beta HP'
   */
  0.2,

  /* Expression: 0.5232919254658385
   * Referenced by: '<S2>/Alpha BP'
   */
  0.52329192546583847,

  /* Expression: 0.2492401215805471
   * Referenced by: '<S2>/Beta BP'
   */
  0.24924012158054709,

  /* Expression: 0.99
   * Referenced by: '<S2>/Alpha BS'
   */
  0.99,

  /* Expression: 0.5
   * Referenced by: '<S2>/Beta BS'
   */
  0.5,

  /* Expression: [0 0;0 0;0 0;0 0]
   * Referenced by: '<Root>/Memory1'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  /* Computed Parameter: Gain1_Gain
   * Referenced by: '<Root>/Gain1'
   */
  32767,

  /* Computed Parameter: Gain2_Gain
   * Referenced by: '<Root>/Gain2'
   */
  32767,

  /* Computed Parameter: Gain4_Gain
   * Referenced by: '<Root>/Gain4'
   */
  32767,

  /* Computed Parameter: Gain3_Gain
   * Referenced by: '<Root>/Gain3'
   */
  32767,

  /* Computed Parameter: selector_Value
   * Referenced by: '<Root>/selector'
   */
  4
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
