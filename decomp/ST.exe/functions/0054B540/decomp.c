
void __fastcall FUN_0054b540(void *param_1)

{
  uint uVar1;
  
  *(undefined4 *)((int)param_1 + 0xcd) = 0;
  *(undefined4 *)((int)param_1 + 0xd3) = 0;
  *(undefined4 *)((int)param_1 + 0xd7) = 0;
  *(undefined2 *)((int)param_1 + 0xdb) = 0;
  *(undefined1 *)((int)param_1 + 0xdd) = 0;
  uVar1 = *(uint *)((int)param_1 + 0x10b);
  if (-1 < (int)uVar1) {
    if (*(char *)((int)param_1 + 0xde) == '\x05') {
      if (DAT_00807598 != (void *)0x0) {
        FUN_006e8ba0(DAT_00807598,uVar1);
      }
      if (*(int *)((int)param_1 + 0xa9) == 0) {
        FUN_006b8a60(*(byte **)((int)param_1 + 0xad));
      }
      else if (*(uint *)((int)param_1 + 0x1c) != 0xffffffff) {
        FUN_006b34d0(*(uint **)((int)param_1 + 0x60),*(uint *)((int)param_1 + 0x1c),0xfffffffe,
                     *(uint *)((int)param_1 + 0x34),*(uint *)((int)param_1 + 0x38));
      }
      thunk_FUN_00543c90(param_1,*(int *)((int)param_1 + 0xc5),*(int *)((int)param_1 + 0xc9));
    }
    else {
      FUN_006b3bb0(DAT_008075a8,uVar1);
    }
    *(undefined4 *)((int)param_1 + 0x10b) = 0xffffffff;
  }
  *(undefined1 *)((int)param_1 + 0xde) = 0;
  *(undefined4 *)((int)param_1 + 0x496) = 0;
  *(undefined4 *)((int)param_1 + 0x49a) = 0;
  *(undefined4 *)((int)param_1 + 0x4ae) = 0;
  return;
}

