
void __fastcall thunk_FUN_0060a470(void *param_1)

{
  if (*(int *)((int)param_1 + 0x1f5) == 0x4d) {
    thunk_FUN_0060a800(param_1,1);
    return;
  }
  thunk_FUN_0060a940((int)param_1);
  *(undefined1 *)((int)param_1 + 0x225) = 0;
  *(undefined1 *)((int)param_1 + 0x22e) = 0;
  return;
}

