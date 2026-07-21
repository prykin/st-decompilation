
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 00790C04 (store 004C60AA)
   Evidence: final_vptr=00790C04; returns_this=true; calls_before=1; field_writes_after=6;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; table_confidence=high

   [STPrototypeApplier] Propagated return.
   Evidence: 004C60A0 returns TLOBldMark::TLOBldMark this @ 004C60CC */

TLOBldMark * __thiscall TLOBldMark::TLOBldMark(TLOBldMark *this)

{
  STGroupBoatC::sub_006E5FB0((STGroupBoatC *)this);
  *(TLOBldMarkVTable **)this = &TLOBldMarkVTable;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x18) = 1;
  *(undefined4 *)(this + 0x30) = 0xffffffff;
  *(undefined4 *)(this + 0x34) = 0xffffffff;
  *(undefined4 *)(this + 0x38) = 0xffffffff;
  return this;
}

