
undefined4 __fastcall FUN_006472b0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = 0;
  iVar2 = *(int *)(param_1 + 0x50) + 1;
  *(int *)(param_1 + 0x50) = iVar2;
  if ((iVar2 == 0) || (iVar2 == 1)) {
    *(int *)(param_1 + 0x3c) = (*(int *)(param_1 + 0x30) + 2) * 0xc9;
    *(int *)(param_1 + 0x40) = (*(int *)(param_1 + 0x34) + 2) * 0xc9;
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x38) * 200 + 0x78;
    uVar1 = 1;
  }
  else if (iVar2 == 2) {
    *(int *)(param_1 + 0x3c) = (*(int *)(param_1 + 0x30) + 2) * 0xc9;
    *(int *)(param_1 + 0x40) = (*(int *)(param_1 + 0x34) + 2) * 0xc9;
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x38) * 200 + 0xde;
    return 1;
  }
  return uVar1;
}

