
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079ADB8 (store 00542453)
   Evidence: final_vptr=0079ADB8; returns_this=true; calls_before=1; field_writes_after=3;
   table_confidence=high */

undefined4 * __thiscall InterSystemC::InterSystemC(InterSystemC *this,undefined4 param_1)

{
  SystemClassTy::SystemClassTy((SystemClassTy *)this,param_1,5);
  this->vtable = &InterSystemCVTable;
  this->field_0030 = 0;
  this->field_002C = 0;
  this->field_0028 = 0;
  return &this->vtable;
}

