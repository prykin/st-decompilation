
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 0054C740 -> 0054CB40 @ 0054C78B

   [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079AE38 (store 0054CB53)
   Evidence: final_vptr=0079AE38; returns_this=true; calls_before=1; field_writes_after=7;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; table_confidence=high */

undefined4 * __thiscall STPlaySystemC::STPlaySystemC(STPlaySystemC *this,AppClassTy *param_1)

{
  SystemWithNamedObjClassTy::SystemWithNamedObjClassTy((SystemWithNamedObjClassTy *)this,param_1,4);
  this->vtable = &STPlaySystemCVTable;
  this->field_0034 = 0;
  this->field_00E4 = 0;
  this->field_0028 = 0;
  this->field_002C = 0;
  this->field_0024 = (cMf32 *)0x0;
  this->field_00F4 = 0;
  this->field_00F0 = 1;
  return &this->vtable;
}

