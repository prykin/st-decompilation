#include "../../pseudocode_runtime.h"


void __thiscall FUN_004eefb0(void *this,int param_1)

{
  short sVar1;

  if (param_1 != STField<int>(this,0x5c)) {
    ProdPanelTy::ShiftControls(this,param_1);
    sVar1 = (short)STField<undefined4>(this,0x174);
    STField<undefined4>(this,0x28) = 0x24;
    if (param_1 != 0) {
      sVar1 = -sVar1;
    }
    STField<short>(this,0x2e) = sVar1;
    if (STField<int>(this,0x292) != 0) {
      FUN_006e6080(this,2,STField<int>(this,0x292),(undefined4 *)((int)this + 0x18));
    }
  }
  return;
}

