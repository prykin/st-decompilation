
void __fastcall FUN_004ccad0(int *param_1)

{
  undefined4 uVar1;
  
  thunk_FUN_00423160();
  uVar1 = 0;
  if (*(int *)((int)param_1 + 0x361) != 0) {
    uVar1 = thunk_FUN_004c91a0(param_1);
  }
  *(uint *)((int)param_1 + 0x265) = *(uint *)((int)param_1 + 0x265) & 0xfffffffd;
  *(undefined4 *)((int)param_1 + 0x26d) = 0;
  if (param_1[0x16b] == 0x50) {
    thunk_FUN_004b70d0(CONCAT31((int3)((uint)uVar1 >> 8),(char)param_1[9]),0x28);
  }
  if ((param_1[0x16b] == 0x6f) || (param_1[0x16b] == 0x73)) {
    thunk_FUN_004eccc0(param_1);
  }
  if (param_1[0x16b] == 0x36) {
    thunk_FUN_0041cf50(param_1);
  }
  if ((param_1[0x16b] == 0x3d) || (param_1[0x16b] == 0x5d)) {
    if (param_1[0x138] != 0) {
      thunk_FUN_0041d100(param_1);
      param_1[0x138] = 0;
    }
    if (param_1[0x139] != 0) {
      thunk_FUN_0041d2b0(param_1);
      param_1[0x139] = 0;
    }
  }
  thunk_FUN_004b9a40(param_1);
  thunk_FUN_0041f970((int)param_1);
  thunk_FUN_00419d30(param_1,0xfe);
  return;
}

