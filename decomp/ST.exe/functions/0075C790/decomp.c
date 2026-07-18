
undefined4 FUN_0075c790(int param_1,int *param_2)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int local_14c [64];
  int *local_4c;
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  uint local_38;
  int local_34;
  int local_30;
  int local_2c;
  int *local_28;
  int local_24;
  uint local_20;
  int local_1c;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  local_14 = *(int *)(param_1 + 0x182);
  bVar7 = (byte)*(undefined4 *)(param_1 + 0x18a);
  local_18 = 1 << (bVar7 & 0x1f);
  piVar6 = *(int **)(param_1 + 0x1aa);
  local_20 = -1 << (bVar7 & 0x1f);
  local_8 = piVar6;
  if (((*(int *)(param_1 + 0x10c) != 0) && (*(int *)((int)piVar6 + 0x28) == 0)) &&
     (iVar3 = FUN_0075c3b0(param_1), iVar3 == 0)) {
    return 0;
  }
  local_30 = param_1;
  local_24 = 0;
  local_44 = **(undefined4 **)(param_1 + 0x10);
  local_40 = (*(undefined4 **)(param_1 + 0x10))[1];
  local_3c = *(undefined4 *)(param_1 + 0x18e);
  uVar10 = *(uint *)((int)piVar6 + 8);
  iVar3 = *(int *)((int)piVar6 + 0xc);
  local_1c = *param_2;
  local_2c = (int)piVar6 + 0x10;
  local_c = *(int *)((int)piVar6 + 0x14);
  local_48 = *(int *)((int)piVar6 + 0x3c);
  param_2 = *(int **)(param_1 + 0x17e);
  if (local_c == 0) {
    if ((int)param_2 <= local_14) {
      local_4c = local_14c;
      do {
        if (iVar3 < 8) {
          iVar3 = FUN_0075b720(&local_44,uVar10,iVar3,0);
          if (iVar3 == 0) goto LAB_0075cb0b;
          iVar3 = local_34;
          uVar10 = local_38;
          if (7 < local_34) goto LAB_0075c882;
          iVar8 = 1;
LAB_0075c8af:
          uVar4 = FUN_0075b800(&local_44,uVar10,iVar3,local_48,iVar8);
          iVar3 = local_34;
          uVar10 = local_38;
          if ((int)uVar4 < 0) goto LAB_0075cb0b;
        }
        else {
LAB_0075c882:
          uVar4 = (int)uVar10 >> ((char)iVar3 - 8U & 0x1f) & 0xff;
          iVar8 = *(int *)(local_48 + 0xd4 + uVar4 * 4);
          if (iVar8 == 0) {
            iVar8 = 9;
            goto LAB_0075c8af;
          }
          uVar4 = (uint)*(byte *)(uVar4 + 0x4d4 + local_48);
          iVar3 = iVar3 - iVar8;
        }
        local_10 = (int)uVar4 >> 4;
        if ((uVar4 & 0xf) == 0) {
          if (local_10 != 0xf) {
            iVar8 = 1 << ((byte)local_10 & 0x1f);
            piVar6 = local_8;
            local_c = iVar8;
            if (local_10 == 0) goto LAB_0075ca4a;
            if ((iVar3 < local_10) &&
               (iVar5 = FUN_0075b720(&local_44,uVar10,iVar3,local_10), iVar3 = local_34,
               uVar10 = local_38, iVar5 == 0)) goto LAB_0075cb0b;
            iVar3 = iVar3 - local_10;
            local_c = local_c + ((int)uVar10 >> ((byte)iVar3 & 0x1f) & iVar8 - 1U);
            piVar6 = local_8;
            goto LAB_0075ca4a;
          }
          local_28 = &DAT_007a1e94 + (int)param_2;
          uVar4 = 0;
        }
        else {
          if ((iVar3 < 1) &&
             (iVar8 = FUN_0075b720(&local_44,uVar10,iVar3,1), iVar3 = local_34, uVar10 = local_38,
             iVar8 == 0)) goto LAB_0075cb0b;
          iVar3 = iVar3 + -1;
          if (((int)uVar10 >> ((byte)iVar3 & 0x1f) & 1U) == 0) {
            local_28 = &DAT_007a1e94 + (int)param_2;
            uVar4 = local_20;
          }
          else {
            local_28 = &DAT_007a1e94 + (int)param_2;
            uVar4 = local_18;
          }
        }
        do {
          puVar2 = (uint *)(local_1c + *local_28 * 4);
          if (*puVar2 == 0) {
            local_10 = local_10 + -1;
            if (local_10 < 0) break;
          }
          else {
            if ((iVar3 < 1) &&
               (iVar8 = FUN_0075b720(&local_44,uVar10,iVar3,1), iVar3 = local_34, uVar10 = local_38,
               iVar8 == 0)) goto LAB_0075cb0b;
            iVar3 = iVar3 + -1;
            if ((((int)uVar10 >> ((byte)iVar3 & 0x1f) & 1U) != 0) &&
               (uVar9 = *puVar2, (local_18 & uVar9) == 0)) {
              if ((int)uVar9 < 0) {
                *puVar2 = uVar9 + local_20;
              }
              else {
                *puVar2 = uVar9 + local_18;
              }
            }
          }
          param_2 = (int *)((int)param_2 + 1);
          local_28 = local_28 + 1;
        } while ((int)param_2 <= local_14);
        if (uVar4 != 0) {
          iVar8 = (&DAT_007a1e94)[(int)param_2];
          local_24 = local_24 + 1;
          *(uint *)(local_1c + iVar8 * 4) = uVar4;
          *local_4c = iVar8;
          local_4c = local_4c + 1;
        }
        param_2 = (int *)((int)param_2 + 1);
        piVar6 = local_8;
      } while ((int)param_2 <= local_14);
    }
  }
  else {
LAB_0075ca4a:
    if (local_c != 0) {
      if ((int)param_2 <= local_14) {
        local_8 = &DAT_007a1e94 + (int)param_2;
        do {
          puVar2 = (uint *)(local_1c + *local_8 * 4);
          if (*(int *)(local_1c + *local_8 * 4) != 0) {
            if ((iVar3 < 1) &&
               (iVar8 = FUN_0075b720(&local_44,uVar10,iVar3,1), iVar3 = local_34, uVar10 = local_38,
               iVar8 == 0)) {
LAB_0075cb0b:
              if (0 < local_24) {
                piVar6 = local_14c + local_24;
                do {
                  piVar1 = piVar6 + -1;
                  piVar6 = piVar6 + -1;
                  local_24 = local_24 + -1;
                  *(undefined4 *)(local_1c + *piVar1 * 4) = 0;
                } while (local_24 != 0);
              }
              return 0;
            }
            iVar3 = iVar3 + -1;
            if ((((int)uVar10 >> ((byte)iVar3 & 0x1f) & 1U) != 0) &&
               (uVar4 = *puVar2, (local_18 & uVar4) == 0)) {
              uVar9 = local_18;
              if ((int)uVar4 < 0) {
                uVar9 = local_20;
              }
              *puVar2 = uVar4 + uVar9;
            }
          }
          param_2 = (int *)((int)param_2 + 1);
          local_8 = local_8 + 1;
        } while ((int)param_2 <= local_14);
      }
      local_c = local_c + -1;
    }
  }
  **(undefined4 **)(param_1 + 0x10) = local_44;
  *(undefined4 *)(*(int *)(param_1 + 0x10) + 4) = local_40;
  *(undefined4 *)(param_1 + 0x18e) = local_3c;
  *(int *)((int)piVar6 + 0xc) = iVar3;
  *(uint *)((int)piVar6 + 8) = uVar10;
  *(int *)((int)piVar6 + 0x14) = local_c;
  *(int *)((int)piVar6 + 0x28) = *(int *)((int)piVar6 + 0x28) + -1;
  return 1;
}

