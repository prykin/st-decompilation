#include "../../pseudocode_runtime.h"


void __thiscall FUN_004be470(void *this,int param_1)

{
  int iVar1;
  byte bVar2;

  /* ST_CALLSITE[004BE483]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
  bVar2 = LookupRecordByte(STField<char>(this,0x23d));
  STField<int>(this,0x241) = param_1;
  iVar1 = (bVar2 - 1) + STField<int>(this,0x235) * 3;
  if (*(int *)(&DAT_007e417c + iVar1 * 4) < param_1) {
    STField<int>(this,0x241) = *(int *)(&DAT_007e417c + iVar1 * 4);
  }
  STField<int>(this,0x5d7) =
       (STField<int>(this,0x241) * 100) / *(int *)(&DAT_007e417c + iVar1 * 4);
  return;
}

