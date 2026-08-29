#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (2), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=006901F0 @ 006901F7 -> read as EAX on
   every CFG path | 006903A0 @ 006903A7 -> read as EAX on every CFG path */

int __thiscall FUN_0068e190(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  bool bVar5;

  iVar1 = STField<int>(this,0xa5);
  uVar4 = 0;
  uVar2 = STField<uint>(iVar1,0xC);
  if (0 < (int)uVar2) {
    bVar5 = uVar2 != 0;
    do {
      if (bVar5) {
        piVar3 = (int *)(STField<int>(iVar1,0x8) * uVar4 + STField<int>(iVar1,0x1C));
      }
      else {
        piVar3 = nullptr;
      }
      if (*piVar3 == param_1) {
        if (iVar1 == 0) {
          return 0;
        }
        if ((int)uVar4 < 0) {
          return 0;
        }
        if ((int)uVar2 <= (int)uVar4) {
          return 0;
        }
        if (uVar2 <= uVar4) {
          return iRam00000004;
        }
        return *(int *)(STField<int>(iVar1,0x8) * uVar4 + STField<int>(iVar1,0x1C) + 4);
      }
      uVar4 = uVar4 + 1;
      bVar5 = uVar4 < uVar2;
    } while ((int)uVar4 < (int)uVar2);
  }
  return 0;
}

