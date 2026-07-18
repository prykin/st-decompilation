
undefined4 __fastcall FUN_004d9c20(int param_1)

{
  if (*(int *)(param_1 + 0x4d0) == 0) {
    *(undefined4 *)(param_1 + 0x4d0) = 1;
    thunk_FUN_004cbc10();
    thunk_FUN_004cabb0(0);
  }
  return 1;
}

