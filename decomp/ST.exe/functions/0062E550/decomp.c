#include "../../pseudocode_runtime.h"


uint __thiscall FUN_0062e550(void *this,int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;

  uVar1 = thunk_FUN_0062db50(this,param_1,param_3);
  if ((int)uVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    /* ST_CALLSITE[0062E577]: CALL 0x0040543e; direct=0040543E STManRub3C::AddNewColl3 */
    uVar2 = STManRub3C::AddNewColl3(this,param_1,param_2,param_3,uVar1);
    if (-1 < (int)uVar2) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar3 = *(int *)((int)this + param_1 * 4 + 0x50);
      if (uVar1 < STField<uint>(iVar3,0xC)) {
        iVar3 = STField<int>(iVar3,0x8) * uVar1 + STField<int>(iVar3,0x1C);
      }
      else {
        iVar3 = 0;
      }
      iVar4 = 0;
      piVar5 = (int *)(iVar3 + 0x10);
      do {
        if (*piVar5 == 0) {
          *(int *)(iVar3 + 0x10 + iVar4 * 4) = param_2;
          STField<int>(iVar3,0xC) = STField<int>(iVar3,0xC) + 1;
          return uVar2;
        }
        iVar4 = iVar4 + 1;
        piVar5 = piVar5 + 1;
      } while (iVar4 < 3);
      return uVar2;
    }
  }
  return uVar2;
}

