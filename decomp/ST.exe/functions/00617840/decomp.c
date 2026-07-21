
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079CEBC (store 00617853)
   Evidence: final_vptr=0079CEBC; returns_this=true; calls_before=1; field_writes_after=0;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; table_confidence=high

   [STPrototypeApplier] Propagated return.
   Evidence: 00617840 returns JumpManagC::JumpManagC this @ 00617861 */

JumpManagC * __thiscall JumpManagC::JumpManagC(JumpManagC *this)

{
  int iVar1;
  undefined4 *puVar2;

  STGroupBoatC::sub_006E60E0((STGroupBoatC *)this);
  this->vtable = &JumpManagCVTable;
  puVar2 = (undefined4 *)&this->field_0x1c;
  for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  return this;
}

