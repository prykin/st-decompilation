
/* [STMethodOwnerApplier] Structural method owner recovered as TLOBaseTy.
   Evidence: this_call_owners=[TLOBaseTy]; agreed_this_calls=1; incoming_this_accesses=6;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

int __thiscall TLOBaseTy::sub_004D6DF0(TLOBaseTy *this)

{
  dword dVar1;
  int iVar2;

  dVar1 = (*this->vtable->slot_2C)(this);
  if (((int)dVar1 < 0x32) || (dVar1 = (*this->vtable->slot_2C)(this), 0x73 < (int)dVar1)) {
    dVar1 = (*this->vtable->slot_2C)(this);
    if ((int)dVar1 < 1) {
      return 0;
    }
    dVar1 = (*this->vtable->slot_2C)(this);
    if (0x28 < (int)dVar1) {
      return 0;
    }
    dVar1 = (*this->vtable->slot_2C)(this);
    iVar2 = *(int *)(&DAT_007e061c + dVar1 * 4);
  }
  else {
    dVar1 = (*this->vtable->slot_2C)(this);
    iVar2 = *(int *)(&DAT_007e22f8 + dVar1 * 4);
  }
  if (iVar2 == 0) {
    return 0;
  }
  dVar1 = (*this->vtable->slot_C4)(this);
  return (int)((100 - dVar1) * iVar2) / 100;
}

