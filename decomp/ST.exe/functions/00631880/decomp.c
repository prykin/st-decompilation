
/* [STMethodOwnerApplier] Structural method owner recovered as STManRuinC.
   Evidence: this_call_owners=[STManRuinC]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=2; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

uint __thiscall STManRuinC::sub_00631880(STManRuinC *this,undefined4 *param_1,undefined4 param_2)

{
  uint uVar1;
  DArrayTy *pDVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_2c [8];
  undefined4 local_b;

  uVar1 = 0xffffffff;
  if (param_1 != (undefined4 *)0x0) {
    puVar4 = local_2c;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *param_1;
      param_1 = param_1 + 1;
      puVar4 = puVar4 + 1;
    }
    *(undefined1 *)puVar4 = *(undefined1 *)param_1;
    local_b = param_2;
    if (this->field_003C == (DArrayTy *)0x0) {
      pDVar2 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,10,0x25,10);
      this->field_003C = pDVar2;
    }
    if (this->field_003C == (DArrayTy *)0x0) {
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = Library::DKW::TBL::FUN_006ae1c0(&this->field_003C->flags,local_2c);
      if (-1 < (int)uVar1) {
        return uVar1 + 1;
      }
    }
  }
  return uVar1;
}

