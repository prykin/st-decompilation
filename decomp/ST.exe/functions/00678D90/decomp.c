#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (2), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=00679F90 @ 00679F97 -> read as EAX on
   every CFG path | 0067A140 @ 0067A147 -> read as EAX on every CFG path */

int __thiscall FUN_00678d90(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  bool bVar5;

  iVar1 = STField<int>(this,0x695);
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
      if ((piVar3[1] != 0) && (piVar3[1] == param_1)) {
        return *piVar3;
      }
      uVar4 = uVar4 + 1;
      bVar5 = uVar4 < uVar2;
    } while ((int)uVar4 < (int)uVar2);
  }
  return 0;
}

