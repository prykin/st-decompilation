
int __fastcall thunk_FUN_004d6df0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x2c))();
  if ((iVar1 < 0x32) || (iVar1 = (**(code **)(*param_1 + 0x2c))(), 0x73 < iVar1)) {
    iVar1 = (**(code **)(*param_1 + 0x2c))();
    if (iVar1 < 1) {
      return 0;
    }
    iVar1 = (**(code **)(*param_1 + 0x2c))();
    if (0x28 < iVar1) {
      return 0;
    }
    iVar1 = (**(code **)(*param_1 + 0x2c))();
    iVar1 = *(int *)(&DAT_007e061c + iVar1 * 4);
  }
  else {
    iVar1 = (**(code **)(*param_1 + 0x2c))();
    iVar1 = *(int *)(&DAT_007e22f8 + iVar1 * 4);
  }
  if (iVar1 == 0) {
    return 0;
  }
  iVar2 = (**(code **)(*param_1 + 0xc4))();
  return ((100 - iVar2) * iVar1) / 100;
}

