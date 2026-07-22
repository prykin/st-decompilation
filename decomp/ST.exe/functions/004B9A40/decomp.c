
/* [STMethodOwnerApplier] Structural method owner recovered as TLOBaseTy.
   Evidence: this_call_owners=[TLOBaseTy]; agreed_this_calls=1; incoming_this_accesses=7;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall TLOBaseTy::sub_004B9A40(TLOBaseTy *this)

{
  TLOBaseTy_field_05ACState TVar1;
  dword dVar2;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_ECX;

  STColl3C::sub_0041C5A0((STColl3C *)this);
  TVar1 = this->field_05AC;
  if ((((TVar1 != 0x4d) || (this->field_04D0 == CASE_2)) &&
      ((TVar1 != 0x4c || (this->field_04D0 == CASE_2)))) &&
     ((TVar1 != 0x43 || (this->field_04D0 == CASE_2)))) {
    dVar2 = (*this->vtable->slot_2C)(this);
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    thunk_FUN_004b7710(CONCAT31((int3)((uint)extraout_ECX >> 8),*(undefined1 *)&this->field_0024),
                       dVar2);
  }
  TVar1 = this->field_05AC;
  if ((TVar1 == 0x34) || (TVar1 == 0x5b)) {
    thunk_FUN_004de0d0((int)this);
  }
  else {
    if (TVar1 == 0x48) {
      thunk_FUN_004df9f0((int)this);
      return 0;
    }
    if (TVar1 == 100) {
      thunk_FUN_004e4520((int)this);
      return 0;
    }
    if (TVar1 == 0x62) {
      thunk_FUN_004e2970((int)this);
      return 0;
    }
    if (TVar1 == 0x6e) {
      thunk_FUN_004dd350((int)this);
      return 0;
    }
    if (TVar1 == 0x4d) {
      thunk_FUN_004deff0((int)this);
      return 0;
    }
    if (TVar1 == 0x43) {
      thunk_FUN_004df1a0((int)this);
      return 0;
    }
    if (TVar1 == 0x73) {
      thunk_FUN_004ecb60((int)this);
      return 0;
    }
    if (TVar1 == 0x3a) {
      thunk_FUN_004d9700((int)this);
      return 0;
    }
    if (TVar1 == 0x65) {
      thunk_FUN_004e4990((int)this);
      return 0;
    }
    if ((TVar1 == CASE_3B) || (TVar1 == CASE_60)) {
      thunk_FUN_004dff30((int)this);
      return 0;
    }
  }
  return 0;
}

