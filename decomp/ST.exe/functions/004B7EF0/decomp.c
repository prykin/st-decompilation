
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 00790AA0 (store 004B7F47)
   Evidence: final_vptr=00790AA0; returns_this=true; calls_before=2; field_writes_after=3;
   table_confidence=high */

undefined4 * __thiscall TLOBaseTy::TLOBaseTy(TLOBaseTy *this,undefined4 *param_1)

{
  thunk_FUN_004158e0(&this->vtable);
  thunk_FUN_004ab810(&this->field_01D5);
  this->field_01D5 = &PTR_LAB_00790c00;
  this->field_05EF = 0;
  this->field_05F3 = 0;
  this->field_05F7 = 0;
  this->field_05FF = 0;
  this->field_0603 = 0;
  this->field_0607 = 0;
  this->field_0251 = 0;
  this->field_061B = 0;
  this->field_061F = 0;
  this->vtable = &TLOBaseTyVTable;
  this->field_0245 = 0xffffffff;
  this->field_0249 = 0xffffffff;
  this->field_024D = 0xffffffff;
  return &this->vtable;
}

