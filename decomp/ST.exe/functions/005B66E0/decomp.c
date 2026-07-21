#include "../../pseudocode_runtime.h"


void __fastcall FUN_005b66e0(AnonShape_005B66E0_174166E5 *param_1)

{

  memset(&param_1->field_0x1d, 0, 0x20); /* compiler bulk-zero initialization */
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  param_1->field_0025 = *(undefined4 *)(param_1->field_000C + 0x14);
  param_1->field_0029 = 0;
  param_1->field_002D = 10;
  param_1->field_0031 = param_1->field_0008;
  sub_006E60A0(param_1,(undefined4 *)&param_1->field_0x1d);
  return;
}

