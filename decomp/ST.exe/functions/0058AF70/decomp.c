
/* [STMethodOwnerApplier] Structural method owner recovered as STOctopusC.
   Evidence: this_call_owners=[STOctopusC]; agreed_this_calls=1; incoming_this_accesses=41;
   incoming_edx_uses=0; incoming_stack_parameter_uses=3; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall
STOctopusC::sub_0058AF70(STOctopusC *this,short param_1,short param_2,short param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  this->field_004E = param_1;
  this->field_0050 = param_2;
  iVar2 = (int)param_1 - (int)this->field_0041;
  this->field_0052 = param_3;
  iVar3 = (int)param_2 - (int)this->field_0043;
  this->field_0269 = iVar2;
  iVar4 = (int)param_3 - (int)this->field_0045;
  this->field_026D = iVar3;
  this->field_0271 = iVar4;
  iVar2 = FUN_006acf0d(0,0,0,iVar2,iVar3,iVar4);
  this->field_0239 = iVar2;
  iVar2 = FUN_006acf0d(0,0,0,this->field_0269,this->field_026D,0);
  uVar1 = this->field_02A5;
  this->field_023D = iVar2;
  if ((uVar1 == 0xf8) || (uVar1 == 0xf9)) {
    iVar2 = this->field_0239;
    this->field_0251 = (int)(this->field_0269 << 8) / iVar2;
    this->field_0255 = (int)(this->field_026D << 8) / iVar2;
    iVar3 = this->field_0271 << 8;
  }
  else {
    iVar2 = this->field_0239;
    this->field_0251 = (int)(this->field_0269 << 9) / iVar2;
    this->field_0255 = (int)(this->field_026D << 9) / iVar2;
    iVar3 = this->field_0271 << 9;
  }
  this->field_0275 = (int)this->field_0041;
  this->field_0265 = 0;
  this->field_0261 = 0;
  this->field_025D = 0;
  this->field_027D = (int)this->field_0045;
  this->field_0259 = iVar3 / iVar2;
  this->field_0279 = (int)this->field_0043;
  if ((this->field_0281 == 0) && ((uVar1 == 0xf8 || (uVar1 == 0xf9)))) {
    iVar2 = this->field_0251;
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }
    if (iVar2 < this->field_0259) {
      iVar2 = this->field_0255;
      if (iVar2 < 0) {
        iVar2 = -iVar2;
      }
      if (iVar2 < this->field_0259) {
        this->field_0281 = 1;
        return 1;
      }
    }
  }
  return 1;
}

