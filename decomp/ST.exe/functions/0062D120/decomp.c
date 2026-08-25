#include "../../pseudocode_runtime.h"


undefined4 __thiscall
FUN_0062d120(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,uint param_6,
            int param_7)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((this != (void *)0xffffffd0) && (iVar2 = *(int *)((int)this + param_1 * 4 + 0x30), iVar2 != 0)
     ) {
    if ((int)param_6 < 0) {
      uVar1 = STField<uint>(iVar2,0xC);
      uVar4 = 0;
      if (0 < (int)uVar1) {
        bVar5 = uVar1 != 0;
        while ((((!bVar5 ||
                 (iVar3 = STField<int>(iVar2,0x8) * uVar4 + STField<int>(iVar2,0x1C), iVar3 == 0)) ||
                (STField<int>(iVar3,0x4) != param_2)) ||
               (((STField<int>(iVar3,0x8) != param_3 || (STField<int>(iVar3,0xC) != param_4)) ||
                (STField<int>(iVar3,0x14) != param_5))))) {
          uVar4 = uVar4 + 1;
          bVar5 = uVar4 < uVar1;
          if ((int)uVar1 <= (int)uVar4) {
            return 0;
          }
        }
        if (param_7 == 0) {
          iVar2 = STField<int>(iVar3,0x1C) + -1;
        }
        else {
          iVar2 = STField<int>(iVar3,0x1C) + 1;
        }
        STField<int>(iVar3,0x1C) = iVar2;
        if (iVar2 < 0) {
          STField<undefined4>(iVar3,0x1C) = 0;
        }
        return STField<undefined4>(iVar3,0x1C);
      }
    }
    else {
      if (param_6 < STField<uint>(iVar2,0xC)) {
        iVar2 = STField<int>(iVar2,0x8) * param_6 + STField<int>(iVar2,0x1C);
      }
      else {
        iVar2 = 0;
      }
      if (param_7 == 0) {
        iVar3 = STField<int>(iVar2,0x1C) + -1;
      }
      else {
        iVar3 = STField<int>(iVar2,0x1C) + 1;
      }
      STField<int>(iVar2,0x1C) = iVar3;
      if (iVar3 < 0) {
        STField<undefined4>(iVar2,0x1C) = 0;
        return 0;
      }
    }
  }
  return 0;
}

