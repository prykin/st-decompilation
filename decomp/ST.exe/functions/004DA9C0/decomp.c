#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_004da9c0(undefined4 param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  byte playerId;
  byte *pbVar8;
  int *piVar10;
  bool bVar11;
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
  local_1c = &g_playerRuntime[0].field2180_0xa0e;
  local_18 = param_1;
  do {
    uVar6 = local_14;
    piVar10 = local_1c;
    playerId = (byte)local_14;
    if (*local_1c == 1) {
      uVar3 = GetPlayerRaceId(playerId);
      uVar3 = uVar3 & 0xff;
      if (uVar3 == 1) {
        iVar4 = 0x3d;
      }
      else if (uVar3 == 2) {
        iVar4 = 0x8d;
      }
      else if (uVar3 == 3) {
        iVar4 = 0x49;
      }
      else {
        iVar4 = 0;
      }
      iVar5 = thunk_FUN_004e60d0(uVar6,iVar4);
      iVar4 = DAT_00798f74;
      if ((uint)(*(int *)(&DAT_00798f6c + iVar5 * 4) + piVar10[3]) <=
          g_playSystem_00802A38->field_00E4) {
        if ((uint)piVar10[1] % 3 == 1) {
          *piVar10 = 0;
          piVar10[2] = 1;
        }
        else {
          uVar3 = (uint)DAT_0080874d;
          *piVar10 = 2;
          piVar10[4] = iVar4;
          if (uVar6 == uVar3) {
            uVar3 = GetPlayerRaceId(playerId);
            uVar3 = uVar3 & 0xff;
            if (uVar3 == 1) {
              SoundClassTy::PlaySound_thunk
                        ((SoundClassTy *)&g_sound,SOUND_MODE_6,(char *)0x0,0x71,(SoundPosition *)0x0
                         ,0);
            }
            else if (uVar3 == 2) {
              SoundClassTy::PlaySound_thunk
                        ((SoundClassTy *)&g_sound,SOUND_MODE_6,(char *)0x0,0x72,(SoundPosition *)0x0
                         ,0);
            }
            else if (uVar3 == 3) {
              SoundClassTy::PlaySound_thunk
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
        uVar3 = uVar3 & 0xff;
        if (uVar3 == 1) {
          iVar4 = 0x3f;
        }
        else if (uVar3 == 2) {
          iVar4 = 0x8e;
        }
        else if (uVar3 == 3) {
          iVar4 = 0x47;
        }
        else {
          iVar4 = 0;
        }
        if (((local_8 != (int *)uVar6) && (bVar1 = *local_c, bVar1 != 0xff)) && (local_c[-1] != 0))
        {
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          _local_2c = CONCAT31(uStack_2b,bVar1);
          if (DAT_00808a8f == '\0') {
            if (bVar1 == playerId) {
LAB_004dabff:
              iVar5 = 0;
            }
            else {
              uVar3 = uVar6 & 0xff;
              bVar2 = g_playerRelationMatrix[bVar1][uVar3];
              if ((bVar2 == 0) && (g_playerRelationMatrix[uVar3][bVar1] == 0)) {
                iVar5 = -2;
              }
              else if ((bVar2 == 1) && (g_playerRelationMatrix[uVar3][bVar1] == 0)) {
                iVar5 = -1;
              }
              else if ((bVar2 == 0) && (g_playerRelationMatrix[uVar3][bVar1] == 1)) {
                iVar5 = 1;
              }
              else {
                if ((bVar2 != 1) || (g_playerRelationMatrix[uVar3][bVar1] != 1)) goto LAB_004dabff;
                iVar5 = 2;
              }
            }
            bVar11 = iVar5 < 0;
          }
          else {
            bVar11 = (&DAT_008087ea)[(uVar6 & 0xff) * 0x51] != (&DAT_008087ea)[(uint)bVar1 * 0x51];
          }
          if (bVar11) {
            iVar4 = thunk_FUN_004e60d0((int)local_8,iVar4);
            uVar3 = (&DAT_00798f74)[iVar4];
            if ((g_playSystem_00802A38->field_00E4 < piVar10[3] + uVar3) &&
               (local_10 = (int *)0x1, local_28 < uVar3)) {
              local_28 = uVar3;
            }
          }
        }
        local_c = local_c + 0x51;
        local_8 = (int *)((int)local_8 + 1);
      } while ((int)local_c < 0x808a71);
      if (local_10 == (int *)0x0) {
        *piVar10 = 0;
      }
      else {
        piVar10[4] = (piVar10[3] - g_playSystem_00802A38->field_00E4) + local_28;
      }
    }
    local_8 = piVar10 + 0xd;
    local_c = (byte *)0x0;
    do {
      if (((local_c != (byte *)uVar6) && (g_playSystem_00802A38->field_00E4 == local_8[-8])) &&
         (*local_8 == 0)) {
        if (uVar6 == DAT_0080874d) {
          *local_8 = 1;
          uVar6 = GetPlayerRaceId((char)uVar6);
          uVar6 = uVar6 & 0xff;
          if (uVar6 == 1) {
            iVar4 = 0x77;
          }
          else if (uVar6 == 2) {
            iVar4 = 0x78;
          }
          else {
            if (uVar6 != 3) goto LAB_004dad15;
            iVar4 = 0x79;
          }
          SoundClassTy::PlaySound_thunk
                    ((SoundClassTy *)&g_sound,SOUND_MODE_6,(char *)0x0,iVar4,(SoundPosition *)0x0,0)
          ;
        }
LAB_004dad15:
        iVar4 = 0;
        local_24 = 0;
        piVar10 = local_2bc;
        for (iVar5 = 0x9b; local_10 = local_2bc, iVar5 != 0; iVar5 = iVar5 + -1) {
          *piVar10 = 0;
          piVar10 = piVar10 + 1;
        }
        do {
          uVar6 = GetPlayerRaceId((char)local_14);
          if ((*(char *)(*(int *)(&DAT_007bfc00 + (uVar6 & 0xff) * 4) + iVar4) == '\0') &&
             ((&DAT_007e53bc)[iVar4] != '\0')) {
            uVar6 = 0;
            local_20 = (uint *)(local_1c + 5);
            pbVar8 = &DAT_008087e9;
            do {
              if (((local_c != (byte *)uVar6) && (local_14 != uVar6)) &&
                 (((int)pbVar8 < 0x808a71 &&
                  (((g_playSystem_00802A38 == (STPlaySystemC *)0x0 || (*pbVar8 < 8)) &&
                   (g_playSystem_00802A38->field_00E4 <= *local_20)))))) {
                local_30 = thunk_FUN_004e60d0(local_14,iVar4);
                local_30 = local_30 + 1;
                iVar5 = thunk_FUN_004e60d0(uVar6,iVar4);
                iVar4 = local_24;
                if (local_30 <= iVar5) {
                  *local_10 = 1;
                  break;
                }
              }
              pbVar8 = pbVar8 + 0x51;
              uVar6 = uVar6 + 1;
              local_20 = local_20 + 1;
            } while ((int)pbVar8 < 0x808a71);
          }
          uVar3 = local_14;
          iVar4 = iVar4 + 1;
          local_10 = local_10 + 1;
          local_24 = iVar4;
        } while (iVar4 < 0x9b);
        uVar6 = local_14;
        if (DAT_008117bc != (undefined4 *)0x0) {
          memset(local_50, 0, 0x20); /* compiler bulk-zero initialization */
          local_40 = 0x5dea;
          local_3c = (undefined2)uVar3;
          iVar4 = 0;
          piVar10 = local_2bc;
          do {
            uVar6 = GetPlayerRaceId((char)local_c);
            if ((*(char *)(*(int *)(&DAT_007bfc00 + (uVar6 & 0xff) * 4) + iVar4) == '\0') &&
               (*piVar10 == 0)) {
              local_38 = (undefined2)iVar4;
              uVar7 = thunk_FUN_004e60d0(uVar3,iVar4);
              local_36 = (short)uVar7 + 1;
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
              (**(code **)*DAT_008117bc)(local_50);
            }
            iVar4 = iVar4 + 1;
            piVar10 = piVar10 + 1;
            uVar6 = local_14;
          } while (iVar4 < 0x9b);
        }
      }
      local_c = (byte *)((int)local_c + 1);
      local_8 = local_8 + 1;
    } while ((int)local_c < 8);
    local_14 = uVar6 + 1;
    /* ST_PSEUDO[flattened_global_record_array]: expected g_playerRuntime[player].field[index...] after base/stride proof */
    local_1c = (int *)((int)local_1c + 0xa62);
    if (0x7fab3d < (int)local_1c) {
      return 0;
    }
  } while( true );
}

