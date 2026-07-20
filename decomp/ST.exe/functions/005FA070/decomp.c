
void __fastcall FUN_005fa070(int *param_1)

{
  if (*(int *)((int)param_1 + 0x2dd) == 5) {
    (**(code **)(*param_1 + 0x20))();
    thunk_FUN_004167a0((AnonShape_004167A0_C6E28A87 *)param_1);
  }
  thunk_FUN_005fa030((AnonShape_005F9F70_43CA4DAC *)param_1);
  return;
}

