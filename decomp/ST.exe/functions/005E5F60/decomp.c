#include "../../pseudocode_runtime.h"


void __fastcall FUN_005e5f60(AnonShape_005E5F60_843B3FDC *param_1)

{

  memset(&param_1->field_0x61, 0, 0x20); /* compiler bulk-zero initialization */
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  param_1->field_0069 = *(undefined4 *)(param_1->field_000C + 0x14);
  param_1->field_006D = 0;
  param_1->field_0071 = 10;
  param_1->field_0075 = param_1->field_0008;
  sub_006E60A0(param_1,(undefined4 *)&param_1->field_0x61);
  return;
}

