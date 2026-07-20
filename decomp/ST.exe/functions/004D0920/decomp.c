
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 00797560 (store 004D093C)
   Evidence: final_vptr=00797560; returns_this=true; calls_before=2; field_writes_after=1;
   table_confidence=high
   
   [STPrototypeApplier] Propagated return.
   Evidence: 004D0920 returns TLOFakeTy::TLOFakeTy this @ 004D0950 */

TLOFakeTy * __thiscall TLOFakeTy::TLOFakeTy(TLOFakeTy *this)

{
  thunk_FUN_004158e0((STGroupBoatC *)this);
  thunk_FUN_004ab810((AnonShape_004AB810_8E5693D5 *)&this->field_01D5);
  this->field_01D5 = &PTR_LAB_007976c0;
  this->vtable = &TLOFakeTyVTable;
  this->field_024D = 0;
  return this;
}

