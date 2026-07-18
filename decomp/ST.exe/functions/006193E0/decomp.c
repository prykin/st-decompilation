
undefined4 __fastcall FUN_006193e0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  
  iVar1 = *(int *)(param_1 + 0x61);
  iVar2 = *(int *)(param_1 + 0x65);
  iVar3 = *(int *)(param_1 + 0x69);
  *(int *)(param_1 + 0x9f) = iVar1;
  *(int *)(param_1 + 0xa3) = iVar2;
  *(int *)(param_1 + 0xa7) = iVar3;
  *(int *)(param_1 + 0xdb) = iVar1;
  *(int *)(param_1 + 0xdf) = iVar2;
  *(int *)(param_1 + 0xe3) = iVar3;
  sVar4 = (short)(iVar1 >> 0x1f);
  if (iVar1 < 0) {
    sVar4 = (((short)(iVar1 / 0xc9) + sVar4) - (short)((longlong)iVar1 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    sVar4 = ((short)(iVar1 / 0xc9) + sVar4) - (short)((longlong)iVar1 * 0x28c1979 >> 0x3f);
  }
  *(short *)(param_1 + 0xc9) = sVar4;
  sVar5 = (short)(iVar2 >> 0x1f);
  if (iVar2 < 0) {
    sVar5 = (((short)(iVar2 / 0xc9) + sVar5) - (short)((longlong)iVar2 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    sVar5 = ((short)(iVar2 / 0xc9) + sVar5) - (short)((longlong)iVar2 * 0x28c1979 >> 0x3f);
  }
  *(short *)(param_1 + 0xcb) = sVar5;
  sVar6 = (short)(iVar3 >> 0x1f);
  if (iVar3 < 0) {
    sVar6 = (((short)(iVar3 / 200) + sVar6) - (short)((longlong)iVar3 * 0x51eb851f >> 0x3f)) + -1;
  }
  else {
    sVar6 = ((short)(iVar3 / 200) + sVar6) - (short)((longlong)iVar3 * 0x51eb851f >> 0x3f);
  }
  *(short *)(param_1 + 0xcd) = sVar6;
  if ((((-1 < sVar4) && (-1 < sVar5)) && (-1 < sVar6)) &&
     (((sVar4 < DAT_007fb240 && (sVar5 < DAT_007fb242)) && (sVar6 < 5)))) {
    *(undefined4 *)(param_1 + 0xe7) = *(undefined4 *)(param_1 + 0x6d);
    *(undefined4 *)(param_1 + 0xeb) = *(undefined4 *)(param_1 + 0x71);
    *(undefined4 *)(param_1 + 0xef) = *(undefined4 *)(param_1 + 0x75);
    return 1;
  }
  return 0;
}

