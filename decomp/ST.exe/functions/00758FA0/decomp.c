
undefined4 FUN_00758fa0(int param_1)

{
  undefined1 uVar1;
  byte bVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  byte *pbVar6;
  
  puVar3 = *(undefined4 **)(param_1 + 0x10);
  iVar4 = puVar3[1];
  puVar5 = (undefined1 *)*puVar3;
  if (iVar4 == 0) {
    iVar4 = (*(code *)puVar3[3])(param_1);
    if (iVar4 == 0) {
      return 0;
    }
    puVar5 = (undefined1 *)*puVar3;
    iVar4 = puVar3[1];
  }
  iVar4 = iVar4 + -1;
  uVar1 = *puVar5;
  puVar5 = puVar5 + 1;
  if (iVar4 == 0) {
    iVar4 = (*(code *)puVar3[3])(param_1);
    if (iVar4 == 0) {
      return 0;
    }
    puVar5 = (undefined1 *)*puVar3;
    iVar4 = puVar3[1];
  }
  iVar4 = iVar4 + -1;
  pbVar6 = puVar5 + 1;
  if (CONCAT11(uVar1,*puVar5) != 4) {
    RaiseInternalException(9,DAT_007ed77c,s_E__DKW_JPG_C_jdmarker_c_007f2db0,0x25e);
  }
  if (iVar4 == 0) {
    iVar4 = (*(code *)puVar3[3])(param_1);
    if (iVar4 == 0) {
      return 0;
    }
    pbVar6 = (byte *)*puVar3;
    iVar4 = puVar3[1];
  }
  iVar4 = iVar4 + -1;
  bVar2 = *pbVar6;
  pbVar6 = pbVar6 + 1;
  if (iVar4 == 0) {
    iVar4 = (*(code *)puVar3[3])(param_1);
    if (iVar4 == 0) {
      return 0;
    }
    pbVar6 = (byte *)*puVar3;
    iVar4 = puVar3[1];
  }
  *(uint *)(param_1 + 0x10c) = (uint)*pbVar6 + (uint)bVar2 * 0x100;
  *puVar3 = pbVar6 + 1;
  puVar3[1] = iVar4 + -1;
  return 1;
}

