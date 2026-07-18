
int __fastcall FUN_004c90c0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x361);
  if (iVar2 == 0) {
    return 1;
  }
  if (iVar2 == 1) {
    iVar2 = thunk_FUN_004ce7d0(param_1);
  }
  else {
    if (iVar2 != 2) {
      if (iVar2 == 5) {
        thunk_FUN_004cc900(param_1);
      }
      iVar2 = 1;
      goto LAB_004c9106;
    }
    iVar2 = thunk_FUN_004e3120(param_1);
  }
  if (iVar2 == 0) {
    return 0;
  }
LAB_004c9106:
  *(undefined4 *)(param_1 + 0x361) = 0;
  if ((((*(int *)(&DAT_00792778 + *(int *)(param_1 + 0x235) * 4) != 0) &&
       ((iVar1 = *(int *)(param_1 + 0x5ac), iVar1 != 0x45 || (*(int *)(param_1 + 0x4d0) == 1)))) &&
      ((iVar1 != 0x4e || (*(int *)(param_1 + 0x4d0) == 1)))) &&
     ((iVar1 != 0x72 || (*(int *)(param_1 + 0x4d0) == 1)))) {
    *(undefined4 *)(param_1 + 0x261) = 1;
    *(undefined4 *)(param_1 + 0x2e1) = 1;
  }
  thunk_FUN_004cabb0(1);
  return iVar2;
}

