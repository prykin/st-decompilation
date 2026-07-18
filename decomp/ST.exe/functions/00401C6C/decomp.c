
int __thiscall thunk_FUN_0065ed90(void *this,short *param_1,short *param_2,int param_3)

{
  short *psVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  void *pvStack_10;
  int iStack_c;
  int iStack_8;
  
  psVar1 = param_2;
  pvStack_10 = this;
  iVar3 = thunk_FUN_0065e700((int)this,&iStack_c,&iStack_8,&iStack_c,&iStack_1c);
  if (iVar3 != 0) {
    return -4;
  }
  iVar7 = (int)param_1[3] / 2 + (int)*param_1;
  iVar5 = (int)param_1[4] / 2 + (int)param_1[1];
  iStack_18 = iVar5;
  iVar3 = FUN_006aced8(iStack_8,iStack_c,iVar7,iVar5);
  if (iVar3 < 8) {
    return -4;
  }
  iStack_14 = iVar7 - iStack_8;
  param_2[2] = 0;
  param_2[3] = 3;
  param_2[4] = 3;
  param_2[5] = 5;
  uVar4 = *(int *)((int)pvStack_10 + 0x1c) * 0x41c64e6d + 0x3039;
  *(uint *)((int)pvStack_10 + 0x1c) = uVar4;
  param_2 = (short *)param_3;
  iVar6 = (uVar4 >> 0x10) % 6 + 0x14;
  if (param_3 != 0x200) {
    if (param_3 != 0x400) {
      uVar4 = *(int *)((int)pvStack_10 + 0x1c) * 0x41c64e6d + 0x3039;
      *(uint *)((int)pvStack_10 + 0x1c) = uVar4;
      param_3 = (-(uint)((uVar4 & 0x10000) != 0) & 0x200) + 0x200;
    }
    param_2 = (short *)param_3;
    if ((short *)param_3 != (short *)0x200) {
      *psVar1 = ((short)iVar7 - (short)((iVar6 * (iStack_c - iVar5)) / iVar3)) + -1;
      sVar2 = ((short)iStack_18 - (short)((iVar6 * iStack_14) / iVar3)) + -1;
      goto LAB_0065eedf;
    }
  }
  *psVar1 = (short)((iVar6 * (iStack_c - iVar5)) / iVar3) + -1 + (short)iVar7;
  sVar2 = (short)((iVar6 * iStack_14) / iVar3) + -1 + (short)iStack_18;
LAB_0065eedf:
  psVar1[1] = sVar2;
  thunk_FUN_006756d0(psVar1,psVar1 + 1,psVar1 + 3,psVar1 + 4);
  return (int)param_2;
}

