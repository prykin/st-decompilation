
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __cdecl FUN_00726d80(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  int *local_30;
  int *local_2c;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = DAT_008570d0;
  local_10 = DAT_00857054;
  local_c = DAT_00857050;
  local_30 = &DAT_00857044;
  local_2c = &DAT_008570ac;
  local_18 = DAT_008570c8;
  local_14 = DAT_008570cc >> 0x10;
  do {
    iVar5 = local_2c[1];
    iVar9 = local_2c[-1];
    iVar1 = local_30[-1];
    iVar11 = *local_2c >> 0x10;
    iVar2 = *local_30;
    iVar6 = iVar11 - local_14;
    if (iVar6 < 1) {
      if (iVar6 < 0) {
        iVar7 = -iVar6;
        DAT_00857094 = (local_18 - iVar9) / iVar7;
        DAT_008570e4 = (local_8 - iVar5) / iVar7;
        DAT_008570fc = (local_c - iVar1) / iVar7;
        _DAT_00857080 = (local_10 - iVar2) / iVar7;
        local_1c = iVar11;
        local_18 = iVar9;
        local_10 = iVar2;
        local_c = iVar1;
        local_8 = iVar5;
        if (iVar11 < DAT_00857064) {
          iVar8 = DAT_00857064 - iVar11;
          if (-iVar8 != iVar6 && -1 < iVar7 + -iVar8) {
            local_18 = DAT_00857094 * iVar8 + iVar9;
            local_8 = DAT_008570e4 * iVar8 + iVar5;
            local_c = DAT_008570fc * iVar8 + iVar1;
            local_10 = _DAT_00857080 * iVar8 + iVar2;
          }
          local_1c = DAT_00857064;
        }
        if (DAT_008570ec < local_14) {
          local_14 = DAT_008570ec;
        }
        if (local_1c < local_14) {
          piVar12 = param_1 + (local_1c - DAT_00857064) * 8;
          iVar6 = local_14 - local_1c;
          do {
            piVar12[1] = local_8;
            piVar12[2] = local_c;
            *piVar12 = local_18 >> 0x10;
            piVar12[3] = local_10;
            local_18 = local_18 + DAT_00857094;
            local_8 = local_8 + DAT_008570e4;
            local_c = local_c + DAT_008570fc;
            local_10 = local_10 + _DAT_00857080;
            piVar12 = piVar12 + 8;
            iVar7 = iVar6 + -1;
            bVar3 = 0 < iVar6;
            iVar6 = iVar7;
          } while (iVar7 != 0 && bVar3);
        }
      }
    }
    else {
      DAT_00857094 = (iVar9 - local_18) / iVar6;
      DAT_008570e4 = (iVar5 - local_8) / iVar6;
      DAT_008570fc = (iVar1 - local_c) / iVar6;
      _DAT_00857080 = (iVar2 - local_10) / iVar6;
      local_1c = local_14;
      if (local_14 < DAT_00857064) {
        local_14 = DAT_00857064 - local_14;
        if (iVar6 != local_14 && -1 < iVar6 - local_14) {
          local_18 = local_18 + DAT_00857094 * local_14;
          local_8 = local_8 + DAT_008570e4 * local_14;
          local_c = local_c + DAT_008570fc * local_14;
          local_10 = local_10 + _DAT_00857080 * local_14;
        }
        local_1c = DAT_00857064;
      }
      local_14 = iVar11;
      if (DAT_008570ec < iVar11) {
        local_14 = DAT_008570ec;
      }
      if (local_1c < local_14) {
        piVar12 = param_1 + (local_1c - DAT_00857064) * 8;
        iVar6 = local_14 - local_1c;
        do {
          piVar12[5] = local_8;
          piVar12[6] = local_c;
          piVar12[4] = local_18 >> 0x10;
          piVar12[7] = local_10;
          local_18 = local_18 + DAT_00857094;
          local_8 = local_8 + DAT_008570e4;
          local_c = local_c + DAT_008570fc;
          local_10 = local_10 + _DAT_00857080;
          piVar12 = piVar12 + 8;
          iVar7 = iVar6 + -1;
          bVar3 = 0 < iVar6;
          iVar6 = iVar7;
        } while (iVar7 != 0 && bVar3);
      }
    }
    local_2c = local_2c + 4;
    local_30 = local_30 + 2;
    local_18 = iVar9;
    local_14 = iVar11;
    local_10 = iVar2;
    local_c = iVar1;
    local_8 = iVar5;
  } while ((int)local_2c < 0x8570cd);
  iVar5 = DAT_008570ec - DAT_00857064;
  if (param_2 == 0) {
    do {
      while( true ) {
        iVar9 = param_1[4];
        uVar10 = iVar9 - *param_1;
        param_1[4] = uVar10;
        if (uVar10 != 0 && *param_1 <= iVar9) break;
LAB_00727219:
        param_1 = param_1 + 8;
        iVar9 = iVar5 + -1;
        bVar3 = iVar5 < 1;
        iVar5 = iVar9;
        if (iVar9 == 0 || bVar3) {
          return;
        }
      }
      if (uVar10 == 1) {
        param_1[5] = 0;
        param_1[6] = 0;
        param_1[7] = 0;
        goto LAB_00727219;
      }
      if (uVar10 < 200) {
        iVar9 = *(int *)(&DAT_007f0d48 + uVar10 * 4);
        lVar4 = (longlong)(param_1[5] - param_1[1]) * (longlong)iVar9;
        param_1[5] = (uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10;
        lVar4 = (longlong)(param_1[6] - param_1[2]) * (longlong)iVar9;
        param_1[6] = (uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10;
        lVar4 = (longlong)(param_1[7] - param_1[3]) * (longlong)iVar9;
        param_1[7] = (uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10;
        param_1 = param_1 + 8;
        iVar9 = iVar5 + -1;
        bVar3 = iVar5 < 1;
        iVar5 = iVar9;
        if (iVar9 == 0 || bVar3) {
          return;
        }
      }
      else {
        param_1[5] = (param_1[5] - param_1[1]) / (int)uVar10;
        param_1[6] = (param_1[6] - param_1[2]) / (int)uVar10;
        param_1[7] = (param_1[7] - param_1[3]) / (int)uVar10;
        param_1 = param_1 + 8;
        iVar9 = iVar5 + -1;
        bVar3 = iVar5 < 1;
        iVar5 = iVar9;
        if (iVar9 == 0 || bVar3) {
          return;
        }
      }
    } while( true );
  }
  do {
    iVar9 = param_1[4];
    iVar1 = *param_1;
    if (((DAT_00857060 < iVar9) && (iVar1 < DAT_008570e8)) &&
       (uVar10 = iVar9 - iVar1, uVar10 != 0 && iVar1 <= iVar9)) {
      if (uVar10 == 1) {
        param_1[4] = 1;
        param_1[5] = 0;
        param_1[6] = 0;
        param_1[7] = 0;
        if ((iVar1 < DAT_00857060) || (DAT_008570e8 <= iVar1)) goto LAB_0072716f;
      }
      else {
        if (uVar10 < 200) {
          iVar9 = *(int *)(&DAT_007f0d48 + uVar10 * 4);
          lVar4 = (longlong)(param_1[5] - param_1[1]) * (longlong)iVar9;
          param_1[5] = (uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10;
          lVar4 = (longlong)(param_1[6] - param_1[2]) * (longlong)iVar9;
          param_1[6] = (uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10;
          lVar4 = (longlong)(param_1[7] - param_1[3]) * (longlong)iVar9;
          param_1[7] = (uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10;
        }
        else {
          param_1[5] = (param_1[5] - param_1[1]) / (int)uVar10;
          param_1[6] = (param_1[6] - param_1[2]) / (int)uVar10;
          param_1[7] = (param_1[7] - param_1[3]) / (int)uVar10;
        }
        iVar9 = param_1[4] - DAT_008570e8;
        if (iVar9 != 0 && DAT_008570e8 <= param_1[4]) {
          uVar10 = uVar10 - iVar9;
        }
        iVar9 = *param_1 - DAT_00857060;
        if (*param_1 < DAT_00857060) {
          uVar10 = uVar10 + iVar9;
          *param_1 = DAT_00857060;
          iVar9 = -iVar9;
          param_1[1] = param_1[1] + param_1[5] * iVar9;
          param_1[2] = param_1[2] + param_1[6] * iVar9;
          param_1[3] = param_1[3] + param_1[7] * iVar9;
        }
        param_1[4] = uVar10;
      }
    }
    else {
LAB_0072716f:
      param_1[4] = 0;
    }
    param_1 = param_1 + 8;
    iVar9 = iVar5 + -1;
    bVar3 = iVar5 < 1;
    iVar5 = iVar9;
    if (iVar9 == 0 || bVar3) {
      return;
    }
  } while( true );
}

