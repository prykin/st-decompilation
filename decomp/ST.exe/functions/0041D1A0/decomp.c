
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STMethodOwnerApplier] Structural method owner recovered as STMineSetC.
   Evidence: this_call_owners=[STMineSetC]; agreed_this_calls=1; incoming_this_accesses=13;
   incoming_edx_uses=0; incoming_stack_parameter_uses=5; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall STMineSetC::sub_0041D1A0(STMineSetC *this,int param_1)

{
  int iVar1;

  this->field_010D = param_1;
  if (g_visibleClass_00802A88 != (VisibleClassTy *)0x0) {
    VisibleClassTy::SetZoneAst
              (g_visibleClass_00802A88,(int)this->field_005B,(int)this->field_005D,
               (char)this->field_005F,this->field_0024,param_1,this->field_0018,0xffffffff);
  }
  iVar1 = (*this->vtable->vfunc_08)();
  if ((iVar1 == 1) && (this->field_0024 == (uint)DAT_0080874d)) {
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    FUN_006e6710(PTR_00807598,(float)(int)this->field_0041 * _DAT_007904f8 * _DAT_007904f0,
                 (float)(int)this->field_0043 * _DAT_007904f8 * _DAT_007904f0,
                 (uint)((float)this->field_0109 * _DAT_007904f8 + _DAT_007904f4),0x28,
                 CONCAT22(CONCAT11(2,(char)(this->field_0018 >> 0x10)),(short)this->field_0018));
  }
  return;
}

