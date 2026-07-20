
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079B8F0 (store 00584999)
   Evidence: final_vptr=0079B8F0; returns_this=true; calls_before=2; field_writes_after=12;
   table_confidence=high
   
   [STPrototypeApplier] Propagated return.
   Evidence: 00584970 returns STLBombC::STLBombC this @ 005849F3 */

STLBombC * __thiscall STLBombC::STLBombC(STLBombC *this)

{
  int iVar1;
  STLBombC *pSVar2;
  
  thunk_FUN_004158e0(&this->vtable);
  thunk_FUN_004ab810(&this->field_01D5);
  this->field_01D5 = &PTR_LAB_0079ba50;
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
  pSVar2 = this + 1;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    pSVar2->vtable = (STLBombCVTable *)0x0;
    pSVar2 = (STLBombC *)&pSVar2->field_0x4;
  }
  *(undefined2 *)&pSVar2->vtable = 0;
  return this;
}

