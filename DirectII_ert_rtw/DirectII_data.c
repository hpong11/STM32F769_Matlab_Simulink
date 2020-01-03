/*
 * File: DirectII_data.c
 *
 * Code generated for Simulink model 'DirectII'.
 *
 * Model version                  : 1.60
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Mon Nov 25 12:22:06 2019
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "DirectII.h"
#include "DirectII_private.h"

/* Block parameters (default storage) */
P_DirectII_T DirectII_P = {
  /* Expression: 1/32768
   * Referenced by: '<Root>/Gain'
   */
  3.0517578125E-5,

  /* Expression: 0.8
   * Referenced by: '<S2>/Alpha LP'
   */
  0.8,

  /* Expression: 0.8090000000000001
   * Referenced by: '<S2>/Beta LP'
   */
  0.809,

  /* Expression: 0.6242236024844721
   * Referenced by: '<S2>/Alpha HP'
   */
  0.62422360248447206,

  /* Expression: 0.4
   * Referenced by: '<S2>/Beta HP'
   */
  0.4,

  /* Expression: 0.5574534161490683
   * Referenced by: '<S2>/Alpha BP'
   */
  0.55745341614906829,

  /* Expression: -0.07598784194528874
   * Referenced by: '<S2>/Beta BP'
   */
  -0.075987841945288737,

  /* Expression: 0.6242236024844721
   * Referenced by: '<S2>/Alpha BS'
   */
  0.62422360248447206,

  /* Expression: -0.8090000000000001
   * Referenced by: '<S2>/Beta BS'
   */
  -0.809,

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
  1
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
