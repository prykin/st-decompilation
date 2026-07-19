
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079D098 (store 0062ED37)
   Evidence: final_vptr=0079D098; returns_this=true; calls_before=1; field_writes_after=8;
   table_confidence=high */

undefined4 * __thiscall STRubbishC::STRubbishC(STRubbishC *this,undefined4 *param_1)

{
  thunk_FUN_004158e0(&this->vtable);
  this->field_01D5 = 0xffffffff;
  this->field_01D9 = 0xffffffff;
  this->field_01DD = 0xffffffff;
  this->vtable = &STRubbishCVTable;
  this->field_01E1 = 0;
  this->field_01E5 = 0;
  this->field_01E9 = 0;
  this->field_01ED = 0;
  this->field_01F1 = 0;
  this->field_01F5 = 0;
  this->field_01F9 = 0;
  this->field_01FA = 0;
  return &this->vtable;
}

