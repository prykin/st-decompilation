
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079B1B4 (store 00576AB1)
   Evidence: final_vptr=0079B1B4; returns_this=true; calls_before=1; field_writes_after=0;
   table_confidence=high */

undefined4 * __thiscall BaseSystemC::BaseSystemC(BaseSystemC *this,undefined4 param_1)

{
  SystemClassTy::SystemClassTy((SystemClassTy *)this,param_1,0);
  this->vtable = &BaseSystemCVTable;
  return this;
}

