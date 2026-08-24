#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/RecoveredClass_0074756B.cpp

// 0074756B RecoveredClass_0074756B::FUN_0074756b
#line 4 "decomp/ST.exe/functions/0074756B/decomp.c"
undefined4 * __thiscall
st::fn_0074756B
          (RecoveredClass_0074756B *this,AnonShape_0074756B_58F08DE7 *param_1)

{
  byte *puVar1;
  uint uVar2;
  this->field_0004 = 0;
  this->field_0008 = 0;
  this->field_000C = param_1;
  this->field_0014 = 1;
  st::fn_0074DE63((undefined4 *)&this->field_0x18);
  this->field_0000 = &st_global_007A1108;
  puVar1 = st::pointer_boundary_cast<byte *>(&this->field_000C->field_0xc);
  /* ST_CALLSITE[007475A0]: CALL dword ptr [ECX + 0x4] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(*(int *)puVar1 + 4))(puVar1);
  if (param_1 == nullptr) {
    /* ST_CALLSITE[007475B0]: CALL dword ptr [EAX + 0x14] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    uVar2 = (**(code **)(*STField<int *>(this,0xC) + 0x14))();
    this->field_0010 = uVar2;
    /* ST_CALLSITE[007475BB]: CALL dword ptr [EAX + 0x18] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    uVar2 = (**(code **)(*STField<int *>(this,0xC) + 0x18))();
    this->field_0008 = uVar2;
  }
  else {
    this->field_0004 = param_1->field_0004;
    this->field_0008 = param_1->field_0008;
    this->field_0010 = param_1->field_0010;
    st::fn_0074DFF5(&this->field_0x18,&param_1[1].field_0004);
  }
  return (undefined4 *)&this->field_0000;
}

