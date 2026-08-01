#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_004da9c0(undefined4 param_1)

{
  byte bVar1;
  byte bVar2;
  int local_EAX_54;
  uint uVar4;
  int iVar5;
  int iVar6;
  int local_EAX_206;
  int uVar3;
  int local_EAX_798;
  uint uVar7;
  int uVar6;
  int local_EAX_1149;
  undefined4 uVar8;
  byte playerId;
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
  local_1c = &g_playerRuntime[0].field2383_0xa0e;
  local_18 = param_1;
  do {
    uVar7 = local_14;
    piVar11 = local_1c;
    playerId = (byte)local_14;
    if (*local_1c == 1) {
      local_EAX_54 = GetPlayerRaceId(playerId);
      uVar4 = local_EAX_54 & 0xff;
      if (uVar4 == 1) {
        iVar5 = 0x3d;
      }
      else if (uVar4 == 2) {
        iVar5 = 0x8d;
      }
      else if (uVar4 == 3) {
        iVar5 = 0x49;
      }
      else {
        iVar5 = 0;
      }
      iVar6 = thunk_FUN_004e60d0(uVar7,iVar5);
      iVar5 = DAT_00798f74;
      if ((uint)(*(int *)(&DAT_00798f6c + iVar6 * 4) + piVar11[3]) <=
          g_playSystem_00802A38->field_00E4) {
        if ((uint)piVar11[1] % 3 == 1) {
          *piVar11 = 0;
          piVar11[2] = 1;
        }
        else {
          uVar4 = (uint)DAT_0080874d;
          *piVar11 = 2;
          piVar11[4] = iVar5;
          if (uVar7 == uVar4) {
            local_EAX_206 = GetPlayerRaceId(playerId);
            uVar4 = local_EAX_206 & 0xff;
            if (uVar4 == 1) {
              SoundClassTy::PlaySound
                        ((SoundClassTy *)&g_sound,SOUND_MODE_6,(char *)0x0,0x71,(SoundPosition *)0x0
                         ,0);
            }
            else if (uVar4 == 2) {
              SoundClassTy::PlaySound
                        ((SoundClassTy *)&g_sound,SOUND_MODE_6,(char *)0x0,0x72,(SoundPosition *)0x0
                         ,0);
            }
            else if (uVar4 == 3) {
              SoundClassTy::PlaySound
                        ((SoundClassTy *)&g_sound,SOUND_MODE_6,(char *)0x0,0x73,(SoundPosition *)0x0
                         ,0);
            }
          }
        }
      }
    }
    else if (*local_1c == 3) {
      local_c = &DAT_008087e9;
      local_10 = (int *)0x0;
      local_8 = (int *)0x0;
      do {
        uVar3 = GetPlayerRaceId(playerId);
        uVar4 = uVar3 & 0xff;
        if (uVar4 == 1) {
          iVar5 = 0x3f;
        }
        else if (uVar4 == 2) {
          iVar5 = 0x8e;
        }
        else if (uVar4 == 3) {
          iVar5 = 0x47;
        }
        else {
          iVar5 = 0;
        }
        if (((local_8 != (int *)uVar7) && (bVar1 = *local_c, bVar1 != 0xff)) && (local_c[-1] != 0))
        {
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          _local_2c = CONCAT31(uStack_2b,bVar1);
          if (DAT_00808a8f == '\0') {
            if (bVar1 == playerId) {
LAB_004dabff:
              iVar6 = 0;
            }
            else {
              uVar4 = uVar7 & 0xff;
              bVar2 = g_playerRelationMatrix[bVar1][uVar4];
              if ((bVar2 == 0) && (g_playerRelationMatrix[uVar4][bVar1] == 0)) {
                iVar6 = -2;
              }
              else if ((bVar2 == 1) && (g_playerRelationMatrix[uVar4][bVar1] == 0)) {
                iVar6 = -1;
              }
              else if ((bVar2 == 0) && (g_playerRelationMatrix[uVar4][bVar1] == 1)) {
                iVar6 = 1;
              }
              else {
                if ((bVar2 != 1) || (g_playerRelationMatrix[uVar4][bVar1] != 1)) goto LAB_004dabff;
                iVar6 = 2;
              }
            }
            bVar12 = iVar6 < 0;
          }
          else {
            bVar12 = (&DAT_008087ea)[(uVar7 & 0xff) * 0x51] != (&DAT_008087ea)[(uint)bVar1 * 0x51];
          }
          if (bVar12) {
            iVar5 = thunk_FUN_004e60d0((int)local_8,iVar5);
            uVar4 = (&DAT_00798f74)[iVar5];
            if ((g_playSystem_00802A38->field_00E4 < piVar11[3] + uVar4) &&
               (local_10 = (int *)0x1, local_28 < uVar4)) {
              local_28 = uVar4;
            }
          }
        }
        local_c = local_c + 0x51;
        local_8 = (int *)((int)local_8 + 1);
      } while ((int)local_c < 0x808a71);
      if (local_10 == (int *)0x0) {
        *piVar11 = 0;
      }
      else {
        piVar11[4] = (piVar11[3] - g_playSystem_00802A38->field_00E4) + local_28;
      }
    }
    local_8 = piVar11 + 0xd;
    local_c = (byte *)0x0;
    do {
      if (((local_c != (byte *)uVar7) && (g_playSystem_00802A38->field_00E4 == local_8[-8])) &&
         (*local_8 == 0)) {
        if (uVar7 == DAT_0080874d) {
          *local_8 = 1;
          local_EAX_798 = GetPlayerRaceId((char)uVar7);
          uVar7 = local_EAX_798 & 0xff;
          if (uVar7 == 1) {
            iVar5 = 0x77;
          }
          else if (uVar7 == 2) {
            iVar5 = 0x78;
          }
          else {
            if (uVar7 != 3) goto LAB_004dad15;
            iVar5 = 0x79;
          }
          SoundClassTy::PlaySound
                    ((SoundClassTy *)&g_sound,SOUND_MODE_6,(char *)0x0,iVar5,(SoundPosition *)0x0,0);
        }
LAB_004dad15:
        iVar5 = 0;
        local_24 = 0;
        piVar11 = local_2bc;
        for (iVar6 = 0x9b; local_10 = local_2bc, iVar6 != 0; iVar6 = iVar6 + -1) {
          *piVar11 = 0;
          piVar11 = piVar11 + 1;
        }
        do {
          uVar6 = GetPlayerRaceId((char)local_14);
          if ((*(char *)(*(int *)(&DAT_007bfc00 + (uVar6 & 0xffU) * 4) + iVar5) == '\0') &&
             ((&DAT_007e53bc)[iVar5] != '\0')) {
            uVar7 = 0;
            local_20 = (uint *)(local_1c + 5);
            pbVar9 = &DAT_008087e9;
            do {
              if (((local_c != (byte *)uVar7) && (local_14 != uVar7)) &&
                 (((int)pbVar9 < 0x808a71 &&
                  (((g_playSystem_00802A38 == (STPlaySystemC *)0x0 || (*pbVar9 < 8)) &&
                   (g_playSystem_00802A38->field_00E4 <= *local_20)))))) {
                local_30 = thunk_FUN_004e60d0(local_14,iVar5);
                local_30 = local_30 + 1;
                iVar6 = thunk_FUN_004e60d0(uVar7,iVar5);
                iVar5 = local_24;
                if (local_30 <= iVar6) {
                  *local_10 = 1;
                  break;
                }
              }
              pbVar9 = pbVar9 + 0x51;
              uVar7 = uVar7 + 1;
              local_20 = local_20 + 1;
            } while ((int)pbVar9 < 0x808a71);
          }
          uVar4 = local_14;
          iVar5 = iVar5 + 1;
          local_10 = local_10 + 1;
          local_24 = iVar5;
        } while (iVar5 < 0x9b);
        uVar7 = local_14;
        if (DAT_008117bc != (undefined4 *)0x0) {
          memset(local_50, 0, 0x20); /* compiler bulk-zero initialization */
          local_40 = 0x5dea;
          local_3c = (undefined2)uVar4;
          iVar5 = 0;
          piVar11 = local_2bc;
          do {
            local_EAX_1149 = GetPlayerRaceId((char)local_c);
            if ((*(char *)(*(int *)(&DAT_007bfc00 + (local_EAX_1149 & 0xffU) * 4) + iVar5) == '\0')
               && (*piVar11 == 0)) {
              local_38 = (undefined2)iVar5;
              uVar8 = thunk_FUN_004e60d0(uVar4,iVar5);
              local_36 = (short)uVar8 + 1;
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
              (**(code **)*DAT_008117bc)(local_50);
            }
            iVar5 = iVar5 + 1;
            piVar11 = piVar11 + 1;
            uVar7 = local_14;
          } while (iVar5 < 0x9b);
        }
      }
      local_c = (byte *)((int)local_c + 1);
      local_8 = local_8 + 1;
    } while ((int)local_c < 8);
    local_14 = uVar7 + 1;
    /* ST_PSEUDO[flattened_global_record_array]: expected typedRecordArray[index].field after inferred base/stride proof */
    local_1c = (int *)((int)local_1c + 0xa62);
    if (0x7fab3d < (int)local_1c) {
      return 0;
    }
  } while( true );
}

