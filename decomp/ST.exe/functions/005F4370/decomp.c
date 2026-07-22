
/* [STMethodOwnerApplier] Structural method owner recovered as STBHEShellC.
   Evidence: this_call_owners=[STBHEShellC]; agreed_this_calls=3; incoming_this_accesses=22;
   incoming_edx_uses=0; incoming_stack_parameter_uses=12; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

uint __thiscall
STBHEShellC::sub_005F4370(STBHEShellC *this,int *param_1,int *param_2,int *param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  uVar1 = 0xffffffff;
  if (param_4 == 0) {
    *param_1 = (int)this->field_00D1;
    *param_2 = (int)this->field_00D3;
    iVar2 = (g_playSystem_00802A38->field_00E4 - this->field_00FB) * this->field_00DF;
    *param_3 = this->field_00D5 + iVar2;
    uVar1 = (uint)(this->field_00EF <= iVar2);
  }
  else {
    if (param_4 == 1) {
      iVar4 = g_playSystem_00802A38->field_00E4 - this->field_00FB;
      iVar2 = this->field_00E7;
      iVar3 = iVar4 * iVar4;
      *param_3 = (this->field_00DF * iVar3) / 20000 + (this->field_00EB * iVar3 * iVar4) / 30000 +
                 this->field_00E3 * iVar4 + (int)this->field_00D5;
      *param_1 = (this->field_00D7 * iVar3) / 20000 + (int)this->field_00D1;
      *param_2 = (this->field_00DB * iVar3) / 20000 + (int)this->field_00D3;
      if (0x1f6 < this->field_00EF) {
        return (uint)((int)((int)&this->field_00F3[-1].field_00FB + 2) <= (iVar2 * iVar3) / 20000);
      }
      return (uint)(iVar4 == this->field_00E7);
    }
    if (param_4 == 2) {
      iVar2 = g_playSystem_00802A38->field_00E4 - this->field_00FB;
      *param_1 = (this->field_00D7 * iVar2) / 10000 + (int)this->field_00D1;
      *param_2 = (this->field_00DB * iVar2) / 10000 + (int)this->field_00D3;
      *param_3 = ((this->field_00DF * iVar2) / 10000 - (this->field_00F7 * iVar2 * iVar2) / 20000) +
                 (int)this->field_00D5;
      return (uint)(this->field_00EF <= (this->field_00E3 * iVar2) / 10000);
    }
  }
  return uVar1;
}

