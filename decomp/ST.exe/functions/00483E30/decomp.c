#include "../../pseudocode_runtime.h"


/* WARNING: Removing unreachable block (ram,0x00483eb6) */
/* [STMethodOwnerApplier] Structural method owner recovered as STBoatC.
   Evidence: this_call_owners=[STBoatC]; agreed_this_calls=2; incoming_this_accesses=4;
   incoming_edx_uses=9; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] machine_word_predicate.
   Evidence: every reachable RET is immediately dominated by an exact full-EAX definition of 0 or 1,
   and at least two resolved callers consume the machine word; machine CFG audit: used=3, ignored=0,
   unknown=0 */

int __thiscall STBoatC::sub_00483E30(STBoatC *this,RecoveredRecord_STBoatC_00482DB0 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;

  uVar2 = (int)this->field_0041 - (int)param_1->field_0041;
  uVar1 = this->field_080C;
  uVar3 = (int)this->field_0043 - (int)param_1->field_0043;
  uVar4 = (int)this->field_0041 - (int)param_1->field_0045;
  uVar5 = (int)this->field_0045 - (int)param_1->field_0045;
  lVar6 = Library::MSVCRT::__allmul
                    (uVar3 + uVar4,
                     ((int)uVar3 >> 0x1f) + ((int)uVar4 >> 0x1f) + (uint)CARRY4(uVar3,uVar4),uVar5,
                     (int)uVar5 >> 0x1f);
  lVar7 = Library::MSVCRT::__allmul(uVar2,(int)uVar2 >> 0x1f,uVar2,(int)uVar2 >> 0x1f);
  lVar8 = Library::MSVCRT::__allmul(uVar1,(int)uVar1 >> 0x1f,uVar1,(int)uVar1 >> 0x1f);
  if (lVar7 + lVar6 <= lVar8) {
    return 1;
  }
  return 0;
}

