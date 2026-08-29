#include "../../pseudocode_runtime.h"


void __thiscall FUN_005f00b0(void *this,RecoveredRecord_005F00B0_88BE3B54 *param_1)

{
  int iVar1;
  byte uVar2;
  uint uVar3;
  char local_14 [16];

  *(undefined1 *)param_1 = 4;
  param_1->field_0x1 = STField<undefined1>(this,0x21d);
  param_1->field_0x2 = 1;
  /* ST_CALLSITE[005F00CF]: CALL dword ptr [EDX + 0x2c] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  uVar3 = (**(code **)(*(int *)this + 0x2c))();
  param_1->field_0003 = uVar3;
  /* ST_CALLSITE[005F00D9]: CALL dword ptr [EAX + 0xc]; [STIndirectCallsiteApplier] exact slot 0xC; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
  uVar2 = STStructuralVirtualCall<undefined4>(this, 0xC);
  param_1->field_0x7 = uVar2;
  param_1->field_0008 = STField<undefined4>(this,0x18);
  /* ST_CALLSITE[005F00ED]: CALL dword ptr [EDX + 0x74]; [STIndirectCallsiteApplier] exact slot 0x74; mode=structural-presentation; signature=__thiscall;/void;pointer:/void;/undefined4 */
  STStructuralVirtualCall<void>(this, 0x74, local_14);
  Library::MSVCRT::_strncpy((char *)(param_1 + 1),local_14,0xe);
  /* ST_CALLSITE[005F0106]: CALL dword ptr [EAX + 0x7c]; [STIndirectCallsiteApplier] exact slot 0x7C; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
  uVar2 = STStructuralVirtualCall<undefined4>(this, 0x7C);
  *(undefined1 *)&param_1[2].field_0003 = uVar2;
  iVar1 = STField<int>(this,0x23a);
  if (((iVar1 != 5) && (iVar1 != 6)) && (iVar1 != 7)) {
    *(undefined1 *)((int)&param_1[2].field_0003 + 2) = 1;
  }
  return;
}

