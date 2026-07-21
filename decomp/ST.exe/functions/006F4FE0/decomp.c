
/* WARNING: Restarted to delay deadcode elimination for space: stack */

byte * FUN_006f4fe0(byte *param_1,int param_2,uint *param_3,int param_4,int param_5,byte *param_6,
                   int param_7,int param_8,byte *param_9,int param_10,int param_11)

{
  uint uVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;

  DAT_00856fe0 = param_9;
  DAT_00857010 = param_11;
  uVar6 = param_5 << 0x10;
  puVar7 = param_3;
  if (DAT_00857000 != '\0') goto LAB_006f50eb;
  do {
    uVar4 = (uint)*param_6;
    param_6 = param_6 + 1;
    iVar9 = param_7;
    if (uVar4 == 0) {
      param_1 = param_1 + param_2;
      DAT_00856fe0 = DAT_00856fe0 + param_10;
      param_3 = (uint *)((int)param_3 + param_4);
    }
    else {
      while( true ) {
        iVar8 = iVar9;
        pbVar10 = param_6;
        if ((uVar4 & 0x80) == 0) {
          do {
            param_1 = param_1 + uVar4;
            DAT_00856fe0 = DAT_00856fe0 + uVar4;
            param_3 = (uint *)((int)param_3 + uVar4 * 2);
            iVar9 = iVar8 - uVar4;
            if (iVar9 == 0 || iVar8 < (int)uVar4) goto LAB_006f50a4;
            bVar2 = *param_6;
            uVar4 = (uint)bVar2;
            param_6 = param_6 + 1;
            iVar8 = iVar9;
            pbVar10 = param_6;
          } while ((bVar2 & 0x80) == 0);
        }
        if ((uVar4 & 0x40) == 0) {
          iVar9 = iVar9 - (uVar4 & 0x3f);
          uVar4 = uVar4 & 0x3f;
          do {
            if (*(uint *)((int)param_3 + -2) < uVar6) {
              DAT_00857000 = '\x01';
              iVar8 = DAT_00857010;
              goto LAB_006f51af;
            }
            bVar2 = *pbVar10;
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            param_9 = (byte *)CONCAT31((int3)((uint)param_9 >> 8),bVar2);
            pbVar10 = pbVar10 + 1;
            *param_1 = bVar2;
            param_3 = (uint *)((int)param_3 + 2);
            param_1 = param_1 + 1;
            DAT_00856fe0 = DAT_00856fe0 + 1;
            uVar5 = uVar4 - 1;
            bVar3 = 0 < (int)uVar4;
            uVar4 = uVar5;
            param_6 = pbVar10;
          } while (uVar5 != 0 && bVar3);
        }
        else {
          param_6 = pbVar10 + 1;
          bVar2 = *pbVar10;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          param_9 = (byte *)CONCAT31((int3)((uint)param_9 >> 8),bVar2);
          iVar9 = iVar9 - (uVar4 & 0x3f);
          uVar5 = uVar4 & 0x3f;
          do {
            if (*(uint *)((int)param_3 + -2) < uVar6) {
              DAT_00857000 = '\x01';
              iVar8 = DAT_00857010;
              pbVar10 = param_6;
              goto cf_continue_loop_006F5151;
            }
            *param_1 = bVar2;
            param_3 = (uint *)((int)param_3 + 2);
            param_1 = param_1 + 1;
            DAT_00856fe0 = DAT_00856fe0 + 1;
            uVar4 = uVar5 - 1;
            bVar3 = 0 < (int)uVar5;
            uVar5 = uVar4;
          } while (uVar4 != 0 && bVar3);
        }
        if (iVar9 < 1) break;
        uVar4 = (uint)*param_6;
        param_6 = param_6 + 1;
      }
LAB_006f50a4:
      param_1 = param_1 + (param_2 - param_7);
      DAT_00856fe0 = DAT_00856fe0 + (param_10 - param_7);
      param_3 = (uint *)((int)param_3 + param_7 * -2 + param_4);
    }
    iVar9 = param_8 + -1;
    bVar3 = param_8 < 1;
    param_8 = iVar9;
    if (iVar9 == 0 || bVar3) {
      return param_9;
    }
  } while( true );
cf_continue_loop_006F5151:
  do {
    bVar2 = *DAT_00856fe0;
    DAT_00856fe0 = DAT_00856fe0 + 1;
    puVar7 = (uint *)((int)param_3 + 2);
    *param_1 = *(byte *)(iVar8 + (uint)bVar2);
    param_1 = param_1 + 1;
    uVar4 = uVar5 - 1;
    param_6 = pbVar10;
    if (uVar4 == 0 || (int)uVar5 < 1) goto LAB_006f51e8;
    uVar1 = *param_3;
    uVar5 = uVar4;
    param_3 = puVar7;
  } while (uVar1 < uVar6);
  do {
    *param_1 = (byte)param_9;
    puVar7 = (uint *)((int)puVar7 + 2);
    param_1 = param_1 + 1;
    DAT_00856fe0 = DAT_00856fe0 + 1;
    uVar5 = uVar4 - 1;
    param_3 = puVar7;
    param_6 = pbVar10;
    if (uVar5 == 0 || (int)uVar4 < 1) {
LAB_006f51e8:
      if (iVar9 < 1) goto LAB_006f51f6;
      uVar5 = (uint)*param_6;
      param_6 = param_6 + 1;
      while (iVar8 = iVar9, (uVar5 & 0x80) == 0) {
        while( true ) {
          param_1 = param_1 + uVar5;
          DAT_00856fe0 = DAT_00856fe0 + uVar5;
          puVar7 = (uint *)((int)puVar7 + uVar5 * 2);
          iVar9 = iVar8 - uVar5;
          if (iVar9 == 0 || iVar8 < (int)uVar5) break;
          bVar2 = *param_6;
          uVar5 = (uint)bVar2;
          param_6 = param_6 + 1;
          iVar8 = iVar9;
          if ((bVar2 & 0x80) != 0) goto LAB_006f511e;
        }
LAB_006f51f6:
        param_1 = param_1 + (param_2 - param_7);
        DAT_00856fe0 = DAT_00856fe0 + (param_10 - param_7);
        puVar7 = (uint *)((int)puVar7 + param_7 * -2 + param_4);
        while( true ) {
          iVar9 = param_8 + -1;
          bVar3 = param_8 < 1;
          param_8 = iVar9;
          if (iVar9 == 0 || bVar3) {
            return param_9;
          }
LAB_006f50eb:
          uVar5 = (uint)*param_6;
          param_6 = param_6 + 1;
          iVar9 = param_7;
          if (uVar5 != 0) break;
          param_1 = param_1 + param_2;
          DAT_00856fe0 = DAT_00856fe0 + param_10;
          puVar7 = (uint *)((int)puVar7 + param_4);
        }
      }
LAB_006f511e:
      if ((uVar5 & 0x40) == 0) {
        uVar5 = uVar5 & 0x3f;
        iVar9 = iVar9 - uVar5;
        do {
          uVar1 = *(uint *)((int)puVar7 + -2);
          uVar4 = uVar5;
          param_3 = puVar7;
          iVar8 = DAT_00857010;
          while (pbVar10 = param_6, uVar1 < uVar6) {
LAB_006f51af:
            DAT_00856ffc = pbVar10;
            puVar7 = (uint *)((int)param_3 + 2);
            DAT_00856ffc = DAT_00856ffc + 1;
            param_9 = (byte *)(uint)*(byte *)(iVar8 + (uint)*DAT_00856fe0);
            *param_1 = *(byte *)(iVar8 + (uint)*DAT_00856fe0);
            DAT_00856fe0 = DAT_00856fe0 + 1;
            param_1 = param_1 + 1;
            param_6 = DAT_00856ffc;
            if (uVar4 - 1 == 0 || (int)uVar4 < 1) goto LAB_006f51e8;
            uVar1 = *param_3;
            uVar4 = uVar4 - 1;
            param_3 = puVar7;
          }
          bVar2 = *param_6;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          param_9 = (byte *)CONCAT31((int3)((uint)param_9 >> 8),bVar2);
          param_6 = param_6 + 1;
          *param_1 = bVar2;
          puVar7 = (uint *)((int)param_3 + 2);
          DAT_00856fe0 = DAT_00856fe0 + 1;
          param_1 = param_1 + 1;
          uVar5 = uVar4 - 1;
        } while (uVar5 != 0 && 0 < (int)uVar4);
        goto LAB_006f51e8;
      }
      uVar5 = uVar5 & 0x3f;
      pbVar10 = param_6 + 1;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      param_9 = (byte *)CONCAT31((int3)((uint)param_9 >> 8),*param_6);
      iVar9 = iVar9 - uVar5;
      param_3 = puVar7;
    }
    uVar4 = uVar5;
    puVar7 = param_3;
    iVar8 = DAT_00857010;
  } while (uVar6 <= *(uint *)((int)param_3 + -2));
  goto cf_continue_loop_006F5151;
}

