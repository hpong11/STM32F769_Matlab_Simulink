/*
 * File: ex_fircmsis_tut.c
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

#include "ex_fircmsis_tut.h"
#include "ex_fircmsis_tut_private.h"

/* Block signals (auto storage) */
B_ex_fircmsis_tut_T ex_fircmsis_tut_B;

/* Block states (auto storage) */
DW_ex_fircmsis_tut_T ex_fircmsis_tut_DW;

/* Real-time model */
RT_MODEL_ex_fircmsis_tut_T ex_fircmsis_tut_M_;
RT_MODEL_ex_fircmsis_tut_T *const ex_fircmsis_tut_M = &ex_fircmsis_tut_M_;
void RandSrc_GZ_R(real32_T y[], const real32_T mean[], int32_T meanLen, const
                  real32_T xstd[], int32_T xstdLen, uint32_T state[], int32_T
                  nChans, int32_T nSamps)
{
  int32_T i;
  int32_T j;
  real32_T r;
  real32_T x;
  real32_T s;
  real32_T y_0;
  int32_T chan;
  uint32_T icng;
  uint32_T jsr;
  int32_T samp;
  static const real32_T vt[65] = { 0.340945F, 0.45731461F, 0.539779305F,
    0.606242716F, 0.663169086F, 0.713697493F, 0.759612501F, 0.80203563F,
    0.841722727F, 0.879210174F, 0.914894819F, 0.949079096F, 0.98200053F,
    1.01384926F, 1.04478097F, 1.07492542F, 1.10439169F, 1.13327384F, 1.16165304F,
    1.18960094F, 1.21718144F, 1.24445164F, 1.27146351F, 1.29826498F, 1.32490075F,
    1.35141253F, 1.37783992F, 1.40422106F, 1.43059289F, 1.45699155F, 1.48345268F,
    1.51001215F, 1.53670609F, 1.56357121F, 1.59064543F, 1.61796796F, 1.64558017F,
    1.67352545F, 1.7018503F, 1.73060453F, 1.75984216F, 1.78962231F, 1.82001F,
    1.85107696F, 1.88290441F, 1.91558313F, 1.9492166F, 1.98392391F, 2.0198431F,
    2.05713558F, 2.09599304F, 2.13664508F, 2.17937136F, 2.22451758F, 2.27251863F,
    2.32393384F, 2.37950087F, 2.44022179F, 2.50751162F, 2.58346581F, 2.67139149F,
    2.77699423F, 2.77699423F, 2.77699423F, 2.77699423F };

  /* S-Function (sdsprandsrc2): '<Root>/Random Source' */
  /* RandSrc_GZ_R */
  for (chan = 0; chan < nChans; chan++) {
    icng = state[chan << 1];
    jsr = state[(chan << 1) + 1];
    for (samp = 0; samp < nSamps; samp++) {
      icng = 69069U * icng + 1234567U;
      jsr ^= jsr << 13;
      jsr ^= jsr >> 17;
      jsr ^= jsr << 5;
      i = (int32_T)(icng + jsr);
      j = (i & 63) + 1;
      r = (real32_T)i * 4.65661287E-10F * vt[j];
      if (!((real32_T)fabs(r) <= vt[j - 1])) {
        x = ((real32_T)fabs(r) - vt[j - 1]) / (vt[j] - vt[j - 1]);
        icng = 69069U * icng + 1234567U;
        jsr ^= jsr << 13;
        jsr ^= jsr >> 17;
        jsr ^= jsr << 5;
        y_0 = (real32_T)(int32_T)(icng + jsr) * 2.32830644E-10F + 0.5F;
        s = x + y_0;
        if (s > 1.30119801F) {
          r = r < 0.0F ? 0.487899214F * x - 0.487899214F : 0.487899214F -
            0.487899214F * x;
        } else {
          if (!(s <= 0.96892792F)) {
            x = 0.487899214F - 0.487899214F * x;
            if (y_0 > 12.6770601F - (real32_T)exp(-0.5F * x * x) * 12.3758602F)
            {
              r = r < 0.0F ? -x : x;
            } else {
              if (!((real32_T)exp(-0.5F * vt[j] * vt[j]) + y_0 * 0.0195830297F /
                    vt[j] <= (real32_T)exp(-0.5F * r * r))) {
                do {
                  icng = 69069U * icng + 1234567U;
                  jsr ^= jsr << 13;
                  jsr ^= jsr >> 17;
                  jsr ^= jsr << 5;
                  x = (real32_T)log((real32_T)(int32_T)(icng + jsr) *
                                    2.32830644E-10F + 0.5F) / 2.77699399F;
                  icng = 69069U * icng + 1234567U;
                  jsr ^= jsr << 13;
                  jsr ^= jsr >> 17;
                  jsr ^= jsr << 5;
                } while ((real32_T)log((real32_T)(int32_T)(icng + jsr) *
                                       2.32830644E-10F + 0.5F) * -2.0F <= x * x);

                r = r < 0.0F ? x - 2.77699399F : 2.77699399F - x;
              }
            }
          }
        }
      }

      y[chan * nSamps + samp] = xstd[xstdLen > 1 ? chan : 0] * r + mean[meanLen >
        1 ? chan : 0];
    }

    state[chan << 1] = icng;
    state[(chan << 1) + 1] = jsr;
  }

  /* End of S-Function (sdsprandsrc2): '<Root>/Random Source' */
}

void RandSrcInitState_GZ(const uint32_T seed[], uint32_T state[], int32_T nChans)
{
  int32_T i;

  /* InitializeConditions for S-Function (sdsprandsrc2): '<Root>/Random Source' */
  /* RandSrcInitState_GZ */
  for (i = 0; i < nChans; i++) {
    state[i << 1] = 362436069U;
    state[(i << 1) + 1] = seed[i] == 0U ? 521288629U : seed[i];
  }

  /* End of InitializeConditions for S-Function (sdsprandsrc2): '<Root>/Random Source' */
}

/* Model step function */
void ex_fircmsis_tut_step(void)
{
  real32_T updateVal;
  int32_T j;

  /* S-Function (sdspsine2): '<Root>/Sine Wave' */
  updateVal = ex_fircmsis_tut_P.SineWave_Frequency * 0.000785398181F;
  for (j = 0; j < 75; j++) {
    ex_fircmsis_tut_B.SineWave[j] = ex_fircmsis_tut_P.SineWave_Amplitude *
      arm_sin_f32(ex_fircmsis_tut_DW.SineWave_AccFreqNorm);

    /* Update accumulated normalized freq value
       for next sample.  Keep in range [0 2*pi) */
    ex_fircmsis_tut_DW.SineWave_AccFreqNorm += updateVal;
    if (ex_fircmsis_tut_DW.SineWave_AccFreqNorm >= 6.28318548F) {
      ex_fircmsis_tut_DW.SineWave_AccFreqNorm -= 6.28318548F;
    } else {
      if (ex_fircmsis_tut_DW.SineWave_AccFreqNorm < 0.0F) {
        ex_fircmsis_tut_DW.SineWave_AccFreqNorm += 6.28318548F;
      }
    }
  }

  /* End of S-Function (sdspsine2): '<Root>/Sine Wave' */

  /* S-Function (sdspsine2): '<Root>/Sine Wave1' */
  updateVal = ex_fircmsis_tut_P.SineWave1_Frequency * 0.000785398181F;
  for (j = 0; j < 75; j++) {
    ex_fircmsis_tut_B.SineWave1[j] = ex_fircmsis_tut_P.SineWave1_Amplitude *
      arm_sin_f32(ex_fircmsis_tut_DW.SineWave1_AccFreqNorm);

    /* Update accumulated normalized freq value
       for next sample.  Keep in range [0 2*pi) */
    ex_fircmsis_tut_DW.SineWave1_AccFreqNorm += updateVal;
    if (ex_fircmsis_tut_DW.SineWave1_AccFreqNorm >= 6.28318548F) {
      ex_fircmsis_tut_DW.SineWave1_AccFreqNorm -= 6.28318548F;
    } else {
      if (ex_fircmsis_tut_DW.SineWave1_AccFreqNorm < 0.0F) {
        ex_fircmsis_tut_DW.SineWave1_AccFreqNorm += 6.28318548F;
      }
    }
  }

  /* End of S-Function (sdspsine2): '<Root>/Sine Wave1' */

  /* S-Function (sdsprandsrc2): '<Root>/Random Source' */
  RandSrc_GZ_R(ex_fircmsis_tut_B.RandomSource,
               &ex_fircmsis_tut_P.RandomSource_MeanVal, 1,
               &ex_fircmsis_tut_P.RandomSource_VarianceRTP, 1,
               ex_fircmsis_tut_DW.RandomSource_STATE_DWORK, 1, 75);
  for (j = 0; j < 75; j++) {
    /* Sum: '<Root>/Sum1' */
    updateVal = (ex_fircmsis_tut_B.SineWave[j] + ex_fircmsis_tut_B.SineWave1[j])
      + ex_fircmsis_tut_B.RandomSource[j];

    /* SignalConversion: '<Root>/ConcatBufferAtMatrix ConcatenateIn1' */
    ex_fircmsis_tut_B.MatrixConcatenate[j] = updateVal;

    /* Sum: '<Root>/Sum1' */
    ex_fircmsis_tut_B.SineWave[j] = updateVal;
  }

  /* Outputs for Atomic SubSystem: '<Root>/FIR' */
  /* DiscreteFir: '<S1>/Discrete FIR Filter' */
  arm_fir_f32(&ex_fircmsis_tut_DW.S, &ex_fircmsis_tut_B.SineWave[0],
              &ex_fircmsis_tut_B.MatrixConcatenate[75], 75U);

  /* End of Outputs for SubSystem: '<Root>/FIR' */
}

/* Model initialize function */
void ex_fircmsis_tut_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(ex_fircmsis_tut_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&ex_fircmsis_tut_DW, 0,
                sizeof(DW_ex_fircmsis_tut_T));

  {
    static const real_T tmp[64] = { 0.00080778838472719806,
      0.00042905548705667897, -0.00048044594457101258, -0.0011208949727419544,
      -0.00067153095025518231, 0.00081627957461897257, 0.0019948413989975796,
      0.0012178679321087436, -0.0014807767617716296, -0.0035792352851763774,
      -0.0021482720299582495, 0.0025611589713199021, 0.0060668058880321883,
      0.0035710582331055637, -0.0041814121108098038, -0.00974679970620418,
      -0.0056581816627061876, 0.0065499591788642786, 0.015134310555718202,
      0.0087341600345598423, -0.010083986843950706, -0.02332488960899784,
      -0.013534943883501994, 0.015798100253775035, 0.037201242224336004,
      0.022183461342827875, -0.026963778809924024, -0.0674616366846787,
      -0.044177580479455629, 0.062708470695937782, 0.21095500478317686,
      0.31788480079554055, 0.31788480079554055, 0.21095500478317686,
      0.062708470695937782, -0.044177580479455629, -0.0674616366846787,
      -0.026963778809924024, 0.022183461342827875, 0.037201242224336004,
      0.015798100253775035, -0.013534943883501994, -0.02332488960899784,
      -0.010083986843950706, 0.0087341600345598423, 0.015134310555718202,
      0.0065499591788642786, -0.0056581816627061876, -0.00974679970620418,
      -0.0041814121108098038, 0.0035710582331055637, 0.0060668058880321883,
      0.0025611589713199021, -0.0021482720299582495, -0.0035792352851763774,
      -0.0014807767617716296, 0.0012178679321087436, 0.0019948413989975796,
      0.00081627957461897257, -0.00067153095025518231, -0.0011208949727419544,
      -0.00048044594457101258, 0.00042905548705667897, 0.00080778838472719806 };

    int32_T i;
    real32_T arg;

    /* Start for S-Function (sdspsine2): '<Root>/Sine Wave' */
    /* Trigonometric mode: compute accumulated
       normalized trig fcn argument for each channel */
    /* Keep normalized value in range [0 2*pi) */
    arg = (real32_T)fmod(ex_fircmsis_tut_P.SineWave_Phase, 6.2831854820251465);
    if (arg < 0.0F) {
      arg += 6.28318548F;
    }

    ex_fircmsis_tut_DW.SineWave_AccFreqNorm = arg;

    /* End of Start for S-Function (sdspsine2): '<Root>/Sine Wave' */

    /* Start for S-Function (sdspsine2): '<Root>/Sine Wave1' */
    /* Trigonometric mode: compute accumulated
       normalized trig fcn argument for each channel */
    /* Keep normalized value in range [0 2*pi) */
    arg = (real32_T)fmod(ex_fircmsis_tut_P.SineWave1_Phase, 6.2831854820251465);
    if (arg < 0.0F) {
      arg += 6.28318548F;
    }

    ex_fircmsis_tut_DW.SineWave1_AccFreqNorm = arg;

    /* End of Start for S-Function (sdspsine2): '<Root>/Sine Wave1' */

    /* InitializeConditions for S-Function (sdspsine2): '<Root>/Sine Wave' */
    /* This code only executes when block is re-enabled in an
       enabled subsystem when the enabled subsystem states on
       re-enabling are set to 'Reset' */
    /* Reset to time zero on re-enable */
    /* Trigonometric mode: compute accumulated
       normalized trig fcn argument for each channel */
    /* Keep normalized value in range [0 2*pi) */
    arg = (real32_T)fmod(ex_fircmsis_tut_P.SineWave_Phase, 6.2831854820251465);
    if (arg < 0.0F) {
      arg += 6.28318548F;
    }

    ex_fircmsis_tut_DW.SineWave_AccFreqNorm = arg;

    /* End of InitializeConditions for S-Function (sdspsine2): '<Root>/Sine Wave' */

    /* InitializeConditions for S-Function (sdspsine2): '<Root>/Sine Wave1' */
    /* This code only executes when block is re-enabled in an
       enabled subsystem when the enabled subsystem states on
       re-enabling are set to 'Reset' */
    /* Reset to time zero on re-enable */
    /* Trigonometric mode: compute accumulated
       normalized trig fcn argument for each channel */
    /* Keep normalized value in range [0 2*pi) */
    arg = (real32_T)fmod(ex_fircmsis_tut_P.SineWave1_Phase, 6.2831854820251465);
    if (arg < 0.0F) {
      arg += 6.28318548F;
    }

    ex_fircmsis_tut_DW.SineWave1_AccFreqNorm = arg;

    /* End of InitializeConditions for S-Function (sdspsine2): '<Root>/Sine Wave1' */

    /* InitializeConditions for S-Function (sdsprandsrc2): '<Root>/Random Source' */
    RandSrcInitState_GZ(&ex_fircmsis_tut_P.RandomSource_rawSeed,
                        ex_fircmsis_tut_DW.RandomSource_STATE_DWORK, 1);

    /* SystemInitialize for Atomic SubSystem: '<Root>/FIR' */
    /* InitializeConditions for DiscreteFir: '<S1>/Discrete FIR Filter' */
    for (i = 0; i < 64; i++) {
      ex_fircmsis_tut_DW.qCoeff[i] = (real32_T)tmp[i];
    }

    arm_fir_init_f32(&ex_fircmsis_tut_DW.S, 64U, &ex_fircmsis_tut_DW.qCoeff[0],
                     &ex_fircmsis_tut_DW.pState[0], 75U);

    /* End of InitializeConditions for DiscreteFir: '<S1>/Discrete FIR Filter' */
    /* End of SystemInitialize for SubSystem: '<Root>/FIR' */
  }
}

/* Model terminate function */
void ex_fircmsis_tut_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
