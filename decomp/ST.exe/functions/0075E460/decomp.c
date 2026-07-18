
void FUN_0075e460(int *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  puVar1 = (undefined4 *)(**(code **)*param_1)(param_1,1,0x2c);
  *(undefined4 **)((int)param_1 + 0x1ba) = puVar1;
  *puVar1 = FUN_0075e630;
  puVar1[3] = FUN_0075f720;
  puVar1[8] = 0;
  puVar1[10] = 0;
  if (param_1[0x1c] != 3) {
    FUN_006a5e40(0x2e,DAT_007ed77c,0x7f2e88,0x51b);
  }
  uVar2 = (**(code **)*param_1)(param_1,1,0x80);
  puVar1[6] = uVar2;
  iVar3 = 0;
  do {
    uVar2 = (**(code **)(*param_1 + 4))(param_1,1,0x1000);
    iVar4 = iVar3 + 4;
    *(undefined4 *)(iVar3 + puVar1[6]) = uVar2;
    iVar3 = iVar4;
  } while (iVar4 < 0x80);
  puVar1[7] = 1;
  if (param_1[0x19] == 0) {
    puVar1[4] = 0;
  }
  else {
    iVar3 = param_1[0x16];
    if (iVar3 < 8) {
      FUN_006a5e40(0x37,DAT_007ed77c,0x7f2e88,0x530);
    }
    if (0x100 < iVar3) {
      FUN_006a5e40(0x38,DAT_007ed77c,0x7f2e88,0x533);
    }
    uVar2 = (**(code **)(*param_1 + 8))(param_1,1,iVar3,3);
    puVar1[4] = uVar2;
    puVar1[5] = iVar3;
  }
  if (param_1[0x14] != 0) {
    param_1[0x14] = 2;
  }
  if (param_1[0x14] == 2) {
    uVar2 = (**(code **)(*param_1 + 4))(param_1,1,(param_1[0x1a] + 2) * 6);
    puVar1[8] = uVar2;
    FUN_0075e580(param_1);
  }
  return;
}

