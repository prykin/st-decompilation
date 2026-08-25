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
      /* ST_CALLSITE[005151E9]: CALL 0x00404e85; direct=00404E85 HelpPanelTy::RCProc */
      RCProc(this,(int)this->field_01A3,this->field_01A7,'\x01');
      return;
    case '\x02':
      /* ST_CALLSITE[0051521D]: CALL 0x00403747; direct=00403747 HelpPanelTy::ObjProc */
      ObjProc(this,(int)this->field_01A3,this->field_01A7,'\x01');
      return;
    case '\x03':
      /* ST_CALLSITE[00515204]: CALL 0x00403878; direct=00403878 HelpPanelTy::SubProc */
      SubProc(this,(int)this->field_01A3,'\x01');
      return;
    case '\x04':
      /* ST_CALLSITE[00515236]: CALL 0x004057e0; direct=004057E0 HelpPanelTy::ArmProc */
      ArmProc(this,(int)this->field_01A3,this->field_01A7,'\x01');
      return;
    case '\x05':
      /* ST_CALLSITE[005151D0]: CALL 0x00402833; direct=00402833 HelpPanelTy::TechProc */
      TechProc(this,(uint)this->field_01A3,(byte)this->field_01A7,'\x01');
      return;
    case '\x06':
      /* ST_CALLSITE[005151B7]: CALL 0x00405e61; direct=00405E61 HelpPanelTy::TTreeProc */
      TTreeProc(this,(uint)this->field_01A3,'\x01');
      return;
    /* ST_CALLSITE[005151F2]: CALL 0x004027ac; direct=004027AC HelpPanelTy::PrepMissObj */
    case '\a':
      PrepMissObj(this);
      return;
    case '\b':
      /* ST_CALLSITE[0051527A]: CALL 0x004020b8; direct=004020B8 HelpPanelTy::TipProc */
      TipProc(this,this->field_01A3,this->field_01A7,'\x01');
      break;
    case '\v':
      /* ST_CALLSITE[0051524F]: CALL 0x00402cac; direct=00402CAC HelpPanelTy::SpecProc */
      SpecProc(this,(int)this->field_01A3,this->field_01A7,'\x01');
      return;
    case '\f':
      /* ST_CALLSITE[00515261]: CALL 0x00403bc0; direct=00403BC0 HelpPanelTy::NatProc */
      NatProc(this,(int)this->field_01A3,'\x01');
      return;
    }
  }
  return;
}

