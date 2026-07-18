
undefined4
FUN_00600580(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            undefined4 *param_7,undefined4 *param_8,undefined4 *param_9)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  sVar1 = (short)(param_1 >> 0x1f);
  if (param_1 < 0) {
    param_1 = (short)(((short)(param_1 / 0xc9) + sVar1) -
                     (short)((longlong)param_1 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    param_1 = (int)(short)(((short)(param_1 / 0xc9) + sVar1) -
                          (short)((longlong)param_1 * 0x28c1979 >> 0x3f));
  }
  sVar1 = (short)(param_2 >> 0x1f);
  if (param_2 < 0) {
    iVar4 = (short)(((short)(param_2 / 0xc9) + sVar1) -
                   (short)((longlong)param_2 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    iVar4 = (int)(short)(((short)(param_2 / 0xc9) + sVar1) -
                        (short)((longlong)param_2 * 0x28c1979 >> 0x3f));
  }
  sVar1 = (short)(param_3 >> 0x1f);
  if (param_3 < 0) {
    iVar5 = (short)(((short)(param_3 / 200) + sVar1) -
                   (short)((longlong)param_3 * 0x51eb851f >> 0x3f)) + -1;
  }
  else {
    iVar5 = (int)(short)(((short)(param_3 / 200) + sVar1) -
                        (short)((longlong)param_3 * 0x51eb851f >> 0x3f));
  }
  sVar1 = (short)(param_4 >> 0x1f);
  if (param_4 < 0) {
    iVar7 = (short)(((short)(param_4 / 0xc9) + sVar1) -
                   (short)((longlong)param_4 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    iVar7 = (int)(short)(((short)(param_4 / 0xc9) + sVar1) -
                        (short)((longlong)param_4 * 0x28c1979 >> 0x3f));
  }
  sVar1 = (short)(param_5 >> 0x1f);
  if (param_5 < 0) {
    iVar3 = (short)(((short)(param_5 / 0xc9) + sVar1) -
                   (short)((longlong)param_5 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    iVar3 = (int)(short)(((short)(param_5 / 0xc9) + sVar1) -
                        (short)((longlong)param_5 * 0x28c1979 >> 0x3f));
  }
  sVar1 = (short)(param_6 >> 0x1f);
  if (param_6 < 0) {
    iVar2 = (short)(((short)(param_6 / 200) + sVar1) -
                   (short)((longlong)param_6 * 0x51eb851f >> 0x3f)) + -1;
  }
  else {
    iVar2 = (int)(short)(((short)(param_6 / 200) + sVar1) -
                        (short)((longlong)param_6 * 0x51eb851f >> 0x3f));
  }
  uVar6 = iVar5 - iVar2;
  if ((int)uVar6 < 1) {
    if (iVar2 == 4) {
      *param_7 = 0xffffffff;
      *param_8 = 0xffffffff;
      *param_9 = 0xffffffff;
    }
  }
  else {
    iVar4 = FUN_006acfd0(iVar7,iVar3,param_1,iVar4);
    if (iVar4 < (int)((uVar6 ^ (int)uVar6 >> 0x1f) - ((int)uVar6 >> 0x1f))) {
      return 1;
    }
  }
  return 0;
}

