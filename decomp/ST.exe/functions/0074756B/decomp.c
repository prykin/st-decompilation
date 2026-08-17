#include "../../pseudocode_runtime.h"


undefined4 * __thiscall FUN_0074756b(void *this,AnonShape_0074756B_58F08DE7 *param_1)

{
  int *piVar1;
  undefined4 uVar2;

  STField<undefined4>(this,4) = 0;
  STField<undefined4>(this,8) = 0;
  STField<AnonShape_0074756B_58F08DE7 *>(this,0xc) = param_1;
  STField<undefined4>(this,0x14) = 1;
  FUN_0074de63((undefined4 *)((int)this + 0x18));
  *(VTable_007A1108 **)this = &VTable_007A1108;
  piVar1 = (int *)(STField<int>(this,0xc) + 0xc);
  /* ST_CALLSITE[007475A0]: CALL dword ptr [ECX + 0x4] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(*piVar1 + 4))(piVar1);
  if (param_1 == nullptr) {
    /* ST_CALLSITE[007475B0]: CALL dword ptr [EAX + 0x14] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    uVar2 = (**(code **)(*STField<int *>(this,0xc) + 0x14))();
    STField<undefined4>(this,0x10) = uVar2;
    /* ST_CALLSITE[007475BB]: CALL dword ptr [EAX + 0x18] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    uVar2 = (**(code **)(*STField<int *>(this,0xc) + 0x18))();
    STField<undefined4>(this,8) = uVar2;
  }
  else {
    STField<undefined4>(this,4) = param_1->field_0004;
    STField<undefined4>(this,8) = param_1->field_0008;
    STField<undefined4>(this,0x10) = param_1->field_0010;
    FUN_0074dff5((undefined4 *)((int)this + 0x18),&param_1[1].field_0004);
  }
  return this;
}

