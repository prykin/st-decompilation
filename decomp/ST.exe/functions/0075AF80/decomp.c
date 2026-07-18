
int FUN_0075af80(int *param_1,int *param_2)

{
  uint uVar1;
  int *piVar2;
  ushort *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 local_18c;
  int local_188;
  int local_184;
  int local_16c;
  int local_168;
  int local_14c;
  int local_8c;
  code *local_88;
  int local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  int local_70;
  uint local_6c;
  int local_68;
  uint local_64;
  uint local_60;
  int local_5c;
  uint local_58;
  int *local_54;
  int local_50;
  int local_4c;
  int *local_48;
  int local_44;
  int *local_40;
  int local_3c;
  int local_38;
  uint local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int *local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined4 *local_10;
  int local_c;
  uint local_8;
  
  iVar5 = param_1[0x24];
  iVar9 = *(int *)((int)param_1 + 0x19a);
  local_80 = *(int *)((int)param_1 + 0x12e) - 1;
  iVar4 = param_1[0x22];
  local_8c = iVar9;
  if (iVar4 <= iVar5) {
    do {
      if (((*(undefined4 **)((int)param_1 + 0x1a2))[5] != 0) ||
         ((iVar4 == iVar5 &&
          ((uint)(*(int *)((int)param_1 + 0x17e) == 0) + param_1[0x25] < (uint)param_1[0x23]))))
      break;
      iVar5 = (*(code *)**(undefined4 **)((int)param_1 + 0x1a2))(param_1);
      if (iVar5 == 0) {
        return 0;
      }
      iVar4 = param_1[0x22];
      iVar5 = param_1[0x24];
    } while (iVar4 <= iVar5);
  }
  iVar5 = param_1[0x34];
  local_68 = 0;
  if (0 < param_1[7]) {
    local_10 = (undefined4 *)(iVar9 + 0x48);
    local_84 = -0x44 - iVar9;
    local_4c = 0;
    local_54 = param_2;
    do {
      if (*(int *)(iVar5 + 0x30) != 0) {
        uVar1 = param_1[0x25];
        piVar2 = *(int **)(iVar5 + 0xc);
        if (uVar1 < local_80) {
          local_70 = 0;
          piVar6 = (int *)((int)piVar2 * 2);
          param_2 = piVar2;
        }
        else {
          piVar6 = (int *)(*(uint *)(iVar5 + 0x20) % (uint)piVar2);
          if (piVar6 == (int *)0x0) {
            piVar6 = piVar2;
          }
          local_70 = 1;
          param_2 = piVar6;
        }
        local_28 = iVar5;
        if (uVar1 == 0) {
          local_44 = (**(code **)(*param_1 + 0x20))(param_1,*local_10,0,piVar6,0);
        }
        else {
          local_44 = (**(code **)(*param_1 + 0x20))
                               (param_1,*local_10,(uVar1 - 1) * (int)piVar2,
                                (int)piVar6 + (int)piVar2,0);
          local_44 = local_44 + *(int *)(iVar5 + 0xc) * 4;
        }
        local_64 = (uint)(uVar1 == 0);
        local_c = *(int *)(local_8c + 0x70) + local_4c;
        puVar3 = *(ushort **)(iVar5 + 0x4c);
        local_8 = (uint)*puVar3;
        local_58 = (uint)puVar3[1];
        local_74 = (uint)puVar3[8];
        local_6c = (uint)puVar3[0x10];
        local_7c = (uint)puVar3[9];
        local_78 = (uint)puVar3[2];
        local_88 = *(code **)(*(int *)((int)param_1 + 0x1ae) + local_84 + (int)local_10);
        local_3c = *local_54;
        local_2c = 0;
        if (0 < (int)param_2) {
          do {
            local_20 = *(int **)(local_44 + local_2c * 4);
            if ((local_64 == 0) || (local_48 = local_20, local_2c != 0)) {
              local_48 = *(int **)(local_44 + -4 + local_2c * 4);
            }
            if ((local_70 == 0) || (local_40 = local_20, local_2c != (int)param_2 + -1)) {
              local_40 = *(int **)(local_44 + 4 + local_2c * 4);
            }
            iVar4 = *local_20;
            local_5c = *local_40;
            iVar9 = *local_48;
            local_40 = local_40 + 0x40;
            local_60 = *(int *)(iVar5 + 0x1c) - 1;
            local_48 = local_48 + 0x40;
            local_30 = 0;
            local_34 = 0;
            local_38 = iVar4;
            local_1c = iVar9;
            local_18 = local_5c;
            do {
              local_50 = local_1c;
              local_24 = local_18;
              local_14 = iVar4;
              FUN_00759f00(local_20,&local_18c,1);
              if (local_34 < local_60) {
                local_50 = *local_48;
                iVar4 = local_20[0x40];
                local_24 = *local_40;
              }
              iVar8 = *(int *)(local_c + 4);
              if ((iVar8 != 0) && (local_188 == 0)) {
                iVar5 = (local_38 - iVar4) * local_8;
                iVar7 = iVar5 * 0x24;
                if (iVar7 < 0) {
                  local_188 = (int)(local_58 * 0x80 + iVar5 * -0x24) / (int)(local_58 << 8);
                  if ((0 < iVar8) && (iVar5 = 1 << ((byte)iVar8 & 0x1f), iVar5 <= local_188)) {
                    local_188 = iVar5 + -1;
                  }
                  local_188 = -local_188;
                  iVar5 = local_28;
                }
                else {
                  local_188 = (int)(local_58 * 0x80 + iVar7) / (int)(local_58 << 8);
                  iVar5 = local_28;
                  if ((0 < iVar8) && (iVar8 = 1 << ((byte)iVar8 & 0x1f), iVar8 <= local_188)) {
                    local_188 = iVar8 + -1;
                  }
                }
              }
              iVar8 = *(int *)(local_c + 8);
              if ((iVar8 != 0) && (local_16c == 0)) {
                iVar5 = (local_1c - local_18) * local_8;
                iVar7 = iVar5 * 0x24;
                if (iVar7 < 0) {
                  local_16c = (int)(local_74 * 0x80 + iVar5 * -0x24) / (int)(local_74 << 8);
                  if ((0 < iVar8) && (iVar5 = 1 << ((byte)iVar8 & 0x1f), iVar5 <= local_16c)) {
                    local_16c = iVar5 + -1;
                  }
                  local_16c = -local_16c;
                  iVar5 = local_28;
                }
                else {
                  local_16c = (int)(local_74 * 0x80 + iVar7) / (int)(local_74 << 8);
                  iVar5 = local_28;
                  if ((0 < iVar8) && (iVar8 = 1 << ((byte)iVar8 & 0x1f), iVar8 <= local_16c)) {
                    local_16c = iVar8 + -1;
                  }
                }
              }
              iVar8 = *(int *)(local_c + 0xc);
              if ((iVar8 != 0) && (local_14c == 0)) {
                iVar7 = (local_18 + local_14 * -2 + local_1c) * local_8;
                iVar5 = iVar7 * 9;
                if (iVar5 < 0) {
                  local_14c = (int)(local_6c * 0x80 + iVar7 * -9) / (int)(local_6c << 8);
                  if ((0 < iVar8) && (iVar5 = 1 << ((byte)iVar8 & 0x1f), iVar5 <= local_14c)) {
                    local_14c = iVar5 + -1;
                  }
                  local_14c = -local_14c;
                  iVar5 = local_28;
                }
                else {
                  local_14c = (int)(local_6c * 0x80 + iVar5) / (int)(local_6c << 8);
                  iVar5 = local_28;
                  if ((0 < iVar8) && (iVar8 = 1 << ((byte)iVar8 & 0x1f), iVar8 <= local_14c)) {
                    local_14c = iVar8 + -1;
                  }
                }
              }
              iVar8 = *(int *)(local_c + 0x10);
              if ((iVar8 != 0) && (local_168 == 0)) {
                iVar7 = (((local_24 - local_5c) - local_50) + iVar9) * local_8;
                iVar9 = iVar7 * 5;
                if (iVar9 < 0) {
                  local_168 = (int)(local_7c * 0x80 + iVar7 * -5) / (int)(local_7c << 8);
                  if ((0 < iVar8) && (iVar9 = 1 << ((byte)iVar8 & 0x1f), iVar9 <= local_168)) {
                    local_168 = iVar9 + -1;
                  }
                  local_168 = -local_168;
                }
                else {
                  local_168 = (int)(local_7c * 0x80 + iVar9) / (int)(local_7c << 8);
                  if ((0 < iVar8) && (iVar9 = 1 << ((byte)iVar8 & 0x1f), iVar9 <= local_168)) {
                    local_168 = iVar9 + -1;
                  }
                }
              }
              iVar9 = *(int *)(local_c + 0x14);
              if ((iVar9 != 0) && (local_184 == 0)) {
                iVar7 = (iVar4 + local_14 * -2 + local_38) * local_8;
                iVar8 = iVar7 * 9;
                if (iVar8 < 0) {
                  local_184 = (int)(local_78 * 0x80 + iVar7 * -9) / (int)(local_78 << 8);
                  if ((0 < iVar9) && (iVar9 = 1 << ((byte)iVar9 & 0x1f), iVar9 <= local_184)) {
                    local_184 = iVar9 + -1;
                  }
                  local_184 = -local_184;
                }
                else {
                  local_184 = (int)(local_78 * 0x80 + iVar8) / (int)(local_78 << 8);
                  if ((0 < iVar9) && (iVar9 = 1 << ((byte)iVar9 & 0x1f), iVar9 <= local_184)) {
                    local_184 = iVar9 + -1;
                  }
                }
              }
              (*local_88)(param_1,iVar5,&local_18c,local_3c,local_30);
              iVar9 = local_1c;
              local_1c = local_50;
              local_5c = local_18;
              local_18 = local_24;
              local_38 = local_14;
              local_20 = local_20 + 0x40;
              local_48 = local_48 + 0x40;
              local_40 = local_40 + 0x40;
              local_30 = local_30 + *(int *)(iVar5 + 0x24);
              local_34 = local_34 + 1;
            } while (local_34 <= local_60);
            local_3c = local_3c + *(int *)(iVar5 + 0x24) * 4;
            local_2c = local_2c + 1;
            local_14 = iVar4;
          } while (local_2c < (int)param_2);
        }
      }
      local_4c = local_4c + 0x18;
      local_68 = local_68 + 1;
      local_10 = local_10 + 1;
      local_54 = local_54 + 1;
      iVar5 = iVar5 + 0x54;
    } while (local_68 < param_1[7]);
  }
  iVar5 = param_1[0x25];
  param_1[0x25] = iVar5 + 1U;
  return 4 - (uint)(iVar5 + 1U < *(uint *)((int)param_1 + 0x12e));
}

