
undefined4 * __thiscall FUN_00614950(void *this,int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int local_8;
  
  local_8 = 0x116;
  if (*(int *)((int)this + 0x2dd) != 0) {
    local_8 = *(int *)((int)this + 0x2d5) * 0x1c + 0x116;
  }
  if (*(int *)((int)this + 0x2e5) != 0) {
    local_8 = local_8 + *(int *)((int)this + 0x2e1) * 4;
  }
  puVar1 = (undefined4 *)FUN_006aac70(local_8);
  if (this == (void *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = (undefined4 *)((int)this + 0x1d5);
  }
  puVar5 = puVar1;
  for (iVar2 = 0x45; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  *(undefined2 *)puVar5 = *(undefined2 *)puVar4;
  puVar1[3] = 2;
  puVar4 = (undefined4 *)((int)puVar1 + 0x116);
  if (*(undefined4 **)((int)this + 0x2dd) != (undefined4 *)0x0) {
    puVar5 = *(undefined4 **)((int)this + 0x2dd);
    puVar6 = puVar4;
    for (uVar3 = (uint)(*(int *)((int)this + 0x2d5) * 0x1c) >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    puVar4 = puVar4 + *(int *)((int)this + 0x2d5) * 7;
  }
  if (*(undefined4 **)((int)this + 0x2e5) != (undefined4 *)0x0) {
    puVar5 = *(undefined4 **)((int)this + 0x2e5);
    for (uVar3 = *(uint *)((int)this + 0x2e1) & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar4 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar4 = puVar4 + 1;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
  }
  *param_1 = local_8;
  return puVar1;
}

