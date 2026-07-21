
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079E16C (store 006E34CC)
   Evidence: final_vptr=0079E16C; returns_this=true; calls_before=0; field_writes_after=12;
   table_confidence=high */

AppClassTy * __thiscall
AppClassTy::AppClassTy(AppClassTy *this,undefined4 param_1,undefined4 param_2)

{
  this->vtable = &AppClassTyVTable;
  DAT_00856d6c = param_1;
  this->field_0008 = param_2;
  this->field_001C = 0;
  this->field_0020 = 0;
  this->field_0014 = 0;
  this->field_0010 = 0;
  this->field_0004 = 1;
  this->field_000C = 0;
  this->field_0030 = 0;
  this->field_0028 = 0;
  this->field_002C = 0;
  this->field_0034 = 0x14;
  this->field_0024 = 1;
  return this;
}

