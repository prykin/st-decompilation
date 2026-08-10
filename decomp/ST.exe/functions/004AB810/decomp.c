#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] machine_eax_return.
   Evidence: every reachable RET has a full-width EAX definition established inside the callee; at
   least two direct callers consume it and no caller-use path is unresolved; machine CFG audit:
   used=36, ignored=5, unknown=0

   [STReturnSemanticsApplier] typed_pointer_return.
   Evidence: all 1 value-return path(s) forward Listing variable param_1 with evidence-backed
   structure /SubmarineTitans/Recovered/PointerShapes/AnonShape_004AB810_8E5693D5 (current recovered
   extent=20) */

AnonShape_004AB810_8E5693D5 * __fastcall FUN_004ab810(AnonShape_004AB810_8E5693D5 *param_1)

{
  *(VTable_00790790 **)param_1 = &VTable_00790790;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)&param_1[1].field_0004 = 0xffffffff;
  *(undefined4 *)&param_1[1].field_0xc = 0;
  *(undefined4 *)&param_1->field_0x8 = 0;
  *(undefined4 *)&param_1->field_0004 = 0;
  *(undefined4 *)&param_1[2].field_0xc = 0;
  param_1->field_0011 = 0;
  param_1->field_0x10 = 0;
  param_1->field_0012 = 0;
  *(undefined4 *)&param_1[2].field_0004 = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)&param_1[1].field_0x10 = 0;
  *(ST3DSMAPContext **)(param_1 + 3) = g_sT3DSMAPContext_00807598;
  param_1->field_0013 = 0;
  *(undefined4 *)&param_1[2].field_0x8 = 0;
  *(undefined4 *)&param_1[2].field_0x10 = 0;
  *(undefined4 *)&param_1[1].field_0x8 = 0;
  return param_1;
}

