
void __fastcall thunk_FUN_005672e0(int param_1)

{
  thunk_FUN_00567490(param_1);
  if (*(uint **)(param_1 + 0xdf7) != (uint *)0x0) {
    FUN_006c2390(*(uint **)(param_1 + 0xdf7));
    *(undefined4 *)(param_1 + 0xdf7) = 0;
  }
  if (*(int *)(param_1 + 0xf8b) != 0) {
    FUN_006c2050();
  }
  *(undefined4 *)(param_1 + 0xf8b) = 0;
  return;
}

