
void FUN_0075a0f0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x196);
  if (param_2 == 0) {
    if (*(int *)(*(int *)(param_1 + 0x1b2) + 8) != 0) {
      *(code **)(iVar1 + 4) = FUN_0075a350;
      FUN_0075a180(param_1);
      *(undefined4 *)(iVar1 + 0x40) = 0;
      *(undefined4 *)(iVar1 + 0x44) = 0;
      *(undefined4 *)(iVar1 + 0x4c) = 0;
      *(undefined4 *)(iVar1 + 0x30) = 0;
      *(undefined4 *)(iVar1 + 0x34) = 0;
      return;
    }
    *(undefined4 *)(iVar1 + 0x30) = 0;
    *(undefined4 *)(iVar1 + 0x34) = 0;
    *(code **)(iVar1 + 4) = FUN_0075a2d0;
    return;
  }
  if (param_2 != 2) {
    FUN_006a5e40(4,DAT_007ed77c,0x7f2de0,0x14f);
    return;
  }
  *(code **)(iVar1 + 4) = FUN_0075a640;
  return;
}

