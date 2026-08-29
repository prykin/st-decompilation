#include "../../pseudocode_runtime.h"


void __thiscall FUN_005f0150(void *this,RecoveredRecordView_005F0150_C2558006 *param_1)

{
  int iVar1;
  byte uVar2;
  uint uVar3;
  /* ST_CALLSITE[005F0159]: CALL dword ptr [EAX + 0x2c] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  uVar3 = (**(code **)(*(int *)this + 0x2c))();
  *(undefined4 *)param_1 = uVar3;
  /* ST_CALLSITE[005F0165]: CALL dword ptr [EDX + 0xc]; [STIndirectCallsiteApplier] exact slot 0xC; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
  uVar2 = STStructuralVirtualCall<undefined4>(this, 0xC);
  param_1->field_0x4 = uVar2;
  param_1->field_0005 = 4;
  param_1->field_0006 = 1;
  iVar1 = STField<int>(this,0x23a);
  if (((iVar1 != 5) && (iVar1 != 6)) && (iVar1 != 7)) {
    param_1->field_0007 = 1;
  }
  iVar1 = STField<int>(this,0x2b1);
  if (((iVar1 != 0) && (iVar1 != 1)) && (iVar1 != 2)) {
    /* ST_CALLSITE[005F01A6]: CALL dword ptr [EAX + 0x134]; [STIndirectCallsiteApplier] exact slot 0x134; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
    uVar2 = STStructuralVirtualCall<undefined4>(this, 0x134);
    param_1->field_0x1c = uVar2;
    /* ST_CALLSITE[005F01B3]: CALL dword ptr [EDX + 0x13c]; [STIndirectCallsiteApplier] exact slot 0x13C; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
    uVar3 = STStructuralVirtualCall<undefined4>(this, 0x13C);
    param_1->field_0021 = uVar3;
    return;
  }
  /* ST_CALLSITE[005F01C6]: CALL dword ptr [EDX + 0x134]; [STIndirectCallsiteApplier] exact slot 0x134; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
  uVar2 = STStructuralVirtualCall<undefined4>(this, 0x134);
  param_1->field_0x1c = uVar2;
  /* ST_CALLSITE[005F01D3]: CALL dword ptr [EAX + 0x138]; [STIndirectCallsiteApplier] exact slot 0x138; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
  uVar3 = STStructuralVirtualCall<undefined4>(this, 0x138);
  param_1->field_001D = uVar3;
  /* ST_CALLSITE[005F01E0]: CALL dword ptr [EDX + 0x13c]; [STIndirectCallsiteApplier] exact slot 0x13C; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
  uVar3 = STStructuralVirtualCall<undefined4>(this, 0x13C);
  param_1->field_0021 = uVar3;
  return;
}

