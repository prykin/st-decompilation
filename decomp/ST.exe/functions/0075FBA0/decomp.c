
void FUN_0075fba0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar1 = *(int *)((int)param_1 + 0x1ba);
  param_1[0x20] = *(int *)(iVar1 + 0x10);
  iVar3 = param_1[0x14];
  param_1[0x1f] = *(int *)(iVar1 + 0x14);
  if (iVar3 == 0) {
    if (param_1[0x1c] == 3) {
      *(code **)(iVar1 + 4) = FUN_0075fe30;
      return;
    }
    *(code **)(iVar1 + 4) = FUN_0075fd80;
  }
  else if (iVar3 == 1) {
    if (param_1[0x1c] == 3) {
      *(code **)(iVar1 + 4) = FUN_0075fff0;
    }
    else {
      *(code **)(iVar1 + 4) = FUN_0075fee0;
    }
    *(undefined4 *)(iVar1 + 0x30) = 0;
    if (*(int *)(iVar1 + 0x1c) == 0) {
      FUN_0075fa00(param_1);
    }
    if (*(int *)(iVar1 + 0x34) == 0) {
      FUN_0075fca0(param_1);
      return;
    }
  }
  else {
    if (iVar3 != 2) {
      RaiseInternalException(0x2f,DAT_007ed77c,s_E__DKW_JPG_C_jquant1_c_007f2ea0,0x318);
      return;
    }
    puVar2 = (undefined4 *)(iVar1 + 0x44);
    *(code **)(iVar1 + 4) = FUN_00760100;
    *(undefined4 *)(iVar1 + 0x54) = 0;
    if (*(int *)(iVar1 + 0x44) == 0) {
      FUN_0075fb50(param_1);
    }
    iVar1 = param_1[0x1a];
    iVar3 = 0;
    if (0 < param_1[0x1c]) {
      do {
        FUN_00759f30((undefined4 *)*puVar2,iVar1 * 2 + 4);
        iVar3 = iVar3 + 1;
        puVar2 = puVar2 + 1;
      } while (iVar3 < param_1[0x1c]);
      return;
    }
  }
  return;
}

