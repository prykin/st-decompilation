
int FUN_00411e50(int param_1,int param_2,int param_3,int param_4,int param_5,uint param_6,
                int param_7)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  int local_b4;
  int local_b0;
  uint local_ac;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  char *local_58;
  int local_54;
  int local_50;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  uint local_38;
  int local_34;
  int local_30;
  int local_2c;
  byte *local_28;
  uint local_24;
  int local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_00790080;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_1c = &stack0xffffff3c;
  local_48 = 0;
  if (((((DAT_007f4d20 < 0xc9) && (-1 < param_1)) && (param_1 < DAT_007f4d2c)) &&
      ((-1 < param_2 && (param_2 < DAT_007f4d30)))) && ((-1 < param_3 && (param_3 < DAT_007f4d34))))
  {
    local_3c = DAT_007f4d30 * DAT_007f4d2c;
    local_38 = (uint)(0 < DAT_007f4d24);
    local_28 = (byte *)0x0;
    if (0 < param_4) {
      param_1 = param_1 - (DAT_007f4d38 * param_4 >> 0x10);
      param_2 = param_2 + (DAT_007f4d28 * param_4 >> 0x10);
    }
    local_30 = 0;
    local_2c = DAT_007f4d20;
    local_64 = param_3;
    param_6 = param_6 - ((-(uint)(param_7 != 0) & 0xb4) - 0x5a);
    if ((int)param_6 < 0) {
      param_6 = param_6 + ((0x167 - param_6) / 0x168) * 0x168;
    }
    if (0x167 < (int)param_6) {
      param_6 = param_6 % 0x168;
    }
    local_68 = *(int *)(&DAT_007a4bf8 + param_5 * 4);
    ExceptionList = &local_14;
    local_58 = (char *)FUN_006aac70(local_68 << 5);
    local_34 = FUN_00411cf0(local_58,local_68);
    local_40 = (int)(local_34 * param_6 + 0xb4) / 0x168;
    if (local_40 == local_34) {
      local_40 = 0;
    }
    local_24 = local_34 / 2 + 1;
    local_50 = (int)(local_24 + ((int)local_24 >> 0x1f & 7U)) >> 3;
    if (local_50 == 0) {
      local_50 = 1;
    }
    local_60 = 0;
    local_20 = 0;
    iVar2 = DAT_007f4d2c;
    iVar6 = local_64;
    while( true ) {
      local_6c = 0;
      if ((local_2c < (int)local_24) && (local_38 != 0)) {
        if (local_60 < (int)local_24) {
          local_60 = local_24 * 2;
          local_8 = 0;
          FUN_0072da40();
          local_8 = 0xffffffff;
          local_28 = &stack0xffffff3c;
          local_1c = &stack0xffffff3c;
        }
        pbVar7 = local_28;
        for (uVar3 = local_24 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
          pbVar7[0] = 0;
          pbVar7[1] = 0;
          pbVar7[2] = 0;
          pbVar7[3] = 0;
          pbVar7 = pbVar7 + 4;
        }
        for (uVar3 = local_24 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *pbVar7 = 0;
          pbVar7 = pbVar7 + 1;
        }
        iVar8 = 0;
        iVar2 = DAT_007f4d2c;
        iVar6 = local_64;
        iVar5 = local_40;
        if (0 < (int)local_24) {
          do {
            local_54 = local_58[iVar5 * 4] + param_1;
            local_5c = local_58[iVar5 * 4 + 1] + param_2;
            if ((((-1 < local_54) && (local_54 < iVar2)) && (-1 < local_5c)) &&
               ((local_5c < DAT_007f4d30 &&
                (uVar3 = local_64 * local_3c + local_54 + iVar2 * local_5c ^ 7, iVar2 = DAT_007f4d2c
                , (*(byte *)(DAT_007f4cfc + ((int)uVar3 >> 3)) >> (uVar3 & 7) & 1) != 0)))) {
              local_6c = local_6c + 1;
              local_28[iVar8] = 1;
              iVar2 = DAT_007f4d2c;
            }
            iVar5 = iVar5 + 1;
            if (local_34 <= iVar5) {
              iVar5 = 0;
            }
            iVar8 = iVar8 + 1;
          } while (iVar8 < (int)local_24);
        }
      }
      local_b0 = local_2c;
      if (local_6c < (int)local_24) {
        local_44 = local_40;
        if (local_6c + local_2c < (int)local_24) {
          if (local_6c < 1) {
            iVar5 = local_40 * 0x10000 + -0x10000;
            if (0 < local_2c) {
              iVar8 = local_30 * 0x14;
              local_b4 = local_2c;
              local_30 = local_30 + local_2c;
              do {
                iVar5 = iVar5 + (int)((local_24 + 1) * 0x10000) / (local_2c + 1);
                iVar2 = iVar5 >> 0x10;
                if (local_34 <= iVar2) {
                  iVar5 = iVar5 + local_34 * -0x10000;
                  iVar2 = iVar5 >> 0x10;
                }
                local_54 = local_58[iVar2 * 4] + param_1;
                local_5c = local_58[iVar2 * 4 + 1] + param_2;
                *(int *)(iVar8 + DAT_007f4d3c) = local_54;
                *(int *)(iVar8 + 4 + DAT_007f4d3c) = local_5c;
                *(int *)(iVar8 + 8 + DAT_007f4d3c) = local_64;
                iVar8 = iVar8 + 0x14;
                if (((-1 < local_54) && (local_54 < DAT_007f4d2c)) &&
                   ((-1 < local_5c && (local_5c < DAT_007f4d30)))) {
                  uVar3 = local_64 * local_3c + local_54 + DAT_007f4d2c * local_5c ^ 7;
                  pbVar7 = (byte *)(DAT_007f4cfc + ((int)uVar3 >> 3));
                  *pbVar7 = *pbVar7 | '\x01' << (uVar3 & 7);
                }
                local_b4 = local_b4 + -1;
                iVar2 = DAT_007f4d2c;
                iVar6 = local_64;
              } while (local_b4 != 0);
            }
          }
          else {
            FUN_0040f4d0((undefined4 *)local_28,local_24,local_50,0);
            pcVar1 = local_58;
            iVar2 = DAT_007f4d2c;
            iVar6 = local_64;
            if (0 < local_b0) {
              iVar5 = local_30 * 0x14;
              local_30 = local_30 + local_b0;
              do {
                iVar2 = FUN_0040f840(local_28,local_24,local_50,0);
                iVar2 = (iVar2 + local_40) % local_34;
                local_54 = pcVar1[iVar2 * 4] + param_1;
                local_5c = pcVar1[iVar2 * 4 + 1] + param_2;
                *(int *)(iVar5 + DAT_007f4d3c) = local_54;
                *(int *)(iVar5 + 4 + DAT_007f4d3c) = local_5c;
                *(int *)(iVar5 + 8 + DAT_007f4d3c) = local_64;
                iVar5 = iVar5 + 0x14;
                if ((((-1 < local_54) && (local_54 < DAT_007f4d2c)) && (-1 < local_5c)) &&
                   (local_5c < DAT_007f4d30)) {
                  uVar3 = local_64 * local_3c + local_54 + DAT_007f4d2c * local_5c ^ 7;
                  pbVar7 = (byte *)(DAT_007f4cfc + ((int)uVar3 >> 3));
                  *pbVar7 = *pbVar7 | '\x01' << (uVar3 & 7);
                }
                local_b0 = local_b0 + -1;
                iVar2 = DAT_007f4d2c;
                iVar6 = local_64;
              } while (local_b0 != 0);
            }
          }
          local_2c = 0;
        }
        else if (0 < (int)local_24) {
          iVar5 = local_30 * 0x14;
          local_ac = local_24;
          do {
            local_54 = local_58[local_44 * 4] + param_1;
            local_5c = local_58[local_44 * 4 + 1] + param_2;
            if (((local_54 < 0) || (iVar2 <= local_54)) ||
               ((local_5c < 0 || (DAT_007f4d30 <= local_5c)))) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if ((!bVar4) ||
               (uVar3 = iVar6 * local_3c + local_54 + iVar2 * local_5c ^ 7,
               (*(byte *)(DAT_007f4cfc + ((int)uVar3 >> 3)) >> (uVar3 & 7) & 1) == 0)) {
              *(int *)(iVar5 + DAT_007f4d3c) = local_54;
              *(int *)(iVar5 + 4 + DAT_007f4d3c) = local_5c;
              *(int *)(iVar5 + 8 + DAT_007f4d3c) = local_64;
              local_30 = local_30 + 1;
              iVar5 = iVar5 + 0x14;
              local_2c = local_2c + -1;
              if (bVar4) {
                uVar3 = local_64 * local_3c + local_54 + DAT_007f4d2c * local_5c ^ 7;
                pbVar7 = (byte *)(DAT_007f4cfc + ((int)uVar3 >> 3));
                *pbVar7 = *pbVar7 | '\x01' << (uVar3 & 7);
              }
            }
            local_44 = local_44 + 1;
            if (local_34 <= local_44) {
              local_44 = 0;
            }
            local_ac = local_ac - 1;
            iVar2 = DAT_007f4d2c;
            iVar6 = local_64;
          } while (local_ac != 0);
        }
      }
      if (local_2c < 1) break;
      uVar3 = local_68 << 5;
      do {
        local_20 = local_20 + 1;
        if (8 < local_20) {
          local_20 = 0;
          local_64 = param_3;
          local_68 = local_68 + 1;
          uVar3 = uVar3 + 0x20;
          local_58 = (char *)FUN_006acf50((undefined4 *)local_58,uVar3);
          local_34 = FUN_00411cf0(local_58,local_68);
          local_40 = (int)(local_34 * param_6 + 0xb4) / 0x168;
          if (local_40 == local_34) {
            local_40 = 0;
          }
          local_24 = local_34 / 2 + 1;
          local_38 = 1;
          iVar2 = DAT_007f4d2c;
          iVar6 = local_64;
        }
        switch(local_20) {
        case 1:
          iVar6 = iVar6 + 1;
          local_64 = iVar6;
          break;
        case 2:
          iVar6 = iVar6 + -2;
          local_64 = iVar6;
          break;
        case 3:
          iVar6 = iVar6 + 3;
          local_64 = iVar6;
          break;
        case 4:
          iVar6 = iVar6 + -4;
          local_64 = iVar6;
          break;
        case 5:
          iVar6 = iVar6 + 5;
          local_64 = iVar6;
          break;
        case 6:
          iVar6 = iVar6 + -6;
          local_64 = iVar6;
          break;
        case 7:
          iVar6 = iVar6 + 7;
          local_64 = iVar6;
          break;
        case 8:
          iVar6 = iVar6 + -8;
          local_64 = iVar6;
        }
      } while ((iVar6 < 0) || (DAT_007f4d34 <= iVar6));
    }
    local_30 = 0;
    if (0 < DAT_007f4d20) {
      iVar5 = 0;
      iVar6 = local_3c;
      do {
        local_54 = *(int *)(iVar5 + DAT_007f4d3c);
        local_5c = *(int *)(iVar5 + 4 + DAT_007f4d3c);
        local_64 = *(int *)(iVar5 + 8 + DAT_007f4d3c);
        if ((((local_54 < 0) || (iVar2 <= local_54)) || (local_5c < 0)) ||
           ((DAT_007f4d30 <= local_5c ||
            (iVar6 = local_3c,
            *(short *)(DAT_007f4cf0 + (local_64 * local_3c + local_54 + iVar2 * local_5c) * 2) != 0)
            ))) {
          iVar2 = FUN_0040f270(&local_54,&local_5c,&local_64,DAT_007f4d0c >> 2,DAT_007f4d10 >> 2,
                               DAT_007f4d1c >> 2,param_1 >> 2,param_2 >> 2,param_3 >> 2);
          if (iVar2 != 0) {
            iVar2 = -4;
            goto LAB_004125c1;
          }
          uVar3 = local_64 * iVar6 + local_54 + DAT_007f4d2c * local_5c ^ 7;
          pbVar7 = (byte *)(DAT_007f4cfc + ((int)uVar3 >> 3));
          *pbVar7 = *pbVar7 | '\x01' << (uVar3 & 7);
          *(int *)(iVar5 + DAT_007f4d3c) = local_54;
          *(int *)(iVar5 + 4 + DAT_007f4d3c) = local_5c;
          *(int *)(iVar5 + 8 + DAT_007f4d3c) = local_64;
          iVar2 = DAT_007f4d2c;
        }
        local_30 = local_30 + 1;
        iVar5 = iVar5 + 0x14;
      } while (local_30 < DAT_007f4d20);
    }
    FUN_0040eb90();
    iVar2 = local_48;
LAB_004125c1:
    FUN_006a5e90((undefined4 *)local_58);
    if (iVar2 == 0) {
      ExceptionList = local_14;
      return 0;
    }
    if (iVar2 != -4) {
      RaiseInternalException(iVar2,DAT_007ed77c,s_E____titans_wlad_Grpway3d_cpp_007a4ca8,0xc3a);
      ExceptionList = local_14;
      return iVar2;
    }
  }
  ExceptionList = local_14;
  return -4;
}

