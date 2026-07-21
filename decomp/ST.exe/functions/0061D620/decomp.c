
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079CED4 (store 0061D628)
   Evidence: final_vptr=0079CED4; returns_this=true; calls_before=1; field_writes_after=0;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; table_confidence=high */

undefined4 * __thiscall STLightC::STLightC(STLightC *this)

{
  STGroupBoatC::sub_006E60E0((STGroupBoatC *)this);
  this->vtable = &STLightCVTable;
  return &this->vtable;
}

