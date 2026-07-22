
/* [STMethodOwnerApplier] Structural method owner recovered as STColl3C.
   Evidence: this_call_owners=[STColl3C]; agreed_this_calls=1; incoming_this_accesses=7;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall STColl3C::sub_005F9450(STColl3C *this)

{
  if ((g_manRub3_008117A4 != (STManRub3C *)0x0) && (this->field_029E == '\x01')) {
    thunk_FUN_0062d120(g_manRub3_008117A4,this->field_0235,this->field_027D,this->field_0281,
                       this->field_0285,this->field_0289,0xffffffff,0);
  }
  this->field_029E = 0;
  return;
}

