
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079B68C (store 005810E6)
   Evidence: final_vptr=0079B68C; returns_this=true; calls_before=1; field_writes_after=4;
   table_confidence=high */

undefined4 * __thiscall STJellyManC::STJellyManC(STJellyManC *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  thunk_FUN_004158e0(&this->vtable);
  this->vtable = &STJellyManCVTable;
  puVar2 = (undefined4 *)&this->field_0x1d9;
  for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  this->field_01D5 = 0;
  this->field_0207 = 0;
  this->field_020B = 0;
  this->field_020F = 0;
  return &this->vtable;
}

