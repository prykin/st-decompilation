
undefined4 __fastcall FUN_00491930(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x6f7);
  if ((((iVar1 != 7) && (iVar1 != 0x13)) && (iVar1 != 0x1b)) &&
     (((iVar1 != 9 && (iVar1 != 0x15)) &&
      ((*(int *)(param_1 + 0x45d) != 0x14 || (*(int *)(param_1 + 0x5c0) != 3)))))) {
    return 1;
  }
  return 0;
}

