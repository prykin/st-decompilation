#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=7, used=0), and
   decompilation contains no value return

   [STMethodOwnerApplier] Structural method owner recovered as CPanelTy.
   Evidence: this_call_owners=[CPanelTy]; agreed_this_calls=7; incoming_this_accesses=0;
   incoming_edx_uses=2; incoming_stack_parameter_uses=2; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=4; owner_evidence_coverage=adequate */

void __thiscall CPanelTy::sub_004F1890(CPanelTy *this,byte param_1)

{
  int iVar1;
  RecoveredRecordView_006B84D0_87AF9D9B *pRVar2;

  if (DAT_0080874e == '\x03') {
    iVar1 = (-(uint)(param_1 != 0) & 0xfffffffd) + 5;
  }
  else {
    iVar1 = (param_1 != 0) + 2;
  }
  /* ST_CALLSITE[004F18DB]: CALL 0x0070b650; direct=0070B650 FUN_0070b650; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; signature=__cdecl;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B;pointer:/short;/int */
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  pRVar2 = FUN_0070b650(*(short **)((int)this->field_0308 + (uint)param_1 * 4 + -0x26),
                        (uint)*(byte *)((int)this->field_0308 + (param_1 - 0x1e)));
  /* ST_CALLSITE[004F1905]: CALL 0x00403229; direct=00403229 DibPut */
  DibPut((RecoveredSourceFamily_dibcopy *)this->field_0148[(-(uint)(param_1 != 0) & 8) + 0xe],iVar1,
         (DAT_0080874e == '\x03') + 6,'\x06',pRVar2);
  return;
}

