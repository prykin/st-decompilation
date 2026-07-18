
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

byte * FUN_006f5430(byte *param_1,int param_2,uint *param_3,int param_4,int param_5,byte *param_6,
                   int param_7,int param_8,uint param_9,int param_10,byte *param_11,int param_12,
                   int param_13)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  uint *puVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  byte *pbVar11;
  
  DAT_00857034 = param_11;
  DAT_00856ff8 = param_13;
  _DAT_00857000 = 1;
LAB_006f545a:
  while( true ) {
    uVar8 = (uint)*param_6;
    param_6 = param_6 + 1;
    iVar9 = param_8;
    if (uVar8 != 0) break;
    param_1 = param_1 + param_2;
    param_3 = (uint *)((int)param_3 + param_4);
    iVar9 = param_10 + -1;
    bVar3 = param_10 < 1;
    param_10 = iVar9;
    if (iVar9 == 0 || bVar3) {
      return param_11;
    }
  }
  while( true ) {
    while( true ) {
      uVar10 = param_9;
      if ((uVar8 & 0x80) == 0) {
        do {
          if (iVar9 < (int)uVar8) {
            uVar8 = (uint)(byte)((char)uVar8 - (char)iVar9);
            goto LAB_006f55be;
          }
          iVar9 = iVar9 - uVar8;
          bVar1 = *param_6;
          uVar8 = (uint)bVar1;
          param_6 = param_6 + 1;
        } while ((bVar1 & 0x80) == 0);
      }
      if ((uVar8 & 0x40) == 0) break;
      uVar7 = uVar8 & 0xffffff3f;
      if (iVar9 < (int)uVar7) {
        uVar8 = (uint)(byte)((char)uVar7 - (char)iVar9);
        goto LAB_006f54e6;
      }
      uVar8 = (uint)param_6[1];
      param_6 = param_6 + 2;
      iVar9 = iVar9 - uVar7;
    }
    uVar7 = uVar8 & 0xffffff3f;
    if (iVar9 < (int)uVar7) break;
    uVar8 = (uint)param_6[uVar7];
    param_6 = param_6 + uVar7 + 1;
    iVar9 = iVar9 - uVar7;
  }
  param_6 = param_6 + iVar9;
  uVar8 = (uint)(byte)((char)uVar7 - (char)iVar9);
  while( true ) {
    uVar8 = uVar8 & 0x3f;
    if ((int)uVar10 < (int)uVar8) break;
    uVar10 = uVar10 - uVar8;
    pbVar11 = param_6;
    do {
      iVar9 = DAT_00856ff8;
      uVar7 = *(uint *)((int)param_3 + -2);
      uVar4 = uVar8;
      puVar5 = param_3;
      pbVar6 = pbVar11;
      while (uVar7 < (uint)(param_5 << 0x10)) {
        param_3 = (uint *)((int)puVar5 + 2);
        DAT_00857014 = pbVar6 + 1;
        param_11 = (byte *)(uint)*(byte *)(iVar9 + (uint)*DAT_00857034);
        *param_1 = *(byte *)(iVar9 + (uint)*DAT_00857034);
        DAT_00857034 = DAT_00857034 + 1;
        param_1 = param_1 + 1;
        pbVar11 = DAT_00857014;
        if (uVar4 - 1 == 0 || (int)uVar4 < 1) goto LAB_006f55d3;
        uVar7 = *puVar5;
        uVar4 = uVar4 - 1;
        puVar5 = param_3;
        pbVar6 = DAT_00857014;
      }
      param_11 = (byte *)CONCAT31((int3)((uint)param_11 >> 8),*pbVar6);
      pbVar11 = pbVar6 + 1;
      *param_1 = *pbVar6;
      param_3 = (uint *)((int)puVar5 + 2);
      DAT_00857034 = DAT_00857034 + 1;
      param_1 = param_1 + 1;
      uVar8 = uVar4 - 1;
    } while (uVar8 != 0 && 0 < (int)uVar4);
LAB_006f55d3:
    uVar8 = uVar10;
    param_6 = pbVar11;
    if ((int)uVar10 < 1) goto LAB_006f56d2;
    bVar1 = *pbVar11;
    uVar8 = (uint)bVar1;
    param_6 = pbVar11 + 1;
    if ((bVar1 & 0x80) == 0) {
LAB_006f55be:
      if ((int)uVar10 < (int)uVar8) {
        if (0 < (int)uVar10) {
          uVar8 = uVar8 - uVar10;
          param_1 = param_1 + uVar10;
          DAT_00857034 = DAT_00857034 + uVar10;
          param_3 = (uint *)((int)param_3 + uVar10 * 2);
        }
        goto LAB_006f56d2;
      }
      uVar10 = uVar10 - uVar8;
      param_1 = param_1 + uVar8;
      DAT_00857034 = DAT_00857034 + uVar8;
      param_3 = (uint *)((int)param_3 + uVar8 * 2);
      pbVar11 = param_6;
      goto LAB_006f55d3;
    }
    if ((bVar1 & 0x40) != 0) {
LAB_006f54e6:
      uVar8 = uVar8 & 0x3f;
      pbVar11 = param_6 + 1;
      bVar1 = *param_6;
      param_11 = (byte *)CONCAT31((int3)((uint)param_11 >> 8),bVar1);
      if ((int)uVar10 < (int)uVar8) {
        uVar8 = uVar8 | 0xc0;
        if ((int)uVar10 < 1) goto LAB_006f56d2;
        uVar8 = uVar8 - uVar10;
        goto LAB_006f55f7;
      }
      uVar10 = uVar10 - uVar8;
      do {
        iVar9 = DAT_00856ff8;
        uVar7 = *(uint *)((int)param_3 + -2);
        uVar4 = uVar8;
        puVar5 = param_3;
        while (uVar7 < (uint)(param_5 << 0x10)) {
          bVar2 = *DAT_00857034;
          DAT_00857034 = DAT_00857034 + 1;
          param_3 = (uint *)((int)puVar5 + 2);
          *param_1 = *(byte *)(iVar9 + (uint)bVar2);
          param_1 = param_1 + 1;
          if (uVar4 - 1 == 0 || (int)uVar4 < 1) goto LAB_006f55d3;
          uVar7 = *puVar5;
          uVar4 = uVar4 - 1;
          puVar5 = param_3;
        }
        *param_1 = bVar1;
        param_3 = (uint *)((int)puVar5 + 2);
        param_1 = param_1 + 1;
        DAT_00857034 = DAT_00857034 + 1;
        uVar8 = uVar4 - 1;
      } while (uVar8 != 0 && 0 < (int)uVar4);
      goto LAB_006f55d3;
    }
  }
  uVar8 = uVar8 | 0x80;
  if (0 < (int)uVar10) {
    uVar8 = uVar8 - uVar10;
    do {
      iVar9 = DAT_00856ff8;
      uVar7 = *(uint *)((int)param_3 + -2);
      uVar4 = uVar10;
      puVar5 = param_3;
      while (uVar7 < (uint)(param_5 << 0x10)) {
        param_3 = (uint *)((int)puVar5 + 2);
        DAT_00857014 = param_6 + 1;
        param_11 = (byte *)(uint)*(byte *)(iVar9 + (uint)*DAT_00857034);
        *param_1 = *(byte *)(iVar9 + (uint)*DAT_00857034);
        DAT_00857034 = DAT_00857034 + 1;
        param_1 = param_1 + 1;
        param_6 = DAT_00857014;
        if (uVar4 - 1 == 0 || (int)uVar4 < 1) goto LAB_006f56d2;
        uVar7 = *puVar5;
        uVar4 = uVar4 - 1;
        puVar5 = param_3;
      }
      bVar1 = *param_6;
      param_11 = (byte *)CONCAT31((int3)((uint)param_11 >> 8),bVar1);
      param_6 = param_6 + 1;
      *param_1 = bVar1;
      param_3 = (uint *)((int)puVar5 + 2);
      DAT_00857034 = DAT_00857034 + 1;
      param_1 = param_1 + 1;
      uVar10 = uVar4 - 1;
    } while (uVar10 != 0 && 0 < (int)uVar4);
  }
  goto LAB_006f56d2;
LAB_006f55f7:
  do {
    iVar9 = DAT_00856ff8;
    uVar7 = *(uint *)((int)param_3 + -2);
    puVar5 = param_3;
    uVar4 = uVar10;
    while (uVar7 < (uint)(param_5 << 0x10)) {
      bVar2 = *DAT_00857034;
      DAT_00857034 = DAT_00857034 + 1;
      param_3 = (uint *)((int)puVar5 + 2);
      *param_1 = *(byte *)(iVar9 + (uint)bVar2);
      param_1 = param_1 + 1;
      if (uVar4 - 1 == 0 || (int)uVar4 < 1) goto LAB_006f56d2;
      uVar7 = *puVar5;
      puVar5 = param_3;
      uVar4 = uVar4 - 1;
    }
    *param_1 = bVar1;
    param_3 = (uint *)((int)puVar5 + 2);
    param_1 = param_1 + 1;
    DAT_00857034 = DAT_00857034 + 1;
    uVar10 = uVar4 - 1;
  } while (uVar10 != 0 && 0 < (int)uVar4);
LAB_006f56d2:
  iVar9 = (param_7 - param_9) - param_8;
  while( true ) {
    while( true ) {
      pbVar11 = param_6;
      if ((uVar8 & 0x80) == 0) {
        do {
          if (iVar9 <= (int)uVar8) goto LAB_006f571d;
          iVar9 = iVar9 - uVar8;
          bVar1 = *param_6;
          uVar8 = (uint)bVar1;
          param_6 = param_6 + 1;
          pbVar11 = param_6;
        } while ((bVar1 & 0x80) == 0);
      }
      if ((uVar8 & 0x40) == 0) break;
      param_6 = pbVar11 + 1;
      if (iVar9 <= (int)(uVar8 & 0xffffff3f)) goto LAB_006f571d;
      iVar9 = iVar9 - (uVar8 & 0xffffff3f);
      uVar8 = (uint)*param_6;
      param_6 = pbVar11 + 2;
    }
    uVar10 = uVar8 & 0xffffff3f;
    if (iVar9 <= (int)uVar10) break;
    iVar9 = iVar9 - uVar10;
    uVar8 = (uint)pbVar11[uVar10];
    param_6 = pbVar11 + uVar10 + 1;
  }
  param_6 = pbVar11 + uVar10;
LAB_006f571d:
  DAT_00857034 = DAT_00857034 + (param_12 - param_9);
  param_3 = (uint *)((int)param_3 + param_9 * -2 + param_4);
  param_1 = param_1 + (param_2 - param_9);
  iVar9 = param_10 + -1;
  bVar3 = param_10 < 1;
  param_10 = iVar9;
  if (iVar9 == 0 || bVar3) {
    return param_11;
  }
  goto LAB_006f545a;
}

