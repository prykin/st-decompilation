
int __fastcall thunk_FUN_004620f0(int *param_1)

{
  int iVar1;
  
  if (*(byte **)((int)param_1 + 0x47b) != (byte *)0x0) {
    FUN_006ae110(*(byte **)((int)param_1 + 0x47b));
    *(undefined4 *)((int)param_1 + 0x47b) = 0;
  }
  iVar1 = *(int *)((int)param_1 + 0x82e);
  if (((iVar1 != -1) && (iVar1 != 0)) && (iVar1 != 2)) {
    iVar1 = thunk_FUN_00460360(param_1);
    return iVar1;
  }
  iVar1 = (**(code **)(*param_1 + 0xd8))();
  if (iVar1 != 0) {
    return -1;
  }
  return 0;
}

