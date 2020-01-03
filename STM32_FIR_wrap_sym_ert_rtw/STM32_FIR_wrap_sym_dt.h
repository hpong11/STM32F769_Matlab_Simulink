/*
 * STM32_FIR_wrap_sym_dt.h
 *
 * Code generation for model "STM32_FIR_wrap_sym".
 *
 * Model version              : 1.54
 * Simulink Coder version : 8.14 (R2018a) 06-Feb-2018
 * C source code generated on : Wed Oct  3 14:36:18 2018
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ext_types.h"

/* data type size table */
static uint_T rtDataTypeSizes[] = {
  sizeof(real_T),
  sizeof(real32_T),
  sizeof(int8_T),
  sizeof(uint8_T),
  sizeof(int16_T),
  sizeof(uint16_T),
  sizeof(int32_T),
  sizeof(uint32_T),
  sizeof(boolean_T),
  sizeof(fcn_call_T),
  sizeof(int_T),
  sizeof(pointer_T),
  sizeof(action_T),
  2*sizeof(uint32_T),
  sizeof(int16_T),
  sizeof(stm32f769idiscovery_AudioInpu_T),
  sizeof(stm32f769idiscovery_AudioOutp_T),
  sizeof(mbed_DigitalWrite_STM32_FIR_w_T)
};

/* data type name table */
static const char_T * rtDataTypeNames[] = {
  "real_T",
  "real32_T",
  "int8_T",
  "uint8_T",
  "int16_T",
  "uint16_T",
  "int32_T",
  "uint32_T",
  "boolean_T",
  "fcn_call_T",
  "int_T",
  "pointer_T",
  "action_T",
  "timer_uint32_pair_T",
  "int16_T",
  "stm32f769idiscovery_AudioInpu_T",
  "stm32f769idiscovery_AudioOutp_T",
  "mbed_DigitalWrite_STM32_FIR_w_T"
};

/* data type transitions for block I/O structure */
static DataTypeTransition rtBTransitions[] = {
  { (char_T *)(&STM32_FIR_wrap_sym_DW.obj), 15, 0, 1 },

  { (char_T *)(&STM32_FIR_wrap_sym_DW.obj_b), 16, 0, 1 },

  { (char_T *)(&STM32_FIR_wrap_sym_DW.obj_p), 17, 0, 1 },

  { (char_T *)(&STM32_FIR_wrap_sym_DW.Memory_PreviousInput[0]), 0, 0, 204 }
};

/* data type transition table for block I/O structure */
static DataTypeTransitionTable rtBTransTable = {
  4U,
  rtBTransitions
};

/* data type transitions for Parameters structure */
static DataTypeTransition rtPTransitions[] = {
  { (char_T *)(&STM32_FIR_wrap_sym_P.Constant3_Value), 0, 0, 209 },

  { (char_T *)(&STM32_FIR_wrap_sym_P.Gain_Gain), 14, 0, 1 }
};

/* data type transition table for Parameters structure */
static DataTypeTransitionTable rtPTransTable = {
  2U,
  rtPTransitions
};

/* [EOF] STM32_FIR_wrap_sym_dt.h */
