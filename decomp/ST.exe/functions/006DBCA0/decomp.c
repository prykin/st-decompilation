#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] machine_eax_return.
   Evidence: every reachable RET has a full-width EAX definition established inside the callee; at
   least two direct callers consume it and no caller-use path is unresolved; machine CFG audit:
   used=8, ignored=0, unknown=0

   [STReturnSemanticsApplier] typed_pointer_return.
   Evidence: all 1 value-return path(s) forward Listing variable param_1 with evidence-backed
   structure /SubmarineTitans/Recovered/PointerShapes/AnonShape_006DBCA0_EF06575F (current recovered
   extent=680) */

AnonShape_006DBCA0_EF06575F * __fastcall FUN_006dbca0(AnonShape_006DBCA0_EF06575F *param_1)

{
  param_1->field_0114 = 0;
  param_1->field_011C = 0;
  param_1->field_012C = 0xa0000000;
  param_1->field_0130 = 0x3ff19999;
  param_1->field_0118 = 0x40590000;
  param_1->field_0120 = 0x40790000;
  param_1->field_02A0 = 1;
  param_1->field_02A4 = 1;
  return param_1;
}

