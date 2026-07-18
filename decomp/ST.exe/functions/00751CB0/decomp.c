
undefined4 *
FUN_00751cb0(undefined4 *param_1,ushort *param_2,undefined4 *param_3,ushort *param_4,int param_5,
            int param_6)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  
  puVar2 = param_3;
  if (param_4 == (ushort *)0x0) {
    param_4 = (ushort *)FUN_006b4fa0((int)param_3);
  }
  uVar8 = (uint)*(ushort *)((int)param_3 + 0xe);
  if (param_1 == (undefined4 *)0x0) {
    uVar3 = FUN_006b5010((int)param_3);
    uVar3 = uVar3 >> 2;
    puVar4 = FUN_006d10f0(param_5,param_6,uVar8,uVar3,1);
    if (puVar4 == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
    param_2 = (ushort *)FUN_006b4fa0((int)puVar4);
    if (uVar3 != 0) {
      puVar7 = param_3 + 10;
      puVar9 = puVar4 + 10;
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 1;
      }
    }
  }
  else {
    if (param_2 == (ushort *)0x0) {
      param_2 = (ushort *)FUN_006b4fa0((int)param_1);
    }
    param_5 = param_1[1];
    param_6 = param_1[2];
    param_3 = param_1;
    puVar4 = param_3;
  }
  param_3 = puVar4;
  iVar1 = puVar2[1];
  uVar3 = puVar2[2];
  uVar5 = uVar8 * param_5 + 0x1f >> 3 & 0x1ffffffc;
  uVar6 = (uint)*(ushort *)((int)puVar2 + 0xe) * iVar1 + 0x1f >> 3 & 0x1ffffffc;
  if (uVar8 == 8) {
    if ((param_5 == iVar1 * 2) && (param_6 == uVar3 * 2)) {
      FUN_006db450((undefined4 *)param_2,uVar5,param_4,uVar6,iVar1,uVar3);
      return param_3;
    }
    FUN_006db310((undefined4 *)((param_6 + -1) * uVar5 + (int)param_2),-uVar5,param_5,param_6,
                 (int)((uVar3 - 1) * uVar6 + (int)param_4),-uVar6,iVar1,uVar3);
    return param_3;
  }
  if (uVar8 != 0x10) {
    FUN_006a5e40(-0x30,DAT_007ed77c,0x7f2b30,0x4c);
    return (undefined4 *)0x0;
  }
  if ((param_5 == iVar1 * 2) && (param_6 == uVar3 * 2)) {
    FUN_006dafd0(param_2,uVar5,param_4,uVar6,iVar1,uVar3);
    return param_3;
  }
  FUN_006daed0((undefined4 *)((param_6 + -1) * uVar5 + (int)param_2),-uVar5,param_5,param_6,
               (int)((uVar3 - 1) * uVar6 + (int)param_4),-uVar6,iVar1,uVar3);
  return param_3;
}

