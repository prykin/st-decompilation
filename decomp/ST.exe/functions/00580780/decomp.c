#include "../../pseudocode_runtime.h"


void __thiscall FUN_00580780(void *this,AnonShape_00580780_266862D6 *param_1)

{
  byte bVar1;
  undefined4 uVar2;

  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  uVar2 = (**(code **)(*(int *)this + 0x2c))();
  *(undefined4 *)param_1 = uVar2;
  bVar1 = LookupRecordByte(STField<char>(this,0x24));
  param_1->field_0x4 = bVar1;
  param_1->field_0005 = 4;
  param_1->field_0006 = 0;
  param_1->field_0007 = 1;
  param_1->field_0x8 = STField<undefined1>(this,0x21d);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  uVar2 = (**(code **)(*(int *)this + 0x2c))();
  switch(uVar2) {
  case 0xdc:
    param_1->field_0x1c = 2;
    param_1->field_001D = STField<undefined4>(this,0x259);
    return;
  case 0xdd:
    param_1->field_0x1c = 0;
    param_1->field_001D = STField<undefined4>(this,0x259);
    return;
  case 0xde:
    param_1->field_0x1c = 1;
    param_1->field_001D = STField<undefined4>(this,0x259);
    return;
  case 0xe0:
    param_1->field_0x1c = 4;
  }
  param_1->field_001D = STField<undefined4>(this,0x259);
  return;
}

