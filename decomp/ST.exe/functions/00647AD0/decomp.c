
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079D658 (store 00647AE5)
   Evidence: final_vptr=0079D658; returns_this=true; calls_before=2; field_writes_after=1;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; table_confidence=high */

undefined4 * __thiscall AiBossClassTy::AiBossClassTy(AiBossClassTy *this)

{
  int iVar1;
  undefined4 *puVar2;
  
  STGroupBoatC::sub_006E60E0((STGroupBoatC *)this);
  thunk_FUN_0064cc90(&this->vtable_at_1c);
  this->vtable = &AiBossClassTyVTable;
  this->vtable_at_1c = &AiBossClassTyVTable_at_1C;
  if (this != (AiBossClassTy *)0x0) {
    puVar2 = (undefined4 *)&this->field_0x5d3;
    for (iVar1 = 0x21; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    *(undefined1 *)puVar2 = 0;
    return &this->vtable;
  }
  puVar2 = (undefined4 *)0x0;
  for (iVar1 = 0x21; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  return (undefined4 *)0x0;
}

