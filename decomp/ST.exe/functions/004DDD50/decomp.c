#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_004ddd50(int *param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  int uVar4;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int local_c;
  int local_8;

  bVar3 = false;
  bVar2 = false;
  /* ST_CALLSITE[004DDD71]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
  uVar4 = LookupRecordByte((char)param_1[9]);
  uVar4 = (int)(byte)uVar4;
  if (uVar4 == 1) {
    local_8 = 0x17;
  }
  else if (uVar4 == 2) {
    local_8 = 0x88;
  }
  else if (uVar4 == 3) {
    local_8 = 0x78;
  }
  else {
    local_8 = 0;
  }
  if (-1 < param_1[0x134]) {
    piVar4 = param_1;
    piVar8 = param_1 + 0x136;
    do {
      if (piVar4[0x137] != 0) {
        if (*piVar8 == 0) {
          if (piVar8[-1] < *(int *)(&DAT_007e6028 + (piVar8[-2] + -0x96) * 0x14)) {
            *piVar8 = 1;
            bVar2 = true;
            piVar8[2] = g_playSystem_00802A38->field_00E4;
          }
        }
        else {
          iVar7 = piVar8[-2] + -0x96;

          iVar5 = thunk_FUN_004e60d0(param_1[9],local_8);
          local_c = *(int *)(&DAT_007e601c + (iVar5 + iVar7 * 5) * 4);
          /* ST_CALLSITE[004DDE3B]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
          iVar5 = STStructuralVirtualCall<undefined4>(param_1, 0x2C);
          /* ST_CALLSITE[004DDE49]: CALL 0x00402897; direct=00402897 thunk_FUN_004b72e0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/STAllPlayersC; source view only; no Ghidra override */
          iVar5 = thunk_FUN_004b72e0((char)param_1[9],iVar5);
          if (iVar5 != 0) {
            /* ST_CALLSITE[004DDE60]: CALL 0x00402c98; direct=00402C98 STAllPlayersC::sub_004B79C0 */
            iVar5 = STAllPlayersC::sub_004B79C0(g_allPlayers_007FA174,(char)param_1[9],param_1[6]);
            if (iVar5 == 0) {
              local_c = local_c * 4;
              if (g_sndUnderAttMeneg_00811798 != nullptr) {
                /* ST_CALLSITE[004DDE86]: CALL 0x00402af4; direct=00402AF4 SndUnderAttMenegC::sub_00621580 */
                SndUnderAttMenegC::sub_00621580(g_sndUnderAttMeneg_00811798,(byte *)param_1[9],5);
              }
            }
          }
          if ((uint)(piVar8[2] + local_c) <= g_playSystem_00802A38->field_00E4) {
            iVar5 = (&DAT_007e6024)[iVar7 * 5];

            iVar6 = thunk_FUN_004d7b50((char)param_1[9],3);
            if (iVar5 <= iVar6) {

              thunk_FUN_004d7d30((char)param_1[9],3,param_1[6],iVar5);
              iVar5 = piVar8[-1];
              bVar3 = true;
              piVar8[-1] = iVar5 + 1;
              if (*(int *)(&DAT_007e6028 + iVar7 * 0x14) <= iVar5 + 1) {
                *piVar8 = 0;
                bVar2 = true;
              }
              piVar8[2] = g_playSystem_00802A38->field_00E4;
            }
          }
        }
      }
      piVar1 = piVar8 + 3;
      piVar4 = piVar8 + -0x131;
      piVar8 = piVar8 + 5;
    } while (-1 < *piVar1);
    if (bVar2) {

      thunk_FUN_004ddcc0((RecoveredRecordView_004DDCC0_A8DE46ED *)param_1);
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if ((bVar3) && (param_1[9] == (uint)*(byte *)(param_1[4] + 0x112d))) {
      /* ST_CALLSITE[004DDF55]: CALL 0x00404b8d; direct=00404B8D STAllPlayersC::sub_004D8B70 */
      STAllPlayersC::sub_004D8B70(g_allPlayers_007FA174,(char)param_1[9]);
    }
  }
  return 0;
}

