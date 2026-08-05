#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_004da9c0(undefined4 param_1)

{
  byte bVar1;
  byte bVar2;
  int local_EAX_54;
  int iVar3;
  int iVar4;
  int local_EAX_206;
  int uVar3;
  int local_EAX_798;
  int uVar6;
  int local_EAX_1149;
  undefined4 uVar5;
  uint uVar7;
  byte recordIndex;
  uint uVar8;
  byte *pbVar9;
  int *piVar11;
  bool bVar12;
  int local_2bc [155];
  undefined4 local_50 [4];
  undefined4 local_40;
  undefined2 local_3c;
  undefined2 local_38;
  short local_36;
  int local_30;
  byte local_2c;
  undefined3 uStack_2b;
  uint local_28;
  int local_24;
  uint *local_20;
  int *local_1c;
  undefined4 local_18;
  uint local_14;
  int *local_10;
  byte *local_c;
  int *local_8;

  local_28 = 0;
  local_14 = 0;
  local_1c = &g_packedRecords_A62x8[0].field2383_0xa0e;
  local_18 = param_1;
  do {
    uVar8 = local_14;
    piVar11 = local_1c;
    recordIndex = (byte)local_14;
    if (*local_1c == 1) {
      local_EAX_54 = LookupRecordByte(recordIndex);
      local_EAX_54 = (int)(byte)local_EAX_54;
      if (local_EAX_54 == 1) {
        iVar3 = 0x3d;
      }
      else if (local_EAX_54 == 2) {
        iVar3 = 0x8d;
      }
      else if (local_EAX_54 == 3) {
        iVar3 = 0x49;
      }
      else {
        iVar3 = 0;
      }
      iVar4 = thunk_FUN_004e60d0(uVar8,iVar3);
      iVar3 = DAT_00798f74;
      if ((uint)(*(int *)(&DAT_00798f6c + iVar4 * 4) + piVar11[3]) <=
          g_playSystem_00802A38->field_00E4) {
        if ((uint)piVar11[1] % 3 == 1) {
          *piVar11 = 0;
          piVar11[2] = 1;
        }
        else {
          uVar7 = (uint)DAT_0080874d;
          *piVar11 = 2;
          piVar11[4] = iVar3;
          if (uVar8 == uVar7) {
            local_EAX_206 = LookupRecordByte(recordIndex);
            local_EAX_206 = (int)(byte)local_EAX_206;
            if (local_EAX_206 == 1) {
              SoundClassTy::PlaySound
                        ((SoundClassTy *)&g_sound,SOUND_MODE_6,nullptr,0x71,nullptr
                         ,0);
            }
            else if (local_EAX_206 == 2) {
              SoundClassTy::PlaySound
                        ((SoundClassTy *)&g_sound,SOUND_MODE_6,nullptr,0x72,nullptr
                         ,0);
            }
            else if (local_EAX_206 == 3) {
              SoundClassTy::PlaySound
                        ((SoundClassTy *)&g_sound,SOUND_MODE_6,nullptr,0x73,nullptr
                         ,0);
            }
          }
        }
      }
    }
    else if (*local_1c == 3) {
      local_c = &g_bulkInitializedRecords_008087C7[0].field_0022;
      local_10 = nullptr;
      local_8 = nullptr;
      do {
        uVar3 = LookupRecordByte(recordIndex);
        uVar3 = (int)(byte)uVar3;
        if (uVar3 == 1) {
          iVar3 = 0x3f;
        }
        else if (uVar3 == 2) {
          iVar3 = 0x8e;
        }
        else if (uVar3 == 3) {
          iVar3 = 0x47;
        }
        else {
          iVar3 = 0;
        }
        if (((local_8 != (int *)uVar8) && (bVar1 = *local_c, bVar1 != 0xff)) && (local_c[-1] != 0))
        {
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          _local_2c = CONCAT31(uStack_2b,bVar1);
          if (DAT_00808a8f == '\0') {
            if (bVar1 == recordIndex) {
LAB_004dabff:
              iVar4 = 0;
            }
            else {
              uVar7 = uVar8 & 0xff;
              bVar2 = g_playerRelationMatrix[bVar1][uVar7];
              if ((bVar2 == 0) && (g_playerRelationMatrix[uVar7][bVar1] == 0)) {
                iVar4 = -2;
              }
              else if ((bVar2 == 1) && (g_playerRelationMatrix[uVar7][bVar1] == 0)) {
                iVar4 = -1;
              }
              else if ((bVar2 == 0) && (g_playerRelationMatrix[uVar7][bVar1] == 1)) {
                iVar4 = 1;
              }
              else {
                if ((bVar2 != 1) || (g_playerRelationMatrix[uVar7][bVar1] != 1)) goto LAB_004dabff;
                iVar4 = 2;
              }
            }
            bVar12 = iVar4 < 0;
          }
          else {
            bVar12 = g_bulkInitializedRecords_008087C7[uVar8 & 0xff].field_0023 !=
                     g_bulkInitializedRecords_008087C7[bVar1].field_0023;
          }
          if (bVar12) {
            iVar3 = thunk_FUN_004e60d0((int)local_8,iVar3);
            uVar7 = (&DAT_00798f74)[iVar3];
            if ((g_playSystem_00802A38->field_00E4 < piVar11[3] + uVar7) &&
               (local_10 = (int *)0x1, local_28 < uVar7)) {
              local_28 = uVar7;
            }
          }
        }
        local_c = local_c + 0x51;
        local_8 = (int *)((int)local_8 + 1);
      } while ((int)local_c < 0x808a71);
      if (local_10 == nullptr) {
        *piVar11 = 0;
      }
      else {
        piVar11[4] = (piVar11[3] - g_playSystem_00802A38->field_00E4) + local_28;
      }
    }
    local_8 = piVar11 + 0xd;
    local_c = nullptr;
    do {
      if (((local_c != (byte *)uVar8) && (g_playSystem_00802A38->field_00E4 == local_8[-8])) &&
         (*local_8 == 0)) {
        if (uVar8 == DAT_0080874d) {
          *local_8 = 1;
          local_EAX_798 = LookupRecordByte((char)uVar8);
          local_EAX_798 = (int)(byte)local_EAX_798;
          if (local_EAX_798 == 1) {
            iVar3 = 0x77;
          }
          else if (local_EAX_798 == 2) {
            iVar3 = 0x78;
          }
          else {
            if (local_EAX_798 != 3) goto LAB_004dad15;
            iVar3 = 0x79;
          }
          SoundClassTy::PlaySound
                    ((SoundClassTy *)&g_sound,SOUND_MODE_6,nullptr,iVar3,nullptr,0);
        }
LAB_004dad15:
        iVar3 = 0;
        local_24 = 0;
        piVar11 = local_2bc;
        for (iVar4 = 0x9b; local_10 = local_2bc, iVar4 != 0; iVar4 = iVar4 + -1) {
          *piVar11 = 0;
          piVar11 = piVar11 + 1;
        }
        do {
          uVar6 = LookupRecordByte((char)local_14);
          uVar6 = (int)(byte)uVar6;
          if ((*(char *)(*(int *)(&DAT_007bfc00 + uVar6 * 4) + iVar3) == '\0') &&
             ((&DAT_007e53bc)[iVar3] != '\0')) {
            uVar8 = 0;
            local_20 = (uint *)(local_1c + 5);
            pbVar9 = &g_bulkInitializedRecords_008087C7[0].field_0022;
            do {
              if (((local_c != (byte *)uVar8) && (local_14 != uVar8)) &&
                 (((int)pbVar9 < 0x808a71 &&
                  (((g_playSystem_00802A38 == nullptr || (*pbVar9 < 8)) &&
                   (g_playSystem_00802A38->field_00E4 <= *local_20)))))) {
                local_30 = thunk_FUN_004e60d0(local_14,iVar3);
                local_30 = local_30 + 1;
                iVar4 = thunk_FUN_004e60d0(uVar8,iVar3);
                iVar3 = local_24;
                if (local_30 <= iVar4) {
                  *local_10 = 1;
                  break;
                }
              }
              pbVar9 = pbVar9 + 0x51;
              uVar8 = uVar8 + 1;
              local_20 = local_20 + 1;
            } while ((int)pbVar9 < 0x808a71);
          }
          uVar7 = local_14;
          iVar3 = iVar3 + 1;
          local_10 = local_10 + 1;
          local_24 = iVar3;
        } while (iVar3 < 0x9b);
        uVar8 = local_14;
        if (DAT_008117bc != nullptr) {
          memset(local_50, 0, 0x20); /* compiler bulk-zero initialization */
          local_40 = 0x5dea;
          local_3c = (undefined2)uVar7;
          iVar3 = 0;
          piVar11 = local_2bc;
          do {
            local_EAX_1149 = LookupRecordByte((char)local_c);
            local_EAX_1149 = (int)(byte)local_EAX_1149;
            if ((*(char *)(*(int *)(&DAT_007bfc00 + local_EAX_1149 * 4) + iVar3) == '\0') &&
               (*piVar11 == 0)) {
              local_38 = (undefined2)iVar3;
              uVar5 = thunk_FUN_004e60d0(uVar7,iVar3);
              local_36 = (short)uVar5 + 1;
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
              (**(code **)*DAT_008117bc)(local_50);
            }
            iVar3 = iVar3 + 1;
            piVar11 = piVar11 + 1;
            uVar8 = local_14;
          } while (iVar3 < 0x9b);
        }
      }
      local_c = (byte *)((int)local_c + 1);
      local_8 = local_8 + 1;
    } while ((int)local_c < 8);
    local_14 = uVar8 + 1;
    /* ST_PSEUDO[flattened_global_record_array]: expected typedRecordArray[index].field after inferred base/stride proof */
    local_1c = (int *)((int)local_1c + 0xa62);
    if (0x7fab3d < (int)local_1c) {
      return 0;
    }
  } while( true );
}

