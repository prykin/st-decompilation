
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079B20C (store 005781D4)
   Evidence: final_vptr=0079B20C; returns_this=true; calls_before=1; field_writes_after=0;
   table_confidence=high */

undefined4 * __thiscall DebugSystemC::DebugSystemC(DebugSystemC *this,undefined4 param_1)

{
  SystemClassTy::SystemClassTy((SystemClassTy *)this,param_1,0x8000);
  this->vtable = &DebugSystemCVTable;
  return this;
}

