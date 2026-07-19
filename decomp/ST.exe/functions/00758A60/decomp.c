
undefined4 FUN_00758a60(int param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  byte *pbVar7;
  
  puVar2 = *(undefined4 **)(param_1 + 0x10);
  iVar3 = puVar2[1];
  pbVar7 = (byte *)*puVar2;
  if (iVar3 == 0) {
    iVar3 = (*(code *)puVar2[3])(param_1);
    if (iVar3 == 0) {
      return 0;
    }
    iVar3 = puVar2[1];
    pbVar7 = (byte *)*puVar2;
  }
  iVar3 = iVar3 + -1;
  bVar5 = *pbVar7;
  pbVar7 = pbVar7 + 1;
  if (iVar3 == 0) {
    iVar3 = (*(code *)puVar2[3])(param_1);
    if (iVar3 == 0) {
      return 0;
    }
    iVar3 = puVar2[1];
    pbVar7 = (byte *)*puVar2;
  }
  iVar6 = (uint)bVar5 * 0x100 + (uint)*pbVar7;
  do {
    iVar6 = iVar6 + -2;
    pbVar7 = pbVar7 + 1;
    iVar3 = iVar3 + -1;
    if (iVar6 < 1) {
      *puVar2 = pbVar7;
      puVar2[1] = iVar3;
      return 1;
    }
    if (iVar3 == 0) {
      iVar3 = (*(code *)puVar2[3])(param_1);
      if (iVar3 == 0) {
        return 0;
      }
      iVar3 = puVar2[1];
      pbVar7 = (byte *)*puVar2;
    }
    iVar3 = iVar3 + -1;
    bVar5 = *pbVar7;
    uVar4 = (uint)bVar5;
    pbVar7 = pbVar7 + 1;
    if (iVar3 == 0) {
      iVar3 = (*(code *)puVar2[3])(param_1);
      if (iVar3 == 0) {
        return 0;
      }
      iVar3 = puVar2[1];
      pbVar7 = (byte *)*puVar2;
    }
    bVar1 = *pbVar7;
    if (0x1f < bVar5) {
      RaiseInternalException(0x1a,DAT_007ed77c,s_E__DKW_JPG_C_jdmarker_c_007f2db0,0x1d4);
    }
    if (bVar5 < 0x10) {
      *(byte *)(uVar4 + 0xdc + param_1) = bVar1 & 0xf;
      bVar5 = (byte)((int)(uint)bVar1 >> 4);
      *(byte *)(uVar4 + 0xec + param_1) = bVar5;
      if (bVar5 < *(byte *)(uVar4 + 0xdc + param_1)) {
        RaiseInternalException(0x1b,DAT_007ed77c,s_E__DKW_JPG_C_jdmarker_c_007f2db0,0x1dc);
      }
    }
    else {
      *(byte *)(uVar4 + 0xec + param_1) = bVar1;
    }
  } while( true );
}

