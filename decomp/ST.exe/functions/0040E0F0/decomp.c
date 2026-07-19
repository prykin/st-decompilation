
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\wlad\Grpway3d.cpp
   Diagnostic line evidence: 2357 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

int FUN_0040e0f0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  byte *pbVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  int iVar10;
  int iVar11;
  int local_bc;
  int local_b8;
  uint local_b4;
  int local_a8;
  int local_74;
  int local_70;
  int local_60;
  int local_5c;
  int local_54 [2];
  int local_4c;
  int local_48 [2];
  int local_40;
  int local_38;
  int local_34;
  uint local_30;
  int local_2c;
  int local_28;
  byte *local_24;
  uint local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_00790030;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_1c = &stack0xffffff34;
  local_38 = 0;
  if (((((DAT_007f4d20 < 0xc9) && (-1 < param_1)) && (param_1 < DAT_007f4d2c)) &&
      ((-1 < param_2 && (param_2 < DAT_007f4d30)))) && ((-1 < param_3 && (param_3 < DAT_007f4d34))))
  {
    local_34 = DAT_007f4d30 * DAT_007f4d2c;
    local_30 = (uint)(0 < DAT_007f4d24);
    local_24 = (byte *)0x0;
    if (0 < param_4) {
      param_1 = param_1 - (DAT_007f4d38 * param_4 >> 0x10);
      param_2 = param_2 + (DAT_007f4d28 * param_4 >> 0x10);
    }
    local_2c = 0;
    local_28 = DAT_007f4d20;
    param_1 = param_1 * 4 + 2;
    param_2 = param_2 * 4 + 2;
    local_54[0] = param_3;
    uVar7 = *(uint *)(&DAT_007a4b60 + param_5 * 4);
    local_40 = (int)(uVar7 + ((int)uVar7 >> 0x1f & 7U)) >> 3;
    if (local_40 == 0) {
      local_40 = 1;
    }
    uVar6 = DAT_007f4d28 * 4;
    uVar1 = DAT_007f4d38 * 4;
    iVar5 = (uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f);
    iVar4 = (uVar6 ^ (int)uVar6 >> 0x1f) - ((int)uVar6 >> 0x1f);
    local_20 = uVar7;
    if (iVar4 < iVar5) {
      ExceptionList = &local_14;
      local_74 = FUN_006db610(uVar6,iVar5);
      local_74 = local_74 << 2;
      local_60 = (((int)uVar1 < 1) - 1 & 0x80000) - 0x40000;
    }
    else {
      ExceptionList = &local_14;
      local_1c = &stack0xffffff34;
      local_60 = FUN_006db610(uVar1,iVar4);
      local_60 = local_60 << 2;
      local_74 = (((int)uVar6 < 1) - 1 & 0x80000) - 0x40000;
    }
    iVar5 = -((int)uVar7 / 2) * local_74;
    iVar4 = -((int)uVar7 / 2) * local_60;
    local_70 = 0;
    while( true ) {
      local_5c = 0;
      if ((local_28 < (int)uVar7) && (local_30 != 0)) {
        if (local_24 == (byte *)0x0) {
          local_8 = 0;
          Library::MSVCRT::FUN_0072da40();
          local_8 = 0xffffffff;
          local_24 = &stack0xffffff34;
          local_1c = &stack0xffffff34;
        }
        pbVar9 = local_24;
        for (uVar6 = uVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          pbVar9[0] = 0;
          pbVar9[1] = 0;
          pbVar9[2] = 0;
          pbVar9[3] = 0;
          pbVar9 = pbVar9 + 4;
        }
        for (uVar6 = uVar7 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pbVar9 = 0;
          pbVar9 = pbVar9 + 1;
        }
        iVar10 = 0;
        if (0 < (int)uVar7) {
          local_a8 = iVar4 + 0x8000;
          iVar8 = iVar5 + 0x8000;
          do {
            local_48[0] = (iVar8 >> 0x10) + param_1 >> 2;
            local_4c = (local_a8 >> 0x10) + param_2 >> 2;
            if ((((-1 < local_48[0]) && (local_48[0] < DAT_007f4d2c)) && (-1 < local_4c)) &&
               ((local_4c < DAT_007f4d30 &&
                (uVar6 = local_54[0] * local_34 + local_48[0] + DAT_007f4d2c * local_4c ^ 7,
                (*(byte *)(DAT_007f4cfc + ((int)uVar6 >> 3)) >> (uVar6 & 7) & 1) != 0)))) {
              local_5c = local_5c + 1;
              local_24[iVar10] = 1;
            }
            iVar8 = iVar8 + local_74;
            local_a8 = local_a8 + local_60;
            iVar10 = iVar10 + 1;
          } while (iVar10 < (int)uVar7);
        }
      }
      pbVar9 = local_24;
      if (local_5c < (int)uVar7) {
        if (local_5c + local_28 < (int)uVar7) {
          if (local_5c < 1) {
            iVar8 = iVar5 - local_74;
            iVar10 = iVar4 - local_60;
            local_74 = (int)((uVar7 + 1) * local_74) / (local_28 + 1);
            local_60 = (int)((local_20 + 1) * local_60) / (local_28 + 1);
            uVar7 = local_20;
            if (0 < local_28) {
              iVar11 = local_2c * 0x14;
              iVar10 = iVar10 + 0x8000;
              iVar8 = iVar8 + 0x8000;
              local_bc = local_28;
              local_2c = local_2c + local_28;
              do {
                iVar8 = iVar8 + local_74;
                iVar10 = iVar10 + local_60;
                local_48[0] = (iVar8 >> 0x10) + param_1 >> 2;
                local_4c = (iVar10 >> 0x10) + param_2 >> 2;
                *(int *)(iVar11 + DAT_007f4d3c) = local_48[0];
                *(int *)(iVar11 + 4 + DAT_007f4d3c) = local_4c;
                *(int *)(iVar11 + 8 + DAT_007f4d3c) = local_54[0];
                iVar11 = iVar11 + 0x14;
                if (((-1 < local_48[0]) && (local_48[0] < DAT_007f4d2c)) &&
                   ((-1 < local_4c && (local_4c < DAT_007f4d30)))) {
                  uVar7 = local_54[0] * local_34 + local_48[0] + DAT_007f4d2c * local_4c ^ 7;
                  pbVar9 = (byte *)(DAT_007f4cfc + ((int)uVar7 >> 3));
                  *pbVar9 = *pbVar9 | '\x01' << (uVar7 & 7);
                }
                local_bc = local_bc + -1;
                uVar7 = local_20;
              } while (local_bc != 0);
            }
          }
          else {
            FUN_0040f4d0((undefined4 *)local_24,uVar7,local_40,0);
            if (0 < local_28) {
              iVar10 = local_2c * 0x14;
              local_b8 = local_28;
              local_2c = local_2c + local_28;
              do {
                iVar8 = FUN_0040f840(pbVar9,uVar7,local_40,0);
                local_48[0] = (iVar8 * local_74 + 0x8000 + iVar5 >> 0x10) + param_1 >> 2;
                local_4c = (iVar8 * local_60 + 0x8000 + iVar4 >> 0x10) + param_2 >> 2;
                *(int *)(iVar10 + DAT_007f4d3c) = local_48[0];
                *(int *)(iVar10 + 4 + DAT_007f4d3c) = local_4c;
                *(int *)(iVar10 + 8 + DAT_007f4d3c) = local_54[0];
                iVar10 = iVar10 + 0x14;
                if ((((-1 < local_48[0]) && (local_48[0] < DAT_007f4d2c)) && (-1 < local_4c)) &&
                   (local_4c < DAT_007f4d30)) {
                  uVar6 = local_54[0] * local_34 + local_48[0] + DAT_007f4d2c * local_4c ^ 7;
                  pbVar2 = (byte *)(DAT_007f4cfc + ((int)uVar6 >> 3));
                  *pbVar2 = *pbVar2 | '\x01' << (uVar6 & 7);
                }
                local_b8 = local_b8 + -1;
              } while (local_b8 != 0);
            }
          }
          local_28 = 0;
        }
        else if (0 < (int)uVar7) {
          iVar11 = local_2c * 0x14;
          iVar10 = iVar4 + 0x8000;
          iVar8 = iVar5 + 0x8000;
          local_b4 = uVar7;
          do {
            local_48[0] = (iVar8 >> 0x10) + param_1 >> 2;
            local_4c = (iVar10 >> 0x10) + param_2 >> 2;
            if (((local_48[0] < 0) || (DAT_007f4d2c <= local_48[0])) ||
               ((local_4c < 0 || (DAT_007f4d30 <= local_4c)))) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if ((!bVar3) ||
               (uVar7 = local_54[0] * local_34 + local_48[0] + DAT_007f4d2c * local_4c ^ 7,
               (*(byte *)(DAT_007f4cfc + ((int)uVar7 >> 3)) >> (uVar7 & 7) & 1) == 0)) {
              *(int *)(iVar11 + DAT_007f4d3c) = local_48[0];
              *(int *)(iVar11 + 4 + DAT_007f4d3c) = local_4c;
              *(int *)(iVar11 + 8 + DAT_007f4d3c) = local_54[0];
              local_2c = local_2c + 1;
              iVar11 = iVar11 + 0x14;
              local_28 = local_28 + -1;
              if (bVar3) {
                uVar7 = local_54[0] * local_34 + local_48[0] + DAT_007f4d2c * local_4c ^ 7;
                pbVar9 = (byte *)(DAT_007f4cfc + ((int)uVar7 >> 3));
                *pbVar9 = *pbVar9 | '\x01' << (uVar7 & 7);
              }
            }
            iVar8 = iVar8 + local_74;
            iVar10 = iVar10 + local_60;
            local_b4 = local_b4 - 1;
            uVar7 = local_20;
          } while (local_b4 != 0);
        }
      }
      if (local_28 < 1) break;
      do {
        local_70 = local_70 + 1;
        if (8 < local_70) {
          local_70 = 0;
          param_1 = param_1 - ((DAT_007f4d38 << 2) >> 0x10);
          param_2 = param_2 + ((DAT_007f4d28 << 2) >> 0x10);
          local_30 = 1;
          local_54[0] = param_3;
        }
        switch(local_70) {
        case 1:
          local_54[0] = local_54[0] + 1;
          break;
        case 2:
          local_54[0] = local_54[0] + -2;
          break;
        case 3:
          local_54[0] = local_54[0] + 3;
          break;
        case 4:
          local_54[0] = local_54[0] + -4;
          break;
        case 5:
          local_54[0] = local_54[0] + 5;
          break;
        case 6:
          local_54[0] = local_54[0] + -6;
          break;
        case 7:
          local_54[0] = local_54[0] + 7;
          break;
        case 8:
          local_54[0] = local_54[0] + -8;
        }
      } while ((local_54[0] < 0) || (DAT_007f4d34 <= local_54[0]));
    }
    local_2c = 0;
    if (0 < DAT_007f4d20) {
      iVar10 = 0;
      iVar4 = local_34;
      iVar5 = DAT_007f4d3c;
      do {
        local_48[0] = *(int *)(iVar10 + iVar5);
        local_4c = *(int *)(iVar10 + 4 + iVar5);
        local_54[0] = *(int *)(iVar10 + 8 + iVar5);
        if ((((local_48[0] < 0) || (DAT_007f4d2c <= local_48[0])) || (local_4c < 0)) ||
           ((DAT_007f4d30 <= local_4c ||
            (iVar4 = local_34,
            *(short *)(DAT_007f4cf0 +
                      (local_54[0] * local_34 + local_48[0] + DAT_007f4d2c * local_4c) * 2) != 0))))
        {
          iVar5 = FUN_0040f270(local_48,&local_4c,local_54,DAT_007f4d0c >> 2,DAT_007f4d10 >> 2,
                               DAT_007f4d1c >> 2,param_1 >> 2,param_2 >> 2,param_3 >> 2);
          if (iVar5 != 0) {
            iVar4 = -4;
            goto LAB_0040e872;
          }
          uVar7 = local_54[0] * iVar4 + local_48[0] + DAT_007f4d2c * local_4c ^ 7;
          pbVar9 = (byte *)(DAT_007f4cfc + ((int)uVar7 >> 3));
          *pbVar9 = *pbVar9 | '\x01' << (uVar7 & 7);
          *(int *)(iVar10 + DAT_007f4d3c) = local_48[0];
          *(int *)(iVar10 + 4 + DAT_007f4d3c) = local_4c;
          *(int *)(iVar10 + 8 + DAT_007f4d3c) = local_54[0];
          iVar5 = DAT_007f4d3c;
        }
        local_2c = local_2c + 1;
        iVar10 = iVar10 + 0x14;
      } while (local_2c < DAT_007f4d20);
    }
    FUN_0040eb90();
    iVar4 = local_38;
LAB_0040e872:
    if (iVar4 == 0) {
      ExceptionList = local_14;
      return 0;
    }
    if (iVar4 != -4) {
      RaiseInternalException(iVar4,DAT_007ed77c,s_E____titans_wlad_Grpway3d_cpp_007a4ca8,0x935);
      ExceptionList = local_14;
      return iVar4;
    }
  }
  ExceptionList = local_14;
  return -4;
}

