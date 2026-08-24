#include "../../pseudocode_runtime.h"


void __thiscall FUN_00603470(void *this,AnonShape_00603470_D413D02D *param_1)

{
  byte uVar1;
  byte bVar2;
  uint uVar3;
  /* ST_CALLSITE[00603479]: CALL dword ptr [EAX + 0x2c] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  uVar3 = (**(code **)(*(int *)this + 0x2c))();
  *(undefined4 *)param_1 = uVar3;
  /* ST_CALLSITE[0060348B]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
  bVar2 = LookupRecordByte(STField<char>(this,0x24));
  param_1->field_0x4 = bVar2;
  param_1->field_0005 = 4;
  uVar1 = STField<undefined1>(this,0x21d);
  param_1->field_0006 = 0;
  ((undefined1 *)param_1)[1] = uVar1;
  if (STField<int>(this,0x36e) != 0) {
    param_1->field_0007 = 1;
  }
  return;
}

