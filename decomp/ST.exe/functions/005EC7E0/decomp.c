
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079C3EC (store 005EC809)
   Evidence: final_vptr=0079C3EC; returns_this=true; calls_before=2; field_writes_after=3;
   table_confidence=high

   [STPrototypeApplier] Propagated return.
   Evidence: 005EC7E0 returns STSprGameObjC::STSprGameObjC this @ 005EC82C */

STSprGameObjC * __thiscall STSprGameObjC::STSprGameObjC(STSprGameObjC *this)

{
  int iVar1;
  STSprGameObjC_field_0231State *pSVar2;

  STGameObjC::STGameObjC((STGameObjC *)this);
  thunk_FUN_004ab810((AnonShape_004AB810_8E5693D5 *)&this->field_01D5);
  this->field_01D5 = &VTable_0079C578;
  this->vtable = &STSprGameObjCVTable;
  pSVar2 = &this->field_0231;
  for (iVar1 = 0x3d; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pSVar2 = CASE_0;
    pSVar2 = pSVar2 + 1;
  }
  *(undefined1 *)pSVar2 = CASE_0;
  this->field_030E = 0xff;
  this->field_0308 = 0xffffffff;
  this->field_030C = 0xff;
  return this;
}

