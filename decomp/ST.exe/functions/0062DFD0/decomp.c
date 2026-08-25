#include "../../pseudocode_runtime.h"


uint __thiscall FUN_0062dfd0(void *this,int param_1,int param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint local_c;
  uint local_8;

  local_c = 0xffffffff;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar1 = *(int *)((int)this + param_1 * 4 + 0x70);
  if (iVar1 != 0) {
    iVar1 = STField<int>(iVar1,0xC);
    local_8 = 0;
    if (0 < iVar1) {
      do {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        iVar3 = *(int *)((int)this + param_1 * 4 + 0x70);
        if ((((local_8 < STField<uint>(iVar3,0xC)) &&
             (piVar4 = (int *)(STField<int>(iVar3,0x8) * local_8 + STField<int>(iVar3,0x1C)),
             piVar4 != nullptr)) && (*piVar4 == param_2)) && (uVar2 = piVar4[2], -1 < (int)uVar2)
           ) {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          iVar3 = *(int *)((int)this + param_1 * 4 + 0x50);
          if (((iVar3 != 0) && (uVar2 < STField<uint>(iVar3,0xC))) &&
             (iVar3 = STField<int>(iVar3,0x8) * uVar2 + STField<int>(iVar3,0x1C), iVar3 != 0)) {
            thunk_FUN_0062dfb0();
            *param_3 = piVar4[2];
            *(undefined4 *)(iVar3 + 0x10 + piVar4[2] * 4) = 0;
            STField<int>(iVar3,0xC) = STField<int>(iVar3,0xC) + -1;
          }
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          DArrayRemoveAt(*(DArrayTy **)((int)this + param_1 * 4 + 0x70),local_8);
          local_c = local_8;
        }
        local_8 = local_8 + 1;
      } while ((int)local_8 < iVar1);
    }
    return local_c;
  }
  return 0xffffffff;
}

