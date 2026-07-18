
void __fastcall thunk_FUN_005fa070(int *param_1)

{
  if (*(int *)((int)param_1 + 0x2dd) == 5) {
    (**(code **)(*param_1 + 0x20))();
    thunk_FUN_004167a0((int)param_1);
  }
  thunk_FUN_005fa030((int)param_1);
  return;
}

