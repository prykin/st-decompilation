#include "../../pseudocode_runtime.h"


void __fastcall FUN_00590860(AnonShape_00590860_47A09D44 *param_1)

{

  memset(&param_1->field_0x18, 0, 0x20); /* compiler bulk-zero initialization */
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  param_1->field_0020 = *(undefined4 *)(param_1->field_000C + 0x14);
  param_1->field_0024 = 0;
  param_1->field_0028 = 10;
  param_1->field_002C = param_1->field_0008;
  sub_006E60A0(param_1,(undefined4 *)&param_1->field_0x18);
  return;
}

