#include "../../pseudocode_runtime.h"


/* WARNING: Removing unreachable block (ram,0x00483fc6) */
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004608B0 -> 00483F10 @ 00461551; STBoatC::Defence this; stable alias ESI | 00471AC0 ->
   00483F10 @ 004726CF; STBoatC::Guard this; stable alias ESI

   [STMethodOwnerApplier] Structural method owner recovered as STBoatC.
   Evidence: this_call_owners=[STBoatC]; agreed_this_calls=2; incoming_this_accesses=7;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] machine_word_predicate.
   Evidence: every reachable RET is immediately dominated by an exact full-EAX definition of 0 or 1,
   and at least two resolved callers consume the machine word; machine CFG audit: used=3, ignored=0,
   unknown=0 */

int __thiscall STBoatC::sub_00483F10(STBoatC *this)

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
  iVar3 = STAllPlayersC::IsTorpLive(g_allPlayers_007FA174,this->field_046F,this->field_0471);
  if (iVar3 != 0) {
    puVar1 = this->field_046B;
    uVar4 = (int)this->field_0045 - (int)STField<short>(puVar1,0x45);
    uVar5 = (int)this->field_0043 - (int)STField<short>(puVar1,0x43);
    uVar6 = (int)this->field_0041 - (int)STField<short>(puVar1,0x41);
    uVar2 = this->field_0810;
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

