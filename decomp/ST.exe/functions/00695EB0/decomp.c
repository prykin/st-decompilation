
void __fastcall FUN_00695eb0(void *param_1)

{
  if (*(int *)((int)param_1 + 0x584b) != 0) {
    FUN_006ab060((LPVOID *)((int)param_1 + 0x584b));
  }
  *(LPVOID *)((int)param_1 + 0x584b) = (LPVOID)0x0;
  if (*(int *)((int)param_1 + 0x584f) != 0) {
    FUN_006ab060((LPVOID *)((int)param_1 + 0x584f));
  }
  *(LPVOID *)((int)param_1 + 0x584f) = (LPVOID)0x0;
  thunk_FUN_00695f20(param_1);
  return;
}

