#include "../../pseudocode_runtime.h"


void __fastcall FUN_0065d590(int param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar1 = *(int *)(param_1 + 0x20b);
  uVar2 = 0;
  if (0 < STField<int>(iVar1,0xC)) {
    bVar3 = STField<int>(iVar1,0xC) != 0;
    do {
      if (bVar3) {
        iVar1 = STField<int>(iVar1,0x8) * uVar2 + STField<int>(iVar1,0x1C);
      }
      else {
        iVar1 = 0;
      }
      STField<undefined4>(iVar1,0x24) = 0;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar1 = *(int *)(param_1 + 0x20b);
      uVar2 = uVar2 + 1;
      bVar3 = uVar2 < STField<uint>(iVar1,0xC);
    } while ((int)uVar2 < (int)STField<uint>(iVar1,0xC));
    *(undefined4 *)(param_1 + 0x284) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x284) = 0;
  return;
}

