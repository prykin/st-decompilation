
undefined4 __fastcall FUN_004c2dd0(int param_1)

{
  *(undefined4 *)(param_1 + 0x408) = 0;
  *(undefined4 *)(param_1 + 0x40c) = 0;
  if (((*(int *)(param_1 + 0x231) == 1) || (*(int *)(param_1 + 0x231) == 3)) &&
     (*(int *)(&DAT_00794e9c + *(int *)(param_1 + 0x235) * 4) != 0)) {
    thunk_FUN_004c2c10(param_1);
  }
  return 0;
}

