
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079C584 (store 005F3453)
   Evidence: final_vptr=0079C584; returns_this=true; calls_before=1; field_writes_after=0;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; table_confidence=high

   [STPrototypeApplier] Propagated return.
   Evidence: 005F3440 returns STBHEShellC::STBHEShellC this @ 005F345F */

STBHEShellC * __thiscall STBHEShellC::STBHEShellC(STBHEShellC *this)

{
  int iVar1;
  undefined4 *puVar2;

  sub_006E60E0(this);
  this->vtable = &STBHEShellCVTable;
  puVar2 = (undefined4 *)&this->field_0x4d;
  for (iVar1 = 0x4a; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return this;
}

