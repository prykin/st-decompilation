
/* [STMethodOwnerApplier] Structural method owner recovered as TLOEmbryoTy.
   Evidence: this_call_owners=[TLOEmbryoTy]; agreed_this_calls=1; incoming_this_accesses=27;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall TLOEmbryoTy::sub_0041C3F0(TLOEmbryoTy *this,undefined *param_1)

{
  int iVar1;
  undefined4 uVar2;

  if (((-1 < (int)param_1) &&
      (this->field_0101 = param_1, g_visibleClass_00802A88 != (VisibleClassTy *)0x0)) &&
     ((this->field_01D1 & 1) == 0)) {
    VisibleClassTy::sub_00558DC0
              (g_visibleClass_00802A88,(int)this->field_005B,(int)this->field_005D,
               (undefined *)(int)this->field_005F,(int *)this->field_0024,(uint)param_1,
               (int *)this->field_0018,0xffffffff);
    if (this->field_0020 == 0x14) {
      iVar1 = thunk_FUN_004e60d0(this->field_0024,10);
      if (iVar1 < 1) {
        this->field_0105 = this->field_0101;
      }
      else {
        this->field_0105 = (int)this->field_0101 << 1;
      }
      VisibleClassTy::sub_005594A0
                (g_visibleClass_00802A88,(int)this->field_005B,(int)this->field_005D,
                 (char)this->field_005F,(undefined *)this->field_0024,this->field_0105,
                 this->field_0018,0xffffffff);
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    uVar2 = (*(code *)this->field_0000->field_002C)();
    switch(uVar2) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    case 5:
    case 0x11:
    case 0x21:
      (**(code **)(this->field_0000 + 1))();
      break;
    case 0xb:
    case 0x23:
      this->field_010D = this->field_0101;
      VisibleClassTy::SetZoneAst
                (g_visibleClass_00802A88,(int)this->field_005B,(int)this->field_005D,
                 (char)this->field_005F,this->field_0024,(int)this->field_0101,this->field_0018,
                 0xffffffff);
      return;
    }
  }
  return;
}

