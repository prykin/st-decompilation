
void __fastcall FUN_00695eb0(void *param_1)

{
  if (*(int *)((int)param_1 + 0x584b) != 0) {
    FreeAndNull((void **)((int)param_1 + 0x584b));
  }
  *(void **)((int)param_1 + 0x584b) = (void *)0x0;
  if (*(int *)((int)param_1 + 0x584f) != 0) {
    FreeAndNull((void **)((int)param_1 + 0x584f));
  }
  *(void **)((int)param_1 + 0x584f) = (void *)0x0;
  thunk_FUN_00695f20(param_1);
  return;
}

