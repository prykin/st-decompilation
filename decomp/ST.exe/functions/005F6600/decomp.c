
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079C5AC (store 005F6618)
   Evidence: final_vptr=0079C5AC; returns_this=true; calls_before=2; field_writes_after=2;
   table_confidence=high
   
   [STPrototypeApplier] Propagated return.
   Evidence: 005F6600 returns STColl3C::STColl3C this @ 005F6649 */

STColl3C * __thiscall STColl3C::STColl3C(STColl3C *this)

{
  int iVar1;
  undefined4 *puVar2;
  
  thunk_FUN_004158e0((STGroupBoatC *)this);
  thunk_FUN_004ab810((AnonShape_004AB810_8E5693D5 *)&this->field_01D5);
  this->vtable = &STColl3CVTable;
  this->field_01D5 = &PTR_LAB_0079c5a8;
  if (this == (STColl3C *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)&this->field_0x231;
  }
  for (iVar1 = 0x30; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  this->field_02B7 = 0xffffffff;
  return this;
}

