#include "../../pseudocode_runtime.h"


/* [STSwitchEnumApplier] Switch target field_04D0 uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_04D0State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6

   [STSwitchEnumApplier] Switch target field_04D0 uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_04D0State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_32=50;CASE_40=64;CASE_49=73;CASE_5C=92
    */

undefined4 __fastcall FUN_004dec10(TLOBaseTy *param_1)

{
  int iVar1;
  dword dVar2;
  int iVar3;

  switch(param_1->field_04D0) {
  case CASE_0:

    iVar1 = thunk_FUN_004ac910(&param_1->field_01D5,'\x0e');
    if (iVar1 == param_1->field_01F5->field_020C) {
      param_1->field_04D0 = CASE_1;
      /* ST_CALLSITE[004DEC56]: CALL 0x00402cf7; direct=00402CF7 TLOBaseTy::RotateSpr */
      TLOBaseTy::RotateSpr(param_1,0);

      thunk_FUN_004c2c10((RecoveredRecordView_004C2C10_0CCE72F6 *)param_1);
      /* ST_CALLSITE[004DEC6D]: CALL dword ptr [EDX + 0x90] */
      param_1->vfunc_90(4,0x340);
      return 0;
    }
    break;
  case CASE_1:
    if ((param_1->field_04D4 == 0) &&

       (iVar1 = thunk_FUN_004ac910(&param_1->field_01D5,'\x0e'),
       iVar1 == param_1->field_01F5->field_020C)) {
      param_1->field_04D0 = CASE_3;
      /* ST_CALLSITE[004DECB2]: CALL 0x00402cf7; direct=00402CF7 TLOBaseTy::RotateSpr */
      TLOBaseTy::RotateSpr(param_1,0);

      thunk_FUN_004c2d40((RecoveredRecordView_004C2D40_151343D1 *)param_1);
      /* ST_CALLSITE[004DECC9]: CALL dword ptr [EDX + 0x90] */
      param_1->vfunc_90(4,0x341);
      return 0;
    }
    break;
  case CASE_2:
    iVar3 = 0x2d;
    /* ST_CALLSITE[004DECE7]: CALL 0x00402c98; direct=00402C98 STAllPlayersC::sub_004B79C0 */
    iVar1 = STAllPlayersC::sub_004B79C0
                      (g_allPlayers_007FA174,*(char *)&param_1->field_0024,(int)param_1->field_0018);
    if (iVar1 == 0) {
      iVar3 = 0xb4;
    }
    if ((uint)(param_1->field_04D8 + iVar3) <= g_playSystem_00802A38->field_00E4) {
      iVar1 = param_1->field_04D4 + 0x32;
      param_1->field_04D4 = iVar1;
      if (4999 < iVar1) {
        param_1->field_04D4 = 5000;
        param_1->field_04D0 = CASE_0;
        /* ST_CALLSITE[004DED3F]: CALL 0x00402cf7; direct=00402CF7 TLOBaseTy::RotateSpr */
        TLOBaseTy::RotateSpr(param_1,0);
        /* ST_CALLSITE[004DED48]: CALL dword ptr [EDX + 0x2c] */
        dVar2 = param_1->vfunc_2C();
        /* ST_CALLSITE[004DED56]: CALL 0x00402f0e; direct=00402F0E STAllPlayersC::sub_004B7710 */
        STAllPlayersC::sub_004B7710
                  (g_allPlayers_007FA174,
                   STReplaceLowByte((uint32_t)(dVar2), (uint8_t)(*(undefined1 *)&param_1->field_0024)),dVar2);
        if (param_1->field_0024 == (byte *)(uint)(byte)param_1->field_0010->field_112D) {
          /* ST_CALLSITE[004DED74]: CALL 0x00404b8d; direct=00404B8D STAllPlayersC::sub_004D8B70 */
          STAllPlayersC::sub_004D8B70(g_allPlayers_007FA174,(char)param_1->field_0024);
        }
      }
      param_1->field_04D8 = g_playSystem_00802A38->field_00E4;
      return 0;
    }
    break;
  case CASE_3:

    iVar1 = thunk_FUN_004ac910(&param_1->field_01D5,'\x0e');
    if (iVar1 == param_1->field_01F5->field_020C) {
      param_1->field_04D0 = CASE_2;
      /* ST_CALLSITE[004DEDB8]: CALL 0x00402cf7; direct=00402CF7 TLOBaseTy::RotateSpr */
      TLOBaseTy::RotateSpr(param_1,0);
      param_1->field_04D8 = g_playSystem_00802A38->field_00E4;
      /* ST_CALLSITE[004DEDD3]: CALL dword ptr [EDX + 0x2c] */
      dVar2 = param_1->vfunc_2C();
      /* ST_CALLSITE[004DEDE1]: CALL 0x00405e39; direct=00405E39 STAllPlayersC::sub_004B76D0 */
      STAllPlayersC::sub_004B76D0
                (g_allPlayers_007FA174,
                 STReplaceLowByte((uint32_t)(dVar2), (uint8_t)(*(undefined1 *)&param_1->field_0024)),dVar2);
      if (param_1->field_0024 == (byte *)(uint)(byte)param_1->field_0010->field_112D) {
        /* ST_CALLSITE[004DEDFF]: CALL 0x00404b8d; direct=00404B8D STAllPlayersC::sub_004D8B70 */
        STAllPlayersC::sub_004D8B70(g_allPlayers_007FA174,(char)param_1->field_0024);
      }
    }
  }
  return 0;
}

