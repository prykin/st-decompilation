
int FUN_0075af80(AnonShape_0075AF80_4192DD78 *param_1,int *param_2)

{
  int *piVar1;
  ushort *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
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
  AnonShape_0075AF80_B94F5401 *local_c;
  uint local_8;

  iVar4 = *(int *)&param_1->field_0x90;
  iVar8 = param_1->field_019A;
  local_80 = param_1->field_012E - 1;
  iVar3 = *(int *)&param_1->field_0x88;
  local_8c = iVar8;
  if (iVar3 <= iVar4) {
    do {
      if ((param_1->field_01A2[5] != 0) ||
         ((iVar3 == iVar4 &&
          ((uint)(param_1->field_017E == 0) + *(int *)&param_1->field_0x94 <
           *(uint *)&param_1->field_0x8c)))) break;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar4 = (*(code *)*param_1->field_01A2)(param_1);
      if (iVar4 == 0) {
        return 0;
      }
      iVar3 = *(int *)&param_1->field_0x88;
      iVar4 = *(int *)&param_1->field_0x90;
    } while (iVar3 <= iVar4);
  }
  iVar4 = *(int *)&param_1->field_0xd0;
  local_68 = 0;
  if (0 < *(int *)&param_1->field_0x1c) {
    local_10 = (undefined4 *)(iVar8 + 0x48);
    local_84 = -0x44 - iVar8;
    local_4c = 0;
    local_54 = param_2;
    do {
      if (*(int *)(iVar4 + 0x30) != 0) {
        uVar9 = *(uint *)&param_1->field_0x94;
        piVar1 = *(int **)(iVar4 + 0xc);
        if (uVar9 < local_80) {
          local_70 = 0;
          piVar5 = (int *)((int)piVar1 * 2);
          param_2 = piVar1;
        }
        else {
          piVar5 = (int *)(*(uint *)(iVar4 + 0x20) % (uint)piVar1);
          if (piVar5 == (int *)0x0) {
            piVar5 = piVar1;
          }
          local_70 = 1;
          param_2 = piVar5;
        }
        local_28 = iVar4;
        if (uVar9 == 0) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          local_44 = (**(code **)(*(int *)param_1 + 0x20))(param_1,*local_10,0,piVar5,0);
        }
        else {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          local_44 = (**(code **)(*(int *)param_1 + 0x20))
                               (param_1,*local_10,(uVar9 - 1) * (int)piVar1,
                                (int)piVar5 + (int)piVar1,0);
          local_44 = local_44 + *(int *)(iVar4 + 0xc) * 4;
        }
        local_64 = (uint)(uVar9 == 0);
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        local_c = (AnonShape_0075AF80_B94F5401 *)(*(int *)(local_8c + 0x70) + local_4c);
        puVar2 = *(ushort **)(iVar4 + 0x4c);
        local_8 = (uint)*puVar2;
        local_58 = (uint)puVar2[1];
        local_74 = (uint)puVar2[8];
        local_6c = (uint)puVar2[0x10];
        local_7c = (uint)puVar2[9];
        local_78 = (uint)puVar2[2];
        local_88 = *(code **)(param_1->field_01AE + local_84 + (int)local_10);
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
            iVar3 = *local_20;
            local_5c = *local_40;
            iVar8 = *local_48;
            local_40 = local_40 + 0x40;
            local_60 = *(int *)(iVar4 + 0x1c) - 1;
            local_48 = local_48 + 0x40;
            local_30 = 0;
            local_34 = 0;
            local_38 = iVar3;
            local_1c = iVar8;
            local_18 = local_5c;
            do {
              local_50 = local_1c;
              local_24 = local_18;
              local_14 = iVar3;
              FUN_00759f00(local_20,&local_18c,1);
              if (local_34 < local_60) {
                local_50 = *local_48;
                iVar3 = local_20[0x40];
                local_24 = *local_40;
              }
              iVar7 = local_c->field_0004;
              if ((iVar7 != 0) && (local_188 == 0)) {
                iVar4 = (local_38 - iVar3) * local_8;
                iVar6 = iVar4 * 0x24;
                if (iVar6 < 0) {
                  local_188 = (int)(local_58 * 0x80 + iVar4 * -0x24) / (int)(local_58 << 8);
                  if ((0 < iVar7) && (iVar4 = 1 << ((byte)iVar7 & 0x1f), iVar4 <= local_188)) {
                    local_188 = iVar4 + -1;
                  }
                  local_188 = -local_188;
                  iVar4 = local_28;
                }
                else {
                  local_188 = (int)(local_58 * 0x80 + iVar6) / (int)(local_58 << 8);
                  iVar4 = local_28;
                  if ((0 < iVar7) && (iVar7 = 1 << ((byte)iVar7 & 0x1f), iVar7 <= local_188)) {
                    local_188 = iVar7 + -1;
                  }
                }
              }
              iVar7 = local_c->field_0008;
              if ((iVar7 != 0) && (local_16c == 0)) {
                iVar4 = (local_1c - local_18) * local_8;
                iVar6 = iVar4 * 0x24;
                if (iVar6 < 0) {
                  local_16c = (int)(local_74 * 0x80 + iVar4 * -0x24) / (int)(local_74 << 8);
                  if ((0 < iVar7) && (iVar4 = 1 << ((byte)iVar7 & 0x1f), iVar4 <= local_16c)) {
                    local_16c = iVar4 + -1;
                  }
                  local_16c = -local_16c;
                  iVar4 = local_28;
                }
                else {
                  local_16c = (int)(local_74 * 0x80 + iVar6) / (int)(local_74 << 8);
                  iVar4 = local_28;
                  if ((0 < iVar7) && (iVar7 = 1 << ((byte)iVar7 & 0x1f), iVar7 <= local_16c)) {
                    local_16c = iVar7 + -1;
                  }
                }
              }
              iVar7 = local_c->field_000C;
              if ((iVar7 != 0) && (local_14c == 0)) {
                iVar6 = (local_18 + local_14 * -2 + local_1c) * local_8;
                iVar4 = iVar6 * 9;
                if (iVar4 < 0) {
                  local_14c = (int)(local_6c * 0x80 + iVar6 * -9) / (int)(local_6c << 8);
                  if ((0 < iVar7) && (iVar4 = 1 << ((byte)iVar7 & 0x1f), iVar4 <= local_14c)) {
                    local_14c = iVar4 + -1;
                  }
                  local_14c = -local_14c;
                  iVar4 = local_28;
                }
                else {
                  local_14c = (int)(local_6c * 0x80 + iVar4) / (int)(local_6c << 8);
                  iVar4 = local_28;
                  if ((0 < iVar7) && (iVar7 = 1 << ((byte)iVar7 & 0x1f), iVar7 <= local_14c)) {
                    local_14c = iVar7 + -1;
                  }
                }
              }
              iVar7 = local_c->field_0010;
              if ((iVar7 != 0) && (local_168 == 0)) {
                iVar6 = (((local_24 - local_5c) - local_50) + iVar8) * local_8;
                iVar8 = iVar6 * 5;
                if (iVar8 < 0) {
                  local_168 = (int)(local_7c * 0x80 + iVar6 * -5) / (int)(local_7c << 8);
                  if ((0 < iVar7) && (iVar8 = 1 << ((byte)iVar7 & 0x1f), iVar8 <= local_168)) {
                    local_168 = iVar8 + -1;
                  }
                  local_168 = -local_168;
                }
                else {
                  local_168 = (int)(local_7c * 0x80 + iVar8) / (int)(local_7c << 8);
                  if ((0 < iVar7) && (iVar8 = 1 << ((byte)iVar7 & 0x1f), iVar8 <= local_168)) {
                    local_168 = iVar8 + -1;
                  }
                }
              }
              iVar8 = local_c->field_0014;
              if ((iVar8 != 0) && (local_184 == 0)) {
                iVar6 = (iVar3 + local_14 * -2 + local_38) * local_8;
                iVar7 = iVar6 * 9;
                if (iVar7 < 0) {
                  local_184 = (int)(local_78 * 0x80 + iVar6 * -9) / (int)(local_78 << 8);
                  if ((0 < iVar8) && (iVar8 = 1 << ((byte)iVar8 & 0x1f), iVar8 <= local_184)) {
                    local_184 = iVar8 + -1;
                  }
                  local_184 = -local_184;
                }
                else {
                  local_184 = (int)(local_78 * 0x80 + iVar7) / (int)(local_78 << 8);
                  if ((0 < iVar8) && (iVar8 = 1 << ((byte)iVar8 & 0x1f), iVar8 <= local_184)) {
                    local_184 = iVar8 + -1;
                  }
                }
              }
              (*local_88)(param_1,iVar4,&local_18c,local_3c,local_30);
              iVar8 = local_1c;
              local_1c = local_50;
              local_5c = local_18;
              local_18 = local_24;
              local_38 = local_14;
              local_20 = local_20 + 0x40;
              local_48 = local_48 + 0x40;
              local_40 = local_40 + 0x40;
              local_30 = local_30 + *(int *)(iVar4 + 0x24);
              local_34 = local_34 + 1;
            } while (local_34 <= local_60);
            local_3c = local_3c + *(int *)(iVar4 + 0x24) * 4;
            local_2c = local_2c + 1;
            local_14 = iVar3;
          } while (local_2c < (int)param_2);
        }
      }
      local_4c = local_4c + 0x18;
      local_68 = local_68 + 1;
      local_10 = local_10 + 1;
      local_54 = local_54 + 1;
      iVar4 = iVar4 + 0x54;
    } while (local_68 < *(int *)&param_1->field_0x1c);
  }
  uVar9 = *(int *)&param_1->field_0x94 + 1;
  *(uint *)&param_1->field_0x94 = uVar9;
  return 4 - (uint)(uVar9 < (uint)param_1->field_012E);
}

