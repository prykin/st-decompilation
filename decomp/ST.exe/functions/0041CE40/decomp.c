#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall FUN_0041ce40(void *this,int param_1)

{
  int iVar1;

  STField<int>(this,0x105) = param_1;
  if (g_visibleClass_00802A88 != nullptr) {
    /* ST_CALLSITE[0041CE73]: CALL 0x00402c2a; direct=00402C2A VisibleClassTy::sub_005594A0 */
    VisibleClassTy::sub_005594A0
              (g_visibleClass_00802A88,(int)STField<short>(this,0x5b),
               (int)STField<short>(this,0x5d),(char)STField<undefined2>(this,0x5f),
               STField<undefined *>(this,0x24),param_1,STField<uint>(this,0x18),0xffffffff);
  }
  /* ST_CALLSITE[0041CE7C]: CALL dword ptr [EAX + 0x8]; [STIndirectCallsiteApplier] exact slot 0x8; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
  iVar1 = STStructuralVirtualCall<undefined4>(this, 0x8);
  if ((iVar1 == 1) && (STField<uint>(this,0x24) == (uint)DAT_0080874d)) {
    ST3DSMAPContext::sub_006E6710
              (g_sT3DSMAPContext_00807598,
               (float)(int)STField<short>(this,0x41) * _DAT_007904f8 * _DAT_007904f0,
               (float)(int)STField<short>(this,0x43) * _DAT_007904f8 * _DAT_007904f0,
               (uint)((float)STField<int>(this,0x105) * _DAT_007904f8 + _DAT_007904f4),0x16,
               (STField<uint>(this,0x18) >> 0x10 & 0xff) << 0x10 |
               (uint)STField<ushort>(this,0x18));
  }
  return;
}

