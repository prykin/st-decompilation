
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079BD1C (store 0058BA59)
   Evidence: final_vptr=0079BD1C; returns_this=true; calls_before=2; field_writes_after=5;
   table_confidence=high */

undefined4 * __thiscall STSatC::STSatC(STSatC *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  thunk_FUN_004158e0(&this->vtable);
  thunk_FUN_004ab810(&this->field_01D5);
  this->field_01D5 = &PTR_LAB_0079be7c;
  this->vtable = &STSatCVTable;
  this->field_0231 = 1;
  this->field_0239 = 0;
  this->field_0245 = 0;
  this->field_023D = 0;
  this->field_0235 = 0;
  puVar2 = (undefined4 *)&this[1].field_0x2c;
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  return &this->vtable;
}

