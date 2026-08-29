#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=4, used=0), and
   decompilation contains no value return

   [STMethodOwnerApplier] Structural method owner recovered as CPanelTy.
   Evidence: this_call_owners=[CPanelTy]; agreed_this_calls=4; incoming_this_accesses=0;
   incoming_edx_uses=0; incoming_stack_parameter_uses=6; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate */

void __thiscall CPanelTy::sub_004F1C80(CPanelTy *this,uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  RecoveredRecordView_006B84D0_87AF9D9B *pRVar4;

  uVar2 = param_2;
  uVar1 = param_1;

  iVar3 = thunk_FUN_004f19d0((char)param_1,(Global_sub_004F19D0_param_2Enum)param_2,&param_1,
                             &param_2);
  if (iVar3 != 0) {
    iVar3 = (uVar2 & 0xff) + (uVar1 & 0xff) * 6;
    /* ST_CALLSITE[004F1CC7]: CALL 0x0070b650; direct=0070B650 FUN_0070b650; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; signature=__cdecl;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B;pointer:/short;/int */
    pRVar4 = FUN_0070b650((short *)(&this->field_0D0B)[iVar3],(uint)(byte)(&this->field_0D3B)[iVar3]
                         );
    /* ST_CALLSITE[004F1CE2]: CALL 0x00403229; direct=00403229 DibPut */
    DibPut(*(RecoveredSourceFamily_dibcopy **)((int)this + (0x6a - (uVar1 & 0xff)) * 4),param_1,
           param_2,'\x06',pRVar4);
  }
  return;
}

