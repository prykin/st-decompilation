
void FUN_006d25e0(byte *param_1,int param_2,byte *param_3,int param_4,int param_5)

{
  bool bVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;

LAB_006d25f2:
  while( true ) {
    bVar3 = *param_3;
    uVar5 = (uint)bVar3;
    iVar7 = param_4;
    if (uVar5 != 0) break;
    param_3 = param_3 + 2;
    param_1 = param_1 + param_2;
    iVar7 = param_5 + -1;
    bVar1 = param_5 < 1;
    param_5 = iVar7;
    if (iVar7 == 0 || bVar1) {
      return;
    }
  }
  do {
    pbVar8 = param_3 + 1;
    if (0x7f < bVar3) {
      bVar3 = (byte)uVar5;
      do {
        while (bVar3 < 0xc0) {
LAB_006d2641:
          uVar4 = uVar5 & 0xffffff3f;
          iVar7 = iVar7 - uVar4;
          *param_1 = *pbVar8;
          if ((byte)uVar4 < 4) {
            param_3 = pbVar8 + 1;
            pbVar2 = param_1 + 1;
            if (1 < uVar4) {
              bVar3 = *param_3;
              param_3 = pbVar8 + 2;
              param_1[1] = bVar3;
              pbVar2 = param_1 + 2;
              if (uVar4 != 2 && 0 < (int)(uVar4 - 1)) {
                bVar3 = *param_3;
                param_3 = pbVar8 + 3;
                param_1[2] = bVar3;
                pbVar2 = param_1 + 3;
              }
            }
            param_1 = pbVar2;
            if (0 < iVar7) {
              bVar3 = *param_3;
              uVar5 = (uint)bVar3;
              pbVar8 = param_3 + 1;
              if (0x7f < bVar3) goto code_r0x006d2671;
              goto cf_continue_loop_006D2607;
            }
            goto cf_continue_loop_006D26AD;
          }
          if ((uVar5 & 1) != 0) {
            pbVar8 = pbVar8 + 1;
            param_1 = param_1 + 1;
          }
          uVar5 = uVar4 >> 2;
          param_3 = pbVar8;
          if ((uVar4 >> 1 & 1) != 0) {
            *param_1 = *pbVar8;
            param_1[1] = pbVar8[1];
            param_3 = pbVar8 + 2;
            param_1 = param_1 + 2;
          }
          for (; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(undefined4 *)param_1 = *(undefined4 *)param_3;
            param_3 = param_3 + 4;
            param_1 = param_1 + 4;
          }
          if (iVar7 < 1) goto cf_continue_loop_006D26AD;
          bVar3 = *param_3;
          uVar5 = (uint)bVar3;
          pbVar8 = param_3 + 1;
          if (bVar3 < 0x80) goto cf_continue_loop_006D2607;
        }
LAB_006d2620:
        bVar3 = *pbVar8;
        param_3 = pbVar8 + 1;
        iVar7 = iVar7 - (uVar5 & 0xffffff3f);
        uVar5 = uVar5 & 0xffffff3f;
        do {
          *param_1 = bVar3;
          param_1 = param_1 + 1;
          uVar4 = uVar5 - 1;
          bVar1 = 0 < (int)uVar5;
          uVar5 = uVar4;
        } while (uVar4 != 0 && bVar1);
        if (iVar7 < 1) goto cf_continue_loop_006D26AD;
        bVar3 = *param_3;
        uVar5 = (uint)bVar3;
        pbVar8 = pbVar8 + 2;
      } while (0x7f < bVar3);
    }
cf_continue_loop_006D2607:
    param_1 = param_1 + uVar5;
    iVar6 = iVar7 - uVar5;
    param_3 = pbVar8;
    if (iVar6 == 0 || iVar7 < (int)uVar5) goto cf_continue_loop_006D26AD;
    bVar3 = *pbVar8;
    uVar5 = (uint)bVar3;
    iVar7 = iVar6;
  } while( true );
code_r0x006d2671:
  if (0xbf < bVar3) goto LAB_006d2620;
  goto LAB_006d2641;
cf_continue_loop_006D26AD:
  param_1 = param_1 + (param_2 - param_4);
  iVar7 = param_5 + -1;
  bVar1 = param_5 < 1;
  param_5 = iVar7;
  if (iVar7 == 0 || bVar1) {
    return;
  }
  goto LAB_006d25f2;
}

