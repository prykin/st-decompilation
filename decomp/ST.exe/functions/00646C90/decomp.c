
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079D610 (store 00646C9B)
   Evidence: final_vptr=0079D610; returns_this=true; calls_before=1; field_writes_after=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; table_confidence=high */

undefined4 * __thiscall STVolcanoC::STVolcanoC(STVolcanoC *this)

{
  int iVar1;
  undefined4 *puVar2;

  STGroupBoatC::sub_006E60E0((STGroupBoatC *)this);
  this->vtable = &STVolcanoCVTable;
  if (this == (STVolcanoC *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)&this->field_0x1c;
  }
  for (iVar1 = 0x25; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  this->field_005D = 0xffffffff;
  this->field_007A = 0xffffffff;
  this->field_0086 = 0xffffffff;
  return &this->vtable;
}

