
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint FUN_006f5920(byte *param_1,int param_2,uint *param_3,int param_4,int param_5,byte *param_6,
                 int param_7,int param_8,uint param_9,byte *param_10,int param_11,int param_12)

{
  uint uVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  byte *pbVar10;
  byte *pbVar11;
  int iStack_18;

  DAT_0085701c = param_9;
  DAT_00857024 = param_10;
  DAT_00857020 = param_12;
  uVar7 = param_5 << 0x10;
  puVar8 = param_3;
  if (DAT_00857000 != '\0') goto LAB_006f5a54;
  do {
    uVar4 = (uint)*param_6;
    param_6 = param_6 + 1;
    iStack_18 = param_7;
    if (uVar4 == 0) {
      param_1 = param_1 + param_2;
      DAT_00857024 = DAT_00857024 + param_11;
      param_3 = (uint *)((int)param_3 + param_4);
    }
    else {
      while( true ) {
        uVar6 = DAT_0085701c;
        iVar9 = iStack_18;
        pbVar10 = param_6;
        if ((uVar4 & 0x80) == 0) {
          do {
            param_1 = param_1 + uVar4;
            DAT_00857024 = DAT_00857024 + uVar4;
            param_3 = (uint *)((int)param_3 + uVar4 * 2);
            iStack_18 = iVar9 - uVar4;
            if (iStack_18 == 0 || iVar9 < (int)uVar4) goto LAB_006f5a0d;
            bVar2 = *param_6;
            uVar4 = (uint)bVar2;
            param_6 = param_6 + 1;
            iVar9 = iStack_18;
            pbVar10 = param_6;
          } while ((bVar2 & 0x80) == 0);
        }
        if ((uVar4 & 0x40) == 0) {
          iStack_18 = iStack_18 - (uVar4 & 0x3f);
          uVar4 = uVar4 & 0x3f;
          pbVar11 = param_1;
          do {
            if (*(uint *)((int)param_3 + -2) < uVar7) {
              DAT_00857000 = '\x01';
              iVar9 = DAT_00857020;
              goto LAB_006f5b32;
            }
            bVar2 = *pbVar10;
            param_3 = (uint *)((int)param_3 + 2);
            param_1 = pbVar11 + 1;
            pbVar10 = pbVar10 + 1;
            DAT_00857024 = DAT_00857024 + 1;
            param_9 = (uint)*(byte *)(uVar6 + bVar2);
            uVar5 = uVar4 - 1;
            *pbVar11 = *(byte *)(uVar6 + bVar2);
            bVar3 = 0 < (int)uVar4;
            uVar4 = uVar5;
            param_6 = pbVar10;
            pbVar11 = param_1;
          } while (uVar5 != 0 && bVar3);
        }
        else {
          param_6 = pbVar10 + 1;
          iStack_18 = iStack_18 - (uVar4 & 0x3f);
          bVar2 = *(byte *)(*pbVar10 + DAT_0085701c);
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          param_9 = CONCAT31((int3)(*pbVar10 + DAT_0085701c >> 8),bVar2);
          uVar6 = uVar4 & 0x3f;
          do {
            if (*(uint *)((int)param_3 + -2) < uVar7) {
              DAT_00857000 = '\x01';
              iVar9 = DAT_00857020;
              pbVar10 = param_6;
              goto cf_continue_loop_006F5AC4;
            }
            *param_1 = bVar2;
            DAT_00857024 = DAT_00857024 + 1;
            param_1 = param_1 + 1;
            param_3 = (uint *)((int)param_3 + 2);
            uVar4 = uVar6 - 1;
            bVar3 = 0 < (int)uVar6;
            uVar6 = uVar4;
          } while (uVar4 != 0 && bVar3);
        }
        if (iStack_18 < 1) break;
        uVar4 = (uint)*param_6;
        param_6 = param_6 + 1;
      }
LAB_006f5a0d:
      param_1 = param_1 + (param_2 - param_7);
      DAT_00857024 = DAT_00857024 + (param_11 - param_7);
      param_3 = (uint *)((int)param_3 + param_7 * -2 + param_4);
    }
    iVar9 = param_8 + -1;
    bVar3 = param_8 < 1;
    param_8 = iVar9;
    if (iVar9 == 0 || bVar3) {
      return param_9;
    }
  } while( true );
cf_continue_loop_006F5AC4:
  do {
    bVar2 = *DAT_00857024;
    DAT_00857024 = DAT_00857024 + 1;
    puVar8 = (uint *)((int)param_3 + 2);
    *param_1 = *(byte *)(iVar9 + (uint)bVar2);
    param_1 = param_1 + 1;
    uVar4 = uVar6 - 1;
    param_6 = pbVar10;
    if (uVar4 == 0 || (int)uVar6 < 1) goto LAB_006f5b70;
    uVar5 = *param_3;
    uVar6 = uVar4;
    param_3 = puVar8;
  } while (uVar5 < uVar7);
  do {
    *param_1 = (byte)param_9;
    param_1 = param_1 + 1;
    DAT_00857024 = DAT_00857024 + 1;
    puVar8 = (uint *)((int)puVar8 + 2);
    uVar6 = uVar4 - 1;
    param_3 = puVar8;
    param_6 = pbVar10;
    if (uVar6 == 0 || (int)uVar4 < 1) {
LAB_006f5b70:
      if (iStack_18 < 1) goto LAB_006f5b7e;
      uVar6 = (uint)*param_6;
      param_6 = param_6 + 1;
      while (iVar9 = iStack_18, (uVar6 & 0x80) == 0) {
        while( true ) {
          param_1 = param_1 + uVar6;
          DAT_00857024 = DAT_00857024 + uVar6;
          puVar8 = (uint *)((int)puVar8 + uVar6 * 2);
          iStack_18 = iVar9 - uVar6;
          if (iStack_18 == 0 || iVar9 < (int)uVar6) break;
          bVar2 = *param_6;
          uVar6 = (uint)bVar2;
          param_6 = param_6 + 1;
          iVar9 = iStack_18;
          if ((bVar2 & 0x80) != 0) goto LAB_006f5a87;
        }
LAB_006f5b7e:
        DAT_00857024 = DAT_00857024 + (param_11 - param_7);
        param_1 = param_1 + (param_2 - param_7);
        puVar8 = (uint *)((int)puVar8 + param_7 * -2 + param_4);
        while( true ) {
          iVar9 = param_8 + -1;
          bVar3 = param_8 < 1;
          param_8 = iVar9;
          if (iVar9 == 0 || bVar3) {
            return param_9;
          }
LAB_006f5a54:
          uVar6 = (uint)*param_6;
          param_6 = param_6 + 1;
          iStack_18 = param_7;
          if (uVar6 != 0) break;
          param_1 = param_1 + param_2;
          DAT_00857024 = DAT_00857024 + param_11;
          puVar8 = (uint *)((int)puVar8 + param_4);
        }
      }
LAB_006f5a87:
      if ((uVar6 & 0x40) == 0) {
        uVar6 = uVar6 & 0x3f;
        iStack_18 = iStack_18 - uVar6;
        uVar5 = DAT_0085701c;
        do {
          uVar1 = *(uint *)((int)puVar8 + -2);
          uVar4 = uVar6;
          param_3 = puVar8;
          pbVar11 = param_1;
          iVar9 = DAT_00857020;
          while (pbVar10 = param_6, uVar1 < uVar7) {
LAB_006f5b32:
            DAT_00857018 = pbVar10;
            puVar8 = (uint *)((int)param_3 + 2);
            DAT_00857018 = DAT_00857018 + 1;
            param_9 = (uint)*(byte *)(iVar9 + (uint)*DAT_00857024);
            *pbVar11 = *(byte *)(iVar9 + (uint)*DAT_00857024);
            DAT_00857024 = DAT_00857024 + 1;
            param_1 = pbVar11 + 1;
            param_6 = DAT_00857018;
            if (uVar4 - 1 == 0 || (int)uVar4 < 1) goto LAB_006f5b70;
            uVar1 = *param_3;
            uVar4 = uVar4 - 1;
            param_3 = puVar8;
            uVar5 = DAT_0085701c;
            pbVar11 = param_1;
          }
          bVar2 = *param_6;
          param_1 = pbVar11 + 1;
          param_6 = param_6 + 1;
          DAT_00857024 = DAT_00857024 + 1;
          puVar8 = (uint *)((int)param_3 + 2);
          param_9 = (uint)*(byte *)(uVar5 + bVar2);
          uVar6 = uVar4 - 1;
          *pbVar11 = *(byte *)(uVar5 + bVar2);
        } while (uVar6 != 0 && 0 < (int)uVar4);
        goto LAB_006f5b70;
      }
      uVar6 = uVar6 & 0x3f;
      pbVar10 = param_6 + 1;
      iStack_18 = iStack_18 - uVar6;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      param_9 = CONCAT31((int3)(*param_6 + DAT_0085701c >> 8),
                         *(undefined1 *)(*param_6 + DAT_0085701c));
      param_3 = puVar8;
    }
    uVar4 = uVar6;
    puVar8 = param_3;
    iVar9 = DAT_00857020;
  } while (uVar7 <= *(uint *)((int)param_3 + -2));
  goto cf_continue_loop_006F5AC4;
}

