#include "../../pseudocode_runtime.h"


void __thiscall FUN_005f00b0(void *this,undefined1 *param_1)

{
  int iVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  char local_14 [16];

  *param_1 = 4;
  param_1[1] = STField<undefined1>(this,0x21d);
  param_1[2] = 1;
  /* ST_CALLSITE[005F00CF]: CALL dword ptr [EDX + 0x2c] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  uVar3 = (**(code **)(*(int *)this + 0x2c))();
  *(undefined4 *)(param_1 + 3) = uVar3;
  /* ST_CALLSITE[005F00D9]: CALL dword ptr [EAX + 0xc] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  uVar2 = (**(code **)(*(int *)this + 0xc))();
  param_1[7] = uVar2;
  *(undefined4 *)(param_1 + 8) = STField<undefined4>(this,0x18);
  /* ST_CALLSITE[005F00ED]: CALL dword ptr [EDX + 0x74] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(*(int *)this + 0x74))(local_14);
  Library::MSVCRT::_strncpy(param_1 + 0xc,local_14,0xe);
  /* ST_CALLSITE[005F0106]: CALL dword ptr [EAX + 0x7c] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  uVar2 = (**(code **)(*(int *)this + 0x7c))();
  param_1[0x1b] = uVar2;
  iVar1 = STField<int>(this,0x23a);
  if (((iVar1 != 5) && (iVar1 != 6)) && (iVar1 != 7)) {
    param_1[0x1d] = 1;
  }
  return;
}

