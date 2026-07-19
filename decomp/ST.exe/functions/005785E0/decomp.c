
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079B238 (store 005785FC)
   Evidence: final_vptr=0079B238; returns_this=true; calls_before=2; field_writes_after=1;
   table_confidence=high */

undefined4 * __thiscall STCrabC::STCrabC(STCrabC *this,undefined4 *param_1)

{
  thunk_FUN_004158e0(&this->vtable);
  thunk_FUN_004ab810(&this->field_01D5);
  this->field_01D5 = &PTR_LAB_0079b398;
  this->vtable = &STCrabCVTable;
  this->field_0239 = 0;
  return &this->vtable;
}

