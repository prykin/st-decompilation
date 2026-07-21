
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\wlad\Grpway3d.cpp
   Diagnostic line evidence: 2926 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

int FUN_00411260(int param_1,int param_2,int param_3,int param_4,int param_5,uint param_6)

{
  short *psVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  int local_b8;
  int local_b0;
  uint local_ac;
  int local_a8;
  int local_74;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  short *local_54;
  int local_50;
  int local_4c;
  int local_44;
  uint local_3c;
  int local_38;
  uint local_34;
  uint local_30;
  int local_2c;
  int local_28;
  byte *local_24;
  int local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;

  local_8 = 0xffffffff;
  puStack_c = &DAT_00790070;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_1c = &stack0xffffff3c;
  local_44 = 0;
  if (((((DAT_007f4d20 < 0xc9) && (-1 < param_1)) && (param_1 < DAT_007f4d2c)) &&
      ((-1 < param_2 && (param_2 < DAT_007f4d30)))) && ((-1 < param_3 && (param_3 < DAT_007f4d34))))
  {
    local_38 = DAT_007f4d30 * DAT_007f4d2c;
    local_34 = (uint)(0 < DAT_007f4d24);
    local_24 = (byte *)0x0;
    if (0 < param_4) {
      param_1 = param_1 - (DAT_007f4d38 * param_4 >> 0x10);
      param_2 = param_2 + (DAT_007f4d28 * param_4 >> 0x10);
    }
    local_2c = 0;
    local_28 = DAT_007f4d20;
    local_60 = param_3;
    if ((int)param_6 < 0) {
      param_6 = param_6 + ((0x167 - param_6) / 0x168) * 0x168;
    }
    if (0x167 < (int)param_6) {
      param_6 = param_6 % 0x168;
    }
    local_64 = *(int *)(&DAT_007a4bf8 + param_5 * 4);
    ExceptionList = &local_14;
    psVar1 = (short *)Library::DKW::LIB::FUN_006aac70(local_64 << 5);
    local_54 = psVar1;
    uVar2 = FUN_00411cf0((char *)psVar1,local_64);
    local_3c = (int)(uVar2 * param_6 + 0xb4) / 0x168;
    if (local_3c == uVar2) {
      local_3c = 0;
    }
    local_4c = (int)(uVar2 + ((int)uVar2 >> 0x1f & 7U)) >> 3;
    if (local_4c == 0) {
      local_4c = 1;
    }
    local_5c = 0;
    local_20 = 0;
    iVar3 = local_60;
    while( true ) {
      local_68 = 0;
      local_30 = uVar2;
      if ((local_28 < (int)uVar2) && (local_34 != 0)) {
        if (local_5c < (int)uVar2) {
          local_5c = uVar2 * 2;
          local_8 = 0;
          Library::MSVCRT::FUN_0072da40();
          local_8 = 0xffffffff;
          local_24 = &stack0xffffff3c;
          local_1c = &stack0xffffff3c;
        }
        pbVar8 = local_24;
        for (uVar4 = uVar2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          pbVar8[0] = 0;
          pbVar8[1] = 0;
          pbVar8[2] = 0;
          pbVar8[3] = 0;
          pbVar8 = pbVar8 + 4;
        }
        for (uVar4 = uVar2 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *pbVar8 = 0;
          pbVar8 = pbVar8 + 1;
        }
        local_74 = 0;
        iVar7 = DAT_007f4d2c;
        uVar4 = local_3c;
        iVar3 = local_60;
        if (0 < (int)uVar2) {
          do {
            local_50 = (char)psVar1[uVar4 * 2] + param_1;
            local_58 = *(char *)((int)psVar1 + uVar4 * 4 + 1) + param_2;
            if ((((-1 < local_50) && (local_50 < iVar7)) && (-1 < local_58)) &&
               ((local_58 < DAT_007f4d30 &&
                (uVar6 = local_60 * local_38 + local_50 + iVar7 * local_58 ^ 7, iVar7 = DAT_007f4d2c
                , (*(byte *)(DAT_007f4cfc + ((int)uVar6 >> 3)) >> (uVar6 & 7) & 1) != 0)))) {
              local_68 = local_68 + 1;
              local_24[local_74] = 1;
              iVar7 = DAT_007f4d2c;
            }
            uVar4 = uVar4 + 1;
            if ((int)uVar2 <= (int)uVar4) {
              uVar4 = 0;
            }
            local_74 = local_74 + 1;
            psVar1 = local_54;
          } while (local_74 < (int)uVar2);
        }
      }
      if (local_68 < (int)uVar2) {
        if (local_68 + local_28 < (int)uVar2) {
          if (local_68 < 1) {
            iVar7 = local_3c << 0x10;
            if (0 < local_28) {
              iVar9 = local_2c * 0x14;
              local_b8 = local_28;
              local_2c = local_2c + local_28;
              uVar4 = local_3c;
              do {
                local_50 = (char)local_54[uVar4 * 2] + param_1;
                local_58 = *(char *)((int)local_54 + uVar4 * 4 + 1) + param_2;
                *(int *)(iVar9 + DAT_007f4d3c) = local_50;
                *(int *)(iVar9 + 4 + DAT_007f4d3c) = local_58;
                *(int *)(iVar9 + 8 + DAT_007f4d3c) = local_60;
                iVar9 = iVar9 + 0x14;
                if (((-1 < local_50) && (local_50 < DAT_007f4d2c)) &&
                   ((-1 < local_58 && (local_58 < DAT_007f4d30)))) {
                  uVar4 = local_60 * local_38 + local_50 + DAT_007f4d2c * local_58 ^ 7;
                  pbVar8 = (byte *)(DAT_007f4cfc + ((int)uVar4 >> 3));
                  *pbVar8 = *pbVar8 | '\x01' << (uVar4 & 7);
                }
                iVar7 = iVar7 + (int)(uVar2 * 0x10000) / local_28;
                uVar4 = iVar7 >> 0x10;
                if ((int)uVar2 <= (int)uVar4) {
                  iVar7 = iVar7 + uVar2 * -0x10000;
                  uVar4 = iVar7 >> 0x10;
                }
                local_b8 = local_b8 + -1;
                iVar3 = local_60;
              } while (local_b8 != 0);
            }
          }
          else {
            FUN_0040f4d0((undefined4 *)local_24,uVar2,local_4c,1);
            iVar3 = local_60;
            if (0 < local_28) {
              iVar7 = local_2c * 0x14;
              local_b0 = local_28;
              local_2c = local_2c + local_28;
              psVar1 = local_54;
              do {
                iVar3 = FUN_0040f840(local_24,uVar2,local_4c,1);
                iVar3 = (int)(iVar3 + local_3c) % (int)uVar2;
                local_50 = (char)psVar1[iVar3 * 2] + param_1;
                local_58 = *(char *)((int)psVar1 + iVar3 * 4 + 1) + param_2;
                *(int *)(iVar7 + DAT_007f4d3c) = local_50;
                *(int *)(iVar7 + 4 + DAT_007f4d3c) = local_58;
                *(int *)(iVar7 + 8 + DAT_007f4d3c) = local_60;
                iVar7 = iVar7 + 0x14;
                if ((((-1 < local_50) && (local_50 < DAT_007f4d2c)) && (-1 < local_58)) &&
                   (local_58 < DAT_007f4d30)) {
                  uVar4 = local_60 * local_38 + local_50 + DAT_007f4d2c * local_58 ^ 7;
                  pbVar8 = (byte *)(DAT_007f4cfc + ((int)uVar4 >> 3));
                  *pbVar8 = *pbVar8 | '\x01' << (uVar4 & 7);
                  psVar1 = local_54;
                }
                local_b0 = local_b0 + -1;
                iVar3 = local_60;
              } while (local_b0 != 0);
            }
          }
          local_28 = 0;
        }
        else if (0 < (int)uVar2) {
          local_a8 = local_2c * 0x14;
          uVar4 = local_3c;
          local_ac = uVar2;
          do {
            local_50 = (char)local_54[uVar4 * 2] + param_1;
            local_58 = *(char *)((int)local_54 + uVar4 * 4 + 1) + param_2;
            if (((local_50 < 0) || (DAT_007f4d2c <= local_50)) ||
               ((local_58 < 0 || (DAT_007f4d30 <= local_58)))) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            if ((!bVar5) ||
               (uVar6 = iVar3 * local_38 + local_50 + DAT_007f4d2c * local_58 ^ 7,
               (*(byte *)(DAT_007f4cfc + ((int)uVar6 >> 3)) >> (uVar6 & 7) & 1) == 0)) {
              *(int *)(local_a8 + DAT_007f4d3c) = local_50;
              *(int *)(local_a8 + 4 + DAT_007f4d3c) = local_58;
              *(int *)(local_a8 + 8 + DAT_007f4d3c) = local_60;
              local_2c = local_2c + 1;
              local_a8 = local_a8 + 0x14;
              local_28 = local_28 + -1;
              if (bVar5) {
                uVar6 = local_60 * local_38 + local_50 + DAT_007f4d2c * local_58 ^ 7;
                pbVar8 = (byte *)(DAT_007f4cfc + ((int)uVar6 >> 3));
                *pbVar8 = *pbVar8 | '\x01' << (uVar6 & 7);
              }
            }
            uVar4 = uVar4 + 1;
            if ((int)uVar2 <= (int)uVar4) {
              uVar4 = 0;
            }
            local_ac = local_ac - 1;
            iVar3 = local_60;
          } while (local_ac != 0);
        }
      }
      iVar7 = 0;
      if (local_28 < 1) break;
      uVar4 = local_64 << 5;
      do {
        local_20 = local_20 + 1;
        if (8 < local_20) {
          local_20 = 0;
          local_60 = param_3;
          local_64 = local_64 + 1;
          uVar4 = uVar4 + 0x20;
          local_54 = (short *)Library::DKW::LIB::FUN_006acf50((int)local_54,uVar4);
          uVar2 = FUN_00411cf0((char *)local_54,local_64);
          local_3c = (int)(uVar2 * param_6 + 0xb4) / 0x168;
          if (local_3c == uVar2) {
            local_3c = 0;
          }
          local_34 = 1;
          iVar3 = local_60;
        }
        switch(local_20) {
        case 1:
          iVar3 = iVar3 + 1;
          local_60 = iVar3;
          break;
        case 2:
          iVar3 = iVar3 + -2;
          local_60 = iVar3;
          break;
        case 3:
          iVar3 = iVar3 + 3;
          local_60 = iVar3;
          break;
        case 4:
          iVar3 = iVar3 + -4;
          local_60 = iVar3;
          break;
        case 5:
          iVar3 = iVar3 + 5;
          local_60 = iVar3;
          break;
        case 6:
          iVar3 = iVar3 + -6;
          local_60 = iVar3;
          break;
        case 7:
          iVar3 = iVar3 + 7;
          local_60 = iVar3;
          break;
        case 8:
          iVar3 = iVar3 + -8;
          local_60 = iVar3;
        }
      } while ((iVar3 < 0) || (psVar1 = local_54, DAT_007f4d34 <= iVar3));
    }
    local_2c = 0;
    iVar3 = DAT_007f4d3c;
    if (0 < DAT_007f4d20) {
      do {
        local_50 = *(int *)(iVar7 + iVar3);
        local_58 = *(int *)(iVar7 + 4 + iVar3);
        local_60 = *(int *)(iVar7 + 8 + iVar3);
        if ((((local_50 < 0) || (DAT_007f4d2c <= local_50)) || (local_58 < 0)) ||
           ((DAT_007f4d30 <= local_58 ||
            (*(short *)(DAT_007f4cf0 +
                       (local_60 * local_38 + local_50 + DAT_007f4d2c * local_58) * 2) != 0)))) {
          iVar3 = FUN_0040f270(&local_50,&local_58,&local_60,DAT_007f4d0c >> 2,DAT_007f4d10 >> 2,
                               DAT_007f4d1c >> 2,param_1 >> 2,param_2 >> 2,param_3 >> 2);
          if (iVar3 != 0) {
            iVar3 = -4;
            goto LAB_00411975;
          }
          uVar2 = local_60 * local_38 + local_50 + DAT_007f4d2c * local_58 ^ 7;
          pbVar8 = (byte *)(DAT_007f4cfc + ((int)uVar2 >> 3));
          *pbVar8 = *pbVar8 | '\x01' << (uVar2 & 7);
          *(int *)(iVar7 + DAT_007f4d3c) = local_50;
          *(int *)(iVar7 + 4 + DAT_007f4d3c) = local_58;
          *(int *)(iVar7 + 8 + DAT_007f4d3c) = local_60;
          iVar3 = DAT_007f4d3c;
        }
        local_2c = local_2c + 1;
        iVar7 = iVar7 + 0x14;
      } while (local_2c < DAT_007f4d20);
    }
    FUN_0040eb90();
    iVar3 = local_44;
LAB_00411975:
    FUN_006a5e90(local_54);
    if (iVar3 == 0) {
      ExceptionList = local_14;
      return 0;
    }
    if (iVar3 != -4) {
      RaiseInternalException
                (iVar3,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\Grpway3d.cpp",0xb6e);
      ExceptionList = local_14;
      return iVar3;
    }
  }
  ExceptionList = local_14;
  return -4;
}

