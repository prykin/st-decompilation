#include "../../pseudocode_runtime.h"


void __thiscall FUN_006033d0(void *this,undefined1 *param_1)

{
  byte bVar1;
  undefined4 uVar2;

  if (STField<int>(this,0x36e) != 0) {
    *param_1 = 4;
    param_1[1] = STField<undefined1>(this,0x21d);
    param_1[2] = 1;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    uVar2 = (**(code **)(*(int *)this + 0x2c))();
    *(undefined4 *)(param_1 + 3) = uVar2;
    bVar1 = LookupRecordByte(STField<char>(this,0x24));
    param_1[7] = bVar1;
    *(undefined4 *)(param_1 + 8) = STField<undefined4>(this,0x18);
  }
  Library::MSVCRT::_strncpy(param_1 + 0xc,(char *)((int)this + 0x25b),0xe);
  param_1[0x1b] = 100;
  if (STField<int>(this,0x36e) != 0) {
    param_1[0x1d] = 1;
  }
  return;
}

