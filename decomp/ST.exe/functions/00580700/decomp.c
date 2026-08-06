#include "../../pseudocode_runtime.h"


void __thiscall FUN_00580700(void *this,undefined1 *param_1)

{
  undefined1 uVar1;
  byte bVar2;
  undefined4 uVar3;

  *param_1 = 4;
  uVar1 = STField<undefined1>(this,0x21d);
  param_1[2] = 0;
  param_1[1] = uVar1;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  uVar3 = (**(code **)(*(int *)this + 0x2c))();
  *(undefined4 *)(param_1 + 3) = uVar3;
  bVar2 = LookupRecordByte(STField<char>(this,0x24));
  param_1[7] = bVar2;
  *(undefined4 *)(param_1 + 8) = STField<undefined4>(this,0x18);
  param_1[0x2e - STField<int>(this,0x24d)] = 1;
  param_1[0x1b] = 100;
  param_1[0x1d] = 1;
  return;
}

