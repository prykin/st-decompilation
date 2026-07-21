
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079BBB8 (store 005899B9)
   Evidence: final_vptr=0079BBB8; returns_this=true; calls_before=2; field_writes_after=1;
   table_confidence=high

   [STPrototypeApplier] Propagated return.
   Evidence: 00589990 returns STOctopusC::STOctopusC this @ 005899CF */

STOctopusC * __thiscall STOctopusC::STOctopusC(STOctopusC *this)

{
  int iVar1;
  undefined4 *puVar2;

  STGameObjC::STGameObjC((STGameObjC *)this);
  thunk_FUN_004ab810((AnonShape_004AB810_8E5693D5 *)&this->field_01D5);
  this->field_01D5 = &VTable_0079BD18;
  this->vtable = &STOctopusCVTable;
  this->field_0249 = 0;
  puVar2 = (undefined4 *)&this->field_0x285;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return this;
}

