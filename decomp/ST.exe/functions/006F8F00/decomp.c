
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f8f00(byte *param_1,int param_2,ushort *param_3,int param_4,uint param_5,byte *param_6,
                 int param_7,int param_8,int param_9,int param_10,int param_11,int param_12,
                 byte *param_13,int param_14,int param_15)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3_mg0;
  byte *pbVar3;
  ushort *puVar4;
  ushort *puVar5;
  byte bVar6;
  byte bVar7;
  byte *pbVar8_mg2;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10_mg0;
  byte *pbVar10;
  uint local_14;
  uint local_10;
  ushort *local_c;
  int local_8;

  _DAT_00857000 = 1;
  iVar8 = param_10;
/* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
joined_r0x006f8f1a:
  param_10 = iVar8 + -1;
  if (param_10 < 0) {
    return;
  }
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (param_12 == 1) {
    param_10 = iVar8 + -2;
    if (param_10 < 0) {
      return;
    }
    uVar2 = (uint)*param_6;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_6 = param_6 + 1;
    iVar8 = param_7;
    if (uVar2 != 0) {
      while( true ) {
        if ((uVar2 & 0x80) == 0) {
          uVar1 = uVar2 & 0x7f;
        }
        else if ((uVar2 & 0x40) == 0) {
          param_6 = param_6 + (uVar2 & 0x3f);
          uVar1 = uVar2 & 0x3f;
        }
        else {
          param_6 = param_6 + 1;
          uVar1 = uVar2 & 0x3f;
        }
        if ((int)(iVar8 - uVar1) < 1) break;
        uVar2 = (uint)*param_6;
        param_6 = param_6 + 1;
        iVar8 = iVar8 - uVar1;
      }
    }
    param_12 = 2;
  }
  local_10 = (uint)*param_6;
  param_6 = param_6 + 1;
  if (local_10 != 0) {
    local_8 = param_8;
    do {
      if ((local_10 & 0x80) == 0) {
        uVar2 = local_10 & 0x7f;
        if (local_8 < (int)uVar2) goto LAB_006f8fe5;
      }
      else {
        uVar2 = local_10 & 0x3f;
        if (local_8 < (int)uVar2) goto LAB_006f8fe5;
        if ((local_10 & 0x40) == 0) {
          param_6 = param_6 + uVar2;
        }
        else {
          param_6 = param_6 + 1;
        }
      }
      local_8 = local_8 - uVar2;
      local_10 = (uint)*param_6;
      param_6 = param_6 + 1;
    } while( true );
  }
  goto LAB_006f947d;
LAB_006f8fe5:
  uVar2 = uVar2 - local_8;
  if (((byte)local_10 & 0xc0) == 0x80) {
    param_6 = param_6 + local_8;
  }
  local_8 = param_9;
  pbVar3_mg0 = param_1;
  puVar4 = param_3;
  iVar8 = param_11;
  pbVar10_mg0 = param_13;
  local_c = param_3;
  if ((int)uVar2 <= param_9) {
    do {
      local_14 = local_10 & 0x80;
      local_8 = local_8 - uVar2;
      if (local_14 == 0) {
        if (-1 < (int)(uVar2 - 1)) {
          do {
            if (iVar8 != 1) {
              pbVar3_mg0 = pbVar3_mg0 + 1;
              pbVar10_mg0 = pbVar10_mg0 + 1;
              puVar4 = puVar4 + 1;
            }
            iVar8 = iVar8 + 1;
            if (2 < iVar8) {
              iVar8 = 0;
            }
            uVar2 = uVar2 - 1;
            local_c = puVar4;
          } while (uVar2 != 0);
        }
      }
      else if ((local_10 & 0x40) == 0) {
        pbVar3 = pbVar3_mg0;
        puVar5 = puVar4;
        pbVar10 = pbVar10_mg0;
        pbVar9 = param_6;
        if (0 < iVar8) {
          if (iVar8 == 1) {
            param_6 = param_6 + 1;
            uVar2 = uVar2 - 1;
            iVar8 = 2;
          }
          if ((int)uVar2 < 1) goto LAB_006f9103;
          if (*puVar4 < param_5) {
            bVar7 = *(byte *)((uint)*pbVar10_mg0 + param_15);
          }
          else {
            bVar7 = *param_6;
          }
          *pbVar3_mg0 = bVar7;
          puVar5 = puVar4 + 1;
          pbVar3 = pbVar3_mg0 + 1;
          pbVar10 = pbVar10_mg0 + 1;
          pbVar9 = param_6 + 1;
          iVar8 = 0;
          uVar2 = uVar2 - 1;
          local_c = puVar5;
        }
        for (; pbVar3_mg0 = pbVar3, puVar4 = puVar5, pbVar10_mg0 = pbVar10, param_6 = pbVar9,
            0 < (int)uVar2; uVar2 = uVar2 - 3) {
          if (*puVar5 < param_5) {
            bVar7 = *(byte *)((uint)*pbVar10 + param_15);
          }
          else {
            bVar7 = *pbVar9;
          }
          *pbVar3 = bVar7;
          puVar4 = puVar5 + 1;
          pbVar3_mg0 = pbVar3 + 1;
          pbVar10_mg0 = pbVar10 + 1;
          param_6 = pbVar9 + 1;
          iVar8 = 1;
          local_c = puVar4;
          if ((int)(uVar2 - 1) < 1) break;
          param_6 = pbVar9 + 2;
          iVar8 = 2;
          if ((int)(uVar2 - 2) < 1) break;
          if (*puVar4 < param_5) {
            bVar7 = *(byte *)((uint)*pbVar10_mg0 + param_15);
          }
          else {
            bVar7 = *param_6;
          }
          *pbVar3_mg0 = bVar7;
          puVar5 = puVar5 + 2;
          iVar8 = 0;
          pbVar3 = pbVar3 + 2;
          pbVar10 = pbVar10 + 2;
          pbVar9 = pbVar9 + 3;
          local_c = puVar5;
        }
      }
      else {
        bVar7 = *param_6;
        param_6 = param_6 + 1;
        pbVar3 = pbVar3_mg0;
        pbVar10 = pbVar10_mg0;
        puVar5 = local_c;
        if (0 < iVar8) {
          if (iVar8 == 1) {
            iVar8 = 2;
            uVar2 = uVar2 - 1;
          }
          puVar4 = local_c;
          if ((int)uVar2 < 1) goto LAB_006f9103;
          if (*local_c < param_5) {
            iVar8 = 0;
            *pbVar3_mg0 = *(byte *)((uint)*pbVar10_mg0 + param_15);
            uVar2 = uVar2 - 1;
            pbVar3 = pbVar3_mg0 + 1;
            pbVar10 = pbVar10_mg0 + 1;
            puVar5 = local_c + 1;
          }
          else {
            *pbVar3_mg0 = bVar7;
            iVar8 = 0;
            uVar2 = uVar2 - 1;
            pbVar3 = pbVar3_mg0 + 1;
            pbVar10 = pbVar10_mg0 + 1;
            puVar5 = local_c + 1;
          }
        }
        for (; pbVar3_mg0 = pbVar3, puVar4 = puVar5, pbVar10_mg0 = pbVar10, local_c = puVar5,
            0 < (int)uVar2; uVar2 = uVar2 - 3) {
          bVar6 = bVar7;
          if (*puVar5 < param_5) {
            bVar6 = *(byte *)((uint)*pbVar10 + param_15);
          }
          *pbVar3 = bVar6;
          puVar4 = puVar5 + 1;
          pbVar3_mg0 = pbVar3 + 1;
          pbVar10_mg0 = pbVar10 + 1;
          iVar8 = 1;
          local_c = puVar4;
          if (((int)(uVar2 - 1) < 1) || (iVar8 = 2, (int)(uVar2 - 2) < 1)) break;
          bVar6 = bVar7;
          if (*puVar4 < param_5) {
            bVar6 = *(byte *)((uint)*pbVar10_mg0 + param_15);
          }
          *pbVar3_mg0 = bVar6;
          iVar8 = 0;
          pbVar3 = pbVar3 + 2;
          pbVar10 = pbVar10 + 2;
          puVar5 = puVar5 + 2;
        }
      }
LAB_006f9103:
      if (local_8 < 1) {
        uVar2 = 0;
        break;
      }
      bVar7 = *param_6;
      local_10 = (uint)bVar7;
      param_6 = param_6 + 1;
      if ((bVar7 & 0x80) == 0) {
        uVar2 = bVar7 & 0x7f;
      }
      else {
        uVar2 = bVar7 & 0x3f;
      }
    } while ((int)uVar2 <= local_8);
  }
  uVar2 = uVar2 - local_8;
  if ((0 < local_8) && ((local_10 & 0x80) != 0)) {
    if ((local_10 & 0x40) == 0) {
      pbVar8_mg2 = param_6;
      if (0 < iVar8) {
        if (iVar8 == 1) {
          param_6 = param_6 + 1;
          local_8 = local_8 + -1;
        }
        if (local_8 < 1) goto LAB_006f9425;
        if (*puVar4 < param_5) {
          bVar7 = *(byte *)((uint)*pbVar10_mg0 + param_15);
        }
        else {
          bVar7 = *param_6;
        }
        *pbVar3_mg0 = bVar7;
        puVar4 = puVar4 + 1;
        pbVar3_mg0 = pbVar3_mg0 + 1;
        pbVar10_mg0 = pbVar10_mg0 + 1;
        pbVar8_mg2 = param_6 + 1;
        local_8 = local_8 + -1;
      }
      for (; param_6 = pbVar8_mg2, 0 < local_8; local_8 = local_8 + -3) {
        if (*puVar4 < param_5) {
          bVar7 = *(byte *)((uint)*pbVar10_mg0 + param_15);
        }
        else {
          bVar7 = *pbVar8_mg2;
        }
        *pbVar3_mg0 = bVar7;
        param_6 = pbVar8_mg2 + 1;
        if ((local_8 + -1 < 1) || (param_6 = pbVar8_mg2 + 2, local_8 + -2 < 1)) break;
        if (puVar4[1] < param_5) {
          bVar7 = *(byte *)((uint)pbVar10_mg0[1] + param_15);
        }
        else {
          bVar7 = *param_6;
        }
        pbVar3_mg0[1] = bVar7;
        puVar4 = puVar4 + 2;
        pbVar3_mg0 = pbVar3_mg0 + 2;
        pbVar10_mg0 = pbVar10_mg0 + 2;
        pbVar8_mg2 = pbVar8_mg2 + 3;
      }
    }
    else {
      bVar7 = *param_6;
      param_6 = param_6 + 1;
      if (0 < iVar8) {
        if (iVar8 == 1) {
          local_8 = local_8 + -1;
        }
        if (local_8 < 1) goto LAB_006f9425;
        if (*local_c < param_5) {
          *pbVar3_mg0 = *(byte *)((uint)*pbVar10_mg0 + param_15);
          local_c = local_c + 1;
          pbVar3_mg0 = pbVar3_mg0 + 1;
          pbVar10_mg0 = pbVar10_mg0 + 1;
          local_8 = local_8 + -1;
        }
        else {
          *pbVar3_mg0 = bVar7;
          local_c = local_c + 1;
          pbVar3_mg0 = pbVar3_mg0 + 1;
          pbVar10_mg0 = pbVar10_mg0 + 1;
          local_8 = local_8 + -1;
        }
      }
      for (; 0 < local_8; local_8 = local_8 + -3) {
        bVar6 = bVar7;
        if (*local_c < param_5) {
          bVar6 = *(byte *)((uint)*pbVar10_mg0 + param_15);
        }
        *pbVar3_mg0 = bVar6;
        if ((local_8 + -1 < 1) || (local_8 + -2 < 1)) break;
        bVar6 = bVar7;
        if (local_c[1] < param_5) {
          bVar6 = *(byte *)((uint)pbVar10_mg0[1] + param_15);
        }
        pbVar3_mg0[1] = bVar6;
        local_c = local_c + 2;
        pbVar3_mg0 = pbVar3_mg0 + 2;
        pbVar10_mg0 = pbVar10_mg0 + 2;
      }
    }
  }
LAB_006f9425:
  bVar7 = (byte)local_10;
  iVar8 = (param_7 - param_8) - param_9;
  if ((int)uVar2 < iVar8) {
    do {
      iVar8 = iVar8 - uVar2;
      if (((byte)local_10 & 0xc0) == 0x80) {
        param_6 = param_6 + uVar2;
      }
      bVar7 = *param_6;
      local_10 = (uint)bVar7;
      uVar2 = local_10;
      pbVar3 = param_6 + 1;
      if (((bVar7 & 0x80) != 0) && (uVar2 = local_10 & 0x3f, (bVar7 & 0x40) != 0)) {
        pbVar3 = param_6 + 2;
      }
      param_6 = pbVar3;
    } while ((int)uVar2 < iVar8);
  }
  if ((bVar7 & 0xc0) == 0x80) {
    param_6 = param_6 + iVar8;
  }
LAB_006f947d:
  param_1 = param_1 + param_2;
  param_3 = (ushort *)((int)param_3 + param_4);
  param_13 = param_13 + param_14;
  param_12 = param_12 + 1;
  iVar8 = param_10;
  if (2 < param_12) {
    param_12 = 0;
  }
  goto joined_r0x006f8f1a;
}

