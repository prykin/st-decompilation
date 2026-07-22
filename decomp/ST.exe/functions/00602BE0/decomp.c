
/* [STMethodOwnerApplier] Structural method owner recovered as STDestC.
   Evidence: this_call_owners=[STDestC]; agreed_this_calls=2; incoming_this_accesses=27;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall STDestC::sub_00602BE0(STDestC *this)

{
  VisibleClassTy *pVVar1;
  int iVar2;
  undefined4 *puVar3;
  int local_c;
  int local_8;

  if ((this->field_039B < 0) && (iVar2 = thunk_FUN_006029c0(), iVar2 == 0)) {
    return;
  }
  if (this->field_036E == 2) {
    if (this->field_037A == '\x01') {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      FUN_006e9350((void *)this->field_0211,this->field_01ED,
                   *(uint *)(DAT_00806724 + 0x30 + this->field_0397 * 4),
                   (int)*(short *)(DAT_00806724 + 0x2c));
    }
    if ((g_playSystem_00802A38->field_00E4 & 3) == 0) {
      this->field_0397 = this->field_0397 + (int)this->field_039F;
    }
    if (this->field_039F < '\x01') {
      if (this->field_0397 < 0) {
        FUN_006e9350((void *)this->field_0211,this->field_01ED,0,0);
        this->field_036E = 1;
      }
    }
    else if (((int)*(short *)(DAT_00806724 + 0x23) <= this->field_0397) &&
            (this->field_036E = 0, this->field_037A == '\x01')) {
      thunk_FUN_004ad430((int)&this->field_01D5);
      this->field_037A = 0;
    }
  }
  else if (this->field_036E != 4) {
    puVar3 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00602E90::sub_00602E90
                       ((AnonReceiver_00602E90 *)this);
    this->field_03AB = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      thunk_FUN_004ad310((STT3DSprC *)&this->field_01D5);
      this->field_039B = -1;
      this->field_036E = 4;
    }
  }
  pVVar1 = g_visibleClass_00802A88;
  if ((g_visibleClass_00802A88 != (VisibleClassTy *)0x0) && (-1 < this->field_039B)) {
    iVar2 = (int)this->field_0259;
    if (((DAT_0080874d != -1) &&
        ((((g_visibleClass_00802A88->field_00F8 != 0 &&
           (VisibleClassTy::sub_00558C00
                      (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,
                       (int)this->field_0255,(int)this->field_0257,&local_8,&local_c), -1 < iVar2))
          && (iVar2 < 5)) && ((-1 < local_8 && (local_8 < pVVar1->field_0030)))))) &&
       ((local_c = g_centeredOffsets5[iVar2] + local_c, -1 < local_c &&
        (((local_c < pVVar1->field_0034 && (pVVar1->field_004C != (byte *)0x0)) &&
         (pVVar1->field_004C[local_8 + local_c * pVVar1->field_0030] == 0)))))) {
      if (this->field_037A == '\0') {
        return;
      }
      thunk_FUN_004ad430((int)&this->field_01D5);
      this->field_037A = 0;
      return;
    }
    (*this->vtable->vfunc_D8)();
    if (this->field_037A == '\0') {
      thunk_FUN_004ad460(&this->field_01D5,0);
      this->field_037A = 1;
      return;
    }
  }
  return;
}

