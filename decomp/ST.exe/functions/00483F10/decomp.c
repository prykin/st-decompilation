#include "../../pseudocode_runtime.h"


/* WARNING: Removing unreachable block (ram,0x00483fc6) */
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004608B0 -> 00483F10 @ 00461551; STBoatC::Defence this; stable alias ESI | 00471AC0 ->
   00483F10 @ 004726CF; STBoatC::Guard this; stable alias ESI */

undefined4 __fastcall FUN_00483f10(STBoatC *param_1)

{
  ushort *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;

  /* ST_CALLSITE[00483F2F]: CALL 0x0040219e; direct=0040219E STAllPlayersC::IsTorpLive */
  iVar3 = STAllPlayersC::IsTorpLive
                    (g_allPlayers_007FA174,param_1->field_046F,(int)param_1->field_0471);
  if (iVar3 != 0) {
    puVar1 = param_1->field_046B;
    uVar4 = (int)param_1->field_0045 - (int)STField<short>(puVar1,0x45);
    uVar5 = (int)param_1->field_0043 - (int)STField<short>(puVar1,0x43);
    uVar6 = (int)param_1->field_0041 - (int)STField<short>(puVar1,0x41);
    uVar2 = param_1->field_0810;
    lVar7 = Library::MSVCRT::__allmul(uVar6,(int)uVar6 >> 0x1f,uVar6,(int)uVar6 >> 0x1f);
    lVar8 = Library::MSVCRT::__allmul(uVar5,(int)uVar5 >> 0x1f,uVar5,(int)uVar5 >> 0x1f);
    lVar9 = Library::MSVCRT::__allmul(uVar4,(int)uVar4 >> 0x1f,uVar4,(int)uVar4 >> 0x1f);
    lVar10 = Library::MSVCRT::__allmul(uVar2,(int)uVar2 >> 0x1f,uVar2,(int)uVar2 >> 0x1f);
    if (lVar10 < lVar8 + lVar7 + lVar9) {
      return 0;
    }
  }
  return 1;
}

