
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 00790710 (store 00495928)
   Evidence: final_vptr=00790710; returns_this=true; calls_before=1; field_writes_after=0;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; table_confidence=high

   [STPrototypeApplier] Propagated return.
   Evidence: 00495920 returns DumpClassC::DumpClassC this @ 00495931 */

DumpClassC * __thiscall DumpClassC::DumpClassC(DumpClassC *this)

{
  sub_006E5FB0(this);
  this->vtable = &DumpClassCVTable;
  return this;
}

