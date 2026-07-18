
undefined4 __fastcall FUN_004ea830(int param_1)

{
  if ((*(int *)(param_1 + 0x4d0) == 0) || (*(int *)(param_1 + 0x4d0) == 2)) {
    *(undefined4 *)(param_1 + 0x4d0) = 1;
    thunk_FUN_004cbc10();
  }
  return 1;
}

