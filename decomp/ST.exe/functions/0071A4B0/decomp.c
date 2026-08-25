#include "../../pseudocode_runtime.h"


void __cdecl FUN_0071a4b0(int *param_1)

{
  int iVar2;
  int iVar1;
  byte local_208 [512];
  uint local_8;

  if (*param_1 != 0) {
    iVar2 = *(int *)(*param_1 + 5);
    if (iVar2 != 0) {
      STField<undefined4>(iVar2,0x4) = 0;
      iVar1 = DArrayGetNext(*(DArrayTy **)(*param_1 + 5),local_208);
      while (-1 < iVar1) {
        cMf32::RecMemFree(*(cMf32 **)(*param_1 + 1),&local_8);
        iVar1 = DArrayGetNext(*(DArrayTy **)(*param_1 + 5),local_208);
      }
      DArrayDestroy(*(DArrayTy **)(*param_1 + 5));
      *(undefined4 *)(*param_1 + 5) = 0;
    }
    FreeAndNull(param_1);
  }
  return;
}

