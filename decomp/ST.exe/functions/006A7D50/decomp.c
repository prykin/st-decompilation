#include "../../pseudocode_runtime.h"


int FUN_006a7d50(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7
                ,int param_8,int param_9,int param_10,undefined4 *param_11,int param_12,
                uint param_13)

{
  int iVar1;
  short sVar2;
  ushort uVar3;
  ushort uVar4;
  short sVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  uint local_4c;
  int local_48;
  int local_44;
  int local_40;
  int *local_3c;
  int local_38;
  uint local_34;
  int local_30;
  uint local_2c;
  undefined4 *local_28;
  uint local_24;
  int local_20;
  ushort *local_1c;
  int local_18;
  uint local_14;
  int local_10;
  int local_c;
  int local_8;

  iVar11 = param_2 * param_3;
  local_10 = param_10;
  local_30 = param_8;
  sVar2 = *(short *)(param_1 + (param_2 * param_9 + param_8 + iVar11 * param_10) * 2);
  local_8 = param_12 + -1;
  puVar12 = param_11 + local_8 * 0x12;
  local_c = param_9;
  *(short *)puVar12 = (short)param_8;
  STField<short>(puVar12,2) = (short)param_9;
  *(short *)(puVar12 + 1) = (short)param_10;
  STField<undefined2>(puVar12,6) = 0;
  local_40 = 0;
  local_44 = 0;
  local_18 = 0;
  STField<undefined2>(puVar12,0xe) = 0x7fff;
  uVar6 = FUN_006a6360(param_5,param_6,param_7,param_8,param_9,param_10);
  local_2c = FUN_006a6320(uVar6);
  if (((param_8 == param_5) && (param_9 == param_6)) && (param_10 == param_7)) {
    local_8 = local_8 + -1;
    puVar12 = param_11 + local_8 * 0x12;
    *(short *)puVar12 = (short)param_5;
    STField<undefined2>(puVar12,2) = (undefined2)param_6;
    *(undefined2 *)(puVar12 + 1) = (undefined2)param_7;
    STField<short>(puVar12,6) = sVar2;
    STField<undefined2>(puVar12,0xe) = 0x7fff;
LAB_006a8234:
    if (0 < local_8) {
      puVar12 = param_11 + local_8 * 0x12;
      for (iVar11 = ((param_12 - local_8) * 9 & 0x1fffffffU) << 1; iVar11 != 0; iVar11 = iVar11 + -1
          ) {
        *param_11 = *puVar12;
        puVar12 = puVar12 + 1;
        param_11 = param_11 + 1;
      }
      for (iVar11 = 0; iVar11 != 0; iVar11 = iVar11 + -1) {
        *(undefined1 *)param_11 = *(undefined1 *)puVar12;
        puVar12 = (undefined4 *)((int)puVar12 + 1);
        param_11 = (undefined4 *)((int)param_11 + 1);
      }
    }
    return (param_12 - local_8) + -1;
  }
  uVar7 = param_13 & 4;
  local_28 = puVar12;
  local_14 = local_2c;
  do {
    auto param_13_after_write = 30000; /* compiler stack-slot lifetime split */
    iVar1 = param_1 + (local_c * param_2 + local_30 + local_10 * iVar11) * 2;
    if (uVar7 == 0) {
      uVar9 = FUN_006a6360(param_5,param_6,param_7,local_30,local_c,local_10);
      local_34 = FUN_006a6320(uVar9);
    }
    else {
      iVar8 = FUN_006a6100(local_30,local_c,local_10,param_8,param_9,param_10,(int *)&local_4c);
      if (iVar8 < 0x1a) {
        local_34 = (uint)(&SHORT_007ed576)[iVar8 * 4];
        local_14 = local_34;
      }
      else {
        local_34 = local_14;
      }
    }
    local_24 = 0;
    local_1c = (ushort *)&SHORT_007ed576;
    local_3c = &DAT_007ed640;
    do {
      iVar8 = (int)(short)local_1c[-3];
      local_20 = local_30 + iVar8;
      if ((-1 < local_20) && (local_20 < param_2)) {
        iVar10 = (int)(short)local_1c[-2];
        local_38 = iVar10 + local_c;
        if ((-1 < local_38) && (local_38 < param_3)) {
          local_48 = local_10 + (short)local_1c[-1];
          if ((-1 < local_48) && (local_48 < param_4)) {
            uVar3 = *local_1c;
            if ((uVar3 & 1) == 0) {
              if (((uVar3 & 0x6000) == 0) || ((uVar3 & 0x9fff) == 0xffe)) {
LAB_006a80b6:
                local_4c = (uint)*(short *)(param_1 +
                                           (local_38 * param_2 + local_20 + local_48 * iVar11) * 2);
                if (((local_20 == param_5) && (local_38 == param_6)) && (local_48 == param_7)) {
                  local_2c = local_24;
                  param_13_after_write = (&DAT_007ed640)[local_24] + local_4c;
                  local_44 = local_38;
                  local_40 = local_20;
                  local_18 = local_48;
                  break;
                }
                if (0 < (int)local_4c) {
                  local_4c = local_4c + *local_3c;
                  if (((int)local_4c < (int)param_13_after_write) ||
                     ((local_4c == param_13_after_write &&
                      (((int)(short)uVar3 == local_14 || ((int)(short)uVar3 == local_34)))))) {
                    local_2c = local_24;
                    param_13_after_write = local_4c;
                    local_44 = local_38;
                    local_40 = local_20;
                    local_18 = local_48;
                  }
                }
              }
              else if ((*(ushort *)(iVar1 + (short)local_1c[-1] * iVar11 * 2) & 0xc000) != 0xc000) {
                if (iVar10 == 0) {
                  uVar4 = *(ushort *)(iVar1 + iVar8 * 2);
                }
                else {
                  uVar4 = *(ushort *)(iVar1 + iVar10 * param_2 * 2);
                }
                goto joined_r0x006a8098;
              }
            }
            else if (((*(ushort *)(iVar1 + iVar8 * 2) & 0xc000) != 0xc000) &&
                    (iVar10 = iVar10 * param_2, (*(ushort *)(iVar1 + iVar10 * 2) & 0xc000) != 0xc000
                    )) {
              if ((uVar3 & 0x4000) == 0) {
                if ((uVar3 & 0x2000) == 0) goto LAB_006a80b6;
                if ((((*(ushort *)(iVar1 + iVar11 * 2) & 0xc000) != 0xc000) &&
                    ((*(ushort *)(iVar1 + (iVar8 + iVar11) * 2) & 0xc000) != 0xc000)) &&
                   ((*(ushort *)(iVar1 + (iVar10 + iVar11) * 2) & 0xc000) != 0xc000)) {
                  uVar4 = *(ushort *)(iVar1 + (iVar10 + iVar8) * 2);
                  goto joined_r0x006a8098;
                }
              }
              else if ((((*(ushort *)(iVar1 + iVar11 * -2) & 0xc000) != 0xc000) &&
                       ((*(ushort *)(iVar1 + (iVar8 - iVar11) * 2) & 0xc000) != 0xc000)) &&
                      ((*(ushort *)(iVar1 + (iVar10 - iVar11) * 2) & 0xc000) != 0xc000)) {
                uVar4 = *(ushort *)(iVar1 + (iVar10 + iVar8) * 2);
joined_r0x006a8098:
                if ((uVar4 & 0xc000) != 0xc000) goto LAB_006a80b6;
              }
            }
          }
        }
      }
      local_3c = local_3c + 1;
      local_24 = local_24 + 1;
      local_1c = local_1c + 4;
    } while ((int)local_3c < 0x7ed6a8);
    sVar5 = (&SHORT_007ed576)[local_2c * 4];
    if (((int)sVar5 != local_14) && (local_8 != param_12 + -1)) {
      local_8 = local_8 + -1;
      *(undefined2 *)(local_28 + -0x12) = (undefined2)local_30;
      *(undefined2 *)((int)local_28 + -0x46) = (undefined2)local_c;
      *(undefined2 *)(local_28 + -0x11) = (undefined2)local_10;
      *(undefined2 *)((int)local_28 + -0x42) = STField<undefined2>(local_28,6);
      local_28 = local_28 + -0x12;
    }
    local_8 = local_8 + -1;
    *(short *)(local_28 + -0x12) = (short)local_40;
    *(short *)((int)local_28 + -0x46) = (short)local_44;
    *(undefined2 *)(local_28 + -0x11) = (undefined2)local_18;
    *(short *)((int)local_28 + -0x42) =
         (*(short *)(&DAT_007ed640 + local_2c) - (short)param_13_after_write) + sVar2;
    *(undefined2 *)((int)local_28 + -0x3a) = 0x7fff;
    if (((local_40 == param_5) && (local_44 == param_6)) && (local_18 == param_7))
    goto LAB_006a8234;
    local_10 = local_18;
    local_30 = local_40;
    local_28 = local_28 + -0x12;
    local_14 = (int)sVar5;
    local_c = local_44;
  } while( true );
}

