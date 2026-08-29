#include "../../pseudocode_runtime.h"


undefined4 __thiscall
FUN_00615430(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7,int param_8,int param_9,undefined4 *param_10)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5_mg1;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  uint local_34;
  int local_30;
  int local_2c;
  int local_28;
  uint local_24;
  int local_20;
  int local_1c;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  puVar7 = param_10;
  local_8 = 0xffffffff;

  local_28 = FUN_006acf0d(param_2,param_3,param_4,param_8,param_9,(int)param_10);
  if (local_28 == 0) {
    return 0xffffffff;
  }
  local_c = param_8 - param_2;
  local_10 = (int)puVar7 - param_4;
  iVar3 = (local_10 * param_7 + (param_9 - param_3) * param_6 + local_c * param_5) / local_28;

  local_14 = FUN_006c8334(10000 - (iVar3 * iVar3) / 10000);
  iVar6 = param_1 * 0x1c;
  *(int *)(STField<int>(this,0x2dd) + 0xc + iVar6) = (local_c * iVar3) / local_28;
  *(int *)(STField<int>(this,0x2dd) + 0x10 + iVar6) = ((param_9 - param_3) * iVar3) / local_28;
  *(int *)(STField<int>(this,0x2dd) + 0x14 + iVar6) = (local_10 * iVar3) / local_28;
  iVar5 = STField<int>(this,0x2dd) + iVar6;

  iVar4 = FUN_006acf0d(STField<int>(iVar5,0xC),STField<int>(iVar5,0x10),STField<int>(iVar5,0x14),param_5,
                       param_6,param_7);
  piVar1 = (int *)(STField<int>(this,0x2dd) + 0xc + iVar6);
  *piVar1 = ((param_5 - *piVar1) * 10000) / iVar4;
  piVar1 = (int *)(STField<int>(this,0x2dd) + 0x10 + iVar6);
  *piVar1 = ((param_6 - *piVar1) * 10000) / iVar4;
  piVar1 = (int *)(STField<int>(this,0x2dd) + 0x14 + iVar6);
  *piVar1 = ((param_7 - *piVar1) * 10000) / iVar4;
  *(undefined4 *)(STField<int>(this,0x2dd) + 0x18 + iVar6) = 8;
  *(int *)(STField<int>(this,0x2dd) + 8 + iVar6) = local_28;
  *(undefined2 *)(STField<int>(this,0x2dd) + iVar6) = (undefined2)param_2;
  *(undefined2 *)(STField<int>(this,0x2dd) + 2 + iVar6) = (undefined2)param_3;
  *(undefined2 *)(STField<int>(this,0x2dd) + 4 + iVar6) = (undefined2)param_4;
  local_34 = 0;
  local_24 = 0;
  local_30 = (iVar3 * local_28 * 0x1e) / 600000;
  local_20 = (local_14 * local_28 * 0x1e) / 600000;
  local_2c = (iVar3 * local_28 * 0x46) / 600000;
  local_1c = local_20;
  if (local_20 < 0) {
    local_1c = 0;
  }
  local_18 = 0;
  uVar2 = (local_28 * 3) / 0x21;

  param_10 = Library::DKW::LIB::MemAlloc(uVar2 * 4);

  iVar5_mg1 = thunk_FUN_0060e210(&local_34,&local_24,4,(int)param_10,uVar2);
  if (iVar5_mg1 != 0) {
    if (param_10 != nullptr) {
      FreeAndNull(&param_10);
    }
    return local_8;
  }
  puVar7 = (undefined4 *)((int)this + 0x2e5);
  if (STField<undefined4 *>(this,0x2e5) == nullptr) {
    STField<uint>(this,0x2e1) = uVar2;
    *puVar7 = param_10;
    return 1;
  }
  if ((int)uVar2 <= STField<int>(this,0x2e1)) {
    puVar7 = param_10;
    puVar8 = STField<undefined4 *>(this,0x2e5);
    for (uVar4 = uVar2 & 0x3fffffff; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    STField<uint>(this,0x2e1) = uVar2;
    FreeAndNull(&param_10);
    return 1;
  }
  FreeAndNull(puVar7);
  STField<uint>(this,0x2e1) = uVar2;
  *puVar7 = param_10;
  return 1;
}

