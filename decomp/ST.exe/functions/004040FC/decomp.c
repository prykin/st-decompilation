
void __fastcall thunk_FUN_0054a8d0(void *param_1)

{
  if ((DAT_007fb2ac != 0) && (*(int *)(DAT_007fb2ac + 0x18) == 0)) {
    thunk_FUN_004c63f0(DAT_007fb2ac);
  }
  if ((*(char *)((int)param_1 + 0xde) == '\x05') && (-1 < (int)*(uint *)((int)param_1 + 0x10b))) {
    if (DAT_00807598 != (void *)0x0) {
      FUN_006e8ba0(DAT_00807598,*(uint *)((int)param_1 + 0x10b));
    }
    *(undefined4 *)((int)param_1 + 0x10b) = 0xffffffff;
    if (*(int *)((int)param_1 + 0xa9) == 0) {
      FUN_006b8a60(*(byte **)((int)param_1 + 0xad));
    }
    else if (*(uint *)((int)param_1 + 0x1c) != 0xffffffff) {
      FUN_006b34d0(*(uint **)((int)param_1 + 0x60),*(uint *)((int)param_1 + 0x1c),0xfffffffe,
                   *(uint *)((int)param_1 + 0x34),*(uint *)((int)param_1 + 0x38));
    }
    CursorClassTy::DrawSprite(param_1,*(int *)((int)param_1 + 0xc5),*(int *)((int)param_1 + 0xc9));
    *(undefined1 *)((int)param_1 + 0xde) = 0;
  }
  *(undefined4 *)((int)param_1 + 0x4a2) = 0;
  *(undefined4 *)((int)param_1 + 0x4aa) = 0;
  *(undefined4 *)((int)param_1 + 0x4a6) = 0;
  return;
}

