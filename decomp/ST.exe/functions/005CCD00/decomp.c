
void __fastcall FUN_005ccd00(void *param_1)

{
  if (*(int *)((int)param_1 + 0x21fc) != 0) {
    *(undefined4 *)((int)param_1 + 0x2d) = 0x20;
    *(undefined4 *)((int)param_1 + 0x31) = 0;
    FUN_006e6080(param_1,2,*(int *)((int)param_1 + 0x21fc),(undefined4 *)((int)param_1 + 0x1d));
  }
  if (*(int *)(DAT_0081176c + 0x54c) != 0) {
    *(undefined4 *)((int)param_1 + 0x2d) = 0x20;
    *(undefined4 *)((int)param_1 + 0x31) = 0;
    FUN_006e6080(param_1,2,*(undefined4 *)(DAT_0081176c + 0x54c),(undefined4 *)((int)param_1 + 0x1d)
                );
    *(undefined4 *)((int)param_1 + 0x2d) = 0x29;
    *(undefined4 *)((int)param_1 + 0x31) = 0x19;
    FUN_006e6080(param_1,2,*(undefined4 *)(DAT_0081176c + 0x54c),(undefined4 *)((int)param_1 + 0x1d)
                );
  }
  if (*(int *)(DAT_0081176c + 0x550) != 0) {
    *(undefined4 *)((int)param_1 + 0x2d) = 0x20;
    *(undefined4 *)((int)param_1 + 0x31) = 0;
    FUN_006e6080(param_1,2,*(undefined4 *)(DAT_0081176c + 0x550),(undefined4 *)((int)param_1 + 0x1d)
                );
  }
  thunk_FUN_005c5eb0((int)param_1);
  return;
}

