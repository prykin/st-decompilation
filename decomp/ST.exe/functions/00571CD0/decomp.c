#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] typed_pointer_return.
   Evidence: all 1 value-return path(s) forward Listing variable param_1 with evidence-backed
   structure /SubmarineTitans/Recovered/PointerShapes/AnonShape_00571CD0_C1ECCB3F (current recovered
   extent=3568) */

AnonShape_00571CD0_C1ECCB3F * __fastcall FUN_00571cd0(AnonShape_00571CD0_C1ECCB3F *param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar4;
  char *pcVar5;

  uVar2 = 0xffffffff;
  *(undefined4 *)&param_1->field_0x8 = 0;
  *(undefined4 *)&param_1->field_0xc = 0;
  *(undefined4 *)&param_1->field_0x10 = 0;
  *(undefined4 *)&param_1->field_0x14 = 0;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)&param_1->field_0x4 = 0;
  param_1->field_0x28 = 0;
  param_1->field_0x12c = 0;
  param_1->field_0x438 = 0;
  param_1->field_0x230 = 0;
  param_1->field_0x334 = 0;
  param_1->field_0645 = 0;
  param_1->field_0x53c = 0;
  pcVar4 = &CHAR_N_007ca684;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = &param_1->field_0x749;
  memmove(pcVar5, pcVar4, uVar2); /* compiler REP MOVS byte copy */
  param_1->field_0DEE = 0;
  param_1->field_0781 = 1;
  param_1->field_0DAE = 0;
  thunk_FUN_005739a0((AnonShape_005739A0_A4724D00 *)param_1);
  return param_1;
}

