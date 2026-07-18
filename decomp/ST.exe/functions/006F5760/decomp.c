
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_006f5760(undefined1 *param_1,int param_2,uint *param_3,int param_4,int param_5,
                 byte *param_6,int param_7,int param_8,int param_9)

{
  uint uVar1;
  byte bVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  byte *pbVar11;
  undefined1 *puVar12;
  int iStack_18;
  
  DAT_0085702c = param_9;
  uVar7 = param_5 << 0x10;
  pbVar11 = param_6;
  if (DAT_00857000 != '\0') goto LAB_006f584a;
  do {
    uVar5 = (uint)*param_6;
    param_6 = param_6 + 1;
    iStack_18 = param_7;
    if (uVar5 == 0) {
      param_1 = param_1 + param_2;
      param_3 = (uint *)((int)param_3 + param_4);
    }
    else {
      while( true ) {
        iVar10 = DAT_0085702c;
        iVar9 = iStack_18;
        pbVar11 = param_6;
        if ((uVar5 & 0x80) == 0) {
          do {
            param_1 = param_1 + uVar5;
            param_3 = (uint *)((int)param_3 + uVar5 * 2);
            iStack_18 = iVar9 - uVar5;
            if (iStack_18 == 0 || iVar9 < (int)uVar5) goto LAB_006f5824;
            bVar2 = *param_6;
            uVar5 = (uint)bVar2;
            param_6 = param_6 + 1;
            iVar9 = iStack_18;
            pbVar11 = param_6;
          } while ((bVar2 & 0x80) == 0);
        }
        if ((uVar5 & 0x40) == 0) {
          iStack_18 = iStack_18 - (uVar5 & 0x3f);
          uVar5 = uVar5 & 0x3f;
          puVar12 = param_1;
          do {
            if (*(uint *)((int)param_3 + -2) < uVar7) {
              DAT_00857000 = '\x01';
              goto LAB_006f58d2;
            }
            bVar2 = *pbVar11;
            param_3 = (uint *)((int)param_3 + 2);
            param_1 = puVar12 + 1;
            pbVar11 = pbVar11 + 1;
            uVar6 = uVar5 - 1;
            *puVar12 = *(undefined1 *)(iVar10 + (uint)bVar2);
            bVar3 = 0 < (int)uVar5;
            uVar5 = uVar6;
            param_6 = pbVar11;
            puVar12 = param_1;
          } while (uVar6 != 0 && bVar3);
        }
        else {
          param_6 = pbVar11 + 1;
          iStack_18 = iStack_18 - (uVar5 & 0x3f);
          uVar4 = *(undefined1 *)((uint)*pbVar11 + DAT_0085702c);
          uVar6 = uVar5 & 0x3f;
          do {
            if (*(uint *)((int)param_3 + -2) < uVar7) {
              DAT_00857000 = '\x01';
              goto LAB_006f589b;
            }
            *param_1 = uVar4;
            param_1 = param_1 + 1;
            param_3 = (uint *)((int)param_3 + 2);
            uVar5 = uVar6 - 1;
            bVar3 = 0 < (int)uVar6;
            uVar6 = uVar5;
          } while (uVar5 != 0 && bVar3);
        }
        if (iStack_18 < 1) break;
        uVar5 = (uint)*param_6;
        param_6 = param_6 + 1;
      }
LAB_006f5824:
      param_1 = param_1 + (param_2 - param_7);
      param_3 = (uint *)((int)param_3 + param_7 * -2 + param_4);
    }
    iVar10 = param_8 + -1;
    bVar3 = param_8 < 1;
    param_8 = iVar10;
    if (iVar10 == 0 || bVar3) {
      return;
    }
  } while( true );
LAB_006f589b:
  do {
    puVar8 = (uint *)((int)param_3 + 2);
    param_1 = param_1 + 1;
    uVar5 = uVar6 - 1;
    pbVar11 = param_6;
    if (uVar5 == 0 || (int)uVar6 < 1) goto LAB_006f58e1;
    uVar1 = *param_3;
    uVar6 = uVar5;
    param_3 = puVar8;
  } while (uVar1 < uVar7);
  do {
    *param_1 = uVar4;
    param_1 = param_1 + 1;
    param_3 = (uint *)((int)puVar8 + 2);
    uVar6 = uVar5 - 1;
    puVar8 = param_3;
    pbVar11 = param_6;
    if (uVar6 == 0 || (int)uVar5 < 1) {
LAB_006f58e1:
      param_3 = puVar8;
      if (iStack_18 < 1) goto LAB_006f58ef;
      uVar6 = (uint)*pbVar11;
      pbVar11 = pbVar11 + 1;
      while (iVar10 = iStack_18, (uVar6 & 0x80) == 0) {
        while( true ) {
          param_1 = param_1 + uVar6;
          param_3 = (uint *)((int)param_3 + uVar6 * 2);
          iStack_18 = iVar10 - uVar6;
          if (iStack_18 == 0 || iVar10 < (int)uVar6) break;
          bVar2 = *pbVar11;
          uVar6 = (uint)bVar2;
          pbVar11 = pbVar11 + 1;
          iVar10 = iStack_18;
          if ((bVar2 & 0x80) != 0) goto LAB_006f5877;
        }
LAB_006f58ef:
        param_1 = param_1 + (param_2 - param_7);
        param_3 = (uint *)((int)param_3 + param_7 * -2 + param_4);
        while( true ) {
          iVar10 = param_8 + -1;
          bVar3 = param_8 < 1;
          param_8 = iVar10;
          if (iVar10 == 0 || bVar3) {
            return;
          }
LAB_006f584a:
          uVar6 = (uint)*pbVar11;
          pbVar11 = pbVar11 + 1;
          iStack_18 = param_7;
          if (uVar6 != 0) break;
          param_1 = param_1 + param_2;
          param_3 = (uint *)((int)param_3 + param_4);
        }
      }
LAB_006f5877:
      if ((uVar6 & 0x40) == 0) {
        uVar6 = uVar6 & 0x3f;
        iStack_18 = iStack_18 - uVar6;
        iVar10 = DAT_0085702c;
        do {
          uVar1 = *(uint *)((int)param_3 + -2);
          uVar5 = uVar6;
          puVar12 = param_1;
          while (uVar1 < uVar7) {
LAB_006f58d2:
            pbVar11 = pbVar11 + 1;
            param_1 = puVar12 + 1;
            puVar8 = (uint *)((int)param_3 + 2);
            if (uVar5 - 1 == 0 || (int)uVar5 < 1) goto LAB_006f58e1;
            uVar1 = *param_3;
            uVar5 = uVar5 - 1;
            param_3 = (uint *)((int)param_3 + 2);
            puVar12 = param_1;
          }
          bVar2 = *pbVar11;
          param_3 = (uint *)((int)param_3 + 2);
          pbVar11 = pbVar11 + 1;
          param_1 = puVar12 + 1;
          uVar6 = uVar5 - 1;
          *puVar12 = *(undefined1 *)(iVar10 + (uint)bVar2);
          puVar8 = param_3;
        } while (uVar6 != 0 && 0 < (int)uVar5);
        goto LAB_006f58e1;
      }
      uVar6 = uVar6 & 0x3f;
      param_6 = pbVar11 + 1;
      iStack_18 = iStack_18 - uVar6;
      uVar4 = *(undefined1 *)((uint)*pbVar11 + DAT_0085702c);
    }
    uVar5 = uVar6;
    puVar8 = param_3;
  } while (uVar7 <= *(uint *)((int)param_3 + -2));
  goto LAB_006f589b;
}

