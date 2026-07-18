
void FUN_0075e630(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  
  iVar1 = *(int *)((int)param_1 + 0x1ba);
  puVar5 = *(undefined4 **)(iVar1 + 0x18);
  if (param_1[0x14] != 0) {
    param_1[0x14] = 2;
  }
  if (param_2 == 0) {
    if (param_1[0x14] == 2) {
      *(code **)(iVar1 + 4) = FUN_0075ec80;
    }
    else {
      *(code **)(iVar1 + 4) = FUN_0075e7d0;
    }
    *(undefined **)(iVar1 + 8) = &DAT_0075f710;
    iVar4 = param_1[0x1f];
    if (iVar4 < 1) {
      FUN_006a5e40(0x37,DAT_007ed77c,0x7f2e88,0x4d9);
    }
    if (0x100 < iVar4) {
      FUN_006a5e40(0x38,DAT_007ed77c,0x7f2e88,0x4db);
    }
    if (param_1[0x14] == 2) {
      uVar3 = (param_1[0x1a] + 2) * 6;
      if (*(int *)(iVar1 + 0x20) == 0) {
        uVar2 = (**(code **)(*param_1 + 4))(param_1,1,uVar3);
        *(undefined4 *)(iVar1 + 0x20) = uVar2;
      }
      FUN_00759f30(*(undefined4 **)(iVar1 + 0x20),uVar3);
      if (*(int *)(iVar1 + 0x28) == 0) {
        FUN_0075e580(param_1);
      }
      *(undefined4 *)(iVar1 + 0x24) = 0;
    }
  }
  else {
    *(code **)(iVar1 + 4) = FUN_0075e750;
    *(code **)(iVar1 + 8) = FUN_0075ef30;
    *(undefined4 *)(iVar1 + 0x1c) = 1;
  }
  if (*(int *)(iVar1 + 0x1c) != 0) {
    iVar4 = 0x20;
    do {
      FUN_00759f30((undefined4 *)*puVar5,0x1000);
      puVar5 = puVar5 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    *(undefined4 *)(iVar1 + 0x1c) = 0;
  }
  return;
}

