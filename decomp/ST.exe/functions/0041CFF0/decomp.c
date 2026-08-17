#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0041cff0(void *this,int param_1)

{
  int iVar1;

  STField<int>(this,0x109) = param_1;
  if (g_visibleClass_00802A88 != nullptr) {
    /* ST_CALLSITE[0041D023]: CALL 0x004020e0; direct=004020E0 VisibleClassTy::SetZoneDes */
    VisibleClassTy::SetZoneDes
              (g_visibleClass_00802A88,(int)STField<short>(this,0x5b),
               (int)STField<short>(this,0x5d),(char)STField<undefined2>(this,0x5f),
               STField<uint>(this,0x24),param_1,STField<uint>(this,0x18),0xffffffff);
  }
  /* ST_CALLSITE[0041D02C]: CALL dword ptr [EAX + 0x8] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  iVar1 = (**(code **)(*(int *)this + 8))();
  if ((iVar1 == 1) && (STField<uint>(this,0x24) == (uint)DAT_0080874d)) {
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    ST3DSMAPContext::sub_006E6710
              (g_sT3DSMAPContext_00807598,
               (float)(int)STField<short>(this,0x41) * _DAT_007904f8 * _DAT_007904f0,
               (float)(int)STField<short>(this,0x43) * _DAT_007904f8 * _DAT_007904f0,
               (uint)((float)STField<int>(this,0x109) * _DAT_007904f8 + _DAT_007904f4),0x10,
               CONCAT22(CONCAT11(1,(char)((uint)STField<undefined4>(this,0x18) >> 0x10)),
                        STField<undefined2>(this,0x18)));
  }
  return;
}

