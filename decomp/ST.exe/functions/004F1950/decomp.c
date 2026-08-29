#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as CPanelTy.
   Evidence: this_call_owners=[CPanelTy]; agreed_this_calls=3; incoming_this_accesses=6;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall CPanelTy::sub_004F1950(CPanelTy *this)

{
  RecoveredRecordView_006B84D0_87AF9D9B *pRVar1;

  /* ST_CALLSITE[004F1963]: CALL 0x0070b650; direct=0070B650 FUN_0070b650; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; signature=__cdecl;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B;pointer:/short;/int */
  pRVar1 = FUN_0070b650(this->field_025B,(uint)(byte)this->field_025F);
  /* ST_CALLSITE[004F1976]: CALL 0x00403229; direct=00403229 DibPut */
  DibPut((RecoveredSourceFamily_dibcopy *)this->field_01B4,0xb,9,'\x06',pRVar1);

  Library::DKW::DDX::FUN_006b3640
            ((int *)g_ddxContext_008075A8,this->field_017C,0xffffffff,this->field_010C,
             this->field_0110);
  return;
}

