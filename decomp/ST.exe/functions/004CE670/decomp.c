
undefined4 __fastcall FUN_004ce670(int param_1)

{
  int iVar1;
  void *local_8;
  
  local_8 = (void *)0x0;
  if ((*(int *)(param_1 + 0x4d4) != 0) && (*(int *)(param_1 + 0x5d3) != 0)) {
    iVar1 = FUN_006e62d0(DAT_00802a38,*(int *)(param_1 + 0x5d3),(int *)&local_8);
    if (iVar1 == 0) {
      thunk_FUN_004cdef0(local_8,*(int *)(param_1 + 0x18));
    }
  }
  *(undefined4 *)(param_1 + 0x4d4) = 0;
  return 0;
}

