
void FUN_0075d890(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  puVar1 = (undefined4 *)(**(code **)*param_1)(param_1,1,0x18);
  *(undefined4 **)((int)param_1 + 0x1b6) = puVar1;
  *puVar1 = &DAT_0075de80;
  switch(param_1[8]) {
  case 1:
    if (param_1[7] != 1) {
      uVar4 = 0x127;
LAB_0075d914:
      FUN_006a5e40(8,DAT_007ed77c,0x7f2e70,uVar4);
    }
    break;
  case 2:
  case 3:
    if (param_1[7] != 3) {
      uVar4 = 0x12d;
      goto LAB_0075d914;
    }
    break;
  case 4:
  case 5:
    if (param_1[7] != 4) {
      uVar4 = 0x133;
      goto LAB_0075d914;
    }
    break;
  default:
    if ((int)param_1[7] < 1) {
      uVar4 = 0x138;
      goto LAB_0075d914;
    }
  }
  iVar2 = param_1[9];
  if (iVar2 == 1) {
    param_1[0x1c] = 1;
    if ((param_1[8] == 1) || (param_1[8] == 3)) {
      puVar1[1] = FUN_0075dd00;
      iVar2 = 1;
      if (1 < (int)param_1[7]) {
        iVar3 = 0x54;
        do {
          iVar2 = iVar2 + 1;
          *(undefined4 *)(param_1[0x34] + 0x30 + iVar3) = 0;
          iVar3 = iVar3 + 0x54;
        } while (iVar2 < (int)param_1[7]);
      }
      goto LAB_0075da47;
    }
    uVar4 = 0x14b;
  }
  else {
    if (iVar2 == 2) {
      param_1[0x1c] = 3;
      if (param_1[8] == 3) {
        puVar1[1] = FUN_0075db50;
        FUN_0075da80(param_1);
      }
      else if (param_1[8] == 2) {
        puVar1[1] = FUN_0075dc70;
      }
      else {
        FUN_006a5e40(0x19,DAT_007ed77c,0x7f2e70,0x15a);
      }
      goto LAB_0075da47;
    }
    if (iVar2 == 4) {
      param_1[0x1c] = 4;
      if (param_1[8] == 5) {
        puVar1[1] = FUN_0075dd30;
        FUN_0075da80(param_1);
      }
      else if (param_1[8] == 4) {
        puVar1[1] = FUN_0075dc70;
      }
      else {
        FUN_006a5e40(0x19,DAT_007ed77c,0x7f2e70,0x166);
      }
      goto LAB_0075da47;
    }
    if (iVar2 == param_1[8]) {
      param_1[0x1c] = param_1[7];
      puVar1[1] = FUN_0075dc70;
      goto LAB_0075da47;
    }
    uVar4 = 0x16f;
  }
  FUN_006a5e40(0x19,DAT_007ed77c,0x7f2e70,uVar4);
LAB_0075da47:
  if (param_1[0x13] == 0) {
    param_1[0x1d] = param_1[0x1c];
    return;
  }
  param_1[0x1d] = 1;
  return;
}

