
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 006DBCF0 -> 006DBAB0 @ 006DBCF3; ST3DSMAPContext::sub_006DBCF0 this

   [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=1; incoming_this_accesses=38;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=1;
   incoming_ecx_receiver_callers=1; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall ST3DSMAPContext::sub_006DBAB0(ST3DSMAPContext *this)

{
  uint uVar1;
  int iVar2;

  do {
    iVar2 = 0;
    if (*(int *)this != 0) {
      *(undefined4 *)(*(int *)this + 0x22c) = 0;
    }
    FUN_006b9890((int *)&this->field_0x44a);
    FUN_006b9890((int *)&this->field_0x44e);
    FUN_006b9890((int *)&this->field_0x452);
    FreeAndNull((void **)&this->field_0x420);
    *(undefined4 *)&this->field_0x428 = 0;
    *(undefined4 *)&this->field_0x42c = 0;
    *(undefined4 *)&this->field_0x430 = 0;
    *(undefined4 *)&this->field_0x434 = 0;
    *(undefined4 *)&this[1].field_0x36 = 0;
    *(undefined4 *)&this[1].field_0x3a = 0;
    *(undefined4 *)&this[1].field_0x3e = 0;
    *(undefined4 *)&this[1].field_0x42 = 0;
    *(undefined4 *)&this[1].field_0x4e = 0;
    *(undefined4 *)&this->field_0x43e = 0;
    *(undefined4 *)((int)&this[1].field_0058 + 2) = 0;
    *(undefined4 *)&this[1].field_0x5e = 0;
    *(undefined4 *)&this[1].field_0x6a = 0;
    *(undefined4 *)&this[1].field_0x6e = 0;
    FreeAndNull((void **)&this->field_0x388);
    if (*(int *)&this->field_0x31c != 0) {
      uVar1 = 0;
      if (0 < *(int *)&this->field_0x310) {
        do {
          if ((*(uint *)(iVar2 + *(int *)&this->field_0x31c) & 0x8000) != 0) {
            Library::Ourlib::ST3DSMAP::SprClose(this,uVar1);
          }
          FUN_006a5e90(*(short **)(iVar2 + 0xec + *(int *)&this->field_0x31c));
          uVar1 = uVar1 + 1;
          iVar2 = iVar2 + 0x114;
        } while ((int)uVar1 < *(int *)&this->field_0x310);
      }
      FreeAndNull((void **)&this->field_0x31c);
      FreeAndNull((void **)&this->field_0x330);
    }
    *(undefined4 *)&this->field_0x2e0 = 0;
    *(int *)this = 0;
    *(undefined4 *)&this->field_0x310 = 0;
    *(undefined4 *)&this->field_0x318 = 0;
    *(undefined4 *)&this->field_0x328 = 0;
    *(undefined4 *)&this->field_0x32c = 0;
    *(undefined4 *)&this->field_0x2dc = 0;
    *(undefined4 *)&this->field_0x2a8 = 0;
    FreeAndNull((void **)&this->field_0x8);
    FreeAndNull((void **)&this->field_0x10);
    FreeAndNull((void **)&this->field_0x18);
    FreeAndNull((void **)&this->field_0x158);
    FreeAndNull((void **)&this->field_0x154);
    FreeAndNull((void **)&this->field_001C);
    FreeAndNull((void **)&this->field_0x350);
    FreeAndNull((void **)&this->field_0x354);
    FreeAndNull((void **)&this->field_0x2b0);
    FUN_006b9890((int *)&this->field_0x294);
    FUN_006e6620((int)this);
    *(undefined4 *)&this->field_0x14 = 0;
    *(undefined4 *)&this->field_0x4 = 0;
    *(undefined4 *)&this->field_0x280 = 0;
    this->field_0290 = 0;
    *(undefined4 *)&this->field_0x29c = 0;
    *(undefined4 *)&this->field_0x140 = 0;
    *(undefined4 *)&this->field_0x28c = 0;
    *(undefined4 *)&this->field_0x13c = 0;
    *(undefined4 *)&this->field_0x124 = 0;
    this = *(ST3DSMAPContext **)&this->field_0x358;
  } while (this != nullptr);
  return;
}

