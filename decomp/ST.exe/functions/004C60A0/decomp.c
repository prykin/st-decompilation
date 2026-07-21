
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 00790C04 (store 004C60AA)
   Evidence: final_vptr=00790C04; returns_this=true; calls_before=1; field_writes_after=6;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; table_confidence=high

   [STPrototypeApplier] Propagated return.
   Evidence: 004C60A0 returns TLOBldMark::TLOBldMark this @ 004C60CC */

TLOBldMark * __thiscall TLOBldMark::TLOBldMark(TLOBldMark *this)

{
  sub_006E5FB0(this);
  this->vtable = &TLOBldMarkVTable;
  this->field_002C = 0;
  this->field_0024 = 0;
  this->field_0018 = 1;
  this->field_0030 = 0xffffffff;
  this->field_0034 = 0xffffffff;
  this->field_0038 = 0xffffffff;
  return this;
}

