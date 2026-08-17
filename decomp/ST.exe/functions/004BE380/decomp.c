#include "../../pseudocode_runtime.h"


int __fastcall FUN_004be380(AnonShape_004BE380_4A62E49E *param_1)

{
  byte bVar1;

  /* ST_CALLSITE[004BE390]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
  bVar1 = LookupRecordByte(param_1->field_023D);
  return (param_1->field_0241 * 100) /
         *(int *)(&DAT_007e417c + ((bVar1 - 1) + param_1->field_0235 * 3) * 4);
}

