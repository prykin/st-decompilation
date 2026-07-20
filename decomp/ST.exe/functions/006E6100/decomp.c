
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079E1B4 (store 006E6115)
   Evidence: final_vptr=0079E1B4; returns_this=true; calls_before=1; field_writes_after=1;
   table_confidence=high
   
   [STPrototypeApplier] Propagated return.
   Evidence: 006E6100 returns SystemWithNamedObjClassTy::SystemWithNamedObjClassTy this @ 006E6126
    */

SystemWithNamedObjClassTy * __thiscall
SystemWithNamedObjClassTy::SystemWithNamedObjClassTy
          (SystemWithNamedObjClassTy *this,undefined4 param_1,undefined4 param_2)

{
  SystemClassTy::SystemClassTy((SystemClassTy *)this,param_1,param_2);
  this->vtable = &SystemWithNamedObjClassTyVTable;
  this->field_0020 = 1;
  return this;
}

