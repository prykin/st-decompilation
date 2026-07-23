
/* [STMethodOwnerApplier] Structural method owner recovered as CGenerate.
   Evidence: this_call_owners=[CGenerate]; agreed_this_calls=2; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall CGenerate::sub_00695F20(CGenerate *this)

{
  dword dVar1;
  uint uVar2;

  if (this->field_5853 != (DArrayTy *)0x0) {
    dVar1 = this->field_5853->count;
    uVar2 = 0;
    if (0 < (int)dVar1) {
      do {
        thunk_FUN_00696050(this,uVar2);
        uVar2 = uVar2 + 1;
      } while ((int)uVar2 < (int)dVar1);
    }
    DArrayDestroy(this->field_5853);
    this->field_5853 = (DArrayTy *)0x0;
  }
  return;
}

