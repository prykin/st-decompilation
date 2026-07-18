
undefined4 FUN_00758df0(undefined4 *param_1)

{
  undefined1 uVar1;
  byte bVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  ushort uVar9;
  int iVar10;
  undefined1 *puVar11;
  byte *pbVar12;
  int *local_10;
  
  puVar3 = (undefined4 *)param_1[4];
  iVar6 = puVar3[1];
  puVar11 = (undefined1 *)*puVar3;
  if (iVar6 == 0) {
    iVar6 = (*(code *)puVar3[3])(param_1);
    if (iVar6 == 0) {
      return 0;
    }
    puVar11 = (undefined1 *)*puVar3;
    iVar6 = puVar3[1];
  }
  iVar6 = iVar6 + -1;
  uVar1 = *puVar11;
  puVar11 = puVar11 + 1;
  if (iVar6 == 0) {
    iVar6 = (*(code *)puVar3[3])(param_1);
    if (iVar6 == 0) {
      return 0;
    }
    puVar11 = (undefined1 *)*puVar3;
    iVar6 = puVar3[1];
  }
  iVar6 = iVar6 + -1;
  pbVar12 = puVar11 + 1;
  iVar4 = CONCAT11(uVar1,*puVar11) - 2;
  do {
    iVar5 = iVar4;
    if (iVar5 < 1) {
      puVar3[1] = iVar6;
      *puVar3 = pbVar12;
      return 1;
    }
    if (iVar6 == 0) {
      iVar6 = (*(code *)puVar3[3])(param_1);
      if (iVar6 == 0) {
        return 0;
      }
      pbVar12 = (byte *)*puVar3;
      iVar6 = puVar3[1];
    }
    iVar6 = iVar6 + -1;
    bVar2 = *pbVar12;
    pbVar12 = pbVar12 + 1;
    uVar7 = bVar2 & 0xf;
    iVar10 = (int)(uint)bVar2 >> 4;
    if (3 < uVar7) {
      FUN_006a5e40(0x1e,DAT_007ed77c,0x7f2db0,0x23b);
    }
    if (param_1[uVar7 + 0x27] == 0) {
      uVar8 = FUN_00759e30(param_1);
      param_1[uVar7 + 0x27] = uVar8;
    }
    iVar4 = param_1[uVar7 + 0x27];
    local_10 = &DAT_007a1e94;
    do {
      if (iVar10 == 0) {
        if (iVar6 == 0) {
          iVar6 = (*(code *)puVar3[3])(param_1);
          if (iVar6 == 0) {
            return 0;
          }
          pbVar12 = (byte *)*puVar3;
          iVar6 = puVar3[1];
        }
        uVar9 = (ushort)*pbVar12;
      }
      else {
        if (iVar6 == 0) {
          iVar6 = (*(code *)puVar3[3])(param_1);
          if (iVar6 == 0) {
            return 0;
          }
          pbVar12 = (byte *)*puVar3;
          iVar6 = puVar3[1];
        }
        iVar6 = iVar6 + -1;
        bVar2 = *pbVar12;
        pbVar12 = pbVar12 + 1;
        if (iVar6 == 0) {
          iVar6 = (*(code *)puVar3[3])(param_1);
          if (iVar6 == 0) {
            return 0;
          }
          pbVar12 = (byte *)*puVar3;
          iVar6 = puVar3[1];
        }
        uVar9 = (ushort)bVar2 * 0x100 + (ushort)*pbVar12;
      }
      iVar6 = iVar6 + -1;
      pbVar12 = pbVar12 + 1;
      *(ushort *)(iVar4 + *local_10 * 2) = uVar9;
      local_10 = local_10 + 1;
    } while ((int)local_10 < 0x7a1f94);
    iVar4 = iVar5 + -0x41;
    if (iVar10 != 0) {
      iVar4 = iVar5 + -0x81;
    }
  } while( true );
}

