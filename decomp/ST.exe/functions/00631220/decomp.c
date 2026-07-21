
void __thiscall FUN_00631220(void *this,int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *local_14;
  int local_10;
  undefined4 *local_c;
  uint local_8;
  
  iVar2 = *(int *)((int)this + 0x38);
  local_c = (undefined4 *)0x0;
  local_8 = 0;
  local_10 = 0x55;
  if (iVar2 != 0) {
    local_10 = *(int *)(iVar2 + 0xc) * *(int *)(iVar2 + 8);
    local_8 = local_10 + 0x20;
    local_10 = local_10 + 0x75;
  }
  if (*(int *)((int)this + 0x34) != 0) {
    local_10 = local_10 + *(int *)((int)this + 0x30);
  }
  iVar2 = local_10;
  puVar1 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(local_10);
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
    local_14 = (undefined4 *)FUN_006b0020(*(uint **)((int)this + 0x38),(int *)&local_8);
    *(uint *)((int)puVar1 + 0x55) = local_8;
    local_c = (undefined4 *)((int)puVar1 + 0x59);
    puVar5 = local_14;
    puVar6 = local_c;
    for (uVar3 = local_8 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    for (uVar3 = local_8 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    if (local_14 != (undefined4 *)0x0) {
      FreeAndNull(&local_14);
    }
  }
  if (*(undefined4 **)((int)this + 0x34) != (undefined4 *)0x0) {
    if (local_8 == 0) {
      local_c = (undefined4 *)((int)puVar1 + 0x55);
    }
    else {
      local_c = (undefined4 *)((int)local_c + local_8);
    }
    uVar3 = *(uint *)((int)this + 0x30);
    puVar1 = *(undefined4 **)((int)this + 0x34);
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *local_c = *puVar1;
      puVar1 = puVar1 + 1;
      local_c = local_c + 1;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)local_c = *(undefined1 *)puVar1;
      puVar1 = (undefined4 *)((int)puVar1 + 1);
      local_c = (undefined4 *)((int)local_c + 1);
    }
  }
  *param_1 = local_10;
  return;
}

