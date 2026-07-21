
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079C580 (store 005F1363)
   Evidence: final_vptr=0079C580; returns_this=true; calls_before=1; field_writes_after=0;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; table_confidence=high */

undefined4 * __thiscall STManBasisC::STManBasisC(STManBasisC *this)

{
  int iVar1;
  undefined4 *puVar2;
  
  STGroupBoatC::sub_006E60E0((STGroupBoatC *)this);
  this->vtable = &STManBasisCVTable;
  puVar2 = &this->field_0020;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return &this->vtable;
}

