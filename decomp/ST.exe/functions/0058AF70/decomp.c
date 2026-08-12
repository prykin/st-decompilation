#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as STOctopusC.
   Evidence: this_call_owners=[STOctopusC]; agreed_this_calls=1; incoming_this_accesses=41;
   incoming_edx_uses=0; incoming_stack_parameter_uses=3; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall
STOctopusC::sub_0058AF70(STOctopusC *this,short param_1,short param_2,short param_3)

{
  STOctopusC_field_02A5State SVar1;
  int iVar3;
  int iVar2;
  int local_EAX_118;
  int iVar4;
  int iVar5;

  this->field_004E = param_1;
  this->field_0050 = param_2;
  iVar3 = (int)param_1 - (int)this->field_0041;
  this->field_0052 = param_3;
  iVar4 = (int)param_2 - (int)this->field_0043;
  this->field_0269 = iVar3;
  iVar5 = (int)param_3 - (int)this->field_0045;
  this->field_026D = iVar4;
  this->field_0271 = iVar5;
  iVar2 = FUN_006acf0d(0,0,0,iVar3,iVar4,iVar5);
  this->field_0239 = iVar2;
  local_EAX_118 = FUN_006acf0d(0,0,0,this->field_0269,this->field_026D,0);
  SVar1 = this->field_02A5;
  this->field_023D = local_EAX_118;
  if ((SVar1 == CASE_F8) || (SVar1 == CASE_F9)) {
    iVar3 = this->field_0239;
    this->field_0251 = (this->field_0269 << 8) / iVar3;
    this->field_0255 = (this->field_026D << 8) / iVar3;
    iVar4 = this->field_0271 << 8;
  }
  else {
    iVar3 = this->field_0239;
    this->field_0251 = (this->field_0269 << 9) / iVar3;
    this->field_0255 = (this->field_026D << 9) / iVar3;
    iVar4 = this->field_0271 << 9;
  }
  this->field_0275 = (int)this->field_0041;
  this->field_0265 = 0;
  this->field_0261 = 0;
  this->field_025D = 0;
  this->field_027D = (int)this->field_0045;
  this->field_0259 = iVar4 / iVar3;
  this->field_0279 = (int)this->field_0043;
  if ((this->field_0281 == 0) && ((SVar1 == CASE_F8 || (SVar1 == CASE_F9)))) {
    iVar3 = this->field_0251;
    if (iVar3 < 0) {
      iVar3 = -iVar3;
    }
    if (iVar3 < this->field_0259) {
      iVar3 = this->field_0255;
      if (iVar3 < 0) {
        iVar3 = -iVar3;
      }
      if (iVar3 < this->field_0259) {
        this->field_0281 = 1;
        return 1;
      }
    }
  }
  return 1;
}

