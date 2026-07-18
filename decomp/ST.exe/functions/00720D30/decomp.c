
int __fastcall FUN_00720d30(int param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  int local_8;
  
  iVar5 = 0;
  iVar4 = *(int *)(param_1 + 0x138);
  if ((iVar4 == 0) || (*(int *)(iVar4 + 8) == 0)) {
    return 0;
  }
  local_8 = 0;
  *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(param_1 + 0x144);
  do {
    iVar4 = *(int *)(param_1 + 0x138);
    if (*(int *)(iVar4 + 8) <= *(int *)(iVar4 + 4)) {
      return local_8;
    }
    iVar3 = *(int *)(iVar4 + 4) + 1;
    puVar1 = *(uint **)(*(int *)(iVar4 + 0x14) + -4 + iVar3 * 4);
    *(int *)(iVar4 + 4) = iVar3;
    if (puVar1 == (uint *)0x0) {
      return local_8;
    }
    iVar4 = -1;
    puVar6 = puVar1;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      uVar2 = *puVar6;
      puVar6 = (uint *)((int)puVar6 + 1);
    } while ((char)uVar2 != '\0');
    puVar6 = (uint *)PTR_DAT_007f0afc;
    if ((iVar4 != -2) && (puVar6 = puVar1, (*(byte *)(param_1 + 0x20) & 0x20) != 0)) {
      puVar6 = (uint *)PTR_DAT_007f0b00;
    }
    iVar4 = FUN_007111c0(*(void **)(param_1 + 0x214),puVar6);
    if (*(int *)(param_1 + 0x30) < iVar4 + iVar5) {
      return local_8;
    }
    iVar5 = iVar5 + *(int *)(*(int *)(param_1 + 0x214) + 0x5c) + iVar4;
    local_8 = local_8 + 1;
  } while( true );
}

