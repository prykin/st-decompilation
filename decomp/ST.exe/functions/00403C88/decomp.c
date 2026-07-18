
void __fastcall thunk_FUN_00694be0(int param_1)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_006f07e0((int *)(param_1 + 0x10));
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_006efb70((int *)(param_1 + 0x14));
  }
  *(int *)(param_1 + 0x10) = 0;
  *(int *)(param_1 + 0x14) = 0;
  return;
}

