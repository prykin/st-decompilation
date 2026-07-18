
undefined4 __fastcall thunk_FUN_004dcb70(int param_1)

{
  *(undefined4 *)(param_1 + 0x2d1) = 7;
  *(undefined4 *)(param_1 + 0x4d0) = 0;
  *(undefined4 *)(param_1 + 0x4ec) = 0;
  *(undefined4 *)(param_1 + 0x2cd) = 0;
  if ((*(int *)(param_1 + 0x231) == 1) || (*(int *)(param_1 + 0x231) == 3)) {
    thunk_FUN_004dccf0(param_1);
  }
  return 0;
}

