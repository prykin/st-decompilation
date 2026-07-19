
undefined4 __thiscall
thunk_FUN_00615430(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,
                  int param_6,int param_7,int param_8,int param_9,undefined4 *param_10)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  int iStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  uint uStack_14;
  int iStack_10;
  int iStack_c;
  undefined4 uStack_8;
  
  puVar7 = param_10;
  uStack_8 = 0xffffffff;
  iStack_28 = FUN_006acf0d(param_2,param_3,param_4,param_8,param_9,(int)param_10);
  if (iStack_28 == 0) {
    return 0xffffffff;
  }
  iStack_c = param_8 - param_2;
  iStack_10 = (int)puVar7 - param_4;
  iVar3 = (iStack_10 * param_7 + (param_9 - param_3) * param_6 + iStack_c * param_5) / iStack_28;
  uStack_14 = FUN_006c8334(10000 - (iVar3 * iVar3) / 10000);
  iVar6 = param_1 * 0x1c;
  *(int *)(*(int *)((int)this + 0x2dd) + 0xc + iVar6) = (iStack_c * iVar3) / iStack_28;
  *(int *)(*(int *)((int)this + 0x2dd) + 0x10 + iVar6) = ((param_9 - param_3) * iVar3) / iStack_28;
  *(int *)(*(int *)((int)this + 0x2dd) + 0x14 + iVar6) = (iStack_10 * iVar3) / iStack_28;
  iVar4 = *(int *)((int)this + 0x2dd) + iVar6;
  iVar4 = FUN_006acf0d(*(int *)(iVar4 + 0xc),*(int *)(iVar4 + 0x10),*(int *)(iVar4 + 0x14),param_5,
                       param_6,param_7);
  piVar1 = (int *)(*(int *)((int)this + 0x2dd) + 0xc + iVar6);
  *piVar1 = ((param_5 - *piVar1) * 10000) / iVar4;
  piVar1 = (int *)(*(int *)((int)this + 0x2dd) + 0x10 + iVar6);
  *piVar1 = ((param_6 - *piVar1) * 10000) / iVar4;
  piVar1 = (int *)(*(int *)((int)this + 0x2dd) + 0x14 + iVar6);
  *piVar1 = ((param_7 - *piVar1) * 10000) / iVar4;
  *(undefined4 *)(*(int *)((int)this + 0x2dd) + 0x18 + iVar6) = 8;
  *(int *)(*(int *)((int)this + 0x2dd) + 8 + iVar6) = iStack_28;
  *(undefined2 *)(*(int *)((int)this + 0x2dd) + iVar6) = (undefined2)param_2;
  *(undefined2 *)(*(int *)((int)this + 0x2dd) + 2 + iVar6) = (undefined2)param_3;
  *(undefined2 *)(*(int *)((int)this + 0x2dd) + 4 + iVar6) = (undefined2)param_4;
  uStack_34 = 0;
  uStack_24 = 0;
  iStack_30 = (iVar3 * iStack_28 * 0x1e) / 600000;
  iStack_20 = (int)(uStack_14 * iStack_28 * 0x1e) / 600000;
  iStack_2c = (iVar3 * iStack_28 * 0x46) / 600000;
  iStack_1c = iStack_20;
  if (iStack_20 < 0) {
    iStack_1c = 0;
  }
  uStack_18 = 0;
  uVar2 = (iStack_28 * 3) / 0x21;
  param_10 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(uVar2 * 4);
  iVar4 = thunk_FUN_0060e210(&uStack_34,&uStack_24,4,(undefined2 *)param_10,uVar2);
  if (iVar4 != 0) {
    if (param_10 != (undefined4 *)0x0) {
      FUN_006ab060(&param_10);
    }
    return uStack_8;
  }
  puVar7 = (undefined4 *)((int)this + 0x2e5);
  if (*(undefined4 **)((int)this + 0x2e5) == (undefined4 *)0x0) {
    *(uint *)((int)this + 0x2e1) = uVar2;
    *puVar7 = param_10;
    return 1;
  }
  if ((int)uVar2 <= *(int *)((int)this + 0x2e1)) {
    puVar7 = param_10;
    puVar8 = *(undefined4 **)((int)this + 0x2e5);
    for (uVar5 = uVar2 & 0x3fffffff; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    *(uint *)((int)this + 0x2e1) = uVar2;
    FUN_006ab060(&param_10);
    return 1;
  }
  FUN_006ab060(puVar7);
  *(uint *)((int)this + 0x2e1) = uVar2;
  *puVar7 = param_10;
  return 1;
}

