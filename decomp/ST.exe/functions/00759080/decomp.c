
undefined4 FUN_00759080(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined4 *puVar3;
  int iVar4;
  char *pcVar5;
  byte *pbVar6;
  
  puVar3 = *(undefined4 **)(param_1 + 0x10);
  iVar4 = puVar3[1];
  pcVar5 = (char *)*puVar3;
  if (iVar4 == 0) {
    iVar4 = (*(code *)puVar3[3])(param_1);
    if (iVar4 == 0) {
      return 0;
    }
    pcVar5 = (char *)*puVar3;
    iVar4 = puVar3[1];
  }
  iVar4 = iVar4 + -1;
  cVar1 = *pcVar5;
  pbVar6 = (byte *)(pcVar5 + 1);
  if (iVar4 == 0) {
    iVar4 = (*(code *)puVar3[3])(param_1);
    if (iVar4 == 0) {
      return 0;
    }
    pbVar6 = (byte *)*puVar3;
    iVar4 = puVar3[1];
  }
  bVar2 = *pbVar6;
  if ((cVar1 != -1) || (bVar2 != 0xd8)) {
    RaiseInternalException(0x34,DAT_007ed77c,s_E__DKW_JPG_C_jdmarker_c_007f2db0,0x2c4);
  }
  *(uint *)(param_1 + 0x18e) = (uint)bVar2;
  puVar3[1] = iVar4 + -1;
  *puVar3 = pbVar6 + 1;
  return 1;
}

