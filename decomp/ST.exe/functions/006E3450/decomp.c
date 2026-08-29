#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (3), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=006E3A70 @ 006E3A83 -> unknown:
   terminal before explicit accumulator kill | 006E3A90 @ 006E3AA1 -> read as EAX on every CFG path
   | 006E5360 @ 006E5373 -> read as EAX on every CFG path | 006E5380 @ 006E5391 -> read as EAX on
   every CFG path */

int __cdecl FUN_006e3450(DArrayTy *param_1,int param_2,int *param_3,undefined4 *param_4)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;

  iVar3 = 0;
  if (param_2 == 0) {
    return -4;
  }
  param_1->iteratorIndex = 0;
  while( true ) {
    uVar1 = param_1->iteratorIndex;
    if (param_1->count <= uVar1) {
      return -4;
    }
    pvVar2 = DArrayAt<void>(param_1, uVar1);
    param_1->iteratorIndex = uVar1 + 1;
    if (pvVar2 == nullptr) break;
    if (*(int *)(STField<int>(pvVar2,4) + 8) == param_2) {
      if (param_3 != nullptr) {
        *param_3 = iVar3;
      }
      if (param_4 != nullptr) {
        *param_4 = STField<undefined4>(pvVar2,4);
      }
      return 0;
    }
    iVar3 = iVar3 + 1;
  }
  return -4;
}

