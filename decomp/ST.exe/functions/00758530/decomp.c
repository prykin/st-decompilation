
undefined4 FUN_00758530(undefined4 *param_1,undefined4 param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  
  puVar3 = (undefined4 *)param_1[4];
  iVar4 = puVar3[1];
  pbVar7 = (byte *)*puVar3;
  param_1[0x35] = param_2;
  param_1[0x36] = param_3;
  if (iVar4 == 0) {
    iVar4 = (*(code *)puVar3[3])(param_1);
    if (iVar4 == 0) {
      return 0;
    }
    pbVar7 = (byte *)*puVar3;
    iVar4 = puVar3[1];
  }
  iVar4 = iVar4 + -1;
  bVar1 = *pbVar7;
  pbVar7 = pbVar7 + 1;
  if (iVar4 == 0) {
    iVar4 = (*(code *)puVar3[3])(param_1);
    if (iVar4 == 0) {
      return 0;
    }
    pbVar7 = (byte *)*puVar3;
    iVar4 = puVar3[1];
  }
  bVar2 = *pbVar7;
  iVar4 = iVar4 + -1;
  pbVar7 = pbVar7 + 1;
  if (iVar4 == 0) {
    iVar4 = (*(code *)puVar3[3])(param_1);
    if (iVar4 == 0) {
      return 0;
    }
    pbVar7 = (byte *)*puVar3;
    iVar4 = puVar3[1];
  }
  iVar4 = iVar4 + -1;
  pbVar8 = pbVar7 + 1;
  param_1[0x33] = (uint)*pbVar7;
  if (iVar4 == 0) {
    iVar4 = (*(code *)puVar3[3])(param_1);
    if (iVar4 == 0) {
      return 0;
    }
    pbVar8 = (byte *)*puVar3;
    iVar4 = puVar3[1];
  }
  iVar4 = iVar4 + -1;
  pbVar7 = pbVar8 + 1;
  param_1[6] = (uint)*pbVar8 << 8;
  if (iVar4 == 0) {
    iVar4 = (*(code *)puVar3[3])(param_1);
    if (iVar4 == 0) {
      return 0;
    }
    pbVar7 = (byte *)*puVar3;
    iVar4 = puVar3[1];
  }
  iVar4 = iVar4 + -1;
  pbVar8 = pbVar7 + 1;
  param_1[6] = param_1[6] + (uint)*pbVar7;
  if (iVar4 == 0) {
    iVar4 = (*(code *)puVar3[3])(param_1);
    if (iVar4 == 0) {
      return 0;
    }
    pbVar8 = (byte *)*puVar3;
    iVar4 = puVar3[1];
  }
  iVar4 = iVar4 + -1;
  pbVar7 = pbVar8 + 1;
  param_1[5] = (uint)*pbVar8 << 8;
  if (iVar4 == 0) {
    iVar4 = (*(code *)puVar3[3])(param_1);
    if (iVar4 == 0) {
      return 0;
    }
    pbVar7 = (byte *)*puVar3;
    iVar4 = puVar3[1];
  }
  iVar4 = iVar4 + -1;
  pbVar8 = pbVar7 + 1;
  param_1[5] = param_1[5] + (uint)*pbVar7;
  if (iVar4 == 0) {
    iVar4 = (*(code *)puVar3[3])(param_1);
    if (iVar4 == 0) {
      return 0;
    }
    pbVar8 = (byte *)*puVar3;
    iVar4 = puVar3[1];
  }
  param_1[7] = (uint)*pbVar8;
  iVar4 = iVar4 + -1;
  pbVar8 = pbVar8 + 1;
  if (*(int *)(*(int *)((int)param_1 + 0x1a6) + 0x54) != 0) {
    RaiseInternalException(0x39,DAT_007ed77c,s_E__DKW_JPG_C_jdmarker_c_007f2db0,0xea);
  }
  if (((param_1[6] == 0) || (param_1[5] == 0)) || ((int)param_1[7] < 1)) {
    RaiseInternalException(0x1f,DAT_007ed77c,s_E__DKW_JPG_C_jdmarker_c_007f2db0,0xf1);
  }
  if ((uint)bVar1 * 0x100 + (uint)bVar2 + -8 != param_1[7] * 3) {
    RaiseInternalException(9,DAT_007ed77c,s_E__DKW_JPG_C_jdmarker_c_007f2db0,0xf4);
  }
  if (param_1[0x34] == 0) {
    uVar5 = (**(code **)*param_1)(param_1,1,param_1[7] * 0x54);
    param_1[0x34] = uVar5;
  }
  puVar6 = (uint *)param_1[0x34];
  param_3 = 0;
  if (0 < (int)param_1[7]) {
    do {
      puVar6[1] = param_3;
      if (iVar4 == 0) {
        iVar4 = (*(code *)puVar3[3])(param_1);
        if (iVar4 == 0) {
          return 0;
        }
        pbVar8 = (byte *)*puVar3;
        iVar4 = puVar3[1];
      }
      iVar4 = iVar4 + -1;
      pbVar7 = pbVar8 + 1;
      *puVar6 = (uint)*pbVar8;
      if (iVar4 == 0) {
        iVar4 = (*(code *)puVar3[3])(param_1);
        if (iVar4 == 0) {
          return 0;
        }
        pbVar7 = (byte *)*puVar3;
        iVar4 = puVar3[1];
      }
      iVar4 = iVar4 + -1;
      bVar1 = *pbVar7;
      pbVar7 = pbVar7 + 1;
      puVar6[2] = (int)(uint)bVar1 >> 4;
      puVar6[3] = bVar1 & 0xf;
      if (iVar4 == 0) {
        iVar4 = (*(code *)puVar3[3])(param_1);
        if (iVar4 == 0) {
          return 0;
        }
        pbVar7 = (byte *)*puVar3;
        iVar4 = puVar3[1];
      }
      iVar4 = iVar4 + -1;
      pbVar8 = pbVar7 + 1;
      puVar6[4] = (uint)*pbVar7;
      param_3 = param_3 + 1;
      puVar6 = puVar6 + 0x15;
    } while ((int)param_3 < (int)param_1[7]);
  }
  *(undefined4 *)(*(int *)((int)param_1 + 0x1a6) + 0x54) = 1;
  *puVar3 = pbVar8;
  puVar3[1] = iVar4;
  return 1;
}

