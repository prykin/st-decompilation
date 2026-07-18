
void __fastcall thunk_FUN_00551b10(void *param_1)

{
  if (*(int *)((int)param_1 + 0x1c0) != 0) {
    *(undefined4 *)((int)param_1 + 0x28) = 0x26;
    FUN_006e6080(param_1,2,*(int *)((int)param_1 + 0x1c0),(undefined4 *)((int)param_1 + 0x18));
    if (*(uint *)((int)param_1 + 0x2c) !=
        (uint)*(ushort *)((int)param_1 + (uint)*(byte *)((int)param_1 + 0x1d0) * 2 + 0x1bc)) {
      *(undefined4 *)((int)param_1 + 0x28) = 0x22;
      *(uint *)((int)param_1 + 0x2c) =
           (uint)*(ushort *)((int)param_1 + (uint)*(byte *)((int)param_1 + 0x1d0) * 2 + 0x1bc);
      FUN_006e6080(param_1,2,*(undefined4 *)((int)param_1 + 0x1c0),
                   (undefined4 *)((int)param_1 + 0x18));
    }
    thunk_FUN_00551800(param_1);
  }
  return;
}

