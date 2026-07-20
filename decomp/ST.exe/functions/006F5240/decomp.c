
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* [STPrototypeApplier] Propagated parameter 8.
   Evidence: 006F31D0 -> 006F5240 @ 006F4DBC */

void FUN_006f5240(byte *param_1,int param_2,uint *param_3,int param_4,int param_5,byte *param_6,
                 int param_7,int param_8,byte *param_9,int param_10)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  
  _DAT_00857000 = 1;
LAB_006f5259:
  while( true ) {
    uVar7 = (uint)*param_6;
    param_6 = param_6 + 1;
    iVar8 = param_8;
    if (uVar7 != 0) break;
    param_1 = param_1 + param_2;
    param_3 = (uint *)((int)param_3 + param_4);
    iVar8 = param_10 + -1;
    bVar2 = param_10 < 1;
    param_10 = iVar8;
    if (iVar8 == 0 || bVar2) {
      return;
    }
  }
  while( true ) {
    while( true ) {
      pbVar9 = param_9;
      if ((uVar7 & 0x80) == 0) {
        do {
          if (iVar8 < (int)uVar7) {
            pbVar10 = (byte *)(uint)(byte)((char)uVar7 - (char)iVar8);
            goto LAB_006f532e;
          }
          iVar8 = iVar8 - uVar7;
          bVar1 = *param_6;
          uVar7 = (uint)bVar1;
          param_6 = param_6 + 1;
        } while ((bVar1 & 0x80) == 0);
      }
      if ((uVar7 & 0x40) == 0) break;
      uVar6 = uVar7 & 0xffffff3f;
      if (iVar8 < (int)uVar6) {
        pbVar10 = (byte *)(uint)(byte)((char)uVar6 - (char)iVar8);
        goto LAB_006f52de;
      }
      uVar7 = (uint)param_6[1];
      param_6 = param_6 + 2;
      iVar8 = iVar8 - uVar6;
    }
    uVar6 = uVar7 & 0xffffff3f;
    if (iVar8 < (int)uVar6) break;
    uVar7 = (uint)param_6[uVar6];
    param_6 = param_6 + uVar6 + 1;
    iVar8 = iVar8 - uVar6;
  }
  param_6 = param_6 + iVar8;
  pbVar10 = (byte *)(uint)(byte)((char)uVar6 - (char)iVar8);
  while( true ) {
    uVar7 = (uint)pbVar10 & 0x3f;
    if ((int)pbVar9 < (int)uVar7) break;
    pbVar9 = pbVar9 + -uVar7;
    do {
      uVar6 = *(uint *)((int)param_3 + -2);
      uVar5 = uVar7;
      puVar4 = param_3;
      while (uVar6 < (uint)(param_5 << 0x10)) {
        param_6 = param_6 + 1;
        param_3 = (uint *)((int)puVar4 + 2);
        param_1 = param_1 + 1;
        if (uVar5 - 1 == 0 || (int)uVar5 < 1) goto cf_common_join_006F5339;
        uVar6 = *puVar4;
        uVar5 = uVar5 - 1;
        puVar4 = param_3;
      }
      *param_1 = *param_6;
      param_3 = (uint *)((int)puVar4 + 2);
      param_6 = param_6 + 1;
      param_1 = param_1 + 1;
      uVar7 = uVar5 - 1;
    } while (uVar7 != 0 && 0 < (int)uVar5);
cf_common_join_006F5339:
    pbVar10 = pbVar9;
    if ((int)pbVar9 < 1) goto cf_common_join_006F53A7;
    bVar1 = *param_6;
    pbVar10 = (byte *)(uint)bVar1;
    param_6 = param_6 + 1;
    if ((bVar1 & 0x80) == 0) {
LAB_006f532e:
      if ((int)pbVar9 < (int)pbVar10) {
        if (0 < (int)pbVar9) {
          pbVar10 = pbVar10 + -(int)pbVar9;
          param_1 = param_1 + (int)pbVar9;
          param_3 = (uint *)((int)param_3 + (int)pbVar9 * 2);
        }
        goto cf_common_join_006F53A7;
      }
      pbVar9 = pbVar9 + -(int)pbVar10;
      param_1 = param_1 + (int)pbVar10;
      param_3 = (uint *)((int)param_3 + (int)pbVar10 * 2);
      goto cf_common_join_006F5339;
    }
    if ((bVar1 & 0x40) != 0) {
LAB_006f52de:
      uVar7 = (uint)pbVar10 & 0x3f;
      pbVar10 = param_6 + 1;
      bVar1 = *param_6;
      if ((int)pbVar9 < (int)uVar7) {
        pbVar10 = (byte *)(uVar7 | 0xc0);
        if ((int)pbVar9 < 1) goto cf_common_join_006F53A7;
        pbVar10 = pbVar10 + -(int)pbVar9;
        goto LAB_006f5352;
      }
      pbVar9 = pbVar9 + -uVar7;
      do {
        uVar6 = *(uint *)((int)param_3 + -2);
        uVar5 = uVar7;
        puVar4 = param_3;
        while (param_6 = pbVar10, uVar6 < (uint)(param_5 << 0x10)) {
          param_3 = (uint *)((int)puVar4 + 2);
          param_1 = param_1 + 1;
          if (uVar5 - 1 == 0 || (int)uVar5 < 1) goto cf_common_join_006F5339;
          uVar6 = *puVar4;
          uVar5 = uVar5 - 1;
          puVar4 = param_3;
        }
        *param_1 = bVar1;
        param_1 = param_1 + 1;
        param_3 = (uint *)((int)puVar4 + 2);
        uVar7 = uVar5 - 1;
      } while (uVar7 != 0 && 0 < (int)uVar5);
      goto cf_common_join_006F5339;
    }
  }
  pbVar10 = (byte *)(uVar7 | 0x80);
  if (0 < (int)pbVar9) {
    pbVar10 = pbVar10 + -(int)pbVar9;
    do {
      uVar7 = *(uint *)((int)param_3 + -2);
      pbVar3 = pbVar9;
      puVar4 = param_3;
      while (uVar7 < (uint)(param_5 << 0x10)) {
        param_6 = param_6 + 1;
        param_3 = (uint *)((int)puVar4 + 2);
        param_1 = param_1 + 1;
        if (pbVar3 + -1 == (byte *)0x0 || (int)pbVar3 < 1) goto cf_common_join_006F53A7;
        uVar7 = *puVar4;
        pbVar3 = pbVar3 + -1;
        puVar4 = param_3;
      }
      *param_1 = *param_6;
      param_3 = (uint *)((int)puVar4 + 2);
      param_6 = param_6 + 1;
      param_1 = param_1 + 1;
      pbVar9 = pbVar3 + -1;
    } while (pbVar9 != (byte *)0x0 && 0 < (int)pbVar3);
  }
  goto cf_common_join_006F53A7;
LAB_006f5352:
  do {
    uVar7 = *(uint *)((int)param_3 + -2);
    puVar4 = param_3;
    pbVar3 = pbVar9;
    while (uVar7 < (uint)(param_5 << 0x10)) {
      param_3 = (uint *)((int)puVar4 + 2);
      param_1 = param_1 + 1;
      if (pbVar3 + -1 == (byte *)0x0 || (int)pbVar3 < 1) goto cf_common_join_006F53A7;
      uVar7 = *puVar4;
      puVar4 = param_3;
      pbVar3 = pbVar3 + -1;
    }
    *param_1 = bVar1;
    param_1 = param_1 + 1;
    param_3 = (uint *)((int)puVar4 + 2);
    pbVar9 = pbVar3 + -1;
  } while (pbVar9 != (byte *)0x0 && 0 < (int)pbVar3);
cf_common_join_006F53A7:
  iVar8 = (param_7 - (int)param_9) - param_8;
  while( true ) {
    while( true ) {
      pbVar9 = param_6;
      if (((uint)pbVar10 & 0x80) == 0) {
        do {
          if (iVar8 <= (int)pbVar10) goto cf_continue_loop_006F53F2;
          iVar8 = iVar8 - (int)pbVar10;
          bVar1 = *param_6;
          pbVar10 = (byte *)(uint)bVar1;
          param_6 = param_6 + 1;
          pbVar9 = param_6;
        } while ((bVar1 & 0x80) == 0);
      }
      if (((uint)pbVar10 & 0x40) == 0) break;
      param_6 = pbVar9 + 1;
      if (iVar8 <= (int)((uint)pbVar10 & 0xffffff3f)) goto cf_continue_loop_006F53F2;
      iVar8 = iVar8 - ((uint)pbVar10 & 0xffffff3f);
      pbVar10 = (byte *)(uint)*param_6;
      param_6 = pbVar9 + 2;
    }
    uVar7 = (uint)pbVar10 & 0xffffff3f;
    if (iVar8 <= (int)uVar7) break;
    iVar8 = iVar8 - uVar7;
    pbVar10 = (byte *)(uint)pbVar9[uVar7];
    param_6 = pbVar9 + uVar7 + 1;
  }
  param_6 = pbVar9 + uVar7;
cf_continue_loop_006F53F2:
  param_3 = (uint *)((int)param_3 + (int)param_9 * -2 + param_4);
  param_1 = param_1 + (param_2 - (int)param_9);
  iVar8 = param_10 + -1;
  bVar2 = param_10 < 1;
  param_10 = iVar8;
  if (iVar8 == 0 || bVar2) {
    return;
  }
  goto LAB_006f5259;
}

