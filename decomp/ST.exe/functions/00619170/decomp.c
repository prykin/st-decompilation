
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079CED0 (store 00619178)
   Evidence: final_vptr=0079CED0; returns_this=true; calls_before=1; field_writes_after=1;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; table_confidence=high

   [STPrototypeApplier] Propagated return.
   Evidence: 00619170 returns STJumpMineC::STJumpMineC this @ 0061918B */

STJumpMineC * __thiscall STJumpMineC::STJumpMineC(STJumpMineC *this)

{
  STGroupBoatC::sub_006E60E0((STGroupBoatC *)this);
  this->vtable = &STJumpMineCVTable;
  this->field_0097 = 0xffffffff;
  return this;
}

