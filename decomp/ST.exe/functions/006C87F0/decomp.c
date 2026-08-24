#include "../../pseudocode_runtime.h"


/* [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 006C8910 -> 006C87F0 @ 006C8926; FUN_006c8910 parameter param_1 */

int FUN_006c87f0(DArrayTy *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  dword dVar4;
  uint *puVar5;
  char *pcVar6;

  dVar4 = param_1->elementSize;
  iVar3 = (dVar4 + 7 >> 3) + 0x18;
  if ((int)dVar4 < 1) {
    return iVar3;
  }
  puVar5 = (undefined4 *)param_1->growCapacity;
  do {
    if ((char *)*puVar5 != nullptr) {
      uVar2 = 0xffffffff;
      pcVar6 = (char *)*puVar5;
      do {
        if (uVar2 == 0) break;
        uVar2 = uVar2 - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      iVar3 = iVar3 + ~uVar2;
    }
    puVar5 = puVar5 + 1;
    dVar4 = dVar4 - 1;
    if (dVar4 == 0) {
      return iVar3;
    }
  } while( true );
}

