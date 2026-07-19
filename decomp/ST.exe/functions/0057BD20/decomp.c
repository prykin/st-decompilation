
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079B3C4 (store 0057BD3C)
   Evidence: final_vptr=0079B3C4; returns_this=true; calls_before=2; field_writes_after=1;
   table_confidence=high */

undefined4 * __thiscall STFishC::STFishC(STFishC *this,undefined4 *param_1)

{
  thunk_FUN_004158e0(&this->vtable);
  thunk_FUN_004ab810(&this->field_01D5);
  this->field_01D5 = &PTR_LAB_0079b524;
  this->vtable = &STFishCVTable;
  this->field_023B = 0;
  return &this->vtable;
}

