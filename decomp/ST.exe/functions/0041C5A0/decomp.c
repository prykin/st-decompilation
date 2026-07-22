
/* [STMethodOwnerApplier] Structural method owner recovered as STColl3C.
   Evidence: this_call_owners=[STColl3C]; agreed_this_calls=1; incoming_this_accesses=21;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall STColl3C::sub_0041C5A0(STColl3C *this)

{
  undefined4 uVar1;

  if ((g_visibleClass_00802A88 != (VisibleClassTy *)0x0) && ((this->field_01D1 & 1) == 0)) {
    VisibleClassTy::sub_00559110
              (g_visibleClass_00802A88,(int)this->field_005B,(undefined *)(int)this->field_005D,
               (int)this->field_005F,this->field_0024,this->field_0101,this->field_0018,0xffffffff);
    if (this->field_0020 == 0x14) {
      SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00558C00::thunk_FUN_00559620
                ((AnonReceiver_00558C00 *)g_visibleClass_00802A88,(int)this->field_005B,
                 (int)this->field_005D,(char)this->field_005F,(undefined *)this->field_0024,
                 this->field_0105,this->field_0018,0xffffffff);
    }
    uVar1 = (*this->vtable[0xb].vfunc_00)();
    switch(uVar1) {
    case 5:
    case 0x11:
    case 0x21:
      (*this->vtable[0x26].vfunc_00)();
      break;
    case 0xb:
    case 0x23:
      SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00558C00::thunk_FUN_00559d60
                ((AnonReceiver_00558C00 *)g_visibleClass_00802A88,(int)this->field_005B,
                 (int)this->field_005D,(char)this->field_005F,this->field_0024,
                 (undefined *)this->field_010D,this->field_0018);
      return;
    }
  }
  return;
}

