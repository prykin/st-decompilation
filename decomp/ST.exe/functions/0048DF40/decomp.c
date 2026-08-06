#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0046B100 -> 0048DF40 @ 0046B60C; STBoatC::Build this; stable alias ESI | 0046B100 ->
   0048DF40 @ 0046BF77; STBoatC::Build this; stable alias ESI | 0046B100 -> 0048DF40 @ 0046C2E8;
   STBoatC::Build this; stable alias ESI | 0046B100 -> 0048DF40 @ 0046C398; STBoatC::Build this;
   stable alias ESI

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=4, used=0), and
   decompilation contains no value return */

void __fastcall FUN_0048df40(STBoatC *param_1,undefined4 param_2)

{
  short sVar1;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 in_EAX;
  int iVar2;

  sVar1 = param_1->field_04E1 + 1;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  iVar2 = STBoatC::sub_0048DFD0
                    (param_1,param_1->field_04DD,param_1->field_04DF,sVar1,param_1->field_04DD,
                     param_1->field_04DF,(int *)STReplaceLowWord((uint32_t)(in_EAX), (uint16_t)(sVar1)),2,
                     &param_1->field_04FC,&param_1->field_04FE,&param_1->field_0500);
  if (iVar2 == 0) {
    param_1->field_04FC = param_1->field_04DD;
    param_1->field_04FE = param_1->field_04DF;
    param_1->field_0500 = param_1->field_04E1 + 1;
  }
  return;
}

