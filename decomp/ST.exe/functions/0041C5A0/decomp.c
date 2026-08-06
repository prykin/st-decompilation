#include "../../pseudocode_runtime.h"


void __thiscall sub_0041C5A0(void *this)

{
  undefined4 uVar1;

  if ((g_visibleClass_00802A88 != nullptr) &&
     ((STField<byte>(this,0x1d1) & 1) == 0)) {
    VisibleClassTy::sub_00559110
              (g_visibleClass_00802A88,(int)STField<short>(this,0x5b),
               (undefined *)(int)STField<short>(this,0x5d),(int)STField<short>(this,0x5f),
               STField<uint>(this,0x24),STField<int>(this,0x101),STField<int>(this,0x18),
               0xffffffff);
    if (STField<int>(this,0x20) == 0x14) {
      VisibleClassTy::sub_00559620
                (g_visibleClass_00802A88,(int)STField<short>(this,0x5b),
                 (int)STField<short>(this,0x5d),(char)STField<undefined2>(this,0x5f),
                 STField<undefined *>(this,0x24),STField<int>(this,0x105),
                 STField<int>(this,0x18),0xffffffff);
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    uVar1 = (**(code **)(*(int *)this + 0x2c))();
    switch(uVar1) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    case 5:
    case 0x11:
    case 0x21:
      (**(code **)(*(int *)this + 0x98))();
      break;
    case 0xb:
    case 0x23:
      VisibleClassTy::sub_00559D60
                (g_visibleClass_00802A88,(int)STField<short>(this,0x5b),
                 (int)STField<short>(this,0x5d),(char)STField<undefined2>(this,0x5f),
                 STField<uint>(this,0x24),STField<int>(this,0x10d),STField<uint>(this,0x18)
                );
      return;
    }
  }
  return;
}

