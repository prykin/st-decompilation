
undefined4 __cdecl FUN_004e81b0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;

  iVar1 = param_3 + param_2 * 2;
  if (*(int *)(&DAT_00792568 + iVar1 * 4) == 0) {
    return *(undefined4 *)(&DAT_00792148 + iVar1 * 8);
  }
  iVar2 = thunk_FUN_004e60d0(param_1,*(int *)(&DAT_00792568 + iVar1 * 4));
  if (1 < iVar2) {
    return *(undefined4 *)(&DAT_00792148 + (iVar1 * 2 + 1) * 4);
  }
  return *(undefined4 *)(&DAT_00792148 + (iVar2 + iVar1 * 2) * 4);
}

