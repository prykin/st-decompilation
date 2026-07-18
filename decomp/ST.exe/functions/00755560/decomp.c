
uint FUN_00755560(uint param_1,ushort *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int *piVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  DWORD DVar7;
  uint *puVar8;
  uint uVar9;
  ushort *puVar10;
  uint uVar11;
  undefined4 *puVar12;
  int iVar13;
  int iVar14;
  
  uVar4 = param_1;
  bVar3 = false;
  iVar5 = *(int *)(*(int *)(param_1 + 8) + 0x50);
  *(int *)(param_1 + 0xc) = iVar5;
  if (*(short *)(iVar5 + 0x34) == 0) {
    uVar11 = (**(code **)(iVar5 + 8))(param_2);
  }
  else {
    uVar11 = (uint)*(short *)(iVar5 + 0x34);
  }
  uVar1 = uVar11 + 8;
  if (*(int *)(param_1 + 0x24) < (int)uVar1) {
    iVar5 = FUN_006bfb50(*(undefined4 **)(param_1 + 0x1c),uVar1);
    *(int *)(param_1 + 0x1c) = iVar5;
    if (iVar5 == 0) {
      return 0xfffffffe;
    }
    *(uint *)(param_1 + 0x24) = uVar1;
  }
  **(undefined4 **)(param_1 + 0x1c) = param_4;
  *(undefined4 *)(*(int *)(param_1 + 0x1c) + 4) = param_3;
  puVar10 = param_2;
  puVar12 = (undefined4 *)(*(int *)(param_1 + 0x1c) + 8);
  for (uVar9 = uVar11 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *puVar12 = *(undefined4 *)puVar10;
    puVar10 = puVar10 + 2;
    puVar12 = puVar12 + 1;
  }
  for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
    *(char *)puVar12 = (char)*puVar10;
    puVar10 = (ushort *)((int)puVar10 + 1);
    puVar12 = (undefined4 *)((int)puVar12 + 1);
  }
  puVar8 = (uint *)(*(int *)(param_1 + 8) + 8);
  *puVar8 = *puVar8 | 0x10;
  param_1 = uVar1;
  while( true ) {
    iVar13 = *(int *)(*(int *)(uVar4 + 8) + 0x34) + *(int *)(uVar4 + 0x10);
    iVar5 = *(int *)(uVar4 + 0xc);
    iVar6 = *(int *)(iVar5 + 0x44 + *(int *)(iVar5 + 0x1c) * 8);
    if (iVar6 < 0) {
      *(undefined4 *)(iVar5 + 0x44 + *(int *)(iVar5 + 0x1c) * 8) = 0;
    }
    else {
      if (*(short *)(iVar5 + 0x34) == 0) {
        iVar5 = (**(code **)(iVar5 + 8))(iVar6 + 0x18 + iVar13);
      }
      else {
        iVar5 = (int)*(short *)(iVar5 + 0x34);
      }
      piVar2 = (int *)(*(int *)(uVar4 + 0xc) + 0x44 + *(int *)(*(int *)(uVar4 + 0xc) + 0x1c) * 8);
      *piVar2 = *piVar2 + iVar5 + 8;
    }
    if ((int)((int)*(short *)(iVar13 + 8) + param_1) <=
        *(short *)(*(int *)(uVar4 + 8) + 0x16) + -0x10) {
      uVar11 = FUN_00755830(uVar4,*(uint **)(uVar4 + 0x1c),*(int *)(*(int *)(uVar4 + 0xc) + 0x1c));
      if (uVar11 != 0) {
        return uVar11;
      }
      if (bVar3) goto LAB_007557fa;
      goto LAB_0075580a;
    }
    bVar3 = true;
    iVar5 = *(int *)(*(int *)(uVar4 + 0xc) + 0x44 + *(int *)(*(int *)(uVar4 + 0xc) + 0x1c) * 8);
    iVar6 = FUN_00753c80(uVar4,(*(short *)(iVar13 + 8) >> 1) + 4);
    if (iVar5 == iVar6) {
      param_1 = FUN_00757530(uVar4,0,*(undefined4 **)(uVar4 + 0x1c));
      if (param_1 == 0) {
        return 0xfffffffe;
      }
    }
    else {
      param_1 = FUN_00757530(uVar4,0,(undefined4 *)(iVar6 + 0x10 + iVar13));
      if (param_1 == 0) {
        return 0xfffffffe;
      }
      FUN_0072da70((undefined4 *)(iVar6 + 0x10 + iVar13),
                   (undefined4 *)(param_1 + iVar6 + 0x10 + iVar13),
                   ((int)*(short *)(iVar13 + 8) - param_1) - iVar6);
      *(short *)(iVar13 + 8) = *(short *)(iVar13 + 8) - (short)param_1;
    }
    uVar11 = FUN_00753b40(uVar4);
    if ((int)uVar11 < 0) {
      return uVar11;
    }
    DVar7 = FUN_006d4c50(*(int *)(uVar4 + 8),uVar11,(int)*(short *)(*(int *)(uVar4 + 8) + 0x16));
    if (DVar7 != 0) {
      return DVar7;
    }
    iVar13 = *(int *)(*(int *)(uVar4 + 8) + 0x34);
    iVar14 = *(int *)(uVar4 + 0x10) + iVar13;
    puVar8 = (uint *)(iVar13 + uVar11);
    FUN_0072da70(puVar8 + 4,(undefined4 *)(iVar6 + 0x10 + iVar14),*(short *)(iVar14 + 8) - iVar6);
    *puVar8 = uVar11;
    *(short *)(puVar8 + 2) = *(short *)(iVar14 + 8) - (short)iVar6;
    puVar8[1] = **(uint **)(uVar4 + 0x18);
    *(short *)(iVar14 + 8) = (short)iVar6;
    **(uint **)(uVar4 + 0x18) = *puVar8;
    if (iVar5 < iVar6) {
      FUN_007574c0(uVar4,iVar14,*(undefined4 **)(uVar4 + 0x1c),iVar5);
    }
    else if (iVar6 < iVar5) {
      FUN_007574c0(uVar4,(int)puVar8,*(undefined4 **)(uVar4 + 0x1c),(iVar5 - param_1) - iVar6);
      *(undefined4 *)(*(int *)(uVar4 + 0xc) + 0x40 + *(int *)(*(int *)(uVar4 + 0xc) + 0x1c) * 8) =
           **(undefined4 **)(uVar4 + 0x18);
      iVar5 = *(int *)(uVar4 + 0xc);
      *(int *)(iVar5 + 0x44 + *(int *)(iVar5 + 0x1c) * 8) =
           *(int *)(iVar5 + 0x44 + *(int *)(iVar5 + 0x1c) * 8) - iVar6;
    }
    param_1 = FUN_00757530(uVar4,1,*(undefined4 **)(uVar4 + 0x18));
    if (param_1 == 0) {
      return 0xfffffffe;
    }
    *(int *)(*(int *)(uVar4 + 0xc) + 0x1c) = *(int *)(*(int *)(uVar4 + 0xc) + 0x1c) + -1;
    iVar5 = *(int *)(*(int *)(uVar4 + 0xc) + 0x1c);
    if (iVar5 < 0) break;
    FUN_00753b80(uVar4,*(undefined4 *)(*(int *)(uVar4 + 0xc) + 0x40 + iVar5 * 8),iVar5);
  }
  uVar11 = FUN_00755830(uVar4,*(uint **)(uVar4 + 0x18),*(int *)(*(int *)(uVar4 + 0xc) + 0x1c));
  if (uVar11 == 0) {
LAB_007557fa:
    uVar11 = FUN_00755970(uVar4,param_2,0);
    if (-1 < (int)uVar11) {
LAB_0075580a:
      uVar11 = 0;
    }
  }
  return uVar11;
}

