/*
 * File: Test_data.c
 *
 * Code generated for Simulink model 'Test'.
 *
 * Model version                  : 1.10
 * Simulink Coder version         : 8.14 (R2018a) 06-Feb-2018
 * C/C++ source code generated on : Tue Oct  9 17:01:55 2018
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Test.h"
#include "Test_private.h"

/* Block parameters (default storage) */
P_Test_T Test_P = {
  /* Expression: [0.00001  0.00017  0.00163  0.00975  0.04145  0.13264  0.33160  0.66320  1.07769  1.43692  1.58062  1.43692  1.07769  0.66320  0.33160  0.13264  0.04145  0.00975  0.00163  0.00017  0.00001  ]

   * Referenced by: '<Root>/Discrete Filter'
   */
  { 1.0E-5, 0.00017, 0.00163, 0.00975, 0.04145, 0.13264, 0.3316, 0.6632, 1.07769,
    1.43692, 1.58062, 1.43692, 1.07769, 0.6632, 0.3316, 0.13264, 0.04145,
    0.00975, 0.00163, 0.00017, 1.0E-5 },

  /* Expression: [1.00000  -0.00000  2.71935  0.00000  2.95450  0.00000  1.66340  0.00000  0.52726  0.00000  0.09589  0.00000  0.00979  0.00000  0.00053  0.00000  0.00001  0.00000  0.00000  0.00000  0.00000  ]

   * Referenced by: '<Root>/Discrete Filter'
   */
  { 1.0, -0.0, 2.71935, 0.0, 2.9545, 0.0, 1.6634, 0.0, 0.52726, 0.0, 0.09589,
    0.0, 0.00979, 0.0, 0.00053, 0.0, 1.0E-5, 0.0, 0.0, 0.0, 0.0 },

  /* Expression: 0
   * Referenced by: '<Root>/Discrete Filter'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<Root>/Discrete Filter'
   */
  0.0,

  /* Expression: 1/32768
   * Referenced by: '<Root>/Gain2'
   */
  3.0517578125E-5,

  /* Expression: [0.00001  0.00017  0.00163  0.00975  0.04145  0.13264  0.33160  0.66320  1.07769  1.43692  1.58062  1.43692  1.07769  0.66320  0.33160  0.13264  0.04145  0.00975  0.00163  0.00017  0.00001  ]

   * Referenced by: '<Root>/Discrete Filter1'
   */
  { 1.0E-5, 0.00017, 0.00163, 0.00975, 0.04145, 0.13264, 0.3316, 0.6632, 1.07769,
    1.43692, 1.58062, 1.43692, 1.07769, 0.6632, 0.3316, 0.13264, 0.04145,
    0.00975, 0.00163, 0.00017, 1.0E-5 },

  /* Expression: [1.00000  -0.00000  2.71935  0.00000  2.95450  0.00000  1.66340  0.00000  0.52726  0.00000  0.09589  0.00000  0.00979  0.00000  0.00053  0.00000  0.00001  0.00000  0.00000  0.00000  0.00000  ]

   * Referenced by: '<Root>/Discrete Filter1'
   */
  { 1.0, -0.0, 2.71935, 0.0, 2.9545, 0.0, 1.6634, 0.0, 0.52726, 0.0, 0.09589,
    0.0, 0.00979, 0.0, 0.00053, 0.0, 1.0E-5, 0.0, 0.0, 0.0, 0.0 },

  /* Expression: 0
   * Referenced by: '<Root>/Discrete Filter1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<Root>/Discrete Filter1'
   */
  0.0,

  /* Expression: 1/32768
   * Referenced by: '<Root>/Gain3'
   */
  3.0517578125E-5,

  /* Expression: [0.00001  0.00017  0.00163  0.00975  0.04145  0.13264  0.33160  0.66320  1.07769  1.43692  1.58062  1.43692  1.07769  0.66320  0.33160  0.13264  0.04145  0.00975  0.00163  0.00017  0.00001  ]

   * Referenced by: '<Root>/Discrete Filter2'
   */
  { 1.0E-5, 0.00017, 0.00163, 0.00975, 0.04145, 0.13264, 0.3316, 0.6632, 1.07769,
    1.43692, 1.58062, 1.43692, 1.07769, 0.6632, 0.3316, 0.13264, 0.04145,
    0.00975, 0.00163, 0.00017, 1.0E-5 },

  /* Expression: [1.00000  -0.00000  2.71935  0.00000  2.95450  0.00000  1.66340  0.00000  0.52726  0.00000  0.09589  0.00000  0.00979  0.00000  0.00053  0.00000  0.00001  0.00000  0.00000  0.00000  0.00000  ]

   * Referenced by: '<Root>/Discrete Filter2'
   */
  { 1.0, -0.0, 2.71935, 0.0, 2.9545, 0.0, 1.6634, 0.0, 0.52726, 0.0, 0.09589,
    0.0, 0.00979, 0.0, 0.00053, 0.0, 1.0E-5, 0.0, 0.0, 0.0, 0.0 },

  /* Expression: 0
   * Referenced by: '<Root>/Discrete Filter2'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<Root>/Discrete Filter2'
   */
  0.0,

  /* Expression: 1/32768
   * Referenced by: '<Root>/Gain4'
   */
  3.0517578125E-5,

  /* Expression: 32768
   * Referenced by: '<Root>/Gain1'
   */
  32768.0,

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
