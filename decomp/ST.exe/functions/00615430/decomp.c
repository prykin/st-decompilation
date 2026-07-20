
undefined4 __thiscall
FUN_00615430(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7,int param_8,int param_9,undefined4 *param_10)

{
  LPVOID *ppvVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 local_34;
  int local_30;
  int local_2c;
  int local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  uint local_14;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  puVar8 = param_10;
  local_8 = 0xffffffff;
  local_28 = FUN_006acf0d(param_2,param_3,param_4,param_8,param_9,(int)param_10);
  if (local_28 == 0) {
    return 0xffffffff;
  }
  local_c = param_8 - param_2;
  local_10 = (int)puVar8 - param_4;
  iVar4 = (local_10 * param_7 + (param_9 - param_3) * param_6 + local_c * param_5) / local_28;
  local_14 = FUN_006c8334(10000 - (iVar4 * iVar4) / 10000);
  iVar7 = param_1 * 0x1c;
  *(int *)(*(int *)((int)this + 0x2dd) + 0xc + iVar7) = (local_c * iVar4) / local_28;
  *(int *)(*(int *)((int)this + 0x2dd) + 0x10 + iVar7) = ((param_9 - param_3) * iVar4) / local_28;
  *(int *)(*(int *)((int)this + 0x2dd) + 0x14 + iVar7) = (local_10 * iVar4) / local_28;
  iVar5 = *(int *)((int)this + 0x2dd) + iVar7;
  iVar5 = FUN_006acf0d(*(int *)(iVar5 + 0xc),*(int *)(iVar5 + 0x10),*(int *)(iVar5 + 0x14),param_5,
                       param_6,param_7);
  piVar2 = (int *)(*(int *)((int)this + 0x2dd) + 0xc + iVar7);
  *piVar2 = ((param_5 - *piVar2) * 10000) / iVar5;
  piVar2 = (int *)(*(int *)((int)this + 0x2dd) + 0x10 + iVar7);
  *piVar2 = ((param_6 - *piVar2) * 10000) / iVar5;
  piVar2 = (int *)(*(int *)((int)this + 0x2dd) + 0x14 + iVar7);
  *piVar2 = ((param_7 - *piVar2) * 10000) / iVar5;
  *(undefined4 *)(*(int *)((int)this + 0x2dd) + 0x18 + iVar7) = 8;
  *(int *)(*(int *)((int)this + 0x2dd) + 8 + iVar7) = local_28;
  *(undefined2 *)(*(int *)((int)this + 0x2dd) + iVar7) = (undefined2)param_2;
  *(undefined2 *)(*(int *)((int)this + 0x2dd) + 2 + iVar7) = (undefined2)param_3;
  *(undefined2 *)(*(int *)((int)this + 0x2dd) + 4 + iVar7) = (undefined2)param_4;
  local_34 = 0;
  local_24 = 0;
  local_30 = (iVar4 * local_28 * 0x1e) / 600000;
  local_20 = (int)(local_14 * local_28 * 0x1e) / 600000;
  local_2c = (iVar4 * local_28 * 0x46) / 600000;
  local_1c = local_20;
  if (local_20 < 0) {
    local_1c = 0;
  }
  local_18 = 0;
  uVar3 = (local_28 * 3) / 0x21;
  param_10 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(uVar3 * 4);
  iVar5 = thunk_FUN_0060e210(&local_34,&local_24,4,(int)param_10,uVar3);
  if (iVar5 != 0) {
    if (param_10 != (undefined4 *)0x0) {
      FUN_006ab060(&param_10);
    }
    return local_8;
  }
  ppvVar1 = (LPVOID *)((int)this + 0x2e5);
  if (*(undefined4 **)((int)this + 0x2e5) == (undefined4 *)0x0) {
    *(uint *)((int)this + 0x2e1) = uVar3;
    *ppvVar1 = param_10;
    return 1;
  }
  if ((int)uVar3 <= *(int *)((int)this + 0x2e1)) {
    puVar8 = param_10;
    puVar9 = *(undefined4 **)((int)this + 0x2e5);
    for (uVar6 = uVar3 & 0x3fffffff; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    *(uint *)((int)this + 0x2e1) = uVar3;
    FUN_006ab060(&param_10);
    return 1;
  }
  FUN_006ab060(ppvVar1);
  *(uint *)((int)this + 0x2e1) = uVar3;
  *ppvVar1 = param_10;
  return 1;
}

