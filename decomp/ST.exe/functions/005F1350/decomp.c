
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079C580 (store 005F1363)
   Evidence: final_vptr=0079C580; returns_this=true; calls_before=1; field_writes_after=0;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; table_confidence=high

   [STPrototypeApplier] Propagated return.
   Evidence: 005F1350 returns STManBasisC::STManBasisC this @ 005F136F */

STManBasisC * __thiscall STManBasisC::STManBasisC(STManBasisC *this)

{
  int iVar1;
  ushort **ppuVar2;

  sub_006E60E0(this);
  this->vtable = &STManBasisCVTable;
  ppuVar2 = &this->field_0020;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *ppuVar2 = (ushort *)0x0;
    ppuVar2 = ppuVar2 + 1;
  }
  return this;
}

