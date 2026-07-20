
int FUN_006ae3b0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7
                ,uint param_8,int param_9,int param_10,undefined4 *param_11,int param_12)

{
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  uint local_3c;
  int local_38;
  uint local_30;
  undefined4 *local_2c;
  uint local_28;
  int local_24;
  int local_20;
  uint local_1c;
  ushort *local_18;
  int *local_14;
  int local_8;
  
  iVar4 = param_2 * param_3;
  local_8 = param_12 + -1;
  local_2c = param_11 + local_8 * 2 + 1;
  *(short *)(param_11 + local_8 * 2) = (short)param_8;
  *(short *)((int)param_11 + local_8 * 8 + 2) = (short)param_9;
  *(short *)local_2c = (short)param_10;
  *(undefined2 *)((int)param_11 + local_8 * 8 + 6) = 0;
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_30 = param_8;
  uVar5 = FUN_006a6360(param_5,param_6,param_7,param_8,param_9,param_10);
  local_3c = FUN_006a6320(uVar5);
  local_28 = local_3c;
  if (((param_8 == param_5) && (param_9 == param_6)) && (param_10 == param_7)) {
    local_8 = param_12 + -2;
    *(short *)(param_11 + local_8 * 2) = (short)param_5;
    *(short *)((int)param_11 + local_8 * 8 + 2) = (short)param_6;
    *(short *)(param_11 + local_8 * 2 + 1) = (short)param_7;
  }
  else {
    do {
      local_38 = 30000;
      iVar1 = param_1 + (param_9 * param_2 + local_30 + param_10 * iVar4) * 2;
      uVar5 = FUN_006a6360(param_5,param_6,param_7,local_30,param_9,param_10);
      uVar5 = FUN_006a6320(uVar5);
      param_8 = 0;
      local_18 = (ushort *)&SHORT_007ed576;
      local_14 = &DAT_007ed640;
      do {
        iVar11 = (int)(short)local_18[-3];
        uVar6 = local_30 + iVar11;
        if ((-1 < (int)uVar6) && ((int)uVar6 < param_2)) {
          iVar9 = (int)(short)local_18[-2];
          iVar7 = param_9 + iVar9;
          if ((-1 < iVar7) && (iVar7 < param_3)) {
            iVar8 = param_10 + (short)local_18[-1];
            if ((-1 < iVar8) && (iVar8 < param_4)) {
              uVar2 = *local_18;
              if ((uVar2 & 1) == 0) {
                if (((uVar2 & 0x6000) == 0) || ((uVar2 & 0x9fff) == 0xffe)) {
LAB_006ae68b:
                  iVar11 = (int)*(short *)(param_1 + (iVar7 * param_2 + uVar6 + iVar8 * iVar4) * 2);
                  if (((uVar6 == param_5) && (iVar7 == param_6)) && (iVar8 == param_7)) {
                    local_28 = param_8;
                    local_24 = iVar8;
                    local_20 = iVar7;
                    local_1c = uVar6;
                    break;
                  }
                  if (0 < iVar11) {
                    iVar11 = iVar11 + *local_14;
                    if ((iVar11 < local_38) ||
                       ((iVar11 == local_38 &&
                        (((int)(short)uVar2 == local_3c || ((int)(short)uVar2 == uVar5)))))) {
                      local_28 = param_8;
                      local_38 = iVar11;
                      local_24 = iVar8;
                      local_20 = iVar7;
                      local_1c = uVar6;
                    }
                  }
                }
                else if ((*(ushort *)(iVar1 + (short)local_18[-1] * iVar4 * 2) & 0xc000) != 0xc000)
                {
                  if (iVar9 == 0) {
                    uVar3 = *(ushort *)(iVar1 + iVar11 * 2);
                  }
                  else {
                    uVar3 = *(ushort *)(iVar1 + iVar9 * param_2 * 2);
                  }
                  goto joined_r0x006ae66d;
                }
              }
              else if (((*(ushort *)(iVar1 + iVar11 * 2) & 0xc000) != 0xc000) &&
                      (iVar9 = iVar9 * param_2, (*(ushort *)(iVar1 + iVar9 * 2) & 0xc000) != 0xc000)
                      ) {
                if ((uVar2 & 0x4000) == 0) {
                  if ((uVar2 & 0x2000) == 0) goto LAB_006ae68b;
                  if ((((*(ushort *)(iVar1 + iVar4 * 2) & 0xc000) != 0xc000) &&
                      ((*(ushort *)(iVar1 + (iVar11 + iVar4) * 2) & 0xc000) != 0xc000)) &&
                     ((*(ushort *)(iVar1 + (iVar9 + iVar4) * 2) & 0xc000) != 0xc000)) {
                    uVar3 = *(ushort *)(iVar1 + (iVar9 + iVar11) * 2);
                    goto joined_r0x006ae66d;
                  }
                }
                else if ((((*(ushort *)(iVar1 + iVar4 * -2) & 0xc000) != 0xc000) &&
                         ((*(ushort *)(iVar1 + (iVar11 - iVar4) * 2) & 0xc000) != 0xc000)) &&
                        ((*(ushort *)(iVar1 + (iVar9 - iVar4) * 2) & 0xc000) != 0xc000)) {
                  uVar3 = *(ushort *)(iVar1 + (iVar9 + iVar11) * 2);
joined_r0x006ae66d:
                  if ((uVar3 & 0xc000) != 0xc000) goto LAB_006ae68b;
                }
              }
            }
          }
        }
        param_8 = param_8 + 1;
        local_14 = local_14 + 1;
        local_18 = local_18 + 4;
      } while ((int)local_14 < 0x7ed6a8);
      local_8 = local_8 + -1;
      local_3c = (uint)(&SHORT_007ed576)[local_28 * 4];
      puVar10 = local_2c + -2;
      *(short *)(local_2c + -3) = (short)local_1c;
      *(short *)((int)local_2c + -10) = (short)local_20;
      *(short *)puVar10 = (short)local_24;
      uVar5 = FUN_006a6320(local_3c);
      *(short *)((int)local_2c + 2) = (short)uVar5;
      param_9 = local_20;
      param_10 = local_24;
      local_30 = local_1c;
      local_2c = puVar10;
    } while (((local_1c != param_5) || (local_20 != param_6)) || (local_24 != param_7));
  }
  *(undefined2 *)((int)(param_11 + local_8 * 2) + 6) = 0;
  if (0 < local_8) {
    puVar10 = param_11 + local_8 * 2;
    for (iVar4 = (param_12 - local_8 & 0x1fffffffU) << 1; iVar4 != 0; iVar4 = iVar4 + -1) {
      *param_11 = *puVar10;
      puVar10 = puVar10 + 1;
      param_11 = param_11 + 1;
    }
    for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined1 *)param_11 = *(undefined1 *)puVar10;
      puVar10 = (undefined4 *)((int)puVar10 + 1);
      param_11 = (undefined4 *)((int)param_11 + 1);
    }
  }
  return (param_12 - local_8) + -1;
}

