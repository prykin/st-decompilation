#include "../../pseudocode_runtime.h"


void __thiscall FUN_00695cd0(void *this,uint param_1,int param_2,int param_3)

{
  short *psVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  DArrayTy *array;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  bool bVar9;

  iVar8 = STField<int>(this,0x5853);
  if (((iVar8 != 0) && (param_1 < STField<uint>(iVar8,0xC))) &&
     (piVar7 = (int *)(STField<int>(iVar8,0x8) * param_1 + STField<int>(iVar8,0x1C)), piVar7 != nullptr
     )) {
    if (STField<DArrayTy *>(piVar7,0x15) != nullptr) {
      DArrayDestroy(STField<DArrayTy *>(piVar7,0x15));
      STField<undefined4>(piVar7,0x15) = 0;
    }
    if (STField<DArrayTy *>(piVar7,0x19) != nullptr) {
      DArrayDestroy(STField<DArrayTy *>(piVar7,0x19));
      STField<undefined4>(piVar7,0x19) = 0;
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if (param_2 == 0) {
      param_2 = 0;
    }
    else {
      param_2 = *piVar7;
    }
    DArrayRemoveAt(STField<DArrayTy *>(this,0x5853),param_1);
    iVar8 = STField<int>(this,0x5853);
    uVar6 = 0;
    if (0 < STField<int>(iVar8,0xC)) {
      bVar9 = STField<int>(iVar8,0xC) != 0;
      do {
        if (bVar9) {
          iVar8 = STField<int>(iVar8,0x8) * uVar6 + STField<int>(iVar8,0x1C);
        }
        else {
          iVar8 = 0;
        }
        if (((int)param_1 <= (int)uVar6) && (iVar3 = STField<int>(iVar8,0x15), iVar3 != 0)) {
          uVar5 = 0;
          if (0 < STField<int>(iVar3,0xC)) {
            bVar9 = STField<int>(iVar3,0xC) != 0;
            do {
              if (bVar9) {
                iVar3 = STField<int>(iVar3,0x8) * uVar5 + STField<int>(iVar3,0x1C);
              }
              else {
                iVar3 = 0;
              }
              psVar1 = (short *)(STField<int>(this,0x584f) +
                                (STField<int>(this,0x582f) * param_2 + STField<int>(iVar3,0x2)) * 2);
              if ((int)*psVar1 != uVar6) {
                *psVar1 = (short)uVar6;
              }
              iVar3 = STField<int>(iVar8,0x15);
              uVar5 = uVar5 + 1;
              bVar9 = uVar5 < STField<uint>(iVar3,0xC);
            } while ((int)uVar5 < (int)STField<uint>(iVar3,0xC));
          }
        }
        array = *(DArrayTy **)(iVar8 + 0x19);
        if (array != nullptr) {
          uVar5 = 0;
          if (0 < (int)array->count) {
            bVar9 = array->count != 0;
            do {
              if (bVar9) {
                puVar4 = DArrayAt<uint>(array, uVar5);
              }
              else {
                puVar4 = nullptr;
              }
              uVar2 = *puVar4;
              if ((int)param_1 < (int)uVar2) {
                *puVar4 = uVar2 - 1;
              }
              else if (uVar2 == param_1) {
                if (param_3 < 0) {
                  DArrayRemoveAt(array,uVar5);
                }
                else {
                  thunk_FUN_006960d0(this,uVar6,param_3);
                }
              }
              array = *(DArrayTy **)(iVar8 + 0x19);
              uVar5 = uVar5 + 1;
              bVar9 = uVar5 < array->count;
            } while ((int)uVar5 < (int)array->count);
          }
        }
        uVar6 = uVar6 + 1;
        iVar8 = STField<int>(this,0x5853);
        bVar9 = uVar6 < STField<uint>(iVar8,0xC);
      } while ((int)uVar6 < (int)STField<uint>(iVar8,0xC));
    }
  }
  return;
}

