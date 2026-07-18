
void __thiscall thunk_FUN_00631220(void *this,int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puStack_14;
  int iStack_10;
  undefined4 *puStack_c;
  uint uStack_8;
  
  iVar2 = *(int *)((int)this + 0x38);
  puStack_c = (undefined4 *)0x0;
  uStack_8 = 0;
  iStack_10 = 0x55;
  if (iVar2 != 0) {
    iStack_10 = *(int *)(iVar2 + 0xc) * *(int *)(iVar2 + 8);
    uStack_8 = iStack_10 + 0x20;
    iStack_10 = iStack_10 + 0x75;
  }
  if (*(int *)((int)this + 0x34) != 0) {
    iStack_10 = iStack_10 + *(int *)((int)this + 0x30);
  }
  iVar2 = iStack_10;
  puVar1 = (undefined4 *)FUN_006aac70(iStack_10);
  *(undefined4 *)((int)this + 0x65) = *(undefined4 *)((int)this + 0x71);
  if (puVar1 == (undefined4 *)0x0) {
    *param_1 = iVar2;
    return;
  }
  *(undefined4 *)((int)this + 0x28) = 2;
  if (this == (void *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5 = (undefined4 *)((int)this + 0x1c);
  }
  puVar6 = puVar1;
  for (iVar2 = 0x15; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
  *(undefined4 *)((int)this + 0x61) = 0xffffffff;
  if (*(uint **)((int)this + 0x38) != (uint *)0x0) {
    puStack_14 = (undefined4 *)FUN_006b0020(*(uint **)((int)this + 0x38),(int *)&uStack_8);
    *(uint *)((int)puVar1 + 0x55) = uStack_8;
    puStack_c = (undefined4 *)((int)puVar1 + 0x59);
    puVar5 = puStack_14;
    puVar6 = puStack_c;
    for (uVar3 = uStack_8 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    for (uVar3 = uStack_8 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    if (puStack_14 != (undefined4 *)0x0) {
      FUN_006ab060(&puStack_14);
    }
  }
  if (*(undefined4 **)((int)this + 0x34) != (undefined4 *)0x0) {
    if (uStack_8 == 0) {
      puStack_c = (undefined4 *)((int)puVar1 + 0x55);
    }
    else {
      puStack_c = (undefined4 *)((int)puStack_c + uStack_8);
    }
    uVar3 = *(uint *)((int)this + 0x30);
    puVar1 = *(undefined4 **)((int)this + 0x34);
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puStack_c = *puVar1;
      puVar1 = puVar1 + 1;
      puStack_c = puStack_c + 1;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puStack_c = *(undefined1 *)puVar1;
      puVar1 = (undefined4 *)((int)puVar1 + 1);
      puStack_c = (undefined4 *)((int)puStack_c + 1);
    }
  }
  *param_1 = iStack_10;
  return;
}

