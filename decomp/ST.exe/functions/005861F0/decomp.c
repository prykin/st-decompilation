
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079BA54 (store 0058620C)
   Evidence: final_vptr=0079BA54; returns_this=true; calls_before=2; field_writes_after=2;
   table_confidence=high */

undefined4 * __thiscall STMBombC::STMBombC(STMBombC *this,undefined4 *param_1)

{
  thunk_FUN_004158e0(&this->vtable);
  thunk_FUN_004ab810(&this->field_01D5);
  this->field_01D5 = &PTR_LAB_0079bbb4;
  this->vtable = &STMBombCVTable;
  this->field_0231 = 1;
  this->field_026F = 0xff;
  return &this->vtable;
}

