/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: MASTER.h
 *
 * Code generated for Simulink model 'MASTER'.
 *
 * Model version                  : 13.7
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Tue Sep  8 11:46:36 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef MASTER_h_
#define MASTER_h_
#ifndef MASTER_COMMON_INCLUDES_
#define MASTER_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                                 /* MASTER_COMMON_INCLUDES_ */

#include "MASTER_types.h"
#include "INPUT.h"
#include "LIMITATIONS.h"
#include "STATEFLOW.h"
#include "SYSTEMS.h"
#include "TORQUECONTROL.h"

/* Block signals for model 'MASTER' */
typedef struct {
  real_T aCamberGainRollF_n;           /* '<Root>/TORQUECONTROL' */
  real_T aCamberGainRollR_j;           /* '<Root>/TORQUECONTROL' */
} B_MASTER_c_T;

/* Block states (default storage) for model 'MASTER' */
typedef struct {
  real_T UnitDelay_10_DSTATE;          /* '<Root>/Unit Delay' */
  real_T UnitDelay_101_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_102_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_103_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_105_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_11_DSTATE;          /* '<Root>/Unit Delay' */
  real_T UnitDelay_110_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_112_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_117_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_118_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_119_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_120_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_13_DSTATE;          /* '<Root>/Unit Delay' */
  real_T UnitDelay_154_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_156_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_157_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_163_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_165_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_167_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_168_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_169_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_170_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_171_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_172_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_173_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_174_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_175_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_176_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_177_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_178_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_179_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_180_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_181_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_182_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_183_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_184_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_185_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_186_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_187_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_188_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_189_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_190_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_191_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_196_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_199_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_200_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_201_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_202_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_203_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_204_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_205_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_206_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_207_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_208_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_209_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_210_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_211_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_212_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_213_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_214_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_215_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_216_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_217_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_218_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_219_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_22_DSTATE;          /* '<Root>/Unit Delay' */
  real_T UnitDelay_220_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_221_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_222_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_223_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_224_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_225_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_226_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_227_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_228_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_229_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_23_DSTATE;          /* '<Root>/Unit Delay' */
  real_T UnitDelay_231_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_232_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_233_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_234_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_235_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_236_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_237_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_238_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_239_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_24_DSTATE;          /* '<Root>/Unit Delay' */
  real_T UnitDelay_240_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_245_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_246_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_247_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_248_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_249_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_25_DSTATE;          /* '<Root>/Unit Delay' */
  real_T UnitDelay_257_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_258_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_259_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_26_DSTATE;          /* '<Root>/Unit Delay' */
  real_T UnitDelay_260_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_261_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_262_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_263_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_264_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_265_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_266_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_267_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_268_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_269_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_270_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_271_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_272_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_276_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_277_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_278_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_279_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_280_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_281_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_282_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_283_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_284_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_285_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_286_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_287_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_288_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_289_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_290_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_291_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_292_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_293_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_294_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_295_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_296_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_297_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_298_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_299_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_300_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_301_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_302_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_303_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_304_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_305_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_306_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_307_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_308_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_309_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_310_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_311_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_312_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_313_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_314_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_315_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_317_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_318_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_319_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_320_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_321_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_322_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_323_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_324_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_325_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_326_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_327_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_328_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_329_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_330_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_331_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_332_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_333_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_334_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_335_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_336_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_337_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_338_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_339_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_340_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_341_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_342_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_343_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_344_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_345_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_346_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_347_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_348_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_349_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_35_DSTATE;          /* '<Root>/Unit Delay' */
  real_T UnitDelay_350_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_351_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_352_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_353_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_354_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_355_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_356_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_357_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_358_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_359_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_36_DSTATE;          /* '<Root>/Unit Delay' */
  real_T UnitDelay_360_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_361_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_362_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_363_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_364_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_365_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_366_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_367_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_368_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_369_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_37_DSTATE;          /* '<Root>/Unit Delay' */
  real_T UnitDelay_38_DSTATE;          /* '<Root>/Unit Delay' */
  real_T UnitDelay_39_DSTATE;          /* '<Root>/Unit Delay' */
  real_T UnitDelay_48_DSTATE;          /* '<Root>/Unit Delay' */
  real_T UnitDelay_49_DSTATE;          /* '<Root>/Unit Delay' */
  real_T UnitDelay_50_DSTATE;          /* '<Root>/Unit Delay' */
  real_T UnitDelay_51_DSTATE;          /* '<Root>/Unit Delay' */
  real_T UnitDelay_52_DSTATE;          /* '<Root>/Unit Delay' */
  real_T UnitDelay_57_DSTATE;          /* '<Root>/Unit Delay' */
  real_T UnitDelay_58_DSTATE;          /* '<Root>/Unit Delay' */
  real_T UnitDelay_59_DSTATE;          /* '<Root>/Unit Delay' */
  real_T UnitDelay_60_DSTATE;          /* '<Root>/Unit Delay' */
  real_T UnitDelay_61_DSTATE;          /* '<Root>/Unit Delay' */
  real_T UnitDelay_62_DSTATE;          /* '<Root>/Unit Delay' */
  real_T UnitDelay_67_DSTATE;          /* '<Root>/Unit Delay' */
  real_T UnitDelay_68_DSTATE;          /* '<Root>/Unit Delay' */
  real_T UnitDelay_69_DSTATE;          /* '<Root>/Unit Delay' */
  real_T UnitDelay_70_DSTATE;          /* '<Root>/Unit Delay' */
  real_T UnitDelay_71_DSTATE;          /* '<Root>/Unit Delay' */
  real_T UnitDelay_72_DSTATE;          /* '<Root>/Unit Delay' */
  real_T UnitDelay_73_DSTATE;          /* '<Root>/Unit Delay' */
  real_T UnitDelay_75_DSTATE;          /* '<Root>/Unit Delay' */
  real_T UnitDelay_76_DSTATE;          /* '<Root>/Unit Delay' */
  real_T UnitDelay_80_DSTATE;          /* '<Root>/Unit Delay' */
  real_T UnitDelay_81_DSTATE;          /* '<Root>/Unit Delay' */
  real_T UnitDelay_82_DSTATE;          /* '<Root>/Unit Delay' */
  real_T UnitDelay_83_DSTATE;          /* '<Root>/Unit Delay' */
  real_T UnitDelay_84_DSTATE;          /* '<Root>/Unit Delay' */
  real_T UnitDelay_85_DSTATE;          /* '<Root>/Unit Delay' */
  real_T UnitDelay_86_DSTATE;          /* '<Root>/Unit Delay' */
  real_T UnitDelay_87_DSTATE;          /* '<Root>/Unit Delay' */
  real_T UnitDelay_88_DSTATE;          /* '<Root>/Unit Delay' */
  real_T UnitDelay_89_DSTATE;          /* '<Root>/Unit Delay' */
  real_T UnitDelay_9_DSTATE;           /* '<Root>/Unit Delay' */
  real_T UnitDelay_98_DSTATE;          /* '<Root>/Unit Delay' */
  real_T UnitDelay1_10_DSTATE;         /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_101_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_102_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_103_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_105_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_107_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_110_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_112_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_113_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_114_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_115_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_117_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_118_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_119_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_12_DSTATE;         /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_120_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_129_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_130_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_142_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_143_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_144_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_145_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_146_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_147_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_148_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_150_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_151_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_152_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_153_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_154_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_155_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_162_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_163_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_164_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_165_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_167_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_168_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_169_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_170_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_171_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_172_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_173_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_174_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_175_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_176_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_177_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_178_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_179_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_180_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_181_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_182_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_183_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_184_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_185_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_186_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_187_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_188_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_189_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_190_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_191_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_192_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_193_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_194_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_195_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_196_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_199_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_200_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_201_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_202_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_203_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_204_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_205_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_206_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_207_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_208_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_209_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_210_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_211_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_212_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_213_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_214_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_215_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_216_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_217_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_218_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_219_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_22_DSTATE;         /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_220_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_221_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_222_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_223_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_224_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_225_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_226_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_227_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_228_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_229_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_23_DSTATE;         /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_231_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_232_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_233_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_234_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_235_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_236_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_237_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_238_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_239_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_240_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_241_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_242_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_243_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_244_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_245_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_246_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_247_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_248_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_249_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_25_DSTATE;         /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_250_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_251_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_252_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_253_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_255_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_256_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_257_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_258_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_259_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_260_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_261_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_262_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_263_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_264_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_265_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_266_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_267_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_268_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_269_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_270_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_271_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_272_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_276_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_277_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_278_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_279_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_280_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_281_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_282_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_283_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_284_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_285_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_286_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_287_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_288_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_289_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_290_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_291_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_292_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_293_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_294_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_295_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_296_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_297_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_298_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_299_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_300_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_301_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_302_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_303_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_304_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_305_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_306_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_307_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_308_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_309_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_310_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_311_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_312_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_313_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_314_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_315_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_317_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_318_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_319_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_320_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_321_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_322_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_323_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_324_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_325_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_326_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_327_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_328_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_329_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_330_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_331_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_332_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_333_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_334_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_335_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_336_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_337_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_338_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_339_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_340_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_341_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_342_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_343_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_344_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_345_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_346_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_347_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_348_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_349_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_35_DSTATE;         /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_350_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_351_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_352_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_353_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_354_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_355_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_356_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_357_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_358_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_359_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_36_DSTATE;         /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_360_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_361_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_362_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_363_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_364_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_365_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_366_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_367_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_368_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_369_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_38_DSTATE;         /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_48_DSTATE;         /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_49_DSTATE;         /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_51_DSTATE;         /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_57_DSTATE;         /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_58_DSTATE;         /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_59_DSTATE;         /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_60_DSTATE;         /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_61_DSTATE;         /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_62_DSTATE;         /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_67_DSTATE;         /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_68_DSTATE;         /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_69_DSTATE;         /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_70_DSTATE;         /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_71_DSTATE;         /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_72_DSTATE;         /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_73_DSTATE;         /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_74_DSTATE;         /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_75_DSTATE;         /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_76_DSTATE;         /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_77_DSTATE;         /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_78_DSTATE;         /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_79_DSTATE;         /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_81_DSTATE;         /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_83_DSTATE;         /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_85_DSTATE;         /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_86_DSTATE;         /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_87_DSTATE;         /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_89_DSTATE;         /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_9_DSTATE;          /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_98_DSTATE;         /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_99_DSTATE;         /* '<Root>/Unit Delay1' */
  real_T UnitDelay2_101_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_105_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_107_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_11_DSTATE;         /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_110_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_112_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_113_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_114_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_115_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_117_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_118_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_119_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_120_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_129_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_13_DSTATE;         /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_130_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_142_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_143_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_144_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_145_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_146_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_147_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_148_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_150_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_151_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_152_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_153_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_154_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_155_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_156_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_157_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_162_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_163_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_164_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_165_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_167_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_168_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_169_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_170_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_171_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_172_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_173_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_174_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_175_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_176_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_177_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_178_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_179_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_180_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_181_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_182_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_183_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_184_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_185_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_186_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_187_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_188_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_189_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_190_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_191_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_192_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_193_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_194_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_195_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_196_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_199_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_200_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_201_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_202_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_203_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_204_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_205_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_206_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_207_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_208_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_209_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_210_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_211_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_212_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_213_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_214_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_215_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_216_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_217_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_218_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_219_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_22_DSTATE;         /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_220_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_221_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_222_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_223_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_224_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_225_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_226_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_227_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_228_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_229_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_231_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_232_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_233_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_234_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_235_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_236_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_237_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_238_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_239_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_24_DSTATE;         /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_240_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_241_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_242_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_243_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_244_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_245_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_246_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_247_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_248_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_249_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_25_DSTATE;         /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_250_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_251_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_252_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_253_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_255_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_256_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_257_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_258_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_259_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_26_DSTATE;         /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_260_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_261_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_262_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_263_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_264_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_265_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_266_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_267_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_268_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_269_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_270_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_271_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_272_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_276_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_277_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_278_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_279_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_280_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_281_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_282_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_283_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_284_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_285_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_286_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_287_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_288_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_289_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_290_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_291_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_292_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_293_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_294_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_295_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_296_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_297_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_298_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_299_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_300_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_301_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_302_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_303_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_304_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_305_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_306_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_307_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_308_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_309_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_310_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_311_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_312_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_313_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_314_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_315_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_317_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_318_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_319_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_320_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_321_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_322_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_323_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_324_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_325_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_326_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_327_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_328_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_329_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_330_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_331_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_332_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_333_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_334_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_335_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_336_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_337_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_338_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_339_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_340_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_341_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_342_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_343_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_344_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_345_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_346_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_347_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_348_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_349_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_35_DSTATE;         /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_350_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_351_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_352_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_353_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_354_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_355_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_356_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_357_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_358_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_359_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_360_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_361_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_362_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_363_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_364_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_365_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_366_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_367_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_368_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_369_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_37_DSTATE;         /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_38_DSTATE;         /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_39_DSTATE;         /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_48_DSTATE;         /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_50_DSTATE;         /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_51_DSTATE;         /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_52_DSTATE;         /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_53_DSTATE;         /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_54_DSTATE;         /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_55_DSTATE;         /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_56_DSTATE;         /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_57_DSTATE;         /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_58_DSTATE;         /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_59_DSTATE;         /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_60_DSTATE;         /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_61_DSTATE;         /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_62_DSTATE;         /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_67_DSTATE;         /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_68_DSTATE;         /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_69_DSTATE;         /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_70_DSTATE;         /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_71_DSTATE;         /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_72_DSTATE;         /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_73_DSTATE;         /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_74_DSTATE;         /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_75_DSTATE;         /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_76_DSTATE;         /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_77_DSTATE;         /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_78_DSTATE;         /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_79_DSTATE;         /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_80_DSTATE;         /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_81_DSTATE;         /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_83_DSTATE;         /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_84_DSTATE;         /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_85_DSTATE;         /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_86_DSTATE;         /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_87_DSTATE;         /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_9_DSTATE;          /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_97_DSTATE;         /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_98_DSTATE;         /* '<Root>/Unit Delay2' */
  real_T UnitDelay3_101_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_102_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_103_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_105_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_107_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_110_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_112_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_113_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_114_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_115_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_117_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_118_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_119_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_120_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_129_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_130_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_142_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_143_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_144_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_145_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_146_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_147_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_148_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_150_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_151_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_152_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_153_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_154_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_155_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_156_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_157_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_162_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_163_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_164_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_165_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_167_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_168_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_169_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_170_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_171_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_172_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_173_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_174_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_175_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_176_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_177_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_178_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_179_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_180_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_181_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_182_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_183_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_184_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_185_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_186_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_187_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_188_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_189_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_190_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_191_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_192_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_193_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_194_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_195_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_199_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_200_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_201_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_202_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_203_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_204_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_205_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_206_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_207_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_208_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_209_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_210_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_211_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_212_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_213_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_214_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_215_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_216_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_217_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_218_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_219_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_22_DSTATE;         /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_220_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_221_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_222_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_223_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_224_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_225_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_226_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_227_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_228_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_229_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_231_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_232_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_233_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_234_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_235_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_236_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_237_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_238_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_239_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_240_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_241_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_242_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_243_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_244_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_245_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_246_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_247_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_248_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_249_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_25_DSTATE;         /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_250_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_251_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_252_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_253_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_255_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_256_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_257_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_258_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_259_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_260_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_261_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_262_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_263_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_264_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_265_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_266_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_267_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_268_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_269_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_270_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_271_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_272_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_276_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_277_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_278_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_279_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_280_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_281_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_282_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_283_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_284_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_285_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_286_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_287_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_288_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_289_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_290_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_291_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_292_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_293_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_294_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_295_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_296_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_297_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_298_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_299_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_300_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_301_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_302_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_303_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_304_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_305_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_306_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_307_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_308_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_309_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_310_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_311_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_312_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_313_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_314_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_315_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_317_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_318_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_319_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_320_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_321_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_322_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_323_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_324_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_325_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_326_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_327_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_328_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_329_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_330_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_331_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_332_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_333_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_334_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_335_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_336_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_337_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_338_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_339_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_340_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_341_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_342_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_343_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_344_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_345_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_346_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_347_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_348_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_349_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_35_DSTATE;         /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_350_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_351_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_352_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_353_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_354_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_355_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_356_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_357_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_358_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_359_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_360_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_361_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_362_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_363_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_364_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_365_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_366_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_367_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_368_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_369_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_38_DSTATE;         /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_48_DSTATE;         /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_51_DSTATE;         /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_59_DSTATE;         /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_74_DSTATE;         /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_76_DSTATE;         /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_80_DSTATE;         /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_81_DSTATE;         /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_83_DSTATE;         /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_85_DSTATE;         /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_86_DSTATE;         /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_87_DSTATE;         /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_89_DSTATE;         /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_9_DSTATE;          /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_98_DSTATE;         /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_99_DSTATE;         /* '<Root>/Unit Delay3' */
  real_T UnitDelay1_1_DSTATE;          /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_11_DSTATE;         /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_13_DSTATE;         /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_14_DSTATE;         /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_24_DSTATE;         /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_26_DSTATE;         /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_27_DSTATE;         /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_37_DSTATE;         /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_39_DSTATE;         /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_40_DSTATE;         /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_50_DSTATE;         /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_52_DSTATE;         /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_53_DSTATE;         /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_54_DSTATE;         /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_55_DSTATE;         /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_56_DSTATE;         /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_80_DSTATE;         /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_82_DSTATE;         /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_84_DSTATE;         /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_88_DSTATE;         /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_97_DSTATE;         /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_156_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay1_157_DSTATE;        /* '<Root>/Unit Delay1' */
  real_T UnitDelay2_1_DSTATE;          /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_10_DSTATE;         /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_12_DSTATE;         /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_14_DSTATE;         /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_23_DSTATE;         /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_27_DSTATE;         /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_36_DSTATE;         /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_40_DSTATE;         /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_49_DSTATE;         /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_82_DSTATE;         /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_88_DSTATE;         /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_89_DSTATE;         /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_99_DSTATE;         /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_102_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay2_103_DSTATE;        /* '<Root>/Unit Delay2' */
  real_T UnitDelay3_1_DSTATE;          /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_10_DSTATE;         /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_11_DSTATE;         /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_12_DSTATE;         /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_13_DSTATE;         /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_14_DSTATE;         /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_23_DSTATE;         /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_24_DSTATE;         /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_26_DSTATE;         /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_27_DSTATE;         /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_36_DSTATE;         /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_37_DSTATE;         /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_39_DSTATE;         /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_40_DSTATE;         /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_49_DSTATE;         /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_50_DSTATE;         /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_52_DSTATE;         /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_53_DSTATE;         /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_54_DSTATE;         /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_55_DSTATE;         /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_56_DSTATE;         /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_57_DSTATE;         /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_58_DSTATE;         /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_60_DSTATE;         /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_61_DSTATE;         /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_62_DSTATE;         /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_67_DSTATE;         /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_68_DSTATE;         /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_69_DSTATE;         /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_70_DSTATE;         /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_71_DSTATE;         /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_72_DSTATE;         /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_73_DSTATE;         /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_75_DSTATE;         /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_77_DSTATE;         /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_78_DSTATE;         /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_79_DSTATE;         /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_82_DSTATE;         /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_84_DSTATE;         /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_88_DSTATE;         /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_97_DSTATE;         /* '<Root>/Unit Delay3' */
  real_T UnitDelay3_196_DSTATE;        /* '<Root>/Unit Delay3' */
  real_T UnitDelay_1_DSTATE;           /* '<Root>/Unit Delay' */
  real_T UnitDelay_12_DSTATE;          /* '<Root>/Unit Delay' */
  real_T UnitDelay_14_DSTATE;          /* '<Root>/Unit Delay' */
  real_T UnitDelay_27_DSTATE;          /* '<Root>/Unit Delay' */
  real_T UnitDelay_40_DSTATE;          /* '<Root>/Unit Delay' */
  real_T UnitDelay_53_DSTATE;          /* '<Root>/Unit Delay' */
  real_T UnitDelay_54_DSTATE;          /* '<Root>/Unit Delay' */
  real_T UnitDelay_55_DSTATE;          /* '<Root>/Unit Delay' */
  real_T UnitDelay_56_DSTATE;          /* '<Root>/Unit Delay' */
  real_T UnitDelay_74_DSTATE;          /* '<Root>/Unit Delay' */
  real_T UnitDelay_77_DSTATE;          /* '<Root>/Unit Delay' */
  real_T UnitDelay_78_DSTATE;          /* '<Root>/Unit Delay' */
  real_T UnitDelay_79_DSTATE;          /* '<Root>/Unit Delay' */
  real_T UnitDelay_97_DSTATE;          /* '<Root>/Unit Delay' */
  real_T UnitDelay_99_DSTATE;          /* '<Root>/Unit Delay' */
  real_T UnitDelay_107_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_113_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_114_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_115_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_129_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_130_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_142_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_143_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_144_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_145_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_146_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_147_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_148_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_150_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_151_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_152_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_153_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_155_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_162_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_164_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_192_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_193_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_194_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_195_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_241_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_242_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_243_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_244_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_250_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_251_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_252_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_253_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_255_DSTATE;         /* '<Root>/Unit Delay' */
  real_T UnitDelay_256_DSTATE;         /* '<Root>/Unit Delay' */
  boolean_T UnitDelay_100_DSTATE;      /* '<Root>/Unit Delay' */
  boolean_T UnitDelay_104_DSTATE;      /* '<Root>/Unit Delay' */
  boolean_T UnitDelay_106_DSTATE;      /* '<Root>/Unit Delay' */
  boolean_T UnitDelay_108_DSTATE;      /* '<Root>/Unit Delay' */
  boolean_T UnitDelay_109_DSTATE;      /* '<Root>/Unit Delay' */
  boolean_T UnitDelay_111_DSTATE;      /* '<Root>/Unit Delay' */
  boolean_T UnitDelay_116_DSTATE;      /* '<Root>/Unit Delay' */
  boolean_T UnitDelay_121_DSTATE;      /* '<Root>/Unit Delay' */
  boolean_T UnitDelay_122_DSTATE;      /* '<Root>/Unit Delay' */
  boolean_T UnitDelay_123_DSTATE;      /* '<Root>/Unit Delay' */
  boolean_T UnitDelay_124_DSTATE;      /* '<Root>/Unit Delay' */
  boolean_T UnitDelay_127_DSTATE;      /* '<Root>/Unit Delay' */
  boolean_T UnitDelay_128_DSTATE;      /* '<Root>/Unit Delay' */
  boolean_T UnitDelay_131_DSTATE;      /* '<Root>/Unit Delay' */
  boolean_T UnitDelay_132_DSTATE;      /* '<Root>/Unit Delay' */
  boolean_T UnitDelay_133_DSTATE;      /* '<Root>/Unit Delay' */
  boolean_T UnitDelay_134_DSTATE;      /* '<Root>/Unit Delay' */
  boolean_T UnitDelay_135_DSTATE;      /* '<Root>/Unit Delay' */
  boolean_T UnitDelay_136_DSTATE;      /* '<Root>/Unit Delay' */
  boolean_T UnitDelay_139_DSTATE;      /* '<Root>/Unit Delay' */
  boolean_T UnitDelay_149_DSTATE;      /* '<Root>/Unit Delay' */
  boolean_T UnitDelay_15_DSTATE;       /* '<Root>/Unit Delay' */
  boolean_T UnitDelay_158_DSTATE;      /* '<Root>/Unit Delay' */
  boolean_T UnitDelay_159_DSTATE;      /* '<Root>/Unit Delay' */
  boolean_T UnitDelay_16_DSTATE;       /* '<Root>/Unit Delay' */
  boolean_T UnitDelay_160_DSTATE;      /* '<Root>/Unit Delay' */
  boolean_T UnitDelay_161_DSTATE;      /* '<Root>/Unit Delay' */
  boolean_T UnitDelay_166_DSTATE;      /* '<Root>/Unit Delay' */
  boolean_T UnitDelay_17_DSTATE;       /* '<Root>/Unit Delay' */
  boolean_T UnitDelay_18_DSTATE;       /* '<Root>/Unit Delay' */
  boolean_T UnitDelay_19_DSTATE;       /* '<Root>/Unit Delay' */
  boolean_T UnitDelay_197_DSTATE;      /* '<Root>/Unit Delay' */
  boolean_T UnitDelay_2_DSTATE;        /* '<Root>/Unit Delay' */
  boolean_T UnitDelay_20_DSTATE;       /* '<Root>/Unit Delay' */
  boolean_T UnitDelay_21_DSTATE;       /* '<Root>/Unit Delay' */
  boolean_T UnitDelay_254_DSTATE;      /* '<Root>/Unit Delay' */
  boolean_T UnitDelay_273_DSTATE;      /* '<Root>/Unit Delay' */
  boolean_T UnitDelay_274_DSTATE;      /* '<Root>/Unit Delay' */
  boolean_T UnitDelay_275_DSTATE;      /* '<Root>/Unit Delay' */
  boolean_T UnitDelay_28_DSTATE;       /* '<Root>/Unit Delay' */
  boolean_T UnitDelay_29_DSTATE;       /* '<Root>/Unit Delay' */
  boolean_T UnitDelay_3_DSTATE;        /* '<Root>/Unit Delay' */
  boolean_T UnitDelay_30_DSTATE;       /* '<Root>/Unit Delay' */
  boolean_T UnitDelay_31_DSTATE;       /* '<Root>/Unit Delay' */
  boolean_T UnitDelay_316_DSTATE;      /* '<Root>/Unit Delay' */
  boolean_T UnitDelay_32_DSTATE;       /* '<Root>/Unit Delay' */
  boolean_T UnitDelay_33_DSTATE;       /* '<Root>/Unit Delay' */
  boolean_T UnitDelay_34_DSTATE;       /* '<Root>/Unit Delay' */
  boolean_T UnitDelay_4_DSTATE;        /* '<Root>/Unit Delay' */
  boolean_T UnitDelay_41_DSTATE;       /* '<Root>/Unit Delay' */
  boolean_T UnitDelay_42_DSTATE;       /* '<Root>/Unit Delay' */
  boolean_T UnitDelay_43_DSTATE;       /* '<Root>/Unit Delay' */
  boolean_T UnitDelay_44_DSTATE;       /* '<Root>/Unit Delay' */
  boolean_T UnitDelay_45_DSTATE;       /* '<Root>/Unit Delay' */
  boolean_T UnitDelay_46_DSTATE;       /* '<Root>/Unit Delay' */
  boolean_T UnitDelay_47_DSTATE;       /* '<Root>/Unit Delay' */
  boolean_T UnitDelay_5_DSTATE;        /* '<Root>/Unit Delay' */
  boolean_T UnitDelay_6_DSTATE;        /* '<Root>/Unit Delay' */
  boolean_T UnitDelay_63_DSTATE;       /* '<Root>/Unit Delay' */
  boolean_T UnitDelay_64_DSTATE;       /* '<Root>/Unit Delay' */
  boolean_T UnitDelay_65_DSTATE;       /* '<Root>/Unit Delay' */
  boolean_T UnitDelay_66_DSTATE;       /* '<Root>/Unit Delay' */
  boolean_T UnitDelay_7_DSTATE;        /* '<Root>/Unit Delay' */
  boolean_T UnitDelay_8_DSTATE;        /* '<Root>/Unit Delay' */
  boolean_T UnitDelay_90_DSTATE;       /* '<Root>/Unit Delay' */
  boolean_T UnitDelay_91_DSTATE;       /* '<Root>/Unit Delay' */
  boolean_T UnitDelay_92_DSTATE;       /* '<Root>/Unit Delay' */
  boolean_T UnitDelay_93_DSTATE;       /* '<Root>/Unit Delay' */
  boolean_T UnitDelay_94_DSTATE;       /* '<Root>/Unit Delay' */
  boolean_T UnitDelay_95_DSTATE;       /* '<Root>/Unit Delay' */
  boolean_T UnitDelay_96_DSTATE;       /* '<Root>/Unit Delay' */
  boolean_T UnitDelay1_108_DSTATE;     /* '<Root>/Unit Delay1' */
  boolean_T UnitDelay1_109_DSTATE;     /* '<Root>/Unit Delay1' */
  boolean_T UnitDelay1_121_DSTATE;     /* '<Root>/Unit Delay1' */
  boolean_T UnitDelay1_122_DSTATE;     /* '<Root>/Unit Delay1' */
  boolean_T UnitDelay1_123_DSTATE;     /* '<Root>/Unit Delay1' */
  boolean_T UnitDelay1_124_DSTATE;     /* '<Root>/Unit Delay1' */
  boolean_T UnitDelay1_125_DSTATE;     /* '<Root>/Unit Delay1' */
  boolean_T UnitDelay1_126_DSTATE;     /* '<Root>/Unit Delay1' */
  boolean_T UnitDelay1_127_DSTATE;     /* '<Root>/Unit Delay1' */
  boolean_T UnitDelay1_128_DSTATE;     /* '<Root>/Unit Delay1' */
  boolean_T UnitDelay1_131_DSTATE;     /* '<Root>/Unit Delay1' */
  boolean_T UnitDelay1_132_DSTATE;     /* '<Root>/Unit Delay1' */
  boolean_T UnitDelay1_133_DSTATE;     /* '<Root>/Unit Delay1' */
  boolean_T UnitDelay1_134_DSTATE;     /* '<Root>/Unit Delay1' */
  boolean_T UnitDelay1_135_DSTATE;     /* '<Root>/Unit Delay1' */
  boolean_T UnitDelay1_136_DSTATE;     /* '<Root>/Unit Delay1' */
  boolean_T UnitDelay1_137_DSTATE;     /* '<Root>/Unit Delay1' */
  boolean_T UnitDelay1_138_DSTATE;     /* '<Root>/Unit Delay1' */
  boolean_T UnitDelay1_139_DSTATE;     /* '<Root>/Unit Delay1' */
  boolean_T UnitDelay1_140_DSTATE;     /* '<Root>/Unit Delay1' */
  boolean_T UnitDelay1_141_DSTATE;     /* '<Root>/Unit Delay1' */
  boolean_T UnitDelay1_149_DSTATE;     /* '<Root>/Unit Delay1' */
  boolean_T UnitDelay1_15_DSTATE;      /* '<Root>/Unit Delay1' */
  boolean_T UnitDelay1_158_DSTATE;     /* '<Root>/Unit Delay1' */
  boolean_T UnitDelay1_159_DSTATE;     /* '<Root>/Unit Delay1' */
  boolean_T UnitDelay1_16_DSTATE;      /* '<Root>/Unit Delay1' */
  boolean_T UnitDelay1_160_DSTATE;     /* '<Root>/Unit Delay1' */
  boolean_T UnitDelay1_161_DSTATE;     /* '<Root>/Unit Delay1' */
  boolean_T UnitDelay1_166_DSTATE;     /* '<Root>/Unit Delay1' */
  boolean_T UnitDelay1_17_DSTATE;      /* '<Root>/Unit Delay1' */
  boolean_T UnitDelay1_18_DSTATE;      /* '<Root>/Unit Delay1' */
  boolean_T UnitDelay1_19_DSTATE;      /* '<Root>/Unit Delay1' */
  boolean_T UnitDelay1_197_DSTATE;     /* '<Root>/Unit Delay1' */
  boolean_T UnitDelay1_2_DSTATE;       /* '<Root>/Unit Delay1' */
  boolean_T UnitDelay1_20_DSTATE;      /* '<Root>/Unit Delay1' */
  boolean_T UnitDelay1_21_DSTATE;      /* '<Root>/Unit Delay1' */
  boolean_T UnitDelay1_230_DSTATE;     /* '<Root>/Unit Delay1' */
  boolean_T UnitDelay1_254_DSTATE;     /* '<Root>/Unit Delay1' */
  boolean_T UnitDelay1_273_DSTATE;     /* '<Root>/Unit Delay1' */
  boolean_T UnitDelay1_274_DSTATE;     /* '<Root>/Unit Delay1' */
  boolean_T UnitDelay1_275_DSTATE;     /* '<Root>/Unit Delay1' */
  boolean_T UnitDelay1_28_DSTATE;      /* '<Root>/Unit Delay1' */
  boolean_T UnitDelay1_29_DSTATE;      /* '<Root>/Unit Delay1' */
  boolean_T UnitDelay1_3_DSTATE;       /* '<Root>/Unit Delay1' */
  boolean_T UnitDelay1_30_DSTATE;      /* '<Root>/Unit Delay1' */
  boolean_T UnitDelay1_31_DSTATE;      /* '<Root>/Unit Delay1' */
  boolean_T UnitDelay1_316_DSTATE;     /* '<Root>/Unit Delay1' */
  boolean_T UnitDelay1_32_DSTATE;      /* '<Root>/Unit Delay1' */
  boolean_T UnitDelay1_33_DSTATE;      /* '<Root>/Unit Delay1' */
  boolean_T UnitDelay1_34_DSTATE;      /* '<Root>/Unit Delay1' */
  boolean_T UnitDelay1_4_DSTATE;       /* '<Root>/Unit Delay1' */
  boolean_T UnitDelay1_41_DSTATE;      /* '<Root>/Unit Delay1' */
  boolean_T UnitDelay1_42_DSTATE;      /* '<Root>/Unit Delay1' */
  boolean_T UnitDelay1_43_DSTATE;      /* '<Root>/Unit Delay1' */
  boolean_T UnitDelay1_44_DSTATE;      /* '<Root>/Unit Delay1' */
  boolean_T UnitDelay1_45_DSTATE;      /* '<Root>/Unit Delay1' */
  boolean_T UnitDelay1_46_DSTATE;      /* '<Root>/Unit Delay1' */
  boolean_T UnitDelay1_47_DSTATE;      /* '<Root>/Unit Delay1' */
  boolean_T UnitDelay1_5_DSTATE;       /* '<Root>/Unit Delay1' */
  boolean_T UnitDelay1_6_DSTATE;       /* '<Root>/Unit Delay1' */
  boolean_T UnitDelay1_63_DSTATE;      /* '<Root>/Unit Delay1' */
  boolean_T UnitDelay1_64_DSTATE;      /* '<Root>/Unit Delay1' */
  boolean_T UnitDelay1_65_DSTATE;      /* '<Root>/Unit Delay1' */
  boolean_T UnitDelay1_66_DSTATE;      /* '<Root>/Unit Delay1' */
  boolean_T UnitDelay1_7_DSTATE;       /* '<Root>/Unit Delay1' */
  boolean_T UnitDelay1_8_DSTATE;       /* '<Root>/Unit Delay1' */
  boolean_T UnitDelay1_90_DSTATE;      /* '<Root>/Unit Delay1' */
  boolean_T UnitDelay1_91_DSTATE;      /* '<Root>/Unit Delay1' */
  boolean_T UnitDelay1_92_DSTATE;      /* '<Root>/Unit Delay1' */
  boolean_T UnitDelay1_93_DSTATE;      /* '<Root>/Unit Delay1' */
  boolean_T UnitDelay1_94_DSTATE;      /* '<Root>/Unit Delay1' */
  boolean_T UnitDelay1_95_DSTATE;      /* '<Root>/Unit Delay1' */
  boolean_T UnitDelay1_96_DSTATE;      /* '<Root>/Unit Delay1' */
  boolean_T UnitDelay2_100_DSTATE;     /* '<Root>/Unit Delay2' */
  boolean_T UnitDelay2_106_DSTATE;     /* '<Root>/Unit Delay2' */
  boolean_T UnitDelay2_108_DSTATE;     /* '<Root>/Unit Delay2' */
  boolean_T UnitDelay2_109_DSTATE;     /* '<Root>/Unit Delay2' */
  boolean_T UnitDelay2_111_DSTATE;     /* '<Root>/Unit Delay2' */
  boolean_T UnitDelay2_116_DSTATE;     /* '<Root>/Unit Delay2' */
  boolean_T UnitDelay2_121_DSTATE;     /* '<Root>/Unit Delay2' */
  boolean_T UnitDelay2_122_DSTATE;     /* '<Root>/Unit Delay2' */
  boolean_T UnitDelay2_123_DSTATE;     /* '<Root>/Unit Delay2' */
  boolean_T UnitDelay2_124_DSTATE;     /* '<Root>/Unit Delay2' */
  boolean_T UnitDelay2_125_DSTATE;     /* '<Root>/Unit Delay2' */
  boolean_T UnitDelay2_126_DSTATE;     /* '<Root>/Unit Delay2' */
  boolean_T UnitDelay2_127_DSTATE;     /* '<Root>/Unit Delay2' */
  boolean_T UnitDelay2_128_DSTATE;     /* '<Root>/Unit Delay2' */
  boolean_T UnitDelay2_131_DSTATE;     /* '<Root>/Unit Delay2' */
  boolean_T UnitDelay2_132_DSTATE;     /* '<Root>/Unit Delay2' */
  boolean_T UnitDelay2_133_DSTATE;     /* '<Root>/Unit Delay2' */
  boolean_T UnitDelay2_134_DSTATE;     /* '<Root>/Unit Delay2' */
  boolean_T UnitDelay2_137_DSTATE;     /* '<Root>/Unit Delay2' */
  boolean_T UnitDelay2_138_DSTATE;     /* '<Root>/Unit Delay2' */
  boolean_T UnitDelay2_139_DSTATE;     /* '<Root>/Unit Delay2' */
  boolean_T UnitDelay2_140_DSTATE;     /* '<Root>/Unit Delay2' */
  boolean_T UnitDelay2_141_DSTATE;     /* '<Root>/Unit Delay2' */
  boolean_T UnitDelay2_149_DSTATE;     /* '<Root>/Unit Delay2' */
  boolean_T UnitDelay2_15_DSTATE;      /* '<Root>/Unit Delay2' */
  boolean_T UnitDelay2_158_DSTATE;     /* '<Root>/Unit Delay2' */
  boolean_T UnitDelay2_159_DSTATE;     /* '<Root>/Unit Delay2' */
  boolean_T UnitDelay2_160_DSTATE;     /* '<Root>/Unit Delay2' */
  boolean_T UnitDelay2_161_DSTATE;     /* '<Root>/Unit Delay2' */
  boolean_T UnitDelay2_166_DSTATE;     /* '<Root>/Unit Delay2' */
  boolean_T UnitDelay2_17_DSTATE;      /* '<Root>/Unit Delay2' */
  boolean_T UnitDelay2_197_DSTATE;     /* '<Root>/Unit Delay2' */
  boolean_T UnitDelay2_198_DSTATE;     /* '<Root>/Unit Delay2' */
  boolean_T UnitDelay2_2_DSTATE;       /* '<Root>/Unit Delay2' */
  boolean_T UnitDelay2_21_DSTATE;      /* '<Root>/Unit Delay2' */
  boolean_T UnitDelay2_230_DSTATE;     /* '<Root>/Unit Delay2' */
  boolean_T UnitDelay2_254_DSTATE;     /* '<Root>/Unit Delay2' */
  boolean_T UnitDelay2_273_DSTATE;     /* '<Root>/Unit Delay2' */
  boolean_T UnitDelay2_274_DSTATE;     /* '<Root>/Unit Delay2' */
  boolean_T UnitDelay2_275_DSTATE;     /* '<Root>/Unit Delay2' */
  boolean_T UnitDelay2_28_DSTATE;      /* '<Root>/Unit Delay2' */
  boolean_T UnitDelay2_30_DSTATE;      /* '<Root>/Unit Delay2' */
  boolean_T UnitDelay2_316_DSTATE;     /* '<Root>/Unit Delay2' */
  boolean_T UnitDelay2_34_DSTATE;      /* '<Root>/Unit Delay2' */
  boolean_T UnitDelay2_4_DSTATE;       /* '<Root>/Unit Delay2' */
  boolean_T UnitDelay2_41_DSTATE;      /* '<Root>/Unit Delay2' */
  boolean_T UnitDelay2_43_DSTATE;      /* '<Root>/Unit Delay2' */
  boolean_T UnitDelay2_47_DSTATE;      /* '<Root>/Unit Delay2' */
  boolean_T UnitDelay2_63_DSTATE;      /* '<Root>/Unit Delay2' */
  boolean_T UnitDelay2_64_DSTATE;      /* '<Root>/Unit Delay2' */
  boolean_T UnitDelay2_65_DSTATE;      /* '<Root>/Unit Delay2' */
  boolean_T UnitDelay2_66_DSTATE;      /* '<Root>/Unit Delay2' */
  boolean_T UnitDelay2_8_DSTATE;       /* '<Root>/Unit Delay2' */
  boolean_T UnitDelay3_100_DSTATE;     /* '<Root>/Unit Delay3' */
  boolean_T UnitDelay3_104_DSTATE;     /* '<Root>/Unit Delay3' */
  boolean_T UnitDelay3_106_DSTATE;     /* '<Root>/Unit Delay3' */
  boolean_T UnitDelay3_108_DSTATE;     /* '<Root>/Unit Delay3' */
  boolean_T UnitDelay3_109_DSTATE;     /* '<Root>/Unit Delay3' */
  boolean_T UnitDelay3_111_DSTATE;     /* '<Root>/Unit Delay3' */
  boolean_T UnitDelay3_116_DSTATE;     /* '<Root>/Unit Delay3' */
  boolean_T UnitDelay3_121_DSTATE;     /* '<Root>/Unit Delay3' */
  boolean_T UnitDelay3_122_DSTATE;     /* '<Root>/Unit Delay3' */
  boolean_T UnitDelay3_123_DSTATE;     /* '<Root>/Unit Delay3' */
  boolean_T UnitDelay3_124_DSTATE;     /* '<Root>/Unit Delay3' */
  boolean_T UnitDelay3_125_DSTATE;     /* '<Root>/Unit Delay3' */
  boolean_T UnitDelay3_126_DSTATE;     /* '<Root>/Unit Delay3' */
  boolean_T UnitDelay3_127_DSTATE;     /* '<Root>/Unit Delay3' */
  boolean_T UnitDelay3_128_DSTATE;     /* '<Root>/Unit Delay3' */
  boolean_T UnitDelay3_131_DSTATE;     /* '<Root>/Unit Delay3' */
  boolean_T UnitDelay3_132_DSTATE;     /* '<Root>/Unit Delay3' */
  boolean_T UnitDelay3_133_DSTATE;     /* '<Root>/Unit Delay3' */
  boolean_T UnitDelay3_134_DSTATE;     /* '<Root>/Unit Delay3' */
  boolean_T UnitDelay3_135_DSTATE;     /* '<Root>/Unit Delay3' */
  boolean_T UnitDelay3_136_DSTATE;     /* '<Root>/Unit Delay3' */
  boolean_T UnitDelay3_137_DSTATE;     /* '<Root>/Unit Delay3' */
  boolean_T UnitDelay3_138_DSTATE;     /* '<Root>/Unit Delay3' */
  boolean_T UnitDelay3_139_DSTATE;     /* '<Root>/Unit Delay3' */
  boolean_T UnitDelay3_140_DSTATE;     /* '<Root>/Unit Delay3' */
  boolean_T UnitDelay3_141_DSTATE;     /* '<Root>/Unit Delay3' */
  boolean_T UnitDelay3_149_DSTATE;     /* '<Root>/Unit Delay3' */
  boolean_T UnitDelay3_15_DSTATE;      /* '<Root>/Unit Delay3' */
  boolean_T UnitDelay3_158_DSTATE;     /* '<Root>/Unit Delay3' */
  boolean_T UnitDelay3_159_DSTATE;     /* '<Root>/Unit Delay3' */
  boolean_T UnitDelay3_16_DSTATE;      /* '<Root>/Unit Delay3' */
  boolean_T UnitDelay3_160_DSTATE;     /* '<Root>/Unit Delay3' */
  boolean_T UnitDelay3_161_DSTATE;     /* '<Root>/Unit Delay3' */
  boolean_T UnitDelay3_166_DSTATE;     /* '<Root>/Unit Delay3' */
  boolean_T UnitDelay3_17_DSTATE;      /* '<Root>/Unit Delay3' */
  boolean_T UnitDelay3_18_DSTATE;      /* '<Root>/Unit Delay3' */
  boolean_T UnitDelay3_19_DSTATE;      /* '<Root>/Unit Delay3' */
  boolean_T UnitDelay3_197_DSTATE;     /* '<Root>/Unit Delay3' */
  boolean_T UnitDelay3_198_DSTATE;     /* '<Root>/Unit Delay3' */
  boolean_T UnitDelay3_2_DSTATE;       /* '<Root>/Unit Delay3' */
  boolean_T UnitDelay3_20_DSTATE;      /* '<Root>/Unit Delay3' */
  boolean_T UnitDelay3_21_DSTATE;      /* '<Root>/Unit Delay3' */
  boolean_T UnitDelay3_230_DSTATE;     /* '<Root>/Unit Delay3' */
  boolean_T UnitDelay3_254_DSTATE;     /* '<Root>/Unit Delay3' */
  boolean_T UnitDelay3_273_DSTATE;     /* '<Root>/Unit Delay3' */
  boolean_T UnitDelay3_274_DSTATE;     /* '<Root>/Unit Delay3' */
  boolean_T UnitDelay3_275_DSTATE;     /* '<Root>/Unit Delay3' */
  boolean_T UnitDelay3_28_DSTATE;      /* '<Root>/Unit Delay3' */
  boolean_T UnitDelay3_29_DSTATE;      /* '<Root>/Unit Delay3' */
  boolean_T UnitDelay3_3_DSTATE;       /* '<Root>/Unit Delay3' */
  boolean_T UnitDelay3_30_DSTATE;      /* '<Root>/Unit Delay3' */
  boolean_T UnitDelay3_31_DSTATE;      /* '<Root>/Unit Delay3' */
  boolean_T UnitDelay3_316_DSTATE;     /* '<Root>/Unit Delay3' */
  boolean_T UnitDelay3_32_DSTATE;      /* '<Root>/Unit Delay3' */
  boolean_T UnitDelay3_33_DSTATE;      /* '<Root>/Unit Delay3' */
  boolean_T UnitDelay3_34_DSTATE;      /* '<Root>/Unit Delay3' */
  boolean_T UnitDelay3_4_DSTATE;       /* '<Root>/Unit Delay3' */
  boolean_T UnitDelay3_41_DSTATE;      /* '<Root>/Unit Delay3' */
  boolean_T UnitDelay3_42_DSTATE;      /* '<Root>/Unit Delay3' */
  boolean_T UnitDelay3_43_DSTATE;      /* '<Root>/Unit Delay3' */
  boolean_T UnitDelay3_44_DSTATE;      /* '<Root>/Unit Delay3' */
  boolean_T UnitDelay3_45_DSTATE;      /* '<Root>/Unit Delay3' */
  boolean_T UnitDelay3_46_DSTATE;      /* '<Root>/Unit Delay3' */
  boolean_T UnitDelay3_47_DSTATE;      /* '<Root>/Unit Delay3' */
  boolean_T UnitDelay3_5_DSTATE;       /* '<Root>/Unit Delay3' */
  boolean_T UnitDelay3_6_DSTATE;       /* '<Root>/Unit Delay3' */
  boolean_T UnitDelay3_7_DSTATE;       /* '<Root>/Unit Delay3' */
  boolean_T UnitDelay3_8_DSTATE;       /* '<Root>/Unit Delay3' */
  boolean_T UnitDelay3_90_DSTATE;      /* '<Root>/Unit Delay3' */
  boolean_T UnitDelay3_91_DSTATE;      /* '<Root>/Unit Delay3' */
  boolean_T UnitDelay3_92_DSTATE;      /* '<Root>/Unit Delay3' */
  boolean_T UnitDelay3_93_DSTATE;      /* '<Root>/Unit Delay3' */
  boolean_T UnitDelay3_94_DSTATE;      /* '<Root>/Unit Delay3' */
  boolean_T UnitDelay3_95_DSTATE;      /* '<Root>/Unit Delay3' */
  boolean_T UnitDelay3_96_DSTATE;      /* '<Root>/Unit Delay3' */
  boolean_T UnitDelay1_100_DSTATE;     /* '<Root>/Unit Delay1' */
  boolean_T UnitDelay1_104_DSTATE;     /* '<Root>/Unit Delay1' */
  boolean_T UnitDelay1_106_DSTATE;     /* '<Root>/Unit Delay1' */
  boolean_T UnitDelay1_111_DSTATE;     /* '<Root>/Unit Delay1' */
  boolean_T UnitDelay1_116_DSTATE;     /* '<Root>/Unit Delay1' */
  boolean_T UnitDelay1_198_DSTATE;     /* '<Root>/Unit Delay1' */
  boolean_T UnitDelay2_3_DSTATE;       /* '<Root>/Unit Delay2' */
  boolean_T UnitDelay2_5_DSTATE;       /* '<Root>/Unit Delay2' */
  boolean_T UnitDelay2_6_DSTATE;       /* '<Root>/Unit Delay2' */
  boolean_T UnitDelay2_7_DSTATE;       /* '<Root>/Unit Delay2' */
  boolean_T UnitDelay2_16_DSTATE;      /* '<Root>/Unit Delay2' */
  boolean_T UnitDelay2_18_DSTATE;      /* '<Root>/Unit Delay2' */
  boolean_T UnitDelay2_19_DSTATE;      /* '<Root>/Unit Delay2' */
  boolean_T UnitDelay2_20_DSTATE;      /* '<Root>/Unit Delay2' */
  boolean_T UnitDelay2_29_DSTATE;      /* '<Root>/Unit Delay2' */
  boolean_T UnitDelay2_31_DSTATE;      /* '<Root>/Unit Delay2' */
  boolean_T UnitDelay2_32_DSTATE;      /* '<Root>/Unit Delay2' */
  boolean_T UnitDelay2_33_DSTATE;      /* '<Root>/Unit Delay2' */
  boolean_T UnitDelay2_42_DSTATE;      /* '<Root>/Unit Delay2' */
  boolean_T UnitDelay2_44_DSTATE;      /* '<Root>/Unit Delay2' */
  boolean_T UnitDelay2_45_DSTATE;      /* '<Root>/Unit Delay2' */
  boolean_T UnitDelay2_46_DSTATE;      /* '<Root>/Unit Delay2' */
  boolean_T UnitDelay2_90_DSTATE;      /* '<Root>/Unit Delay2' */
  boolean_T UnitDelay2_91_DSTATE;      /* '<Root>/Unit Delay2' */
  boolean_T UnitDelay2_92_DSTATE;      /* '<Root>/Unit Delay2' */
  boolean_T UnitDelay2_93_DSTATE;      /* '<Root>/Unit Delay2' */
  boolean_T UnitDelay2_94_DSTATE;      /* '<Root>/Unit Delay2' */
  boolean_T UnitDelay2_95_DSTATE;      /* '<Root>/Unit Delay2' */
  boolean_T UnitDelay2_96_DSTATE;      /* '<Root>/Unit Delay2' */
  boolean_T UnitDelay2_104_DSTATE;     /* '<Root>/Unit Delay2' */
  boolean_T UnitDelay2_135_DSTATE;     /* '<Root>/Unit Delay2' */
  boolean_T UnitDelay2_136_DSTATE;     /* '<Root>/Unit Delay2' */
  boolean_T UnitDelay3_63_DSTATE;      /* '<Root>/Unit Delay3' */
  boolean_T UnitDelay3_64_DSTATE;      /* '<Root>/Unit Delay3' */
  boolean_T UnitDelay3_65_DSTATE;      /* '<Root>/Unit Delay3' */
  boolean_T UnitDelay3_66_DSTATE;      /* '<Root>/Unit Delay3' */
  boolean_T UnitDelay_125_DSTATE;      /* '<Root>/Unit Delay' */
  boolean_T UnitDelay_126_DSTATE;      /* '<Root>/Unit Delay' */
  boolean_T UnitDelay_137_DSTATE;      /* '<Root>/Unit Delay' */
  boolean_T UnitDelay_138_DSTATE;      /* '<Root>/Unit Delay' */
  boolean_T UnitDelay_140_DSTATE;      /* '<Root>/Unit Delay' */
  boolean_T UnitDelay_141_DSTATE;      /* '<Root>/Unit Delay' */
  boolean_T UnitDelay_198_DSTATE;      /* '<Root>/Unit Delay' */
  boolean_T UnitDelay_230_DSTATE;      /* '<Root>/Unit Delay' */
  MdlrefDW_INPUT_T INPUT_InstanceData; /* '<Root>/INPUT' */
  MdlrefDW_LIMITATIONS_T LIMITATIONS_InstanceData;/* '<Root>/LIMITATIONS' */
  MdlrefDW_STATEFLOW_T STATEFLOW_InstanceData;/* '<Root>/STATEFLOW' */
  MdlrefDW_SYSTEMS_T SYSTEMS_InstanceData;/* '<Root>/SYSTEMS' */
  MdlrefDW_TORQUECONTROL_T TORQUECONTROL_InstanceData;/* '<Root>/TORQUECONTROL' */
} DW_MASTER_f_T;

/* Real-time Model Data Structure */
struct tag_RTM_MASTER_T {
  const char_T **errorStatus;
};

typedef struct {
  B_MASTER_c_T rtb;
  DW_MASTER_f_T rtdw;
  RT_MODEL_MASTER_T rtm;
} MdlrefDW_MASTER_T;

/* Model reference registration function */
extern void MASTER_initialize(const char_T **rt_errorStatus, RT_MODEL_MASTER_T *
  const MASTER_M, DW_MASTER_f_T *localDW);
extern void MASTER_Init(real_T *rty_Global_Systems_MRegenMax, real_T
  *rty_Global_Systems_rEngineBra_b, real_T *rty_Global_Systems_PEngineBra_a,
  DW_MASTER_f_T *localDW);
extern void MASTER(const real_T *rtu_CAN1_2_InverterFL_nMotorFL, const boolean_T
                   *rtu_CAN1_2_InverterFL_BInvDCOnF, const boolean_T
                   *rtu_CAN1_2_InverterFL_BInvError, const boolean_T
                   *rtu_CAN1_2_InverterFL_BInvOnFLI, const boolean_T
                   *rtu_CAN1_2_InverterFL_BInvQuitD, const boolean_T
                   *rtu_CAN1_2_InverterFL_BQuitInvO, const boolean_T
                   *rtu_CAN1_2_InverterFL_BInvSysRe, const boolean_T
                   *rtu_CAN1_2_InverterFL_BInvWarnF, const real_T
                   *rtu_CAN1_2_InverterFL_MMotorMea, const real_T
                   *rtu_CAN1_2_InverterFL_NInvDTCFL, const real_T
                   *rtu_CAN1_2_InverterFL_TMotorFL, const real_T
                   *rtu_CAN1_2_InverterFL_VDCInvFL, const real_T
                   *rtu_CAN1_2_InverterFL_TInvFL, const real_T
                   *rtu_CAN1_2_InverterFR_nMotorFR, const boolean_T
                   *rtu_CAN1_2_InverterFR_BInvDCOnF, const boolean_T
                   *rtu_CAN1_2_InverterFR_BInvError, const boolean_T
                   *rtu_CAN1_2_InverterFR_BInvOnFRI, const boolean_T
                   *rtu_CAN1_2_InverterFR_BInvQuitD, const boolean_T
                   *rtu_CAN1_2_InverterFR_BQuitInvO, const boolean_T
                   *rtu_CAN1_2_InverterFR_BInvSysRe, const boolean_T
                   *rtu_CAN1_2_InverterFR_BInvWarnF, const real_T
                   *rtu_CAN1_2_InverterFR_MMotorMea, const real_T
                   *rtu_CAN1_2_InverterFR_NInvDTCFR, const real_T
                   *rtu_CAN1_2_InverterFR_TMotorFR, const real_T
                   *rtu_CAN1_2_InverterFR_VDCInvFR, const real_T
                   *rtu_CAN1_2_InverterFR_TInvFR, const real_T
                   *rtu_CAN1_2_InverterRL_nMotorRL, const boolean_T
                   *rtu_CAN1_2_InverterRL_BInvDCOnR, const boolean_T
                   *rtu_CAN1_2_InverterRL_BInvError, const boolean_T
                   *rtu_CAN1_2_InverterRL_BInvOnRLI, const boolean_T
                   *rtu_CAN1_2_InverterRL_BInvQuitD, const boolean_T
                   *rtu_CAN1_2_InverterRL_BQuitInvO, const boolean_T
                   *rtu_CAN1_2_InverterRL_BInvSysRe, const boolean_T
                   *rtu_CAN1_2_InverterRL_BInvWarnR, const real_T
                   *rtu_CAN1_2_InverterRL_MMotorMea, const real_T
                   *rtu_CAN1_2_InverterRL_NInvDTCRL, const real_T
                   *rtu_CAN1_2_InverterRL_TMotorRL, const real_T
                   *rtu_CAN1_2_InverterRL_VDCInvRL, const real_T
                   *rtu_CAN1_2_InverterRL_TInvRL, const real_T
                   *rtu_CAN1_2_InverterRR_nMotorRR, const boolean_T
                   *rtu_CAN1_2_InverterRR_BInvDCOnR, const boolean_T
                   *rtu_CAN1_2_InverterRR_BInvError, const boolean_T
                   *rtu_CAN1_2_InverterRR_BInvOnRRI, const boolean_T
                   *rtu_CAN1_2_InverterRR_BInvQuitD, const boolean_T
                   *rtu_CAN1_2_InverterRR_BQuitInvO, const boolean_T
                   *rtu_CAN1_2_InverterRR_BInvSysRe, const boolean_T
                   *rtu_CAN1_2_InverterRR_BInvWarnR, const real_T
                   *rtu_CAN1_2_InverterRR_MMotorMea, const real_T
                   *rtu_CAN1_2_InverterRR_NInvDTCRR, const real_T
                   *rtu_CAN1_2_InverterRR_TMotorRR, const real_T
                   *rtu_CAN1_2_InverterRR_VDCInvRR, const real_T
                   *rtu_CAN1_2_InverterRR_TInvRR, const boolean_T
                   *rtu_CAN3_STW_BSteeringWheelButt, const boolean_T
                   *rtu_CAN3_STW_BSteeringWheelBu_h, const boolean_T
                   *rtu_CAN3_STW_BSteeringWheelB_h2, const boolean_T
                   *rtu_CAN3_STW_BSteeringWheelB_hs, const real_T
                   *rtu_CAN3_STW_NPageSelectRotary, const real_T
                   *rtu_CAN3_STW_NParameterRotary, const real_T
                   *rtu_CAN3_STW_NEventModeRotary, const real_T
                   *rtu_CAN3_STW_VRegenPaddle1, const real_T
                   *rtu_CAN3_STW_VRegenPaddle2, const real_T
                   *rtu_CAN3_DDU7_NDisplayNumberDDU, const real_T
                   *rtu_CAN3_DDU7_VSteeringAngle, const real_T
                   *rtu_CAN3_DDU7_VThrottlePedal1, const real_T
                   *rtu_CAN3_DDU7_VThrottlePedal2, const real_T
                   *rtu_CAN3_DDU7_VBrakeF, const real_T *rtu_CAN3_DDU7_VBrakeR,
                   const real_T *rtu_CAN3_DDU7_VDamperPotentiome, const real_T
                   *rtu_CAN3_DDU7_VDamperPotentio_l, const real_T
                   *rtu_CAN3_IMU_vLateralIMU, const real_T
                   *rtu_CAN3_IMU_gVerticalIMU, const real_T
                   *rtu_CAN3_IMU_vLongitudinalIMU, const real_T
                   *rtu_CAN3_IMU_gLateralIMU, const real_T
                   *rtu_CAN3_IMU_gLongitudinalIMU, const real_T
                   *rtu_CAN3_IMU_nYawRateIMU, const real_T *rtu_BMSCAN_IIVTS,
                   const real_T *rtu_BMSCAN_IBMSHallEffect, const real_T
                   *rtu_BMSCAN_VDCAccumulator, const real_T *rtu_BMSCAN_TCellMin,
                   const real_T *rtu_BMSCAN_VCellAverage, const real_T
                   *rtu_BMSCAN_VCellMax, const real_T *rtu_BMSCAN_TCellMax,
                   const real_T *rtu_BMSCAN_IBMSDLC, const real_T
                   *rtu_BMSCAN_VCellMin, const real_T *rtu_BMSCAN_RCellAverage,
                   const boolean_T *rtu_BMSCAN_BBalancingOn, const boolean_T
                   *rtu_BMSCAN_BBMSP0A0C, const boolean_T *rtu_BMSCAN_BBMSP0A0E,
                   const boolean_T *rtu_BMSCAN_BBMSP0A10, const boolean_T
                   *rtu_BMSCAN_BBMSP0A80, const boolean_T *rtu_BMSCAN_BBMSP0AC0,
                   const boolean_T *rtu_BMSCAN_BBMSP0AFA, real_T
                   *rty_Global_InverterSignals_Inve, boolean_T
                   *rty_Global_InverterSignals_In_g, boolean_T
                   *rty_Global_InverterSignals_In_c, boolean_T
                   *rty_Global_InverterSignals_In_e, boolean_T
                   *rty_Global_InverterSignals_In_n, boolean_T
                   *rty_Global_InverterSignals_In_f, boolean_T
                   *rty_Global_InverterSignals_In_k, boolean_T
                   *rty_Global_InverterSignals_In_h, real_T
                   *rty_Global_InverterSignals_I_kw, real_T
                   *rty_Global_InverterSignals_I_ka, real_T
                   *rty_Global_InverterSignals__kaa, real_T
                   *rty_Global_InverterSignals_I_el, real_T
                   *rty_Global_InverterSignals_I_cj, real_T
                   *rty_Global_InverterSignals_I_ez, boolean_T
                   *rty_Global_InverterSignals_In_o, boolean_T
                   *rty_Global_InverterSignals_In_p, boolean_T
                   *rty_Global_InverterSignals_In_d, boolean_T
                   *rty_Global_InverterSignals_I_dm, boolean_T
                   *rty_Global_InverterSignals_I_gy, boolean_T
                   *rty_Global_InverterSignals_In_m, boolean_T
                   *rty_Global_InverterSignals_I_pd, real_T
                   *rty_Global_InverterSignals_In_i, real_T
                   *rty_Global_InverterSignals_I_pr, real_T
                   *rty_Global_InverterSignals_I_pe, real_T
                   *rty_Global_InverterSignals_I_o3, real_T
                   *rty_Global_InverterSignals_I_e4, real_T
                   *rty_Global_InverterSignals_I_mc, boolean_T
                   *rty_Global_InverterSignals_In_j, boolean_T
                   *rty_Global_InverterSignals_I_po, boolean_T
                   *rty_Global_InverterSignals_I_m3, boolean_T
                   *rty_Global_InverterSignals_I_p2, boolean_T
                   *rty_Global_InverterSignals_I_i3, boolean_T
                   *rty_Global_InverterSignals__ka1, boolean_T
                   *rty_Global_InverterSignals_I_hs, real_T
                   *rty_Global_InverterSignals_In_b, real_T
                   *rty_Global_InverterSignals_I_ng, real_T
                   *rty_Global_InverterSignals__gye, real_T
                   *rty_Global_InverterSignals_I_go, real_T
                   *rty_Global_InverterSignals_I_ep, real_T
                   *rty_Global_InverterSignals_I_kf, boolean_T
                   *rty_Global_InverterSignals_I_bn, boolean_T
                   *rty_Global_InverterSignals_I_c4, boolean_T
                   *rty_Global_InverterSignals_In_l, boolean_T
                   *rty_Global_InverterSignals_I_p4, boolean_T
                   *rty_Global_InverterSignals_I_py, boolean_T
                   *rty_Global_InverterSignals_I_en, boolean_T
                   *rty_Global_InverterSignals_I_px, real_T
                   *rty_Global_InverterSignals_I_mk, real_T
                   *rty_Global_InverterSignals_I_nk, real_T
                   *rty_Global_InverterSignals_I_fp, real_T
                   *rty_Global_InverterSignals_I_df, real_T
                   *rty_Global_InverterSignals_I_mw, real_T
                   *rty_Global_WheelSpeeds_vWheelRL, real_T
                   *rty_Global_WheelSpeeds_vWheelRR, real_T
                   *rty_Global_WheelSpeeds_vWheelFL, real_T
                   *rty_Global_WheelSpeeds_vWheelFR, real_T
                   *rty_Global_SensorSignals_VDampe, real_T
                   *rty_Global_SensorSignals_VDam_h, real_T
                   *rty_Global_SensorSignals_NDispl, real_T
                   *rty_Global_SensorSignals_VSteer, real_T
                   *rty_Global_SensorSignals_VThrot, real_T
                   *rty_Global_SensorSignals_VThr_a, boolean_T
                   *rty_Global_SensorSignals_BSteer, boolean_T
                   *rty_Global_SensorSignals_BSte_b, boolean_T
                   *rty_Global_SensorSignals_BSte_d, boolean_T
                   *rty_Global_SensorSignals_BSte_j, real_T
                   *rty_Global_SensorSignals_NPageS, real_T
                   *rty_Global_SensorSignals_NParam, real_T
                   *rty_Global_SensorSignals_NEvent, real_T
                   *rty_Global_SensorSignals_VRegen, real_T
                   *rty_Global_SensorSignals_VReg_h, real_T
                   *rty_Global_SensorSignals_VBrake, real_T
                   *rty_Global_SensorSignals_VBra_e, real_T
                   *rty_Global_GPSIMUSignals_vLater, real_T
                   *rty_Global_GPSIMUSignals_gVerti, real_T
                   *rty_Global_GPSIMUSignals_vLongi, real_T
                   *rty_Global_GPSIMUSignals_gLater, real_T
                   *rty_Global_GPSIMUSignals_gLongi, real_T
                   *rty_Global_GPSIMUSignals_nYawRa, real_T
                   *rty_Global_BMSSignals_VCellMax, real_T
                   *rty_Global_BMSSignals_VCellDelt, real_T
                   *rty_Global_BMSSignals_VCellMin, real_T
                   *rty_Global_BMSSignals_VCellAver, real_T
                   *rty_Global_BMSSignals_TCellMax, real_T
                   *rty_Global_BMSSignals_IBMSDLC, real_T
                   *rty_Global_BMSSignals_TCellMin, real_T
                   *rty_Global_BMSSignals_IBMSHallE, real_T
                   *rty_Global_BMSSignals_VDCAccumu, real_T
                   *rty_Global_BMSSignals_RCellAver, boolean_T
                   *rty_Global_BMSSignals_BBalancin, boolean_T
                   *rty_Global_BMSSignals_BBMSP0A0C, boolean_T
                   *rty_Global_BMSSignals_BBMSP0A0E, boolean_T
                   *rty_Global_BMSSignals_BBMSP0A10, boolean_T
                   *rty_Global_BMSSignals_BBMSP0A80, boolean_T
                   *rty_Global_BMSSignals_BBMSP0AC0, boolean_T
                   *rty_Global_BMSSignals_BBMSP0AFA, real_T
                   *rty_Global_BMSSignals_IIVTS, real_T
                   *rty_Global_Systems_rThrottlePed, real_T
                   *rty_Global_Systems_rThrottleP_c, boolean_T
                   *rty_Global_Systems_BThrottleErr, real_T
                   *rty_Global_Systems_tThrottleErr, real_T
                   *rty_Global_Systems_pBrakeF, real_T
                   *rty_Global_Systems_pBrakeR, boolean_T
                   *rty_Global_Systems_BBrakeError, real_T
                   *rty_Global_Systems_tBrakeError, boolean_T
                   *rty_Global_Systems_BBrakeOn, real_T
                   *rty_Global_Systems_pBrakeMax, boolean_T
                   *rty_Global_Systems_BBrakeLight, boolean_T
                   *rty_Global_Systems_BPedalOverla, real_T
                   *rty_Global_Systems_tPedalOverla, boolean_T
                   *rty_Global_Systems_BAppsOK, real_T
                   *rty_Global_Systems_tAppsTimer, real_T
                   *rty_Global_Systems_rSteeringAng, real_T
                   *rty_Global_Systems_aSteeringAng, real_T
                   *rty_Global_Systems_rRegenPaddle, boolean_T
                   *rty_Global_Systems_BRegenOn, real_T
                   *rty_Global_Systems_xDamperFL, real_T
                   *rty_Global_Systems_xDamperFR, real_T
                   *rty_Global_Systems_xDamperRL, real_T
                   *rty_Global_Systems_xDamperRR, boolean_T
                   *rty_Global_Systems_BxDamperFLOk, boolean_T
                   *rty_Global_Systems_BxDamperFROk, boolean_T
                   *rty_Global_Systems_BxDamperRLOk, boolean_T
                   *rty_Global_Systems_BxDamperRROk, boolean_T
                   *rty_Global_Systems_BInverterErr, boolean_T
                   *rty_Global_Systems_BInverterE_d, boolean_T
                   *rty_Global_Systems_BIMUOK, boolean_T
                   *rty_Global_Systems_BIMUError, real_T
                   *rty_Global_Systems_vChassis, real_T
                   *rty_Global_Systems_sChassis, boolean_T
                   *rty_Global_Systems_BPageUp, boolean_T
                   *rty_Global_Systems_BPageDown, boolean_T
                   *rty_Global_Systems_BInvLVOn, boolean_T
                   *rty_Global_Systems_BCalibration, boolean_T
                   *rty_Global_Systems_BReadyToDriv, boolean_T
                   *rty_Global_Systems_BErrorReset, boolean_T
                   *rty_Global_Systems_BTVOn, boolean_T
                   *rty_Global_Systems_BTCOn, boolean_T
                   *rty_Global_Systems_BDrivetrainC, boolean_T
                   *rty_Global_Systems_BEMSOn, boolean_T
                   *rty_Global_Systems_BSpinningMod, real_T
                   *rty_Global_Systems_NThrottleMap, real_T
                   *rty_Global_Systems_PDischargeMa, real_T
                   *rty_Global_Systems_rTorqueSplit, real_T
                   *rty_Global_Systems_PRegenMax, real_T
                   *rty_Global_Systems_rTVMultiplie, real_T
                   *rty_Global_Systems_PEngineBraki, real_T
                   *rty_Global_Systems_rEngineBraki, boolean_T
                   *rty_Global_Systems_BDataMark, real_T
                   *rty_Global_Systems_rGrip, real_T *rty_Global_Systems_EOffset,
                   real_T *rty_Global_Systems_NTCKdSelecto, real_T
                   *rty_Global_Systems_MRegenMax, real_T
                   *rty_Global_Systems_NEventMode, real_T
                   *rty_Global_Systems_NPCKpSelecto, real_T
                   *rty_Global_Systems_TMotorMax, real_T
                   *rty_Global_Systems_TInvMax, boolean_T
                   *rty_Global_Systems_BAccuFanOn, boolean_T
                   *rty_Global_Systems_BMotorRBHFan, boolean_T
                   *rty_Global_Systems_BInverterFan, boolean_T
                   *rty_Global_Systems_BPCComplete, real_T
                   *rty_Global_Systems_PActual, real_T *rty_Global_Systems_rSOC,
                   real_T *rty_Global_Systems_rSOE, real_T
                   *rty_Global_Systems_PEnergyMeter, boolean_T
                   *rty_Global_Systems_BOverpower, real_T
                   *rty_Global_Systems_tIMUError, real_T
                   *rty_Global_Systems_BTVOnEM, real_T
                   *rty_Global_Systems_BTCOnEM, real_T
                   *rty_Global_Systems_BDrivetrai_b, real_T
                   *rty_Global_Systems_BEMSOnEM, real_T
                   *rty_Global_Systems_BSpinningM_j, real_T
                   *rty_Global_Systems_rTVMultipl_l, real_T
                   *rty_Global_Systems_rEngineBra_b, real_T
                   *rty_Global_Systems_NThrottleM_a, real_T
                   *rty_Global_Systems_PDischarge_j, real_T
                   *rty_Global_Systems_rTorqueSpl_n, real_T
                   *rty_Global_Systems_PRegenMaxEM, real_T
                   *rty_Global_Systems_PEngineBra_a, real_T
                   *rty_Global_Systems_BTVOnOW, real_T
                   *rty_Global_Systems_BTCOnOW, real_T
                   *rty_Global_Systems_BDrivetrai_p, real_T
                   *rty_Global_Systems_BEMSOnOW, real_T
                   *rty_Global_Systems_BSpinningM_k, real_T
                   *rty_Global_Systems_rTVMultipl_h, real_T
                   *rty_Global_Systems_rEngineBra_e, real_T
                   *rty_Global_Systems_NThrottleM_g, real_T
                   *rty_Global_Systems_PDischarge_d, real_T
                   *rty_Global_Systems_rTorqueSpl_a, real_T
                   *rty_Global_Systems_PRegenMaxOW, real_T
                   *rty_Global_Systems_PEngineBra_i, real_T
                   *rty_Global_Systems_MMotorMaxFL, real_T
                   *rty_Global_Systems_MMotorMaxFR, real_T
                   *rty_Global_Systems_MMotorMaxRL, real_T
                   *rty_Global_Systems_MMotorMaxRR, real_T
                   *rty_Global_Stateflow_NCarState, boolean_T
                   *rty_Global_Stateflow_BReadyToDr, boolean_T
                   *rty_Global_Stateflow_BReadyTo_k, real_T
                   *rty_Global_Stateflow_NBMSState, real_T
                   *rty_Global_Stateflow_NInvState, real_T
                   *rty_Global_Stateflow_BHVOn, real_T
                   *rty_Global_Stateflow_BInvOnRLOu, real_T
                   *rty_Global_Stateflow_BInvOnRROu, real_T
                   *rty_Global_Stateflow_BInvOnFLOu, real_T
                   *rty_Global_Stateflow_BInvOnFROu, real_T
                   *rty_Global_Stateflow_BInvDCOnRL, real_T
                   *rty_Global_Stateflow_BInvDCOnRR, real_T
                   *rty_Global_Stateflow_BInvDCOnFL, real_T
                   *rty_Global_Stateflow_BInvDCOnFR, real_T
                   *rty_Global_Stateflow_BInvEnable, real_T
                   *rty_Global_Stateflow_BInvEnab_p, real_T
                   *rty_Global_Stateflow_BInvEnab_o, real_T
                   *rty_Global_Stateflow_BInvEnab_h, real_T
                   *rty_Global_Stateflow_BInvErrorR, real_T
                   *rty_Global_Stateflow_BInvErro_n, real_T
                   *rty_Global_Stateflow_BInvErro_c, real_T
                   *rty_Global_Stateflow_BInvErro_h, real_T
                   *rty_Global_Stateflow_MTargetTor, real_T
                   *rty_Global_Stateflow_MTargetT_j, real_T
                   *rty_Global_Stateflow_MTargetT_l, real_T
                   *rty_Global_Stateflow_MTargetT_g, real_T
                   *rty_Global_Stateflow_MTorqueLim, real_T
                   *rty_Global_Stateflow_MTorqueL_m, real_T
                   *rty_Global_Stateflow_MTorqueL_h, real_T
                   *rty_Global_Stateflow_MTorqueL_a, real_T
                   *rty_Global_Stateflow_MTorqueL_l, real_T
                   *rty_Global_Stateflow_MTorqueL_g, real_T
                   *rty_Global_Stateflow_MTorque_lx, real_T
                   *rty_Global_Stateflow_MTorque_h0, boolean_T
                   *rty_Global_Limitations_BDischar, real_T
                   *rty_Global_Limitations_PInvTemp, real_T
                   *rty_Global_Limitations_PInvTe_g, real_T
                   *rty_Global_Limitations_PInvTe_m, real_T
                   *rty_Global_Limitations_PInvTe_i, real_T
                   *rty_Global_Limitations_PInvT_if, real_T
                   *rty_Global_Limitations_PMotorTe, real_T
                   *rty_Global_Limitations_PMotor_i, real_T
                   *rty_Global_Limitations_PMotor_a, real_T
                   *rty_Global_Limitations_PMotor_c, real_T
                   *rty_Global_Limitations_PMotor_f, real_T
                   *rty_Global_Limitations_PTSTempe, real_T
                   *rty_Global_Limitations_PTSTem_d, real_T
                   *rty_Global_Limitations_PTSTem_g, real_T
                   *rty_Global_Limitations_PTSTem_h, real_T
                   *rty_Global_Limitations_PHighCel, real_T
                   *rty_Global_Limitations_PLowCell, real_T
                   *rty_Global_Limitations_PHighC_n, real_T
                   *rty_Global_Limitations_PSOCDisc, real_T
                   *rty_Global_Limitations_PSOCRege, real_T
                   *rty_Global_Limitations_rSpeedRe, real_T
                   *rty_Global_Limitations_rSpeed_h, real_T
                   *rty_Global_Limitations_rSpeed_o, real_T
                   *rty_Global_Limitations_rSpee_hw, boolean_T
                   *rty_Global_Limitations_BSpeedDe, real_T
                   *rty_Global_Limitations_PDischar, real_T
                   *rty_Global_Limitations_PRegenDe, real_T
                   *rty_Global_TorqueControl_MDrive, real_T
                   *rty_Global_TorqueControl_PRegen, real_T
                   *rty_Global_TorqueControl_MDri_d, real_T
                   *rty_Global_TorqueControl_PDisch, real_T
                   *rty_Global_TorqueControl_PPCInt, real_T
                   *rty_Global_TorqueControl_PPCPro, real_T
                   *rty_Global_TorqueControl_MPCDis, real_T
                   *rty_Global_TorqueControl_PReg_h, real_T
                   *rty_Global_TorqueControl_PPCI_l, real_T
                   *rty_Global_TorqueControl_PPCP_j, real_T
                   *rty_Global_TorqueControl_MPCReg, real_T
                   *rty_Global_TorqueControl_PPCDis, real_T
                   *rty_Global_TorqueControl_PPCReg, real_T
                   *rty_Global_TorqueControl_MDisch, real_T
                   *rty_Global_TorqueControl_MRegen, real_T
                   *rty_Global_TorqueControl_MTotal, boolean_T
                   *rty_Global_TorqueControl_BEMSDr, boolean_T
                   *rty_Global_TorqueControl_BEMS_i, boolean_T
                   *rty_Global_TorqueControl_BEMS_b, real_T
                   *rty_Global_TorqueControl_NLap, real_T
                   *rty_Global_TorqueControl_NSecto, real_T
                   *rty_Global_TorqueControl_NSec_f, real_T
                   *rty_Global_TorqueControl_ESecto, real_T
                   *rty_Global_TorqueControl_ERemai, real_T
                   *rty_Global_TorqueControl_EBudge, real_T
                   *rty_Global_TorqueControl_sSecto, real_T
                   *rty_Global_TorqueControl_rSlipR, real_T
                   *rty_Global_TorqueControl_rSli_i, real_T
                   *rty_Global_TorqueControl_rSli_d, real_T
                   *rty_Global_TorqueControl_rSli_j, real_T
                   *rty_Global_TorqueControl_FLongi, real_T
                   *rty_Global_TorqueControl_FTyreV, real_T
                   *rty_Global_TorqueControl_FTyr_c, real_T
                   *rty_Global_TorqueControl_FTyr_p, real_T
                   *rty_Global_TorqueControl_FTyr_j, real_T
                   *rty_Global_TorqueControl_aSlipA, real_T
                   *rty_Global_TorqueControl_aSli_e, real_T
                   *rty_Global_TorqueControl_aSli_d, real_T
                   *rty_Global_TorqueControl_aSli_k, real_T
                   *rty_Global_TorqueControl_aCambe, real_T
                   *rty_Global_TorqueControl_aCam_k, real_T
                   *rty_Global_TorqueControl_aCam_a, real_T
                   *rty_Global_TorqueControl_aCam_j, real_T
                   *rty_Global_TorqueControl_FTotal, real_T
                   *rty_Global_TorqueControl_FLater, real_T
                   *rty_Global_TorqueControl_FLat_l, real_T
                   *rty_Global_TorqueControl_FTot_c, real_T
                   *rty_Global_TorqueControl_FDownf, real_T
                   *rty_Global_TorqueControl_FDow_i, real_T
                   *rty_Global_TorqueControl_aCam_b, real_T
                   *rty_Global_TorqueControl_aCa_k3, real_T
                   *rty_Global_TorqueControl_xHeave, real_T
                   *rty_Global_TorqueControl_xHea_i, real_T
                   *rty_Global_TorqueControl_aCam_e, real_T
                   *rty_Global_TorqueControl_aCam_p, real_T
                   *rty_Global_TorqueControl_aRollA, real_T
                   *rty_Global_TorqueControl_nYawRa, boolean_T
                   *rty_Global_TorqueControl_BTVOK, real_T
                   *rty_Global_TorqueControl_MTorqu, real_T
                   *rty_Global_TorqueControl_MTor_h, real_T
                   *rty_Global_TorqueControl_MTor_k, real_T
                   *rty_Global_TorqueControl_MTo_kw, real_T
                   *rty_Global_TorqueControl_rSplit, real_T
                   *rty_Global_TorqueControl_MTor_n, real_T
                   *rty_Global_TorqueControl_MTor_j, real_T
                   *rty_Global_TorqueControl_MTo_nk, real_T
                   *rty_Global_TorqueControl_MTor_g, real_T
                   *rty_Global_TorqueControl_rSli_o, real_T
                   *rty_Global_TorqueControl_NTract, real_T
                   *rty_Global_TorqueControl_NTra_p, real_T
                   *rty_Global_TorqueControl_NTra_g, real_T
                   *rty_Global_TorqueControl_NTr_go, real_T
                   *rty_Global_TorqueControl_NABSMu, real_T
                   *rty_Global_TorqueControl_NABS_l, real_T
                   *rty_Global_TorqueControl_NABS_c, real_T
                   *rty_Global_TorqueControl_NABS_n, real_T
                   *rty_Global_TorqueControl_NSec_a, real_T
                   *rty_Global_TorqueControl_NSec_b, real_T
                   *rty_Global_TorqueControl_NSec_e, real_T
                   *rty_Global_TorqueControl_NSec_d, real_T
                   *rty_Global_TorqueControl_NSe_fh, real_T
                   *rty_Global_TorqueControl_NSec_k, real_T
                   *rty_Global_TorqueControl_NSe_ku, real_T
                   *rty_Global_TorqueControl_NSec_m, real_T
                   *rty_Global_TorqueControl_NSe_fb, real_T
                   *rty_Global_TorqueControl_NSec_i, real_T
                   *rty_Global_TorqueControl_NSec_n, real_T
                   *rty_Global_TorqueControl_NSe_i3, real_T
                   *rty_Global_TorqueControl_ETotal, real_T
                   *rty_Global_TorqueControl_ESec_h, real_T
                   *rty_Global_TorqueControl_ESec_i, real_T
                   *rty_Global_TorqueControl_ESec_d, real_T
                   *rty_Global_TorqueControl_MTract, real_T
                   *rty_Global_TorqueControl_MTra_o, real_T
                   *rty_Global_TorqueControl_MTra_n, real_T
                   *rty_Global_TorqueControl_MTra_f, real_T
                   *rty_Global_TorqueControl_ESe_dn, real_T
                   *rty_Global_TorqueControl_ESe_im, real_T
                   *rty_Global_TorqueControl_ESec_c, real_T
                   *rty_Global_TorqueControl_ESec_n, real_T
                   *rty_Global_TorqueControl_ESec_j, real_T
                   *rty_Global_TorqueControl_ESec_e, real_T
                   *rty_Global_TorqueControl_ESec_a, real_T
                   *rty_Global_TorqueControl_ESec_l, real_T
                   *rty_Global_TorqueControl_ESec_m, real_T
                   *rty_Global_TorqueControl_MFLFin, real_T
                   *rty_Global_TorqueControl_MFRFin, real_T
                   *rty_Global_TorqueControl_MRLFin, real_T
                   *rty_Global_TorqueControl_MRRFin, real_T
                   *rty_Global_TorqueControl_MTot_i, real_T
                   *rty_Global_TorqueControl_PDis_f, B_MASTER_c_T *localB,
                   DW_MASTER_f_T *localDW);

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
 * '<Root>' : 'MASTER'
 */
#endif                                 /* MASTER_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
