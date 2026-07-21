
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079B8F0 (store 00584999)
   Evidence: final_vptr=0079B8F0; returns_this=true; calls_before=2; field_writes_after=12;
   table_confidence=high

   [STPrototypeApplier] Propagated return.
   Evidence: 00584970 returns STLBombC::STLBombC this @ 005849F3 */

STLBombC * __thiscall STLBombC::STLBombC(STLBombC *this)

{
  int iVar1;
  undefined4 *puVar2;

  STGameObjC::STGameObjC((STGameObjC *)this);
  thunk_FUN_004ab810((AnonShape_004AB810_8E5693D5 *)&this->field_01D5);
  this->field_01D5 = &VTable_0079BA50;
  this->vtable = &STLBombCVTable;
  this->field_0231 = 2;
  this->field_0235 = 0;
  this->field_0239 = 0;
  this->field_023D = 0;
  this->field_0241 = 0;
  this->field_0245 = 0;
  this->field_0249 = 0;
  this->field_024D = 0;
  this->field_0251 = 0;
  this->field_0255 = 0;
  this->field_0256 = 0;
  this->field_0257 = 0;
  puVar2 = (undefined4 *)&this->field_0x258;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  return this;
}

