#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_004dc760(TLOBaseTy *param_1)

{
  TLOBaseTy_field_04D0State TVar1;
  uint uVar2;
  int iVar3;
  dword dVar4;
  int iVar5;

  TVar1 = param_1->field_04D0;
  if (TVar1 == CASE_0) {
    if ((param_1->field_04E0[0] != 0) || (param_1->field_04D4 == 1)) {
      param_1->field_04D0 = CASE_1;
      param_1->field_04D4 = 0;
      /* ST_CALLSITE[004DC9CB]: CALL 0x00402cf7; direct=00402CF7 TLOBaseTy::RotateSpr */
      TLOBaseTy::RotateSpr(param_1,0);

      thunk_FUN_004c2c10((RecoveredRecordView_004C2C10_0CCE72F6 *)param_1);
      /* ST_CALLSITE[004DC9E2]: CALL dword ptr [EDX + 0x90] */
      param_1->vfunc_90(4,0x339);
    }
  }
  else if (TVar1 == CASE_1) {
    if ((param_1->field_04D8 == 0) || (param_1->field_04D4 == 2)) {

      iVar3 = thunk_FUN_004ac910(&param_1->field_01D5,'\x0e');
      if (iVar3 == param_1->field_01F5->field_020C) {
        param_1->field_04D0 = CASE_2;
        uVar2 = g_playSystem_00802A38->field_00E4;
        param_1->field_04D4 = 0;
        param_1->field_04DC = uVar2;
        /* ST_CALLSITE[004DC95E]: CALL 0x00402cf7; direct=00402CF7 TLOBaseTy::RotateSpr */
        TLOBaseTy::RotateSpr(param_1,0);
        /* ST_CALLSITE[004DC967]: CALL dword ptr [EDX + 0x2c] */
        dVar4 = param_1->vfunc_2C();
        /* ST_CALLSITE[004DC975]: CALL 0x00405e39; direct=00405E39 STAllPlayersC::sub_004B76D0 */
        STAllPlayersC::sub_004B76D0
                  (g_allPlayers_007FA174,
                   STReplaceLowByte((uint32_t)(dVar4), (uint8_t)(*(undefined1 *)&param_1->field_0024)),dVar4);
        if (param_1->field_0024 == (byte *)(uint)(byte)param_1->field_0010->field_112D) {
          /* ST_CALLSITE[004DC993]: CALL 0x00404b8d; direct=00404B8D STAllPlayersC::sub_004D8B70 */
          STAllPlayersC::sub_004D8B70(g_allPlayers_007FA174,(char)param_1->field_0024);
        }

        thunk_FUN_004c2d40((RecoveredRecordView_004C2D40_151343D1 *)param_1);
        return 0;
      }
    }
    else {
      if (param_1->field_0408 == 0) {

        thunk_FUN_004c2c10((RecoveredRecordView_004C2C10_0CCE72F6 *)param_1);
        /* ST_CALLSITE[004DC8DF]: CALL dword ptr [EDX + 0x90] */
        param_1->vfunc_90(4,0x339);
      }
      if (param_1->field_04DC + 0x2d <= g_playSystem_00802A38->field_00E4) {
        param_1->field_04DC = g_playSystem_00802A38->field_00E4;

        thunk_FUN_004dc720(param_1,param_1->field_04D8 + -100);
        return 0;
      }
    }
  }
  else if (TVar1 == CASE_2) {
    iVar5 = 0x1e;
    /* ST_CALLSITE[004DC796]: CALL 0x00402c98; direct=00402C98 STAllPlayersC::sub_004B79C0 */
    iVar3 = STAllPlayersC::sub_004B79C0
                      (g_allPlayers_007FA174,*(char *)&param_1->field_0024,(int)param_1->field_0018);
    if (iVar3 == 0) {
      iVar5 = 0x78;
    }
    if ((uint)(param_1->field_04DC + iVar5) <= g_playSystem_00802A38->field_00E4) {
      iVar3 = param_1->field_04D8 + 100;
      param_1->field_04D8 = iVar3;
      if (9999 < iVar3) {
        param_1->field_04D8 = 10000;
        param_1->field_04D0 = CASE_0;
        /* ST_CALLSITE[004DC7E4]: CALL 0x00402cf7; direct=00402CF7 TLOBaseTy::RotateSpr */
        TLOBaseTy::RotateSpr(param_1,0);
        /* ST_CALLSITE[004DC7ED]: CALL dword ptr [EDX + 0x2c] */
        dVar4 = param_1->vfunc_2C();
        /* ST_CALLSITE[004DC7FB]: CALL 0x00402f0e; direct=00402F0E STAllPlayersC::sub_004B7710 */
        STAllPlayersC::sub_004B7710
                  (g_allPlayers_007FA174,
                   STReplaceLowByte((uint32_t)(dVar4), (uint8_t)(*(undefined1 *)&param_1->field_0024)),dVar4);
        if (param_1->field_0024 == (byte *)(uint)(byte)param_1->field_0010->field_112D) {
          /* ST_CALLSITE[004DC819]: CALL 0x00404b8d; direct=00404B8D STAllPlayersC::sub_004D8B70 */
          STAllPlayersC::sub_004D8B70(g_allPlayers_007FA174,(char)param_1->field_0024);
        }
      }
      param_1->field_04DC = g_playSystem_00802A38->field_00E4;
    }
    if (param_1->field_04D4 == 1) {
      param_1->field_04D0 = CASE_1;
      param_1->field_04D4 = 0;
      /* ST_CALLSITE[004DC852]: CALL 0x00402cf7; direct=00402CF7 TLOBaseTy::RotateSpr */
      TLOBaseTy::RotateSpr(param_1,0);

      thunk_FUN_004c2c10((RecoveredRecordView_004C2C10_0CCE72F6 *)param_1);
      /* ST_CALLSITE[004DC869]: CALL dword ptr [EAX + 0x90] */
      param_1->vfunc_90(4,0x339);
      /* ST_CALLSITE[004DC873]: CALL dword ptr [EDX + 0x2c] */
      dVar4 = param_1->vfunc_2C();
      /* ST_CALLSITE[004DC881]: CALL 0x00402f0e; direct=00402F0E STAllPlayersC::sub_004B7710 */
      STAllPlayersC::sub_004B7710
                (g_allPlayers_007FA174,
                 STReplaceLowByte((uint32_t)(dVar4), (uint8_t)(*(undefined1 *)&param_1->field_0024)),dVar4);
      if (param_1->field_0024 == (byte *)(uint)(byte)param_1->field_0010->field_112D) {
        /* ST_CALLSITE[004DC8A3]: CALL 0x00404b8d; direct=00404B8D STAllPlayersC::sub_004D8B70 */
        STAllPlayersC::sub_004D8B70(g_allPlayers_007FA174,(char)param_1->field_0024);
        return 0;
      }
    }
  }
  return 0;
}

