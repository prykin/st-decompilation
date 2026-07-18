
void FUN_007550c0(int param_1,undefined4 *param_2)

{
  if ((int)param_2 < 9) {
    *(uint *)(param_1 + 0x30) = (uint)param_2 & 0xff;
    switch((uint)param_2 & 0xff) {
    case 1:
    case 2:
      *(undefined2 *)(param_1 + 0x34) = 1;
      return;
    case 3:
    case 4:
      *(undefined2 *)(param_1 + 0x34) = 2;
      return;
    case 5:
    case 6:
      *(undefined2 *)(param_1 + 0x34) = 4;
      return;
    case 7:
      *(undefined1 **)(param_1 + 4) = &LAB_00402928;
      *(code **)(param_1 + 8) = FUN_00757430;
      *(undefined2 *)(param_1 + 0x34) = 0;
      return;
    case 8:
      *(code **)(param_1 + 4) = thunk_FUN_00673160;
      *(code **)(param_1 + 8) = FUN_00757430;
      *(undefined2 *)(param_1 + 0x34) = 0;
    }
    return;
  }
  *(undefined4 *)(param_1 + 0x30) = *param_2;
  *(undefined2 *)(param_1 + 0x34) = *(undefined2 *)(param_2 + 3);
  *(undefined4 *)(param_1 + 4) = param_2[1];
  *(undefined4 *)(param_1 + 8) = param_2[2];
  return;
}

