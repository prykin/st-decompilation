
int __fastcall FUN_004ce7d0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 1;
  iVar1 = *(int *)(param_1 + 0x4d0);
  if (iVar1 != 0) {
    if ((iVar1 != 1) && (iVar1 != 2)) {
      iVar2 = 0;
    }
    if ((*(int *)(param_1 + 0x5ac) == 0x40) || (*(int *)(param_1 + 0x5ac) == 0x49)) {
      return 0;
    }
    if ((iVar2 != 0) && (*(int *)(param_1 + 0x4dc) != 0)) {
      thunk_FUN_004d0a80(DAT_00800bcc,*(int *)(param_1 + 0x4e0),*(int *)(param_1 + 0x4e4),
                         *(int *)(param_1 + 0x4e8));
      *(undefined4 *)(param_1 + 0x4dc) = 0;
    }
  }
  return iVar2;
}

