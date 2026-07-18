
undefined4 FUN_00756d40(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (((((*(int *)(param_1 + 0x44) != 0) || (*(int *)(param_1 + 0x11e) != 0)) ||
       (*(int *)(param_1 + 0x20) != 3)) ||
      (((*(int *)(param_1 + 0x1c) != 3 || (*(int *)(param_1 + 0x24) != 2)) ||
       ((*(int *)(param_1 + 0x70) != 3 ||
        ((iVar1 = *(int *)(param_1 + 0xd0), *(int *)(iVar1 + 8) != 2 ||
         (uVar3 = 1, *(int *)(iVar1 + 0x5c) != 1)))))))) ||
     ((*(int *)(iVar1 + 0xb0) != 1 ||
      (((((2 < *(int *)(iVar1 + 0xc) || (*(int *)(iVar1 + 0x60) != 1)) ||
         (*(int *)(iVar1 + 0xb4) != 1)) ||
        ((iVar2 = *(int *)(param_1 + 0x12a), *(int *)(iVar1 + 0x24) != iVar2 ||
         (*(int *)(iVar1 + 0x78) != iVar2)))) || (*(int *)(iVar1 + 0xcc) != iVar2)))))) {
    uVar3 = 0;
  }
  return uVar3;
}

