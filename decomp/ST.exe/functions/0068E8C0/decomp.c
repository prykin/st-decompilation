#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (2), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=0068F020 @ 0068F141 -> read as EAX on
   every CFG path | 0068F020 @ 0068F1D5 -> read as EAX on every CFG path */

int __thiscall FUN_0068e8c0(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  bool bVar5;

  iVar1 = STField<int>(this,0xbd);
  uVar3 = 0;
  uVar2 = STField<uint>(iVar1,0xC);
  if (0 < (int)uVar2) {
    bVar5 = uVar2 != 0;
    do {
      if (bVar5) {
        piVar4 = (int *)(STField<int>(iVar1,0x8) * uVar3 + STField<int>(iVar1,0x1C));
      }
      else {
        piVar4 = nullptr;
      }
      if (*piVar4 == param_1) {
        return uVar3;
      }
      uVar3 = uVar3 + 1;
      bVar5 = uVar3 < uVar2;
    } while ((int)uVar3 < (int)uVar2);
  }
  return -1;
}

