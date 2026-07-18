
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_006f4e70(byte *param_1,int param_2,uint *param_3,int param_4,int param_5,byte *param_6,
                 int param_7,int param_8)

{
  uint uVar1;
  bool bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  
  uVar6 = param_5 << 0x10;
  pbVar10 = param_6;
  if (DAT_00857000 != '\0') goto LAB_006f4f35;
  do {
    uVar4 = (uint)*param_6;
    param_6 = param_6 + 1;
    iVar9 = param_7;
    if (uVar4 == 0) {
      param_1 = param_1 + param_2;
      param_3 = (uint *)((int)param_3 + param_4);
    }
    else {
      while( true ) {
        iVar8 = iVar9;
        pbVar10 = param_6;
        if ((uVar4 & 0x80) == 0) {
          do {
            param_1 = param_1 + uVar4;
            param_3 = (uint *)((int)param_3 + uVar4 * 2);
            iVar9 = iVar8 - uVar4;
            if (iVar9 == 0 || iVar8 < (int)uVar4) goto LAB_006f4f0f;
            bVar3 = *param_6;
            uVar4 = (uint)bVar3;
            param_6 = param_6 + 1;
            iVar8 = iVar9;
            pbVar10 = param_6;
          } while ((bVar3 & 0x80) == 0);
        }
        if ((uVar4 & 0x40) == 0) {
          iVar9 = iVar9 - (uVar4 & 0x3f);
          uVar4 = uVar4 & 0x3f;
          do {
            if (*(uint *)((int)param_3 + -2) < uVar6) {
              DAT_00857000 = '\x01';
              goto LAB_006f4f9d;
            }
            *param_1 = *pbVar10;
            param_3 = (uint *)((int)param_3 + 2);
            pbVar10 = pbVar10 + 1;
            param_1 = param_1 + 1;
            uVar5 = uVar4 - 1;
            bVar2 = 0 < (int)uVar4;
            uVar4 = uVar5;
            param_6 = pbVar10;
          } while (uVar5 != 0 && bVar2);
        }
        else {
          param_6 = pbVar10 + 1;
          bVar3 = *pbVar10;
          iVar9 = iVar9 - (uVar4 & 0x3f);
          uVar5 = uVar4 & 0x3f;
          do {
            if (*(uint *)((int)param_3 + -2) < uVar6) {
              DAT_00857000 = '\x01';
              goto LAB_006f4f78;
            }
            *param_1 = bVar3;
            param_1 = param_1 + 1;
            param_3 = (uint *)((int)param_3 + 2);
            uVar4 = uVar5 - 1;
            bVar2 = 0 < (int)uVar5;
            uVar5 = uVar4;
          } while (uVar4 != 0 && bVar2);
        }
        if (iVar9 < 1) break;
        uVar4 = (uint)*param_6;
        param_6 = param_6 + 1;
      }
LAB_006f4f0f:
      param_1 = param_1 + (param_2 - param_7);
      param_3 = (uint *)((int)param_3 + param_7 * -2 + param_4);
    }
    iVar9 = param_8 + -1;
    bVar2 = param_8 < 1;
    param_8 = iVar9;
    if (iVar9 == 0 || bVar2) {
      return;
    }
  } while( true );
LAB_006f4f78:
  do {
    puVar7 = (uint *)((int)param_3 + 2);
    param_1 = param_1 + 1;
    uVar4 = uVar5 - 1;
    pbVar10 = param_6;
    if (uVar4 == 0 || (int)uVar5 < 1) goto LAB_006f4fab;
    uVar1 = *param_3;
    uVar5 = uVar4;
    param_3 = puVar7;
  } while (uVar1 < uVar6);
  do {
    *param_1 = bVar3;
    param_1 = param_1 + 1;
    param_3 = (uint *)((int)puVar7 + 2);
    uVar5 = uVar4 - 1;
    puVar7 = param_3;
    pbVar10 = param_6;
    if (uVar5 == 0 || (int)uVar4 < 1) {
LAB_006f4fab:
      param_3 = puVar7;
      if (iVar9 < 1) goto LAB_006f4fb6;
      uVar5 = (uint)*pbVar10;
      pbVar10 = pbVar10 + 1;
      while (iVar8 = iVar9, (uVar5 & 0x80) == 0) {
        while( true ) {
          param_1 = param_1 + uVar5;
          param_3 = (uint *)((int)param_3 + uVar5 * 2);
          iVar9 = iVar8 - uVar5;
          if (iVar9 == 0 || iVar8 < (int)uVar5) break;
          bVar3 = *pbVar10;
          uVar5 = (uint)bVar3;
          pbVar10 = pbVar10 + 1;
          iVar8 = iVar9;
          if ((bVar3 & 0x80) != 0) goto LAB_006f4f5e;
        }
LAB_006f4fb6:
        param_1 = param_1 + (param_2 - param_7);
        param_3 = (uint *)((int)param_3 + param_7 * -2 + param_4);
        while( true ) {
          iVar9 = param_8 + -1;
          bVar2 = param_8 < 1;
          param_8 = iVar9;
          if (iVar9 == 0 || bVar2) {
            return;
          }
LAB_006f4f35:
          uVar5 = (uint)*pbVar10;
          pbVar10 = pbVar10 + 1;
          iVar9 = param_7;
          if (uVar5 != 0) break;
          param_1 = param_1 + param_2;
          param_3 = (uint *)((int)param_3 + param_4);
        }
      }
LAB_006f4f5e:
      if ((uVar5 & 0x40) == 0) {
        uVar5 = uVar5 & 0x3f;
        iVar9 = iVar9 - uVar5;
        do {
          uVar1 = *(uint *)((int)param_3 + -2);
          uVar4 = uVar5;
          while (uVar1 < uVar6) {
LAB_006f4f9d:
            pbVar10 = pbVar10 + 1;
            param_1 = param_1 + 1;
            puVar7 = (uint *)((int)param_3 + 2);
            if (uVar4 - 1 == 0 || (int)uVar4 < 1) goto LAB_006f4fab;
            uVar1 = *param_3;
            uVar4 = uVar4 - 1;
            param_3 = (uint *)((int)param_3 + 2);
          }
          *param_1 = *pbVar10;
          param_3 = (uint *)((int)param_3 + 2);
          pbVar10 = pbVar10 + 1;
          param_1 = param_1 + 1;
          uVar5 = uVar4 - 1;
          puVar7 = param_3;
        } while (uVar5 != 0 && 0 < (int)uVar4);
        goto LAB_006f4fab;
      }
      uVar5 = uVar5 & 0x3f;
      param_6 = pbVar10 + 1;
      bVar3 = *pbVar10;
      iVar9 = iVar9 - uVar5;
    }
    uVar4 = uVar5;
    puVar7 = param_3;
  } while (uVar6 <= *(uint *)((int)param_3 + -2));
  goto LAB_006f4f78;
}

