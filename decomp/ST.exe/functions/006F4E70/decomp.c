
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* [STPrototypeApplier] Propagated parameter 6.
   Evidence: 006F31D0 -> 006F4E70 @ 006F4CA8 */

void FUN_006f4e70(byte *param_1,int param_2,uint *param_3,int param_4,int param_5,byte *param_6,
                 byte *param_7,int param_8)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;

  uVar7 = param_5 << 0x10;
  pbVar11 = param_6;
  if (DAT_00857000 != '\0') goto LAB_006f4f35;
  do {
    uVar5 = (uint)*param_6;
    param_6 = param_6 + 1;
    pbVar10 = param_7;
    if (uVar5 == 0) {
      param_1 = param_1 + param_2;
      param_3 = (uint *)((int)param_3 + param_4);
    }
    else {
      while( true ) {
        pbVar9 = pbVar10;
        pbVar11 = param_6;
        if ((uVar5 & 0x80) == 0) {
          do {
            param_1 = param_1 + uVar5;
            param_3 = (uint *)((int)param_3 + uVar5 * 2);
            pbVar10 = pbVar9 + -uVar5;
            if (pbVar10 == (byte *)0x0 || (int)pbVar9 < (int)uVar5) goto LAB_006f4f0f;
            bVar4 = *param_6;
            uVar5 = (uint)bVar4;
            param_6 = param_6 + 1;
            pbVar9 = pbVar10;
            pbVar11 = param_6;
          } while ((bVar4 & 0x80) == 0);
        }
        if ((uVar5 & 0x40) == 0) {
          pbVar10 = pbVar10 + -(uVar5 & 0x3f);
          uVar5 = uVar5 & 0x3f;
          do {
            if (*(uint *)((int)param_3 + -2) < uVar7) {
              DAT_00857000 = '\x01';
              goto LAB_006f4f9d;
            }
            *param_1 = *pbVar11;
            param_3 = (uint *)((int)param_3 + 2);
            pbVar11 = pbVar11 + 1;
            param_1 = param_1 + 1;
            uVar6 = uVar5 - 1;
            bVar3 = 0 < (int)uVar5;
            uVar5 = uVar6;
            param_6 = pbVar11;
          } while (uVar6 != 0 && bVar3);
        }
        else {
          param_6 = pbVar11 + 1;
          bVar4 = *pbVar11;
          pbVar10 = pbVar10 + -(uVar5 & 0x3f);
          uVar6 = uVar5 & 0x3f;
          do {
            if (*(uint *)((int)param_3 + -2) < uVar7) {
              DAT_00857000 = '\x01';
              goto cf_continue_loop_006F4F78;
            }
            *param_1 = bVar4;
            param_1 = param_1 + 1;
            param_3 = (uint *)((int)param_3 + 2);
            uVar5 = uVar6 - 1;
            bVar3 = 0 < (int)uVar6;
            uVar6 = uVar5;
          } while (uVar5 != 0 && bVar3);
        }
        if ((int)pbVar10 < 1) break;
        uVar5 = (uint)*param_6;
        param_6 = param_6 + 1;
      }
LAB_006f4f0f:
      param_1 = param_1 + (param_2 - (int)param_7);
      param_3 = (uint *)((int)param_3 + (int)param_7 * -2 + param_4);
    }
    iVar1 = param_8 + -1;
    bVar3 = param_8 < 1;
    param_8 = iVar1;
    if (iVar1 == 0 || bVar3) {
      return;
    }
  } while( true );
cf_continue_loop_006F4F78:
  do {
    puVar8 = (uint *)((int)param_3 + 2);
    param_1 = param_1 + 1;
    uVar5 = uVar6 - 1;
    pbVar11 = param_6;
    if (uVar5 == 0 || (int)uVar6 < 1) goto LAB_006f4fab;
    uVar2 = *param_3;
    uVar6 = uVar5;
    param_3 = puVar8;
  } while (uVar2 < uVar7);
  do {
    *param_1 = bVar4;
    param_1 = param_1 + 1;
    param_3 = (uint *)((int)puVar8 + 2);
    uVar6 = uVar5 - 1;
    puVar8 = param_3;
    pbVar11 = param_6;
    if (uVar6 == 0 || (int)uVar5 < 1) {
LAB_006f4fab:
      param_3 = puVar8;
      if ((int)pbVar10 < 1) goto LAB_006f4fb6;
      uVar6 = (uint)*pbVar11;
      pbVar11 = pbVar11 + 1;
      while (pbVar9 = pbVar10, (uVar6 & 0x80) == 0) {
        while( true ) {
          param_1 = param_1 + uVar6;
          param_3 = (uint *)((int)param_3 + uVar6 * 2);
          pbVar10 = pbVar9 + -uVar6;
          if (pbVar10 == (byte *)0x0 || (int)pbVar9 < (int)uVar6) break;
          bVar4 = *pbVar11;
          uVar6 = (uint)bVar4;
          pbVar11 = pbVar11 + 1;
          pbVar9 = pbVar10;
          if ((bVar4 & 0x80) != 0) goto LAB_006f4f5e;
        }
LAB_006f4fb6:
        param_1 = param_1 + (param_2 - (int)param_7);
        param_3 = (uint *)((int)param_3 + (int)param_7 * -2 + param_4);
        while( true ) {
          iVar1 = param_8 + -1;
          bVar3 = param_8 < 1;
          param_8 = iVar1;
          if (iVar1 == 0 || bVar3) {
            return;
          }
LAB_006f4f35:
          uVar6 = (uint)*pbVar11;
          pbVar11 = pbVar11 + 1;
          pbVar10 = param_7;
          if (uVar6 != 0) break;
          param_1 = param_1 + param_2;
          param_3 = (uint *)((int)param_3 + param_4);
        }
      }
LAB_006f4f5e:
      if ((uVar6 & 0x40) == 0) {
        uVar6 = uVar6 & 0x3f;
        pbVar10 = pbVar10 + -uVar6;
        do {
          uVar2 = *(uint *)((int)param_3 + -2);
          uVar5 = uVar6;
          while (uVar2 < uVar7) {
LAB_006f4f9d:
            pbVar11 = pbVar11 + 1;
            param_1 = param_1 + 1;
            puVar8 = (uint *)((int)param_3 + 2);
            if (uVar5 - 1 == 0 || (int)uVar5 < 1) goto LAB_006f4fab;
            uVar2 = *param_3;
            uVar5 = uVar5 - 1;
            param_3 = (uint *)((int)param_3 + 2);
          }
          *param_1 = *pbVar11;
          param_3 = (uint *)((int)param_3 + 2);
          pbVar11 = pbVar11 + 1;
          param_1 = param_1 + 1;
          uVar6 = uVar5 - 1;
          puVar8 = param_3;
        } while (uVar6 != 0 && 0 < (int)uVar5);
        goto LAB_006f4fab;
      }
      uVar6 = uVar6 & 0x3f;
      param_6 = pbVar11 + 1;
      bVar4 = *pbVar11;
      pbVar10 = pbVar10 + -uVar6;
    }
    uVar5 = uVar6;
    puVar8 = param_3;
  } while (uVar7 <= *(uint *)((int)param_3 + -2));
  goto cf_continue_loop_006F4F78;
}

