
int __thiscall FUN_00614a90(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int local_8;
  
  if (this == (void *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = (undefined4 *)((int)this + 0x1d5);
  }
  puVar1 = param_1;
  for (iVar2 = 0x45; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = *(undefined2 *)puVar1;
  puVar4 = (undefined4 *)((int)param_1 + 0x116);
  local_8 = 0x116;
  if (*(int *)((int)this + 0x2dd) != 0) {
    puVar1 = (undefined4 *)FUN_006aac70(*(int *)((int)this + 0x2d5) * 0x1c);
    *(undefined4 **)((int)this + 0x2dd) = puVar1;
    for (uVar3 = (uint)(*(int *)((int)this + 0x2d5) * 0x1c) >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar1 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar1 = puVar1 + 1;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined1 *)puVar1 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar1 = (undefined4 *)((int)puVar1 + 1);
    }
    local_8 = *(int *)((int)this + 0x2d5) * 0x1c + 0x116;
    puVar4 = (undefined4 *)(local_8 + (int)param_1);
  }
  if (*(int *)((int)this + 0x2e5) != 0) {
    puVar1 = (undefined4 *)FUN_006aac70(*(int *)((int)this + 0x2e1) << 2);
    *(undefined4 **)((int)this + 0x2e5) = puVar1;
    for (uVar3 = *(uint *)((int)this + 0x2e1) & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar1 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar1 = puVar1 + 1;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined1 *)puVar1 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar1 = (undefined4 *)((int)puVar1 + 1);
    }
    local_8 = local_8 + *(int *)((int)this + 0x2d5) * 0x1c;
  }
  if (*(int *)((int)this + 0x252) != 0) {
    *(undefined4 *)((int)this + 0x252) = 0;
  }
  return local_8;
}

