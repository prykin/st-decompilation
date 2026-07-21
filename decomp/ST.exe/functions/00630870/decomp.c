
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079D19C (store 0063087B)
   Evidence: final_vptr=0079D19C; returns_this=true; calls_before=1; field_writes_after=1;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; table_confidence=high */

undefined4 * __thiscall STManRuinC::STManRuinC(STManRuinC *this)

{
  int iVar1;
  undefined4 *puVar2;
  
  STGroupBoatC::sub_006E60E0((STGroupBoatC *)this);
  this->vtable = &STManRuinCVTable;
  if (this == (STManRuinC *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = &this->field_001C;
  }
  for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  *(undefined4 *)&this->field_0x61 = 0xffffffff;
  return &this->vtable;
}

