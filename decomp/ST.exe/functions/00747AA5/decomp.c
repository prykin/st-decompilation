#include "../../pseudocode_runtime.h"


uint FUN_00747aa5(AnonShape_00747AA5_87CB4B56 *param_1,int param_2)

{
  int iVar1;
  uint uVar1;
  int iVar2;
  undefined4 local_4c [18];

  iVar1 = FUN_00747f3b(param_1);
  if (iVar1 == 1) {
    uVar1 = 0x80040203;
  }
  else {
    param_1->field_0004 = param_1->field_0004 + param_2;
    FUN_0074b91d(local_4c);
    /* ST_CALLSITE[00747ADE]: CALL dword ptr [EAX + 0x34] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    iVar2 = (**(code **)(*param_1->field_0008 + 0x34))(param_1->field_0004 + -1,local_4c);
    uVar1 = (uint)(iVar2 != 0);
    FUN_0074b916((int)local_4c);
  }
  return uVar1;
}

