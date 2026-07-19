
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079C9B0 (store 00602419)
   Evidence: final_vptr=0079C9B0; returns_this=true; calls_before=2; field_writes_after=0;
   table_confidence=high */

undefined4 * __thiscall STDestC::STDestC(STDestC *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  thunk_FUN_004158e0(&this->vtable);
  thunk_FUN_004ab810(&this->field_01D5);
  this->field_01D5 = &PTR_LAB_0079cb10;
  this->vtable = &STDestCVTable;
  puVar2 = (undefined4 *)&this[1].field_0x58;
  for (iVar1 = 0x5f; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  return &this->vtable;
}

