#include "../../pseudocode_runtime.h"


void __thiscall FUN_004be3d0(void *this,int param_1)

{
  byte bVar1;

  /* ST_CALLSITE[004BE3E3]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
  bVar1 = LookupRecordByte(STField<char>(this,0x23d));
  STField<int>(this,0x5d7) = param_1;
  STField<int>(this,0x241) =
       (*(int *)(&DAT_007e417c + ((bVar1 - 1) + STField<int>(this,0x235) * 3) * 4) * param_1) /
       100;
  return;
}

