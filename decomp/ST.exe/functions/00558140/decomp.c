
/* [STMethodOwnerApplier] Structural method owner recovered as VisibleClassTy.
   Evidence: this_call_owners=[VisibleClassTy]; agreed_this_calls=2; incoming_this_accesses=13;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate */

void __thiscall VisibleClassTy::sub_00558140(VisibleClassTy *this)

{
  int iVar1;
  void **ppvVar2;

  if (this->field_0038 != (void *)0x0) {
    FreeAndNull(&this->field_0038);
  }
  if (this->field_004C != (byte *)0x0) {
    FreeAndNull(&this->field_004C);
  }
  if (this->field_0050 != (ushort *)0x0) {
    FreeAndNull(&this->field_0050);
  }
  ppvVar2 = (void **)&this->field_0054;
  iVar1 = 8;
  do {
    if (*ppvVar2 != (void *)0x0) {
      FreeAndNull(ppvVar2);
    }
    ppvVar2 = ppvVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  ppvVar2 = (void **)&this->field_0074;
  iVar1 = 8;
  do {
    if (*ppvVar2 != (void *)0x0) {
      FreeAndNull(ppvVar2);
    }
    ppvVar2 = ppvVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  ppvVar2 = (void **)&this->field_0094;
  iVar1 = 8;
  do {
    if (*ppvVar2 != (void *)0x0) {
      FreeAndNull(ppvVar2);
    }
    ppvVar2 = ppvVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  ppvVar2 = (void **)&this->field_00B4;
  iVar1 = 8;
  do {
    if (*ppvVar2 != (void *)0x0) {
      FreeAndNull(ppvVar2);
    }
    ppvVar2 = ppvVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  ppvVar2 = (void **)&this->field_00D4;
  iVar1 = 8;
  do {
    if (*ppvVar2 != (void *)0x0) {
      FreeAndNull(ppvVar2);
    }
    ppvVar2 = ppvVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  ppvVar2 = (void **)&this->field_003C;
  iVar1 = 4;
  do {
    if (*ppvVar2 != (void *)0x0) {
      FreeAndNull(ppvVar2);
    }
    ppvVar2 = ppvVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  if (this->field_00F4 != (DArrayTy *)0x0) {
    DArrayDestroy(this->field_00F4);
    this->field_00F4 = (DArrayTy *)0x0;
  }
  if (this->field_0110 != (DArrayTy *)0x0) {
    DArrayDestroy(this->field_0110);
    this->field_0110 = (DArrayTy *)0x0;
  }
  return;
}

