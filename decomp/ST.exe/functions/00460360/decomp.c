
int __fastcall FUN_00460360(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x20))();
  iVar2 = (**(code **)(*param_1 + 0xd8))();
  if ((iVar2 == 0) && (iVar1 != -1)) {
    if (iVar1 != 0) {
      return -(uint)(iVar1 != 1);
    }
    return 2;
  }
  return -1;
}

