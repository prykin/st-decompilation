#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as CGenerate.
   Evidence: this_call_owners=[CGenerate]; agreed_this_calls=4; incoming_this_accesses=4;
   incoming_edx_uses=0; incoming_stack_parameter_uses=4; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (4), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=006988C0 @ 0069897A -> read as EAX on
   every CFG path | 006988C0 @ 00698995 -> read as EAX on every CFG path | 006988C0 @ 006989C5 ->
   read as EAX on every CFG path | 006988C0 @ 006989E0 -> read as EAX on every CFG path */

int __thiscall CGenerate::sub_00697C50(CGenerate *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  RecoveredRecord_006A1370_30F34641 local_10;
  int local_8;

  local_8 = 0;
  if ((((param_1 < 1) || (param_2 < 0)) || (param_3 < 0)) ||
     ((this->field_5833 <= param_2 || (this->field_5837 <= param_3)))) {
    iVar2 = 0;
  }
  else {

    thunk_FUN_006a1370(this->field_0008,param_2,param_3,param_1,&local_10);

    iVar1 = thunk_FUN_006a20e0(this->field_0008,param_2,param_3,param_1,0xff);
    iVar2 = 1;
    if (iVar1 != 0) {
      return local_8;
    }
  }
  return iVar2;
}

