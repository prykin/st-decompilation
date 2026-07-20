
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079BE80 (store 0058D77B)
   Evidence: final_vptr=0079BE80; returns_this=true; calls_before=2; field_writes_after=3;
   table_confidence=high
   
   [STPrototypeApplier] Propagated return.
   Evidence: 0058D750 returns STSharkC::STSharkC this @ 0058D79D */

STSharkC * __thiscall STSharkC::STSharkC(STSharkC *this)

{
  int iVar1;
  undefined4 *puVar2;
  
  thunk_FUN_004158e0((STGroupBoatC *)this);
  thunk_FUN_004ab810((AnonShape_004AB810_8E5693D5 *)&this->field_01D5);
  this->field_01D5 = &PTR_LAB_0079bfe0;
  this->vtable = &STSharkCVTable;
  this->field_0257 = CASE_0;
  puVar2 = (undefined4 *)&this->field_0x25b;
  for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  this->field_023D = 0;
  *(undefined4 *)&this->field_0x249 = 0xff;
  return this;
}

