#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_0062e6b0(void *this,int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;

  uVar2 = thunk_FUN_0062db50(this,param_1,param_2);
  if (-1 < (int)uVar2) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar1 = *(int *)((int)this + param_1 * 4 + 0x50);
    if (uVar2 < STField<uint>(iVar1,0xC)) {
      piVar3 = (int *)(STField<int>(iVar1,0x8) * uVar2 + STField<int>(iVar1,0x1C));
    }
    else {
      piVar3 = nullptr;
    }
    thunk_FUN_0062e240(this,param_1,(int)STField<short>(piVar3,6),(short)piVar3[2],
                       (int)STField<short>(piVar3,10),*piVar3,1);
    return 1;
  }
  return 0;
}

