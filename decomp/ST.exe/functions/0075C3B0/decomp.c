
undefined4 FUN_0075c3b0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = *(int *)(param_1 + 0x1aa);
  *(int *)(*(int *)(param_1 + 0x1a6) + 0x5c) =
       *(int *)(*(int *)(param_1 + 0x1a6) + 0x5c) +
       ((int)(*(int *)(iVar1 + 0xc) + (*(int *)(iVar1 + 0xc) >> 0x1f & 7U)) >> 3);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  iVar2 = (**(code **)(*(int *)(param_1 + 0x1a6) + 8))(param_1);
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x136)) {
    puVar3 = (undefined4 *)(iVar1 + 0x18);
    do {
      *puVar3 = 0;
      iVar2 = iVar2 + 1;
      puVar3 = puVar3 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x136));
  }
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 0x28) = *(undefined4 *)(param_1 + 0x10c);
  *(undefined4 *)(iVar1 + 0x10) = 0;
  return 1;
}

