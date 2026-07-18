
void FUN_0075ce80(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)((int)param_1 + 0x19e);
  if (param_2 == 0) {
    if (param_1[0x13] == 0) {
      *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(*(int *)((int)param_1 + 0x1b2) + 4);
    }
    else {
      *(code **)(iVar1 + 4) = FUN_0075cf90;
      if (*(int *)(iVar1 + 0xc) == 0) {
        uVar2 = (**(code **)(*param_1 + 0x1c))
                          (param_1,*(undefined4 *)(iVar1 + 8),0,*(undefined4 *)(iVar1 + 0x10),1);
        *(undefined4 *)(iVar1 + 0xc) = uVar2;
        *(undefined4 *)(iVar1 + 0x18) = 0;
        *(undefined4 *)(iVar1 + 0x14) = 0;
        return;
      }
    }
    *(undefined4 *)(iVar1 + 0x18) = 0;
    *(undefined4 *)(iVar1 + 0x14) = 0;
    return;
  }
  if (param_2 != 2) {
    if (param_2 != 3) {
      FUN_006a5e40(4,DAT_007ed77c,0x7f2e40,0x73);
      *(undefined4 *)(iVar1 + 0x18) = 0;
      *(undefined4 *)(iVar1 + 0x14) = 0;
      return;
    }
    if (*(int *)(iVar1 + 8) == 0) {
      FUN_006a5e40(4,DAT_007ed77c,0x7f2e40,0x68);
    }
    *(code **)(iVar1 + 4) = FUN_0075d010;
    *(undefined4 *)(iVar1 + 0x18) = 0;
    *(undefined4 *)(iVar1 + 0x14) = 0;
    return;
  }
  if (*(int *)(iVar1 + 8) == 0) {
    FUN_006a5e40(4,DAT_007ed77c,0x7f2e40,0x6e);
  }
  *(code **)(iVar1 + 4) = FUN_0075d0b0;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  return;
}

