
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079D084 (store 0062CF0B)
   Evidence: final_vptr=0079D084; returns_this=true; calls_before=1; field_writes_after=0;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; table_confidence=high */

undefined4 * __thiscall STManRub3C::STManRub3C(STManRub3C *this)

{
  int iVar1;
  undefined4 *puVar2;

  sub_006E60E0(this);
  this->vtable = &STManRub3CVTable;
  if (this != (STManRub3C *)0x0) {
    puVar2 = &this->field_001C;
    for (iVar1 = 0x26; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    return &this->vtable;
  }
  puVar2 = (undefined4 *)0x0;
  for (iVar1 = 0x26; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return (undefined4 *)0x0;
}

