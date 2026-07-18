
int __fastcall FUN_00419bf0(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x1c))();
  if ((iVar1 == 0) && (param_1[0x3d] == 1)) {
    (**(code **)(*param_1 + 0x20))();
    param_1[0x3d] = 0;
    iVar1 = 1;
  }
  return iVar1;
}

