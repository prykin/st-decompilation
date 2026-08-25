#include "../../pseudocode_runtime.h"


uint __thiscall FUN_0062dbd0(void *this,int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  int local_c;
  uint local_8;

  local_8 = 0xffffffff;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar3 = *(int *)((int)this + param_1 * 4 + 0x50);
  if (iVar3 == 0) {
    return 0xffffffff;
  }
  iVar3 = STField<int>(iVar3,0xC);
  uVar4 = 0;
  if (0 < iVar3) {
    do {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar1 = *(int *)((int)this + param_1 * 4 + 0x50);
      if (((uVar4 < STField<uint>(iVar1,0xC)) &&
          (piVar2 = (int *)(STField<int>(iVar1,0x8) * uVar4 + STField<int>(iVar1,0x1C)),
          piVar2 != nullptr)) && (*piVar2 == param_2)) {
        piVar2 = piVar2 + 4;
        local_c = 3;
        do {
          if ((int *)*piVar2 != nullptr) {
            thunk_FUN_0062db10((int *)*piVar2);
            *piVar2 = 0;
          }
          piVar2 = piVar2 + 1;
          local_c = local_c + -1;
        } while (local_c != 0);
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        DArrayRemoveAt(*(DArrayTy **)((int)this + param_1 * 4 + 0x50),uVar4);
        local_8 = uVar4;
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < iVar3);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if ((-1 < (int)local_8) && (iVar3 = *(int *)((int)this + param_1 * 4 + 0x70), iVar3 != 0)) {
      uVar4 = 0;
      if (0 < STField<int>(iVar3,0xC)) {
        bVar5 = STField<int>(iVar3,0xC) != 0;
        do {
          if (((bVar5) && (iVar3 = STField<int>(iVar3,0x8) * uVar4 + STField<int>(iVar3,0x1C), iVar3 != 0)
              ) && ((int)local_8 < STField<int>(iVar3,0x4))) {
            STField<int>(iVar3,0x4) = STField<int>(iVar3,0x4) + -1;
          }
          uVar4 = uVar4 + 1;
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          iVar3 = *(int *)((int)this + param_1 * 4 + 0x70);
          bVar5 = uVar4 < STField<uint>(iVar3,0xC);
        } while ((int)uVar4 < (int)STField<uint>(iVar3,0xC));
      }
    }
  }
  return local_8;
}

