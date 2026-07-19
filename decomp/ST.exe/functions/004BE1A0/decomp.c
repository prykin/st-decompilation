
undefined4 __fastcall FUN_004be1a0(int *param_1)

{
  int iVar1;
  
  if ((*(byte *)((int)param_1 + 0x1d1) & 2) == 0) {
    iVar1 = (**(code **)(*param_1 + 0xf8))();
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

