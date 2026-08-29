#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00571400 -> 0052D320 @ 00571603 | 00571400 -> 0052D320 @ 00571642 | 00571400 ->
   0052D320 @ 00571654

   [STMethodOwnerApplier] Structural method owner recovered as PopUpTy.
   Evidence: this_call_owners=[PopUpTy]; agreed_this_calls=30; incoming_this_accesses=1;
   incoming_edx_uses=0; incoming_stack_parameter_uses=2; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=14; owner_evidence_coverage=adequate;
   unique_primary_physical_vtable=true */

void __thiscall PopUpTy::sub_0052D320(PopUpTy *this,char *text,uint param_2)

{
  byte bVar1;

  bVar1 = (byte)param_2;
  if (this->field_009C == '\0') {
    /* ST_CALLSITE[0052D33A]: CALL 0x00402fea; direct=00402FEA PopUpTy::AddStr */
    AddStr(this,&CHAR___007c3b5c,bVar1);
    /* ST_CALLSITE[0052D347]: CALL 0x00402fea; direct=00402FEA PopUpTy::AddStr */
    AddStr(this,&CHAR___007c3b5c,bVar1);
  }
  /* ST_CALLSITE[0052D353]: CALL 0x00402fea; direct=00402FEA PopUpTy::AddStr */
  AddStr(this,text,bVar1);
  return;
}

