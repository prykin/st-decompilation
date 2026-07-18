
void __fastcall FUN_005ccc30(int *param_1)

{
  *(undefined4 *)((int)param_1 + 0x2d) = 0x20;
  if (param_1[0x87f] != 0) {
    *(undefined4 *)((int)param_1 + 0x31) = 1;
    FUN_006e6080(param_1,2,param_1[0x87f],(undefined4 *)((int)param_1 + 0x1d));
  }
  if (*(int *)(DAT_0081176c + 0x550) != 0) {
    *(undefined4 *)((int)param_1 + 0x31) = 1;
    FUN_006e6080(param_1,2,*(undefined4 *)(DAT_0081176c + 0x550),(undefined4 *)((int)param_1 + 0x1d)
                );
  }
  if (*(int *)(DAT_0081176c + 0x54c) != 0) {
    *(undefined4 *)((int)param_1 + 0x2d) = 0x29;
    *(undefined4 *)((int)param_1 + 0x31) = 9;
    FUN_006e6080(param_1,2,*(undefined4 *)(DAT_0081176c + 0x54c),(undefined4 *)((int)param_1 + 0x1d)
                );
  }
  thunk_FUN_005c5ca0(param_1);
  return;
}

