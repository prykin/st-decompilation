#include "../../pseudocode_runtime.h"


void __thiscall FUN_004c2840(void *this,undefined4 *param_1)

{
  byte bVar1;

  *param_1 = STField<undefined4>(this,0x18);
  param_1[1] = STField<undefined4>(this,0x5ac);
  bVar1 = LookupRecordByte(STField<char>(this,0x23d));
  *(byte *)(param_1 + 2) = bVar1;
  Library::MSVCRT::_strncpy((char *)((int)param_1 + 9),(char *)((int)this + 0x5c4),0xe);
  return;
}

