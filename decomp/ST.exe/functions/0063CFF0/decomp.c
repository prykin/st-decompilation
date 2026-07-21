
undefined4 * __thiscall FUN_0063cff0(void *this,int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *local_10;
  uint local_c;
  int local_8;

  iVar2 = *(int *)((int)this + 0x336);
  local_8 = 0x152;
  if (iVar2 != 0) {
    local_8 = *(int *)(iVar2 + 0xc) * *(int *)(iVar2 + 8) + 0x172;
  }
  puVar1 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(local_8);
  *(undefined4 *)((int)this + 0x249) = 1;
  *(undefined4 *)((int)this + 0x23d) = 2;
  if (this == (void *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = (undefined4 *)((int)this + 0x231);
  }
  puVar5 = puVar1;
  for (iVar2 = 0x54; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  *(undefined2 *)puVar5 = *(undefined2 *)puVar4;
  if (*(uint **)((int)this + 0x336) != (uint *)0x0) {
    local_10 = (undefined4 *)FUN_006b0020(*(uint **)((int)this + 0x336),(int *)&local_c);
    *(uint *)((int)puVar1 + 0x152) = local_c;
    puVar4 = local_10;
    puVar5 = (undefined4 *)((int)puVar1 + 0x156);
    for (uVar3 = local_c >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    for (local_c = local_c & 3; local_c != 0; local_c = local_c - 1) {
      *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    FreeAndNull(&local_10);
    *param_1 = local_8;
    return puVar1;
  }
  *param_1 = local_8;
  return puVar1;
}

