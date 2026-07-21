
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00577280 -> 00576DD0 @ 005772CA

   [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079B1E0 (store 00576DE1)
   Evidence: final_vptr=0079B1E0; returns_this=true; calls_before=1; field_writes_after=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; table_confidence=high

   [STPrototypeApplier] Propagated return.
   Evidence: 00576DD0 returns GameSystemC::GameSystemC this @ 00576DFC */

GameSystemC * __thiscall GameSystemC::GameSystemC(GameSystemC *this,AppClassTy *param_1)

{
  SystemClassTy::SystemClassTy((SystemClassTy *)this,param_1,1);
  this->vtable = &GameSystemCVTable;
  this->field_0430 = 1;
  this->field_0431 = 0;
  return this;
}

