#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as STPlaySystemC.
   Evidence: this_call_owners=[STPlaySystemC]; agreed_this_calls=133; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=2; direct_non_thunk_callers=89;
   incoming_ecx_receiver_callers=2; attributed_named_callers=87; owner_evidence_coverage=adequate

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 004732F0 -> 006E62D0 @ 004733E4; STBoatC::LoadObj parameter param_1 | 004749C0 ->
   006E62D0 @ 00474A98; /STBoatC+0x5a2 | 004749C0 -> 006E62D0 @ 00474FD8; /STBoatC+0x5a2 | 004749C0
   -> 006E62D0 @ 004750BA; /STBoatC+0x5a2 | 005EFAE0 -> 006E62D0 @ 005EFB01; FUN_005efae0 parameter
   param_1

   [STReturnSemanticsApplier] machine_scalar_return.
   Evidence: every reachable RET carries a machine-proven scalar domain; exact negative immediate
   returns establish signed int while zero is a signedness-neutral member of that same domain;
   machine CFG audit: used=115, ignored=20, unknown=0 */

int __thiscall
STPlaySystemC::sub_006E62D0
          (STPlaySystemC *this,RecoveredRecordView_005EFAE0_855D930D *param_1,int *param_2)

{
  DArrayTy *pDVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;

  this->field_0010->iteratorIndex = 0;
  while( true ) {
    pDVar1 = this->field_0010;
    uVar2 = pDVar1->iteratorIndex;
    if (pDVar1->count <= uVar2) {
      return -4;
    }
    pvVar4 = DArrayAt<void>(pDVar1, uVar2);
    pDVar1->iteratorIndex = uVar2 + 1;
    if (pvVar4 == nullptr) break;
    iVar3 = STField<int>(pvVar4,4);
    if (*(RecoveredRecordView_005EFAE0_855D930D **)(iVar3 + 0x18) == param_1) {
      if (param_2 != nullptr) {
        *param_2 = iVar3;
      }
      return 0;
    }
  }
  return -4;
}

