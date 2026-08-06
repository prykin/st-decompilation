#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as HelpPanelTy.
   Evidence: this_call_owners=[HelpPanelTy]; agreed_this_calls=5; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=3; owner_evidence_coverage=adequate */

void __thiscall HelpPanelTy::sub_00515180(HelpPanelTy *this,char param_1)

{
  if ((this->field_01A1 == param_1) || (param_1 == '\a')) {
    switch(param_1) {
    case '\x01':
      RCProc(this,this->field_01A3,this->field_01A7,'\x01');
      return;
    case '\x02':
      ObjProc(this,this->field_01A3,this->field_01A7,'\x01');
      return;
    case '\x03':
      SubProc(this,this->field_01A3,'\x01');
      return;
    case '\x04':
      ArmProc(this,this->field_01A3,this->field_01A7,'\x01');
      return;
    case '\x05':
      TechProc(this,this->field_01A3,*(byte *)&this->field_01A7,'\x01');
      return;
    case '\x06':
      TTreeProc(this,this->field_01A3,'\x01');
      return;
    case '\a':
      PrepMissObj(this);
      return;
    case '\b':
      TipProc(this,(void *)this->field_01A3,this->field_01A7,'\x01');
      break;
    case '\v':
      SpecProc(this,this->field_01A3,this->field_01A7,'\x01');
      return;
    case '\f':
      NatProc(this,this->field_01A3,'\x01');
      return;
    }
  }
  return;
}

