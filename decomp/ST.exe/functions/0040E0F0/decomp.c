#include "../../pseudocode_runtime.h"


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\wlad\Grpway3d.cpp
   Diagnostic line evidence: 2357 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

int FUN_0040e0f0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  int iVar8;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  int iVar10;
  RuntimeRecord_007F4D3C_0014 *pRVar11;
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
    local_24 = nullptr;
    if (0 < param_4) {
      param_1 = param_1 - (DAT_007f4d38 * param_4 >> 0x10);
      param_2 = param_2 + (DAT_007f4d28 * param_4 >> 0x10);
    }
    local_2c = 0;
    local_28 = DAT_007f4d20;
    param_1 = param_1 * 4 + 2;
    param_2 = param_2 * 4 + 2;
    local_54[0] = param_3;
    uVar6 = *(uint *)(&DAT_007a4b60 + param_5 * 4);
    local_40 = (int)(uVar6 + ((int)uVar6 >> 0x1f & 7U)) >> 3;
    if (local_40 == 0) {
      local_40 = 1;
    }
    uVar5 = DAT_007f4d28 * 4;
    uVar1 = DAT_007f4d38 * 4;
    iVar4 = (uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f);
    iVar3 = (uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f);
    local_20 = uVar6;
    if (iVar3 < iVar4) {
      ExceptionList = &local_14;
      local_74 = FUN_006db610(uVar5,iVar4);
      local_74 = local_74 << 2;
      local_60 = (((int)uVar1 < 1) - 1 & 0x80000) - 0x40000;
    }
    else {
      ExceptionList = &local_14;
      local_1c = &stack0xffffff34;
      local_60 = FUN_006db610(uVar1,iVar3);
      local_60 = local_60 << 2;
      local_74 = (((int)uVar5 < 1) - 1 & 0x80000) - 0x40000;
    }
    iVar4 = -((int)uVar6 / 2) * local_74;
    iVar3 = -((int)uVar6 / 2) * local_60;
    local_70 = 0;
    while( true ) {
      local_5c = 0;
      if ((local_28 < (int)uVar6) && (local_30 != 0)) {
        if (local_24 == nullptr) {
          local_1c = &stack0xffffff34;
          local_24 = &stack0xffffff34;
          local_8 = 0xffffffff;
        }
        pbVar8 = local_24;
        memset(pbVar8, 0, uVar6); /* compiler bulk-zero initialization */
        uVar5 = 0;
        iVar9 = 0;
        if (0 < (int)uVar6) {
          local_a8 = iVar3 + 0x8000;
          iVar7 = iVar4 + 0x8000;
          do {
            local_48[0] = (iVar7 >> 0x10) + param_1 >> 2;
            local_4c = (local_a8 >> 0x10) + param_2 >> 2;
            if ((((-1 < local_48[0]) && (local_48[0] < DAT_007f4d2c)) && (-1 < local_4c)) &&
               ((local_4c < DAT_007f4d30 &&
                (uVar5 = local_54[0] * local_34 + local_48[0] + DAT_007f4d2c * local_4c ^ 7,
                (g_bitset_007F4CFC[(int)uVar5 >> 3] >> (uVar5 & 7) & 1) != 0)))) {
              local_5c = local_5c + 1;
              local_24[iVar9] = 1;
            }
            iVar7 = iVar7 + local_74;
            local_a8 = local_a8 + local_60;
            iVar9 = iVar9 + 1;
          } while (iVar9 < (int)uVar6);
        }
      }
      pbVar8 = local_24;
      if (local_5c < (int)uVar6) {
        if (local_5c + local_28 < (int)uVar6) {
          if (local_5c < 1) {
            iVar7 = iVar4 - local_74;
            iVar9 = iVar3 - local_60;
            local_74 = (int)((uVar6 + 1) * local_74) / (local_28 + 1);
            local_60 = (int)((local_20 + 1) * local_60) / (local_28 + 1);
            uVar6 = local_20;
            if (0 < local_28) {
              iVar10 = local_2c * 0x14;
              iVar9 = iVar9 + 0x8000;
              iVar7 = iVar7 + 0x8000;
              local_bc = local_28;
              local_2c = local_2c + local_28;
              do {
                iVar7 = iVar7 + local_74;
                iVar9 = iVar9 + local_60;
                local_48[0] = (iVar7 >> 0x10) + param_1 >> 2;
                local_4c = (iVar9 >> 0x10) + param_2 >> 2;
                STObjectAtByteOffset(g_runtimeRecords_007F4D3C, iVar10).field_0000 = local_48[0];
                STObjectAtByteOffset(g_runtimeRecords_007F4D3C, iVar10).field_0004 = local_4c;
                STObjectAtByteOffset(g_runtimeRecords_007F4D3C, iVar10).field_0008 = local_54[0];
                iVar10 = iVar10 + 0x14;
                if (((-1 < local_48[0]) && (local_48[0] < DAT_007f4d2c)) &&
                   ((-1 < local_4c && (local_4c < DAT_007f4d30)))) {
                  uVar6 = local_54[0] * local_34 + local_48[0] + DAT_007f4d2c * local_4c ^ 7;
                  g_bitset_007F4CFC[(int)uVar6 >> 3] =
                       g_bitset_007F4CFC[(int)uVar6 >> 3] | '\x01' << (uVar6 & 7);
                }
                local_bc = local_bc + -1;
                uVar6 = local_20;
              } while (local_bc != 0);
            }
          }
          else {
            FUN_0040f4d0((undefined4 *)local_24,uVar6,local_40,0);
            if (0 < local_28) {
              iVar9 = local_2c * 0x14;
              local_b8 = local_28;
              local_2c = local_2c + local_28;
              do {
                iVar8 = FUN_0040f840(pbVar8,uVar6,local_40,0);
                local_48[0] = (iVar8 * local_74 + 0x8000 + iVar4 >> 0x10) + param_1 >> 2;
                local_4c = (iVar8 * local_60 + 0x8000 + iVar3 >> 0x10) + param_2 >> 2;
                STObjectAtByteOffset(g_runtimeRecords_007F4D3C, iVar9).field_0000 = local_48[0];
                STObjectAtByteOffset(g_runtimeRecords_007F4D3C, iVar9).field_0004 = local_4c;
                STObjectAtByteOffset(g_runtimeRecords_007F4D3C, iVar9).field_0008 = local_54[0];
                iVar9 = iVar9 + 0x14;
                if ((((-1 < local_48[0]) && (local_48[0] < DAT_007f4d2c)) && (-1 < local_4c)) &&
                   (local_4c < DAT_007f4d30)) {
                  uVar5 = local_54[0] * local_34 + local_48[0] + DAT_007f4d2c * local_4c ^ 7;
                  g_bitset_007F4CFC[(int)uVar5 >> 3] =
                       g_bitset_007F4CFC[(int)uVar5 >> 3] | '\x01' << (uVar5 & 7);
                }
                local_b8 = local_b8 + -1;
              } while (local_b8 != 0);
            }
          }
          local_28 = 0;
        }
        else if (0 < (int)uVar6) {
          iVar10 = local_2c * 0x14;
          iVar9 = iVar3 + 0x8000;
          iVar7 = iVar4 + 0x8000;
          local_b4 = uVar6;
          do {
            local_48[0] = (iVar7 >> 0x10) + param_1 >> 2;
            local_4c = (iVar9 >> 0x10) + param_2 >> 2;
            if (((local_48[0] < 0) || (DAT_007f4d2c <= local_48[0])) ||
               ((local_4c < 0 || (DAT_007f4d30 <= local_4c)))) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if ((!bVar2) ||
               (uVar6 = local_54[0] * local_34 + local_48[0] + DAT_007f4d2c * local_4c ^ 7,
               (g_bitset_007F4CFC[(int)uVar6 >> 3] >> (uVar6 & 7) & 1) == 0)) {
              STObjectAtByteOffset(g_runtimeRecords_007F4D3C, iVar10).field_0000 = local_48[0];
              STObjectAtByteOffset(g_runtimeRecords_007F4D3C, iVar10).field_0004 = local_4c;
              STObjectAtByteOffset(g_runtimeRecords_007F4D3C, iVar10).field_0008 = local_54[0];
              local_2c = local_2c + 1;
              iVar10 = iVar10 + 0x14;
              local_28 = local_28 + -1;
              if (bVar2) {
                uVar6 = local_54[0] * local_34 + local_48[0] + DAT_007f4d2c * local_4c ^ 7;
                g_bitset_007F4CFC[(int)uVar6 >> 3] =
                     g_bitset_007F4CFC[(int)uVar6 >> 3] | '\x01' << (uVar6 & 7);
              }
            }
            iVar7 = iVar7 + local_74;
            iVar9 = iVar9 + local_60;
            local_b4 = local_b4 - 1;
            uVar6 = local_20;
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
      iVar4 = 0;
      iVar3 = local_34;
      pRVar11 = g_runtimeRecords_007F4D3C;
      do {
        local_48[0] = STObjectAtByteOffset(pRVar11, iVar4).field_0000;
        local_4c = STObjectAtByteOffset(pRVar11, iVar4).field_0004;
        local_54[0] = STObjectAtByteOffset(pRVar11, iVar4).field_0008;
        if ((((local_48[0] < 0) || (DAT_007f4d2c <= local_48[0])) || (local_4c < 0)) ||
           ((DAT_007f4d30 <= local_4c ||
            (iVar3 = local_34,
            *(short *)((int)PTR_007f4cf0 +
                      (local_54[0] * local_34 + local_48[0] + DAT_007f4d2c * local_4c) * 2) != 0))))
        {
          iVar9 = FUN_0040f270(local_48,&local_4c,local_54,DAT_007f4d0c >> 2,DAT_007f4d10 >> 2,
                               DAT_007f4d1c >> 2,param_1 >> 2,param_2 >> 2,param_3 >> 2);
          if (iVar9 != 0) {
            iVar3 = -4;
            goto LAB_0040e872;
          }
          uVar6 = local_54[0] * iVar3 + local_48[0] + DAT_007f4d2c * local_4c ^ 7;
          g_bitset_007F4CFC[(int)uVar6 >> 3] =
               g_bitset_007F4CFC[(int)uVar6 >> 3] | '\x01' << (uVar6 & 7);
          STObjectAtByteOffset(g_runtimeRecords_007F4D3C, iVar4).field_0000 = local_48[0];
          STObjectAtByteOffset(g_runtimeRecords_007F4D3C, iVar4).field_0004 = local_4c;
          STObjectAtByteOffset(g_runtimeRecords_007F4D3C, iVar4).field_0008 = local_54[0];
          pRVar11 = g_runtimeRecords_007F4D3C;
        }
        local_2c = local_2c + 1;
        iVar4 = iVar4 + 0x14;
      } while (local_2c < DAT_007f4d20);
    }
    FUN_0040eb90();
    iVar3 = local_38;
LAB_0040e872:
    if (iVar3 == 0) {
      ExceptionList = local_14;
      return 0;
    }
    if (iVar3 != -4) {
      RaiseInternalException
                (iVar3,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\Grpway3d.cpp",0x935);
      ExceptionList = local_14;
      return iVar3;
    }
  }
  ExceptionList = local_14;
  return -4;
}

