
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079B3C4 (store 0057BD3C)
   Evidence: final_vptr=0079B3C4; returns_this=true; calls_before=2; field_writes_after=1;
   table_confidence=high

   [STPrototypeApplier] Propagated return.
   Evidence: 0057BD20 returns STFishC::STFishC this @ 0057BD50 */

STFishC * __thiscall STFishC::STFishC(STFishC *this)

{
  STGameObjC::STGameObjC((STGameObjC *)this);
  thunk_FUN_004ab810((AnonShape_004AB810_8E5693D5 *)&this->field_01D5);
  this->field_01D5 = &VTable_0079B524;
  this->vtable = &STFishCVTable;
  this->field_023B = 0;
  return this;
}

