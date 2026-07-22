
/* [STMethodOwnerApplier] Structural method owner recovered as STMineSetC.
   Evidence: this_call_owners=[STMineSetC]; agreed_this_calls=1; incoming_this_accesses=17;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall STMineSetC::sub_00622880(STMineSetC *this)

{
  byte bVar1;

  thunk_FUN_004ad310((STT3DSprC *)&this->field_01D5);
  bVar1 = this->field_02AD;
  if (bVar1 < 3) {
    if (g_visibleClass_00802A88 != (VisibleClassTy *)0x0) {
      VisibleClassTy::sub_00559110
                (g_visibleClass_00802A88,(int)this->field_0047,(undefined *)(int)this->field_0049,
                 (int)this->field_004B,this->field_0024,*(int *)(&DAT_007d02b4 + (uint)bVar1 * 4),
                 this->field_0018,0xffffffff);
    }
  }
  else if ((bVar1 == 3) && (g_visibleClass_00802A88 != (VisibleClassTy *)0x0)) {
    VisibleClassTy::sub_00559110
              (g_visibleClass_00802A88,(int)this->field_0047,(undefined *)(int)this->field_0049,
               (int)this->field_004B,this->field_0024,DAT_007d02c0,this->field_0018,0xffffffff);
    if ((-1 < this->field_005B) && ((-1 < this->field_005D && (-1 < this->field_005F)))) {
      thunk_FUN_0041d2b0((AnonShape_0041D2B0_CE8C6BD3 *)this);
    }
  }
  if ((DArrayTy *)this->field_034A != (DArrayTy *)0x0) {
    DArrayDestroy((DArrayTy *)this->field_034A);
    this->field_034A = 0;
  }
  return;
}

