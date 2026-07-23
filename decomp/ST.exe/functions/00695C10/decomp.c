#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as CGenerate.
   Evidence: this_call_owners=[CGenerate]; agreed_this_calls=2; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=5; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate */

uint __thiscall
CGenerate::sub_00695C10
          (CGenerate *this,undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
          undefined4 param_5)

{
  DArrayTy *pDVar1;
  uint uVar2;
  undefined4 local_24;
  undefined1 local_20;
  undefined4 local_1f;
  undefined4 local_1b;
  undefined4 local_17;

  memset(&local_24, 0, 0x1d); /* compiler bulk-zero initialization */
  local_1f = param_2;
  local_24 = param_1;
  if (param_3 < 0) {
    param_3 = 0;
  }
  local_20 = (undefined1)param_3;
  local_1b = param_4;
  local_17 = param_5;
  if (this->field_5853 == (DArrayTy *)0x0) {
    pDVar1 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,10,0x1d,10);
    this->field_5853 = pDVar1;
  }
  if (this->field_5853 != (DArrayTy *)0x0) {
    uVar2 = Library::DKW::TBL::FUN_006ae1c0(&this->field_5853->flags,&local_24);
    return uVar2;
  }
  return 0xffffffff;
}

