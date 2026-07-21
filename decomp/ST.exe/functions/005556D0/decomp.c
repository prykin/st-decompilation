
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079AEC0 (store 005556D9)
   Evidence: final_vptr=0079AEC0; returns_this=true; calls_before=1; field_writes_after=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; table_confidence=high

   [STPrototypeApplier] Propagated return.
   Evidence: 005556D0 returns TraksClassTy::TraksClassTy this @ 00555706 */

TraksClassTy * __thiscall TraksClassTy::TraksClassTy(TraksClassTy *this)

{
  int iVar1;
  undefined4 *puVar2;

  STGroupBoatC::sub_006E60E0((STGroupBoatC *)this);
  this->vtable = &TraksClassTyVTable;
  g_traksClass_00802A7C = this;
  this->field_0024 = (DArrayTy *)0x0;
  this->field_0828 = 0xffffffff;
  puVar2 = (undefined4 *)&this->field_0x28;
  for (iVar1 = 0x200; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return this;
}

