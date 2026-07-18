
undefined4 __fastcall FUN_00491980(void *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = thunk_FUN_0045ff10((int)param_1);
  if (iVar1 != 0x14) {
    uVar2 = thunk_FUN_0045f400(param_1,0x14);
    if (uVar2 == 0) {
      return 1;
    }
  }
  return 0;
}

