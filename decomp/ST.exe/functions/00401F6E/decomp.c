
undefined4 * __thiscall thunk_FUN_0060c020(void *this,uint *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint *puVar5;
  undefined4 *puVar6;
  uint *puVar7;
  uint *puStack_1c;
  void *pvStack_18;
  undefined4 *puStack_14;
  uint uStack_10;
  uint uStack_c;
  uint uStack_8;
  
  uStack_8 = 0x83;
  pvStack_18 = this;
  puVar1 = (undefined4 *)FUN_006aac70(0x83);
  *(undefined4 *)((int)this + 0x1e1) = 2;
  if (this == (void *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = (undefined4 *)((int)this + 0x1d5);
  }
  puVar6 = puVar1;
  for (iVar2 = 0x20; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = *(undefined2 *)puVar4;
  *(undefined1 *)((int)puVar6 + 2) = *(undefined1 *)((int)puVar4 + 2);
  if (*(uint **)((int)pvStack_18 + 0x234) != (uint *)0x0) {
    puStack_14 = (undefined4 *)FUN_006b0020(*(uint **)((int)pvStack_18 + 0x234),(int *)&uStack_c);
    uVar3 = uStack_c + 0x87;
    uStack_8 = uVar3;
    puVar1 = (undefined4 *)FUN_006acf50(puVar1,uVar3);
    *(uint *)((int)puVar1 + uVar3 + (-4 - uStack_c)) = uStack_c;
    puVar4 = puStack_14;
    puVar6 = (undefined4 *)((int)puVar1 + (uStack_8 - uStack_c));
    for (uVar3 = uStack_c >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar6 = puVar6 + 1;
    }
    for (uStack_c = uStack_c & 3; uStack_c != 0; uStack_c = uStack_c - 1) {
      *(undefined1 *)puVar6 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    FUN_006ab060(&puStack_14);
    if ((*(int *)((int)pvStack_18 + 0x23c) != 0) && (*(int *)((int)pvStack_18 + 0x244) != 0)) {
      puStack_1c = (uint *)thunk_FUN_0060d390(pvStack_18,&uStack_10);
      if (puStack_1c != (uint *)0x0) {
        uVar3 = uStack_8 + 4 + uStack_10;
        uStack_8 = uVar3;
        puVar1 = (undefined4 *)FUN_006acf50(puVar1,uVar3);
        puVar7 = (uint *)((int)puVar1 + uVar3 + (-4 - uStack_10));
        *puVar7 = uStack_10;
        puVar5 = puStack_1c;
        for (uVar3 = uStack_10 >> 2; puVar7 = puVar7 + 1, uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar7 = *puVar5;
          puVar5 = puVar5 + 1;
        }
        for (uStack_10 = uStack_10 & 3; uStack_10 != 0; uStack_10 = uStack_10 - 1) {
          *(char *)puVar7 = (char)*puVar5;
          puVar5 = (uint *)((int)puVar5 + 1);
          puVar7 = (uint *)((int)puVar7 + 1);
        }
        FUN_006ab060(&puStack_1c);
      }
    }
  }
  if (param_1 != (uint *)0x0) {
    *param_1 = uStack_8;
  }
  return puVar1;
}

