
void FUN_006b5110(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8,int param_9,int param_10,byte param_11)

{
  short sVar1;
  LONG LVar2;
  LONG LVar3;
  BOOL BVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  undefined4 uVar13;
  uint local_438 [128];
  ushort local_238 [256];
  RECT local_38;
  RECT local_28;
  tagRECT local_18;
  int local_8;
  
  if (param_9 < 1) {
    return;
  }
  if (param_10 < 1) {
    return;
  }
  if (*(short *)(param_5 + 0xe) == 8) {
    if (param_2 == 0) {
      param_2 = FUN_006b4fa0(param_1);
    }
    if (param_6 == 0) {
      param_6 = FUN_006b4fa0(param_5);
    }
    local_28.right = *(int *)(param_1 + 4);
    local_28.bottom = *(int *)(param_1 + 8);
    uVar9 = (uint)*(ushort *)(param_1 + 0xe) * local_28.right + 0x1f >> 3 & 0x1ffffffc;
    if (local_28.bottom < 0) {
      uVar9 = -uVar9;
      local_28.bottom = -local_28.bottom;
    }
    local_38.bottom = param_10 + param_4;
    local_38.left = param_3;
    local_38.right = param_3 + param_9;
    local_28.top = 0;
    local_28.left = 0;
    local_38.top = param_4;
    local_8 = local_28.bottom;
    BVar4 = IntersectRect(&local_18,&local_38,&local_28);
    LVar3 = local_18.top;
    LVar2 = local_18.left;
    if (BVar4 == 0) {
      return;
    }
    iVar7 = param_7 + (local_18.left - param_3);
    iVar10 = param_8 + (local_18.top - param_4);
    local_28.right = *(int *)(param_5 + 4);
    iVar5 = *(int *)(param_5 + 8);
    local_38.bottom = (local_18.bottom - local_18.top) + iVar10;
    local_38.right = (local_18.right - local_18.left) + iVar7;
    local_28.top = 0;
    local_28.left = 0;
    uVar11 = (uint)*(ushort *)(param_5 + 0xe) * local_28.right + 0x1f >> 3 & 0x1ffffffc;
    local_38.left = iVar7;
    local_38.top = iVar10;
    local_28.bottom = iVar5;
    BVar4 = IntersectRect(&local_18,&local_38,&local_28);
    if (BVar4 == 0) {
      return;
    }
    iVar12 = LVar2 + (local_18.left - iVar7);
    iVar10 = LVar3 + (local_18.top - iVar10);
    iVar7 = local_18.right - local_18.left;
    iVar8 = local_18.bottom - local_18.top;
    if ((int)uVar9 < 0) {
      param_4 = -((iVar10 + -1 + iVar8) * uVar9);
    }
    else {
      param_4 = ((local_8 - iVar10) - iVar8) * uVar9;
    }
    iVar5 = ((iVar5 - local_18.top) - iVar8) * uVar11 + local_18.left;
    sVar1 = *(short *)(param_1 + 0xe);
    if (sVar1 == 8) {
      FUN_006cebe0((char *)(param_4 + param_2 + iVar12),uVar9,(char *)(iVar5 + param_6),uVar11,iVar7
                   ,iVar8,param_11);
      return;
    }
    if (sVar1 == 0x10) {
      if (*(int *)(param_1 + 0x10) == 3) {
        puVar6 = (uint *)(param_1 + 0x28);
      }
      else {
        puVar6 = (uint *)0x0;
      }
      iVar10 = FUN_006b4fe0(param_5);
      FUN_006d14c0(local_238,param_5 + 0x28,iVar10,puVar6);
      FUN_006d13c0((uint *)(param_4 + iVar12 * 2 + param_2),uVar9,(byte *)(iVar5 + param_6),uVar11,
                   iVar7,iVar8,(int)local_238,param_11);
      return;
    }
    if (sVar1 == 0x18) {
      FUN_006d1350((undefined2 *)(param_4 + iVar12 * 3 + param_2),uVar9,(byte *)(iVar5 + param_6),
                   uVar11,param_5 + 0x28,iVar7,iVar8,param_11);
      return;
    }
    if (sVar1 == 0x20) {
      if (*(int *)(param_1 + 0x10) == 3) {
        puVar6 = (uint *)(param_1 + 0x28);
      }
      else {
        puVar6 = (uint *)0x0;
      }
      iVar10 = FUN_006b4fe0(param_5);
      FUN_006d1250(local_438,param_5 + 0x28,iVar10,puVar6);
      FUN_006d11f0((undefined4 *)(param_4 + iVar12 * 4 + param_2),uVar9,(byte *)(iVar5 + param_6),
                   uVar11,iVar7,iVar8,(int)local_438,param_11);
      return;
    }
    uVar13 = 0x85;
  }
  else {
    uVar13 = 0x1d;
  }
  FUN_006a5e40(-0x30,DAT_007ed77c,0x7edb38,uVar13);
  return;
}

