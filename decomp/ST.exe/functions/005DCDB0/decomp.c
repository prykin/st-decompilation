
void __fastcall FUN_005dcdb0(void *param_1)

{
  if (*(uint *)((int)param_1 + 0x20) != 0) {
    FUN_006e56b0(param_1,*(uint *)((int)param_1 + 0x20));
  }
  *(undefined4 *)((int)param_1 + 0x20) = 0;
  if (*(uint *)((int)param_1 + 0x389) != 0) {
    FUN_006e56b0(param_1,*(uint *)((int)param_1 + 0x389));
  }
  *(undefined4 *)((int)param_1 + 0x389) = 0;
  if (*(uint *)((int)param_1 + 0x54c) != 0) {
    FUN_006e56b0(param_1,*(uint *)((int)param_1 + 0x54c));
  }
  *(undefined4 *)((int)param_1 + 0x54c) = 0;
  if (*(uint *)((int)param_1 + 0x550) != 0) {
    FUN_006e56b0(param_1,*(uint *)((int)param_1 + 0x550));
  }
  *(undefined4 *)((int)param_1 + 0x550) = 0;
  if (*(int *)((int)param_1 + 0x69a) != 0) {
    FUN_006ab060((undefined4 *)((int)param_1 + 0x69a));
  }
  thunk_FUN_00541030();
  thunk_FUN_005db2a0((int)param_1);
  DAT_0080c50a = 1;
  thunk_FUN_005daf20((int)param_1);
  thunk_FUN_005db010();
  thunk_FUN_005da910((int)param_1);
  FUN_006e52d0((int)param_1);
  return;
}

