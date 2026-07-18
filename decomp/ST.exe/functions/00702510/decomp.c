
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00702510(undefined1 *param_1,int param_2,byte *param_3,int param_4,ushort *param_5,
                 int param_6,uint param_7,byte *param_8,int param_9,int param_10,int param_11,
                 int param_12,int param_13,int param_14,int param_15)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  ushort *puVar5;
  ushort *puVar6;
  byte bVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint local_10;
  uint local_c;
  int local_8;
  
  _DAT_00857000 = 1;
  iVar3 = param_12;
joined_r0x0070252a:
  param_12 = iVar3 + -1;
  if (param_12 < 0) {
    return;
  }
  if (param_14 == 1) {
    param_12 = iVar3 + -2;
    if (param_12 < 0) {
      return;
    }
    uVar2 = (uint)*param_8;
    param_8 = param_8 + 1;
    iVar3 = param_9;
    if (uVar2 != 0) {
      while( true ) {
        if ((uVar2 & 0x80) == 0) {
          uVar1 = uVar2 & 0x7f;
        }
        else if ((uVar2 & 0x40) == 0) {
          param_8 = param_8 + (uVar2 & 0x3f);
          uVar1 = uVar2 & 0x3f;
        }
        else {
          param_8 = param_8 + 1;
          uVar1 = uVar2 & 0x3f;
        }
        if ((int)(iVar3 - uVar1) < 1) break;
        uVar2 = (uint)*param_8;
        param_8 = param_8 + 1;
        iVar3 = iVar3 - uVar1;
      }
    }
    param_14 = 2;
  }
  local_c = (uint)*param_8;
  param_8 = param_8 + 1;
  if (local_c != 0) {
    local_8 = param_10;
    do {
      if ((local_c & 0x80) == 0) {
        uVar2 = local_c & 0x7f;
        if (local_8 < (int)uVar2) goto LAB_007025f2;
      }
      else {
        uVar2 = local_c & 0x3f;
        if (local_8 < (int)uVar2) goto LAB_007025f2;
        if ((local_c & 0x40) == 0) {
          param_8 = param_8 + uVar2;
        }
        else {
          param_8 = param_8 + 1;
        }
      }
      local_8 = local_8 - uVar2;
      local_c = (uint)*param_8;
      param_8 = param_8 + 1;
    } while( true );
  }
  goto LAB_007029e6;
LAB_007025f2:
  uVar2 = uVar2 - local_8;
  if (((byte)local_c & 0xc0) == 0x80) {
    param_8 = param_8 + local_8;
  }
  local_8 = param_11;
  iVar3 = param_13;
  puVar6 = param_5;
  puVar9 = param_1;
  pbVar11 = param_3;
  if ((int)uVar2 <= param_11) {
    do {
      local_10 = local_c & 0x80;
      local_8 = local_8 - uVar2;
      if (local_10 == 0) {
        if (-1 < (int)(uVar2 - 1)) {
          do {
            if (iVar3 != 1) {
              puVar9 = puVar9 + 1;
              pbVar11 = pbVar11 + 1;
              puVar6 = puVar6 + 1;
            }
            iVar3 = iVar3 + 1;
            if (2 < iVar3) {
              iVar3 = 0;
            }
            uVar2 = uVar2 - 1;
          } while (uVar2 != 0);
        }
      }
      else if ((local_c & 0x40) == 0) {
        puVar5 = puVar6;
        puVar8 = puVar9;
        pbVar10 = pbVar11;
        pbVar4 = param_8;
        if (0 < iVar3) {
          if (iVar3 == 1) {
            param_8 = param_8 + 1;
            uVar2 = uVar2 - 1;
            iVar3 = 2;
          }
          if ((int)uVar2 < 1) goto LAB_007027b9;
          if (param_7 <= *puVar6) {
            *puVar9 = *(undefined1 *)((uint)*pbVar11 + param_15);
          }
          puVar5 = puVar6 + 1;
          puVar8 = puVar9 + 1;
          pbVar10 = pbVar11 + 1;
          pbVar4 = param_8 + 1;
          iVar3 = 0;
          uVar2 = uVar2 - 1;
        }
        for (; puVar6 = puVar5, puVar9 = puVar8, pbVar11 = pbVar10, param_8 = pbVar4, 0 < (int)uVar2
            ; uVar2 = uVar2 - 3) {
          if (param_7 <= *puVar5) {
            *puVar8 = *(undefined1 *)((uint)*pbVar10 + param_15);
          }
          puVar6 = puVar5 + 1;
          puVar9 = puVar8 + 1;
          pbVar11 = pbVar10 + 1;
          param_8 = pbVar4 + 1;
          iVar3 = 1;
          if ((int)(uVar2 - 1) < 1) break;
          param_8 = pbVar4 + 2;
          iVar3 = 2;
          if ((int)(uVar2 - 2) < 1) break;
          if (param_7 <= *puVar6) {
            *puVar9 = *(undefined1 *)((uint)*pbVar11 + param_15);
          }
          iVar3 = 0;
          puVar5 = puVar5 + 2;
          puVar8 = puVar8 + 2;
          pbVar10 = pbVar10 + 2;
          pbVar4 = pbVar4 + 3;
        }
      }
      else {
        param_8 = param_8 + 1;
        puVar5 = puVar6;
        puVar8 = puVar9;
        pbVar10 = pbVar11;
        if (0 < iVar3) {
          if (iVar3 == 1) {
            iVar3 = 2;
            uVar2 = uVar2 - 1;
          }
          if ((int)uVar2 < 1) goto LAB_007027b9;
          if (param_7 <= *puVar6) {
            *puVar9 = *(undefined1 *)((uint)*pbVar11 + param_15);
          }
          puVar5 = puVar6 + 1;
          puVar8 = puVar9 + 1;
          pbVar10 = pbVar11 + 1;
          iVar3 = 0;
          uVar2 = uVar2 - 1;
        }
        for (; puVar6 = puVar5, puVar9 = puVar8, pbVar11 = pbVar10, 0 < (int)uVar2;
            uVar2 = uVar2 - 3) {
          if (param_7 <= *puVar5) {
            *puVar8 = *(undefined1 *)((uint)*pbVar10 + param_15);
          }
          puVar6 = puVar5 + 1;
          puVar9 = puVar8 + 1;
          pbVar11 = pbVar10 + 1;
          iVar3 = 1;
          if (((int)(uVar2 - 1) < 1) || (iVar3 = 2, (int)(uVar2 - 2) < 1)) break;
          if (param_7 <= *puVar6) {
            *puVar9 = *(undefined1 *)((uint)*pbVar11 + param_15);
          }
          iVar3 = 0;
          puVar5 = puVar5 + 2;
          puVar8 = puVar8 + 2;
          pbVar10 = pbVar10 + 2;
        }
      }
LAB_007027b9:
      if (local_8 < 1) {
        uVar2 = 0;
        break;
      }
      bVar7 = *param_8;
      local_c = (uint)bVar7;
      param_8 = param_8 + 1;
      if ((bVar7 & 0x80) == 0) {
        uVar2 = bVar7 & 0x7f;
      }
      else {
        uVar2 = bVar7 & 0x3f;
      }
    } while ((int)uVar2 <= local_8);
  }
  uVar2 = uVar2 - local_8;
  if ((0 < local_8) && ((local_c & 0x80) != 0)) {
    if ((local_c & 0x40) == 0) {
      pbVar10 = param_8;
      if (0 < iVar3) {
        if (iVar3 == 1) {
          param_8 = param_8 + 1;
          local_8 = local_8 + -1;
        }
        if (local_8 < 1) goto LAB_0070298d;
        if (param_7 <= *puVar6) {
          *puVar9 = *(undefined1 *)((uint)*pbVar11 + param_15);
        }
        puVar6 = puVar6 + 1;
        puVar9 = puVar9 + 1;
        pbVar11 = pbVar11 + 1;
        pbVar10 = param_8 + 1;
        local_8 = local_8 + -1;
      }
      for (; param_8 = pbVar10, 0 < local_8; local_8 = local_8 + -3) {
        if (param_7 <= *puVar6) {
          *puVar9 = *(undefined1 *)((uint)*pbVar11 + param_15);
        }
        param_8 = pbVar10 + 1;
        if ((local_8 + -1 < 1) || (param_8 = pbVar10 + 2, local_8 + -2 < 1)) break;
        if (param_7 <= puVar6[1]) {
          puVar9[1] = *(undefined1 *)((uint)pbVar11[1] + param_15);
        }
        puVar6 = puVar6 + 2;
        puVar9 = puVar9 + 2;
        pbVar11 = pbVar11 + 2;
        pbVar10 = pbVar10 + 3;
      }
    }
    else {
      param_8 = param_8 + 1;
      if (0 < iVar3) {
        if (iVar3 == 1) {
          local_8 = local_8 + -1;
        }
        if (local_8 < 1) goto LAB_0070298d;
        if (param_7 <= *puVar6) {
          *puVar9 = *(undefined1 *)((uint)*pbVar11 + param_15);
        }
        puVar6 = puVar6 + 1;
        puVar9 = puVar9 + 1;
        pbVar11 = pbVar11 + 1;
        local_8 = local_8 + -1;
      }
      for (; 0 < local_8; local_8 = local_8 + -3) {
        if (param_7 <= *puVar6) {
          *puVar9 = *(undefined1 *)((uint)*pbVar11 + param_15);
        }
        if ((local_8 + -1 < 1) || (local_8 + -2 < 1)) break;
        if (param_7 <= puVar6[1]) {
          puVar9[1] = *(undefined1 *)((uint)pbVar11[1] + param_15);
        }
        puVar6 = puVar6 + 2;
        puVar9 = puVar9 + 2;
        pbVar11 = pbVar11 + 2;
      }
    }
  }
LAB_0070298d:
  bVar7 = (byte)local_c;
  iVar3 = (param_9 - param_10) - param_11;
  if ((int)uVar2 < iVar3) {
    do {
      iVar3 = iVar3 - uVar2;
      if (((byte)local_c & 0xc0) == 0x80) {
        param_8 = param_8 + uVar2;
      }
      bVar7 = *param_8;
      local_c = (uint)bVar7;
      uVar2 = local_c;
      pbVar11 = param_8 + 1;
      if (((bVar7 & 0x80) != 0) && (uVar2 = local_c & 0x3f, (bVar7 & 0x40) != 0)) {
        pbVar11 = param_8 + 2;
      }
      param_8 = pbVar11;
    } while ((int)uVar2 < iVar3);
  }
  if ((bVar7 & 0xc0) == 0x80) {
    param_8 = param_8 + iVar3;
  }
LAB_007029e6:
  param_1 = param_1 + param_2;
  param_5 = (ushort *)((int)param_5 + param_6);
  param_3 = param_3 + param_4;
  param_14 = param_14 + 1;
  iVar3 = param_12;
  if (2 < param_14) {
    param_14 = 0;
  }
  goto joined_r0x0070252a;
}

