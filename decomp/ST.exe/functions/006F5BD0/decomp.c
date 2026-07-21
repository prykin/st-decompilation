
undefined1
FUN_006f5bd0(undefined1 *param_1,int param_2,byte *param_3,int param_4,int param_5,int param_6)

{
  byte bVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  undefined1 *puVar10;

  uVar3 = 0;
  do {
    uVar4 = (uint)*param_3;
    param_3 = param_3 + 1;
    iVar8 = param_4;
    if (uVar4 == 0) {
      param_1 = param_1 + param_2;
    }
    else {
      while( true ) {
        iVar7 = iVar8;
        pbVar9 = param_3;
        if ((uVar4 & 0x80) == 0) {
          do {
            param_1 = param_1 + uVar4;
            iVar8 = iVar7 - uVar4;
            if (iVar8 == 0 || iVar7 < (int)uVar4) goto LAB_006f5c3f;
            bVar1 = *param_3;
            uVar4 = (uint)bVar1;
            param_3 = param_3 + 1;
            iVar7 = iVar8;
            pbVar9 = param_3;
          } while ((bVar1 & 0x80) == 0);
        }
        if ((uVar4 & 0x40) == 0) {
          bVar1 = *pbVar9;
          uVar6 = uVar4 & 0x3f;
          param_3 = pbVar9;
          puVar10 = param_1;
          while( true ) {
            param_1 = puVar10 + 1;
            uVar3 = *(undefined1 *)(param_6 + (uint)bVar1);
            param_3 = param_3 + 1;
            *puVar10 = uVar3;
            if (uVar6 - 1 == 0 || (int)uVar6 < 1) break;
            bVar1 = *param_3;
            uVar6 = uVar6 - 1;
            puVar10 = param_1;
          }
        }
        else {
          param_3 = pbVar9 + 1;
          uVar3 = *(undefined1 *)(param_6 + (uint)*pbVar9);
          uVar6 = uVar4 & 0x3f;
          do {
            *param_1 = uVar3;
            param_1 = param_1 + 1;
            uVar5 = uVar6 - 1;
            bVar2 = 0 < (int)uVar6;
            uVar6 = uVar5;
          } while (uVar5 != 0 && bVar2);
        }
        iVar8 = iVar8 - (uVar4 & 0x3f);
        if (iVar8 < 1) break;
        uVar4 = (uint)*param_3;
        param_3 = param_3 + 1;
      }
LAB_006f5c3f:
      param_1 = param_1 + (param_2 - param_4);
    }
    iVar8 = param_5 + -1;
    bVar2 = param_5 < 1;
    param_5 = iVar8;
    if (iVar8 == 0 || bVar2) {
      return uVar3;
    }
  } while( true );
}

