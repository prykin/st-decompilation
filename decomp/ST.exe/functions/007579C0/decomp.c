
int FUN_007579c0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)((int)param_1 + 0x1a2);
  if (*(int *)(iVar1 + 0x14) != 0) {
    return 2;
  }
  iVar2 = (**(code **)(*(int *)((int)param_1 + 0x1a6) + 4))(param_1);
  if (iVar2 == 1) {
    if (*(int *)(iVar1 + 0x18) != 0) {
      FUN_00757aa0((int)param_1);
      *(undefined4 *)(iVar1 + 0x18) = 0;
      return 1;
    }
    if (*(int *)(iVar1 + 0x10) == 0) {
      FUN_006a5e40(0x22,DAT_007ed77c,0x7f2d98,0x137);
    }
    FUN_00757710(param_1);
  }
  else if (iVar2 == 2) {
    *(undefined4 *)(iVar1 + 0x14) = 1;
    if (*(int *)(iVar1 + 0x18) == 0) {
      if (param_1[0x22] < param_1[0x24]) {
        param_1[0x24] = param_1[0x22];
        return 2;
      }
    }
    else if (*(int *)(*(int *)((int)param_1 + 0x1a6) + 0x54) != 0) {
      FUN_006a5e40(0x3a,DAT_007ed77c,0x7f2d98,0x13f);
      return 2;
    }
  }
  return iVar2;
}

