#include "../../pseudocode_runtime.h"


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\wlad\Grpway3d.cpp
   Diagnostic line evidence: 3130 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

int FUN_00411e50(int param_1,int param_2,int param_3,int param_4,int param_5,uint param_6,
                int param_7)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  int local_b4;
  int local_b0;
  uint local_ac;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  short *local_58;
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
    local_28 = nullptr;
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
    local_58 = Library::DKW::LIB::MemAlloc(local_68 << 5);
    local_34 = FUN_00411cf0((char *)local_58,local_68);
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
    iVar3 = DAT_007f4d2c;
    iVar7 = local_64;
    while( true ) {
      local_b0 = local_2c;
      local_6c = 0;
      if ((local_2c < (int)local_24) && (local_38 != 0)) {
        if (local_60 < (int)local_24) {
          local_60 = local_24 * 2;
          local_1c = &stack0xffffff3c;
          local_28 = &stack0xffffff3c;
          local_8 = 0xffffffff;
        }
        pbVar8 = local_28;
        memset(pbVar8, 0, local_24); /* compiler bulk-zero initialization */
        uVar4 = 0;
        iVar9 = 0;
        iVar3 = DAT_007f4d2c;
        iVar7 = local_64;
        iVar6 = local_40;
        if (0 < (int)local_24) {
          do {
            local_54 = (char)local_58[iVar6 * 2] + param_1;
            local_5c = *(char *)((int)local_58 + iVar6 * 4 + 1) + param_2;
            if ((((-1 < local_54) && (local_54 < iVar3)) && (-1 < local_5c)) &&
               ((local_5c < DAT_007f4d30 &&
                (uVar4 = local_64 * local_3c + local_54 + iVar3 * local_5c ^ 7, iVar3 = DAT_007f4d2c
                , (g_bitset_007F4CFC[(int)uVar4 >> 3] >> (uVar4 & 7) & 1) != 0)))) {
              local_6c = local_6c + 1;
              local_28[iVar9] = 1;
              iVar3 = DAT_007f4d2c;
            }
            iVar6 = iVar6 + 1;
            if (local_34 <= iVar6) {
              iVar6 = 0;
            }
            iVar9 = iVar9 + 1;
          } while (iVar9 < (int)local_24);
        }
      }
      if (local_6c < (int)local_24) {
        local_44 = local_40;
        if (local_6c + local_2c < (int)local_24) {
          if (local_6c < 1) {
            iVar6 = local_40 * 0x10000 + -0x10000;
            if (0 < local_2c) {
              iVar9 = local_30 * 0x14;
              local_b4 = local_2c;
              local_30 = local_30 + local_2c;
              do {
                iVar6 = iVar6 + (int)((local_24 + 1) * 0x10000) / (local_2c + 1);
                iVar3 = iVar6 >> 0x10;
                if (local_34 <= iVar3) {
                  iVar6 = iVar6 + local_34 * -0x10000;
                  iVar3 = iVar6 >> 0x10;
                }
                local_54 = (char)local_58[iVar3 * 2] + param_1;
                local_5c = *(char *)((int)local_58 + iVar3 * 4 + 1) + param_2;
                STObjectAtByteOffset(g_runtimeRecords_007F4D3C, iVar9).field_0000 = local_54;
                STObjectAtByteOffset(g_runtimeRecords_007F4D3C, iVar9).field_0004 = local_5c;
                STObjectAtByteOffset(g_runtimeRecords_007F4D3C, iVar9).field_0008 = local_64;
                iVar9 = iVar9 + 0x14;
                if (((-1 < local_54) && (local_54 < DAT_007f4d2c)) &&
                   ((-1 < local_5c && (local_5c < DAT_007f4d30)))) {
                  uVar4 = local_64 * local_3c + local_54 + DAT_007f4d2c * local_5c ^ 7;
                  g_bitset_007F4CFC[(int)uVar4 >> 3] =
                       g_bitset_007F4CFC[(int)uVar4 >> 3] | '\x01' << (uVar4 & 7);
                }
                local_b4 = local_b4 + -1;
                iVar3 = DAT_007f4d2c;
                iVar7 = local_64;
              } while (local_b4 != 0);
            }
          }
          else {
            FUN_0040f4d0((undefined4 *)local_28,local_24,local_50,0);
            psVar1 = local_58;
            iVar3 = DAT_007f4d2c;
            iVar7 = local_64;
            if (0 < local_b0) {
              iVar6 = local_30 * 0x14;
              local_30 = local_30 + local_b0;
              do {
                iVar2 = FUN_0040f840(local_28,local_24,local_50,0);
                iVar3 = (iVar2 + local_40) % local_34;
                local_54 = (char)psVar1[iVar3 * 2] + param_1;
                local_5c = *(char *)((int)psVar1 + iVar3 * 4 + 1) + param_2;
                STObjectAtByteOffset(g_runtimeRecords_007F4D3C, iVar6).field_0000 = local_54;
                STObjectAtByteOffset(g_runtimeRecords_007F4D3C, iVar6).field_0004 = local_5c;
                STObjectAtByteOffset(g_runtimeRecords_007F4D3C, iVar6).field_0008 = local_64;
                iVar6 = iVar6 + 0x14;
                if ((((-1 < local_54) && (local_54 < DAT_007f4d2c)) && (-1 < local_5c)) &&
                   (local_5c < DAT_007f4d30)) {
                  uVar4 = local_64 * local_3c + local_54 + DAT_007f4d2c * local_5c ^ 7;
                  g_bitset_007F4CFC[(int)uVar4 >> 3] =
                       g_bitset_007F4CFC[(int)uVar4 >> 3] | '\x01' << (uVar4 & 7);
                }
                local_b0 = local_b0 + -1;
                iVar3 = DAT_007f4d2c;
                iVar7 = local_64;
              } while (local_b0 != 0);
            }
          }
          local_2c = 0;
        }
        else if (0 < (int)local_24) {
          iVar6 = local_30 * 0x14;
          local_ac = local_24;
          do {
            local_54 = (char)local_58[local_44 * 2] + param_1;
            local_5c = *(char *)((int)local_58 + local_44 * 4 + 1) + param_2;
            if (((local_54 < 0) || (iVar3 <= local_54)) ||
               ((local_5c < 0 || (DAT_007f4d30 <= local_5c)))) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            if ((!bVar5) ||
               (uVar4 = iVar7 * local_3c + local_54 + iVar3 * local_5c ^ 7,
               (g_bitset_007F4CFC[(int)uVar4 >> 3] >> (uVar4 & 7) & 1) == 0)) {
              STObjectAtByteOffset(g_runtimeRecords_007F4D3C, iVar6).field_0000 = local_54;
              STObjectAtByteOffset(g_runtimeRecords_007F4D3C, iVar6).field_0004 = local_5c;
              STObjectAtByteOffset(g_runtimeRecords_007F4D3C, iVar6).field_0008 = local_64;
              local_30 = local_30 + 1;
              iVar6 = iVar6 + 0x14;
              local_2c = local_2c + -1;
              if (bVar5) {
                uVar4 = local_64 * local_3c + local_54 + DAT_007f4d2c * local_5c ^ 7;
                g_bitset_007F4CFC[(int)uVar4 >> 3] =
                     g_bitset_007F4CFC[(int)uVar4 >> 3] | '\x01' << (uVar4 & 7);
              }
            }
            local_44 = local_44 + 1;
            if (local_34 <= local_44) {
              local_44 = 0;
            }
            local_ac = local_ac - 1;
            iVar3 = DAT_007f4d2c;
            iVar7 = local_64;
          } while (local_ac != 0);
        }
      }
      if (local_2c < 1) break;
      uVar4 = local_68 << 5;
      do {
        local_20 = local_20 + 1;
        if (8 < local_20) {
          local_20 = 0;
          local_64 = param_3;
          local_68 = local_68 + 1;
          uVar4 = uVar4 + 0x20;
          local_58 = Library::DKW::LIB::MemRealloc(local_58,uVar4);
          local_34 = FUN_00411cf0((char *)local_58,local_68);
          local_40 = (int)(local_34 * param_6 + 0xb4) / 0x168;
          if (local_40 == local_34) {
            local_40 = 0;
          }
          local_24 = local_34 / 2 + 1;
          local_38 = 1;
          iVar3 = DAT_007f4d2c;
          iVar7 = local_64;
        }
        switch(local_20) {
        case 1:
          iVar7 = iVar7 + 1;
          local_64 = iVar7;
          break;
        case 2:
          iVar7 = iVar7 + -2;
          local_64 = iVar7;
          break;
        case 3:
          iVar7 = iVar7 + 3;
          local_64 = iVar7;
          break;
        case 4:
          iVar7 = iVar7 + -4;
          local_64 = iVar7;
          break;
        case 5:
          iVar7 = iVar7 + 5;
          local_64 = iVar7;
          break;
        case 6:
          iVar7 = iVar7 + -6;
          local_64 = iVar7;
          break;
        case 7:
          iVar7 = iVar7 + 7;
          local_64 = iVar7;
          break;
        case 8:
          iVar7 = iVar7 + -8;
          local_64 = iVar7;
        }
      } while ((iVar7 < 0) || (DAT_007f4d34 <= iVar7));
    }
    local_30 = 0;
    if (0 < DAT_007f4d20) {
      iVar6 = 0;
      iVar7 = local_3c;
      do {
        local_54 = STObjectAtByteOffset(g_runtimeRecords_007F4D3C, iVar6).field_0000;
        local_5c = STObjectAtByteOffset(g_runtimeRecords_007F4D3C, iVar6).field_0004;
        local_64 = STObjectAtByteOffset(g_runtimeRecords_007F4D3C, iVar6).field_0008;
        if ((((local_54 < 0) || (iVar3 <= local_54)) || (local_5c < 0)) ||
           ((DAT_007f4d30 <= local_5c ||
            (iVar7 = local_3c,
            *(short *)((int)PTR_007f4cf0 + (local_64 * local_3c + local_54 + iVar3 * local_5c) * 2)
            != 0)))) {
          iVar3 = FUN_0040f270(&local_54,&local_5c,&local_64,DAT_007f4d0c >> 2,DAT_007f4d10 >> 2,
                               DAT_007f4d1c >> 2,param_1 >> 2,param_2 >> 2,param_3 >> 2);
          if (iVar3 != 0) {
            iVar3 = -4;
            goto LAB_004125c1;
          }
          uVar4 = local_64 * iVar7 + local_54 + DAT_007f4d2c * local_5c ^ 7;
          g_bitset_007F4CFC[(int)uVar4 >> 3] =
               g_bitset_007F4CFC[(int)uVar4 >> 3] | '\x01' << (uVar4 & 7);
          STObjectAtByteOffset(g_runtimeRecords_007F4D3C, iVar6).field_0000 = local_54;
          STObjectAtByteOffset(g_runtimeRecords_007F4D3C, iVar6).field_0004 = local_5c;
          STObjectAtByteOffset(g_runtimeRecords_007F4D3C, iVar6).field_0008 = local_64;
          iVar3 = DAT_007f4d2c;
        }
        local_30 = local_30 + 1;
        iVar6 = iVar6 + 0x14;
      } while (local_30 < DAT_007f4d20);
    }
    FUN_0040eb90();
    iVar3 = local_48;
LAB_004125c1:
    FUN_006a5e90(local_58);
    if (iVar3 == 0) {
      ExceptionList = local_14;
      return 0;
    }
    if (iVar3 != -4) {
      RaiseInternalException
                (iVar3,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\Grpway3d.cpp",0xc3a);
      ExceptionList = local_14;
      return iVar3;
    }
  }
  ExceptionList = local_14;
  return -4;
}

