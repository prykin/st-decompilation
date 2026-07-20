
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079D098 (store 0062ED37)
   Evidence: final_vptr=0079D098; returns_this=true; calls_before=1; field_writes_after=8;
   table_confidence=high
   
   [STPrototypeApplier] Propagated return.
   Evidence: 0062ED10 returns STRubbishC::STRubbishC this @ 0062ED60 */

STRubbishC * __thiscall STRubbishC::STRubbishC(STRubbishC *this)

{
  thunk_FUN_004158e0(&this->vtable);
  *(undefined4 *)&this->field_0x1d5 = 0xffffffff;
  *(undefined4 *)&this->field_0x1d9 = 0xffffffff;
  *(undefined4 *)&this->field_0x1dd = 0xffffffff;
  this->vtable = &STRubbishCVTable;
  this->field_01E1 = 0;
  this->field_01E5 = 0;
  this->field_01E9 = 0;
  this->field_01ED = 0;
  this->field_01F1 = 0;
  this->field_01F5 = 0;
  this->field_01F9 = 0;
  this->field_01FA = 0;
  return this;
}

