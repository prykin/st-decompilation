
void __fastcall thunk_FUN_005ae950(void *param_1)

{
  *(undefined4 *)((int)param_1 + 0x1a60) = 0;
  *(undefined4 *)((int)param_1 + 0x29) = 2;
  *(undefined4 *)((int)param_1 + 0x2d) = 0x20;
  if (*(int *)((int)param_1 + 0x1c83) != 0) {
    *(int *)((int)param_1 + 0x25) = *(int *)((int)param_1 + 0x1c83);
    *(undefined4 *)((int)param_1 + 0x31) = 0;
    (**(code **)(**(int **)((int)param_1 + 0xc) + 0x18))((int)param_1 + 0x1d);
  }
  if (*(int *)((int)param_1 + 0x1a6c) != 0) {
    *(int *)((int)param_1 + 0x25) = *(int *)((int)param_1 + 0x1a6c);
    *(undefined4 *)((int)param_1 + 0x31) = 0;
    (**(code **)(**(int **)((int)param_1 + 0xc) + 0x18))((int)param_1 + 0x1d);
  }
  if (*(int *)(DAT_0081176c + 0x389) != 0) {
    *(int *)((int)param_1 + 0x25) = *(int *)(DAT_0081176c + 0x389);
    *(undefined4 *)((int)param_1 + 0x2d) = 0x20;
    *(undefined4 *)((int)param_1 + 0x31) = 0;
    (**(code **)(**(int **)((int)param_1 + 0xc) + 0x18))((int)param_1 + 0x1d);
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
  return;
}

