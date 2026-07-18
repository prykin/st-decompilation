
void __fastcall thunk_FUN_00695eb0(void *param_1)

{
  if (*(int *)((int)param_1 + 0x584b) != 0) {
    FUN_006ab060((undefined4 *)((int)param_1 + 0x584b));
  }
  *(undefined4 *)((int)param_1 + 0x584b) = 0;
  if (*(int *)((int)param_1 + 0x584f) != 0) {
    FUN_006ab060((undefined4 *)((int)param_1 + 0x584f));
  }
  *(undefined4 *)((int)param_1 + 0x584f) = 0;
  thunk_FUN_00695f20(param_1);
  return;
}

