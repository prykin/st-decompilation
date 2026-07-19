
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_006f5240(byte *param_1,int param_2,uint *param_3,int param_4,int param_5,byte *param_6,
                 int param_7,int param_8,uint param_9,int param_10)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  
  _DAT_00857000 = 1;
LAB_006f5259:
  while( true ) {
    uVar6 = (uint)*param_6;
    param_6 = param_6 + 1;
    iVar7 = param_8;
    if (uVar6 != 0) break;
    param_1 = param_1 + param_2;
    param_3 = (uint *)((int)param_3 + param_4);
    iVar7 = param_10 + -1;
    bVar2 = param_10 < 1;
    param_10 = iVar7;
    if (iVar7 == 0 || bVar2) {
      return;
    }
  }
  while( true ) {
    while( true ) {
      uVar8 = param_9;
      if ((uVar6 & 0x80) == 0) {
        do {
          if (iVar7 < (int)uVar6) {
            uVar6 = (uint)(byte)((char)uVar6 - (char)iVar7);
            goto LAB_006f532e;
          }
          iVar7 = iVar7 - uVar6;
          bVar1 = *param_6;
          uVar6 = (uint)bVar1;
          param_6 = param_6 + 1;
        } while ((bVar1 & 0x80) == 0);
      }
      if ((uVar6 & 0x40) == 0) break;
      uVar5 = uVar6 & 0xffffff3f;
      if (iVar7 < (int)uVar5) {
        uVar6 = (uint)(byte)((char)uVar5 - (char)iVar7);
        goto LAB_006f52de;
      }
      uVar6 = (uint)param_6[1];
      param_6 = param_6 + 2;
      iVar7 = iVar7 - uVar5;
    }
    uVar5 = uVar6 & 0xffffff3f;
    if (iVar7 < (int)uVar5) break;
    uVar6 = (uint)param_6[uVar5];
    param_6 = param_6 + uVar5 + 1;
    iVar7 = iVar7 - uVar5;
  }
  param_6 = param_6 + iVar7;
  uVar6 = (uint)(byte)((char)uVar5 - (char)iVar7);
  while( true ) {
    uVar6 = uVar6 & 0x3f;
    if ((int)uVar8 < (int)uVar6) break;
    uVar8 = uVar8 - uVar6;
    do {
      uVar5 = *(uint *)((int)param_3 + -2);
      uVar3 = uVar6;
      puVar4 = param_3;
      while (uVar5 < (uint)(param_5 << 0x10)) {
        param_6 = param_6 + 1;
        param_3 = (uint *)((int)puVar4 + 2);
        param_1 = param_1 + 1;
        if (uVar3 - 1 == 0 || (int)uVar3 < 1) goto cf_common_join_006F5339;
        uVar5 = *puVar4;
        uVar3 = uVar3 - 1;
        puVar4 = param_3;
      }
      *param_1 = *param_6;
      param_3 = (uint *)((int)puVar4 + 2);
      param_6 = param_6 + 1;
      param_1 = param_1 + 1;
      uVar6 = uVar3 - 1;
    } while (uVar6 != 0 && 0 < (int)uVar3);
cf_common_join_006F5339:
    uVar6 = uVar8;
    if ((int)uVar8 < 1) goto cf_common_join_006F53A7;
    bVar1 = *param_6;
    uVar6 = (uint)bVar1;
    param_6 = param_6 + 1;
    if ((bVar1 & 0x80) == 0) {
LAB_006f532e:
      if ((int)uVar8 < (int)uVar6) {
        if (0 < (int)uVar8) {
          uVar6 = uVar6 - uVar8;
          param_1 = param_1 + uVar8;
          param_3 = (uint *)((int)param_3 + uVar8 * 2);
        }
        goto cf_common_join_006F53A7;
      }
      uVar8 = uVar8 - uVar6;
      param_1 = param_1 + uVar6;
      param_3 = (uint *)((int)param_3 + uVar6 * 2);
      goto cf_common_join_006F5339;
    }
    if ((bVar1 & 0x40) != 0) {
LAB_006f52de:
      uVar6 = uVar6 & 0x3f;
      pbVar9 = param_6 + 1;
      bVar1 = *param_6;
      if ((int)uVar8 < (int)uVar6) {
        uVar6 = uVar6 | 0xc0;
        if ((int)uVar8 < 1) goto cf_common_join_006F53A7;
        uVar6 = uVar6 - uVar8;
        goto LAB_006f5352;
      }
      uVar8 = uVar8 - uVar6;
      do {
        uVar5 = *(uint *)((int)param_3 + -2);
        uVar3 = uVar6;
        puVar4 = param_3;
        while (param_6 = pbVar9, uVar5 < (uint)(param_5 << 0x10)) {
          param_3 = (uint *)((int)puVar4 + 2);
          param_1 = param_1 + 1;
          if (uVar3 - 1 == 0 || (int)uVar3 < 1) goto cf_common_join_006F5339;
          uVar5 = *puVar4;
          uVar3 = uVar3 - 1;
          puVar4 = param_3;
        }
        *param_1 = bVar1;
        param_1 = param_1 + 1;
        param_3 = (uint *)((int)puVar4 + 2);
        uVar6 = uVar3 - 1;
      } while (uVar6 != 0 && 0 < (int)uVar3);
      goto cf_common_join_006F5339;
    }
  }
  uVar6 = uVar6 | 0x80;
  if (0 < (int)uVar8) {
    uVar6 = uVar6 - uVar8;
    do {
      uVar5 = *(uint *)((int)param_3 + -2);
      uVar3 = uVar8;
      puVar4 = param_3;
      while (uVar5 < (uint)(param_5 << 0x10)) {
        param_6 = param_6 + 1;
        param_3 = (uint *)((int)puVar4 + 2);
        param_1 = param_1 + 1;
        if (uVar3 - 1 == 0 || (int)uVar3 < 1) goto cf_common_join_006F53A7;
        uVar5 = *puVar4;
        uVar3 = uVar3 - 1;
        puVar4 = param_3;
      }
      *param_1 = *param_6;
      param_3 = (uint *)((int)puVar4 + 2);
      param_6 = param_6 + 1;
      param_1 = param_1 + 1;
      uVar8 = uVar3 - 1;
    } while (uVar8 != 0 && 0 < (int)uVar3);
  }
  goto cf_common_join_006F53A7;
LAB_006f5352:
  do {
    uVar5 = *(uint *)((int)param_3 + -2);
    puVar4 = param_3;
    uVar3 = uVar8;
    while (uVar5 < (uint)(param_5 << 0x10)) {
      param_3 = (uint *)((int)puVar4 + 2);
      param_1 = param_1 + 1;
      if (uVar3 - 1 == 0 || (int)uVar3 < 1) goto cf_common_join_006F53A7;
      uVar5 = *puVar4;
      puVar4 = param_3;
      uVar3 = uVar3 - 1;
    }
    *param_1 = bVar1;
    param_1 = param_1 + 1;
    param_3 = (uint *)((int)puVar4 + 2);
    uVar8 = uVar3 - 1;
  } while (uVar8 != 0 && 0 < (int)uVar3);
cf_common_join_006F53A7:
  iVar7 = (param_7 - param_9) - param_8;
  while( true ) {
    while( true ) {
      pbVar9 = param_6;
      if ((uVar6 & 0x80) == 0) {
        do {
          if (iVar7 <= (int)uVar6) goto cf_continue_loop_006F53F2;
          iVar7 = iVar7 - uVar6;
          bVar1 = *param_6;
          uVar6 = (uint)bVar1;
          param_6 = param_6 + 1;
          pbVar9 = param_6;
        } while ((bVar1 & 0x80) == 0);
      }
      if ((uVar6 & 0x40) == 0) break;
      param_6 = pbVar9 + 1;
      if (iVar7 <= (int)(uVar6 & 0xffffff3f)) goto cf_continue_loop_006F53F2;
      iVar7 = iVar7 - (uVar6 & 0xffffff3f);
      uVar6 = (uint)*param_6;
      param_6 = pbVar9 + 2;
    }
    uVar8 = uVar6 & 0xffffff3f;
    if (iVar7 <= (int)uVar8) break;
    iVar7 = iVar7 - uVar8;
    uVar6 = (uint)pbVar9[uVar8];
    param_6 = pbVar9 + uVar8 + 1;
  }
  param_6 = pbVar9 + uVar8;
cf_continue_loop_006F53F2:
  param_3 = (uint *)((int)param_3 + param_9 * -2 + param_4);
  param_1 = param_1 + (param_2 - param_9);
  iVar7 = param_10 + -1;
  bVar2 = param_10 < 1;
  param_10 = iVar7;
  if (iVar7 == 0 || bVar2) {
    return;
  }
  goto LAB_006f5259;
}

